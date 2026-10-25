// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140fe2980 FUN_140fe2980 body=163 status=ok
// SIG undefined FUN_140fe2980(void)

void FUN_140fe2980(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x1150);
  if (0 < iVar3) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1148) + lVar6 * 8) + 0x2a8);
      if ((lVar1 != 0) && (iVar4 = *(int *)(lVar1 + 0x40), 0 < iVar4)) {
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x38) + lVar5 * 8) + 0x30);
          if (lVar2 != 0) {
            iVar3 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
              FUN_140cba038(param_2,iVar3);
            }
            *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar2;
            iVar4 = *(int *)(lVar1 + 0x40);
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < iVar4);
        iVar3 = *(int *)(param_1 + 0x1150);
      }
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < iVar3);
  }
  return;
}



// FUNCTION 140fe2a24 FUN_140fe2a24 body=76 status=ok
// SIG undefined FUN_140fe2a24(void)

undefined8 * FUN_140fe2a24(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1a84e0;
  FUN_140fe2a70(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140fe2a70 FUN_140fe2a70 body=73 status=ok
// SIG undefined FUN_140fe2a70(void)

void FUN_140fe2a70(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140fe2aba FUN_140fe2aba body=124 status=ok
// SIG undefined FUN_140fe2aba(void)

void FUN_140fe2aba(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fe2b48();
  FUN_1411469f2(param_1 + 0x950,param_2);
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x65) & 0x18) == 0x10)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  local_1c = 0;
  FUN_140f30e64(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe2b48 FUN_140fe2b48 body=136 status=ok
// SIG undefined FUN_140fe2b48(void)

void FUN_140fe2b48(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_140c88838();
  if ((*(longlong *)(param_1 + 0x930) != 0) && (param_2 != (longlong *)0x0)) {
    uVar1 = FUN_14090a268();
    lVar2 = (**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_14090a268();
      lVar3 = FUN_144718840(lVar2,uVar1);
      if (lVar3 != 0 && lVar2 != lVar3) {
        uVar1 = FUN_14892a4dc(lVar3);
        FUN_14892b532(uVar1,*(undefined8 *)(param_1 + 0x930),DAT_14caa8578);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140fe2bd0 FUN_140fe2bd0 body=333 status=ok
// SIG undefined FUN_140fe2bd0(void)

void FUN_140fe2bd0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x988) != 0)) {
    uVar2 = FUN_1407ca880();
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_1407ca880();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
        lVar5 = (**(code **)(*plVar4 + 0x50))(plVar4);
        if (lVar5 != 0) {
          local_68 = 0;
          uStack_50 = 0;
          local_48 = 0;
          uStack_40 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          uStack_60 = 0x8000000000;
          local_58 = 0xffffffff;
          uVar1 = FUN_14096df60(lVar5,*(undefined8 *)(param_1 + 0x988),0,&local_88);
          uStack_40 = uStack_40 & 0xffffffff00000000;
          if (local_48 != 0) {
            FUN_1400020a8();
          }
          FUN_140333f4e(&local_88);
          if ((char)uVar1 != '\0') {
            local_90 = FUN_140fe2d1e(lVar5,uVar1);
            local_8c = 1;
            FUN_140f30e64(param_1,param_2);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe2d1e FUN_140fe2d1e body=144 status=ok
// SIG undefined FUN_140fe2d1e(void)

undefined8 FUN_140fe2d1e(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x40);
    lVar4 = (longlong)*(int *)(param_1 + 0x48) << 4;
    do {
      plVar2 = (longlong *)*plVar3;
      if ((plVar2 != (longlong *)0x0) && ((char)plVar2[8] == param_2)) {
        if (plVar3 == (longlong *)0x0) {
          return 0;
        }
        plVar3 = (longlong *)plVar3[1];
        if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140fe2d91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (**(code **)(*plVar2 + 0x28))();
          return uVar5;
        }
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        uVar5 = (**(code **)(*plVar2 + 0x28))();
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 != 0) {
          return uVar5;
        }
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 != 0) {
          return uVar5;
        }
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return uVar5;
      }
      plVar3 = plVar3 + 2;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 140fe2e48 FUN_140fe2e48 body=195 status=ok
// SIG undefined FUN_140fe2e48(void)

float FUN_140fe2e48(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  if ((longlong)iVar1 == 0) {
    fVar8 = 0.0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0xd8);
    fVar8 = 0.0;
    lVar6 = 0;
    do {
      if (*(char *)(lVar4 + 0x40 + lVar6) == '\x01') {
        fVar7 = *(float *)(lVar4 + 0x3c + lVar6);
      }
      else {
        fVar7 = 0.0;
        if ((((0.0 < *(float *)(lVar4 + 0x44 + lVar6)) &&
             (iVar2 = *(int *)(lVar4 + 0x10 + lVar6), iVar2 != 0)) &&
            (uVar3 = *(uint *)(lVar4 + 0xc + lVar6), -1 < (int)uVar3)) &&
           ((int)uVar3 < DAT_14c9647dc)) {
          plVar5 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == iVar2)) &&
             (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
            fVar7 = (float)FUN_1405b046e();
            fVar7 = fVar7 / *(float *)(lVar4 + 0x44 + lVar6);
          }
        }
      }
      if (fVar8 <= fVar7) {
        fVar8 = fVar7;
      }
      lVar6 = lVar6 + 0x50;
    } while ((longlong)iVar1 * 0x50 != lVar6);
  }
  return fVar8;
}



// FUNCTION 140fe2f0c FUN_140fe2f0c body=26 status=ok
// SIG undefined FUN_140fe2f0c(void)

void FUN_140fe2f0c(undefined8 param_1)

{
  FUN_140fe2f26();
  FUN_140836bcc(param_1);
  return;
}



// FUNCTION 140fe2f26 FUN_140fe2f26 body=1397 status=ok
// SIG undefined FUN_140fe2f26(void)

void FUN_140fe2f26(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  longlong *plVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  ulonglong uVar17;
  int *piVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  int iVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_388;
  iVar20 = *(int *)(param_1 + 0x158);
  if (1 < (longlong)iVar20) {
    lVar2 = *(longlong *)(param_1 + 0x150);
    memset(local_358,0,0x2f0);
    local_360 = (longlong)iVar20 * 0x20 + lVar2 + -0x20;
    local_368 = lVar2;
    fVar28 = logf((float)iVar20);
    local_358[0] = (int)(longlong)(fVar28 + fVar28);
    plVar11 = &local_368;
    do {
      piVar16 = (int *)*plVar11;
      piVar15 = (int *)plVar11[1];
      iVar20 = (int)plVar11[2];
      iVar26 = (int)((ulonglong)((longlong)piVar15 - (longlong)piVar16) >> 5);
      uVar21 = iVar26 + 1;
      piVar13 = piVar16;
      piVar12 = piVar16;
      piVar18 = piVar15;
      if (iVar20 != 0) {
LAB_140fe2ffb:
        if (8 < (int)uVar21) {
          uVar17 = (ulonglong)(uVar21 >> 1);
          uVar3 = *(undefined8 *)(piVar13 + uVar17 * 8);
          uVar4 = *(undefined8 *)(piVar13 + uVar17 * 8 + 2);
          uVar5 = *(undefined8 *)(piVar13 + uVar17 * 8 + 4);
          uVar6 = *(undefined8 *)(piVar13 + uVar17 * 8 + 4 + 2);
          uVar7 = *(undefined8 *)piVar13;
          uVar8 = *(undefined8 *)(piVar13 + 2);
          uVar9 = *(undefined8 *)(piVar13 + 6);
          *(undefined8 *)(piVar13 + uVar17 * 8 + 4) = *(undefined8 *)(piVar13 + 4);
          *(undefined8 *)(piVar13 + uVar17 * 8 + 4 + 2) = uVar9;
          *(undefined8 *)(piVar13 + uVar17 * 8) = uVar7;
          *(undefined8 *)(piVar13 + uVar17 * 8 + 2) = uVar8;
          *(undefined8 *)(piVar13 + 4) = uVar5;
          *(undefined8 *)(piVar13 + 6) = uVar6;
          *(undefined8 *)piVar13 = uVar3;
          *(undefined8 *)(piVar13 + 2) = uVar4;
          piVar23 = piVar18 + 8;
          piVar12 = piVar13;
          do {
            piVar10 = piVar12 + 8;
            piVar19 = piVar12 + 8;
            do {
              piVar12 = piVar19;
              piVar25 = piVar10;
              if (piVar18 < piVar12) break;
              piVar10 = piVar25 + 8;
              piVar19 = piVar12 + 8;
            } while (*piVar12 <= *piVar13);
            piVar10 = piVar23 + -0x10;
            do {
              piVar19 = piVar23;
              piVar24 = piVar10;
              piVar23 = piVar19 + -8;
              if (piVar23 <= piVar13) break;
              piVar10 = piVar24 + -8;
            } while (*piVar13 <= *piVar23);
            if (piVar23 < piVar12) goto LAB_140fe33ce;
            uVar3 = *(undefined8 *)piVar12;
            uVar4 = *(undefined8 *)(piVar12 + 2);
            uVar5 = *(undefined8 *)(piVar12 + 4);
            uVar6 = *(undefined8 *)(piVar12 + 6);
            uVar7 = *(undefined8 *)piVar23;
            uVar8 = *(undefined8 *)(piVar19 + -6);
            uVar9 = *(undefined8 *)(piVar19 + -2);
            *(undefined8 *)(piVar12 + 4) = *(undefined8 *)(piVar19 + -4);
            *(undefined8 *)(piVar12 + 6) = uVar9;
            *(undefined8 *)piVar12 = uVar7;
            *(undefined8 *)(piVar12 + 2) = uVar8;
            *(undefined8 *)(piVar19 + -4) = uVar5;
            *(undefined8 *)(piVar19 + -2) = uVar6;
            *(undefined8 *)piVar23 = uVar3;
            *(undefined8 *)(piVar19 + -6) = uVar4;
          } while( true );
        }
        if (piVar13 < piVar18) {
          do {
            piVar16 = piVar13;
            if (piVar13 + 8 <= piVar18) {
              piVar15 = piVar13 + 8;
              iVar20 = *piVar13;
              do {
                iVar26 = *piVar15;
                iVar22 = iVar20;
                if (iVar20 <= iVar26) {
                  iVar22 = iVar26;
                }
                if (iVar20 < iVar26) {
                  piVar16 = piVar15;
                }
                piVar15 = piVar15 + 8;
                iVar20 = iVar22;
              } while (piVar15 <= piVar18);
            }
            local_68 = *(undefined8 *)piVar16;
            uStack_60 = *(undefined8 *)(piVar16 + 2);
            local_58 = *(undefined8 *)(piVar16 + 4);
            uStack_50 = *(undefined8 *)(piVar16 + 6);
            uVar6 = local_68;
            uVar7 = uStack_60;
            uVar3 = *(undefined8 *)piVar18;
            uVar4 = *(undefined8 *)(piVar18 + 2);
            uVar5 = *(undefined8 *)(piVar18 + 6);
            *(undefined8 *)(piVar16 + 4) = *(undefined8 *)(piVar18 + 4);
            *(undefined8 *)(piVar16 + 6) = uVar5;
            *(undefined8 *)piVar16 = uVar3;
            *(undefined8 *)(piVar16 + 2) = uVar4;
            local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
            uStack_60._4_4_ = (int)((ulonglong)uStack_60 >> 0x20);
            *(undefined8 *)(piVar18 + 4) = local_58;
            *(undefined8 *)(piVar18 + 6) = uStack_50;
            *piVar18 = (int)local_68;
            piVar18[1] = local_68._4_4_;
            piVar18[2] = (int)uStack_60;
            piVar18[3] = uStack_60._4_4_;
            piVar18 = piVar18 + -8;
            local_68 = uVar6;
            uStack_60 = uVar7;
          } while (piVar13 < piVar18);
        }
        goto LAB_140fe3085;
      }
LAB_140fe309a:
      if (uVar21 != 0) {
        iVar20 = (iVar26 - (iVar26 + -1 >> 0x1f)) + -1 >> 1;
        iVar26 = iVar20;
joined_r0x000140fe30bd:
        do {
          iVar22 = iVar20 * 2 + 1;
          if (iVar22 < (int)uVar21) {
            iVar14 = iVar20 * 2 + 2;
            if ((iVar14 < (int)uVar21) &&
               (piVar12[(longlong)iVar22 * 8] <= piVar12[(longlong)iVar14 * 8])) {
              iVar22 = iVar14;
            }
            if (piVar12[(longlong)iVar20 * 8] < piVar12[(longlong)iVar22 * 8]) {
              piVar18 = piVar12 + (longlong)iVar20 * 8;
              piVar16 = piVar12 + (longlong)iVar22 * 8;
              local_68 = *(undefined8 *)piVar18;
              uStack_60 = *(undefined8 *)(piVar18 + 2);
              local_58 = *(undefined8 *)(piVar18 + 4);
              uStack_50 = *(undefined8 *)(piVar18 + 6);
              uVar6 = local_68;
              uVar7 = uStack_60;
              uVar3 = *(undefined8 *)piVar16;
              uVar4 = *(undefined8 *)(piVar16 + 2);
              uVar5 = *(undefined8 *)(piVar16 + 6);
              *(undefined8 *)(piVar18 + 4) = *(undefined8 *)(piVar16 + 4);
              *(undefined8 *)(piVar18 + 6) = uVar5;
              *(undefined8 *)piVar18 = uVar3;
              *(undefined8 *)(piVar18 + 2) = uVar4;
              local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (int)((ulonglong)uStack_60 >> 0x20);
              *(undefined8 *)(piVar16 + 4) = local_58;
              *(undefined8 *)(piVar16 + 6) = uStack_50;
              *piVar16 = (int)local_68;
              piVar16[1] = local_68._4_4_;
              piVar16[2] = (int)uStack_60;
              piVar16[3] = uStack_60._4_4_;
              local_68 = uVar6;
              uStack_60 = uVar7;
              iVar20 = iVar22;
              goto joined_r0x000140fe30bd;
            }
          }
          bVar27 = iVar26 != 0;
          iVar20 = iVar26 + -1;
          iVar26 = iVar20;
        } while (bVar27);
        if (1 < (int)uVar21) {
          uVar17 = (ulonglong)uVar21 - 1;
          local_68 = *(undefined8 *)piVar12;
          uStack_60 = *(undefined8 *)(piVar12 + 2);
          local_58 = *(undefined8 *)(piVar12 + 4);
          uStack_50 = *(undefined8 *)(piVar12 + 6);
          uVar6 = local_68;
          uVar7 = uStack_60;
          uVar3 = *(undefined8 *)(piVar12 + uVar17 * 8);
          uVar4 = *(undefined8 *)(piVar12 + uVar17 * 8 + 2);
          uVar5 = *(undefined8 *)(piVar12 + uVar17 * 8 + 4 + 2);
          *(undefined8 *)(piVar12 + 4) = *(undefined8 *)(piVar12 + uVar17 * 8 + 4);
          *(undefined8 *)(piVar12 + 6) = uVar5;
          *(undefined8 *)piVar12 = uVar3;
          *(undefined8 *)(piVar12 + 2) = uVar4;
          local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (int)((ulonglong)uStack_60 >> 0x20);
          *(undefined8 *)(piVar12 + uVar17 * 8 + 4) = local_58;
          *(undefined8 *)(piVar12 + uVar17 * 8 + 4 + 2) = uStack_50;
          piVar18 = piVar12 + uVar17 * 8;
          *piVar18 = (int)local_68;
          piVar18[1] = local_68._4_4_;
          piVar18[2] = (int)uStack_60;
          piVar18[3] = uStack_60._4_4_;
          local_68 = uVar6;
          uStack_60 = uVar7;
          if (uVar21 != 2) {
            do {
              iVar20 = 0;
              iVar22 = 1;
              iVar26 = 0;
              do {
                iVar20 = iVar20 + 2;
                iVar14 = iVar22;
                if (((longlong)iVar20 < (longlong)uVar17) &&
                   (piVar12[(longlong)iVar22 * 8] <= piVar12[(longlong)iVar20 * 8])) {
                  iVar14 = iVar20;
                }
                if (piVar12[(longlong)iVar14 * 8] <= piVar12[(longlong)iVar26 * 8]) break;
                piVar16 = piVar12 + (longlong)iVar26 * 8;
                piVar18 = piVar12 + (longlong)iVar14 * 8;
                uVar3 = *(undefined8 *)piVar16;
                uVar4 = *(undefined8 *)(piVar16 + 2);
                uVar5 = *(undefined8 *)(piVar16 + 4);
                uVar6 = *(undefined8 *)(piVar16 + 6);
                uVar7 = *(undefined8 *)piVar18;
                uVar8 = *(undefined8 *)(piVar18 + 2);
                uVar9 = *(undefined8 *)(piVar18 + 6);
                *(undefined8 *)(piVar16 + 4) = *(undefined8 *)(piVar18 + 4);
                *(undefined8 *)(piVar16 + 6) = uVar9;
                *(undefined8 *)piVar16 = uVar7;
                *(undefined8 *)(piVar16 + 2) = uVar8;
                *(undefined8 *)(piVar18 + 4) = uVar5;
                *(undefined8 *)(piVar18 + 6) = uVar6;
                *(undefined8 *)piVar18 = uVar3;
                *(undefined8 *)(piVar18 + 2) = uVar4;
                iVar20 = iVar14 * 2;
                iVar22 = iVar14 * 2 + 1;
                iVar26 = iVar14;
              } while ((longlong)iVar22 < (longlong)uVar17);
              uVar1 = uVar17 - 1;
              local_68 = *(undefined8 *)piVar12;
              uStack_60 = *(undefined8 *)(piVar12 + 2);
              local_58 = *(undefined8 *)(piVar12 + 4);
              uStack_50 = *(undefined8 *)(piVar12 + 6);
              uVar6 = local_68;
              uVar7 = uStack_60;
              uVar3 = *(undefined8 *)(piVar12 + uVar1 * 8);
              uVar4 = *(undefined8 *)(piVar12 + uVar1 * 8 + 2);
              uVar5 = *(undefined8 *)(piVar12 + uVar1 * 8 + 4 + 2);
              *(undefined8 *)(piVar12 + 4) = *(undefined8 *)(piVar12 + uVar1 * 8 + 4);
              *(undefined8 *)(piVar12 + 6) = uVar5;
              *(undefined8 *)piVar12 = uVar3;
              *(undefined8 *)(piVar12 + 2) = uVar4;
              local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (int)((ulonglong)uStack_60 >> 0x20);
              *(undefined8 *)(piVar12 + uVar1 * 8 + 4) = local_58;
              *(undefined8 *)(piVar12 + uVar1 * 8 + 4 + 2) = uStack_50;
              piVar18 = piVar12 + uVar1 * 8;
              *piVar18 = (int)local_68;
              piVar18[1] = local_68._4_4_;
              piVar18[2] = (int)uStack_60;
              piVar18[3] = uStack_60._4_4_;
              bVar27 = 2 < uVar17;
              uVar17 = uVar1;
              local_68 = uVar6;
              uStack_60 = uVar7;
            } while (bVar27);
          }
        }
      }
LAB_140fe3085:
      plVar11 = plVar11 + -3;
    } while (&local_368 <= plVar11);
  }
  if ((local_40 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140fe33ce:
  local_68 = *(undefined8 *)piVar13;
  uStack_60 = *(undefined8 *)(piVar13 + 2);
  local_58 = *(undefined8 *)(piVar13 + 4);
  uStack_50 = *(undefined8 *)(piVar13 + 6);
  uVar6 = local_68;
  uVar7 = uStack_60;
  uVar3 = *(undefined8 *)piVar23;
  uVar4 = *(undefined8 *)(piVar19 + -6);
  uVar5 = *(undefined8 *)(piVar19 + -2);
  *(undefined8 *)(piVar13 + 4) = *(undefined8 *)(piVar19 + -4);
  *(undefined8 *)(piVar13 + 6) = uVar5;
  *(undefined8 *)piVar13 = uVar3;
  *(undefined8 *)(piVar13 + 2) = uVar4;
  local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (int)((ulonglong)uStack_60 >> 0x20);
  *(undefined8 *)(piVar19 + -4) = local_58;
  *(undefined8 *)(piVar19 + -2) = uStack_50;
  *piVar23 = (int)local_68;
  piVar19[-7] = local_68._4_4_;
  piVar19[-6] = (int)uStack_60;
  piVar19[-5] = uStack_60._4_4_;
  iVar20 = iVar20 + -1;
  piVar19 = piVar19 + -0x10;
  local_68 = uVar6;
  uStack_60 = uVar7;
  if ((longlong)piVar24 - (longlong)piVar16 < (longlong)piVar15 - (longlong)piVar25) {
    if (piVar12 < piVar18) {
      *plVar11 = (longlong)piVar12;
      plVar11[1] = (longlong)piVar18;
      *(int *)(plVar11 + 2) = iVar20;
      plVar11 = plVar11 + 3;
    }
    piVar12 = piVar13;
    piVar15 = piVar24;
    if (piVar23 <= piVar13 + 8) goto LAB_140fe3085;
  }
  else {
    if (piVar13 + 8 < piVar23) {
      *plVar11 = (longlong)piVar13;
      plVar11[1] = (longlong)piVar19;
      *(int *)(plVar11 + 2) = iVar20;
      plVar11 = plVar11 + 3;
    }
    piVar13 = piVar25;
    piVar19 = piVar18;
    piVar15 = piVar18;
    if (piVar18 <= piVar12) goto LAB_140fe3085;
  }
  iVar26 = (int)((ulonglong)((longlong)piVar15 - (longlong)piVar13) >> 5);
  uVar21 = iVar26 + 1;
  piVar16 = piVar13;
  piVar13 = piVar12;
  piVar18 = piVar19;
  if (iVar20 == 0) goto LAB_140fe309a;
  goto LAB_140fe2ffb;
}



// FUNCTION 140fe349c FUN_140fe349c body=192 status=ok
// SIG undefined FUN_140fe349c(void)

longlong FUN_140fe349c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = FUN_140fe355c();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 != 0) goto LAB_140fe34cb;
  }
  else {
    FUN_1456cec3c(lVar1);
LAB_140fe34cb:
    lVar2 = FUN_140fe355c();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      lVar5 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30) {
        lVar5 = lVar1;
      }
      goto LAB_140fe34f0;
    }
  }
  lVar5 = 0;
LAB_140fe34f0:
  plVar3 = (longlong *)FUN_1448a6f9c(param_1 + 0x218,lVar5);
  if (plVar3 != (longlong *)0x0) {
    uVar4 = FUN_14086c8a8();
    lVar1 = (**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (lVar1 != 0) {
      uVar4 = FUN_14086c8a8();
      lVar2 = FUN_144718840(lVar1,uVar4);
      if (lVar1 == lVar2) {
        return 0;
      }
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140fe355c FUN_140fe355c body=228 status=ok
// SIG undefined FUN_140fe355c(void)

longlong FUN_140fe355c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbb3070 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1465c526e;
    local_28 = &LAB_1459f3876;
    local_38 = &LAB_148c5ace9;
    local_40 = FUN_1418d0df6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_ProjectileVitals",&DAT_14cbb3070,
                  &DAT_148c5ace8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb3070;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe3648 FUN_140fe3648 body=549 status=ok
// SIG undefined FUN_140fe3648(void)

ulonglong FUN_140fe3648(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint3 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  DWORD DVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte bVar11;
  bool bVar12;
  byte bVar13;
  bool bVar14;
  byte bVar15;
  undefined1 auStack_b8 [34];
  byte local_96;
  byte local_95;
  DWORD local_94;
  longlong local_90;
  undefined1 local_88 [24];
  uint local_70;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  local_50 = 0x8000000000;
  FUN_1401b5a8c(local_88,0);
  uVar7 = local_70;
  uVar1 = *(uint *)(param_1 + 4);
  uVar3 = uVar1 + 3;
  uVar5 = uVar1 + 0x1f;
  uVar6 = uVar1 + 0x3f;
  if (-1 < (int)uVar1) {
    uVar3 = uVar1;
    uVar5 = uVar1;
    uVar6 = uVar1;
  }
  bVar12 = DAT_14c7605e0 != 0;
  bVar13 = DAT_14c7605fc != 0;
  bVar14 = DAT_14c7605fc == 2;
  bVar15 = DAT_14c760600 != 0;
  uVar4 = (uint3)(uVar1 >> 8);
  if ((DAT_14ca84f10 == '\x01') && (DAT_14ca84f14 < 0x21)) {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    lVar10 = DAT_14c9eccf0;
    if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
      uVar9 = 0;
    }
    else if (iVar2 == 1) {
      local_90 = DAT_14c9eccf0;
      local_96 = bVar13;
      local_95 = bVar15;
      local_94 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      uVar9 = (ulonglong)(local_94 != DVar8);
      lVar10 = local_90;
      bVar15 = local_95;
      bVar13 = local_96;
    }
    else {
      uVar9 = 1;
    }
    if (((uVar1 & 0x80000001) != 1) == (*(int *)(lVar10 + uVar9 * 4) != 0)) {
LAB_140fe3822:
      uVar9 = CONCAT71((uint7)uVar4,2);
      goto LAB_140fe37db;
    }
  }
  else if ((uVar1 & 0x80000001) == 1) goto LAB_140fe3822;
  bVar11 = (byte)(local_70 >> 0x12);
  uVar9 = CONCAT71((uint7)uVar4,1);
  if ((((((int)uVar1 / 2 & 0x80000001U) != 1) != (bool)(bVar11 & 1)) &&
      ((((int)uVar3 >> 2 & 0x80000001U) != 1) != (bool)(DAT_14c9cfd58 != 0 & bVar11))) &&
     (bVar11 = bVar12 & (byte)(uVar7 >> 0x10) & 1,
     (bool)(bVar14 | bVar13 & bVar11) != (((int)uVar5 >> 5 & 0x80000001U) != 1))) {
    uVar9 = (ulonglong)CONCAT31(uVar4,((int)uVar6 >> 6 & 0x80000001U) == 1 ^ bVar15 & bVar11);
  }
LAB_140fe37db:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe386e FUN_140fe386e body=324 status=ok
// SIG undefined FUN_140fe386e(void)

void FUN_140fe386e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fe39b2(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b1761b0;
  puVar1[0x58] = 0;
  puVar1[0x59] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2c9) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2d1) = 0;
  puVar1[0x5c] = 0;
  puVar1[0x5d] = 0;
  puVar1[0x5e] = 0;
  puVar1[0x5f] = 0x3fc000003f000000;
  puVar1[0x60] = 0x40a0000041a00000;
  *(undefined1 *)(puVar1 + 0x61) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x30c) = 0x4120000042c80000;
  *(undefined1 *)(puVar1 + 99) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x33c) = 0;
  puVar1[0x6a] = 0;
  puVar1[0x6b] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x31c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x324) = 0;
  puVar1[0x65] = 0;
  puVar1[0x66] = 0;
  *(undefined4 *)(puVar1 + 0x6c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x364) = 0;
  *(undefined4 *)(puVar1 + 0x6d) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x36c) = 0x3ff00000;
  puVar1[0x70] = 0;
  puVar1[0x71] = 0;
  puVar1[0x6e] = 0;
  puVar1[0x6f] = 0;
  puVar1[0x72] = 0x3ff0000000000000;
  puVar1[0x73] = 0x3ff0000000000000;
  puVar1[0x74] = 0x3ff0000000000000;
  puVar1[0x75] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3b9) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3c1) = 0;
  puVar1[0x76] = 0;
  puVar1[0x77] = 0;
  puVar1[0x7a] = 0x3fb99999a0000000;
  *(undefined8 *)((longlong)puVar1 + 0x3fc) = 0;
  puVar1[0x82] = 0;
  puVar1[0x83] = 0;
  puVar1[0x7e] = 0;
  puVar1[0x7c] = 0;
  puVar1[0x7d] = 0;
  *(undefined4 *)(puVar1 + 0x84) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x424) = 0;
  *(undefined4 *)(puVar1 + 0x85) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x42c) = 0x3ff00000;
  puVar1[0x88] = 0;
  puVar1[0x89] = 0;
  puVar1[0x86] = 0;
  puVar1[0x87] = 0;
  puVar1[0x8a] = 0x3ff0000000000000;
  puVar1[0x8b] = 0x3ff0000000000000;
  puVar1[0x8c] = 0x3ff0000000000000;
  puVar1[0x8d] = 0;
  puVar1[0x8e] = 0;
  puVar1[0x8f] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x479) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x481) = 0;
  puVar1[0x92] = 0x3fb99999a0000000;
  *(undefined4 *)(puVar1 + 0x94) = 0x40a00000;
  return;
}



// FUNCTION 140fe39b2 FUN_140fe39b2 body=160 status=ok
// SIG undefined FUN_140fe39b2(void)

undefined8 * FUN_140fe39b2(undefined8 *param_1)

{
  FUN_140be449e();
  *param_1 = &PTR_FUN_14ac914c0;
  *(undefined1 *)(param_1 + 0x1b) = 100;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x3f0000003f000000;
  *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1e] = &DAT_3f8000003f800000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 1;
  FUN_144805afa(param_1 + 0x26);
  *(undefined2 *)(param_1 + 0x57) = 0;
  return param_1;
}



// FUNCTION 140fe3a52 FUN_140fe3a52 body=139 status=ok
// SIG undefined FUN_140fe3a52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140fe3a52(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0xf0);
  FUN_140fe3ade(puVar2);
  *puVar2 = &PTR_FUN_14be82c20;
  puVar2[2] = &PTR_FUN_14be876b8;
  memset(puVar2 + 3,0,0x90);
  *(undefined2 *)((longlong)puVar2 + 0xc1) = 1;
  uVar1 = uRam000000014cc27028;
  puVar2[0x19] = _DAT_14cc27020;
  puVar2[0x1a] = uVar1;
  puVar2[0x1b] = DAT_14cc27030;
  puVar2[0x1c] = 0x3ff0000000000000;
  *(undefined1 *)(puVar2 + 0x1d) = 0;
  return puVar2;
}



// FUNCTION 140fe3ade FUN_140fe3ade body=297 status=ok
// SIG undefined FUN_140fe3ade(void)

undefined8 * FUN_140fe3ade(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_LAB_14ab36d70;
  if (DAT_14caf84d0 == 0) {
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_145a62952;
    local_48 = &LAB_147c8cd45;
    local_50 = &LAB_1461468ae;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000006;
    local_70 = 8;
    local_78 = 0x218;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
  }
  lVar1 = DAT_14caf84d0;
  lVar2 = *(longlong *)(DAT_14caf84d0 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(DAT_14caf84d0);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar2 + 0x160);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe3c08 FUN_140fe3c08 body=1225 status=ok
// SIG undefined FUN_140fe3c08(void)

void FUN_140fe3c08(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  code *local_60;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_18 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_68 = (undefined *)FUN_1446ddbd2();
      local_60 = FUN_1468d96f0;
      local_70 = 0;
      local_78 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_18 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_18);
    }
  }
  uStack_30 = 0;
  uStack_2c = 0;
  local_28 = 0x10019100;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_68 = (undefined *)FUN_1446ddbd2();
      local_60 = FUN_14170fd90;
      local_70 = 0x8000000000000000;
      local_78 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_30 = (undefined4)uVar2;
      uStack_2c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_30);
    }
  }
  local_34 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_60 = FUN_1405ebbb2;
      local_68 = &DAT_14c9520b8;
      local_70 = 0;
      local_78 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_34);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_34);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_34 = (undefined4)uVar2;
      uStack_30 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_34);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = CONCAT44(uStack_2c,uStack_30);
  local_48 = local_28;
  local_40 = 0;
  FUN_140fe40d2(local_18,&local_50,local_34);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe40d2 FUN_140fe40d2 body=355 status=ok
// SIG undefined FUN_140fe40d2(void)

void FUN_140fe40d2(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined8 uStack_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1412cbf9c(&local_50,param_1);
  if (local_50 == 0) goto LAB_140fe41e3;
  uVar3 = FUN_1412cbf12(param_2);
  local_60 = 0;
  uStack_58 = 0;
  uVar4 = FUN_1406eea5e();
  lVar5 = FUN_14477b664(uVar4);
  lVar6 = FUN_1406eea5e();
  uVar4 = FUN_1406eea5e();
  FUN_1402d1bfa(&local_40,uVar4,uVar3);
  if (local_40 != 0) {
    uStack_58 = 0;
  }
  local_68 = local_40;
  lVar7 = FUN_1406eea5e();
  if (lVar6 == 0) {
LAB_140fe4198:
    lVar7 = lVar6;
  }
  else if (lVar7 == 0) {
    lVar7 = 0;
  }
  else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
           lVar7 + 0x30)) goto LAB_140fe4198;
  if (lVar5 != lVar7) {
    uStack_58 = 0;
  }
  uVar4 = FUN_14477b664(lVar7);
  local_60 = FUN_14477b664(uVar4);
  if (local_60 != 0 && local_40 != 0) {
    uStack_58 = uVar3;
  }
  FUN_140e0c8b2(local_50,&local_68,param_3);
LAB_140fe41e3:
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe4236 FUN_140fe4236 body=795 status=ok
// SIG undefined FUN_140fe4236(void)

void FUN_140fe4236(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  undefined1 local_21;
  undefined7 uStack_20;
  undefined1 uStack_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uStack_20 = 0;
  uStack_19 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = (undefined *)FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_20);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&uStack_20);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&uStack_20);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_20 = (undefined7)uVar3;
      uStack_19 = (undefined1)((ulonglong)uVar3 >> 0x38);
    }
    else {
      (*pcVar2)(uVar3,param_2,&uStack_20);
    }
  }
  local_21 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1409f1a5c;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_21);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_21);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_21 = (undefined1)uVar3;
      uStack_20 = (undefined7)((ulonglong)uVar3 >> 8);
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_21);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_140fe4552(CONCAT17(uStack_19,uStack_20),local_21);
  *param_3 = uVar3;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe4552 FUN_140fe4552 body=347 status=ok
// SIG undefined FUN_140fe4552(void)

longlong FUN_140fe4552(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
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
  if (param_1 != 0) {
    if (DAT_14cb94538 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148a18249;
      local_50 = FUN_14657713c;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
    }
    plVar1 = (longlong *)FUN_144718840(param_1,DAT_14cb94538);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
      if ((int)((ulonglong)param_2 & 0xff) < *(int *)(lVar2 + 0xa8)) {
        lVar2 = *(longlong *)
                 (*(longlong *)(lVar2 + 0xa0) + 0x20 + ((ulonglong)param_2 & 0xff) * 0x170);
        if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
          FUN_1456cec3c(lVar2);
        }
        goto LAB_140fe45d5;
      }
    }
  }
  lVar2 = 0;
LAB_140fe45d5:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe46bc FUN_140fe46bc body=54 status=ok
// SIG undefined FUN_140fe46bc(void)

undefined8 * FUN_140fe46bc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b016530;
  FUN_14051f4c4(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fe46fa FUN_140fe46fa body=290 status=ok
// SIG undefined FUN_140fe46fa(void)

ulonglong FUN_140fe46fa(undefined8 *param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == 0) {
    puVar4 = &DAT_14c9a1308;
  }
  else {
    puVar4 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb83240);
  }
  if (((byte *)*puVar4 == (byte *)0x0) ||
     (bVar1 = *(byte *)*puVar4, (bVar1 & 0x68) != 0 || (bVar1 & 3) == 0)) {
    uVar6 = 0;
  }
  else {
    local_30 = 0;
    FUN_1400bc2c2(param_2,&local_28);
    *param_1 = local_28;
    puVar5 = &DAT_14c9a1308;
    puVar4 = &DAT_14c9a1308;
    if (*param_2 != 0) {
      puVar4 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb83240);
    }
    uVar3 = FUN_1410451c0(puVar4,0);
    *(undefined4 *)(param_1 + 1) = uVar3;
    if (*param_2 != 0) {
      puVar5 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb83218);
    }
    uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    if (((byte *)*puVar5 != (byte *)0x0) && ((*(byte *)*puVar5 & 3) != 0)) {
      cVar2 = FUN_144a79b3c(puVar5);
      if (cVar2 != '\0') {
        FUN_1408c99be();
        FUN_140558f28(puVar5,param_1 + 2,&DAT_14cb83290,0);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe481e FUN_140fe481e body=730 status=ok
// SIG undefined FUN_140fe481e(void)

void FUN_140fe481e(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  longlong local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f0 [4];
  undefined8 local_ec;
  undefined4 local_e4;
  longlong local_c8;
  undefined1 local_b8 [40];
  longlong local_90;
  undefined1 local_80 [40];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_14082167c();
  FUN_141193194(param_1,param_2,param_1 + 0x90);
  local_f8 = *(undefined4 *)(param_1 + 0x80);
  local_100 = *(undefined8 *)(param_1 + 0x78);
  local_108 = *(undefined4 *)(param_1 + 0x8c);
  local_110 = *(undefined8 *)(param_1 + 0x84);
  FUN_140fe4afa(param_1,local_80,&local_100,&DAT_14cb7bde0);
  FUN_140fe4afa(param_1,local_b8,&local_110,&DAT_14cb7bde0);
  local_128 = FUN_1406b2efc(param_2 + 0x2c0);
  lVar3 = local_128 + 0xb0;
  local_f0[0] = 1;
  local_e4 = 1;
  local_ec = DAT_14cb7c588;
  local_138 = 0;
  FUN_140641812(lVar3,local_80,local_f0,0);
  local_f0[0] = 1;
  local_e4 = 1;
  local_ec = DAT_14cb7c588;
  local_138 = 0;
  uVar4 = FUN_140641812(lVar3,local_b8,local_f0,0);
  local_138 = 2;
  FUN_1408234aa(uVar4,local_f0,param_2,&DAT_14cb86eb8);
  FUN_14082207e(&local_120,local_f0,0);
  FUN_140822770(param_2 + 0x2c0,&local_120,1);
  FUN_1447cd778(CONCAT44(uStack_11c,local_120),local_118);
  if (CONCAT44(uStack_11c,local_120) != 0) {
    FUN_1400020a8();
  }
  lVar3 = FUN_140823ef2(param_1,param_2,&local_110);
  iVar2 = *(int *)(lVar3 + 0x60);
  *(uint *)(lVar3 + 0x60) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 100) < iVar2 + 1U) {
    FUN_140823334((longlong *)(lVar3 + 0x58),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x58) + (longlong)iVar2 * 0x28);
  *puVar1 = DAT_14cb86288;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  local_120._0_1_ = 1;
  local_114 = 1;
  uStack_11c = (undefined4)DAT_14cb7c588;
  local_118 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
  FUN_140821fec(puVar1,local_f0,&local_120,0);
  lVar3 = local_128 + 0x58;
  local_120._0_1_ = 1;
  local_114 = 0;
  uStack_11c = (undefined4)DAT_14cb7c580;
  local_118 = (undefined4)((ulonglong)DAT_14cb7c580 >> 0x20);
  local_138 = 0;
  FUN_140641812(lVar3,local_80,&local_120,0);
  local_120 = CONCAT31(local_120._1_3_,1);
  local_114 = 0;
  uStack_11c = (undefined4)DAT_14cb7c580;
  local_118 = (undefined4)((ulonglong)DAT_14cb7c580 >> 0x20);
  local_138 = 0;
  FUN_140641812(lVar3,local_b8,&local_120,0);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe4afa FUN_140fe4afa body=158 status=ok
// SIG undefined FUN_140fe4afa(void)

undefined2 *
FUN_140fe4afa(undefined8 param_1,undefined2 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0xb;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  local_28 = *(undefined4 *)(param_3 + 1);
  local_30 = *param_3;
  FUN_144928d62(param_2 + 8,0,&local_30);
  local_38 = *(undefined4 *)(param_4 + 1);
  local_40 = *param_4;
  FUN_144928d62(param_2 + 8,1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe4bb0 FUN_140fe4bb0 body=117 status=ok
// SIG undefined FUN_140fe4bb0(void)

void FUN_140fe4bb0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar1 = FUN_1403ae46b();
  if ((((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x78f0))) &&
      (lVar2 = (ulonglong)uVar1 * 0x48 + *(longlong *)(param_1 + 0x78e8), lVar2 != 0)) &&
     ((*(longlong *)(lVar2 + 0x20) != 0 && (*(longlong **)(lVar2 + 0x28) != (longlong *)0x0)))) {
    lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x28) + 8))();
    if (lVar2 != 0) {
      uVar3 = FUN_1403ae386();
      plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
      if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140fe4c1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x78))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140fe4c2c FUN_140fe4c2c body=912 status=ok
// SIG undefined FUN_140fe4c2c(void)

void FUN_140fe4c2c(longlong *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_128 [40];
  longlong *local_100;
  undefined8 local_f8;
  undefined4 *local_f0;
  uint local_e8;
  int iStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_3 != 0) {
    (**(code **)(*param_1 + 0x2b0))(param_1);
  }
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0xffff;
  FUN_140fe4ff6(param_1,param_2);
  iVar6 = *(int *)((longlong)param_1 + 0x6c);
  *(int *)((longlong)param_1 + 0x6c) = iVar6 + 1;
  uVar5 = (ulonglong)(int)param_1[0xc];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x6c) = iVar6;
  }
  else {
    bVar9 = false;
    do {
      lVar7 = uVar5 * 0x10 + -8;
      uVar8 = uVar5;
      while (((lVar2 = param_1[0xb], *(int *)(lVar2 + lVar7) != 0 &&
              (plVar1 = *(longlong **)(lVar2 + -8 + lVar7), plVar1 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*plVar1 + 0x60))(plVar1,&local_d8,param_3), cVar4 != '\0'))) {
        lVar7 = lVar7 + -0x10;
        bVar3 = uVar8 < 2;
        uVar8 = uVar8 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x6c) = *(int *)((longlong)param_1 + 0x6c) + -1;
          if (bVar9) goto LAB_140fe4fae;
          goto LAB_140fe4ca3;
        }
      }
      uVar5 = uVar8 - 1;
      bVar9 = true;
    } while (1 < uVar8);
    *(int *)((longlong)param_1 + 0x6c) = *(int *)((longlong)param_1 + 0x6c) + -1;
LAB_140fe4fae:
    FUN_14474d06a(param_1 + 0xb,0);
  }
LAB_140fe4ca3:
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  if (&local_98 == (longlong *)(param_2 + 0xa8)) {
    bVar9 = true;
  }
  else {
    local_98 = *(longlong *)(param_2 + 0xa8);
    *(undefined8 *)(param_2 + 0xa8) = 0;
    uStack_90 = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(param_2 + 0xb0) = 0;
    if (*(longlong *)(param_2 + 200) == 0) {
      local_88 = *(undefined4 *)(param_2 + 0xb8);
      uStack_84 = *(undefined4 *)(param_2 + 0xbc);
      uStack_80 = *(undefined4 *)(param_2 + 0xc0);
      uStack_7c = *(undefined4 *)(param_2 + 0xc4);
    }
    local_78 = *(longlong *)(param_2 + 200);
    *(undefined8 *)(param_2 + 200) = 0;
    local_70 = *(int *)(param_2 + 0xd0);
    *(undefined8 *)(param_2 + 0xd0) = 0;
    local_6c = CONCAT44(*(undefined4 *)(param_2 + 0xd8),*(undefined4 *)(param_2 + 0xd4));
    local_64 = *(undefined4 *)(param_2 + 0xdc);
    *(undefined8 *)(param_2 + 0xd8) = 0xffffffff;
    bVar9 = local_70 == 0;
  }
  if (*(longlong *)(param_2 + 0xe8) == 0) {
    local_60 = *(undefined4 *)(param_2 + 0xe0);
  }
  local_58 = *(longlong *)(param_2 + 0xe8);
  *(undefined8 *)(param_2 + 0xe8) = 0;
  local_50 = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_2 + 0xf0) = 0;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  iVar6 = 0;
  local_b0 = &local_88;
  if (!bVar9) {
    FUN_1449c0562(&local_b8);
    iVar6 = local_70;
  }
  local_e8 = local_a8;
  iStack_e4 = iStack_a4;
  local_e0 = local_a0;
  local_dc = local_9c;
  local_f8 = local_b8;
  local_f0 = local_b0;
  local_100 = &local_98;
  if ((iStack_a4 != iVar6) || (local_b0 != &local_88)) {
    do {
      if ((*(int *)(*local_100 + 0x10 + (longlong)iStack_e4 * 0x20) != 0) &&
         (plVar1 = *(longlong **)((longlong)iStack_e4 * 0x20 + *local_100 + 8),
         plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x60))(plVar1,param_3);
      }
      local_e8 = local_e8 & ~local_f8._4_4_;
      FUN_1449c0562(&local_f8);
    } while (((iStack_e4 != iVar6) || (local_f0 != &local_88)) || (local_100 != &local_98));
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140fe4fbe(&local_98);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fe4fbe FUN_140fe4fbe body=55 status=ok
// SIG undefined FUN_140fe4fbe(void)

void FUN_140fe4fbe(longlong *param_1)

{
  FUN_140fe50e6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140fe4ff6 FUN_140fe4ff6 body=239 status=ok
// SIG undefined FUN_140fe4ff6(void)

longlong FUN_140fe4ff6(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_3 = param_1;
  param_3[2] = 0;
  *(undefined4 *)((longlong)param_3 + 0x1c) = 0xffffffff;
  if (param_2 == 0) goto LAB_140fe50ae;
  plVar1 = param_3 + 2;
  *(undefined4 *)((longlong)param_3 + 0x1c) = *(undefined4 *)(param_2 + 0x28);
  if ((*(longlong *)(param_1 + 0x1b0) == 0) ||
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x1e0), lVar2 == 0)) {
    param_3[1] = 0;
LAB_140fe50da:
    local_2c = 0xffff;
    bVar3 = true;
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x68);
    param_3[1] = lVar2;
    if (lVar2 == 0) goto LAB_140fe50da;
    FUN_140f5a278(lVar2,&local_2c,(undefined4 *)((longlong)param_3 + 0x1c),plVar1);
    bVar3 = *plVar1 == 0;
  }
  *(uint *)(param_3 + 3) = local_2c;
  if ((bVar3) && ((local_2c & 0x8000) == 0)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x1e0);
    lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2 + 0x28);
    *plVar1 = lVar2;
  }
LAB_140fe50ae:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe50e6 FUN_140fe50e6 body=388 status=ok
// SIG undefined FUN_140fe50e6(void)

void FUN_140fe50e6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      FUN_1449db362(*local_70 + (longlong)iStack_54 * 0x20 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fe526c FUN_140fe526c body=373 status=ok
// SIG undefined FUN_140fe526c(void)

undefined4 *
FUN_140fe526c(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  byte *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140fe547e(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *(undefined4 *)(local_48 + 8) = *(undefined4 *)(puVar1 + 1);
  *(undefined8 *)local_48 = *puVar1;
  *(undefined4 *)(local_48 + 0xc) = *puVar2;
  local_48[0x10] = 0xff;
  local_48[0x11] = 0xff;
  local_48[0x12] = 0xff;
  local_48[0x13] = 0xff;
  local_54 = local_50[0];
  uVar3 = *(undefined8 *)(local_48 + 4);
  uVar7 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar6 = (uint)uVar3 & 0xffff;
  uVar7 = (uint)*local_48 +
          (((uint)uVar3 << 0x10 | uVar6) + (int)((ulonglong)uVar3 >> 0x20) +
           (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar6 >> 4)) * 10;
  local_68 = param_4;
  cVar4 = FUN_140fe53e2(param_1,uVar7,local_48);
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar6 < 4) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)(local_48 + 0x14) = uVar7;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 0x10) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_140fe5654(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe53e2 FUN_140fe53e2 body=155 status=ok
// SIG undefined FUN_140fe53e2(void)

void FUN_140fe53e2(longlong *param_1,uint param_2,char *param_3,int *param_4,undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  uVar6 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar6 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x18);
        if ((*(longlong *)(puVar1 + 1) == *(longlong *)(param_3 + 4)) &&
           (*(char *)(*param_1 + (longlong)iVar8 * 0x18) == *param_3)) {
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 4);
          uVar4 = *(undefined4 *)(param_3 + 8);
          uVar5 = *(undefined4 *)(param_3 + 0xc);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          FUN_1491c1b7c(uVar2,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_140fe5451;
        }
        iVar8 = puVar1[4];
      } while (iVar8 != -1);
    }
    uVar6 = 0;
  }
LAB_140fe5451:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 140fe547e FUN_140fe547e body=470 status=ok
// SIG undefined FUN_140fe547e(void)

int * FUN_140fe547e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1403951a8(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar5 = iVar6 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar5 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar7 << 2,0);
          iVar5 = (int)(uVar3 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar5) {
            iVar8 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar5);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar5 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar5 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar2 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 140fe5654 FUN_140fe5654 body=620 status=ok
// SIG undefined FUN_140fe5654(void)

void FUN_140fe5654(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar14 + 4 + lVar13 * 0x18);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)((uint)*(byte *)(lVar14 + lVar13 * 0x18) +
                      (((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) * 10) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x14 + lVar13 * 0x18) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x10 + lVar13 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_140fe585a;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_140fe585a:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe58c2 FUN_140fe58c2 body=88 status=ok
// SIG undefined FUN_140fe58c2(void)

void FUN_140fe58c2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x920);
  FUN_140fe591a(param_2);
  *param_2 = &PTR_FUN_14b8f9b10;
  memset(param_2 + 0x108,0,0xcc);
  *(undefined4 *)((longlong)param_2 + 0x90c) = 1;
  param_2[0x122] = 0;
  param_2[0x123] = 0;
  return;
}



// FUNCTION 140fe591a FUN_140fe591a body=973 status=ok
// SIG undefined FUN_140fe591a(void)

undefined8 * FUN_140fe591a(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xaaad1010;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3ff00000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x3ff0000000000000;
  param_1[0x17] = 0x3ff0000000000000;
  param_1[0x18] = 0x3ff0000000000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *param_1 = &PTR_FUN_14b493b00;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  memset(param_1 + 0x6a,0,0x112);
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 2;
  FUN_1447cd5fa(param_1 + 0x8f,2,0);
  *(undefined2 *)param_1[0x8f] = 0;
  *(undefined2 *)(param_1 + 0x91) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0;
  *(undefined1 *)(param_1 + 0x92) = 0;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0;
  param_1[0x9b] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  memset(param_1 + 0x9d,0,0x178);
  lVar3 = 0x6a8;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0x3e);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + -0x48);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar3 + -0x2c) = 0;
    *(undefined2 *)((longlong)param_1 + lVar3 + -0x24) = 0;
    *(undefined8 *)((longlong)param_1 + lVar3 + -0x20) = 0;
    *(undefined1 *)((longlong)param_1 + lVar3 + -0x18) = 0;
    *(undefined4 *)((longlong)param_1 + lVar3 + -0x14) = 0;
    *(undefined4 *)((longlong)param_1 + lVar3 + -0x11) = 0;
    *(undefined4 *)((longlong)param_1 + lVar3 + -0xc) = 3;
    *(undefined2 *)((longlong)param_1 + lVar3 + -8) = 0;
    *(undefined4 *)((longlong)param_1 + lVar3 + -4) = 7;
    *(undefined1 *)((longlong)param_1 + lVar3) = 0;
    lVar3 = lVar3 + 0x50;
  } while (lVar3 != 0x748);
  param_1[0xf4] = 0x40a0000000000000;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x70a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x712) = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x72a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x732) = 0;
  *(undefined8 *)((longlong)param_1 + 0x73c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x744) = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  *(undefined4 *)(param_1 + 0xef) = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c5) = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xfd) = 2;
  uVar2 = DAT_14c8463e8;
  param_1[0x100] = DAT_14c8463e0;
  param_1[0x101] = uVar2;
  uVar2 = DAT_14c8463d8;
  param_1[0xfe] = DAT_14c8463d0;
  param_1[0xff] = uVar2;
  param_1[0x104] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  return param_1;
}



// FUNCTION 140fe5ce8 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 140fe5cee FUN_140fe5cee body=95 status=ok
// SIG undefined FUN_140fe5cee(void)

void FUN_140fe5cee(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_140fe5df2(param_1,iVar2);
  }
  FUN_140fe5d4d((longlong)iVar2 * 0x30 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 140fe5d4d FUN_140fe5d4d body=164 status=ok
// SIG undefined FUN_140fe5d4d(void)

void FUN_140fe5d4d(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      *(undefined1 *)(param_1 + lVar3) = *(undefined1 *)(param_2 + lVar3);
      *(undefined8 *)(param_1 + 8 + lVar3) = 0;
      iVar1 = *(int *)(param_2 + 0x10 + lVar3);
      uVar2 = *(undefined8 *)(param_2 + 8 + lVar3);
      *(int *)(param_1 + 0x10 + lVar3) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x14 + lVar3) = 0;
      }
      else {
        FUN_14055313c(param_1 + 8 + lVar3,iVar1,0);
        FUN_140553097(*(undefined8 *)(param_1 + 8 + lVar3),uVar2);
      }
      *(undefined8 *)(param_1 + 0x18 + lVar3) = *(undefined8 *)(param_2 + 0x18 + lVar3);
      *(undefined4 *)(param_1 + 0x20 + lVar3) = *(undefined4 *)(param_2 + 0x20 + lVar3);
      *(undefined8 *)(param_1 + 0x28 + lVar3) = 0;
      lVar3 = lVar3 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140fe5df2 FUN_140fe5df2 body=275 status=ok
// SIG undefined FUN_140fe5df2(void)

void FUN_140fe5df2(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x30;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140fe5f06 FUN_140fe5f06 body=157 status=ok
// SIG undefined FUN_140fe5f06(void)

void FUN_140fe5f06(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x48);
    do {
      FUN_14063a6f5(*(undefined8 *)(puVar4 + -2),*puVar4);
      if (*(longlong *)(puVar4 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_140fe5fa3(*(undefined8 *)(puVar4 + -6),puVar4[-4]);
      if (*(longlong *)(puVar4 + -6) != 0) {
        FUN_1400020a8();
      }
      FUN_1403d9ddf(*(undefined8 *)(puVar4 + -10),puVar4[-8]);
      if (*(longlong *)(puVar4 + -10) != 0) {
        FUN_1400020a8();
      }
      plVar3 = *(longlong **)(puVar4 + -0xc);
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
      puVar4 = puVar4 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140fe5fa3 FUN_140fe5fa3 body=54 status=ok
// SIG undefined FUN_140fe5fa3(void)

void FUN_140fe5fa3(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140fe5fda FUN_140fe5fda body=157 status=ok
// SIG undefined FUN_140fe5fda(void)

undefined8 FUN_140fe5fda(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(local_40,param_3);
  FUN_1446f470e(&local_48,param_3,1);
  lVar1 = FUN_1407dac1e(param_1,local_48,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140fe6078(lVar1,param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe6078 FUN_140fe6078 body=610 status=ok
// SIG undefined FUN_140fe6078(void)

bool FUN_140fe6078(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [36];
  int local_a4;
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78 [2];
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140056680(local_78);
  plVar1 = (longlong *)(param_1 + 0xa0);
  lVar2 = param_1 + 0xb0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar4 = 0;
  iVar3 = 0;
  local_60 = lVar2;
  if (*(int *)(param_1 + 200) != 0) {
    FUN_1449c0562(&local_68);
    iVar3 = *(int *)(param_1 + 200);
  }
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_80 = local_50;
  local_7c = local_4c;
  local_98 = local_68;
  local_90 = local_60;
  local_a0 = plVar1;
  if ((iStack_54 != iVar3) || (local_60 != lVar2)) {
    iVar4 = 0;
    do {
      do {
        iVar5 = FUN_140fe65e6(*local_a0 + (longlong)iStack_84 * 0xe0 + 0x10,local_78);
        iVar4 = iVar4 + iVar5;
        local_88 = local_88 & ~local_98._4_4_;
        FUN_1449c0562(&local_98);
      } while (iStack_84 != iVar3);
    } while ((local_90 != lVar2) || (local_a0 != plVar1));
  }
  puVar8 = *(undefined8 **)(param_1 + 0xf8);
  if (puVar8 != (undefined8 *)0x0) {
    do {
      iVar3 = FUN_140fe65e6(*puVar8,local_78);
      iVar4 = iVar4 + iVar3;
      puVar8 = (undefined8 *)puVar8[1];
    } while (puVar8 != (undefined8 *)0x0);
  }
  local_a4 = iVar4;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
  iVar3 = FUN_140fe62dc(param_1 + 0x450,local_78);
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
  iVar4 = FUN_140fe62dc(param_1 + 0x1d8,local_78);
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
  iVar5 = FUN_140fe65e6(param_1 + 0x110,local_78);
  iVar6 = FUN_140fe65e6(param_1 + 0x388,local_78);
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
  iVar7 = FUN_140fe62dc(param_1 + 0x2b0,local_78);
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  iVar3 = iVar4 + iVar5 + iVar6 + iVar3 + local_a4;
  iVar4 = iVar3 + iVar7;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4 != 0 && SCARRY4(iVar3,iVar7) == iVar4 < 0;
}



// FUNCTION 140fe62dc FUN_140fe62dc body=355 status=ok
// SIG undefined FUN_140fe62dc(void)

undefined8 FUN_140fe62dc(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  ushort uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = *(int *)(param_2 + 1);
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    uVar11 = 0;
    if (0 < iVar2) {
      puVar3 = &DAT_149dfb77a;
      if (iVar1 != 0) {
        puVar3 = (undefined2 *)*param_2;
      }
      lVar8 = 0;
      uVar11 = 0;
      do {
        uVar6 = ((uint)(ushort)puVar3[lVar8] + (uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20) -
                0x20;
        uVar11 = uVar11 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar11 ^ uVar6) & 0xff) * 4);
        uVar11 = uVar11 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar11 & 0xff ^ uVar6 >> 8 & 0xff) * 4);
        lVar8 = lVar8 + 1;
      } while (iVar2 != (int)lVar8);
    }
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + ((longlong)(int)uVar11 & (longlong)(int)param_1[9] - 1U) * 4
                    );
    if (iVar2 != -1) {
LAB_140fe63ac:
      plVar4 = (longlong *)(*param_1 + (longlong)iVar2 * 0xc0);
      iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar2 * 0xc0);
      if (iVar2 == iVar1) {
        if (1 < iVar1) {
          lVar8 = 0;
          do {
            uVar9 = *(ushort *)(*plVar4 + lVar8);
            uVar10 = (ulonglong)uVar9;
            uVar5 = *(ushort *)((longlong)*param_2 + lVar8);
            if (uVar9 == uVar5) {
              if (uVar9 == 0) break;
            }
            else {
              if (0x7f < (uVar5 | uVar9)) goto LAB_140fe6425;
              uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
              uVar7 = (ulonglong)uVar5;
              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
              if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar7]) goto LAB_140fe6425;
            }
            lVar8 = lVar8 + 2;
          } while( true );
        }
        goto LAB_140fe63f2;
      }
      if (iVar2 + iVar1 == 1) goto LAB_140fe63f2;
      goto LAB_140fe642b;
    }
  }
  return 0;
LAB_140fe6425:
  if (uVar9 == uVar5) {
LAB_140fe63f2:
    FUN_140fe6440();
    return 1;
  }
LAB_140fe642b:
  iVar2 = (int)plVar4[0x17];
  if (iVar2 == -1) {
    return 0;
  }
  goto LAB_140fe63ac;
}



// FUNCTION 140fe6440 FUN_140fe6440 body=109 status=ok
// SIG undefined FUN_140fe6440(void)

void FUN_140fe6440(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xbc + (longlong)param_2 * 0xc0);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0xc0 + 0xb8);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0xc0 + 0xb8);
  FUN_140fe64ae(param_1,param_2,1);
  return;
}



// FUNCTION 140fe64ae FUN_140fe64ae body=162 status=ok
// SIG undefined FUN_140fe64ae(void)

void FUN_140fe64ae(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 * 0xc0 + *param_1 + 0x60;
    iVar1 = param_3;
    do {
      *(undefined4 *)(lVar2 + 0x48) = 0;
      if (*(longlong *)(lVar2 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_140bb2a1a(lVar2);
      *(undefined4 *)(lVar2 + -8) = 0;
      if (*(longlong *)(lVar2 + -0x10) != 0) {
        FUN_1400020a8();
      }
      FUN_140b7cbe4(lVar2 + -0x50);
      if (*(longlong *)(lVar2 + -0x60) != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 0xc0;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_140fe6550(param_1,param_2,param_3);
  return;
}



// FUNCTION 140fe6550 FUN_140fe6550 body=149 status=ok
// SIG undefined FUN_140fe6550(void)

void FUN_140fe6550(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0xc0 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xc0) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
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
      puVar7 = puVar7 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140fe65e6 FUN_140fe65e6 body=275 status=ok
// SIG undefined FUN_140fe65e6(void)

undefined4 FUN_140fe65e6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  ushort uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = (int)param_2[1];
    if (iVar1 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    iVar1 = FUN_144a49b4a(iVar2,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + ((longlong)iVar1 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      iVar2 = (int)param_2[1];
LAB_140fe6665:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar1 * 0xb8);
      iVar1 = *(int *)(*param_1 + 8 + (longlong)iVar1 * 0xb8);
      if (iVar1 == iVar2) {
        if (1 < iVar2) {
          lVar6 = 0;
          do {
            uVar8 = *(ushort *)(*plVar3 + lVar6);
            uVar9 = (ulonglong)uVar8;
            uVar5 = *(ushort *)(*param_2 + lVar6);
            if (uVar8 == uVar5) {
              if (uVar8 == 0) break;
            }
            else {
              if (0x7f < (uVar5 | uVar8)) goto LAB_140fe66df;
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              uVar7 = (ulonglong)uVar5;
              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
              if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar7]) goto LAB_140fe66df;
            }
            lVar6 = lVar6 + 2;
          } while( true );
        }
        goto LAB_140fe66e7;
      }
      if (iVar1 + iVar2 == 1) goto LAB_140fe66e7;
      goto LAB_140fe6686;
    }
  }
  return 0;
LAB_140fe66df:
  if (uVar8 == uVar5) {
LAB_140fe66e7:
    FUN_14680bacc(param_1);
    return 1;
  }
LAB_140fe6686:
  iVar1 = (int)plVar3[0x16];
  if (iVar1 == -1) {
    return 0;
  }
  goto LAB_140fe6665;
}



// FUNCTION 140fe66fa FUN_140fe66fa body=601 status=ok
// SIG undefined FUN_140fe66fa(void)

undefined8 * FUN_140fe66fa(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  longlong *local_58 [2];
  undefined8 local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14aed80a0;
  param_1[5] = &PTR_FUN_14aed8420;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 2;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x200000000;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x11] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x12) = DAT_14c844848;
  FUN_144757f48(param_1,8);
  FUN_1446f470e(&local_48,L"InputBehaviors",1);
  local_70 = 0;
  local_78 = 0;
  lVar2 = FUN_140fe6954(param_1,local_48,0,0);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  param_1[0xc] = lVar2;
  local_40 = L"DefaultInteractiveToolName";
  local_38 = 0x1a;
  FUN_1446e940c(local_5c,&local_40);
  local_40 = L"UInteractiveTool";
  local_38 = 0x10;
  FUN_1446e940c(local_60,&local_40);
  local_40 = L"DefaultToolName";
  local_38 = 0xf;
  FUN_140208c1e(local_58,local_60,local_5c,&local_40);
  FUN_140008f88(param_1 + 0x11,local_58);
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe6954 FUN_140fe6954 body=257 status=ok
// SIG undefined FUN_140fe6954(void)

undefined8
FUN_140fe6954(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_d8 = FUN_140fe6a56();
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  uStack_c0 = (ulonglong)param_3;
  local_b8 = (ushort)param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe6a56 FUN_140fe6a56 body=221 status=ok
// SIG undefined FUN_140fe6a56(void)

longlong FUN_140fe6a56(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4b608 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1484431eb;
    local_40 = FUN_1418410b5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"InputBehaviorSet",&DAT_14cb4b608,
                  &DAT_1484431ea);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b608;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe6b3c FUN_140fe6b3c body=678 status=ok
// SIG undefined FUN_140fe6b3c(void)

undefined8 * FUN_140fe6b3c(undefined8 *param_1)

{
  FUN_140fe702e();
  *param_1 = &PTR_FUN_14b66ae40;
  param_1[0x72] = &PTR_FUN_14b66b4d0;
  param_1[0x73] = &PTR_FUN_14b66b4f0;
  param_1[0x74] = &PTR_FUN_14b66b520;
  param_1[0x75] = &PTR_FUN_14b66b530;
  param_1[0x76] = &PTR_FUN_14b66b5a0;
  param_1[0x77] = &PTR_FUN_14b66b5d0;
  param_1[0x78] = &PTR_FUN_14b66b600;
  param_1[0x7f] = &PTR_FUN_14b66b6b0;
  param_1[0x80] = &PTR_FUN_14b66b720;
  param_1[0x81] = &PTR_FUN_14b66b790;
  param_1[0x82] = &PTR_FUN_14b66b7c0;
  param_1[0x83] = &PTR_FUN_14b66b800;
  param_1[0x84] = &PTR_FUN_14b66b8a0;
  param_1[0x85] = &PTR_FUN_14b66b8c0;
  param_1[0x89] = &PTR_FUN_14b66b8e0;
  param_1[0x8a] = &PTR_FUN_14b66b9a0;
  param_1[0x8b] = &PTR_FUN_14b66ba20;
  param_1[0x8c] = &PTR_FUN_14b66ba70;
  param_1[0x8d] = &PTR_FUN_14b66bab0;
  param_1[0x8e] = &PTR_FUN_14b66bad0;
  param_1[0x8f] = &PTR_FUN_14b66baf0;
  param_1[0x90] = &PTR_FUN_14b66bb10;
  param_1[0x91] = &PTR_FUN_14b66bb30;
  param_1[0x92] = &PTR_FUN_14b66bb50;
  param_1[0x93] = &PTR_FUN_14b66bb70;
  param_1[0x94] = &PTR_FUN_14b66bb90;
  param_1[0x95] = &PTR_FUN_14b66bbb0;
  param_1[0x96] = &PTR_FUN_14b66bbd0;
  param_1[0x34b] = &PTR_FUN_14b66bbf0;
  param_1[0x352] = &PTR_FUN_14b66bc00;
  param_1[0x353] = &PTR_FUN_14b66bc40;
  param_1[0x354] = &PTR_FUN_14b66bc80;
  param_1[0x355] = &PTR_FUN_14b66bcd0;
  param_1[0x356] = &PTR_FUN_14b66bd00;
  param_1[0x359] = &PTR_FUN_14b66bd40;
  param_1[0x35a] = &PTR_FUN_14b66bd50;
  param_1[0x35b] = &PTR_FUN_14b66bd80;
  param_1[0x35c] = &PTR_FUN_14b66be20;
  *(undefined2 *)(param_1 + 0x4cf) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x267a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x267c) = 0x44480000;
  *(undefined1 *)(param_1 + 0x4d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2684) = 0x43af0000437a0000;
  *(undefined1 *)((longlong)param_1 + 0x268c) = 0;
  *(undefined4 *)(param_1 + 0x4d2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2694) = 0;
  param_1[0x4d3] = 0;
  *(undefined1 *)(param_1 + 0x4d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26a4) = 0x4248000043160000;
  FUN_140fe6de2(param_1);
  return param_1;
}



// FUNCTION 140fe6de2 FUN_140fe6de2 body=587 status=ok
// SIG undefined FUN_140fe6de2(void)

void FUN_140fe6de2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0x26b0) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x26b0) + 0x4d4) != '\x01')) goto LAB_140fe6ebf;
  if (DAT_14cae8b20 == 0) {
    local_40 = &local_28;
    local_28 = (code *)&LAB_14355090c;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_147b8e16d;
    local_50 = (code *)&LAB_140810a38;
    local_58 = L"Engine";
    local_60 = 0x800000000;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x3f0;
    FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
  }
  lVar2 = DAT_14cae8b20;
  if (DAT_14c951858 == 0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
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
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 == 0) {
    cVar3 = FUN_1449e2a3e(param_1);
    uVar5 = 2;
    if (cVar3 == '\0') goto LAB_140fe6e98;
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         (lVar6 = lVar4,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
         lVar2 + 0x30)) {
        lVar6 = 0;
      }
    } while ((lVar6 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
    cVar3 = FUN_1449e2a3e(param_1);
    uVar5 = 2;
    if ((cVar3 == '\0') &&
       (((lVar6 == 0 || (*(longlong *)(lVar6 + 0xc0) == 0)) ||
        (*(longlong *)(*(longlong *)(lVar6 + 0xc0) + 0x30) != lVar6)))) {
LAB_140fe6e98:
      uVar5 = 1;
    }
  }
  FUN_14081ae08(param_1,uVar5);
  FUN_1405e4918(param_1,0x3f800000);
  *(undefined4 *)(param_1 + 0x19c) = 0x3f800000;
LAB_140fe6ebf:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fe702e FUN_140fe702e body=666 status=ok
// SIG undefined FUN_140fe702e(void)

undefined8 * FUN_140fe702e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14064ffa8(param_1,uVar1);
  *param_1 = &PTR_FUN_14b669e30;
  param_1[0x72] = &PTR_FUN_14b66a4a0;
  param_1[0x73] = &PTR_FUN_14b66a4c0;
  param_1[0x74] = &PTR_FUN_14b66a4f0;
  param_1[0x75] = &PTR_FUN_14b66a500;
  param_1[0x76] = &PTR_FUN_14b66a570;
  param_1[0x77] = &PTR_FUN_14b66a5a0;
  param_1[0x78] = &PTR_FUN_14b66a5d0;
  param_1[0x7f] = &PTR_FUN_14b66a680;
  param_1[0x80] = &PTR_FUN_14b66a6f0;
  param_1[0x81] = &PTR_FUN_14b66a760;
  param_1[0x82] = &PTR_FUN_14b66a790;
  param_1[0x83] = &PTR_FUN_14b66a7d0;
  param_1[0x84] = &PTR_FUN_14b66a870;
  param_1[0x85] = &PTR_FUN_14b66a890;
  param_1[0x89] = &PTR_FUN_14b66a8b0;
  param_1[0x8a] = &PTR_FUN_14b66a970;
  param_1[0x8b] = &PTR_FUN_14b66a9f0;
  param_1[0x8c] = &PTR_FUN_14b66aa40;
  param_1[0x8d] = &PTR_FUN_14b66aa80;
  param_1[0x8e] = &PTR_FUN_14b66aaa0;
  param_1[0x8f] = &PTR_FUN_14b66aac0;
  param_1[0x90] = &PTR_FUN_14b66aae0;
  param_1[0x91] = &PTR_FUN_14b66ab00;
  param_1[0x92] = &PTR_FUN_14b66ab20;
  param_1[0x93] = &PTR_FUN_14b66ab40;
  param_1[0x94] = &PTR_FUN_14b66ab60;
  param_1[0x95] = &PTR_FUN_14b66ab80;
  param_1[0x96] = &PTR_FUN_14b66aba0;
  param_1[0x34b] = &PTR_FUN_14b66abc0;
  param_1[0x352] = &PTR_FUN_14b66abd0;
  param_1[0x353] = &PTR_FUN_14b66ac10;
  param_1[0x354] = &PTR_FUN_14b66ac50;
  param_1[0x355] = &PTR_FUN_14b66aca0;
  param_1[0x356] = &PTR_FUN_14b66acd0;
  param_1[0x359] = &PTR_FUN_14b66ad10;
  param_1[0x35a] = &PTR_FUN_14b66ad20;
  param_1[0x35b] = &PTR_FUN_14b66ad50;
  param_1[0x35c] = &PTR_FUN_14b66adf0;
  param_1[0x4c1] = 0;
  param_1[0x4c2] = 0;
  param_1[0x4bf] = 0;
  param_1[0x4c0] = 0;
  param_1[0x4c3] = 2;
  *(undefined4 *)(param_1 + 0x4c4) = 0x3f800000;
  param_1[0x4c9] = 0;
  param_1[0x4ca] = 0;
  param_1[0x4c7] = 0;
  param_1[0x4c8] = 0;
  param_1[0x4c5] = 0;
  param_1[0x4c6] = 0;
  *(undefined4 *)(param_1 + 0x4cb) = 0xf00000d0;
  param_1[0x4cc] = 0;
  *(undefined4 *)(param_1 + 0x4cd) = 0x3f800000;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  return param_1;
}



// FUNCTION 140fe72c8 FUN_140fe72c8 body=2338 status=ok
// SIG undefined FUN_140fe72c8(void)

void FUN_140fe72c8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  code *local_68;
  longlong lStack_60;
  wchar_t local_58 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140655f5e();
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar7 = (**(code **)(*param_2 + 8))(param_2);
    lVar8 = FUN_140fe7bec();
    if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
        lVar8 + 0x30)) {
      *(longlong **)(param_1 + 0x2500) = param_2;
      plVar13 = *(longlong **)(param_1 + -0x238);
      if (plVar13 == (longlong *)0x0) goto LAB_140fe781c;
      if (DAT_14cac6e60 == 0) {
        local_a0 = &local_68;
        local_68 = FUN_144a7958c;
        local_90 = FUN_14081d0ea;
        local_98 = FUN_142b47bc4;
        local_a8 = &LAB_1478989f1;
        local_b0 = &LAB_146391124;
        local_b8 = L"Engine";
        local_c0 = 0x10000000000;
        local_c8 = 0x10000005;
        local_d0 = 0x10;
        local_d8 = 0x620;
        FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
        plVar13 = *(longlong **)(param_1 + -0x238);
        if (plVar13 == (longlong *)0x0) goto LAB_140fe781c;
      }
      if (((DAT_14cac6e60 == 0) || (lVar7 = plVar13[2], lVar7 == 0)) ||
         ((*(int *)(lVar7 + 0x38) < *(int *)(DAT_14cac6e60 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8)
           != DAT_14cac6e60 + 0x30)))) goto LAB_140fe781c;
      lVar7 = *(longlong *)(param_1 + 0x2500);
      lVar8 = *(longlong *)(lVar7 + 0x460);
      if (lVar8 == 0) {
        uVar11 = FUN_1457deb06();
        lVar8 = FUN_14477b664(uVar11);
        *(longlong *)(lVar7 + 0x460) = lVar8;
      }
      lVar1 = param_1 + -0x400;
      lVar10 = *(longlong *)(lVar7 + 0x468);
      if (lVar10 == 0) {
        if ((lVar8 != 0) && (*(longlong *)(lVar7 + 0x458) != 0)) {
          plVar9 = *(longlong **)(lVar8 + 0xb8);
          if ((plVar9 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar5 == '\0')) {
            *(undefined8 *)(lVar7 + 0x468) = 0;
          }
          else {
            uVar11 = (**(code **)(*plVar9 + 0x110))(plVar9);
            lVar10 = FUN_144aff482(uVar11,(longlong *)(lVar7 + 0x458));
            *(longlong *)(lVar7 + 0x468) = lVar10;
            if (lVar10 != 0) goto LAB_140fe73c9;
          }
        }
      }
      else {
LAB_140fe73c9:
        if (*(char *)(lVar10 + 0x1c8) == '\x01') {
          (**(code **)(*plVar13 + 0x898))(plVar13,*(undefined4 *)(lVar10 + 0x1cc));
        }
        if (*(char *)(lVar10 + 0x1d0) == '\x01') {
          (**(code **)(*plVar13 + 0x8a8))(plVar13,*(undefined4 *)(lVar10 + 0x1d4));
        }
        if (*(char *)(lVar10 + 0x1d8) == '\x01') {
          (**(code **)(*plVar13 + 0x8d0))(plVar13,0,*(undefined4 *)(lVar10 + 0x1dc),1);
        }
        lVar7 = *(longlong *)(lVar10 + 0x110);
        if (lVar7 == 0) {
          uVar11 = FUN_1405bb4b8();
          lVar7 = FUN_14477b664(uVar11);
          *(longlong *)(lVar10 + 0x110) = lVar7;
        }
        if (*(longlong *)(lVar10 + 0x118) == 0) {
          if ((lVar7 != 0) && (*(longlong *)(lVar10 + 0x108) != 0)) {
            plVar9 = *(longlong **)(lVar7 + 0xb8);
            if ((plVar9 == (longlong *)0x0) ||
               (cVar5 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar5 == '\0')) {
              *(undefined8 *)(lVar10 + 0x118) = 0;
            }
            else {
              uVar11 = (**(code **)(*plVar9 + 0x110))(plVar9);
              lVar7 = FUN_144aff482(uVar11,(longlong *)(lVar10 + 0x108));
              *(longlong *)(lVar10 + 0x118) = lVar7;
              if (lVar7 != 0) goto LAB_140fe7449;
            }
          }
        }
        else {
LAB_140fe7449:
          FUN_1408196e4(plVar13 + 0xb3,lVar1);
          FUN_140fe7c88(&local_78);
          if (lVar1 == 0) {
            uVar15 = 0;
            uVar16 = 0;
          }
          else {
            uVar12 = *(uint *)(param_1 + -0x3f4);
            uVar16 = (ulonglong)uVar12;
            if ((int)uVar12 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            uVar6 = *(uint *)(lVar7 + 0x10);
            if (*(uint *)(lVar7 + 0x10) == 0) {
              LOCK();
              iVar2 = DAT_14c964868 + 1;
              UNLOCK();
              uVar14 = DAT_14c964868 + 1;
              bVar17 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar2;
              if (bVar17) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                             );
              }
              LOCK();
              uVar6 = *(uint *)(lVar7 + 0x10);
              bVar17 = uVar6 == 0;
              if (bVar17) {
                *(uint *)(lVar7 + 0x10) = uVar14;
                uVar6 = 0;
              }
              UNLOCK();
              if (bVar17) {
                uVar6 = uVar14;
              }
            }
            uVar15 = (ulonglong)uVar6;
            if (local_78 == 0) {
              local_78 = 0;
            }
            else if (uVar6 == 0) {
              uVar15 = 0;
            }
            else if ((((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) &&
                     (plVar9 = (longlong *)
                               ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
                     plVar9 != (longlong *)0x0)) &&
                    (((*(uint *)(plVar9 + 2) == uVar6 && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)
                      ) && (*plVar9 != 0)))) {
              FUN_1400796d0(*(undefined8 *)(*plVar9 + 0x10),local_78,1);
            }
          }
          local_68 = (code *)(uVar16 | uVar15 << 0x20);
          lStack_60 = local_78;
          FUN_1400dccb8(plVar13 + 0xb3,&local_70);
          bVar3 = FUN_140819c20(plVar13,local_70,&local_68);
          *(byte *)(plVar13 + 0xb3) = *(byte *)(plVar13 + 0xb3) | bVar3;
        }
      }
      if (*(char *)(param_1 + -0x288) == '\x03') {
        uVar4 = (**(code **)(*plVar13 + 0x880))(plVar13);
        *(undefined1 *)(param_1 + 0x2430) = uVar4;
      }
      lVar7 = (**(code **)(*plVar13 + 0x7b8))(plVar13,0,1,0xffffffff);
      if (lVar7 != 0) {
        *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 0x40;
      }
      if (*(char *)((longlong)plVar13 + 0x59b) == '\x01') {
        FUN_1401895dc((longlong)plVar13 + 0x59b,&local_68);
        uVar4 = FUN_140819828(plVar13,local_68,lVar1);
        *(undefined1 *)((longlong)plVar13 + 0x59b) = uVar4;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cbc5678) && (FUN_144b3d300(&DAT_14cbc5678), DAT_14cbc5678 == -1))
      {
        builtin_wcsncpy(local_58,L"entWake",8);
        local_68 = (code *)0x6f0043006e004f;
        lStack_60 = 0x6e006f0070006d;
        FUN_1446f470e(&DAT_14cbc5670,&local_68,1);
        _Init_thread_footer(&DAT_14cbc5678);
      }
      lVar7 = DAT_14cbc5670;
      uVar15 = 0;
      if (lVar1 == 0) {
        uVar16 = 0;
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(param_1 + -0x3f4);
        if ((int)uVar12 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        uVar6 = *(uint *)(lVar8 + 0x10);
        local_88 = param_1;
        if (*(uint *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          uVar14 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar17) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                         );
          }
          LOCK();
          uVar6 = *(uint *)(lVar8 + 0x10);
          bVar17 = uVar6 == 0;
          if (bVar17) {
            *(uint *)(lVar8 + 0x10) = uVar14;
            uVar6 = 0;
          }
          UNLOCK();
          if (bVar17) {
            uVar6 = uVar14;
          }
        }
        param_1 = local_88;
        uVar16 = (ulonglong)uVar6;
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else if (uVar6 == 0) {
          uVar16 = 0;
        }
        else if (((((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) &&
                  (plVar9 = (longlong *)
                            ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
                  plVar9 != (longlong *)0x0)) &&
                 ((*(uint *)(plVar9 + 2) == uVar6 && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0))))
                && (*plVar9 != 0)) {
          FUN_1400796d0(*(undefined8 *)(*plVar9 + 0x10),lVar7,1);
        }
      }
      local_68 = (code *)((ulonglong)uVar12 | uVar16 << 0x20);
      lStack_60 = lVar7;
      FUN_1401895dc((longlong)plVar13 + 0x59b,&local_70);
      bVar3 = FUN_140819c20(plVar13,local_70,&local_68);
      *(byte *)((longlong)plVar13 + 0x59b) = *(byte *)((longlong)plVar13 + 0x59b) | bVar3;
      FUN_140fe7c26((longlong)plVar13 + 0x59c,lVar1);
      FUN_140fe7d3a(&local_80);
      if (lVar1 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(param_1 + -0x3f4);
        if ((int)uVar12 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        uVar6 = *(uint *)(lVar7 + 0x10);
        if (*(uint *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          uVar14 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar17) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar14);
          }
          LOCK();
          uVar6 = *(uint *)(lVar7 + 0x10);
          bVar17 = uVar6 == 0;
          if (bVar17) {
            *(uint *)(lVar7 + 0x10) = uVar14;
            uVar6 = 0;
          }
          UNLOCK();
          if (bVar17) {
            uVar6 = uVar14;
          }
        }
        uVar15 = (ulonglong)uVar6;
        if (local_80 == 0) {
          local_80 = 0;
        }
        else if (uVar6 == 0) {
          uVar15 = 0;
        }
        else if (((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) &&
                ((plVar9 = (longlong *)
                           ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
                 plVar9 != (longlong *)0x0 &&
                 (((*(uint *)(plVar9 + 2) == uVar6 && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0))
                  && (*plVar9 != 0)))))) {
          FUN_1400796d0(*(undefined8 *)(*plVar9 + 0x10),local_80,1);
        }
      }
      local_68 = (code *)((ulonglong)uVar12 | uVar15 << 0x20);
      lStack_60 = local_80;
      FUN_1401892b6((longlong)plVar13 + 0x59c,&local_70);
      bVar3 = FUN_140819c20(plVar13,local_70,&local_68);
      *(byte *)((longlong)plVar13 + 0x59c) = *(byte *)((longlong)plVar13 + 0x59c) | bVar3;
      goto LAB_140fe781c;
    }
  }
  *(undefined8 *)(param_1 + 0x2500) = 0;
LAB_140fe781c:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fe7bec FUN_140fe7bec body=57 status=ok
// SIG undefined FUN_140fe7bec(void)

void FUN_140fe7bec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9fb98 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9fb98 = FUN_140002ddd(FUN_1465a6bb2,uVar1,L"CarryableObjectDef");
  }
  return;
}



// FUNCTION 140fe7c26 FUN_140fe7c26 body=96 status=ok
// SIG undefined FUN_140fe7c26(void)

void FUN_140fe7c26(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_1 == '\x01') {
    FUN_1401892b6(param_1,&local_28);
    cVar1 = FUN_140819828(param_1 + -0x59c,local_28,param_2);
    *param_1 = cVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe7c88 FUN_140fe7c88 body=176 status=ok
// SIG undefined FUN_140fe7c88(void)

undefined8 * FUN_140fe7c88(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc56e8) {
    FUN_144b3d300(&DAT_14cbc56e8);
    if (DAT_14cbc56e8 == -1) {
      builtin_wcsncpy(local_38 + 8,L"llision",8);
      builtin_wcsncpy(local_38,L"OnMeshCo",8);
      FUN_1446f470e(&DAT_14cbc56e0,local_38,1);
      _Init_thread_footer(&DAT_14cbc56e8);
    }
  }
  *param_1 = DAT_14cbc56e0;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe7d3a FUN_140fe7d3a body=182 status=ok
// SIG undefined FUN_140fe7d3a(void)

undefined8 * FUN_140fe7d3a(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc56f4) {
    FUN_144b3d300(&DAT_14cbc56f4);
    if (DAT_14cbc56f4 == -1) {
      builtin_wcsncpy(local_38 + 8,L"entSleep",9);
      builtin_wcsncpy(local_38,L"OnCompon",8);
      FUN_1446f470e(&DAT_14cbc56ec,local_38,1);
      _Init_thread_footer(&DAT_14cbc56f4);
    }
  }
  *param_1 = DAT_14cbc56ec;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe7df8 FUN_140fe7df8 body=228 status=ok
// SIG undefined FUN_140fe7df8(void)

longlong FUN_140fe7df8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb0f438 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14637007c;
    local_38 = &LAB_147da52f7;
    local_40 = &LAB_14640ca25;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x3c8;
    FUN_14081cfa3(L"/Script/Engine",L"Volume",&DAT_14cb0f438,&DAT_147da52f6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0f438;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe7ede FUN_140fe7ede body=72 status=ok
// SIG undefined FUN_140fe7ede(void)

void FUN_140fe7ede(longlong param_1)

{
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140a49dbc(param_1);
  return;
}



// FUNCTION 140fe7f26 FUN_140fe7f26 body=114 status=ok
// SIG undefined FUN_140fe7f26(void)

void FUN_140fe7f26(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b473650;
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140fe7f98 FUN_140fe7f98 body=188 status=ok
// SIG undefined FUN_140fe7f98(void)

void FUN_140fe7f98(longlong *param_1)

{
  FUN_140f9c02e(param_1[0x10],(int)param_1[0x11]);
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe8054(param_1[0xe],(int)param_1[0xf]);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc] + 0x10))();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140fe8054 FUN_140fe8054 body=50 status=ok
// SIG undefined FUN_140fe8054(void)

void FUN_140fe8054(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140fe8086 FUN_140fe8086 body=270 status=ok
// SIG undefined FUN_140fe8086(void)

undefined8 FUN_140fe8086(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140fe818e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140fe818e;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_140fe818e:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140fe813c;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_140fe813c;
    }
  }
  uVar6 = 0;
LAB_140fe813c:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe81fe FUN_140fe81fe body=40 status=ok
// SIG undefined FUN_140fe81fe(void)

undefined8 FUN_140fe81fe(undefined8 param_1,int param_2)

{
  FUN_140fe8226();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fe8226 FUN_140fe8226 body=488 status=ok
// SIG undefined FUN_140fe8226(void)

void FUN_140fe8226(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_14b33eb80;
  plVar3 = (longlong *)param_1[0x2f];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x2c];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x29];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  lVar5 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x18) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar6 = *(int *)(param_1 + 0x18) + -1;
      lVar4 = (longlong)iVar6 * 0x88;
      lVar2 = DAT_14c9a3d60 + lVar4;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar4),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar4));
      if (*(longlong *)(lVar5 + 0x70 + lVar4) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar6,1);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  lVar5 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0xb4) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar6 = *(int *)((longlong)param_1 + 0xb4) + -1;
      lVar4 = (longlong)iVar6 * 0x88;
      lVar2 = DAT_14c9a3d60 + lVar4;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar4),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar4));
      if (*(longlong *)(lVar5 + 0x70 + lVar4) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar6,1);
    }
    *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  }
  if (param_1[0xd] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140fe8414 FUN_140fe8414 body=57 status=ok
// SIG undefined FUN_140fe8414(void)

void FUN_140fe8414(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f6b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f6b8 = FUN_140002ddd(FUN_1465a4ceb,uVar1,L"CameraModeBehavior_GrappleFocus");
  }
  return;
}



// FUNCTION 140fe844e FUN_140fe844e body=3232 status=ok
// SIG undefined FUN_140fe844e(void)

void FUN_140fe844e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  int local_bc;
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  longlong local_70;
  longlong *local_68;
  uint *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((longlong)*(int *)(param_1 + 0x1e0) != 0) {
    plVar12 = *(longlong **)(param_1 + 0x1d8);
    local_b0 = plVar12 + *(int *)(param_1 + 0x1e0);
    local_c8 = (longlong *)(param_1 + 0x188);
    local_b8 = param_1 + 0x1c0;
    do {
      lVar9 = *plVar12;
      local_a8 = plVar12;
      if (lVar9 != 0) {
        if ((longlong)*(int *)(lVar9 + 0x68) != 0) {
          plVar12 = *(longlong **)(lVar9 + 0x60);
          plVar16 = plVar12 + (longlong)*(int *)(lVar9 + 0x68) * 3;
          do {
            lVar11 = plVar12[1];
            if (lVar11 == 0) {
              uVar8 = FUN_140bd9786();
              lVar11 = FUN_14477b664(uVar8);
              plVar12[1] = lVar11;
            }
            lVar14 = plVar12[2];
            if (lVar14 == 0) {
              if ((lVar11 != 0) && (*plVar12 != 0)) {
                plVar4 = *(longlong **)(lVar11 + 0xb8);
                if ((plVar4 == (longlong *)0x0) ||
                   (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
                  plVar12[2] = 0;
                }
                else {
                  uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
                  lVar14 = FUN_144aff482(uVar8,plVar12);
                  plVar12[2] = lVar14;
                  if (lVar14 != 0) {
                    lVar11 = plVar12[1];
                    goto LAB_140fe8505;
                  }
                }
              }
            }
            else {
LAB_140fe8505:
              if (lVar11 == 0) {
                uVar8 = FUN_140bd9786();
                lVar11 = FUN_14477b664(uVar8);
                plVar12[1] = lVar11;
                lVar14 = plVar12[2];
                if (lVar14 == 0) {
                  if ((lVar11 != 0) && (*plVar12 != 0)) {
                    plVar4 = *(longlong **)(lVar11 + 0xb8);
                    if ((plVar4 == (longlong *)0x0) ||
                       (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
                      plVar12[2] = 0;
                    }
                    else {
                      uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
                      lVar14 = FUN_144aff482(uVar8,plVar12);
                      plVar12[2] = lVar14;
                      if (lVar14 != 0) goto LAB_140fe850e;
                    }
                  }
                  goto LAB_140fe86be;
                }
              }
LAB_140fe850e:
              if (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x1bc)) {
                puVar10 = *(uint **)(lVar14 + 8);
                if (*(uint **)(lVar14 + 8) == (uint *)0x0) {
                  puVar10 = &DAT_14c9485f0;
                }
                lVar11 = *(longlong *)(param_1 + 0x1c8);
                if (*(longlong *)(param_1 + 0x1c8) == 0) {
                  lVar11 = local_b8;
                }
                iVar13 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0x1d0) - 1U & *puVar10) *
                                           4);
                if (iVar13 != -1) {
                  do {
                    if (*(uint *)(*local_c8 + (longlong)iVar13 * 0x40) == *puVar10)
                    goto LAB_140fe86be;
                    iVar13 = *(int *)((longlong)iVar13 * 0x40 + *local_c8 + 0x38);
                  } while (iVar13 != -1);
                }
              }
              FUN_140fe910a(&local_70,lVar14);
              if (local_70 != 0) {
                local_60 = *(uint **)(lVar14 + 8);
                if (*(uint **)(lVar14 + 8) == (uint *)0x0) {
                  local_60 = &DAT_14c9485f0;
                }
                local_58 = &local_70;
                FUN_140fe9162(local_c8,&local_90,&local_60);
                lVar11 = local_70;
                local_80 = (undefined8 *)0x0;
                local_78 = 0;
                FUN_1446efa72(&local_80,0,3,0x10);
                puVar5 = local_80;
                local_78 = 3;
                *local_80 = &PTR_LAB_149e020b0;
                LOCK();
                UNLOCK();
                lVar7 = DAT_14c758608 + 1;
                lVar14 = DAT_14c758608 + 1;
                if (lVar7 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar7 = DAT_14c758608 + 2;
                  lVar14 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar14;
                local_80[2] = lVar7;
                *local_80 = &PTR_FUN_14b9a7dd0;
                local_80[3] = 0;
                if (param_1 == 0) {
                  iVar13 = 0;
                }
                else {
                  uVar3 = *(uint *)(param_1 + 0xc);
                  *(uint *)(local_80 + 3) = uVar3;
                  if ((int)uVar3 < DAT_14c9647dc) {
                    lVar14 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                  }
                  else {
                    lVar14 = 0;
                  }
                  iVar13 = *(int *)(lVar14 + 0x10);
                  if (*(int *)(lVar14 + 0x10) == 0) {
                    LOCK();
                    iVar13 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar15 = DAT_14c964868 + 1;
                    bVar17 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar13;
                    if (bVar17) {
                      local_bc = iVar15;
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar15);
                      iVar15 = local_bc;
                    }
                    LOCK();
                    iVar13 = *(int *)(lVar14 + 0x10);
                    bVar17 = iVar13 == 0;
                    if (bVar17) {
                      *(int *)(lVar14 + 0x10) = iVar15;
                      iVar13 = 0;
                    }
                    UNLOCK();
                    if (bVar17) {
                      iVar13 = iVar15;
                    }
                  }
                }
                *(int *)((longlong)puVar5 + 0x1c) = iVar13;
                puVar5[4] = &DAT_141125d62;
                *(undefined4 *)(puVar5 + 5) = 0;
                FUN_140844560(lVar11,&local_60,&local_80);
              }
              plVar4 = local_68;
              if (local_68 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_68 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_68)(local_68);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar4 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar4 + 0x10))(plVar4);
                  }
                }
              }
            }
LAB_140fe86be:
            plVar12 = plVar12 + 3;
          } while (plVar12 != plVar16);
        }
        if ((longlong)*(int *)(lVar9 + 0x48) != 0) {
          plVar12 = *(longlong **)(lVar9 + 0x40);
          plVar16 = plVar12 + (longlong)*(int *)(lVar9 + 0x48) * 3;
          do {
            lVar11 = plVar12[1];
            if (lVar11 == 0) {
              uVar8 = FUN_14050c9fe();
              lVar11 = FUN_14477b664(uVar8);
              plVar12[1] = lVar11;
            }
            lVar14 = plVar12[2];
            if (lVar14 == 0) {
              if ((lVar11 != 0) && (*plVar12 != 0)) {
                plVar4 = *(longlong **)(lVar11 + 0xb8);
                if ((plVar4 == (longlong *)0x0) ||
                   (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
                  plVar12[2] = 0;
                }
                else {
                  uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
                  lVar14 = FUN_144aff482(uVar8,plVar12);
                  plVar12[2] = lVar14;
                  if (lVar14 != 0) {
                    lVar11 = plVar12[1];
                    goto LAB_140fe88fc;
                  }
                }
              }
            }
            else {
LAB_140fe88fc:
              if (lVar11 == 0) {
                uVar8 = FUN_14050c9fe(lVar14);
                lVar11 = FUN_14477b664(uVar8);
                plVar12[1] = lVar11;
                lVar14 = plVar12[2];
                if (((lVar14 == 0) && (lVar14 = 0, lVar11 != 0)) && (*plVar12 != 0)) {
                  plVar4 = *(longlong **)(lVar11 + 0xb8);
                  if ((plVar4 == (longlong *)0x0) ||
                     (cVar6 = (**(code **)(*plVar4 + 0x108))(), cVar6 == '\0')) {
                    lVar14 = 0;
                  }
                  else {
                    uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
                    lVar14 = FUN_144aff482(uVar8,plVar12);
                  }
                  plVar12[2] = lVar14;
                }
              }
              lVar11 = FUN_140bd958e(lVar14,2);
              if (lVar11 != 0) {
                if (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x1bc)) {
                  puVar10 = *(uint **)(lVar11 + 8);
                  if (*(uint **)(lVar11 + 8) == (uint *)0x0) {
                    puVar10 = &DAT_14c9485f0;
                  }
                  lVar14 = *(longlong *)(param_1 + 0x1c8);
                  if (*(longlong *)(param_1 + 0x1c8) == 0) {
                    lVar14 = local_b8;
                  }
                  iVar13 = *(int *)(lVar14 + (ulonglong)(*(int *)(param_1 + 0x1d0) - 1U & *puVar10)
                                             * 4);
                  if (iVar13 != -1) {
                    do {
                      if (*(uint *)(*local_c8 + (longlong)iVar13 * 0x40) == *puVar10)
                      goto LAB_140fe8aa4;
                      iVar13 = *(int *)((longlong)iVar13 * 0x40 + *local_c8 + 0x38);
                    } while (iVar13 != -1);
                  }
                }
                FUN_140fe910a(&local_70,lVar11);
                if (local_70 != 0) {
                  local_60 = *(uint **)(lVar11 + 8);
                  if (*(uint **)(lVar11 + 8) == (uint *)0x0) {
                    local_60 = &DAT_14c9485f0;
                  }
                  local_58 = &local_70;
                  FUN_140fe9162(local_c8,&local_a0);
                  lVar11 = local_70;
                  local_90 = (undefined8 *)0x0;
                  local_88 = 0;
                  FUN_1446efa72(&local_90,0,3,0x10);
                  puVar5 = local_90;
                  local_88 = 3;
                  *local_90 = &PTR_LAB_149e020b0;
                  LOCK();
                  UNLOCK();
                  lVar7 = DAT_14c758608 + 1;
                  lVar14 = DAT_14c758608 + 1;
                  if (lVar7 == 0) {
                    LOCK();
                    UNLOCK();
                    lVar7 = DAT_14c758608 + 2;
                    lVar14 = DAT_14c758608 + 2;
                  }
                  DAT_14c758608 = lVar14;
                  local_90[2] = lVar7;
                  *local_90 = &PTR_FUN_14b9a7dd0;
                  local_90[3] = 0;
                  FUN_14485c47a(local_90 + 3,param_1);
                  puVar5[4] = &DAT_141125d62;
                  *(undefined4 *)(puVar5 + 5) = 0;
                  FUN_140844560(lVar11,&local_60,&local_90);
                }
                plVar4 = local_68;
                if (local_68 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_68 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_68)(local_68);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar4 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar4 + 0x10))(plVar4);
                    }
                  }
                }
              }
            }
LAB_140fe8aa4:
            plVar12 = plVar12 + 3;
          } while (plVar12 != plVar16);
        }
        if ((longlong)*(int *)(lVar9 + 0x58) != 0) {
          plVar12 = *(longlong **)(lVar9 + 0x50);
          plVar16 = plVar12 + (longlong)*(int *)(lVar9 + 0x58) * 3;
          do {
            lVar9 = plVar12[1];
            if (lVar9 == 0) {
              uVar8 = FUN_145d88524();
              lVar9 = FUN_14477b664(uVar8);
              plVar12[1] = lVar9;
            }
            lVar11 = plVar12[2];
            if (lVar11 == 0) {
              if ((lVar9 != 0) && (*plVar12 != 0)) {
                plVar4 = *(longlong **)(lVar9 + 0xb8);
                if ((plVar4 == (longlong *)0x0) ||
                   (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
                  plVar12[2] = 0;
                }
                else {
                  uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
                  lVar11 = FUN_144aff482(uVar8,plVar12);
                  plVar12[2] = lVar11;
                  if (lVar11 != 0) {
                    lVar9 = plVar12[1];
                    goto LAB_140fe8b4e;
                  }
                }
              }
            }
            else {
LAB_140fe8b4e:
              if (lVar9 == 0) {
                uVar8 = FUN_145d88524();
                lVar9 = FUN_14477b664(uVar8);
                plVar12[1] = lVar9;
                lVar11 = plVar12[2];
                if (((lVar11 == 0) && (lVar11 = 0, lVar9 != 0)) && (*plVar12 != 0)) {
                  plVar4 = *(longlong **)(lVar9 + 0xb8);
                  if ((plVar4 == (longlong *)0x0) ||
                     (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
                    lVar11 = 0;
                  }
                  else {
                    uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
                    lVar11 = FUN_144aff482(uVar8,plVar12);
                  }
                  plVar12[2] = lVar11;
                }
              }
              lVar9 = *(longlong *)(lVar11 + 0x20);
              if (lVar9 == 0) {
                uVar8 = FUN_140bd9786();
                lVar9 = FUN_14477b664(uVar8);
                *(longlong *)(lVar11 + 0x20) = lVar9;
              }
              if (*(longlong *)(lVar11 + 0x28) == 0) {
                if ((lVar9 != 0) && (*(longlong *)(lVar11 + 0x18) != 0)) {
                  plVar4 = *(longlong **)(lVar9 + 0xb8);
                  if ((plVar4 == (longlong *)0x0) ||
                     (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
LAB_140fe90ef:
                    *(undefined8 *)(lVar11 + 0x28) = 0;
                  }
                  else {
                    uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
                    lVar9 = FUN_144aff482(uVar8,(longlong *)(lVar11 + 0x18));
                    *(longlong *)(lVar11 + 0x28) = lVar9;
                    if (lVar9 != 0) goto LAB_140fe8b7c;
                  }
                }
              }
              else {
LAB_140fe8b7c:
                lVar9 = plVar12[1];
                if (lVar9 == 0) {
                  uVar8 = FUN_145d88524();
                  lVar9 = FUN_14477b664(uVar8);
                  plVar12[1] = lVar9;
                }
                lVar11 = plVar12[2];
                if (((lVar11 == 0) && (lVar11 = 0, lVar9 != 0)) && (*plVar12 != 0)) {
                  plVar4 = *(longlong **)(lVar9 + 0xb8);
                  if ((plVar4 == (longlong *)0x0) ||
                     (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
                    lVar11 = 0;
                  }
                  else {
                    uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
                    lVar11 = FUN_144aff482(uVar8,plVar12);
                  }
                  plVar12[2] = lVar11;
                }
                lVar9 = *(longlong *)(lVar11 + 0x20);
                if (lVar9 == 0) {
                  uVar8 = FUN_140bd9786();
                  lVar9 = FUN_14477b664(uVar8);
                  *(longlong *)(lVar11 + 0x20) = lVar9;
                }
                lVar14 = *(longlong *)(lVar11 + 0x28);
                if (lVar14 == 0) {
                  if ((lVar9 != 0) && (*(longlong *)(lVar11 + 0x18) != 0)) {
                    plVar4 = *(longlong **)(lVar9 + 0xb8);
                    if ((plVar4 == (longlong *)0x0) ||
                       (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0'))
                    goto LAB_140fe90ef;
                    uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
                    lVar14 = FUN_144aff482(uVar8,(longlong *)(lVar11 + 0x18));
                    *(longlong *)(lVar11 + 0x28) = lVar14;
                    if (lVar14 != 0) goto LAB_140fe8bbd;
                  }
                }
                else {
LAB_140fe8bbd:
                  if (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x1bc)) {
                    puVar10 = *(uint **)(lVar14 + 8);
                    if (*(uint **)(lVar14 + 8) == (uint *)0x0) {
                      puVar10 = &DAT_14c9485f0;
                    }
                    lVar9 = *(longlong *)(param_1 + 0x1c8);
                    if (*(longlong *)(param_1 + 0x1c8) == 0) {
                      lVar9 = local_b8;
                    }
                    iVar13 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x1d0) - 1U & *puVar10)
                                              * 4);
                    if (iVar13 != -1) {
                      do {
                        if (*(uint *)(*local_c8 + (longlong)iVar13 * 0x40) == *puVar10)
                        goto LAB_140fe8d66;
                        iVar13 = *(int *)((longlong)iVar13 * 0x40 + *local_c8 + 0x38);
                      } while (iVar13 != -1);
                    }
                  }
                  FUN_140fe910a(&local_70,lVar14);
                  if (local_70 != 0) {
                    local_60 = *(uint **)(lVar14 + 8);
                    if (*(uint **)(lVar14 + 8) == (uint *)0x0) {
                      local_60 = &DAT_14c9485f0;
                    }
                    local_58 = &local_70;
                    FUN_140fe9162(local_c8,local_4c);
                    lVar9 = local_70;
                    local_a0 = (undefined8 *)0x0;
                    local_98 = 0;
                    FUN_1446efa72(&local_a0,0,3,0x10);
                    puVar5 = local_a0;
                    local_98 = 3;
                    *local_a0 = &PTR_LAB_149e020b0;
                    LOCK();
                    UNLOCK();
                    lVar14 = DAT_14c758608 + 1;
                    lVar11 = DAT_14c758608 + 1;
                    if (lVar14 == 0) {
                      LOCK();
                      UNLOCK();
                      lVar14 = DAT_14c758608 + 2;
                      lVar11 = DAT_14c758608 + 2;
                    }
                    DAT_14c758608 = lVar11;
                    local_a0[2] = lVar14;
                    *local_a0 = &PTR_FUN_14b9a7dd0;
                    local_a0[3] = 0;
                    FUN_14485c47a(local_a0 + 3,param_1);
                    puVar5[4] = &DAT_141125d62;
                    *(undefined4 *)(puVar5 + 5) = 0;
                    FUN_140844560(lVar9,&local_60,&local_a0);
                  }
                  plVar4 = local_68;
                  if (local_68 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_68 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*local_68)(local_68);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar4 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar4 + 0x10))(plVar4);
                      }
                    }
                  }
                }
              }
            }
LAB_140fe8d66:
            plVar12 = plVar12 + 3;
          } while (plVar12 != plVar16);
        }
      }
      plVar12 = local_a8 + 1;
    } while (plVar12 != local_b0);
  }
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  if (*(int *)(param_1 + 0x1e4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fe910a FUN_140fe910a body=88 status=ok
// SIG undefined FUN_140fe910a(void)

undefined8 * FUN_140fe910a(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (((param_2 == 0) || (DAT_14c872bd8 == '\x01')) || (DAT_14cb78590 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar1 = FUN_14050fd64();
    FUN_14088df30(uVar1,param_1,param_2,500,0);
  }
  return param_1;
}



// FUNCTION 140fe9162 FUN_140fe9162 body=325 status=ok
// SIG undefined FUN_140fe9162(void)

undefined4 * FUN_140fe9162(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140fe936e(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  FUN_1447a97f4(local_38,*param_3);
  *(undefined8 *)(local_38 + 10) = *puVar1;
  lVar7 = puVar1[1];
  *(longlong *)(local_38 + 0xc) = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  local_38[0xe] = 0xffffffff;
  local_44 = local_40[0];
  uVar4 = *local_38;
  local_58 = 0;
  cVar2 = FUN_140fe92a8(param_1,uVar4,local_38);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_38[0xf] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_38[0xe] =
           *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140fe9554(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe92a8 FUN_140fe92a8 body=197 status=ok
// SIG undefined FUN_140fe92a8(void)

void FUN_140fe92a8(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 uVar14;
  longlong *plVar15;
  int iVar16;
  
  uVar14 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar14 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar15 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[8];
    }
    iVar16 = *(int *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar16 == -1) {
      uVar14 = 0;
    }
    else {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar16 * 0x40);
        if (*(int *)(*param_1 + (longlong)iVar16 * 0x40) == *param_3) {
          FUN_148858f54(piVar1);
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[8];
          iVar11 = param_3[9];
          iVar12 = param_3[10];
          iVar13 = param_3[0xb];
          *(undefined8 *)(piVar1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
          piVar1[8] = iVar10;
          piVar1[9] = iVar11;
          piVar1[10] = iVar12;
          piVar1[0xb] = iVar13;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_148858eca(param_1,*param_4,1);
          *param_4 = iVar16;
          uVar14 = 1;
          break;
        }
        iVar16 = piVar1[0xe];
        uVar14 = 0;
      } while (iVar16 != -1);
    }
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar14;
  }
  return;
}



// FUNCTION 140fe936e FUN_140fe936e body=485 status=ok
// SIG undefined FUN_140fe936e(void)

int * FUN_140fe936e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1406cd6a8(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x40);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x40) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 140fe9554 FUN_140fe9554 body=539 status=ok
// SIG undefined FUN_140fe9554(void)

void FUN_140fe9554(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x40;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x3c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x38 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_140fe972a;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_140fe972a:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe9780 FUN_140fe9780 body=41 status=ok
// SIG undefined FUN_140fe9780(void)

void FUN_140fe9780(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,1);
  return;
}



// FUNCTION 140fe97c0 FUN_140fe97c0 body=736 status=ok
// SIG undefined FUN_140fe97c0(void)

void FUN_140fe97c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar4 = *(byte *)(param_1 + 0xb8);
  if ((bVar4 & 2) != 0) {
    FUN_14120b744(param_1,0);
    bVar4 = *(byte *)(param_1 + 0xb8);
  }
  *(byte *)(param_1 + 0xb8) = bVar4 & 0xef;
  if ((bVar4 & 8) != 0) {
    *(byte *)(param_1 + 0xb8) = bVar4 & 0xe7;
    plVar6 = (longlong *)FUN_1401654a2(*(undefined8 *)(param_1 + 0x30));
    if (plVar6 != (longlong *)0x0) {
      lVar7 = (**(code **)(*plVar6 + 0x20))(plVar6);
      FUN_140457ffc(lVar7 + 0x18,param_1);
    }
    FUN_140e8bfce(*(undefined8 *)(param_1 + 0x30),param_1);
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar7 = FUN_140519fd4(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x1b0));
      if ((lVar7 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
        FUN_14480f766(lVar7);
      }
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    if (((*(longlong *)(param_1 + 0xd0) != 0) || (*(longlong *)(param_1 + 200) != 0)) &&
       (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1b0), lVar7 != 0)) {
      if (DAT_14cb56270 == 0) {
        local_50 = &local_38;
        local_38 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_1427b09ee;
        local_58 = &LAB_148630fef;
        local_60 = FUN_1464b6a91;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      plVar6 = (longlong *)FUN_144718840(lVar7,DAT_14cb56270);
      if ((plVar6 != (longlong *)0x0) && (lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6), lVar7 != 0)
         ) {
        uStack_28 = 0;
        uStack_24 = 0;
        local_38 = (code *)0x0;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_1c = CONCAT31(uStack_1c._1_3_,0xff);
        if ((*(longlong *)(param_1 + 200) != 0) && (0 < *(int *)(lVar7 + 0x40))) {
          lVar8 = *(longlong *)(lVar7 + 0x38);
          local_38 = *(code **)(lVar8 + 0x30);
          uStack_30 = *(undefined4 *)(lVar8 + 0x38);
          uStack_2c = *(undefined4 *)(lVar8 + 0x3c);
          uStack_28 = *(undefined4 *)(lVar8 + 0x40);
          uStack_24 = *(undefined8 *)(lVar8 + 0x44);
          uStack_1c = *(undefined4 *)(lVar8 + 0x4c);
          cVar5 = FUN_1403ae288();
          if ((cVar5 != '\0') &&
             (lVar8 = FUN_14008e0ae(&local_38), *(longlong *)(param_1 + 200) != 0)) {
            FUN_14480f766(lVar8 + 0x138);
          }
        }
        *(undefined8 *)(param_1 + 200) = 0;
        if (*(longlong *)(param_1 + 0xd0) != 0) {
          iVar3 = *(int *)(lVar7 + 0x58);
          if ((-1 < (longlong)iVar3) && (iVar3 < *(int *)(lVar7 + 0x40))) {
            lVar8 = (longlong)iVar3 * 0x88;
            puVar1 = (undefined8 *)(*(longlong *)(lVar7 + 0x38) + 0x30 + lVar8);
            local_38 = (code *)*puVar1;
            uStack_30 = *(undefined4 *)(puVar1 + 1);
            uStack_2c = *(undefined4 *)((longlong)puVar1 + 0xc);
            puVar2 = (undefined4 *)(*(longlong *)(lVar7 + 0x38) + 0x40 + lVar8);
            uStack_28 = *puVar2;
            uStack_24 = *(undefined8 *)(puVar2 + 1);
            uStack_1c = puVar2[3];
            cVar5 = FUN_1403ae288();
            if ((cVar5 != '\0') &&
               (lVar7 = FUN_14008e0ae(&local_38), *(longlong *)(param_1 + 0xd0) != 0)) {
              FUN_14480f766(lVar7 + 0x138);
            }
          }
        }
        *(undefined8 *)(param_1 + 0xd0) = 0;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fe9aa2 FUN_140fe9aa2 body=322 status=ok
// SIG undefined FUN_140fe9aa2(void)

void FUN_140fe9aa2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1f0);
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0xcc) = 0;
  param_2[0x1b] = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  param_2[0x1d] = 0;
  *(undefined1 *)(param_2 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_2 + 0xf4) = 0xffffffff;
  param_2[0x26] = 0;
  *(undefined4 *)(param_2 + 0x27) = 0;
  param_2[0x23] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  *(undefined8 *)((longlong)param_2 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x144) = 0;
  param_2[0x2a] = 0;
  *(undefined4 *)(param_2 + 0x2b) = 0;
  *param_2 = &PTR_FUN_14a860650;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  *(undefined4 *)(param_2 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_2 + 0x174) = 0;
  *(undefined4 *)(param_2 + 0x2f) = 0;
  *(undefined4 *)((longlong)param_2 + 0x17c) = 0x3ff00000;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0x3ff0000000000000;
  param_2[0x35] = 0x3ff0000000000000;
  param_2[0x36] = 0x3ff0000000000000;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  return;
}



// FUNCTION 140fe9be6 FUN_140fe9be6 body=37 status=ok
// SIG undefined FUN_140fe9be6(void)

void FUN_140fe9be6(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x6a8);
  FUN_140fe9c0c(param_2);
  return;
}



// FUNCTION 140fe9c0c FUN_140fe9c0c body=752 status=ok
// SIG undefined FUN_140fe9c0c(void)

undefined8 * FUN_140fe9c0c(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b77f980;
  lVar3 = 0x18;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar3) = 0;
    ((undefined8 *)((longlong)param_1 + lVar3))[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar3 + 0x20) = 0;
    lVar3 = lVar3 + 0x28;
  } while (lVar3 != 0x108);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x38) = 1;
  lVar3 = 0x1c8;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar3) = 0;
    ((undefined8 *)((longlong)param_1 + lVar3))[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar3 + 0x20) = 0;
    lVar3 = lVar3 + 0x28;
  } while (lVar3 != 0x2e0);
  lVar3 = 0x2e0;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar3) = 0;
    ((undefined8 *)((longlong)param_1 + lVar3))[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar3 + 0x20) = 0;
    lVar3 = lVar3 + 0x28;
  } while (lVar3 != 0x3d0);
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x404) = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  lVar3 = 0x420;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar3) = 0;
    ((undefined8 *)((longlong)param_1 + lVar3))[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar3 + 0x20) = 0;
    lVar3 = lVar3 + 0x28;
  } while (lVar3 != 0x538);
  lVar3 = 0x538;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar3) = 0;
    ((undefined8 *)((longlong)param_1 + lVar3))[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar3 + 0x20) = 0;
    lVar3 = lVar3 + 0x28;
  } while (lVar3 != 0x628);
  *(undefined2 *)(param_1 + 0xc5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x62a) = 0;
  local_40 = "DE_Death";
  local_38 = 8;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  param_1[0xc6] = (ulonglong)uVar2;
  param_1[199] = 0;
  param_1[200] = 0;
  local_40 = "DE_Death_Elemental";
  local_38 = 0x12;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  param_1[0xc9] = (ulonglong)uVar2;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  local_40 = "DE_React_Death_Ally";
  local_38 = 0x13;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  param_1[0xcc] = (ulonglong)uVar2;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  local_40 = "DE_Target_Killed";
  local_38 = 0x10;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  param_1[0xcf] = (ulonglong)uVar2;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  local_40 = "DE_Vehicle_Hit_Enemy";
  local_38 = 0x14;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  param_1[0xd2] = (ulonglong)uVar2;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe9efe FUN_140fe9efe body=241 status=ok
// SIG undefined FUN_140fe9efe(void)

void FUN_140fe9efe(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1403d8a98();
  FUN_1457ded9e(param_1);
  if (0 < *(int *)(param_1 + 0x3f0)) {
    lVar3 = 0;
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 1000) + lVar3) + 0x10))();
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 < *(int *)(param_1 + 0x3f0));
  }
  if (0 < *(int *)(param_1 + 0x400)) {
    lVar3 = 0;
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x3f8) + lVar3) + 0x10))();
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 < *(int *)(param_1 + 0x400));
  }
  FUN_1446ddc76(&local_28,"GameplayDebugger",1);
  uVar1 = FUN_144a52528();
  lVar2 = FUN_14493e38c(uVar1,local_28);
  FUN_140457ffc(lVar2 + 8,param_1);
  FUN_140457ffc(lVar2 + 0x20,param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fea04e FUN_140fea04e body=40 status=ok
// SIG undefined FUN_140fea04e(void)

undefined8 FUN_140fea04e(undefined8 param_1,int param_2)

{
  FUN_140fea076();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fea076 FUN_140fea076 body=1642 status=ok
// SIG undefined FUN_140fea076(void)

void FUN_140fea076(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0dba90;
  plVar1 = param_1 + 0xe7;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xeb) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xea)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xea)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xe0;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xe4) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xe3)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xe3)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xd8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xdc) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xdb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xdb)) {
    FUN_1400020a8(*plVar1);
  }
  if (param_1[0xd3] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0xcb;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xcf) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xce)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xce)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xc3;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 199) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xc6)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xc6)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xbc;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xc0) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xbf)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xbf)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xb5;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xb9) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb8)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb8)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xac;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xb0) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xaf)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xaf)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xa4;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xa8) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xa7)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xa7)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x9d;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xa1) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xa0)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xa0)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x95;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x99) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x98)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x98)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x8e;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x92) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x91)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x91)) {
    FUN_1400020a8(*plVar1);
  }
  param_1[0x3a] = 0;
  FUN_14076ba36(param_1 + 0x3b);
  plVar1 = param_1 + 0x34;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x38) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x37)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x37)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14ac52c60;
  param_1[0x10] = &PTR_FUN_14ac52cf0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 140fea6e0 FUN_140fea6e0 body=60 status=ok
// SIG undefined FUN_140fea6e0(void)

void FUN_140fea6e0(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      FUN_140fea71c(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140fea71c FUN_140fea71c body=77 status=ok
// SIG undefined FUN_140fea71c(void)

void FUN_140fea71c(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140fea76a FUN_140fea76a body=73 status=ok
// SIG undefined FUN_140fea76a(void)

void FUN_140fea76a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b429230;
  plVar3 = *(longlong **)(param_1 + 0x58);
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
  FUN_140fea7c8(param_1 + 0x10);
  return;
}



// FUNCTION 140fea7b4 FUN_140fea7b4 body=9 status=ok
// SIG undefined FUN_140fea7b4(void)

void FUN_140fea7b4(longlong param_1)

{
  FUN_140fea928(param_1 + 0x10);
  return;
}



// FUNCTION 140fea7be FUN_140fea7be body=9 status=ok
// SIG undefined FUN_140fea7be(void)

void FUN_140fea7be(longlong param_1)

{
  FUN_140fea816(param_1 + 0x10);
  return;
}



// FUNCTION 140fea7c8 FUN_140fea7c8 body=78 status=ok
// SIG undefined FUN_140fea7c8(void)

void FUN_140fea7c8(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b429250;
  FUN_144760e21(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140fea80b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140fea816 FUN_140fea816 body=274 status=ok
// SIG undefined FUN_140fea816(void)

void FUN_140fea816(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  *param_1 = &PTR_FUN_14b4290b0;
  lVar7 = param_1[6];
  iVar2 = *(int *)(param_1 + 7);
  if ((longlong)iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(lVar7 + lVar8);
      if (*(int *)(lVar3 + 0x20) != 0) {
        puVar4 = *(undefined8 **)(lVar3 + 0x18);
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,0);
          FUN_1446efa72((longlong *)(lVar3 + 0x18),0,0,0x10);
          *(undefined4 *)(lVar3 + 0x20) = 0;
        }
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar8);
    uVar6 = *(undefined4 *)(param_1 + 7);
    lVar7 = param_1[6];
  }
  FUN_1414280cb(lVar7,uVar6);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b421610;
  plVar5 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar4 = (undefined8 *)*plVar5;
    if (puVar4 == (undefined8 *)0x0) goto LAB_140fea8ef;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar5,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar5 != 0) {
    FUN_1400020a8();
  }
LAB_140fea8ef:
  plVar5 = (longlong *)param_1[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140fea90e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140fea928 FUN_140fea928 body=274 status=ok
// SIG undefined FUN_140fea928(void)

void FUN_140fea928(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  *param_1 = &PTR_FUN_14b429160;
  lVar7 = param_1[6];
  iVar2 = *(int *)(param_1 + 7);
  if ((longlong)iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(lVar7 + lVar8);
      if (*(int *)(lVar3 + 0x20) != 0) {
        puVar4 = *(undefined8 **)(lVar3 + 0x18);
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,0);
          FUN_1446efa72((longlong *)(lVar3 + 0x18),0,0,0x10);
          *(undefined4 *)(lVar3 + 0x20) = 0;
        }
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar8);
    uVar6 = *(undefined4 *)(param_1 + 7);
    lVar7 = param_1[6];
  }
  FUN_1414280cb(lVar7,uVar6);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b421610;
  plVar5 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar4 = (undefined8 *)*plVar5;
    if (puVar4 == (undefined8 *)0x0) goto LAB_140feaa01;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar5,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar5 != 0) {
    FUN_1400020a8();
  }
LAB_140feaa01:
  plVar5 = (longlong *)param_1[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140feaa20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140feaa3a FUN_140feaa3a body=122 status=ok
// SIG undefined FUN_140feaa3a(void)

void FUN_140feaa3a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_140feaa89;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140feaa89:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140feaaa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140feaab4 FUN_140feaab4 body=133 status=ok
// SIG undefined FUN_140feaab4(void)

void FUN_140feaab4(longlong param_1,int param_2)

{
  int iVar1;
  
  param_2 = param_2 - *(int *)(param_1 + 0x138);
  FUN_14083e908(param_1 + 0x130);
  if (0 < param_2) {
    iVar1 = *(int *)(param_1 + 0x368) + param_2;
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    if (*(int *)(param_1 + 0x36c) < iVar1) {
      FUN_140feab3a(param_1 + 0x360);
    }
    param_2 = param_2 + *(int *)(param_1 + 0x388);
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (*(int *)(param_1 + 0x38c) < param_2) {
      FUN_140feab3a(param_1 + 0x380,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 140feab3a FUN_140feab3a body=332 status=ok
// SIG undefined FUN_140feab3a(void)

void FUN_140feab3a(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x48;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140feaba8;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140feaba8:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x48)) {
      uVar5 = uVar3 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x48,8);
  }
  return;
}



// FUNCTION 140feac86 FUN_140feac86 body=102 status=ok
// SIG undefined FUN_140feac86(void)

ulonglong FUN_140feac86(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140feaccf:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140feaccf;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 140fead1e FUN_140fead1e body=210 status=ok
// SIG undefined FUN_140fead1e(void)

void FUN_140fead1e(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((((*(longlong **)(param_1 + 0x68) != (longlong *)0x0) && (*(int *)(param_1 + 100) != 0)) &&
       (uVar2 = *(uint *)(param_1 + 0x60), -1 < (int)uVar2)) &&
      (((int)uVar2 < DAT_14c9647dc &&
       (lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar4 != 0)))) &&
     ((*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 100) &&
      (((*(uint *)(lVar4 + 8) & 0x10200000) == 0 &&
       (lVar4 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x10))(), lVar4 != 0)))))) {
    local_18 = *(longlong *)(param_1 + 0x40);
    if (local_18 == 0) {
      local_18 = 0;
      local_20 = 0;
    }
    else {
      iVar3 = *(int *)(local_18 + 8);
      local_20 = 0;
      do {
        if (iVar3 == 0) {
          local_18 = 0;
          goto LAB_140feadb6;
        }
        LOCK();
        iVar1 = *(int *)(local_18 + 8);
        bVar5 = iVar3 == iVar1;
        if (bVar5) {
          *(int *)(local_18 + 8) = iVar3 + 1;
          iVar1 = iVar3;
        }
        iVar3 = iVar1;
        UNLOCK();
      } while (!bVar5);
      local_20 = *(undefined8 *)(param_1 + 0x38);
    }
LAB_140feadb6:
    FUN_140feadf2(lVar4);
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140feadf2 FUN_140feadf2 body=115 status=ok
// SIG undefined FUN_140feadf2(void)

void FUN_140feadf2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    local_18 = param_2;
    FUN_1418af3c2(param_1 + 0x28);
  }
  plVar3 = *(longlong **)(param_2 + 8);
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
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140feae76 FUN_140feae76 body=44 status=ok
// SIG undefined FUN_140feae76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140feae76(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8d84c = _DAT_14cb8d84c + -1;
  *param_1 = DAT_14cb8d840;
  DAT_14cb8d840 = param_1;
  return;
}



// FUNCTION 140feaea2 FUN_140feaea2 body=796 status=ok
// SIG undefined FUN_140feaea2(void)

ulonglong FUN_140feaea2(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar2 = FUN_140feb1c0();
  if (cVar2 == '\0') {
LAB_140feafb2:
    uVar4 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x50);
    if ((uVar3 & 3) != 1) {
      if (param_3 != 0) {
        if (DAT_14cb939a8 == 0) {
          local_50 = &local_30;
          local_30 = FUN_140940982;
          local_40 = FUN_14081d0ea;
          local_48 = &LAB_146522c26;
          local_58 = &LAB_148a0db91;
          local_60 = &LAB_146572ba7;
          local_68 = L"Engine";
          local_70 = 0;
          local_78 = 0x10000004;
          local_80 = 8;
          local_88 = 0xdd8;
          FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
        }
        if ((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30)) {
          uVar3 = *(uint *)(param_1 + 0x50);
          goto LAB_140feaf55;
        }
      }
      lVar1 = *(longlong *)(param_2 + 0xa8);
      if (lVar1 != 0) {
        if (DAT_14cb939a8 == 0) {
          local_50 = &local_30;
          local_30 = FUN_140940982;
          local_40 = FUN_14081d0ea;
          local_48 = &LAB_146522c26;
          local_58 = &LAB_148a0db91;
          local_60 = &LAB_146572ba7;
          local_68 = L"Engine";
          local_70 = 0;
          local_78 = 0x10000004;
          local_80 = 8;
          local_88 = 0xdd8;
          FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) ==
            DAT_14cb939a8 + 0x30)) {
          uVar3 = *(uint *)(param_1 + 0x50);
          if ((uVar3 & 1) == 0) goto LAB_140feafb2;
          goto LAB_140feaf55;
        }
      }
      uVar3 = *(uint *)(param_1 + 0x50);
      if ((uVar3 & 2) != 0) goto LAB_140feafb2;
    }
LAB_140feaf55:
    uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if ((param_2 != 0) && ((uVar3 & 4) == 0)) {
      do {
        lVar1 = *(longlong *)(param_2 + 0xa8);
        if (lVar1 == param_3) break;
        if (lVar1 != 0) {
          if (DAT_14cacf818 == 0) {
            local_50 = &local_30;
            local_30 = FUN_141030f22;
            local_40 = FUN_14081d0ea;
            local_48 = &LAB_1463b216c;
            local_58 = &LAB_1479977e3;
            local_60 = &LAB_1463b2171;
            local_68 = L"Game";
            local_70 = 0;
            local_78 = 0x10000004;
            local_80 = 0x10;
            local_88 = 0x750;
            FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
          }
          if ((*(int *)(DAT_14cacf818 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8) == DAT_14cacf818 + 0x30))
          goto LAB_140feafb2;
        }
        param_2 = *(longlong *)(param_2 + 0x120);
      } while (param_2 != 0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 140feb1c0 FUN_140feb1c0 body=1379 status=ok
// SIG undefined FUN_140feb1c0(void)

undefined8 FUN_140feb1c0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    if ((longlong)(int)param_2[0xf] != 0) {
      lVar6 = 0;
      uVar3 = 0;
      do {
        if (*(longlong *)(param_2[0xe] + lVar6) == *(longlong *)(param_1 + 0x18))
        goto LAB_140feb1ec;
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)param_2[0xf] * 8 != lVar6);
      goto LAB_140feb201;
    }
    goto LAB_140feb367;
  }
LAB_140feb1ec:
  if (0 < (longlong)*(int *)(param_1 + 0x28)) {
    plVar4 = *(longlong **)(param_1 + 0x20);
    lVar6 = (longlong)*(int *)(param_1 + 0x28) << 3;
    uVar3 = 0;
    do {
      if (*plVar4 == param_2[3]) {
        if (plVar4 == (longlong *)0x0) goto LAB_140feb367;
        goto LAB_140feb1f9;
      }
      plVar4 = plVar4 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
    goto LAB_140feb201;
  }
LAB_140feb1f9:
  if ((*(char *)(param_1 + 0x30) == '\0') || (*(int *)(param_1 + 0x40) < 1)) goto LAB_140feb1ff;
  if (param_2 == (longlong *)0x0) {
LAB_140feb390:
    if (*(char *)(param_1 + 0x30) == '\x01') {
LAB_140feb367:
      uVar3 = 0;
      goto LAB_140feb201;
    }
  }
  else {
    if (DAT_14cad2858 == 0) {
      local_40 = &local_28;
      local_28 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146395584;
      local_48 = &LAB_147a0ba80;
      local_50 = &LAB_14575ccce;
      local_58 = L"Engine";
      local_60 = 0x40000000000;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) !=
        DAT_14cad2858 + 0x30)) goto LAB_140feb390;
    lVar6 = param_2[0xcb];
    if (lVar6 == 0) {
      lVar6 = param_2[0xcc];
      if ((DAT_14c950c29 & lVar6 != 0) != 0) goto LAB_140feb6a4;
      if (lVar6 != 0) goto LAB_140feb282;
      goto LAB_140feb390;
    }
    if (DAT_14c950c29 == 1) {
LAB_140feb6a4:
      FUN_1456cec3c(lVar6);
    }
LAB_140feb282:
    if (DAT_14cb06da8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464003b0;
      local_48 = &LAB_147d17bdf;
      local_50 = &LAB_1417edf22;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) goto LAB_140feb390;
    if (DAT_14cb63950 == 0) {
      local_40 = &local_28;
      local_28 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464ec72a;
      local_48 = &LAB_1486f5f75;
      local_50 = &LAB_140945686;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x19d0;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
    }
    if (((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) ==
         DAT_14cb63950 + 0x30)) && (cVar2 = (**(code **)(*param_2 + 0xbf0))(param_2), cVar2 != '\0')
       ) goto LAB_140feb1ff;
    lVar6 = param_2[0xcb];
    if (lVar6 == 0) {
      lVar6 = param_2[0xcc];
      if ((DAT_14c950c29 & lVar6 != 0) != 0) goto LAB_140feb710;
      if (lVar6 != 0) goto LAB_140feb311;
LAB_140feb3bd:
      lVar6 = 0;
    }
    else {
      if (DAT_14c950c29 == 1) {
LAB_140feb710:
        FUN_1456cec3c(lVar6);
      }
LAB_140feb311:
      if (DAT_14cb06da8 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1464003b0;
        local_48 = &LAB_147d17bdf;
        local_50 = &LAB_1417edf22;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10000000;
        local_70 = 8;
        local_78 = 0x588;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
      }
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
      goto LAB_140feb3bd;
    }
    bVar1 = true;
    if ((longlong)*(int *)(lVar6 + 0x4a8) != 0) {
      plVar4 = *(longlong **)(lVar6 + 0x4a0);
      plVar5 = plVar4 + (longlong)*(int *)(lVar6 + 0x4a8) * 6;
      do {
        if (*(int *)(param_1 + 0x40) != 0) {
          lVar6 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x38) + lVar6) == *plVar4) {
              bVar1 = false;
              goto LAB_140feb352;
            }
            lVar6 = lVar6 + 8;
          } while ((longlong)*(int *)(param_1 + 0x40) << 3 != lVar6);
        }
        plVar4 = plVar4 + 6;
      } while (plVar4 != plVar5);
    }
LAB_140feb352:
    if (*(char *)(param_1 + 0x30) != '\x01') {
      if ((*(char *)(param_1 + 0x30) != '\x02') || (bVar1)) goto LAB_140feb1ff;
      goto LAB_140feb367;
    }
    if (bVar1) goto LAB_140feb367;
  }
LAB_140feb1ff:
  uVar3 = 1;
LAB_140feb201:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 140feb732 FUN_140feb732 body=59 status=ok
// SIG undefined FUN_140feb732(void)

undefined8 * FUN_140feb732(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b314650;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140feb76e FUN_140feb76e body=82 status=ok
// SIG undefined FUN_140feb76e(void)

void FUN_140feb76e(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
      FUN_140feb7c0((longlong *)(param_1 + 0x18),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    *(longlong *)(lVar2 + (longlong)iVar1 * 0x10) = param_2;
    *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = param_3;
  }
  return;
}



// FUNCTION 140feb7c0 FUN_140feb7c0 body=269 status=ok
// SIG undefined FUN_140feb7c0(void)

void FUN_140feb7c0(longlong param_1,int param_2)

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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140feb8ce thunk_FUN_14071fe68 body=5 status=ok
// SIG undefined thunk_FUN_14071fe68(void)

void thunk_FUN_14071fe68(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1ad920;
  param_1[5] = &PTR_FUN_14a1adbd0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[7];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140feb8ea FUN_140feb8ea body=120 status=ok
// SIG undefined FUN_140feb8ea(void)

void FUN_140feb8ea(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar1 = FUN_1403ae46b();
  if ((((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x78f0))) &&
      (lVar2 = (ulonglong)uVar1 * 0x48 + *(longlong *)(param_1 + 0x78e8), lVar2 != 0)) &&
     ((*(longlong *)(lVar2 + 0x20) != 0 && (*(longlong **)(lVar2 + 0x28) != (longlong *)0x0)))) {
    lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x28) + 8))();
    if (lVar2 != 0) {
      uVar3 = FUN_1403ae386();
      plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
      if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140feb954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x88))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140feb962 FUN_140feb962 body=477 status=ok
// SIG undefined FUN_140feb962(void)

void FUN_140feb962(char *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char *pcVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[0x78] == '\0') {
    FUN_140cddb58(param_1);
  }
  pcVar1 = (char *)(param_2 + 0xd0);
  if (param_1[0x4c] != '\0') {
    pcVar1 = param_1 + 0x48;
  }
  *(undefined4 *)(param_2 + 0xd0) = *(undefined4 *)pcVar1;
  pcVar1 = (char *)(param_2 + 0xd4);
  if (param_1[0x54] != '\0') {
    pcVar1 = param_1 + 0x50;
  }
  *(undefined4 *)(param_2 + 0xd4) = *(undefined4 *)pcVar1;
  pcVar1 = (char *)(param_2 + 0xec);
  if (param_1[0x59] != '\0') {
    pcVar1 = param_1 + 0x58;
  }
  *(char *)(param_2 + 0xec) = *pcVar1;
  if (*param_1 == '\0') {
    pcVar1 = (char *)(param_2 + 0x1b8);
    if (param_1[0x5b] != '\0') {
      pcVar1 = param_1 + 0x5a;
    }
    *(char *)(param_2 + 0x1b8) = *pcVar1;
    if (*(int *)(param_1 + 0x6c) == -1) {
      local_30 = 0xffffffff;
    }
    else {
      local_30 = *(undefined8 *)(param_1 + 0x6c);
    }
    if (*(int *)(param_1 + 100) == -1) {
      local_38 = 0xffffffff;
    }
    else {
      local_38 = *(undefined8 *)(param_1 + 100);
    }
    FUN_140febb40(param_3,&local_38,&local_30);
    *(undefined1 *)(param_3 + 0xad) = 0;
    *(undefined4 *)(param_3 + 0xa8) = 0;
    *(undefined1 *)(param_4 + 1000) = 0;
  }
  pcVar1 = (char *)(param_2 + 0x1b9);
  if (param_1[0x5d] != '\0') {
    pcVar1 = param_1 + 0x5c;
  }
  *(char *)(param_2 + 0x1b9) = *pcVar1;
  pcVar1 = (char *)(param_2 + 0x1c0);
  if (param_1[0x5f] != '\0') {
    pcVar1 = param_1 + 0x5e;
  }
  *(char *)(param_2 + 0x1c0) = *pcVar1;
  pcVar1 = (char *)(param_2 + 0xed);
  if (param_1[0x61] != '\0') {
    pcVar1 = param_1 + 0x60;
  }
  *(char *)(param_2 + 0xed) = *pcVar1;
  pcVar1 = (char *)(param_3 + 0x400);
  if (param_1[0x75] != '\0') {
    pcVar1 = param_1 + 0x74;
  }
  *(char *)(param_3 + 0x400) = *pcVar1;
  pcVar1 = (char *)(param_3 + 0x401);
  if (param_1[0x77] != '\0') {
    pcVar1 = param_1 + 0x76;
  }
  *(char *)(param_3 + 0x401) = *pcVar1;
  if ((*param_1 == '\0') && ((param_1[0x4c] != '\0' || (param_1[0x54] == '\x01')))) {
    *(undefined1 *)(param_3 + 1000) = 0;
  }
  *param_1 = '\x01';
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140febb40 FUN_140febb40 body=143 status=ok
// SIG undefined FUN_140febb40(void)

void FUN_140febb40(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((((int)*param_2 != -1) && (lVar2 = *param_2, *(longlong *)(param_1 + 0x610) != lVar2)) &&
     (plVar1 = (longlong *)(param_1 + 0x7e8), plVar1 != param_2)) {
    if ((int)lVar2 == -1) {
      if (*(int *)plVar1 != -1) {
        *(undefined8 *)(param_1 + 0x7e8) = 0xffffffff;
      }
    }
    else {
      *plVar1 = lVar2;
    }
  }
  if ((((int)*param_3 != -1) && (lVar2 = *param_3, *(longlong *)(param_1 + 0x61c) != lVar2)) &&
     (plVar1 = (longlong *)(param_1 + 0x7f8), plVar1 != param_3)) {
    if ((int)lVar2 == -1) {
      if (*(int *)plVar1 != -1) {
        *(undefined8 *)(param_1 + 0x7f8) = 0xffffffff;
      }
    }
    else {
      *plVar1 = lVar2;
    }
  }
  if ((int)*param_2 != -1) {
    *param_2 = 0xffffffff;
  }
  if ((int)*param_3 != -1) {
    *param_3 = 0xffffffff;
  }
  return;
}



// FUNCTION 140febbd8 FUN_140febbd8 body=565 status=ok
// SIG undefined FUN_140febbd8(void)

undefined8 * FUN_140febbd8(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14b53d730;
  param_1[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[2] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[4] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_14b53d700;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  lVar2 = FUN_140febe0e();
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0xc] = lVar2;
  return param_1;
}



// FUNCTION 140febe0e FUN_140febe0e body=228 status=ok
// SIG undefined FUN_140febe0e(void)

longlong FUN_140febe0e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb99de0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146590f14;
    local_38 = &LAB_148af36e3;
    local_40 = FUN_1418c21e8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x148;
    FUN_14081cfa3(L"/Script/GameSettings",L"GameSettingCollection",&DAT_14cb99de0,&DAT_148af36e2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb99de0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140febef4 FUN_140febef4 body=71 status=ok
// SIG undefined FUN_140febef4(void)

undefined8 * FUN_140febef4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b647320;
  FUN_140febf3b(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140febf3b FUN_140febf3b body=41 status=ok
// SIG undefined FUN_140febf3b(void)

void FUN_140febf3b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140febf64(param_1);
    param_1 = param_1 + 0x98;
  }
  return;
}



// FUNCTION 140febf64 FUN_140febf64 body=125 status=ok
// SIG undefined FUN_140febf64(void)

void FUN_140febf64(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b647000;
  plVar3 = (longlong *)param_1[0x11];
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
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 6) == '\x01') {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  *param_1 = &PTR_FUN_14b23dd30;
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140febfe2 FUN_140febfe2 body=537 status=ok
// SIG undefined FUN_140febfe2(void)

void FUN_140febfe2(void)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar4 = (longlong *)FUN_1457df0aa();
  plVar11 = plVar4 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar11;
  if ((int)plVar4[5] == 0) {
    uVar13 = 1;
    iVar10 = 0;
    local_58._4_4_ = 0;
    uVar14 = 0xffffffff;
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar13 = local_68 >> 0x20;
    iVar10 = (int)plVar4[5];
    uVar14 = (uint)local_58;
    iVar8 = (int)local_68;
  }
  plVar3 = local_60;
  iVar7 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ != iVar10 || local_60 != plVar11) {
    do {
      local_70 = plVar11;
      local_74 = iVar10;
      plVar11 = *(longlong **)(*plVar4 + 0x28 + (longlong)iVar7 * 0x40);
      if (plVar11 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar11 + 8))(plVar11);
        lVar6 = FUN_14050ce48();
        if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30)) {
          FUN_140fec1fc(plVar11);
        }
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      plVar11 = (longlong *)plVar3[2];
      if ((longlong *)plVar3[2] == (longlong *)0x0) {
        plVar11 = plVar3;
      }
      iVar10 = (int)plVar3[3];
      lVar5 = (longlong)iVar8;
      uVar9 = *(uint *)((longlong)plVar11 + lVar5 * 4) & uVar14;
      if (uVar9 == 0) {
        iVar7 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar7 = iVar10 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar2 = iVar7;
        if (iVar7 < iVar8) {
          iVar2 = iVar8;
        }
        if (iVar8 < iVar7) {
          lVar6 = 0;
          do {
            uVar9 = *(uint *)((longlong)plVar11 + lVar6 * 4 + lVar5 * 4 + 4);
            if (uVar9 != 0) {
              iVar8 = iVar8 + (int)lVar6 + 1;
              uVar14 = 0xffffffff;
              goto LAB_140fec135;
            }
            iVar12 = iVar12 + 0x20;
            lVar6 = lVar6 + 1;
          } while (iVar2 - lVar5 != lVar6);
          uVar14 = 0xffffffff;
          iVar8 = iVar2;
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar10;
      }
      else {
LAB_140fec135:
        uVar13 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar13 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        if (iVar10 <= iVar7) {
          iVar7 = iVar10;
        }
      }
      iVar10 = local_74;
      plVar11 = local_70;
    } while (iVar7 != local_74 || plVar3 != local_70);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fec1fc FUN_140fec1fc body=515 status=ok
// SIG undefined FUN_140fec1fc(void)

void FUN_140fec1fc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar5 = FUN_140fec400();
  if ((cVar5 == '\0') && ((longlong)*(int *)(param_1 + 0xe8) != 0)) {
    lVar8 = (longlong)*(int *)(param_1 + 0xe8) * 0x30;
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0xe0) + 0x20);
    do {
      if (((*plVar7 != 0) && ((*(byte *)(*plVar7 + 0x10) & 1) != 0)) &&
         (cVar5 = FUN_140a262da(plVar7), *(char *)((longlong)plVar7 + -6) != cVar5)) {
        *(char *)((longlong)plVar7 + -6) = cVar5;
        FUN_14117fb26(&local_58);
        lVar4 = local_58;
        if (local_58 != 0) {
          FUN_1458228e2(param_1,&local_80);
          *(undefined4 *)(lVar4 + 0x18) = (undefined4)uStack_78;
          *(longlong *)(lVar4 + 0x10) = local_80;
          FUN_140ac173c(&local_80,param_1 + 0x30);
          *(undefined4 *)(lVar4 + 0x1c) = (undefined4)local_80;
          *(undefined4 *)(lVar4 + 0x20) = local_80._4_4_;
          *(undefined4 *)(lVar4 + 0x24) = (undefined4)uStack_78;
          *(undefined4 *)(lVar4 + 0x28) = uStack_78._4_4_;
          *(undefined4 *)(lVar4 + 0x2c) = local_70;
          *(undefined4 *)(lVar4 + 0x30) = uStack_6c;
          *(undefined4 *)(lVar4 + 0x34) = uStack_68;
          *(undefined4 *)(lVar4 + 0x38) = uStack_64;
          *(undefined4 *)(lVar4 + 0x3c) = local_60;
          *(int *)(lVar4 + 0x48) = (int)plVar7[-2];
          *(longlong *)(lVar4 + 0x40) = plVar7[-3];
          *(undefined4 *)(lVar4 + 0x4c) = *(undefined4 *)((longlong)plVar7 + -0xc);
          *(char *)(lVar4 + 0x50) = cVar5;
          local_80 = lVar4;
          uStack_78 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
          }
          uVar6 = FUN_140d80bda(param_1);
          FUN_141000642(uVar6,&local_80);
          plVar3 = uStack_78;
          if (uStack_78 != (longlong *)0x0) {
            LOCK();
            plVar1 = uStack_78 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*uStack_78)(uStack_78);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
        }
        plVar3 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
      }
      plVar7 = plVar7 + 6;
      lVar8 = lVar8 + -0x30;
    } while (lVar8 != 0);
  }
  if ((*(longlong *)(param_1 + 0xa8) == 0) || (cVar5 = FUN_144729dda(param_1 + 0xa0), cVar5 == '\0')
     ) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0xa8);
  }
  FUN_140d7ffec(param_1,uVar6);
  FUN_140fec47c(param_1);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fec400 FUN_140fec400 body=124 status=ok
// SIG undefined FUN_140fec400(void)

ulonglong FUN_140fec400(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 unaff_RDI;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140fec459:
    bVar7 = false;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140fec459;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    if (bVar7) {
      lVar6 = FUN_140d80c3e();
      if (lVar6 == 0) {
        unaff_RDI = 0;
      }
      else {
        iVar5 = FUN_14490d72a(lVar6);
        unaff_RDI = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),iVar5 == 3);
      }
    }
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
  return CONCAT71((int7)((ulonglong)unaff_RDI >> 8),(byte)unaff_RDI & bVar7) & 0xffffffff;
}



// FUNCTION 140fec47c FUN_140fec47c body=244 status=ok
// SIG undefined FUN_140fec47c(void)

void FUN_140fec47c(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((*(int *)((longlong)param_1 + 0x8c) != 0) &&
      (uVar1 = *(uint *)(param_1 + 0x11), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)((longlong)param_1 + 0x8c))) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar2 = *plVar5, lVar2 != 0)))) {
      lVar4 = FUN_140929c72();
      if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
         (lVar2 = *(longlong *)(lVar2 + 0x410), lVar2 != 0)) {
        lVar4 = FUN_1407fc0e2();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          cVar3 = (**(code **)(*param_1 + 0x10))(param_1);
          if ((cVar3 != '\0') && ((char)param_1[5] != '\x01')) {
            FUN_1400bc96c(lVar2 + 0xcb8,&DAT_14cb86568);
            return;
          }
          FUN_1400bc8c2(lVar2 + 0xcb8,&DAT_14cb86568);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140fec570 FUN_140fec570 body=747 status=ok
// SIG undefined FUN_140fec570(void)

undefined4 FUN_140fec570(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  char local_58;
  undefined1 local_50;
  undefined8 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar3 = (**(code **)(*param_1 + 0x600))();
  if (cVar3 != '\0') {
    lVar5 = param_1[0x102];
    if (lVar5 == 0) {
      lVar5 = (**(code **)(param_1[0x3d] + 0x28))(param_1 + 0x3d);
      param_1[0x102] = lVar5;
    }
    if ((*(byte *)(lVar5 + 0x60) & 1) != 0) {
      if ((char)param_1[0x220] == '\n') {
        bVar8 = param_1[0x22] != 0;
      }
      else {
        bVar8 = false;
      }
      *(bool *)(param_1 + 0x39f) = bVar8;
      uVar1 = *(uint *)(param_1 + 0x6d5);
      local_c0[0] = 0;
      local_b8 = (undefined4)DAT_14c8464e0;
      uStack_b4 = DAT_14c8464e0._4_4_;
      uStack_b0 = (undefined4)DAT_14c8464e8;
      uStack_ac = DAT_14c8464e8._4_4_;
      local_a8 = DAT_14c8464f0;
      local_a0 = (undefined4)DAT_14c8464e0;
      uStack_9c = DAT_14c8464e0._4_4_;
      uStack_98 = (undefined4)DAT_14c8464e8;
      uStack_94 = DAT_14c8464e8._4_4_;
      local_90 = DAT_14c8464f0;
      local_78 = DAT_14c8464f0;
      local_88 = (undefined4)DAT_14c8464e0;
      uStack_84 = DAT_14c8464e0._4_4_;
      uStack_80 = (undefined4)DAT_14c8464e8;
      uStack_7c = DAT_14c8464e8._4_4_;
      local_70 = 0;
      local_58 = '\0';
      local_50 = 0;
      local_4c = 0;
      if (param_1[0x62e] == 0) {
        if ((char)param_1[0x696] == '\x01') {
          plVar6 = param_1 + 0x642;
          goto LAB_140fec76c;
        }
        bVar8 = true;
        plVar6 = (longlong *)0x0;
        uVar7 = uVar1;
      }
      else {
        plVar6 = (longlong *)(param_1[0x62e] + 0xd8);
LAB_140fec76c:
        FUN_140fece72(plVar6,local_c0);
        uVar7 = *(uint *)(param_1 + 0x6d5);
        bVar8 = false;
      }
      if (((0 < *(int *)(lVar5 + 0x20)) && ((char)param_1[0x220] == '\x03')) &&
         (lVar5 = **(longlong **)(lVar5 + 0x18), (*(byte *)(lVar5 + 0x449) & 8) != 0)) {
        *(undefined1 *)(param_1 + 0x595) = 1;
        if ((char)param_1[0x596] == '\0') {
          *(undefined1 *)(param_1 + 0x596) = 1;
          FUN_144a62f0c(param_1,param_1[7],0xc);
        }
        *(undefined4 *)((longlong)param_1 + 0x2cac) = *(undefined4 *)(lVar5 + 0x44c);
      }
      uVar2 = *(uint *)(param_1 + 0x774);
      uVar4 = FUN_140fec85c(param_1);
      *(uint *)(param_1 + 0x774) = *(uint *)(param_1 + 0x774) & 0xfffffffe | uVar2 & 1;
      if ((char)param_1[0x39f] == '\0') {
        if (((char)param_1[0x220] == '\n') && (lVar5 = 0xd10, param_1[0x22] != 0)) {
LAB_140fec830:
          (**(code **)(*param_1 + lVar5))(param_1);
        }
      }
      else {
        lVar5 = 0xd18;
        if (((char)param_1[0x220] != '\n') || (param_1[0x22] == 0)) goto LAB_140fec830;
      }
      if (!bVar8) {
        FUN_140e2ca4c(plVar6,local_c0);
        *(undefined1 *)(param_1 + 0x6a8) = 0;
      }
      if ((uVar1 & 4) == 0) {
        if ((*(uint *)(param_1 + 0x6d5) & 4) != 0) {
          FUN_1404f4446(param_1);
        }
      }
      else if ((*(uint *)(param_1 + 0x6d5) & 4) == 0) {
        FUN_1404f454a(param_1);
      }
      *(uint *)(param_1 + 0x6d5) = *(uint *)(param_1 + 0x6d5) & 0xfffffffe | uVar7 & 1;
      if (local_58 == '\x01') {
        FUN_1449db362(local_68);
      }
      goto LAB_140fec6e9;
    }
  }
  uVar4 = 0;
LAB_140fec6e9:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140fec85c FUN_140fec85c body=1556 status=ok
// SIG undefined FUN_140fec85c(void)

ulonglong FUN_140fec85c(longlong *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
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
  longlong lVar20;
  longlong lVar21;
  char cVar22;
  undefined4 uVar23;
  longlong lVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  longlong lVar27;
  byte bVar28;
  longlong lVar29;
  undefined1 auStack_778 [32];
  longlong *local_758;
  byte local_747;
  byte local_746;
  undefined1 local_745;
  undefined4 local_744;
  undefined **local_740;
  undefined8 local_738;
  int local_730;
  undefined4 local_72c;
  undefined8 local_728;
  int local_720;
  undefined4 local_71c;
  undefined4 local_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined4 local_708;
  undefined4 uStack_704;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  longlong local_6f8 [125];
  longlong local_310;
  longlong local_100;
  byte local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_778;
  cVar22 = (**(code **)(*param_1 + 0x600))();
  if (cVar22 != '\0') {
    lVar24 = param_1[0x102];
    if (lVar24 == 0) {
      lVar24 = (**(code **)(param_1[0x3d] + 0x28))(param_1 + 0x3d);
      param_1[0x102] = lVar24;
    }
    if ((*(uint *)(lVar24 + 0x60) & 1) != 0) {
      *(uint *)(lVar24 + 0x60) = *(uint *)(lVar24 + 0x60) & 0xfffffffe;
      plVar7 = *(longlong **)(param_1[0x3e] + 0x1c8);
      if (plVar7 != (longlong *)0x0) {
        uVar26 = 0;
        cVar22 = (**(code **)(*plVar7 + 0x480))(plVar7,0);
        if (cVar22 != '\0') goto LAB_140fecafc;
      }
      if (*(int *)(lVar24 + 0x20) != 0) {
        lVar21 = param_1[0x86];
        lVar29 = param_1[0x1f0];
        uVar2 = *(undefined4 *)((longlong)param_1 + 0xf84);
        lVar9 = param_1[0x1f2];
        lVar10 = param_1[499];
        lVar11 = param_1[500];
        lVar12 = param_1[0x1f5];
        lVar13 = param_1[0x1f6];
        lVar14 = param_1[0x1f7];
        lVar15 = param_1[0x1f8];
        lVar16 = param_1[0x1f9];
        lVar17 = param_1[0x1fa];
        lVar18 = param_1[0x1fb];
        lVar19 = param_1[0x1fc];
        lVar20 = param_1[0x1fd];
        local_740 = &PTR_FUN_14a819a28;
        local_738 = 0;
        iVar6 = (int)param_1[0x1b3];
        lVar27 = param_1[0x1b2];
        local_730 = iVar6;
        if (iVar6 == 0) {
          local_72c = 0;
        }
        else {
          FUN_1479ace46(&local_738,iVar6,0);
          FUN_1479acea8(local_738,lVar27,iVar6);
        }
        local_728 = 0;
        iVar6 = (int)param_1[0x1b5];
        lVar27 = param_1[0x1b4];
        local_745 = (char)lVar29;
        local_720 = iVar6;
        if (iVar6 == 0) {
          local_71c = 0;
        }
        else {
          FUN_1479ace46(&local_728,iVar6,0);
          FUN_1479acea8(local_728,lVar27,iVar6);
        }
        local_718 = (undefined4)param_1[0x1b6];
        uStack_714 = *(undefined4 *)((longlong)param_1 + 0xdb4);
        uStack_710 = (undefined4)param_1[0x1b7];
        uStack_70c = *(undefined4 *)((longlong)param_1 + 0xdbc);
        local_708 = (undefined4)param_1[0x1b8];
        uStack_704 = *(undefined4 *)((longlong)param_1 + 0xdc4);
        uStack_700 = (undefined4)param_1[0x1b9];
        uStack_6fc = *(undefined4 *)((longlong)param_1 + 0xdcc);
        lVar27 = param_1[0x3e];
        local_747 = *(byte *)(lVar27 + 0x550);
        uVar3 = *(undefined4 *)(lVar27 + 0x560);
        local_744 = *(undefined4 *)(lVar27 + 0x564);
        local_746 = *(byte *)((longlong)param_1 + 0x5b5);
        bVar4 = *(byte *)((longlong)param_1 + 0x349);
        *(byte *)(lVar27 + 0x550) =
             local_747 & 0xdf | (*(char *)((longlong)param_1 + 0x291) == '\x03') << 5;
        *(byte *)(param_1[0x3e] + 0x550) = *(byte *)(param_1[0x3e] + 0x550) | 0x10;
        *(byte *)((longlong)param_1 + 0x349) = *(byte *)((longlong)param_1 + 0x349) | 0x10;
        if ((DAT_14c7613f4 & DAT_14cad0aa0) == 0) {
          uVar25 = 0;
        }
        else {
          uVar25 = *(undefined8 *)(param_1[0x3e] + 0x428);
        }
        FUN_1402ed838(local_6f8,uVar25,1,CONCAT71((uint7)(uint3)((uint)local_744 >> 8),1));
        if (0 < *(int *)(lVar24 + 0x20)) {
          lVar29 = 0;
          lVar27 = 0;
          do {
            plVar7 = *(longlong **)(*(longlong *)(lVar24 + 0x18) + lVar29);
            param_1[0x106] = (longlong)plVar7;
            (**(code **)(*plVar7 + 0x48))(plVar7,param_1[0x3e]);
            cVar22 = (**(code **)(*param_1 + 0xaa0))(param_1);
            if ((cVar22 != '\0') &&
               (plVar8 = *(longlong **)(param_1[0x136] + 0x10), plVar8 != (longlong *)0x0)) {
              param_1[0x168] = (longlong)plVar8;
              (**(code **)(*plVar8 + 8))(plVar8,plVar7,0);
            }
            uVar23 = (**(code **)(*plVar7 + 0x50))(plVar7);
            local_758 = plVar7 + 0x65;
            (**(code **)(*param_1 + 0xa48))
                      (param_1,*(undefined4 *)((longlong)plVar7 + 0x14),(int)plVar7[3],uVar23);
            (**(code **)(*plVar7 + 0x30))(plVar7,param_1[0x3e]);
            param_1[0x168] = 0;
            param_1[0x106] = 0;
            lVar27 = lVar27 + 1;
            lVar29 = lVar29 + 0x10;
          } while (lVar27 < *(int *)(lVar24 + 0x20));
        }
        plVar7 = param_1 + 0x1b1;
        bVar5 = *(byte *)(param_1[0x3e] + 0x550);
        if (*(longlong *)(lVar24 + 0x38) != 0) {
          pbVar1 = (byte *)(*(longlong *)(lVar24 + 0x38) + 0x10);
          *pbVar1 = *pbVar1 | 8;
        }
        bVar28 = local_746 & 0x20;
        *(int *)(param_1 + 0x86) = (int)lVar21;
        *(undefined1 *)(param_1 + 0x1f0) = local_745;
        *(undefined4 *)((longlong)param_1 + 0xf84) = uVar2;
        param_1[0x1f2] = lVar9;
        param_1[499] = lVar10;
        param_1[500] = lVar11;
        param_1[0x1f5] = lVar12;
        param_1[0x1f6] = lVar13;
        param_1[0x1f7] = lVar14;
        param_1[0x1f8] = lVar15;
        param_1[0x1f9] = lVar16;
        param_1[0x1fa] = lVar17;
        param_1[0x1fb] = lVar18;
        param_1[0x1fc] = lVar19;
        param_1[0x1fd] = lVar20;
        FUN_140fb3d70(plVar7,&local_740);
        lVar27 = param_1[0x3e];
        if (*(char *)(lVar27 + 0x550) < '\0') {
          FUN_1434e8486(plVar7,lVar27 + 0x5b8,0);
          *(byte *)(param_1[0x3e] + 0x550) = *(byte *)(param_1[0x3e] + 0x550) & 0x7f;
          lVar27 = param_1[0x3e];
        }
        uVar26 = CONCAT71((int7)((ulonglong)plVar7 >> 8),local_747 | bVar5) & 0xffffffffffffff08;
        FUN_140239626(lVar27 + 0x5b8);
        *(byte *)(param_1[0x3e] + 0x550) = *(byte *)(param_1[0x3e] + 0x550) & 0xbf;
        *(byte *)(param_1[0x3e] + 0x550) = *(byte *)(param_1[0x3e] + 0x550) & 0xef;
        *(byte *)(param_1[0x3e] + 0x550) = *(byte *)(param_1[0x3e] + 0x550) & 0xf7 | (byte)uVar26;
        *(undefined4 *)(param_1[0x3e] + 0x560) = uVar3;
        *(undefined4 *)(param_1[0x3e] + 0x564) = local_744;
        *(byte *)((longlong)param_1 + 0x5b5) = *(byte *)((longlong)param_1 + 0x5b5) & 0xdf | bVar28;
        *(byte *)((longlong)param_1 + 0x349) =
             bVar4 & 4 | *(byte *)((longlong)param_1 + 0x349) & 0xeb | 0x10;
        uVar26 = CONCAT71((int7)(uVar26 >> 8),0 < *(int *)(lVar24 + 0x20));
        if ((((local_f0 & 1) != 0) && (local_6f8[0] != 0)) &&
           ((*(uint *)(local_6f8[0] + 8) >> 0x1e & 1) == 0)) {
          FUN_140248a4c(local_6f8[0],local_6f8);
        }
        local_6f8[0] = 0;
        if (local_100 != 0) {
          FUN_1400020a8();
        }
        if (local_310 != 0) {
          FUN_1400020a8();
        }
        FUN_140d7a9b4(&local_740);
        goto LAB_140fecafc;
      }
      *(byte *)(param_1[0x3e] + 0x550) = *(byte *)(param_1[0x3e] + 0x550) & 0xbf;
      lVar24 = param_1[0x3e];
      if (*(char *)(lVar24 + 0x550) < '\0') {
        FUN_1434e8486(param_1 + 0x1b1,lVar24 + 0x5b8,0);
        *(byte *)(param_1[0x3e] + 0x550) = *(byte *)(param_1[0x3e] + 0x550) & 0x7f;
        lVar24 = param_1[0x3e];
      }
      FUN_140239626(lVar24 + 0x5b8);
    }
  }
  uVar26 = 0;
LAB_140fecafc:
  if ((local_e0 ^ (ulonglong)auStack_778) == DAT_14c707940) {
    return uVar26 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fece72 FUN_140fece72 body=176 status=ok
// SIG undefined FUN_140fece72(void)

void FUN_140fece72(longlong param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  longlong lVar6;
  
  uVar5 = FUN_143cf3594();
  *param_2 = uVar5;
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_1 + 0x28);
  FUN_1403ed422(param_2 + 0x58,param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_2 + 0x28) = uVar4;
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x158);
  uVar4 = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1b8);
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x1c8);
  uVar1 = *(undefined4 *)(param_1 + 0x1d4);
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(param_2 + 0x3c) = uVar1;
  *(undefined4 *)(param_2 + 0x40) = uVar2;
  *(undefined4 *)(param_2 + 0x44) = uVar3;
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_1 + 0x1e0);
  lVar6 = FUN_140153468(param_1);
  if ((lVar6 == 0) || (*(int *)(param_1 + 0x2c) != 2)) {
    param_2[0x70] = 0;
  }
  else {
    param_2[0x70] = *(byte *)(lVar6 + 0x104) & 1;
    *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(lVar6 + 0x108);
    *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(lVar6 + 0x10c);
  }
  return;
}



// FUNCTION 140fecf22 FUN_140fecf22 body=66 status=ok
// SIG undefined FUN_140fecf22(void)

undefined4 * FUN_140fecf22(undefined8 param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  
  plVar2 = (longlong *)FUN_140fecf64();
  if (plVar2 == (longlong *)0x0) {
    uVar1 = 0;
    uVar4 = 0;
  }
  else {
    lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
    *param_2 = *(undefined4 *)(lVar3 + 0x5cc);
    uVar4 = 2;
    uVar1 = 4;
  }
  *(undefined2 *)(param_2 + 6) = uVar1;
  *(undefined1 *)(param_2 + 8) = uVar4;
  return param_2;
}



// FUNCTION 140fecf64 FUN_140fecf64 body=119 status=ok
// SIG undefined FUN_140fecf64(void)

longlong FUN_140fecf64(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    uVar2 = FUN_1405fa766();
    lVar1 = FUN_144718840(lVar1,uVar2);
    if (lVar1 != 0) {
      return lVar1;
    }
  }
  lVar1 = FUN_140fecfdc(param_1);
  if (((lVar1 != 0) && (plVar3 = (longlong *)FUN_1457df0b2(lVar1), plVar3 != (longlong *)0x0)) &&
     (lVar1 = (**(code **)(*plVar3 + 8))(plVar3), lVar1 != 0)) {
    uVar2 = FUN_1405fa766();
    lVar1 = FUN_144718840(lVar1,uVar2);
    return lVar1;
  }
  return 0;
}



// FUNCTION 140fecfdc FUN_140fecfdc body=268 status=ok
// SIG undefined FUN_140fecfdc(void)

longlong FUN_140fecfdc(void)

{
  longlong lVar1;
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
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_1478c0a72;
      local_40 = &LAB_1417b2375;
      local_48 = L"Engine";
      local_50 = 0x1000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_140fed029;
  }
  lVar1 = 0;
LAB_140fed029:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fed0ea FUN_140fed0ea body=105 status=ok
// SIG undefined FUN_140fed0ea(void)

undefined8 *
FUN_140fed0ea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x200,0x10);
  FUN_140fed154(puVar1,param_2,param_3,param_1,param_4,param_5);
  *puVar1 = &PTR_FUN_14b97b5b0;
  return puVar1;
}



// FUNCTION 140fed154 FUN_140fed154 body=667 status=ok
// SIG undefined FUN_140fed154(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140fed154(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  param_1[1] = param_4;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14b41a0f0;
  param_1[5] = param_3;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  plVar2 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar2[1] = (longlong)&DAT_100000001;
  *plVar2 = (longlong)&PTR_FUN_14b41b610;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = (longlong)param_1;
  *(undefined4 *)(plVar2 + 6) = 0xffffffff;
  *(undefined1 *)((longlong)plVar2 + 0x34) = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  *(undefined1 *)(plVar2 + 9) = 0;
  plVar4 = plVar2 + 2;
  *plVar4 = (longlong)&PTR_FUN_14b41a0d0;
  plVar2[10] = (longlong)param_1;
  *(undefined1 *)(plVar2 + 0xb) = 0;
  plVar2[0xc] = (longlong)&PTR_FUN_14b00be10;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  plVar2[0x10] = 0;
  *(undefined1 *)(plVar2 + 0x11) = 0;
  param_1[0x10] = plVar4;
  param_1[0x11] = plVar2;
  if (plVar4 == (longlong *)0x0) goto LAB_140fed285;
  if (plVar2 == (longlong *)0x0) {
    _DAT_00000018 = 0x10;
    plVar4 = (longlong *)&DAT_00000020;
    plVar3 = _DAT_00000020;
    if (_DAT_00000020 == (longlong *)0x0) goto LAB_140fed285;
LAB_140fed3b1:
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    *plVar4 = (longlong)plVar2;
    if (plVar2 == (longlong *)0x0) goto LAB_140fed285;
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    plVar2[3] = (longlong)plVar4;
    if ((longlong *)plVar2[4] != plVar2) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar2[4] != (longlong *)0x0) {
        plVar4 = plVar2 + 4;
        plVar3 = (longlong *)plVar2[4];
        goto LAB_140fed3b1;
      }
      plVar2[4] = (longlong)plVar2;
    }
  }
  LOCK();
  plVar4 = plVar2 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
LAB_140fed285:
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_5 + 1);
  param_1[0x12] = *param_5;
  param_1[0x14] = param_2;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = *param_6;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0x100000000;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = param_1;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 2;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  return param_1;
}



// FUNCTION 140fed3f0 FUN_140fed3f0 body=76 status=ok
// SIG undefined FUN_140fed3f0(void)

void FUN_140fed3f0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  plVar2 = DAT_14caca268;
  if (DAT_14caca270 == 0) {
    plVar2 = (longlong *)0x0;
  }
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  FUN_14020684a(param_1);
  uVar1 = FUN_1447210f0(param_1);
  FUN_140fed43c(uVar1,param_1 + 0x3c8);
  return;
}



// FUNCTION 140fed43c FUN_140fed43c body=286 status=ok
// SIG undefined FUN_140fed43c(void)

void FUN_140fed43c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  float fVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char cVar8;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  float local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x6a8);
  uVar2 = *(uint *)(param_1 + 0x6b0);
  uVar7 = (ulonglong)uVar2;
  (**(code **)(*param_2 + 0x18))(param_2,local_78);
  fVar5 = local_70;
  if ((int)uVar2 < 1) {
    uVar7 = 0;
  }
  else {
    uVar6 = 0;
    do {
      plVar4 = *(longlong **)(*plVar1 + uVar6 * 8);
      (**(code **)(*plVar4 + 0x18))(plVar4,local_78);
      cVar8 = plVar4 == param_2;
      if (fVar5 < local_70) {
        cVar8 = '\x02';
      }
      if (cVar8 != '\0') {
        uVar7 = uVar6;
        if (cVar8 != '\x02') goto LAB_140fed51c;
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar7 != uVar6);
  }
  iVar3 = *(int *)(param_1 + 0x6b0);
  *(uint *)(param_1 + 0x6b0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x6b4) < iVar3 + 1U) {
    FUN_1457df132(plVar1,iVar3);
  }
  uVar6 = uVar7 & 0xffffffff;
  memmove((void *)(*plVar1 + uVar6 * 8 + 8),(void *)(*plVar1 + uVar6 * 8),
          (ulonglong)(uint)(iVar3 - (int)uVar7) << 3);
  *(longlong **)(*plVar1 + uVar6 * 8) = param_2;
LAB_140fed51c:
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fed55c FUN_140fed55c body=178 status=ok
// SIG undefined FUN_140fed55c(void)

void FUN_140fed55c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc2a4f0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed7b8(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed7b8(param_1 + 0x10);
  FUN_140fed6e2(param_1 + 0xc);
  FUN_140fed60e(param_1);
  return;
}



// FUNCTION 140fed60e FUN_140fed60e body=80 status=ok
// SIG undefined FUN_140fed60e(void)

void FUN_140fed60e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bc277c0;
  FUN_140fed6e2(param_1 + 8);
  plVar3 = (longlong *)param_1[6];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140fed65e FUN_140fed65e body=75 status=ok
// SIG undefined FUN_140fed65e(void)

void FUN_140fed65e(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_140fed6aa(param_1 + 0x10);
  return;
}



// FUNCTION 140fed6aa FUN_140fed6aa body=55 status=ok
// SIG undefined FUN_140fed6aa(void)

void FUN_140fed6aa(longlong *param_1)

{
  FUN_140fed96e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140fed6e2 FUN_140fed6e2 body=213 status=ok
// SIG undefined FUN_140fed6e2(void)

void FUN_140fed6e2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_38 = 0;
  FUN_1400021e4(&local_38,&local_30);
  if (&local_30 == param_1 + 2) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 3) = local_28;
    *(undefined4 *)((longlong)param_1 + 0x1c) = local_24;
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fed7b8 FUN_140fed7b8 body=418 status=ok
// SIG undefined FUN_140fed7b8(void)

void FUN_140fed7b8(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_149300e17(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fed96e FUN_140fed96e body=501 status=ok
// SIG undefined FUN_140fed96e(void)

void FUN_140fed96e(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar4 = 0;
    iVar10 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar12 = *puVar8;
    if (uVar12 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_140fedab5;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar8[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar2 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x40) != 0) {
        FUN_1400020a8();
        iVar3 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar4 = (int)uVar13;
      lVar11 = (longlong)iVar4;
      uVar5 = puVar8[lVar11] & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = puVar8[lVar11 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar11 == lVar9) goto LAB_140fedab5;
        }
        uVar13 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_140fedab5:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140b7ce44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar5 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar5 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar5;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140fedb72 FUN_140fedb72 body=162 status=ok
// SIG undefined FUN_140fedb72(void)

undefined8 * FUN_140fedb72(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b105bd0;
  param_1[7] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((longlong)param_1 + 0x54) != 0) {
    FUN_140115c12(param_1 + 9,0);
  }
  param_1[8] = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  param_1[3] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    FUN_140115c12(param_1 + 5,0);
  }
  param_1[4] = 0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fedc14 FUN_140fedc14 body=427 status=ok
// SIG undefined FUN_140fedc14(void)

int FUN_140fedc14(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  wchar_t *pwVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_b8 [40];
  longlong local_90;
  uint local_88;
  wchar_t *local_80;
  wchar_t *local_78;
  ulonglong *local_70;
  char local_68;
  wchar_t local_60 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140feddc0(&local_90,param_1);
  iVar5 = -1;
  if ((int)local_88 < 8) goto LAB_140fedd70;
  lVar6 = 8;
  lVar7 = 0;
  while( true ) {
    uVar9 = *(ushort *)((longlong)L"pakchunk" + lVar7);
    uVar12 = (ulonglong)uVar9;
    uVar10 = *(ushort *)(local_90 + lVar7);
    if (uVar9 != uVar10) break;
    if (uVar9 == 0) goto LAB_140fedcbc;
LAB_140fedc84:
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) goto LAB_140fedcbc;
    lVar7 = lVar7 + 2;
  }
  if ((uVar10 | uVar9) < 0x80) {
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    uVar11 = (ulonglong)uVar10;
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar11]) goto LAB_140fedc84;
  }
  if (uVar9 != uVar10) goto LAB_140fedd70;
LAB_140fedcbc:
  if (local_88 == 8) goto LAB_140fedd70;
  uVar12 = 9;
  if (9 < local_88) {
    uVar12 = (ulonglong)local_88;
  }
  iVar2 = (int)uVar12;
  uVar11 = 8;
  do {
    iVar4 = iswdigit(*(wint_t *)(local_90 + uVar11 * 2));
    if (iVar4 == 0) {
      iVar2 = (int)uVar11;
      break;
    }
    uVar11 = uVar11 + 1;
  } while (uVar12 != uVar11);
  uVar8 = iVar2 - 8;
  if ((uVar8 == 0) || ((int)local_88 < (int)uVar11)) goto LAB_140fedd70;
  uVar1 = local_88 - 8;
  if ((int)uVar8 < (int)(local_88 - 8)) {
    uVar1 = uVar8;
  }
  uVar12 = 0;
  if (0 < (int)uVar1) {
    uVar12 = (ulonglong)uVar1;
  }
  local_78 = local_60;
  local_68 = '\0';
  local_70 = &local_40;
  local_80 = local_78;
  if ((int)uVar1 < 0x10) {
    if (0 < (int)uVar1) goto LAB_140fedd3b;
  }
  else {
    FUN_140213274(&local_80,uVar12);
LAB_140fedd3b:
    pwVar3 = local_78;
    memcpy(local_78,(void *)(local_90 + 0x10),uVar12 * 2);
    local_78 = pwVar3 + uVar12;
  }
  *local_78 = L'\0';
  iVar5 = _wtoi(local_80);
  if (local_68 == '\x01') {
    FUN_1400020a8(local_80);
  }
LAB_140fedd70:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 140feddc0 FUN_140feddc0 body=119 status=ok
// SIG undefined FUN_140feddc0(void)

undefined8 * FUN_140feddc0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  int local_38;
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140115b7a(&local_30);
  FUN_140fede38(local_40,&local_30,1);
  iVar1 = local_28 - local_38;
  if (local_28 <= local_28 - local_38) {
    iVar1 = local_28;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  *param_1 = local_30;
  *(int *)(param_1 + 1) = iVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fede38 FUN_140fede38 body=185 status=ok
// SIG undefined FUN_140fede38(void)

longlong * FUN_140fede38(longlong *param_1,longlong *param_2,byte param_3)

{
  longlong lVar1;
  short *psVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140115b7a(&local_38);
  lVar4 = (longlong)local_30 * 2;
  lVar5 = local_38 + (longlong)local_30 * 2;
  do {
    if (lVar4 == 0) goto LAB_140feded5;
    lVar1 = lVar5 + -2;
    lVar4 = lVar4 + -2;
    psVar2 = (short *)(lVar5 + -2);
    lVar5 = lVar1;
  } while (*psVar2 != 0x2e);
  if (lVar1 != 0) {
    uVar6 = (ulonglong)((uint)(param_3 ^ 1) * 2);
    lVar3 = param_2[1];
    lVar5 = *param_2;
    *param_1 = lVar1 + uVar6;
    *(int *)(param_1 + 1) =
         (int)(((((longlong)(int)lVar3 * 2 + lVar5) - uVar6) - local_38) - lVar4 >> 1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
LAB_140feded5:
  *param_1 = 0;
  param_1[1] = 0;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140fedef2 FUN_140fedef2 body=80 status=ok
// SIG undefined FUN_140fedef2(void)

void FUN_140fedef2(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  FUN_140fedf44(local_38);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fedf44 FUN_140fedf44 body=53 status=ok
// SIG undefined FUN_140fedf44(void)

undefined8 FUN_140fedf44(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144837462(DAT_14cb88cc8,param_1);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  return uVar1;
}



// FUNCTION 140fedf7e FUN_140fedf7e body=221 status=ok
// SIG undefined FUN_140fedf7e(void)

longlong FUN_140fedf7e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbf2518 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148f27303;
    local_40 = FUN_146660acb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/SequencerScripting",L"MovieSceneScriptingKey",&DAT_14cbf2518,
                  &DAT_148f27302);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf2518;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fee05c FUN_140fee05c body=375 status=ok
// SIG undefined FUN_140fee05c(void)

undefined8 * FUN_140fee05c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140fee1e0 FUN_140fee1e0 body=1436 status=ok
// SIG undefined FUN_140fee1e0(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_140fee1e0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined1 local_c0;
  longlong *local_b0;
  longlong *local_a8;
  longlong local_a0 [5];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar5 = FUN_140fee782(param_1[0x12] + 0x68);
  if ((lVar5 != 0) && (plVar7 = *(longlong **)(*param_2 + 0x40), plVar7 != (longlong *)0x0)) {
    uVar6 = FUN_1407ca880();
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar6);
    if (plVar7 != (longlong *)0x0) {
      uVar6 = FUN_1407ca880();
      plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
      uVar10 = 0;
      if ((plVar7 == plVar8) || (plVar8 == (longlong *)0x0)) goto LAB_140fee53f;
      cVar2 = (**(code **)(*param_1 + 0x80))(param_1,lVar5,param_2);
      uVar10 = 0;
      if (cVar2 == '\0') goto LAB_140fee53f;
      local_78 = 0;
      local_70 = 0;
      local_a0[1] = 0;
      local_a0[2] = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      FUN_140fee7ad(param_2,local_a0 + 1);
      uVar6 = (**(code **)(*plVar8 + 0x50))(plVar8);
      if ((*(longlong *)(param_2[2] + 0x28) == 0) ||
         ((~*(byte *)(*(longlong *)(param_2[2] + 0x28) + 0x88) & 0x18) != 0)) {
        uVar12 = 3;
      }
      else {
        uVar12 = 0;
      }
      local_c0 = 1;
      local_c8 = local_a0 + 1;
      FUN_14096dfee(uVar6,&local_b0,lVar5,uVar12);
      plVar8 = local_a8;
      param_1[0x14] = (longlong)local_b0;
      local_b0 = (longlong *)0x0;
      plVar7 = (longlong *)param_1[0x15];
      if (local_a8 == plVar7) {
LAB_140fee672:
        plVar8 = local_a8;
        if (local_a8 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_a8 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_a8)(local_a8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
      else {
        local_a8 = (longlong *)0x0;
        param_1[0x15] = (longlong)plVar8;
        if (plVar7 != (longlong *)0x0) {
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
          goto LAB_140fee672;
        }
      }
      lVar5 = param_1[0x14];
      uVar10 = CONCAT71((int7)((ulonglong)plVar8 >> 8),lVar5 != 0);
      if (lVar5 != 0) {
        local_b0 = (longlong *)0x0;
        local_a8 = (longlong *)((ulonglong)local_a8 & 0xffffffff00000000);
        FUN_1446efa72(&local_b0,0,4,0x10);
        local_a8 = (longlong *)CONCAT44(local_a8._4_4_,4);
        plVar7 = (longlong *)param_1[2];
        if (plVar7 == (longlong *)0x0) {
LAB_140fee5fe:
          *local_b0 = (longlong)&PTR_LAB_14b3e9c20;
          LOCK();
          UNLOCK();
          lVar14 = DAT_14c758608 + 1;
          lVar13 = DAT_14c758608 + 1;
          if (lVar14 == 0) {
            LOCK();
            UNLOCK();
            lVar14 = DAT_14c758608 + 2;
            lVar13 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar13;
          local_b0[2] = lVar14;
          *local_b0 = (longlong)&PTR_FUN_14b4268d0;
          local_b0[3] = 0;
          local_b0[4] = 0;
          local_b0[5] = (longlong)&LAB_140f977da;
          *(undefined4 *)(local_b0 + 6) = 0;
        }
        else {
          iVar3 = (int)plVar7[1];
          do {
            if (iVar3 == 0) goto LAB_140fee5fe;
            LOCK();
            iVar4 = (int)plVar7[1];
            bVar15 = iVar3 == iVar4;
            if (bVar15) {
              *(int *)(plVar7 + 1) = iVar3 + 1;
              iVar4 = iVar3;
            }
            iVar3 = iVar4;
            UNLOCK();
          } while (!bVar15);
          lVar13 = param_1[1];
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          *local_b0 = (longlong)&PTR_LAB_14b3e9c20;
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 1;
          lVar14 = DAT_14c758608 + 1;
          if (lVar11 == 0) {
            LOCK();
            UNLOCK();
            lVar11 = DAT_14c758608 + 2;
            lVar14 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar14;
          local_b0[2] = lVar11;
          *local_b0 = (longlong)&PTR_FUN_14b4268d0;
          local_b0[3] = lVar13;
          local_b0[4] = (longlong)plVar7;
          LOCK();
          *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
          UNLOCK();
          local_b0[5] = (longlong)&LAB_140f977da;
          *(undefined4 *)(local_b0 + 6) = 0;
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
        if (((int)local_a8 == 0) || (local_b0 == (longlong *)0x0)) {
LAB_140fee722:
          if ((int)local_a8 == 0) {
            lVar13 = 0;
            goto LAB_140fee508;
          }
          if (local_b0 != (longlong *)0x0) {
            lVar13 = 0;
            (**(code **)*local_b0)(local_b0,0);
            FUN_1446efa72(&local_b0,0,0,0x10);
            goto LAB_140fee4fb;
          }
          lVar13 = 0;
        }
        else {
          cVar2 = (**(code **)(*local_b0 + 0x30))();
          if (cVar2 == '\0') {
            goto LAB_140fee722;
          }
          plVar7 = (longlong *)(lVar5 + 0x18);
          if (*(int *)(lVar5 + 0x2c) < 1) {
            iVar3 = *(int *)(lVar5 + 0x20);
            iVar4 = *(int *)(lVar5 + 0x28) + -1;
            *(int *)(lVar5 + 0x28) = iVar4;
            if (iVar4 <= iVar3) {
              iVar4 = iVar3;
              if (0 < iVar3) {
                iVar9 = 0;
                do {
                  if (((*(int *)(*plVar7 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                      (plVar8 = *(longlong **)(*plVar7 + (longlong)iVar9 * 0x10),
                      plVar8 == (longlong *)0x0)) ||
                     (cVar2 = (**(code **)(*plVar8 + 0x28))(), cVar2 != '\0')) {
                    FUN_14005b288(plVar7,iVar9);
                    FUN_14005b248(plVar7);
                  }
                  else {
                    iVar9 = iVar9 + 1;
                  }
                  iVar4 = *(int *)(lVar5 + 0x20);
                } while (iVar9 < iVar4);
              }
              iVar9 = 2;
              if (2 < iVar4 * 2) {
                iVar9 = iVar4 * 2;
              }
              *(int *)(lVar5 + 0x28) = iVar9;
              if ((iVar9 < iVar3) && (*(int *)(lVar5 + 0x24) != iVar4)) {
                FUN_14045812c();
              }
            }
          }
          lVar13 = 0;
          if (((int)local_a8 != 0) && (local_b0 != (longlong *)0x0)) {
            (**(code **)(*local_b0 + 0x38))(local_b0,local_a0);
            lVar13 = local_a0[0];
          }
          iVar3 = *(int *)(lVar5 + 0x20);
          *(uint *)(lVar5 + 0x20) = iVar3 + 1U;
          if (*(uint *)(lVar5 + 0x24) < iVar3 + 1U) {
            FUN_1447a71f6(plVar7,iVar3);
          }
          lVar5 = *plVar7;
          lVar14 = (longlong)iVar3 * 0x10;
          *(undefined8 *)(lVar5 + lVar14) = 0;
          *(undefined4 *)(lVar5 + 8 + lVar14) = 0;
          *(longlong **)(lVar5 + lVar14) = local_b0;
          local_b0 = (longlong *)0x0;
          *(int *)(lVar5 + 8 + lVar14) = (int)local_a8;
LAB_140fee4fb:
          local_a8 = (longlong *)((ulonglong)local_a8 & 0xffffffff00000000);
LAB_140fee508:
          if (local_b0 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        param_1[0x16] = lVar13;
      }
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(local_a0 + 1);
      goto LAB_140fee53f;
    }
  }
  uVar10 = 0;
LAB_140fee53f:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 140fee782 FUN_140fee782 body=43 status=ok
// SIG undefined FUN_140fee782(void)

undefined8 FUN_140fee782(char *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == '\0') {
    uVar1 = FUN_140963a30(param_1 + 8);
    return uVar1;
  }
  if ((*param_1 == '\x01') && (*(longlong **)(param_1 + 0x30) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140fee7a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 140fee7ad FUN_140fee7ad body=962 status=ok
// SIG undefined FUN_140fee7ad(void)

void FUN_140fee7ad(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 local_64 [4];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar9 = *(undefined8 *)(*param_1 + 0xa8);
  uVar4 = FUN_140feeb70();
  FUN_14477b664(uVar4);
  lVar5 = FUN_140feeb70();
  uVar4 = FUN_140feeb70();
  FUN_1402d1bfa(&local_60,uVar4,uVar9);
  lVar6 = FUN_140feeb70();
  if (lVar5 != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
      goto LAB_140fee83a;
    }
    if ((*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30)) goto LAB_140fee83a;
  }
  lVar6 = lVar5;
LAB_140fee83a:
  uVar4 = FUN_14477b664(lVar6);
  lVar6 = FUN_14477b664(uVar4);
  if (lVar6 == 0) {
    uVar9 = 0;
  }
  if (local_60 == (undefined8 *)0x0) {
    uVar9 = 0;
  }
  local_48 = 0x18;
  uVar4 = FUN_14477b664(lVar6);
  local_58 = FUN_14477b664(uVar4);
  local_40 = 0x1d;
  local_78 = &DAT_14cb8ae68;
  local_70 = &local_60;
  local_50 = uVar9;
  FUN_140881f5a(param_2,local_64,&local_78,0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar2 != (code *)0x0) {
    puVar8 = &local_60;
    if (0x18 < local_48) {
      puVar8 = local_60;
    }
    (*pcVar2)(puVar8);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60);
  }
  local_48 = 8;
  if (param_1[1] == 0) {
    local_60._0_4_ = 0;
    iVar3 = 0;
    uVar1 = (uint)local_60;
  }
  else {
    uVar1 = *(uint *)(param_1[1] + 0xc);
    local_60 = (undefined8 *)(ulonglong)uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar3 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar3 = *(int *)(lVar6 + 0x10);
      bVar10 = iVar3 == 0;
      if (bVar10) {
        *(int *)(lVar6 + 0x10) = iVar7;
        iVar3 = 0;
      }
      UNLOCK();
      uVar1 = (uint)local_60;
      if (bVar10) {
        iVar3 = iVar7;
      }
    }
  }
  local_60._0_4_ = uVar1;
  local_60 = (undefined8 *)CONCAT44(iVar3,(uint)local_60);
  local_40 = 6;
  local_78 = (undefined8 *)&DAT_14cb8ae58;
  local_70 = &local_60;
  FUN_140881f5a(param_2,local_64,&local_78,0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar2 != (code *)0x0) {
    puVar8 = &local_60;
    if (0x18 < local_48) {
      puVar8 = local_60;
    }
    (*pcVar2)(puVar8);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60);
  }
  local_48 = 4;
  local_60 = (undefined8 *)CONCAT44(local_60._4_4_,*(undefined4 *)(param_1[1] + 0x78));
  local_40 = 2;
  local_78 = (undefined8 *)&DAT_14cb8ae70;
  local_70 = &local_60;
  FUN_140881f5a(param_2,local_64,&local_78,0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar2 != (code *)0x0) {
    puVar8 = &local_60;
    if (0x18 < local_48) {
      puVar8 = local_60;
    }
    (*pcVar2)(puVar8);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60);
  }
  local_48 = 4;
  local_60 = (undefined8 *)CONCAT44(local_60._4_4_,*(undefined4 *)(*(longlong *)param_1[2] + 8));
  local_40 = 2;
  local_78 = (undefined8 *)&DAT_14cb8ae60;
  local_70 = &local_60;
  FUN_140881f5a(param_2,local_64,&local_78,0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar2 != (code *)0x0) {
    puVar8 = &local_60;
    if (0x18 < local_48) {
      puVar8 = local_60;
    }
    (*pcVar2)(puVar8);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60);
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140feeb70 FUN_140feeb70 body=57 status=ok
// SIG undefined FUN_140feeb70(void)

void FUN_140feeb70(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64f28 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64f28 = FUN_140002ddd(FUN_141857a42,uVar1,L"GbxSkillDef");
  }
  return;
}



// FUNCTION 140feebb0 FUN_140feebb0 body=57 status=ok
// SIG undefined FUN_140feebb0(void)

void FUN_140feebb0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ad80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ad80 = FUN_140002ddd(FUN_1464cced9,uVar1,L"GbxBrainAspect_ResourceLock");
  }
  return;
}



// FUNCTION 140feebe9 FUN_140feebe9 body=73 status=ok
// SIG undefined FUN_140feebe9(void)

void FUN_140feebe9(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x18);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140feec32 FUN_140feec32 body=32 status=ok
// SIG undefined FUN_140feec32(void)

void FUN_140feec32(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_140feec52(param_1);
  *param_1 = &PTR_FUN_14be742f0;
  return;
}



// FUNCTION 140feec52 FUN_140feec52 body=206 status=ok
// SIG undefined FUN_140feec52(void)

undefined8 * FUN_140feec52(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_14007ca06();
  FUN_1400841f8(param_1);
  param_1[5] = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf8;
  *param_1 = &PTR_FUN_14be73d70;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0x4069000000000000;
  param_1[9] = 0x4069000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14be78240;
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  puVar2[10] = 0;
  *(undefined4 *)(puVar2 + 0xb) = 0;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar2) && (param_1[5] = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 140feed20 FUN_140feed20 body=40 status=ok
// SIG undefined FUN_140feed20(void)

undefined8 FUN_140feed20(undefined8 param_1,int param_2)

{
  FUN_140feed48();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140feed48 FUN_140feed48 body=146 status=ok
// SIG undefined FUN_140feed48(void)

void FUN_140feed48(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b7347d0;
  param_1[5] = &PTR_FUN_14b734c50;
  param_1[6] = &PTR_LAB_14b734c90;
  param_1[0x22] = &PTR_FUN_14b734ce0;
  param_1[0xab] = &PTR_FUN_14b739090;
  if (param_1[0x138] != 0) {
    FUN_1400020a8();
  }
  param_1[0xab] = &PTR_FUN_14b127600;
  lVar1 = 0x7c0;
  do {
    FUN_14494dff0((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x120;
  } while (lVar1 != 0x460);
  FUN_140feedda(param_1);
  return;
}



// FUNCTION 140feedda FUN_140feedda body=149 status=ok
// SIG undefined FUN_140feedda(void)

void FUN_140feedda(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14b121200;
  param_1[5] = &PTR_FUN_14b121680;
  param_1[6] = &PTR_LAB_14b1216c0;
  param_1[0x22] = &PTR_FUN_14b121710;
  if (param_1[0xa9] != 0) {
    FUN_1400020a8();
  }
  param_1[0x27] = &PTR_FUN_14b127600;
  lVar2 = 0x3a0;
  do {
    FUN_14494dff0((longlong)param_1 + lVar2);
    lVar2 = lVar2 + -0x120;
  } while (lVar2 != 0x40);
  puVar1 = (undefined8 *)param_1[0x23];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 140feee70 FUN_140feee70 body=80 status=ok
// SIG undefined FUN_140feee70(void)

undefined8 * FUN_140feee70(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x68);
  FUN_1447715ec(param_2 + 2,param_1 + 0x70);
  FUN_140feeec0(param_2,param_3);
  return param_2;
}



// FUNCTION 140feeec0 FUN_140feeec0 body=192 status=ok
// SIG undefined FUN_140feeec0(void)

void FUN_140feeec0(undefined8 param_1,int *param_2)

{
  ulonglong uVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = (ulonglong)(uint)param_2[1];
  if (0 < param_2[1]) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      if ((*param_2 == 0) || (*param_2 == DAT_14c948000)) {
        local_40 = DAT_14c948620;
        local_48 = DAT_14c948618;
      }
      else {
        piVar2 = param_2 + 2;
        if (0 < param_2[9]) {
          piVar2 = *(int **)(param_2 + 6);
        }
        if (1 < (int)uVar1) {
          piVar2 = *(int **)(param_2 + 6);
        }
        local_40 = *(undefined4 *)((longlong)piVar2 + lVar4 + 8);
        local_48 = *(undefined8 *)((longlong)piVar2 + lVar4);
      }
      FUN_1402939f8(param_1,&local_48);
      lVar3 = lVar3 + 1;
      uVar1 = (ulonglong)param_2[1];
      lVar4 = lVar4 + 0xc;
    } while (lVar3 < (longlong)uVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140feef82 FUN_140feef82 body=1000 status=ok
// SIG undefined FUN_140feef82(void)

void FUN_140feef82(longlong *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 *puVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  int local_dc;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined8 *local_98;
  ulonglong uStack_90;
  longlong local_88 [2];
  undefined1 local_74 [4];
  void **local_70;
  void **local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar2 = FUN_140032b16(0);
  local_e8 = 1;
  FUN_1457df600(uVar2,local_88,1,1);
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  FUN_1403de9f2(local_88,&local_98,&DAT_149e06196,1);
  if ((longlong)(int)uStack_90 != 0) {
    puVar6 = local_98 + (longlong)(int)uStack_90 * 2;
    puVar12 = local_98;
    do {
      local_a8 = (void *)0x0;
      local_a0 = *(int *)(puVar12 + 1);
      lVar10 = (longlong)local_a0;
      pvVar1 = (void *)*puVar12;
      if (lVar10 == 0) {
        local_9c = 0;
      }
      else {
        FUN_1446dd670(&local_a8,local_a0,0);
        memcpy(local_a8,pvVar1,lVar10 * 2);
      }
      local_b8 = (undefined8 *)0x0;
      uStack_b0 = 0;
      FUN_1403de9f2(&local_a8,&local_b8,&DAT_149e0635c,1);
      if ((int)uStack_b0 == 2) {
        local_c8 = (void *)0x0;
        local_c0 = *(int *)(local_b8 + 1);
        lVar10 = (longlong)local_c0;
        pvVar1 = (void *)*local_b8;
        if (lVar10 == 0) {
          local_bc = 0;
        }
        else {
          FUN_1446dd670(&local_c8,local_c0,0);
          memcpy(local_c8,pvVar1,lVar10 * 2);
        }
        local_d8 = (void *)0x0;
        local_d0 = *(int *)(local_b8 + 3);
        lVar10 = (longlong)local_d0;
        pvVar1 = (void *)local_b8[2];
        if (lVar10 == 0) {
          local_cc = 0;
        }
        else {
          FUN_1446dd670(&local_d8,local_d0,0);
          memcpy(local_d8,pvVar1,lVar10 * 2);
        }
        if ((longlong)DAT_14cadc0f8 != 0) {
          piVar3 = DAT_14cadc0f0;
LAB_140fef133:
          if (piVar3[4] == local_c0) {
            if (1 < local_c0) {
              lVar10 = 0;
              do {
                uVar7 = *(ushort *)(*(longlong *)(piVar3 + 2) + lVar10);
                uVar8 = (ulonglong)uVar7;
                uVar9 = *(ushort *)((longlong)local_c8 + lVar10);
                if (uVar7 == uVar9) {
                  if (uVar7 == 0) break;
                }
                else {
                  if (0x7f < (uVar9 | uVar7)) goto LAB_140fef1a4;
                  uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                  uVar11 = (ulonglong)uVar9;
                  uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                  if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar11]) goto LAB_140fef1a4;
                }
                lVar10 = lVar10 + 2;
              } while( true );
            }
            goto LAB_140fef1ac;
          }
          if (piVar3[4] + local_c0 == 1) goto LAB_140fef1ac;
          goto LAB_140fef145;
        }
LAB_140fef1e4:
        if (local_d8 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_c8 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      FUN_1447a1747(local_b8,(int)uStack_b0);
      if (local_b8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar12 = puVar12 + 2;
    } while (puVar12 != puVar6);
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & 0x37) * 4);
    if (iVar5 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar5 * 0x20) == 0x37) goto LAB_140fef2b0;
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + *param_1 + 0x18);
      } while (iVar5 != -1);
    }
  }
  FUN_140056680(&local_a8,L"Disabled");
  local_70 = &local_c8;
  local_c8 = (void *)CONCAT44(local_c8._4_4_,0x37);
  local_68 = &local_a8;
  FUN_1413464b2(param_1,&local_b8,&local_70,0);
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_140fef2b0:
  FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140fef1a4:
  if (uVar7 == uVar9) {
LAB_140fef1ac:
    local_dc = *piVar3;
    if (local_dc != 0x51) {
      local_70 = (void **)&local_dc;
      local_68 = &local_d8;
      FUN_140fef36c(param_1,local_74);
    }
    goto LAB_140fef1e4;
  }
LAB_140fef145:
  piVar3 = piVar3 + 6;
  if (piVar3 == DAT_14cadc0f0 + (longlong)DAT_14cadc0f8 * 6) goto LAB_140fef1e4;
  goto LAB_140fef133;
}



// FUNCTION 140fef36c FUN_140fef36c body=374 status=ok
// SIG undefined FUN_140fef36c(void)

undefined4 * FUN_140fef36c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  void *_Src;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140fef636(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  local_40[2] = 0;
  local_40[3] = 0;
  uVar5 = *(uint *)(puVar1 + 1);
  _Src = (void *)*puVar1;
  local_40[4] = uVar5;
  if ((longlong)(int)uVar5 == 0) {
    local_40[5] = 0;
  }
  else {
    FUN_1446dd670(local_40 + 2,uVar5,0);
    memcpy(*(void **)(local_40 + 2),_Src,(longlong)(int)uVar5 * 2);
    uVar4 = *local_40;
  }
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar2 = FUN_140fef4e4(param_1,uVar4,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[7] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_141346600(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fef4e4 FUN_140fef4e4 body=199 status=ok
// SIG undefined FUN_140fef4e4(void)

void FUN_140fef4e4(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_140fef5ac(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          break;
        }
        iVar8 = piVar1[6];
        uVar6 = 0;
      } while (iVar8 != -1);
      goto LAB_140fef590;
    }
  }
  uVar6 = 0;
LAB_140fef590:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 140fef5ac FUN_140fef5ac body=138 status=ok
// SIG undefined FUN_140fef5ac(void)

void FUN_140fef5ac(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140fef636 FUN_140fef636 body=482 status=ok
// SIG undefined FUN_140fef636(void)

int * FUN_140fef636(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1447711aa(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 140fef818 FUN_140fef818 body=685 status=ok
// SIG undefined FUN_140fef818(void)

undefined8 * FUN_140fef818(undefined8 *param_1,char param_2,char param_3,char param_4)

{
  int iVar1;
  void *_Src;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [45];
  char local_8b;
  char local_8a;
  char local_89;
  longlong local_88 [2];
  longlong local_78 [2];
  void *local_68;
  ulonglong uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  local_8a = param_3;
  local_89 = param_2;
  if ((longlong)DAT_14cad6228 != 0) {
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    lVar4 = (longlong)DAT_14cad6228 << 5;
    plVar8 = DAT_14cad6220;
    local_8b = param_4;
    do {
      if ((local_89 == '\0') || ((char)plVar8[3] == '\x01')) {
        if ((local_8a == '\0') || (*plVar8 == 0)) {
          pvVar6 = (void *)0x0;
        }
        else {
          FUN_1400021e4(plVar8,local_88);
          FUN_140ba7826(local_78,&DAT_149e2b508,local_88);
          FUN_144a882a8(&local_68,local_78,&DAT_149e2b50c);
          pvVar6 = local_68;
          local_68 = (void *)0x0;
          uStack_60 = 0;
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          if (local_88[0] != 0) {
            FUN_1400020a8();
          }
        }
        uVar3 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar2 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
        if (uStack_50._4_4_ < uVar2) {
          FUN_1447a1bd6(&local_58,uVar3 & 0xffffffff);
        }
        puVar5 = local_58 + lVar7 * 2;
        local_58[lVar7 * 2] = 0;
        iVar1 = (int)plVar8[2];
        _Src = (void *)plVar8[1];
        *(int *)(local_58 + lVar7 * 2 + 1) = iVar1;
        if ((longlong)iVar1 == 0) {
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar5,iVar1,0);
          memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
        }
        if (pvVar6 != (void *)0x0) {
          FUN_1400020a8(pvVar6);
        }
      }
      plVar8 = plVar8 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
    if (local_8b != '\0') {
      FUN_140e836da(local_58);
    }
    if ((int)uStack_50 == 0) {
      uVar3 = 0;
    }
    else {
      lVar4 = (longlong)(int)uStack_50 << 4;
      puVar5 = local_58;
      do {
        if (*(int *)(param_1 + 1) < 2) {
          local_68 = (void *)0x0;
          uVar2 = *(uint *)(puVar5 + 1);
          pvVar6 = (void *)*puVar5;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar2);
          if ((longlong)(int)uVar2 == 0) {
            uStack_60 = (ulonglong)uVar2;
          }
          else {
            FUN_1446dd670(&local_68,uVar2,0);
            memcpy(local_68,pvVar6,(longlong)(int)uVar2 * 2);
          }
        }
        else {
          FUN_140b1283a(&local_68,&DAT_149e06196,puVar5);
        }
        FUN_1400020e8(param_1,local_68);
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
        puVar5 = puVar5 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
      uVar3 = uStack_50 & 0xffffffff;
    }
    FUN_1447a1747(local_58,uVar3);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fefac6 FUN_140fefac6 body=31 status=ok
// SIG undefined FUN_140fefac6(void)

undefined8 FUN_140fefac6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fefae6 FUN_140fefae6 body=31 status=ok
// SIG undefined FUN_140fefae6(void)

undefined8 FUN_140fefae6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fefb06 FUN_140fefb06 body=31 status=ok
// SIG undefined FUN_140fefb06(void)

undefined8 FUN_140fefb06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fefb26 FUN_140fefb26 body=74 status=ok
// SIG undefined FUN_140fefb26(void)

void FUN_140fefb26(longlong param_1,undefined4 param_2)

{
  FUN_14078a7c0(param_1 + 0x5b0);
  if (*(longlong *)(param_1 + 0x620) != 0) {
    FUN_14480f766(&DAT_14cb10a78);
    *(undefined8 *)(param_1 + 0x620) = 0;
  }
  FUN_140fefb70(param_1,param_2);
  return;
}



// FUNCTION 140fefb70 FUN_140fefb70 body=299 status=ok
// SIG undefined FUN_140fefb70(void)

void FUN_140fefb70(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar7 = *(longlong *)(param_1 + 0x3d0);
  if (lVar7 != 0) {
    FUN_140a3efde(param_1,lVar7);
    FUN_140c7df0a(lVar7);
    lVar6 = (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x10))(lVar7 + 0x28);
    lVar4 = *(longlong *)(lVar6 + 8);
    plVar5 = *(longlong **)(lVar6 + 0x10);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      FUN_14087345e(lVar7 + 0x28);
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    FUN_1401073f6(lVar7 + 0x230,param_1);
    FUN_1401073f6(lVar7 + 0x240,param_1);
    FUN_1401073f6(lVar7 + 0x250,param_1);
    FUN_140873278(lVar7);
    if ((param_2 == 0) && (DAT_14c761211 != '\0')) {
      FUN_144757f48(lVar7,0x40000000);
      uVar3 = *(uint *)(lVar7 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      do {
        uVar3 = *(uint *)(lVar7 + 8);
        if ((uVar3 >> 0x15 & 1) != 0) break;
        LOCK();
        bVar8 = uVar3 == *(uint *)(lVar7 + 8);
        if (bVar8) {
          *(uint *)(lVar7 + 8) = uVar3 | 0x200000;
        }
        UNLOCK();
      } while (!bVar8);
    }
  }
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 140fefcaa FUN_140fefcaa body=180 status=ok
// SIG undefined FUN_140fefcaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140fefcaa(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b262a20;
  plVar3 = (longlong *)param_1[4];
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
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar3 = (longlong *)param_1[1], plVar3 != (longlong *)0x0)) {
    if (plVar3[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar3 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar3;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fefd5e FUN_140fefd5e body=92 status=ok
// SIG undefined FUN_140fefd5e(void)

undefined8 FUN_140fefd5e(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  uVar3 = *param_2;
  iVar1 = *(int *)(lVar2 + 0x58);
  lVar4 = (longlong)iVar1;
  *(uint *)(lVar2 + 0x58) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x5c) < iVar1 + 1U) {
    FUN_140fefdba((longlong *)(lVar2 + 0x50),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x50);
  *(undefined8 *)(lVar2 + lVar4 * 0x18) = uVar3;
  *(undefined8 **)(lVar2 + 8 + lVar4 * 0x18) = param_2;
  *(undefined8 *)(lVar2 + 0x10 + lVar4 * 0x18) = param_3;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 140fefdba FUN_140fefdba body=373 status=ok
// SIG undefined FUN_140fefdba(void)

void FUN_140fefdba(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140fefe45;
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
LAB_140fefe45:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140feff30 FUN_140feff30 body=370 status=ok
// SIG undefined FUN_140feff30(void)

undefined8 * FUN_140feff30(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140ff00b0 FUN_140ff00b0 body=129 status=ok
// SIG undefined FUN_140ff00b0(void)

undefined8 * FUN_140ff00b0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2de4e0;
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_140ff0132(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ff0132 FUN_140ff0132 body=249 status=ok
// SIG undefined FUN_140ff0132(void)

void FUN_140ff0132(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac67f80;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_140b86e6c(param_1[0x2d],*(undefined4 *)(param_1 + 0x2e));
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140b86e6c(param_1[0x2a],*(undefined4 *)(param_1 + 0x2b));
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x22;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x26) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x25)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x25)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 140ff022c FUN_140ff022c body=412 status=ok
// SIG undefined FUN_140ff022c(void)

void FUN_140ff022c(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  
  lVar4 = (**(code **)(*param_3 + 8))(param_3);
  if ((*(byte *)((longlong)param_1 + 0x105) & 0x40) != 0) {
    if ((*(byte *)(lVar4 + 0x7c) & 2) != 0) {
      return;
    }
    FUN_140ff057c(param_1,param_2,0);
    return;
  }
  if (((*(byte *)(param_1 + 0xf9) & 1) != 0) && ((*(byte *)(lVar4 + 0x7c) & 2) == 0)) {
    lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar4 = param_1[0x31];
    if (lVar4 != 0) {
      dVar1 = *(double *)(lVar5 + 0x6d0);
      uVar6 = FUN_1409d6582();
      plVar7 = (longlong *)FUN_144718840(lVar4,uVar6);
      if (plVar7 != (longlong *)0x0) {
        uVar2 = *(ushort *)(param_1 + 0x75);
        if ((uVar2 & 2) == 0) {
          fVar8 = (float)(**(code **)(*plVar7 + 0x40))(plVar7);
          fVar9 = (float)(**(code **)(*plVar7 + 0x38))(plVar7);
          if ((float)dVar1 < fVar9 + fVar8) goto LAB_140ff0309;
        }
        iVar3 = (**(code **)(*plVar7 + 0x10))(plVar7);
        if (iVar3 == 1) {
          if ((uVar2 & 2) == 0) {
            lVar4 = (**(code **)(*param_3 + 8))(param_3);
            if ((*(byte *)(lVar4 + 0x7c) & 1) == 0) goto LAB_140ff0309;
          }
          fVar8 = (float)(**(code **)(*plVar7 + 0x30))(plVar7);
          FUN_140ff057c(param_1,param_2,0.0001 < fVar8);
        }
        else {
          if (iVar3 != 2) goto LAB_140ff0309;
          if ((uVar2 & 2) == 0) {
            lVar4 = (**(code **)(*param_3 + 8))(param_3);
            if ((*(byte *)(lVar4 + 0x7c) & 1) == 0) goto LAB_140ff0309;
          }
          (**(code **)(*plVar7 + 0x68))(plVar7,param_2);
        }
        (**(code **)(*plVar7 + 0x60))(plVar7,iVar3);
      }
    }
  }
LAB_140ff0309:
  FUN_140ff03c8(param_1,param_2,param_3);
  return;
}



// FUNCTION 140ff03c8 FUN_140ff03c8 body=435 status=ok
// SIG undefined FUN_140ff03c8(void)

void FUN_140ff03c8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 unaff_RBP;
  
  lVar6 = (**(code **)(*param_3 + 0xf8))(param_3);
  if ((lVar6 != 0) &&
     (lVar6 = (**(code **)(*param_3 + 8))(param_3), (*(byte *)(lVar6 + 0x7c) & 2) == 0)) {
    lVar7 = (**(code **)(*param_3 + 8))(param_3);
    lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x48);
    if (lVar6 != 0) {
      uVar2 = *(undefined1 *)(lVar7 + 0x7c);
      lVar6 = lVar6 * 0x28;
      plVar9 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x40) + 8);
      do {
        plVar1 = plVar9 + -1;
        plVar8 = (longlong *)FUN_14479d2ce(plVar1);
        if (plVar8 == (longlong *)0x0) {
          if (*plVar9 != 0) {
            plVar8 = (longlong *)FUN_140007850();
            cVar5 = (*(code *)PTR_FUN_14c758760)();
            if ((plVar8 == (longlong *)0x0) || (cVar5 == '\0')) {
              FUN_14485c47a(plVar1,plVar8);
              if (plVar8 == (longlong *)0x0) goto LAB_140ff0473;
            }
            else {
              uVar3 = *(uint *)((longlong)plVar8 + 0xc);
              if ((int)uVar3 < DAT_14c9647dc) {
                lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
              }
              else {
                lVar7 = 0;
              }
              if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
                FUN_14485c47a(plVar1,plVar8);
              }
            }
            if ((*(uint *)(plVar8 + 1) >> 0x1e & 1) == 0) goto LAB_140ff044f;
          }
        }
        else {
LAB_140ff044f:
          lVar7 = FUN_144a797b2();
          if ((((*(int *)(lVar7 + 0x38) <= *(int *)(plVar8[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30)) && (lVar7 = FUN_145a557f0(), lVar7 != 0)) &&
             ((*(int *)(lVar7 + 0x38) <= (int)plVar8[7] &&
              (*(longlong *)(plVar8[6] + (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)))) {
            lVar7 = plVar8[0x22];
            if (lVar7 == 0) {
              (**(code **)(*plVar8 + 1000))(plVar8);
              lVar7 = plVar8[0x22];
              if (lVar7 == 0) goto LAB_140ff0473;
            }
            uVar4 = *(undefined8 *)(lVar7 + 0x28);
            *(longlong *)(lVar7 + 0x28) = param_1;
            FUN_14876f502(lVar7,param_1,param_2,
                          CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar2) & 0xffffff01);
            *(undefined8 *)(lVar7 + 0x28) = uVar4;
          }
        }
LAB_140ff0473:
        plVar9 = plVar9 + 5;
        lVar6 = lVar6 + -0x28;
      } while (lVar6 != 0);
    }
  }
  return;
}



// FUNCTION 140ff057c FUN_140ff057c body=3728 status=ok
// SIG undefined FUN_140ff057c(void)

void FUN_140ff057c(longlong *param_1,longlong param_2,char param_3)

{
  int *piVar1;
  longlong *****ppppplVar2;
  uint uVar3;
  code *pcVar4;
  longlong ***ppplVar5;
  longlong ***ppplVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 ***pppuVar10;
  undefined8 ****ppppuVar11;
  int iVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  longlong ****pppplVar18;
  longlong *****ppppplVar19;
  undefined1 uVar20;
  longlong *plVar21;
  undefined4 *puVar22;
  undefined8 *****pppppuVar23;
  longlong *plVar24;
  int iVar25;
  longlong *****ppppplVar26;
  undefined8 *puVar27;
  bool bVar28;
  float fVar29;
  undefined1 auStack_718 [32];
  undefined8 *local_6f8;
  undefined8 ****local_6f0;
  undefined4 local_6e8;
  undefined8 local_6e0;
  undefined4 *local_6d8;
  int local_6d0;
  undefined4 local_6c8;
  undefined1 local_6c0;
  undefined4 local_6b8;
  char local_6a9;
  longlong *local_6a8;
  longlong local_6a0;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined8 ***local_668;
  undefined8 ****local_660;
  undefined8 ****local_658;
  undefined1 local_64c [4];
  longlong ****local_648;
  undefined8 uStack_640;
  longlong local_638;
  undefined8 uStack_630;
  longlong local_628;
  undefined8 uStack_620;
  longlong local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  longlong local_5f8;
  longlong *local_5e8;
  longlong local_5d8 [4];
  longlong local_5b8;
  longlong *local_5a8;
  longlong local_598 [4];
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined4 local_548;
  undefined4 local_544;
  undefined4 local_540;
  undefined8 local_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  ushort local_318;
  byte local_310;
  char local_308;
  longlong local_300;
  undefined8 ****local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  ushort local_2e0;
  byte local_2d8;
  byte local_2d0;
  undefined8 ***local_2c8;
  undefined8 *puStack_2c0;
  undefined8 local_2b8;
  longlong local_2b0;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_294;
  undefined4 local_28c;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_244;
  undefined4 local_23c;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c0;
  undefined4 local_198;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_718;
  local_6a9 = param_3;
  if (((*(byte *)((longlong)param_1 + 0x105) & 8) == 0) && (lVar16 = param_1[0x31], lVar16 != 0)) {
    uVar13 = FUN_1409d6582();
    plVar14 = (longlong *)FUN_144718840(lVar16,uVar13);
    if ((plVar14 != (longlong *)0x0) &&
       (plVar15 = (longlong *)(**(code **)(*plVar14 + 0x18))(plVar14), plVar15 != (longlong *)0x0))
    {
      lVar16 = (**(code **)(*plVar15 + 8))(plVar15);
      lVar17 = FUN_140ff140e();
      if (((lVar17 != 0) && (*(int *)(lVar17 + 0x38) <= *(int *)(lVar16 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8) ==
          lVar17 + 0x30)) {
        if ((plVar15[4] != 0) && ((int)plVar15[5] - 1U < 0xfffffffe)) {
          uVar13 = (**(code **)(*param_1 + 0x180))(param_1);
          FUN_1407f7f84(&local_648,uVar13);
          if (uStack_640 != (longlong *)0x0) {
            iVar12 = (int)uStack_640[1];
            do {
              if (iVar12 == 0) {
                plVar21 = (longlong *)0x0;
                break;
              }
              LOCK();
              iVar25 = (int)uStack_640[1];
              bVar28 = iVar12 == iVar25;
              if (bVar28) {
                *(int *)(uStack_640 + 1) = iVar12 + 1;
                iVar25 = iVar12;
              }
              iVar12 = iVar25;
              UNLOCK();
              plVar21 = uStack_640;
            } while (!bVar28);
            LOCK();
            piVar1 = (int *)((longlong)uStack_640 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*uStack_640 + 0x10))();
            }
            pppplVar18 = local_648;
            if (plVar21 != (longlong *)0x0) {
              if (local_648 != (longlong ****)0x0) {
                local_618 = 0;
                uStack_610 = 0;
                local_628 = 0;
                uStack_620 = 0;
                local_638 = 0;
                uStack_630 = 0;
                local_648 = (longlong ****)0x0;
                uStack_640 = (longlong *)0x0;
                local_608 = CONCAT44(local_608._4_4_,0xc0);
                local_5f8 = 0;
                local_5e8 = (longlong *)0x0;
                local_5b8 = 0;
                local_5a8 = (longlong *)0x0;
                local_578 = 0;
                uStack_570 = 0;
                local_568 = 0;
                local_560 = 0x3ff0000000000000;
                local_558 = 0x3ff0000000000000;
                local_550 = 0x3ff0000000000000;
                local_548 = 0;
                local_540 = 0;
                local_544 = (undefined4)param_1[0x4e];
                lVar16 = param_1[0x30];
                local_300 = plVar15[4];
                FUN_1446dcdd4(&local_2c8);
                if (((DAT_14cb78ff0 != 0) &&
                    (lVar17 = FUN_144837462(DAT_14cb78ff0,&local_2c8), lVar16 != 0)) &&
                   (lVar17 != 0)) {
                  local_6e8 = 0;
                  local_6f8 = (undefined8 *)CONCAT71(local_6f8._1_7_,1);
                  local_6f0 = &local_648;
                  FUN_1408f2522(pppplVar18,lVar17,lVar16,param_2);
                }
                if (local_2b0 != 0) {
                  FUN_1400020a8();
                }
                if (local_5b8 != 0) {
                  plVar24 = local_5a8;
                  if (local_5a8 == (longlong *)0x0) {
                    plVar24 = local_598;
                  }
                  (**(code **)(*plVar24 + 0x10))();
                }
                if (local_5f8 != 0) {
                  plVar24 = local_5e8;
                  if (local_5e8 == (longlong *)0x0) {
                    plVar24 = local_5d8;
                  }
                  (**(code **)(*plVar24 + 0x10))();
                }
                if (local_618 != 0) {
                  FUN_1400020a8();
                }
                if (local_628 != 0) {
                  FUN_1400020a8();
                }
                if (local_638 != 0) {
                  FUN_1400020a8();
                }
                if (local_648 != (longlong ****)0x0) {
                  FUN_1400020a8();
                }
              }
              LOCK();
              plVar24 = plVar21 + 1;
              *(int *)plVar24 = (int)*plVar24 + -1;
              UNLOCK();
              if ((int)*plVar24 == 0) {
                (**(code **)*plVar21)(plVar21);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                }
              }
            }
          }
        }
        pppplVar18 = (longlong ****)FUN_1407a0dc0(plVar15 + 9);
        if (pppplVar18 != (longlong ****)0x0) {
          local_2a0 = 0;
          local_298 = 0;
          local_2c8 = (longlong ****)0x0;
          puStack_2c0 = (undefined8 *)0x0;
          local_2b8 = 0;
          local_294 = 0xffffffff00000080;
          local_28c = 0;
          local_280 = 0;
          local_278 = 0;
          local_250 = 0;
          local_248 = 0;
          local_270 = 0;
          uStack_268 = 0;
          local_244 = 0xffffffff00000080;
          local_23c = 0;
          local_230 = 0;
          local_228 = 0;
          local_220 = 0;
          local_218 = 0xffffffff00000000;
          local_1f0 = 0;
          local_1e8 = 0;
          local_210 = 0;
          uStack_208 = 0;
          local_1e4 = 0xffffffff00000080;
          local_1dc = 0;
          local_1d0 = 0;
          local_1c8 = 0;
          local_1c0 = 0;
          local_198 = 0;
          local_170 = 0;
          local_168 = 0x200000000;
          local_158 = 0;
          local_150 = 0;
          uStack_14c = 0x20;
          uStack_148 = 0xffffffff;
          uStack_144 = 0;
          local_138 = 0;
          local_130 = 0;
          local_108 = 0;
          local_100 = 0x200000000;
          local_f0 = 0;
          local_e8 = 0;
          uStack_e4 = 0x20;
          uStack_e0 = 0xffffffff;
          uStack_dc = 0;
          local_d0 = 0;
          local_c8 = 0;
          local_a0 = 0;
          local_98 = 0x200000000;
          local_88 = 0;
          local_80 = 0;
          uStack_7c = 0x20;
          uStack_78 = 0xffffffff;
          uStack_74 = 0;
          local_68 = 0;
          local_60 = 0;
          local_58 = 0;
          local_6a8 = plVar14;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(pppplVar18);
          }
          local_2e8 = *(undefined8 *)(param_2 + 0x38);
          uStack_640 = &local_300;
          local_2f8 = *(undefined8 *****)(param_2 + 0x28);
          uStack_2f0 = *(undefined8 *)(param_2 + 0x30);
          local_300 = 0;
          local_2e0 = 0x18;
          local_2d8 = 4;
          local_2d0 = (byte)~DAT_14c9a8994 >> 3 & 4;
          local_330 = (undefined4)plVar15[0xe];
          local_338 = 0;
          local_318 = 4;
          local_310 = 3;
          local_308 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
          local_660 = DAT_14cb89e10;
          local_648 = (longlong ****)&local_660;
          local_2c8 = pppplVar18;
          FUN_140ffad64(&puStack_2c0,&local_668,&local_648,0);
          local_660 = DAT_14cb89e18;
          local_648 = (longlong ****)&local_660;
          uStack_640 = &local_338;
          FUN_140ffad64(&puStack_2c0,&local_668,&local_648,0);
          lVar16 = param_2 + 0xb8;
          lVar17 = FUN_14485cccc(lVar16);
          local_648 = (longlong ****)0x0;
          local_628 = CONCAT62(local_628._2_6_,8);
          local_6a0 = lVar16;
          if (lVar17 == 0) {
            uStack_640._0_4_ = 0;
            iVar12 = 0;
            uVar3 = (uint)uStack_640;
          }
          else {
            uVar3 = *(uint *)(lVar17 + 0xc);
            uStack_640 = (longlong *)(ulonglong)uVar3;
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar16 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar16 = 0;
            }
            iVar12 = *(int *)(lVar16 + 0x10);
            if (*(int *)(lVar16 + 0x10) == 0) {
              LOCK();
              iVar12 = DAT_14c964868 + 1;
              UNLOCK();
              iVar25 = DAT_14c964868 + 1;
              bVar28 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar12;
              if (bVar28) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                             );
              }
              LOCK();
              iVar12 = *(int *)(lVar16 + 0x10);
              bVar28 = iVar12 == 0;
              if (bVar28) {
                *(int *)(lVar16 + 0x10) = iVar25;
                iVar12 = 0;
              }
              UNLOCK();
              uVar3 = (uint)uStack_640;
              if (bVar28) {
                iVar12 = iVar25;
              }
            }
          }
          uStack_640._0_4_ = uVar3;
          uStack_640 = (longlong *)CONCAT44(iVar12,(uint)uStack_640);
          uStack_620 = CONCAT71(uStack_620._1_7_,7);
          uVar20 = 7;
          if ((DAT_14c9a8cf4 & 0x20) != 0) {
            uVar20 = 0;
          }
          local_618 = CONCAT71(local_618._1_7_,uVar20);
          local_668 = DAT_14cb89e20;
          local_660 = &local_668;
          local_658 = &local_648;
          FUN_140ff1448(&puStack_2c0,local_64c,&local_660,0);
          plVar14 = local_6a8;
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)uStack_620 * 0x120)
                             );
          if (pcVar4 != (code *)0x0) {
            plVar21 = uStack_640;
            if ((ushort)local_628 < 0x19) {
              plVar21 = &uStack_640;
            }
            (*pcVar4)(plVar21);
          }
          if (0x18 < (ushort)local_628) {
            FUN_1400020a8(uStack_640);
          }
          FUN_140ff15b2(&local_2c8);
          (**(code **)(*param_1 + 0x2c8))(param_1,&local_668,1);
          pppuVar10 = local_668;
          *(byte *)((longlong)local_668 + 0x1c2) = *(byte *)((longlong)local_668 + 0x1c2) & 0xfe;
          ppplVar5 = (longlong ***)param_1[0x24];
          if (((longlong ***)local_668[1] != ppplVar5) ||
             (*(int *)(local_668 + 2) != (int)param_1[0x25])) {
            local_668[1] = ppplVar5;
            *(int *)(local_668 + 2) = (int)param_1[0x25];
            local_668[3] = (longlong ***)0x0;
          }
          ppplVar6 = (longlong ***)plVar15[0x15];
          if ((ppplVar6 != (longlong ***)0x0) && ((int)plVar15[0x16] - 1U < 0xfffffffe)) {
            if (ppplVar5 != ppplVar6) {
              local_668[3] = (longlong ***)0x0;
            }
            local_668[1] = ppplVar6;
            plVar14 = local_6a8;
          }
          local_668[6] = *(longlong ****)(param_2 + 0x38);
          uVar7 = *(undefined4 *)(param_2 + 0x2c);
          uVar8 = *(undefined4 *)(param_2 + 0x30);
          uVar9 = *(undefined4 *)(param_2 + 0x34);
          *(undefined4 *)(local_668 + 4) = *(undefined4 *)(param_2 + 0x28);
          *(undefined4 *)((longlong)local_668 + 0x24) = uVar7;
          *(undefined4 *)(local_668 + 5) = uVar8;
          *(undefined4 *)((longlong)local_668 + 0x2c) = uVar9;
          if (param_1[0x30] == 0) {
            *(undefined4 *)((longlong)local_668 + 0x6c) = 0;
            iVar12 = 0;
          }
          else {
            uVar3 = *(uint *)(param_1[0x30] + 0xc);
            *(uint *)((longlong)local_668 + 0x6c) = uVar3;
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar16 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar16 = 0;
            }
            iVar12 = *(int *)(lVar16 + 0x10);
            if (*(int *)(lVar16 + 0x10) == 0) {
              LOCK();
              iVar12 = DAT_14c964868 + 1;
              UNLOCK();
              iVar25 = DAT_14c964868 + 1;
              bVar28 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar12;
              if (bVar28) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar25);
              }
              LOCK();
              iVar12 = *(int *)(lVar16 + 0x10);
              bVar28 = iVar12 == 0;
              if (bVar28) {
                *(int *)(lVar16 + 0x10) = iVar25;
                iVar12 = 0;
              }
              UNLOCK();
              plVar14 = local_6a8;
              if (bVar28) {
                iVar12 = iVar25;
              }
            }
          }
          *(int *)(pppuVar10 + 0xe) = iVar12;
          lVar16 = FUN_14485cccc(local_6a0);
          pppuVar10 = local_668;
          if (lVar16 == 0) {
            *(undefined4 *)((longlong)local_668 + 0x74) = 0;
            iVar12 = 0;
          }
          else {
            uVar3 = *(uint *)(lVar16 + 0xc);
            *(uint *)((longlong)local_668 + 0x74) = uVar3;
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar16 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar16 = 0;
            }
            iVar12 = *(int *)(lVar16 + 0x10);
            if (*(int *)(lVar16 + 0x10) == 0) {
              LOCK();
              iVar12 = DAT_14c964868 + 1;
              UNLOCK();
              iVar25 = DAT_14c964868 + 1;
              bVar28 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar12;
              if (bVar28) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar25);
              }
              LOCK();
              iVar12 = *(int *)(lVar16 + 0x10);
              bVar28 = iVar12 == 0;
              if (bVar28) {
                *(int *)(lVar16 + 0x10) = iVar25;
                iVar12 = 0;
              }
              UNLOCK();
              plVar14 = local_6a8;
              if (bVar28) {
                iVar12 = iVar25;
              }
            }
          }
          *(int *)(pppuVar10 + 0xf) = iVar12;
          fVar29 = (float)(**(code **)(*plVar14 + 0x28))(plVar14);
          *(float *)((longlong)local_668 + 0x7c) = fVar29 * *(float *)((longlong)local_668 + 0x7c);
          FUN_1405dc634(local_668 + 0x32,plVar15 + 0x19);
          if (local_6a9 != '\0') {
            *(uint *)(local_668 + 0xd) = *(uint *)(local_668 + 0xd) | 0x4000;
            FUN_14485c47a((longlong)local_668 + 0x74,param_1[0x31]);
          }
          if (1e-08 < ABS(*(float *)(plVar15 + 0x18) + -1.0)) {
            *(undefined1 *)((longlong)local_668 + 0x179) = 1;
            if ((char)param_1[0x3a] == '\x01') {
              fVar29 = *(float *)((longlong)param_1 + 0x1d4);
            }
            else {
              fVar29 = 1.0;
            }
            *(float *)((longlong)local_668 + 0x17c) = fVar29;
            *(float *)((longlong)local_668 + 0x17c) = fVar29 * *(float *)(plVar15 + 0x18);
            plVar14 = local_6a8;
          }
          fVar29 = (float)(**(code **)(*plVar14 + 0x20))(plVar14);
          local_6d0 = (int)ROUND(fVar29 + fVar29 + -0.5) >> 1;
          local_698 = (undefined4)plVar15[0xf];
          uStack_694 = *(undefined4 *)((longlong)plVar15 + 0x7c);
          uStack_690 = (undefined4)plVar15[0x10];
          uStack_68c = *(undefined4 *)((longlong)plVar15 + 0x84);
          local_688 = (undefined4)plVar15[0x11];
          uStack_684 = *(undefined4 *)((longlong)plVar15 + 0x8c);
          uStack_680 = (undefined4)plVar15[0x12];
          uStack_67c = *(undefined4 *)((longlong)plVar15 + 0x94);
          local_678 = (undefined4)plVar15[0x13];
          uStack_674 = *(undefined4 *)((longlong)plVar15 + 0x9c);
          uStack_670 = (undefined4)plVar15[0x14];
          uStack_66c = *(undefined4 *)((longlong)plVar15 + 0xa4);
          if (*(int *)(local_668 + 0xf) == 0) {
            uVar13 = 0;
          }
          else {
            uVar3 = *(uint *)((longlong)local_668 + 0x74);
            uVar13 = 0;
            if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
              puVar27 = (undefined8 *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
              if ((puVar27 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar27 + 2) != *(int *)(local_668 + 0xf) ||
                  ((*(uint *)(puVar27 + 1) & 0x10200000) != 0)))) {
                uVar13 = 0;
              }
              else {
                uVar13 = *puVar27;
              }
            }
          }
          local_6b8 = 0;
          local_6c8 = 0;
          local_6d8 = &local_698;
          local_6e0 = 0;
          local_6f8 = &DAT_14c8464f8;
          local_6c0 = 0;
          local_6e8 = CONCAT31(local_6e8._1_3_,2);
          local_6f0 = &local_2c8;
          FUN_140ff1788(&local_648,param_1[0x30],(undefined4 *)(param_2 + 0x28),uVar13);
          ppppplVar19 = (longlong *****)FUN_14001cc68(0x360,0x10);
          ppppplVar19[1] = (longlong ****)&DAT_100000001;
          *ppppplVar19 = (longlong ****)&PTR_FUN_14b415260;
          ppppplVar2 = ppppplVar19 + 2;
          FUN_1412d0edc(ppppplVar2,&local_648);
          ppppplVar19[2] = (longlong ****)&PTR_FUN_14b415280;
          ppppplVar19[0x6b] = (longlong ****)local_668;
          local_668 = (longlong ****)0x0;
          if (ppppplVar19 != (longlong *****)0x0) {
            LOCK();
            *(int *)(ppppplVar19 + 1) = *(int *)(ppppplVar19 + 1) + 1;
            UNLOCK();
            LOCK();
            ppppplVar26 = ppppplVar19 + 1;
            *(int *)ppppplVar26 = *(int *)ppppplVar26 + -1;
            UNLOCK();
            if (*(int *)ppppplVar26 == 0) {
              (*(code *)**ppppplVar19)(ppppplVar19);
              LOCK();
              piVar1 = (int *)((longlong)ppppplVar19 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (*(code *)(*ppppplVar19)[2])(ppppplVar19);
              }
            }
          }
          uVar13 = (**(code **)(*param_1 + 0x180))(param_1);
          FUN_140e67fb0(&local_660,uVar13);
          if ((longlong *****)local_658 != (longlong *****)0x0) {
            iVar12 = *(int *)(local_658 + 1);
            do {
              if (iVar12 == 0) {
                ppppplVar26 = (longlong *****)0x0;
                break;
              }
              LOCK();
              iVar25 = *(int *)(local_658 + 1);
              bVar28 = iVar12 == iVar25;
              if (bVar28) {
                *(int *)(local_658 + 1) = iVar12 + 1;
                iVar25 = iVar12;
              }
              iVar12 = iVar25;
              UNLOCK();
              ppppplVar26 = (longlong *****)local_658;
            } while (!bVar28);
            LOCK();
            piVar1 = (int *)((longlong)local_658 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*local_658)[2])();
            }
            ppppuVar11 = local_660;
            if (ppppplVar26 != (longlong *****)0x0) {
              if ((longlong *****)local_660 != (longlong *****)0x0) {
                local_660 = ppppplVar2;
                local_658 = ppppplVar19;
                if (ppppplVar19 == (longlong *****)0x0) {
                  FUN_140e67c44(ppppuVar11,&local_660);
                }
                else {
                  LOCK();
                  *(int *)(ppppplVar19 + 1) = *(int *)(ppppplVar19 + 1) + 1;
                  UNLOCK();
                  FUN_140e67c44();
                  if (ppppplVar19 != (longlong *****)0x0) {
                    LOCK();
                    ppppplVar2 = ppppplVar19 + 1;
                    *(int *)ppppplVar2 = *(int *)ppppplVar2 + -1;
                    UNLOCK();
                    if (*(int *)ppppplVar2 == 0) {
                      (*(code *)**ppppplVar19)(ppppplVar19);
                      LOCK();
                      piVar1 = (int *)((longlong)ppppplVar19 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (*(code *)(*ppppplVar19)[2])(ppppplVar19);
                      }
                    }
                  }
                }
              }
              LOCK();
              ppppplVar2 = ppppplVar26 + 1;
              *(int *)ppppplVar2 = *(int *)ppppplVar2 + -1;
              UNLOCK();
              if (*(int *)ppppplVar2 == 0) {
                (*(code *)**ppppplVar26)(ppppplVar26);
                LOCK();
                piVar1 = (int *)((longlong)ppppplVar26 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (*(code *)(*ppppplVar26)[2])(ppppplVar26);
                }
              }
            }
          }
          if (ppppplVar19 != (longlong *****)0x0) {
            LOCK();
            ppppplVar2 = ppppplVar19 + 1;
            *(int *)ppppplVar2 = *(int *)ppppplVar2 + -1;
            UNLOCK();
            if (*(int *)ppppplVar2 == 0) {
              (*(code *)**ppppplVar19)(ppppplVar19);
              LOCK();
              piVar1 = (int *)((longlong)ppppplVar19 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (*(code *)(*ppppplVar19)[2])(ppppplVar19);
              }
            }
          }
          local_608 = 0;
          FUN_14076ba36();
          if ((longlong ****)local_668 != (longlong ****)0x0) {
            (*(code *)**local_668)(local_668,1);
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_310 * 0x120));
          if (pcVar4 != (code *)0x0) {
            if (local_318 < 0x19) {
              puVar22 = &local_330;
            }
            else {
              puVar22 = (undefined4 *)CONCAT44(uStack_32c,local_330);
            }
            (*pcVar4)(puVar22);
          }
          if (0x18 < local_318) {
            FUN_1400020a8(CONCAT44(uStack_32c,local_330));
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2d8 * 0x120));
          if (pcVar4 != (code *)0x0) {
            pppppuVar23 = (undefined8 *****)local_2f8;
            if (local_2e0 < 0x19) {
              pppppuVar23 = &local_2f8;
            }
            (*pcVar4)(pppppuVar23);
          }
          if (0x18 < local_2e0) {
            FUN_1400020a8(local_2f8);
          }
          local_2c8 = (longlong ****)0x0;
          FUN_14076ba36(&puStack_2c0);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_718) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ff140e FUN_140ff140e body=57 status=ok
// SIG undefined FUN_140ff140e(void)

void FUN_140ff140e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc12e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc12e0 = FUN_140002ddd(FUN_14661af91,uVar1,L"JakobsRicochetModDef");
  }
  return;
}



// FUNCTION 140ff1448 FUN_140ff1448 body=361 status=ok
// SIG undefined FUN_140ff1448(void)

undefined4 *
FUN_140ff1448(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140ffab16(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_140382e86(local_40 + 1,uVar1);
  *(undefined4 *)(local_40 + 8) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = param_4;
  cVar2 = FUN_140ffa974(param_1,uVar7,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x44) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140ffaf02(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ff15b2 FUN_140ff15b2 body=449 status=ok
// SIG undefined FUN_140ff15b2(void)

void FUN_140ff15b2(longlong *param_1)

{
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188;
  undefined4 local_160;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if (*param_1 == 0) {
    local_268 = 0;
    uStack_250 = 0;
    local_248 = 0;
    uStack_240 = 0;
    local_278 = 0;
    uStack_270 = 0;
    local_288 = 0;
    uStack_280 = 0;
    uStack_260 = 0x8000000000;
    local_258 = 0xffffffff;
    local_218 = 0;
    uStack_200 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    uStack_220 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    uStack_210 = 0x8000000000;
    local_208 = 0xffffffff;
    local_1e8 = 0;
    local_1e0 = 0xffffffff00000000;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    uStack_190 = 0;
    uStack_1ac = 0x80;
    uStack_1a8 = 0xffffffff;
    local_188 = 0;
    local_160 = 0;
    local_138 = 0;
    local_130 = 0x200000000;
    local_120 = 0;
    local_118 = 0;
    uStack_114 = 0x20;
    uStack_110 = 0xffffffff;
    uStack_10c = 0;
    local_100 = 0;
    local_f8 = 0;
    local_d0 = 0;
    local_c8 = 0x200000000;
    local_b8 = 0;
    local_b0 = 0;
    uStack_ac = 0x20;
    uStack_a8 = 0xffffffff;
    uStack_a4 = 0;
    local_98 = 0;
    local_90 = 0;
    local_68 = 0;
    local_60 = 0x200000000;
    local_50 = 0;
    local_48 = 0;
    uStack_44 = 0x20;
    uStack_40 = 0xffffffff;
    uStack_3c = 0;
    local_30 = 0;
    local_28 = 0;
    FUN_140ff1bbc(param_1 + 1,&local_288);
    FUN_14076ba36(&local_288);
  }
  else if (*(char *)(*(longlong *)(*param_1 + 0x30) + 0x330) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_2a8);
  }
  if ((local_18 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ff1788 FUN_140ff1788 body=737 status=ok
// SIG undefined FUN_140ff1788(void)

uint * FUN_140ff1788(uint *param_1,longlong param_2,uint *param_3,longlong param_4,uint *param_5,
                    undefined8 param_6,undefined1 param_7,longlong param_8,undefined8 *param_9,
                    uint param_10,uint param_11,undefined1 param_12,uint param_13)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  
  param_1[0] = 0;
  param_1[1] = 0;
  uVar8 = 0;
  if (param_2 != 0) {
    uVar8 = *(uint *)(param_2 + 0xc);
    *param_1 = uVar8;
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    uVar8 = *(uint *)(lVar10 + 0x10);
    if (*(uint *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar9);
      }
      LOCK();
      uVar8 = *(uint *)(lVar10 + 0x10);
      bVar11 = uVar8 == 0;
      if (bVar11) {
        *(uint *)(lVar10 + 0x10) = uVar9;
        uVar8 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar8 = uVar9;
      }
    }
  }
  param_1[1] = uVar8;
  uVar8 = param_3[1];
  uVar9 = param_3[2];
  uVar2 = param_3[3];
  param_1[2] = *param_3;
  param_1[3] = uVar8;
  param_1[4] = uVar9;
  param_1[5] = uVar2;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_3 + 4);
  param_1[8] = 0;
  param_1[9] = 0;
  uVar8 = 0;
  if (param_4 != 0) {
    uVar8 = *(uint *)(param_4 + 0xc);
    param_1[8] = uVar8;
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    uVar8 = *(uint *)(lVar10 + 0x10);
    if (*(uint *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar9);
      }
      LOCK();
      uVar8 = *(uint *)(lVar10 + 0x10);
      bVar11 = uVar8 == 0;
      if (bVar11) {
        *(uint *)(lVar10 + 0x10) = uVar9;
        uVar8 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar8 = uVar9;
      }
    }
  }
  param_1[9] = uVar8;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar2 = param_5[3];
  param_1[10] = *param_5;
  param_1[0xb] = uVar8;
  param_1[0xc] = uVar9;
  param_1[0xd] = uVar2;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_5 + 4);
  FUN_140ff1a6a(param_1 + 0x10,param_6);
  *(undefined1 *)(param_1 + 0xae) = param_7;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  if (param_8 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(param_8 + 0xc);
    param_1[0xaf] = uVar8;
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    uVar8 = *(uint *)(lVar10 + 0x10);
    if (*(uint *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar9);
      }
      LOCK();
      uVar8 = *(uint *)(lVar10 + 0x10);
      bVar11 = uVar8 == 0;
      if (bVar11) {
        *(uint *)(lVar10 + 0x10) = uVar9;
        uVar8 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar8 = uVar9;
      }
    }
  }
  param_1[0xb0] = uVar8;
  uVar3 = param_9[1];
  uVar4 = param_9[2];
  uVar5 = param_9[3];
  uVar6 = param_9[4];
  uVar7 = param_9[5];
  *(undefined8 *)(param_1 + 0xb2) = *param_9;
  *(undefined8 *)(param_1 + 0xb4) = uVar3;
  *(undefined8 *)(param_1 + 0xb6) = uVar4;
  *(undefined8 *)(param_1 + 0xb8) = uVar5;
  *(undefined8 *)(param_1 + 0xba) = uVar6;
  *(undefined8 *)(param_1 + 0xbc) = uVar7;
  uVar8 = 1;
  if (1 < (int)param_10) {
    uVar8 = param_10;
  }
  param_1[0xbe] = uVar8;
  param_1[0xbf] = param_11;
  *(undefined1 *)(param_1 + 0xc0) = param_12;
  param_1[0xc1] = param_13;
  return param_1;
}



// FUNCTION 140ff1a6a FUN_140ff1a6a body=338 status=ok
// SIG undefined FUN_140ff1a6a(void)

undefined8 * FUN_140ff1a6a(undefined8 *param_1)

{
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0xffffffff00000000;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x200000000;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x20;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0x200000000;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x20;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0x200000000;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0x20;
  *(undefined4 *)(param_1 + 0x4a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  FUN_14054d68c(param_1);
  return param_1;
}



// FUNCTION 140ff1bbc FUN_140ff1bbc body=1325 status=ok
// SIG undefined FUN_140ff1bbc(void)

void FUN_140ff1bbc(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 ****ppppuVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  uint *puVar17;
  int iVar18;
  longlong *plVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auStack_128 [36];
  uint local_104;
  ulonglong local_100;
  uint *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined1 local_d4 [4];
  longlong local_d0;
  undefined8 ***local_c8 [3];
  ushort local_b0;
  byte local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar21 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar2 = *(uint *)(param_2 + 5);
  uVar22 = 1;
  iVar18 = 0;
  uVar5 = 0;
  if (uVar2 != 0) {
    puVar6 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar6 = (uint *)(param_2 + 2);
    }
    uVar5 = *puVar6;
    if (uVar5 == 0) {
      iVar18 = uVar2 + 0x1e;
      if (-1 < (int)(uVar2 - 1)) {
        iVar18 = uVar2 - 1;
      }
      uVar21 = 0;
      uVar22 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar22 = uVar21;
      }
      iVar18 = 0;
      do {
        if (uVar22 == uVar21) goto LAB_140ff1ef4;
        iVar18 = iVar18 + 0x20;
        uVar5 = puVar6[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar21 = 0;
    }
    uVar22 = (ulonglong)(-uVar5 & uVar5);
    uVar1 = uVar22 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar5 = (iVar18 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if ((int)uVar2 <= (int)uVar5) {
      uVar5 = uVar2;
    }
  }
  if (uVar5 != uVar2) {
    local_f0 = param_1 + 7;
    uVar12 = 0xffffffff;
    local_100 = (ulonglong)uVar2;
    local_f8 = (uint *)(param_2 + 2);
    do {
      lVar14 = *(longlong *)(*param_2 + (longlong)(int)uVar5 * 0x48);
      uVar13 = (uint)lVar14;
      iVar20 = (int)((ulonglong)lVar14 >> 0x20);
      uVar2 = (uint)((ulonglong)lVar14 >> 0x10);
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        plVar15 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar15 = local_f0;
        }
        iVar8 = *(int *)((longlong)plVar15 +
                        (ulonglong)
                        ((int)param_1[9] - 1U &
                        iVar20 + (uVar13 << 0x10 | uVar13 & 0xffff) +
                        (uVar2 << 0x13 | uVar2 & 0xffff) + ((uVar13 & 0xffff) >> 4)) * 4);
        if (iVar8 != -1) {
          do {
            plVar15 = (longlong *)(*param_1 + (longlong)iVar8 * 0x48);
            if (*plVar15 == lVar14) goto LAB_140ff1d78;
            iVar8 = (int)plVar15[8];
          } while (iVar8 != -1);
        }
      }
      plVar15 = (longlong *)0x0;
LAB_140ff1d78:
      plVar19 = plVar15 + 1;
      if (plVar15 == (longlong *)0x0) {
        plVar19 = (longlong *)0x0;
      }
      if ((int)param_1[0xb] == *(int *)((longlong)param_1 + 0x84)) {
LAB_140ff1d94:
        plVar15 = (longlong *)0x0;
      }
      else {
        plVar15 = param_1 + 0x11;
        if ((longlong *)param_1[0x12] != (longlong *)0x0) {
          plVar15 = (longlong *)param_1[0x12];
        }
        iVar20 = *(int *)((longlong)plVar15 +
                         (ulonglong)
                         ((int)param_1[0x13] - 1U &
                         iVar20 + (uVar13 << 0x10 | uVar13 & 0xffff) +
                         (uVar2 << 0x13 | uVar2 & 0xffff) + ((uVar13 & 0xffff) >> 4)) * 4);
        if (iVar20 == -1) goto LAB_140ff1d94;
        do {
          plVar15 = (longlong *)(param_1[10] + (longlong)iVar20 * 0x48);
          if (*plVar15 == lVar14) break;
          iVar20 = (int)plVar15[8];
          plVar15 = (longlong *)0x0;
        } while (iVar20 != -1);
      }
      lVar14 = *param_2 + (longlong)(int)uVar5 * 0x48;
      plVar11 = plVar15 + 1;
      if (plVar15 == (longlong *)0x0) {
        plVar11 = (longlong *)0x0;
      }
      local_104 = uVar12;
      if ((plVar19 == (longlong *)0x0) || (plVar11 == (longlong *)0x0)) {
        if (plVar19 != (longlong *)0x0) {
          cVar7 = (char)plVar19[6];
          if (cVar7 == *(char *)(lVar14 + 0x38)) goto LAB_140ff1dca;
          cVar4 = '\0';
          goto LAB_140ff204d;
        }
LAB_140ff205a:
        local_c8[0] = (undefined8 ***)(lVar14 + 8);
        local_d0 = lVar14;
        FUN_140ffa80e(&local_98,&local_e8,&local_d0,0);
        puVar6 = local_f8;
        uVar12 = local_104;
      }
      else {
        cVar4 = FUN_144a43716(plVar19 + 1,plVar11 + 1);
        cVar7 = (char)plVar19[6];
        if (cVar7 == *(char *)(lVar14 + 0x38)) {
          if (cVar4 != '\0') goto LAB_140ff205a;
        }
        else {
LAB_140ff204d:
          if (cVar7 != '\0' || cVar4 != '\0') goto LAB_140ff205a;
        }
LAB_140ff1dca:
        FUN_14034cca6(&local_d0,plVar19);
        local_e8 = lVar14;
        local_e0 = &local_d0;
        FUN_140ffa80e(&local_98,local_d4,&local_e8,0);
        puVar6 = local_f8;
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar10 = local_c8;
          if (0x18 < local_b0) {
            ppppuVar10 = (undefined8 ****)local_c8[0];
          }
          (*pcVar3)(ppppuVar10);
        }
        uVar12 = local_104;
        if (0x18 < local_b0) {
          FUN_1400020a8(local_c8[0]);
        }
      }
      uVar12 = uVar12 & ~(uint)uVar22;
      puVar17 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar17 = puVar6;
      }
      uVar2 = *(uint *)(param_2 + 5);
      iVar20 = (int)uVar21;
      lVar14 = (longlong)iVar20;
      uVar5 = puVar17[lVar14] & uVar12;
      if (uVar5 == 0) {
        iVar8 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar8 = uVar2 - 1;
        }
        iVar8 = iVar8 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar20) {
          iVar9 = iVar20;
        }
        if (iVar20 < iVar8) {
          lVar16 = 0;
          do {
            uVar5 = puVar17[lVar14 + lVar16 + 1];
            if (uVar5 != 0) {
              uVar21 = (ulonglong)(iVar20 + (int)lVar16 + 1);
              uVar12 = 0xffffffff;
              goto LAB_140ff1ea5;
            }
            iVar18 = iVar18 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar9 - lVar14 != lVar16);
          uVar12 = 0xffffffff;
          iVar20 = iVar9;
        }
        uVar21 = (ulonglong)(iVar20 + 1);
        uVar5 = uVar2;
      }
      else {
LAB_140ff1ea5:
        uVar22 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar22 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar5 = (iVar18 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar5) {
          uVar5 = uVar2;
        }
      }
    } while (uVar5 != (uint)local_100);
  }
LAB_140ff1ef4:
  FUN_14054d9c0(param_1,&local_98);
  FUN_14054da5a(param_1 + 0x14,param_2 + 0x14);
  FUN_14054d9c0(param_1 + 10,param_2);
  FUN_14054d926(param_1 + 0x26,param_2 + 0x26);
  FUN_14054d926(param_1 + 0x33,param_2 + 0x33);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(&local_98);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ff20ea FUN_140ff20ea body=104 status=ok
// SIG undefined FUN_140ff20ea(void)

undefined1 FUN_140ff20ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140ff2152(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x18c);
    uVar2 = *(undefined4 *)(param_3 + 400);
    uVar3 = *(undefined4 *)(param_3 + 0x194);
    uVar4 = *(undefined4 *)(param_3 + 0x198);
    uVar5 = *(undefined4 *)(param_3 + 0x19c);
    uVar6 = *(undefined4 *)(param_3 + 0x1a0);
    uVar7 = *(undefined4 *)(param_3 + 0x1a4);
    uVar8 = *(undefined4 *)(param_3 + 0x1a8);
    uVar9 = *(undefined4 *)(param_3 + 0x1ac);
    uVar10 = *(undefined4 *)(param_3 + 0x1b0);
    uVar11 = *(undefined4 *)(param_3 + 0x1b4);
    *(undefined4 *)(param_2 + 0x188) = *(undefined4 *)(param_3 + 0x188);
    *(undefined4 *)(param_2 + 0x18c) = uVar1;
    *(undefined4 *)(param_2 + 400) = uVar2;
    *(undefined4 *)(param_2 + 0x194) = uVar3;
    *(undefined4 *)(param_2 + 0x198) = uVar4;
    *(undefined4 *)(param_2 + 0x19c) = uVar5;
    *(undefined4 *)(param_2 + 0x1a0) = uVar6;
    *(undefined4 *)(param_2 + 0x1a4) = uVar7;
    *(undefined4 *)(param_2 + 0x1a8) = uVar8;
    *(undefined4 *)(param_2 + 0x1ac) = uVar9;
    *(undefined4 *)(param_2 + 0x1b0) = uVar10;
    *(undefined4 *)(param_2 + 0x1b4) = uVar11;
    param_2 = param_2 + 0x1b8;
    param_3 = param_3 + 0x1b8;
  }
  return 1;
}



// FUNCTION 140ff2152 FUN_140ff2152 body=682 status=ok
// SIG undefined FUN_140ff2152(void)

undefined8 * FUN_140ff2152(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
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
  byte bVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  lVar16 = 8;
  puVar17 = param_2;
  puVar18 = param_1;
  while( true ) {
    puVar18 = puVar18 + 1;
    puVar17 = puVar17 + 1;
    if (lVar16 == 0) break;
    lVar16 = lVar16 + -1;
    *puVar18 = *puVar17;
  }
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  FUN_140b177d4(param_1 + 0xb,param_2 + 0xb);
  uVar4 = *(undefined4 *)(param_2 + 0xf);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x7c);
  uVar6 = *(undefined4 *)(param_2 + 0x10);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x84);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x8c);
  uVar9 = *(undefined4 *)(param_2 + 0x12);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar8;
  *(undefined4 *)(param_1 + 0x12) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar10;
  *(undefined4 *)(param_1 + 0xf) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar5;
  *(undefined4 *)(param_1 + 0x10) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar7;
  lVar16 = param_2[0x13];
  if (DAT_14c950c29 == 1) {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar16 = param_2[0x13];
    }
  }
  bVar15 = DAT_14c950c29;
  param_1[0x13] = lVar16;
  lVar16 = param_2[0x14];
  if ((bVar15 & 1) != 0) {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar16 = param_2[0x14];
    }
  }
  param_1[0x14] = lVar16;
  param_1[0x15] = param_2[0x15];
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(param_2 + 0x17);
  FUN_14020a6cc((longlong)param_1 + 0xb4,1);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)((longlong)param_2 + 0xc4);
  FUN_14020a6cc(param_1 + 0x18,1);
  *(undefined8 *)((longlong)param_1 + 0xf9) = *(undefined8 *)((longlong)param_2 + 0xf9);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xcc);
  uVar5 = *(undefined4 *)(param_2 + 0x1a);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xd4);
  uVar7 = *(undefined4 *)(param_2 + 0x1b);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0xdc);
  uVar9 = *(undefined4 *)(param_2 + 0x1c);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0xe4);
  uVar11 = *(undefined4 *)(param_2 + 0x1d);
  uVar12 = *(undefined4 *)(param_2 + 0x1e);
  uVar13 = *(undefined4 *)((longlong)param_2 + 0xf4);
  uVar14 = *(undefined4 *)(param_2 + 0x1f);
  *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)((longlong)param_2 + 0xec);
  *(undefined4 *)(param_1 + 0x1e) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar13;
  *(undefined4 *)(param_1 + 0x1f) = uVar14;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar8;
  *(undefined4 *)(param_1 + 0x1c) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar10;
  *(undefined4 *)(param_1 + 0x1d) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar4;
  *(undefined4 *)(param_1 + 0x1a) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar6;
  *(undefined4 *)(param_1 + 0x1b) = uVar7;
  param_1[0x21] = param_2[0x21];
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
  FUN_1447715ec(param_1 + 0x23,param_2 + 0x23);
  uVar2 = param_2[0x28];
  lVar16 = param_2[0x29];
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 0xc) = *(int *)(lVar16 + 0xc) + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[0x29];
  param_1[0x28] = uVar2;
  param_1[0x29] = lVar16;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  param_1[0x2a] = param_2[0x2a];
  uVar2 = param_2[0x2b];
  lVar16 = param_2[0x2c];
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 0xc) = *(int *)(lVar16 + 0xc) + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[0x2c];
  param_1[0x2b] = uVar2;
  param_1[0x2c] = lVar16;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  param_1[0x2d] = param_2[0x2d];
  uVar2 = param_2[0x2e];
  lVar16 = param_2[0x2f];
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 0xc) = *(int *)(lVar16 + 0xc) + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[0x2f];
  param_1[0x2e] = uVar2;
  param_1[0x2f] = lVar16;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  param_1[0x30] = param_2[0x30];
  return param_1;
}



// FUNCTION 140ff240a FUN_140ff240a body=182 status=ok
// SIG undefined FUN_140ff240a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140ff240a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b1e6370;
  FUN_140ff24c0(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ff24c0 FUN_140ff24c0 body=54 status=ok
// SIG undefined FUN_140ff24c0(void)

void FUN_140ff24c0(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1408f1035(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140ff2504 FUN_140ff2504 body=132 status=ok
// SIG undefined FUN_140ff2504(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140ff2504(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ff2588 FUN_140ff2588 body=1036 status=ok
// SIG undefined FUN_140ff2588(void)

void FUN_140ff2588(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  int local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_2c = 0;
  local_24 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_2c = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  uStack_38 = 0;
  uStack_34 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_38 = (undefined4)uVar2;
      uStack_34 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_38);
    }
  }
  local_3c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_14067a048;
      local_60 = 0;
      local_68 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_3c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_3c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_3c = (int)uVar2;
      uStack_38 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_3c);
    }
  }
  puVar5 = &local_2c;
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar6 = FUN_140ff2996(puVar5,CONCAT44(uStack_34,uStack_38),local_3c != 0);
  *param_3 = uVar6;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ff2996 FUN_140ff2996 body=308 status=ok
// SIG undefined FUN_140ff2996(void)

undefined4 FUN_140ff2996(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar3 = &local_80;
  FUN_140ff2acb(puVar3,param_1,param_2);
  if (local_60 == 3) {
    uVar2 = 3;
    uVar5 = local_80;
  }
  else {
    puVar4 = &local_58;
    FUN_1400b56fe(puVar4,&local_80,3);
    uVar5 = 0;
    if (local_38 != 0) {
      uVar5 = local_58;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_40) {
        puVar4 = (undefined4 *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar1)(puVar4);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    uVar2 = (uint)local_60;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_68) {
      puVar3 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ff2acb FUN_140ff2acb body=1076 status=ok
// SIG undefined FUN_140ff2acb(void)

undefined8 * FUN_140ff2acb(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *_Dst;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_60 [2];
  longlong *local_50;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*param_2 == 0) || (param_3 == (longlong *)0x0)) {
LAB_140ff2c62:
    uVar2 = DAT_14c9ab180;
    uVar15 = (uint)DAT_14c9ab188;
    *(ushort *)(param_1 + 3) = DAT_14c9ab180;
    if (uVar2 < 0x19) {
      puVar14 = &DAT_14c9ab168;
      puVar11 = param_1;
    }
    else {
      puVar11 = (undefined8 *)FUN_14001cc68(uVar2,0);
      *param_1 = puVar11;
      puVar14 = DAT_14c9ab168;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar15 * 0x120));
    if (pcVar4 == (code *)0x0) {
      memcpy(puVar11,puVar14,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar15 * 0x120)));
      bVar5 = DAT_14c9ab188;
    }
    else {
      (*pcVar4)();
      bVar5 = DAT_14c9ab188;
    }
  }
  else {
    if (DAT_14c9a4e08 == 0) {
      local_80 = local_60;
      local_60[0] = FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_1427b09ee;
      local_88 = &LAB_1470c76a3;
      local_90 = FUN_1462ab034;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10004001;
      local_b0 = 8;
      local_b8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
    }
    plVar6 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,DAT_14c9a4e08);
    if (plVar6 == (longlong *)0x0) goto LAB_140ff2c62;
    if (DAT_14c9a4e08 == 0) {
      local_80 = local_60;
      local_60[0] = FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_1427b09ee;
      local_88 = &LAB_1470c76a3;
      local_90 = FUN_1462ab034;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10004001;
      local_b0 = 8;
      local_b8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
    }
    plVar7 = (longlong *)FUN_144718840(plVar6,DAT_14c9a4e08);
    if (plVar6 == plVar7 || plVar7 == (longlong *)0x0) goto LAB_140ff2c62;
    lVar8 = (**(code **)(*plVar7 + 0x28))(plVar7);
    lVar10 = lVar8 + 0x10;
    lVar12 = (longlong)(int)param_2[1];
    iVar3 = *(int *)(lVar8 + 0x918);
    if ((lVar12 < 0) || (iVar3 <= (int)param_2[1])) {
      lVar13 = *param_2;
LAB_140ff2c04:
      if (lVar13 != 0) {
        lVar12 = *(longlong *)(lVar8 + 0x910);
        if (*(longlong *)(lVar8 + 0x910) == 0) {
          lVar12 = lVar10;
        }
        if (iVar3 != 0) {
          lVar16 = 0;
          do {
            if (*(longlong *)(lVar12 + 0x28 + lVar16) == lVar13) {
              uVar15 = (int)(lVar16 >> 3) * 0x38e38e39;
              *(uint *)(param_2 + 1) = uVar15;
              if (((int)uVar15 < 0) || (*(int *)(lVar8 + 0x918) <= (int)uVar15)) goto LAB_140ff2c45;
              if (*(longlong *)(lVar8 + 0x910) != 0) {
                lVar10 = *(longlong *)(lVar8 + 0x910);
              }
              puVar11 = (undefined8 *)(lVar10 + (ulonglong)(uVar15 & 0x7fffffff) * 0x48);
              goto LAB_140ff2ba4;
            }
            lVar16 = lVar16 + 0x48;
          } while ((longlong)iVar3 * 0x48 != lVar16);
        }
        *(undefined4 *)(param_2 + 1) = 0xffffffff;
      }
LAB_140ff2c45:
      uVar9 = (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar10 = FUN_142b3963c(uVar9,param_2);
      if (lVar10 != 0) {
        local_60[0] = (code *)((ulonglong)local_60[0] & 0xffffffffffffff00);
        local_38[0] = 0;
        FUN_1456bb102(local_60,param_3);
        FUN_1447c3578(lVar10,param_1,local_60);
        FUN_1448173f8(local_38);
        if (((char)local_60[0] == '\x03') && (local_50 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_50 + 0x10))();
          }
        }
        goto LAB_140ff2ccf;
      }
      goto LAB_140ff2c62;
    }
    lVar16 = *(longlong *)(lVar8 + 0x910);
    if (*(longlong *)(lVar8 + 0x910) == 0) {
      lVar16 = lVar10;
    }
    lVar13 = *param_2;
    if (*(longlong *)(lVar16 + 0x28 + lVar12 * 0x48) != lVar13) goto LAB_140ff2c04;
    puVar11 = (undefined8 *)(lVar16 + lVar12 * 0x48);
LAB_140ff2ba4:
    if (puVar11 == (undefined8 *)0x0) goto LAB_140ff2c45;
    bVar5 = *(byte *)(puVar11 + 4);
    uVar2 = *(ushort *)(puVar11 + 3);
    *(ushort *)(param_1 + 3) = uVar2;
    _Dst = param_1;
    puVar14 = puVar11;
    if (0x18 < uVar2) {
      _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
      *param_1 = _Dst;
      puVar14 = (undefined8 *)*puVar11;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar5 * 0x120));
    if (pcVar4 == (code *)0x0) {
      memcpy(_Dst,puVar14,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar5 * 0x120)));
    }
    else {
      (*pcVar4)();
    }
    bVar5 = *(byte *)(puVar11 + 4);
  }
  *(byte *)(param_1 + 4) = bVar5;
LAB_140ff2ccf:
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140ff2f0e FUN_140ff2f0e body=162 status=ok
// SIG undefined FUN_140ff2f0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140ff2f0e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b0f84e0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140ff2fb0 FUN_140ff2fb0 body=1043 status=ok
// SIG undefined FUN_140ff2fb0(void)

void FUN_140ff2fb0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  local_30 = 0xf00000d0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  uStack_40 = 0;
  uStack_3c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_40);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_40);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_40);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_40 = (undefined4)uVar2;
      uStack_3c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_40);
    }
  }
  local_44 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_50 = FUN_1408a629c;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_44);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_44);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_44 = (undefined4)uVar2;
      uStack_40 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_44);
    }
  }
  puVar5 = &local_38;
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar6 = FUN_140ff33c4(puVar5,CONCAT44(uStack_3c,uStack_40),local_44);
  *param_3 = uVar6;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ff33c4 FUN_140ff33c4 body=966 status=ok
// SIG undefined FUN_140ff33c4(void)

undefined8 FUN_140ff33c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_128 [32];
  char local_108 [16];
  longlong *local_f8;
  int local_e0;
  char local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  int local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  ushort local_90;
  byte local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined4 *local_50;
  int local_48;
  ulonglong local_40;
  
  uVar15 = (undefined4)((ulonglong)param_3 >> 0x20);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_108[0] = '\0';
  local_e0 = 0;
  FUN_1456bb102(local_108);
  local_d8 = '\0';
  local_b0 = 0;
  uVar6 = FUN_144873cc0(param_1);
  FUN_1400606f6(&local_80,uVar6,local_108);
  puVar7 = local_50;
  if (local_50 == (undefined4 *)0x0) {
    puVar7 = &local_80;
  }
  puVar9 = (undefined4 *)&DAT_14c9a40e0;
  if (0 < local_48) {
    puVar9 = puVar7;
  }
  puVar7 = &local_a8;
  FUN_1400603ec(puVar7,uVar6,puVar9);
  puVar9 = local_50;
  if (local_50 == (undefined4 *)0x0) {
    puVar9 = &local_80;
  }
  FUN_1446fdf58(puVar9,local_48);
  if (local_50 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 == 3) {
    uVar5 = 3;
    uVar15 = 0;
    uVar14 = local_a8;
  }
  else {
    puVar9 = &local_80;
    FUN_1400b56fe(puVar9,&local_a8,3);
    uVar14 = (int)param_3;
    if (local_60 != 0) {
      uVar15 = 0;
      uVar14 = local_80;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_60 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_68) {
        puVar9 = (undefined4 *)CONCAT44(uStack_7c,local_80);
      }
      (*pcVar2)(puVar9);
    }
    if (0x18 < local_68) {
      FUN_1400020a8(CONCAT44(uStack_7c,local_80));
    }
    uVar5 = (uint)local_88;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_90) {
      puVar7 = (undefined4 *)CONCAT44(uStack_a4,local_a8);
    }
    (*pcVar2)(puVar7);
  }
  if (0x18 < local_90) {
    FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_b0 != 0) {
    lVar12 = (longlong)local_b0 + -1;
    lVar13 = lVar12 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
    if (*(longlong *)(lVar4 + lVar13) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar11 = (int)lVar12;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar4 + lVar13) = 0xffffffff;
    iVar8 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar8 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar13) = iVar8;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar10 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar10 = DAT_14c9a3dc0;
    }
    iVar8 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar8 = iVar11;
    }
    bVar3 = (byte)lVar12 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar10 + (longlong)(iVar8 >> 5) * 4) =
         *(uint *)(puVar10 + (longlong)(iVar8 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_b0 = 0;
  }
  if (local_d8 != '\0') {
    if (local_d8 == '\x01') {
      local_d0 = 0;
    }
    else if ((local_d8 == '\x03') && (local_c8 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_c8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c8 + 0x10))();
      }
    }
    local_d8 = '\0';
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_e0 != 0) {
    lVar12 = (longlong)local_e0 + -1;
    lVar13 = lVar12 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
    if (*(longlong *)(lVar4 + lVar13) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar11 = (int)lVar12;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar4 + lVar13) = 0xffffffff;
    iVar8 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar8 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar13) = iVar8;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar10 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar10 = DAT_14c9a3dc0;
    }
    iVar8 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar8 = iVar11;
    }
    bVar3 = (byte)lVar12 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar10 + (longlong)(iVar8 >> 5) * 4) =
         *(uint *)(puVar10 + (longlong)(iVar8 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_e0 = 0;
  }
  if ((local_108[0] == '\x03') && (local_f8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_f8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_f8 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return CONCAT44(uVar15,uVar14);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ff3794 FUN_140ff3794 body=542 status=ok
// SIG undefined FUN_140ff3794(void)

void FUN_140ff3794(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x13c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x13c) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if ((int)param_1[0x26] != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = (int)param_1[0x26] + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x26) = 0;
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0xe);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],(int)param_1[6]);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140ff39b8 FUN_140ff39b8 body=221 status=ok
// SIG undefined FUN_140ff39b8(void)

longlong FUN_140ff39b8(void)

{
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
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb29548 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147fdd62d;
    local_40 = &LAB_145da8165;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xf8;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"CameraRigAsset",&DAT_14cb29548,&DAT_147fdd62c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb29548;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ff3a9c FUN_140ff3a9c body=57 status=ok
// SIG undefined FUN_140ff3a9c(void)

void FUN_140ff3a9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0da0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0da0 = FUN_140002ddd(FUN_1465ac54b,uVar1,L"GbxBrainAspect_OrderRewind");
  }
  return;
}



// FUNCTION 140ff3ad6 FUN_140ff3ad6 body=96 status=ok
// SIG undefined FUN_140ff3ad6(void)

ulonglong FUN_140ff3ad6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140ff3b19:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140ff3b19;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
    }
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 140ff3b36 FUN_140ff3b36 body=115 status=ok
// SIG undefined FUN_140ff3b36(void)

void FUN_140ff3b36(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar1 = FUN_1406f60a6();
    if (lVar1 != 0) {
      FUN_140ff3baa(param_2,&local_30);
      if (local_30 == *(longlong *)(lVar1 + 8)) {
        FUN_1406f5f52(param_1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ff3baa FUN_140ff3baa body=120 status=ok
// SIG undefined FUN_140ff3baa(void)

undefined8 * FUN_140ff3baa(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  if (*param_1 == 0) {
    *param_2 = 0;
  }
  else {
    puVar1 = *(undefined4 **)(*param_1 + 8);
    puVar3 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar3 = puVar1;
    }
    if (DAT_14c947fe0 == 0) {
      lVar2 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar2);
      DAT_14c947fe0 = lVar2;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar3,1);
  }
  return param_2;
}



// FUNCTION 140ff3c22 FUN_140ff3c22 body=103 status=ok
// SIG undefined FUN_140ff3c22(void)

ulonglong FUN_140ff3c22(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140ff3c6c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140ff3c6c;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 140ff3c8a FUN_140ff3c8a body=64 status=ok
// SIG undefined FUN_140ff3c8a(void)

void FUN_140ff3c8a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0xf8))(param_2);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140ff3cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa0))(param_1,lVar1,0,*(code **)(*param_1 + 0xa0));
      return;
    }
  }
  return;
}



// FUNCTION 140ff3cca FUN_140ff3cca body=519 status=ok
// SIG undefined FUN_140ff3cca(void)

void FUN_140ff3cca(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar11 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar11 = local_68 >> 0x20;
  }
  plVar6 = local_60;
  iVar15 = (int)local_68;
  uVar14 = (uint)local_58;
  iVar8 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar9 = *(longlong **)(*param_1 + 0x18 + (longlong)iVar8 * 0x28);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar11;
      plVar9 = (longlong *)plVar6[2];
      if ((longlong *)plVar6[2] == (longlong *)0x0) {
        plVar9 = plVar6;
      }
      iVar4 = (int)plVar6[3];
      lVar13 = (longlong)iVar15;
      uVar7 = *(uint *)((longlong)plVar9 + lVar13 * 4) & uVar14;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar5 = iVar8;
        if (iVar8 < iVar15) {
          iVar5 = iVar15;
        }
        if (iVar8 <= iVar15) break;
        lVar10 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = *(uint *)((longlong)plVar9 + lVar10 * 4 + lVar13 * 4 + 4);
          if (uVar7 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar13 == lVar10) goto LAB_140ff3e27;
        }
        iVar15 = iVar15 + (int)lVar10 + 1;
        uVar14 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar11 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar8 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar4);
  }
LAB_140ff3e27:
  plVar6 = local_70;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar14 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar14 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar7 = 0x80;
    if (0x80 < (int)uVar14) {
      uVar7 = uVar14;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    FUN_1446efbd8(plVar6,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ff3ed4 FUN_140ff3ed4 body=59 status=ok
// SIG undefined FUN_140ff3ed4(void)

void FUN_140ff3ed4(longlong param_1)

{
  FUN_140e05c77(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140ff3f10 FUN_140ff3f10 body=532 status=ok
// SIG undefined FUN_140ff3f10(void)

void FUN_140ff3f10(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar11 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar11 = local_68 >> 0x20;
  }
  plVar6 = local_60;
  iVar15 = (int)local_68;
  uVar14 = (uint)local_58;
  iVar8 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar9 = *(longlong **)(*param_1 + 0x18 + (longlong)iVar8 * 0x28);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar11;
      plVar9 = (longlong *)plVar6[2];
      if ((longlong *)plVar6[2] == (longlong *)0x0) {
        plVar9 = plVar6;
      }
      iVar4 = (int)plVar6[3];
      lVar13 = (longlong)iVar15;
      uVar7 = *(uint *)((longlong)plVar9 + lVar13 * 4) & uVar14;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar5 = iVar8;
        if (iVar8 < iVar15) {
          iVar5 = iVar15;
        }
        if (iVar8 <= iVar15) break;
        lVar10 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = *(uint *)((longlong)plVar9 + lVar10 * 4 + lVar13 * 4 + 4);
          if (uVar7 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar13 == lVar10) goto LAB_140ff4059;
        }
        iVar15 = iVar15 + (int)lVar10 + 1;
        uVar14 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar11 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar8 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar4);
  }
LAB_140ff4059:
  plVar6 = local_70;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar14 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar14 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar7 = 0x80;
    if (0x80 < (int)uVar14) {
      uVar7 = uVar14;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    FUN_1446efbd8(plVar6,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ff4126 FUN_140ff4126 body=49 status=ok
// SIG undefined FUN_140ff4126(void)

longlong FUN_140ff4126(void)

{
  if (DAT_14cb44a48 == 0) {
    FUN_140f50038(&DAT_14cb44a48,&PTR_s__Script_CommonUI_14ae3e697_1_14ae3e678);
  }
  return DAT_14cb44a48;
}



// FUNCTION 140ff4158 FUN_140ff4158 body=350 status=ok
// SIG undefined FUN_140ff4158(void)

void FUN_140ff4158(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x88);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 0x11) {
    uVar6 = 0x10;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (0x10 < *(uint *)(param_1 + 0x8c)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar1) {
              uVar5 = (ulonglong)bVar1;
            }
            uVar7 = 0x32 - (ulonglong)bVar1;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140ff41ea;
              lVar3 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar3 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_140ff41ea:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 >> 3)) {
      uVar6 = uVar4 >> 3 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x8c) = (int)uVar6;
  FUN_140ff42b6(param_1,param_2,uVar6,8);
  return;
}



// FUNCTION 140ff42b6 FUN_140ff42b6 body=141 status=ok
// SIG undefined FUN_140ff42b6(void)

void FUN_140ff42b6(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 140ff4344 FUN_140ff4344 body=273 status=ok
// SIG undefined FUN_140ff4344(void)

void FUN_140ff4344(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_14009d2a0();
  lVar3 = (longlong)(int)param_2[1] * 0x28 + *(longlong *)(*param_2 + 8);
  uVar1 = *(ushort *)(lVar2 + 0x11a);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar3 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar3 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar3 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = *(ushort *)(lVar2 + 0x11c);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar3 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar3 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar3 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  if (bVar4) {
    local_38 = (undefined4)*param_2;
    uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_30 = (undefined4)param_2[1];
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_58 = param_5;
    FUN_140ff4670(param_1,&local_38,param_3,param_4);
  }
  else if (bVar5) {
    local_48 = (undefined4)*param_2;
    uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_40 = (undefined4)param_2[1];
    uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_58 = param_5;
    FUN_140ff4456(param_1,&local_48,param_3,param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ff4456 FUN_140ff4456 body=537 status=ok
// SIG undefined FUN_140ff4456(void)

void FUN_140ff4456(longlong param_1,longlong *param_2,longlong param_3,int *param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar14 = (ulonglong)
           *(ushort *)
            (*(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8) + 0xe);
  local_58 = param_3;
  if (uVar14 != 0) {
    lVar1 = param_1 + 0x58;
    uVar13 = 0;
    do {
      local_4a = *(undefined2 *)(local_58 + uVar13 * 2);
      if (((*param_4 != -1) && (param_4[1] != -1)) && ((*(byte *)(param_4 + 2) & 1) == 0)) {
        cVar4 = FUN_140add178(param_5,&local_4a,param_4);
        if (cVar4 != '\0') {
          iVar15 = param_4[1];
          iVar9 = iVar15 + 1;
          iVar3 = *(int *)(param_1 + 0x70);
          iVar12 = iVar9 - iVar3;
          if (0 < iVar12) {
            if (iVar3 == 0) {
              iVar5 = -1;
            }
            else {
              iVar5 = iVar3 + 0x1e;
              if (-1 < iVar3 + -1) {
                iVar5 = iVar3 + -1;
              }
              iVar5 = iVar5 >> 5;
            }
            iVar11 = iVar15 + 0x1f;
            if (-1 < iVar15) {
              iVar11 = iVar15;
            }
            if (iVar11 >> 5 == iVar5) {
              *(int *)(param_1 + 0x70) = iVar9;
            }
            else {
              if (*(int *)(param_1 + 0x74) <= iVar15) {
                if (iVar15 + 0x20U < 0xa0) {
                  iVar15 = 0x80;
                  iVar9 = iVar3;
                }
                else {
                  uVar16 = iVar15 + 0x20U >> 5;
                  if (*(int *)(param_1 + 0x74) + 0x1fU < 0xa0) {
                    uVar8 = 4;
                    if (4 < uVar16) {
                      uVar8 = uVar16;
                    }
                  }
                  else {
                    uVar8 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
                  }
                  uVar6 = FUN_144a3809e(uVar8 << 2,0);
                  iVar9 = (int)(uVar6 >> 2);
                  iVar15 = -0x20;
                  if ((int)uVar16 <= iVar9) {
                    iVar15 = iVar9 << 5;
                  }
                  iVar9 = *(int *)(param_1 + 0x70);
                }
                *(int *)(param_1 + 0x74) = iVar15;
                FUN_1446efbd8(lVar1,iVar9);
                iVar9 = *(int *)(param_1 + 0x70) + iVar12;
              }
              iVar15 = iVar9 + 0x1f;
              if (-1 < iVar9) {
                iVar15 = iVar9;
              }
              *(int *)(param_1 + 0x70) = iVar9;
              if (iVar9 % 0x20 != 0) {
                lVar10 = *(longlong *)(param_1 + 0x68);
                if (*(longlong *)(param_1 + 0x68) == 0) {
                  lVar10 = lVar1;
                }
                bVar7 = -(char)(iVar9 % 0x20);
                *(uint *)(lVar10 + (longlong)(iVar15 >> 5) * 4) =
                     (uint)(*(int *)(lVar10 + (longlong)(iVar15 >> 5) * 4) << (bVar7 & 0x1f)) >>
                     (bVar7 & 0x1f);
              }
            }
            FUN_1447c6044(lVar1,iVar3,iVar12,0);
            iVar15 = param_4[1];
          }
          lVar10 = *(longlong *)(param_1 + 0x68);
          if (*(longlong *)(param_1 + 0x68) == 0) {
            lVar10 = lVar1;
          }
          iVar9 = iVar15 + 0x1f;
          if (-1 < iVar15) {
            iVar9 = iVar15;
          }
          puVar2 = (uint *)(lVar10 + (longlong)(iVar9 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)iVar15 & 0x1f);
        }
        *(byte *)(param_4 + 2) = *(byte *)(param_4 + 2) | 1;
      }
      uVar13 = uVar13 + 1;
      param_4 = param_4 + 3;
    } while (uVar14 != uVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ff4670 FUN_140ff4670 body=3920 status=ok
// SIG undefined FUN_140ff4670(void)

void FUN_140ff4670(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ushort uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  byte bVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  ulonglong uVar31;
  longlong *plVar32;
  ushort uVar33;
  uint uVar34;
  uint *puVar35;
  ushort uVar36;
  uint uVar37;
  uint uVar38;
  int iVar39;
  longlong lVar40;
  ulonglong uVar41;
  uint uVar42;
  longlong *plVar43;
  uint *puVar44;
  undefined1 auStack_128 [32];
  uint *local_108;
  longlong *local_100;
  int local_f4;
  longlong *local_f0;
  longlong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  int local_bc;
  int local_b8;
  uint local_b4;
  ulonglong local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined4 local_7c;
  uint uStack_78;
  uint local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar25 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar25 + 0xc) != 0) {
    plVar32 = *(longlong **)(lVar25 + 0x28);
    lVar23 = (ulonglong)*(ushort *)(lVar25 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar32 + 0x1e) == *(short *)(param_1 + 0x7c)) goto LAB_140ff46e1;
      plVar32 = plVar32 + 4;
      lVar23 = lVar23 + -0x20;
    } while (lVar23 != 0);
  }
  plVar32 = (longlong *)0x0;
LAB_140ff46e1:
  local_b8 = *(int *)(lVar25 + 0x14);
  local_90 = param_3;
  local_88 = param_4;
  if (local_b8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar32 + 1));
  }
  LOCK();
  *(int *)(plVar32 + 3) = (int)plVar32[3] + 1;
  UNLOCK();
  if (*(ushort *)(lVar25 + 0xc) != 0) {
    plVar43 = *(longlong **)(lVar25 + 0x28);
    lVar23 = (ulonglong)*(ushort *)(lVar25 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar43 + 0x1e) == *(short *)(param_1 + 0x7a)) goto LAB_140ff471e;
      plVar43 = plVar43 + 4;
      lVar23 = lVar23 + -0x20;
    } while (lVar23 != 0);
  }
  plVar43 = (longlong *)0x0;
LAB_140ff471e:
  local_d0 = *plVar32;
  local_bc = *(int *)(lVar25 + 0x14);
  if (local_bc == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar43 + 1));
  }
  LOCK();
  *(int *)(plVar43 + 3) = (int)plVar43[3] + 1;
  UNLOCK();
  local_d8 = *plVar43;
  lVar25 = *param_2;
  lVar23 = param_2[1];
  lVar40 = (longlong)(int)lVar23 * 0x28 + *(longlong *)(lVar25 + 8);
  local_a8 = plVar43;
  lVar24 = FUN_14038fb82();
  uVar36 = *(ushort *)(lVar24 + 0xea);
  if (((uVar36 == 0xffff) ||
      (*(uint *)(lVar40 + 0x20) == (uint)uVar36 || (int)*(uint *)(lVar40 + 0x20) < (int)(uint)uVar36
      )) || ((*(uint *)(lVar40 + (ulonglong)(uVar36 >> 5) * 4) >> (uVar36 & 0x1f) & 1) == 0)) {
    uVar36 = *(ushort *)(lVar24 + 0xee);
    if (((uVar36 == 0xffff) ||
        (*(uint *)(lVar40 + 0x20) == (uint)uVar36 ||
         (int)*(uint *)(lVar40 + 0x20) < (int)(uint)uVar36)) ||
       ((*(uint *)(lVar40 + (ulonglong)(uVar36 >> 5) * 4) >> (uVar36 & 0x1f) & 1) == 0)) {
      uVar33 = *(ushort *)(lVar24 + 0xf0);
      uVar36 = 0xffff;
      if (((uVar33 != 0xffff) &&
          (*(uint *)(lVar40 + 0x20) != (uint)uVar33 &&
           (int)(uint)uVar33 <= (int)*(uint *)(lVar40 + 0x20))) &&
         ((*(uint *)(lVar40 + (ulonglong)(uVar33 >> 5) * 4) >> (uVar33 & 0x1f) & 1) != 0)) {
        uVar36 = uVar33;
      }
    }
  }
  uVar33 = *(ushort *)(lVar24 + 0xf4);
  if (((uVar33 == 0xffff) ||
      (*(uint *)(lVar40 + 0x20) == (uint)uVar33 || (int)*(uint *)(lVar40 + 0x20) < (int)(uint)uVar33
      )) || ((*(uint *)(lVar40 + (ulonglong)(uVar33 >> 5) * 4) >> (uVar33 & 0x1f) & 1) == 0)) {
    uVar33 = *(ushort *)(lVar24 + 0xf8);
    if (((uVar33 == 0xffff) ||
        (*(uint *)(lVar40 + 0x20) == (uint)uVar33 ||
         (int)*(uint *)(lVar40 + 0x20) < (int)(uint)uVar33)) ||
       ((*(uint *)(lVar40 + (ulonglong)(uVar33 >> 5) * 4) >> (uVar33 & 0x1f) & 1) == 0)) {
      uVar6 = *(ushort *)(lVar24 + 0xf6);
      uVar33 = 0xffff;
      if (((uVar6 != 0xffff) &&
          (*(uint *)(lVar40 + 0x20) != (uint)uVar6 &&
           (int)(uint)uVar6 <= (int)*(uint *)(lVar40 + 0x20))) &&
         (uVar33 = 0xffff,
         (*(uint *)(lVar40 + (ulonglong)(uVar6 >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0)) {
        uVar33 = uVar6;
      }
    }
  }
  lVar25 = *(longlong *)(*(longlong *)(lVar25 + 0x60) + (longlong)(int)lVar23 * 8);
  local_b0 = (ulonglong)*(ushort *)(lVar25 + 0xe);
  if (uVar36 == 0xffff) {
    local_e8 = 0;
  }
  else {
    FUN_140fc2f5e(lVar25,&local_70);
    local_e8 = uStack_60;
    uStack_60 = 0;
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 0x18) = *(int *)(local_70 + 0x18) + -1;
      UNLOCK();
      if ((int)uStack_68 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_70 + 8));
      }
    }
  }
  if (uVar33 == 0xffff) {
    lVar25 = 0;
  }
  else {
    FUN_140fc2f08(lVar25,&local_70);
    lVar25 = uStack_60;
    uStack_60 = 0;
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 0x18) = *(int *)(local_70 + 0x18) + -1;
      UNLOCK();
      if ((int)uStack_68 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_70 + 8));
      }
    }
  }
  if (local_b0 != 0) {
    local_100 = (longlong *)(param_1 + 8);
    puVar44 = (uint *)(param_1 + 0x18);
    local_c8 = param_1 + 0x40;
    local_f0 = (longlong *)(param_1 + 0x48);
    local_a0 = param_1 + 0x58;
    uVar41 = 0;
    local_108 = puVar44;
    local_98 = lVar25;
    do {
      if (local_98 == 0) {
        if (local_e8 == 0) {
          local_70 = *(ulonglong *)(local_d8 + uVar41 * 8);
          puVar1 = (undefined8 *)(local_d0 + uVar41 * 0x10);
          uStack_68 = *puVar1;
          uStack_60 = puVar1[1];
          uStack_58 = 0;
          uStack_50 = CONCAT31(uStack_50._1_3_,2);
          uStack_4c = 0xffffffff;
          bVar27 = 2;
        }
        else {
          uStack_58 = *(undefined8 *)(local_e8 + uVar41 * 8);
          local_70 = *(ulonglong *)(local_d8 + uVar41 * 8);
          puVar1 = (undefined8 *)(local_d0 + uVar41 * 0x10);
          uStack_68 = *puVar1;
          uStack_60 = puVar1[1];
          uStack_50 = CONCAT31(uStack_50._1_3_,2);
          uStack_4c = 0xffffffff;
          bVar27 = 2;
        }
      }
      else {
        local_70 = *(ulonglong *)(local_d8 + uVar41 * 8);
        puVar1 = (undefined8 *)(local_d0 + uVar41 * 0x10);
        uStack_68 = *puVar1;
        uStack_60 = puVar1[1];
        puVar1 = (undefined8 *)(local_98 + uVar41 * 0x10);
        uStack_58 = *puVar1;
        uStack_50 = *(undefined4 *)(puVar1 + 1);
        uStack_4c = *(uint *)((longlong)puVar1 + 0xc);
        bVar27 = (byte)uStack_50;
      }
      uVar19 = ((uint)(local_70 >> 0x14) & 0xffff ^ (uint)(local_70 >> 4)) * -0x7a143595;
      uVar20 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
      uVar20 = uVar20 >> 0x10 ^ uVar20;
      uVar19 = (uint)((ulonglong)uStack_68 >> 0x10);
      uVar34 = (uint)uStack_68 & 0xffff;
      uVar20 = (uVar20 >> 2) + 0x9e3779b9 +
               uVar20 * 0x40 +
               (uStack_60._4_1_ ^ (uint)uStack_60 ^
               ((uint)uStack_68 << 0x10 | uVar34) + (int)((ulonglong)uStack_68 >> 0x20) +
               (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar34 >> 4)) ^ uVar20;
      uVar19 = (uint)((ulonglong)uStack_58 >> 0x10);
      uVar34 = (uint)uStack_58 & 0xffff;
      uVar19 = uStack_4c >> 0xd ^
               uVar34 + (int)((ulonglong)uStack_58 >> 0x20) +
               ((uint)uStack_58 * 0x10000 - uStack_4c) + (uVar19 << 0x13 | uVar19 & 0xffff) +
               (uVar34 >> 4);
      uVar34 = uVar19 << 8 ^ (-0x61c88647 - uStack_4c) - uVar19;
      uVar37 = uVar34 >> 0xd ^ (uStack_4c - uVar19) - uVar34;
      uVar19 = uVar37 >> 0xc ^ (uVar19 - uVar34) - uVar37;
      uVar34 = uVar19 << 0x10 ^ (uVar34 - uVar37) - uVar19;
      uVar37 = uVar34 >> 5 ^ (uVar37 - uVar19) - uVar34;
      uVar38 = uVar37 >> 3 ^ (uVar19 - uVar34) - uVar37;
      uVar19 = uVar38 << 10 ^ (uVar34 - uVar37) - uVar38;
      uVar19 = uVar19 >> 0xf ^ uVar37 - (uVar38 + uVar19);
      iVar28 = uVar19 - bVar27;
      uVar19 = iVar28 * 0x100 ^ 0x9e3779b9 - uVar19;
      uVar37 = uVar19 >> 0xd ^ ((uint)bVar27 - iVar28) - uVar19;
      uVar34 = uVar37 >> 0xc ^ (iVar28 - uVar19) - uVar37;
      uVar19 = uVar34 << 0x10 ^ (uVar19 - uVar37) - uVar34;
      uVar37 = uVar19 >> 5 ^ (uVar37 - uVar34) - uVar19;
      uVar34 = uVar37 >> 3 ^ (uVar34 - uVar19) - uVar37;
      uVar19 = uVar34 << 10 ^ (uVar19 - uVar37) - uVar34;
      uVar20 = (uVar20 >> 2) + uVar20 * 0x40 + -0x61c88647 +
               (uVar19 >> 0xf ^ uVar37 - (uVar34 + uVar19)) ^ uVar20;
      iVar28 = FUN_140ff55c2(local_100,uVar20,&local_70);
      if (iVar28 == -1) {
LAB_140ff4b84:
        if (*(int *)(param_1 + 0x3c) == 0) {
          iVar28 = *(int *)(param_1 + 0x10);
          *(int *)(param_1 + 0x10) = iVar28 + 1;
          if (*(int *)(param_1 + 0x14) == iVar28) {
            FUN_1447030e2(local_100,iVar28);
          }
          iVar22 = *(int *)(param_1 + 0x30);
          if (iVar22 == 0) {
            iVar21 = -1;
          }
          else {
            iVar21 = iVar22 + 0x1e;
            if (-1 < iVar22 + -1) {
              iVar21 = iVar22 + -1;
            }
            iVar21 = iVar21 >> 5;
          }
          iVar39 = iVar22 + 1;
          iVar29 = iVar22 + 0x1f;
          if (-1 < iVar22) {
            iVar29 = iVar22;
          }
          if (iVar29 >> 5 == iVar21) {
            *(int *)(param_1 + 0x30) = iVar39;
          }
          else {
            if (*(int *)(param_1 + 0x34) <= iVar22) {
              if (iVar22 + 0x20U < 0xa0) {
                iVar39 = 0x80;
                iVar21 = iVar22;
              }
              else {
                uVar19 = iVar22 + 0x20U >> 5;
                local_e0 = (ulonglong)uVar19;
                if (*(int *)(param_1 + 0x34) + 0x1fU < 0xa0) {
                  uVar34 = 4;
                  if (4 < uVar19) {
                    uVar34 = uVar19;
                  }
                }
                else {
                  uVar34 = (uVar19 * 3 >> 3) + uVar19 + 0x10;
                }
                uVar26 = FUN_144a3809e(uVar34 << 2,0);
                iVar21 = (int)(uVar26 >> 2);
                iVar39 = -0x20;
                if ((int)local_e0 <= iVar21) {
                  iVar39 = iVar21 << 5;
                }
                iVar21 = *(int *)(param_1 + 0x30);
              }
              *(int *)(param_1 + 0x34) = iVar39;
              FUN_1446efbd8(puVar44,iVar21);
              iVar39 = *(int *)(param_1 + 0x30) + 1;
            }
            iVar21 = iVar39 + 0x1f;
            if (-1 < iVar39) {
              iVar21 = iVar39;
            }
            *(int *)(param_1 + 0x30) = iVar39;
            if (iVar39 % 0x20 != 0) {
              puVar35 = *(uint **)(param_1 + 0x28);
              if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
                puVar35 = puVar44;
              }
              bVar27 = -(char)(iVar39 % 0x20);
              puVar35[iVar21 >> 5] = (puVar35[iVar21 >> 5] << (bVar27 & 0x1f)) >> (bVar27 & 0x1f);
            }
          }
          lVar25 = (longlong)iVar28;
          puVar35 = *(uint **)(param_1 + 0x28);
          if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
            puVar35 = puVar44;
          }
          bVar27 = (byte)iVar22 & 0x1f;
          puVar35[iVar29 >> 5] =
               puVar35[iVar29 >> 5] & (-2 << bVar27 | 0xfffffffeU >> 0x20 - bVar27);
        }
        else {
          iVar28 = *(int *)(param_1 + 0x38);
          lVar25 = (longlong)iVar28;
          iVar22 = *(int *)(*(longlong *)(param_1 + 8) + 4 + lVar25 * 0x38);
          *(int *)(param_1 + 0x38) = iVar22;
          iVar21 = *(int *)(param_1 + 0x3c) + -1;
          *(int *)(param_1 + 0x3c) = iVar21;
          puVar44 = local_108;
          if (iVar21 != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar22 * 0x38) = 0xffffffff;
          }
        }
        puVar35 = *(uint **)(param_1 + 0x28);
        if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
          puVar35 = puVar44;
        }
        iVar22 = iVar28 + 0x1f;
        if (-1 < iVar28) {
          iVar22 = iVar28;
        }
        puVar35[iVar22 >> 5] = puVar35[iVar22 >> 5] | 1 << ((byte)iVar28 & 0x1f);
        uVar19 = 1;
        lVar23 = *(longlong *)(param_1 + 8);
        lVar25 = lVar25 * 0x38;
        puVar2 = (undefined4 *)(lVar23 + lVar25);
        *(ulonglong *)(lVar23 + 0x20 + lVar25) = CONCAT44(uStack_4c,uStack_50);
        puVar5 = (undefined4 *)(lVar23 + 0x10 + lVar25);
        *puVar5 = (uint)uStack_60;
        puVar5[1] = uStack_60._4_4_;
        puVar5[2] = (undefined4)uStack_58;
        puVar5[3] = uStack_58._4_4_;
        puVar5 = (undefined4 *)(lVar23 + lVar25);
        *puVar5 = (undefined4)local_70;
        puVar5[1] = local_70._4_4_;
        puVar5[2] = (int)uStack_68;
        puVar5[3] = uStack_68._4_4_;
        *(undefined4 *)(lVar23 + 0x28 + lVar25) = 0xffffffff;
        *(undefined4 *)(lVar23 + 0x30 + lVar25) = 0xffffffff;
        uVar34 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c);
        if (uVar34 == 1) {
LAB_140ff4caa:
          puVar44 = local_108;
          if (((int)uVar34 < 1) || ((int)uVar19 <= *(int *)(param_1 + 0x50))) {
            uVar20 = *(int *)(param_1 + 0x50) - 1U & uVar20;
            puVar2[0xd] = uVar20;
            lVar25 = *(longlong *)(param_1 + 0x48);
            if (*(longlong *)(param_1 + 0x48) == 0) {
              lVar25 = local_c8;
            }
            puVar2[0xc] = *(undefined4 *)
                           (lVar25 + ((longlong)*(int *)(param_1 + 0x50) - 1U &
                                     (longlong)(int)uVar20) * 4);
            lVar25 = *(longlong *)(param_1 + 0x48);
            if (*(longlong *)(param_1 + 0x48) == 0) {
              lVar25 = local_c8;
            }
            *(int *)(lVar25 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)(int)uVar20) * 4)
                 = iVar28;
          }
          else {
            *(uint *)(param_1 + 0x50) = uVar19;
            if (*(longlong *)(param_1 + 0x48) != 0) {
              FUN_1446efa72(local_f0,0,0,4);
              uVar19 = *(uint *)(param_1 + 0x50);
            }
            lVar25 = local_c8;
            if (uVar19 == 1) {
              if (*local_f0 != 0) {
                FUN_1446efa72(local_f0,0,0,4);
              }
LAB_140ff4f1c:
              uVar20 = 0;
              do {
                lVar23 = *(longlong *)(param_1 + 0x48);
                if (*(longlong *)(param_1 + 0x48) == 0) {
                  lVar23 = lVar25;
                }
                *(undefined4 *)
                 (lVar23 + (ulonglong)(*(int *)(param_1 + 0x50) + 0x7fffffffU & uVar20) * 4) =
                     0xffffffff;
                uVar20 = uVar20 + 1;
              } while (uVar19 != uVar20);
            }
            else {
              if (uVar19 == 0) goto LAB_140ff4d02;
              FUN_1446efa72(local_f0,0,uVar19,4);
              if (0 < (int)uVar19) goto LAB_140ff4f1c;
            }
            iVar22 = *(int *)(param_1 + 0x30);
            if (iVar22 == 0) {
              uVar26 = 0;
              uVar31 = 1;
              iVar39 = 0;
              iVar21 = 0;
            }
            else {
              puVar35 = *(uint **)(param_1 + 0x28);
              if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
                puVar35 = puVar44;
              }
              uVar19 = *puVar35;
              if (uVar19 == 0) {
                iVar21 = iVar22 + 0x1e;
                if (-1 < iVar22 + -1) {
                  iVar21 = iVar22 + -1;
                }
                uVar26 = 0;
                uVar31 = (ulonglong)(uint)(iVar21 >> 5);
                if (iVar21 >> 5 < 1) {
                  uVar31 = uVar26;
                }
                iVar21 = 0;
                do {
                  if (uVar31 == uVar26) goto LAB_140ff4d02;
                  iVar21 = iVar21 + 0x20;
                  uVar19 = puVar35[uVar26 + 1];
                  uVar26 = uVar26 + 1;
                } while (uVar19 == 0);
              }
              else {
                uVar26 = 0;
                iVar21 = 0;
              }
              uVar31 = (ulonglong)(-uVar19 & uVar19);
              uVar4 = uVar31 * 2 + 1;
              lVar25 = 0x3f;
              if (uVar4 != 0) {
                for (; uVar4 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                }
              }
              iVar39 = (iVar21 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
              if (iVar22 <= iVar39) {
                iVar39 = iVar22;
              }
            }
            if (iVar39 < iVar22) {
              uVar19 = 0xffffffff;
              do {
                local_b4 = uVar19;
                local_f4 = iVar21;
                local_e0 = uVar26;
                lVar25 = *(longlong *)(param_1 + 8);
                lVar24 = (longlong)iVar39 * 0x38;
                uVar7 = *(undefined8 *)(lVar25 + 8 + lVar24);
                uVar19 = ((uint)(*(ulonglong *)(lVar25 + lVar24) >> 0x14) & 0xffff ^
                         (uint)(*(ulonglong *)(lVar25 + lVar24) >> 4)) * -0x7a143595;
                uVar37 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
                uVar37 = uVar37 >> 0x10 ^ uVar37;
                uVar19 = (uint)((ulonglong)uVar7 >> 0x10);
                uVar20 = (uint)uVar7 & 0xffff;
                uVar37 = (uVar37 >> 2) + 0x9e3779b9 +
                         uVar37 * 0x40 +
                         ((uint)*(byte *)(lVar25 + 0x14 + lVar24) ^
                          *(uint *)(lVar25 + 0x10 + lVar24) ^
                         ((uint)uVar7 << 0x10 | uVar20) + (int)((ulonglong)uVar7 >> 0x20) +
                         (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar20 >> 4)) ^ uVar37;
                uVar7 = *(undefined8 *)(lVar25 + 0x18 + lVar24);
                uVar20 = (uint)((ulonglong)uVar7 >> 0x10);
                uVar34 = (uint)uVar7 & 0xffff;
                uVar19 = *(uint *)(lVar25 + 0x24 + lVar24);
                uVar20 = uVar19 >> 0xd ^
                         uVar34 + (int)((ulonglong)uVar7 >> 0x20) + ((uint)uVar7 * 0x10000 - uVar19)
                         + (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar34 >> 4);
                uVar34 = uVar20 << 8 ^ (-0x61c88647 - uVar19) - uVar20;
                uVar38 = uVar34 >> 0xd ^ (uVar19 - uVar20) - uVar34;
                uVar42 = uVar38 >> 0xc ^ (uVar20 - uVar34) - uVar38;
                uVar19 = uVar42 << 0x10 ^ (uVar34 - uVar38) - uVar42;
                uVar20 = uVar19 >> 5 ^ (uVar38 - uVar42) - uVar19;
                uVar34 = uVar20 >> 3 ^ (uVar42 - uVar19) - uVar20;
                uVar19 = uVar34 << 10 ^ (uVar19 - uVar20) - uVar34;
                uVar20 = uVar19 >> 0xf ^ uVar20 - (uVar34 + uVar19);
                uVar19 = (uint)*(byte *)(lVar25 + 0x20 + lVar24);
                iVar22 = uVar20 - uVar19;
                uVar34 = iVar22 * 0x100 ^ 0x9e3779b9 - uVar20;
                uVar20 = uVar34 >> 0xd ^ (uVar19 - iVar22) - uVar34;
                uVar19 = uVar20 >> 0xc ^ (iVar22 - uVar34) - uVar20;
                uVar38 = uVar19 << 0x10 ^ (uVar34 - uVar20) - uVar19;
                uVar34 = uVar38 >> 5 ^ (uVar20 - uVar19) - uVar38;
                uVar20 = uVar34 >> 3 ^ (uVar19 - uVar38) - uVar34;
                uVar19 = uVar20 << 10 ^ (uVar38 - uVar34) - uVar20;
                uVar26 = (longlong)
                         (int)((uVar37 >> 2) + uVar37 * 0x40 + -0x61c88647 +
                               (uVar19 >> 0xf ^ uVar34 - (uVar20 + uVar19)) ^ uVar37) &
                         (longlong)*(int *)(param_1 + 0x50) - 1U;
                iVar22 = (int)uVar26;
                *(int *)(lVar25 + 0x34 + lVar24) = iVar22;
                lVar23 = *(longlong *)(param_1 + 0x48);
                if (*(longlong *)(param_1 + 0x48) == 0) {
                  lVar23 = local_c8;
                }
                *(undefined4 *)(lVar25 + 0x30 + lVar24) =
                     *(undefined4 *)
                      (lVar23 + ((longlong)*(int *)(param_1 + 0x50) - 1U & uVar26) * 4);
                lVar25 = *(longlong *)(param_1 + 0x48);
                if (*(longlong *)(param_1 + 0x48) == 0) {
                  lVar25 = local_c8;
                }
                *(int *)(lVar25 + ((longlong)iVar22 & (longlong)*(int *)(param_1 + 0x50) - 1U) * 4)
                     = iVar39;
                uVar19 = ~(uint)uVar31 & local_b4;
                puVar35 = *(uint **)(param_1 + 0x28);
                if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
                  puVar35 = local_108;
                }
                iVar22 = *(int *)(param_1 + 0x30);
                iVar39 = (int)local_e0;
                lVar25 = (longlong)iVar39;
                uVar20 = puVar35[lVar25] & uVar19;
                uVar26 = local_e0;
                iVar21 = local_f4;
                puVar44 = local_108;
                if (uVar20 == 0) {
                  iVar29 = iVar22 + 0x1e;
                  if (-1 < iVar22 + -1) {
                    iVar29 = iVar22 + -1;
                  }
                  iVar29 = iVar29 >> 5;
                  iVar30 = iVar29;
                  if (iVar29 < iVar39) {
                    iVar30 = iVar39;
                  }
                  if (iVar29 <= iVar39) break;
                  lVar23 = 0;
                  while( true ) {
                    iVar21 = iVar21 + 0x20;
                    uVar20 = puVar35[lVar25 + lVar23 + 1];
                    if (uVar20 != 0) break;
                    lVar23 = lVar23 + 1;
                    if (iVar30 - lVar25 == lVar23) goto LAB_140ff4d02;
                  }
                  uVar19 = 0xffffffff;
                  uVar26 = (ulonglong)(iVar39 + (int)lVar23 + 1);
                }
                uVar31 = (ulonglong)(-uVar20 & uVar20);
                uVar4 = uVar31 * 2 + 1;
                lVar25 = 0x3f;
                if (uVar4 != 0) {
                  for (; uVar4 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                  }
                }
                iVar39 = (iVar21 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
              } while (iVar39 < iVar22);
            }
          }
        }
        else {
          iVar22 = FUN_140ff55c2(local_100,uVar20,puVar2);
          if (iVar22 == -1) {
            if (3 < uVar34) {
              uVar26 = (ulonglong)(uVar34 & 0xfffffffe) + 0xf;
              lVar25 = 0x3f;
              if (uVar26 != 0) {
                for (; uVar26 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                }
              }
              uVar19 = 1 << ((byte)lVar25 & 0x1f);
            }
            goto LAB_140ff4caa;
          }
          lVar25 = *local_100;
          lVar23 = (longlong)iVar22 * 0x38;
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          uVar10 = puVar2[2];
          uVar11 = puVar2[3];
          uVar12 = puVar2[4];
          uVar13 = puVar2[5];
          uVar14 = puVar2[6];
          uVar15 = puVar2[7];
          uVar16 = puVar2[9];
          uVar17 = puVar2[10];
          uVar18 = puVar2[0xb];
          puVar5 = (undefined4 *)(lVar25 + 0x20 + lVar23);
          *puVar5 = puVar2[8];
          puVar5[1] = uVar16;
          puVar5[2] = uVar17;
          puVar5[3] = uVar18;
          puVar2 = (undefined4 *)(lVar25 + 0x10 + lVar23);
          *puVar2 = uVar12;
          puVar2[1] = uVar13;
          puVar2[2] = uVar14;
          puVar2[3] = uVar15;
          puVar2 = (undefined4 *)(lVar25 + lVar23);
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          puVar2[2] = uVar10;
          puVar2[3] = uVar11;
          FUN_14596c86a(local_100,iVar28);
          puVar44 = local_108;
        }
LAB_140ff4d02:
        lVar25 = *local_100 + (longlong)iVar28 * 0x38;
      }
      else {
        if (*local_100 + (longlong)iVar28 * 0x38 == 0) goto LAB_140ff4b84;
        lVar25 = *local_100 + (longlong)iVar28 * 0x38;
      }
      puVar35 = (uint *)(lVar25 + 0x28);
      uVar19 = *puVar35;
      if (uVar19 == 0xffffffff) {
        uVar19 = FUN_14086cb32(*param_5);
        *puVar35 = uVar19;
      }
      else if ((-1 < (int)uVar19) && ((int)uVar19 < *(int *)(param_1 + 0x70))) {
        lVar25 = *(longlong *)(param_1 + 0x68);
        if (*(longlong *)(param_1 + 0x68) == 0) {
          lVar25 = local_a0;
        }
        bVar27 = (byte)uVar19 & 0x1f;
        puVar3 = (uint *)(lVar25 + (ulonglong)(uVar19 >> 5) * 4);
        *puVar3 = *puVar3 & (-2 << bVar27 | 0xfffffffeU >> 0x20 - bVar27);
        uVar19 = *puVar35;
      }
      local_7c = *(undefined4 *)(param_5 + 1);
      local_74 = local_74 & 0xffffff00;
      uStack_78 = uVar19;
      FUN_140addf02(param_5,local_90 + uVar41 * 2);
      *(uint *)(local_88 + 8 + uVar41 * 0xc) = local_74;
      *(ulonglong *)(local_88 + uVar41 * 0xc) = CONCAT44(uStack_78,local_7c);
      uVar41 = uVar41 + 1;
    } while (uVar41 != local_b0);
  }
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a8 + 3) = (int)local_a8[3] + -1;
    UNLOCK();
    if (local_bc == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_a8 + 1));
    }
  }
  if (plVar32 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar32 + 3) = (int)plVar32[3] + -1;
    UNLOCK();
    if (local_b8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar32 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ff55c2 FUN_140ff55c2 body=159 status=ok
// SIG undefined FUN_140ff55c2(void)

int FUN_140ff55c2(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar5 = (longlong)iVar2 * 0x38;
        if (((((*(longlong *)(lVar3 + lVar5) == *param_3) &&
              (lVar1 = lVar3 + lVar5, *(int *)(lVar1 + 0x10) == (int)param_3[2])) &&
             (*(longlong *)(lVar1 + 8) == param_3[1])) &&
            ((*(char *)(lVar1 + 0x14) == *(char *)((longlong)param_3 + 0x14) &&
             (*(int *)(lVar1 + 0x18) == (int)param_3[3])))) &&
           ((*(int *)(lVar1 + 0x1c) == *(int *)((longlong)param_3 + 0x1c) &&
            ((*(char *)(lVar1 + 0x20) == (char)param_3[4] &&
             (*(int *)(lVar1 + 0x24) == *(int *)((longlong)param_3 + 0x24))))))) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x30 + lVar5);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 140ff5662 FUN_140ff5662 body=31 status=ok
// SIG undefined FUN_140ff5662(void)

void FUN_140ff5662(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x328))();
  param_1[0x2d] = lVar1;
  return;
}



// FUNCTION 140ff5682 FUN_140ff5682 body=132 status=ok
// SIG undefined FUN_140ff5682(void)

double FUN_140ff5682(longlong param_1)

{
  wchar_t *_Str;
  double dVar1;
  undefined1 auStack_58 [40];
  wchar_t *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(**(longlong **)(param_1 + 0x138) + 0x18))
            (*(longlong **)(param_1 + 0x138),&local_30,*(undefined8 *)(param_1 + 0x58));
  _Str = local_30;
  if (local_28 == 0) {
    _Str = L"";
  }
  dVar1 = wcstod(_Str,(wchar_t **)0x0);
  if (local_30 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar1;
}



// FUNCTION 140ff5708 FUN_140ff5708 body=3 status=ok
// SIG undefined FUN_140ff5708(void)

void FUN_140ff5708(byte *param_1,byte param_2)

{
  *param_1 = *param_1 | param_2;
  return;
}



// FUNCTION 140ff570c FUN_140ff570c body=20503 status=ok
// SIG undefined FUN_140ff570c(void)

void FUN_140ff570c(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  code *pcVar6;
  longlong ***ppplVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined8 ****ppppuVar20;
  undefined4 *puVar21;
  longlong ****pppplVar22;
  undefined8 *puVar23;
  uint uVar24;
  undefined1 auStack_2a8 [40];
  ulonglong local_280;
  ulonglong local_278;
  longlong local_270;
  undefined8 local_268;
  undefined *puStack_260;
  longlong **local_258;
  undefined8 local_248;
  undefined *puStack_240;
  longlong **local_238;
  undefined8 local_228;
  undefined *puStack_220;
  longlong **local_218;
  undefined8 local_208;
  undefined *puStack_200;
  longlong **local_1f8;
  undefined1 local_1f0 [8];
  undefined8 local_1e8;
  undefined1 *puStack_1e0;
  longlong ***local_1d8;
  undefined1 local_1c4 [4];
  undefined1 *local_1c0;
  longlong ***appplStack_1b8 [3];
  ushort local_1a0;
  byte local_198;
  char local_190;
  undefined8 local_188;
  undefined8 ***local_180 [3];
  ushort local_168;
  byte local_160;
  undefined1 local_158;
  longlong *local_150;
  undefined8 ***local_148 [3];
  ushort local_130;
  byte local_128;
  undefined1 local_120;
  undefined1 local_118 [8];
  undefined8 ***local_110 [3];
  ushort local_f8;
  byte local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined4 local_d7;
  undefined1 local_d3;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  ushort local_90;
  byte local_88;
  char local_80;
  undefined1 local_78;
  undefined1 local_77;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  (**(code **)(*param_1 + 0x90))();
  local_d8 = 0;
  local_e0 = 0;
  local_d0 = DAT_14c8464e0;
  uStack_c8 = DAT_14c8464e8;
  local_c0 = DAT_14c8464f0;
  local_b8 = 0;
  local_b6 = 0;
  local_a8 = (undefined4)DAT_14c8464f8;
  uStack_a4 = DAT_14c8464f8._4_4_;
  uStack_a0 = (undefined4)DAT_14c846500;
  uStack_9c = DAT_14c846500._4_4_;
  local_98 = DAT_14c846508;
  local_b0 = 0;
  local_90 = 0x18;
  local_88 = 5;
  local_80 = ((DAT_14c9a8ab4 & 0x20) == 0) * '\x05';
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_d3 = 0;
  local_d7 = 0;
  local_77 = 1;
  FUN_140440628(local_118,&DAT_14cb94d28,0);
  FUN_140440628(&local_150,&DAT_14cb94d30,0);
  uVar10 = DAT_14cb94d38;
  local_188 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  uVar8 = FUN_141115664();
  lVar9 = FUN_140c48046(param_1 + 0x10,uVar8,uVar10,0);
  if (lVar9 == 0) goto LAB_140ff7d44;
  local_1c0 = (undefined1 *)0x0;
  uVar10 = FUN_140d11bc2();
  FUN_140c47e50(lVar9,uVar10,&local_1c0);
  uVar10 = FUN_140ffad2a();
  local_270 = lVar9;
  uVar11 = FUN_140c483dc(lVar9,uVar10,&DAT_14cb94d50,0);
  if (uVar11 != 0) {
    local_1c0 = (undefined1 *)0x0;
    uVar10 = FUN_140ffa7d4();
    plVar12 = (longlong *)FUN_140c47e50(uVar11,uVar10,&local_1c0);
    if (plVar12 != (longlong *)0x0) {
      *(undefined1 *)(plVar12 + 0x3f) = 1;
      local_1c0 = (undefined1 *)0x0;
      local_1a0 = 4;
      appplStack_1b8[0] = (longlong ***)CONCAT44(appplStack_1b8[0]._4_4_,0x3f800000);
      local_198 = 3;
      local_190 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
      FUN_1403719a4(plVar12 + 0x38,&local_1c0);
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_198 * 0x120));
      if (pcVar6 != (code *)0x0) {
        pppplVar22 = (longlong ****)appplStack_1b8[0];
        if (local_1a0 < 0x19) {
          pppplVar22 = appplStack_1b8;
        }
        (*pcVar6)(pppplVar22);
      }
      if (0x18 < local_1a0) {
        FUN_1400020a8(appplStack_1b8[0]);
      }
      (**(code **)(*plVar12 + 0x90))(plVar12);
    }
    uVar10 = FUN_140a48832();
    lVar9 = FUN_140c483dc(uVar11,uVar10,&DAT_14cb94d58,0);
    local_278 = uVar11;
    if (lVar9 != 0) {
      *(char *)(lVar9 + 0x1c) = (char)param_1[0x116];
      local_1c0 = (undefined1 *)0x0;
      uVar10 = FUN_140ffaec8();
      plVar12 = (longlong *)FUN_140c47e50(lVar9,uVar10,&local_1c0);
      if (plVar12 != (longlong *)0x0) {
        plVar16 = plVar12 + 0x19;
        bVar3 = *(byte *)(plVar12 + 0x1d);
        if (bVar3 == local_f0) {
          ppppuVar20 = local_110;
          if (0x18 < local_f8) {
            ppppuVar20 = (undefined8 ****)local_110[0];
          }
          if (0x18 < *(ushort *)(plVar12 + 0x1c)) {
            plVar16 = (longlong *)*plVar16;
          }
          uVar13 = (ulonglong)((uint)bVar3 * 0x120);
          pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
          if (pcVar6 == (code *)0x0) {
            memcpy(plVar16,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
          }
          else {
            (*pcVar6)(plVar16,ppppuVar20);
          }
        }
        else {
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar6 != (code *)0x0) {
            plVar18 = plVar16;
            if (0x18 < *(ushort *)(plVar12 + 0x1c)) {
              plVar18 = (longlong *)*plVar16;
            }
            (*pcVar6)(plVar18);
          }
          if (0x18 < *(ushort *)(plVar12 + 0x1c)) {
            FUN_1400020a8(*plVar16);
          }
          uVar24 = (uint)local_f0;
          *(ushort *)(plVar12 + 0x1c) = local_f8;
          plVar18 = plVar16;
          ppppuVar20 = local_110;
          if (0x18 < local_f8) {
            local_280 = (ulonglong)local_f0;
            plVar18 = (longlong *)FUN_14001cc68(local_f8,0);
            *plVar16 = (longlong)plVar18;
            uVar24 = (uint)local_280;
            ppppuVar20 = (undefined8 ****)local_110[0];
          }
          pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
          if (pcVar6 == (code *)0x0) {
            memcpy(plVar18,ppppuVar20,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
          }
          else {
            (*pcVar6)(plVar18,ppppuVar20);
          }
          *(byte *)(plVar12 + 0x1d) = local_f0;
        }
        *(undefined1 *)(plVar12 + 0x1e) = local_e8;
        *(undefined1 *)(plVar12 + 0x10) = 0;
        *(undefined1 *)(plVar12 + 0x41) = 1;
        *(undefined1 *)(plVar12 + 0x40) = 1;
        plVar16 = param_1 + 0x118;
        plVar18 = plVar12 + 0x29;
        bVar3 = *(byte *)(plVar12 + 0x2d);
        if (bVar3 == *(byte *)(param_1 + 0x11c)) {
          if (0x18 < *(ushort *)(param_1 + 0x11b)) {
            plVar16 = (longlong *)param_1[0x118];
          }
          if (0x18 < *(ushort *)(plVar12 + 0x2c)) {
            plVar18 = (longlong *)*plVar18;
          }
          uVar13 = (ulonglong)((uint)bVar3 * 0x120);
          pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
          if (pcVar6 == (code *)0x0) {
            memcpy(plVar18,plVar16,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
          }
          else {
            (*pcVar6)(plVar18,plVar16);
          }
        }
        else {
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar6 != (code *)0x0) {
            plVar19 = plVar18;
            if (0x18 < *(ushort *)(plVar12 + 0x2c)) {
              plVar19 = (longlong *)*plVar18;
            }
            (*pcVar6)(plVar19);
          }
          if (0x18 < *(ushort *)(plVar12 + 0x2c)) {
            FUN_1400020a8(*plVar18);
          }
          bVar3 = *(byte *)(param_1 + 0x11c);
          uVar5 = *(ushort *)(param_1 + 0x11b);
          *(ushort *)(plVar12 + 0x2c) = uVar5;
          plVar19 = plVar18;
          if (0x18 < uVar5) {
            plVar19 = (longlong *)FUN_14001cc68(uVar5,0);
            *plVar18 = (longlong)plVar19;
            plVar16 = (longlong *)*plVar16;
          }
          pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar6 == (code *)0x0) {
            memcpy(plVar19,plVar16,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar3 * 0x120)));
          }
          else {
            (*pcVar6)(plVar19,plVar16);
          }
          *(char *)(plVar12 + 0x2d) = (char)param_1[0x11c];
        }
        *(char *)(plVar12 + 0x2e) = (char)param_1[0x11d];
        (**(code **)(*plVar12 + 0x90))(plVar12);
      }
      local_1c0 = (undefined1 *)0x0;
      uVar10 = FUN_140ffa7d4();
      plVar12 = (longlong *)FUN_140c47e50(lVar9,uVar10,&local_1c0);
      if (plVar12 != (longlong *)0x0) {
        *(undefined1 *)(plVar12 + 0x3f) = 1;
        plVar16 = param_1 + 0x11f;
        plVar18 = plVar12 + 0x39;
        bVar3 = *(byte *)(plVar12 + 0x3d);
        if (bVar3 == *(byte *)(param_1 + 0x123)) {
          if (0x18 < *(ushort *)(param_1 + 0x122)) {
            plVar16 = (longlong *)param_1[0x11f];
          }
          if (0x18 < *(ushort *)(plVar12 + 0x3c)) {
            plVar18 = (longlong *)*plVar18;
          }
          uVar13 = (ulonglong)((uint)bVar3 * 0x120);
          pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
          if (pcVar6 == (code *)0x0) {
            memcpy(plVar18,plVar16,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
          }
          else {
            (*pcVar6)(plVar18,plVar16);
          }
        }
        else {
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar6 != (code *)0x0) {
            plVar19 = plVar18;
            if (0x18 < *(ushort *)(plVar12 + 0x3c)) {
              plVar19 = (longlong *)*plVar18;
            }
            (*pcVar6)(plVar19);
          }
          if (0x18 < *(ushort *)(plVar12 + 0x3c)) {
            FUN_1400020a8(*plVar18);
          }
          bVar3 = *(byte *)(param_1 + 0x123);
          uVar5 = *(ushort *)(param_1 + 0x122);
          *(ushort *)(plVar12 + 0x3c) = uVar5;
          plVar19 = plVar18;
          if (0x18 < uVar5) {
            plVar19 = (longlong *)FUN_14001cc68(uVar5,0);
            *plVar18 = (longlong)plVar19;
            plVar16 = (longlong *)*plVar16;
          }
          pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar6 == (code *)0x0) {
            memcpy(plVar19,plVar16,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar3 * 0x120)));
          }
          else {
            (*pcVar6)(plVar19,plVar16);
          }
          *(char *)(plVar12 + 0x3d) = (char)param_1[0x123];
        }
        *(char *)(plVar12 + 0x3e) = (char)param_1[0x124];
        (**(code **)(*plVar12 + 0x90))(plVar12);
      }
      local_1c0 = (undefined1 *)0x0;
      uVar10 = FUN_140c4800c();
      lVar14 = FUN_140c47e50(lVar9,uVar10,&local_1c0);
      if (lVar14 != 0) {
        puVar23 = (undefined8 *)(lVar14 + 0x88);
        bVar3 = *(byte *)(lVar14 + 0xa8);
        if (bVar3 == local_f0) {
          ppppuVar20 = local_110;
          if (0x18 < local_f8) {
            ppppuVar20 = (undefined8 ****)local_110[0];
          }
          if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
            puVar23 = (undefined8 *)*puVar23;
          }
          uVar13 = (ulonglong)((uint)bVar3 * 0x120);
          pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
          if (pcVar6 == (code *)0x0) {
            memcpy(puVar23,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
          }
          else {
            (*pcVar6)(puVar23,ppppuVar20);
          }
        }
        else {
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar6 != (code *)0x0) {
            puVar17 = puVar23;
            if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
              puVar17 = (undefined8 *)*puVar23;
            }
            (*pcVar6)(puVar17);
          }
          if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
            FUN_1400020a8(*puVar23);
          }
          uVar24 = (uint)local_f0;
          *(ushort *)(lVar14 + 0xa0) = local_f8;
          puVar17 = puVar23;
          ppppuVar20 = local_110;
          if (0x18 < local_f8) {
            puVar17 = (undefined8 *)FUN_14001cc68(local_f8,0);
            *puVar23 = puVar17;
            ppppuVar20 = (undefined8 ****)local_110[0];
          }
          pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
          if (pcVar6 == (code *)0x0) {
            memcpy(puVar17,ppppuVar20,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
          }
          else {
            (*pcVar6)(puVar17,ppppuVar20);
          }
          *(byte *)(lVar14 + 0xa8) = local_f0;
        }
        *(undefined1 *)(lVar14 + 0xb0) = local_e8;
        *(undefined1 *)(lVar14 + 0x261) = 1;
        if (*(char *)(lVar14 + 0xb8) != (char)param_1[0x10f]) {
          *(char *)(lVar14 + 0xb8) = (char)param_1[0x10f];
          FUN_1403a3fe6(lVar14);
        }
      }
      local_1c0 = (undefined1 *)0x0;
      uVar10 = FUN_140ffa79a();
      lVar14 = FUN_140c47e50(lVar9,uVar10,&local_1c0);
      if (lVar14 != 0) {
        FUN_140ffb226(lVar14 + 0x80,param_1 + 0x33);
        *(longlong *)(lVar14 + 0x540) = param_1[0xcb];
        *(int *)(lVar14 + 0x548) = (int)param_1[0xcc];
      }
      local_1c0 = (undefined1 *)0x0;
      uVar10 = FUN_140ffa760();
      lVar14 = FUN_140c47e50(lVar9,uVar10,&local_1c0);
      if (lVar14 != 0) {
        FUN_14054d68c(lVar14 + 0x1e8,param_1 + 0x1ca);
        *(undefined1 *)(lVar14 + 0x460) = 0;
        *(undefined4 *)(lVar14 + 0x19c) = 0;
        FUN_144955a78(lVar14 + 0x98,&local_e0);
        local_1e8 = 0;
        puStack_1e0 = (undefined1 *)0x0;
        local_1d8 = (longlong ***)0x0;
        FUN_14111569e(lVar14,&local_1c0);
        puStack_1e0 = local_1c0;
        pppplVar22 = (longlong ****)appplStack_1b8[0];
        local_1c0 = (undefined1 *)0x0;
        appplStack_1b8[0] = (longlong ***)0x0;
        if (local_1d8 != (longlong ***)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_1d8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            lVar14 = (longlong)*local_1d8;
            local_1d8 = (longlong ***)pppplVar22;
            (**(code **)(lVar14 + 0x10))();
            pppplVar22 = (longlong ****)local_1d8;
          }
          local_1d8 = (longlong ***)pppplVar22;
          uVar11 = local_278;
          pppplVar22 = (longlong ****)local_1d8;
          if ((longlong ****)appplStack_1b8[0] != (longlong ****)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)appplStack_1b8[0] + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*appplStack_1b8[0])[2])();
              pppplVar22 = (longlong ****)local_1d8;
            }
          }
        }
        local_1d8 = (longlong ***)pppplVar22;
        FUN_141115702(&local_1c0,&local_1e8);
        FUN_1403719a4(&local_188,&local_1c0);
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_198 * 0x120));
        if (pcVar6 != (code *)0x0) {
          pppplVar22 = (longlong ****)appplStack_1b8[0];
          if (local_1a0 < 0x19) {
            pppplVar22 = appplStack_1b8;
          }
          (*pcVar6)(pppplVar22);
        }
        if (0x18 < local_1a0) {
          FUN_1400020a8(appplStack_1b8[0]);
        }
      }
      local_1c0 = (undefined1 *)0x0;
      uVar10 = FUN_140ffa726();
      lVar9 = FUN_140c47e50(lVar9,uVar10,&local_1c0);
      if (lVar9 != 0) {
        plVar12 = (longlong *)(lVar9 + 0x88);
        bVar3 = *(byte *)(lVar9 + 0xa8);
        if (bVar3 == local_f0) {
          ppppuVar20 = local_110;
          if (0x18 < local_f8) {
            ppppuVar20 = (undefined8 ****)local_110[0];
          }
          if (0x18 < *(ushort *)(lVar9 + 0xa0)) {
            plVar12 = (longlong *)*plVar12;
          }
          uVar13 = (ulonglong)((uint)bVar3 * 0x120);
          pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
          if (pcVar6 == (code *)0x0) {
            memcpy(plVar12,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
          }
          else {
            (*pcVar6)(plVar12,ppppuVar20);
          }
        }
        else {
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar6 != (code *)0x0) {
            plVar16 = plVar12;
            if (0x18 < *(ushort *)(lVar9 + 0xa0)) {
              plVar16 = (longlong *)*plVar12;
            }
            (*pcVar6)(plVar16);
          }
          if (0x18 < *(ushort *)(lVar9 + 0xa0)) {
            FUN_1400020a8(*plVar12);
          }
          uVar24 = (uint)local_f0;
          *(ushort *)(lVar9 + 0xa0) = local_f8;
          plVar16 = plVar12;
          ppppuVar20 = local_110;
          if (0x18 < local_f8) {
            plVar16 = (longlong *)FUN_14001cc68(local_f8,0);
            *plVar12 = (longlong)plVar16;
            ppppuVar20 = (undefined8 ****)local_110[0];
          }
          pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
          if (pcVar6 == (code *)0x0) {
            memcpy(plVar16,ppppuVar20,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
          }
          else {
            (*pcVar6)(plVar16,ppppuVar20);
          }
          *(byte *)(lVar9 + 0xa8) = local_f0;
        }
        *(undefined1 *)(lVar9 + 0xb0) = local_e8;
        plVar12 = (longlong *)(lVar9 + 0xf8);
        bVar3 = *(byte *)(lVar9 + 0x118);
        if (bVar3 == local_128) {
          ppppuVar20 = local_148;
          if (0x18 < local_130) {
            ppppuVar20 = (undefined8 ****)local_148[0];
          }
          if (0x18 < *(ushort *)(lVar9 + 0x110)) {
            plVar12 = (longlong *)*plVar12;
          }
          uVar13 = (ulonglong)((uint)bVar3 * 0x120);
          pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
          if (pcVar6 == (code *)0x0) {
            memcpy(plVar12,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
          }
          else {
            (*pcVar6)(plVar12,ppppuVar20);
          }
        }
        else {
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar6 != (code *)0x0) {
            plVar16 = plVar12;
            if (0x18 < *(ushort *)(lVar9 + 0x110)) {
              plVar16 = (longlong *)*plVar12;
            }
            (*pcVar6)(plVar16);
          }
          if (0x18 < *(ushort *)(lVar9 + 0x110)) {
            FUN_1400020a8(*plVar12);
          }
          uVar24 = (uint)local_128;
          *(ushort *)(lVar9 + 0x110) = local_130;
          plVar16 = plVar12;
          ppppuVar20 = local_148;
          if (0x18 < local_130) {
            plVar16 = (longlong *)FUN_14001cc68(local_130,0);
            *plVar12 = (longlong)plVar16;
            ppppuVar20 = (undefined8 ****)local_148[0];
          }
          pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
          if (pcVar6 == (code *)0x0) {
            memcpy(plVar16,ppppuVar20,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
          }
          else {
            (*pcVar6)(plVar16,ppppuVar20);
          }
          *(byte *)(lVar9 + 0x118) = local_128;
        }
        *(undefined1 *)(lVar9 + 0x120) = local_120;
        puVar23 = (undefined8 *)(lVar9 + 0xc0);
        bVar3 = *(byte *)(lVar9 + 0xe0);
        if (bVar3 == local_160) {
          ppppuVar20 = local_180;
          if (0x18 < local_168) {
            ppppuVar20 = (undefined8 ****)local_180[0];
          }
          if (0x18 < *(ushort *)(lVar9 + 0xd8)) {
            puVar23 = (undefined8 *)*puVar23;
          }
          uVar13 = (ulonglong)((uint)bVar3 * 0x120);
          pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
          if (pcVar6 == (code *)0x0) {
            memcpy(puVar23,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
          }
          else {
            (*pcVar6)(puVar23,ppppuVar20);
          }
        }
        else {
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar6 != (code *)0x0) {
            puVar17 = puVar23;
            if (0x18 < *(ushort *)(lVar9 + 0xd8)) {
              puVar17 = (undefined8 *)*puVar23;
            }
            (*pcVar6)(puVar17);
          }
          if (0x18 < *(ushort *)(lVar9 + 0xd8)) {
            FUN_1400020a8(*puVar23);
          }
          uVar24 = (uint)local_160;
          *(ushort *)(lVar9 + 0xd8) = local_168;
          ppppuVar20 = local_180;
          puVar17 = puVar23;
          if (0x18 < local_168) {
            puVar17 = (undefined8 *)FUN_14001cc68(local_168,0);
            *puVar23 = puVar17;
            ppppuVar20 = (undefined8 ****)local_180[0];
          }
          pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
          if (pcVar6 == (code *)0x0) {
            memcpy(puVar17,ppppuVar20,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
          }
          else {
            (*pcVar6)(puVar17,ppppuVar20);
          }
          *(byte *)(lVar9 + 0xe0) = local_160;
        }
        *(undefined1 *)(lVar9 + 0xe8) = local_158;
      }
    }
    uVar10 = FUN_140ffad2a();
    lVar9 = FUN_140c483dc(uVar11,uVar10,&DAT_14cb94d60,0);
    if (lVar9 != 0) {
      local_1c0 = (undefined1 *)0x0;
      uVar10 = FUN_140ffa7d4();
      plVar12 = (longlong *)FUN_140c47e50(lVar9,uVar10,&local_1c0);
      if (plVar12 != (longlong *)0x0) {
        *(undefined1 *)(plVar12 + 0x3f) = 1;
        plVar16 = param_1 + 0xf1;
        plVar18 = plVar12 + 0x39;
        bVar3 = *(byte *)(plVar12 + 0x3d);
        if (bVar3 == *(byte *)(param_1 + 0xf5)) {
          if (0x18 < *(ushort *)(param_1 + 0xf4)) {
            plVar16 = (longlong *)param_1[0xf1];
          }
          if (0x18 < *(ushort *)(plVar12 + 0x3c)) {
            plVar18 = (longlong *)*plVar18;
          }
          uVar13 = (ulonglong)((uint)bVar3 * 0x120);
          pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
          if (pcVar6 == (code *)0x0) {
            memcpy(plVar18,plVar16,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
          }
          else {
            (*pcVar6)(plVar18,plVar16);
          }
        }
        else {
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar6 != (code *)0x0) {
            plVar19 = plVar18;
            if (0x18 < *(ushort *)(plVar12 + 0x3c)) {
              plVar19 = (longlong *)*plVar18;
            }
            (*pcVar6)(plVar19);
          }
          if (0x18 < *(ushort *)(plVar12 + 0x3c)) {
            FUN_1400020a8(*plVar18);
          }
          bVar3 = *(byte *)(param_1 + 0xf5);
          uVar5 = *(ushort *)(param_1 + 0xf4);
          *(ushort *)(plVar12 + 0x3c) = uVar5;
          plVar19 = plVar18;
          if (0x18 < uVar5) {
            plVar19 = (longlong *)FUN_14001cc68(uVar5,0);
            *plVar18 = (longlong)plVar19;
            plVar16 = (longlong *)*plVar16;
          }
          pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar6 == (code *)0x0) {
            memcpy(plVar19,plVar16,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar3 * 0x120)));
          }
          else {
            (*pcVar6)(plVar19,plVar16);
          }
          *(char *)(plVar12 + 0x3d) = (char)param_1[0xf5];
        }
        *(char *)(plVar12 + 0x3e) = (char)param_1[0xf6];
        (**(code **)(*plVar12 + 0x90))(plVar12);
      }
      local_1c0 = (undefined1 *)0x0;
      uVar10 = FUN_140ffb1b2();
      lVar14 = FUN_140c47e50(lVar9,uVar10,&local_1c0);
      if (lVar14 != 0) {
        lVar15 = param_1[0xf8];
        if (DAT_14c950c29 == '\x01') {
          if (lVar15 == 0) {
            lVar15 = 0;
            uVar11 = local_278;
          }
          else {
            FUN_1456cec3c();
            lVar15 = param_1[0xf8];
            uVar11 = local_278;
          }
        }
        *(longlong *)(lVar14 + 0x80) = lVar15;
        plVar12 = param_1 + 0xfa;
        plVar16 = (longlong *)(lVar14 + 0x90);
        bVar3 = *(byte *)(lVar14 + 0xb0);
        if (bVar3 == *(byte *)(param_1 + 0xfe)) {
          if (0x18 < *(ushort *)(param_1 + 0xfd)) {
            plVar12 = (longlong *)param_1[0xfa];
          }
          if (0x18 < *(ushort *)(lVar14 + 0xa8)) {
            plVar16 = (longlong *)*plVar16;
          }
          uVar13 = (ulonglong)((uint)bVar3 * 0x120);
          pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
          if (pcVar6 == (code *)0x0) {
            memcpy(plVar16,plVar12,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
          }
          else {
            (*pcVar6)(plVar16,plVar12);
          }
        }
        else {
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar6 != (code *)0x0) {
            plVar18 = plVar16;
            if (0x18 < *(ushort *)(lVar14 + 0xa8)) {
              plVar18 = (longlong *)*plVar16;
            }
            (*pcVar6)(plVar18);
          }
          if (0x18 < *(ushort *)(lVar14 + 0xa8)) {
            FUN_1400020a8(*plVar16);
          }
          bVar3 = *(byte *)(param_1 + 0xfe);
          uVar24 = (uint)bVar3;
          uVar5 = *(ushort *)(param_1 + 0xfd);
          *(ushort *)(lVar14 + 0xa8) = uVar5;
          plVar18 = plVar16;
          if (0x18 < uVar5) {
            local_280 = (ulonglong)bVar3;
            plVar18 = (longlong *)FUN_14001cc68(uVar5,0);
            *plVar16 = (longlong)plVar18;
            plVar12 = (longlong *)*plVar12;
            uVar24 = (uint)local_280;
          }
          pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
          if (pcVar6 == (code *)0x0) {
            memcpy(plVar18,plVar12,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
          }
          else {
            (*pcVar6)(plVar18,plVar12);
          }
          *(char *)(lVar14 + 0xb0) = (char)param_1[0xfe];
        }
        *(char *)(lVar14 + 0xb8) = (char)param_1[0xff];
        plVar12 = param_1 + 0x101;
        plVar16 = (longlong *)(lVar14 + 200);
        bVar3 = *(byte *)(lVar14 + 0xe8);
        if (bVar3 == *(byte *)(param_1 + 0x105)) {
          if (0x18 < *(ushort *)(param_1 + 0x104)) {
            plVar12 = (longlong *)param_1[0x101];
          }
          if (0x18 < *(ushort *)(lVar14 + 0xe0)) {
            plVar16 = (longlong *)*plVar16;
          }
          uVar13 = (ulonglong)((uint)bVar3 * 0x120);
          pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
          if (pcVar6 == (code *)0x0) {
            memcpy(plVar16,plVar12,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
          }
          else {
            (*pcVar6)(plVar16,plVar12);
          }
        }
        else {
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar6 != (code *)0x0) {
            plVar18 = plVar16;
            if (0x18 < *(ushort *)(lVar14 + 0xe0)) {
              plVar18 = (longlong *)*plVar16;
            }
            (*pcVar6)(plVar18);
          }
          if (0x18 < *(ushort *)(lVar14 + 0xe0)) {
            FUN_1400020a8(*plVar16);
          }
          bVar3 = *(byte *)(param_1 + 0x105);
          uVar24 = (uint)bVar3;
          uVar5 = *(ushort *)(param_1 + 0x104);
          *(ushort *)(lVar14 + 0xe0) = uVar5;
          plVar18 = plVar16;
          if (0x18 < uVar5) {
            local_280 = (ulonglong)bVar3;
            plVar18 = (longlong *)FUN_14001cc68(uVar5,0);
            *plVar16 = (longlong)plVar18;
            plVar12 = (longlong *)*plVar12;
            uVar24 = (uint)local_280;
          }
          pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
          if (pcVar6 == (code *)0x0) {
            memcpy(plVar18,plVar12,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
          }
          else {
            (*pcVar6)(plVar18,plVar12);
          }
          *(char *)(lVar14 + 0xe8) = (char)param_1[0x105];
        }
        *(char *)(lVar14 + 0xf0) = (char)param_1[0x106];
        *(short *)(lVar14 + 0xf8) = (short)param_1[0x107];
        *(undefined1 *)(lVar14 + 0xfa) = *(undefined1 *)((longlong)param_1 + 0x83a);
        plVar12 = param_1 + 0x109;
        puVar23 = (undefined8 *)(lVar14 + 0x108);
        bVar3 = *(byte *)(lVar14 + 0x128);
        if (bVar3 == *(byte *)(param_1 + 0x10d)) {
          if (0x18 < *(ushort *)(param_1 + 0x10c)) {
            plVar12 = (longlong *)param_1[0x109];
          }
          if (0x18 < *(ushort *)(lVar14 + 0x120)) {
            puVar23 = (undefined8 *)*puVar23;
          }
          uVar13 = (ulonglong)((uint)bVar3 * 0x120);
          pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
          if (pcVar6 == (code *)0x0) {
            memcpy(puVar23,plVar12,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
          }
          else {
            (*pcVar6)(puVar23,plVar12);
          }
        }
        else {
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar6 != (code *)0x0) {
            puVar17 = puVar23;
            if (0x18 < *(ushort *)(lVar14 + 0x120)) {
              puVar17 = (undefined8 *)*puVar23;
            }
            (*pcVar6)(puVar17);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x120)) {
            FUN_1400020a8(*puVar23);
          }
          bVar3 = *(byte *)(param_1 + 0x10d);
          uVar5 = *(ushort *)(param_1 + 0x10c);
          *(ushort *)(lVar14 + 0x120) = uVar5;
          puVar17 = puVar23;
          if (0x18 < uVar5) {
            puVar17 = (undefined8 *)FUN_14001cc68(uVar5,0);
            *puVar23 = puVar17;
            plVar12 = (longlong *)*plVar12;
          }
          pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar6 == (code *)0x0) {
            memcpy(puVar17,plVar12,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar3 * 0x120)));
          }
          else {
            (*pcVar6)(puVar17,plVar12);
          }
          *(char *)(lVar14 + 0x128) = (char)param_1[0x10d];
        }
        *(char *)(lVar14 + 0x130) = (char)param_1[0x10e];
        *(char *)(lVar14 + 0x1c) = (char)param_1[0xf7];
      }
      local_1c0 = (undefined1 *)0x0;
      uVar10 = FUN_140c4800c();
      lVar14 = FUN_140c47e50(lVar9,uVar10,&local_1c0);
      if (lVar14 != 0) {
        puVar23 = (undefined8 *)(lVar14 + 0x88);
        bVar3 = *(byte *)(lVar14 + 0xa8);
        if (bVar3 == local_f0) {
          ppppuVar20 = local_110;
          if (0x18 < local_f8) {
            ppppuVar20 = (undefined8 ****)local_110[0];
          }
          if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
            puVar23 = (undefined8 *)*puVar23;
          }
          uVar13 = (ulonglong)((uint)bVar3 * 0x120);
          pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
          if (pcVar6 == (code *)0x0) {
            memcpy(puVar23,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
          }
          else {
            (*pcVar6)(puVar23,ppppuVar20);
          }
        }
        else {
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar6 != (code *)0x0) {
            puVar17 = puVar23;
            if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
              puVar17 = (undefined8 *)*puVar23;
            }
            (*pcVar6)(puVar17);
          }
          if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
            FUN_1400020a8(*puVar23);
          }
          uVar24 = (uint)local_f0;
          *(ushort *)(lVar14 + 0xa0) = local_f8;
          puVar17 = puVar23;
          ppppuVar20 = local_110;
          if (0x18 < local_f8) {
            puVar17 = (undefined8 *)FUN_14001cc68(local_f8,0);
            *puVar23 = puVar17;
            ppppuVar20 = (undefined8 ****)local_110[0];
          }
          pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
          if (pcVar6 == (code *)0x0) {
            memcpy(puVar17,ppppuVar20,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
          }
          else {
            (*pcVar6)(puVar17,ppppuVar20);
          }
          *(byte *)(lVar14 + 0xa8) = local_f0;
        }
        *(undefined1 *)(lVar14 + 0xb0) = local_e8;
        *(undefined1 *)(lVar14 + 0x261) = 1;
        if (*(char *)(lVar14 + 0xb8) != *(char *)((longlong)param_1 + 0x879)) {
          *(char *)(lVar14 + 0xb8) = *(char *)((longlong)param_1 + 0x879);
          FUN_1403a3fe6(lVar14);
        }
      }
      local_1c0 = (undefined1 *)0x0;
      uVar10 = FUN_140ffa79a();
      lVar14 = FUN_140c47e50(lVar9,uVar10,&local_1c0);
      if (lVar14 != 0) {
        FUN_140ffb226(lVar14 + 0x80,param_1 + 0x33);
        *(longlong *)(lVar14 + 0x540) = param_1[0xcb];
        *(int *)(lVar14 + 0x548) = (int)param_1[0xcc];
        *(undefined1 *)(lVar14 + 0x1c) = *(undefined1 *)((longlong)param_1 + 0x87a);
      }
      uVar10 = FUN_140a48832();
      lVar14 = FUN_140c483dc(lVar9,uVar10,&DAT_14cb94d68,0);
      if (lVar14 != 0) {
        local_1c0 = (undefined1 *)0x0;
        uVar10 = FUN_140ffaec8();
        plVar12 = (longlong *)FUN_140c47e50(lVar14,uVar10,&local_1c0);
        if (plVar12 != (longlong *)0x0) {
          plVar16 = plVar12 + 0x19;
          bVar3 = *(byte *)(plVar12 + 0x1d);
          if (bVar3 == local_f0) {
            ppppuVar20 = local_110;
            if (0x18 < local_f8) {
              ppppuVar20 = (undefined8 ****)local_110[0];
            }
            if (0x18 < *(ushort *)(plVar12 + 0x1c)) {
              plVar16 = (longlong *)*plVar16;
            }
            uVar13 = (ulonglong)((uint)bVar3 * 0x120);
            pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
            if (pcVar6 == (code *)0x0) {
              memcpy(plVar16,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
            }
            else {
              (*pcVar6)(plVar16,ppppuVar20);
            }
          }
          else {
            pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
            if (pcVar6 != (code *)0x0) {
              plVar18 = plVar16;
              if (0x18 < *(ushort *)(plVar12 + 0x1c)) {
                plVar18 = (longlong *)*plVar16;
              }
              (*pcVar6)(plVar18);
            }
            if (0x18 < *(ushort *)(plVar12 + 0x1c)) {
              FUN_1400020a8(*plVar16);
            }
            uVar24 = (uint)local_f0;
            *(ushort *)(plVar12 + 0x1c) = local_f8;
            plVar18 = plVar16;
            ppppuVar20 = local_110;
            if (0x18 < local_f8) {
              local_280 = (ulonglong)local_f0;
              plVar18 = (longlong *)FUN_14001cc68(local_f8,0);
              *plVar16 = (longlong)plVar18;
              uVar24 = (uint)local_280;
              ppppuVar20 = (undefined8 ****)local_110[0];
            }
            pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
            if (pcVar6 == (code *)0x0) {
              memcpy(plVar18,ppppuVar20,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
            }
            else {
              (*pcVar6)(plVar18,ppppuVar20);
            }
            *(byte *)(plVar12 + 0x1d) = local_f0;
          }
          *(undefined1 *)(plVar12 + 0x1e) = local_e8;
          *(undefined1 *)(plVar12 + 0x10) = 0;
          *(undefined1 *)(plVar12 + 0x41) = 1;
          *(undefined1 *)(plVar12 + 0x40) = 1;
          plVar16 = param_1 + 0xd5;
          plVar18 = plVar12 + 0x29;
          bVar3 = *(byte *)(plVar12 + 0x2d);
          if (bVar3 == *(byte *)(param_1 + 0xd9)) {
            if (0x18 < *(ushort *)(param_1 + 0xd8)) {
              plVar16 = (longlong *)param_1[0xd5];
            }
            if (0x18 < *(ushort *)(plVar12 + 0x2c)) {
              plVar18 = (longlong *)*plVar18;
            }
            uVar13 = (ulonglong)((uint)bVar3 * 0x120);
            pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
            if (pcVar6 == (code *)0x0) {
              memcpy(plVar18,plVar16,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
            }
            else {
              (*pcVar6)(plVar18,plVar16);
            }
          }
          else {
            pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
            if (pcVar6 != (code *)0x0) {
              plVar19 = plVar18;
              if (0x18 < *(ushort *)(plVar12 + 0x2c)) {
                plVar19 = (longlong *)*plVar18;
              }
              (*pcVar6)(plVar19);
            }
            if (0x18 < *(ushort *)(plVar12 + 0x2c)) {
              FUN_1400020a8(*plVar18);
            }
            bVar3 = *(byte *)(param_1 + 0xd9);
            uVar24 = (uint)bVar3;
            uVar5 = *(ushort *)(param_1 + 0xd8);
            *(ushort *)(plVar12 + 0x2c) = uVar5;
            plVar19 = plVar18;
            if (0x18 < uVar5) {
              local_280 = (ulonglong)bVar3;
              plVar19 = (longlong *)FUN_14001cc68(uVar5,0);
              *plVar18 = (longlong)plVar19;
              plVar16 = (longlong *)*plVar16;
              uVar24 = (uint)local_280;
            }
            pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
            if (pcVar6 == (code *)0x0) {
              memcpy(plVar19,plVar16,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
            }
            else {
              (*pcVar6)(plVar19,plVar16);
            }
            *(char *)(plVar12 + 0x2d) = (char)param_1[0xd9];
          }
          *(char *)(plVar12 + 0x2e) = (char)param_1[0xda];
          *(undefined1 *)(plVar12 + 0x2f) = 1;
          (**(code **)(*plVar12 + 0x90))(plVar12);
        }
        local_1c0 = (undefined1 *)0x0;
        uVar10 = FUN_140ffa760();
        lVar15 = FUN_140c47e50(lVar14,uVar10,&local_1c0);
        if (lVar15 != 0) {
          FUN_14054d68c(lVar15 + 0x1e8,param_1 + 0x219);
          lVar2 = lVar15 + 0x1f0;
          FUN_1446f470e(local_1f0,L"BoundMinRange",1);
          local_1c0 = local_1f0;
          appplStack_1b8[0] = (longlong ***)(param_1 + 0xcd);
          FUN_140ffad64(lVar2,local_1c4,&local_1c0,0);
          FUN_1446f470e(local_1f0,L"BoundMaxRange",1);
          local_1c0 = local_1f0;
          appplStack_1b8[0] = (longlong ***)(param_1 + 0xd4);
          FUN_140ffad64(lVar2,local_1c4,&local_1c0,0);
          appplStack_1b8[0] = (longlong ***)(param_1 + 0xdb);
          local_1c0 = &DAT_14cb94da0;
          FUN_140ffa80e(lVar2,local_1f0,&local_1c0,0);
          appplStack_1b8[0] = (longlong ***)(param_1 + 0xe2);
          local_1c0 = &DAT_14cb94da8;
          FUN_140ffa80e(lVar2,local_1f0,&local_1c0,0);
          appplStack_1b8[0] = (longlong ***)(param_1 + 0xe9);
          local_1c0 = &DAT_14cb94db0;
          FUN_140ffa80e(lVar2,local_1f0,&local_1c0,0);
          local_1c0 = &DAT_14cb94db8;
          appplStack_1b8[0] = (longlong ***)&local_150;
          FUN_140ffa80e(lVar2,local_1f0,&local_1c0,0);
          *(undefined1 *)(lVar15 + 0x460) = 0;
          *(undefined4 *)(lVar15 + 0x19c) = 0;
          FUN_144955a78(lVar15 + 0x98,&local_e0);
          local_208 = 0;
          puStack_200 = (undefined *)0x0;
          local_1f8 = (longlong **)0x0;
          FUN_14111569e(lVar15,&local_1c0);
          puStack_200 = local_1c0;
          ppplVar7 = appplStack_1b8[0];
          local_1c0 = (undefined1 *)0x0;
          appplStack_1b8[0] = (longlong ***)0x0;
          if (local_1f8 != (longlong **)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_1f8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              lVar15 = (longlong)*local_1f8;
              local_1f8 = (longlong **)ppplVar7;
              (**(code **)(lVar15 + 0x10))();
              ppplVar7 = (longlong ***)local_1f8;
            }
            local_1f8 = (longlong **)ppplVar7;
            ppplVar7 = (longlong ***)local_1f8;
            if ((longlong ****)appplStack_1b8[0] != (longlong ****)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)appplStack_1b8[0] + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (*(code *)(*appplStack_1b8[0])[2])();
                ppplVar7 = (longlong ***)local_1f8;
              }
            }
          }
          local_1f8 = (longlong **)ppplVar7;
          FUN_141115702(&local_1c0,&local_208);
          FUN_1403719a4(&local_188,&local_1c0);
          uVar11 = local_278;
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_198 * 0x120));
          if (pcVar6 != (code *)0x0) {
            pppplVar22 = (longlong ****)appplStack_1b8[0];
            if (local_1a0 < 0x19) {
              pppplVar22 = appplStack_1b8;
            }
            (*pcVar6)(pppplVar22);
          }
          if (0x18 < local_1a0) {
            FUN_1400020a8(appplStack_1b8[0]);
          }
        }
        local_1c0 = (undefined1 *)0x0;
        uVar10 = FUN_140ffa726();
        lVar15 = FUN_140c47e50(lVar14,uVar10,&local_1c0);
        if (lVar15 != 0) {
          plVar12 = (longlong *)(lVar15 + 0x88);
          bVar3 = *(byte *)(lVar15 + 0xa8);
          if (bVar3 == local_f0) {
            ppppuVar20 = local_110;
            if (0x18 < local_f8) {
              ppppuVar20 = (undefined8 ****)local_110[0];
            }
            if (0x18 < *(ushort *)(lVar15 + 0xa0)) {
              plVar12 = (longlong *)*plVar12;
            }
            uVar13 = (ulonglong)((uint)bVar3 * 0x120);
            pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
            if (pcVar6 == (code *)0x0) {
              memcpy(plVar12,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
            }
            else {
              (*pcVar6)(plVar12,ppppuVar20);
            }
          }
          else {
            pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
            if (pcVar6 != (code *)0x0) {
              plVar16 = plVar12;
              if (0x18 < *(ushort *)(lVar15 + 0xa0)) {
                plVar16 = (longlong *)*plVar12;
              }
              (*pcVar6)(plVar16);
            }
            if (0x18 < *(ushort *)(lVar15 + 0xa0)) {
              FUN_1400020a8(*plVar12);
            }
            uVar24 = (uint)local_f0;
            *(ushort *)(lVar15 + 0xa0) = local_f8;
            plVar16 = plVar12;
            ppppuVar20 = local_110;
            if (0x18 < local_f8) {
              local_280 = (ulonglong)local_f0;
              plVar16 = (longlong *)FUN_14001cc68(local_f8,0);
              *plVar12 = (longlong)plVar16;
              uVar24 = (uint)local_280;
              ppppuVar20 = (undefined8 ****)local_110[0];
            }
            pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
            if (pcVar6 == (code *)0x0) {
              memcpy(plVar16,ppppuVar20,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
            }
            else {
              (*pcVar6)(plVar16,ppppuVar20);
            }
            *(byte *)(lVar15 + 0xa8) = local_f0;
          }
          *(undefined1 *)(lVar15 + 0xb0) = local_e8;
          plVar12 = (longlong *)(lVar15 + 0xf8);
          bVar3 = *(byte *)(lVar15 + 0x118);
          if (bVar3 == local_128) {
            ppppuVar20 = local_148;
            if (0x18 < local_130) {
              ppppuVar20 = (undefined8 ****)local_148[0];
            }
            if (0x18 < *(ushort *)(lVar15 + 0x110)) {
              plVar12 = (longlong *)*plVar12;
            }
            uVar13 = (ulonglong)((uint)bVar3 * 0x120);
            pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
            if (pcVar6 == (code *)0x0) {
              memcpy(plVar12,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
            }
            else {
              (*pcVar6)(plVar12,ppppuVar20);
            }
          }
          else {
            pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
            if (pcVar6 != (code *)0x0) {
              plVar16 = plVar12;
              if (0x18 < *(ushort *)(lVar15 + 0x110)) {
                plVar16 = (longlong *)*plVar12;
              }
              (*pcVar6)(plVar16);
            }
            if (0x18 < *(ushort *)(lVar15 + 0x110)) {
              FUN_1400020a8(*plVar12);
            }
            uVar24 = (uint)local_128;
            *(ushort *)(lVar15 + 0x110) = local_130;
            plVar16 = plVar12;
            ppppuVar20 = local_148;
            if (0x18 < local_130) {
              local_280 = (ulonglong)local_128;
              plVar16 = (longlong *)FUN_14001cc68(local_130,0);
              *plVar12 = (longlong)plVar16;
              uVar24 = (uint)local_280;
              ppppuVar20 = (undefined8 ****)local_148[0];
            }
            pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
            if (pcVar6 == (code *)0x0) {
              memcpy(plVar16,ppppuVar20,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
            }
            else {
              (*pcVar6)(plVar16,ppppuVar20);
            }
            *(byte *)(lVar15 + 0x118) = local_128;
          }
          *(undefined1 *)(lVar15 + 0x120) = local_120;
          puVar23 = (undefined8 *)(lVar15 + 0xc0);
          bVar3 = *(byte *)(lVar15 + 0xe0);
          if (bVar3 == local_160) {
            ppppuVar20 = local_180;
            if (0x18 < local_168) {
              ppppuVar20 = (undefined8 ****)local_180[0];
            }
            if (0x18 < *(ushort *)(lVar15 + 0xd8)) {
              puVar23 = (undefined8 *)*puVar23;
            }
            uVar13 = (ulonglong)((uint)bVar3 * 0x120);
            pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
            if (pcVar6 == (code *)0x0) {
              memcpy(puVar23,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
            }
            else {
              (*pcVar6)(puVar23,ppppuVar20);
            }
          }
          else {
            pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
            if (pcVar6 != (code *)0x0) {
              puVar17 = puVar23;
              if (0x18 < *(ushort *)(lVar15 + 0xd8)) {
                puVar17 = (undefined8 *)*puVar23;
              }
              (*pcVar6)(puVar17);
            }
            if (0x18 < *(ushort *)(lVar15 + 0xd8)) {
              FUN_1400020a8(*puVar23);
            }
            uVar24 = (uint)local_160;
            *(ushort *)(lVar15 + 0xd8) = local_168;
            ppppuVar20 = local_180;
            puVar17 = puVar23;
            if (0x18 < local_168) {
              local_280 = (ulonglong)local_160;
              puVar17 = (undefined8 *)FUN_14001cc68(local_168,0);
              *puVar23 = puVar17;
              uVar24 = (uint)local_280;
              ppppuVar20 = (undefined8 ****)local_180[0];
            }
            pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
            if (pcVar6 == (code *)0x0) {
              memcpy(puVar17,ppppuVar20,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
            }
            else {
              (*pcVar6)(puVar17,ppppuVar20);
            }
            *(byte *)(lVar15 + 0xe0) = local_160;
          }
          *(undefined1 *)(lVar15 + 0xe8) = local_158;
        }
        local_1c0 = (undefined1 *)0x0;
        uVar10 = FUN_140ffacf0();
        lVar14 = FUN_140c47e50(lVar14,uVar10,&local_1c0);
        if (lVar14 != 0) {
          lVar15 = param_1[0x110];
          if (*(longlong *)(lVar14 + 0x90) != lVar15) {
            *(undefined8 *)(lVar14 + 0xa0) = 0;
          }
          *(longlong *)(lVar14 + 0x90) = lVar15;
          if (*(longlong *)(lVar14 + 0x98) != param_1[0x111]) {
            *(undefined8 *)(lVar14 + 0xa0) = 0;
          }
          uVar10 = FUN_14477b664();
          uVar10 = FUN_14477b664(uVar10);
          *(undefined8 *)(lVar14 + 0x98) = uVar10;
          *(longlong *)(lVar14 + 0xa0) = param_1[0x112];
        }
      }
      uVar10 = FUN_140a48832();
      lVar14 = FUN_140c483dc(lVar9,uVar10,&DAT_14cb94d70,0);
      if (lVar14 != 0) {
        local_1c0 = (undefined1 *)0x0;
        uVar10 = FUN_140ffa760();
        lVar15 = FUN_140c47e50(lVar14,uVar10,&local_1c0);
        if (lVar15 != 0) {
          FUN_14054d68c(lVar15 + 0x1e8,param_1 + 0x219);
          lVar2 = lVar15 + 0x1f0;
          FUN_1446f470e(local_1f0,L"BoundMinRange",1);
          local_1c0 = local_1f0;
          appplStack_1b8[0] = (longlong ***)(param_1 + 0xcd);
          FUN_140ffad64(lVar2,local_1c4,&local_1c0,0);
          FUN_1446f470e(local_1f0,L"BoundMaxRange",1);
          local_1c0 = local_1f0;
          appplStack_1b8[0] = (longlong ***)(param_1 + 0xd4);
          FUN_140ffad64(lVar2,local_1c4,&local_1c0,0);
          appplStack_1b8[0] = (longlong ***)(param_1 + 0xdb);
          local_1c0 = &DAT_14cb94da0;
          FUN_140ffa80e(lVar2,local_1f0,&local_1c0,0);
          appplStack_1b8[0] = (longlong ***)(param_1 + 0xe2);
          local_1c0 = &DAT_14cb94da8;
          FUN_140ffa80e(lVar2,local_1f0,&local_1c0,0);
          appplStack_1b8[0] = (longlong ***)(param_1 + 0xe9);
          local_1c0 = &DAT_14cb94db0;
          FUN_140ffa80e(lVar2,local_1f0,&local_1c0,0);
          local_1c0 = &DAT_14cb94db8;
          appplStack_1b8[0] = (longlong ***)&local_150;
          FUN_140ffa80e(lVar2,local_1f0,&local_1c0,0);
          *(undefined1 *)(lVar15 + 0x460) = 0;
          *(undefined4 *)(lVar15 + 0x19c) = 0;
          FUN_144955a78(lVar15 + 0x98,&local_e0);
          local_228 = 0;
          puStack_220 = (undefined *)0x0;
          local_218 = (longlong **)0x0;
          FUN_14111569e(lVar15,&local_1c0);
          puStack_220 = local_1c0;
          ppplVar7 = appplStack_1b8[0];
          local_1c0 = (undefined1 *)0x0;
          appplStack_1b8[0] = (longlong ***)0x0;
          if (local_218 != (longlong **)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_218 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              lVar15 = (longlong)*local_218;
              local_218 = (longlong **)ppplVar7;
              (**(code **)(lVar15 + 0x10))();
              ppplVar7 = (longlong ***)local_218;
            }
            local_218 = (longlong **)ppplVar7;
            ppplVar7 = (longlong ***)local_218;
            if ((longlong ****)appplStack_1b8[0] != (longlong ****)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)appplStack_1b8[0] + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (*(code *)(*appplStack_1b8[0])[2])();
                ppplVar7 = (longlong ***)local_218;
              }
            }
          }
          local_218 = (longlong **)ppplVar7;
          FUN_141115702(&local_1c0,&local_228);
          FUN_1403719a4(&local_188,&local_1c0);
          uVar11 = local_278;
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_198 * 0x120));
          if (pcVar6 != (code *)0x0) {
            pppplVar22 = (longlong ****)appplStack_1b8[0];
            if (local_1a0 < 0x19) {
              pppplVar22 = appplStack_1b8;
            }
            (*pcVar6)(pppplVar22);
          }
          if (0x18 < local_1a0) {
            FUN_1400020a8(appplStack_1b8[0]);
          }
        }
        local_1c0 = (undefined1 *)0x0;
        uVar10 = FUN_140ffa726();
        lVar14 = FUN_140c47e50(lVar14,uVar10,&local_1c0);
        if (lVar14 != 0) {
          plVar12 = (longlong *)(lVar14 + 0x88);
          bVar3 = *(byte *)(lVar14 + 0xa8);
          if (bVar3 == local_f0) {
            ppppuVar20 = local_110;
            if (0x18 < local_f8) {
              ppppuVar20 = (undefined8 ****)local_110[0];
            }
            if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
              plVar12 = (longlong *)*plVar12;
            }
            uVar13 = (ulonglong)((uint)bVar3 * 0x120);
            pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
            if (pcVar6 == (code *)0x0) {
              memcpy(plVar12,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
            }
            else {
              (*pcVar6)(plVar12,ppppuVar20);
            }
          }
          else {
            pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
            if (pcVar6 != (code *)0x0) {
              plVar16 = plVar12;
              if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
                plVar16 = (longlong *)*plVar12;
              }
              (*pcVar6)(plVar16);
            }
            if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
              FUN_1400020a8(*plVar12);
            }
            uVar24 = (uint)local_f0;
            *(ushort *)(lVar14 + 0xa0) = local_f8;
            plVar16 = plVar12;
            ppppuVar20 = local_110;
            if (0x18 < local_f8) {
              local_280 = (ulonglong)local_f0;
              plVar16 = (longlong *)FUN_14001cc68(local_f8,0);
              *plVar12 = (longlong)plVar16;
              uVar24 = (uint)local_280;
              ppppuVar20 = (undefined8 ****)local_110[0];
            }
            pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
            if (pcVar6 == (code *)0x0) {
              memcpy(plVar16,ppppuVar20,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
            }
            else {
              (*pcVar6)(plVar16,ppppuVar20);
            }
            *(byte *)(lVar14 + 0xa8) = local_f0;
          }
          *(undefined1 *)(lVar14 + 0xb0) = local_e8;
          plVar12 = (longlong *)(lVar14 + 0xf8);
          bVar3 = *(byte *)(lVar14 + 0x118);
          if (bVar3 == local_128) {
            ppppuVar20 = local_148;
            if (0x18 < local_130) {
              ppppuVar20 = (undefined8 ****)local_148[0];
            }
            if (0x18 < *(ushort *)(lVar14 + 0x110)) {
              plVar12 = (longlong *)*plVar12;
            }
            uVar13 = (ulonglong)((uint)bVar3 * 0x120);
            pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
            if (pcVar6 == (code *)0x0) {
              memcpy(plVar12,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
            }
            else {
              (*pcVar6)(plVar12,ppppuVar20);
            }
          }
          else {
            pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
            if (pcVar6 != (code *)0x0) {
              plVar16 = plVar12;
              if (0x18 < *(ushort *)(lVar14 + 0x110)) {
                plVar16 = (longlong *)*plVar12;
              }
              (*pcVar6)(plVar16);
            }
            if (0x18 < *(ushort *)(lVar14 + 0x110)) {
              FUN_1400020a8(*plVar12);
            }
            uVar24 = (uint)local_128;
            *(ushort *)(lVar14 + 0x110) = local_130;
            plVar16 = plVar12;
            ppppuVar20 = local_148;
            if (0x18 < local_130) {
              local_280 = (ulonglong)local_128;
              plVar16 = (longlong *)FUN_14001cc68(local_130,0);
              *plVar12 = (longlong)plVar16;
              uVar24 = (uint)local_280;
              ppppuVar20 = (undefined8 ****)local_148[0];
            }
            pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
            if (pcVar6 == (code *)0x0) {
              memcpy(plVar16,ppppuVar20,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
            }
            else {
              (*pcVar6)(plVar16,ppppuVar20);
            }
            *(byte *)(lVar14 + 0x118) = local_128;
          }
          *(undefined1 *)(lVar14 + 0x120) = local_120;
          puVar23 = (undefined8 *)(lVar14 + 0xc0);
          bVar3 = *(byte *)(lVar14 + 0xe0);
          if (bVar3 == local_160) {
            ppppuVar20 = local_180;
            if (0x18 < local_168) {
              ppppuVar20 = (undefined8 ****)local_180[0];
            }
            if (0x18 < *(ushort *)(lVar14 + 0xd8)) {
              puVar23 = (undefined8 *)*puVar23;
            }
            uVar13 = (ulonglong)((uint)bVar3 * 0x120);
            pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
            if (pcVar6 == (code *)0x0) {
              memcpy(puVar23,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
            }
            else {
              (*pcVar6)(puVar23,ppppuVar20);
            }
          }
          else {
            pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
            if (pcVar6 != (code *)0x0) {
              puVar17 = puVar23;
              if (0x18 < *(ushort *)(lVar14 + 0xd8)) {
                puVar17 = (undefined8 *)*puVar23;
              }
              (*pcVar6)(puVar17);
            }
            if (0x18 < *(ushort *)(lVar14 + 0xd8)) {
              FUN_1400020a8(*puVar23);
            }
            uVar24 = (uint)local_160;
            *(ushort *)(lVar14 + 0xd8) = local_168;
            ppppuVar20 = local_180;
            puVar17 = puVar23;
            if (0x18 < local_168) {
              puVar17 = (undefined8 *)FUN_14001cc68(local_168,0);
              *puVar23 = puVar17;
              ppppuVar20 = (undefined8 ****)local_180[0];
            }
            pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
            if (pcVar6 == (code *)0x0) {
              memcpy(puVar17,ppppuVar20,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
            }
            else {
              (*pcVar6)(puVar17,ppppuVar20);
            }
            *(byte *)(lVar14 + 0xe0) = local_160;
          }
          *(undefined1 *)(lVar14 + 0xe8) = local_158;
        }
      }
      uVar10 = FUN_140a48832();
      lVar9 = FUN_140c483dc(lVar9,uVar10,&DAT_14cb94d48,0);
      if (lVar9 != 0) {
        local_1c0 = (undefined1 *)0x0;
        uVar10 = FUN_140ffa760();
        lVar14 = FUN_140c47e50(lVar9,uVar10,&local_1c0);
        if (lVar14 != 0) {
          FUN_14054d68c(lVar14 + 0x1e8,param_1 + 300);
          *(undefined1 *)(lVar14 + 0x460) = 0;
          *(undefined4 *)(lVar14 + 0x19c) = 0;
          FUN_144955a78(lVar14 + 0x98,&local_e0);
          lVar15 = lVar14 + 0x1f0;
          appplStack_1b8[0] = (longlong ***)(param_1 + 0xdb);
          local_1c0 = &DAT_14cb94da0;
          FUN_140ffa80e(lVar15,local_1f0,&local_1c0,0);
          appplStack_1b8[0] = (longlong ***)(param_1 + 0xe2);
          local_1c0 = &DAT_14cb94da8;
          FUN_140ffa80e(lVar15,local_1f0,&local_1c0,0);
          appplStack_1b8[0] = (longlong ***)(param_1 + 0xe9);
          local_1c0 = &DAT_14cb94db0;
          FUN_140ffa80e(lVar15,local_1f0,&local_1c0,0);
          local_1c0 = &DAT_14cb94db8;
          appplStack_1b8[0] = (longlong ***)&local_150;
          FUN_140ffa80e(lVar15,local_1f0,&local_1c0,0);
          local_248 = 0;
          puStack_240 = (undefined *)0x0;
          local_238 = (longlong **)0x0;
          FUN_14111569e(lVar14,&local_1c0);
          puStack_240 = local_1c0;
          ppplVar7 = appplStack_1b8[0];
          local_1c0 = (undefined1 *)0x0;
          appplStack_1b8[0] = (longlong ***)0x0;
          if (local_238 != (longlong **)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_238 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              lVar14 = (longlong)*local_238;
              local_238 = (longlong **)ppplVar7;
              (**(code **)(lVar14 + 0x10))();
              ppplVar7 = (longlong ***)local_238;
            }
            local_238 = (longlong **)ppplVar7;
            uVar11 = local_278;
            ppplVar7 = (longlong ***)local_238;
            if ((longlong ****)appplStack_1b8[0] != (longlong ****)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)appplStack_1b8[0] + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (*(code *)(*appplStack_1b8[0])[2])();
                ppplVar7 = (longlong ***)local_238;
              }
            }
          }
          local_238 = (longlong **)ppplVar7;
          FUN_141115702(&local_1c0,&local_248);
          FUN_1403719a4(&local_188,&local_1c0);
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_198 * 0x120));
          if (pcVar6 != (code *)0x0) {
            pppplVar22 = (longlong ****)appplStack_1b8[0];
            if (local_1a0 < 0x19) {
              pppplVar22 = appplStack_1b8;
            }
            (*pcVar6)(pppplVar22);
          }
          if (0x18 < local_1a0) {
            FUN_1400020a8(appplStack_1b8[0]);
          }
        }
        local_1c0 = (undefined1 *)0x0;
        uVar10 = FUN_140ffa726();
        lVar14 = FUN_140c47e50(lVar9,uVar10,&local_1c0);
        if (lVar14 != 0) {
          plVar12 = (longlong *)(lVar14 + 0x88);
          bVar3 = *(byte *)(lVar14 + 0xa8);
          if (bVar3 == local_f0) {
            ppppuVar20 = local_110;
            if (0x18 < local_f8) {
              ppppuVar20 = (undefined8 ****)local_110[0];
            }
            if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
              plVar12 = (longlong *)*plVar12;
            }
            uVar13 = (ulonglong)((uint)bVar3 * 0x120);
            pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
            if (pcVar6 == (code *)0x0) {
              memcpy(plVar12,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
            }
            else {
              (*pcVar6)(plVar12,ppppuVar20);
            }
          }
          else {
            pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
            if (pcVar6 != (code *)0x0) {
              plVar16 = plVar12;
              if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
                plVar16 = (longlong *)*plVar12;
              }
              (*pcVar6)(plVar16);
            }
            if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
              FUN_1400020a8(*plVar12);
            }
            uVar24 = (uint)local_f0;
            *(ushort *)(lVar14 + 0xa0) = local_f8;
            plVar16 = plVar12;
            ppppuVar20 = local_110;
            if (0x18 < local_f8) {
              local_278 = (ulonglong)local_f0;
              plVar16 = (longlong *)FUN_14001cc68(local_f8,0);
              *plVar12 = (longlong)plVar16;
              uVar24 = (uint)local_278;
              ppppuVar20 = (undefined8 ****)local_110[0];
            }
            pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
            if (pcVar6 == (code *)0x0) {
              memcpy(plVar16,ppppuVar20,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
            }
            else {
              (*pcVar6)(plVar16,ppppuVar20);
            }
            *(byte *)(lVar14 + 0xa8) = local_f0;
          }
          *(undefined1 *)(lVar14 + 0xb0) = local_e8;
          plVar12 = (longlong *)(lVar14 + 0xf8);
          bVar3 = *(byte *)(lVar14 + 0x118);
          if (bVar3 == local_128) {
            ppppuVar20 = local_148;
            if (0x18 < local_130) {
              ppppuVar20 = (undefined8 ****)local_148[0];
            }
            if (0x18 < *(ushort *)(lVar14 + 0x110)) {
              plVar12 = (longlong *)*plVar12;
            }
            uVar13 = (ulonglong)((uint)bVar3 * 0x120);
            pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
            if (pcVar6 == (code *)0x0) {
              memcpy(plVar12,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
            }
            else {
              (*pcVar6)(plVar12,ppppuVar20);
            }
          }
          else {
            pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
            if (pcVar6 != (code *)0x0) {
              plVar16 = plVar12;
              if (0x18 < *(ushort *)(lVar14 + 0x110)) {
                plVar16 = (longlong *)*plVar12;
              }
              (*pcVar6)(plVar16);
            }
            if (0x18 < *(ushort *)(lVar14 + 0x110)) {
              FUN_1400020a8(*plVar12);
            }
            uVar24 = (uint)local_128;
            *(ushort *)(lVar14 + 0x110) = local_130;
            plVar16 = plVar12;
            ppppuVar20 = local_148;
            if (0x18 < local_130) {
              local_278 = (ulonglong)local_128;
              plVar16 = (longlong *)FUN_14001cc68(local_130,0);
              *plVar12 = (longlong)plVar16;
              uVar24 = (uint)local_278;
              ppppuVar20 = (undefined8 ****)local_148[0];
            }
            pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
            if (pcVar6 == (code *)0x0) {
              memcpy(plVar16,ppppuVar20,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
            }
            else {
              (*pcVar6)(plVar16,ppppuVar20);
            }
            *(byte *)(lVar14 + 0x118) = local_128;
          }
          *(undefined1 *)(lVar14 + 0x120) = local_120;
          puVar23 = (undefined8 *)(lVar14 + 0xc0);
          bVar3 = *(byte *)(lVar14 + 0xe0);
          if (bVar3 == local_160) {
            ppppuVar20 = local_180;
            if (0x18 < local_168) {
              ppppuVar20 = (undefined8 ****)local_180[0];
            }
            if (0x18 < *(ushort *)(lVar14 + 0xd8)) {
              puVar23 = (undefined8 *)*puVar23;
            }
            uVar13 = (ulonglong)((uint)bVar3 * 0x120);
            pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
            if (pcVar6 == (code *)0x0) {
              memcpy(puVar23,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
            }
            else {
              (*pcVar6)(puVar23,ppppuVar20);
            }
          }
          else {
            pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
            if (pcVar6 != (code *)0x0) {
              puVar17 = puVar23;
              if (0x18 < *(ushort *)(lVar14 + 0xd8)) {
                puVar17 = (undefined8 *)*puVar23;
              }
              (*pcVar6)(puVar17);
            }
            if (0x18 < *(ushort *)(lVar14 + 0xd8)) {
              FUN_1400020a8(*puVar23);
            }
            uVar24 = (uint)local_160;
            *(ushort *)(lVar14 + 0xd8) = local_168;
            ppppuVar20 = local_180;
            puVar17 = puVar23;
            if (0x18 < local_168) {
              puVar17 = (undefined8 *)FUN_14001cc68(local_168,0);
              *puVar23 = puVar17;
              ppppuVar20 = (undefined8 ****)local_180[0];
            }
            pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
            if (pcVar6 == (code *)0x0) {
              memcpy(puVar17,ppppuVar20,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
            }
            else {
              (*pcVar6)(puVar17,ppppuVar20);
            }
            *(byte *)(lVar14 + 0xe0) = local_160;
          }
          *(undefined1 *)(lVar14 + 0xe8) = local_158;
        }
        local_1c0 = (undefined1 *)0x0;
        uVar10 = FUN_140c48368();
        lVar9 = FUN_140c47e50(lVar9,uVar10,&local_1c0);
        if (lVar9 != 0) {
          plVar12 = (longlong *)(lVar9 + 0x88);
          bVar3 = *(byte *)(lVar9 + 0xa8);
          if (bVar3 == local_f0) {
            ppppuVar20 = local_110;
            if (0x18 < local_f8) {
              ppppuVar20 = (undefined8 ****)local_110[0];
            }
            if (0x18 < *(ushort *)(lVar9 + 0xa0)) {
              plVar12 = (longlong *)*plVar12;
            }
            uVar13 = (ulonglong)((uint)bVar3 * 0x120);
            pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
            if (pcVar6 == (code *)0x0) {
              memcpy(plVar12,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
            }
            else {
              (*pcVar6)(plVar12,ppppuVar20);
            }
          }
          else {
            pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
            if (pcVar6 != (code *)0x0) {
              plVar16 = plVar12;
              if (0x18 < *(ushort *)(lVar9 + 0xa0)) {
                plVar16 = (longlong *)*plVar12;
              }
              (*pcVar6)(plVar16);
            }
            if (0x18 < *(ushort *)(lVar9 + 0xa0)) {
              FUN_1400020a8(*plVar12);
            }
            uVar24 = (uint)local_f0;
            *(ushort *)(lVar9 + 0xa0) = local_f8;
            plVar16 = plVar12;
            ppppuVar20 = local_110;
            if (0x18 < local_f8) {
              plVar16 = (longlong *)FUN_14001cc68(local_f8,0);
              *plVar12 = (longlong)plVar16;
              ppppuVar20 = (undefined8 ****)local_110[0];
            }
            pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
            if (pcVar6 == (code *)0x0) {
              memcpy(plVar16,ppppuVar20,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
            }
            else {
              (*pcVar6)(plVar16,ppppuVar20);
            }
            *(byte *)(lVar9 + 0xa8) = local_f0;
          }
          *(undefined1 *)(lVar9 + 0xb0) = local_e8;
          *(undefined1 *)(lVar9 + 0xb8) = 0;
          plVar12 = param_1 + 0x126;
          puVar23 = (undefined8 *)(lVar9 + 200);
          bVar3 = *(byte *)(lVar9 + 0xe8);
          if (bVar3 == *(byte *)(param_1 + 0x12a)) {
            if (0x18 < *(ushort *)(param_1 + 0x129)) {
              plVar12 = (longlong *)param_1[0x126];
            }
            if (0x18 < *(ushort *)(lVar9 + 0xe0)) {
              puVar23 = (undefined8 *)*puVar23;
            }
            uVar13 = (ulonglong)((uint)bVar3 * 0x120);
            pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar13);
            if (pcVar6 == (code *)0x0) {
              memcpy(puVar23,plVar12,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
            }
            else {
              (*pcVar6)(puVar23,plVar12);
            }
          }
          else {
            pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
            if (pcVar6 != (code *)0x0) {
              puVar17 = puVar23;
              if (0x18 < *(ushort *)(lVar9 + 0xe0)) {
                puVar17 = (undefined8 *)*puVar23;
              }
              (*pcVar6)(puVar17);
            }
            if (0x18 < *(ushort *)(lVar9 + 0xe0)) {
              FUN_1400020a8(*puVar23);
            }
            bVar3 = *(byte *)(param_1 + 0x12a);
            uVar5 = *(ushort *)(param_1 + 0x129);
            *(ushort *)(lVar9 + 0xe0) = uVar5;
            puVar17 = puVar23;
            if (0x18 < uVar5) {
              puVar17 = (undefined8 *)FUN_14001cc68(uVar5,0);
              *puVar23 = puVar17;
              plVar12 = (longlong *)*plVar12;
            }
            pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar3 * 0x120));
            if (pcVar6 == (code *)0x0) {
              memcpy(puVar17,plVar12,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar3 * 0x120))
                    );
            }
            else {
              (*pcVar6)(puVar17,plVar12);
            }
            *(char *)(lVar9 + 0xe8) = (char)param_1[0x12a];
          }
          *(char *)(lVar9 + 0xf0) = (char)param_1[299];
        }
      }
    }
    uVar10 = FUN_140a48832();
    lVar9 = FUN_140c483dc(uVar11,uVar10,&DAT_14cb94d40,0);
    if (lVar9 != 0) {
      *(undefined1 *)(lVar9 + 0x73) = 1;
      local_1c0 = (undefined1 *)0x0;
      uVar10 = FUN_140ffa7d4();
      plVar12 = (longlong *)FUN_140c47e50(lVar9,uVar10,&local_1c0);
      if (plVar12 != (longlong *)0x0) {
        *(undefined1 *)(plVar12 + 0x3f) = 1;
        local_1c0 = (undefined1 *)0x0;
        local_1a0 = 4;
        appplStack_1b8[0] = (longlong ***)CONCAT44(appplStack_1b8[0]._4_4_,0x40000000);
        local_198 = 3;
        local_190 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
        FUN_1403719a4(plVar12 + 0x38,&local_1c0);
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_198 * 0x120));
        if (pcVar6 != (code *)0x0) {
          pppplVar22 = (longlong ****)appplStack_1b8[0];
          if (local_1a0 < 0x19) {
            pppplVar22 = appplStack_1b8;
          }
          (*pcVar6)(pppplVar22);
        }
        if (0x18 < local_1a0) {
          FUN_1400020a8(appplStack_1b8[0]);
        }
        *(undefined1 *)(plVar12 + 0x47) = 1;
        local_1c0 = (undefined1 *)0x0;
        local_1a0 = 4;
        appplStack_1b8[0] = (longlong ***)CONCAT44(appplStack_1b8[0]._4_4_,0x40000000);
        local_198 = 3;
        local_190 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
        FUN_1403719a4(plVar12 + 0x40,&local_1c0);
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_198 * 0x120));
        if (pcVar6 != (code *)0x0) {
          pppplVar22 = (longlong ****)appplStack_1b8[0];
          if (local_1a0 < 0x19) {
            pppplVar22 = appplStack_1b8;
          }
          (*pcVar6)(pppplVar22);
        }
        if (0x18 < local_1a0) {
          FUN_1400020a8(appplStack_1b8[0]);
        }
        (**(code **)(*plVar12 + 0x90))(plVar12);
      }
      local_1c0 = (undefined1 *)0x0;
      uVar10 = FUN_140c48368();
      lVar14 = FUN_140c47e50(lVar9,uVar10,&local_1c0);
      if (lVar14 != 0) {
        plVar12 = (longlong *)(lVar14 + 0x88);
        bVar3 = *(byte *)(lVar14 + 0xa8);
        if (bVar3 == local_f0) {
          ppppuVar20 = local_110;
          if (0x18 < local_f8) {
            ppppuVar20 = (undefined8 ****)local_110[0];
          }
          if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
            plVar12 = (longlong *)*plVar12;
          }
          uVar11 = (ulonglong)((uint)bVar3 * 0x120);
          pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar11);
          if (pcVar6 == (code *)0x0) {
            memcpy(plVar12,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
          }
          else {
            (*pcVar6)(plVar12,ppppuVar20);
          }
        }
        else {
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar6 != (code *)0x0) {
            plVar16 = plVar12;
            if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
              plVar16 = (longlong *)*plVar12;
            }
            (*pcVar6)(plVar16);
          }
          if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
            FUN_1400020a8(*plVar12);
          }
          uVar24 = (uint)local_f0;
          *(ushort *)(lVar14 + 0xa0) = local_f8;
          plVar16 = plVar12;
          ppppuVar20 = local_110;
          if (0x18 < local_f8) {
            plVar16 = (longlong *)FUN_14001cc68(local_f8,0);
            *plVar12 = (longlong)plVar16;
            ppppuVar20 = (undefined8 ****)local_110[0];
          }
          pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
          if (pcVar6 == (code *)0x0) {
            memcpy(plVar16,ppppuVar20,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
          }
          else {
            (*pcVar6)(plVar16,ppppuVar20);
          }
          *(byte *)(lVar14 + 0xa8) = local_f0;
        }
        *(undefined1 *)(lVar14 + 0xb0) = local_e8;
        *(undefined1 *)(lVar14 + 0xb8) = 1;
        local_1c0 = (undefined1 *)0x0;
        local_1a0 = 4;
        appplStack_1b8[0] = (longlong ***)CONCAT44(appplStack_1b8[0]._4_4_,0x3f000000);
        local_198 = 3;
        local_190 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
        FUN_1403719a4(lVar14 + 0xc0,&local_1c0);
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_198 * 0x120));
        if (pcVar6 != (code *)0x0) {
          pppplVar22 = (longlong ****)appplStack_1b8[0];
          if (local_1a0 < 0x19) {
            pppplVar22 = appplStack_1b8;
          }
          (*pcVar6)(pppplVar22);
        }
        if (0x18 < local_1a0) {
          FUN_1400020a8(appplStack_1b8[0]);
        }
      }
      local_1c0 = (undefined1 *)0x0;
      uVar10 = FUN_140c4800c();
      lVar14 = FUN_140c47e50(lVar9,uVar10,&local_1c0);
      if (lVar14 != 0) {
        puVar23 = (undefined8 *)(lVar14 + 0x88);
        bVar3 = *(byte *)(lVar14 + 0xa8);
        if (bVar3 == local_f0) {
          ppppuVar20 = local_110;
          if (0x18 < local_f8) {
            ppppuVar20 = (undefined8 ****)local_110[0];
          }
          if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
            puVar23 = (undefined8 *)*puVar23;
          }
          uVar11 = (ulonglong)((uint)bVar3 * 0x120);
          pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar11);
          if (pcVar6 == (code *)0x0) {
            memcpy(puVar23,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
          }
          else {
            (*pcVar6)(puVar23,ppppuVar20);
          }
        }
        else {
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar6 != (code *)0x0) {
            puVar17 = puVar23;
            if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
              puVar17 = (undefined8 *)*puVar23;
            }
            (*pcVar6)(puVar17);
          }
          if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
            FUN_1400020a8(*puVar23);
          }
          uVar24 = (uint)local_f0;
          *(ushort *)(lVar14 + 0xa0) = local_f8;
          puVar17 = puVar23;
          ppppuVar20 = local_110;
          if (0x18 < local_f8) {
            puVar17 = (undefined8 *)FUN_14001cc68(local_f8,0);
            *puVar23 = puVar17;
            ppppuVar20 = (undefined8 ****)local_110[0];
          }
          pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
          if (pcVar6 == (code *)0x0) {
            memcpy(puVar17,ppppuVar20,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
          }
          else {
            (*pcVar6)(puVar17,ppppuVar20);
          }
          *(byte *)(lVar14 + 0xa8) = local_f0;
        }
        *(undefined1 *)(lVar14 + 0xb0) = local_e8;
        *(undefined1 *)(lVar14 + 0x261) = 1;
        if (*(char *)(lVar14 + 0xb8) != (char)param_1[0x10f]) {
          *(char *)(lVar14 + 0xb8) = (char)param_1[0x10f];
          FUN_1403a3fe6(lVar14);
        }
      }
      local_1c0 = (undefined1 *)0x0;
      uVar10 = FUN_140ffa79a();
      lVar14 = FUN_140c47e50(lVar9,uVar10,&local_1c0);
      if (lVar14 != 0) {
        FUN_140ffb226(lVar14 + 0x80,param_1 + 0x33);
        *(longlong *)(lVar14 + 0x540) = param_1[0xcb];
        *(int *)(lVar14 + 0x548) = (int)param_1[0xcc];
      }
      local_1c0 = (undefined1 *)0x0;
      uVar10 = FUN_140ffa760();
      lVar14 = FUN_140c47e50(lVar9,uVar10,&local_1c0);
      if (lVar14 != 0) {
        FUN_14054d68c(lVar14 + 0x1e8,param_1 + 0x17b);
        *(undefined1 *)(lVar14 + 0x460) = 0;
        *(undefined4 *)(lVar14 + 0x19c) = 0;
        FUN_144955a78(lVar14 + 0x98,&local_e0);
        lVar15 = lVar14 + 0x1f0;
        appplStack_1b8[0] = (longlong ***)(param_1 + 0xdb);
        local_1c0 = &DAT_14cb94da0;
        FUN_140ffa80e(lVar15,local_1f0,&local_1c0,0);
        appplStack_1b8[0] = (longlong ***)(param_1 + 0xe2);
        local_1c0 = &DAT_14cb94da8;
        FUN_140ffa80e(lVar15,local_1f0,&local_1c0,0);
        appplStack_1b8[0] = (longlong ***)(param_1 + 0xe9);
        local_1c0 = &DAT_14cb94db0;
        FUN_140ffa80e(lVar15,local_1f0,&local_1c0,0);
        local_1c0 = &DAT_14cb94db8;
        appplStack_1b8[0] = (longlong ***)&local_150;
        FUN_140ffa80e(lVar15,local_1f0,&local_1c0,0);
        local_268 = 0;
        puStack_260 = (undefined *)0x0;
        local_258 = (longlong **)0x0;
        FUN_14111569e(lVar14,&local_1c0);
        puStack_260 = local_1c0;
        ppplVar7 = appplStack_1b8[0];
        local_1c0 = (undefined1 *)0x0;
        appplStack_1b8[0] = (longlong ***)0x0;
        if (local_258 != (longlong **)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_258 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            lVar14 = (longlong)*local_258;
            local_258 = (longlong **)ppplVar7;
            (**(code **)(lVar14 + 0x10))();
            ppplVar7 = (longlong ***)local_258;
          }
          local_258 = (longlong **)ppplVar7;
          ppplVar7 = (longlong ***)local_258;
          if ((longlong ****)appplStack_1b8[0] != (longlong ****)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)appplStack_1b8[0] + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*appplStack_1b8[0])[2])();
              ppplVar7 = (longlong ***)local_258;
            }
          }
        }
        local_258 = (longlong **)ppplVar7;
        FUN_141115702(&local_1c0,&local_268);
        FUN_1403719a4(&local_188,&local_1c0);
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_198 * 0x120));
        if (pcVar6 != (code *)0x0) {
          pppplVar22 = (longlong ****)appplStack_1b8[0];
          if (local_1a0 < 0x19) {
            pppplVar22 = appplStack_1b8;
          }
          (*pcVar6)(pppplVar22);
        }
        if (0x18 < local_1a0) {
          FUN_1400020a8(appplStack_1b8[0]);
        }
      }
      local_1c0 = (undefined1 *)0x0;
      uVar10 = FUN_140ffa726();
      lVar14 = FUN_140c47e50(lVar9,uVar10,&local_1c0);
      if (lVar14 != 0) {
        plVar12 = (longlong *)(lVar14 + 0x88);
        bVar3 = *(byte *)(lVar14 + 0xa8);
        if (bVar3 == local_f0) {
          ppppuVar20 = local_110;
          if (0x18 < local_f8) {
            ppppuVar20 = (undefined8 ****)local_110[0];
          }
          if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
            plVar12 = (longlong *)*plVar12;
          }
          uVar11 = (ulonglong)((uint)bVar3 * 0x120);
          pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar11);
          if (pcVar6 == (code *)0x0) {
            memcpy(plVar12,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
          }
          else {
            (*pcVar6)(plVar12,ppppuVar20);
          }
        }
        else {
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar6 != (code *)0x0) {
            plVar16 = plVar12;
            if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
              plVar16 = (longlong *)*plVar12;
            }
            (*pcVar6)(plVar16);
          }
          if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
            FUN_1400020a8(*plVar12);
          }
          uVar24 = (uint)local_f0;
          *(ushort *)(lVar14 + 0xa0) = local_f8;
          ppppuVar20 = local_110;
          plVar16 = plVar12;
          if (0x18 < local_f8) {
            plVar16 = (longlong *)FUN_14001cc68(local_f8,0);
            *plVar12 = (longlong)plVar16;
            ppppuVar20 = (undefined8 ****)local_110[0];
          }
          pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
          if (pcVar6 == (code *)0x0) {
            memcpy(plVar16,ppppuVar20,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
          }
          else {
            (*pcVar6)(plVar16,ppppuVar20);
          }
          *(byte *)(lVar14 + 0xa8) = local_f0;
        }
        *(undefined1 *)(lVar14 + 0xb0) = local_e8;
        plVar12 = (longlong *)(lVar14 + 0xf8);
        bVar3 = *(byte *)(lVar14 + 0x118);
        if (bVar3 == local_128) {
          ppppuVar20 = local_148;
          if (0x18 < local_130) {
            ppppuVar20 = (undefined8 ****)local_148[0];
          }
          if (0x18 < *(ushort *)(lVar14 + 0x110)) {
            plVar12 = (longlong *)*plVar12;
          }
          uVar11 = (ulonglong)((uint)bVar3 * 0x120);
          pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar11);
          if (pcVar6 == (code *)0x0) {
            memcpy(plVar12,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
          }
          else {
            (*pcVar6)(plVar12,ppppuVar20);
          }
        }
        else {
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar6 != (code *)0x0) {
            plVar16 = plVar12;
            if (0x18 < *(ushort *)(lVar14 + 0x110)) {
              plVar16 = (longlong *)*plVar12;
            }
            (*pcVar6)(plVar16);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x110)) {
            FUN_1400020a8(*plVar12);
          }
          uVar24 = (uint)local_128;
          *(ushort *)(lVar14 + 0x110) = local_130;
          ppppuVar20 = local_148;
          plVar16 = plVar12;
          if (0x18 < local_130) {
            plVar16 = (longlong *)FUN_14001cc68(local_130,0);
            *plVar12 = (longlong)plVar16;
            ppppuVar20 = (undefined8 ****)local_148[0];
          }
          pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
          if (pcVar6 == (code *)0x0) {
            memcpy(plVar16,ppppuVar20,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
          }
          else {
            (*pcVar6)(plVar16,ppppuVar20);
          }
          *(byte *)(lVar14 + 0x118) = local_128;
        }
        *(undefined1 *)(lVar14 + 0x120) = local_120;
        puVar23 = (undefined8 *)(lVar14 + 0xc0);
        bVar3 = *(byte *)(lVar14 + 0xe0);
        if (bVar3 == local_160) {
          ppppuVar20 = local_180;
          if (0x18 < local_168) {
            ppppuVar20 = (undefined8 ****)local_180[0];
          }
          if (0x18 < *(ushort *)(lVar14 + 0xd8)) {
            puVar23 = (undefined8 *)*puVar23;
          }
          uVar11 = (ulonglong)((uint)bVar3 * 0x120);
          pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar11);
          if (pcVar6 == (code *)0x0) {
            memcpy(puVar23,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
          }
          else {
            (*pcVar6)(puVar23,ppppuVar20);
          }
        }
        else {
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar6 != (code *)0x0) {
            puVar17 = puVar23;
            if (0x18 < *(ushort *)(lVar14 + 0xd8)) {
              puVar17 = (undefined8 *)*puVar23;
            }
            (*pcVar6)(puVar17);
          }
          if (0x18 < *(ushort *)(lVar14 + 0xd8)) {
            FUN_1400020a8(*puVar23);
          }
          uVar24 = (uint)local_160;
          *(ushort *)(lVar14 + 0xd8) = local_168;
          puVar17 = puVar23;
          ppppuVar20 = local_180;
          if (0x18 < local_168) {
            puVar17 = (undefined8 *)FUN_14001cc68(local_168,0);
            *puVar23 = puVar17;
            ppppuVar20 = (undefined8 ****)local_180[0];
          }
          pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
          if (pcVar6 == (code *)0x0) {
            memcpy(puVar17,ppppuVar20,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
          }
          else {
            (*pcVar6)(puVar17,ppppuVar20);
          }
          *(byte *)(lVar14 + 0xe0) = local_160;
        }
        *(undefined1 *)(lVar14 + 0xe8) = local_158;
      }
      local_1c0 = (undefined1 *)0x0;
      uVar10 = FUN_140ffacf0();
      lVar9 = FUN_140c47e50(lVar9,uVar10,&local_1c0);
      if (lVar9 != 0) {
        lVar14 = param_1[0x113];
        if (*(longlong *)(lVar9 + 0x90) != lVar14) {
          *(undefined8 *)(lVar9 + 0xa0) = 0;
        }
        *(longlong *)(lVar9 + 0x90) = lVar14;
        if (*(longlong *)(lVar9 + 0x98) != param_1[0x114]) {
          *(undefined8 *)(lVar9 + 0xa0) = 0;
        }
        uVar10 = FUN_14477b664();
        uVar10 = FUN_14477b664(uVar10);
        *(undefined8 *)(lVar9 + 0x98) = uVar10;
        *(longlong *)(lVar9 + 0xa0) = param_1[0x115];
      }
    }
  }
  uVar10 = FUN_140ffb1ec();
  lVar9 = FUN_140c483dc(local_270,uVar10,&DAT_14cb94d78,0);
  if (lVar9 == 0) goto LAB_140ff7d44;
  plVar12 = (longlong *)(lVar9 + 0x1a0);
  bVar3 = *(byte *)(lVar9 + 0x1c0);
  if (bVar3 == local_f0) {
    ppppuVar20 = local_110;
    if (0x18 < local_f8) {
      ppppuVar20 = (undefined8 ****)local_110[0];
    }
    if (0x18 < *(ushort *)(lVar9 + 0x1b8)) {
      plVar12 = (longlong *)*plVar12;
    }
    uVar11 = (ulonglong)((uint)bVar3 * 0x120);
    pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar11);
    if (pcVar6 == (code *)0x0) {
      memcpy(plVar12,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
    }
    else {
      (*pcVar6)(plVar12);
    }
  }
  else {
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
    if (pcVar6 != (code *)0x0) {
      plVar16 = plVar12;
      if (0x18 < *(ushort *)(lVar9 + 0x1b8)) {
        plVar16 = (longlong *)*plVar12;
      }
      (*pcVar6)(plVar16);
    }
    if (0x18 < *(ushort *)(lVar9 + 0x1b8)) {
      FUN_1400020a8(*plVar12);
    }
    uVar24 = (uint)local_f0;
    *(ushort *)(lVar9 + 0x1b8) = local_f8;
    ppppuVar20 = local_110;
    if (0x18 < local_f8) {
      plVar16 = (longlong *)FUN_14001cc68(local_f8,0);
      *plVar12 = (longlong)plVar16;
      ppppuVar20 = (undefined8 ****)local_110[0];
      plVar12 = plVar16;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
    if (pcVar6 == (code *)0x0) {
      memcpy(plVar12,ppppuVar20,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
    }
    else {
      (*pcVar6)(plVar12);
    }
    *(byte *)(lVar9 + 0x1c0) = local_f0;
  }
  *(undefined1 *)(lVar9 + 0x1c8) = local_e8;
  *(undefined1 *)(lVar9 + 0x211) = 1;
  FUN_140ffb226(lVar9 + 0x218,param_1 + 0x33);
  *(undefined4 *)(lVar9 + 0x1d0) = 0;
  *(int *)(lVar9 + 0x6e0) = (int)param_1[0xcc];
  *(longlong *)(lVar9 + 0x6d8) = param_1[0xcb];
  cVar4 = (char)param_1[0x10f];
  if (cVar4 == '\x04') {
    *(undefined4 *)(lVar9 + 0x1d0) = 0x1010101;
  }
  else if (cVar4 == '\x03') {
    *(undefined2 *)(lVar9 + 0x1d1) = 0x101;
    *(undefined1 *)(lVar9 + 0x1d3) = 1;
  }
  else {
    if (cVar4 == '\x02') {
      *(undefined1 *)(lVar9 + 0x1d0) = 1;
    }
    else if (cVar4 != '\x01') goto LAB_140ff7af6;
    *(undefined2 *)(lVar9 + 0x1d2) = 0x101;
  }
LAB_140ff7af6:
  local_1c0 = (undefined1 *)0x0;
  uVar10 = FUN_140c48368();
  lVar14 = FUN_140c47e50(lVar9,uVar10,&local_1c0);
  if (lVar14 != 0) {
    plVar12 = (longlong *)(lVar14 + 0x88);
    bVar3 = *(byte *)(lVar14 + 0xa8);
    if (bVar3 == local_f0) {
      ppppuVar20 = local_110;
      if (0x18 < local_f8) {
        ppppuVar20 = (undefined8 ****)local_110[0];
      }
      if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
        plVar12 = (longlong *)*plVar12;
      }
      uVar11 = (ulonglong)((uint)bVar3 * 0x120);
      pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar11);
      if (pcVar6 == (code *)0x0) {
        memcpy(plVar12,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
      }
      else {
        (*pcVar6)(plVar12);
      }
    }
    else {
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
      if (pcVar6 != (code *)0x0) {
        plVar16 = plVar12;
        if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
          plVar16 = (longlong *)*plVar12;
        }
        (*pcVar6)(plVar16);
      }
      if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
        FUN_1400020a8(*plVar12);
      }
      uVar24 = (uint)local_f0;
      *(ushort *)(lVar14 + 0xa0) = local_f8;
      ppppuVar20 = local_110;
      if (0x18 < local_f8) {
        plVar16 = (longlong *)FUN_14001cc68(local_f8,0);
        *plVar12 = (longlong)plVar16;
        ppppuVar20 = (undefined8 ****)local_110[0];
        plVar12 = plVar16;
      }
      pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
      if (pcVar6 == (code *)0x0) {
        memcpy(plVar12,ppppuVar20,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
      }
      else {
        (*pcVar6)(plVar12);
      }
      *(byte *)(lVar14 + 0xa8) = local_f0;
    }
    *(undefined1 *)(lVar14 + 0xb0) = local_e8;
    *(undefined1 *)(lVar14 + 0xb8) = 0;
    plVar12 = param_1 + 0x126;
    puVar23 = (undefined8 *)(lVar14 + 200);
    bVar3 = *(byte *)(lVar14 + 0xe8);
    if (bVar3 == *(byte *)(param_1 + 0x12a)) {
      if (0x18 < *(ushort *)(param_1 + 0x129)) {
        plVar12 = (longlong *)param_1[0x126];
      }
      if (0x18 < *(ushort *)(lVar14 + 0xe0)) {
        puVar23 = (undefined8 *)*puVar23;
      }
      uVar11 = (ulonglong)((uint)bVar3 * 0x120);
      pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar11);
      if (pcVar6 == (code *)0x0) {
        memcpy(puVar23,plVar12,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
      }
      else {
        (*pcVar6)(puVar23,plVar12);
      }
    }
    else {
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
      if (pcVar6 != (code *)0x0) {
        puVar17 = puVar23;
        if (0x18 < *(ushort *)(lVar14 + 0xe0)) {
          puVar17 = (undefined8 *)*puVar23;
        }
        (*pcVar6)(puVar17);
      }
      if (0x18 < *(ushort *)(lVar14 + 0xe0)) {
        FUN_1400020a8(*puVar23);
      }
      bVar3 = *(byte *)(param_1 + 0x12a);
      uVar5 = *(ushort *)(param_1 + 0x129);
      *(ushort *)(lVar14 + 0xe0) = uVar5;
      puVar17 = puVar23;
      if (0x18 < uVar5) {
        puVar17 = (undefined8 *)FUN_14001cc68(uVar5,0);
        *puVar23 = puVar17;
        plVar12 = (longlong *)*plVar12;
      }
      pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar3 * 0x120));
      if (pcVar6 == (code *)0x0) {
        memcpy(puVar17,plVar12,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar3 * 0x120)));
      }
      else {
        (*pcVar6)(puVar17,plVar12);
      }
      *(char *)(lVar14 + 0xe8) = (char)param_1[0x12a];
    }
    *(char *)(lVar14 + 0xf0) = (char)param_1[299];
  }
  local_1c0 = (undefined1 *)0x0;
  uVar10 = FUN_140ffa726();
  lVar9 = FUN_140c47e50(lVar9,uVar10,&local_1c0);
  if (lVar9 != 0) {
    *(undefined1 *)(lVar9 + 0x78) = 0;
    *(undefined1 *)(lVar9 + 0x7b) = 0;
    plVar12 = (longlong *)(lVar9 + 0x88);
    bVar3 = *(byte *)(lVar9 + 0xa8);
    if (bVar3 == local_f0) {
      ppppuVar20 = local_110;
      if (0x18 < local_f8) {
        ppppuVar20 = (undefined8 ****)local_110[0];
      }
      if (0x18 < *(ushort *)(lVar9 + 0xa0)) {
        plVar12 = (longlong *)*plVar12;
      }
      uVar11 = (ulonglong)((uint)bVar3 * 0x120);
      pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar11);
      if (pcVar6 == (code *)0x0) {
        memcpy(plVar12,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
      }
      else {
        (*pcVar6)(plVar12,ppppuVar20);
      }
    }
    else {
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
      if (pcVar6 != (code *)0x0) {
        plVar16 = plVar12;
        if (0x18 < *(ushort *)(lVar9 + 0xa0)) {
          plVar16 = (longlong *)*plVar12;
        }
        (*pcVar6)(plVar16);
      }
      if (0x18 < *(ushort *)(lVar9 + 0xa0)) {
        FUN_1400020a8(*plVar12);
      }
      uVar24 = (uint)local_f0;
      *(ushort *)(lVar9 + 0xa0) = local_f8;
      plVar16 = plVar12;
      ppppuVar20 = local_110;
      if (0x18 < local_f8) {
        plVar16 = (longlong *)FUN_14001cc68(local_f8,0);
        *plVar12 = (longlong)plVar16;
        ppppuVar20 = (undefined8 ****)local_110[0];
      }
      pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
      if (pcVar6 == (code *)0x0) {
        memcpy(plVar16,ppppuVar20,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
      }
      else {
        (*pcVar6)(plVar16,ppppuVar20);
      }
      *(byte *)(lVar9 + 0xa8) = local_f0;
    }
    *(undefined1 *)(lVar9 + 0xb0) = local_e8;
    puVar23 = (undefined8 *)(lVar9 + 0xf8);
    bVar3 = *(byte *)(lVar9 + 0x118);
    if (bVar3 == local_128) {
      ppppuVar20 = local_148;
      if (0x18 < local_130) {
        ppppuVar20 = (undefined8 ****)local_148[0];
      }
      if (0x18 < *(ushort *)(lVar9 + 0x110)) {
        puVar23 = (undefined8 *)*puVar23;
      }
      uVar11 = (ulonglong)((uint)bVar3 * 0x120);
      pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar11);
      if (pcVar6 == (code *)0x0) {
        memcpy(puVar23,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
      }
      else {
        (*pcVar6)(puVar23,ppppuVar20);
      }
    }
    else {
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
      if (pcVar6 != (code *)0x0) {
        puVar17 = puVar23;
        if (0x18 < *(ushort *)(lVar9 + 0x110)) {
          puVar17 = (undefined8 *)*puVar23;
        }
        (*pcVar6)(puVar17);
      }
      if (0x18 < *(ushort *)(lVar9 + 0x110)) {
        FUN_1400020a8(*puVar23);
      }
      uVar24 = (uint)local_128;
      *(ushort *)(lVar9 + 0x110) = local_130;
      puVar17 = puVar23;
      ppppuVar20 = local_148;
      if (0x18 < local_130) {
        puVar17 = (undefined8 *)FUN_14001cc68(local_130,0);
        *puVar23 = puVar17;
        ppppuVar20 = (undefined8 ****)local_148[0];
      }
      pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar24 * 0x120));
      if (pcVar6 == (code *)0x0) {
        memcpy(puVar17,ppppuVar20,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar24 * 0x120)));
      }
      else {
        (*pcVar6)(puVar17,ppppuVar20);
      }
      *(byte *)(lVar9 + 0x118) = local_128;
    }
    *(undefined1 *)(lVar9 + 0x120) = local_120;
  }
LAB_140ff7d44:
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_160 * 0x120));
  if (pcVar6 != (code *)0x0) {
    ppppuVar20 = (undefined8 ****)local_180[0];
    if (local_168 < 0x19) {
      ppppuVar20 = local_180;
    }
    (*pcVar6)(ppppuVar20);
  }
  if (0x18 < local_168) {
    FUN_1400020a8(local_180[0]);
  }
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_128 * 0x120));
  if (pcVar6 != (code *)0x0) {
    ppppuVar20 = (undefined8 ****)local_148[0];
    if (local_130 < 0x19) {
      ppppuVar20 = local_148;
    }
    (*pcVar6)(ppppuVar20);
  }
  if (0x18 < local_130) {
    FUN_1400020a8(local_148[0]);
  }
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f0 * 0x120));
  if (pcVar6 != (code *)0x0) {
    ppppuVar20 = (undefined8 ****)local_110[0];
    if (local_f8 < 0x19) {
      ppppuVar20 = local_110;
    }
    (*pcVar6)(ppppuVar20);
  }
  if (0x18 < local_f8) {
    FUN_1400020a8(local_110[0]);
  }
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (local_90 < 0x19) {
      puVar21 = &local_a8;
    }
    else {
      puVar21 = (undefined4 *)CONCAT44(uStack_a4,local_a8);
    }
    (*pcVar6)(puVar21);
  }
  if (0x18 < local_90) {
    FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
  }
  if ((local_60 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ffa726 FUN_140ffa726 body=57 status=ok
// SIG undefined FUN_140ffa726(void)

void FUN_140ffa726(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb217d8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb217d8 = FUN_140002ddd(FUN_1464341cf,uVar1,L"GbxBrainAspectSettings_ReserveLineOfFire");
  }
  return;
}



// FUNCTION 140ffa760 FUN_140ffa760 body=57 status=ok
// SIG undefined FUN_140ffa760(void)

void FUN_140ffa760(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb216b8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb216b8 = FUN_140002ddd(FUN_146433d93,uVar1,L"GbxBrainAspectSettings_NavGps");
  }
  return;
}



// FUNCTION 140ffa79a FUN_140ffa79a body=57 status=ok
// SIG undefined FUN_140ffa79a(void)

void FUN_140ffa79a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb933c0 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb933c0 = FUN_140002ddd(FUN_146570d40,uVar1,L"GbxBrainAspectSettings_UseWeapon");
  }
  return;
}



// FUNCTION 140ffa7d4 FUN_140ffa7d4 body=57 status=ok
// SIG undefined FUN_140ffa7d4(void)

void FUN_140ffa7d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21940 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21940 = FUN_140002ddd(FUN_1464346dd,uVar1,L"GbxBrainAspectSettings_Timer");
  }
  return;
}



// FUNCTION 140ffa80e FUN_140ffa80e body=357 status=ok
// SIG undefined FUN_140ffa80e(void)

undefined4 *
FUN_140ffa80e(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140ffab16(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_14034cca6(local_40 + 1,uVar1);
  *(undefined4 *)(local_40 + 8) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = param_4;
  cVar2 = FUN_140ffa974(param_1,uVar7,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x44) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140ffaf02(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ffa974 FUN_140ffa974 body=280 status=ok
// SIG undefined FUN_140ffa974(void)

void FUN_140ffa974(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 uVar18;
  longlong *plVar19;
  longlong *plVar20;
  int iVar21;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar19 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar19 = (longlong *)param_1[8];
    }
    iVar21 = *(int *)((longlong)plVar19 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar21 != -1) {
      do {
        plVar19 = (longlong *)(*param_1 + (longlong)iVar21 * 0x48);
        if (*plVar19 == *param_3) {
          plVar1 = plVar19 + 2;
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                             (ulonglong)((uint)*(byte *)(plVar19 + 6) * 0x120));
          if (pcVar2 != (code *)0x0) {
            plVar20 = plVar1;
            if (0x18 < *(ushort *)(plVar19 + 5)) {
              plVar20 = (longlong *)*plVar1;
            }
            (*pcVar2)(plVar20);
          }
          if (0x18 < *(ushort *)(plVar19 + 5)) {
            FUN_1400020a8(*plVar1);
          }
          lVar11 = *param_3;
          uVar3 = *(undefined4 *)((longlong)param_3 + 4);
          lVar12 = param_3[1];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar13 = param_3[2];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar14 = param_3[3];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x1c);
          lVar15 = param_3[4];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar16 = param_3[5];
          uVar8 = *(undefined4 *)((longlong)param_3 + 0x2c);
          uVar9 = *(undefined4 *)((longlong)param_3 + 0x34);
          lVar17 = param_3[7];
          uVar10 = *(undefined4 *)((longlong)param_3 + 0x3c);
          *(int *)(plVar19 + 6) = (int)param_3[6];
          *(undefined4 *)((longlong)plVar19 + 0x34) = uVar9;
          *(int *)(plVar19 + 7) = (int)lVar17;
          *(undefined4 *)((longlong)plVar19 + 0x3c) = uVar10;
          *(int *)(plVar19 + 4) = (int)lVar15;
          *(undefined4 *)((longlong)plVar19 + 0x24) = uVar7;
          *(int *)(plVar19 + 5) = (int)lVar16;
          *(undefined4 *)((longlong)plVar19 + 0x2c) = uVar8;
          *(int *)(plVar19 + 2) = (int)lVar13;
          *(undefined4 *)((longlong)plVar19 + 0x14) = uVar5;
          *(int *)(plVar19 + 3) = (int)lVar14;
          *(undefined4 *)((longlong)plVar19 + 0x1c) = uVar6;
          *(int *)plVar19 = (int)lVar11;
          *(undefined4 *)((longlong)plVar19 + 4) = uVar3;
          *(int *)(plVar19 + 1) = (int)lVar12;
          *(undefined4 *)((longlong)plVar19 + 0xc) = uVar4;
          FUN_140ffaa8c(param_1,*param_4,1);
          *param_4 = iVar21;
          uVar18 = 1;
          goto LAB_140ffa9e8;
        }
        iVar21 = (int)plVar19[8];
      } while (iVar21 != -1);
    }
  }
  uVar18 = 0;
LAB_140ffa9e8:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar18;
  }
  return;
}



// FUNCTION 140ffaa8c FUN_140ffaa8c body=138 status=ok
// SIG undefined FUN_140ffaa8c(void)

void FUN_140ffaa8c(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x48 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x48) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
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
      puVar7 = puVar7 + 0x12;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140ffab16 FUN_140ffab16 body=473 status=ok
// SIG undefined FUN_140ffab16(void)

int * FUN_140ffab16(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_14021b4e8(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x48);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x48) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 140ffacf0 FUN_140ffacf0 body=57 status=ok
// SIG undefined FUN_140ffacf0(void)

void FUN_140ffacf0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a9f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a9f8 = FUN_140002ddd(FUN_1464cb7c8,uVar1,L"GbxBrainAspectSettings_DialogEvent");
  }
  return;
}



// FUNCTION 140ffad2a FUN_140ffad2a body=57 status=ok
// SIG undefined FUN_140ffad2a(void)

void FUN_140ffad2a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21e10 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21e10 = FUN_140002ddd(FUN_146436096,uVar1,L"GbxBrainTaskSettings_Selector");
  }
  return;
}



// FUNCTION 140ffad64 FUN_140ffad64 body=355 status=ok
// SIG undefined FUN_140ffad64(void)

undefined4 *
FUN_140ffad64(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140ffab16(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_14034cca6(local_40 + 1,uVar1);
  *(undefined4 *)(local_40 + 8) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = param_4;
  cVar2 = FUN_140ffa974(param_1,uVar7,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x44) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140ffaf02(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ffaec8 FUN_140ffaec8 body=57 status=ok
// SIG undefined FUN_140ffaec8(void)

void FUN_140ffaec8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb214c0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb214c0 = FUN_140002ddd(FUN_14643304a,uVar1,L"GbxBrainAspectSettings_IsInRange");
  }
  return;
}



// FUNCTION 140ffaf02 FUN_140ffaf02 body=688 status=ok
// SIG undefined FUN_140ffaf02(void)

void FUN_140ffaf02(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_140ffaf68;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar10 != uVar3);
LAB_140ffaf68:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar16 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar16 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar16 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar16) {
      iVar16 = iVar7;
    }
  }
  if (iVar16 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar15 = (longlong)iVar16;
      uVar2 = *(undefined8 *)(lVar9 + lVar15 * 0x48);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x44 + lVar15 * 0x48) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x40 + lVar15 * 0x48) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar16 = (int)uVar4;
      lVar9 = (longlong)iVar16;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar16) {
          iVar12 = iVar16;
        }
        if (iVar11 <= iVar16) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar15 + 1];
          if (uVar3 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar12 - lVar9 == lVar15) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar16 + (int)lVar15 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar7);
  }
  return;
}



// FUNCTION 140ffb1b2 FUN_140ffb1b2 body=57 status=ok
// SIG undefined FUN_140ffb1b2(void)

void FUN_140ffb1b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21910 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21910 = FUN_140002ddd(FUN_146434629,uVar1,L"GbxBrainAspectSettings_Ticket");
  }
  return;
}



// FUNCTION 140ffb1ec FUN_140ffb1ec body=57 status=ok
// SIG undefined FUN_140ffb1ec(void)

void FUN_140ffb1ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93460 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93460 = FUN_140002ddd(FUN_146570f2c,uVar1,L"GbxBrainTaskSettings_Wait");
  }
  return;
}



// FUNCTION 140ffb226 FUN_140ffb226 body=3312 status=ok
// SIG undefined FUN_140ffb226(void)

undefined4 * FUN_140ffb226(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  lVar1 = *(longlong *)(param_2 + 2);
  if (*(longlong *)(param_1 + 2) != lVar1) {
    *(undefined8 *)(param_1 + 6) = 0;
  }
  *(longlong *)(param_1 + 2) = lVar1;
  if (*(longlong *)(param_1 + 4) != *(longlong *)(param_2 + 4)) {
    *(undefined8 *)(param_1 + 6) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  uVar2 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar2;
  if ((*(longlong *)(param_1 + 0xc) != *(longlong *)(param_2 + 0xc)) ||
     (param_1[0xe] != param_2[0xe])) {
    *(longlong *)(param_1 + 0xc) = *(longlong *)(param_2 + 0xc);
    param_1[0xe] = param_2[0xe];
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  param_1[0x12] = param_2[0x12];
  param_1[0x14] = param_2[0x14];
  lVar1 = *(longlong *)(param_2 + 0x16);
  if (*(longlong *)(param_1 + 0x16) != lVar1) {
    *(undefined8 *)(param_1 + 0x1a) = 0;
  }
  *(longlong *)(param_1 + 0x16) = lVar1;
  if (*(longlong *)(param_1 + 0x18) != *(longlong *)(param_2 + 0x18)) {
    *(undefined8 *)(param_1 + 0x1a) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  uVar2 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = uVar2;
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (param_1[0x22] != param_2[0x22])) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    param_1[0x22] = param_2[0x22];
    *(undefined8 *)(param_1 + 0x24) = 0;
  }
  param_1[0x26] = param_2[0x26];
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  param_1[0x2a] = param_2[0x2a];
  lVar1 = *(longlong *)(param_2 + 0x2c);
  if (*(longlong *)(param_1 + 0x2c) != lVar1) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(longlong *)(param_1 + 0x2c) = lVar1;
  if (*(longlong *)(param_1 + 0x2e) != *(longlong *)(param_2 + 0x2e)) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x2e) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x34) = uVar2;
  if ((*(longlong *)(param_1 + 0x36) != *(longlong *)(param_2 + 0x36)) ||
     (param_1[0x38] != param_2[0x38])) {
    *(longlong *)(param_1 + 0x36) = *(longlong *)(param_2 + 0x36);
    param_1[0x38] = param_2[0x38];
    *(undefined8 *)(param_1 + 0x3a) = 0;
  }
  param_1[0x3c] = param_2[0x3c];
  *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_2 + 0x3e);
  param_1[0x40] = param_2[0x40];
  lVar1 = *(longlong *)(param_2 + 0x42);
  if (*(longlong *)(param_1 + 0x42) != lVar1) {
    *(undefined8 *)(param_1 + 0x46) = 0;
  }
  *(longlong *)(param_1 + 0x42) = lVar1;
  if (*(longlong *)(param_1 + 0x44) != *(longlong *)(param_2 + 0x44)) {
    *(undefined8 *)(param_1 + 0x46) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x44) = uVar2;
  *(undefined8 *)(param_1 + 0x46) = *(undefined8 *)(param_2 + 0x46);
  uVar2 = *(undefined8 *)(param_2 + 0x4a);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x4a) = uVar2;
  if ((*(longlong *)(param_1 + 0x4c) != *(longlong *)(param_2 + 0x4c)) ||
     (param_1[0x4e] != param_2[0x4e])) {
    *(longlong *)(param_1 + 0x4c) = *(longlong *)(param_2 + 0x4c);
    param_1[0x4e] = param_2[0x4e];
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  param_1[0x52] = param_2[0x52];
  *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
  param_1[0x56] = param_2[0x56];
  lVar1 = *(longlong *)(param_2 + 0x58);
  if (*(longlong *)(param_1 + 0x58) != lVar1) {
    *(undefined8 *)(param_1 + 0x5c) = 0;
  }
  *(longlong *)(param_1 + 0x58) = lVar1;
  if (*(longlong *)(param_1 + 0x5a) != *(longlong *)(param_2 + 0x5a)) {
    *(undefined8 *)(param_1 + 0x5c) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x5a) = uVar2;
  *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x5e) = *(undefined8 *)(param_2 + 0x5e);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  if ((*(longlong *)(param_1 + 0x62) != *(longlong *)(param_2 + 0x62)) ||
     (param_1[100] != param_2[100])) {
    *(longlong *)(param_1 + 0x62) = *(longlong *)(param_2 + 0x62);
    param_1[100] = param_2[100];
    *(undefined8 *)(param_1 + 0x66) = 0;
  }
  param_1[0x68] = param_2[0x68];
  *(undefined2 *)(param_1 + 0x6a) = *(undefined2 *)(param_2 + 0x6a);
  *(undefined1 *)((longlong)param_1 + 0x1aa) = *(undefined1 *)((longlong)param_2 + 0x1aa);
  param_1[0x6c] = param_2[0x6c];
  lVar1 = *(longlong *)(param_2 + 0x6e);
  if (*(longlong *)(param_1 + 0x6e) != lVar1) {
    *(undefined8 *)(param_1 + 0x72) = 0;
  }
  *(longlong *)(param_1 + 0x6e) = lVar1;
  if (*(longlong *)(param_1 + 0x70) != *(longlong *)(param_2 + 0x70)) {
    *(undefined8 *)(param_1 + 0x72) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined8 *)(param_1 + 0x72) = *(undefined8 *)(param_2 + 0x72);
  uVar2 = *(undefined8 *)(param_2 + 0x76);
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_2 + 0x74);
  *(undefined8 *)(param_1 + 0x76) = uVar2;
  if ((*(longlong *)(param_1 + 0x78) != *(longlong *)(param_2 + 0x78)) ||
     (param_1[0x7a] != param_2[0x7a])) {
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_2 + 0x78);
    param_1[0x7a] = param_2[0x7a];
    *(undefined8 *)(param_1 + 0x7c) = 0;
  }
  param_1[0x7e] = param_2[0x7e];
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  param_1[0x82] = param_2[0x82];
  lVar1 = *(longlong *)(param_2 + 0x84);
  if (*(longlong *)(param_1 + 0x84) != lVar1) {
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(longlong *)(param_1 + 0x84) = lVar1;
  if (*(longlong *)(param_1 + 0x86) != *(longlong *)(param_2 + 0x86)) {
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x86) = uVar2;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  uVar2 = *(undefined8 *)(param_2 + 0x8c);
  *(undefined8 *)(param_1 + 0x8a) = *(undefined8 *)(param_2 + 0x8a);
  *(undefined8 *)(param_1 + 0x8c) = uVar2;
  if ((*(longlong *)(param_1 + 0x8e) != *(longlong *)(param_2 + 0x8e)) ||
     (param_1[0x90] != param_2[0x90])) {
    *(longlong *)(param_1 + 0x8e) = *(longlong *)(param_2 + 0x8e);
    param_1[0x90] = param_2[0x90];
    *(undefined8 *)(param_1 + 0x92) = 0;
  }
  param_1[0x94] = param_2[0x94];
  *(undefined1 *)(param_1 + 0x96) = *(undefined1 *)(param_2 + 0x96);
  param_1[0x98] = param_2[0x98];
  lVar1 = *(longlong *)(param_2 + 0x9a);
  if (*(longlong *)(param_1 + 0x9a) != lVar1) {
    *(undefined8 *)(param_1 + 0x9e) = 0;
  }
  *(longlong *)(param_1 + 0x9a) = lVar1;
  if (*(longlong *)(param_1 + 0x9c) != *(longlong *)(param_2 + 0x9c)) {
    *(undefined8 *)(param_1 + 0x9e) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x9c) = uVar2;
  *(undefined8 *)(param_1 + 0x9e) = *(undefined8 *)(param_2 + 0x9e);
  uVar2 = *(undefined8 *)(param_2 + 0xa2);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa2) = uVar2;
  if ((*(longlong *)(param_1 + 0xa4) != *(longlong *)(param_2 + 0xa4)) ||
     (param_1[0xa6] != param_2[0xa6])) {
    *(longlong *)(param_1 + 0xa4) = *(longlong *)(param_2 + 0xa4);
    param_1[0xa6] = param_2[0xa6];
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  param_1[0xaa] = param_2[0xaa];
  *(undefined1 *)(param_1 + 0xac) = *(undefined1 *)(param_2 + 0xac);
  param_1[0xae] = param_2[0xae];
  lVar1 = *(longlong *)(param_2 + 0xb0);
  if (*(longlong *)(param_1 + 0xb0) != lVar1) {
    *(undefined8 *)(param_1 + 0xb4) = 0;
  }
  *(longlong *)(param_1 + 0xb0) = lVar1;
  if (*(longlong *)(param_1 + 0xb2) != *(longlong *)(param_2 + 0xb2)) {
    *(undefined8 *)(param_1 + 0xb4) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0xb2) = uVar2;
  *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_2 + 0xb4);
  uVar2 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb6) = *(undefined8 *)(param_2 + 0xb6);
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  if ((*(longlong *)(param_1 + 0xba) != *(longlong *)(param_2 + 0xba)) ||
     (param_1[0xbc] != param_2[0xbc])) {
    *(longlong *)(param_1 + 0xba) = *(longlong *)(param_2 + 0xba);
    param_1[0xbc] = param_2[0xbc];
    *(undefined8 *)(param_1 + 0xbe) = 0;
  }
  param_1[0xc0] = param_2[0xc0];
  *(undefined1 *)(param_1 + 0xc2) = *(undefined1 *)(param_2 + 0xc2);
  param_1[0xc4] = param_2[0xc4];
  lVar1 = *(longlong *)(param_2 + 0xc6);
  if (*(longlong *)(param_1 + 0xc6) != lVar1) {
    *(undefined8 *)(param_1 + 0xca) = 0;
  }
  *(longlong *)(param_1 + 0xc6) = lVar1;
  if (*(longlong *)(param_1 + 200) != *(longlong *)(param_2 + 200)) {
    *(undefined8 *)(param_1 + 0xca) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 200) = uVar2;
  *(undefined8 *)(param_1 + 0xca) = *(undefined8 *)(param_2 + 0xca);
  uVar2 = *(undefined8 *)(param_2 + 0xce);
  *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)(param_2 + 0xcc);
  *(undefined8 *)(param_1 + 0xce) = uVar2;
  if ((*(longlong *)(param_1 + 0xd0) != *(longlong *)(param_2 + 0xd0)) ||
     (param_1[0xd2] != param_2[0xd2])) {
    *(longlong *)(param_1 + 0xd0) = *(longlong *)(param_2 + 0xd0);
    param_1[0xd2] = param_2[0xd2];
    *(undefined8 *)(param_1 + 0xd4) = 0;
  }
  param_1[0xd6] = param_2[0xd6];
  *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
  param_1[0xda] = param_2[0xda];
  lVar1 = *(longlong *)(param_2 + 0xdc);
  if (*(longlong *)(param_1 + 0xdc) != lVar1) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  *(longlong *)(param_1 + 0xdc) = lVar1;
  if (*(longlong *)(param_1 + 0xde) != *(longlong *)(param_2 + 0xde)) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0xde) = uVar2;
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  uVar2 = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)(param_1 + 0xe2) = *(undefined8 *)(param_2 + 0xe2);
  *(undefined8 *)(param_1 + 0xe4) = uVar2;
  if ((*(longlong *)(param_1 + 0xe6) != *(longlong *)(param_2 + 0xe6)) ||
     (param_1[0xe8] != param_2[0xe8])) {
    *(longlong *)(param_1 + 0xe6) = *(longlong *)(param_2 + 0xe6);
    param_1[0xe8] = param_2[0xe8];
    *(undefined8 *)(param_1 + 0xea) = 0;
  }
  param_1[0xec] = param_2[0xec];
  param_1[0xee] = param_2[0xee];
  lVar1 = *(longlong *)(param_2 + 0xf0);
  if (*(longlong *)(param_1 + 0xf0) != lVar1) {
    *(undefined8 *)(param_1 + 0xf4) = 0;
  }
  *(longlong *)(param_1 + 0xf0) = lVar1;
  if (*(longlong *)(param_1 + 0xf2) != *(longlong *)(param_2 + 0xf2)) {
    *(undefined8 *)(param_1 + 0xf4) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0xf2) = uVar2;
  *(undefined8 *)(param_1 + 0xf4) = *(undefined8 *)(param_2 + 0xf4);
  uVar2 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xf6) = *(undefined8 *)(param_2 + 0xf6);
  *(undefined8 *)(param_1 + 0xf8) = uVar2;
  if ((*(longlong *)(param_1 + 0xfa) != *(longlong *)(param_2 + 0xfa)) ||
     (param_1[0xfc] != param_2[0xfc])) {
    *(longlong *)(param_1 + 0xfa) = *(longlong *)(param_2 + 0xfa);
    param_1[0xfc] = param_2[0xfc];
    *(undefined8 *)(param_1 + 0xfe) = 0;
  }
  param_1[0x100] = param_2[0x100];
  *(undefined1 *)(param_1 + 0x102) = *(undefined1 *)(param_2 + 0x102);
  param_1[0x104] = param_2[0x104];
  lVar1 = *(longlong *)(param_2 + 0x106);
  if (*(longlong *)(param_1 + 0x106) != lVar1) {
    *(undefined8 *)(param_1 + 0x10a) = 0;
  }
  *(longlong *)(param_1 + 0x106) = lVar1;
  if (*(longlong *)(param_1 + 0x108) != *(longlong *)(param_2 + 0x108)) {
    *(undefined8 *)(param_1 + 0x10a) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x108) = uVar2;
  *(undefined8 *)(param_1 + 0x10a) = *(undefined8 *)(param_2 + 0x10a);
  uVar2 = *(undefined8 *)(param_2 + 0x10e);
  *(undefined8 *)(param_1 + 0x10c) = *(undefined8 *)(param_2 + 0x10c);
  *(undefined8 *)(param_1 + 0x10e) = uVar2;
  if ((*(longlong *)(param_1 + 0x110) != *(longlong *)(param_2 + 0x110)) ||
     (param_1[0x112] != param_2[0x112])) {
    *(longlong *)(param_1 + 0x110) = *(longlong *)(param_2 + 0x110);
    param_1[0x112] = param_2[0x112];
    *(undefined8 *)(param_1 + 0x114) = 0;
  }
  param_1[0x116] = param_2[0x116];
  *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
  param_1[0x11a] = param_2[0x11a];
  lVar1 = *(longlong *)(param_2 + 0x11c);
  if (*(longlong *)(param_1 + 0x11c) != lVar1) {
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  *(longlong *)(param_1 + 0x11c) = lVar1;
  if (*(longlong *)(param_1 + 0x11e) != *(longlong *)(param_2 + 0x11e)) {
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x11e) = uVar2;
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  uVar2 = *(undefined8 *)(param_2 + 0x124);
  *(undefined8 *)(param_1 + 0x122) = *(undefined8 *)(param_2 + 0x122);
  *(undefined8 *)(param_1 + 0x124) = uVar2;
  if ((*(longlong *)(param_1 + 0x126) != *(longlong *)(param_2 + 0x126)) ||
     (param_1[0x128] != param_2[0x128])) {
    *(longlong *)(param_1 + 0x126) = *(longlong *)(param_2 + 0x126);
    param_1[0x128] = param_2[0x128];
    *(undefined8 *)(param_1 + 0x12a) = 0;
  }
  param_1[300] = param_2[300];
  *(undefined1 *)(param_1 + 0x12e) = *(undefined1 *)(param_2 + 0x12e);
  return param_1;
}



// FUNCTION 140ffbf16 FUN_140ffbf16 body=92 status=ok
// SIG undefined FUN_140ffbf16(void)

undefined8 * FUN_140ffbf16(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b458040;
  param_1[5] = &PTR_LAB_14b4584e0;
  param_1[6] = &PTR_LAB_14b458520;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_140ffbf72(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ffbf72 FUN_140ffbf72 body=162 status=ok
// SIG undefined FUN_140ffbf72(void)

void FUN_140ffbf72(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acc7500;
  param_1[5] = &PTR_FUN_14acc79a0;
  param_1[6] = &PTR_LAB_14acc79e0;
  FUN_140ffc015(param_1[0x37],*(undefined4 *)(param_1 + 0x38));
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_140ffc014(param_1[0x35],*(undefined4 *)(param_1 + 0x36));
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_140ffc04b(param_1[0x33],*(undefined4 *)(param_1 + 0x34));
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_140ffc082(param_1);
  return;
}



// FUNCTION 140ffc014 FUN_140ffc014 body=1 status=ok
// SIG undefined FUN_140ffc014(void)

void FUN_140ffc014(void)

{
  return;
}



// FUNCTION 140ffc015 FUN_140ffc015 body=54 status=ok
// SIG undefined FUN_140ffc015(void)

void FUN_140ffc015(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 140ffc04b FUN_140ffc04b body=54 status=ok
// SIG undefined FUN_140ffc04b(void)

void FUN_140ffc04b(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 140ffc082 FUN_140ffc082 body=375 status=ok
// SIG undefined FUN_140ffc082(void)

void FUN_140ffc082(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a848d60;
  param_1[5] = &PTR_FUN_14a849200;
  param_1[6] = &PTR_LAB_14a849240;
  FUN_140ffc1f9(param_1[0x30],*(undefined4 *)(param_1 + 0x31));
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_140ffc319(param_1[0x2e],*(undefined4 *)(param_1 + 0x2f));
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_140ffc221(param_1[0x2c],*(undefined4 *)(param_1 + 0x2d));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_140ffc249(param_1[0x2a],*(undefined4 *)(param_1 + 0x2b));
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_140ffc271(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_140ffc2c1(param_1[0x26],*(undefined4 *)(param_1 + 0x27));
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_140ffc2ed(param_1[0x24],*(undefined4 *)(param_1 + 0x25));
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_140ffc299(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 140ffc1f9 FUN_140ffc1f9 body=40 status=ok
// SIG undefined FUN_140ffc1f9(void)

void FUN_140ffc1f9(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140ffc366(param_1);
    param_1 = param_1 + 0x70;
  }
  return;
}



// FUNCTION 140ffc221 FUN_140ffc221 body=40 status=ok
// SIG undefined FUN_140ffc221(void)

void FUN_140ffc221(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1479f6e7c(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 140ffc249 FUN_140ffc249 body=40 status=ok
// SIG undefined FUN_140ffc249(void)

void FUN_140ffc249(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1479f6dd4(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 140ffc271 FUN_140ffc271 body=40 status=ok
// SIG undefined FUN_140ffc271(void)

void FUN_140ffc271(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1479f6d90(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 140ffc299 FUN_140ffc299 body=40 status=ok
// SIG undefined FUN_140ffc299(void)

void FUN_140ffc299(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140ffc3da(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 140ffc2c1 FUN_140ffc2c1 body=44 status=ok
// SIG undefined FUN_140ffc2c1(void)

void FUN_140ffc2c1(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      FUN_1457dfb3e(param_1);
      param_1 = param_1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140ffc2ed FUN_140ffc2ed body=44 status=ok
// SIG undefined FUN_140ffc2ed(void)

void FUN_140ffc2ed(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_1479f6d2c(param_1);
      param_1 = param_1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140ffc319 FUN_140ffc319 body=77 status=ok
// SIG undefined FUN_140ffc319(void)

void FUN_140ffc319(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140ffc366 FUN_140ffc366 body=116 status=ok
// SIG undefined FUN_140ffc366(void)

void FUN_140ffc366(longlong param_1)

{
  FUN_140ffc319(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_140ffc48e((longlong *)(param_1 + 0x10),0);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140ffc3da FUN_140ffc3da body=179 status=ok
// SIG undefined FUN_140ffc3da(void)

void FUN_140ffc3da(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x50);
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
  plVar3 = *(longlong **)(param_1 + 0x40);
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
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x000140ffc489. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140ffc48e FUN_140ffc48e body=378 status=ok
// SIG undefined FUN_140ffc48e(void)

void FUN_140ffc48e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      FUN_1479f4858((longlong)iStack_54 * 0x30 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ffc60a FUN_140ffc60a body=312 status=ok
// SIG undefined FUN_140ffc60a(void)

undefined1 FUN_140ffc60a(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  longlong *in_R9;
  longlong lVar5;
  undefined8 in_stack_00000028;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_88;
  undefined8 uStack_80;
  undefined2 *local_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  local_98 = in_stack_00000028;
  uVar3 = FUN_1449da20c();
  local_70 = local_68;
  if ((int)uStack_60 == 0) {
    local_70 = &DAT_149dfb77a;
  }
  local_88 = 0;
  uStack_80 = 0;
  cVar4 = FUN_140ffc744(&local_70,&local_88,0,0);
  if (cVar4 != '\0') {
    do {
      iVar1 = (int)in_R9[1];
      *(uint *)(in_R9 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)in_R9 + 0xc) < iVar1 + 1U) {
        FUN_1447a1bd6(in_R9,iVar1);
      }
      lVar2 = *in_R9;
      lVar5 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar2 + lVar5) = 0;
      *(longlong *)(lVar2 + lVar5) = local_88;
      local_88 = 0;
      *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_80;
      *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_80._4_4_;
      uStack_80 = 0;
      cVar4 = FUN_140ffc744(&local_70,&local_88,0,0);
    } while (cVar4 != '\0');
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 140ffc744 FUN_140ffc744 body=430 status=ok
// SIG undefined FUN_140ffc744(void)

undefined4 FUN_140ffc744(longlong *param_1,undefined8 *param_2,char param_3,wint_t param_4)

{
  wint_t wVar1;
  int iVar2;
  wint_t *pwVar3;
  wint_t *pwVar4;
  bool bVar5;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1446f8c06(param_2,0);
  }
  if ((undefined2 *)*param_2 != (undefined2 *)0x0) {
    *(undefined2 *)*param_2 = 0;
  }
  iVar2 = iswspace(*(wint_t *)*param_1);
  pwVar4 = (wint_t *)*param_1;
  while (iVar2 != 0) {
    *param_1 = (longlong)(pwVar4 + 1);
    iVar2 = iswspace(pwVar4[1]);
    pwVar4 = (wint_t *)*param_1;
  }
  wVar1 = *pwVar4;
  if (wVar1 != 0) {
    if (wVar1 == 0x22) {
      pwVar3 = pwVar4 + 1;
      *param_1 = (longlong)pwVar3;
LAB_140ffc883:
      wVar1 = *pwVar3;
      pwVar4 = pwVar3;
      if ((wVar1 == 0) || (wVar1 == 0x22)) goto LAB_140ffc8c8;
      *param_1 = (longlong)(pwVar3 + 1);
      if (*pwVar3 == 0x5c && param_3 == '\x01') {
        pwVar4 = pwVar3 + 2;
        *param_1 = (longlong)pwVar4;
        if (pwVar3[1] == 0) {
          wVar1 = pwVar3[2];
LAB_140ffc8c8:
          if (wVar1 == 0x22) {
LAB_140ffc8ce:
            *param_1 = (longlong)(pwVar4 + 1);
          }
          goto LAB_140ffc8d5;
        }
      }
      FUN_140002184(param_2);
      pwVar3 = (wint_t *)*param_1;
      goto LAB_140ffc883;
    }
    bVar5 = false;
    do {
      if (bVar5) {
        *param_1 = (longlong)(pwVar4 + 1);
        if (param_3 != '\x01' || wVar1 != 0x5c) goto LAB_140ffc7e7;
        FUN_140002184(param_2,0x5c);
        wVar1 = *(wint_t *)*param_1;
        if (wVar1 == 0) break;
        *param_1 = (longlong)((wint_t *)*param_1 + 1);
        bVar5 = true;
      }
      else {
        if (wVar1 == param_4) goto LAB_140ffc8ce;
        if (param_4 == 0) {
          iVar2 = iswspace(wVar1);
          pwVar4 = (wint_t *)*param_1;
          if (iVar2 != 0) goto LAB_140ffc8ce;
        }
        *param_1 = (longlong)(pwVar4 + 1);
LAB_140ffc7e7:
        if (wVar1 == 0x22) {
          bVar5 = (bool)(bVar5 ^ 1);
          wVar1 = 0x22;
        }
      }
      FUN_140002184(param_2,wVar1);
      pwVar4 = (wint_t *)*param_1;
      wVar1 = *pwVar4;
    } while (wVar1 != 0);
  }
LAB_140ffc8d5:
  return CONCAT31((int3)(*(int *)(param_2 + 1) - 2U >> 8),*(int *)(param_2 + 1) - 2U < 0x7fffffff);
}



// FUNCTION 140ffc8f2 FUN_140ffc8f2 body=116 status=ok
// SIG undefined FUN_140ffc8f2(void)

undefined8 * FUN_140ffc8f2(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a6c5310;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  return param_1;
}



// FUNCTION 140ffc966 FUN_140ffc966 body=143 status=ok
// SIG undefined FUN_140ffc966(void)

undefined8 * FUN_140ffc966(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b602bd0;
  plVar1 = param_1 + 0x51;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x55) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x54)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x54)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_140ffc9f6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x2c0);
  }
  return param_1;
}


