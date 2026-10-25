// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1427b03d2 FUN_1427b03d2 body=171 status=ok
// SIG undefined FUN_1427b03d2(void)

void FUN_1427b03d2(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1427b0467;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1427b0467:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1427b047e FUN_1427b047e body=29 status=ok
// SIG undefined FUN_1427b047e(void)

undefined8 FUN_1427b047e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427b04b0 FUN_1427b04b0 body=93 status=ok
// SIG undefined FUN_1427b04b0(void)

void FUN_1427b04b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e49b80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e49b10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1427b050e FUN_1427b050e body=93 status=ok
// SIG undefined FUN_1427b050e(void)

void FUN_1427b050e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e49b80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e49b10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1427b056c FUN_1427b056c body=126 status=ok
// SIG undefined FUN_1427b056c(void)

void FUN_1427b056c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e49b80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e49b10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001427b05db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1427b05f4 FUN_1427b05f4 body=20 status=ok
// SIG undefined FUN_1427b05f4(void)

undefined1 FUN_1427b05f4(longlong param_1)

{
  FUN_1427b0608(param_1 + 0x18);
  return 1;
}



// FUNCTION 1427b0608 FUN_1427b0608 body=545 status=ok
// SIG undefined FUN_1427b0608(void)

void FUN_1427b0608(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  void *_Src;
  bool bVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  longlong *plVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ushort uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 *local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar8 = (longlong *)*param_1;
  local_b0 = param_1;
  if (0 < (int)plVar8[1]) {
    lVar15 = 0;
    do {
      local_88 = (void *)0x0;
      local_80 = *(int *)(*plVar8 + 8 + lVar15 * 0xb8);
      lVar16 = (longlong)local_80;
      _Src = *(void **)(*plVar8 + lVar15 * 0xb8);
      if (lVar16 == 0) {
        local_7c = 0;
      }
      else {
        FUN_1446dd670(&local_88,local_80,0);
        memcpy(local_88,_Src,lVar16 * 2);
      }
      if (lVar15 < (int)param_2[1]) {
        lVar16 = lVar15;
        do {
          lVar11 = lVar16 * 0x10;
          cVar7 = (**(code **)(**(longlong **)(*param_2 + lVar11) + 0x80))
                            (*(longlong **)(*param_2 + lVar11),&local_90);
          if (cVar7 != '\0') {
            local_a8 = 0;
            uStack_a0 = 0;
            local_78 = L"Name";
            uStack_70 = CONCAT44(uStack_70._4_4_,4);
            cVar7 = FUN_14047fa10(*local_90,&local_78);
            bVar3 = true;
            if (cVar7 != '\0') {
              if ((int)uStack_a0 == local_80) {
                if (1 < (int)uStack_a0) {
                  lVar12 = 0;
                  while( true ) {
                    uVar9 = *(ushort *)(local_a8 + lVar12);
                    uVar10 = (ulonglong)uVar9;
                    uVar13 = *(ushort *)((longlong)local_88 + lVar12);
                    if (uVar9 != uVar13) break;
                    if (uVar9 == 0) goto LAB_1427b0789;
LAB_1427b074e:
                    lVar12 = lVar12 + 2;
                  }
                  if ((uVar13 | uVar9) < 0x80) {
                    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                    uVar14 = (ulonglong)uVar13;
                    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
                    if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar14]) goto LAB_1427b074e;
                  }
                  if (uVar9 != uVar13) goto LAB_1427b07b0;
                }
              }
              else if (local_80 + (int)uStack_a0 != 1) goto LAB_1427b07b0;
LAB_1427b0789:
              if (lVar15 != lVar16) {
                lVar12 = *param_2;
                puVar1 = (undefined8 *)(lVar12 + lVar15 * 0x10);
                pwVar4 = (wchar_t *)*puVar1;
                uVar5 = puVar1[1];
                uVar6 = ((undefined8 *)(lVar12 + lVar11))[1];
                puVar1 = (undefined8 *)(lVar12 + lVar15 * 0x10);
                *puVar1 = *(undefined8 *)(lVar12 + lVar11);
                puVar1[1] = uVar6;
                local_78._0_4_ = SUB84(pwVar4,0);
                local_78._4_4_ = (undefined4)((ulonglong)pwVar4 >> 0x20);
                uStack_70._0_4_ = (undefined4)uVar5;
                uStack_70._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
                puVar2 = (undefined4 *)(lVar12 + lVar11);
                *puVar2 = (undefined4)local_78;
                puVar2[1] = local_78._4_4_;
                puVar2[2] = (undefined4)uStack_70;
                puVar2[3] = uStack_70._4_4_;
                local_78 = pwVar4;
                uStack_70 = uVar5;
              }
              bVar3 = false;
            }
LAB_1427b07b0:
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
            if (!bVar3) break;
          }
          lVar16 = lVar16 + 1;
        } while ((int)lVar16 < (int)param_2[1]);
      }
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar15 = lVar15 + 1;
      plVar8 = (longlong *)*local_b0;
    } while (lVar15 < (int)plVar8[1]);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427b082a FUN_1427b082a body=236 status=ok
// SIG undefined FUN_1427b082a(void)

undefined8 FUN_1427b082a(longlong *param_1,undefined8 *param_2,char *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_3 == '\x01') {
    FUN_140056680(local_48,*param_2);
    FUN_1449fb060(&local_38,local_48,1);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    param_1 = (longlong *)*param_1;
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_1447a1bd6(param_1,iVar2);
    }
    _Src = local_38;
    lVar3 = *param_1;
    lVar4 = (longlong)iVar2 * 0x10;
    puVar1 = (undefined8 *)(lVar3 + lVar4);
    *(undefined8 *)(lVar3 + lVar4) = 0;
    *(int *)(lVar3 + 8 + lVar4) = local_30;
    if ((longlong)local_30 == 0) {
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar1,local_30,0);
      memcpy((void *)*puVar1,_Src,(longlong)local_30 * 2);
    }
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427b0917 FUN_1427b0917 body=102 status=ok
// SIG undefined FUN_1427b0917(void)

void FUN_1427b0917(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x8000000149e48e78;
  local_14 = 8;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14626f1cc(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427b0980 FUN_1427b0980 body=55 status=ok
// SIG undefined FUN_1427b0980(void)

void FUN_1427b0980(void)

{
  undefined8 uVar1;
  
  if (DAT_14c926fb8 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c926fb8 = FUN_14171c317(FUN_14626f43b,uVar1,L"ELifetimeCondition");
  }
  return;
}



// FUNCTION 1427b09b7 FUN_1427b09b7 body=55 status=ok
// SIG undefined FUN_1427b09b7(void)

void FUN_1427b09b7(void)

{
  undefined8 uVar1;
  
  if (DAT_14c926fe8 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c926fe8 = FUN_14171c317(FUN_1462704f9,uVar1,L"EDataValidationUsecase");
  }
  return;
}



// FUNCTION 1427b09ee FUN_1427b09ee body=221 status=ok
// SIG undefined FUN_1427b09ee(void)

longlong FUN_1427b09ee(void)

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
  if (DAT_14c950d78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1468b50ee;
    local_40 = FUN_1427f23a3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c950d78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427b0acc FUN_1427b0acc body=55 status=ok
// SIG undefined FUN_1427b0acc(void)

void FUN_1427b0acc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c927018 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c927018 = FUN_14171c317(FUN_14627057f,uVar1,L"ETestInstanceDataObjectBird");
  }
  return;
}



// FUNCTION 1427b0b03 FUN_1427b0b03 body=55 status=ok
// SIG undefined FUN_1427b0b03(void)

void FUN_1427b0b03(void)

{
  undefined8 uVar1;
  
  if (DAT_14c927030 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c927030 = FUN_14171c317(FUN_1462705ae,uVar1,L"ETestInstanceDataObjectGrain");
  }
  return;
}



// FUNCTION 1427b0b3a FUN_1427b0b3a body=55 status=ok
// SIG undefined FUN_1427b0b3a(void)

void FUN_1427b0b3a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c927048 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c927048 = FUN_14171c317(FUN_1462705df,uVar1,L"ETestInstanceDataObjectGrainAlternate");
  }
  return;
}



// FUNCTION 1427b0b71 FUN_1427b0b71 body=55 status=ok
// SIG undefined FUN_1427b0b71(void)

void FUN_1427b0b71(void)

{
  undefined8 uVar1;
  
  if (DAT_14c927060 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c927060 =
         FUN_14171c317(FUN_146270610,uVar1,L"ETestInstanceDataObjectGrainAlternateEnumClass");
  }
  return;
}



// FUNCTION 1427b0ba8 FUN_1427b0ba8 body=55 status=ok
// SIG undefined FUN_1427b0ba8(void)

void FUN_1427b0ba8(void)

{
  undefined8 uVar1;
  
  if (DAT_14c927078 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c927078 = FUN_14171c317(FUN_14627063f,uVar1,L"ETestInstanceDataObjectFruit");
  }
  return;
}



// FUNCTION 1427b0bdf FUN_1427b0bdf body=55 status=ok
// SIG undefined FUN_1427b0bdf(void)

void FUN_1427b0bdf(void)

{
  undefined8 uVar1;
  
  if (DAT_14c927090 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c927090 = FUN_14171c317(FUN_146270670,uVar1,L"ETestInstanceDataObjectFruitAlternate");
  }
  return;
}



// FUNCTION 1427b0c16 FUN_1427b0c16 body=55 status=ok
// SIG undefined FUN_1427b0c16(void)

void FUN_1427b0c16(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9270a8 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c9270a8 =
         FUN_14171c317(FUN_1462706a1,uVar1,L"ETestInstanceDataObjectFruitAlternateNamespace");
  }
  return;
}



// FUNCTION 1427b0c4d FUN_1427b0c4d body=55 status=ok
// SIG undefined FUN_1427b0c4d(void)

void FUN_1427b0c4d(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9270c0 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c9270c0 = FUN_14171c317(FUN_1462706d0,uVar1,L"ETestInstanceDataObjectDirection");
  }
  return;
}



// FUNCTION 1427b0c84 FUN_1427b0c84 body=55 status=ok
// SIG undefined FUN_1427b0c84(void)

void FUN_1427b0c84(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9270d8 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c9270d8 = FUN_14171c317(FUN_1462706ff,uVar1,L"ETestInstanceDataObjectDirectionAlternate");
  }
  return;
}



// FUNCTION 1427b0cbb FUN_1427b0cbb body=55 status=ok
// SIG undefined FUN_1427b0cbb(void)

void FUN_1427b0cbb(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9270f0 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c9270f0 = FUN_14171c317(FUN_14627072e,uVar1,L"ETestInstanceDataObjectFullFlags");
  }
  return;
}



// FUNCTION 1427b0cf2 FUN_1427b0cf2 body=55 status=ok
// SIG undefined FUN_1427b0cf2(void)

void FUN_1427b0cf2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c927188 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c927188 = FUN_14171c317(FUN_1462709d4,uVar1,L"ESearchCase");
  }
  return;
}



// FUNCTION 1427b0d29 FUN_1427b0d29 body=55 status=ok
// SIG undefined FUN_1427b0d29(void)

void FUN_1427b0d29(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9271a0 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c9271a0 = FUN_14171c317(FUN_146270a05,uVar1,L"ESearchDir");
  }
  return;
}



// FUNCTION 1427b0d60 FUN_1427b0d60 body=55 status=ok
// SIG undefined FUN_1427b0d60(void)

void FUN_1427b0d60(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9271b8 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c9271b8 = FUN_14171c317(FUN_146270a34,uVar1,L"ELogTimes");
  }
  return;
}



// FUNCTION 1427b0d97 FUN_1427b0d97 body=55 status=ok
// SIG undefined FUN_1427b0d97(void)

void FUN_1427b0d97(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9271d0 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c9271d0 = FUN_14171c317(FUN_14170f526,uVar1,L"EAxis");
  }
  return;
}



// FUNCTION 1427b0dce FUN_1427b0dce body=55 status=ok
// SIG undefined FUN_1427b0dce(void)

void FUN_1427b0dce(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9271e8 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c9271e8 = FUN_14171c317(FUN_146270a63,uVar1,L"EAxisList");
  }
  return;
}



// FUNCTION 1427b0e05 FUN_1427b0e05 body=55 status=ok
// SIG undefined FUN_1427b0e05(void)

void FUN_1427b0e05(void)

{
  undefined8 uVar1;
  
  if (DAT_14c927200 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c927200 = FUN_14171c317(FUN_146270a92,uVar1,L"EInterpCurveMode");
  }
  return;
}



// FUNCTION 1427b0e3c FUN_1427b0e3c body=55 status=ok
// SIG undefined FUN_1427b0e3c(void)

void FUN_1427b0e3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c927218 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c927218 = FUN_14171c317(FUN_146270ac3,uVar1,L"EPixelFormat");
  }
  return;
}



// FUNCTION 1427b0e73 FUN_1427b0e73 body=55 status=ok
// SIG undefined FUN_1427b0e73(void)

void FUN_1427b0e73(void)

{
  undefined8 uVar1;
  
  if (DAT_14c927230 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c927230 = FUN_14171c317(FUN_146270af4,uVar1,L"EMouseCursor");
  }
  return;
}



// FUNCTION 1427b0eaa FUN_1427b0eaa body=55 status=ok
// SIG undefined FUN_1427b0eaa(void)

void FUN_1427b0eaa(void)

{
  undefined8 uVar1;
  
  if (DAT_14c927248 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c927248 = FUN_14171c317(FUN_146270b25,uVar1,L"EUnit");
  }
  return;
}



// FUNCTION 1427b0ee1 FUN_1427b0ee1 body=55 status=ok
// SIG undefined FUN_1427b0ee1(void)

void FUN_1427b0ee1(void)

{
  undefined8 uVar1;
  
  if (DAT_14c927260 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c927260 = FUN_14171c317(FUN_146270b54,uVar1,L"EPropertyAccessChangeNotifyMode");
  }
  return;
}



// FUNCTION 1427b0f18 FUN_1427b0f18 body=55 status=ok
// SIG undefined FUN_1427b0f18(void)

void FUN_1427b0f18(void)

{
  undefined8 uVar1;
  
  if (DAT_14c927278 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c927278 = FUN_14171c317(FUN_146270b83,uVar1,L"EAppMsgCategory");
  }
  return;
}



// FUNCTION 1427b0f4f FUN_1427b0f4f body=55 status=ok
// SIG undefined FUN_1427b0f4f(void)

void FUN_1427b0f4f(void)

{
  undefined8 uVar1;
  
  if (DAT_14c927290 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c927290 = FUN_14171c317(FUN_146270bb2,uVar1,L"EAppReturnType");
  }
  return;
}



// FUNCTION 1427b0f86 FUN_1427b0f86 body=55 status=ok
// SIG undefined FUN_1427b0f86(void)

void FUN_1427b0f86(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9272a8 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c9272a8 = FUN_14171c317(FUN_146270be1,uVar1,L"EAppMsgType");
  }
  return;
}



// FUNCTION 1427b0fbd FUN_1427b0fbd body=55 status=ok
// SIG undefined FUN_1427b0fbd(void)

void FUN_1427b0fbd(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9275e8 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c9275e8 = FUN_14171c317(FUN_146270c10,uVar1,L"ERangeBoundTypes");
  }
  return;
}



// FUNCTION 1427b0ff4 FUN_1427b0ff4 body=55 status=ok
// SIG undefined FUN_1427b0ff4(void)

void FUN_1427b0ff4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c927650 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c927650 = FUN_14171c317(FUN_146270c41,uVar1,L"ELocalizedTextSourceCategory");
  }
  return;
}



// FUNCTION 1427b102b FUN_1427b102b body=55 status=ok
// SIG undefined FUN_1427b102b(void)

void FUN_1427b102b(void)

{
  undefined8 uVar1;
  
  if (DAT_14c927670 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c927670 = FUN_14171c317(FUN_146270c70,uVar1,L"EAutomationEventType");
  }
  return;
}



// FUNCTION 1427b1062 FUN_1427b1062 body=55 status=ok
// SIG undefined FUN_1427b1062(void)

void FUN_1427b1062(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9276a8 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c9276a8 = FUN_14171c317(FUN_146270c9f,uVar1,L"EInputDeviceConnectionState");
  }
  return;
}



// FUNCTION 1427b1099 FUN_1427b1099 body=55 status=ok
// SIG undefined FUN_1427b1099(void)

void FUN_1427b1099(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9276c0 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c9276c0 = FUN_14171c317(FUN_146270cd0,uVar1,L"EInputDeviceTriggerMask");
  }
  return;
}



// FUNCTION 1427b10d0 FUN_1427b10d0 body=55 status=ok
// SIG undefined FUN_1427b10d0(void)

void FUN_1427b10d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9276d8 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c9276d8 = FUN_14171c317(FUN_146270cff,uVar1,L"EInputDeviceAnalogStickMask");
  }
  return;
}



// FUNCTION 1427b1107 FUN_1427b1107 body=55 status=ok
// SIG undefined FUN_1427b1107(void)

void FUN_1427b1107(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9276f8 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c9276f8 = FUN_14171c317(FUN_146270d2e,uVar1,L"EDataValidationResult");
  }
  return;
}



// FUNCTION 1427b113e FUN_1427b113e body=221 status=ok
// SIG undefined FUN_1427b113e(void)

longlong FUN_1427b113e(void)

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
  if (DAT_14c927740 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146856450;
    local_40 = FUN_1427b121c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000021;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c927740;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427b121c FUN_1427b121c body=81 status=ok
// SIG undefined FUN_1427b121c(void)

void FUN_1427b121c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  return;
}



// FUNCTION 1427b126d FUN_1427b126d body=55 status=ok
// SIG undefined FUN_1427b126d(void)

void FUN_1427b126d(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9277a8 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c9277a8 = FUN_14171c317(FUN_146270d8c,uVar1,L"EGbxReleaseType");
  }
  return;
}



// FUNCTION 1427b12f0 FUN_1427b12f0 body=226 status=ok
// SIG undefined FUN_1427b12f0(void)

void FUN_1427b12f0(void)

{
  FUN_14098d3d2(FUN_1427b0980,L"/Script/CoreUObject",L"ELifetimeCondition",&DAT_14c926fb0);
  FUN_14098d3d2(FUN_1427b09b7,L"/Script/CoreUObject",L"EDataValidationUsecase",&DAT_14c926fe0);
  FUN_14282b410(L"/Script/CoreUObject",&PTR_FUN_149e4a890,1,0,0,0,0);
  FUN_14282b410(L"/Script/CoreUObject",&PTR_FUN_149e4c890,1,&PTR_FUN_149e4c7f0,4,&PTR_FUN_149e4c6b0,
                10);
  FUN_14282b410(L"/Script/CoreUObject",&PTR_FUN_149e57210,1,0,0,&PTR_FUN_149e56f70,0x15);
  return;
}



// FUNCTION 1427b13d4 FUN_1427b13d4 body=55 status=ok
// SIG undefined FUN_1427b13d4(void)

void FUN_1427b13d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9277e0 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c9277e0 = FUN_14171c317(FUN_146270f12,uVar1,L"EOverriddenPropertyOperation");
  }
  return;
}



// FUNCTION 1427b140b FUN_1427b140b body=55 status=ok
// SIG undefined FUN_1427b140b(void)

void FUN_1427b140b(void)

{
  undefined8 uVar1;
  
  if (DAT_14c927840 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c927840 = FUN_14171c317(FUN_146271106,uVar1,L"EFallbackEnum");
  }
  return;
}



// FUNCTION 1427b1442 FUN_1427b1442 body=55 status=ok
// SIG undefined FUN_1427b1442(void)

void FUN_1427b1442(void)

{
  undefined8 uVar1;
  
  if (DAT_14c927888 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c927888 = FUN_14171c317(FUN_146271262,uVar1,L"EUserDefinedStructureStatus");
  }
  return;
}



// FUNCTION 1427b1479 FUN_1427b1479 body=55 status=ok
// SIG undefined FUN_1427b1479(void)

void FUN_1427b1479(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9278d0 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c9278d0 = FUN_14171c317(FUN_146271322,uVar1,L"EVersePackageScope");
  }
  return;
}



// FUNCTION 1427b14b0 FUN_1427b14b0 body=55 status=ok
// SIG undefined FUN_1427b14b0(void)

void FUN_1427b14b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9278e8 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c9278e8 = FUN_14171c317(FUN_146271351,uVar1,L"EVersePackageType");
  }
  return;
}



// FUNCTION 1427b14e7 FUN_1427b14e7 body=55 status=ok
// SIG undefined FUN_1427b14e7(void)

void FUN_1427b14e7(void)

{
  undefined8 uVar1;
  
  if (DAT_14c927900 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c927900 = FUN_14171c317(FUN_146271380,uVar1,L"EVerseEnumFlags");
  }
  return;
}



// FUNCTION 1427b151e FUN_1427b151e body=55 status=ok
// SIG undefined FUN_1427b151e(void)

void FUN_1427b151e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c927930 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c927930 = FUN_14171c317(FUN_146271407,uVar1,L"EVerseFalse");
  }
  return;
}



// FUNCTION 1427b1555 FUN_1427b1555 body=55 status=ok
// SIG undefined FUN_1427b1555(void)

void FUN_1427b1555(void)

{
  undefined8 uVar1;
  
  if (DAT_14c927948 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c927948 = FUN_14171c317(FUN_146271436,uVar1,L"EVerseTrue");
  }
  return;
}



// FUNCTION 1427b1598 FUN_1427b1598 body=41 status=ok
// SIG undefined FUN_1427b1598(void)

void FUN_1427b1598(void)

{
  DAT_14c927a58 = 0;
  if (DAT_14c927a50 != 0) {
    FUN_1400020a8();
  }
  FUN_146159102();
  return;
}



// FUNCTION 1427b15c2 FUN_1427b15c2 body=1224 status=ok
// SIG undefined FUN_1427b15c2(void)

longlong * FUN_1427b15c2(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  wchar_t *local_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  undefined2 **local_c0;
  code *local_b8;
  code *local_b0;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  code *local_80;
  int local_78;
  longlong local_70 [2];
  longlong local_60;
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined2 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_1 = 0;
  param_1[1] = 0;
  local_60 = param_2;
  if (param_2 != 0) {
    FUN_1400021e4(&local_60,local_70);
    if (DAT_14c948f88 == 0) {
      local_98 = &DAT_1427db2a2;
      lVar4 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948f88 = lVar4;
      FUN_1446f470e(&local_80,L"Struct",1);
      local_c8 = &LAB_146891313;
      local_d0 = FUN_146272f63;
      local_e0 = L"Engine";
      local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,199);
      local_e8 = 8;
      local_f0 = 0x10000020;
      local_f8._0_4_ = 8;
      local_c0 = (undefined2 **)&local_98;
      FUN_14574b4b2(lVar4);
      DAT_14c948f88 = lVar4;
      if (DAT_14c927740 == 0) {
        local_c0 = (undefined2 **)&local_58;
        local_58 = FUN_1449e2820;
        local_b0 = FUN_14081d0ea;
        local_b8 = FUN_14081d0ea;
        local_c8 = &LAB_146856450;
        local_d0 = FUN_1427b121c;
        local_d8 = L"Engine";
        local_e0 = (wchar_t *)0x0;
        local_e8 = CONCAT44(local_e8._4_4_,0x10000021);
        local_f0 = 8;
        local_f8._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      lVar1 = DAT_14c948f88;
      lVar4 = DAT_14c927740;
      uVar3 = FUN_1400163b0();
      local_f8 = L"Struct";
      FUN_14574b446(uVar3,lVar1,lVar4,L"/Script/CoreUObject");
    }
    local_f8 = L"AssetRegistry trying to convert short name to path name";
    FUN_146891db8(param_1,DAT_14c948f88,local_70,0);
    if (*param_1 == 0) {
      FUN_1468b7fce(&local_80,local_70);
      iVar2 = local_78 + -1;
      bVar5 = iVar2 != 0;
      if (local_78 == 0) {
        iVar2 = 0;
      }
      if (local_78 != 0 && bVar5) {
        lVar4 = 0;
        do {
          if (*(short *)(local_80 + lVar4) == 0x2f) {
            local_98 = (undefined2 *)0x0;
            uStack_90 = 0;
            local_58 = local_80;
            iStack_50 = iVar2;
            FUN_1468fe3e4(&local_98);
            uVar6 = (undefined4)local_98;
            uVar7 = local_98._4_4_;
            iVar2 = (int)uStack_90;
            uStack_4c = uStack_90._4_4_;
            goto LAB_1427b1728;
          }
          lVar4 = lVar4 + 2;
        } while ((longlong)iVar2 * 2 != lVar4);
      }
      if (DAT_14c948f88 == 0) {
        local_48 = &DAT_1427db2a2;
        lVar4 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c948f88 = lVar4;
        FUN_1446f470e(&local_98,L"Struct",1);
        local_c8 = &LAB_146891313;
        local_d0 = FUN_146272f63;
        local_e0 = L"Engine";
        local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,199);
        local_e8 = 8;
        local_f0 = 0x10000020;
        local_f8._0_4_ = 8;
        local_c0 = &local_48;
        FUN_14574b4b2(lVar4);
        DAT_14c948f88 = lVar4;
        if (DAT_14c927740 == 0) {
          local_c0 = (undefined2 **)&local_58;
          local_58 = FUN_1449e2820;
          local_b0 = FUN_14081d0ea;
          local_b8 = FUN_14081d0ea;
          local_c8 = &LAB_146856450;
          local_d0 = FUN_1427b121c;
          local_d8 = L"Engine";
          local_e0 = (wchar_t *)0x0;
          local_e8 = CONCAT44(local_e8._4_4_,0x10000021);
          local_f0 = 8;
          local_f8._0_4_ = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        lVar1 = DAT_14c948f88;
        lVar4 = DAT_14c927740;
        uVar3 = FUN_1400163b0();
        local_f8 = L"Struct";
        FUN_14574b446(uVar3,lVar1,lVar4,L"/Script/CoreUObject");
      }
      local_f8 = L"AssetRegistry trying to convert redirected short name to path name";
      FUN_146891db8(&local_58,DAT_14c948f88,&local_80,0);
      uVar6 = (undefined4)local_58;
      uVar7 = local_58._4_4_;
      iVar2 = iStack_50;
LAB_1427b1728:
      *(undefined4 *)param_1 = uVar6;
      *(undefined4 *)((longlong)param_1 + 4) = uVar7;
      *(int *)(param_1 + 1) = iVar2;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_4c;
      if (*param_1 == 0) {
        FUN_1446f470e(&local_a0,L"/Unknown",1);
        *param_1 = local_a0;
        param_1[1] = param_2;
      }
      if (local_80 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427b1a8c FUN_1427b1a8c body=30 status=ok
// SIG undefined FUN_1427b1a8c(void)

undefined8 FUN_1427b1a8c(longlong *param_1)

{
  if (*param_1 != DAT_14c948098) {
    return 0;
  }
  return CONCAT71((int7)((ulonglong)param_1[1] >> 8),param_1[1] == DAT_14c9480c0);
}



// FUNCTION 1427b1aaa FUN_1427b1aaa body=41 status=ok
// SIG undefined FUN_1427b1aaa(void)

void FUN_1427b1aaa(void)

{
  DAT_14c927ab0 = 0;
  if (DAT_14c927aa8 != 0) {
    FUN_1400020a8();
  }
  FUN_146171c56();
  return;
}



// FUNCTION 1427b1ae1 FUN_1427b1ae1 body=123 status=ok
// SIG undefined FUN_1427b1ae1(void)

undefined8 FUN_1427b1ae1(undefined8 param_1,undefined8 param_2)

{
  size_t sVar1;
  undefined1 auStack_878 [40];
  undefined8 local_850;
  wchar_t *local_848;
  undefined4 local_840;
  wchar_t local_838 [1040];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_878;
  local_850 = param_2;
  FUN_14026f16c(&local_850,local_838,0x40b);
  sVar1 = wcslen(local_838);
  local_848 = local_838;
  local_840 = (int)sVar1;
  FUN_146858d2e(param_1);
  if ((local_18 ^ (ulonglong)auStack_878) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427b1b5d FUN_1427b1b5d body=204 status=ok
// SIG undefined FUN_1427b1b5d(void)

ulonglong FUN_1427b1b5d(longlong *param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_858 [40];
  undefined8 local_830;
  ushort local_828 [1036];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_858;
  local_830 = param_2;
  uVar3 = FUN_14026f16c(&local_830,local_828);
  uVar4 = 0;
  if (uVar3 == *(uint *)(param_1 + 1)) {
    if (uVar3 != 0) {
      uVar5 = (ulonglong)uVar3;
      lVar6 = 0;
      do {
        uVar1 = *(ushort *)(*param_1 + lVar6);
        uVar2 = *(ushort *)((longlong)local_828 + lVar6);
        if (uVar1 == uVar2) {
          uVar4 = 0;
          if ((uVar1 == 0) || (uVar5 == 1)) break;
        }
        else {
          if (0x7f < (uVar2 | uVar1)) {
            uVar4 = (ulonglong)((uint)uVar1 - (uint)uVar2);
            break;
          }
          if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
            uVar4 = (ulonglong)
                    ((uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2]
                    );
            break;
          }
          if (uVar5 == 1) {
            uVar4 = 0;
            break;
          }
        }
        uVar5 = uVar5 - 1;
        lVar6 = lVar6 + 2;
      } while( true );
    }
    uVar4 = CONCAT71((int7)(uVar4 >> 8),(int)uVar4 == 0);
  }
  if ((local_10 ^ (ulonglong)auStack_858) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427b1c2a FUN_1427b1c2a body=291 status=ok
// SIG undefined FUN_1427b1c2a(void)

void FUN_1427b1c2a(undefined8 *param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined8 **local_48;
  undefined8 **local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = FUN_1468673b4();
  if (iVar2 == 0x12345678) {
    bVar1 = false;
  }
  else {
    if (iVar2 != 0x12345679) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
    bVar1 = true;
  }
  local_38 = param_1;
  FUN_1468678b9(param_2,&local_38);
  local_38 = (undefined8 *)0x0;
  local_40 = &local_38;
  FUN_14686794e(param_2,&local_40);
  local_40 = (undefined8 **)FUN_14001cc68(local_38,0x10);
  *(undefined8 ***)(param_2 + 0xb8) = local_40;
  local_48 = &local_40;
  FUN_146867a69(param_2);
  memset(*(void **)(param_2 + 0xa0),0,(longlong)*(int *)(param_2 + 0xa8) << 4);
  if (bVar1) {
    FUN_1468673b4(param_1);
    local_38 = param_1;
    FUN_14686742d(param_2);
  }
  else {
    local_38 = param_1;
    FUN_146867672(param_2);
  }
  iVar2 = FUN_1468673b4(param_1);
  if (iVar2 != -0x789abcdf) {
    FUN_14572541c(*param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427b1d60 FUN_1427b1d60 body=303 status=ok
// SIG undefined FUN_1427b1d60(void)

undefined4 * FUN_1427b1d60(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [40];
  undefined8 **local_40;
  longlong **local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)*param_1;
  puVar3 = (ulonglong *)plVar2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar2 + 0x170))(plVar2,&local_30,4);
    }
    else {
      FUN_14572512c(plVar2,&local_30);
    }
    iVar4 = (int)local_30;
  }
  else {
    iVar4 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if (iVar4 == 0x12345678) {
    uVar5 = 0;
  }
  else {
    if (iVar4 != 0x12345679) {
      *(undefined1 *)(param_2 + 1) = 0;
      FUN_14572541c(*param_1);
      goto LAB_1427b1e53;
    }
    uVar5 = 1;
  }
  *param_2 = uVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  local_30 = param_1;
  FUN_14581e322(param_3,&local_30);
  local_30 = (longlong *)0x0;
  local_38 = &local_30;
  FUN_146868223(param_3,&local_38);
  local_38 = (longlong **)FUN_14001cc68(local_30,0x10);
  *(longlong ***)(param_3 + 0xb8) = local_38;
  local_40 = &local_38;
  FUN_14686833e(param_3);
  memset(*(void **)(param_3 + 0xa0),0,(longlong)*(int *)(param_3 + 0xa8) << 4);
LAB_1427b1e53:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427b1e90 FUN_1427b1e90 body=91 status=ok
// SIG undefined FUN_1427b1e90(void)

void FUN_1427b1e90(void)

{
  if (DAT_14c947af8 != 0) {
    if (DAT_14c947af0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c947af0)(DAT_14c947af0,0);
    FUN_1446efa72(&DAT_14c947af0,0,0,0x10);
    DAT_14c947af8 = 0;
  }
  if (DAT_14c947af0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1427b1eeb FUN_1427b1eeb body=91 status=ok
// SIG undefined FUN_1427b1eeb(void)

void FUN_1427b1eeb(void)

{
  if (DAT_14c947b08 != 0) {
    if (DAT_14c947b00 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c947b00)(DAT_14c947b00,0);
    FUN_1446efa72(&DAT_14c947b00,0,0,0x10);
    DAT_14c947b08 = 0;
  }
  if (DAT_14c947b00 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1427b1f46 FUN_1427b1f46 body=69 status=ok
// SIG undefined FUN_1427b1f46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b1f46(void)

{
  _DAT_14c947b70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427b1f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c947b78,1);
  return;
}



// FUNCTION 1427b1f8b FUN_1427b1f8b body=49 status=ok
// SIG undefined FUN_1427b1f8b(void)

void FUN_1427b1f8b(void)

{
  FUN_14686874b(DAT_14c947ba8,DAT_14c947bb0);
  if (DAT_14c947ba8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1427b1fbc FUN_1427b1fbc body=169 status=ok
// SIG undefined FUN_1427b1fbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b1fbc(void)

{
  _DAT_14c947c00 = 0;
  if (DAT_14c947bf8 != 0) {
    FUN_1400020a8();
  }
  _DAT_14c947bc0 = 0;
  if (DAT_14c947bc4 != 0) {
    FUN_14472eb64(&DAT_14c947bb8,0);
  }
  _DAT_14c947be8 = 0xffffffff;
  _DAT_14c947be0 = 0;
  if (0x80 < DAT_14c947be4) {
    DAT_14c947be4 = 0x80;
    FUN_1446efbd8(&DAT_14c947bc8,0);
  }
  if (DAT_14c947bd8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c947bb8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1427b2065 FUN_1427b2065 body=169 status=ok
// SIG undefined FUN_1427b2065(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b2065(void)

{
  _DAT_14c947c50 = 0;
  if (DAT_14c947c48 != 0) {
    FUN_1400020a8();
  }
  _DAT_14c947c10 = 0;
  if (DAT_14c947c14 != 0) {
    FUN_14472eb64(&DAT_14c947c08,0);
  }
  _DAT_14c947c38 = 0xffffffff;
  _DAT_14c947c30 = 0;
  if (0x80 < DAT_14c947c34) {
    DAT_14c947c34 = 0x80;
    FUN_1446efbd8(&DAT_14c947c18,0);
  }
  if (DAT_14c947c28 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c947c08 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1427b210e FUN_1427b210e body=47 status=ok
// SIG undefined FUN_1427b210e(void)

void FUN_1427b210e(void)

{
  DAT_14c947ca0 = 0;
  if (DAT_14c947c98 != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(&DAT_14c947c58);
  return;
}



// FUNCTION 1427b214b FUN_1427b214b body=1415 status=ok
// SIG undefined FUN_1427b214b(void)

longlong FUN_1427b214b(int param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  wchar_t *local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  longlong local_90;
  longlong local_88;
  undefined2 *local_80;
  int local_78;
  code *local_70;
  undefined1 local_68 [8];
  code *local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar4 = *param_2;
  puVar1 = (undefined8 *)(lVar4 + (longlong)param_1 * 0x38);
  uVar7 = *(uint *)(lVar4 + 8 + (longlong)param_1 * 0x38);
  if ((int)uVar7 < 0) {
    lVar4 = *(longlong *)(lVar4 + 0x28 + (ulonglong)~uVar7 * 0x38);
    if ((lVar4 == 0) && (lVar4 = FUN_1427b214b(), lVar4 == 0)) {
      uVar7 = *(uint *)(puVar1 + 1);
      goto LAB_1427b2186;
    }
  }
  else {
LAB_1427b2186:
    lVar4 = 0;
    if (uVar7 != 0) goto LAB_1427b22b2;
  }
  FUN_1400021e4((longlong)puVar1 + 0xc,&local_80);
  puVar8 = local_80;
  if (local_78 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  if (DAT_14c951858 == 0) {
    local_b0 = &local_50;
    local_50 = FUN_1449e2820;
    local_a0 = FUN_14081d0ea;
    local_a8 = FUN_14081d0ea;
    local_b8 = &LAB_1468c5283;
    local_c0 = FUN_142809da0;
    local_c8 = L"Engine";
    local_d0 = (wchar_t *)0x400000000;
    local_d8 = CONCAT44(local_d8._4_4_,0x10000000);
    local_e0 = 8;
    local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,0x50);
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar3 = FUN_140277b32(DAT_14c951858,0,puVar8,0);
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (lVar3 != 0) {
    FUN_1400021e4((longlong)puVar1 + 0x14,&local_80);
    puVar8 = local_80;
    if (local_78 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    if (DAT_14c949118 == 0) {
      local_70 = FUN_140631fbe;
      lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar5;
      FUN_1446f470e(local_68,L"Class",1);
      local_b8 = &LAB_146891e90;
      local_c0 = (code *)&LAB_146273097;
      local_d0 = L"Engine";
      local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,199);
      local_d8 = 0x20;
      local_e0 = 0x10000000;
      local_e8._0_4_ = 8;
      local_b0 = &local_70;
      FUN_14574b4b2(lVar5);
      DAT_14c949118 = lVar5;
      if (DAT_14c951858 == 0) {
        local_b0 = &local_50;
        local_50 = FUN_1449e2820;
        local_a0 = FUN_14081d0ea;
        local_a8 = FUN_14081d0ea;
        local_b8 = &LAB_1468c5283;
        local_c0 = FUN_142809da0;
        local_c8 = L"Engine";
        local_d0 = (wchar_t *)0x400000000;
        local_d8 = CONCAT44(local_d8._4_4_,0x10000000);
        local_e0 = 8;
        local_e8._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar2 = DAT_14c951858;
      lVar5 = DAT_14c949118;
      if (DAT_14c948f88 == 0) {
        local_60 = (code *)&DAT_1427db2a2;
        DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        local_90 = DAT_14c948f88;
        FUN_1446f470e(local_58,L"Struct",1);
        local_b0 = &local_60;
        local_b8 = &LAB_146891313;
        local_c0 = FUN_146272f63;
        local_d0 = L"Engine";
        local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,199);
        local_d8 = 8;
        local_e0 = 0x10000020;
        local_e8._0_4_ = 8;
        FUN_14574b4b2(local_90);
        DAT_14c948f88 = local_90;
        local_88 = DAT_14c927740;
        if (DAT_14c927740 == 0) {
          local_b0 = &local_50;
          local_50 = FUN_1449e2820;
          local_a0 = FUN_14081d0ea;
          local_a8 = FUN_14081d0ea;
          local_b8 = &LAB_146856450;
          local_c0 = FUN_1427b121c;
          local_c8 = L"Engine";
          local_d0 = (wchar_t *)0x0;
          local_d8 = CONCAT44(local_d8._4_4_,0x10000021);
          local_e0 = 8;
          local_e8._0_4_ = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
          local_90 = DAT_14c948f88;
        }
        DAT_14c948f88 = local_90;
        local_88 = DAT_14c927740;
        uVar6 = FUN_1400163b0();
        local_e8 = L"Struct";
        FUN_14574b446(uVar6,local_90,local_88,L"/Script/CoreUObject");
      }
      local_e8 = L"Class";
      FUN_14574b446(DAT_14c948f88,lVar5,lVar2,L"/Script/CoreUObject");
    }
    lVar3 = FUN_140277b32(DAT_14c949118,lVar3,puVar8,0);
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (((lVar3 != 0) && ((*(uint *)(lVar3 + 8) >> 10 & 1) == 0)) &&
       (*(longlong *)(lVar3 + 0x110) != 0)) {
      local_e0 = 0;
      local_e8 = (wchar_t *)((ulonglong)local_e8 & 0xffffffff00000000);
      lVar4 = FUN_140be85e0(lVar3,lVar4,*puVar1,0);
      goto LAB_1427b22b2;
    }
  }
  lVar4 = 0;
LAB_1427b22b2:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1427b26d3 FUN_1427b26d3 body=831 status=ok
// SIG undefined FUN_1427b26d3(void)

longlong * FUN_1427b26d3(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined2 *local_60;
  int local_58;
  code *local_50;
  int local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140056680(&local_60,L"PLACEHOLDER-CLASS_");
  puVar6 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar6 = local_60;
  }
  FUN_140002266(&local_50,L"%s_%s",puVar6,param_3);
  pcVar7 = (code *)&DAT_149dfb77a;
  if (local_48 != 0) {
    pcVar7 = local_50;
  }
  FUN_1446f470e(&local_40,pcVar7,1);
  if (local_50 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (DAT_14c9512b0 == 0) {
    local_50 = FUN_140631fbe;
    local_70 = &LAB_145834656;
    local_78 = &LAB_146272d4c;
    local_88 = &LAB_1468be089;
    local_90 = FUN_14609ba58;
    local_98 = L"Engine";
    local_a0 = 0;
    local_a8 = 0x10000000;
    local_b0 = 8;
    local_b8 = 0x410;
    local_80 = &local_50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"LinkerPlaceholderClass",&DAT_14c9512b0,&DAT_1468be08e);
  }
  local_b8 = 0;
  FUN_140af9fb2(&local_50,param_1,DAT_14c9512b0,local_40);
  pcVar7 = local_50;
  local_40 = local_50;
  if (DAT_14c9512b0 == 0) {
    local_50 = FUN_140631fbe;
    local_70 = &LAB_145834656;
    local_78 = &LAB_146272d4c;
    local_88 = &LAB_1468be089;
    local_90 = FUN_14609ba58;
    local_98 = L"Engine";
    local_a0 = 0;
    local_a8 = 0x10000000;
    local_b0 = 8;
    local_b8 = 0x410;
    local_80 = &local_50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"LinkerPlaceholderClass",&DAT_14c9512b0,&DAT_1468be08e);
  }
  plVar3 = (longlong *)FUN_146868c1c(param_1,DAT_14c9512b0,pcVar7);
  if (param_4 != 0xffffffff) {
    *(uint *)(plVar3 + 0x4b) = ~param_4;
  }
  if (param_2 == 0) {
    *(undefined4 *)((longlong)plVar3 + 0x25c) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)((longlong)plVar3 + 0x25c) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar2 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar5 + 0x10);
      bVar8 = iVar2 == 0;
      if (bVar8) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar2 = iVar4;
      }
    }
  }
  *(int *)(plVar3 + 0x4c) = iVar2;
  (**(code **)(*plVar3 + 0x2a8))(plVar3);
  FUN_140010366(plVar3,1);
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 1427b2a13 FUN_1427b2a13 body=456 status=ok
// SIG undefined FUN_1427b2a13(void)

longlong * FUN_1427b2a13(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140056680(&local_60,L"PLACEHOLDER-FUNCTION_");
  puVar7 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar7 = local_60;
  }
  FUN_140002266(&local_50,L"%s_%s",puVar7,param_3);
  puVar7 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar7 = local_50;
  }
  FUN_1446f470e(&local_40,puVar7,1);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = FUN_14001206a();
  local_68 = 0;
  FUN_140af9fb2(&local_50,param_1,uVar3,local_40);
  local_40 = local_50;
  uVar3 = FUN_14001206a();
  plVar4 = (longlong *)FUN_146868ce1(param_1,uVar3,local_50);
  if (param_4 != 0xffffffff) {
    *(uint *)(plVar4 + 0x1d) = ~param_4;
  }
  if (param_2 == 0) {
    *(undefined4 *)((longlong)plVar4 + 0xec) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)((longlong)plVar4 + 0xec) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar2 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar2 = *(int *)(lVar6 + 0x10);
      bVar8 = iVar2 == 0;
      if (bVar8) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar2 = iVar5;
      }
    }
  }
  *(int *)(plVar4 + 0x1e) = iVar2;
  (**(code **)(*plVar4 + 0x2a8))(plVar4);
  FUN_140010366(plVar4,1);
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 1427b2bdc FUN_1427b2bdc body=1945 status=ok
// SIG undefined FUN_1427b2bdc(void)

undefined8 FUN_1427b2bdc(longlong param_1,longlong param_2,longlong param_3,wchar_t *param_4)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  size_t sVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined1 auStack_148 [32];
  wchar_t *local_128;
  undefined4 local_120;
  undefined8 local_118;
  wchar_t *local_110;
  wchar_t *local_108;
  code *local_100;
  undefined1 *local_f8;
  code **local_f0;
  code *local_e8;
  code *local_e0;
  longlong local_d0;
  longlong local_c8;
  wchar_t *local_c0;
  undefined4 local_b8;
  undefined8 local_b0 [2];
  wchar_t *local_a0;
  undefined4 local_98;
  wchar_t *local_90;
  undefined4 local_88;
  longlong local_80;
  longlong *local_78;
  code *local_70;
  longlong **local_68;
  code *local_60;
  uint local_58 [2];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_78 = (longlong *)0x0;
  cVar3 = FUN_14685b91a();
  if ((cVar3 != '\0') && ((*(byte *)(param_1 + 0x2d2) & 0x10) != 0)) {
    FUN_1446f470e(&local_80,param_4,1);
    if (*(int *)(param_1 + 0x420) != *(int *)(param_1 + 0x44c)) {
      uVar1 = (uint)((ulonglong)local_80 >> 0x10);
      uVar8 = (uint)local_80 & 0xffff;
      lVar7 = param_1 + 0x450;
      if (*(longlong *)(param_1 + 0x458) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x458);
      }
      iVar9 = *(int *)(lVar7 + (ulonglong)
                               (*(int *)(param_1 + 0x460) - 1U &
                               (int)((ulonglong)local_80 >> 0x20) + ((uint)local_80 << 0x10 | uVar8)
                               + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar8 >> 4)) * 4);
      if (iVar9 != -1) {
        do {
          plVar10 = (longlong *)(*(longlong *)(param_1 + 0x418) + (longlong)iVar9 * 0x18);
          if (*plVar10 == local_80) {
            if (plVar10 + 1 != (longlong *)0x0 && plVar10 != (longlong *)0x0) {
              plVar10 = (longlong *)plVar10[1];
              local_78 = plVar10;
              goto LAB_1427b2e9b;
            }
            break;
          }
          iVar9 = (int)plVar10[2];
        } while (iVar9 != -1);
      }
    }
    if (DAT_14c949118 == 0) {
      local_60 = FUN_140631fbe;
      lVar7 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar7;
      FUN_1446f470e(local_58,L"Class",1);
      local_f8 = &LAB_146891e90;
      local_100 = (code *)&LAB_146273097;
      local_110 = L"Engine";
      local_108 = (wchar_t *)CONCAT44(local_108._4_4_,199);
      local_118 = 0x20;
      local_120 = 0x10000000;
      local_128._0_4_ = 8;
      local_f0 = &local_60;
      FUN_14574b4b2(lVar7);
      DAT_14c949118 = lVar7;
      if (DAT_14c951858 == 0) {
        local_f0 = &local_70;
        local_70 = FUN_1449e2820;
        local_e0 = FUN_14081d0ea;
        local_e8 = FUN_14081d0ea;
        local_f8 = &LAB_1468c5283;
        local_100 = FUN_142809da0;
        local_108 = L"Engine";
        local_110 = (wchar_t *)0x400000000;
        local_118 = CONCAT44(local_118._4_4_,0x10000000);
        local_120 = 8;
        local_128._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar4 = DAT_14c951858;
      lVar7 = DAT_14c949118;
      if (DAT_14c948f88 == 0) {
        local_50 = (code *)&DAT_1427db2a2;
        DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        local_d0 = DAT_14c948f88;
        FUN_1446f470e(local_b0,L"Struct",1);
        local_f0 = &local_50;
        local_f8 = &LAB_146891313;
        local_100 = FUN_146272f63;
        local_110 = L"Engine";
        local_108 = (wchar_t *)CONCAT44(local_108._4_4_,199);
        local_118 = 8;
        local_120 = 0x10000020;
        local_128._0_4_ = 8;
        FUN_14574b4b2(local_d0);
        DAT_14c948f88 = local_d0;
        local_c8 = DAT_14c927740;
        if (DAT_14c927740 == 0) {
          local_f0 = &local_70;
          local_70 = FUN_1449e2820;
          local_e0 = FUN_14081d0ea;
          local_e8 = FUN_14081d0ea;
          local_f8 = &LAB_146856450;
          local_100 = FUN_1427b121c;
          local_108 = L"Engine";
          local_110 = (wchar_t *)0x0;
          local_118 = CONCAT44(local_118._4_4_,0x10000021);
          local_120 = 8;
          local_128._0_4_ = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
          local_d0 = DAT_14c948f88;
        }
        DAT_14c948f88 = local_d0;
        local_c8 = DAT_14c927740;
        uVar6 = FUN_1400163b0();
        local_128 = L"Struct";
        FUN_14574b446(uVar6,local_d0,local_c8,L"/Script/CoreUObject");
      }
      local_128 = L"Class";
      FUN_14574b446(DAT_14c948f88,lVar7,lVar4,L"/Script/CoreUObject");
      if (DAT_14c949118 == 0) goto LAB_1427b3031;
    }
    if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(param_3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8)
        == DAT_14c949118 + 0x30)) {
      if (param_2 != 0) {
        lVar7 = *(longlong *)(param_2 + 8);
        lVar4 = FUN_140019cf2();
        if (*(ulonglong *)(lVar4 + 8) == 0) {
          bVar12 = lVar7 != 0;
          if (lVar7 != lVar4 && bVar12) {
            do {
              lVar7 = *(longlong *)(lVar7 + 0x30);
              bVar12 = lVar7 != 0;
              if (lVar7 == lVar4) break;
            } while (lVar7 != 0);
          }
          if (bVar12) goto LAB_1427b2d86;
        }
        else if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) {
LAB_1427b2d86:
          lVar7 = *(longlong *)(param_2 + 0x78);
          if (lVar7 != 0) {
            lVar4 = *(longlong *)(lVar7 + 0x10);
            if (DAT_14c9512b0 == 0) {
              local_f0 = &local_70;
              local_70 = FUN_140631fbe;
              local_e0 = (code *)&LAB_145834656;
              local_e8 = (code *)&LAB_146272d4c;
              local_f8 = &LAB_1468be089;
              local_100 = FUN_14609ba58;
              local_108 = L"Engine";
              local_110 = (wchar_t *)0x0;
              local_118 = CONCAT44(local_118._4_4_,0x10000000);
              local_120 = 8;
              local_128 = (wchar_t *)CONCAT44(local_128._4_4_,0x410);
              FUN_14081cfa3(L"/Script/CoreUObject",L"LinkerPlaceholderClass",&DAT_14c9512b0,
                            &DAT_1468be08e);
              lVar7 = *(longlong *)(param_2 + 0x78);
              if (lVar7 != 0) goto LAB_1427b2da8;
            }
            else {
LAB_1427b2da8:
              if ((((DAT_14c9512b0 != 0) && (lVar2 = *(longlong *)(lVar7 + 0x10), lVar2 != 0)) &&
                  (*(int *)(DAT_14c9512b0 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
                 (*(longlong *)
                   (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14c9512b0 + 0x38) * 8) ==
                  DAT_14c9512b0 + 0x30)) {
                if (*(int *)(lVar7 + 0x260) == 0) {
LAB_1427b2f2b:
                  lVar4 = 0;
                }
                else {
                  uVar1 = *(uint *)(lVar7 + 0x25c);
                  lVar4 = 0;
                  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
                    plVar10 = (longlong *)
                              ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                    if ((plVar10 == (longlong *)0x0) ||
                       (((int)plVar10[2] != *(int *)(lVar7 + 0x260) ||
                        ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_1427b2f2b;
                    lVar4 = *plVar10;
                  }
                }
              }
            }
            if (lVar4 != 0) {
              param_3 = lVar4;
            }
          }
        }
      }
      if (param_4 == (wchar_t *)0x0) {
        uVar11 = 0;
      }
      else {
        sVar5 = wcslen(param_4);
        uVar11 = (int)sVar5;
      }
      local_90 = param_4;
      local_88 = uVar11;
      cVar3 = FUN_14475c62c();
      if ((cVar3 == '\0') && ((*(byte *)(param_3 + 0xd6) & 2) != 0)) {
        local_58[0] = 0;
        local_a0 = param_4;
        local_98 = uVar11;
        cVar3 = FUN_1468b7d34();
        if (cVar3 == '\0') {
          plVar10 = (longlong *)0x0;
        }
        else {
          local_c0 = param_4;
          local_b8 = uVar11;
          FUN_146872833(local_b0);
          lVar7 = FUN_1427b26d3(*(undefined8 *)(param_1 + 0xa0),param_3,local_b0[0],~local_58[0]);
          local_78 = (longlong *)(lVar7 + 0x250);
          if (lVar7 == 0) {
            local_78 = (longlong *)0x0;
          }
          local_68 = &local_78;
          local_70 = (code *)&local_80;
          FUN_146869484((longlong *)(param_1 + 0x418),&local_50);
          plVar10 = local_78;
        }
LAB_1427b2e9b:
        if (plVar10 != (longlong *)0x0) {
          uVar6 = (**(code **)(*plVar10 + 0x18))();
          goto LAB_1427b3033;
        }
      }
    }
  }
LAB_1427b3031:
  uVar6 = 0;
LAB_1427b3033:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1427b3376 FUN_1427b3376 body=151 status=ok
// SIG undefined FUN_1427b3376(void)

undefined8 FUN_1427b3376(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_1;
  local_28 = param_2;
  cVar2 = FUN_141016ec0(lVar1);
  if (cVar2 == '\0') {
LAB_1427b33ed:
    uVar3 = 0;
  }
  else {
    if ((longlong)*(int *)(lVar1 + 0xb0) != 0) {
      lVar4 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar1 + 0xa8) + lVar4) == param_2) goto LAB_1427b33ed;
        lVar4 = lVar4 + 8;
      } while ((longlong)*(int *)(lVar1 + 0xb0) * 8 != lVar4);
    }
    FUN_14686a35a(lVar1 + 0xb8,&local_28,param_1 + 1);
    uVar3 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427b340e FUN_1427b340e body=228 status=ok
// SIG undefined FUN_1427b340e(void)

undefined8 FUN_1427b340e(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  uint7 uVar6;
  undefined8 extraout_RAX;
  byte bVar7;
  bool bVar8;
  
  cVar3 = FUN_141016ec0(param_1,param_3);
  if ((cVar3 == '\0') && ((*(uint *)(param_3 + 8) >> 10 & 1) == 0)) {
    uVar5 = CONCAT71((uint7)(uint3)(*(uint *)(param_3 + 8) >> 8),1);
    if ((*(uint *)(param_3 + 8) >> 0x13 & 1) == 0) {
      return uVar5;
    }
    if ((*(uint *)(param_3 + 8) >> 0x15 & 1) != 0) {
      return uVar5;
    }
  }
  iVar1 = *(int *)(param_2 + 0xc);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
  iVar4 = iVar1 + 0xffff;
  if (-1 < iVar1) {
    iVar4 = iVar1;
  }
  if ((iVar4 >> 0x10 < DAT_14c964390) &&
     (lVar2 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar4 >> 0x10) * 0x10), lVar2 != 0)) {
    lVar2 = *(longlong *)(lVar2 + (longlong)(iVar1 % 0x10000) * 0x10);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
    if (lVar2 != 0) {
      bVar8 = (*(uint *)(lVar2 + 0x2d0) >> 0x14 & 1) == 0;
      uVar6 = (uint7)((ulonglong)extraout_RAX >> 8);
      bVar7 = 1;
      if ((*(uint *)(param_2 + 8) >> 0x15 & 1) != 0) {
        if (*(int *)(lVar2 + 0x400) == -1) {
          bVar7 = *(byte *)(lVar2 + 0x3fc) ^ 1;
        }
        else {
          bVar7 = 0;
        }
      }
      goto LAB_1427b347f;
    }
  }
  else {
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
  }
  uVar6 = (uint7)(uint3)((uint)*(undefined4 *)(param_2 + 8) >> 8);
  bVar8 = true;
  bVar7 = 1;
LAB_1427b347f:
  return CONCAT71(uVar6,bVar8 & bVar7);
}



// FUNCTION 1427b3552 FUN_1427b3552 body=32 status=ok
// SIG undefined FUN_1427b3552(void)

undefined8 FUN_1427b3552(undefined8 param_1,longlong *param_2)

{
  FUN_1400021e4(*param_2 + 0x10,param_1);
  return param_1;
}



// FUNCTION 1427b359c FUN_1427b359c body=590 status=ok
// SIG undefined FUN_1427b359c(void)

undefined8 FUN_1427b359c(uint param_1,uint param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  wchar_t *_Str2;
  undefined4 extraout_var;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  wchar_t *_Str1;
  uint uVar14;
  bool bVar15;
  
  if ((param_1 & 7) == (param_2 & 7)) {
    switch(param_1 & 7) {
    case 0:
      lVar9 = (longlong)*(int *)(*(longlong *)(param_4 + 0x20) + (ulonglong)(param_2 >> 3) * 4) +
              *(longlong *)(param_4 + 0x30);
      lVar13 = 0;
      do {
        bVar1 = *(byte *)((longlong)
                          *(int *)(*(longlong *)(param_3 + 0x20) + (ulonglong)(param_1 >> 3) * 4) +
                          *(longlong *)(param_3 + 0x30) + lVar13);
        bVar2 = *(byte *)(lVar9 + lVar13);
        if (bVar1 == bVar2) {
          iVar5 = 0;
          if (bVar1 == 0) goto LAB_1427b37d7;
        }
        else {
          if (0x7f < (bVar2 | bVar1)) {
            iVar5 = (uint)bVar1 - (uint)bVar2;
            goto LAB_1427b37d7;
          }
          if ((&DAT_149e05da0)[bVar1] != (&DAT_149e05da0)[(uint)bVar2]) goto LAB_1427b37d4;
        }
        lVar13 = lVar13 + 1;
      } while( true );
    case 1:
      lVar9 = (longlong)*(int *)(*(longlong *)(param_4 + 0x40) + (ulonglong)(param_2 >> 3) * 4) * 2
              + *(longlong *)(param_4 + 0x50);
      lVar13 = 0;
      while( true ) {
        uVar3 = *(ushort *)
                 ((longlong)*(int *)(*(longlong *)(param_3 + 0x40) + (ulonglong)(param_1 >> 3) * 4)
                  * 2 + *(longlong *)(param_3 + 0x50) + lVar13);
        uVar10 = (uint)uVar3;
        uVar4 = *(ushort *)(lVar9 + lVar13);
        uVar14 = (uint)uVar4;
        if (uVar3 != uVar4) {
          if ((uVar4 | uVar3) < 0x80) {
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar4];
            if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_1427b3707;
          }
          iVar5 = uVar10 - uVar14;
          goto LAB_1427b37d0;
        }
        if (uVar3 == 0) break;
LAB_1427b3707:
        lVar13 = lVar13 + 2;
      }
      iVar5 = 0;
LAB_1427b37d0:
      bVar15 = iVar5 == 0;
      break;
    case 2:
      lVar9 = *(longlong *)(param_4 + 0x60);
      bVar15 = *(int *)(*(longlong *)(param_3 + 0x60) + (ulonglong)(param_1 >> 3) * 4) ==
               *(int *)(lVar9 + (ulonglong)(param_2 >> 3) * 4);
      break;
    case 3:
      lVar9 = *(longlong *)(param_4 + 0x70);
      bVar15 = *(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_1 & 0xfffffff8)) ==
               *(longlong *)(lVar9 + (ulonglong)(param_2 & 0xfffffff8));
      break;
    case 4:
      lVar9 = *(longlong *)(param_4 + 0x80);
      lVar11 = (ulonglong)(param_2 >> 3) * 0x10;
      lVar13 = *(longlong *)(param_3 + 0x80);
      lVar7 = (ulonglong)(param_1 >> 3) * 0x10;
      bVar15 = *(int *)(lVar13 + 0xc + lVar7) == *(int *)(lVar9 + 0xc + lVar11) &&
               (*(int *)(lVar13 + 8 + lVar7) == *(int *)(lVar9 + 8 + lVar11) &&
               (*(int *)(lVar13 + 4 + lVar7) == *(int *)(lVar9 + 4 + lVar11) &&
               *(int *)(lVar13 + lVar7) == *(int *)(lVar9 + lVar11)));
      break;
    case 5:
      uVar12 = (ulonglong)(param_2 >> 3);
      lVar9 = *(longlong *)(param_4 + 0x90);
      uVar8 = (ulonglong)(param_1 >> 3);
      lVar13 = *(longlong *)(param_3 + 0x90);
      bVar15 = *(longlong *)(lVar13 + 0x20 + uVar8 * 0x28) ==
               *(longlong *)(lVar9 + 0x20 + uVar12 * 0x28) &&
               (*(longlong *)(lVar13 + 0x18 + uVar8 * 0x28) ==
                *(longlong *)(lVar9 + 0x18 + uVar12 * 0x28) &&
               (*(longlong *)(lVar9 + 8 + uVar12 * 0x28) == *(longlong *)(lVar13 + 8 + uVar8 * 0x28)
               && *(longlong *)(lVar13 + uVar8 * 0x28) == *(longlong *)(lVar9 + uVar12 * 0x28)));
      break;
    case 6:
      lVar13 = (ulonglong)(param_2 >> 3) * 0x10;
      lVar9 = (ulonglong)(param_1 >> 3) * 0x10;
      _Str2 = L"";
      _Str1 = L"";
      if (*(int *)(*(longlong *)(param_3 + 0xa0) + 8 + lVar9) != 0) {
        _Str1 = *(wchar_t **)(*(longlong *)(param_3 + 0xa0) + lVar9);
      }
      if (*(int *)(*(longlong *)(param_4 + 0xa0) + 8 + lVar13) != 0) {
        _Str2 = *(wchar_t **)(*(longlong *)(param_4 + 0xa0) + lVar13);
      }
      iVar5 = wcscmp(_Str1,_Str2);
      lVar9 = CONCAT44(extraout_var,iVar5);
      bVar15 = iVar5 == 0;
      break;
    case 7:
      goto switchD_1427b35c5_caseD_7;
    }
LAB_1427b37da:
    uVar6 = CONCAT71((int7)((ulonglong)lVar9 >> 8),bVar15);
  }
  else {
switchD_1427b35c5_caseD_7:
    uVar6 = 0;
  }
  return uVar6;
LAB_1427b37d4:
  iVar5 = (uint)(byte)(&DAT_149e05da0)[bVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)bVar2];
LAB_1427b37d7:
  bVar15 = iVar5 == 0;
  goto LAB_1427b37da;
}



// FUNCTION 1427b37ea FUN_1427b37ea body=276 status=ok
// SIG undefined FUN_1427b37ea(void)

void FUN_1427b37ea(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_108 [32];
  undefined ***local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined **local_d0 [5];
  byte local_a8;
  longlong *local_78;
  longlong local_58;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  memset(local_d0,0,0x90);
  FUN_144869430(local_d0);
  local_40 = 0;
  local_d0[0] = &PTR_FUN_149e1e050;
  local_30 = 0x7fffffffffffffff;
  local_a8 = local_a8 | 1;
  local_38 = param_1;
  FUN_1449c2eca(local_d0,0);
  local_e0 = 0;
  uStack_d8 = 0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  local_28 = *(undefined4 *)(lVar1 + 0xa0);
  uStack_24 = *(undefined4 *)(lVar1 + 0xa4);
  uStack_20 = *(undefined4 *)(lVar1 + 0xa8);
  uStack_1c = *(undefined4 *)(lVar1 + 0xac);
  local_e8 = local_d0;
  FUN_145ed13a8();
  local_d0[0] = &PTR__purecall_149e35f70;
  if (local_78 != (longlong *)0x0) {
    if (*local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_78);
  }
  if (local_58 != 0) {
    if (*(longlong *)(local_58 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_58);
  }
  if ((local_18 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427b390a FUN_1427b390a body=12 status=ok
// SIG undefined FUN_1427b390a(void)

void FUN_1427b390a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001427b3913. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1427b3916 FUN_1427b3916 body=93 status=ok
// SIG undefined FUN_1427b3916(void)

undefined8 * FUN_1427b3916(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  
  *param_1 = &PTR_LAB_149e5dd00;
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 0xc0);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_14587a8e6(lVar2);
      FUN_1400020a8(lVar2);
    }
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427b399a FUN_1427b399a body=125 status=ok
// SIG undefined FUN_1427b399a(void)

void FUN_1427b399a(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  uint local_38;
  undefined4 local_34;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_1;
  local_38 = (uint)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20) & 0x7fffffff;
  local_34 = (undefined4)*(undefined8 *)(param_2 + 8);
  FUN_140af6904(&local_38,local_30);
  FUN_140af67e0(uVar1,param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427b3a18 FUN_1427b3a18 body=255 status=ok
// SIG undefined FUN_1427b3a18(void)

undefined4 * FUN_1427b3a18(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar8;
  param_1[6] = uVar9;
  param_1[7] = uVar10;
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  *(undefined8 *)(param_1 + 0x48) = 0;
  puVar12 = param_2 + 8;
  if (*(undefined4 **)(param_2 + 0x48) != (undefined4 *)0x0) {
    puVar12 = *(undefined4 **)(param_2 + 0x48);
  }
  FUN_146869bb8(param_1 + 8,puVar12,param_2[0x4a],0);
  FUN_146869b42(param_1 + 0x4c,param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  lVar2 = *(longlong *)(param_2 + 0x74);
  *(longlong *)(param_1 + 0x74) = lVar2;
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (lVar2 != 0) {
    puVar11 = (undefined8 *)(param_2 + 0x7c);
    if (*(undefined8 **)(param_2 + 0x78) != (undefined8 *)0x0) {
      puVar11 = *(undefined8 **)(param_2 + 0x78);
    }
    (**(code **)*puVar11)(puVar11,param_1 + 0x78);
  }
  *(undefined8 *)(param_1 + 0x84) = 0;
  iVar1 = param_2[0x86];
  uVar3 = *(undefined8 *)(param_2 + 0x84);
  param_1[0x86] = iVar1;
  if (iVar1 == 0) {
    param_1[0x87] = 0;
  }
  else {
    FUN_146869ee0(param_1 + 0x84,iVar1);
    FUN_146869f38(*(undefined8 *)(param_1 + 0x84),uVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 1427b3b17 FUN_1427b3b17 body=2076 status=ok
// SIG undefined FUN_1427b3b17(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b3b17(void)

{
  char *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined **ppuStack_90;
  undefined8 local_88;
  char *local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = 0;
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CoreUObject",&PTR_FUN_149e5a2a0,1,0);
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_149e5a870;
  local_98 = 3;
  FUN_14282b410(L"/Script/CoreUObject",0,0,&PTR_FUN_149e5a890);
  FUN_14098d3d2(FUN_1427b140b,L"/Script/CoreUObject",L"EFallbackEnum",&DAT_14c927838);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 2;
  FUN_14282b410(L"/Script/CoreUObject",0,0,&PTR_FUN_149e5aa30);
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_149e5ac40;
  local_98 = 0;
  FUN_14282b410(L"/Script/CoreUObject",&PTR_FUN_149e5ac60,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CoreUObject",&PTR_FUN_149e5afd0,1,0);
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_149e5b110 + lVar5),L"/Script/CoreUObject",
                  *(undefined8 *)((longlong)&PTR_u_EVersePackageScope_149e5b118 + lVar5),
                  *(undefined8 *)((longlong)&PTR_DAT_149e5b120 + lVar5));
    lVar5 = lVar5 + 0x20;
  } while (lVar5 != 0x40);
  ppuStack_90 = &PTR_FUN_149e5b640;
  local_98 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/CoreUObject",&PTR_FUN_149e5b6a0,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CoreUObject",&PTR_FUN_149e5bd90,1,0);
  FUN_1446f470e(&local_70,L"AssetBundleData",1);
  FUN_1446f470e(&local_78,L"/Script/CoreUObject",1);
  uVar2 = local_70;
  pcVar1 = local_78;
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar4[1] = 0x800000010;
  *puVar4 = &PTR_FUN_149e5d630;
  local_68 = pcVar1;
  uStack_60 = uVar2;
  FUN_1427dc50a(&local_68,puVar4);
  DAT_14c927970 = L"(BundleName=\"";
  DAT_14c927978 = 0xd;
  DAT_14c927980 = L",BundleAssets=(";
  DAT_14c927988 = 0xf;
  DAT_14c927990 = L",AssetPaths=(";
  DAT_14c927998 = 0xd;
  DAT_14c9279a0 = L",AssetPaths=";
  DAT_14c9279a8 = 0xc;
  DAT_14c9279b0 = &DAT_149e5be2a;
  DAT_14c9279b8 = 2;
  DAT_14c9279c0 = L"(Bundles=(";
  DAT_14c9279c8 = 10;
  DAT_14c9279d0 = &DAT_149e5be2a;
  DAT_14c9279d8 = 2;
  DAT_14c9279e0 = L"(Bundles=)";
  DAT_14c9279e8 = 10;
  DAT_14c9279f0 = &DAT_149e06144;
  DAT_14c9279f8 = 1;
  FUN_1446f470e(&local_70,L"ARFilter",1);
  FUN_1446f470e(&local_78,L"/Script/CoreUObject",1);
  uVar2 = local_70;
  pcVar1 = local_78;
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar4[1] = 0x800000150;
  *puVar4 = &PTR_FUN_149e5d7a0;
  local_68 = pcVar1;
  uStack_60 = uVar2;
  FUN_1427dc50a(&local_68,puVar4);
  FUN_1446f470e(&local_70,L"AssetData",1);
  FUN_1446f470e(&local_78,L"/Script/CoreUObject",1);
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar4[1] = 0x800000070;
  *puVar4 = &PTR_FUN_149e5d910;
  local_68 = local_78;
  uStack_60 = local_70;
  FUN_1427dc50a(&local_68,puVar4);
  local_68 = (char *)0xe9b0493a717f9ee7;
  uStack_60._0_4_ = 0x88b39132;
  uStack_60._4_4_ = 0x1b388107;
  _DAT_14c927a00 = 0x717f9ee7;
  uRam000000014c927a04 = 0xe9b0493a;
  uRam000000014c927a08 = 0x88b39132;
  uRam000000014c927a0c = 0x1b388107;
  FUN_141005458(&local_68,0x13,L"AssetRegistry",0);
  atexit((_func_5014 *)&LAB_1427b158c);
  local_68 = "AssetBundleData";
  uStack_60 = CONCAT35(uStack_60._5_3_,0xf);
  uVar3 = FUN_14001a6c0(&local_68,1);
  DAT_14c947cd0 = (ulonglong)uVar3;
  DAT_14c927a30 = 0;
  DAT_14c927a38 = 0;
  DAT_14c927a10 = 0;
  _DAT_14c927a18 = 0;
  _DAT_14c927a3c = 0xffffffff00000080;
  _DAT_14c927a44 = 0;
  DAT_14c927a50 = 0;
  DAT_14c927a58 = 0;
  InitializeSRWLock((PSRWLOCK)&DAT_14c927a60);
  atexit(FUN_1427b1598);
  DAT_14c927a88 = 0;
  DAT_14c927a90 = 0;
  DAT_14c927a68 = 0;
  _DAT_14c927a70 = 0;
  _DAT_14c927a94 = 0xffffffff00000080;
  DAT_14c927a9c = 0;
  DAT_14c927aa8 = 0;
  DAT_14c927ab0 = 0;
  InitializeSRWLock((PSRWLOCK)&DAT_14c927ab8);
  atexit(FUN_1427b1aaa);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c927ac0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c927ac0,4000);
  memset(&DAT_14c927ae8,0,0x20004);
  atexit((_func_5014 *)&LAB_1427b1ad3);
  DAT_14c947af0 = 0;
  DAT_14c947af8 = 0;
  atexit(FUN_1427b1e90);
  DAT_14c947b00 = 0;
  DAT_14c947b08 = 0;
  atexit(FUN_1427b1eeb);
  FUN_1446f470e(&DAT_14c947b10,L"GeneratedClass",1);
  FUN_1446f470e(&DAT_14c947d08,L"ParentClass",1);
  FUN_1446f470e(&DAT_14c947d10,L"NativeParentClass",1);
  FUN_1446f470e(&DAT_14c947d18,L"ClassFlags",1);
  FUN_1446f470e(&DAT_14c947b18,L"BlueprintType",1);
  FUN_1446f470e(&DAT_14c947b20,L"BlueprintDescription",1);
  FUN_1446f470e(&DAT_14c947b28,L"BlueprintDisplayName",1);
  FUN_1446f470e(&DAT_14c947b30,L"BlueprintCategory",1);
  FUN_1446f470e(&DAT_14c947b38,L"IsDataOnly",1);
  FUN_1446f470e(&DAT_14c947d00,L"ImplementedInterfaces",1);
  FUN_1446f470e(&DAT_14c947b40,L"FiBData",1);
  FUN_1446f470e(&DAT_14c947b48,&DAT_149e5c892,1);
  FUN_1446f470e(&DAT_14c947b50,L"NumReplicatedProperties",1);
  FUN_1446f470e(&DAT_14c947b58,L"NativeComponents",1);
  FUN_1446f470e(&DAT_14c947b60,L"BlueprintComponents",1);
  FUN_1446f470e(&DAT_14c947b68,L"BlueprintPath",1);
  local_68 = (char *)CONCAT71(local_68._1_7_,1);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14c947b70,L"linker.EnableFullBlueprintPreloading",&local_68,
                L"If true, Blueprint class regeneration will perform a complete preload of all dependencies."
               );
  atexit(FUN_1427b1f46);
  DAT_14c947ba8 = 0;
  _DAT_14c947bb0 = 0;
  atexit(FUN_1427b1f8b);
  DAT_14c947bd8 = 0;
  _DAT_14c947be0 = 0;
  DAT_14c947bb8 = 0;
  _DAT_14c947bc0 = 0;
  _DAT_14c947be4 = 0xffffffff00000080;
  _DAT_14c947bec = 0;
  DAT_14c947bf8 = 0;
  _DAT_14c947c00 = 0;
  atexit(FUN_1427b1fbc);
  DAT_14c947c28 = 0;
  _DAT_14c947c30 = 0;
  DAT_14c947c08 = 0;
  _DAT_14c947c10 = 0;
  _DAT_14c947c34 = 0xffffffff00000080;
  _DAT_14c947c3c = 0;
  DAT_14c947c48 = 0;
  _DAT_14c947c50 = 0;
  atexit(FUN_1427b2065);
  _DAT_14c947c78 = 0;
  DAT_14c947c80 = 0;
  DAT_14c947c58 = 0;
  _DAT_14c947c60 = 0;
  _DAT_14c947c84 = 0xffffffff00000080;
  DAT_14c947c8c = 0;
  DAT_14c947c98 = 0;
  DAT_14c947ca0 = 0;
  atexit(FUN_1427b210e);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c947ca8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c947ca8,4000);
  atexit((_func_5014 *)&LAB_1427b213d);
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427b4334 FUN_1427b4334 body=47 status=ok
// SIG undefined FUN_1427b4334(void)

void FUN_1427b4334(void)

{
  DAT_14c947d70 = 0;
  if (DAT_14c947d68 != 0) {
    FUN_1400020a8();
  }
  FUN_140201ac2(&DAT_14c947d28);
  return;
}



// FUNCTION 1427b4363 FUN_1427b4363 body=47 status=ok
// SIG undefined FUN_1427b4363(void)

void FUN_1427b4363(void)

{
  DAT_14c947dc8 = 0;
  if (DAT_14c947dc0 != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(&DAT_14c947d80);
  return;
}



// FUNCTION 1427b4392 FUN_1427b4392 body=10 status=ok
// SIG undefined FUN_1427b4392(void)

void FUN_1427b4392(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001427b4399. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



// FUNCTION 1427b43d1 FUN_1427b43d1 body=69 status=ok
// SIG undefined FUN_1427b43d1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b43d1(void)

{
  _DAT_14c947e00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427b4413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c947e08,1);
  return;
}



// FUNCTION 1427b4416 FUN_1427b4416 body=45 status=ok
// SIG undefined FUN_1427b4416(void)

void FUN_1427b4416(void)

{
  if (DAT_14c947e58 != (longlong *)0x0) {
    (**(code **)(*DAT_14c947e58 + 8))(DAT_14c947e58,1);
  }
  DAT_14c947e58 = (longlong *)0x0;
  return;
}



// FUNCTION 1427b4443 FUN_1427b4443 body=41 status=ok
// SIG undefined FUN_1427b4443(void)

void FUN_1427b4443(void)

{
  DAT_14c947ec8 = 0;
  if (DAT_14c947ec0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d61b04();
  return;
}



// FUNCTION 1427b446c FUN_1427b446c body=41 status=ok
// SIG undefined FUN_1427b446c(void)

void FUN_1427b446c(void)

{
  DAT_14c947f18 = 0;
  if (DAT_14c947f10 != 0) {
    FUN_1400020a8();
  }
  FUN_145d61ba2();
  return;
}



// FUNCTION 1427b4496 FUN_1427b4496 body=786 status=ok
// SIG undefined FUN_1427b4496(void)

undefined8
FUN_1427b4496(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar11 = *(ulonglong *)(param_2 + 0xc);
  uVar6 = 0;
  if (uVar11 != DAT_14c947e78) {
    if (DAT_14c947e88 != DAT_14c947eb4) {
      puVar8 = &DAT_14c947eb8;
      if (DAT_14c947ec0 != (undefined *)0x0) {
        puVar8 = DAT_14c947ec0;
      }
      uVar3 = *(uint *)(puVar8 + (ulonglong)(DAT_14c947ec8 - 1U & *(uint *)(param_1 + 0x70)) * 4);
      while (uVar3 != 0xffffffff) {
        puVar1 = (uint *)(DAT_14c947e80 + (longlong)(int)uVar3 * 0x18);
        if (*puVar1 == *(uint *)(param_1 + 0x70)) {
          if ((puVar1 != (uint *)0x0) && (*(code **)(puVar1 + 2) != (code *)0x0)) {
            cVar4 = (**(code **)(puVar1 + 2))
                              (param_2,param_3,
                               (longlong)*(int *)(param_1 + 0x34) *
                               (longlong)*(int *)(param_2 + 0x40) +
                               *(int *)(param_1 + 0x44) + param_4,param_5);
            uVar6 = 3;
            if (cVar4 != '\0') goto LAB_1427b44bf;
            uVar11 = *(ulonglong *)(param_2 + 0xc);
          }
          break;
        }
        uVar3 = puVar1[4];
      }
    }
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    if (uVar11 == DAT_14c892b58) {
      local_48 = (longlong *)0x0;
      (**(code **)(**(longlong **)(*param_3 + 8) + 0x160))();
      param_4 = param_4 + *(int *)(param_1 + 0x44);
      lVar5 = (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40);
      iVar2 = *(int *)(param_1 + 0x70);
      if (*(int *)(lVar5 + 8 + param_4) != iVar2) {
        *(undefined8 *)(param_4 + 0x10 + lVar5) = 0;
      }
      *(int *)(param_4 + 8 + lVar5) = iVar2;
      if (*(longlong **)(param_4 + lVar5) != local_48) {
        *(undefined8 *)(param_4 + 0x10 + lVar5) = 0;
      }
      *(longlong **)(param_4 + lVar5) = local_48;
    }
    else if (*(ulonglong *)(param_2 + 0xc) == (ulonglong)DAT_14c892b74) {
      local_48 = (longlong *)0x0;
      uStack_40 = 0;
      FUN_14021219d(*(undefined8 *)(*param_3 + 8));
      param_4 = param_4 + *(int *)(param_1 + 0x44);
      lVar5 = (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40);
      iVar2 = *(int *)(param_1 + 0x70);
      if (*(int *)(lVar5 + 8 + param_4) != iVar2) {
        *(undefined8 *)(param_4 + 0x10 + lVar5) = 0;
      }
      *(int *)(param_4 + 8 + lVar5) = iVar2;
      plVar9 = local_48;
      if ((int)uStack_40 == 0) {
        plVar9 = (longlong *)&DAT_149dfb77a;
      }
      FUN_1446f470e(&local_50,plVar9,1);
      if (*(longlong *)(param_4 + lVar5) != local_50) {
        *(undefined8 *)(param_4 + 0x10 + lVar5) = 0;
      }
      *(longlong *)(param_4 + lVar5) = local_50;
      if (local_48 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      uVar6 = 0;
      if (*(ulonglong *)(param_2 + 0xc) != (ulonglong)DAT_14c892b78) goto LAB_1427b44bf;
      FUN_144a5dc74(&local_48);
      (**(code **)(**(longlong **)(*param_3 + 8) + 0x158))(*(longlong **)(*param_3 + 8),&local_48);
      param_4 = param_4 + *(int *)(param_1 + 0x44);
      lVar5 = (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40);
      iVar2 = *(int *)(param_1 + 0x70);
      if (*(int *)(lVar5 + 8 + param_4) != iVar2) {
        *(undefined8 *)(param_4 + 0x10 + lVar5) = 0;
      }
      *(int *)(param_4 + 8 + lVar5) = iVar2;
      puVar7 = (undefined8 *)FUN_1447a1f4a(&local_48);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      else {
        puVar10 = (undefined2 *)*puVar7;
      }
      FUN_1446f470e(&local_58,puVar10,1);
      if (*(longlong *)(param_4 + lVar5) != local_58) {
        *(undefined8 *)(param_4 + 0x10 + lVar5) = 0;
      }
      *(longlong *)(param_4 + lVar5) = local_58;
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
    uVar6 = 3;
  }
LAB_1427b44bf:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427b4857 FUN_1427b4857 body=45 status=ok
// SIG undefined FUN_1427b4857(void)

void FUN_1427b4857(void)

{
  if (DAT_14c947f58 != (longlong *)0x0) {
    (**(code **)(*DAT_14c947f58 + 8))(DAT_14c947f58,1);
  }
  DAT_14c947f58 = (longlong *)0x0;
  return;
}



// FUNCTION 1427b495e FUN_1427b495e body=45 status=ok
// SIG undefined FUN_1427b495e(void)

void FUN_1427b495e(void)

{
  if (DAT_14c947fb0 != (longlong *)0x0) {
    (**(code **)(*DAT_14c947fb0 + 8))(DAT_14c947fb0,1);
  }
  DAT_14c947fb0 = (longlong *)0x0;
  return;
}



// FUNCTION 1427b498b FUN_1427b498b body=246 status=ok
// SIG undefined FUN_1427b498b(void)

void FUN_1427b498b(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  if (DAT_14c872ba8 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001427b49ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x368))();
    return;
  }
  lVar5 = FUN_1403a6ca6(param_1);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(lVar5 + 0x2d0) & 0x100000;
  }
  plVar3 = *(longlong **)(param_1 + 0x78);
  if (plVar3 != (longlong *)0x0) {
    iVar1 = *(int *)((longlong)plVar3 + 0xc);
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
    iVar4 = iVar1 + 0xffff;
    if (-1 < iVar1) {
      iVar4 = iVar1;
    }
    if ((DAT_14c964390 <= iVar4 >> 0x10) ||
       (lVar5 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar4 >> 0x10) * 0x10), lVar5 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001427b4a15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
      return;
    }
    lVar5 = *(longlong *)(lVar5 + (longlong)(iVar1 % 0x10000) * 0x10);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
    if (lVar5 != 0) {
      uVar2 = *(uint *)(lVar5 + 0x2d0);
      *(uint *)(lVar5 + 0x2d0) = uVar6 | uVar2;
      (**(code **)(*plVar3 + 0x368))(plVar3);
      *(uint *)(lVar5 + 0x2d0) = uVar2;
    }
  }
  return;
}



// FUNCTION 1427b4a82 FUN_1427b4a82 body=320 status=ok
// SIG undefined FUN_1427b4a82(void)

void FUN_1427b4a82(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  FUN_140012150();
  if (*(longlong *)(param_1 + 0x78) == 0) {
    lVar5 = FUN_144aff86e();
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar5);
    }
    *(longlong *)(param_1 + 0x70) = lVar5;
  }
  else {
    (**(code **)(*param_2 + 0x198))(param_2);
  }
  if (DAT_14c872ba8 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001427b4ae2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x368))();
    return;
  }
  lVar5 = FUN_1403a6ca6(param_1);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(lVar5 + 0x2d0) & 0x100000;
  }
  plVar3 = *(longlong **)(param_1 + 0x78);
  if (plVar3 != (longlong *)0x0) {
    iVar1 = *(int *)((longlong)plVar3 + 0xc);
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
    iVar4 = iVar1 + 0xffff;
    if (-1 < iVar1) {
      iVar4 = iVar1;
    }
    if ((DAT_14c964390 <= iVar4 >> 0x10) ||
       (lVar5 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar4 >> 0x10) * 0x10), lVar5 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001427b4b49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
      return;
    }
    lVar5 = *(longlong *)(lVar5 + (longlong)(iVar1 % 0x10000) * 0x10);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
    if (lVar5 != 0) {
      uVar2 = *(uint *)(lVar5 + 0x2d0);
      *(uint *)(lVar5 + 0x2d0) = uVar6 | uVar2;
      (**(code **)(*plVar3 + 0x368))(plVar3);
      *(uint *)(lVar5 + 0x2d0) = uVar2;
    }
  }
  return;
}



// FUNCTION 1427b4be4 FUN_1427b4be4 body=57 status=ok
// SIG undefined FUN_1427b4be4(void)

void FUN_1427b4be4(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((iVar1 != 0) && (param_1[1] != 0)) && (iVar1 != DAT_14c948000)) {
    *param_2 = iVar1;
    *(undefined8 *)(param_2 + 1) = DAT_14c948028;
    return;
  }
  param_2[2] = DAT_14c948620;
  *(undefined8 *)param_2 = DAT_14c948618;
  return;
}



// FUNCTION 1427b4c1d FUN_1427b4c1d body=91 status=ok
// SIG undefined FUN_1427b4c1d(void)

void FUN_1427b4c1d(void)

{
  if (DAT_14c9485b0 != 0) {
    if (DAT_14c9485a8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c9485a8)(DAT_14c9485a8,0);
    FUN_1446efa72(&DAT_14c9485a8,0,0,0x10);
    DAT_14c9485b0 = 0;
  }
  if (DAT_14c9485a8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1427b4c78 FUN_1427b4c78 body=91 status=ok
// SIG undefined FUN_1427b4c78(void)

void FUN_1427b4c78(void)

{
  if (DAT_14c9485a0 != 0) {
    if (DAT_14c948598 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c948598)(DAT_14c948598,0);
    FUN_1446efa72(&DAT_14c948598,0,0,0x10);
    DAT_14c9485a0 = 0;
  }
  if (DAT_14c948598 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1427b4cd4 FUN_1427b4cd4 body=191 status=ok
// SIG undefined FUN_1427b4cd4(void)

longlong FUN_1427b4cd4(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & *param_2) * 4);
    if (iVar5 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar5 * 0x10);
        puVar2 = *(uint **)(*param_1 + (longlong)iVar5 * 0x10);
        if (*puVar2 == *param_2) {
          if (plVar4 != (longlong *)0x0) {
            if (((uint *)param_1[10] == puVar2) &&
               (lVar3 = *(longlong *)((uint *)param_1[10] + 4), lVar3 != 0)) {
              param_1[10] = lVar3;
            }
            if ((uint *)param_1[0xb] != puVar2) {
              lVar3 = *(longlong *)(puVar2 + 4);
              if (*(longlong *)(puVar2 + 2) != 0) {
                *(longlong *)(*(longlong *)(puVar2 + 2) + 0x10) = lVar3;
              }
              puVar1 = puVar2 + 2;
              if (lVar3 != 0) {
                *(undefined8 *)(lVar3 + 8) = *(undefined8 *)puVar1;
              }
              puVar1[0] = 0;
              puVar1[1] = 0;
              puVar2[4] = 0;
              puVar2[5] = 0;
              lVar3 = param_1[0xb];
              *(longlong *)puVar1 = lVar3;
              if (lVar3 != 0) {
                *(uint **)(lVar3 + 0x10) = puVar2;
              }
              param_1[0xb] = (longlong)puVar2;
            }
            return *plVar4 + 0x18;
          }
          return 0;
        }
        iVar5 = (int)plVar4[1];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1427b4d98 FUN_1427b4d98 body=197 status=ok
// SIG undefined FUN_1427b4d98(void)

undefined4 FUN_1427b4d98(undefined2 *param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined1 auStack_878 [32];
  undefined2 *local_858;
  uint local_850;
  undefined2 *local_848;
  undefined2 *local_840;
  undefined1 *local_838;
  char local_830;
  undefined2 local_828 [1035];
  undefined1 local_12 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_878;
  local_848 = local_828;
  local_830 = '\0';
  local_838 = local_12;
  local_858 = param_1;
  local_840 = local_848;
  FUN_14005eb5c(&local_858);
  uVar2 = (longlong)local_840 - (longlong)local_848;
  *local_840 = 0;
  local_850 = 0;
  if (local_848 != (undefined2 *)0x0) {
    local_850 = (uint)(uVar2 >> 1);
    if ((0 < (int)local_850) && (local_848[local_850 - 1] == 0)) {
      local_850 = local_850 - 1;
    }
  }
  local_858 = local_848;
  uVar1 = FUN_1467e781c();
  if (local_830 == '\x01') {
    FUN_1400020a8(local_848);
  }
  if ((local_10 ^ (ulonglong)auStack_878) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427b4e5e FUN_1427b4e5e body=65 status=ok
// SIG undefined FUN_1427b4e5e(void)

undefined8 FUN_1427b4e5e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
LAB_1427b4e68:
  lVar2 = param_1;
  lVar1 = lVar2;
  if (*(longlong *)(lVar2 + 0x20) != 0) goto code_r0x0001427b4e77;
  goto LAB_1427b4e82;
code_r0x0001427b4e77:
  param_1 = *(longlong *)(lVar2 + 0x20);
  if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) != 0) {
    lVar1 = FUN_142840154(lVar2);
LAB_1427b4e82:
    if (lVar1 != 0) {
      return 0;
    }
    param_1 = *(longlong *)(lVar2 + 0x20);
  }
  goto LAB_1427b4e68;
}



// FUNCTION 1427b4e9f FUN_1427b4e9f body=25 status=ok
// SIG undefined FUN_1427b4e9f(void)

void FUN_1427b4e9f(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_14c9480c0;
  *param_1 = DAT_14c948098;
  param_1[1] = uVar1;
  return;
}



// FUNCTION 1427b4eb8 FUN_1427b4eb8 body=69 status=ok
// SIG undefined FUN_1427b4eb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b4eb8(void)

{
  _DAT_14c9480e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427b4efa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9480e8,1);
  return;
}



// FUNCTION 1427b4efd FUN_1427b4efd body=69 status=ok
// SIG undefined FUN_1427b4efd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b4efd(void)

{
  _DAT_14c9480f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427b4f3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9480f8,1);
  return;
}



// FUNCTION 1427b4f42 FUN_1427b4f42 body=69 status=ok
// SIG undefined FUN_1427b4f42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b4f42(void)

{
  _DAT_14c948100 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427b4f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948108,1);
  return;
}



// FUNCTION 1427b4f87 FUN_1427b4f87 body=69 status=ok
// SIG undefined FUN_1427b4f87(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b4f87(void)

{
  _DAT_14c948110 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427b4fc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948118,1);
  return;
}



// FUNCTION 1427b4fcc FUN_1427b4fcc body=69 status=ok
// SIG undefined FUN_1427b4fcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b4fcc(void)

{
  _DAT_14c948120 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427b500e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948128,1);
  return;
}



// FUNCTION 1427b5011 FUN_1427b5011 body=69 status=ok
// SIG undefined FUN_1427b5011(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b5011(void)

{
  _DAT_14c948130 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427b5053. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948138,1);
  return;
}



// FUNCTION 1427b5056 FUN_1427b5056 body=69 status=ok
// SIG undefined FUN_1427b5056(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b5056(void)

{
  _DAT_14c948140 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427b5098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948148,1);
  return;
}



// FUNCTION 1427b509b FUN_1427b509b body=69 status=ok
// SIG undefined FUN_1427b509b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b509b(void)

{
  _DAT_14c948158 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427b50dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948160,1);
  return;
}



// FUNCTION 1427b50e0 FUN_1427b50e0 body=69 status=ok
// SIG undefined FUN_1427b50e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b50e0(void)

{
  _DAT_14c948168 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427b5122. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948170,1);
  return;
}



// FUNCTION 1427b5125 FUN_1427b5125 body=69 status=ok
// SIG undefined FUN_1427b5125(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b5125(void)

{
  _DAT_14c948178 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427b5167. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948180,1);
  return;
}



// FUNCTION 1427b516a FUN_1427b516a body=63 status=ok
// SIG undefined FUN_1427b516a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b516a(void)

{
  _DAT_14c948188 = &PTR_FUN_149e62050;
  FUN_1447a1747(DAT_14c948190,DAT_14c948198);
  if (DAT_14c948190 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1427b51a9 FUN_1427b51a9 body=1957 status=ok
// SIG undefined FUN_1427b51a9(void)

void FUN_1427b51a9(undefined8 *param_1)

{
  undefined2 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  void *_Src;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  undefined2 ***pppuVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auStack_de8 [32];
  undefined4 local_dc8;
  undefined4 local_dc0;
  undefined4 local_db8;
  undefined8 local_db0;
  wchar_t *local_da8;
  code *local_da0;
  undefined1 *local_d98;
  code **local_d90;
  code *local_d88;
  code *local_d80;
  uint local_d78;
  int local_d74;
  ulonglong local_d70;
  code *local_d68;
  undefined8 **local_d60;
  longlong local_d58;
  undefined4 local_d50;
  longlong local_d48;
  undefined4 local_d40;
  longlong local_d38;
  undefined8 uStack_d30;
  code *local_d28;
  ulonglong uStack_d20;
  code *local_d18;
  undefined8 **local_d10;
  longlong *local_d08;
  undefined8 uStack_d00;
  code **local_cf0;
  undefined8 local_ce8;
  undefined8 uStack_ce0;
  undefined8 *local_cd8;
  undefined1 **ppuStack_cd0;
  undefined2 **local_cc8;
  longlong **local_cc0;
  undefined2 ***local_cb8;
  int local_cb0;
  undefined8 local_cac;
  undefined4 local_ca4;
  longlong local_c98;
  undefined4 local_c90;
  undefined1 *local_c88;
  undefined1 *local_c80;
  undefined2 **local_c78;
  char local_c70;
  undefined1 local_c68 [2048];
  undefined2 *local_468;
  undefined2 *local_460;
  ulonglong *local_458;
  char local_450;
  undefined2 local_448;
  undefined2 local_446 [511];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_de8;
  if ((DAT_14c75ec08 != '\x01') || ((DAT_14c75ec0c == 0 && ((DAT_14c75ec10 & 1) == 0))))
  goto LAB_1427b574d;
  local_d08 = (longlong *)0x0;
  uStack_d00 = 0;
  local_468 = &local_448;
  local_450 = '\0';
  local_458 = &local_48;
  local_460 = local_446;
  local_448 = 0x2f;
  _Src = (void *)*param_1;
  uVar5 = *(uint *)(param_1 + 1);
  iVar8 = uVar5 - 1;
  if (uVar5 == 0) {
    iVar8 = 0;
  }
  lVar12 = (longlong)iVar8;
  if (0x1fe < iVar8) {
    FUN_140213274(&local_468,lVar12);
  }
  puVar1 = local_460;
  if (1 < uVar5) {
    memcpy(local_460,_Src,lVar12 * 2);
    local_460 = puVar1 + lVar12;
  }
  if (local_458 <= local_460 + 1) {
    FUN_140213274(&local_468,1);
  }
  puVar1 = local_460 + 1;
  local_cc8 = &local_468;
  *local_460 = 0x2f;
  local_c88 = local_c68;
  local_c70 = '\0';
  local_c78 = &local_468;
  local_cd8 = &local_ce8;
  local_ce8 = (code *)CONCAT44(DAT_14c846240._4_4_,(undefined4)DAT_14c846240);
  uStack_ce0 = (code ***)CONCAT44(DAT_14c846248._4_4_,(undefined4)DAT_14c846248);
  local_d10 = &local_cd8;
  ppuStack_cd0 = &local_c88;
  local_cc0 = &local_d08;
  local_d18 = FUN_1427b88a8;
  local_c80 = local_c88;
  local_460 = puVar1;
  if (DAT_14c951858 == 0) {
    local_d90 = &local_d28;
    local_d28 = FUN_1449e2820;
    local_d80 = FUN_14081d0ea;
    local_d88 = FUN_14081d0ea;
    local_d98 = &LAB_1468c5283;
    local_da0 = FUN_142809da0;
    local_da8 = L"Engine";
    local_db0 = 0x400000000;
    local_db8 = 0x10000000;
    local_dc0 = 8;
    local_dc8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  local_dc8 = 0;
  FUN_140245161(DAT_14c951858,&local_d18,1,0x10);
  lVar12 = (longlong)(int)uStack_d00;
  if (lVar12 != 0) {
    if (DAT_14c75ec0c == 3) {
      local_d70 = 5;
LAB_1427b5383:
      local_d74 = DAT_14c948150;
      local_d78 = (int)local_d70 + 0x200;
      local_cb8 = (undefined2 ***)0x0;
      local_cb0 = 0;
      local_cd8 = (undefined8 *)0x0;
      ppuStack_cd0 = (undefined1 **)0x0;
      local_cac = 0xffffffff00000080;
      local_ca4 = 0;
      local_c98 = 0;
      local_c90 = 0;
      local_d28 = (code *)0x0;
      uStack_d20 = 0;
      local_d38 = 0;
      uStack_d30 = 0;
      plVar2 = local_d08 + lVar12;
      iVar8 = 0;
      plVar13 = local_d08;
      do {
        uVar16 = uStack_d30;
        if (iVar8 < DAT_14c75ec14) {
          lVar12 = *plVar13;
          lVar14 = (longlong)(int)uStack_d30;
          uVar5 = (int)uStack_d30 + 1;
          uStack_d30 = CONCAT44(uStack_d30._4_4_,uVar5);
          if (uStack_d30._4_4_ < uVar5) {
            FUN_146874aec(&local_d38,uVar16 & 0xffffffff);
          }
          *(longlong *)(local_d38 + lVar14 * 8) = lVar12;
          bVar18 = (longlong)uStack_d20 < 0;
          uStack_d20 = uStack_d20 & 0xffffffff00000000;
          if (bVar18) {
            FUN_14079e7a6(&local_d28,0);
          }
          local_cf0 = &local_d28;
          local_ce8 = FUN_14284083c;
          local_dc8 = 0;
          uStack_ce0 = &local_cf0;
          FUN_144a56f9f(lVar12,&local_ce8,0,0);
          pcVar4 = local_d28;
          lVar12 = (longlong)(int)uStack_d20;
          if (lVar12 != 0) {
            lVar14 = 0;
            do {
              local_ce8 = *(code **)(pcVar4 + lVar14);
              if ((*(uint *)(local_ce8 + 8) & 2) != 0) {
                FUN_14472eae2(local_ce8,2);
                FUN_1457b12ce(&local_cd8);
              }
              lVar14 = lVar14 + 8;
            } while (lVar12 * 8 != lVar14);
          }
        }
        iVar8 = iVar8 + 1;
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar2);
      uVar16 = local_d70 & 0xffffffff;
      if (local_d74 == 0) {
        uVar16 = (ulonglong)local_d78;
      }
      local_d58 = local_d38;
      local_d50 = (int)uStack_d30;
      FUN_14281b60e(&local_d48,&local_d58,uVar16);
      FUN_1447a1747(local_d48,local_d40);
      if (local_d48 != 0) {
        FUN_1400020a8();
      }
      iVar8 = local_cb0;
      if (local_cb0 == 0) {
        uVar16 = 1;
        uVar17 = 0;
        iVar11 = 0;
        iVar6 = 0;
      }
      else {
        pppuVar7 = local_cb8;
        if (local_cb8 == (undefined2 ***)0x0) {
          pppuVar7 = &local_cc8;
        }
        uVar5 = *(uint *)pppuVar7;
        if (uVar5 == 0) {
          iVar6 = local_cb0 + 0x1e;
          if (-1 < local_cb0 + -1) {
            iVar6 = local_cb0 + -1;
          }
          uVar17 = 0;
          uVar16 = (ulonglong)(uint)(iVar6 >> 5);
          if (iVar6 >> 5 < 1) {
            uVar16 = uVar17;
          }
          iVar11 = 0;
          do {
            if (uVar16 == uVar17) goto LAB_1427b5607;
            iVar11 = iVar11 + 0x20;
            uVar5 = *(uint *)((longlong)pppuVar7 + (uVar17 + 1) * 4);
            uVar17 = uVar17 + 1;
          } while (uVar5 == 0);
        }
        else {
          uVar17 = 0;
          iVar11 = 0;
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar3 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar6 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (local_cb0 <= iVar6) {
          iVar6 = local_cb0;
        }
      }
      if (iVar6 != local_cb0) {
        uVar5 = 0xffffffff;
        do {
          FUN_144757f48(local_cd8[(longlong)iVar6 * 2],2);
          uVar5 = ~(uint)uVar16 & uVar5;
          pppuVar7 = local_cb8;
          if (local_cb8 == (undefined2 ***)0x0) {
            pppuVar7 = &local_cc8;
          }
          iVar6 = (int)uVar17;
          lVar12 = (longlong)iVar6;
          uVar15 = *(uint *)((longlong)pppuVar7 + lVar12 * 4) & uVar5;
          if (uVar15 == 0) {
            iVar9 = local_cb0 + 0x1e;
            if (-1 < local_cb0 + -1) {
              iVar9 = local_cb0 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar11 = iVar11 + 0x20;
            iVar10 = iVar9;
            if (iVar9 < iVar6) {
              iVar10 = iVar6;
            }
            if (iVar6 < iVar9) {
              lVar14 = 0;
              do {
                uVar15 = *(uint *)((longlong)pppuVar7 + (lVar12 + lVar14 + 1) * 4);
                if (uVar15 != 0) {
                  uVar17 = (ulonglong)(iVar6 + (int)lVar14 + 1);
                  uVar5 = 0xffffffff;
                  goto LAB_1427b581d;
                }
                iVar11 = iVar11 + 0x20;
                lVar14 = lVar14 + 1;
              } while (iVar10 - lVar12 != lVar14);
              uVar5 = 0xffffffff;
              iVar6 = iVar10;
            }
            uVar17 = (ulonglong)(iVar6 + 1);
            iVar6 = local_cb0;
          }
          else {
LAB_1427b581d:
            uVar16 = (ulonglong)(-uVar15 & uVar15);
            uVar3 = uVar16 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            iVar6 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
            if (local_cb0 <= iVar6) {
              iVar6 = local_cb0;
            }
          }
        } while (iVar6 != iVar8);
      }
LAB_1427b5607:
      if (local_d38 != 0) {
        FUN_1400020a8();
      }
      if (local_d28 != (code *)0x0) {
        FUN_1400020a8();
      }
      local_c90 = 0;
      if (local_c98 != 0) {
        FUN_1400020a8();
      }
      FUN_140603fbe(&local_cd8);
      lVar12 = (longlong)(int)uStack_d00;
      if (lVar12 == 0) goto LAB_1427b571f;
    }
    else {
      if (DAT_14c75ec0c == 2) {
        local_d70 = 0x104;
        goto LAB_1427b5383;
      }
      if (DAT_14c75ec0c != 0) {
        local_d70 = 4;
        goto LAB_1427b5383;
      }
    }
    plVar2 = local_d08 + lVar12;
    plVar13 = local_d08;
    do {
      lVar12 = *plVar13;
      local_d68 = FUN_1427b8a94;
      local_dc8 = 0;
      local_d60 = &local_cd8;
      FUN_144a56f9f(lVar12,&local_d68,0,0);
      FUN_144757f48(lVar12,0x40000000);
      uVar5 = *(uint *)(lVar12 + 0xc);
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      do {
        uVar5 = *(uint *)(lVar14 + 8);
        if ((uVar5 >> 0x15 & 1) != 0) break;
        LOCK();
        bVar18 = uVar5 == *(uint *)(lVar14 + 8);
        if (bVar18) {
          *(uint *)(lVar14 + 8) = uVar5 | 0x200000;
        }
        UNLOCK();
      } while (!bVar18);
      if (DAT_14c951760 == '\0') {
        FUN_1428096b6(lVar12);
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar2);
  }
LAB_1427b571f:
  if (local_c70 == '\x01') {
    FUN_1400020a8(local_c88);
  }
  if (local_450 == '\x01') {
    FUN_1400020a8(local_468);
  }
  if (local_d08 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1427b574d:
  if ((local_48 ^ (ulonglong)auStack_de8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427b594f FUN_1427b594f body=49 status=ok
// SIG undefined FUN_1427b594f(void)

void FUN_1427b594f(void)

{
  FUN_144760e21(DAT_14c9485c0,DAT_14c9485c8);
  if (DAT_14c9485c0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1427b5980 FUN_1427b5980 body=49 status=ok
// SIG undefined FUN_1427b5980(void)

void FUN_1427b5980(void)

{
  FUN_144760e21(DAT_14c9485d8,DAT_14c9485e0);
  if (DAT_14c9485d8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1427b59b1 FUN_1427b59b1 body=91 status=ok
// SIG undefined FUN_1427b59b1(void)

void FUN_1427b59b1(void)

{
  if (DAT_14c9481e0 != 0) {
    if (DAT_14c9481d8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c9481d8)(DAT_14c9481d8,0);
    FUN_1446efa72(&DAT_14c9481d8,0,0,0x10);
    DAT_14c9481e0 = 0;
  }
  if (DAT_14c9481d8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1427b5a0c FUN_1427b5a0c body=44 status=ok
// SIG undefined FUN_1427b5a0c(void)

bool FUN_1427b5a0c(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  
  if ((longlong)(int)param_1[1] == 0) {
    return true;
  }
  lVar1 = 0;
  do {
    bVar2 = *(short *)(*param_1 + lVar1) != 0x2f;
    if (!bVar2) {
      return bVar2;
    }
    lVar1 = lVar1 + 2;
  } while ((longlong)(int)param_1[1] * 2 != lVar1);
  return bVar2;
}



// FUNCTION 1427b5a38 FUN_1427b5a38 body=2904 status=ok
// SIG undefined FUN_1427b5a38(void)

undefined8 FUN_1427b5a38(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 auStack_178 [40];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [20];
  undefined1 local_10c [4];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  longlong local_98;
  longlong *plStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14006620a(&local_58,*param_2,*(undefined4 *)(param_2 + 1));
  local_88 = (undefined4)local_58;
  uStack_84 = local_58._4_4_;
  uStack_80 = uStack_50;
  uStack_7c = uStack_4c;
  FUN_140233b1a(&local_78);
  local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
  FUN_14023423e(&local_48,&local_78);
  FUN_140056680(&local_98,L"InPath");
  FUN_140233eec(&local_68,&local_98,&local_58);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
    local_48 = (longlong *)0x0;
    local_40 = 0;
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  if (CONCAT44(uStack_84,local_88) != 0) {
    FUN_1400020a8();
  }
  switch(param_3) {
  case 0:
    local_58 = L"PackageNameUnknownError";
    uStack_50 = 0x17;
    FUN_1446e940c(&local_88,&local_58);
    local_58 = L"Core";
    uStack_50 = 4;
    FUN_1446e940c(&local_98,&local_58);
    local_58 = L"Input \'{InPath}\' caused undocumented internal error.";
    uStack_50 = 0x34;
    FUN_140208c1e(&local_78,&local_98,&local_88,&local_58);
    puVar6 = local_a8;
    break;
  case 1:
    local_58 = L"PackageNameEmptyPath";
    uStack_50 = 0x14;
    FUN_1446e940c(&local_88,&local_58);
    local_58 = L"Core";
    uStack_50 = 4;
    FUN_1446e940c(&local_98,&local_58);
    local_58 = L"Input \'{InPath}\' was empty.";
    uStack_50 = 0x1b;
    FUN_140208c1e(&local_78,&local_98,&local_88,&local_58);
    puVar6 = local_b8;
    break;
  case 2:
    local_58 = L"PackageNamePathNotMounted";
    uStack_50 = 0x19;
    FUN_1446e940c(&local_88,&local_58);
    local_58 = L"Core";
    uStack_50 = 4;
    FUN_1446e940c(&local_98,&local_58);
    local_58 = L"Input \'{InPath}\' is not a child of an existing mount point.";
    uStack_50 = 0x3b;
    FUN_140208c1e(&local_78,&local_98,&local_88,&local_58);
    puVar6 = local_c8;
    break;
  case 3:
    local_58 = L"PackageNamePathIsMemoryOnly";
    uStack_50 = 0x1b;
    FUN_1446e940c(&local_88,&local_58);
    local_58 = L"Core";
    uStack_50 = 4;
    FUN_1446e940c(&local_98,&local_58);
    local_58 = L"Input \'{InPath}\' is in a memory-only mount point.";
    uStack_50 = 0x31;
    FUN_140208c1e(&local_78,&local_98,&local_88,&local_58);
    puVar6 = local_d8;
    break;
  case 4:
    local_58 = L"PackageNameSpacesNotAllowed";
    uStack_50 = 0x1b;
    FUN_1446e940c(&local_88,&local_58);
    local_58 = L"Core";
    uStack_50 = 4;
    FUN_1446e940c(&local_98,&local_58);
    local_58 = 
    L"Input \'{InPath}\' includes a space. A space is not valid in ObjectPaths unless it is delimiting a ClassName in a full ObjectPath, and full ObjectPaths are not supported in this function."
    ;
    uStack_50 = 0xb9;
    FUN_140208c1e(&local_78,&local_98,&local_88,&local_58);
    puVar6 = local_e8;
    break;
  case 5:
    FUN_140056680(&local_88,&DAT_149e35230);
    FUN_140233b1a(&local_78,&local_88);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    FUN_14023423e(&local_48,&local_78);
    FUN_140056680(&local_98,L"IllegalNameCharacters");
    FUN_140233eec(&local_68,&local_98,&local_58);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
      local_48 = (longlong *)0x0;
      local_40 = 0;
    }
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
    if (CONCAT44(uStack_84,local_88) != 0) {
      FUN_1400020a8();
    }
    local_58 = L"PackageNameContainsInvalidCharacters";
    uStack_50 = 0x24;
    FUN_1446e940c(&local_88,&local_58);
    local_58 = L"Core";
    uStack_50 = 4;
    FUN_1446e940c(&local_98,&local_58);
    local_58 = 
    L"Input \'{InPath}\' contains one of the invalid characters for LongPackageNames: \'{IllegalNameCharacters}\'."
    ;
    uStack_50 = 0x68;
    FUN_140208c1e(&local_78,&local_98,&local_88,&local_58);
    puVar6 = local_f8;
    break;
  case 6:
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    local_98 = 0;
    plStack_90 = (longlong *)0x0;
    FUN_1413a454c(&local_88,4,0);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    FUN_14023423e(&local_48,&local_88);
    uVar4 = uStack_70;
    lVar7 = (longlong)(int)uStack_70;
    uVar5 = (int)uStack_70 + 1;
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
    if (uStack_70._4_4_ < uVar5) {
      FUN_140188694(&local_78,uVar4 & 0xffffffff);
    }
    plVar3 = local_78 + lVar7 * 4;
    *(undefined4 *)plVar3 = (undefined4)local_58;
    *(undefined4 *)((longlong)plVar3 + 4) = local_58._4_4_;
    *(undefined4 *)(plVar3 + 1) = uStack_50;
    *(undefined4 *)((longlong)plVar3 + 0xc) = uStack_4c;
    if (local_48 == (longlong *)0x0) {
      local_78[lVar7 * 4 + 2] = 0;
      *(undefined4 *)(local_78 + lVar7 * 4 + 3) = 0;
    }
    else {
      FUN_14023423e(local_78 + lVar7 * 4 + 2,&local_48);
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
      local_48 = (longlong *)0x0;
      local_40 = 0;
    }
    if ((longlong *)CONCAT44(uStack_84,local_88) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_84,local_88) + 0x10))();
    }
    plVar3 = plStack_90;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_90 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_90)(plStack_90);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    FUN_14006620a(&local_58,*param_2,*(undefined4 *)(param_2 + 1));
    local_98 = (longlong)local_58;
    FUN_140233b1a(&local_88);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    FUN_14023423e(&local_48,&local_88);
    uVar4 = uStack_70;
    lVar7 = (longlong)(int)uStack_70;
    uVar5 = (int)uStack_70 + 1;
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
    if (uStack_70._4_4_ < uVar5) {
      FUN_140188694(&local_78,uVar4 & 0xffffffff);
    }
    plVar3 = local_78 + lVar7 * 4;
    *(undefined4 *)plVar3 = (undefined4)local_58;
    *(undefined4 *)((longlong)plVar3 + 4) = local_58._4_4_;
    *(undefined4 *)(plVar3 + 1) = uStack_50;
    *(undefined4 *)((longlong)plVar3 + 0xc) = uStack_4c;
    if (local_48 == (longlong *)0x0) {
      local_78[lVar7 * 4 + 2] = 0;
      *(undefined4 *)(local_78 + lVar7 * 4 + 3) = 0;
    }
    else {
      FUN_14023423e(local_78 + lVar7 * 4 + 2,&local_48);
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
      local_48 = (longlong *)0x0;
      local_40 = 0;
    }
    if ((longlong *)CONCAT44(uStack_84,local_88) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_84,local_88) + 0x10))();
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    local_58 = L"LongPackageNames_PathTooShort";
    uStack_50 = 0x1d;
    FUN_1446e940c(&local_98,&local_58);
    local_58 = L"Core";
    uStack_50 = 4;
    FUN_1446e940c(local_10c,&local_58);
    local_58 = 
    L"Input \'{1}\' contains fewer than the minimum number of characters {0} for LongPackageNames.";
    uStack_50 = 0x5a;
    FUN_140208c1e(&local_88,local_10c,&local_98,&local_58);
    FUN_14023409e(local_108,&local_88,1);
    FUN_140188794(param_1,local_108,&local_78);
    if ((longlong *)CONCAT44(uStack_84,local_88) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_84,local_88) + 0x10))();
    }
    FUN_14007f2db(local_78,uStack_70 & 0xffffffff);
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_1427b62ce;
  case 7:
    local_58 = L"LongPackageNames_PathWithNoStartingSlash";
    uStack_50 = 0x28;
    FUN_1446e940c(&local_88,&local_58);
    local_58 = L"Core";
    uStack_50 = 4;
    FUN_1446e940c(&local_98,&local_58);
    local_58 = 
    L"Input \'{InPath}\' does not start with a \'/\', which is required for LongPackageNames.";
    uStack_50 = 0x53;
    FUN_140208c1e(&local_78,&local_98,&local_88,&local_58);
    puVar6 = local_120;
    break;
  case 8:
    local_58 = L"LongPackageNames_PathWithTrailingSlash";
    uStack_50 = 0x26;
    FUN_1446e940c(&local_88,&local_58);
    local_58 = L"Core";
    uStack_50 = 4;
    FUN_1446e940c(&local_98,&local_58);
    local_58 = L"Input \'{InPath}\' ends with a \'/\', which is invalid for LongPackageNames.";
    uStack_50 = 0x48;
    FUN_140208c1e(&local_78,&local_98,&local_88,&local_58);
    puVar6 = local_130;
    break;
  case 9:
    local_58 = L"LongPackageNames_PathWithDoubleSlash";
    uStack_50 = 0x24;
    FUN_1446e940c(&local_88,&local_58);
    local_58 = L"Core";
    uStack_50 = 4;
    FUN_1446e940c(&local_98,&local_58);
    local_58 = L"Input \'{InPath}\' contains \'//\', which is invalid for LongPackageNames.";
    uStack_50 = 0x46;
    FUN_140208c1e(&local_78,&local_98,&local_88,&local_58);
    puVar6 = local_140;
    break;
  default:
    local_58 = L"PackageNameUndocumentedError";
    uStack_50 = 0x1c;
    FUN_1446e940c(&local_88,&local_58);
    local_58 = L"Core";
    uStack_50 = 4;
    FUN_1446e940c(&local_98,&local_58);
    local_58 = L"Input \'{InPath} caused undocumented internal error.";
    uStack_50 = 0x33;
    FUN_140208c1e(&local_78,&local_98,&local_88,&local_58);
    puVar6 = local_150;
  }
  FUN_14023409e(puVar6,&local_78,1);
  FUN_140233c04(param_1,puVar6,&local_68);
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
LAB_1427b62ce:
  FUN_14010f8af(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1427b6592 FUN_1427b6592 body=515 status=ok
// SIG undefined FUN_1427b6592(void)

void FUN_1427b6592(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  ushort *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  longlong local_70;
  ushort *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)*param_1;
  iVar9 = (int)((longlong *)*param_1)[1];
  lVar11 = 0;
  uVar6 = iVar9 - 1;
  if (iVar9 == 0) {
    uVar6 = 0;
  }
  puVar4 = (ushort *)*param_3;
  uVar2 = *(uint *)(param_3 + 1);
  local_70 = (longlong)(int)uVar2;
LAB_1427b65eb:
  iVar12 = (int)((ulonglong)uVar2 + lVar11);
  local_78 = param_2;
  if (iVar12 < 3) {
    if (iVar12 != 2) {
      if (iVar12 == 0) goto LAB_1427b66a1;
LAB_1427b664a:
      if ((int)(uVar2 + (int)lVar11) <= (int)uVar6) {
        uVar8 = (int)uVar6 >> 0x1f & uVar6;
        iVar7 = uVar6 - uVar8;
        if (iVar12 < iVar7) {
          iVar7 = iVar12;
        }
        local_50 = 0;
        if (0 < iVar7) {
          local_50 = iVar7;
        }
        local_58 = lVar3 + (longlong)(int)uVar8 * 2;
        local_68 = puVar4;
        local_60 = iVar12;
        local_5c = *(undefined4 *)((longlong)param_3 + 0xc);
        cVar5 = FUN_14005b3f4();
        if (cVar5 != '\0') {
          if (iVar12 + ((uint)(iVar9 != 0) - iVar9) == 0) {
LAB_1427b6709:
            uVar6 = *(uint *)(param_1 + 1);
            uVar8 = (int)uVar6 >> 0x1f & uVar6;
            iVar9 = ((uVar2 - uVar6) - uVar6) + uVar8;
            uVar6 = uVar6 - uVar8;
            if ((int)uVar2 <= (int)uVar6) {
              uVar6 = uVar2;
            }
            iVar12 = uVar2 - uVar6;
            if (iVar9 < (int)(uVar2 - uVar6)) {
              iVar12 = iVar9;
            }
            iVar9 = 0;
            if (0 < iVar12) {
              iVar9 = iVar12;
            }
            FUN_1446f82e2(local_78,iVar9,puVar4 + (int)uVar6,1);
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
          }
          if ((puVar4[(longlong)(int)uVar2 + lVar11 + -1] == 0x2f) ||
             (puVar4[(longlong)(int)uVar2 + lVar11 + -1] == 0x5c)) {
            if ((uVar2 + (int)lVar11 != 1) ||
               ((*(short *)(lVar3 + 2) != 0x2f && (*(short *)(lVar3 + 2) != 0x5c))))
            goto LAB_1427b6709;
          }
          else {
            sVar1 = *(short *)(lVar3 + local_70 * 2 + lVar11 * 2);
            if ((sVar1 == 0x5c) || (sVar1 == 0x2f)) goto LAB_1427b6709;
          }
        }
      }
LAB_1427b66a1:
      *local_78 = 0;
      if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    if (((puVar4[1] != 0x5c) && (puVar4[1] != 0x2f)) ||
       ((*puVar4 - 0x2f < 0x2e &&
        ((0x200000000801U >> ((ulonglong)(*puVar4 - 0x2f) & 0x3f) & 1) != 0)))) goto LAB_1427b664a;
  }
  else {
    uVar10 = (ulonglong)uVar2 + lVar11 & 0xffffffff;
    if (((puVar4[uVar10 - 1] != 0x2f) && (puVar4[uVar10 - 1] != 0x5c)) ||
       (puVar4[uVar10 - 2] == 0x3a)) goto LAB_1427b664a;
  }
  lVar11 = lVar11 + -1;
  goto LAB_1427b65eb;
}



// FUNCTION 1427b6799 FUN_1427b6799 body=49 status=ok
// SIG undefined FUN_1427b6799(void)

void FUN_1427b6799(void)

{
  FUN_144760e21(DAT_14c9481e8,DAT_14c9481f0);
  if (DAT_14c9481e8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1427b67ca FUN_1427b67ca body=989 status=ok
// SIG undefined FUN_1427b67ca(void)

void FUN_1427b67ca(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined2 *puVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  uint local_80;
  int local_7c;
  undefined2 *local_78;
  uint local_70;
  undefined2 *local_68;
  int local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_146871dde(&local_48,*param_1,0);
  puVar2 = local_48;
  if (local_40 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(local_38,&DAT_149e60ad8,puVar2);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c948490) && (FUN_144b3d300(&DAT_14c948490), DAT_14c948490 == -1)) {
    FUN_1400684da(&DAT_14c9482f8);
    atexit(FUN_1427b7fa2);
    _Init_thread_footer(&DAT_14c948490);
  }
  cVar1 = FUN_146871b88(&DAT_14c9482f8,local_38);
  if (cVar1 == '\0') {
    FUN_1400021e4(param_1,&local_48);
    puVar2 = local_48;
    if (local_40 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140212e80(param_2,
                  L"FPackageName: Unable to identify a valid mount point associated with skipped package %s. The package root is unknown.\n"
                  ,puVar2);
  }
  else {
    local_50 = 0;
    local_58 = 0;
    FUN_1400021e4(param_1);
    local_68 = local_48;
    local_60 = local_40 + -1;
    if (local_40 == 0) {
      local_60 = 0;
    }
    cVar1 = FUN_140b1a3de(&local_68,&local_58);
    if (cVar1 != '\0') {
      cVar1 = FUN_1407f0622(&local_58,3,0,0);
      if (cVar1 == '\x03') {
        pwVar4 = L"on disk and in iodispatcher";
      }
      else {
        if (cVar1 == '\0') {
          puVar2 = local_48;
          if (local_40 == 0) {
            puVar2 = &DAT_149dfb77a;
          }
          FUN_140212e80(param_2,
                        L"FPackageName: Skipped package %s has a valid, mounted, mount point but does not exist either on disk or in iostore."
                        ,puVar2);
          FUN_1427b95fe(&local_58,&local_78,0);
          if (local_70 < 2) {
            puVar2 = *(undefined2 **)(param_2 + 8);
            if (*(undefined2 **)(param_2 + 0x10) <= puVar2 + 1) {
              FUN_140213274(param_2,1);
              puVar2 = *(undefined2 **)(param_2 + 8);
            }
            *puVar2 = 10;
            *(undefined2 **)(param_2 + 8) = puVar2 + 1;
          }
          else {
            plVar3 = (longlong *)FUN_14054d1d4();
            puVar2 = local_78;
            if (local_70 == 0) {
              puVar2 = &DAT_149dfb77a;
            }
            (**(code **)(*plVar3 + 0xf8))(plVar3,&local_88,puVar2);
            puVar2 = local_78;
            if (local_80 < 2) {
              local_80 = local_70;
              if (local_70 == 0 && local_7c == 0) {
                local_7c = 0;
              }
              else {
                FUN_1446dd670(&local_88,local_70);
                if (local_70 != 0) {
                  memcpy(local_88,puVar2,(longlong)(int)local_70 * 2);
                }
              }
            }
            puVar2 = local_88;
            if (local_80 == 0) {
              puVar2 = &DAT_149dfb77a;
            }
            FUN_140212e80(param_2,
                          L" The uncooked file would be expected on disk at \'%s\'. Perhaps it has been deleted or was not synced?\n"
                          ,puVar2);
            if (local_88 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
          if (local_78 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_1427b6961;
        }
        pwVar4 = L"in iodispatcher";
        if (cVar1 == '\x02') {
          pwVar4 = L"on disk";
        }
      }
      puVar2 = local_48;
      if (local_40 == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      FUN_140212e80(param_2,
                    L"FPackageName: Skipped package %s was found %s but for some reason could not be found or used by the loader. This could occur if the loader is only considering cooked packages but the package exists only on disk.\n"
                    ,puVar2,pwVar4);
    }
  }
LAB_1427b6961:
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
    FUN_1413288e0(&DAT_14c926ca8);
    atexit(FUN_1427ac032);
    _Init_thread_footer(&DAT_14c926f30);
  }
  (**(code **)(DAT_14c926ca8 + 0x60))(&DAT_14c926ca8,param_1,param_2);
  FUN_146871d6e();
  FUN_146874ca8(param_1,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427b6ba8 FUN_1427b6ba8 body=47 status=ok
// SIG undefined FUN_1427b6ba8(void)

void FUN_1427b6ba8(void)

{
  DAT_14c948250 = 0;
  if (DAT_14c948248 != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(&DAT_14c948208);
  return;
}



// FUNCTION 1427b6bd8 FUN_1427b6bd8 body=658 status=ok
// SIG undefined FUN_1427b6bd8(void)

undefined4 FUN_1427b6bd8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_518 [32];
  undefined1 **local_4f8;
  undefined1 **local_4f0;
  undefined1 **local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined1 *local_4c8;
  undefined4 local_4c0;
  undefined1 *local_4b8;
  undefined4 local_4b0;
  undefined1 *local_4a8;
  undefined4 local_4a0;
  undefined1 *local_498;
  undefined4 local_490;
  undefined8 local_484;
  undefined4 local_47c;
  undefined8 local_478;
  int local_470;
  undefined1 local_461;
  undefined1 *local_460;
  undefined1 *local_458;
  undefined1 **local_450;
  char local_448;
  undefined1 local_440 [32];
  undefined1 *local_420;
  undefined1 *local_418;
  undefined1 **local_410;
  char local_408;
  undefined1 local_400 [128];
  undefined1 *local_380;
  undefined1 *local_378;
  undefined1 **local_370;
  char local_368;
  undefined1 local_360 [512];
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 **local_150;
  char local_148;
  undefined1 local_140 [128];
  undefined1 *local_c0;
  undefined1 *local_b8;
  ulonglong *local_b0;
  char local_a8;
  undefined1 local_a0 [128];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_518;
  local_c0 = local_a0;
  local_a8 = '\0';
  local_b0 = &local_20;
  local_160 = local_140;
  local_148 = '\0';
  local_150 = &local_c0;
  local_380 = local_360;
  local_368 = '\0';
  local_370 = &local_160;
  local_420 = local_400;
  local_408 = '\0';
  local_4f8 = &local_420;
  local_410 = &local_380;
  local_460 = local_440;
  local_448 = '\0';
  local_450 = &local_420;
  local_478 = *param_1;
  local_470 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_470 = 0;
  }
  local_4e8 = &local_460;
  local_4f0 = (undefined1 **)&local_461;
  local_4e0 = 0;
  local_4d8 = param_3;
  local_458 = local_460;
  local_418 = local_420;
  local_378 = local_380;
  local_158 = local_160;
  local_b8 = local_c0;
  uVar1 = FUN_1411baba2(&local_478,&local_c0,&local_160,&local_380);
  if ((char)uVar1 != '\0') {
    local_4f0 = &local_498;
    local_498 = local_460;
    local_490 = (undefined4)((ulonglong)((longlong)local_458 - (longlong)local_460) >> 1);
    local_4a8 = local_380;
    local_4a0 = (undefined4)((ulonglong)((longlong)local_378 - (longlong)local_380) >> 1);
    local_4b8 = local_160;
    local_4b0 = (undefined4)((ulonglong)((longlong)local_158 - (longlong)local_160) >> 1);
    local_4c8 = local_c0;
    local_4c0 = (undefined4)((ulonglong)((longlong)local_b8 - (longlong)local_c0) >> 1);
    local_4f8 = (undefined1 **)CONCAT71(local_4f8._1_7_,local_461);
    FUN_1427b9772(&local_484);
    *(undefined4 *)(param_2 + 1) = local_47c;
    *param_2 = local_484;
  }
  if (local_448 == '\x01') {
    FUN_1400020a8(local_460);
  }
  if (local_408 == '\x01') {
    FUN_1400020a8(local_420);
  }
  if (local_368 == '\x01') {
    FUN_1400020a8(local_380);
  }
  if (local_148 == '\x01') {
    FUN_1400020a8(local_160);
  }
  if (local_a8 == '\x01') {
    FUN_1400020a8(local_c0);
  }
  if ((local_20 ^ (ulonglong)auStack_518) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427b6e6c FUN_1427b6e6c body=27 status=ok
// SIG undefined FUN_1427b6e6c(void)

bool FUN_1427b6e6c(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1407f0622(param_1,0xff,param_2,param_3);
  return cVar1 != '\0';
}



// FUNCTION 1427b6e88 FUN_1427b6e88 body=27 status=ok
// SIG undefined FUN_1427b6e88(void)

bool FUN_1427b6e88(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_1407f0622(param_1,0xff,0,param_2);
  return cVar1 != '\0';
}



// FUNCTION 1427b6ea4 FUN_1427b6ea4 body=233 status=ok
// SIG undefined FUN_1427b6ea4(void)

undefined8
FUN_1427b6ea4(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  longlong local_50 [2];
  undefined4 local_3c;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = 0;
  local_38 = 0;
  cVar1 = FUN_1427b6bd8(param_1,&local_38,&local_3c);
  if (cVar1 == '\0') {
    local_70 = *param_1;
    local_68 = *(int *)(param_1 + 1) + -1;
    if (*(int *)(param_1 + 1) == 0) {
      local_68 = 0;
    }
    FUN_146871ff6(&local_60,&local_70,local_3c);
    puVar3 = local_60;
    if (local_58 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_140002266(local_50,
                  L"DoesPackageExist called on PackageName that will always return false. Reason: %s"
                  ,puVar3);
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1407f0622(&local_38,param_2,param_3,param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1427b6f8e FUN_1427b6f8e body=1897 status=ok
// SIG undefined FUN_1427b6f8e(void)

/* WARNING: Removing unreachable block (ram,0x0001427b715d) */
/* WARNING: Removing unreachable block (ram,0x0001427b716f) */

ulonglong FUN_1427b6f8e(longlong *param_1,longlong *param_2,longlong *param_3)

{
  void *pvVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 unaff_RBP;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  int iVar12;
  LARGE_INTEGER LVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  LARGE_INTEGER *local_240;
  longlong *local_238;
  longlong *local_230;
  longlong local_228;
  undefined8 local_220;
  longlong local_218;
  int local_210;
  longlong local_208;
  int local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  LARGE_INTEGER local_1e0;
  undefined4 local_1d8;
  longlong local_1d0;
  uint local_1c8;
  uint local_1bc;
  longlong local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  longlong *local_1a8;
  ulonglong uStack_1a0;
  LARGE_INTEGER local_198;
  undefined8 uStack_190;
  LARGE_INTEGER local_188;
  LARGE_INTEGER LStack_180;
  undefined4 *local_178;
  undefined8 local_170;
  undefined1 local_168 [256];
  undefined4 local_68 [2];
  ulonglong local_60;
  
  lVar8 = DAT_14c8426d8;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_238 = param_2;
  if (DAT_14c8426d8 != 0) {
    FUN_14275ab18(DAT_14c8426d8);
  }
  QueryPerformanceCounter(&local_188);
  iVar12 = (int)param_1[1];
  iVar5 = iVar12 + -1;
  bVar14 = iVar5 != 0;
  if (iVar12 == 0) {
    iVar5 = 0;
  }
  if (iVar12 != 0 && bVar14) {
    lVar6 = 0;
    do {
      if (*(short *)(*param_1 + lVar6) == 0x2f) {
        local_188.QuadPart = 0;
        LStack_180 = (LARGE_INTEGER)0x0;
        cVar2 = FUN_14166d522(param_1,&local_188,1);
        if (cVar2 == '\0') {
          uVar9 = 0;
          LVar13 = local_188;
        }
        else {
          if (local_238 != param_1 && local_238 != (longlong *)0x0) {
            iVar12 = (int)param_1[1];
            pvVar1 = (void *)*param_1;
            *(int *)(local_238 + 1) = iVar12;
            if (iVar12 == 0 && *(int *)((longlong)local_238 + 0xc) == 0) {
              *(undefined4 *)((longlong)local_238 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(local_238,iVar12);
              if (iVar12 != 0) {
                memcpy((void *)*local_238,pvVar1,(longlong)iVar12 * 2);
              }
            }
          }
          uVar9 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
          LVar13 = local_188;
          if (param_3 != (longlong *)0x0) {
            iVar12 = LStack_180._0_4_ + -1;
            if (LStack_180._0_4_ == 0) {
              iVar12 = 0;
            }
            FUN_1402980a2(param_3,local_188.QuadPart,iVar12);
            LVar13 = local_188;
          }
        }
        goto LAB_1427b7640;
      }
      lVar6 = lVar6 + 2;
    } while ((longlong)iVar5 * 2 != lVar6);
  }
  local_228 = lVar8;
  local_198.QuadPart = 0;
  uStack_190 = 0;
  local_1a8 = (longlong *)0x0;
  uStack_1a0 = 0;
  local_230 = param_1;
  FUN_1412fac7e(&local_1a8,0,0,0);
  if (0 < (int)uStack_1a0) {
    lVar8 = 0;
    iVar12 = 0;
    do {
      lVar6 = (longlong)local_1a8 + lVar8;
      FUN_140056680(&local_188,&DAT_149dfb77a);
      FUN_141509698(&local_1b8,lVar6,&local_188);
      if (local_188.QuadPart != 0) {
        FUN_1400020a8();
      }
      FUN_140ac5dca(&local_188,0,lVar6,&local_1b8);
      uVar9 = uStack_190;
      lVar6 = (longlong)(int)uStack_190;
      uVar3 = (int)uStack_190 + 1;
      uStack_190 = CONCAT44(uStack_190._4_4_,uVar3);
      if (uStack_190._4_4_ < uVar3) {
        FUN_146272134(&local_198,uVar9 & 0xffffffff);
      }
      *(longlong *)(local_198.QuadPart + lVar6 * 0x20) = 0;
      ((LARGE_INTEGER *)(local_198.QuadPart + lVar6 * 0x20))->QuadPart = (LONGLONG)local_188;
      *(undefined4 *)((longlong *)(local_198.QuadPart + 8) + lVar6 * 4) = LStack_180._0_4_;
      ((undefined4 *)(local_198.QuadPart + 0xc))[lVar6 * 8] = LStack_180._4_4_;
      ((longlong *)(local_198.QuadPart + 0x10))[lVar6 * 4] = 0;
      ((longlong *)(local_198.QuadPart + 0x10))[lVar6 * 4] = (longlong)local_178;
      *(undefined4 *)((longlong *)(local_198.QuadPart + 0x18) + lVar6 * 4) = (undefined4)local_170;
      ((undefined4 *)(local_198.QuadPart + 0x1c))[lVar6 * 8] = local_170._4_4_;
      local_170 = 0;
      local_178 = (undefined4 *)0x0;
      LStack_180 = (LARGE_INTEGER)0x0;
      local_188.QuadPart = 0;
      if (local_1b8 != 0) {
        FUN_1400020a8();
      }
      iVar12 = iVar12 + 1;
      lVar8 = lVar8 + 0x10;
    } while (iVar12 < (int)uStack_1a0);
  }
  FUN_1447a1747(local_1a8);
  if (local_1a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  plVar7 = local_230;
  local_1d0 = *local_230;
  uVar9 = 0;
  local_1c8 = (int)local_230[1] - 1;
  if ((int)local_230[1] == 0) {
    local_1c8 = 0;
  }
  uVar3 = FUN_146874e64(&local_1d0,&local_1bc);
  bVar4 = (char)uVar3 - 5;
  uVar10 = (ulonglong)(uVar3 & 0xff);
  if ((0x7dU >> (bVar4 & 0x1f) & 1) != 0) {
    uVar10 = uVar9;
  }
  cVar2 = (char)uVar10;
  if (6 < bVar4) {
    cVar2 = (char)uVar3;
  }
  LStack_180.QuadPart = (LONGLONG)local_168;
  local_170 = local_170 & 0xffffffffffffff00;
  local_178 = local_68;
  pvVar1 = (void *)*plVar7;
  iVar12 = (int)plVar7[1];
  uVar3 = iVar12 - 1;
  if (iVar12 == 0) {
    uVar3 = 0;
  }
  if ((int)local_1bc < (int)uVar3) {
    uVar3 = local_1bc;
  }
  if (0 < (int)uVar3) {
    uVar9 = (ulonglong)uVar3;
  }
  local_188.QuadPart = LStack_180.QuadPart;
  if ((int)uVar3 < 0x80) {
    if ((int)uVar3 < 1) goto LAB_1427b7291;
  }
  else {
    FUN_140213274(&local_188,uVar9);
  }
  LVar13 = LStack_180;
  memcpy((void *)LStack_180,pvVar1,uVar9 * 2);
  LStack_180.QuadPart = LVar13.QuadPart + uVar9 * 2;
LAB_1427b7291:
  if (local_178 <= (undefined4 *)(LStack_180.QuadPart + 4)) {
    FUN_140213274(&local_188,2);
  }
  *(undefined4 *)LStack_180 = 0x2a002e;
  LStack_180.QuadPart = LStack_180.QuadPart + 4;
  local_1a8 = (longlong *)0x0;
  uStack_1a0 = 0;
  if ((longlong)(int)uStack_190 == 0) {
    uVar9 = 0;
    lVar8 = local_228;
  }
  else {
    local_220 = DAT_14c9518c8;
    local_230 = (longlong *)((longlong)(int)uStack_190 * 0x20 + local_198.QuadPart);
    bVar14 = local_238 != (longlong *)0x0;
    lVar6 = 0;
    uVar9 = 0;
    LVar13 = local_198;
    do {
      bVar15 = (longlong)uStack_1a0 < 0;
      uStack_1a0 = uStack_1a0 & 0xffffffff00000000;
      if (bVar15) {
        FUN_146874d6e(&local_1a8,0);
      }
      local_1e0.s = local_188.s;
      local_1d8 = (undefined4)((ulonglong)((longlong)LStack_180 - (longlong)local_188) >> 1);
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_208 = *(longlong *)(LVar13.QuadPart + 0x10);
      local_200 = *(int *)(LVar13.QuadPart + 0x18) + -1;
      if (*(int *)(LVar13.QuadPart + 0x18) == 0) {
        local_200 = 0;
      }
      local_218 = *(longlong *)LVar13;
      local_210 = *(int *)(LVar13.QuadPart + 8) + -1;
      if (*(int *)(LVar13.QuadPart + 8) == 0) {
        local_210 = 0;
      }
      local_240 = &local_1e0;
      local_248 = &local_1f8;
      FUN_1468c5d8c(local_220,&local_1a8,&local_218,&local_208);
      if ((longlong)(int)uStack_1a0 != 0) {
        lVar8 = (longlong)(int)uStack_1a0 * 0xc;
        plVar7 = local_238;
        plVar11 = local_1a8;
        do {
          if (cVar2 == '\0') {
            uVar9 = 1;
            if (lVar6 == 0 && (bVar14 || param_3 != (longlong *)0x0)) goto LAB_1427b7419;
          }
          else {
            bVar15 = (char)plVar11[1] == cVar2;
            if (bVar15) {
              uVar9 = 1;
            }
            if ((bVar15 && (bVar14 || param_3 != (longlong *)0x0)) && (uVar9 = 1, lVar6 == 0)) {
LAB_1427b7419:
              if (plVar7 != (longlong *)0x0) {
                FUN_1468750d6(plVar11,&local_1b8);
                if (&local_1b8 == local_238) {
                  plVar7 = local_238;
                  if (local_1b8 != 0) {
                    FUN_1400020a8();
                    plVar7 = local_238;
                  }
                }
                else {
                  if (*local_238 != 0) {
                    FUN_1400020a8();
                  }
                  *local_238 = local_1b8;
                  local_1b8 = 0;
                  *(undefined4 *)(local_238 + 1) = local_1b0;
                  *(undefined4 *)((longlong)local_238 + 0xc) = local_1ac;
                  plVar7 = local_238;
                }
              }
              if (param_3 != (longlong *)0x0) {
                FUN_1427b95fe(plVar11,&local_1b8,0);
                if (&local_1b8 == param_3) {
                  plVar7 = local_238;
                  if (local_1b8 != 0) {
                    FUN_1400020a8();
                    plVar7 = local_238;
                  }
                }
                else {
                  if (*param_3 != 0) {
                    FUN_1400020a8();
                  }
                  *param_3 = local_1b8;
                  local_1b8 = 0;
                  *(undefined4 *)(param_3 + 1) = local_1b0;
                  *(undefined4 *)((longlong)param_3 + 0xc) = local_1ac;
                  plVar7 = local_238;
                }
              }
              lVar6 = *plVar11;
              uVar9 = 1;
            }
          }
          plVar11 = (longlong *)((longlong)plVar11 + 0xc);
          lVar8 = lVar8 + -0xc;
        } while (lVar8 != 0);
      }
      lVar8 = local_228;
      LVar13.QuadPart = LVar13.QuadPart + 0x20;
    } while ((longlong *)LVar13.QuadPart != local_230 && uVar9 == 0);
    if (local_1a8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((char)local_170 == '\x01') {
    FUN_1400020a8(local_188.QuadPart);
  }
  FUN_141535be2(local_198.QuadPart,uStack_190 & 0xffffffff);
  LVar13 = local_198;
LAB_1427b7640:
  if ((longlong *)LVar13.QuadPart != (longlong *)0x0) {
    FUN_1400020a8();
  }
  QueryPerformanceCounter(&local_188);
  if ((lVar8 != 0) && (DAT_14c8426d8 != 0)) {
    FUN_14275ad76(DAT_14c8426d8,0);
  }
  if ((local_60 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffff01;
}



// FUNCTION 1427b76f8 FUN_1427b76f8 body=145 status=ok
// SIG undefined FUN_1427b76f8(void)

undefined8 * FUN_1427b76f8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_2 + 1);
  lVar3 = (longlong)iVar1;
  _Src = (void *)*param_2;
  if (lVar3 < 2) {
LAB_1427b770f:
    *param_1 = 0;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,lVar3 * 2);
    }
  }
  else {
    if (_Src != (void *)((longlong)_Src + lVar3 * 2 + -2)) {
      lVar2 = 0;
      do {
        if (*(short *)((longlong)_Src + lVar2) == 0x2f) goto LAB_1427b770f;
        lVar2 = lVar2 + 2;
      } while (lVar3 * 2 + -2 != lVar2);
    }
    *param_1 = 0;
    param_1[1] = 0;
    FUN_14687209e(param_2,param_1);
  }
  return param_1;
}



// FUNCTION 1427b778a FUN_1427b778a body=900 status=ok
// SIG undefined FUN_1427b778a(void)

longlong * FUN_1427b778a(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  void *pvVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_70;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (0 < DAT_14c867138) {
    *param_1 = 0;
    iVar10 = *(int *)(param_2 + 1);
    pvVar8 = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar10;
    if ((longlong)iVar10 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar10,0);
      memcpy((void *)*param_1,pvVar8,(longlong)iVar10 * 2);
      iVar10 = (int)param_1[1];
      if ((longlong)iVar10 != 0) {
        lVar5 = (longlong)iVar10 * 2;
        lVar11 = 0;
        do {
          if (*(short *)(*param_1 + lVar11 * 2) == 0x2e) {
            uVar3 = (uint)lVar11;
            if (uVar3 != 0xffffffff) {
              uVar12 = iVar10 - 1;
              if (iVar10 == 0) {
                uVar12 = 0;
              }
              uVar4 = uVar3 + 1;
              if ((int)uVar12 <= (int)(uVar3 + 1)) {
                uVar4 = uVar12;
              }
              uVar7 = (ulonglong)uVar4;
              if ((int)uVar4 < 1) {
                uVar7 = 0;
              }
              FUN_14006620a(&local_70,*param_1 + uVar7 * 2,uVar12 - (int)uVar7);
              plVar6 = local_70;
              iVar10 = (int)param_1[1];
              uVar12 = iVar10 - 1;
              if (iVar10 == 0) {
                uVar12 = 0;
              }
              if ((int)uVar12 <= (int)uVar3) {
                uVar3 = uVar12;
              }
              uVar15 = (ulonglong)local_68;
              uVar7 = (ulonglong)uVar3;
              if ((int)uVar3 < 1) {
                uVar7 = 0;
              }
              uVar12 = uVar12 - (int)uVar7;
              if (0 < (int)uVar12) {
                iVar13 = iVar10 - (uVar12 + (int)uVar7);
                if (iVar13 != 0) {
                  pvVar8 = (void *)(uVar7 * 2 + *param_1);
                  memmove(pvVar8,(void *)((longlong)pvVar8 + (ulonglong)uVar12 * 2),
                          (longlong)iVar13 * 2);
                  iVar10 = (int)param_1[1];
                }
                *(uint *)(param_1 + 1) = iVar10 - uVar12;
              }
              goto LAB_1427b782d;
            }
            break;
          }
          lVar11 = lVar11 + 1;
          lVar5 = lVar5 + -2;
        } while (lVar5 != 0);
      }
    }
    uVar15 = 0;
    plVar6 = (longlong *)0x0;
LAB_1427b782d:
    if ((longlong)DAT_14c867138 != 0) {
      lVar11 = (longlong)DAT_14c867138 << 4;
      bVar9 = false;
      lVar5 = DAT_14c867130;
      local_98 = uVar15;
      local_90 = plVar6;
      do {
        local_70 = (longlong *)0x0;
        local_68 = 0;
        FUN_146874de0(&local_70,lVar5);
        local_88 = 0;
        uStack_80 = 0;
        plVar6 = (longlong *)0x0;
        if (local_68 != 0) {
          plVar6 = local_70;
        }
        cVar1 = (**(code **)(*plVar6 + 0x58))(plVar6,param_1,&local_88);
        if (cVar1 != '\0') {
          iVar10 = (int)uStack_80 + -1;
          if ((int)uStack_80 == 0) {
            iVar10 = 0;
          }
          FUN_1402980a2(param_1,local_88,iVar10);
          bVar9 = true;
        }
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        if (local_68 == 0) {
LAB_1427b7900:
          if (local_70 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_70 != (longlong *)0x0) {
          (**(code **)*local_70)(local_70,0);
          FUN_1446efa72(&local_70,0,0,0x10);
          local_68 = 0;
          goto LAB_1427b7900;
        }
        plVar6 = local_90;
        lVar5 = lVar5 + 0x10;
        lVar11 = lVar11 + -0x10;
      } while (lVar11 != 0);
      uVar3 = (uint)local_98;
      if (bVar9) {
        plVar14 = local_90;
        if (1 < uVar3) {
          puVar2 = (undefined2 *)*param_1;
          iVar10 = (int)param_1[1];
          uVar7 = (longlong)iVar10 * 2;
          do {
            if (uVar7 == 0) goto LAB_1427b79b3;
            uVar15 = uVar7 - 2;
            lVar5 = uVar7 - 2;
            uVar7 = uVar15;
          } while (*(short *)((longlong)puVar2 + lVar5) != 0x2f);
          iVar13 = (int)(uVar15 >> 1);
          if (iVar13 != -1) {
            uVar3 = iVar13 + 1;
            uVar12 = iVar10 - 1;
            if (iVar10 == 0) {
              puVar2 = &DAT_149dfb77a;
              uVar12 = 0;
            }
            if ((int)uVar12 <= (int)uVar3) {
              uVar3 = uVar12;
            }
            uVar7 = (ulonglong)uVar3;
            if ((int)uVar3 < 1) {
              uVar7 = 0;
            }
            FUN_14006620a(&local_70,puVar2 + uVar7,uVar12 - (int)uVar7);
            plVar14 = local_70;
            uVar3 = local_68;
            if (plVar6 != (longlong *)0x0) {
              FUN_1400020a8(plVar6);
              plVar14 = local_70;
              uVar3 = local_68;
            }
          }
LAB_1427b79b3:
          FUN_1400020e8(param_1,&DAT_149e0635c,1);
          iVar10 = uVar3 - 1;
          if (uVar3 == 0) {
            iVar10 = 0;
          }
          FUN_1400020e8(param_1,plVar14,iVar10);
        }
        if (plVar14 != (longlong *)0x0) {
          FUN_1400020a8(plVar14);
        }
        goto LAB_1427b7a44;
      }
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_1400020a8(plVar6);
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  *param_1 = 0;
  iVar10 = *(int *)(param_2 + 1);
  pvVar8 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar10;
  if ((longlong)iVar10 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar10,0);
    memcpy((void *)*param_1,pvVar8,(longlong)iVar10 * 2);
  }
LAB_1427b7a44:
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427b7b10 FUN_1427b7b10 body=807 status=ok
// SIG undefined FUN_1427b7b10(void)

undefined8 * FUN_1427b7b10(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_318 [32];
  undefined4 local_2f8;
  undefined4 local_2f0;
  longlong local_2e0;
  longlong local_2d8 [2];
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  uint uStack_2c0;
  undefined4 uStack_2bc;
  longlong *local_2b0;
  longlong *local_2a8;
  undefined1 *local_2a0;
  uint local_298;
  undefined4 local_290;
  undefined4 uStack_28c;
  uint uStack_288;
  undefined4 uStack_284;
  char local_279;
  undefined1 *local_278;
  undefined1 *local_270;
  undefined1 **local_268;
  uint local_260;
  undefined1 local_258 [256];
  undefined1 *local_158;
  undefined1 *local_150;
  ulonglong *local_148;
  char local_140;
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_278 = (undefined1 *)*param_2;
  if ((local_278 != (undefined1 *)0x0) && (1 < (int)param_2[3])) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_318);
  }
  local_158 = local_138;
  local_140 = '\0';
  local_148 = &local_38;
  local_150 = local_158;
  FUN_14005eb5c(&local_278,&local_158);
  puVar3 = local_158;
  local_279 = '\0';
  local_2a0 = local_158;
  uVar7 = (uint)((ulonglong)((longlong)local_150 - (longlong)local_158) >> 1);
  local_298 = uVar7;
  FUN_144aa0ab0(&local_290,&local_2a0,&local_279,1);
  uVar2 = uStack_288;
  if ((uStack_288 == 0) || (local_279 == '\x01')) {
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_1427b7beb;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c926f30) {
    FUN_144b3d300(&DAT_14c926f30);
    if (DAT_14c926f30 == -1) {
      FUN_1413288e0(&DAT_14c926ca8);
      atexit(FUN_1427ac032);
      _Init_thread_footer(&DAT_14c926f30);
    }
  }
  local_2c8 = local_290;
  uStack_2c4 = uStack_28c;
  uStack_2c0 = uStack_288;
  uStack_2bc = uStack_284;
  (**(code **)(DAT_14c926ca8 + 0x70))(&DAT_14c926ca8,&local_2b0);
  if (local_2b0 == (longlong *)0x0) {
LAB_1427b7c8b:
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar5 = (longlong *)(**(code **)(*local_2b0 + 0x70))();
    if ((int)plVar5[1] < 2) goto LAB_1427b7c8b;
    uVar6 = ~uVar2 + uVar7;
    if ((int)uVar7 <= (int)(~uVar2 + uVar7)) {
      uVar6 = uVar7;
    }
    local_260 = 0;
    if (0 < (int)uVar6) {
      local_260 = uVar6;
    }
    local_268 = (undefined1 **)(puVar3 + ((longlong)(int)uVar7 * 2 - (ulonglong)(local_260 * 2)));
    local_278 = (undefined1 *)*plVar5;
    local_270 = (undefined1 *)CONCAT44(local_270._4_4_,(int)plVar5[1] + -1);
    FUN_140bee87a(local_2d8,&local_278,2);
    if (param_2[1] != 0) {
      local_278 = local_258;
      local_260 = local_260 & 0xffffff00;
      local_268 = &local_158;
      local_2e0 = param_2[1];
      local_270 = local_278;
      FUN_14005eb5c(&local_2e0,&local_278);
      FUN_1401aebe8(local_2d8,local_278,(ulonglong)((longlong)local_270 - (longlong)local_278) >> 1)
      ;
      if ((char)local_260 == '\x01') {
        FUN_1400020a8(local_278);
      }
    }
    local_2f0 = 0xffffffff;
    local_2f8 = 0;
    iVar4 = FUN_1447ee042(local_2d8,&DAT_149e61036,1,1);
    *param_1 = 0;
    param_1[1] = 0;
    if (iVar4 == -1) {
      FUN_1467ad5e8(param_1,local_2d8,0);
    }
    if (local_2d8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_2a8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_2a8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_2a8)(local_2a8);
      LOCK();
      piVar1 = (int *)((longlong)local_2a8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2a8 + 0x10))(local_2a8);
      }
    }
  }
LAB_1427b7beb:
  if (local_140 == '\x01') {
    FUN_1400020a8(local_158);
  }
  if ((local_38 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427b7f86 FUN_1427b7f86 body=23 status=ok
// SIG undefined FUN_1427b7f86(void)

void FUN_1427b7f86(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(param_1 + *(longlong *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001427b7f9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + *(longlong *)(param_1 + 0x10),0,UNRECOVERED_JUMPTABLE);
  return;
}



// FUNCTION 1427b7fa2 FUN_1427b7fa2 body=434 status=ok
// SIG undefined FUN_1427b7fa2(void)

void FUN_1427b7fa2(void)

{
  FUN_141711127(DAT_14c948480,DAT_14c948488);
  if (DAT_14c948480 != 0) {
    FUN_1400020a8();
  }
  FUN_140b9d6c4(DAT_14c948468);
  FUN_140b9d678(&DAT_14c948460,DAT_14c948460);
  FUN_140b9d6c4(DAT_14c948440);
  FUN_140b9d678(&DAT_14c948438,DAT_14c948438);
  if (DAT_14c948420 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c948410 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c948400 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9483f0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9483e0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9483d0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9483c0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9483b0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9483a0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c948390 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c948380 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c948370 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c948360 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c948350 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c948340 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c948330 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c948320 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c948310 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c948300 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1427b8154 FUN_1427b8154 body=1521 status=ok
// SIG undefined FUN_1427b8154(void)

void FUN_1427b8154(PSRWLOCK param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  PSRWLOCK pRVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ushort uVar17;
  ulonglong uVar18;
  PSRWLOCK SRWLock;
  uint uVar19;
  ulonglong uVar20;
  ushort uVar21;
  int iVar22;
  ulonglong uVar23;
  undefined1 auStack_118 [32];
  PSRWLOCK local_f8;
  PSRWLOCK local_f0;
  PSRWLOCK local_e8;
  longlong *local_e0;
  PSRWLOCK local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  longlong local_c0;
  int local_b8;
  longlong local_b0;
  int local_a8;
  char local_99;
  longlong local_98;
  int local_90;
  longlong local_88;
  int local_80;
  char local_71;
  longlong local_70;
  int local_68;
  longlong local_60;
  int local_58;
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  AcquireSRWLockExclusive(param_1);
  iVar13 = *(int *)&param_1[0x32].Ptr;
  if (iVar13 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
  }
  pRVar11 = param_1 + 0x31;
  local_d0 = param_2 + 2;
  local_e8 = param_1 + 0x27;
  local_f0 = param_1 + 0x2c;
  uVar8 = 0;
  uVar20 = 0;
  local_f8 = param_1;
  local_e0 = param_2;
  local_d8 = pRVar11;
LAB_1427b81d5:
  iVar14 = (int)param_2[1];
  iVar1 = (int)param_2[3];
  uVar20 = (ulonglong)(int)uVar20;
  do {
    plVar6 = *(longlong **)((longlong)pRVar11->Ptr + uVar20 * 8);
    iVar2 = (int)plVar6[1];
    local_c8 = uVar8;
    if (iVar2 == iVar14) {
      if (1 < iVar14) {
        lVar12 = 0;
        while( true ) {
          uVar21 = *(ushort *)(*plVar6 + lVar12);
          uVar17 = *(ushort *)(*param_2 + lVar12);
          if (uVar21 != uVar17) break;
          if (uVar21 == 0) goto LAB_1427b825f;
LAB_1427b821d:
          lVar12 = lVar12 + 2;
        }
        if ((uVar17 | uVar21) < 0x80) {
          if ((&DAT_149e05da0)[uVar21] == (&DAT_149e05da0)[(uint)uVar17]) goto LAB_1427b821d;
          iVar22 = (uint)(byte)(&DAT_149e05da0)[uVar21] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar17]
          ;
        }
        else {
          iVar22 = (uint)uVar21 - (uint)uVar17;
        }
        if (iVar22 != 0) goto LAB_1427b82cc;
      }
LAB_1427b825f:
      if ((int)plVar6[3] == iVar1) {
        if (1 < iVar1) {
          lVar12 = 0;
          while( true ) {
            uVar21 = *(ushort *)(plVar6[2] + lVar12);
            uVar23 = (ulonglong)uVar21;
            uVar17 = *(ushort *)(param_2[2] + lVar12);
            if (uVar21 != uVar17) break;
            if (uVar21 == 0) goto LAB_1427b82c5;
LAB_1427b8289:
            lVar12 = lVar12 + 2;
          }
          if ((uVar17 | uVar21) < 0x80) {
            uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
            uVar18 = (ulonglong)uVar17;
            uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
            if ((&DAT_149e05da0)[uVar23] == (&DAT_149e05da0)[uVar18]) goto LAB_1427b8289;
          }
          if (uVar21 != uVar17) goto LAB_1427b82cc;
        }
      }
      else if ((int)plVar6[3] + iVar1 != 1) goto LAB_1427b82cc;
LAB_1427b82c5:
      if ((*(byte *)(plVar6 + 6) & 1) != 0) break;
    }
    else if (iVar14 + iVar2 == 1) goto LAB_1427b825f;
LAB_1427b82cc:
    uVar20 = uVar20 + 1;
    if ((longlong)iVar13 <= (longlong)uVar20) {
      ReleaseSRWLockExclusive(local_f8);
      if ((local_c8 & 1) == 0) goto LAB_1427b86fd;
      goto LAB_1427b86e7;
    }
  } while( true );
  local_60 = *plVar6;
  local_58 = iVar2 + -1;
  if (iVar2 == 0) {
    local_58 = 0;
  }
  FUN_1468733e0(local_e8,&local_60,&local_49);
  param_2 = local_e0;
  uVar19 = (uint)uVar20;
  if (local_49 == '\x01') {
    uVar3 = *(uint *)&local_f8[0x32].Ptr;
    uVar9 = ~uVar19 + uVar3;
    if ((int)uVar3 <= (int)(~uVar19 + uVar3)) {
      uVar9 = uVar3;
    }
    if (0 < (int)uVar9) {
      plVar5 = (longlong *)((longlong)(int)uVar3 * 8 + (longlong)local_f8[0x31].Ptr);
      plVar10 = plVar5 + -(ulonglong)uVar9;
      iVar13 = (int)local_e0[1];
LAB_1427b8372:
      plVar4 = (longlong *)*plVar10;
      iVar14 = (int)plVar4[1];
      if (iVar14 != iVar13) {
        if (iVar13 + iVar14 == 1) {
          lVar12 = *plVar4;
          iVar13 = iVar14;
          goto LAB_1427b83fe;
        }
        goto LAB_1427b83e4;
      }
      lVar12 = *plVar4;
      if (1 < iVar13) {
        lVar15 = 0;
        do {
          uVar21 = *(ushort *)(lVar12 + lVar15);
          uVar17 = *(ushort *)(*local_e0 + lVar15);
          if (uVar21 == uVar17) {
            if (uVar21 == 0) break;
          }
          else {
            if (0x7f < (uVar17 | uVar21)) {
              iVar14 = (uint)uVar21 - (uint)uVar17;
              goto LAB_1427b83cf;
            }
            if ((&DAT_149e05da0)[uVar21] != (&DAT_149e05da0)[(uint)uVar17])
            goto code_r0x0001427b83cc;
          }
          lVar15 = lVar15 + 2;
        } while( true );
      }
      goto LAB_1427b83fe;
    }
  }
LAB_1427b8430:
  SRWLock = local_f8;
  local_88 = plVar6[2];
  local_80 = (int)plVar6[3] + -1;
  if ((int)plVar6[3] == 0) {
    local_80 = 0;
  }
  FUN_1468733e0(local_f0,&local_88,&local_71);
  if (local_71 == '\x01') {
    uVar3 = *(uint *)&SRWLock[0x32].Ptr;
    uVar9 = ~uVar19 + uVar3;
    if ((int)uVar3 <= (int)(~uVar19 + uVar3)) {
      uVar9 = uVar3;
    }
    if (0 < (int)uVar9) {
      plVar5 = (longlong *)((longlong)(int)uVar3 * 8 + (longlong)SRWLock[0x31].Ptr);
      plVar10 = plVar5 + -(ulonglong)uVar9;
      iVar13 = (int)param_2[3];
LAB_1427b84b1:
      lVar12 = *plVar10;
      iVar14 = *(int *)(lVar12 + 0x18);
      if (iVar14 != iVar13) {
        if (iVar13 + iVar14 == 1) {
          lVar15 = *(longlong *)(lVar12 + 0x10);
          iVar13 = iVar14;
          goto LAB_1427b8542;
        }
        goto LAB_1427b8524;
      }
      lVar15 = *(longlong *)(lVar12 + 0x10);
      if (1 < iVar13) {
        lVar16 = 0;
        do {
          uVar21 = *(ushort *)(lVar15 + lVar16);
          uVar17 = *(ushort *)(param_2[2] + lVar16);
          if (uVar21 == uVar17) {
            if (uVar21 == 0) break;
          }
          else {
            if (0x7f < (uVar17 | uVar21)) {
              iVar14 = (uint)uVar21 - (uint)uVar17;
              goto LAB_1427b850f;
            }
            if ((&DAT_149e05da0)[uVar21] != (&DAT_149e05da0)[(uint)uVar17])
            goto code_r0x0001427b850c;
          }
          lVar16 = lVar16 + 2;
        } while( true );
      }
      goto LAB_1427b8542;
    }
  }
LAB_1427b8574:
  local_b0 = plVar6[4];
  local_a8 = (int)plVar6[5] + -1;
  if ((int)plVar6[5] == 0) {
    local_a8 = 0;
  }
  FUN_1468733e0(local_f0,&local_b0,&local_99);
  if (local_99 == '\x01') {
    uVar3 = *(uint *)&SRWLock[0x32].Ptr;
    uVar9 = ~uVar19 + uVar3;
    if ((int)uVar3 <= (int)(~uVar19 + uVar3)) {
      uVar9 = uVar3;
    }
    if (0 < (int)uVar9) {
      plVar6 = (longlong *)((longlong)(int)uVar3 * 8 + (longlong)SRWLock[0x31].Ptr);
      plVar5 = plVar6 + -(ulonglong)uVar9;
      iVar13 = (int)param_2[5];
LAB_1427b85e6:
      lVar12 = *plVar5;
      iVar14 = *(int *)(lVar12 + 0x28);
      if (iVar14 != iVar13) {
        if (iVar13 + iVar14 == 1) {
          lVar15 = *(longlong *)(lVar12 + 0x20);
          iVar13 = iVar14;
          goto LAB_1427b8668;
        }
        goto LAB_1427b8653;
      }
      lVar15 = *(longlong *)(lVar12 + 0x20);
      if (1 < iVar13) {
        lVar16 = 0;
        do {
          uVar21 = *(ushort *)(lVar15 + lVar16);
          uVar17 = *(ushort *)(param_2[4] + lVar16);
          if (uVar21 == uVar17) {
            if (uVar21 == 0) break;
          }
          else {
            if (0x7f < (uVar17 | uVar21)) {
              iVar14 = (uint)uVar21 - (uint)uVar17;
              goto LAB_1427b8642;
            }
            if ((&DAT_149e05da0)[uVar21] != (&DAT_149e05da0)[(uint)uVar17])
            goto code_r0x0001427b863f;
          }
          lVar16 = lVar16 + 2;
        } while( true );
      }
      goto LAB_1427b8668;
    }
  }
LAB_1427b868c:
  pRVar11 = local_d8;
  FUN_146873818(local_d8,uVar20 & 0xffffffff);
  uVar7 = FUN_146873878(pRVar11);
  iVar13 = *(int *)&SRWLock[0x32].Ptr;
  uVar8 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
  if (iVar13 <= (int)uVar19) {
    ReleaseSRWLockExclusive(SRWLock);
LAB_1427b86e7:
    FUN_140b9d292(&DAT_14c9485d8,local_e0,local_d0);
LAB_1427b86fd:
    if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_1427b81d5;
code_r0x0001427b83cc:
  iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar21] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar17];
LAB_1427b83cf:
  if (iVar14 == 0) {
LAB_1427b83fe:
    local_68 = iVar13 + -1;
    if (iVar13 == 0) {
      local_68 = 0;
    }
    local_70 = lVar12;
    plVar5 = (longlong *)FUN_140b9c96c(local_e8,&local_70);
    *plVar5 = (longlong)plVar4;
    goto LAB_1427b8430;
  }
LAB_1427b83e4:
  plVar10 = plVar10 + 1;
  if (plVar10 == plVar5) goto LAB_1427b8430;
  goto LAB_1427b8372;
code_r0x0001427b850c:
  iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar21] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar17];
LAB_1427b850f:
  if (iVar14 == 0) {
LAB_1427b8542:
    local_90 = iVar13 + -1;
    if (iVar13 == 0) {
      local_90 = 0;
    }
    local_98 = lVar15;
    plVar5 = (longlong *)FUN_140b9c96c(local_f0,&local_98);
    *plVar5 = lVar12;
    SRWLock = local_f8;
    goto LAB_1427b8574;
  }
LAB_1427b8524:
  plVar10 = plVar10 + 1;
  SRWLock = local_f8;
  if (plVar10 == plVar5) goto LAB_1427b8574;
  goto LAB_1427b84b1;
code_r0x0001427b863f:
  iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar21] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar17];
LAB_1427b8642:
  if (iVar14 == 0) {
LAB_1427b8668:
    local_b8 = iVar13 + -1;
    if (iVar13 == 0) {
      local_b8 = 0;
    }
    local_c0 = lVar15;
    plVar6 = (longlong *)FUN_140b9c96c(local_f0,&local_c0);
    *plVar6 = lVar12;
    goto LAB_1427b868c;
  }
LAB_1427b8653:
  plVar5 = plVar5 + 1;
  if (plVar5 == plVar6) goto LAB_1427b868c;
  goto LAB_1427b85e6;
}



// FUNCTION 1427b879c FUN_1427b879c body=91 status=ok
// SIG undefined FUN_1427b879c(void)

undefined8 FUN_1427b879c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 200);
  *(uint *)(lVar2 + 200) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xcc) < iVar1 + 1U) {
    FUN_1456b1fa2(lVar2,iVar1);
  }
  lVar3 = *(longlong *)(lVar2 + 0xc0);
  if (*(longlong *)(lVar2 + 0xc0) == 0) {
    lVar3 = lVar2;
  }
  *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *param_2;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 1427b87f8 FUN_1427b87f8 body=91 status=ok
// SIG undefined FUN_1427b87f8(void)

undefined8 FUN_1427b87f8(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 200);
  *(uint *)(lVar2 + 200) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xcc) < iVar1 + 1U) {
    FUN_1456b1fa2(lVar2,iVar1);
  }
  lVar3 = *(longlong *)(lVar2 + 0xc0);
  if (*(longlong *)(lVar2 + 0xc0) == 0) {
    lVar3 = lVar2;
  }
  *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *param_2;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 1427b88a8 FUN_1427b88a8 body=491 status=ok
// SIG undefined FUN_1427b88a8(void)

void FUN_1427b88a8(longlong *param_1,longlong *param_2)

{
  ushort *puVar1;
  void *_Dst;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  ushort uVar12;
  int iVar13;
  ushort uVar14;
  ulonglong uVar15;
  
  lVar2 = *param_2;
  if ((lVar2 != 0) &&
     ((ulonglong)((longlong *)*param_1)[1] <= (ulonglong)(lVar2 - *(longlong *)*param_1))) {
    ((undefined8 *)param_1[1])[1] = *(undefined8 *)param_1[1];
    uVar7 = *(ulonglong *)(lVar2 + 0x18);
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    puVar1 = (ushort *)((&DAT_14c87eb10)[uVar7 >> 0x10 & 0xffff] + (uVar7 & 0xffff) * 2);
    plVar3 = (longlong *)param_1[1];
    uVar7 = (ulonglong)(*puVar1 >> 6);
    lVar6 = plVar3[1];
    if ((ulonglong)plVar3[2] <= lVar6 + uVar7 * 2) {
      FUN_140213274(plVar3,uVar7);
      lVar6 = plVar3[1];
    }
    plVar3[1] = lVar6 + uVar7 * 2;
    _Dst = (void *)(*plVar3 + (longlong)(int)((ulonglong)(lVar6 - *plVar3) >> 1) * 2);
    uVar12 = *puVar1;
    if ((uVar12 & 1) == 0) {
      memcpy(_Dst,puVar1 + 1,(ulonglong)(uVar12 >> 6));
      if (0x3f < *puVar1) {
        uVar12 = *puVar1 >> 6;
        uVar5 = (uint)uVar12;
        uVar7 = (ulonglong)(uVar12 - 1);
        do {
          *(short *)((longlong)_Dst + uVar7 * 2) = (short)*(char *)((longlong)_Dst + uVar7);
          uVar7 = uVar7 - 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    else {
      memcpy(_Dst,puVar1 + 1,(ulonglong)(uVar12 >> 5 & 0xfffffffe));
    }
    lVar6 = *(longlong *)param_1[1];
    lVar4 = *(longlong *)param_1[2];
    uVar7 = ((longlong *)param_1[2])[1] - lVar4;
    iVar11 = (int)(uVar7 >> 1);
    iVar9 = (int)((ulonglong)(((longlong *)param_1[1])[1] - lVar6) >> 1);
    if (iVar11 < iVar9) {
      iVar9 = iVar11;
    }
    iVar13 = 0;
    if (0 < iVar9) {
      iVar13 = iVar9;
    }
    if (iVar13 == iVar11) {
      if (((iVar11 != 0) && (0 < iVar9)) && ((uVar7 & 0x1ffffffff) >> 1 != 0)) {
        lVar8 = (longlong)(uVar7 * 0x80000000) >> 0x20;
        lVar10 = 0;
        while( true ) {
          uVar12 = *(ushort *)(lVar4 + lVar10);
          uVar7 = (ulonglong)uVar12;
          uVar14 = *(ushort *)(lVar6 + lVar10);
          if (uVar12 != uVar14) break;
          if (uVar12 == 0) goto LAB_1427b8a31;
LAB_1427b8a01:
          lVar8 = lVar8 + -1;
          if (lVar8 == 0) goto LAB_1427b8a31;
          lVar10 = lVar10 + 2;
        }
        if ((uVar14 | uVar12) < 0x80) {
          uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar15 = (ulonglong)uVar14;
          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar15]) goto LAB_1427b8a01;
        }
        if (uVar12 != uVar14) {
          return;
        }
      }
LAB_1427b8a31:
      plVar3 = (longlong *)param_1[3];
      iVar9 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar9 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar9 + 1U) {
        FUN_146874aec(plVar3,iVar9);
      }
      *(longlong *)(*plVar3 + (longlong)iVar9 * 8) = lVar2;
    }
  }
  return;
}



// FUNCTION 1427b8a94 FUN_1427b8a94 body=92 status=ok
// SIG undefined FUN_1427b8a94(void)

undefined8 FUN_1427b8a94(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = *param_2;
  FUN_144757f48(lVar4,0x40000000);
  uVar2 = *(uint *)(lVar4 + 0xc);
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar4 = 0;
  }
  do {
    uVar2 = *(uint *)(lVar4 + 8);
    uVar3 = (ulonglong)uVar2;
    if ((uVar2 >> 0x15 & 1) != 0) break;
    LOCK();
    uVar1 = *(uint *)(lVar4 + 8);
    if (uVar2 == uVar1) {
      *(uint *)(lVar4 + 8) = uVar2 | 0x200000;
    }
    else {
      uVar3 = (ulonglong)uVar1;
    }
    UNLOCK();
  } while (uVar2 != uVar1);
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 1427b8af0 FUN_1427b8af0 body=156 status=ok
// SIG undefined FUN_1427b8af0(void)

/* WARNING: Removing unreachable block (ram,0x0001427b8b68) */

undefined8 FUN_1427b8af0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1 = (longlong *)*param_1;
  FUN_140056680(&local_28,*param_2);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = local_28;
  *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_20;
  *(undefined4 *)(lVar2 + 0xc + lVar3) = local_20._4_4_;
  local_20 = 0;
  local_28 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 1427b8b8e FUN_1427b8b8e body=127 status=ok
// SIG undefined FUN_1427b8b8e(void)

undefined4 FUN_1427b8b8e(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_1;
  FUN_1427b95fe(param_2,&local_38,0);
  local_28 = local_38;
  if (local_30 == 0) {
    local_28 = &DAT_149dfb77a;
  }
  uVar2 = (*(code *)*puVar1)(puVar1[1]);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1427b8c0e FUN_1427b8c0e body=165 status=ok
// SIG undefined FUN_1427b8c0e(void)

void FUN_1427b8c0e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  void *_Dst;
  undefined2 *puVar4;
  undefined2 uVar5;
  longlong lVar6;
  
  _Src = (void *)*param_2;
  iVar1 = *(int *)(param_2 + 1);
  lVar6 = (longlong)iVar1;
  iVar2 = *(int *)param_1[1];
  *(int *)param_1[1] = iVar2 + 1;
  lVar3 = *param_1;
  puVar4 = *(undefined2 **)(lVar3 + 8);
  if (*(undefined2 **)(lVar3 + 0x10) <= puVar4 + 1) {
    FUN_140213274(lVar3,1);
    puVar4 = *(undefined2 **)(lVar3 + 8);
  }
  uVar5 = 0x2e;
  if (iVar2 == 1) {
    uVar5 = 0x3a;
  }
  *(undefined2 **)(lVar3 + 8) = puVar4 + 1;
  *puVar4 = uVar5;
  if (*(ulonglong *)(lVar3 + 0x10) <= (ulonglong)(*(longlong *)(lVar3 + 8) + lVar6 * 2)) {
    FUN_140213274(lVar3,lVar6);
  }
  if (iVar1 != 0) {
    _Dst = *(void **)(lVar3 + 8);
    memcpy(_Dst,_Src,lVar6 * 2);
    *(void **)(lVar3 + 8) = (void *)((longlong)_Dst + lVar6 * 2);
  }
  return;
}



// FUNCTION 1427b8cb3 FUN_1427b8cb3 body=1899 status=ok
// SIG undefined FUN_1427b8cb3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b8cb3(void)

{
  char *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  char **ppcStack_80;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446f470e(&local_68,L"GbxHasStructType",1);
  FUN_1446f470e(&local_70,L"/Script/CoreUObject",1);
  uVar2 = local_68;
  pcVar1 = local_70;
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar4[1] = 0x800000008;
  *puVar4 = &PTR_FUN_149e62240;
  local_60 = pcVar1;
  local_58 = uVar2;
  FUN_1427dc50a(&local_60,puVar4);
  FUN_1446f470e(&local_68,L"GbxInlineStruct",1);
  FUN_1446f470e(&local_70,L"/Script/CoreUObject",1);
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar4[1] = 0x800000018;
  *puVar4 = &PTR_FUN_149e623c0;
  local_60 = local_70;
  local_58 = local_68;
  FUN_1427dc50a(&local_60,puVar4);
  local_60 = "StructType";
  local_58._0_5_ = 10;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14c947dd8 = (ulonglong)uVar3;
  local_60 = "StructData";
  local_58 = CONCAT35(local_58._5_3_,10);
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14c947de0 = (ulonglong)uVar3;
  DAT_14c947de8 = 0;
  uRam000000014c947df0 = 0;
  atexit((_func_5014 *)&LAB_1427b439c);
  InitializeSRWLock((PSRWLOCK)&DAT_14c947df8);
  local_60 = (char *)((ulonglong)local_60 & 0xffffffffffffff00);
  local_88._0_4_ = 0;
  FUN_140bd5914(&DAT_14c947e00,L"gbx.AsyncLoadingFlushRequiresGuard",&local_60,
                L"If true, async loading flush will require a guard or they will ensure");
  atexit(FUN_1427b43d1);
  FUN_1446f470e(&DAT_14c947e78,L"GameDataHandleProperty",1);
  DAT_14c947ea0 = 0;
  DAT_14c947ea8 = 0;
  DAT_14c947e80 = 0;
  _DAT_14c947e88 = 0;
  _DAT_14c947eac = 0xffffffff00000080;
  DAT_14c947eb4 = 0;
  DAT_14c947ec0 = 0;
  DAT_14c947ec8 = 0;
  atexit(FUN_1427b4443);
  DAT_14c947ef0 = 0;
  DAT_14c947ef8 = 0;
  DAT_14c947ed0 = 0;
  _DAT_14c947ed8 = 0;
  _DAT_14c947efc = 0xffffffff00000080;
  DAT_14c947f04 = 0;
  DAT_14c947f10 = 0;
  DAT_14c947f18 = 0;
  atexit(FUN_1427b446c);
  DAT_14c947fe8._4_4_ = 0;
  DAT_14c947ff0 = 0;
  FUN_14052b5e0(&DAT_14c947fe8,&DAT_149e62dd2,0);
  _DAT_14c947ff8 = &DAT_149e62dd2;
  _DAT_14c9485f0 = 0;
  DAT_14c9485f8 = 0;
  DAT_14c948600 = 0;
  ram0x00014c948608 = 0;
  uRam000000014c948610 = 0;
  atexit((_func_5014 *)&LAB_1427b4bc2);
  local_58._0_4_ = DAT_14c947ff0;
  local_60 = (char *)CONCAT44(DAT_14c947fe8._4_4_,(undefined4)DAT_14c947fe8);
  FUN_1448075d0(&DAT_14c948000,&local_60);
  atexit((_func_5014 *)&LAB_1427b4bd3);
  DAT_14c9485a8 = 0;
  DAT_14c9485b0 = 0;
  atexit(FUN_1427b4c1d);
  DAT_14c948618 = 0;
  DAT_14c948620 = 0;
  DAT_14c948034 = 0;
  FUN_14052b5e0(&DAT_14c948030,"unknown",0);
  local_60 = "summary";
  local_58 = CONCAT35(local_58._5_3_,7);
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14c948028 = (ulonglong)uVar3;
  DAT_14c948598 = 0;
  DAT_14c9485a0 = 0;
  atexit(FUN_1427b4c78);
  FUN_1446f470e(&DAT_14c948098,L"/Script/CoreUObject",1);
  FUN_1446f470e(&DAT_14c9480a0,L"/Script/Engine",1);
  FUN_1446f470e(&DAT_14c9480a8,L"/Script/BlueprintGraph",1);
  FUN_1446f470e(&DAT_14c9480b0,L"/Script/UnrealEd",1);
  FUN_1446f470e(&DAT_14c9480b8,L"Object",1);
  FUN_1446f470e(&DAT_14c9480c0,L"ObjectRedirector",1);
  FUN_1446f470e(&DAT_14c9480c8,L"BlueprintCore",1);
  FUN_1446f470e(&DAT_14c9480d0,L"Blueprint",1);
  FUN_1446f470e(&DAT_14c9480d8,L"BlueprintGeneratedClass",1);
  local_88._0_4_ = 0;
  FUN_14153156c(&DAT_14c9480e0,L"PluginManager.VerifyUnload",&DAT_14c75ec08,
                L"Verify plugin assets are no longer in memory when unloading.");
  atexit(FUN_1427b4eb8);
  local_88._0_4_ = 0;
  FUN_14153156c(&DAT_14c9480f0,L"GameFeaturePlugin.VerifyUnload",&DAT_14c75ec08,
                L"Verify plugin assets are no longer in memory when unloading. Deprecated use PluginManager.VerifyUnload instead"
               );
  atexit(FUN_1427b4efd);
  local_88._0_4_ = 0;
  FUN_141471170(&DAT_14c948100,L"PluginManager.LeakedAssetTrace.Severity.Shipping",&DAT_14c75ec0c,
                L"Controls severity of logging when the engine detects that assets from an Game Feature Plugin were leaked during unloading or unmounting.\n0 - all reference tracing and logging is disabled\n1 - logs an error\n2 - ensure\n3 - fatal error\n"
               );
  atexit(FUN_1427b4f42);
  local_88._0_4_ = 0;
  FUN_141471170(&DAT_14c948110,L"GameFeaturePlugin.LeakedAssetTrace.Severity.Shipping",
                &DAT_14c75ec0c,
                L"Controls severity of logging when the engine detects that assets from an Game Feature Plugin were leaked during unloading or unmounting. . Deprecated use GameFeaturePlugin.LeakedAssetTrace instead\n0 - all reference tracing and logging is disabled\n1 - logs an error\n2 - ensure\n3 - fatal error\n"
               );
  atexit(FUN_1427b4f87);
  local_88._0_4_ = 0;
  FUN_14153156c(&DAT_14c948120,L"PluginManager.LeakedAssetTrace.RenameLeakedPackages",&DAT_14c75ec10
                ,
                L"Should packages which are leaked after the Game Feature Plugin is unloaded or unmounted."
               );
  atexit(FUN_1427b4fcc);
  local_88._0_4_ = 0;
  FUN_14153156c(&DAT_14c948130,
                L"GameFeaturePlugin.LeakedAssetTrace.RenameLeakedPackages. Deprecated used PluginManager.LeakedAssetTrace.RenameLeakedPackages instead"
                ,&DAT_14c75ec10,
                L"Should packages which are leaked after the Game Feature Plugin is unloaded or unmounted."
               );
  atexit(FUN_1427b5011);
  local_88._0_4_ = 0;
  FUN_141471170(&DAT_14c948140,L"PluginManager.LeakedAssetTrace.TraceMode.Shipping",&DAT_14c948150,
                L"Controls detail level of reference tracing when the engine detects that assets from a Game Feature Plugin were leaked during unloading or unmounting.\n0 - direct references only\n1 - full reference trace"
               );
  atexit(FUN_1427b5056);
  local_88._0_4_ = 0;
  FUN_141471170(&DAT_14c948158,L"GameFeaturePlugin.LeakedAssetTrace.TraceMode.Shipping",
                &DAT_14c948150,
                L"Controls detail level of reference tracing when the engine detects that assets from a Game Feature Plugin were leaked during unloading or unmounting. Deprecated used PluginManager.LeakedAssetTrace.TraceMode instead\n0 - direct references only\n1 - full reference trace"
               );
  atexit(FUN_1427b509b);
  local_88._0_4_ = 0;
  FUN_141471170(&DAT_14c948168,L"PluginManager.LeakedAssetTrace.MaxReportCount",&DAT_14c75ec14,
                L"Max number of assets to report when we find leaked assets.\n");
  atexit(FUN_1427b50e0);
  local_88 = (undefined8 *)((ulonglong)local_88._4_4_ << 0x20);
  FUN_141471170(&DAT_14c948178,
                L"GameFeaturePlugin.LeakedAssetTrace.MaxReportCount. Deprecated use PluginManager.LeakedAssetTrace.MaxReportCount instead"
                ,&DAT_14c75ec14,L"Max number of assets to report when we find leaked assets.\n");
  atexit(FUN_1427b5125);
  _DAT_14c948188 = &PTR_FUN_149e62050;
  DAT_14c948190 = 0;
  _DAT_14c948198 = 0;
  _DAT_14c9481a0 = 0;
  atexit(FUN_1427b516a);
  local_78 = 0;
  local_88 = (undefined8 *)0x0;
  ppcStack_80 = (char **)0x0;
  FUN_14282b410(L"/Script/CoreUObject",&PTR_FUN_149e602d0,1,0);
  local_88 = &DAT_14c9481c0;
  ppcStack_80 = &local_60;
  FUN_14058d408(FUN_145c24da2,&LAB_145a50b52,L"/Script/CoreUObject",L"UGCObjectReferencer");
  DAT_14c9485c0 = 0;
  _DAT_14c9485c8 = 0;
  _DAT_14c9485d0 = 2;
  atexit(FUN_1427b594f);
  DAT_14c9485d8 = 0;
  _DAT_14c9485e0 = 0;
  _DAT_14c9485e8 = 2;
  atexit(FUN_1427b5980);
  DAT_14c9481d8 = 0;
  DAT_14c9481e0 = 0;
  atexit(FUN_1427b59b1);
  _DAT_14c948228 = 0;
  _DAT_14c948230 = 0;
  DAT_14c948208 = 0;
  _DAT_14c948210 = 0;
  _DAT_14c948234 = 0xffffffff00000080;
  DAT_14c94823c = 0;
  DAT_14c948248 = 0;
  DAT_14c948250 = 0;
  atexit(FUN_1427b6ba8);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427b945c FUN_1427b945c body=27 status=ok
// SIG undefined FUN_1427b945c(void)

void FUN_1427b945c(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return;
}



// FUNCTION 1427b9478 FUN_1427b9478 body=16 status=ok
// SIG undefined FUN_1427b9478(void)

void FUN_1427b9478(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return;
}



// FUNCTION 1427b9488 FUN_1427b9488 body=84 status=ok
// SIG undefined FUN_1427b9488(void)

undefined8 * FUN_1427b9488(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_1414176ea(&local_28,param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427b94de FUN_1427b94de body=287 status=ok
// SIG undefined FUN_1427b94de(void)

undefined8 * FUN_1427b94de(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_4c;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *(undefined4 *)param_2;
  uStack_64 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_60 = *(undefined4 *)(param_2 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar3 = FUN_146874e64(&local_68,&local_4c);
  bVar1 = (char)uVar3 - 7;
  uVar5 = 0;
  uVar4 = (undefined1)(0x502020201 >> (bVar1 * '\b' & 0x3f));
  uVar2 = uVar5;
  if (4 < bVar1) {
    uVar4 = 0;
    uVar2 = uVar3 & 0xff;
  }
  *param_3 = uVar4;
  uVar3 = *(uint *)(param_2 + 1);
  if ((int)local_4c < (int)*(uint *)(param_2 + 1)) {
    uVar3 = local_4c;
  }
  if ((int)uVar3 < 1) {
    uVar3 = uVar5;
  }
  FUN_14006620a(&local_48,*param_2,uVar3);
  local_78 = local_48;
  uStack_70 = uStack_40;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140f11842(&local_78,&local_48,0,0);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  uVar3 = (int)uStack_40 - 1;
  if ((int)uStack_40 == 0) {
    uVar3 = uVar5;
  }
  FUN_1446f82e2(param_1,uVar3,local_48,1);
  *(char *)(param_1 + 1) = (char)uVar2;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427b95fe FUN_1427b95fe body=366 status=ok
// SIG undefined FUN_1427b95fe(void)

longlong * FUN_1427b95fe(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  char cVar1;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  longlong local_50;
  int local_48;
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_1 != 0) {
    FUN_1400021e4(param_1,&local_50);
    switch(param_3) {
    case 0:
      *param_2 = 0;
      param_2[1] = 0;
      break;
    case 1:
      *param_2 = 0;
      param_2[1] = 0;
      break;
    case 2:
      *param_2 = 0;
      param_2[1] = 0;
      break;
    case 3:
      *param_2 = 0;
      param_2[1] = 0;
      break;
    case 4:
      *param_2 = 0;
      param_2[1] = 0;
      break;
    case 5:
      *param_2 = 0;
      param_2[1] = 0;
      break;
    default:
      *param_2 = 0;
      param_2[1] = 0;
    }
    FUN_140056680(&local_60);
    local_30 = local_60;
    local_28 = local_58 + -1;
    if (local_58 == 0) {
      local_28 = 0;
    }
    local_40 = local_50;
    local_38 = local_48 + -1;
    if (local_48 == 0) {
      local_38 = 0;
    }
    cVar1 = FUN_1404d3d28(&local_40,param_2);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if ((cVar1 == '\0') && (*param_2 != 0)) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (cVar1 != '\0') goto LAB_1427b974b;
  }
  FUN_140056680(param_2,&DAT_149dfb77a);
LAB_1427b974b:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1427b976e FUN_1427b976e body=4 status=ok
// SIG undefined FUN_1427b976e(void)

undefined1 FUN_1427b976e(longlong param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



// FUNCTION 1427b9772 FUN_1427b9772 body=462 status=ok
// SIG undefined FUN_1427b9772(void)

undefined8 *
FUN_1427b9772(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             char param_5,undefined8 *param_6)

{
  void *pvVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  longlong local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined1 *local_258;
  undefined1 *local_250;
  ulonglong *local_248;
  char local_240;
  undefined1 local_238 [512];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if ((byte)(param_5 - 7U) < 5) {
    *param_6 = 0;
    param_6[1] = 0;
    param_5 = '\0';
  }
  local_250 = local_238;
  local_240 = '\0';
  local_248 = &local_38;
  pvVar1 = (void *)*param_3;
  lVar4 = (longlong)*(int *)(param_3 + 1);
  local_258 = local_250;
  if (lVar4 < 0x100) {
    if (*(int *)(param_3 + 1) == 0) goto LAB_1427b980f;
  }
  else {
    FUN_140213274(&local_258,lVar4);
  }
  puVar2 = local_250;
  memcpy(local_250,pvVar1,lVar4 * 2);
  local_250 = puVar2 + lVar4 * 2;
LAB_1427b980f:
  pvVar1 = (void *)*param_4;
  iVar3 = *(int *)(param_4 + 1);
  lVar4 = (longlong)iVar3;
  if (local_248 <= local_250 + lVar4 * 2) {
    FUN_140213274(&local_258,lVar4);
  }
  puVar2 = local_250;
  if (iVar3 != 0) {
    memcpy(local_250,pvVar1,lVar4 * 2);
    local_250 = puVar2 + lVar4 * 2;
  }
  local_278 = 0;
  uStack_270 = 0;
  FUN_14006620a(&local_268,local_258,
                (ulonglong)((longlong)local_250 - (longlong)local_258) >> 1 & 0xffffffff);
  local_288 = local_268;
  uStack_284 = uStack_264;
  uStack_280 = uStack_260;
  uStack_27c = uStack_25c;
  FUN_140f11842(&local_288,&local_278,0,0);
  if (CONCAT44(uStack_284,local_288) != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  iVar3 = (int)uStack_270 + -1;
  if ((int)uStack_270 == 0) {
    iVar3 = 0;
  }
  FUN_1446f82e2(param_1,iVar3,local_278,1);
  *(char *)(param_1 + 1) = param_5;
  if (local_278 != 0) {
    FUN_1400020a8();
  }
  if (local_240 == '\x01') {
    FUN_1400020a8(local_258);
  }
  if ((local_38 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427b9942 FUN_1427b9942 body=8 status=ok
// SIG undefined FUN_1427b9942(void)

bool FUN_1427b9942(longlong *param_1)

{
  return *param_1 == 0;
}



// FUNCTION 1427b994a FUN_1427b994a body=91 status=ok
// SIG undefined FUN_1427b994a(void)

void FUN_1427b994a(void)

{
  if (DAT_14c948648 != 0) {
    if (DAT_14c948640 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c948640)(DAT_14c948640,0);
    FUN_1446efa72(&DAT_14c948640,0,0,0x10);
    DAT_14c948648 = 0;
  }
  if (DAT_14c948640 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1427b99a5 FUN_1427b99a5 body=91 status=ok
// SIG undefined FUN_1427b99a5(void)

void FUN_1427b99a5(void)

{
  if (DAT_14c948658 != 0) {
    if (DAT_14c948650 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c948650)(DAT_14c948650,0);
    FUN_1446efa72(&DAT_14c948650,0,0,0x10);
    DAT_14c948658 = 0;
  }
  if (DAT_14c948650 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1427b9a00 FUN_1427b9a00 body=91 status=ok
// SIG undefined FUN_1427b9a00(void)

void FUN_1427b9a00(longlong param_1,longlong param_2,ulonglong param_3)

{
  bool bVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (0 < (longlong)param_3) {
    uVar2 = *(undefined4 *)(param_1 + 0x90);
    do {
      uVar4 = 0x7fffffff;
      if (param_3 < 0x7fffffff) {
        uVar4 = param_3;
      }
      uVar2 = (*(code *)PTR_FUN_14c75b148)(param_2,uVar4 & 0xffffffff,uVar2);
      *(undefined4 *)(param_1 + 0x90) = uVar2;
      param_2 = param_2 + uVar4;
      uVar3 = param_3 - uVar4;
      bVar1 = (longlong)uVar4 <= (longlong)param_3;
      param_3 = uVar3;
    } while (uVar3 != 0 && bVar1);
  }
  return;
}



// FUNCTION 1427b9a5c FUN_1427b9a5c body=434 status=ok
// SIG undefined FUN_1427b9a5c(void)

void FUN_1427b9a5c(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
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
  do {
    do {
      param_1[2] = 0;
      uVar4 = *(uint *)(param_1 + 1);
      do {
        uVar4 = uVar4 + 1;
        *(uint *)(param_1 + 1) = uVar4;
        if (*(int *)(*param_1 + 0x24) <= (int)uVar4) goto LAB_1427b9b1c;
        lVar5 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(uVar4 >> 0x10) * 8);
      } while (*(longlong *)(lVar5 + ((ulonglong)uVar4 & 0xffff) * 0x18) == 0);
      plVar1 = (longlong *)(lVar5 + ((ulonglong)uVar4 & 0xffff) * 0x18);
      param_1[2] = (longlong)plVar1;
      if (plVar1 == (longlong *)0x0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar1;
      }
    } while ((*(uint *)(param_1 + 4) & *(uint *)(lVar5 + 8)) != 0);
    lVar3 = param_1[3];
    if (DAT_14c927740 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_146856450;
      local_50 = FUN_1427b121c;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000021;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
    }
    if (lVar3 == DAT_14c927740) goto LAB_1427b9ae9;
    iVar2 = *(int *)(param_1[3] + 0x38);
    if ((iVar2 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        param_1[3] + 0x30)) {
LAB_1427b9ae9:
      uVar4 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)((longlong)param_1 + 0x24) & *(uint *)(lVar5 + 8)) == 0) {
LAB_1427b9b1c:
        if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
    }
  } while( true );
}



// FUNCTION 1427b9c0f FUN_1427b9c0f body=69 status=ok
// SIG undefined FUN_1427b9c0f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b9c0f(void)

{
  _DAT_14c948660 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427b9c51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948668,1);
  return;
}



// FUNCTION 1427b9c54 FUN_1427b9c54 body=69 status=ok
// SIG undefined FUN_1427b9c54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b9c54(void)

{
  _DAT_14c948678 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427b9c96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948680,1);
  return;
}



// FUNCTION 1427b9c99 FUN_1427b9c99 body=69 status=ok
// SIG undefined FUN_1427b9c99(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b9c99(void)

{
  _DAT_14c948690 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427b9cdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948698,1);
  return;
}



// FUNCTION 1427b9cde FUN_1427b9cde body=69 status=ok
// SIG undefined FUN_1427b9cde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b9cde(void)

{
  _DAT_14c9486a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427b9d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9486a8,1);
  return;
}



// FUNCTION 1427b9d23 FUN_1427b9d23 body=69 status=ok
// SIG undefined FUN_1427b9d23(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b9d23(void)

{
  _DAT_14c9486b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427b9d65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9486c0,1);
  return;
}



// FUNCTION 1427b9d68 FUN_1427b9d68 body=69 status=ok
// SIG undefined FUN_1427b9d68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b9d68(void)

{
  _DAT_14c9486c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427b9daa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9486d0,1);
  return;
}



// FUNCTION 1427b9dad FUN_1427b9dad body=69 status=ok
// SIG undefined FUN_1427b9dad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b9dad(void)

{
  _DAT_14c9486d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427b9def. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9486e0,1);
  return;
}



// FUNCTION 1427b9df2 FUN_1427b9df2 body=69 status=ok
// SIG undefined FUN_1427b9df2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b9df2(void)

{
  _DAT_14c9486f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427b9e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9486f8,1);
  return;
}



// FUNCTION 1427b9e37 FUN_1427b9e37 body=69 status=ok
// SIG undefined FUN_1427b9e37(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b9e37(void)

{
  _DAT_14c948708 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427b9e79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948710,1);
  return;
}



// FUNCTION 1427b9e7c FUN_1427b9e7c body=69 status=ok
// SIG undefined FUN_1427b9e7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427b9e7c(void)

{
  _DAT_14c948720 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427b9ebe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948728,1);
  return;
}



// FUNCTION 1427b9ec2 FUN_1427b9ec2 body=135 status=ok
// SIG undefined FUN_1427b9ec2(void)

void FUN_1427b9ec2(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  LOCK();
  *(int *)(param_1 + 0x380) = *(int *)(param_1 + 0x380) + 1;
  UNLOCK();
  uVar2 = FUN_14001cc68(0x40,0x10);
  FUN_1468767ae(uVar2,param_2,param_2 + 0x18);
  iVar1 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar1 + 1U) {
    FUN_146880c76(param_1 + 0x48,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 8) = uVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x0001427b9f37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  return;
}



// FUNCTION 1427b9f4a FUN_1427b9f4a body=822 status=ok
// SIG undefined FUN_1427b9f4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1427b9f4a(longlong param_1,char param_2,double param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auStack_c8 [35];
  char local_a5;
  undefined4 local_a4;
  LPCRITICAL_SECTION local_a0;
  longlong local_98;
  undefined8 uStack_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar14 = local_80;
  local_a5 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    uVar17 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
    uVar14 = (ulonglong)uVar17;
    if (uVar17 != 2) {
      if (uVar17 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        uVar14 = (ulonglong)DVar10;
        if (DVar9 == DVar10) goto LAB_1427ba26f;
      }
      local_a4 = 0;
      goto LAB_1427b9fc7;
    }
  }
LAB_1427ba26f:
  LOCK();
  DAT_14c948734 = DAT_14c948734 + 1;
  UNLOCK();
  local_a4 = (undefined4)CONCAT71((int7)(uVar14 >> 8),1);
LAB_1427b9fc7:
  uVar17 = 0x7fffffff;
  if (local_a5 != '\0') {
    uVar17 = 1;
  }
  local_98 = 0;
  uStack_90 = 0;
  QueryPerformanceCounter(&local_88);
  dVar5 = (double)local_88.QuadPart * DAT_14c83f420 + 16777216.0;
  local_a0 = (LPCRITICAL_SECTION)(param_1 + 0x58);
  iVar15 = 0;
  do {
    EnterCriticalSection(local_a0);
    bVar18 = (longlong)uStack_90 < 0;
    uStack_90 = uStack_90 & 0xffffffff00000000;
    if (bVar18) {
      FUN_146880dc6(&local_98,0);
    }
    uVar7 = *(uint *)(param_1 + 0x50);
    uVar6 = uVar7;
    if ((int)uVar17 < (int)uVar7) {
      uVar6 = uVar17;
    }
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    if ((int)uStack_90._4_4_ < (int)uVar6) {
      FUN_146880dc6(&local_98);
      uVar7 = *(uint *)(param_1 + 0x50);
    }
    if (uVar7 == 0) {
      LeaveCriticalSection(local_a0);
      break;
    }
    lVar1 = *(longlong *)(param_1 + 0x48);
    lVar12 = (longlong)(int)uVar7 << 3;
    uVar14 = 0;
    do {
      if (uVar17 == (uint)uVar14) {
        uVar14 = (ulonglong)uVar17;
        break;
      }
      uVar2 = *(undefined8 *)(lVar1 + uVar14 * 8);
      lVar16 = (longlong)(int)uStack_90;
      uVar7 = (int)uStack_90 + 1;
      uStack_90 = CONCAT44(uStack_90._4_4_,uVar7);
      if (uStack_90._4_4_ < uVar7) {
        FUN_146880c76(&local_98);
      }
      *(undefined8 *)(local_98 + lVar16 * 8) = uVar2;
      uVar14 = uVar14 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
    iVar13 = (int)uVar14;
    iVar8 = *(int *)(param_1 + 0x50) - iVar13;
    iVar11 = iVar13;
    if (iVar8 != 0) {
      memmove(*(void **)(param_1 + 0x48),
              (void *)((longlong)*(void **)(param_1 + 0x48) + (uVar14 & 0xffffffff) * 8),
              (longlong)iVar8 << 3);
      iVar11 = *(int *)(param_1 + 0x50);
    }
    *(int *)(param_1 + 0x50) = iVar11 - iVar13;
    LeaveCriticalSection(local_a0);
    lVar1 = local_98;
    lVar12 = (longlong)(int)uStack_90;
    if (0 < lVar12) {
      lVar16 = 0;
      do {
        lVar3 = *(longlong *)(lVar1 + lVar16);
        FUN_146876c88(param_1);
        if (lVar3 != 0) {
          FUN_14687724c(lVar3);
          FUN_1400020a8(lVar3);
        }
        lVar16 = lVar16 + 8;
      } while (lVar12 * 8 != lVar16);
    }
    iVar15 = iVar15 + (int)uStack_90;
    if (local_a5 != '\0') {
      QueryPerformanceCounter(&local_88);
      dVar4 = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) - dVar5;
      if ((param_3 < dVar4) && (DAT_14c948b4c != 0)) {
        if (((DAT_14c75ec60 != dVar5) || (NAN(DAT_14c75ec60) || NAN(dVar5))) &&
           (((double)_DAT_14c75ec58 < dVar4 && ((double)_DAT_14c75ec54 * param_3 < dVar4)))) {
          DAT_14c75ec60 = dVar5;
        }
      }
      if (param_3 < dVar4) break;
    }
  } while (*(int *)(DAT_14c950c20 + 8) == 0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((char)local_a4 != '\0') {
    LOCK();
    DAT_14c948734 = DAT_14c948734 + -1;
    UNLOCK();
  }
  if ((local_80 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar15;
}



// FUNCTION 1427ba282 FUN_1427ba282 body=503 status=ok
// SIG undefined FUN_1427ba282(void)

ulonglong FUN_1427ba282(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 unaff_R15;
  ulonglong uVar7;
  undefined1 auStack_68 [40];
  undefined1 local_40 [7];
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = ((uint)(*param_4 >> 0x14) & 0xffff ^ (uint)(*param_4 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  iVar2 = FUN_1468813f0(param_3,uVar1 >> 0x10 ^
                                *(int *)((longlong)param_4 + 0xc) << 0x1b ^ (int)param_4[1] << 0xd ^
                                uVar1,param_4);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
  if (iVar2 != -1) goto LAB_1427ba2f4;
  local_39 = '\0';
  FUN_14688145a(param_2,local_40,param_4,&local_39);
  if (local_39 != '\0') {
    uVar7 = 0;
    goto LAB_1427ba2f4;
  }
  uVar7 = 0;
  FUN_14688145a(param_3,local_40,param_4,0);
  if ((int)param_1[9] != 0) {
    uVar7 = *param_4;
    uVar1 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar5 +
                    (longlong)
                    (int)((int)param_1[9] - 1U &
                         (uVar1 >> 0x10 ^
                         *(int *)((longlong)param_4 + 0xc) << 0x1b ^ (int)param_4[1] << 0xd ^ uVar1)
                         ) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar6 = (longlong)iVar2;
        iVar4 = *(int *)(lVar3 + 0x20 + lVar6 * 0x28);
        if (((*(ulonglong *)(lVar3 + lVar6 * 0x28) == uVar7) &&
            (lVar6 = lVar3 + lVar6 * 0x28, *(int *)(lVar6 + 8) == (int)param_4[1])) &&
           (*(int *)(lVar6 + 0xc) == *(int *)((longlong)param_4 + 0xc))) goto LAB_1427ba453;
        iVar2 = iVar4;
      } while (iVar4 != -1);
    }
    uVar7 = 0;
  }
  goto LAB_1427ba402;
  while( true ) {
    lVar3 = *param_1;
    iVar2 = iVar4;
    while( true ) {
      lVar6 = (longlong)iVar2;
      iVar4 = *(int *)(lVar3 + 0x20 + lVar6 * 0x28);
      if (((*(ulonglong *)(lVar3 + lVar6 * 0x28) == *param_4) &&
          (lVar6 = lVar3 + lVar6 * 0x28, *(int *)(lVar6 + 8) == (int)param_4[1])) &&
         (*(int *)(lVar6 + 0xc) == *(int *)((longlong)param_4 + 0xc))) break;
      iVar2 = iVar4;
      if (iVar4 == -1) goto LAB_1427ba475;
    }
    uVar7 = 1;
    if ((char)uVar1 != '\0') break;
LAB_1427ba453:
    uVar1 = FUN_1427ba282(param_1,param_2,param_3,lVar3 + (longlong)iVar2 * 0x28 + 0x10);
    if (iVar4 == -1) {
LAB_1427ba475:
      uVar7 = (ulonglong)uVar1;
      break;
    }
  }
LAB_1427ba402:
  FUN_146877fea(param_3,param_4);
LAB_1427ba2f4:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1427ba47a FUN_1427ba47a body=2244 status=ok
// SIG undefined FUN_1427ba47a(void)

void FUN_1427ba47a(longlong *param_1,char param_2)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined2 *puVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined1 auStack_1b8 [32];
  undefined2 *local_198;
  ulonglong local_190;
  uint *local_188;
  longlong *local_180;
  longlong *local_178;
  undefined8 uStack_170;
  undefined1 local_15c [4];
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  longlong *local_108;
  longlong *plStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined2 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((param_2 != '\0') || ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    local_98 = 0;
    local_90 = 0;
    local_b8 = (undefined2 *)0x0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_188 = (uint *)(param_1 + 2);
    local_178 = (longlong *)0x0;
    uStack_170 = 0;
    iVar10 = (int)param_1[5];
    uVar18 = 1;
    iVar19 = 0;
    uVar21 = 0;
    iVar3 = 0;
    if (iVar10 != 0) {
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = local_188;
      }
      uVar15 = *puVar8;
      if (uVar15 == 0) {
        iVar3 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar3 = iVar10 + -1;
        }
        uVar5 = iVar3 >> 5;
        if (iVar3 >> 5 < 1) {
          uVar5 = 0;
        }
        uVar21 = 0;
        iVar19 = 0;
        do {
          if (uVar5 == uVar21) {
            local_190 = 0;
            uVar15 = 0;
            goto LAB_1427ba8d0;
          }
          iVar19 = iVar19 + 0x20;
          uVar15 = puVar8[uVar21 + 1];
          uVar21 = uVar21 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar21 = 0;
      }
      uVar18 = (ulonglong)(-uVar15 & uVar15);
      uVar1 = uVar18 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar3 = (iVar19 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar10 <= iVar3) {
        iVar3 = iVar10;
      }
    }
    if (iVar3 == iVar10) {
      local_190 = 0;
      uVar15 = 0;
    }
    else {
      uVar15 = 0xffffffff;
      do {
        FUN_146877710(*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) + 0x5a0,&local_178);
        uVar15 = ~(uint)uVar18 & uVar15;
        puVar8 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar8 = local_188;
        }
        iVar4 = (int)param_1[5];
        iVar3 = (int)uVar21;
        lVar14 = (longlong)iVar3;
        uVar5 = puVar8[lVar14] & uVar15;
        if (uVar5 == 0) {
          iVar12 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar12 = iVar4 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar19 = iVar19 + 0x20;
          iVar6 = iVar12;
          if (iVar12 < iVar3) {
            iVar6 = iVar3;
          }
          if (iVar3 < iVar12) {
            lVar17 = 0;
            do {
              uVar5 = puVar8[lVar14 + lVar17 + 1];
              if (uVar5 != 0) {
                uVar21 = (ulonglong)(iVar3 + (int)lVar17 + 1);
                uVar15 = 0xffffffff;
                goto LAB_1427ba693;
              }
              iVar19 = iVar19 + 0x20;
              lVar17 = lVar17 + 1;
            } while (iVar6 - lVar14 != lVar17);
            uVar15 = 0xffffffff;
            iVar3 = iVar6;
          }
          uVar21 = (ulonglong)(iVar3 + 1);
          iVar3 = iVar4;
        }
        else {
LAB_1427ba693:
          uVar18 = (ulonglong)(-uVar5 & uVar5);
          uVar1 = uVar18 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar3 = (iVar19 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar3) {
            iVar3 = iVar4;
          }
        }
      } while (iVar3 != iVar10);
      if ((longlong)(int)(uint)uStack_170 == 0) {
        local_190 = 0;
        uVar15 = 0;
      }
      else {
        plVar20 = local_178 + (longlong)(int)(uint)uStack_170 * 2;
        local_190 = 0;
        plVar16 = local_178;
        local_180 = param_1;
        do {
          lVar14 = *plVar16;
          uVar15 = *(uint *)(plVar16 + 1);
          if (uVar15 == 0) {
            plVar13 = (longlong *)
                      (lVar14 + (longlong)*(int *)((longlong)plVar16 + 0xc) * 0x18 + 0x5a0);
          }
          else {
            if ((int)uVar15 < 0) {
              iVar10 = ~uVar15 * 2 + *(int *)(lVar14 + 0x600);
            }
            else {
              iVar10 = uVar15 * 3 + *(int *)(lVar14 + 0x604) + -3;
            }
            plVar13 = (longlong *)
                      ((longlong)(*(int *)((longlong)plVar16 + 0xc) + iVar10) * 0x18 +
                      *(longlong *)(lVar14 + 0x5e8));
          }
          if ((int)plVar13[2] == 0) {
            if (DAT_14c75b114 == '\x01') {
              if ((*(byte *)((longlong)plVar13 + 0x14) & 1) == 0) {
LAB_1427ba85c:
                FUN_146877484(plVar16,&local_108);
                FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0x57a,
                              L"Node %s has zero prerequisites, but has not been queued.");
                if (local_108 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
              }
              else {
                local_190 = (ulonglong)((int)local_190 + 1);
              }
            }
            else if ((*(byte *)((longlong)plVar13 + 0x14) & 1) == 0) goto LAB_1427ba85c;
          }
          lVar14 = plVar13[1];
          if ((longlong)(int)lVar14 != 0) {
            lVar17 = *plVar13;
            lVar11 = 0;
            do {
              local_158 = *(longlong *)(lVar17 + lVar11);
              uStack_150 = ((longlong *)(lVar17 + lVar11))[1];
              local_108 = &local_158;
              plStack_100 = plVar16;
              FUN_1468819ba(&local_b8,local_15c,&local_108);
              lVar11 = lVar11 + 0x10;
            } while ((longlong)(int)lVar14 * 0x10 != lVar11);
          }
          if ((int)plVar16[1] != 0) {
            iVar10 = 0;
            local_158 = *plVar16;
            iVar3 = 2;
            if (*(int *)((longlong)plVar16 + 0xc) != 1) {
              iVar10 = (int)plVar16[1];
              iVar3 = 1;
              if (*(int *)((longlong)plVar16 + 0xc) == 0) {
                iVar3 = (iVar10 >> 0x1f) + 2;
              }
            }
            uStack_150 = CONCAT44(iVar3,iVar10);
            local_108 = &local_158;
            plStack_100 = plVar16;
            FUN_1468819ba(&local_b8,local_15c,&local_108);
          }
          plVar16 = plVar16 + 2;
        } while (plVar16 != plVar20);
        param_1 = local_180;
        uVar15 = (uint)uStack_170;
      }
    }
LAB_1427ba8d0:
    iVar10 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_108 = (longlong *)0x0;
    plStack_100 = (longlong *)0x0;
    local_dc = 0xffffffff00000080;
    local_d4 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_138 = 0;
    local_130 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_12c = 0xffffffff00000080;
    local_124 = 0;
    local_118 = 0;
    local_110 = 0;
    if (uVar15 != 0) {
      lVar14 = (longlong)(int)uVar15 << 4;
      plVar16 = local_178;
      do {
        cVar2 = FUN_1427ba282(&local_b8,&local_108,&local_158,plVar16);
        if (cVar2 != '\0') {
          FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0x595,
                        L"Async loading event graph contained a cycle, see above.");
        }
        plVar16 = plVar16 + 2;
        lVar14 = lVar14 + -0x10;
      } while (lVar14 != 0);
      iVar10 = (int)uStack_170;
    }
    iVar3 = (int)local_190;
    if (iVar10 != iVar3) {
      local_198 = (undefined2 *)CONCAT44(local_198._4_4_,iVar3);
      FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0x59e,
                    L"No outstanding IO, no nodes in the queue, yet we still have %d \'AddedNodes\' in the graph (with %d boot nodes)."
                   );
    }
    local_110 = 0;
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    FUN_146881dd4(&local_158);
    local_c0 = 0;
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    FUN_146881dd4(&local_108);
    if (local_178 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_14687dde8(&local_b8);
    iVar10 = (int)param_1[1];
    iVar19 = *(int *)((longlong)param_1 + 0x34);
    if (iVar10 != iVar19 && iVar3 == 0) {
      local_b8 = (undefined2 *)0x0;
      uStack_b0 = 0;
      iVar3 = (int)param_1[5];
      if (iVar3 == 0) {
        uVar21 = 1;
        uVar18 = 0;
        iVar12 = 0;
        iVar4 = 0;
      }
      else {
        puVar8 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar8 = local_188;
        }
        uVar15 = *puVar8;
        if (uVar15 == 0) {
          iVar4 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar4 = iVar3 + -1;
          }
          uVar18 = 0;
          uVar21 = (ulonglong)(uint)(iVar4 >> 5);
          if (iVar4 >> 5 < 1) {
            uVar21 = uVar18;
          }
          puVar9 = &DAT_149dfb77a;
          iVar12 = 0;
          do {
            if (uVar21 == uVar18) goto LAB_1427bacdc;
            iVar12 = iVar12 + 0x20;
            uVar15 = puVar8[uVar18 + 1];
            uVar18 = uVar18 + 1;
          } while (uVar15 == 0);
        }
        else {
          uVar18 = 0;
          iVar12 = 0;
        }
        uVar21 = (ulonglong)(-uVar15 & uVar15);
        uVar1 = uVar21 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar4 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
      if (iVar4 == iVar3) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        uVar15 = 0xffffffff;
        iVar19 = 0;
        iVar10 = iVar3;
        do {
          lVar14 = *(longlong *)(*param_1 + (longlong)iVar4 * 0x10);
          if (lVar14 != 0) {
            if (iVar19 < 5) {
              FUN_1400021e4(lVar14 + 0x14,&local_108);
              iVar10 = (int)plStack_100 + -1;
              if ((int)plStack_100 == 0) {
                iVar10 = 0;
              }
              FUN_1400020e8(&local_b8,local_108,iVar10);
              if (local_108 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              FUN_1400020e8(&local_b8,&DAT_149e06196,1);
              iVar19 = iVar19 + 1;
            }
            local_108 = (longlong *)0x0;
            plStack_100 = (longlong *)0x0;
            FUN_146877710(lVar14 + 0x5a0,&local_108,lVar14);
            if (local_108 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            iVar10 = (int)param_1[5];
          }
          uVar15 = uVar15 & ~(uint)uVar21;
          puVar8 = (uint *)param_1[4];
          if ((uint *)param_1[4] == (uint *)0x0) {
            puVar8 = local_188;
          }
          iVar4 = (int)uVar18;
          lVar14 = (longlong)iVar4;
          uVar5 = puVar8[lVar14] & uVar15;
          if (uVar5 == 0) {
            iVar6 = iVar10 + 0x1e;
            if (-1 < iVar10 + -1) {
              iVar6 = iVar10 + -1;
            }
            iVar6 = iVar6 >> 5;
            iVar12 = iVar12 + 0x20;
            iVar7 = iVar6;
            if (iVar6 < iVar4) {
              iVar7 = iVar4;
            }
            if (iVar4 < iVar6) {
              lVar17 = 0;
              do {
                uVar5 = puVar8[lVar14 + lVar17 + 1];
                if (uVar5 != 0) {
                  uVar18 = (ulonglong)(iVar4 + (int)lVar17 + 1);
                  uVar15 = 0xffffffff;
                  goto LAB_1427babd1;
                }
                iVar12 = iVar12 + 0x20;
                lVar17 = lVar17 + 1;
              } while (iVar7 - lVar14 != lVar17);
              uVar15 = 0xffffffff;
              iVar4 = iVar7;
            }
            uVar18 = (ulonglong)(iVar4 + 1);
            iVar4 = iVar10;
          }
          else {
LAB_1427babd1:
            uVar21 = (ulonglong)(-uVar5 & uVar5);
            uVar1 = uVar21 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            iVar4 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
            if (iVar10 <= iVar4) {
              iVar4 = iVar10;
            }
          }
        } while (iVar4 != iVar3);
        puVar9 = local_b8;
        if ((int)uStack_b0 == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        iVar10 = (int)param_1[1];
        iVar19 = *(int *)((longlong)param_1 + 0x34);
      }
LAB_1427bacdc:
      local_198 = puVar9;
      FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0x5c5,
                    L"No outstanding IO, no nodes in the queue, yet we still have %d \'PackagesWithNodes\' in the graph: %s"
                    ,iVar10 - iVar19);
      if (local_b8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427bad3f FUN_1427bad3f body=69 status=ok
// SIG undefined FUN_1427bad3f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427bad3f(void)

{
  _DAT_14c948748 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427bad81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c948750,1);
  return;
}



// FUNCTION 1427bad84 FUN_1427bad84 body=154 status=ok
// SIG undefined FUN_1427bad84(void)

int FUN_1427bad84(int param_1)

{
  int iVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9487b0) {
    FUN_144b3d300(&DAT_14c9487b0);
    if (DAT_14c9487b0 == -1) {
      DAT_14c9487ac = DAT_14c948744;
      _Init_thread_footer(&DAT_14c9487b0);
    }
  }
  if (param_1 < 1) {
    iVar1 = 0;
  }
  else {
    DAT_14c9487ac = DAT_14c9487ac * 0xbb38435 + 0x3619636b;
    iVar1 = (int)((float)param_1 * ((float)(DAT_14c9487ac >> 9 | 0x3f800000) + -1.0));
  }
  return iVar1;
}



// FUNCTION 1427bae1e FUN_1427bae1e body=174 status=ok
// SIG undefined FUN_1427bae1e(void)

void FUN_1427bae1e(longlong *param_1)

{
  DWORD DVar1;
  DWORD dwTlsIndex;
  DWORD DVar2;
  LPVOID lpTlsValue;
  bool bVar3;
  
  FUN_146878186();
  *(undefined8 *)(*param_1 + 0x120) = 0;
  *(undefined8 *)(*param_1 + 0x128) = 0;
  dwTlsIndex = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar2 = 0xffffffff;
    LOCK();
    bVar3 = DAT_14c75ec34 != 0xffffffff;
    DVar1 = dwTlsIndex;
    if (bVar3) {
      DVar2 = DAT_14c75ec34;
      DVar1 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar1;
    UNLOCK();
    if (bVar3) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar2;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(lpTlsValue);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  *(longlong *)((longlong)lpTlsValue + 0x40) = param_1[1];
  *(longlong *)((longlong)lpTlsValue + 0x48) = param_1[2];
  return;
}



// FUNCTION 1427baecc FUN_1427baecc body=3037 status=ok
// SIG undefined FUN_1427baecc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1427baecc(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  uint uVar2;
  DWORD DVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined4 uVar7;
  longlong lVar8;
  LPVOID lpTlsValue;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  PSRWLOCK pRVar12;
  undefined ***pppuVar13;
  int iVar14;
  ushort uVar15;
  undefined8 uVar16;
  longlong lVar17;
  ushort uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  PSRWLOCK *local_130;
  undefined ***local_120;
  longlong local_118;
  PSRWLOCK local_110;
  PSRWLOCK local_108;
  int local_100;
  PSRWLOCK local_f8;
  int local_f0;
  PSRWLOCK local_e8;
  undefined8 uStack_e0;
  undefined ***local_d8;
  undefined ***local_d0;
  PSRWLOCK local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined ***local_b8;
  undefined1 local_b0;
  PSRWLOCK local_a8;
  char local_a0;
  PSRWLOCK local_98;
  undefined8 uStack_90;
  undefined ***local_88 [2];
  undefined **local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar16 = 2;
  if (*(longlong *)(param_1 + 0x50) != 0) goto LAB_1427bb03b;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(wchar_t **)(param_1 + 0x128) = L"creating Linker";
  piVar1 = DAT_14c950c20;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar14 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar14 != 2)) {
    if (iVar14 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_1427bafa5;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(piVar1 + 4);
    while( true ) {
      if (0 < piVar1[1]) {
        (**(code **)(**(longlong **)(piVar1 + 0xe) + 0x20))
                  (*(longlong **)(piVar1 + 0xe),0xffffffff,0);
      }
      EnterCriticalSection(lpCriticalSection);
      if (piVar1[1] == 0) break;
      LeaveCriticalSection(lpCriticalSection);
    }
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    LeaveCriticalSection(lpCriticalSection);
  }
LAB_1427bafa5:
  FUN_1400021e4(param_1 + 0x14,&local_98);
  pRVar12 = local_98;
  if ((int)uStack_90 == 0) {
    pRVar12 = (PSRWLOCK)&DAT_149dfb77a;
  }
  lVar8 = FUN_14099f58f(pRVar12);
  if (local_98 != (PSRWLOCK)0x0) {
    FUN_1400020a8();
  }
  if ((lVar8 == 0) || ((*(byte *)(lVar8 + 0x2c) & 0x10) != 0)) {
    *(undefined1 *)(param_1 + 0x10f) = 1;
    piVar1 = DAT_14c950c20;
    uVar9 = 0;
    uVar16 = uVar9;
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar14 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         ), iVar14 != 2)) {
      if (iVar14 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        uVar16 = 0;
        if (DVar5 == DVar6) goto LAB_1427bb03b;
      }
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      uVar16 = uVar9;
    }
    goto LAB_1427bb03b;
  }
  FUN_146878962(param_1,lVar8);
  *(longlong *)(param_1 + 0x58) = lVar8;
  piVar1 = DAT_14c950c20;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar14 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar14 != 2)) {
    if (iVar14 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_1427bb0b5;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
LAB_1427bb0b5:
  if ((*(longlong *)(lVar8 + 0x38) == 0) && ((*(byte *)(lVar8 + 0x28) & 2) == 0)) {
    *(undefined1 *)(param_1 + 0x112) = 1;
    *(uint *)(lVar8 + 0x2c) = *(uint *)(lVar8 + 0x2c) | *(uint *)(param_1 + 0x30);
    *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined1 *)(lVar8 + 0x40) = *(undefined1 *)(param_1 + 0x24);
  }
  *(longlong *)(param_1 + 0x120) = lVar8;
  if (*(longlong *)(lVar8 + 0x48) == 0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
LAB_1427bb0f9:
    local_b8 = *(undefined ****)(param_1 + 0x1c);
    local_b0 = *(undefined1 *)(param_1 + 0x24);
    FUN_1468750d6(&local_b8,&local_c8);
    pRVar12 = local_c8;
    if (local_c0 == 0) {
      pRVar12 = (PSRWLOCK)&DAT_149dfb77a;
    }
    FUN_1446f470e(&local_d0,pRVar12,1);
    DVar5 = DAT_14c949610;
    local_e8 = (PSRWLOCK)0x0;
    uStack_e0 = 0;
    local_d8 = local_d0;
    local_a8 = (PSRWLOCK)&DAT_14c949608;
    local_a0 = '\x01';
    if ((DAT_14c949610 == 0) || (DVar6 = GetCurrentThreadId(), DVar5 != DVar6)) {
      AcquireSRWLockShared((PSRWLOCK)&DAT_14c949608);
    }
    else {
      DAT_14c949614 = DAT_14c949614 + 1;
    }
    local_98 = (PSRWLOCK)0x0;
    uStack_90 = 0;
    local_88[0] = (undefined ***)0x0;
    local_130 = &local_a8;
    local_138 = (ulonglong)local_138._4_4_ << 0x20;
    FUN_140159c68(0x40,&local_e8);
    pRVar12 = local_a8;
    if (local_a0 == '\x01') {
      if (*(int *)((longlong)&local_a8[1].Ptr + 4) < 1) {
        ReleaseSRWLockShared(local_a8);
      }
      else {
        GetCurrentThreadId();
        piVar1 = (int *)((longlong)&pRVar12[1].Ptr + 4);
        *piVar1 = *piVar1 + -1;
      }
    }
    if (local_88[0] != local_d0) {
      FUN_1400021e4(local_88,&local_e8);
      if (local_c8 != (PSRWLOCK)0x0) {
        FUN_1400020a8();
      }
      local_c8 = local_e8;
      local_c0 = (int)uStack_e0;
      local_bc = uStack_e0._4_4_;
      local_f8 = local_e8;
      local_f0 = (int)uStack_e0 + -1;
      if ((int)uStack_e0 == 0) {
        local_f0 = 0;
      }
      FUN_140b1a3de(&local_f8,&local_b8);
    }
    FUN_1427b778a(&local_98,&local_c8);
    FUN_1412251f4(&local_e8,&local_98);
    if (local_98 != (PSRWLOCK)0x0) {
      FUN_1400020a8();
    }
    local_98 = local_e8;
    uStack_90 = uStack_e0;
    if ((int)uStack_e0 == local_c0) {
      if (1 < (int)uStack_e0) {
        lVar17 = 0;
        while( true ) {
          uVar18 = *(ushort *)((longlong)&local_e8->Ptr + lVar17);
          uVar19 = (ulonglong)uVar18;
          uVar15 = *(ushort *)((longlong)&local_c8->Ptr + lVar17);
          if (uVar18 != uVar15) break;
          if (uVar18 == 0) goto LAB_1427bb3b2;
LAB_1427bb301:
          lVar17 = lVar17 + 2;
        }
        if ((uVar15 | uVar18) < 0x80) {
          uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
          uVar21 = (ulonglong)uVar15;
          uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
          if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar21]) goto LAB_1427bb301;
        }
        if (uVar18 != uVar15) goto LAB_1427bb341;
      }
    }
    else if (local_c0 + (int)uStack_e0 != 1) {
LAB_1427bb341:
      local_108 = local_e8;
      iVar14 = (int)uStack_e0;
      uVar7 = uStack_e0._4_4_;
      if (local_c8 != (PSRWLOCK)0x0) {
        FUN_1400020a8(local_c8);
        local_108 = local_98;
        iVar14 = (int)uStack_90;
        uVar7 = uStack_90._4_4_;
      }
      local_bc = uVar7;
      local_98 = (PSRWLOCK)0x0;
      uStack_90 = 0;
      local_100 = iVar14 + -1;
      if (iVar14 == 0) {
        local_100 = 0;
      }
      local_c8 = local_108;
      local_c0 = iVar14;
      FUN_140b1a3de(&local_108,&local_b8);
    }
LAB_1427bb3b2:
    if (local_98 != (PSRWLOCK)0x0) {
      FUN_1400020a8();
    }
    pppuVar13 = local_b8;
    cVar4 = FUN_1407f0622(&local_b8,2,0,&local_b8);
    if (cVar4 == '\0') {
      local_98 = (PSRWLOCK)0x0;
      uStack_90 = 0;
      local_88[0] = pppuVar13;
      cVar4 = FUN_145c98d34(0x40);
      if (cVar4 == '\0') {
        if (DAT_14c872ba8 == '\x01') {
          local_120 = pppuVar13;
          local_78 = (undefined **)0x0;
          local_70 = 0;
          local_98 = (PSRWLOCK)0x0;
          uStack_90 = 0;
          uStack_6c = 0x80;
          local_68 = 0xffffffff;
          uStack_64 = 0;
          local_58 = 0;
          local_50 = 0;
          local_118 = param_1 + 0x5a0;
          local_e8 = (PSRWLOCK)0x0;
          uStack_e0 = 0;
          FUN_146877710(local_118,&local_e8,param_1);
          if ((longlong)(int)uStack_e0 != 0) {
            local_110 = local_e8 + (longlong)(int)uStack_e0 * 2;
            pRVar12 = local_e8;
            do {
              uVar2 = *(uint *)&pRVar12[1].Ptr;
              iVar14 = *(int *)((longlong)&pRVar12[1].Ptr + 4);
              if (uVar2 == 0) {
                plVar10 = (longlong *)(local_118 + (longlong)iVar14 * 0x18);
              }
              else {
                if ((int)uVar2 < 0) {
                  iVar11 = ~uVar2 * 2 + *(int *)(param_1 + 0x600);
                }
                else {
                  iVar11 = uVar2 * 3 + *(int *)(param_1 + 0x604) + -3;
                }
                plVar10 = (longlong *)
                          ((longlong)(iVar14 + iVar11) * 0x18 + *(longlong *)(param_1 + 0x5e8));
              }
              lVar8 = plVar10[1];
              if ((longlong)(int)lVar8 != 0) {
                lVar17 = *plVar10;
                lVar20 = 0;
                do {
                  if (*(longlong *)(lVar17 + lVar20) == 0) {
                    local_a8 = (PSRWLOCK)0x0;
                  }
                  else {
                    local_a8 = *(PSRWLOCK *)(*(longlong *)(lVar17 + lVar20) + 0x14);
                  }
                  if (local_a8 != (PSRWLOCK)0x0) {
                    FUN_144a13f80(&local_98,&local_d0,&local_a8,0);
                  }
                  lVar20 = lVar20 + 0x10;
                } while ((longlong)(int)lVar8 * 0x10 != lVar20);
              }
              pRVar12 = pRVar12 + 2;
            } while (pRVar12 != local_110);
          }
          pppuVar13 = local_120;
          if (local_e8 != (PSRWLOCK)0x0) {
            FUN_1400020a8(local_e8);
          }
          local_50 = 0;
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          uVar19 = uStack_90 >> 0x20;
          uStack_90 = uStack_90 & 0xffffffff00000000;
          if ((int)uVar19 != 0) {
            FUN_14472eb64(&local_98,0);
          }
          local_68 = 0xffffffff;
          uStack_64 = 0;
          local_70 = 0;
          if (0x80 < uStack_6c) {
            uStack_6c = 0x80;
            FUN_1446efbd8(local_88,0);
          }
          if (local_78 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          if (local_98 != (PSRWLOCK)0x0) {
            FUN_1400020a8();
          }
        }
        local_98 = (PSRWLOCK)0x0;
        uStack_90 = 0;
        local_88[0] = pppuVar13;
        FUN_1457e748a(0x40,&local_98,0x4000000);
      }
      *(undefined1 *)(param_1 + 0x10f) = 1;
      if (local_c8 != (PSRWLOCK)0x0) {
        FUN_1400020a8();
      }
      uVar16 = 0;
      goto LAB_1427bb03b;
    }
    DVar5 = DAT_14c75ec34;
    if (DAT_14c75ec34 == 0xffffffff) {
      DVar5 = TlsAlloc();
      DVar6 = 0xffffffff;
      LOCK();
      bVar22 = DAT_14c75ec34 != 0xffffffff;
      DVar3 = DVar5;
      if (bVar22) {
        DVar6 = DAT_14c75ec34;
        DVar3 = DAT_14c75ec34;
      }
      DAT_14c75ec34 = DVar3;
      UNLOCK();
      if (bVar22) {
        TlsFree(DVar5);
        DVar5 = DVar6;
      }
    }
    lpTlsValue = TlsGetValue(DVar5);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
      FUN_141073f92(lpTlsValue);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(DVar5,lpTlsValue);
    }
    local_130 = &local_98;
    if (DAT_14c872ba8 == '\x01') {
      local_e8 = (PSRWLOCK)0x0;
      uVar19 = uStack_e0 >> 0x20;
      uStack_e0 = uStack_e0 & 0xffffffff00000000;
      if (param_1 != 0) {
        local_e8 = *(PSRWLOCK *)(param_1 + 0x14);
        uStack_e0 = CONCAT44((int)uVar19,*(undefined4 *)(param_1 + 0x2dc));
      }
      local_60 = *(undefined8 *)(*(longlong *)(param_1 + 0x278) + 0x470);
      local_68 = (int)uStack_e0;
      local_70 = SUB84(local_e8,0);
      uStack_6c = (uint)((ulonglong)local_e8 >> 0x20);
      local_88[0] = (undefined ***)0x0;
      local_78 = &PTR_LAB_149e66400;
      local_98 = (PSRWLOCK)&LAB_1427ccb3a;
      local_138 = param_1 + 0x40;
      lVar8 = FUN_1427f5ba2(*(undefined8 *)((longlong)lpTlsValue + 0x58),lVar8,&local_b8,0x81);
      *(longlong *)(param_1 + 0x50) = lVar8;
      if (local_98 != (PSRWLOCK)0x0) {
        pppuVar13 = local_88[0];
        if (local_88[0] == (undefined ***)0x0) {
          pppuVar13 = &local_78;
        }
        (*(code *)(*pppuVar13)[2])();
        lVar8 = *(longlong *)(param_1 + 0x50);
      }
      if (lVar8 != 0) {
        local_98 = (PSRWLOCK)0x0;
        uVar19 = uStack_90 >> 0x20;
        uStack_90 = uStack_90 & 0xffffffff00000000;
        if (param_1 != 0) {
          local_98 = *(PSRWLOCK *)(param_1 + 0x14);
          uStack_90 = CONCAT44((int)uVar19,*(undefined4 *)(param_1 + 0x2dc));
        }
        FUN_146881fba(*(longlong *)(*(longlong *)(param_1 + 0x278) + 0x470) + 0xe8,&local_a8,
                      &local_98);
        if (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x328) == 0) {
          FUN_14687ccdc(*(undefined8 *)(*(longlong *)(param_1 + 0x278) + 0x470),&local_e8);
          *(undefined1 *)(param_1 + 0x10f) = 1;
        }
      }
    }
    else {
      local_88[0] = (undefined ***)0x0;
      local_78 = &PTR_LAB_149e01e20;
      local_70 = 0x427ccb96;
      uStack_6c = 1;
      local_98 = (PSRWLOCK)FUN_140d11fbe;
      local_138 = param_1 + 0x40;
      uVar9 = FUN_1427f5ba2(*(undefined8 *)((longlong)lpTlsValue + 0x58),lVar8,&local_b8,0x81);
      *(undefined8 *)(param_1 + 0x50) = uVar9;
      if (local_98 != (PSRWLOCK)0x0) {
        pppuVar13 = local_88[0];
        if (local_88[0] == (undefined ***)0x0) {
          pppuVar13 = &local_78;
        }
        (*(code *)(*pppuVar13)[2])();
      }
    }
    if (local_c8 != (PSRWLOCK)0x0) {
      FUN_1400020a8();
    }
    lVar17 = *(longlong *)(param_1 + 0x50);
  }
  else {
    lVar17 = *(longlong *)(*(longlong *)(lVar8 + 0x48) + 0x20);
    *(longlong *)(param_1 + 0x50) = lVar17;
    if (lVar17 == 0) goto LAB_1427bb0f9;
    if (DAT_14c872ba8 == '\x01') {
      FUN_1400021e4(param_1 + 0x14,&local_98);
      FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0x185f,
                    L"Package %s was reloaded before it even closed the linker from a previous load. Seems like a waste of time eh?"
                   );
      if (local_98 != (PSRWLOCK)0x0) {
        FUN_1400020a8();
      }
      if (param_1 == 0) {
        lVar17 = *(longlong *)(_DAT_00000278 + 0x470);
        local_98 = (PSRWLOCK)0x0;
        plVar10 = (longlong *)&DAT_00000278;
        uVar7 = 0;
      }
      else {
        local_98 = *(PSRWLOCK *)(param_1 + 0x14);
        uVar7 = *(undefined4 *)(param_1 + 0x2dc);
        plVar10 = (longlong *)(param_1 + 0x278);
        lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x278) + 0x470);
      }
      uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar7);
      uStack_90 = CONCAT44(uStack_90._4_4_,uVar7);
      local_e8 = local_98;
      FUN_146881fba(lVar17 + 0xe8,&local_a8);
      FUN_14687ccdc(*(undefined8 *)(*plVar10 + 0x470),&local_e8);
      lVar17 = *(longlong *)(param_1 + 0x50);
      if (lVar17 == 0) goto LAB_1427bb0f9;
    }
  }
  *(longlong *)(lVar17 + 0x398) = param_1;
LAB_1427bb03b:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427bbaaa FUN_1427bbaaa body=172 status=ok
// SIG undefined FUN_1427bbaaa(void)

void FUN_1427bbaaa(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_146877710(param_1 + 0x5a0,&local_28,param_1);
  lVar2 = (longlong)(int)uStack_20 * 0x10 + 0x10;
  bVar1 = false;
  do {
    bVar3 = bVar1;
    lVar2 = lVar2 + -0x10;
    bVar1 = true;
  } while (lVar2 != 0);
  if (bVar3) {
    FUN_14687968c(param_1);
  }
  *(undefined4 *)(param_1 + 0x588) = 0;
  if (*(int *)(param_1 + 0x58c) != 0) {
    FUN_146882584(param_1 + 0x580);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427bbb58 FUN_1427bbb58 body=263 status=ok
// SIG undefined FUN_1427bbb58(void)

undefined8 FUN_1427bbb58(longlong param_1)

{
  float fVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = 2;
  if ((*(longlong *)(param_1 + 0x50) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x50) + 0x3e1) & 4) == 0)) {
    *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x58);
    *(wchar_t **)(param_1 + 0x128) = L"ticking linker";
    fVar1 = *(float *)(param_1 + 0x108);
    QueryPerformanceCounter(&local_38);
    local_48 = param_1 + 0x440;
    iVar2 = FUN_1427f5c94(*(undefined8 *)(param_1 + 0x50),
                          fVar1 - (float)(((double)local_38.QuadPart * DAT_14c83f420 + 16777216.0) -
                                         *(double *)(param_1 + 0x118)),
                          *(undefined1 *)(param_1 + 0x10c),*(undefined1 *)(param_1 + 0x10d));
    if (iVar2 != 1) {
      if ((*(char *)(param_1 + 0x10c) == '\x01') && (*(char *)(param_1 + 0x10d) == '\0')) {
        *(undefined1 *)(param_1 + 0x10e) = 1;
      }
      uVar3 = 0;
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 0x10f) = 1;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427bbc60 FUN_1427bbc60 body=1246 status=ok
// SIG undefined FUN_1427bbc60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1427bbc60(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  ulonglong local_50;
  ulonglong local_48;
  undefined8 local_40;
  code *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8);
  puVar1 = (undefined8 *)(lVar6 + (longlong)param_2 * 0x38);
  if ((*(longlong *)(lVar6 + 0x28 + (longlong)param_2 * 0x38) == 0) &&
     (*(char *)((longlong)puVar1 + 0x22) == '\0')) {
    *(undefined1 *)((longlong)puVar1 + 0x22) = 1;
    uVar5 = *(uint *)(puVar1 + 1);
    if (uVar5 == 0) {
      FUN_1427f3cbe(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x330),&local_40,puVar1);
      if (DAT_14c951858 == 0) {
        local_a0 = &local_38;
        local_38 = FUN_1449e2820;
        local_90 = FUN_14081d0ea;
        local_98 = FUN_14081d0ea;
        local_a8 = &LAB_1468c5283;
        local_b0 = FUN_142809da0;
        local_b8 = L"Engine";
        local_c0 = 0x400000000;
        local_c8 = 0x10000000;
        local_d0 = 8;
        local_d8 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      local_d0 = 0;
      local_d8 = 0;
      lVar6 = FUN_140be85e0(DAT_14c951858,0,local_40,1);
      puVar1[5] = lVar6;
    }
    else {
      if ((int)uVar5 < 0) {
        lVar6 = FUN_1427bbc60(param_1,~uVar5);
        lVar6 = *(longlong *)(lVar6 + 0x28);
        if (lVar6 != 0) {
          uVar2 = *puVar1;
          if (DAT_14c927740 == 0) {
            local_a0 = &local_38;
            local_38 = FUN_1449e2820;
            local_90 = FUN_14081d0ea;
            local_98 = FUN_14081d0ea;
            local_a8 = &LAB_146856450;
            local_b0 = FUN_1427b121c;
            local_b8 = L"Engine";
            local_c0 = 0;
            local_c8 = 0x10000021;
            local_d0 = 8;
            local_d8 = 0x28;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
          }
          local_d0 = 0;
          local_d8 = 0;
          lVar6 = FUN_140be85e0(DAT_14c927740,lVar6,uVar2,0);
          puVar1[5] = lVar6;
          if (lVar6 == 0) goto LAB_1427bbd0d;
          uVar3 = *(ulonglong *)((longlong)puVar1 + 0x14);
          uVar4 = *(ulonglong *)(*(longlong *)(lVar6 + 0x10) + 0x18);
          local_50 = uVar4;
          local_48 = uVar3;
          if (uVar4 != uVar3) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c948760) && (FUN_144b3d300(&DAT_14c948760), DAT_14c948760 == -1))
            {
              local_38 = (code *)0x149e6441e;
              local_30 = 0x17;
              local_2c = 0;
              uVar5 = FUN_14001a6c0(&local_38,1);
              _DAT_14c948758 = (ulonglong)uVar5;
              _Init_thread_footer(&DAT_14c948760);
            }
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c948770) && (FUN_144b3d300(&DAT_14c948770), DAT_14c948770 == -1))
            {
              local_38 = (code *)0x149e64436;
              local_30 = 0x10;
              local_2c = 0;
              uVar5 = FUN_14001a6c0(&local_38,1);
              DAT_14c948768 = (ulonglong)uVar5;
              _Init_thread_footer(&DAT_14c948770);
            }
            if (DAT_14c87ead8 == '\0') {
              FUN_140024d3a(&DAT_14c87eb00);
              DAT_14c87ead8 = '\x01';
            }
            if ((uVar3 != DAT_14c892cec) || (uVar4 != DAT_14c948768)) {
              FUN_1400021e4(&local_50,&local_60);
              puVar7 = local_60;
              if (local_58 == 0) {
                puVar7 = &DAT_149dfb77a;
              }
              FUN_140056680(&local_38,puVar7);
              if (local_60 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              FUN_1400021e4(&local_48,&local_70);
              puVar7 = local_70;
              if (local_68 == 0) {
                puVar7 = &DAT_149dfb77a;
              }
              FUN_140056680(&local_60,puVar7);
              if (local_70 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              FUN_1400021e4(param_1 + 0x14,&local_80);
              puVar7 = local_80;
              if (local_78 == 0) {
                puVar7 = &DAT_149dfb77a;
              }
              FUN_140056680(&local_70,puVar7);
              if (local_80 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (local_70 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (local_60 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (local_38 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
          }
        }
      }
      lVar6 = puVar1[5];
    }
    if (lVar6 != 0) {
      FUN_146878962(param_1,lVar6);
    }
  }
LAB_1427bbd0d:
  if ((local_28 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar1;
}



// FUNCTION 1427bc13f FUN_1427bc13f body=555 status=ok
// SIG undefined FUN_1427bc13f(void)

undefined4 * FUN_1427bc13f(undefined4 *param_1,longlong param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  undefined1 auStack_78 [44];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  lVar2 = *(longlong *)(param_4 + 8);
  uVar10 = *(uint *)(lVar2 + 8 + (longlong)param_3 * 0x38);
  if ((ulonglong)uVar10 != 0) {
    if ((int)uVar10 < 0) {
      FUN_1427bc13f(&local_4c,param_2,~uVar10);
    }
    else {
      if (0 < (longlong)*(int *)(param_2 + 0x10)) {
        lVar8 = *(longlong *)(param_4 + 0x18);
        lVar9 = (ulonglong)uVar10 * 0x68;
        lVar1 = lVar8 + lVar9;
        lVar3 = 0;
        plVar11 = *(longlong **)(param_2 + 8);
        do {
          if (*plVar11 == *(longlong *)(lVar8 + -0x68 + lVar9)) {
            uVar10 = *(uint *)(lVar1 + -0x5c);
            plVar4 = (longlong *)((longlong)(int)uVar10 * 0x68 + lVar8 + -0x68);
            if ((longlong)(int)uVar10 < 0) {
              plVar4 = (longlong *)((ulonglong)~uVar10 * 0x38 + lVar2);
            }
            if (*(longlong *)((longlong)plVar11 + 0x14) == *plVar4) {
              uVar10 = *(uint *)(plVar11 + 1);
              if ((longlong)(int)uVar10 < 0) {
                plVar4 = *(longlong **)(param_2 + 8) + (ulonglong)~uVar10 * 7;
              }
              else {
                plVar4 = (longlong *)
                         ((longlong)(int)uVar10 * 0x68 + *(longlong *)(param_2 + 0x18) + -0x68);
              }
              uVar10 = *(uint *)(lVar1 + -0x60);
              plVar5 = (longlong *)((longlong)(int)uVar10 * 0x68 + lVar8 + -0x68);
              if ((longlong)(int)uVar10 < 0) {
                plVar5 = (longlong *)((ulonglong)~uVar10 * 0x38 + lVar2);
              }
              if (*plVar4 == *plVar5) {
                local_4c = ~(uint)lVar3;
                goto LAB_1427bc25d;
              }
            }
          }
          lVar3 = lVar3 + 1;
          plVar11 = plVar11 + 7;
        } while (*(int *)(param_2 + 0x10) != lVar3);
      }
      local_4c = 0;
    }
LAB_1427bc25d:
    lVar1 = *(longlong *)(param_2 + 0x398);
    if (*(int *)(lVar1 + 0x448) != *(int *)(lVar1 + 0x474)) {
      lVar2 = *(longlong *)(lVar2 + (longlong)param_3 * 0x38);
      uVar10 = (uint)((ulonglong)lVar2 >> 0x10);
      uVar7 = (uint)lVar2 & 0xffff;
      uVar10 = (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar7) +
               (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar7 >> 4);
      lVar8 = lVar1 + 0x478;
      if (*(longlong *)(lVar1 + 0x480) != 0) {
        lVar8 = *(longlong *)(lVar1 + 0x480);
      }
      iVar6 = *(int *)(lVar8 + (ulonglong)
                               (*(int *)(lVar1 + 0x488) - 1U &
                               (uVar10 * 0x40 + local_4c + (uVar10 >> 2) + 0x9e3779b9 ^ uVar10)) * 4
                      );
      if (iVar6 != -1) {
        do {
          plVar11 = (longlong *)(*(longlong *)(lVar1 + 0x440) + (longlong)iVar6 * 0x18);
          if ((*plVar11 == lVar2) &&
             (*(uint *)(*(longlong *)(lVar1 + 0x440) + 8 + (longlong)iVar6 * 0x18) == local_4c)) {
            if ((undefined4 *)((longlong)plVar11 + 0xc) != (undefined4 *)0x0 &&
                plVar11 != (longlong *)0x0) {
              *param_1 = *(undefined4 *)((longlong)plVar11 + 0xc);
            }
            break;
          }
          iVar6 = (int)plVar11[2];
        } while (iVar6 != -1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1427bc36c FUN_1427bc36c body=2414 status=ok
// SIG undefined FUN_1427bc36c(void)

void FUN_1427bc36c(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  code *pcVar7;
  undefined2 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  code *pcVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_318 [32];
  code *local_2f8;
  undefined2 *local_2f0;
  undefined8 local_2e8;
  wchar_t *local_2e0;
  wchar_t *local_2d8;
  code *local_2d0;
  undefined1 *local_2c8;
  code **local_2c0;
  code *local_2b8;
  code *local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  code *local_298;
  int local_290;
  undefined2 *local_288;
  undefined8 uStack_280;
  code *local_278;
  undefined1 local_270 [8];
  code *local_268;
  code *local_260;
  code *local_258;
  char local_250;
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_318;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8);
  if ((*(longlong *)(lVar3 + 0x28 + (longlong)(int)param_2 * 0x38) != 0) ||
     (puVar9 = (undefined8 *)((longlong)(int)param_2 * 0x38 + lVar3),
     *(char *)((longlong)puVar9 + 0x23) != '\0')) goto LAB_1427bc542;
  if (puVar9[6] == 0) {
    uVar1 = ~param_2;
    do {
      uVar6 = uVar1;
      uVar12 = ~uVar6;
      lVar5 = (longlong)(int)uVar12 * 0x38;
      if (*(char *)(lVar3 + 0x23 + lVar5) == '\x01') {
        *(undefined1 *)((longlong)puVar9 + 0x23) = 1;
        goto LAB_1427bc542;
      }
      lVar5 = lVar5 + lVar3;
      uVar1 = *(uint *)(lVar5 + 8);
    } while (uVar1 != 0);
    lVar3 = *(longlong *)(lVar5 + 0x28);
    if (lVar3 != 0) {
LAB_1427bc411:
      lVar5 = lVar3;
      lVar3 = lVar5;
      if (*(longlong *)(lVar5 + 0x20) != 0) goto code_r0x0001427bc420;
      goto LAB_1427bc435;
    }
    *(undefined1 *)((longlong)puVar9 + 0x23) = 1;
    goto LAB_1427bc539;
  }
  lVar3 = *(longlong *)
           (*(longlong *)(puVar9[6] + 0x18) + 0x40 +
           (longlong)*(int *)((longlong)puVar9 + 0x1c) * 0x68);
  puVar9[5] = lVar3;
  goto LAB_1427bc53d;
code_r0x0001427bc420:
  lVar3 = *(longlong *)(lVar5 + 0x20);
  if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) goto LAB_1427bc411;
  lVar3 = FUN_142840154(lVar5);
LAB_1427bc435:
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(lVar5 + 0x20);
    goto LAB_1427bc411;
  }
  if (uVar12 != param_2) {
    uVar2 = *(undefined8 *)((longlong)puVar9 + 0xc);
    if (DAT_14c951858 == 0) {
      local_2c0 = &local_268;
      local_268 = FUN_1449e2820;
      local_2b0 = FUN_14081d0ea;
      local_2b8 = FUN_14081d0ea;
      local_2c8 = &LAB_1468c5283;
      local_2d0 = FUN_142809da0;
      local_2d8 = L"Engine";
      local_2e0 = (wchar_t *)0x400000000;
      local_2e8 = CONCAT44(local_2e8._4_4_,0x10000000);
      local_2f0 = (undefined2 *)CONCAT44(local_2f0._4_4_,8);
      local_2f8 = (code *)CONCAT44(local_2f8._4_4_,0x50);
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    local_2f0 = (undefined2 *)((ulonglong)local_2f0 & 0xffffffff00000000);
    local_2f8 = (code *)((ulonglong)local_2f8 & 0xffffffff00000000);
    lVar5 = FUN_140be85e0(DAT_14c951858,0,uVar2,0);
    if (lVar5 != 0) {
      uVar2 = *(undefined8 *)((longlong)puVar9 + 0x14);
      if (DAT_14c949118 == 0) {
        local_278 = FUN_140631fbe;
        lVar10 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c949118 = lVar10;
        FUN_1446f470e(local_270,L"Class",1);
        local_2c8 = &LAB_146891e90;
        local_2d0 = (code *)&LAB_146273097;
        local_2e0 = L"Engine";
        local_2d8 = (wchar_t *)CONCAT44(local_2d8._4_4_,199);
        local_2e8 = 0x20;
        local_2f0 = (undefined2 *)CONCAT44(local_2f0._4_4_,0x10000000);
        local_2f8._0_4_ = 8;
        local_2c0 = &local_278;
        FUN_14574b4b2(lVar10);
        DAT_14c949118 = lVar10;
        if (DAT_14c951858 == 0) {
          local_2c0 = &local_268;
          local_268 = FUN_1449e2820;
          local_2b0 = FUN_14081d0ea;
          local_2b8 = FUN_14081d0ea;
          local_2c8 = &LAB_1468c5283;
          local_2d0 = FUN_142809da0;
          local_2d8 = L"Engine";
          local_2e0 = (wchar_t *)0x400000000;
          local_2e8 = CONCAT44(local_2e8._4_4_,0x10000000);
          local_2f0 = (undefined2 *)CONCAT44(local_2f0._4_4_,8);
          local_2f8._0_4_ = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar13 = DAT_14c951858;
        lVar10 = DAT_14c949118;
        if (DAT_14c948f88 == 0) {
          local_298 = (code *)&DAT_1427db2a2;
          DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          local_2a8 = DAT_14c948f88;
          FUN_1446f470e(&local_288,L"Struct",1);
          local_2c0 = &local_298;
          local_2c8 = &LAB_146891313;
          local_2d0 = FUN_146272f63;
          local_2e0 = L"Engine";
          local_2d8 = (wchar_t *)CONCAT44(local_2d8._4_4_,199);
          local_2e8 = 8;
          local_2f0 = (undefined2 *)CONCAT44(local_2f0._4_4_,0x10000020);
          local_2f8._0_4_ = 8;
          FUN_14574b4b2(local_2a8);
          DAT_14c948f88 = local_2a8;
          local_2a0 = DAT_14c927740;
          if (DAT_14c927740 == 0) {
            local_2c0 = &local_268;
            local_268 = FUN_1449e2820;
            local_2b0 = FUN_14081d0ea;
            local_2b8 = FUN_14081d0ea;
            local_2c8 = &LAB_146856450;
            local_2d0 = FUN_1427b121c;
            local_2d8 = L"Engine";
            local_2e0 = (wchar_t *)0x0;
            local_2e8 = CONCAT44(local_2e8._4_4_,0x10000021);
            local_2f0 = (undefined2 *)CONCAT44(local_2f0._4_4_,8);
            local_2f8._0_4_ = 0x28;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
            local_2a8 = DAT_14c948f88;
          }
          DAT_14c948f88 = local_2a8;
          local_2a0 = DAT_14c927740;
          uVar4 = FUN_1400163b0();
          local_2f8 = (code *)0x149e6bce8;
          FUN_14574b446(uVar4,local_2a8,local_2a0,L"/Script/CoreUObject");
        }
        local_2f8 = (code *)0x149e6ee30;
        FUN_14574b446(DAT_14c948f88,lVar10,lVar13,L"/Script/CoreUObject");
      }
      local_2f0 = (undefined2 *)((ulonglong)local_2f0 & 0xffffffff00000000);
      local_2f8 = (code *)((ulonglong)local_2f8 & 0xffffffff00000000);
      lVar5 = FUN_140be85e0(DAT_14c949118,lVar5,uVar2,0);
      if (lVar5 != 0) {
        uVar1 = *(uint *)(puVar9 + 1);
        lVar10 = lVar3;
        if ((int)uVar1 < 0 && uVar6 != uVar1) {
          lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8);
          lVar10 = (ulonglong)~uVar1 * 0x38;
          FUN_1427bc36c(param_1,~uVar1);
          if (*(char *)(lVar13 + 0x23 + lVar10) != '\0') {
            *(undefined1 *)((longlong)puVar9 + 0x23) = 1;
            if (puVar9[5] != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_318);
            }
            goto LAB_1427bc542;
          }
          lVar13 = lVar13 + lVar10;
          lVar10 = *(longlong *)(lVar13 + 0x28);
          if (lVar10 == 0) {
            local_288 = (undefined2 *)0x0;
            uStack_280 = 0;
            FUN_14005eb28(&local_288,0x80);
            local_268 = (code *)local_248;
            local_250 = '\0';
            local_258 = (code *)&local_48;
            local_298 = *(code **)(*(longlong *)(lVar3 + 0x10) + 0x18);
            local_260 = local_268;
            FUN_14005eb5c(&local_298,&local_268);
            if (local_258 <= local_260 + 2) {
              FUN_140213274(&local_268,1);
            }
            *(wchar_t *)local_260 = L' ';
            local_260 = local_260 + 2;
            FUN_144750bde(lVar3,0,&local_268);
            FUN_1400020e8(&local_288,local_268,
                          (ulonglong)((longlong)local_260 - (longlong)local_268) >> 1);
            if (local_250 == '\x01') {
              FUN_1400020a8(local_268);
            }
            puVar8 = &DAT_149dfb77a;
            if ((int)uStack_280 != 0) {
              puVar8 = local_288;
            }
            FUN_1400021e4(lVar13,&local_268);
            pcVar11 = (code *)&DAT_149dfb77a;
            if ((int)local_260 != 0) {
              pcVar11 = local_268;
            }
            FUN_1400021e4(param_1 + 0x1c,&local_298);
            pcVar7 = (code *)&DAT_149dfb77a;
            if (local_290 != 0) {
              pcVar7 = local_298;
            }
            local_2f8 = pcVar11;
            local_2f0 = puVar8;
            FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0xbb0,
                          L"Missing outer for import of (%s): %s in %s was not found, but the package exists."
                          ,pcVar7);
            if (local_298 != (code *)0x0) {
              FUN_1400020a8();
            }
            if (local_268 != (code *)0x0) {
              FUN_1400020a8();
            }
            if (local_288 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            lVar10 = 0;
          }
        }
        local_2f0 = (undefined2 *)((ulonglong)local_2f0 & 0xffffffff00000000);
        local_2f8 = (code *)((ulonglong)local_2f8 & 0xffffffff00000000);
        lVar5 = FUN_140be85e0(lVar5,lVar10,*puVar9,0);
        puVar9[5] = lVar5;
        if (lVar5 == 0) {
          local_288 = (undefined2 *)0x0;
          uStack_280 = 0;
          FUN_14005eb28(&local_288,0x80);
          local_268 = (code *)local_248;
          local_250 = '\0';
          local_258 = (code *)&local_48;
          local_298 = *(code **)(*(longlong *)(lVar3 + 0x10) + 0x18);
          local_260 = local_268;
          FUN_14005eb5c(&local_298,&local_268);
          if (local_258 <= local_260 + 2) {
            FUN_140213274(&local_268,1);
          }
          *(wchar_t *)local_260 = L' ';
          local_260 = local_260 + 2;
          FUN_144750bde(lVar3,0,&local_268);
          FUN_1400020e8(&local_288,local_268,
                        (ulonglong)((longlong)local_260 - (longlong)local_268) >> 1);
          if (local_250 == '\x01') {
            FUN_1400020a8(local_268);
          }
          puVar8 = &DAT_149dfb77a;
          if ((int)uStack_280 != 0) {
            puVar8 = local_288;
          }
          FUN_1400021e4(puVar9,&local_268);
          pcVar11 = (code *)&DAT_149dfb77a;
          if ((int)local_260 != 0) {
            pcVar11 = local_268;
          }
          FUN_1400021e4(param_1 + 0x1c,&local_298);
          pcVar7 = (code *)&DAT_149dfb77a;
          if (local_290 != 0) {
            pcVar7 = local_298;
          }
          local_2f8 = pcVar11;
          local_2f0 = puVar8;
          FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0xbb5,
                        L"Missing import of (%s): %s in %s was not found, but the package exists.",
                        pcVar7);
          if (local_298 != (code *)0x0) {
            FUN_1400020a8();
          }
          if (local_268 != (code *)0x0) {
            FUN_1400020a8();
          }
          if (local_288 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
LAB_1427bc539:
  lVar3 = puVar9[5];
LAB_1427bc53d:
  if (lVar3 != 0) {
    FUN_146878962(param_1);
  }
LAB_1427bc542:
  if ((local_48 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427bccfa FUN_1427bccfa body=2386 status=ok
// SIG undefined FUN_1427bccfa(void)

longlong FUN_1427bccfa(longlong param_1,uint param_2,char param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  LPVOID pvVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  wchar_t *pwVar14;
  undefined2 *puVar15;
  code *pcVar16;
  bool bVar17;
  undefined1 auStack_328 [32];
  wchar_t *local_308;
  undefined4 local_300;
  undefined8 local_2f8;
  wchar_t *local_2f0;
  wchar_t *local_2e8;
  code *local_2e0;
  undefined1 *local_2d8;
  code **local_2d0;
  code *local_2c8;
  code *local_2c0;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  undefined2 *local_298;
  undefined8 uStack_290;
  longlong local_288;
  code *local_280;
  undefined1 local_278 [8];
  code *local_270;
  code *local_268;
  code *local_260;
  code *local_258;
  char local_250;
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  if (param_2 == 0) {
LAB_1427bcfd6:
    lVar12 = 0;
  }
  else {
    uVar13 = (ulonglong)param_2;
    if ((int)param_2 < 1) {
      plVar7 = (longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x50) + 8) + (ulonglong)~param_2 * 0x38 + 0x28
               );
    }
    else {
      plVar7 = (longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + uVar13 * 0x68 + -0x28);
    }
    lVar12 = *plVar7;
    if (lVar12 == 0) {
      if ((int)param_2 < 0) {
        lVar9 = (longlong)*(int *)(param_1 + 0x600) + (longlong)(int)~param_2 * 2;
      }
      else {
        lVar9 = (longlong)(int)(param_2 * 3 + -3) + (longlong)*(int *)(param_1 + 0x604);
      }
      if ((*(char *)(*(longlong *)(param_1 + 0x5e8) + 0x15 + lVar9 * 0x18) != '\0') ||
         (*(char *)(*(longlong *)(param_1 + 0x5e8) + 0x14 + lVar9 * 0x18) == '\0')) {
        DVar6 = DAT_14c75ec34;
        if (DAT_14c75ec34 == 0xffffffff) {
          DVar6 = TlsAlloc();
          DVar5 = 0xffffffff;
          LOCK();
          bVar17 = DAT_14c75ec34 != 0xffffffff;
          DVar3 = DVar6;
          if (bVar17) {
            DVar5 = DAT_14c75ec34;
            DVar3 = DAT_14c75ec34;
          }
          DAT_14c75ec34 = DVar3;
          UNLOCK();
          if (bVar17) {
            TlsFree(DVar6);
            DVar6 = DVar5;
          }
        }
        pvVar8 = TlsGetValue(DVar6);
        if (pvVar8 == (LPVOID)0x0) {
          pvVar8 = (LPVOID)FUN_14001cc68(0x60,0x10);
          FUN_141073f92(pvVar8);
          FUN_140fddf04(pvVar8);
          TlsSetValue(DVar6,pvVar8);
        }
        lVar9 = *(longlong *)((longlong)pvVar8 + 0x58);
        lVar10 = *(longlong *)(lVar9 + 0x30);
        if (lVar10 != 0) {
          local_2a0 = lVar9;
          if (DAT_14c949118 == 0) {
            local_280 = FUN_140631fbe;
            lVar9 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            DAT_14c949118 = lVar9;
            FUN_1446f470e(local_278,L"Class",1);
            local_2d8 = &LAB_146891e90;
            local_2e0 = (code *)&LAB_146273097;
            local_2f0 = L"Engine";
            local_2e8 = (wchar_t *)CONCAT44(local_2e8._4_4_,199);
            local_2f8 = 0x20;
            local_300 = 0x10000000;
            local_308._0_4_ = 8;
            local_2d0 = &local_280;
            FUN_14574b4b2(lVar9);
            DAT_14c949118 = lVar9;
            if (DAT_14c951858 == 0) {
              local_2d0 = &local_268;
              local_268 = FUN_1449e2820;
              local_2c0 = FUN_14081d0ea;
              local_2c8 = FUN_14081d0ea;
              local_2d8 = &LAB_1468c5283;
              local_2e0 = FUN_142809da0;
              local_2e8 = L"Engine";
              local_2f0 = (wchar_t *)0x400000000;
              local_2f8 = CONCAT44(local_2f8._4_4_,0x10000000);
              local_300 = 8;
              local_308._0_4_ = 0x50;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            }
            lVar2 = DAT_14c951858;
            lVar9 = DAT_14c949118;
            if (DAT_14c948f88 == 0) {
              local_270 = (code *)&DAT_1427db2a2;
              DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
              local_2b0 = DAT_14c948f88;
              FUN_1446f470e(&local_298,L"Struct",1);
              local_2d0 = &local_270;
              local_2d8 = &LAB_146891313;
              local_2e0 = FUN_146272f63;
              local_2f0 = L"Engine";
              local_2e8 = (wchar_t *)CONCAT44(local_2e8._4_4_,199);
              local_2f8 = 8;
              local_300 = 0x10000020;
              local_308._0_4_ = 8;
              FUN_14574b4b2(local_2b0);
              DAT_14c948f88 = local_2b0;
              local_2a8 = DAT_14c927740;
              if (DAT_14c927740 == 0) {
                local_2d0 = &local_268;
                local_268 = FUN_1449e2820;
                local_2c0 = FUN_14081d0ea;
                local_2c8 = FUN_14081d0ea;
                local_2d8 = &LAB_146856450;
                local_2e0 = FUN_1427b121c;
                local_2e8 = L"Engine";
                local_2f0 = (wchar_t *)0x0;
                local_2f8 = CONCAT44(local_2f8._4_4_,0x10000021);
                local_300 = 8;
                local_308._0_4_ = 0x28;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                local_2b0 = DAT_14c948f88;
              }
              DAT_14c948f88 = local_2b0;
              local_2a8 = DAT_14c927740;
              uVar11 = FUN_1400163b0();
              local_308 = L"Struct";
              FUN_14574b446(uVar11,local_2b0,local_2a8,L"/Script/CoreUObject");
            }
            local_308 = L"Class";
            FUN_14574b446(DAT_14c948f88,lVar9,lVar2,L"/Script/CoreUObject");
          }
          if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) {
            if ((int)param_2 < 0) {
              plVar7 = (longlong *)
                       ((ulonglong)~param_2 * 0x38 +
                       *(longlong *)(*(longlong *)(param_1 + 0x50) + 8));
            }
            else {
              plVar7 = (longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + uVar13 * 0x68 + -0x68)
              ;
            }
            FUN_140aa725c(lVar10,&local_288);
            if (*plVar7 == local_288) goto LAB_1427bce72;
          }
          lVar9 = *(longlong *)(local_2a0 + 0x30);
          if (*(longlong *)(local_2a0 + 0x30) != 0) {
LAB_1427bd042:
            lVar10 = lVar9;
            lVar9 = lVar10;
            if (*(longlong *)(lVar10 + 0x20) != 0) goto code_r0x0001427bd051;
            goto LAB_1427bd063;
          }
        }
LAB_1427bd01a:
        FUN_146879334(*(undefined8 *)(param_1 + 0x50),&local_268,uVar13);
        pcVar16 = local_268;
        if ((int)local_260 == 0) {
          pcVar16 = (code *)&DAT_149dfb77a;
        }
        FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0xc35,
                      L"Missing Dependency, request for %s but it was still waiting for creation.",
                      pcVar16);
        if (local_268 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
    }
LAB_1427bce72:
    if ((param_3 == '\0') || (cVar4 = FUN_1468764f2(param_1,lVar12), cVar4 != '\0')) {
      if (lVar12 == 0) goto LAB_1427bcfd6;
    }
    else {
      if (param_4 == 0) {
        DVar6 = DAT_14c75ec34;
        if (DAT_14c75ec34 == 0xffffffff) {
          DVar6 = TlsAlloc();
          DVar5 = 0xffffffff;
          LOCK();
          bVar17 = DAT_14c75ec34 != 0xffffffff;
          DVar3 = DVar6;
          if (bVar17) {
            DVar5 = DAT_14c75ec34;
            DVar3 = DAT_14c75ec34;
          }
          DAT_14c75ec34 = DVar3;
          UNLOCK();
          if (bVar17) {
            TlsFree(DVar6);
            DVar6 = DVar5;
          }
        }
        pvVar8 = TlsGetValue(DVar6);
        if (pvVar8 == (LPVOID)0x0) {
          pvVar8 = (LPVOID)FUN_14001cc68(0x60,0x10);
          FUN_141073f92(pvVar8);
          FUN_140fddf04(pvVar8);
          TlsSetValue(DVar6,pvVar8);
        }
        lVar9 = *(longlong *)(*(longlong *)((longlong)pvVar8 + 0x58) + 0x30);
        if (lVar9 != 0) {
LAB_1427bd0dc:
          lVar10 = lVar9;
          lVar9 = lVar10;
          if (*(longlong *)(lVar10 + 0x20) != 0) goto code_r0x0001427bd0eb;
          goto LAB_1427bd0fd;
        }
      }
LAB_1427bcfcd:
      if (lVar12 == 0) goto LAB_1427bcfd6;
      if ((int)param_2 < 0) {
        lVar9 = (longlong)*(int *)(param_1 + 0x600) + (longlong)(int)~param_2 * 2;
      }
      else {
        lVar9 = (longlong)(int)(param_2 * 3 + -3) + (longlong)*(int *)(param_1 + 0x604);
      }
      if ((*(char *)(*(longlong *)(param_1 + 0x5e8) + 0x2d + lVar9 * 0x18) == '\0') &&
         (*(char *)(*(longlong *)(param_1 + 0x5e8) + 0x2c + lVar9 * 0x18) != '\0')) {
        FUN_146879334(*(undefined8 *)(param_1 + 0x50),&local_268,uVar13);
        pcVar16 = local_268;
        if ((int)local_260 == 0) {
          pcVar16 = (code *)&DAT_149dfb77a;
        }
        pwVar14 = L"Missing Dependency, request for %s but it was still has RF_NeedLoad.";
        uVar11 = 0xc54;
      }
      else {
        FUN_146879334(*(undefined8 *)(param_1 + 0x50),&local_268,uVar13);
        pcVar16 = local_268;
        if ((int)local_260 == 0) {
          pcVar16 = (code *)&DAT_149dfb77a;
        }
        pwVar14 = L"Missing Dependency, request for %s but it was still waiting for serialization.";
        uVar11 = 0xc50;
      }
      FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",uVar11,pwVar14,
                    pcVar16);
      if (local_268 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    uVar1 = *(uint *)(lVar12 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    if ((*(uint *)(lVar9 + 8) >> 0x1c & 1) != 0) {
      local_298 = (undefined2 *)0x0;
      uStack_290 = 0;
      FUN_14005eb28(&local_298,0x80);
      local_268 = (code *)local_248;
      local_250 = '\0';
      local_258 = (code *)&local_48;
      local_270 = *(code **)(*(longlong *)(lVar12 + 0x10) + 0x18);
      local_260 = local_268;
      FUN_14005eb5c(&local_270,&local_268);
      if (local_258 <= local_260 + 2) {
        FUN_140213274(&local_268,1);
      }
      *(undefined2 *)local_260 = 0x20;
      local_260 = local_260 + 2;
      FUN_144750bde(lVar12,0,&local_268);
      FUN_1400020e8(&local_298,local_268,(ulonglong)((longlong)local_260 - (longlong)local_268) >> 1
                   );
      if (local_250 == '\x01') {
        FUN_1400020a8(local_268);
      }
      puVar15 = local_298;
      if ((int)uStack_290 == 0) {
        puVar15 = &DAT_149dfb77a;
      }
      FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0xc59,
                    L"Returning an object  (%s) from EventDrivenIndexToObject that is unreachable.",
                    puVar15);
      if (local_298 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar12;
code_r0x0001427bd051:
  lVar9 = *(longlong *)(lVar10 + 0x20);
  if ((*(uint *)(lVar10 + 8) >> 0x1c & 1) != 0) {
    lVar9 = FUN_142840154(lVar10);
LAB_1427bd063:
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(lVar10 + 0x20);
      goto LAB_1427bd042;
    }
    goto LAB_1427bd01a;
  }
  goto LAB_1427bd042;
code_r0x0001427bd0eb:
  lVar9 = *(longlong *)(lVar10 + 0x20);
  if ((*(uint *)(lVar10 + 8) >> 0x1c & 1) != 0) {
    lVar9 = FUN_142840154(lVar10);
LAB_1427bd0fd:
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(lVar10 + 0x20);
      goto LAB_1427bd0dc;
    }
    goto LAB_1427bcfcd;
  }
  goto LAB_1427bd0dc;
}



// FUNCTION 1427bd64e FUN_1427bd64e body=101 status=ok
// SIG undefined FUN_1427bd64e(void)

void FUN_1427bd64e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(uint *)(param_2 + 8) & 0x8200400) == 0) {
    FUN_1427bd6b4(&local_1c,*(undefined8 *)(param_1 + 0x50),param_2);
    if (0 < local_1c) {
      FUN_144757f48(param_2,0x8000000);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427bd6b4 FUN_1427bd6b4 body=414 status=ok
// SIG undefined FUN_1427bd6b4(void)

uint * FUN_1427bd6b4(uint *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (*(longlong *)(param_3 + 0x20) != 0) {
    FUN_1427bd6b4(&local_24);
    lVar2 = *(longlong *)(param_2 + 0x398);
    lVar1 = *(longlong *)(param_3 + 0x18);
    if (*(int *)(lVar2 + 0x448) != *(int *)(lVar2 + 0x474)) {
      uVar8 = (uint)((ulonglong)lVar1 >> 0x10);
      uVar4 = (uint)lVar1 & 0xffff;
      uVar8 = (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar4) +
              (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
      lVar5 = lVar2 + 0x478;
      if (*(longlong *)(lVar2 + 0x480) != 0) {
        lVar5 = *(longlong *)(lVar2 + 0x480);
      }
      iVar3 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(lVar2 + 0x488) - 1U &
                               (uVar8 * 0x40 + local_24 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar8)) * 4);
      if (iVar3 != -1) {
        do {
          plVar6 = (longlong *)(*(longlong *)(lVar2 + 0x440) + (longlong)iVar3 * 0x18);
          if ((*plVar6 == lVar1) &&
             (*(int *)(*(longlong *)(lVar2 + 0x440) + 8 + (longlong)iVar3 * 0x18) == local_24)) {
            if (plVar6 != (longlong *)0x0) {
              uVar8 = *(uint *)((longlong)plVar6 + 0xc);
              goto LAB_1427bd82f;
            }
            break;
          }
          iVar3 = (int)plVar6[2];
        } while (iVar3 != -1);
      }
    }
    if (0 < (longlong)*(int *)(param_2 + 0x10)) {
      lVar2 = 0;
      plVar6 = *(longlong **)(param_2 + 8);
      do {
        if (plVar6[5] == param_3) {
LAB_1427bd82d:
          uVar8 = ~(uint)lVar2;
LAB_1427bd82f:
          *param_1 = uVar8;
          break;
        }
        if ((*plVar6 == lVar1) &&
           (*(longlong *)((longlong)plVar6 + 0x14) ==
            *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x18))) {
          uVar8 = *(uint *)(plVar6 + 1);
          if ((longlong)(int)uVar8 < 0) {
            plVar7 = *(longlong **)(param_2 + 8) + (ulonglong)~uVar8 * 7;
          }
          else {
            plVar7 = (longlong *)
                     ((longlong)(int)uVar8 * 0x68 + *(longlong *)(param_2 + 0x18) + -0x68);
          }
          if (*plVar7 == *(longlong *)(*(longlong *)(param_3 + 0x20) + 0x18)) goto LAB_1427bd82d;
        }
        lVar2 = lVar2 + 1;
        plVar6 = plVar6 + 7;
      } while (*(int *)(param_2 + 0x10) != lVar2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1427bd854 FUN_1427bd854 body=104 status=ok
// SIG undefined FUN_1427bd854(void)

void FUN_1427bd854(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  local_190 = param_3;
  (**(code **)(*param_1 + 0x3a8))(param_1,param_2,local_180);
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427bd8be FUN_1427bd8be body=1835 status=ok
// SIG undefined FUN_1427bd8be(void)

void FUN_1427bd8be(LARGE_INTEGER param_1)

{
  longlong *plVar1;
  uint *puVar2;
  LARGE_INTEGER *pLVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  bool bVar6;
  LARGE_INTEGER LVar7;
  LARGE_INTEGER LVar8;
  LARGE_INTEGER LVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  longlong *local_d0;
  longlong *local_c8;
  uint local_bc;
  undefined8 local_b8;
  uint local_ac;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER LStack_a0;
  undefined8 local_98;
  uint *puStack_90;
  undefined8 uStack_88;
  uint local_80;
  int local_7c;
  LARGE_INTEGER local_78;
  LARGE_INTEGER LStack_70;
  undefined8 local_68;
  uint *puStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_80 = 0xffffffff;
  local_d0 = (longlong *)(param_1.QuadPart + 0x310);
  plVar1 = (longlong *)(param_1.QuadPart + 0x390);
  local_c8 = (longlong *)(param_1.QuadPart + 0x340);
  do {
    FUN_146878096(local_d0,&local_80);
    uVar18 = local_80;
    lVar14 = *(longlong *)(*(longlong *)(param_1.QuadPart + 0x50) + 0x18);
    lVar17 = *(longlong *)(lVar14 + 0x40 + (longlong)(int)local_80 * 0x68);
    if ((lVar17 == 0) || ((*(uint *)(lVar17 + 8) >> 10 & 1) == 0)) {
LAB_1427bdab0:
      LStack_70.s.HighPart = 2;
      LStack_70.s.LowPart = local_80 + 1;
      local_78 = param_1;
      FUN_146877aa2(*(longlong *)(param_1.QuadPart + 0x278) + 0x410,&local_78);
    }
    else {
      lVar14 = lVar14 + (longlong)(int)local_80 * 0x68;
      if ((*(longlong *)(param_1.QuadPart + 0x3e0) <= *(longlong *)(lVar14 + 0x28)) &&
         (*(longlong *)(lVar14 + 0x28) + *(longlong *)(lVar14 + 0x20) <=
          *(longlong *)(param_1.QuadPart + 0x3e0) + *(longlong *)(param_1.QuadPart + 1000)))
      goto LAB_1427bdab0;
      if (*(int *)(param_1.QuadPart + 0x398) == *(int *)(param_1.QuadPart + 0x3c4)) {
LAB_1427bdaed:
        local_98 = 0xffffffffffffffff;
        puStack_90 = (uint *)0x0;
        local_a8 = *(LARGE_INTEGER *)(lVar14 + 0x28);
        LStack_a0 = *(LARGE_INTEGER *)(lVar14 + 0x20);
        uStack_88 = 1;
        FUN_1446f48e2(&puStack_90,0);
        *puStack_90 = uVar18;
        local_ac = uVar18;
        if ((DAT_14c948744 != 0) ||
           (0xfffff < (longlong)LStack_a0 || *(int *)(param_1.QuadPart + 0x318) == 0))
        goto LAB_1427bdcec;
        goto LAB_1427bdb67;
      }
      plVar15 = *(longlong **)(param_1.QuadPart + 0x3d0);
      if (*(longlong **)(param_1.QuadPart + 0x3d0) == (longlong *)0x0) {
        plVar15 = (longlong *)(param_1.QuadPart + 0x3c8);
      }
      uVar13 = *(uint *)((longlong)plVar15 +
                        (ulonglong)(*(int *)(param_1.QuadPart + 0x3d8) - 1U & local_80) * 4);
      if (uVar13 == 0xffffffff) goto LAB_1427bdaed;
      while (puVar2 = (uint *)(*plVar1 + (longlong)(int)uVar13 * 0x18), *puVar2 != local_80) {
        uVar13 = puVar2[4];
        if (uVar13 == 0xffffffff) goto LAB_1427bdaed;
      }
      if ((puVar2 == (uint *)0x0) || (uVar4 = *(ulonglong *)(puVar2 + 2), uVar4 == 0))
      goto LAB_1427bdaed;
      if (*(int *)(param_1.QuadPart + 0x348) != *(int *)(param_1.QuadPart + 0x374)) {
        uVar13 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        plVar15 = *(longlong **)(param_1.QuadPart + 0x380);
        if (*(longlong **)(param_1.QuadPart + 0x380) == (longlong *)0x0) {
          plVar15 = (longlong *)(param_1.QuadPart + 0x378);
        }
        iVar11 = *(int *)((longlong)plVar15 +
                         (ulonglong)
                         (*(int *)(param_1.QuadPart + 0x388) - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
        if (iVar11 != -1) {
          do {
            lVar14 = *local_c8 + (longlong)iVar11 * 0x38;
            if (*(ulonglong *)(*local_c8 + (longlong)iVar11 * 0x38) == uVar4) goto LAB_1427bda6e;
            iVar11 = *(int *)(lVar14 + 0x30);
          } while (iVar11 != -1);
        }
      }
      lVar14 = 0;
LAB_1427bda6e:
      lVar17 = lVar14 + 8;
      if (lVar14 == 0) {
        lVar17 = 0;
      }
      iVar11 = *(int *)(lVar17 + 0x20);
      *(uint *)(lVar17 + 0x20) = iVar11 + 1U;
      if (*(uint *)(lVar17 + 0x24) < iVar11 + 1U) {
        FUN_1446f48e2((longlong *)(lVar17 + 0x18),iVar11);
      }
      *(uint *)(*(longlong *)(lVar17 + 0x18) + (longlong)iVar11 * 4) = uVar18;
    }
  } while (*(int *)(param_1.QuadPart + 0x318) != 0);
LAB_1427bdfbc:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1427bdb67:
  if (0x14 < (int)(local_ac - uVar18)) goto LAB_1427bdcec;
  uVar13 = **(uint **)(param_1.QuadPart + 0x310);
  lVar17 = *(longlong *)(*(longlong *)(param_1.QuadPart + 0x50) + 0x18);
  lVar14 = lVar17 + (longlong)(int)uVar13 * 0x68;
  lVar17 = *(longlong *)(lVar17 + 0x28 + (longlong)(int)uVar13 * 0x68);
  if ((*(longlong *)(param_1.QuadPart + 0x3e0) <= lVar17) &&
     (*(longlong *)(lVar14 + 0x20) + lVar17 <=
      *(longlong *)(param_1.QuadPart + 0x3e0) + *(longlong *)(param_1.QuadPart + 1000))) {
    FUN_146878096(local_d0,&local_b8);
    LStack_70.s.HighPart = 2;
    LStack_70.s.LowPart = uVar13 + 1;
    local_78 = param_1;
    FUN_146877aa2(*(longlong *)(param_1.QuadPart + 0x278) + 0x410);
    goto LAB_1427bdcec;
  }
  if ((0xc000 < lVar17 - ((longlong)local_a8 + (longlong)LStack_a0)) ||
     (0x100000 < (longlong)LStack_a0 + *(longlong *)(lVar14 + 0x20))) goto LAB_1427bdcec;
  if ((int)local_ac < (int)uVar13) {
    uVar12 = local_ac;
    do {
      uVar12 = uVar12 + 1;
      if (*(int *)(param_1.QuadPart + 0x398) != *(int *)(param_1.QuadPart + 0x3c4)) {
        plVar15 = *(longlong **)(param_1.QuadPart + 0x3d0);
        if (*(longlong **)(param_1.QuadPart + 0x3d0) == (longlong *)0x0) {
          plVar15 = (longlong *)(param_1.QuadPart + 0x3c8);
        }
        iVar11 = *(int *)((longlong)plVar15 +
                         (ulonglong)(*(int *)(param_1.QuadPart + 0x3d8) - 1U & uVar12) * 4);
        if (iVar11 != -1) {
          do {
            if (*(uint *)(*plVar1 + (longlong)iVar11 * 0x18) == uVar12) goto LAB_1427bdcec;
            iVar11 = *(int *)(*plVar1 + (longlong)iVar11 * 0x18 + 0x10);
          } while (iVar11 != -1);
        }
      }
    } while (uVar12 != uVar13);
  }
  FUN_146878096(local_d0,&local_ac);
  uVar4 = uStack_88;
  LStack_a0.s = (*(longlong *)(lVar14 + 0x20) + *(longlong *)(lVar14 + 0x28)) - local_a8.s;
  lVar14 = (longlong)(int)uStack_88;
  uVar13 = (int)uStack_88 + 1;
  uStack_88 = CONCAT44(uStack_88._4_4_,uVar13);
  if (uStack_88._4_4_ < uVar13) {
    FUN_1446f48e2(&puStack_90,uVar4 & 0xffffffff);
  }
  puStack_90[lVar14] = local_ac;
  if ((*(int *)(param_1.QuadPart + 0x318) == 0) || (0xfffff < (longlong)LStack_a0))
  goto LAB_1427bdcec;
  goto LAB_1427bdb67;
LAB_1427bdcec:
  LVar8 = LStack_a0;
  LVar7 = local_a8;
  if (*(char *)(*(longlong *)(param_1.QuadPart + 0x50) + 0x2e3) == '\x01') {
    lVar14 = *(longlong *)(*(longlong *)(param_1.QuadPart + 0x50) + 0x328);
  }
  else {
    lVar14 = 0;
  }
  uVar16 = *(undefined8 *)(*(longlong *)(param_1.QuadPart + 0x278) + 0x470);
  if (*(int *)(lVar14 + 0x110) == 3) {
    *(undefined8 *)(lVar14 + 0x108) = *(undefined8 *)(lVar14 + 0x100);
    QueryPerformanceCounter(&local_78);
    local_e8 = CONCAT71(local_e8._1_7_,1);
    (**(code **)(*DAT_14c9518c8 + 0x30))(DAT_14c9518c8,&local_78,lVar14 + 0x160,0);
    LVar9 = local_78;
    QueryPerformanceCounter(&local_78);
    cVar10 = (**(code **)(*(longlong *)LVar9 + 0x18))(LVar9.QuadPart);
    uVar18 = 5;
    if ((int)DAT_14c948718 < 5) {
      uVar18 = DAT_14c948718;
    }
    if ((int)uVar18 < 1) {
      uVar18 = 0;
    }
    uVar13 = uVar18 | 0x100;
    if (cVar10 == '\0') {
      uVar13 = uVar18;
    }
    local_e0 = 0;
    local_e8 = uVar16;
    uVar16 = (**(code **)(*(longlong *)LVar9 + 0x10))
                       (LVar9.QuadPart,(longlong)LVar7 - *(longlong *)(lVar14 + 0x108),LVar8,uVar13)
    ;
    FUN_1427c53c4(lVar14);
    puVar5 = *(undefined8 **)(lVar14 + 0x90);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    ((LARGE_INTEGER *)(lVar14 + 0x90))->QuadPart = (LONGLONG)LVar9;
    FUN_1427c5aa2(lVar14);
    lVar17 = (**(code **)(**(longlong **)(lVar14 + 0x90) + 8))(*(longlong **)(lVar14 + 0x90),0);
    *(longlong *)(lVar14 + 0x98) = lVar17;
    if (*(char *)(lVar17 + 0x51) == '\x01') {
      FUN_1427c5a02(lVar14);
    }
  }
  else {
    QueryPerformanceCounter(&local_78);
    cVar10 = (**(code **)(**(longlong **)(lVar14 + 0x90) + 0x18))();
    uVar18 = 5;
    if ((int)DAT_14c948718 < 5) {
      uVar18 = DAT_14c948718;
    }
    uVar13 = 0;
    if (0 < (int)uVar18) {
      uVar13 = uVar18;
    }
    uVar18 = uVar13 | 0x100;
    if (cVar10 == '\0') {
      uVar18 = uVar13;
    }
    local_e0 = 0;
    local_e8 = uVar16;
    uVar16 = (**(code **)(**(longlong **)(lVar14 + 0x90) + 0x10))
                       (*(longlong **)(lVar14 + 0x90),
                        (longlong)LVar7 - *(longlong *)(lVar14 + 0x108),LVar8,uVar18);
  }
  local_98 = CONCAT44(local_ac,local_80);
  local_bc = local_80;
  local_b8 = uVar16;
  if ((int)local_80 <= (int)local_ac) {
    do {
      local_78.QuadPart = (LONGLONG)&local_bc;
      LStack_70.QuadPart = (LONGLONG)&local_b8;
      FUN_146882cba(plVar1,&local_7c,&local_78);
      uVar18 = local_bc + 1;
      bVar6 = (int)local_bc < local_98._4_4_;
      local_bc = uVar18;
    } while (bVar6);
  }
  local_78.QuadPart = (LONGLONG)&local_b8;
  FUN_146883156(local_c8,&local_7c,&local_78);
  lVar14 = *(longlong *)(param_1.QuadPart + 0x340);
  lVar17 = (longlong)local_7c * 0x38;
  local_58 = *(undefined8 *)(lVar14 + 0x28 + lVar17);
  pLVar3 = (LARGE_INTEGER *)(lVar14 + 8 + lVar17);
  local_78 = *pLVar3;
  LStack_70 = pLVar3[1];
  puVar5 = (undefined8 *)(lVar14 + 0x18 + lVar17);
  local_68 = *puVar5;
  puStack_60 = (uint *)puVar5[1];
  *(ulonglong *)(lVar14 + 0x28 + lVar17) = uStack_88;
  puVar5 = (undefined8 *)(lVar14 + 0x18 + lVar17);
  *puVar5 = local_98;
  puVar5[1] = puStack_90;
  plVar1 = (longlong *)(lVar14 + 8 + lVar17);
  *plVar1 = (longlong)local_a8;
  plVar1[1] = (longlong)LStack_a0;
  local_a8 = local_78;
  LStack_a0 = LStack_70;
  local_98 = local_68;
  puStack_90 = puStack_60;
  uStack_88 = local_58;
  FUN_146879484(*(undefined8 *)(*(longlong *)(param_1.QuadPart + 0x278) + 0x470),local_b8,
                param_1.QuadPart);
  if (puStack_90 != (uint *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_1427bdfbc;
}



// FUNCTION 1427bdfea FUN_1427bdfea body=91 status=ok
// SIG undefined FUN_1427bdfea(void)

void FUN_1427bdfea(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 8);
  *(longlong *)(param_1 + 0xd8) = *(longlong *)(param_1 + 0xd8) + (*plVar1 - plVar1[2]);
  *plVar1 = 0;
  plVar1[1] = 0;
  plVar1[2] = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  return;
}



// FUNCTION 1427be046 FUN_1427be046 body=224 status=ok
// SIG undefined FUN_1427be046(void)

void FUN_1427be046(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  lVar2 = *(longlong *)(param_1 + 0x88);
  iVar1 = *(int *)(param_1 + 0x90);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) == param_2) goto LAB_1427be0fb;
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 - lVar3 != 0);
  }
  *(uint *)(param_1 + 0x90) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x94) < iVar1 + 1U) {
    FUN_1468824fe((longlong *)(param_1 + 0x88),iVar1);
    lVar2 = *(longlong *)(param_1 + 0x88);
  }
  *(longlong *)(lVar2 + lVar4 * 8) = param_2;
  local_48 = param_2 + 0x14;
  local_40 = &local_50;
  FUN_146883b40(param_1 + 0x98,local_34);
LAB_1427be0fb:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427be128 FUN_1427be128 body=10235 status=ok
// SIG undefined FUN_1427be128(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1427be128(longlong param_1,undefined1 param_2,undefined1 param_3,float *param_4)

{
  LPCRITICAL_SECTION p_Var1;
  byte *pbVar2;
  longlong *plVar3;
  int *piVar4;
  float fVar5;
  undefined1 uVar6;
  double dVar7;
  double dVar8;
  DWORD DVar9;
  byte bVar10;
  char cVar11;
  int iVar12;
  DWORD DVar13;
  DWORD DVar14;
  LPVOID lpTlsValue;
  ulonglong uVar15;
  longlong lVar16;
  LARGE_INTEGER LVar17;
  LPVOID pvVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  longlong *plVar27;
  uint *puVar28;
  int iVar29;
  ulonglong uVar30;
  int iVar31;
  ulonglong uVar32;
  uint uVar33;
  bool bVar34;
  double dVar35;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  ulonglong local_230;
  double local_228;
  undefined8 local_220;
  wchar_t *local_218;
  code *local_210;
  undefined1 *local_208;
  LARGE_INTEGER *local_200;
  code *local_1f8;
  code *local_1f0;
  int *local_1e8;
  float *local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined8 *local_1a8;
  LPVOID local_1a0;
  longlong *local_198;
  longlong local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong local_170;
  longlong local_168;
  undefined1 local_160;
  longlong local_158;
  longlong local_150;
  longlong *local_148;
  undefined4 local_140;
  LARGE_INTEGER local_138;
  undefined8 uStack_130;
  undefined4 local_11c;
  LARGE_INTEGER local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  char local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  LOCK();
  *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) + 1;
  UNLOCK();
  *(undefined1 *)(param_1 + 0x10c) = param_2;
  *(undefined1 *)(param_1 + 0x10d) = param_3;
  *(undefined1 *)(param_1 + 0x10e) = 0;
  *(float *)(param_1 + 0x108) = *param_4;
  QueryPerformanceCounter(&local_118);
  dVar7 = (double)local_118.QuadPart * DAT_14c83f420 + 16777216.0;
  *(double *)(param_1 + 0x118) = dVar7;
  if ((*(double *)(param_1 + 0x130) == 0.0) && (!NAN(*(double *)(param_1 + 0x130)))) {
    *(double *)(param_1 + 0x130) = dVar7;
    lVar16 = *(longlong *)(param_1 + 0xd0);
    if ((lVar16 != 0) &&
       ((*(double *)(lVar16 + 0x130) == 0.0 && (!NAN(*(double *)(lVar16 + 0x130)))))) {
      *(double *)(lVar16 + 0x130) = dVar7;
    }
  }
  DVar13 = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    DVar13 = TlsAlloc();
    DVar14 = 0xffffffff;
    LOCK();
    bVar34 = DAT_14c75ec34 != 0xffffffff;
    DVar9 = DVar13;
    if (bVar34) {
      DVar14 = DAT_14c75ec34;
      DVar9 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar9;
    UNLOCK();
    if (bVar34) {
      TlsFree(DVar13);
      DVar13 = DVar14;
    }
  }
  local_1a0 = TlsGetValue(DVar13);
  if (local_1a0 == (LPVOID)0x0) {
    local_1a0 = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(local_1a0);
    FUN_140fddf04(local_1a0);
    TlsSetValue(DVar13,local_1a0);
  }
  local_180 = *(undefined8 *)((longlong)local_1a0 + 0x40);
  local_188 = *(undefined8 *)((longlong)local_1a0 + 0x48);
  *(longlong *)((longlong)local_1a0 + 0x40) = param_1;
  lVar16 = *(longlong *)(param_1 + 0x278) + 8;
  if (*(longlong *)(param_1 + 0x278) == 0) {
    lVar16 = 0;
  }
  *(longlong *)((longlong)local_1a0 + 0x48) = lVar16;
  local_1c0 = (longlong *)(param_1 + 0x288);
  local_1a8 = (undefined8 *)(param_1 + 0x120);
  local_1e8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
  local_1c8 = param_1 + 0xc0;
  local_190 = param_1 + 0xa8;
  plVar3 = (longlong *)(param_1 + 0x160);
  local_1b8 = (longlong *)(param_1 + 0x140);
  local_1b0 = (longlong *)(param_1 + 0x150);
  local_198 = (longlong *)(param_1 + 0x170);
LAB_1427be335:
  FUN_146878118();
  if (DAT_14c872ba8 == '\0') {
    iVar12 = FUN_1427baecc(param_1);
    if ((iVar12 == 2) && (iVar12 = FUN_1427bbb58(), iVar12 == 2)) {
      bVar10 = *(byte *)(param_1 + 0x110);
      if (bVar10 == 0) {
        *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x58);
        *(wchar_t **)(param_1 + 0x128) = L"loading imports";
        piVar4 = DAT_14c950c20;
        if ((DAT_14c86a9f8 == '\x01') && (*local_1e8 != 2)) {
          if (*local_1e8 == 1) {
            DVar13 = FUN_140ad26c0();
            DVar14 = GetCurrentThreadId();
            if (DVar13 == DVar14) goto LAB_1427bea7e;
          }
          p_Var1 = (LPCRITICAL_SECTION)(piVar4 + 4);
          while( true ) {
            if (0 < piVar4[1]) {
              (**(code **)(**(longlong **)(piVar4 + 0xe) + 0x20))
                        (*(longlong **)(piVar4 + 0xe),0xffffffff,0);
            }
            EnterCriticalSection(p_Var1);
            if (piVar4[1] == 0) break;
            LeaveCriticalSection(p_Var1);
          }
          LOCK();
          *piVar4 = *piVar4 + 1;
          UNLOCK();
          LeaveCriticalSection(p_Var1);
        }
LAB_1427bea7e:
        while ((*(int *)(param_1 + 0xdc) < *(int *)(*(longlong *)(param_1 + 0x50) + 0x10) &&
               (*(int *)(*(longlong *)(param_1 + 0x278) + 0x84) == 0))) {
          if (*(char *)(param_1 + 0x10c) == '\x01') {
            dVar8 = (double)*(float *)(param_1 + 0x108);
            dVar7 = *(double *)(param_1 + 0x118);
            QueryPerformanceCounter(&local_118);
            dVar35 = ((double)local_118.QuadPart * DAT_14c83f420 + 16777216.0) - dVar7;
            if ((dVar8 < dVar35) && (DAT_14c948b4c != 0)) {
              if (((DAT_14c75ec60 != dVar7) || (NAN(DAT_14c75ec60) || NAN(dVar7))) &&
                 (((double)_DAT_14c75ec58 < dVar35 && ((double)_DAT_14c75ec54 * dVar8 < dVar35)))) {
                DAT_14c75ec60 = dVar7;
              }
            }
            if (dVar8 < dVar35) break;
          }
          if (DAT_14c950c20[2] != 0) break;
          uVar15 = (ulonglong)*(int *)(param_1 + 0xdc);
          *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
          lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8);
          do {
            lVar23 = uVar15 * 0x38;
            uVar33 = *(uint *)(lVar16 + 8 + lVar23);
            uVar15 = (ulonglong)~uVar33;
          } while ((int)uVar33 < 0);
          plVar27 = (longlong *)(lVar16 + lVar23);
          uVar15 = *(ulonglong *)((longlong)plVar27 + 0x14);
          if (DAT_14c87ead8 == '\0') {
            FUN_140024d3a(&DAT_14c87eb00);
            DAT_14c87ead8 = '\x01';
          }
          if ((uVar15 == DAT_14c892e7c) && (lVar16 = *plVar27, lVar16 != 0)) {
            lVar23 = *(longlong *)(param_1 + 0x50);
            local_150 = lVar16;
            FUN_1427f3cbe(*(undefined8 *)(lVar23 + 0x330));
            if ((local_158 != 0) || (local_150 == 0)) {
              local_118.QuadPart = 0;
              uStack_110 = 0;
              local_108 = local_158;
              cVar11 = FUN_145c98d34(0x40);
              if (cVar11 == '\0') {
                if (DAT_14c951858 == 0) {
                  local_118.QuadPart = (LONGLONG)FUN_1449e2820;
                  local_1f0 = FUN_14081d0ea;
                  local_1f8 = FUN_14081d0ea;
                  local_208 = &LAB_1468c5283;
                  local_210 = FUN_142809da0;
                  local_218 = L"Engine";
                  local_220 = 0x400000000;
                  local_228 = (double)CONCAT44(local_228._4_4_,0x10000000);
                  local_230 = CONCAT44(local_230._4_4_,8);
                  local_238 = 0x50;
                  local_200 = &local_118;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                }
                local_230 = local_230 & 0xffffffff00000000;
                local_238 = 0;
                lVar16 = FUN_140be85e0(DAT_14c951858,0);
                if (lVar16 == 0) {
LAB_1427bed58:
                  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
                    uVar33 = (uint)((ulonglong)local_158 >> 0x10);
                    uVar25 = (uint)local_158 & 0xffff;
                    lVar16 = *(longlong *)(param_1 + 0xb0);
                    if (*(longlong *)(param_1 + 0xb0) == 0) {
                      lVar16 = local_190;
                    }
                    iVar12 = *(int *)(lVar16 + (ulonglong)
                                               (*(int *)(param_1 + 0xb8) - 1U &
                                               (int)((ulonglong)local_158 >> 0x20) +
                                               ((uint)local_158 << 0x10 | uVar25) +
                                               (uVar33 << 0x13 | uVar33 & 0xffff) + (uVar25 >> 4)) *
                                               4);
                    if (iVar12 != -1) {
                      do {
                        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar12 * 0x18)
                            == local_158) goto LAB_1427bef72;
                        iVar12 = *(int *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar12 * 0x18 +
                                         0x10);
                      } while (iVar12 != -1);
                    }
                  }
                  FUN_1400021e4(&local_158);
                  iVar12 = (int)uStack_110 + -1;
                  bVar34 = iVar12 != 0;
                  if ((int)uStack_110 == 0) {
                    iVar12 = 0;
                  }
                  if ((int)uStack_110 != 0 && bVar34) {
                    lVar16 = 0;
                    do {
                      if (*(short *)(local_118.QuadPart + lVar16) == 0x2f) {
                        plVar27 = *(longlong **)(*(longlong *)(param_1 + 0x278) + 0x3f0);
                        if (plVar27 != (longlong *)0x0) {
                          local_160 = 0;
                          local_168 = local_158;
                          cVar11 = FUN_1407f0622(&local_168,
                                                 CONCAT71((int7)((ulonglong)lVar16 >> 8),3),0,0);
                          if (cVar11 == '\x01') {
                            LOCK();
                            DAT_14c948734 = DAT_14c948734 + -1;
                            UNLOCK();
                            local_138.QuadPart = 0;
                            uStack_130 = 0;
                            local_218 = (wchar_t *)((ulonglong)local_218 & 0xffffffff00000000);
                            local_228 = (double)((ulonglong)local_228 & 0xffffffff00000000);
                            local_238 = 0;
                            local_220 = 0;
                            local_230 = CONCAT44(local_230._4_4_,0xffffffff);
                            local_11c = (**(code **)(*plVar27 + 0x30))(plVar27,&local_168);
                            local_148 = (longlong *)&local_11c;
                            local_140 = 1;
                            (**(code **)(*plVar27 + 0x60))(plVar27);
                            LOCK();
                            DAT_14c948734 = DAT_14c948734 + 1;
                            UNLOCK();
                            break;
                          }
                        }
                        if (local_150 == local_158) {
                          FUN_1401cb262(&local_178);
                        }
                        else {
                          local_178 = *(undefined8 *)(lVar23 + 0x330);
                          local_170 = *(longlong *)(lVar23 + 0x338);
                          if (local_170 != 0) {
                            LOCK();
                            *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
                            UNLOCK();
                          }
                        }
                        FUN_14687cd66(param_1);
                        break;
                      }
                      lVar16 = lVar16 + 2;
                    } while ((longlong)iVar12 * 2 != lVar16);
                  }
                  if ((code *)local_118.QuadPart != (code *)0x0) {
                    FUN_1400020a8();
                  }
                }
                else {
                  if (DAT_14c951858 == 0) {
                    local_118.QuadPart = (LONGLONG)FUN_1449e2820;
                    local_1f0 = FUN_14081d0ea;
                    local_1f8 = FUN_14081d0ea;
                    local_208 = &LAB_1468c5283;
                    local_210 = FUN_142809da0;
                    local_218 = L"Engine";
                    local_220 = 0x400000000;
                    local_228 = (double)CONCAT44(local_228._4_4_,0x10000000);
                    local_230 = CONCAT44(local_230._4_4_,8);
                    local_238 = 0x50;
                    local_200 = &local_118;
                    FUN_14081cfa3(L"/Script/CoreUObject",L"Package");
                  }
                  if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) <
                       *(int *)(DAT_14c951858 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30))
                  goto LAB_1427bed58;
                  if ((((*(byte *)(lVar16 + 0x28) & 2) == 0) &&
                      ((*(byte *)(lVar16 + 0x2c) & 0x10) == 0)) &&
                     (lVar16 = *(longlong *)(param_1 + 0x278),
                     *(int *)(lVar16 + 0x288) != *(int *)(lVar16 + 0x2b4))) {
                    uVar33 = (uint)((ulonglong)local_158 >> 0x10);
                    uVar25 = (uint)local_158 & 0xffff;
                    lVar23 = lVar16 + 0x2b8;
                    if (*(longlong *)(lVar16 + 0x2c0) != 0) {
                      lVar23 = *(longlong *)(lVar16 + 0x2c0);
                    }
                    iVar12 = *(int *)(lVar23 + (ulonglong)
                                               (*(int *)(lVar16 + 0x2c8) - 1U &
                                               (int)((ulonglong)local_158 >> 0x20) +
                                               ((uint)local_158 << 0x10 | uVar25) +
                                               (uVar33 << 0x13 | uVar33 & 0xffff) + (uVar25 >> 4)) *
                                               4);
                    if (iVar12 != -1) {
                      do {
                        plVar27 = (longlong *)
                                  (*(longlong *)(lVar16 + 0x280) + (longlong)iVar12 * 0x18);
                        if (*plVar27 == local_158) {
                          if ((plVar27 != (longlong *)0x0) && (lVar16 = plVar27[1], lVar16 != 0)) {
                            if ((*(longlong *)(lVar16 + 0x50) == 0) ||
                               ((*(byte *)(*(longlong *)(lVar16 + 0x50) + 0x3e1) & 4) == 0)) {
                              FUN_1427c471e(param_1);
                            }
                            else {
                              LOCK();
                              *(int *)(lVar16 + 0xd8) = *(int *)(lVar16 + 0xd8) + 1;
                              UNLOCK();
                              iVar12 = *(int *)(param_1 + 200);
                              *(uint *)(param_1 + 200) = iVar12 + 1U;
                              if (*(uint *)(param_1 + 0xcc) < iVar12 + 1U) {
                                FUN_1468824fe(local_1c8,iVar12);
                              }
                              *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar12 * 8) =
                                   lVar16;
                              local_f8 = 0;
                              local_f0 = 0;
                              local_118.QuadPart = 0;
                              uStack_110 = 0;
                              local_ec = 0xffffffff00000080;
                              local_e4 = 0;
                              local_d8 = 0;
                              local_d0 = 0;
                              FUN_14687d0ca(param_1);
                              local_d0 = 0;
                              if (local_d8 != 0) {
                                FUN_1400020a8();
                              }
                              FUN_146884948(&local_118);
                            }
                          }
                          break;
                        }
                        iVar12 = (int)plVar27[2];
                      } while (iVar12 != -1);
                    }
                  }
                }
LAB_1427bef72:
                FUN_1468786fc(param_1);
              }
            }
          }
        }
        if (*(int *)(param_1 + 0x78) == *(int *)(param_1 + 0xa4)) {
          iVar12 = (uint)(*(int *)(param_1 + 0xdc) == *(int *)(*(longlong *)(param_1 + 0x50) + 0x10)
                         ) * 2;
        }
        else {
          iVar12 = 1;
          if ((*(char *)(param_1 + 0x10c) == '\x01') && (*(char *)(param_1 + 0x10d) == '\0')) {
            *(undefined1 *)(param_1 + 0x10e) = 1;
          }
        }
        piVar4 = DAT_14c950c20;
        if ((DAT_14c86a9f8 == '\x01') && (*local_1e8 != 2)) {
          if (*local_1e8 == 1) {
            DVar13 = FUN_140ad26c0();
            DVar14 = GetCurrentThreadId();
            if (DVar13 == DVar14) goto LAB_1427bf21c;
          }
          LOCK();
          *piVar4 = *piVar4 + -1;
          UNLOCK();
        }
LAB_1427bf21c:
        if (iVar12 != 2) goto LAB_1427be439;
        bVar10 = *(byte *)(param_1 + 0x110);
      }
      piVar4 = DAT_14c950c20;
      if ((bVar10 & 1) == 0) {
        if ((DAT_14c86a9f8 == '\x01') && (*local_1e8 != 2)) {
          if (*local_1e8 == 1) {
            DVar13 = FUN_140ad26c0();
            DVar14 = GetCurrentThreadId();
            if (DVar13 == DVar14) goto LAB_1427bf2aa;
          }
          p_Var1 = (LPCRITICAL_SECTION)(piVar4 + 4);
          while( true ) {
            if (0 < piVar4[1]) {
              (**(code **)(**(longlong **)(piVar4 + 0xe) + 0x20))();
            }
            EnterCriticalSection(p_Var1);
            if (piVar4[1] == 0) break;
            LeaveCriticalSection(p_Var1);
          }
          LOCK();
          *piVar4 = *piVar4 + 1;
          UNLOCK();
          LeaveCriticalSection(p_Var1);
        }
LAB_1427bf2aa:
        iVar12 = *(int *)(param_1 + 0xe0);
        iVar24 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x10);
        if (iVar12 < iVar24) {
          do {
            if (*(int *)(*(longlong *)(param_1 + 0x278) + 0x84) != 0) {
LAB_1427bf565:
              iVar12 = *(int *)(param_1 + 0xe0);
              break;
            }
            if (*(char *)(param_1 + 0x10c) == '\x01') {
              dVar8 = (double)*(float *)(param_1 + 0x108);
              dVar7 = *(double *)(param_1 + 0x118);
              QueryPerformanceCounter(&local_118);
              dVar35 = ((double)local_118.QuadPart * DAT_14c83f420 + 16777216.0) - dVar7;
              if ((dVar8 < dVar35) && (DAT_14c948b4c != 0)) {
                if (((DAT_14c75ec60 != dVar7) || (NAN(DAT_14c75ec60) || NAN(dVar7))) &&
                   (((double)_DAT_14c75ec58 < dVar35 && ((double)_DAT_14c75ec54 * dVar8 < dVar35))))
                {
                  DAT_14c75ec60 = dVar7;
                }
              }
              if (dVar8 < dVar35) goto LAB_1427bf565;
            }
            iVar12 = *(int *)(param_1 + 0xe0);
            if (DAT_14c950c20[2] != 0) break;
            *(int *)(param_1 + 0xe0) = iVar12 + 1;
            LVar17.QuadPart = FUN_142800b8a(*(undefined8 *)(param_1 + 0x50),iVar12);
            ((LARGE_INTEGER *)(param_1 + 0x120))->QuadPart = (LONGLONG)LVar17;
            *(wchar_t **)(param_1 + 0x128) = L"creating imports for";
            FUN_146878962();
            if ((code *)LVar17.QuadPart != (code *)0x0) {
              if (DAT_14c951858 == 0) {
                local_118.QuadPart = (LONGLONG)FUN_1449e2820;
                local_1f0 = FUN_14081d0ea;
                local_1f8 = FUN_14081d0ea;
                local_208 = &LAB_1468c5283;
                local_210 = FUN_142809da0;
                local_218 = L"Engine";
                local_220 = 0x400000000;
                local_228 = (double)CONCAT44(local_228._4_4_,0x10000000);
                local_230 = CONCAT44(local_230._4_4_,8);
                local_238 = 0x50;
                local_200 = &local_118;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              }
              if ((((*(int *)(DAT_14c951858 + 0x38) <=
                     *(int *)(*(longlong *)(LVar17.QuadPart + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(LVar17.QuadPart + 0x10) + 0x30) +
                     (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) == DAT_14c951858 + 0x30)) &&
                  (*(longlong *)(LVar17.QuadPart + 0x48) != 0)) &&
                 ((lVar16 = *(longlong *)(*(longlong *)(LVar17.QuadPart + 0x48) + 0x20), lVar16 != 0
                  && (*(longlong *)(lVar16 + 0x398) != 0)))) {
                local_118.QuadPart = LVar17.QuadPart;
                if (DAT_14c950c29 == '\x01') {
                  FUN_1456cec3c(LVar17.QuadPart);
                }
                FUN_14688263a(local_1c0,&local_138,&local_118,0);
              }
            }
            iVar12 = *(int *)(param_1 + 0xe0);
          } while (iVar12 < *(int *)(*(longlong *)(param_1 + 0x50) + 0x10));
          iVar24 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x10);
        }
        piVar4 = DAT_14c950c20;
        if ((DAT_14c86a9f8 == '\x01') && (*local_1e8 != 2)) {
          if (*local_1e8 == 1) {
            DVar13 = FUN_140ad26c0();
            DVar14 = GetCurrentThreadId();
            if (DVar13 == DVar14) goto LAB_1427bf59b;
          }
          LOCK();
          *piVar4 = *piVar4 + -1;
          UNLOCK();
        }
LAB_1427bf59b:
        if (iVar12 != iVar24) {
          iVar12 = 0;
          goto LAB_1427be439;
        }
        bVar10 = *(byte *)(param_1 + 0x110);
      }
      piVar4 = DAT_14c950c20;
      if ((bVar10 & 1) == 0) {
        if ((DAT_14c86a9f8 == '\x01') && (*local_1e8 != 2)) {
          if (*local_1e8 == 1) {
            DVar13 = FUN_140ad26c0();
            DVar14 = GetCurrentThreadId();
            if (DVar13 == DVar14) goto LAB_1427bf638;
          }
          p_Var1 = (LPCRITICAL_SECTION)(piVar4 + 4);
          while( true ) {
            if (0 < piVar4[1]) {
              (**(code **)(**(longlong **)(piVar4 + 0xe) + 0x20))();
            }
            EnterCriticalSection(p_Var1);
            if (piVar4[1] == 0) break;
            LeaveCriticalSection(p_Var1);
          }
          LOCK();
          *piVar4 = *piVar4 + 1;
          UNLOCK();
          LeaveCriticalSection(p_Var1);
        }
LAB_1427bf638:
        while ((*(int *)(param_1 + 0xe4) < *(int *)(*(longlong *)(param_1 + 0x50) + 0x20) &&
               (*(int *)(*(longlong *)(param_1 + 0x278) + 0x84) == 0))) {
          if (*(char *)(param_1 + 0x10c) == '\x01') {
            dVar8 = (double)*(float *)(param_1 + 0x108);
            dVar7 = *(double *)(param_1 + 0x118);
            QueryPerformanceCounter(&local_118);
            dVar35 = ((double)local_118.QuadPart * DAT_14c83f420 + 16777216.0) - dVar7;
            if ((dVar8 < dVar35) && (DAT_14c948b4c != 0)) {
              if (((DAT_14c75ec60 != dVar7) || (NAN(DAT_14c75ec60) || NAN(dVar7))) &&
                 (((double)_DAT_14c75ec58 < dVar35 && ((double)_DAT_14c75ec54 * dVar8 < dVar35)))) {
                DAT_14c75ec60 = dVar7;
              }
            }
            if (dVar8 < dVar35) break;
          }
          if (DAT_14c950c20[2] != 0) break;
          plVar27 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x328);
          if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x2e3) == '\x01') {
            if (plVar27 == (longlong *)0x0) {
              plVar27 = (longlong *)0x0;
              goto LAB_1427bf746;
            }
            local_228 = (double)*(float *)(param_1 + 0x108);
            local_230 = *(ulonglong *)(param_1 + 0x118);
            local_238 = CONCAT31(local_238._1_3_,*(undefined1 *)(param_1 + 0x10d));
            cVar11 = FUN_14687d296();
          }
          else {
LAB_1427bf746:
            cVar11 = (**(code **)(*plVar27 + 0x1d8))();
          }
          if (cVar11 == '\0') goto code_r0x0001427bf75b;
          *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
          lVar16 = FUN_1427fcad6(*(undefined8 *)(param_1 + 0x50));
          if (lVar16 != 0) {
            FUN_1427ff290(*(longlong *)(param_1 + 0x50) + 0x240);
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar16);
            }
            iVar12 = *(int *)(param_1 + 0x168);
            uVar33 = iVar12 + 1;
            *(uint *)(param_1 + 0x168) = uVar33;
            if (*(uint *)(param_1 + 0x16c) < uVar33) {
              FUN_140845902(plVar3);
            }
            *(longlong *)(*plVar3 + (longlong)iVar12 * 8) = lVar16;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar16);
            }
          }
          *(longlong *)(param_1 + 0x120) = lVar16;
          *(wchar_t **)(param_1 + 0x128) = L"creating exports for";
          FUN_1468786fc(param_1);
        }
        if (0 < *(int *)(param_1 + 200)) {
          lVar16 = 0;
          do {
            LOCK();
            piVar4 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + lVar16 * 8) + 0xd8);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            lVar16 = lVar16 + 1;
          } while (lVar16 < *(int *)(param_1 + 200));
        }
        *(undefined4 *)(param_1 + 200) = 0;
        if (*(int *)(param_1 + 0xcc) != 0) {
          FUN_146885922(local_1c8);
        }
        bVar34 = false;
        iVar12 = 0;
        if (*(int *)(param_1 + 0xe4) == *(int *)(*(longlong *)(param_1 + 0x50) + 0x20)) {
          *(undefined1 *)(param_1 + 0x59a) = 1;
          iVar12 = 2;
          bVar34 = true;
        }
        goto LAB_1427bf8e5;
      }
      goto LAB_1427bf927;
    }
    goto LAB_1427be439;
  }
  goto LAB_1427be343;
code_r0x0001427bf75b:
  if ((*(char *)(param_1 + 0x10c) == '\x01') && (*(char *)(param_1 + 0x10d) == '\0')) {
    *(undefined1 *)(param_1 + 0x10e) = 1;
  }
  if (*(char *)(param_1 + 0x10e) != '\0') goto LAB_1427bfe54;
  goto LAB_1427bf638;
LAB_1427bfe54:
  bVar34 = false;
  iVar12 = 0;
LAB_1427bf8e5:
  piVar4 = DAT_14c950c20;
  if ((DAT_14c86a9f8 == '\x01') && (*local_1e8 != 2)) {
    if (*local_1e8 == 1) {
      DVar13 = FUN_140ad26c0();
      DVar14 = GetCurrentThreadId();
      if (DVar13 == DVar14) goto LAB_1427bf90e;
    }
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
  }
LAB_1427bf90e:
  if (bVar34) {
    bVar10 = *(byte *)(param_1 + 0x110);
LAB_1427bf927:
    piVar4 = DAT_14c950c20;
    if ((bVar10 & 1) == 0) {
      if ((DAT_14c86a9f8 == '\x01') && (*local_1e8 != 2)) {
        if (*local_1e8 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          if (DVar13 == DVar14) goto LAB_1427bf99d;
        }
        p_Var1 = (LPCRITICAL_SECTION)(piVar4 + 4);
        while( true ) {
          if (0 < piVar4[1]) {
            (**(code **)(**(longlong **)(piVar4 + 0xe) + 0x20))
                      (*(longlong **)(piVar4 + 0xe),0xffffffff);
          }
          EnterCriticalSection(p_Var1);
          if (piVar4[1] == 0) break;
          LeaveCriticalSection(p_Var1);
        }
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
        LeaveCriticalSection(p_Var1);
      }
LAB_1427bf99d:
      DVar13 = DAT_14c75ec34;
      if (DAT_14c75ec34 == 0xffffffff) {
        DVar13 = TlsAlloc();
        DVar14 = 0xffffffff;
        LOCK();
        bVar34 = DAT_14c75ec34 != 0xffffffff;
        DVar9 = DVar13;
        if (bVar34) {
          DVar14 = DAT_14c75ec34;
          DVar9 = DAT_14c75ec34;
        }
        DAT_14c75ec34 = DVar9;
        UNLOCK();
        if (bVar34) {
          TlsFree(DVar13);
          DVar13 = DVar14;
        }
      }
      pvVar18 = TlsGetValue(DVar13);
      if (pvVar18 == (LPVOID)0x0) {
        pvVar18 = (LPVOID)FUN_14001cc68(0x60,0x10);
        FUN_141073f92(pvVar18);
        FUN_140fddf04(pvVar18);
        TlsSetValue(DVar13,pvVar18);
      }
      lVar23 = *(longlong *)((longlong)pvVar18 + 0x58);
      lVar16 = lVar23 + 0x10;
      FUN_14687d392(plVar3,lVar16);
      *(undefined4 *)(lVar23 + 0x18) = 0;
      if (*(int *)(lVar23 + 0x1c) < 0) {
        FUN_14079e7a6(lVar16,0);
      }
      while ((local_1d8 = lVar16, *(int *)(param_1 + 0xe8) < *(int *)(param_1 + 0x168) &&
             (*(int *)(*(longlong *)(param_1 + 0x278) + 0x84) == 0))) {
        if (*(char *)(param_1 + 0x10c) == '\x01') {
          dVar8 = (double)*(float *)(param_1 + 0x108);
          dVar7 = *(double *)(param_1 + 0x118);
          QueryPerformanceCounter(&local_118);
          dVar35 = ((double)local_118.QuadPart * DAT_14c83f420 + 16777216.0) - dVar7;
          if ((dVar8 < dVar35) && (DAT_14c948b4c != 0)) {
            if (((DAT_14c75ec60 != dVar7) || (NAN(DAT_14c75ec60) || NAN(dVar7))) &&
               (((double)_DAT_14c75ec58 < dVar35 && ((double)_DAT_14c75ec54 * dVar8 < dVar35)))) {
              DAT_14c75ec60 = dVar7;
            }
          }
          if (dVar8 < dVar35) break;
        }
        if (DAT_14c950c20[2] != 0) break;
        iVar12 = *(int *)(param_1 + 0xe8);
        *(int *)(param_1 + 0xe8) = iVar12 + 1;
        lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar12 * 8);
        lVar16 = local_1d8;
        if (lVar22 != 0) {
          iVar12 = *(int *)(lVar22 + 0xc);
          AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
          iVar24 = iVar12 + 0xffff;
          if (-1 < iVar12) {
            iVar24 = iVar12;
          }
          if ((iVar24 >> 0x10 < DAT_14c964390) &&
             (lVar16 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar24 >> 0x10) * 0x10),
             lVar16 != 0)) {
            lVar20 = *(longlong *)(lVar16 + (longlong)(iVar12 % 0x10000) * 0x10);
            ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
            lVar16 = local_1d8;
            if (lVar20 != 0) {
              iVar12 = *(int *)(lVar22 + 0xc);
              AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
              iVar24 = iVar12 + 0xffff;
              if (-1 < iVar12) {
                iVar24 = iVar12;
              }
              if ((iVar24 >> 0x10 < DAT_14c964390) &&
                 (lVar16 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar24 >> 0x10) * 0x10),
                 lVar16 != 0)) {
                lVar16 = *(longlong *)(lVar16 + (longlong)(iVar12 % 0x10000) * 0x10);
              }
              else {
                lVar16 = 0;
              }
              ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
              FUN_1427ff290(lVar16 + 0x240,lVar22);
              *(longlong *)(param_1 + 0x120) = lVar22;
              *(wchar_t **)(param_1 + 0x128) = L"preloading";
              lVar16 = local_1d8;
            }
          }
          else {
            ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
            lVar16 = local_1d8;
          }
        }
      }
      FUN_14687d392();
      *(undefined4 *)(lVar23 + 0x18) = 0;
      if (*(int *)(lVar23 + 0x1c) < 0) {
        FUN_14079e7a6();
      }
      piVar4 = DAT_14c950c20;
      iVar12 = *(int *)(param_1 + 0xe8);
      iVar24 = *(int *)(param_1 + 0x168);
      if ((DAT_14c86a9f8 == '\x01') && (*local_1e8 != 2)) {
        if (*local_1e8 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          if (DVar13 == DVar14) goto LAB_1427bfc7c;
        }
        LOCK();
        *piVar4 = *piVar4 + -1;
        UNLOCK();
      }
LAB_1427bfc7c:
      if (iVar12 != iVar24) {
        iVar12 = 0;
        goto LAB_1427be439;
      }
      bVar10 = *(byte *)(param_1 + 0x110);
    }
    if ((bVar10 & 1) == 0) {
      FUN_14687a8b6();
    }
    iVar12 = *(int *)(param_1 + 0x2b0);
    if (iVar12 == 0) {
      uVar32 = 1;
      uVar15 = 0;
      iVar24 = 0;
      iVar26 = 0;
    }
    else {
      puVar28 = *(uint **)(param_1 + 0x2a8);
      if (*(uint **)(param_1 + 0x2a8) == (uint *)0x0) {
        puVar28 = (uint *)(param_1 + 0x298);
      }
      uVar33 = *puVar28;
      if (uVar33 == 0) {
        iVar24 = iVar12 + 0x1e;
        if (-1 < iVar12 + -1) {
          iVar24 = iVar12 + -1;
        }
        uVar15 = 0;
        uVar30 = (ulonglong)(uint)(iVar24 >> 5);
        if (iVar24 >> 5 < 1) {
          uVar30 = uVar15;
        }
        iVar24 = 0;
        do {
          if (uVar30 == uVar15) goto LAB_1427be343;
          iVar24 = iVar24 + 0x20;
          uVar33 = puVar28[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar33 == 0);
      }
      else {
        uVar15 = 0;
        iVar24 = 0;
      }
      uVar32 = (ulonglong)(-uVar33 & uVar33);
      uVar30 = uVar32 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar26 = (iVar24 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if (iVar12 <= iVar26) {
        iVar26 = iVar12;
      }
    }
    if (iVar26 != iVar12) {
      iVar29 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar29 = iVar12 + -1;
      }
      iVar29 = iVar29 >> 5;
      uVar33 = 0xffffffff;
      do {
        lVar16 = *(longlong *)(*local_1c0 + (longlong)iVar26 * 0x10);
        if ((((lVar16 != 0) && (lVar16 = *(longlong *)(lVar16 + 0x48), lVar16 != 0)) &&
            (lVar16 = *(longlong *)(lVar16 + 0x20), lVar16 != 0)) &&
           ((lVar16 = *(longlong *)(lVar16 + 0x398), lVar16 != 0 &&
            (*(char *)(lVar16 + 0x59a) != '\x01')))) {
          iVar12 = 1;
          goto LAB_1427bfe70;
        }
        uVar33 = uVar33 & ~(uint)uVar32;
        puVar28 = *(uint **)(param_1 + 0x2a8);
        if (*(uint **)(param_1 + 0x2a8) == (uint *)0x0) {
          puVar28 = (uint *)(param_1 + 0x298);
        }
        iVar26 = (int)uVar15;
        lVar16 = (longlong)iVar26;
        uVar25 = puVar28[lVar16] & uVar33;
        if (uVar25 == 0) {
          iVar31 = iVar29;
          if (iVar29 < iVar26) {
            iVar31 = iVar26;
          }
          if (iVar29 <= iVar26) break;
          lVar23 = 0;
          while( true ) {
            iVar24 = iVar24 + 0x20;
            uVar25 = puVar28[lVar16 + lVar23 + 1];
            if (uVar25 != 0) break;
            lVar23 = lVar23 + 1;
            if (iVar31 - lVar16 == lVar23) goto LAB_1427be343;
          }
          uVar15 = (ulonglong)(iVar26 + (int)lVar23 + 1);
          uVar33 = 0xffffffff;
        }
        uVar32 = (ulonglong)(-uVar25 & uVar25);
        uVar30 = uVar32 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar30 != 0) {
          for (; uVar30 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar26 = (iVar24 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      } while (iVar26 < iVar12);
    }
LAB_1427be343:
    bVar10 = *(byte *)(param_1 + 0x10f);
    if ((bVar10 == 0) && (*(char *)(param_1 + 0x110) == '\0')) {
      iVar12 = 0;
      if (*(int *)(*(longlong *)(param_1 + 0x278) + 0x84) == 0) {
        if (*(char *)(param_1 + 0x10c) == '\x01') {
          dVar8 = (double)*(float *)(param_1 + 0x108);
          dVar7 = *(double *)(param_1 + 0x118);
          QueryPerformanceCounter(&local_118);
          dVar35 = ((double)local_118.QuadPart * DAT_14c83f420 + 16777216.0) - dVar7;
          if ((dVar8 < dVar35) && (DAT_14c948b4c != 0)) {
            if (((DAT_14c75ec60 != dVar7) || (NAN(DAT_14c75ec60) || NAN(dVar7))) &&
               (((double)_DAT_14c75ec58 < dVar35 && ((double)_DAT_14c75ec54 * dVar8 < dVar35)))) {
              DAT_14c75ec60 = dVar7;
            }
          }
          if (dVar8 < dVar35) goto LAB_1427bfe70;
        }
        if (DAT_14c950c20[2] == 0) {
          *(wchar_t **)(param_1 + 0x128) = L"ExternalReadDependencies";
          fVar5 = *(float *)(param_1 + 0x108);
          QueryPerformanceCounter(&local_118);
          iVar12 = *(int *)(param_1 + 0xf0);
          if (iVar12 < *(int *)(param_1 + 0x168)) {
            dVar35 = (double)fVar5 -
                     (((double)local_118.QuadPart * DAT_14c83f420 + 16777216.0) -
                     *(double *)(param_1 + 0x118));
            dVar7 = 0.0010100000072270632;
            if (0.0010100000072270632 <= dVar35) {
              dVar7 = dVar35;
            }
            lVar16 = 0;
            do {
              lVar23 = *(longlong *)(*plVar3 + (longlong)iVar12 * 8);
              if (lVar23 != 0) {
                iVar12 = *(int *)(lVar23 + 0xc);
                AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
                iVar24 = iVar12 + 0xffff;
                if (-1 < iVar12) {
                  iVar24 = iVar12;
                }
                if (iVar24 >> 0x10 < DAT_14c964390) {
                  lVar23 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar24 >> 0x10) * 0x10);
                  if (lVar23 == 0) {
                    lVar23 = 0;
                  }
                  else {
                    lVar23 = *(longlong *)(lVar23 + (longlong)(iVar12 % 0x10000) * 0x10);
                  }
                }
                else {
                  lVar23 = 0;
                }
                ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
                if (lVar23 != lVar16 && lVar23 != 0) {
                  dVar35 = dVar7;
                  if (*(char *)(param_1 + 0x10c) == '\0') {
                    dVar35 = 0.0;
                  }
                  cVar11 = FUN_1468b83aa(lVar23,dVar35);
                  iVar12 = 0;
                  if (cVar11 == '\0') goto LAB_1427bfe70;
                  lVar16 = lVar23;
                  if (*(char *)(param_1 + 0x10c) == '\x01') {
                    fVar5 = *(float *)(param_1 + 0x108);
                    QueryPerformanceCounter(&local_118);
                    dVar7 = (double)fVar5 -
                            (((double)local_118.QuadPart * DAT_14c83f420 + 16777216.0) -
                            *(double *)(param_1 + 0x118));
                    if (dVar7 <= 0.0) goto LAB_1427bfe70;
                  }
                }
              }
              iVar12 = *(int *)(param_1 + 0xf0) + 1;
              *(int *)(param_1 + 0xf0) = iVar12;
            } while (iVar12 < *(int *)(param_1 + 0x168));
          }
          bVar10 = *(byte *)(param_1 + 0x10f);
          goto LAB_1427be35a;
        }
      }
      goto LAB_1427bfe70;
    }
LAB_1427be35a:
    piVar4 = DAT_14c950c20;
    if (((bVar10 & 1) == 0) && (*(char *)(param_1 + 0x110) == '\0')) {
      if ((DAT_14c86a9f8 == '\x01') && (*local_1e8 != 2)) {
        if (*local_1e8 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          if (DVar13 == DVar14) goto LAB_1427be74d;
        }
        p_Var1 = (LPCRITICAL_SECTION)(piVar4 + 4);
        while( true ) {
          if (0 < piVar4[1]) {
            (**(code **)(**(longlong **)(piVar4 + 0xe) + 0x20))
                      (*(longlong **)(piVar4 + 0xe),0xffffffff);
          }
          EnterCriticalSection(p_Var1);
          if (piVar4[1] == 0) break;
          LeaveCriticalSection(p_Var1);
        }
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
        LeaveCriticalSection(p_Var1);
      }
LAB_1427be74d:
      DVar13 = DAT_14c75ec34;
      if (DAT_14c75ec34 == 0xffffffff) {
        DVar13 = TlsAlloc();
        DVar14 = 0xffffffff;
        LOCK();
        bVar34 = DAT_14c75ec34 != 0xffffffff;
        DVar9 = DVar13;
        if (bVar34) {
          DVar14 = DAT_14c75ec34;
          DVar9 = DAT_14c75ec34;
        }
        DAT_14c75ec34 = DVar9;
        UNLOCK();
        if (bVar34) {
          TlsFree(DVar13);
          DVar13 = DVar14;
        }
      }
      local_1e0 = param_4;
      pvVar18 = TlsGetValue(DVar13);
      if (pvVar18 == (LPVOID)0x0) {
        pvVar18 = (LPVOID)FUN_14001cc68(0x60,0x10);
        FUN_141073f92(pvVar18);
        FUN_140fddf04(pvVar18);
        TlsSetValue(DVar13,pvVar18);
      }
      uVar6 = *(undefined1 *)((longlong)pvVar18 + 0x20);
      *(undefined1 *)((longlong)pvVar18 + 0x20) = 1;
      DVar13 = DAT_14c75ec34;
      if (DAT_14c75ec34 == 0xffffffff) {
        DVar13 = TlsAlloc();
        DVar14 = 0xffffffff;
        LOCK();
        bVar34 = DAT_14c75ec34 != 0xffffffff;
        DVar9 = DVar13;
        if (bVar34) {
          DVar14 = DAT_14c75ec34;
          DVar9 = DAT_14c75ec34;
        }
        DAT_14c75ec34 = DVar9;
        UNLOCK();
        if (bVar34) {
          TlsFree(DVar13);
          DVar13 = DVar14;
        }
      }
      lpTlsValue = TlsGetValue(DVar13);
      if (lpTlsValue == (LPVOID)0x0) {
        lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
        FUN_141073f92(lpTlsValue);
        FUN_140fddf04(lpTlsValue);
        TlsSetValue(DVar13,lpTlsValue);
      }
      lVar16 = *(longlong *)((longlong)lpTlsValue + 0x58);
      if (*(int *)(lVar16 + 0x18) == 0) {
        if (DAT_14c872ba8 == '\x01') {
          *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x168);
        }
        local_1d0 = lVar16 + 0x10;
        lVar23 = FUN_14163927a();
        local_1d8 = CONCAT71(local_1d8._1_7_,*(undefined1 *)(lVar23 + 1));
        local_b8 = '\0';
        if ((DAT_14c86a9f8 == '\x01') && (*local_1e8 != 2)) {
          if (*local_1e8 == 1) {
            DVar13 = FUN_140ad26c0();
            DVar14 = GetCurrentThreadId();
            if (DVar13 == DVar14) goto LAB_1427c05d4;
          }
        }
        else {
LAB_1427c05d4:
          local_138.QuadPart = 0x149e654c2;
          uStack_130._0_4_ = 0x12;
          FUN_1446e940c(&local_178,&local_138);
          local_138.QuadPart = 0x149e65018;
          uStack_130._0_4_ = 0xc;
          FUN_1446e940c(&local_168,&local_138);
          local_138.QuadPart = 0x149e65494;
          uStack_130 = CONCAT44(uStack_130._4_4_,0x16);
          FUN_140208c1e(&local_148,&local_168,&local_178);
          local_138.s.LowPart = 0x3f800000;
          FUN_14687d3f2(&local_118,&local_138);
          if (local_148 != (longlong *)0x0) {
            (**(code **)(*local_148 + 0x10))();
          }
        }
        while( true ) {
          do {
            if (((*(int *)(param_1 + 0x168) <= *(int *)(param_1 + 0xf4)) ||
                (*(int *)(param_1 + 0xe8) <= *(int *)(param_1 + 0xf4))) ||
               (*(int *)(*(longlong *)(param_1 + 0x278) + 0x84) != 0)) goto LAB_1427bf514;
            if (*(char *)(param_1 + 0x10c) == '\x01') {
              dVar8 = (double)*(float *)(param_1 + 0x108);
              dVar7 = *(double *)(param_1 + 0x118);
              QueryPerformanceCounter(&local_138);
              dVar35 = ((double)local_138.QuadPart * DAT_14c83f420 + 16777216.0) - dVar7;
              if ((dVar8 < dVar35) && (DAT_14c948b4c != 0)) {
                if (((DAT_14c75ec60 != dVar7) || (NAN(DAT_14c75ec60) || NAN(dVar7))) &&
                   (((double)_DAT_14c75ec58 < dVar35 && ((double)_DAT_14c75ec54 * dVar8 < dVar35))))
                {
                  DAT_14c75ec60 = dVar7;
                }
              }
              if (dVar8 < dVar35) goto LAB_1427bf514;
            }
            if (DAT_14c950c20[2] != 0) goto LAB_1427bf514;
            iVar12 = *(int *)(param_1 + 0xf4);
            *(int *)(param_1 + 0xf4) = iVar12 + 1;
            plVar27 = *(longlong **)(*(longlong *)(param_1 + 0x160) + (longlong)iVar12 * 8);
          } while (plVar27 == (longlong *)0x0);
          cVar11 = (**(code **)(*plVar27 + 0xa0))(plVar27);
          if (cVar11 == '\0') break;
          if (((char)local_1d8 == '\0') || (cVar11 = FUN_146885fa1(plVar27), cVar11 == '\0')) {
            iVar12 = *(int *)(param_1 + 0x148);
            *(uint *)(param_1 + 0x148) = iVar12 + 1U;
            if (*(uint *)(param_1 + 0x14c) < iVar12 + 1U) {
              FUN_1447f76d2(local_1b8,iVar12);
            }
            *(longlong **)(*local_1b8 + (longlong)iVar12 * 8) = plVar27;
          }
          else {
            *(longlong **)((longlong)pvVar18 + 0x38) = plVar27;
            FUN_1400337aa(plVar27);
            lVar23 = local_1d0;
            *(undefined8 *)((longlong)pvVar18 + 0x38) = 0;
            *(longlong **)(param_1 + 0x120) = plVar27;
            *(wchar_t **)(param_1 + 0x128) = L"postloading_async";
            if (*(int *)(lVar16 + 0x18) != 0) {
              FUN_14687d392(plVar3);
              *(undefined4 *)(lVar16 + 0x18) = 0;
              if (-1 < *(int *)(lVar16 + 0x1c)) goto LAB_1427c0307;
              iVar12 = 0;
              FUN_14079e7a6(lVar23);
              goto LAB_1427c030a;
            }
          }
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(plVar27);
          }
          iVar12 = *(int *)(param_1 + 0x158);
          *(uint *)(param_1 + 0x158) = iVar12 + 1U;
          if (*(uint *)(param_1 + 0x15c) < iVar12 + 1U) {
            FUN_140845902(local_1b0,iVar12);
          }
          *(longlong **)(*local_1b0 + (longlong)iVar12 * 8) = plVar27;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(plVar27);
          }
          FUN_146878962(param_1,plVar27);
          if (local_b8 == '\x01') {
            FUN_14681a798(&local_118);
          }
        }
        *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + -1;
LAB_1427bf514:
        lVar23 = local_1d0;
        FUN_14687d392(plVar3);
        *(undefined4 *)(lVar16 + 0x18) = 0;
        if (*(int *)(lVar16 + 0x1c) < 0) {
          FUN_14079e7a6(lVar23);
        }
        if (*(int *)(param_1 + 0xe8) == *(int *)(param_1 + 0x168)) {
          iVar12 = (uint)(*(int *)(param_1 + 0xf4) == *(int *)(param_1 + 0xe8)) * 2;
        }
        else {
LAB_1427c0307:
          iVar12 = 0;
        }
LAB_1427c030a:
        FUN_146885952(&local_118);
      }
      else {
        FUN_14687d392(plVar3);
        iVar12 = 0;
        *(undefined4 *)(lVar16 + 0x18) = 0;
        if (*(int *)(lVar16 + 0x1c) < 0) {
          iVar12 = 0;
          FUN_14079e7a6(lVar16 + 0x10);
        }
      }
      *(undefined1 *)((longlong)pvVar18 + 0x20) = uVar6;
      piVar4 = DAT_14c950c20;
      if ((DAT_14c86a9f8 == '\x01') && (*local_1e8 != 2)) {
        if (*local_1e8 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          if (DVar13 == DVar14) goto LAB_1427c0345;
        }
        LOCK();
        *piVar4 = *piVar4 + -1;
        UNLOCK();
      }
LAB_1427c0345:
      FUN_146878186(param_1);
      param_4 = local_1e0;
      if (iVar12 == 2) goto LAB_1427bfe85;
      goto LAB_1427bfe78;
    }
    FUN_146878186(param_1);
  }
  else {
LAB_1427be439:
    if (*(char *)(param_1 + 0x10f) != '\0') {
      if (*(char *)(param_1 + 0x110) == '\0') {
        FUN_14687a8b6(param_1);
      }
      if (iVar12 == 2) goto LAB_1427be343;
    }
LAB_1427bfe70:
    FUN_146878186(param_1);
LAB_1427bfe78:
    if (*(char *)(param_1 + 0x10f) != '\x01') goto LAB_1427bff8e;
  }
LAB_1427bfe85:
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(wchar_t **)(param_1 + 0x128) = L"finishing all objects";
  DVar13 = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    DVar13 = TlsAlloc();
    DVar14 = 0xffffffff;
    LOCK();
    bVar34 = DAT_14c75ec34 != 0xffffffff;
    DVar9 = DVar13;
    if (bVar34) {
      DVar14 = DAT_14c75ec34;
      DVar9 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar9;
    UNLOCK();
    if (bVar34) {
      TlsFree(DVar13);
      DVar13 = DVar14;
    }
  }
  pvVar18 = TlsGetValue(DVar13);
  if (pvVar18 == (LPVOID)0x0) {
    pvVar18 = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(pvVar18);
    FUN_140fddf04(pvVar18);
    TlsSetValue(DVar13,pvVar18);
  }
  lVar16 = *(longlong *)((longlong)pvVar18 + 0x58);
  if (*(char *)(param_1 + 0x10f) == '\0') {
    *(undefined4 *)(lVar16 + 0x18) = 0;
    if (*(int *)(lVar16 + 0x1c) < 0) {
      FUN_14079e7a6(lVar16 + 0x10);
    }
  }
  else {
    local_1e0 = param_4;
    FUN_14687d392(plVar3);
    lVar23 = (longlong)*(int *)(param_1 + 0x168);
    if (0 < (longlong)*(int *)(param_1 + 0x168)) {
LAB_1427c0083:
      lVar22 = *(longlong *)(*plVar3 + -8 + lVar23 * 8);
      lVar20 = lVar22;
      if (lVar22 != 0) {
LAB_1427c009e:
        lVar21 = lVar20;
        lVar20 = lVar21;
        if (*(longlong *)(lVar21 + 0x20) != 0) goto code_r0x0001427c00ad;
        goto LAB_1427c00bf;
      }
      goto LAB_1427c0139;
    }
LAB_1427c0143:
    param_4 = local_1e0;
    lVar23 = *(longlong *)(param_1 + 0x58);
    if (lVar23 != 0) {
      uVar33 = *(uint *)(lVar23 + 0xc);
      if ((int)uVar33 < DAT_14c9647dc) {
        lVar22 = (ulonglong)((uVar33 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8);
      }
      else {
        lVar22 = 0;
      }
      if ((*(uint *)(lVar22 + 8) >> 0x1e & 1) == 0) {
        if (*(char *)(param_1 + 0x112) == '\x01') {
          FUN_14472eae2(lVar23,0x3400);
          lVar23 = *(longlong *)(param_1 + 0x58);
          FUN_144757f48(lVar23,0x40000000);
          uVar33 = *(uint *)(lVar23 + 0xc);
          if ((int)uVar33 < DAT_14c9647dc) {
            lVar23 = (ulonglong)((uVar33 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8);
          }
          else {
            lVar23 = 0;
          }
          do {
            uVar33 = *(uint *)(lVar23 + 8);
            if ((uVar33 >> 0x15 & 1) != 0) break;
            LOCK();
            bVar34 = uVar33 == *(uint *)(lVar23 + 8);
            if (bVar34) {
              *(uint *)(lVar23 + 8) = uVar33 | 0x200000;
            }
            UNLOCK();
          } while (!bVar34);
          plVar27 = *(longlong **)(param_1 + 0x58);
          if (DAT_14c951858 == 0) {
            local_118.QuadPart = (LONGLONG)FUN_1449e2820;
            local_1f0 = FUN_14081d0ea;
            local_1f8 = FUN_14081d0ea;
            local_200 = &local_118;
            local_208 = &LAB_1468c5283;
            local_210 = FUN_142809da0;
            local_218 = L"Engine";
            local_220 = 0x400000000;
            local_228 = (double)CONCAT44(local_228._4_4_,0x10000000);
            local_230 = CONCAT44(local_230._4_4_,8);
            local_238 = 0x50;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          }
          local_238 = 0;
          FUN_140af9fb2(&local_138,DAT_14c951640,DAT_14c951858,0);
          FUN_1400021e4(&local_138,&local_118);
          (**(code **)(*plVar27 + 0x170))(plVar27);
          if ((code *)local_118.QuadPart != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        lVar23 = *(longlong *)(param_1 + 0x50);
        if (lVar23 != 0) {
          if (*(longlong **)(lVar23 + 0x328) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar23 + 0x328) + 0x1e0))();
            lVar23 = *(longlong *)(param_1 + 0x50);
          }
          if (*(longlong *)(lVar23 + 0x398) == param_1) {
            *(undefined8 *)(lVar23 + 0x398) = 0;
          }
          *(undefined8 *)(param_1 + 0x50) = 0;
        }
      }
    }
  }
  uVar19 = FUN_1402a3fee();
  FUN_1468bcaee(uVar19);
  if ((longlong *)(lVar16 + 0x20) != local_198) {
    if (*local_198 != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(lVar16 + 0x20);
    *(undefined8 *)(lVar16 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(lVar16 + 0x28);
    *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(lVar16 + 0x2c);
    *(undefined8 *)(lVar16 + 0x28) = 0;
  }
  if ((*(longlong *)(param_1 + 0x50) != 0) &&
     (plVar27 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x328), plVar27 != (longlong *)0x0))
  {
    (**(code **)(*plVar27 + 0x1e0))();
  }
  iVar12 = 2;
  if (DAT_14c872ba8 == '\x01') {
    FUN_14687a8b6(param_1);
  }
LAB_1427bff8e:
  if (*(int *)(*(longlong *)(param_1 + 0x278) + 0x84) != 0) goto LAB_1427c0782;
  if (*(char *)(param_1 + 0x10c) == '\x01') {
    dVar8 = (double)*(float *)(param_1 + 0x108);
    dVar7 = *(double *)(param_1 + 0x118);
    QueryPerformanceCounter(&local_118);
    dVar35 = ((double)local_118.QuadPart * DAT_14c83f420 + 16777216.0) - dVar7;
    if ((dVar8 < dVar35) && (DAT_14c948b4c != 0)) {
      if (((DAT_14c75ec60 != dVar7) || (NAN(DAT_14c75ec60) || NAN(dVar7))) &&
         (((double)_DAT_14c75ec58 < dVar35 && ((double)_DAT_14c75ec54 * dVar8 < dVar35)))) {
        DAT_14c75ec60 = dVar7;
      }
    }
    if (dVar8 < dVar35) goto LAB_1427c0782;
  }
  if (DAT_14c950c20[2] != 0 || iVar12 != 0) goto LAB_1427c0782;
  goto LAB_1427be335;
code_r0x0001427c00ad:
  lVar20 = *(longlong *)(lVar21 + 0x20);
  if ((*(uint *)(lVar21 + 8) >> 0x1c & 1) == 0) goto LAB_1427c009e;
  lVar20 = FUN_142840154(lVar21);
LAB_1427c00bf:
  if (lVar20 == 0) {
    lVar20 = *(longlong *)(lVar21 + 0x20);
    goto LAB_1427c009e;
  }
  if (*(longlong *)(lVar20 + 0x18) == *(longlong *)(param_1 + 0x14)) {
    FUN_14472eae2(lVar22,0x3400);
    FUN_144757f48();
    uVar33 = *(uint *)(lVar22 + 0xc);
    if ((int)uVar33 < DAT_14c9647dc) {
      lVar22 = (ulonglong)((uVar33 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8);
    }
    else {
      lVar22 = 0;
    }
    do {
      uVar33 = *(uint *)(lVar22 + 8);
      if ((uVar33 >> 0x15 & 1) != 0) break;
      LOCK();
      bVar34 = uVar33 == *(uint *)(lVar22 + 8);
      if (bVar34) {
        *(uint *)(lVar22 + 8) = uVar33 | 0x200000;
      }
      UNLOCK();
    } while (!bVar34);
    *(undefined8 *)(*plVar3 + (lVar23 + -1) * 8) = 0;
  }
LAB_1427c0139:
  bVar34 = lVar23 < 2;
  lVar23 = lVar23 + -1;
  if (bVar34) goto LAB_1427c0143;
  goto LAB_1427c0083;
LAB_1427c0782:
  pvVar18 = local_1a0;
  if (iVar12 == 2 && *(longlong *)(param_1 + 0x58) != 0) {
    pbVar2 = (byte *)(*(longlong *)(param_1 + 0x58) + 0x28);
    *pbVar2 = *pbVar2 | 2;
    *(undefined1 *)(param_1 + 0x110) = 1;
    *local_1a8 = 0;
    local_1a8[1] = 0;
  }
  else {
    pbVar2 = (byte *)(param_1 + 0x110);
    *pbVar2 = *pbVar2 | iVar12 == 2;
    bVar10 = *pbVar2;
    *local_1a8 = 0;
    local_1a8[1] = 0;
    if (bVar10 == 0) goto LAB_1427c07f3;
  }
  if (DAT_14c872ba8 == '\x01') {
    *(undefined1 *)(param_1 + 0x2d8) = 10;
  }
LAB_1427c07f3:
  fVar5 = *param_4;
  QueryPerformanceCounter(&local_118);
  dVar7 = (double)fVar5 -
          (((double)local_118.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(param_1 + 0x118))
  ;
  dVar35 = 0.0;
  if (0.0 <= dVar7) {
    dVar35 = dVar7;
  }
  *param_4 = (float)dVar35;
  LOCK();
  *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) + -1;
  UNLOCK();
  *(undefined8 *)((longlong)pvVar18 + 0x40) = local_180;
  *(undefined8 *)((longlong)pvVar18 + 0x48) = local_188;
  if ((local_b0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar12;
}



// FUNCTION 1427c0924 FUN_1427c0924 body=107 status=ok
// SIG undefined FUN_1427c0924(void)

void FUN_1427c0924(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x398) == param_1) {
      *(undefined8 *)(lVar3 + 0x398) = 0;
      lVar3 = *(longlong *)(param_1 + 0x50);
    }
    plVar1 = *(longlong **)(lVar3 + 0x328);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x1e0))(plVar1);
      lVar3 = *(longlong *)(param_1 + 0x50);
    }
    FUN_1427fa082(lVar3);
    uVar2 = FUN_1402a3fee();
    FUN_1468bc878(uVar2,*(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1427c0990 FUN_1427c0990 body=7576 status=ok
// SIG undefined FUN_1427c0990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427c0990(longlong param_1,char param_2,undefined1 param_3,double param_4,longlong *param_5
                  )

{
  byte *pbVar1;
  int *piVar2;
  LPCRITICAL_SECTION p_Var3;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  LARGE_INTEGER LVar10;
  DWORD DVar11;
  char cVar12;
  char cVar13;
  byte bVar14;
  byte bVar15;
  int iVar16;
  DWORD DVar17;
  DWORD DVar18;
  int iVar19;
  LPVOID pvVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  undefined1 *puVar23;
  longlong lVar24;
  void *_Src;
  LARGE_INTEGER LVar25;
  uint uVar26;
  longlong lVar27;
  longlong *plVar28;
  int iVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  bool bVar33;
  undefined1 auStack_268 [32];
  byte *local_248;
  longlong *local_240;
  char local_22c;
  byte local_22b;
  undefined1 local_22a;
  undefined1 local_229;
  longlong local_228;
  longlong local_220;
  undefined4 local_218;
  uint local_214;
  longlong local_210;
  longlong *local_208;
  LPVOID local_200;
  LPCRITICAL_SECTION local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  void *local_1e0;
  longlong *local_1d8;
  longlong local_1d0;
  LPCRITICAL_SECTION local_1c8;
  uint *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  byte local_199;
  undefined8 local_198;
  undefined4 local_190;
  LARGE_INTEGER local_188;
  undefined8 uStack_180;
  LARGE_INTEGER local_178;
  ulonglong uStack_170;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  longlong local_138;
  undefined4 local_130;
  LARGE_INTEGER local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  undefined1 local_d0 [32];
  undefined1 *local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if (*(int *)(param_1 + 0x84) != 0) goto LAB_1427c25f3;
  local_22c = param_2;
  local_22a = param_3;
  QueryPerformanceCounter(&local_128);
  bVar14 = DAT_14c948774;
  dVar7 = (double)local_128.QuadPart * DAT_14c83f420;
  local_199 = 0;
  QueryPerformanceCounter(&local_128);
  dVar8 = (double)local_128.QuadPart * DAT_14c83f420;
  p_Var3 = (LPCRITICAL_SECTION)(param_1 + 0xe8);
  EnterCriticalSection(p_Var3);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x180);
  EnterCriticalSection(lpCriticalSection);
  uVar26 = *(uint *)(param_1 + 0x90);
  if ((longlong)(int)uVar26 != 0) {
    iVar19 = *(int *)(param_1 + 0x118);
    *(uint *)(param_1 + 0x118) = iVar19 + uVar26;
    if ((uint)(*(int *)(param_1 + 0x11c) - iVar19) < uVar26) {
      FUN_1468824fe(param_1 + 0x110,iVar19);
    }
    memcpy((void *)((longlong)iVar19 * 8 + *(longlong *)(param_1 + 0x110)),
           *(void **)(param_1 + 0x88),(longlong)(int)uVar26 << 3);
    *(undefined4 *)(param_1 + 0x90) = 0;
    if (*(int *)(param_1 + 0x94) < 0) {
      FUN_146885922(param_1 + 0x88);
    }
  }
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
    FUN_14687a680(param_1 + 0x130);
    FUN_146884660(param_1 + 0x98);
  }
  dVar8 = dVar8 + 16777216.0;
  LeaveCriticalSection(lpCriticalSection);
  local_1f8 = p_Var3;
  LeaveCriticalSection(p_Var3);
  cVar13 = local_22c;
  LVar25.QuadPart._1_7_ = (undefined7)((ulonglong)p_Var3 >> 8);
  LVar25.s.LowPart._0_1_ = local_22c;
  if ((((DAT_14c948774 == 1) && (DAT_14c872ba8 == '\x01')) && (DAT_14c7585c8 == 1)) &&
     (cVar12 = (**(code **)(*DAT_14c82b500 + 0x38))(), cVar12 == '\0')) {
    (**(code **)(*DAT_14c82b500 + 0x48))();
    if (cVar13 == '\0') {
LAB_1427c0bfb:
      if (*(int *)(DAT_14c950c20 + 8) == 0) goto LAB_1427c0c11;
    }
    else {
      QueryPerformanceCounter(&local_128);
      dVar6 = ((double)local_128.QuadPart * DAT_14c83f420 + 16777216.0) - dVar8;
      if ((param_4 < dVar6) && (DAT_14c948b4c != 0)) {
        if (((DAT_14c75ec60 != dVar8) || (NAN(DAT_14c75ec60) || NAN(dVar8))) &&
           (((double)_DAT_14c75ec58 < dVar6 && ((double)_DAT_14c75ec54 * param_4 < dVar6)))) {
          DAT_14c75ec60 = dVar8;
        }
      }
      LVar25.s.LowPart._0_1_ = local_22c;
      if (dVar6 <= param_4) goto LAB_1427c0bfb;
    }
    iVar19 = 0;
  }
  else {
LAB_1427c0c11:
    local_22b = bVar14;
    local_199 = 0 < *(int *)(param_1 + 0x118);
    local_b0 = (undefined1 *)0x0;
    local_a8 = 0x400000000;
    local_220 = param_1;
    if (*(int *)(param_1 + 0x118) < 1) {
      iVar19 = 2;
      local_a8._0_4_ = 0;
    }
    else {
      local_1e8 = (longlong *)(param_1 + 0x110);
      local_1d0 = param_1 + 0x130;
      local_1c0 = (uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60);
      uVar26 = 0;
      local_1c8 = lpCriticalSection;
      do {
        if (*(int *)(local_220 + 0x84) != 0) goto LAB_1427c1c60;
        local_1b8 = (longlong)(int)uVar26;
        local_228 = *(longlong *)(*local_1e8 + local_1b8 * 8);
        local_214 = uVar26;
        if ((*param_5 == 0) || (DAT_14c948688 != 0)) {
LAB_1427c0d28:
          DVar17 = DAT_14c75ec34;
          if (DAT_14c75ec34 == 0xffffffff) {
            DVar17 = TlsAlloc();
            DVar18 = 0xffffffff;
            LOCK();
            bVar33 = DAT_14c75ec34 != 0xffffffff;
            DVar11 = DVar17;
            if (bVar33) {
              DVar18 = DAT_14c75ec34;
              DVar11 = DAT_14c75ec34;
            }
            DAT_14c75ec34 = DVar11;
            UNLOCK();
            if (bVar33) {
              TlsFree(DVar17);
              DVar17 = DVar18;
            }
          }
          pvVar20 = TlsGetValue(DVar17);
          lVar27 = local_228;
          if (pvVar20 == (LPVOID)0x0) {
            pvVar20 = (LPVOID)FUN_14001cc68(0x60,0x10);
            FUN_141073f92(pvVar20);
            FUN_140fddf04(pvVar20);
            TlsSetValue(DVar17,pvVar20);
          }
          cVar13 = local_22c;
          local_1a8 = *(undefined8 *)((longlong)pvVar20 + 0x40);
          local_1b0 = *(undefined8 *)((longlong)pvVar20 + 0x48);
          *(longlong *)((longlong)pvVar20 + 0x40) = lVar27;
          uVar21 = *(ulonglong *)(lVar27 + 0x278);
          lVar32 = uVar21 + 8;
          if (uVar21 == 0) {
            lVar32 = 0;
          }
          *(longlong *)((longlong)pvVar20 + 0x48) = lVar32;
          LOCK();
          *(int *)(lVar27 + 0x1f8) = *(int *)(lVar27 + 0x1f8) + 1;
          UNLOCK();
          if (DAT_14c86a9f8 == '\x01') {
            uVar26 = *local_1c0;
            uVar21 = (ulonglong)uVar26;
            if (uVar26 == 2) goto LAB_1427c1c42;
            if (uVar26 == 1) {
              DVar17 = FUN_140ad26c0();
              DVar18 = GetCurrentThreadId();
              uVar21 = (ulonglong)DVar18;
              if (DVar17 == DVar18) goto LAB_1427c1c42;
            }
            local_218 = 0;
          }
          else {
LAB_1427c1c42:
            LOCK();
            DAT_14c948734 = DAT_14c948734 + 1;
            UNLOCK();
            local_218 = (undefined4)CONCAT71((int7)(uVar21 >> 8),1);
          }
          DVar17 = DAT_14c75ec34;
          local_200 = pvVar20;
          if (DAT_14c75ec34 == 0xffffffff) {
            DVar17 = TlsAlloc();
            DVar18 = 0xffffffff;
            LOCK();
            bVar33 = DAT_14c75ec34 != 0xffffffff;
            DVar11 = DVar17;
            if (bVar33) {
              DVar18 = DAT_14c75ec34;
              DVar11 = DAT_14c75ec34;
            }
            DAT_14c75ec34 = DVar11;
            UNLOCK();
            cVar13 = local_22c;
            if (bVar33) {
              TlsFree(DVar17);
              cVar13 = local_22c;
              DVar17 = DVar18;
            }
          }
          pvVar20 = TlsGetValue(DVar17);
          if (pvVar20 == (LPVOID)0x0) {
            pvVar20 = (LPVOID)FUN_14001cc68(0x60,0x10);
            FUN_141073f92(pvVar20);
            FUN_140fddf04(pvVar20);
            TlsSetValue(DVar17,pvVar20);
          }
          lVar27 = *(longlong *)((longlong)pvVar20 + 0x58);
          local_208 = (longlong *)(lVar27 + 0x10);
          local_128.QuadPart = 0;
          uStack_120 = 0;
          local_1e0 = *(void **)(lVar27 + 0x10);
          local_210 = (longlong)*(int *)(lVar27 + 0x18);
          *(undefined8 *)(lVar27 + 0x10) = 0;
          *(undefined8 *)(lVar27 + 0x18) = 0;
          local_229 = *(undefined1 *)((longlong)local_200 + 0x20);
          *(undefined1 *)((longlong)local_200 + 0x20) = 1;
          lVar32 = local_228;
          if (*(int *)(local_228 + 0xf8) < *(int *)(local_228 + 0x148)) {
            local_1d8 = (longlong *)(local_228 + 0x140);
            local_1f0 = (longlong *)(local_228 + 0x160);
            do {
              if (*(int *)(*(longlong *)(lVar32 + 0x278) + 0x84) != 0) break;
              if (cVar13 != '\0') {
                QueryPerformanceCounter(&local_178);
                dVar6 = ((double)local_178.QuadPart * DAT_14c83f420 + 16777216.0) - dVar8;
                if ((param_4 < dVar6) && (DAT_14c948b4c != 0)) {
                  if (((DAT_14c75ec60 != dVar8) || (NAN(DAT_14c75ec60) || NAN(dVar8))) &&
                     (((double)_DAT_14c75ec58 < dVar6 && ((double)_DAT_14c75ec54 * param_4 < dVar6))
                     )) {
                    DAT_14c75ec60 = dVar8;
                  }
                }
                if (param_4 < dVar6) break;
              }
              if (*(int *)(DAT_14c950c20 + 8) != 0) break;
              iVar19 = *(int *)(lVar32 + 0xf8);
              *(int *)(lVar32 + 0xf8) = iVar19 + 1;
              LVar25 = (LARGE_INTEGER)
                       ((LARGE_INTEGER *)(*(longlong *)(lVar32 + 0x140) + (longlong)iVar19 * 8))->
                       QuadPart;
              cVar12 = (**(code **)(*(longlong *)LVar25 + 0xa0))(LVar25.QuadPart);
              pvVar20 = local_200;
              if (cVar12 == '\0') {
                *(int *)(lVar32 + 0xf8) = *(int *)(lVar32 + 0xf8) + -1;
                break;
              }
              ((LARGE_INTEGER *)(lVar32 + 0x120))->QuadPart = (LONGLONG)LVar25;
              *(wchar_t **)(lVar32 + 0x128) = L"postloading_gamethread";
              ((LARGE_INTEGER *)((longlong)local_200 + 0x38))->QuadPart = (LONGLONG)LVar25;
              FUN_1400337aa(LVar25.QuadPart);
              uVar21 = uStack_120;
              *(undefined8 *)((longlong)pvVar20 + 0x38) = 0;
              uVar26 = *(uint *)(lVar27 + 0x18);
              lVar30 = (longlong)(int)uVar26;
              if (lVar30 != 0) {
                iVar19 = (uint)uStack_120;
                uStack_120 = CONCAT44(uStack_120._4_4_,(uint)uStack_120 + uVar26);
                if ((uint)(uStack_120._4_4_ - iVar19) < uVar26) {
                  FUN_1447f76d2(&local_128,uVar21 & 0xffffffff);
                }
                _Src = *(void **)(lVar27 + 0x10);
                do {
                  memcpy((void *)((longlong)iVar19 * 8 + local_128.QuadPart),_Src,lVar30 << 3);
                  do {
                    *(undefined4 *)(lVar27 + 0x18) = 0;
                    if (*(int *)(lVar27 + 0x1c) < 0) {
                      FUN_14079e7a6(local_208);
                    }
                    uVar26 = (uint)uStack_120;
                    lVar32 = local_228;
                    if ((uint)uStack_120 == 0) goto LAB_1427c0f77;
                    iVar19 = *(int *)(local_228 + 0x148);
                    *(uint *)(local_228 + 0x148) = iVar19 + (uint)uStack_120;
                    if ((uint)(*(int *)(local_228 + 0x14c) - iVar19) < (uint)uStack_120) {
                      FUN_1447f76d2(local_1d8,iVar19);
                    }
                    memcpy((void *)((longlong)iVar19 * 8 + *local_1d8),(void *)local_128,
                           (longlong)(int)uVar26 << 3);
                    LVar10 = local_128;
                    lVar32 = (longlong)(int)(uint)uStack_120;
                    if (lVar32 != 0) {
                      lVar30 = 0;
                      do {
                        lVar24 = *(longlong *)(LVar10.QuadPart + lVar30);
                        if (lVar24 != 0) {
                          iVar19 = *(int *)(lVar24 + 0xc);
                          AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
                          iVar16 = iVar19 + 0xffff;
                          if (-1 < iVar19) {
                            iVar16 = iVar19;
                          }
                          if ((iVar16 >> 0x10 < DAT_14c964390) &&
                             (lVar31 = *(longlong *)
                                        (DAT_14c964388 + 8 + (longlong)(iVar16 >> 0x10) * 0x10),
                             lVar31 != 0)) {
                            lVar31 = *(longlong *)(lVar31 + (longlong)(iVar19 % 0x10000) * 0x10);
                            ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
                            if (lVar31 != 0) {
                              iVar19 = *(int *)(lVar24 + 0xc);
                              AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
                              iVar16 = iVar19 + 0xffff;
                              if (-1 < iVar19) {
                                iVar16 = iVar19;
                              }
                              if ((iVar16 >> 0x10 < DAT_14c964390) &&
                                 (lVar31 = *(longlong *)
                                            (DAT_14c964388 + 8 + (longlong)(iVar16 >> 0x10) * 0x10),
                                 lVar31 != 0)) {
                                lVar31 = *(longlong *)(lVar31 + (longlong)(iVar19 % 0x10000) * 0x10)
                                ;
                              }
                              else {
                                lVar31 = 0;
                              }
                              ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
                              FUN_1427ff290(lVar31 + 0x240);
                              if (DAT_14c950c29 == '\x01') {
                                FUN_1456cec3c(lVar24);
                              }
                              iVar19 = *(int *)(local_228 + 0x168);
                              uVar26 = iVar19 + 1;
                              *(uint *)(local_228 + 0x168) = uVar26;
                              if (*(uint *)(local_228 + 0x16c) < uVar26) {
                                FUN_140845902(local_1f0);
                              }
                              *(longlong *)(*local_1f0 + (longlong)iVar19 * 8) = lVar24;
                              if (DAT_14c950c29 == '\x01') {
                                FUN_1456cec3c(lVar24);
                              }
                            }
                          }
                          else {
                            ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
                          }
                        }
                        lVar30 = lVar30 + 8;
                      } while (lVar32 * 8 != lVar30);
                    }
                    bVar33 = (longlong)uStack_120 < 0;
                    uStack_120 = uStack_120 & 0xffffffff00000000;
                    if (bVar33) {
                      FUN_14079e7a6(&local_128);
                    }
                    uVar21 = uStack_120;
                    uVar26 = *(uint *)(lVar27 + 0x18);
                    lVar30 = (longlong)(int)uVar26;
                  } while (lVar30 == 0);
                  iVar19 = (uint)uStack_120;
                  uStack_120 = CONCAT44(uStack_120._4_4_,(uint)uStack_120 + uVar26);
                  if ((uint)(uStack_120._4_4_ - iVar19) < uVar26) {
                    FUN_1447f76d2(&local_128,uVar21 & 0xffffffff);
                  }
                  _Src = (void *)*local_208;
                } while( true );
              }
LAB_1427c0f77:
              ((LARGE_INTEGER *)(lVar32 + 0x120))->QuadPart = (LONGLONG)LVar25;
              FUN_1468786fc(lVar32);
              cVar13 = local_22c;
            } while (*(int *)(lVar32 + 0xf8) < *(int *)(lVar32 + 0x148));
          }
          *(undefined1 *)((longlong)local_200 + 0x20) = local_229;
          iVar16 = *(int *)(lVar32 + 0x168);
          if ((*(int *)(lVar32 + 0xf8) == *(int *)(lVar32 + 0x148)) &&
             (*(int *)(lVar32 + 0xfc) < iVar16)) {
            do {
              if (*(int *)(*(longlong *)(lVar32 + 0x278) + 0x84) != 0) break;
              if (cVar13 != '\0') {
                QueryPerformanceCounter(&local_178);
                dVar6 = ((double)local_178.QuadPart * DAT_14c83f420 + 16777216.0) - dVar8;
                if ((param_4 < dVar6) && (DAT_14c948b4c != 0)) {
                  if (((DAT_14c75ec60 != dVar8) || (NAN(DAT_14c75ec60) || NAN(dVar8))) &&
                     (((double)_DAT_14c75ec58 < dVar6 && ((double)_DAT_14c75ec54 * param_4 < dVar6))
                     )) {
                    DAT_14c75ec60 = dVar8;
                  }
                }
                if (param_4 < dVar6) break;
              }
              if (*(int *)(DAT_14c950c20 + 8) != 0) break;
              iVar19 = *(int *)(lVar32 + 0xfc);
              *(int *)(lVar32 + 0xfc) = iVar19 + 1;
              lVar30 = *(longlong *)(*(longlong *)(lVar32 + 0x160) + (longlong)iVar19 * 8);
              *(longlong *)(lVar32 + 0x120) = lVar30;
              *(wchar_t **)(lVar32 + 0x128) = L"postloadinginstance_gamethread";
              (**(code **)(**(longlong **)(lVar30 + 0x10) + 0x368))();
            } while (*(int *)(lVar32 + 0xfc) < *(int *)(lVar32 + 0x168));
            iVar16 = *(int *)(lVar32 + 0x168);
          }
          iVar19 = 0;
          if (*(int *)(lVar32 + 0xfc) == iVar16) {
            *(undefined8 *)(lVar32 + 0x120) = 0;
            *(wchar_t **)(lVar32 + 0x128) = L"DeferredFinalizeObjects";
            local_178.QuadPart = 0;
            uStack_170 = 0;
            if (*(int *)(lVar32 + 0x100) < *(int *)(lVar32 + 0x158)) {
              do {
                if (*(int *)(*(longlong *)(lVar32 + 0x278) + 0x84) != 0) break;
                if (cVar13 != '\0') {
                  QueryPerformanceCounter(&local_188);
                  dVar6 = ((double)local_188.QuadPart * DAT_14c83f420 + 16777216.0) - dVar8;
                  if ((param_4 < dVar6) && (DAT_14c948b4c != 0)) {
                    if (((DAT_14c75ec60 != dVar8) || (NAN(DAT_14c75ec60) || NAN(dVar8))) &&
                       (((double)_DAT_14c75ec58 < dVar6 &&
                        ((double)_DAT_14c75ec54 * param_4 < dVar6)))) {
                      DAT_14c75ec60 = dVar8;
                    }
                  }
                  if (param_4 < dVar6) goto LAB_1427c15e7;
                }
                if (*(int *)(DAT_14c950c20 + 8) != 0) break;
                iVar19 = *(int *)(lVar32 + 0x100);
                *(int *)(lVar32 + 0x100) = iVar19 + 1;
                lVar32 = *(longlong *)(*(longlong *)(lVar32 + 0x150) + (longlong)iVar19 * 8);
                if (lVar32 != 0) {
                  uVar26 = *(uint *)(lVar32 + 0xc);
                  if ((int)uVar26 < DAT_14c9647dc) {
                    lVar30 = (ulonglong)((uVar26 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8);
                  }
                  else {
                    lVar30 = 0;
                  }
                  FUN_14482b126(lVar30);
                  if ((*(uint *)(lVar32 + 8) & 0x10) != 0) {
                    FUN_1406d3f7c(lVar32);
                    LVar10 = local_178;
                    lVar32 = (longlong)(int)uStack_170;
                    if (lVar32 != 0) {
                      lVar30 = 0;
                      do {
                        if (*(longlong *)(LVar10.QuadPart + lVar30) != 0) {
                          uVar26 = *(uint *)(*(longlong *)(LVar10.QuadPart + lVar30) + 0xc);
                          if ((int)uVar26 < DAT_14c9647dc) {
                            lVar24 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8);
                            if ((*(uint *)(lVar24 + 8 + (ulonglong)(uVar26 & 0xffff) * 0x18) &
                                0x8400000) != 0) {
                              lVar24 = lVar24 + (ulonglong)(uVar26 & 0xffff) * 0x18;
LAB_1427c158d:
                              FUN_14482b126(lVar24);
                            }
                          }
                          else if ((_DAT_00000008 & 0x8400000) != 0) {
                            lVar24 = 0;
                            goto LAB_1427c158d;
                          }
                        }
                        lVar30 = lVar30 + 8;
                      } while (lVar32 * 8 != lVar30);
                    }
                    cVar13 = local_22c;
                    bVar33 = (longlong)uStack_170 < 0;
                    uStack_170 = uStack_170 & 0xffffffff00000000;
                    if (bVar33) {
                      FUN_14079e7a6(&local_178);
                    }
                  }
                }
                lVar32 = local_228;
              } while (*(int *)(local_228 + 0x100) < *(int *)(local_228 + 0x158));
            }
            if (cVar13 != '\0') {
LAB_1427c15e7:
              QueryPerformanceCounter(&local_188);
              dVar6 = ((double)local_188.QuadPart * DAT_14c83f420 + 16777216.0) - dVar8;
              if ((param_4 < dVar6) && (DAT_14c948b4c != 0)) {
                if (((DAT_14c75ec60 != dVar8) || (NAN(DAT_14c75ec60) || NAN(dVar8))) &&
                   (((double)_DAT_14c75ec58 < dVar6 && ((double)_DAT_14c75ec54 * param_4 < dVar6))))
                {
                  DAT_14c75ec60 = dVar8;
                }
              }
            }
            iVar19 = 0;
            if (*(int *)(lVar32 + 0x100) == *(int *)(lVar32 + 0x158)) {
              *(undefined4 *)(lVar32 + 0x100) = 0;
              *(undefined4 *)(lVar32 + 0x158) = 0;
              if (*(int *)(lVar32 + 0x15c) < 0) {
                FUN_140c6998c(lVar32 + 0x150);
              }
              lVar30 = *(longlong *)(lVar32 + 0x58);
              iVar19 = 2;
              if ((lVar30 != 0) && (*(char *)(lVar32 + 0x10f) == '\0')) {
                *(longlong *)(lVar32 + 0x120) = lVar30;
                *(wchar_t **)(lVar32 + 0x128) = L"CreateClustersFromPackage";
                uVar26 = *(uint *)(lVar30 + 0xc);
                if ((int)uVar26 < DAT_14c9647dc) {
                  lVar30 = (ulonglong)((uVar26 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8);
                }
                else {
                  lVar30 = 0;
                }
                FUN_14482b126(lVar30);
                pbVar1 = (byte *)(*(longlong *)(lVar32 + 0x58) + 0x28);
                *pbVar1 = *pbVar1 | 2;
                QueryPerformanceCounter(&local_188);
                if (*(longlong *)(lVar32 + 0x50) != 0) {
                  FUN_1468ff477();
                }
                if (cVar13 != '\0') {
                  QueryPerformanceCounter(&local_188);
                  dVar6 = ((double)local_188.QuadPart * DAT_14c83f420 + 16777216.0) - dVar8;
                  if ((param_4 < dVar6) && (DAT_14c948b4c != 0)) {
                    if (((DAT_14c75ec60 != dVar8) || (NAN(DAT_14c75ec60) || NAN(dVar8))) &&
                       (((double)_DAT_14c75ec58 < dVar6 &&
                        ((double)_DAT_14c75ec54 * param_4 < dVar6)))) {
                      DAT_14c75ec60 = dVar8;
                    }
                  }
                }
              }
            }
            if ((longlong *)local_178.QuadPart != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          uVar26 = local_214;
          LOCK();
          *(int *)(lVar32 + 0x1f8) = *(int *)(lVar32 + 0x1f8) + -1;
          UNLOCK();
          if ((uint)local_210 != 0) {
            iVar16 = *(int *)(lVar27 + 0x18);
            *(uint *)(lVar27 + 0x18) = (uint)local_210 + iVar16;
            if ((uint)(*(int *)(lVar27 + 0x1c) - iVar16) < (uint)local_210) {
              FUN_1447f76d2(local_208,iVar16);
            }
            memcpy((void *)((longlong)iVar16 * 8 + *local_208),local_1e0,local_210 << 3);
            lVar32 = local_228;
          }
          if (local_1e0 != (void *)0x0) {
            FUN_1400020a8();
          }
          if ((void *)local_128.QuadPart != (void *)0x0) {
            FUN_1400020a8();
          }
          p_Var3 = local_1c8;
          if ((char)local_218 != '\0') {
            LOCK();
            DAT_14c948734 = DAT_14c948734 + -1;
            UNLOCK();
          }
          *(undefined8 *)((longlong)local_200 + 0x40) = local_1a8;
          *(undefined8 *)((longlong)local_200 + 0x48) = local_1b0;
          if (iVar19 != 2) break;
          if ((*(int *)(lVar32 + 0xd8) == 0) && (*(int *)(lVar32 + 0x1f8) < 1)) {
            EnterCriticalSection(local_1c8);
            lVar27 = local_220;
            iVar19 = *(int *)(local_220 + 0x118);
            if (~uVar26 + iVar19 != 0) {
              memmove((void *)(*(longlong *)(local_220 + 0x110) + local_1b8 * 8),
                      (void *)(*(longlong *)(local_220 + 0x110) + local_1b8 * 8 + 8),
                      (longlong)(int)(~uVar26 + iVar19) << 3);
              iVar19 = *(int *)(lVar27 + 0x118);
            }
            *(int *)(lVar27 + 0x118) = iVar19 + -1;
            FUN_14688411e(local_1e8);
            FUN_146884042(local_1d0);
            FUN_1427c0924(lVar32);
            if ((longlong)*(int *)(lVar32 + 0x178) != 0) {
              plVar28 = *(longlong **)(local_228 + 0x170);
              plVar5 = plVar28 + *(int *)(lVar32 + 0x178);
              do {
                lVar27 = *plVar28;
                if ((*(longlong *)(lVar27 + 0xa0) != 0) && (DAT_14c872ba8 == '\0')) {
                  if ((longlong)*(int *)(lVar27 + 0x20) != 0) {
                    lVar32 = 0;
                    do {
                      lVar30 = *(longlong *)(*(longlong *)(lVar27 + 0x18) + 0x40 + lVar32);
                      if ((lVar30 != 0) && ((*(uint *)(lVar30 + 8) & 0x1400) != 0))
                      goto LAB_1427c19d5;
                      lVar32 = lVar32 + 0x68;
                    } while ((longlong)*(int *)(lVar27 + 0x20) * 0x68 - lVar32 != 0);
                  }
                  uVar22 = FUN_1402a3fee();
                  FUN_1428045e0(uVar22);
                }
LAB_1427c19d5:
                plVar28 = plVar28 + 1;
              } while (plVar28 != plVar5);
            }
            LeaveCriticalSection(p_Var3);
            LOCK();
            piVar2 = (int *)(local_220 + 900);
            iVar19 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar19 < 1) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0x130b,
                            L"ExistingAsyncPackagesCounter is negative, this means we loaded more packages then requested so there must be a bug in async loading code."
                           );
            }
            lVar27 = local_228;
            cVar13 = local_22c;
            lVar32 = (longlong)(int)local_a8;
            uVar26 = (int)local_a8 + 1;
            local_a8 = CONCAT44(local_a8._4_4_,uVar26);
            if (local_a8._4_4_ < uVar26) {
              FUN_1468847e8(local_d0);
            }
            uVar9 = local_214;
            puVar23 = local_b0;
            if (local_b0 == (undefined1 *)0x0) {
              puVar23 = local_d0;
            }
            *(longlong *)(puVar23 + lVar32 * 8) = lVar27;
            if (cVar13 != '\0') {
              QueryPerformanceCounter(&local_128);
              dVar6 = ((double)local_128.QuadPart * DAT_14c83f420 + 16777216.0) - dVar8;
              if ((param_4 < dVar6) && (DAT_14c948b4c != 0)) {
                if (((DAT_14c75ec60 != dVar8) || (NAN(DAT_14c75ec60) || NAN(dVar8))) &&
                   (((double)_DAT_14c75ec58 < dVar6 && ((double)_DAT_14c75ec54 * param_4 < dVar6))))
                {
                  DAT_14c75ec60 = dVar8;
                }
              }
              if (param_4 < dVar6) goto LAB_1427c1c60;
            }
            if (*(int *)(DAT_14c950c20 + 8) != 0) {
LAB_1427c1c60:
              iVar19 = 2;
              break;
            }
            puVar4 = (undefined8 *)*param_5;
            uVar26 = uVar9 - 1;
            if (puVar4 != (undefined8 *)0x0) {
              local_190 = *(undefined4 *)(puVar4 + 1);
              local_198 = *puVar4;
              cVar13 = FUN_14687a800(local_220);
              if (cVar13 == '\0') goto LAB_1427c1c60;
            }
          }
        }
        else {
          lVar27 = (longlong)*(int *)(*param_5 + 8);
          if (lVar27 != 0) {
            lVar32 = 0;
            do {
              cVar13 = FUN_146879fc8(local_228);
              if (cVar13 != '\0') goto LAB_1427c0d28;
              lVar32 = lVar32 + 4;
            } while (lVar27 * 4 != lVar32);
          }
          uVar26 = local_214;
          if (DAT_14c872ba8 == '\x01') goto LAB_1427c0d28;
        }
        uVar26 = uVar26 + 1;
        iVar19 = 2;
      } while ((int)uVar26 < *(int *)(local_220 + 0x118));
    }
    local_108 = 0;
    local_100 = 0;
    local_128.QuadPart = 0;
    uStack_120 = 0;
    local_fc = 0xffffffff00000080;
    local_f4 = 0;
    local_e8 = 0;
    local_e0 = 0;
    puVar23 = local_d0;
    if (local_b0 != (undefined1 *)0x0) {
      puVar23 = local_b0;
    }
    if ((int)local_a8 != 0) {
      lVar30 = (longlong)(int)local_a8;
      lVar27 = local_220 + 0x120;
      lVar32 = 0;
      do {
        LVar25 = (LARGE_INTEGER)((LARGE_INTEGER *)(puVar23 + lVar32))->QuadPart;
        local_178 = LVar25;
        FUN_14687a8b6(LVar25.QuadPart,0,*(byte *)(LVar25.QuadPart + 0x10f) ^ 1);
        FUN_1468848dc(lVar27);
        FUN_14687a94a(LVar25.QuadPart);
        lVar32 = lVar32 + 8;
      } while (lVar30 * 8 != lVar32);
    }
    bVar33 = true;
    if (local_199 == 0) {
      bVar33 = 0 < *(int *)(local_220 + 0x128);
    }
    LVar25.QuadPart._1_7_ = (undefined7)((ulonglong)LVar25 >> 8);
    bVar14 = local_22b;
    param_1 = local_220;
    local_199 = bVar33;
    if (iVar19 == 0) {
      iVar19 = 0;
      LVar25.s.LowPart._0_1_ = local_22c;
    }
    else {
      local_158 = 0;
      local_150 = 0;
      local_178.QuadPart = 0;
      uStack_170 = 0;
      local_14c = 0xffffffff00000080;
      local_144 = 0;
      local_138 = 0;
      local_130 = 0;
      if (*(int *)(local_220 + 0x128) < 1) {
        LVar25.s.LowPart._0_1_ = local_22c;
      }
      else {
        plVar5 = (longlong *)(local_220 + 0x120);
        uVar26 = 0;
        do {
          puVar4 = *(undefined8 **)(*plVar5 + (longlong)(int)uVar26 * 8);
          if ((*(int *)(puVar4 + 0x1b) == 0) && (*(int *)(puVar4 + 0x3f) < 1)) {
            if (0 < *(int *)(puVar4 + 0x31)) {
              FUN_14687a166(&local_178);
              local_188.QuadPart = 0;
              uStack_180 = 0;
              cVar13 = FUN_146879b18(puVar4,&local_178,&local_188);
              if (local_188.QuadPart != 0) {
                FUN_1400020a8();
              }
              param_1 = local_220;
              if (cVar13 == '\0') goto LAB_1427c1dd2;
              puVar4[0x24] = 0;
              puVar4[0x25] = L"CreateClusters";
              iVar16 = *(int *)((longlong)puVar4 + 0x104);
              iVar29 = *(int *)(puVar4 + 0x31);
              if (iVar16 < iVar29) {
                do {
                  if (*(int *)(puVar4[0x4f] + 0x84) != 0) {
LAB_1427c1f6a:
                    iVar16 = *(int *)((longlong)puVar4 + 0x104);
                    break;
                  }
                  if (local_22c != '\0') {
                    QueryPerformanceCounter(&local_188);
                    dVar6 = ((double)local_188.QuadPart * DAT_14c83f420 + 16777216.0) - dVar8;
                    if ((param_4 < dVar6) && (DAT_14c948b4c != 0)) {
                      if (((DAT_14c75ec60 != dVar8) || (NAN(DAT_14c75ec60) || NAN(dVar8))) &&
                         (((double)_DAT_14c75ec58 < dVar6 &&
                          ((double)_DAT_14c75ec54 * param_4 < dVar6)))) {
                        DAT_14c75ec60 = dVar8;
                      }
                    }
                    if (param_4 < dVar6) goto LAB_1427c1f6a;
                  }
                  iVar16 = *(int *)((longlong)puVar4 + 0x104);
                  if (*(int *)(DAT_14c950c20 + 8) != 0) break;
                  *(int *)((longlong)puVar4 + 0x104) = iVar16 + 1;
                  plVar28 = *(longlong **)(puVar4[0x30] + (longlong)iVar16 * 8);
                  puVar4[0x24] = plVar28;
                  (**(code **)(*plVar28 + 0x30))();
                  iVar16 = *(int *)((longlong)puVar4 + 0x104);
                } while (iVar16 < *(int *)(puVar4 + 0x31));
                iVar29 = *(int *)(puVar4 + 0x31);
              }
              if (iVar16 != iVar29) {
                puVar4[0x24] = 0;
                iVar19 = 0;
                break;
              }
              *(undefined4 *)((longlong)puVar4 + 0x104) = 0;
              *(undefined4 *)(puVar4 + 0x31) = 0;
              if (*(int *)((longlong)puVar4 + 0x18c) < 0) {
                FUN_14079e7a6(puVar4 + 0x30,0);
              }
              puVar4[0x24] = 0;
            }
            iVar16 = *(int *)(param_1 + 0x128);
            iVar29 = ~uVar26 + iVar16;
            if (iVar29 != 0) {
              if (0 < iVar29) {
                iVar29 = 1;
              }
              memmove((void *)(*(longlong *)(param_1 + 0x120) + (longlong)(int)uVar26 * 8),
                      (void *)(*(longlong *)(param_1 + 0x120) + (longlong)(iVar16 - iVar29) * 8),
                      (longlong)iVar29 << 3);
              iVar16 = *(int *)(param_1 + 0x128);
            }
            uVar26 = uVar26 - 1;
            *(int *)(param_1 + 0x128) = iVar16 + -1;
            FUN_14688411e(plVar5);
            if (puVar4 != (undefined8 *)0x0) {
              (**(code **)*puVar4)(puVar4,1);
            }
          }
LAB_1427c1dd2:
          uVar26 = uVar26 + 1;
        } while ((int)uVar26 < *(int *)(param_1 + 0x128));
        bVar14 = local_22b;
        local_130 = 0;
        LVar25.QuadPart._1_7_ = (undefined7)((ulonglong)&local_188 >> 8);
        LVar25.s.LowPart._0_1_ = local_22c;
        if (local_138 != 0) {
          FUN_1400020a8();
        }
      }
      FUN_14090246c(&local_178);
      if (iVar19 == 2) {
        iVar19 = (*(int *)(param_1 + 0x128) == 0) + 1;
      }
    }
    local_e0 = 0;
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    FUN_14090246c(&local_128);
    if (local_b0 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  dVar7 = dVar7 + 16777216.0;
  QueryPerformanceCounter(&local_128);
  if (iVar19 == 0 || (bVar14 & 1) != 0) {
LAB_1427c2256:
    if (iVar19 != 0) {
LAB_1427c225f:
      if ((char)LVar25.s.LowPart != '\0') goto LAB_1427c2267;
      goto LAB_1427c22ee;
    }
  }
  else {
    dVar8 = (double)local_128.QuadPart * DAT_14c83f420;
    if ((char)LVar25.s.LowPart == '\0') {
LAB_1427c21f8:
      if (*(int *)(DAT_14c950c20 + 8) == 0) {
        dVar8 = param_4 - ((dVar8 + 16777216.0) - dVar7);
        dVar6 = 0.0;
        if (0.0 <= dVar8) {
          dVar6 = dVar8;
        }
        if (*param_5 != 0) {
          FUN_14687a5f2(param_5,param_1 + 0x220);
        }
        local_248 = &local_199;
        local_240 = param_5;
        iVar19 = FUN_1427c272a(param_1,LVar25.QuadPart & 0xffffffff,local_22a,dVar6);
        goto LAB_1427c2256;
      }
      goto LAB_1427c225f;
    }
    QueryPerformanceCounter(&local_128);
    dVar6 = ((double)local_128.QuadPart * DAT_14c83f420 + 16777216.0) - dVar7;
    if ((param_4 < dVar6) && (DAT_14c948b4c != 0)) {
      if (((DAT_14c75ec60 != dVar7) || (NAN(DAT_14c75ec60) || NAN(dVar7))) &&
         (((double)_DAT_14c75ec58 < dVar6 && ((double)_DAT_14c75ec54 * param_4 < dVar6)))) {
        DAT_14c75ec60 = dVar7;
      }
    }
    LVar25.QuadPart._1_7_ = (undefined7)((ulonglong)LVar25 >> 8);
    LVar25.s.LowPart._0_1_ = local_22c;
    if (dVar6 <= param_4) goto LAB_1427c21f8;
LAB_1427c2267:
    QueryPerformanceCounter(&local_128);
    dVar8 = ((double)local_128.QuadPart * DAT_14c83f420 + 16777216.0) - dVar7;
    if ((param_4 < dVar8) && (DAT_14c948b4c != 0)) {
      if (((DAT_14c75ec60 != dVar7) || (NAN(DAT_14c75ec60) || NAN(dVar7))) &&
         (((double)_DAT_14c75ec58 < dVar8 && ((double)_DAT_14c75ec54 * param_4 < dVar8)))) {
        DAT_14c75ec60 = dVar7;
      }
    }
    if (dVar8 <= param_4) {
LAB_1427c22ee:
      if (*(int *)(DAT_14c950c20 + 8) == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
        EnterCriticalSection(local_1f8);
        bVar15 = local_199;
        if (*(int *)(param_1 + 900) == 0) {
          local_199 = 1;
          FUN_1427d8cba();
          if (local_22c != '\0') {
            QueryPerformanceCounter(&local_128);
            dVar8 = ((double)local_128.QuadPart * DAT_14c83f420 + 16777216.0) - dVar7;
            if ((param_4 < dVar8) && (DAT_14c948b4c != 0)) {
              if (((DAT_14c75ec60 != dVar7) || (NAN(DAT_14c75ec60) || NAN(dVar7))) &&
                 (((double)_DAT_14c75ec58 < dVar8 && ((double)_DAT_14c75ec54 * param_4 < dVar8)))) {
                DAT_14c75ec60 = dVar7;
              }
            }
            bVar15 = 1;
            if (param_4 < dVar8) goto LAB_1427c23d6;
          }
          bVar15 = 1;
        }
LAB_1427c23d6:
        LeaveCriticalSection(local_1f8);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
        cVar13 = local_22c;
        if (((bVar15 & 1) == 0) && (DAT_14c872ba8 == '\x01')) {
          if ((bVar14 & 1) == 0) {
            if (DAT_14c75b114 != '\0') {
              bVar14 = FUN_14687a9c0(*(undefined8 *)(param_1 + 0x10));
              local_199 = bVar14;
              if (cVar13 != '\0') {
                QueryPerformanceCounter(&local_128);
                dVar8 = ((double)local_128.QuadPart * DAT_14c83f420 + 16777216.0) - dVar7;
                cVar13 = local_22c;
                if ((param_4 < dVar8) && (DAT_14c948b4c != 0)) {
                  if (((DAT_14c75ec60 != dVar7) || (NAN(DAT_14c75ec60) || NAN(dVar7))) &&
                     (((double)_DAT_14c75ec58 < dVar8 && ((double)_DAT_14c75ec54 * param_4 < dVar8))
                     )) {
                    DAT_14c75ec60 = dVar7;
                  }
                }
              }
              if (bVar14 != 0) goto LAB_1427c2551;
              bVar15 = FUN_1427c3654(*(undefined8 *)(param_1 + 0x10));
              local_199 = bVar15;
              if (cVar13 != '\0') {
                QueryPerformanceCounter(&local_128);
                dVar8 = ((double)local_128.QuadPart * DAT_14c83f420 + 16777216.0) - dVar7;
                cVar13 = local_22c;
                if ((param_4 < dVar8) && (DAT_14c948b4c != 0)) {
                  if (((DAT_14c75ec60 != dVar7) || (NAN(DAT_14c75ec60) || NAN(dVar7))) &&
                     (((double)_DAT_14c75ec58 < dVar8 && ((double)_DAT_14c75ec54 * param_4 < dVar8))
                     )) {
                    DAT_14c75ec60 = dVar7;
                  }
                }
              }
            }
            if (((((bVar15 & 1) == 0) &&
                 (lVar27 = *(longlong *)(param_1 + 0x470),
                 *(int *)(lVar27 + 0xa0) == *(int *)(lVar27 + 0xcc))) &&
                (*(int *)(lVar27 + 0xf0) == *(int *)(lVar27 + 0x11c))) &&
               (*(int *)(param_1 + 0x408) == 0)) {
              FUN_1427ba47a(param_1 + 0x410,0);
            }
          }
          else {
            if (DAT_14c75b114 == '\0') goto LAB_1427c25e7;
            local_199 = FUN_1427c3654(*(undefined8 *)(param_1 + 0x10));
          }
LAB_1427c2551:
          if (cVar13 != '\0') {
            QueryPerformanceCounter(&local_128);
            dVar8 = ((double)local_128.QuadPart * DAT_14c83f420 + 16777216.0) - dVar7;
            if ((param_4 < dVar8) && (DAT_14c948b4c != 0)) {
              if (((DAT_14c75ec60 != dVar7) || (NAN(DAT_14c75ec60) || NAN(dVar7))) &&
                 (((double)_DAT_14c75ec58 < dVar8 && ((double)_DAT_14c75ec54 * param_4 < dVar8)))) {
                DAT_14c75ec60 = dVar7;
              }
            }
          }
        }
      }
    }
  }
LAB_1427c25e7:
  FUN_1447f69b6(&DAT_14c868758);
LAB_1427c25f3:
  plVar5 = (longlong *)param_5[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar28 = plVar5 + 1;
    *(int *)plVar28 = (int)*plVar28 + -1;
    UNLOCK();
    if ((int)*plVar28 == 0) {
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
  if ((local_a0 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427c272a FUN_1427c272a body=3880 status=ok
// SIG undefined FUN_1427c272a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1427c272a(longlong param_1,undefined4 param_2,ulonglong param_3,double param_4,byte *param_5
                 ,longlong *param_6)

{
  LPCRITICAL_SECTION p_Var1;
  longlong lVar2;
  LARGE_INTEGER LVar3;
  longlong *plVar4;
  LARGE_INTEGER LVar5;
  LARGE_INTEGER LVar6;
  int *piVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  DWORD DVar13;
  DWORD DVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  byte bVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined7 uVar23;
  int iVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_168 [42];
  char local_13e;
  byte local_13d;
  int local_13c;
  undefined8 local_138;
  LPCRITICAL_SECTION local_130;
  LPCRITICAL_SECTION local_128;
  longlong local_120;
  longlong local_118;
  LARGE_INTEGER local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  byte local_f4;
  undefined1 local_f3;
  float local_ec;
  LARGE_INTEGER local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  bVar17 = (byte)param_2;
  if (*(int *)(param_1 + 0x80) == 0) {
    param_3 = param_3 & 0xffffffff;
    QueryPerformanceCounter(&local_110);
    LVar5 = (LARGE_INTEGER)((double)local_110.QuadPart * DAT_14c83f420 + 16777216.0);
    if (*(int *)(param_1 + 0x388) == 0) {
      iVar12 = 2;
    }
    else {
      if ((DAT_14c75b114 == '\x01') && (DAT_14c872ba8 == '\x01')) {
        FUN_14687a9c0(*(undefined8 *)(param_1 + 0x10));
      }
      piVar7 = DAT_14c950c20;
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar12 = *(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60), iVar12 != 2)) {
        if (iVar12 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          if (DVar13 == DVar14) goto LAB_1427c288c;
        }
        p_Var1 = (LPCRITICAL_SECTION)(piVar7 + 4);
        while( true ) {
          if (0 < piVar7[1]) {
            (**(code **)(**(longlong **)(piVar7 + 0xe) + 0x20))
                      (*(longlong **)(piVar7 + 0xe),0xffffffff,0);
          }
          EnterCriticalSection(p_Var1);
          if (piVar7[1] == 0) break;
          LeaveCriticalSection(p_Var1);
        }
        LOCK();
        *piVar7 = *piVar7 + 1;
        UNLOCK();
        LeaveCriticalSection(p_Var1);
      }
LAB_1427c288c:
      FUN_1427b9f4a(param_1,param_2,param_4);
      piVar7 = DAT_14c950c20;
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar12 = *(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60), iVar12 != 2)) {
        if (iVar12 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          if (DVar13 == DVar14) goto LAB_1427c28d4;
        }
        LOCK();
        *piVar7 = *piVar7 + -1;
        UNLOCK();
      }
LAB_1427c28d4:
      QueryPerformanceCounter(&local_110);
      piVar7 = DAT_14c950c20;
      iVar12 = 0;
      if (DAT_14c950c20[2] != 0) goto LAB_1427c353c;
      fVar27 = (float)param_4 -
               (float)(((double)local_110.QuadPart * DAT_14c83f420 + 16777216.0) - (double)LVar5);
      fVar29 = 0.0;
      if (0.0 <= fVar27) {
        fVar29 = fVar27;
      }
      if ((bVar17 == 1 && fVar29 <= 0.0) && (DAT_14c948774 != 1)) goto LAB_1427c353c;
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar12 = *(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60), iVar12 != 2)) {
        if (iVar12 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          if (DVar13 == DVar14) goto LAB_1427c2b2a;
        }
        p_Var1 = (LPCRITICAL_SECTION)(piVar7 + 4);
        while( true ) {
          if (0 < piVar7[1]) {
            (**(code **)(**(longlong **)(piVar7 + 0xe) + 0x20))
                      (*(longlong **)(piVar7 + 0xe),0xffffffff,0);
          }
          EnterCriticalSection(p_Var1);
          if (piVar7[1] == 0) break;
          LeaveCriticalSection(p_Var1);
        }
        LOCK();
        *piVar7 = *piVar7 + 1;
        UNLOCK();
        LeaveCriticalSection(p_Var1);
      }
LAB_1427c2b2a:
      local_13d = DAT_14c948774 | bVar17;
      local_ec = fVar29;
      uVar10 = QueryPerformanceCounter(&local_110);
      uVar15 = (ulonglong)uVar10;
      LVar6 = (LARGE_INTEGER)((double)local_110.QuadPart * DAT_14c83f420 + 16777216.0);
      local_13e = (char)param_3;
      if (DAT_14c872ba8 == '\x01') {
        if (DAT_14c86a9f8 == '\x01') {
          uVar10 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0xc60);
          uVar15 = (ulonglong)uVar10;
          if (uVar10 == 2) goto LAB_1427c3641;
          if (uVar10 == 1) {
            DVar13 = FUN_140ad26c0();
            DVar14 = GetCurrentThreadId();
            uVar15 = (ulonglong)DVar14;
            if (DVar13 == DVar14) goto LAB_1427c3641;
          }
          local_13c = 0;
        }
        else {
LAB_1427c3641:
          LOCK();
          DAT_14c948734 = DAT_14c948734 + 1;
          UNLOCK();
          local_13c = (int)CONCAT71((int7)(uVar15 >> 8),1);
        }
        local_128 = (LPCRITICAL_SECTION)(param_1 + 0x3f8);
        local_130 = (LPCRITICAL_SECTION)(param_1 + 0x2e0);
        local_118 = param_1 + 0x280;
        local_120 = param_1 + 0x270;
        iVar19 = 0;
        local_138 = (longlong *)((ulonglong)local_138._4_4_ << 0x20);
        iVar24 = 0;
LAB_1427c2c16:
        do {
          do {
            if ((local_13d & 1) == 0) {
              uVar10 = (int)local_138 + 1;
              local_138 = (longlong *)CONCAT44(local_138._4_4_,uVar10);
              if ((~uVar10 & 0x1f) == 0) {
                uVar16 = FUN_141552594();
                FUN_14275a71e(uVar16,0);
                FUN_1447f69b6(&DAT_14c868758);
              }
            }
            bVar8 = FUN_14687972a(*(undefined8 *)(param_1 + 0x470));
            iVar18 = iVar19 + (uint)bVar8;
            if (bVar17 != 0) {
              dVar25 = (double)local_ec;
              QueryPerformanceCounter(&local_110);
              dVar26 = ((double)local_110.QuadPart * DAT_14c83f420 + 16777216.0) - (double)LVar6;
              if ((dVar25 < dVar26) && (DAT_14c948b4c != 0)) {
                if ((((double)DAT_14c75ec60 != (double)LVar6) ||
                    (NAN((double)DAT_14c75ec60) || NAN((double)LVar6))) &&
                   (((double)_DAT_14c75ec58 < dVar26 && ((double)_DAT_14c75ec54 * dVar25 < dVar26)))
                   ) {
                  DAT_14c75ec60 = LVar6;
                }
              }
              if (dVar25 < dVar26) {
                iVar12 = 0;
                goto LAB_1427c34d7;
              }
            }
            fVar29 = local_ec;
            iVar12 = 0;
            if ((DAT_14c950c20[2] != 0) || (*(int *)(param_1 + 0x84) != 0)) goto LAB_1427c34d7;
            QueryPerformanceCounter(&local_110);
            fVar28 = fVar29 - (float)(((double)local_110.QuadPart * DAT_14c83f420 + 16777216.0) -
                                     (double)LVar6);
            fVar27 = 0.0;
            if (0.0 <= fVar28) {
              fVar27 = fVar28;
            }
            iVar11 = FUN_1427b9f4a(param_1,param_2,(double)fVar27);
            iVar19 = iVar18 + iVar11;
            dVar25 = (double)fVar29;
            iVar18 = iVar19;
            iVar12 = iVar24;
            if (bVar17 != 0) {
              QueryPerformanceCounter(&local_110);
              dVar26 = ((double)local_110.QuadPart * DAT_14c83f420 + 16777216.0) - (double)LVar6;
              if ((dVar25 < dVar26) && (DAT_14c948b4c != 0)) {
                if ((((double)DAT_14c75ec60 != (double)LVar6) ||
                    (NAN((double)DAT_14c75ec60) || NAN((double)LVar6))) &&
                   (((double)_DAT_14c75ec58 < dVar26 && ((double)_DAT_14c75ec54 * dVar25 < dVar26)))
                   ) {
                  DAT_14c75ec60 = LVar6;
                }
              }
              if (dVar25 < dVar26) goto LAB_1427c34d7;
            }
            if (DAT_14c950c20[2] != 0) goto LAB_1427c34d7;
          } while (bVar8 != 0 || 0 < iVar11);
          local_f3 = 1;
          local_f8 = fVar29;
          local_108 = 0;
          uStack_100 = 0;
          local_110 = LVar6;
          local_f4 = bVar17;
          cVar9 = FUN_14687996c(local_128);
          LVar3 = local_110;
          if (cVar9 == '\0') {
            if (*(int *)(param_1 + 0x2d8) == 0) {
              lVar2 = *(longlong *)(param_1 + 0x470);
              if ((*(int *)(lVar2 + 0xa0) == *(int *)(lVar2 + 0xcc)) &&
                 (*(int *)(lVar2 + 0xf0) == *(int *)(lVar2 + 0x11c))) {
                iVar12 = 2;
                break;
              }
              QueryPerformanceCounter(&local_110);
              if (bVar17 == 0) {
                cVar9 = FUN_146879a1a(*(undefined8 *)(param_1 + 0x470),&DAT_41200000);
                if (cVar9 == '\0') {
                  OutputDebugStringW(L"Waited for 10 seconds on IO....");
                }
              }
              else {
                if (local_13e == '\0') break;
                QueryPerformanceCounter(&local_110);
                fVar29 = fVar29 - (float)(((double)local_110.QuadPart * DAT_14c83f420 + 16777216.0)
                                         - (double)LVar6);
                fVar27 = 0.0;
                if (0.0 <= fVar29) {
                  fVar27 = fVar29;
                }
                if (fVar27 <= 0.0) break;
                cVar9 = FUN_146879a1a(*(undefined8 *)(param_1 + 0x470));
                if (cVar9 == '\0') {
                  QueryPerformanceCounter(&local_110);
                  break;
                }
              }
              iVar19 = iVar19 + 1;
              goto LAB_1427c2c16;
            }
            lVar2 = **(longlong **)(param_1 + 0x2d0);
            if (*(char *)(lVar2 + 0x110) == '\0') {
              QueryPerformanceCounter(&local_110);
              fVar29 = fVar29 - (float)(((double)local_110.QuadPart * DAT_14c83f420 + 16777216.0) -
                                       (double)LVar6);
              fVar27 = 0.0;
              if (0.0 <= fVar29) {
                fVar27 = fVar29;
              }
              local_e8.s.LowPart = (DWORD)fVar27;
              iVar18 = FUN_1427be128(lVar2,param_2,local_13e);
              if ((iVar18 != 0) && (iVar18 == 2)) goto LAB_1427c30ce;
            }
            else {
LAB_1427c30ce:
              EnterCriticalSection(local_130);
              FUN_146884042(local_118,*(undefined8 *)(lVar2 + 0x14));
              lVar22 = *(longlong *)(param_1 + 0x270);
              iVar18 = *(int *)(param_1 + 0x278);
              uVar10 = 0xffffffff;
              if ((longlong)iVar18 != 0) {
                lVar20 = (longlong)iVar18 * 8;
                lVar21 = 0;
                do {
                  if (*(longlong *)(lVar22 + lVar21 * 8) == lVar2) {
                    uVar10 = (uint)lVar21;
                    break;
                  }
                  lVar21 = lVar21 + 1;
                  lVar20 = lVar20 + -8;
                } while (lVar20 != 0);
              }
              if (~uVar10 + iVar18 != 0) {
                memmove((void *)(lVar22 + (longlong)(int)uVar10 * 8),
                        (void *)(lVar22 + (longlong)(int)uVar10 * 8 + 8),
                        (longlong)(int)(~uVar10 + iVar18) << 3);
                iVar18 = *(int *)(param_1 + 0x278);
              }
              *(int *)(param_1 + 0x278) = iVar18 + -1;
              FUN_14688411e(local_120);
              iVar18 = *(int *)(param_1 + 0x2d8) + -1;
              if (iVar18 == 0) {
                iVar18 = 0;
              }
              else {
                memmove(*(void **)(param_1 + 0x2d0),
                        (void *)((longlong)*(void **)(param_1 + 0x2d0) + 8),(longlong)iVar18 << 3);
                iVar18 = *(int *)(param_1 + 0x2d8) + -1;
              }
              *(int *)(param_1 + 0x2d8) = iVar18;
              LeaveCriticalSection(local_130);
              FUN_1427be046(param_1);
            }
            if (bVar17 != 0) {
              QueryPerformanceCounter(&local_110);
              dVar26 = ((double)local_110.QuadPart * DAT_14c83f420 + 16777216.0) - (double)LVar6;
              if ((dVar25 < dVar26) && (DAT_14c948b4c != 0)) {
                if ((((double)DAT_14c75ec60 != (double)LVar6) ||
                    (NAN((double)DAT_14c75ec60) || NAN((double)LVar6))) &&
                   (((double)_DAT_14c75ec58 < dVar26 && ((double)_DAT_14c75ec54 * dVar25 < dVar26)))
                   ) {
                  DAT_14c75ec60 = LVar6;
                }
              }
              goto LAB_1427c300e;
            }
          }
          else if (local_f4 == 1) {
            dVar25 = (double)local_f8;
            QueryPerformanceCounter(&local_e8);
            dVar26 = ((double)local_e8.QuadPart * DAT_14c83f420 + 16777216.0) - (double)LVar3;
            if ((dVar25 < dVar26) && (DAT_14c948b4c != 0)) {
              if ((((double)DAT_14c75ec60 != (double)LVar3) ||
                  (NAN((double)DAT_14c75ec60) || NAN((double)LVar3))) &&
                 (((double)_DAT_14c75ec58 < dVar26 && ((double)_DAT_14c75ec54 * dVar25 < dVar26))))
              {
                DAT_14c75ec60.s = LVar3.s;
              }
            }
LAB_1427c300e:
            iVar18 = iVar19 + 1;
            if (dVar25 < dVar26) break;
          }
          iVar19 = iVar19 + 1;
          iVar18 = iVar19;
        } while (DAT_14c950c20[2] == 0);
LAB_1427c34d7:
        if ((char)local_13c != '\0') {
          LOCK();
          DAT_14c948734 = DAT_14c948734 + -1;
          UNLOCK();
        }
      }
      else {
        iVar12 = 2;
        iVar18 = 0;
        if ((*(int *)(param_1 + 0x278) != 0) && (0 < *(int *)(param_1 + 0x278))) {
          local_138 = (longlong *)(param_1 + 0x270);
          local_128 = (LPCRITICAL_SECTION)(param_1 + 0x2e0);
          local_130 = (LPCRITICAL_SECTION)(param_1 + 0x280);
          iVar18 = 0;
          iVar19 = 0;
          do {
            LVar3 = (LARGE_INTEGER)((LARGE_INTEGER *)(*local_138 + (longlong)iVar19 * 8))->QuadPart;
            plVar4 = (longlong *)*param_6;
            local_e8 = LVar3;
            if ((plVar4 == (longlong *)0x0) || (DAT_14c948688 != 0)) {
LAB_1427c32c9:
              if (((*(char *)(local_e8.QuadPart + 0x110) != '\0') ||
                  (iVar12 = FUN_1427be128(local_e8.QuadPart,param_2,param_3 & 0xffffffff,&local_ec),
                  iVar12 == 2)) && (iVar12 = 2, *(char *)(local_e8.QuadPart + 0x111) == '\0')) {
                *(undefined1 *)(local_e8.QuadPart + 0x111) = 1;
                FUN_1427be046(param_1,local_e8.QuadPart);
                p_Var1 = local_128;
                EnterCriticalSection(local_128);
                FUN_146884042(local_130,*(undefined8 *)(local_e8.QuadPart + 0x14));
                local_110.QuadPart = (LONGLONG)&local_e8;
                FUN_146880cfc(local_138,&local_110);
                iVar19 = iVar19 + -1;
                LeaveCriticalSection(p_Var1);
              }
            }
            else {
              iVar24 = (int)plVar4[1];
              iVar12 = 1;
              if ((longlong)iVar24 == 0) {
                param_3 = CONCAT71((int7)(int3)((uint)iVar24 >> 8),local_13e);
              }
              else {
                lVar2 = *plVar4;
                lVar22 = (longlong)iVar24 * 4;
                lVar20 = 0;
                local_13c = iVar18;
                do {
                  cVar9 = FUN_146879fc8(LVar3.QuadPart,*(undefined4 *)(lVar2 + lVar20));
                  uVar23 = (undefined7)((ulonglong)lVar22 >> 8);
                  iVar18 = local_13c;
                  if (cVar9 != '\0') {
                    param_3 = CONCAT71(uVar23,local_13e);
                    goto LAB_1427c32c9;
                  }
                  lVar20 = lVar20 + 4;
                } while (lVar22 != lVar20);
                param_3 = CONCAT71(uVar23,local_13e);
                iVar12 = 1;
              }
            }
            fVar27 = local_ec;
            QueryPerformanceCounter(&local_110);
            fVar27 = fVar27 - (float)(((double)local_110.QuadPart * DAT_14c83f420 + 16777216.0) -
                                     (double)LVar6);
            fVar29 = 0.0;
            if (0.0 <= fVar27) {
              fVar29 = fVar27;
            }
            FUN_1427b9f4a(param_1,param_2,(double)fVar29);
            if ((local_13d & 1) == 0) {
              uVar16 = FUN_141552594();
              FUN_14275a71e(uVar16,0);
            }
            iVar18 = iVar18 + 1;
            if (iVar12 == 0) {
              iVar12 = 0;
              break;
            }
            iVar19 = iVar19 + 1;
          } while (iVar19 < *(int *)(param_1 + 0x278));
        }
      }
      *param_5 = *param_5 | 0 < iVar18;
      piVar7 = DAT_14c950c20;
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar19 = *(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60), iVar19 != 2)) {
        if (iVar19 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          if (DVar13 == DVar14) goto LAB_1427c352e;
        }
        LOCK();
        *piVar7 = *piVar7 + -1;
        UNLOCK();
      }
LAB_1427c352e:
      if (iVar18 != 0) goto LAB_1427c353c;
    }
    if ((iVar12 != 2) || ((DAT_14c948774 & 1) == 0)) goto LAB_1427c353c;
    lVar2 = *(longlong *)(param_1 + 0x10);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0xd0));
    iVar12 = *(int *)(lVar2 + 0x58);
    iVar18 = *(int *)(lVar2 + 0x84);
    if ((LPCRITICAL_SECTION)(lVar2 + 0xd0) != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0xd0));
    }
    uVar16 = 1;
    if (((iVar12 <= iVar18) && (DAT_14c950c20[2] == 0)) && (DAT_14c950c28 == '\0')) {
      lVar2 = *(longlong *)(param_1 + 0x470);
      if (((*(int *)(lVar2 + 0xa0) == *(int *)(lVar2 + 0xcc)) &&
          (*(int *)(lVar2 + 0xf0) == *(int *)(lVar2 + 0x11c))) && (*(int *)(param_1 + 0x408) == 0))
      {
        FUN_1427ba47a(param_1 + 0x410,0);
      }
      if (bVar17 != 0) {
        QueryPerformanceCounter(&local_110);
        dVar25 = ((double)local_110.QuadPart * DAT_14c83f420 + 16777216.0) - (double)LVar5;
        if ((param_4 < dVar25) && (DAT_14c948b4c != 0)) {
          if ((((double)DAT_14c75ec60 != (double)LVar5) ||
              (NAN((double)DAT_14c75ec60) || NAN((double)LVar5))) &&
             (((double)_DAT_14c75ec58 < dVar25 && ((double)_DAT_14c75ec54 * param_4 < dVar25)))) {
            DAT_14c75ec60 = LVar5;
          }
        }
        uVar16 = 0x1e;
        if (param_4 < dVar25) goto LAB_1427c2b0c;
      }
      uVar16 = 0x1e;
    }
LAB_1427c2b0c:
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))(*(longlong **)(param_1 + 0x28),uVar16,1);
  }
  else {
    QueryPerformanceCounter(&local_110);
    dVar25 = (double)local_110.QuadPart * DAT_14c83f420;
    FUN_14687b012(param_1);
    if (bVar17 != 0) {
      LVar5 = (LARGE_INTEGER)(dVar25 + 16777216.0);
      QueryPerformanceCounter(&local_110);
      dVar25 = ((double)local_110.QuadPart * DAT_14c83f420 + 16777216.0) - (double)LVar5;
      if ((param_4 < dVar25) && (DAT_14c948b4c != 0)) {
        if ((((double)DAT_14c75ec60 != (double)LVar5) ||
            (NAN((double)DAT_14c75ec60) || NAN((double)LVar5))) &&
           (((double)_DAT_14c75ec58 < dVar25 && ((double)_DAT_14c75ec54 * param_4 < dVar25)))) {
          DAT_14c75ec60 = LVar5;
        }
      }
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x80) = 0;
    UNLOCK();
  }
  iVar12 = 2;
LAB_1427c353c:
  if ((local_e0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return iVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427c3654 FUN_1427c3654 body=1535 status=ok
// SIG undefined FUN_1427c3654(void)

ulonglong FUN_1427c3654(longlong *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong **pplVar13;
  uint *puVar14;
  code *pcVar15;
  uint uVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_70;
  uint *local_68;
  longlong **local_60;
  int local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9487d0) && (FUN_144b3d300(&DAT_14c9487d0), DAT_14c9487d0 == -1)) {
    FUN_14687ed8a();
    atexit((_func_5014 *)&LAB_1427c6643);
    _Init_thread_footer(&DAT_14c9487d0);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1a);
  local_78 = param_1 + 7;
  while (DAT_14c9487c8 != 0) {
    plVar17 = *(longlong **)(DAT_14c9487c0 + -8 + (longlong)DAT_14c9487c8 * 8);
    DAT_14c9487c8 = DAT_14c9487c8 + -1;
    local_50 = plVar17;
    FUN_1406ce816(&DAT_14c9487c0);
    EnterCriticalSection(lpCriticalSection);
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      uVar20 = (uint)((ulonglong)plVar17 >> 0x10);
      uVar10 = (uint)plVar17 & 0xffff;
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = local_78;
      }
      iVar3 = *(int *)((longlong)plVar4 +
                      (ulonglong)
                      ((int)param_1[9] - 1U &
                      (int)((ulonglong)plVar17 >> 0x20) + ((uint)plVar17 << 0x10 | uVar10) +
                      (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar10 >> 4)) * 4);
      if (iVar3 != -1) {
        do {
          plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x28);
          if ((longlong *)*plVar4 == plVar17) {
            if (((ulonglong)(plVar4 + 1) & 0xfffffffffffffff7) != 0) {
              pcVar15 = (code *)plVar4[2];
              if (pcVar15 == (code *)0x0) goto LAB_1427c37bc;
              plVar4[2] = 0;
              iVar3 = (int)plVar4[1];
              goto LAB_1427c3b20;
            }
            break;
          }
          iVar3 = (int)plVar4[4];
        } while (iVar3 != -1);
      }
    }
    FUN_1400021e4(&local_50,&local_60);
    pplVar13 = (longlong **)&DAT_149dfb77a;
    if (local_58 != 0) {
      pplVar13 = local_60;
    }
    FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0x146,
                  L"%s was listed as a fixed load order but was not found,",pplVar13);
    if (local_60 != (longlong **)0x0) {
      FUN_1400020a8();
    }
LAB_1427c37bc:
    LeaveCriticalSection(lpCriticalSection);
  }
  EnterCriticalSection(lpCriticalSection);
  local_68 = (uint *)(param_1 + 0xc);
  iVar3 = (int)param_1[0xf];
  if (iVar3 == 0) {
    uVar19 = 1;
    uVar6 = 0;
    iVar12 = 0;
    iVar9 = 0;
  }
  else {
    puVar14 = (uint *)param_1[0xe];
    if ((uint *)param_1[0xe] == (uint *)0x0) {
      puVar14 = local_68;
    }
    uVar20 = *puVar14;
    if (uVar20 == 0) {
      iVar9 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar9 = iVar3 + -1;
      }
      uVar6 = 0;
      uVar19 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar19 = uVar6;
      }
      iVar12 = 0;
      do {
        if (uVar19 == uVar6) goto LAB_1427c39ea;
        iVar12 = iVar12 + 0x20;
        uVar20 = puVar14[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar20 == 0);
    }
    else {
      uVar6 = 0;
      iVar12 = 0;
    }
    uVar19 = (ulonglong)(-uVar20 & uVar20);
    uVar1 = uVar19 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar9 = (iVar12 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar9) {
      iVar9 = iVar3;
    }
  }
  if (iVar9 != iVar3) {
    local_70 = param_1[10];
    iVar7 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar7 = iVar3 + -1;
    }
    iVar7 = iVar7 >> 5;
    uVar20 = 0xffffffff;
    do {
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        lVar18 = *(longlong *)(local_70 + (longlong)iVar9 * 0x20);
        uVar10 = (uint)((ulonglong)lVar18 >> 0x10);
        uVar16 = (uint)lVar18 & 0xffff;
        plVar17 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar17 = local_78;
        }
        iVar9 = *(int *)((longlong)plVar17 +
                        (ulonglong)
                        ((int)param_1[9] - 1U &
                        (int)((ulonglong)lVar18 >> 0x20) + ((uint)lVar18 << 0x10 | uVar16) +
                        (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar16 >> 4)) * 4);
        if (iVar9 != -1) {
          do {
            plVar17 = (longlong *)((longlong)iVar9 * 0x28 + *param_1);
            if (*plVar17 == lVar18) {
              if ((((ulonglong)(plVar17 + 1) & 0xfffffffffffffff7) != 0) &&
                 (pcVar15 = (code *)plVar17[2], pcVar15 != (code *)0x0)) {
                plVar17[2] = 0;
                iVar3 = (int)plVar17[1];
LAB_1427c3b20:
                LeaveCriticalSection(lpCriticalSection);
                plVar17 = (longlong *)(*pcVar15)();
                uVar6 = CONCAT71((int7)((ulonglong)lpCriticalSection >> 8),1);
                FUN_140aa7318(plVar17,1);
                if (iVar3 == 1) {
                  if (plVar17 == (longlong *)0x0) {
                    iVar3 = (int)param_1[0x17];
                  }
                  else {
                    iVar3 = (int)param_1[0x17];
                    plVar4 = plVar17;
                    do {
                      if (iVar3 != 0) {
                        lVar18 = 0;
                        do {
                          if (*(longlong **)(param_1[0x16] + lVar18) == plVar4) {
                            iVar3 = (int)param_1[0x19];
                            *(uint *)(param_1 + 0x19) = iVar3 + 1U;
                            if (*(uint *)((longlong)param_1 + 0xcc) < iVar3 + 1U) {
                              FUN_140a0062e(param_1 + 0x18,iVar3);
                            }
                            *(longlong **)(param_1[0x18] + (longlong)iVar3 * 8) = plVar17;
                            goto LAB_1427c3a77;
                          }
                          lVar18 = lVar18 + 8;
                        } while ((longlong)iVar3 << 3 != lVar18);
                      }
                      plVar4 = (longlong *)plVar4[8];
                    } while (plVar4 != (longlong *)0x0);
                  }
                  plVar4 = param_1 + 0x16;
                  *(uint *)(param_1 + 0x17) = iVar3 + 1U;
                  if (*(uint *)((longlong)param_1 + 0xbc) < iVar3 + 1U) {
                    FUN_140a0062e(plVar4,iVar3);
                  }
                  *(longlong **)(*plVar4 + (longlong)iVar3 * 8) = plVar17;
                  if (plVar17[0x22] == 0) {
                    (**(code **)(*plVar17 + 1000))(plVar17);
                  }
                  *(int *)(param_1 + 0x17) = (int)param_1[0x17] + -1;
                  FUN_14593efea(plVar4);
                }
                goto LAB_1427c3a77;
              }
              break;
            }
            iVar9 = (int)plVar17[4];
          } while (iVar9 != -1);
        }
      }
      uVar20 = uVar20 & ~(uint)uVar19;
      puVar14 = (uint *)param_1[0xe];
      if ((uint *)param_1[0xe] == (uint *)0x0) {
        puVar14 = local_68;
      }
      iVar9 = (int)uVar6;
      lVar18 = (longlong)iVar9;
      uVar10 = puVar14[lVar18] & uVar20;
      if (uVar10 == 0) {
        iVar11 = iVar7;
        if (iVar7 < iVar9) {
          iVar11 = iVar9;
        }
        if (iVar7 <= iVar9) break;
        lVar21 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar10 = puVar14[lVar18 + lVar21 + 1];
          if (uVar10 != 0) break;
          lVar21 = lVar21 + 1;
          if (iVar11 - lVar18 == lVar21) goto LAB_1427c39ea;
        }
        uVar6 = (ulonglong)(iVar9 + (int)lVar21 + 1);
        uVar20 = 0xffffffff;
      }
      uVar19 = (ulonglong)(-uVar10 & uVar10);
      uVar1 = uVar19 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar3);
  }
LAB_1427c39ea:
  LeaveCriticalSection(lpCriticalSection);
  if ((longlong)(int)param_1[0x19] == 0) {
    uVar6 = 0;
  }
  else {
    plVar5 = (longlong *)param_1[0x18];
    plVar4 = plVar5 + (int)param_1[0x19];
    plVar17 = param_1 + 0x16;
LAB_1427c3a18:
    plVar2 = (longlong *)*plVar5;
    if (plVar2 == (longlong *)0x0) {
LAB_1427c3a63:
      FUN_14000f986(0x3a83126f);
    }
    else {
      plVar8 = plVar2;
      do {
        if ((int)param_1[0x17] != 0) {
          lVar18 = 0;
          do {
            if (*(longlong **)(param_1[0x16] + lVar18) == plVar8) {
              plVar5 = plVar5 + 1;
              if (plVar5 != plVar4) goto LAB_1427c3a18;
              goto LAB_1427c3a63;
            }
            lVar18 = lVar18 + 8;
          } while ((longlong)(int)param_1[0x17] << 3 != lVar18);
        }
        plVar8 = (longlong *)plVar8[8];
      } while (plVar8 != (longlong *)0x0);
      local_60 = &local_50;
      local_50 = plVar2;
      FUN_14687ef6e();
      iVar3 = (int)param_1[0x17];
      *(uint *)(param_1 + 0x17) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xbc) < iVar3 + 1U) {
        FUN_140a0062e(plVar17,iVar3);
      }
      *(longlong **)(*plVar17 + (longlong)iVar3 * 8) = local_50;
      if (local_50[0x22] == 0) {
        (**(code **)(*local_50 + 1000))();
      }
      *(int *)(param_1 + 0x17) = (int)param_1[0x17] + -1;
      FUN_14593efea(plVar17);
    }
    uVar6 = CONCAT71((int7)((ulonglong)plVar17 >> 8),1);
  }
LAB_1427c3a77:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1427c3c54 FUN_1427c3c54 body=984 status=ok
// SIG undefined FUN_1427c3c54(void)

undefined8 * FUN_1427c3c54(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  *param_1 = &PTR_LAB_149e64f20;
  param_1[1] = &PTR_FUN_149e64f50;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9488d8) {
    FUN_144b3d300(&DAT_14c9488d8);
    if (DAT_14c9488d8 == -1) {
      FUN_14687f1ac();
      atexit((_func_5014 *)&LAB_1427c6654);
      _Init_thread_footer(&DAT_14c9488d8);
    }
  }
  param_1[2] = &DAT_14c9487d8;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xb),4000);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1d),4000);
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x30),4000);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0x400000000;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3f));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x3f),4000);
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5c));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x5c),4000);
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x6b),4000);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 900) = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x444) = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  if (DAT_14c948738 == (undefined8 *)0x0) {
    DAT_14c948738 = param_1;
  }
  *(undefined4 *)(param_1 + 0x8f) = param_2;
  DAT_14c872ba8 = '\x01';
  uVar1 = FUN_14001cc68(0x150,0x10);
  FUN_14687ab60(uVar1);
  param_1[0x8e] = uVar1;
  uVar1 = FUN_1405d8a54(0);
  param_1[5] = uVar1;
  uVar1 = FUN_1405d8a54(0);
  param_1[6] = uVar1;
  uVar1 = FUN_1405d8a54(0);
  param_1[7] = uVar1;
  uVar1 = FUN_1405d8a54(0);
  param_1[8] = uVar1;
  if (DAT_14c872ba8 == '\0') {
    pcVar2 = (char *)FUN_14163927a();
    if (*pcVar2 == '\x01') {
      FUN_1427c4030(param_1 + 1);
    }
  }
  return param_1;
}



// FUNCTION 1427c402c FUN_1427c402c body=3 status=ok
// SIG undefined FUN_1427c402c(void)

undefined1 FUN_1427c402c(void)

{
  return 1;
}



// FUNCTION 1427c4030 FUN_1427c4030 body=86 status=ok
// SIG undefined FUN_1427c4030(void)

void FUN_1427c4030(longlong param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  FUN_145e6e082();
  if (*(longlong *)(param_1 + 0x10) == 0) {
    pcVar1 = (char *)FUN_14163927a();
    if (*pcVar1 == '\x01') {
      DAT_14c948774 = 1;
      uVar2 = FUN_1411b1052(param_1 + -8,L"FAsyncLoadingThread",0,0,0xffffffffffffffff,0);
      *(undefined8 *)(param_1 + 0x10) = uVar2;
    }
  }
  return;
}



// FUNCTION 1427c4086 FUN_1427c4086 body=399 status=ok
// SIG undefined FUN_1427c4086(void)

undefined8 FUN_1427c4086(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_51;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14c948730 = GetCurrentThreadId();
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar3 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar3 != 2)) {
    if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_1427c40fb;
    }
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
    (**(code **)(*DAT_14c872d28 + 0x78))();
  }
LAB_1427c40fb:
  if (*(int *)(param_1 + 0x20) == 0) {
    bVar4 = false;
    do {
      bVar9 = *(int *)(param_1 + 0x84) == 0;
      if (bVar9) {
        if (bVar4) {
          (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
        }
        if (*(int *)(DAT_14c950c20 + 8) == 0) {
          local_51 = 0;
          FUN_14687a51c(param_1,local_68);
          local_78 = &local_51;
          local_70 = local_68;
          FUN_1427c272a(param_1,1,0,0x4189374c);
          plVar8 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_60 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                lVar7 = *plVar8;
                goto LAB_1427c41b2;
              }
            }
          }
        }
      }
      else if (bVar4) {
        Sleep(1);
      }
      else {
        plVar8 = *(longlong **)(param_1 + 0x38);
        lVar7 = *plVar8;
LAB_1427c41b2:
        (**(code **)(lVar7 + 0x10))(plVar8);
      }
      bVar4 = !bVar9;
    } while (*(int *)(param_1 + 0x20) == 0);
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1427c4216 FUN_1427c4216 body=177 status=ok
// SIG undefined FUN_1427c4216(void)

void FUN_1427c4216(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar2 = *(int *)(lVar3 + 0xc60);
  if (DAT_14c86a9f8 == '\x01') {
    if (iVar2 == 2) goto LAB_1427c4264;
    if (iVar2 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) {
        iVar2 = *(int *)(lVar3 + 0xc60);
        goto joined_r0x0001427c42a4;
      }
    }
  }
  else {
joined_r0x0001427c42a4:
    if (iVar2 != 4) goto LAB_1427c4264;
  }
  FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0x1594,
                L"Async loading can only be suspended from the main thread");
LAB_1427c4264:
  LOCK();
  piVar1 = (int *)(param_1 + 0x7c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 == 0) && ((DAT_14c948774 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001427c4295. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))
              (*(longlong **)(param_1 + 0x30),0xffffffff,0);
    return;
  }
  return;
}



// FUNCTION 1427c42c8 FUN_1427c42c8 body=88 status=ok
// SIG undefined FUN_1427c42c8(void)

void FUN_1427c42c8(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x7c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 1) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0x15a7,
                  L"ResumeAsyncLoadingThread: Async loading was resumed more times than it was suspended."
                 );
  }
  else if ((iVar2 == 1) && ((DAT_14c948774 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001427c42ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))
              (*(longlong **)(param_1 + 0x38),0xffffffff,0);
    return;
  }
  return;
}



// FUNCTION 1427c4320 FUN_1427c4320 body=750 status=ok
// SIG undefined FUN_1427c4320(void)

void FUN_1427c4320(longlong *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  int local_70;
  LPCRITICAL_SECTION local_68;
  ulonglong local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((char)param_1[0x1f] == '\x01') {
    FUN_14687a9c0();
    if (DAT_14c948aa0 != (longlong *)0x0) {
      local_58 = (undefined2 *)0x0;
      local_50 = 0;
      (**(code **)(*DAT_14c948aa0 + 0x60))();
    }
    local_68 = (LPCRITICAL_SECTION)(param_1 + 0x1a);
    EnterCriticalSection(local_68);
    uVar2 = *(uint *)(param_1 + 5);
    uVar15 = (ulonglong)uVar2;
    if (uVar2 == 0) {
      uVar8 = 1;
      uVar11 = 0;
      iVar9 = 0;
      uVar4 = 0;
    }
    else {
      puVar3 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar3 = (uint *)(param_1 + 2);
      }
      uVar4 = *puVar3;
      if (uVar4 == 0) {
        iVar9 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar9 = uVar2 - 1;
        }
        uVar11 = 0;
        uVar7 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar7 = uVar11;
        }
        iVar9 = 0;
        do {
          if (uVar7 == uVar11) goto LAB_1427c4438;
          iVar9 = iVar9 + 0x20;
          uVar4 = puVar3[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar4 == 0);
      }
      else {
        uVar11 = 0;
        iVar9 = 0;
      }
      uVar8 = (ulonglong)(-uVar4 & uVar4);
      uVar7 = uVar8 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar4 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if ((int)uVar2 <= (int)uVar4) {
        uVar4 = uVar2;
      }
    }
    if (uVar4 != uVar2) {
      uVar16 = 0xffffffff;
      local_60 = uVar15;
      do {
        iVar10 = *(int *)(*param_1 + 0xc + (longlong)(int)uVar4 * 0x28);
        if (((iVar10 != 2) &&
            (lVar12 = *param_1 + (longlong)(int)uVar4 * 0x28, *(char *)(lVar12 + 0x18) == '\0')) &&
           (DAT_14c872ba8 == '\x01')) {
          uVar1 = *(undefined4 *)(lVar12 + 8);
          FUN_1400021e4(lVar12,&local_58);
          puVar14 = &DAT_149dfb77a;
          if (local_50 != 0) {
            puVar14 = local_58;
          }
          local_78 = uVar1;
          local_70 = iVar10;
          FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0x10a,
                        L"%s (%d) was not complete (%d) after registration was complete.",puVar14);
          if (local_58 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          uVar2 = *(uint *)(param_1 + 5);
          uVar15 = local_60;
        }
        uVar16 = uVar16 & ~(uint)uVar8;
        puVar3 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar3 = (uint *)(param_1 + 2);
        }
        iVar10 = (int)uVar11;
        lVar12 = (longlong)iVar10;
        uVar4 = puVar3[lVar12] & uVar16;
        if (uVar4 == 0) {
          iVar5 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar5 = uVar2 - 1;
          }
          iVar5 = iVar5 >> 5;
          iVar9 = iVar9 + 0x20;
          iVar6 = iVar5;
          if (iVar5 < iVar10) {
            iVar6 = iVar10;
          }
          if (iVar10 < iVar5) {
            lVar13 = 0;
            do {
              uVar4 = puVar3[lVar12 + lVar13 + 1];
              if (uVar4 != 0) {
                uVar11 = (ulonglong)(iVar10 + (int)lVar13 + 1);
                uVar16 = 0xffffffff;
                goto LAB_1427c45cb;
              }
              iVar9 = iVar9 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar6 - lVar12 != lVar13);
            uVar16 = 0xffffffff;
            lVar12 = (longlong)iVar6;
          }
          uVar11 = lVar12 + 1U & 0xffffffff;
          uVar4 = uVar2;
        }
        else {
LAB_1427c45cb:
          uVar8 = (ulonglong)(-uVar4 & uVar4);
          uVar7 = uVar8 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          uVar4 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar4) {
            uVar4 = uVar2;
          }
        }
      } while (uVar4 != (uint)uVar15);
    }
LAB_1427c4438:
    if ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84)) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0x112,
                    L"Initial load is complete, but we still have %d waiting packages.");
    }
    if ((DAT_14c872ba8 == '\x01') && ((int)param_1[0x15] != 0)) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0x11a,
                    L"Initial load is complete, but we still have %d imports to fire (listed above)."
                   );
    }
    FUN_14687fb6c(param_1);
    *(undefined4 *)(param_1 + 0x15) = 0;
    if (*(int *)((longlong)param_1 + 0xac) != 0) {
      FUN_1402191ca(param_1 + 0x14,0);
    }
    *(undefined1 *)(param_1 + 0x1f) = 0;
    LeaveCriticalSection(local_68);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427c4610 FUN_1427c4610 body=270 status=ok
// SIG undefined FUN_1427c4610(void)

void FUN_1427c4610(longlong param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  if ((param_4 != 2) && (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4))) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar4 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xb0);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0xb8) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar6 * 0x18);
        if (*plVar1 == lVar2) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) {
            return;
          }
          iVar6 = *(int *)(param_1 + 200);
          *(uint *)(param_1 + 200) = iVar6 + 1U;
          if (*(uint *)(param_1 + 0xcc) < iVar6 + 1U) {
            FUN_1468824fe((longlong *)(param_1 + 0xc0),iVar6);
          }
          *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar6 * 8) = plVar1[1];
          FUN_146884042((longlong *)(param_1 + 0x70),*param_2);
          return;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 1427c471e FUN_1427c471e body=258 status=ok
// SIG undefined FUN_1427c471e(void)

undefined8 FUN_1427c471e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
    lVar1 = *(longlong *)(param_2 + 0x14);
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar4 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xb0);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0xb8) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar6 * 0x18) == lVar1)
        goto LAB_1427c4800;
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar6 * 0x18 + 0x10);
      } while (iVar6 != -1);
    }
  }
  if ((*(longlong *)(param_2 + 0x50) == 0) ||
     ((*(byte *)(*(longlong *)(param_2 + 0x50) + 0x3e1) & 4) == 0)) {
    FUN_1401cb262(local_30);
    local_38 = 0;
    FUN_14687cd66(param_1,param_2 + 0x14,&local_38,local_30);
  }
  else if (param_1 != param_2) {
    uVar3 = 0;
    goto LAB_1427c4802;
  }
LAB_1427c4800:
  uVar3 = 1;
LAB_1427c4802:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427c4822 FUN_1427c4822 body=257 status=ok
// SIG undefined FUN_1427c4822(void)

undefined4 FUN_1427c4822(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)param_3[1];
  if (puVar1 == (undefined8 *)0x0) {
    local_28 = 0;
    local_30 = 0;
  }
  else {
    local_30 = *puVar1;
    *puVar1 = 0;
    local_28 = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)(puVar1 + 1) = 0;
  }
  local_40 = param_3[5];
  local_48 = *(undefined4 *)(param_3 + 4);
  local_58 = *(undefined4 *)(param_3 + 3);
  local_50 = *(undefined4 *)((longlong)param_3 + 0x1c);
  uVar4 = FUN_14687d650(param_1,param_2,*param_3);
  lVar2 = param_3[2];
  if (lVar2 != 0) {
    FUN_1401cb1ee(lVar2);
    FUN_1400020a8(lVar2);
  }
  plVar3 = (longlong *)param_3[1];
  if (plVar3 == (longlong *)0x0) goto LAB_1427c48a9;
  if ((int)plVar3[1] == 0) {
LAB_1427c490b:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*plVar3;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(plVar3 + 1) = 0;
      goto LAB_1427c490b;
    }
  }
  FUN_1400020a8(plVar3);
LAB_1427c48a9:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427c4924 FUN_1427c4924 body=634 status=ok
// SIG undefined FUN_1427c4924(void)

void FUN_1427c4924(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  double dVar5;
  char cVar6;
  undefined8 uVar7;
  undefined1 auStack_e8 [32];
  LARGE_INTEGER *local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  LARGE_INTEGER local_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  longlong *local_80;
  LARGE_INTEGER local_78;
  longlong *plStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(int *)(param_1 + 0x378) != 0) || (*(int *)(param_1 + 0x37c) != 0)) {
    if (*(int *)(param_1 + 0x7c) != 0) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0x1d96,
                    L"Cannot Flush Async Loading while async loading is suspended (%d)",
                    *(undefined4 *)(param_1 + 0x7c));
    }
    lVar1 = param_1 + -8;
    if (param_2[2] != 0) {
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      cVar6 = FUN_14687d8a6(lVar1);
      if (cVar6 == '\0') goto LAB_1427c4ae6;
    }
    FUN_1447f69b6(&DAT_14c868788);
    QueryPerformanceCounter(&local_78);
    dVar5 = (double)local_78.QuadPart * DAT_14c83f420;
    local_78.QuadPart = 0;
    plStack_70 = (longlong *)0x0;
    if (param_2[2] != 0) {
      local_98 = *param_2;
      uStack_94 = param_2[1];
      uStack_90 = param_2[2];
      uStack_8c = param_2[3];
      FUN_14687a3a0(lVar1,local_88);
      FUN_14687d95c(&local_78,local_88);
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_80 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar3 = (int *)((longlong)local_80 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_80 + 0x10))(local_80);
          }
        }
      }
    }
    while ((*(int *)(param_1 + 0x378) != 0 || (*(int *)(param_1 + 0x37c) != 0))) {
      local_a8.s = local_78.s;
      local_a0 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
        UNLOCK();
      }
      local_c8 = &local_a8;
      FUN_1427c0990(lVar1,0,0,0);
      if (param_2[2] != 0) {
        local_b8 = *param_2;
        uStack_b4 = param_2[1];
        uStack_b0 = param_2[2];
        uStack_ac = param_2[3];
        cVar6 = FUN_14687d8a6(lVar1);
        if (cVar6 == '\0') break;
      }
      if (DAT_14c948774 == '\x01') {
        uVar7 = FUN_141552594();
        FUN_14275a71e(uVar7);
        SwitchToThread();
      }
    }
    plVar4 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_70 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    QueryPerformanceCounter(&local_78);
    DAT_14c948b40 =
         (((double)local_78.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar5 + 16777216.0)) +
         DAT_14c948b40;
    DAT_14c948b48 = DAT_14c948b48 + 1;
  }
LAB_1427c4ae6:
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427c4ba0 FUN_1427c4ba0 body=518 status=ok
// SIG undefined FUN_1427c4ba0(void)

char FUN_1427c4ba0(longlong param_1,undefined8 *param_2,double param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  char cVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 in_XMM2_Qb;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_d8 [32];
  LARGE_INTEGER *local_b8;
  LARGE_INTEGER local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(int *)(param_1 + 0x378) == 0) && (*(int *)(param_1 + 0x37c) == 0)) {
LAB_1427c4d58:
    cVar3 = '\x02';
LAB_1427c4d5d:
    if ((local_90 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
      return cVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0x1dd5,
                  L"Cannot Flush Async Loading while async loading is suspended (%d)",
                  *(undefined4 *)(param_1 + 0x7c));
  }
  auVar7._0_8_ = ~-(ulonglong)(0.0 < param_3) & 0x40ac200000000000;
  auVar7._8_8_ = 0;
  auVar1._8_4_ = (int)in_XMM2_Qb;
  auVar1._0_8_ = (ulonglong)param_3 & -(ulonglong)(0.0 < param_3);
  auVar1._12_4_ = (int)((ulonglong)in_XMM2_Qb >> 0x20);
  auVar8 = auVar7 | auVar1;
  do {
    bVar5 = true;
    if (*(int *)(param_1 + 0x378) == 0) {
      bVar5 = *(int *)(param_1 + 0x37c) != 0;
    }
    dVar6 = auVar8._0_8_;
    if ((!bVar5) || (dVar6 <= 0.0)) {
LAB_1427c4d47:
      cVar3 = (0.0 < dVar6) * '\x02';
      goto LAB_1427c4d5d;
    }
    cVar3 = (*(code *)*param_2)(param_2[1]);
    if (cVar3 != '\0') goto LAB_1427c4d47;
    QueryPerformanceCounter(&local_a8);
    dVar2 = (double)local_a8.QuadPart * DAT_14c83f420;
    local_a8.QuadPart = 0;
    uStack_a0 = 0;
    local_b8 = &local_a8;
    FUN_1427c0990(param_1 + -8,1,1,dVar6);
    if ((*(int *)(param_1 + 0x378) == 0) && (*(int *)(param_1 + 0x37c) == 0)) goto LAB_1427c4d58;
    if (DAT_14c948774 == '\x01') {
      uVar4 = FUN_141552594();
      FUN_14275a71e(uVar4,0);
      SwitchToThread();
    }
    QueryPerformanceCounter(&local_a8);
    auVar8._0_8_ = dVar6 - (((double)local_a8.QuadPart * DAT_14c83f420 + 16777216.0) -
                           (dVar2 + 16777216.0));
  } while( true );
}



// FUNCTION 1427c4da8 FUN_1427c4da8 body=106 status=ok
// SIG undefined FUN_1427c4da8(void)

char FUN_1427c4da8(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &local_28;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1427c0990(param_1 + -8);
  cVar1 = '\0';
  if (*(int *)(param_1 + 0x378) == 0) {
    cVar1 = (*(int *)(param_1 + 0x37c) == 0) * '\x02';
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427c4e22 FUN_1427c4e22 body=978 status=ok
// SIG undefined FUN_1427c4e22(void)

undefined8 *
FUN_1427c4e22(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined8 *local_e8;
  char local_e0;
  undefined1 local_df;
  longlong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  LARGE_INTEGER local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_144869430();
  *param_1 = &PTR_FUN_149e65690;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0xffffffffffffffff;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x106) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x116) = 1;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2c] = *param_2;
  *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(param_2 + 1);
  QueryPerformanceCounter(&local_98);
  param_1[0x2e] = (double)local_98.QuadPart * DAT_14c83f420 + 16777216.0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = *param_4;
  param_1[0x34] = param_4[2];
  param_4[2] = 0;
  uVar2 = *(undefined4 *)(param_4 + 4);
  uVar3 = *(undefined4 *)((longlong)param_4 + 0x24);
  uVar4 = *(undefined4 *)(param_4 + 5);
  uVar5 = *(undefined4 *)((longlong)param_4 + 0x2c);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar7 = *(undefined4 *)(param_4 + 7);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_4 + 6);
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar6;
  *(undefined4 *)(param_1 + 0x39) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = uVar8;
  *(undefined4 *)(param_1 + 0x36) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = uVar3;
  *(undefined4 *)(param_1 + 0x37) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar5;
  if (param_1[0x32] != 0) {
    *param_4 = 0;
  }
  param_1[0x3a] = 0;
  param_1[0x3c] = 0;
  param_1[0x42] = param_3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  plVar1 = param_1 + 0x24;
  local_f8 = 0;
  (**(code **)(*DAT_14c9518c8 + 0x30))(DAT_14c9518c8,&local_e8,param_1 + 0x2c,0);
  puVar9 = local_e8;
  local_e8 = (undefined8 *)0x0;
  param_1[0x12] = puVar9;
  if (local_e0 != '\0') {
    FUN_14572541c(param_1);
    *(undefined1 *)((longlong)param_1 + 0x114) = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x116) = local_df;
  local_d8 = *plVar1;
  uStack_90 = param_1[0x25];
  local_c8 = (longlong *)param_1[0x26];
  uStack_80 = param_1[0x27];
  local_78 = param_1[0x28];
  uStack_70 = param_1[0x29];
  local_68 = param_1[0x2a];
  uStack_60 = param_1[0x2b];
  uVar11 = local_68;
  uVar12 = uStack_60;
  local_88 = local_c8;
  uVar10 = uStack_80;
  local_98.QuadPart = local_d8;
  uVar13 = uStack_90;
  param_1[0x2a] = CONCAT44(uStack_a4,local_a8);
  param_1[0x2b] = CONCAT44(uStack_9c,uStack_a0);
  param_1[0x28] = &PTR_LAB_149e66490;
  param_1[0x29] = param_1;
  param_1[0x26] = 0;
  param_1[0x27] = CONCAT44(uStack_bc,uStack_c0);
  *plVar1 = (longlong)FUN_1427ccb98;
  param_1[0x25] = CONCAT44(uStack_cc,uStack_d0);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = local_78;
  uStack_b0 = uStack_70;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  uStack_90 = uVar13;
  uStack_80 = uVar10;
  local_68 = uVar11;
  uStack_60 = uVar12;
  if (local_d8 != 0) {
    plVar14 = local_c8;
    if (local_c8 == (longlong *)0x0) {
      plVar14 = &local_b8;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (DAT_14c872ba8 == '\x01') {
    local_d8 = param_1[0x3a];
    uStack_90 = param_1[0x3b];
    local_c8 = (longlong *)param_1[0x3c];
    uStack_80 = param_1[0x3d];
    local_78 = param_1[0x3e];
    uStack_70 = param_1[0x3f];
    local_68 = param_1[0x40];
    uStack_60 = param_1[0x41];
    uVar11 = local_68;
    uVar12 = uStack_60;
    local_88 = local_c8;
    uVar10 = uStack_80;
    local_98.QuadPart = local_d8;
    uVar13 = uStack_90;
    param_1[0x40] = CONCAT44(uStack_a4,local_a8);
    param_1[0x41] = CONCAT44(uStack_9c,uStack_a0);
    param_1[0x3e] = &PTR_LAB_149e664b0;
    param_1[0x3f] = param_1;
    param_1[0x3c] = 0;
    param_1[0x3d] = CONCAT44(uStack_bc,uStack_c0);
    param_1[0x3a] = FUN_1427ccfe6;
    param_1[0x3b] = CONCAT44(uStack_cc,uStack_d0);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    local_a8 = (undefined4)local_68;
    uStack_a4 = local_68._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    local_b8 = local_78;
    uStack_b0 = uStack_70;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    uStack_d0 = (undefined4)uStack_90;
    uStack_cc = uStack_90._4_4_;
    uStack_90 = uVar13;
    uStack_80 = uVar10;
    local_68 = uVar11;
    uStack_60 = uVar12;
    if (local_d8 != 0) {
      plVar14 = &local_b8;
      if (local_c8 != (longlong *)0x0) {
        plVar14 = local_c8;
      }
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  uVar13 = (**(code **)(*(longlong *)param_1[0x12] + 8))((longlong *)param_1[0x12],plVar1);
  param_1[0x13] = uVar13;
  if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)(local_e8,1);
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427c51f6 FUN_1427c51f6 body=460 status=ok
// SIG undefined FUN_1427c51f6(void)

void FUN_1427c51f6(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[0x42];
  if ((lVar1 != 0) &&
     ((*(undefined8 **)(lVar1 + 0x328) != param_1 || (*(char *)(lVar1 + 0x2e4) == '\0')))) {
    FUN_1400021e4(lVar1 + 0x318,&local_38);
    local_58 = &DAT_149dfb77a;
    if (local_30 != 0) {
      local_58 = local_38;
    }
    FUN_1400021e4(param_1 + 0x2c,&local_48);
    puVar4 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar4 = local_48;
    }
    FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0x1e7d,
                  L"Destroying FAsyncArchive %s that belongs to linker %s outside of the linker\'s DestroyLoader code!"
                  ,puVar4);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1427c53c4(param_1);
  puVar2 = (undefined8 *)param_1[0x12];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
    param_1[0x12] = 0;
  }
  if (param_1[0x3a] != 0) {
    plVar3 = param_1 + 0x3e;
    if ((longlong *)param_1[0x3c] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x3c];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x32] != 0) {
    plVar3 = param_1 + 0x36;
    if ((longlong *)param_1[0x34] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x34];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x24] != 0) {
    plVar3 = param_1 + 0x28;
    if ((longlong *)param_1[0x26] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x26];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *param_1 = &PTR__purecall_149e35f70;
  plVar3 = (longlong *)param_1[0xb];
  if (plVar3 != (longlong *)0x0) {
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar3);
  }
  lVar1 = param_1[0xf];
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427c53c4 FUN_1427c53c4 body=134 status=ok
// SIG undefined FUN_1427c53c4(void)

void FUN_1427c53c4(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1427c569c(param_1,0);
  FUN_1427c58f4(param_1,0);
  FUN_1427c5982(param_1);
  FUN_1427bdfea(param_1);
  plVar1 = *(longlong **)(param_1 + 0xa0);
  if (plVar1 == (longlong *)0x0) goto LAB_1427c542b;
  if (*(char *)((longlong)plVar1 + 0x51) == '\0') {
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
    plVar1 = *(longlong **)(param_1 + 0xa0);
    if (plVar1 != (longlong *)0x0) goto LAB_1427c5416;
  }
  else {
LAB_1427c5416:
    (**(code **)*plVar1)(plVar1,1);
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
LAB_1427c542b:
  if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001427c543f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x20))();
    return;
  }
  return;
}



// FUNCTION 1427c544a FUN_1427c544a body=592 status=ok
// SIG undefined FUN_1427c544a(void)

ulonglong FUN_1427c544a(longlong param_1,longlong param_2,longlong param_3,byte param_4,
                       undefined8 *param_5)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined7 uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x110);
  bVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))();
  uVar6 = (undefined7)((ulonglong)param_1 >> 8);
  if (iVar1 != 1) {
    if ((param_3 == 0) ||
       ((*(longlong *)(param_1 + 0xe0) <= param_2 &&
        (param_3 + param_2 <= *(longlong *)(param_1 + 0xe8))))) {
      uVar5 = CONCAT71(uVar6,1);
LAB_1427c563f:
      if (param_5 != (undefined8 *)0x0) {
        (**(code **)*param_5)(param_5,1);
      }
      goto LAB_1427c5651;
    }
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      if ((*(longlong *)(param_1 + 0xf0) <= param_2) &&
         (param_3 + param_2 <= *(longlong *)(param_1 + 0xf0) + *(longlong *)(param_1 + 0xf8))) {
        if (*(char *)(*(longlong *)(param_1 + 0xb8) + 0x51) == '\x01') {
          FUN_1427c5bec(param_1);
          uVar5 = CONCAT71(uVar6,*(char *)(param_1 + 0x114) == '\0');
        }
        else {
          uVar5 = 0;
        }
        goto LAB_1427c563f;
      }
      FUN_14687d9f8(param_1);
    }
  }
  *(longlong *)(param_1 + 0xf0) = param_2;
  *(longlong *)(param_1 + 0xf8) = param_3;
  if ((param_3 < 0x10000 & param_4 & iVar1 != 1 & bVar2) == 1) {
    *(undefined8 *)(param_1 + 0xf8) = 0x10000;
    lVar3 = FUN_1427c5a02(param_1);
    param_3 = *(longlong *)(param_1 + 0xf8) + *(longlong *)(param_1 + 0xf0);
    if (lVar3 <= param_3) {
      param_3 = lVar3;
    }
    param_3 = param_3 - *(longlong *)(param_1 + 0xf0);
    *(longlong *)(param_1 + 0xf8) = param_3;
  }
  if (param_3 < 1) {
    FUN_14572541c(param_1);
    *(undefined1 *)(param_1 + 0x114) = 3;
  }
  else {
    QueryPerformanceCounter(&local_48);
    if (param_5 == (undefined8 *)0x0 || bVar2 != 0) {
      uVar5 = 0;
      local_58 = param_1 + 0x1d0;
      if (iVar1 != 1) {
        local_58 = uVar5;
      }
      if (DAT_14c872ba8 == '\0') {
        local_58 = uVar5;
      }
      uVar7 = 5;
      if ((int)DAT_14c948718 < 5) {
        uVar7 = DAT_14c948718;
      }
      uVar8 = (ulonglong)uVar7;
      if ((int)uVar7 < 1) {
        uVar8 = uVar5;
      }
      local_50 = 0;
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))
                        (*(longlong **)(param_1 + 0x90),
                         *(longlong *)(param_1 + 0xf0) - *(longlong *)(param_1 + 0x108),
                         *(undefined8 *)(param_1 + 0xf8),uVar8);
      *(undefined8 *)(param_1 + 0xb8) = uVar4;
      if (param_5 != (undefined8 *)0x0) {
        (**(code **)*param_5)(param_5,1);
      }
    }
    else {
      *(undefined8 **)(param_1 + 0xb8) = param_5;
    }
    if ((iVar1 == 1) || (*(char *)(*(longlong *)(param_1 + 0xb8) + 0x51) != '\x01')) {
      uVar5 = 0;
      goto LAB_1427c5651;
    }
    FUN_1427c5bec(param_1);
  }
  uVar5 = CONCAT71(uVar6,1);
LAB_1427c5651:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427c569c FUN_1427c569c body=599 status=ok
// SIG undefined FUN_1427c569c(void)

ulonglong FUN_1427c569c(longlong param_1,double param_2)

{
  double dVar1;
  longlong *plVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  float fVar4;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(longlong *)(param_1 + 0x98) == 0) && (DAT_14c872ba8 == '\0')) &&
      (*(longlong *)(param_1 + 0xa8) == 0)) && (*(longlong *)(param_1 + 0xb0) == 0)) {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    goto LAB_1427c58c4;
  }
  QueryPerformanceCounter(&local_48);
  dVar1 = (double)local_48.QuadPart * DAT_14c83f420;
  plVar2 = *(longlong **)(param_1 + 0x98);
  if (plVar2 == (longlong *)0x0) {
LAB_1427c575c:
    uVar3 = CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
    if (DAT_14c872ba8 != '\0') goto LAB_1427c58c4;
    dVar1 = dVar1 + 16777216.0;
    plVar2 = *(longlong **)(param_1 + 0xa8);
    if (plVar2 != (longlong *)0x0) {
      if (0.0 < param_2) {
        QueryPerformanceCounter(&local_48);
        if ((dVar1 - ((double)local_48.QuadPart * DAT_14c83f420 + 16777216.0)) + param_2 <
            0.0010100000072270632) goto LAB_1427c58c2;
        plVar2 = *(longlong **)(param_1 + 0xa8);
      }
      if (*(char *)((longlong)plVar2 + 0x51) == '\0') {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        if (*(char *)((longlong)plVar2 + 0x51) != '\x01') goto LAB_1427c58c2;
        plVar2 = *(longlong **)(param_1 + 0xa8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)*plVar2)(plVar2,1);
      }
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    plVar2 = *(longlong **)(param_1 + 0xb0);
    if (plVar2 == (longlong *)0x0) goto LAB_1427c58c4;
    fVar4 = 0.0;
    if (0.0 < param_2) {
      QueryPerformanceCounter(&local_48);
      param_2 = (dVar1 - ((double)local_48.QuadPart * DAT_14c83f420 + 16777216.0)) + param_2;
      if (param_2 < 0.0010100000072270632) goto LAB_1427c58c2;
      plVar2 = *(longlong **)(param_1 + 0xb0);
      fVar4 = (float)param_2;
    }
    if (*(char *)((longlong)plVar2 + 0x51) == '\0') {
      (**(code **)(*plVar2 + 0x10))(plVar2,fVar4);
      if (*(char *)((longlong)plVar2 + 0x51) != '\x01') goto LAB_1427c58c2;
      plVar2 = *(longlong **)(param_1 + 0xb0);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)*plVar2)(plVar2,1);
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  else {
    if (*(char *)((longlong)plVar2 + 0x51) != '\0') {
LAB_1427c5744:
      (**(code **)*plVar2)(plVar2,1);
LAB_1427c5751:
      *(undefined8 *)(param_1 + 0x98) = 0;
      goto LAB_1427c575c;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,(float)param_2);
    if (*(char *)((longlong)plVar2 + 0x51) == '\x01') {
      plVar2 = *(longlong **)(param_1 + 0x98);
      if (plVar2 != (longlong *)0x0) goto LAB_1427c5744;
      goto LAB_1427c5751;
    }
LAB_1427c58c2:
    uVar3 = 0;
  }
LAB_1427c58c4:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427c58f4 FUN_1427c58f4 body=141 status=ok
// SIG undefined FUN_1427c58f4(void)

ulonglong FUN_1427c58f4(longlong param_1,double param_2)

{
  longlong *plVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    QueryPerformanceCounter(&local_38);
    plVar1 = *(longlong **)(param_1 + 0xb8);
    if (*(char *)((longlong)plVar1 + 0x51) == '\0') {
      (**(code **)(*plVar1 + 0x10))(plVar1,(float)param_2);
      if (*(char *)((longlong)plVar1 + 0x51) != '\x01') {
        uVar2 = 0;
        goto LAB_1427c595c;
      }
    }
    FUN_1427c5bec(param_1);
  }
LAB_1427c595c:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427c5982 FUN_1427c5982 body=127 status=ok
// SIG undefined FUN_1427c5982(void)

void FUN_1427c5982(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  LARGE_INTEGER local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    QueryPerformanceCounter(&local_18);
    plVar1 = *(longlong **)(param_1 + 0xc0);
    if (*(char *)((longlong)plVar1 + 0x51) == '\0') {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
      plVar1 = *(longlong **)(param_1 + 0xc0);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)*plVar1)(plVar1,1);
    }
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427c5a02 FUN_1427c5a02 body=159 status=ok
// SIG undefined FUN_1427c5a02(void)

longlong FUN_1427c5a02(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 == (longlong *)0x0) goto LAB_1427c5a84;
  if (*(char *)((longlong)plVar1 + 0x51) == '\0') {
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
  }
  if ((DAT_14c872ba8 == '\0') && (*(char *)(param_1 + 0x115) == '\0')) {
    cVar2 = (*(code *)PTR_FUN_14c75b128)();
    if (cVar2 == '\x03') goto LAB_1427c5a41;
    puVar4 = *(undefined8 **)(param_1 + 0x98);
  }
  else {
LAB_1427c5a41:
    puVar4 = *(undefined8 **)(param_1 + 0x98);
    if (*(longlong *)(param_1 + 0x108) != 0) {
      uVar3 = 0xffffffffffffffff;
      if (*(char *)((longlong)puVar4 + 0x53) == '\0') {
        uVar3 = puVar4[1];
      }
      *(undefined8 *)(param_1 + 0xd0) = uVar3;
    }
  }
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
LAB_1427c5a84:
  return *(longlong *)(param_1 + 0x108) + *(longlong *)(param_1 + 0xd0);
}



// FUNCTION 1427c5aa2 FUN_1427c5aa2 body=328 status=ok
// SIG undefined FUN_1427c5aa2(void)

void FUN_1427c5aa2(longlong param_1)

{
  undefined8 *puVar1;
  LARGE_INTEGER LVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  LARGE_INTEGER local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  QueryPerformanceCounter(local_28);
  *(double *)(param_1 + 0x180) = (double)local_28[0].QuadPart * DAT_14c83f420 + 16777216.0;
  *(undefined4 *)(param_1 + 0x110) = 4;
  if (*(char *)(param_1 + 0x115) == '\0') {
    cVar3 = (*(code *)PTR_FUN_14c75b128)();
    if (cVar3 != '\x03') goto LAB_1427c5b0c;
  }
  if ((*(longlong *)(param_1 + 0x108) == 0) && (*(longlong *)(param_1 + 0x100) != 0)) {
    lVar4 = FUN_1427c5a02(param_1);
    if (lVar4 == *(longlong *)(param_1 + 0x100)) {
      FUN_1427c53c4(param_1);
      puVar1 = *(undefined8 **)(param_1 + 0x90);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        *(undefined8 *)(param_1 + 0x90) = 0;
      }
      *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x100);
      local_38 = 1;
      (**(code **)(*DAT_14c9518c8 + 0x30))(DAT_14c9518c8,local_28,param_1 + 0x160,0);
      LVar2 = local_28[0];
      local_28[0].QuadPart = 0;
      ((LARGE_INTEGER *)(param_1 + 0x90))->QuadPart = (LONGLONG)LVar2;
      lVar4 = (**(code **)(*(longlong *)LVar2 + 8))(LVar2.QuadPart,0);
      *(longlong *)(param_1 + 0x98) = lVar4;
      if (*(char *)(lVar4 + 0x51) == '\x01') {
        FUN_1427c5a02(param_1);
      }
      if ((longlong *)local_28[0].QuadPart != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_28[0])(local_28[0].QuadPart,1);
      }
    }
  }
LAB_1427c5b0c:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427c5bec FUN_1427c5bec body=360 status=ok
// SIG undefined FUN_1427c5bec(void)

void FUN_1427c5bec(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  QueryPerformanceCounter(&local_28);
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1427bdfea(param_1);
  }
  if ((*(byte *)(param_1 + 0x29) & 2) == 0) {
    plVar1 = *(longlong **)(param_1 + 0xb8);
    if ((*(char *)((longlong)plVar1 + 0x53) == '\0') && (lVar2 = plVar1[1], lVar2 != 0)) {
      if (*(char *)((longlong)plVar1 + 0x55) == '\0') {
        (**(code **)(*plVar1 + 0x20))(plVar1);
      }
      plVar1[1] = 0;
      *(longlong *)(param_1 + 200) = lVar2;
      *(longlong *)(param_1 + 0xe0) = *(longlong *)(param_1 + 0xf0);
      *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xf0) + *(longlong *)(param_1 + 0xf8);
      if (*(int *)(param_1 + 0x110) != 4) {
        cVar4 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))();
        if (cVar4 != '\0') {
          FUN_1427c5982(param_1);
          uVar6 = 5;
          if ((int)DAT_14c948718 < 5) {
            uVar6 = DAT_14c948718;
          }
          uVar7 = 0;
          if (0 < (int)uVar6) {
            uVar7 = uVar6;
          }
          local_38 = 0;
          uStack_30 = 0;
          uVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))
                            (*(longlong **)(param_1 + 0x90),
                             ~*(ulonglong *)(param_1 + 0x108) + *(longlong *)(param_1 + 0xe8),1,
                             uVar7 | 0x100);
          *(undefined8 *)(param_1 + 0xc0) = uVar5;
        }
      }
    }
    else {
      FUN_14572541c(param_1);
      *(undefined1 *)(param_1 + 0x114) = 3;
    }
  }
  puVar3 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427c5d56 FUN_1427c5d56 body=263 status=ok
// SIG undefined FUN_1427c5d56(void)

ulonglong FUN_1427c5d56(longlong param_1,char param_2,char param_3,double param_4,double param_5)

{
  char cVar1;
  LARGE_INTEGER *unaff_RSI;
  ulonglong uVar2;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(double *)(param_1 + 0x178) == 0.0) && (!NAN(*(double *)(param_1 + 0x178)))) {
    unaff_RSI = &local_58;
    QueryPerformanceCounter(unaff_RSI);
    *(double *)(param_1 + 0x178) = (double)local_58.QuadPart * DAT_14c83f420 + 16777216.0;
  }
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((param_2 != '\0') && (*(uint *)(param_1 + 0x110) < 2)) {
    if (param_3 != '\0') {
      QueryPerformanceCounter(&local_58);
      param_5 = param_5 - (((double)local_58.QuadPart * DAT_14c83f420 + 16777216.0) - param_4);
      if (0.0010100000072270632 <= param_5) {
        cVar1 = FUN_1427c569c(param_1,param_5);
        if (cVar1 != '\0') goto LAB_1427c5e32;
      }
    }
    uVar2 = 0;
  }
LAB_1427c5e32:
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427c5e5e FUN_1427c5e5e body=1238 status=ok
// SIG undefined FUN_1427c5e5e(void)

void FUN_1427c5e5e(longlong param_1,void *param_2,size_t param_3)

{
  undefined8 *puVar1;
  void *_Src;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  size_t sVar6;
  size_t sVar7;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  longlong *local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_3 == 0) || ((*(byte *)(param_1 + 0x29) & 2) != 0)) goto LAB_1427c61c1;
  puVar1 = *(undefined8 **)(param_1 + 8);
  _Src = (void *)*puVar1;
  if ((longlong)_Src + param_3 <= (ulonglong)puVar1[1]) {
    memcpy(param_2,_Src,param_3);
    **(longlong **)(param_1 + 8) = **(longlong **)(param_1 + 8) + param_3;
    goto LAB_1427c61c1;
  }
  *(longlong *)(param_1 + 0xd8) = (longlong)_Src + (*(longlong *)(param_1 + 0xd8) - puVar1[2]);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  lVar5 = *(longlong *)(param_1 + 0xd8);
  lVar4 = FUN_1427c5a02(param_1);
  if (lVar4 < (longlong)(lVar5 + param_3)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
    local_58 = DAT_14c844840;
    if (DAT_14c844840 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*DAT_14c844840 + 8))();
      }
    }
    local_50 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
    local_68 = DAT_14c844840;
    if (DAT_14c844840 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*DAT_14c844840 + 8))();
      }
    }
    local_60 = 0;
    local_78 = &DAT_14c872ce8;
    FUN_14577b02e(DAT_14c872ce0,L"/Script/Engine.Engine",L"SerializationOutOfBoundsErrorMessage",
                  &local_58);
    local_78 = &DAT_14c872ce8;
    FUN_14577b02e(DAT_14c872ce0,L"/Script/Engine.Engine",
                  L"SerializationOutOfBoundsErrorMessageCaption",&local_68);
    FUN_1427864dc(0,0,&local_58,&local_68);
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  lVar5 = *(longlong *)(param_1 + 0xd8);
  lVar4 = *(longlong *)(param_1 + 0xe0);
  sVar6 = param_3;
  if (lVar4 < (longlong)(lVar5 + param_3)) {
    lVar2 = *(longlong *)(param_1 + 0xe8);
    sVar7 = lVar2 - lVar5;
    if (sVar7 == 0 || lVar2 < lVar5) goto LAB_1427c60ed;
    sVar6 = lVar4 - lVar5;
    if (sVar6 == 0 || lVar4 < lVar5) {
      if ((longlong)param_3 <= (longlong)sVar7) {
        sVar7 = param_3;
      }
      memcpy(param_2,(void *)((lVar5 + *(longlong *)(param_1 + 200)) - lVar4),sVar7);
      lVar4 = *(longlong *)(param_1 + 0xe8);
    }
    else {
      sVar7 = lVar2 - lVar4;
      if ((longlong)(param_3 - sVar6) <= lVar2 - lVar4) {
        sVar7 = param_3 - sVar6;
      }
      memcpy((void *)((longlong)param_2 + sVar6),*(void **)(param_1 + 200),sVar7);
      lVar4 = *(longlong *)(param_1 + 0xe8);
      local_78 = (undefined8 *)0x0;
      cVar3 = FUN_1427c544a(param_1,lVar5,sVar6,1);
      if (cVar3 == '\0') {
        FUN_1427c58f4(param_1,0);
      }
      if ((*(byte *)(param_1 + 0x29) & 2) != 0) goto LAB_1427c61c1;
      sVar7 = sVar7 + sVar6;
      memcpy(param_2,(void *)((lVar5 + *(longlong *)(param_1 + 200)) - *(longlong *)(param_1 + 0xe0)
                             ),sVar6);
    }
    lVar5 = lVar4;
    sVar6 = param_3 - sVar7;
    if (param_3 - sVar7 != 0) goto LAB_1427c60ed;
  }
  else {
LAB_1427c60ed:
    local_78 = (undefined8 *)0x0;
    cVar3 = FUN_1427c544a(param_1,lVar5,sVar6,1);
    if (cVar3 == '\0') {
      FUN_1427c58f4(param_1,0);
    }
    if ((*(byte *)(param_1 + 0x29) & 2) != 0) goto LAB_1427c61c1;
    memcpy((void *)((longlong)param_2 + (param_3 - sVar6)),
           (void *)((lVar5 + *(longlong *)(param_1 + 200)) - *(longlong *)(param_1 + 0xe0)),sVar6);
  }
  lVar5 = param_3 + *(longlong *)(param_1 + 0xd8);
  if ((lVar5 < *(longlong *)(param_1 + 0xe0)) || (*(longlong *)(param_1 + 0xe8) <= lVar5)) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(longlong *)(param_1 + 0xd8) = lVar5;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 200);
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = lVar4;
    **(longlong **)(param_1 + 8) = (lVar5 - *(longlong *)(param_1 + 0xe0)) + lVar4;
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) =
         (*(longlong *)(param_1 + 0xe8) - *(longlong *)(param_1 + 0xe0)) +
         *(longlong *)(param_1 + 200);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0xe0);
  }
LAB_1427c61c1:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427c6336 FUN_1427c6336 body=64 status=ok
// SIG undefined FUN_1427c6336(void)

undefined8 * FUN_1427c6336(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_149eb0140;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427c638c FUN_1427c638c body=164 status=ok
// SIG undefined FUN_1427c638c(void)

void FUN_1427c638c(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x18) != '\x01') {
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  if ((param_4 == 0) && (param_4 = plVar1[0xe], param_4 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001427c642d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x150))(plVar1,param_2);
    return;
  }
  (**(code **)(*plVar1 + 0x228))
            (plVar1,param_4,(uint)((ulonglong)*(undefined8 *)(param_4 + 0x38) >> 0x23) & 1);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x150))(*(longlong **)(param_1 + 0x10),param_2);
                    /* WARNING: Could not recover jumptable at 0x0001427c6406. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x230))
            (plVar1,param_4,(uint)((ulonglong)*(undefined8 *)(param_4 + 0x38) >> 0x23) & 1);
  return;
}



// FUNCTION 1427c6430 FUN_1427c6430 body=130 status=ok
// SIG undefined FUN_1427c6430(void)

void FUN_1427c6430(void)

{
  char cVar1;
  
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_14054d46e(&DAT_14c846b20,L"RandomizeLoadOrder");
  if (cVar1 != '\0') {
    DAT_14c948744 = 1;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_14054d46e(&DAT_14c846b20,L"FileOpenLog");
  return;
}



// FUNCTION 1427c64b2 FUN_1427c64b2 body=62 status=ok
// SIG undefined FUN_1427c64b2(void)

void FUN_1427c64b2(void)

{
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_14054d46e(&DAT_14c846b20,L"FilePackageOpenLog");
  return;
}



// FUNCTION 1427c64f0 FUN_1427c64f0 body=339 status=ok
// SIG undefined FUN_1427c64f0(void)

void FUN_1427c64f0(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  if (((longlong)DAT_14c75ec28 * 0x900000) / 10 < *(longlong *)(param_1 + 0x138)) {
    if ((longlong)DAT_14c75ec28 * 0x100000 < *(longlong *)(param_1 + 0x138)) {
      if ((*(char *)(param_1 + 0x141) == '\0') && (*(char *)(param_1 + 0x140) == '\x01')) {
        iVar3 = 4;
        if (DAT_14c948718 < 4) {
          iVar3 = DAT_14c948718;
        }
        iVar4 = -1;
        if (-1 < iVar3) {
          iVar4 = iVar3;
        }
        plVar1 = (longlong *)FUN_1400dbadc();
        plVar2 = (longlong *)*plVar1;
        if (plVar2 == (longlong *)0x0) {
          plVar2 = (longlong *)FUN_140e92164();
          *plVar1 = (longlong)plVar2;
        }
        (**(code **)(*plVar2 + 0x180))(plVar2,iVar4 + 1);
        *(undefined1 *)(param_1 + 0x140) = 0;
      }
      *(undefined1 *)(param_1 + 0x141) = 1;
    }
  }
  else {
    if ((*(char *)(param_1 + 0x141) == '\x01') && (*(char *)(param_1 + 0x140) == '\0')) {
      plVar1 = (longlong *)FUN_1400dbadc();
      plVar2 = (longlong *)*plVar1;
      if (plVar2 == (longlong *)0x0) {
        plVar2 = (longlong *)FUN_140e92164();
        *plVar1 = (longlong)plVar2;
      }
      param_2 = '\0';
      (**(code **)(*plVar2 + 0x180))(plVar2,0);
      *(undefined1 *)(param_1 + 0x140) = 1;
    }
    *(undefined1 *)(param_1 + 0x141) = 0;
  }
  if ((param_2 != '\0') && (*(char *)(param_1 + 0x140) != '\0')) {
    plVar1 = (longlong *)FUN_1400dbadc();
    plVar2 = (longlong *)*plVar1;
    if (plVar2 == (longlong *)0x0) {
      plVar2 = (longlong *)FUN_140e92164();
      *plVar1 = (longlong)plVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x0001427c6602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x180))(plVar2,0);
    return;
  }
  return;
}



// FUNCTION 1427c665a FUN_1427c665a body=194 status=ok
// SIG undefined FUN_1427c665a(void)

void FUN_1427c665a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  iVar3 = *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x74) < iVar3 + 1U) {
    FUN_14170b9ba(param_1 + 0x68,iVar3);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar3 * 8) = param_2;
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *(undefined1 *)(param_1 + 0x88) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))();
  }
  else if (*(int *)(param_1 + 0x70) == DAT_14c75ec30) {
    iVar3 = 4;
    if (DAT_14c948718 < 4) {
      iVar3 = DAT_14c948718;
    }
    iVar4 = -1;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    plVar1 = (longlong *)FUN_1400dbadc();
    plVar2 = (longlong *)*plVar1;
    if (plVar2 == (longlong *)0x0) {
      plVar2 = (longlong *)FUN_140e92164();
      *plVar1 = (longlong)plVar2;
    }
    (**(code **)(*plVar2 + 0x180))(plVar2,iVar4 + 1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001427c6705. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  return;
}



// FUNCTION 1427c671c FUN_1427c671c body=799 status=ok
// SIG undefined FUN_1427c671c(void)

void FUN_1427c671c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  LARGE_INTEGER LVar3;
  undefined8 uVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD dwTlsIndex;
  DWORD DVar7;
  LPVOID lpTlsValue;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  double dVar13;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  undefined8 local_50;
  undefined8 local_48;
  LARGE_INTEGER local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar8 = *param_1;
  if (((int)param_1[1] != 0 && lVar8 != 0) &&
     (lVar2 = param_1[2], *(int *)(lVar2 + 0x288) != *(int *)(lVar2 + 0x2b4))) {
    uVar5 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar11 = (uint)lVar8 & 0xffff;
    lVar10 = lVar2 + 0x2b8;
    if (*(longlong *)(lVar2 + 0x2c0) != 0) {
      lVar10 = *(longlong *)(lVar2 + 0x2c0);
    }
    iVar9 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(lVar2 + 0x2c8) - 1U &
                              (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar11) +
                              (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar11 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x280) + (longlong)iVar9 * 0x18);
        if (*plVar1 == lVar8) {
          if (((plVar1 != (longlong *)0x0) &&
              (LVar3 = (LARGE_INTEGER)((LARGE_INTEGER *)(plVar1 + 1))->QuadPart, LVar3.QuadPart != 0
              )) && (*(int *)(LVar3.QuadPart + 0x2dc) == (int)param_1[1])) {
            param_2[1] = L"Create Linker";
            uVar4 = *(undefined8 *)(LVar3.QuadPart + 0x58);
            param_2[2] = uVar4;
            *(undefined8 *)(LVar3.QuadPart + 0x118) = *param_2;
            *(wchar_t **)(LVar3.QuadPart + 0x128) = L"Create Linker";
            *(undefined8 *)(LVar3.QuadPart + 0x120) = uVar4;
            *(undefined4 *)(LVar3.QuadPart + 0x108) = *(undefined4 *)(param_2 + 3);
            *(undefined1 *)(LVar3.QuadPart + 0x10c) = *(undefined1 *)((longlong)param_2 + 0x1c);
            *(undefined1 *)(LVar3.QuadPart + 0x10d) = *(undefined1 *)((longlong)param_2 + 0x1d);
            if ((*(double *)(LVar3.QuadPart + 0x130) == 0.0) &&
               (!NAN(*(double *)(LVar3.QuadPart + 0x130)))) {
              QueryPerformanceCounter(&local_58);
              dVar13 = (double)local_58.QuadPart * DAT_14c83f420 + 16777216.0;
              *(double *)(LVar3.QuadPart + 0x130) = dVar13;
              lVar8 = *(longlong *)(LVar3.QuadPart + 0xd0);
              if ((lVar8 != 0) &&
                 ((*(double *)(lVar8 + 0x130) == 0.0 && (!NAN(*(double *)(lVar8 + 0x130)))))) {
                *(double *)(lVar8 + 0x130) = dVar13;
              }
            }
            dwTlsIndex = DAT_14c75ec34;
            local_58 = LVar3;
            if (DAT_14c75ec34 == 0xffffffff) {
              dwTlsIndex = TlsAlloc();
              DVar7 = 0xffffffff;
              LOCK();
              bVar12 = DAT_14c75ec34 != 0xffffffff;
              DVar6 = dwTlsIndex;
              if (bVar12) {
                DVar7 = DAT_14c75ec34;
                DVar6 = DAT_14c75ec34;
              }
              DAT_14c75ec34 = DVar6;
              UNLOCK();
              if (bVar12) {
                TlsFree(dwTlsIndex);
                dwTlsIndex = DVar7;
              }
            }
            lpTlsValue = TlsGetValue(dwTlsIndex);
            if (lpTlsValue == (LPVOID)0x0) {
              lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
              FUN_141073f92(lpTlsValue);
              FUN_140fddf04(lpTlsValue);
              TlsSetValue(dwTlsIndex,lpTlsValue);
            }
            local_50 = *(undefined8 *)((longlong)lpTlsValue + 0x40);
            ((LARGE_INTEGER *)((longlong)lpTlsValue + 0x40))->QuadPart = (LONGLONG)LVar3;
            local_48 = *(undefined8 *)((longlong)lpTlsValue + 0x48);
            lVar8 = *(longlong *)(LVar3.QuadPart + 0x278) + 8;
            if (*(longlong *)(LVar3.QuadPart + 0x278) == 0) {
              lVar8 = 0;
            }
            *(longlong *)((longlong)lpTlsValue + 0x48) = lVar8;
            FUN_146878118();
            *(undefined1 *)(LVar3.QuadPart + 0x5b4) = 1;
            FUN_1427baecc(LVar3.QuadPart);
            if (*(longlong *)(LVar3.QuadPart + 0x50) == 0) {
              local_38 = 0;
              local_40 = LVar3;
              FUN_146877aa2(*(longlong *)(LVar3.QuadPart + 0x278) + 0x410);
              FUN_1427bbaaa(LVar3.QuadPart);
              *(undefined1 *)(LVar3.QuadPart + 0x2d8) = 9;
              lVar8 = *(longlong *)(LVar3.QuadPart + 0x278);
              iVar9 = *(int *)(lVar8 + 0x2d8);
              *(uint *)(lVar8 + 0x2d8) = iVar9 + 1U;
              if (*(uint *)(lVar8 + 0x2dc) < iVar9 + 1U) {
                FUN_1468824fe((longlong *)(lVar8 + 0x2d0),iVar9);
              }
              ((LARGE_INTEGER *)(*(longlong *)(lVar8 + 0x2d0) + (longlong)iVar9 * 8))->QuadPart =
                   (LONGLONG)LVar3;
            }
            else {
              *(undefined1 *)(LVar3.QuadPart + 0x2d8) = 1;
              *(undefined1 *)(*(longlong *)(LVar3.QuadPart + 0x50) + 0x2e1) = 1;
            }
            FUN_1427bae1e(&local_58);
            param_2[2] = *(undefined8 *)(LVar3.QuadPart + 0x58);
          }
          break;
        }
        iVar9 = (int)plVar1[2];
      } while (iVar9 != -1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427c6a62 FUN_1427c6a62 body=12 status=ok
// SIG undefined FUN_1427c6a62(void)

void FUN_1427c6a62(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001427c6a6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1427c6a6e FUN_1427c6a6e body=29 status=ok
// SIG undefined FUN_1427c6a6e(void)

undefined8 FUN_1427c6a6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427c6a8c FUN_1427c6a8c body=1992 status=ok
// SIG undefined FUN_1427c6a8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427c6a8c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  double dVar2;
  LARGE_INTEGER LVar3;
  double dVar4;
  DWORD DVar5;
  int iVar6;
  uint uVar7;
  DWORD dwTlsIndex;
  DWORD DVar8;
  LPVOID lpTlsValue;
  longlong lVar9;
  LARGE_INTEGER LVar10;
  byte bVar11;
  undefined8 uVar12;
  LARGE_INTEGER *pLVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  bool bVar18;
  double dVar19;
  undefined1 auStack_f8 [32];
  LARGE_INTEGER local_d8 [2];
  LARGE_INTEGER local_c8;
  uint local_c0;
  undefined4 local_bc;
  LARGE_INTEGER local_b8;
  uint local_b0;
  undefined4 local_ac;
  LARGE_INTEGER local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  LARGE_INTEGER local_90;
  ulonglong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar9 = *param_1;
  if (((int)param_1[1] != 0 && lVar9 != 0) &&
     (lVar17 = param_1[2], *(int *)(lVar17 + 0x288) != *(int *)(lVar17 + 0x2b4))) {
    uVar7 = (uint)((ulonglong)lVar9 >> 0x10);
    uVar14 = (uint)lVar9 & 0xffff;
    lVar15 = lVar17 + 0x2b8;
    if (*(longlong *)(lVar17 + 0x2c0) != 0) {
      lVar15 = *(longlong *)(lVar17 + 0x2c0);
    }
    iVar6 = *(int *)(lVar15 + (ulonglong)
                              (*(int *)(lVar17 + 0x2c8) - 1U &
                              (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar14) +
                              (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar14 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar17 + 0x280) + (longlong)iVar6 * 0x18);
        if (*plVar1 == lVar9) {
          if (((plVar1 != (longlong *)0x0) &&
              (LVar3 = (LARGE_INTEGER)((LARGE_INTEGER *)(plVar1 + 1))->QuadPart, LVar3.QuadPart != 0
              )) && (*(int *)(LVar3.QuadPart + 0x2dc) == (int)param_1[1])) {
            param_2[1] = L"Finish Linker";
            uVar12 = *(undefined8 *)(LVar3.QuadPart + 0x58);
            param_2[2] = uVar12;
            *(undefined8 *)(LVar3.QuadPart + 0x118) = *param_2;
            *(wchar_t **)(LVar3.QuadPart + 0x128) = L"Finish Linker";
            *(undefined8 *)(LVar3.QuadPart + 0x120) = uVar12;
            *(undefined4 *)(LVar3.QuadPart + 0x108) = *(undefined4 *)(param_2 + 3);
            *(undefined1 *)(LVar3.QuadPart + 0x10c) = *(undefined1 *)((longlong)param_2 + 0x1c);
            *(undefined1 *)(LVar3.QuadPart + 0x10d) = *(undefined1 *)((longlong)param_2 + 0x1d);
            dwTlsIndex = DAT_14c75ec34;
            local_a8 = LVar3;
            if (DAT_14c75ec34 == 0xffffffff) {
              dwTlsIndex = TlsAlloc();
              DVar8 = 0xffffffff;
              LOCK();
              bVar18 = DAT_14c75ec34 != 0xffffffff;
              DVar5 = dwTlsIndex;
              if (bVar18) {
                DVar8 = DAT_14c75ec34;
                DVar5 = DAT_14c75ec34;
              }
              DAT_14c75ec34 = DVar5;
              UNLOCK();
              if (bVar18) {
                TlsFree(dwTlsIndex);
                dwTlsIndex = DVar8;
              }
            }
            lpTlsValue = TlsGetValue(dwTlsIndex);
            if (lpTlsValue == (LPVOID)0x0) {
              lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
              FUN_141073f92(lpTlsValue);
              FUN_140fddf04(lpTlsValue);
              TlsSetValue(dwTlsIndex,lpTlsValue);
            }
            local_a0 = *(undefined8 *)((longlong)lpTlsValue + 0x40);
            ((LARGE_INTEGER *)((longlong)lpTlsValue + 0x40))->QuadPart = (LONGLONG)LVar3;
            local_98 = *(undefined8 *)((longlong)lpTlsValue + 0x48);
            lVar9 = *(longlong *)(LVar3.QuadPart + 0x278) + 8;
            if (*(longlong *)(LVar3.QuadPart + 0x278) == 0) {
              lVar9 = 0;
            }
            *(longlong *)((longlong)lpTlsValue + 0x48) = lVar9;
            FUN_146878118();
            bVar11 = *(byte *)(LVar3.QuadPart + 0x10f);
            if (bVar11 == 0) {
              iVar6 = FUN_1427bbb58(LVar3.QuadPart);
              bVar11 = *(byte *)(LVar3.QuadPart + 0x10f);
              if ((iVar6 == 0) && ((bVar11 & 1) == 0)) {
                uVar12 = *(undefined8 *)(LVar3.QuadPart + 0x278);
                LVar10 = *(LARGE_INTEGER *)(LVar3.QuadPart + 0x14);
                pLVar13 = &local_90;
                goto LAB_1427c71cc;
              }
            }
            if ((bVar11 & 1) != 0) goto LAB_1427c712c;
            *(wchar_t **)(LVar3.QuadPart + 0x128) = L"ImportAddNode";
            if ((*(int *)(LVar3.QuadPart + 0x590) == 0) && (*(int *)(LVar3.QuadPart + 0x594) == 0))
            {
              local_88 = 0x200000000;
              local_90 = LVar3;
              FUN_146877890(*(longlong *)(LVar3.QuadPart + 0x278) + 0x410,&local_90,0,
                            *(int *)(*(longlong *)(LVar3.QuadPart + 0x50) + 0x20) +
                            *(int *)(*(longlong *)(LVar3.QuadPart + 0x50) + 0x10));
              local_88 = 0x100000000;
              local_90 = LVar3;
              FUN_146877890(*(longlong *)(LVar3.QuadPart + 0x278) + 0x410,&local_90,1,0);
              FUN_146877610(LVar3.QuadPart + 0x5a0,
                            *(undefined4 *)(*(longlong *)(LVar3.QuadPart + 0x50) + 0x10),
                            *(undefined4 *)(*(longlong *)(LVar3.QuadPart + 0x50) + 0x20));
            }
            iVar6 = *(int *)(LVar3.QuadPart + 0x588);
            if ((longlong)iVar6 != 0) {
              local_88 = 0x200000000;
              lVar9 = *(longlong *)(LVar3.QuadPart + 0x580);
              lVar17 = 0;
              local_90 = LVar3;
              do {
                local_b0 = 0;
                local_b8 = *(LARGE_INTEGER *)(lVar9 + lVar17);
                local_ac = 1;
                FUN_1468779b6(&local_b8,&local_90);
                lVar17 = lVar17 + 8;
              } while ((longlong)iVar6 * 8 != lVar17);
              *(undefined4 *)(LVar3.QuadPart + 0x588) = 0;
              if (*(int *)(LVar3.QuadPart + 0x58c) != 0) {
                FUN_146882584(LVar3.QuadPart + 0x580);
              }
            }
            uVar7 = *(uint *)(LVar3.QuadPart + 0x590);
            lVar9 = *(longlong *)(LVar3.QuadPart + 0x50);
            if ((int)uVar7 < *(int *)(lVar9 + 0x10)) {
              uVar14 = ~uVar7;
              while( true ) {
                local_88 = (ulonglong)uVar14;
                local_90 = LVar3;
                FUN_146877890(*(longlong *)(LVar3.QuadPart + 0x278) + 0x410,&local_90,0,0);
                local_ac = 1;
                local_b8 = LVar3;
                local_b0 = uVar14;
                FUN_146877890(*(longlong *)(LVar3.QuadPart + 0x278) + 0x410,&local_b8);
                uVar16 = uVar7 + 1;
                *(uint *)(LVar3.QuadPart + 0x590) = uVar16;
                uVar7 = uVar7 * -0x3d70a3d7 + 0x51eb850;
                if ((uVar7 >> 1 | (uint)((uVar7 & 1) != 0) << 0x1f) < 0x51eb851) break;
LAB_1427c6f49:
                lVar9 = *(longlong *)(LVar3.QuadPart + 0x50);
                uVar14 = uVar14 - 1;
                uVar7 = uVar16;
                if (*(int *)(lVar9 + 0x10) <= (int)uVar16) goto LAB_1427c6f59;
              }
              if (*(int *)(*(longlong *)(LVar3.QuadPart + 0x278) + 0x84) == 0) {
                if (*(char *)(LVar3.QuadPart + 0x10c) == '\x01') {
                  dVar4 = (double)*(float *)(LVar3.QuadPart + 0x108);
                  dVar2 = *(double *)(LVar3.QuadPart + 0x118);
                  QueryPerformanceCounter(&local_c8);
                  dVar19 = ((double)local_c8.QuadPart * DAT_14c83f420 + 16777216.0) - dVar2;
                  if ((dVar4 < dVar19) && (DAT_14c948b4c != 0)) {
                    if (((DAT_14c75ec60 != dVar2) || (NAN(DAT_14c75ec60) || NAN(dVar2))) &&
                       (((double)_DAT_14c75ec58 < dVar19 &&
                        ((double)_DAT_14c75ec54 * dVar4 < dVar19)))) {
                      DAT_14c75ec60 = dVar2;
                    }
                  }
                  if (dVar4 < dVar19) goto LAB_1427c71aa;
                }
                if (*(int *)(DAT_14c950c20 + 8) == 0) goto LAB_1427c6f49;
              }
LAB_1427c71aa:
              uVar12 = *(undefined8 *)(LVar3.QuadPart + 0x278);
              LVar10 = *(LARGE_INTEGER *)(LVar3.QuadPart + 0x14);
              pLVar13 = &local_c8;
LAB_1427c71cc:
              *pLVar13 = LVar10;
              pLVar13[1].s.LowPart = *(DWORD *)(LVar3.QuadPart + 0x2dc);
              FUN_1468783a2(uVar12);
            }
            else {
LAB_1427c6f59:
              *(wchar_t **)(LVar3.QuadPart + 0x128) = L"ExportAddNode";
              if ((int)*(uint *)(LVar3.QuadPart + 0x594) < *(int *)(lVar9 + 0x20)) {
                uVar7 = *(uint *)(LVar3.QuadPart + 0x594);
                do {
                  uVar14 = uVar7 + 1;
                  local_88 = (ulonglong)uVar14;
                  local_90 = LVar3;
                  FUN_146877890(*(longlong *)(LVar3.QuadPart + 0x278) + 0x410,&local_90,0,0);
                  local_ac = 2;
                  local_b8 = LVar3;
                  local_b0 = uVar14;
                  FUN_146877890(*(longlong *)(LVar3.QuadPart + 0x278) + 0x410,&local_b8,0,1);
                  local_bc = 1;
                  local_c8 = LVar3;
                  local_c0 = uVar14;
                  FUN_146877890(*(longlong *)(LVar3.QuadPart + 0x278) + 0x410,&local_c8);
                  *(uint *)(LVar3.QuadPart + 0x594) = uVar14;
                  uVar7 = uVar7 * -0x11111111 + 0x8888888;
                  if ((uVar7 >> 1 | (uint)((uVar7 & 1) != 0) << 0x1f) < 0x8888889) {
                    if (*(int *)(*(longlong *)(LVar3.QuadPart + 0x278) + 0x84) == 0) {
                      if (*(char *)(LVar3.QuadPart + 0x10c) == '\x01') {
                        dVar4 = (double)*(float *)(LVar3.QuadPart + 0x108);
                        dVar2 = *(double *)(LVar3.QuadPart + 0x118);
                        QueryPerformanceCounter(local_d8);
                        dVar19 = ((double)local_d8[0].QuadPart * DAT_14c83f420 + 16777216.0) - dVar2
                        ;
                        if ((dVar4 < dVar19) && (DAT_14c948b4c != 0)) {
                          if (((DAT_14c75ec60 != dVar2) || (NAN(DAT_14c75ec60) || NAN(dVar2))) &&
                             (((double)_DAT_14c75ec58 < dVar19 &&
                              ((double)_DAT_14c75ec54 * dVar4 < dVar19)))) {
                            DAT_14c75ec60 = dVar2;
                          }
                        }
                        if (dVar4 < dVar19) goto LAB_1427c71bc;
                      }
                      if (*(int *)(DAT_14c950c20 + 8) == 0) goto LAB_1427c7103;
                    }
LAB_1427c71bc:
                    uVar12 = *(undefined8 *)(LVar3.QuadPart + 0x278);
                    LVar10 = *(LARGE_INTEGER *)(LVar3.QuadPart + 0x14);
                    pLVar13 = local_d8;
                    goto LAB_1427c71cc;
                  }
LAB_1427c7103:
                  uVar7 = uVar14;
                } while ((int)uVar14 < *(int *)(*(longlong *)(LVar3.QuadPart + 0x50) + 0x20));
              }
              *(undefined1 *)(LVar3.QuadPart + 0x2d8) = 2;
              FUN_146878544(*(undefined8 *)(LVar3.QuadPart + 0x278),LVar3.QuadPart,0x7ffffffe);
LAB_1427c712c:
              local_88 = 0;
              local_90 = LVar3;
              FUN_146877aa2(*(longlong *)(LVar3.QuadPart + 0x278) + 0x410);
              if (*(char *)(LVar3.QuadPart + 0x10f) == '\x01') {
                FUN_1427bbaaa(LVar3.QuadPart);
                *(undefined1 *)(LVar3.QuadPart + 0x2d8) = 9;
                lVar9 = *(longlong *)(LVar3.QuadPart + 0x278);
                iVar6 = *(int *)(lVar9 + 0x2d8);
                *(uint *)(lVar9 + 0x2d8) = iVar6 + 1U;
                if (*(uint *)(lVar9 + 0x2dc) < iVar6 + 1U) {
                  FUN_1468824fe((longlong *)(lVar9 + 0x2d0),iVar6);
                }
                ((LARGE_INTEGER *)(*(longlong *)(lVar9 + 0x2d0) + (longlong)iVar6 * 8))->QuadPart =
                     (LONGLONG)LVar3;
              }
            }
            FUN_1427bae1e(&local_a8);
          }
          break;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427c727c FUN_1427c727c body=12 status=ok
// SIG undefined FUN_1427c727c(void)

void FUN_1427c727c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001427c7285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1427c7288 FUN_1427c7288 body=29 status=ok
// SIG undefined FUN_1427c7288(void)

undefined8 FUN_1427c7288(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427c72a6 FUN_1427c72a6 body=2337 status=ok
// SIG undefined FUN_1427c72a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427c72a6(longlong *param_1,undefined8 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  double dVar1;
  int iVar2;
  LARGE_INTEGER LVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  double dVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  DWORD DVar14;
  char cVar15;
  DWORD DVar16;
  DWORD DVar17;
  LPVOID lpTlsValue;
  longlong *plVar18;
  longlong lVar19;
  LARGE_INTEGER LVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  int iVar26;
  byte bVar27;
  byte bVar28;
  bool bVar29;
  double dVar30;
  undefined1 auStack_158 [40];
  LARGE_INTEGER local_130;
  undefined8 local_128;
  undefined8 local_120;
  LARGE_INTEGER local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_100;
  LARGE_INTEGER local_f8;
  LONG LStack_f0;
  DWORD DStack_ec;
  LONG LStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined1 local_c8 [24];
  LARGE_INTEGER local_b0;
  longlong local_a8;
  LARGE_INTEGER local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar21 = *param_1;
  if (((int)param_1[1] != 0 && lVar21 != 0) &&
     (lVar19 = param_1[2], *(int *)(lVar19 + 0x288) != *(int *)(lVar19 + 0x2b4))) {
    uVar7 = (uint)((ulonglong)lVar21 >> 0x10);
    uVar25 = (uint)lVar21 & 0xffff;
    lVar22 = lVar19 + 0x2b8;
    if (*(longlong *)(lVar19 + 0x2c0) != 0) {
      lVar22 = *(longlong *)(lVar19 + 0x2c0);
    }
    iVar26 = *(int *)(lVar22 + (ulonglong)
                               (*(int *)(lVar19 + 0x2c8) - 1U &
                               (int)((ulonglong)lVar21 >> 0x20) + ((uint)lVar21 << 0x10 | uVar25) +
                               (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar25 >> 4)) * 4);
    if (iVar26 != -1) {
LAB_1427c7389:
      plVar18 = (longlong *)(*(longlong *)(lVar19 + 0x280) + (longlong)iVar26 * 0x18);
      if (*plVar18 != lVar21) goto code_r0x0001427c7399;
      if (((plVar18 == (longlong *)0x0) ||
          (LVar3 = (LARGE_INTEGER)((LARGE_INTEGER *)(plVar18 + 1))->QuadPart, LVar3.QuadPart == 0))
         || (*(int *)(LVar3.QuadPart + 0x2dc) != (int)param_1[1])) goto LAB_1427c73bb;
      param_2[1] = L"Start Import Packages";
      uVar4 = *(undefined8 *)(LVar3.QuadPart + 0x58);
      param_2[2] = uVar4;
      *(undefined8 *)(LVar3.QuadPart + 0x118) = *param_2;
      *(wchar_t **)(LVar3.QuadPart + 0x128) = L"Start Import Packages";
      *(undefined8 *)(LVar3.QuadPart + 0x120) = uVar4;
      *(undefined4 *)(LVar3.QuadPart + 0x108) = *(undefined4 *)(param_2 + 3);
      *(undefined1 *)(LVar3.QuadPart + 0x10c) = *(undefined1 *)((longlong)param_2 + 0x1c);
      *(undefined1 *)(LVar3.QuadPart + 0x10d) = *(undefined1 *)((longlong)param_2 + 0x1d);
      DVar16 = DAT_14c75ec34;
      local_130 = LVar3;
      if (DAT_14c75ec34 == 0xffffffff) {
        DVar16 = TlsAlloc();
        DVar17 = 0xffffffff;
        LOCK();
        bVar29 = DAT_14c75ec34 != 0xffffffff;
        DVar14 = DVar16;
        if (bVar29) {
          DVar17 = DAT_14c75ec34;
          DVar14 = DAT_14c75ec34;
        }
        DAT_14c75ec34 = DVar14;
        UNLOCK();
        if (bVar29) {
          TlsFree(DVar16);
          DVar16 = DVar17;
        }
      }
      lpTlsValue = TlsGetValue(DVar16);
      if (lpTlsValue == (LPVOID)0x0) {
        lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
        FUN_141073f92(lpTlsValue);
        FUN_140fddf04(lpTlsValue);
        TlsSetValue(DVar16,lpTlsValue);
      }
      local_128 = *(undefined8 *)((longlong)lpTlsValue + 0x40);
      ((LARGE_INTEGER *)((longlong)lpTlsValue + 0x40))->QuadPart = (LONGLONG)LVar3;
      local_120 = *(undefined8 *)((longlong)lpTlsValue + 0x48);
      lVar21 = *(longlong *)(LVar3.QuadPart + 0x278) + 8;
      if (*(longlong *)(LVar3.QuadPart + 0x278) == 0) {
        lVar21 = 0;
      }
      *(longlong *)((longlong)lpTlsValue + 0x48) = lVar21;
      FUN_146878118();
      *(undefined8 *)(LVar3.QuadPart + 0x120) = *(undefined8 *)(LVar3.QuadPart + 0x58);
      *(wchar_t **)(LVar3.QuadPart + 0x128) = L"loading imports event";
      piVar9 = DAT_14c950c20;
      if ((DAT_14c86a9f8 != '\x01') ||
         (iVar26 = *(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60), iVar26 == 2)) goto LAB_1427c754e;
      if (iVar26 == 1) {
        DVar16 = FUN_140ad26c0();
        DVar17 = GetCurrentThreadId();
        if (DVar16 == DVar17) goto LAB_1427c754e;
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(piVar9 + 4);
      while( true ) {
        if (0 < piVar9[1]) {
          (**(code **)(**(longlong **)(piVar9 + 0xe) + 0x20))
                    (*(longlong **)(piVar9 + 0xe),0xffffffff,0);
        }
        EnterCriticalSection(lpCriticalSection);
        if (piVar9[1] == 0) break;
        LeaveCriticalSection(lpCriticalSection);
      }
      LOCK();
      *piVar9 = *piVar9 + 1;
      UNLOCK();
      LeaveCriticalSection(lpCriticalSection);
LAB_1427c754e:
      uVar12 = local_f8.s.HighPart;
      uVar10 = local_f8.s.LowPart;
      local_98 = 0x100000000;
      iVar26 = *(int *)(LVar3.QuadPart + 0xdc);
      iVar23 = *(int *)(*(longlong *)(LVar3.QuadPart + 0x50) + 0x10);
      local_f8.s.LowPart = LVar3.s.LowPart;
      uVar11 = local_f8.s.LowPart;
      local_f8.s.HighPart = LVar3.s.HighPart;
      uVar13 = local_f8.s.HighPart;
      local_f8.s.LowPart = uVar10;
      local_f8.s.HighPart = uVar12;
      local_a0 = LVar3;
      if (iVar23 <= iVar26) goto LAB_1427c7aab;
LAB_1427c7594:
      if (*(int *)(*(longlong *)(LVar3.QuadPart + 0x278) + 0x84) == 0) {
        if (*(char *)(LVar3.QuadPart + 0x10c) == '\x01') {
          dVar6 = (double)*(float *)(LVar3.QuadPart + 0x108);
          dVar1 = *(double *)(LVar3.QuadPart + 0x118);
          QueryPerformanceCounter(&local_f8);
          dVar30 = ((double)CONCAT44(local_f8.s.HighPart,local_f8.s.LowPart) * DAT_14c83f420 +
                   16777216.0) - dVar1;
          if ((dVar6 < dVar30) && (DAT_14c948b4c != 0)) {
            if (((DAT_14c75ec60 != dVar1) || (NAN(DAT_14c75ec60) || NAN(dVar1))) &&
               (((double)_DAT_14c75ec58 < dVar30 && ((double)_DAT_14c75ec54 * dVar6 < dVar30)))) {
              DAT_14c75ec60 = dVar1;
            }
          }
          if (dVar6 < dVar30) goto LAB_1427c7a94;
        }
        iVar26 = *(int *)(LVar3.QuadPart + 0xdc);
        if (DAT_14c950c20[2] != 0) goto LAB_1427c7a9a;
        *(int *)(LVar3.QuadPart + 0xdc) = iVar26 + 1;
        plVar18 = (longlong *)FUN_1427bbc60(LVar3.QuadPart,iVar26);
        if ((plVar18[5] == 0) || (cVar15 = FUN_1468764f2(LVar3.QuadPart), cVar15 == '\0')) {
          uVar8 = DAT_14c948b38;
          uVar5 = *(ulonglong *)((longlong)plVar18 + 0x14);
          if ((uVar5 == DAT_14c948b38) && (DAT_14c9486e8 == 0)) {
            *(undefined1 *)((longlong)plVar18 + 0x23) = 1;
            goto LAB_1427c7a76;
          }
          if (((int)plVar18[1] != 0) && (*(char *)((longlong)plVar18 + 0x23) == '\0')) {
            cVar15 = *(char *)((longlong)plVar18 + 0x21);
            while (cVar15 == '\0') {
              *(undefined1 *)((longlong)plVar18 + 0x21) = 1;
              if (-1 < (int)*(uint *)(plVar18 + 1)) {
                uVar24 = *(ulonglong *)((longlong)plVar18 + 0x14);
                bVar27 = 1;
                goto LAB_1427c76bf;
              }
              lVar21 = *(longlong *)(*(longlong *)(LVar3.QuadPart + 0x50) + 8);
              lVar19 = (ulonglong)~*(uint *)(plVar18 + 1) * 0x38;
              plVar18 = (longlong *)(lVar21 + lVar19);
              cVar15 = *(char *)(lVar21 + 0x21 + lVar19);
            }
            goto LAB_1427c7a76;
          }
          bVar27 = 0;
          uVar24 = uVar5;
LAB_1427c76bf:
          if (DAT_14c87ead8 == '\0') {
            FUN_140024d3a(&DAT_14c87eb00);
            DAT_14c87ead8 = '\x01';
          }
          if ((uVar5 != uVar8) && (uVar24 != DAT_14c892e7c)) goto LAB_1427c7a76;
          local_f8.s.LowPart = 0;
          local_f8.s.HighPart = 0;
          LStack_f0 = 0;
          DStack_ec = 0;
          LStack_e8 = (LONG)*plVar18;
          uStack_e4 = (undefined4)((ulonglong)*plVar18 >> 0x20);
          cVar15 = FUN_145c98d34(0x40,&local_f8);
          if (cVar15 != '\0') goto LAB_1427c7a76;
          lVar21 = plVar18[5];
          lVar19 = lVar21;
          if (lVar21 != 0) {
LAB_1427c778a:
            lVar22 = lVar19;
            lVar19 = lVar22;
            if (*(longlong *)(lVar22 + 0x20) != 0) goto code_r0x0001427c7799;
            goto LAB_1427c77aa;
          }
          LVar20.QuadPart = 0;
          bVar28 = 0;
          goto LAB_1427c77d8;
        }
        goto LAB_1427c7a76;
      }
LAB_1427c7a94:
      iVar26 = *(int *)(LVar3.QuadPart + 0xdc);
      goto LAB_1427c7a9a;
    }
  }
  goto LAB_1427c73bb;
code_r0x0001427c7399:
  iVar26 = (int)plVar18[2];
  if (iVar26 == -1) goto LAB_1427c73bb;
  goto LAB_1427c7389;
code_r0x0001427c7799:
  lVar19 = *(longlong *)(lVar22 + 0x20);
  if ((*(uint *)(lVar22 + 8) >> 0x1c & 1) == 0) goto LAB_1427c778a;
  lVar19 = FUN_142840154(lVar22);
LAB_1427c77aa:
  if (lVar19 == 0) {
    lVar19 = *(longlong *)(lVar22 + 0x20);
    goto LAB_1427c778a;
  }
  if ((*(longlong *)(lVar19 + 0x48) == 0) ||
     (lVar22 = *(longlong *)(*(longlong *)(lVar19 + 0x48) + 0x20), lVar22 == 0)) {
    LVar20.QuadPart = 0;
  }
  else {
    LVar20 = (LARGE_INTEGER)((LARGE_INTEGER *)(lVar22 + 0x398))->QuadPart;
  }
  bVar28 = (*(byte *)(lVar19 + 0x2c) & 0x10) >> 4;
LAB_1427c77d8:
  local_a8 = *plVar18;
  FUN_1427f3cbe(*(undefined8 *)(*(longlong *)(LVar3.QuadPart + 0x50) + 0x330),&local_b0,&local_a8);
  if ((LVar20.QuadPart == 0) && (bVar28 == 0)) {
    lVar19 = *(longlong *)(LVar3.QuadPart + 0x278);
    if (*(int *)(lVar19 + 0x288) != *(int *)(lVar19 + 0x2b4)) {
      uVar7 = (uint)((ulonglong)local_b0 >> 0x10);
      uVar25 = local_b0.s.LowPart & 0xffff;
      lVar22 = lVar19 + 0x2b8;
      if (*(longlong *)(lVar19 + 0x2c0) != 0) {
        lVar22 = *(longlong *)(lVar19 + 0x2c0);
      }
      iVar26 = *(int *)(lVar22 + (ulonglong)
                                 (*(int *)(lVar19 + 0x2c8) - 1U &
                                 local_b0.s.HighPart + (local_b0.s.LowPart << 0x10 | uVar25) +
                                 (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar25 >> 4)) * 4);
      if (iVar26 != -1) {
        do {
          plVar18 = (longlong *)(*(longlong *)(lVar19 + 0x280) + (longlong)iVar26 * 0x18);
          if (*plVar18 == local_b0.QuadPart) {
            if (plVar18 != (longlong *)0x0) {
              LVar20 = (LARGE_INTEGER)((LARGE_INTEGER *)(plVar18 + 1))->QuadPart;
              goto LAB_1427c78bd;
            }
            break;
          }
          iVar26 = (int)plVar18[2];
        } while (iVar26 != -1);
      }
    }
    LVar20.QuadPart = 0;
  }
LAB_1427c78bd:
  if (bVar28 == 0 && LVar20.QuadPart == 0) {
    if ((bool)(~bVar27 & lVar21 != 0)) goto LAB_1427c7a6e;
    FUN_14598bb38(&local_118,local_a8);
    local_f8.s.LowPart = 0xffffffff;
    local_f8.s.HighPart = local_b0.s.LowPart;
    LStack_f0 = local_b0.s.HighPart;
    DStack_ec = local_118.s.LowPart;
    LStack_e8 = local_118.s.HighPart;
    uStack_e4 = CONCAT31(uStack_e4._1_3_,(undefined1)local_110);
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0xffffffff;
    FUN_1401cb262(local_c8);
    LVar20.QuadPart = FUN_14001cc68(0x608,0x10);
    FUN_146876e1c(LVar20.QuadPart,*(undefined8 *)(LVar3.QuadPart + 0x278),&local_f8,
                  *(undefined8 *)(LVar3.QuadPart + 0x280));
    *(undefined4 *)(LVar20.QuadPart + 0x34) = *(undefined4 *)(LVar3.QuadPart + 0x34);
    if (local_a8 != local_b0.QuadPart) {
      local_108 = *(undefined8 *)(*(longlong *)(LVar3.QuadPart + 0x50) + 0x330);
      local_100 = *(longlong *)(*(longlong *)(LVar3.QuadPart + 0x50) + 0x338);
      if (local_100 != 0) {
        LOCK();
        *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
        UNLOCK();
      }
      FUN_146878620(LVar20.QuadPart + 0x10,&local_108);
    }
    FUN_146876a62(*(undefined8 *)(LVar3.QuadPart + 0x278),LVar20.QuadPart,0);
    FUN_14687724c(&local_f8);
  }
  if (LVar20.QuadPart != 0) {
    FUN_146878664(LVar3.QuadPart,LVar20.QuadPart);
    if (*(byte *)(LVar20.QuadPart + 0x2d8) < 2) {
      LStack_f0 = 0;
      DStack_ec = 0;
      local_f8.s.LowPart = LVar20.s.LowPart;
      local_f8.s.HighPart = LVar20.s.HighPart;
      FUN_1468779b6(&local_f8,&local_a0);
      iVar26 = *(int *)(LVar20.QuadPart + 0x588);
      *(uint *)(LVar20.QuadPart + 0x588) = iVar26 + 1U;
      if (*(uint *)(LVar20.QuadPart + 0x58c) < iVar26 + 1U) {
        FUN_1468825b4((longlong *)(LVar20.QuadPart + 0x580),iVar26);
      }
      ((LARGE_INTEGER *)(*(longlong *)(LVar20.QuadPart + 0x580) + (longlong)iVar26 * 8))->QuadPart =
           (LONGLONG)LVar3;
    }
    else if (*(byte *)(LVar20.QuadPart + 0x2d8) < 7) {
      LStack_f0 = 0;
      DStack_ec = 1;
      local_110 = 0x200000000;
      local_118 = LVar20;
      local_f8.s.LowPart = uVar11;
      local_f8.s.HighPart = uVar13;
      FUN_1468779b6(&local_f8,&local_118);
    }
  }
LAB_1427c7a6e:
  FUN_1468786fc(LVar3.QuadPart);
LAB_1427c7a76:
  iVar26 = *(int *)(LVar3.QuadPart + 0xdc);
  if (*(int *)(*(longlong *)(LVar3.QuadPart + 0x50) + 0x10) <= iVar26) goto LAB_1427c7a9a;
  goto LAB_1427c7594;
LAB_1427c7a9a:
  iVar23 = *(int *)(*(longlong *)(LVar3.QuadPart + 0x50) + 0x10);
LAB_1427c7aab:
  piVar9 = DAT_14c950c20;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar2 != 2)) {
    if (iVar2 == 1) {
      DVar16 = FUN_140ad26c0();
      DVar17 = GetCurrentThreadId();
      if (DVar16 == DVar17) goto LAB_1427c7ae6;
    }
    LOCK();
    *piVar9 = *piVar9 + -1;
    UNLOCK();
  }
LAB_1427c7ae6:
  if (iVar26 == iVar23) {
    FUN_1427bae1e(&local_130);
    *(undefined1 *)(LVar3.QuadPart + 0x2d8) = 3;
    LStack_f0 = 0;
    DStack_ec = 1;
    local_f8.s.LowPart = uVar11;
    local_f8.s.HighPart = uVar13;
    FUN_146877f6a(&local_f8,1);
  }
  else {
    FUN_146878544(*(undefined8 *)(LVar3.QuadPart + 0x278),LVar3.QuadPart,0x7fffffff);
    FUN_1427bae1e(&local_130);
  }
LAB_1427c73bb:
  if ((local_90 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427c7bee FUN_1427c7bee body=12 status=ok
// SIG undefined FUN_1427c7bee(void)

void FUN_1427c7bee(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001427c7bf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1427c7bfa FUN_1427c7bfa body=29 status=ok
// SIG undefined FUN_1427c7bfa(void)

undefined8 FUN_1427c7bfa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427c7c18 FUN_1427c7c18 body=2880 status=ok
// SIG undefined FUN_1427c7c18(void)

void FUN_1427c7c18(longlong *param_1,undefined8 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 uVar5;
  int *piVar6;
  DWORD DVar7;
  char cVar8;
  DWORD DVar9;
  DWORD DVar10;
  LPVOID pvVar11;
  code *pcVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  undefined8 uVar20;
  code *pcVar21;
  undefined4 uVar22;
  bool bVar23;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  code *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  code *local_d8;
  code *local_d0;
  undefined4 local_bc;
  ulonglong local_b8;
  undefined8 local_b0;
  code *local_a8;
  code *local_a0;
  code *local_98;
  code *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  code *local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar15 = *param_1;
  if (((int)param_1[1] != 0 && lVar15 != 0) &&
     (lVar16 = param_1[2], *(int *)(lVar16 + 0x288) != *(int *)(lVar16 + 0x2b4))) {
    uVar18 = (uint)((ulonglong)lVar15 >> 0x10);
    uVar14 = (uint)lVar15 & 0xffff;
    lVar17 = lVar16 + 0x2b8;
    if (*(longlong *)(lVar16 + 0x2c0) != 0) {
      lVar17 = *(longlong *)(lVar16 + 0x2c0);
    }
    iVar19 = *(int *)(lVar17 + (ulonglong)
                               (*(int *)(lVar16 + 0x2c8) - 1U &
                               (int)((ulonglong)lVar15 >> 0x20) + ((uint)lVar15 << 0x10 | uVar14) +
                               (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar14 >> 4)) * 4);
    if (iVar19 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar16 + 0x280) + (longlong)iVar19 * 0x18);
        if (*plVar1 == lVar15) {
          if (((plVar1 != (longlong *)0x0) && (pcVar4 = (code *)plVar1[1], pcVar4 != (code *)0x0))
             && (*(int *)(pcVar4 + 0x2dc) == (int)param_1[1])) {
            param_2[1] = L"Setup Imports";
            uVar20 = *(undefined8 *)(pcVar4 + 0x58);
            param_2[2] = uVar20;
            *(undefined8 *)(pcVar4 + 0x118) = *param_2;
            *(wchar_t **)(pcVar4 + 0x128) = L"Setup Imports";
            *(undefined8 *)(pcVar4 + 0x120) = uVar20;
            *(undefined4 *)(pcVar4 + 0x108) = *(undefined4 *)(param_2 + 3);
            pcVar4[0x10c] = *(code *)((longlong)param_2 + 0x1c);
            pcVar4[0x10d] = *(code *)((longlong)param_2 + 0x1d);
            DVar9 = DAT_14c75ec34;
            local_90 = pcVar4;
            if (DAT_14c75ec34 == 0xffffffff) {
              DVar9 = TlsAlloc();
              DVar10 = 0xffffffff;
              LOCK();
              bVar23 = DAT_14c75ec34 != 0xffffffff;
              DVar7 = DVar9;
              if (bVar23) {
                DVar10 = DAT_14c75ec34;
                DVar7 = DAT_14c75ec34;
              }
              DAT_14c75ec34 = DVar7;
              UNLOCK();
              if (bVar23) {
                TlsFree(DVar9);
                DVar9 = DVar10;
              }
            }
            pvVar11 = TlsGetValue(DVar9);
            if (pvVar11 == (LPVOID)0x0) {
              pvVar11 = (LPVOID)FUN_14001cc68(0x60,0x10);
              FUN_141073f92(pvVar11);
              FUN_140fddf04(pvVar11);
              TlsSetValue(DVar9,pvVar11);
            }
            local_88 = *(undefined8 *)((longlong)pvVar11 + 0x40);
            *(code **)((longlong)pvVar11 + 0x40) = pcVar4;
            local_80 = *(undefined8 *)((longlong)pvVar11 + 0x48);
            lVar15 = *(longlong *)(pcVar4 + 0x278) + 8;
            if (*(longlong *)(pcVar4 + 0x278) == 0) {
              lVar15 = 0;
            }
            *(longlong *)((longlong)pvVar11 + 0x48) = lVar15;
            FUN_146878118();
            piVar6 = DAT_14c950c20;
            if ((DAT_14c86a9f8 != '\x01') ||
               (iVar19 = *(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0xc60), iVar19 == 2)) goto LAB_1427c7e6a;
            if (iVar19 == 1) {
              DVar9 = FUN_140ad26c0();
              DVar10 = GetCurrentThreadId();
              if (DVar9 == DVar10) goto LAB_1427c7e6a;
            }
            lpCriticalSection = (LPCRITICAL_SECTION)(piVar6 + 4);
            while( true ) {
              if (0 < piVar6[1]) {
                (**(code **)(**(longlong **)(piVar6 + 0xe) + 0x20))
                          (*(longlong **)(piVar6 + 0xe),0xffffffff,0);
              }
              EnterCriticalSection(lpCriticalSection);
              if (piVar6[1] == 0) break;
              LeaveCriticalSection(lpCriticalSection);
            }
            LOCK();
            *piVar6 = *piVar6 + 1;
            UNLOCK();
            LeaveCriticalSection(lpCriticalSection);
LAB_1427c7e6a:
            uVar18 = *(uint *)(pcVar4 + 0xe0);
            lVar15 = *(longlong *)(pcVar4 + 0x50);
            iVar19 = *(int *)(lVar15 + 0x10);
            if ((uVar18 == 0) && (uVar18 = 0, 0 < iVar19)) {
              lVar16 = 0x22;
              lVar17 = 0;
              do {
                *(undefined1 *)(*(longlong *)(lVar15 + 8) + lVar16) = 0;
                lVar17 = lVar17 + 1;
                lVar15 = *(longlong *)(pcVar4 + 0x50);
                iVar19 = *(int *)(lVar15 + 0x10);
                lVar16 = lVar16 + 0x38;
              } while (lVar17 < iVar19);
              uVar18 = *(uint *)(pcVar4 + 0xe0);
            }
            if ((int)uVar18 < iVar19) {
              local_a0 = pcVar4 + 0x5a0;
              local_98 = pcVar4 + 0x288;
              local_a8 = pcVar4 + 0x490;
              pcVar21 = TlsGetValue_exref;
              do {
                *(uint *)(pcVar4 + 0xe0) = uVar18 + 1;
                DVar9 = DAT_14c75ec34;
                if (DAT_14c75ec34 == 0xffffffff) {
                  DVar9 = TlsAlloc();
                  DVar10 = 0xffffffff;
                  LOCK();
                  bVar23 = DAT_14c75ec34 != 0xffffffff;
                  DVar7 = DVar9;
                  if (bVar23) {
                    DVar10 = DAT_14c75ec34;
                    DVar7 = DAT_14c75ec34;
                  }
                  DAT_14c75ec34 = DVar7;
                  UNLOCK();
                  pcVar21 = TlsGetValue_exref;
                  if (bVar23) {
                    TlsFree(DVar9);
                    pcVar21 = TlsGetValue_exref;
                    DVar9 = DVar10;
                  }
                }
                pvVar11 = (LPVOID)(*pcVar21)(DVar9);
                if (pvVar11 == (LPVOID)0x0) {
                  pvVar11 = (LPVOID)FUN_14001cc68(0x60,0x10);
                  FUN_141073f92(pvVar11);
                  FUN_140fddf04(pvVar11);
                  TlsSetValue(DVar9,pvVar11);
                }
                lVar16 = *(longlong *)((longlong)pvVar11 + 0x58);
                uVar20 = *(undefined8 *)(lVar16 + 0x48);
                uVar22 = *(undefined4 *)(lVar16 + 0x40);
                *(longlong *)(lVar16 + 0x48) = lVar15;
                *(uint *)(lVar16 + 0x40) = uVar18;
                puVar2 = (undefined8 *)
                         (*(longlong *)(*(longlong *)(pcVar4 + 0x50) + 8) +
                         (longlong)(int)uVar18 * 0x38);
                if (*(int *)(*(longlong *)(*(longlong *)(pcVar4 + 0x50) + 8) + 8 +
                            (longlong)(int)uVar18 * 0x38) == 0) {
                  if (*(char *)((longlong)puVar2 + 0x23) == '\0') {
                    pcVar12 = (code *)puVar2[5];
                    if (pcVar12 == (code *)0x0) {
                      uVar5 = *puVar2;
                      if (DAT_14c951858 == 0) {
                        local_58 = FUN_1449e2820;
                        local_d0 = FUN_14081d0ea;
                        local_d8 = FUN_14081d0ea;
                        local_e0 = &local_58;
                        local_e8 = &LAB_1468c5283;
                        local_f0 = FUN_142809da0;
                        local_f8 = L"Engine";
                        local_100 = 0x400000000;
                        local_108 = 0x10000000;
                        local_110 = 8;
                        local_118 = 0x50;
                        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858);
                      }
                      local_110 = 0;
                      local_118 = 0;
                      pcVar12 = (code *)FUN_140be85e0(DAT_14c951858,0,uVar5,0);
                      if (pcVar12 == (code *)0x0) {
                        *(undefined1 *)((longlong)puVar2 + 0x23) = 1;
                        goto LAB_1427c85c2;
                      }
                      puVar2[5] = pcVar12;
                      FUN_146878962(pcVar4,pcVar12);
                    }
                    local_58 = pcVar12;
                    if (DAT_14c950c29 == '\x01') {
                      FUN_1456cec3c(pcVar12);
                    }
                    FUN_14688263a(local_98,&local_78,&local_58);
                    if ((((*(longlong *)(pcVar12 + 0x48) != 0) &&
                         (lVar15 = *(longlong *)(*(longlong *)(pcVar12 + 0x48) + 0x20), lVar15 != 0)
                         ) && (lVar15 = *(longlong *)(lVar15 + 0x398), lVar15 != 0)) &&
                       (*(byte *)(lVar15 + 0x2d8) < 8)) {
                      local_58 = *(code **)(lVar15 + 0x14);
                      local_50 = *(undefined4 *)(lVar15 + 0x2dc);
                      FUN_146881fba(local_a8,&local_78,&local_58);
                    }
                  }
LAB_1427c85c2:
                  local_50 = ~uVar18;
                  local_4c = 0;
                  local_58 = pcVar4;
                  FUN_146877f6a(&local_58);
                }
                else {
                  if (((puVar2[5] != 0) && (cVar8 = FUN_1468764f2(pcVar4), cVar8 != '\0')) &&
                     (DAT_14c75b114 != '\x01')) goto LAB_1427c85c2;
                  uVar14 = ~uVar18;
                  local_b8 = (ulonglong)uVar14;
                  lVar15 = *(longlong *)(*(longlong *)(pcVar4 + 0x50) + 8);
                  do {
                    lVar17 = (longlong)(int)~uVar14 * 0x38;
                    uVar14 = *(uint *)(lVar15 + 8 + lVar17);
                  } while (uVar14 != 0);
                  local_58 = *(code **)(lVar15 + lVar17);
                  local_bc = uVar22;
                  local_b0 = uVar20;
                  FUN_1427f3cbe(*(undefined8 *)(*(longlong *)(pcVar4 + 0x50) + 0x330),&local_60,
                                &local_58);
                  uVar20 = local_60;
                  lVar13 = *(longlong *)(lVar15 + 0x28 + lVar17);
                  if (lVar13 != 0) {
LAB_1427c8312:
                    lVar15 = lVar13;
                    lVar13 = lVar15;
                    if (*(longlong *)(lVar15 + 0x20) != 0) goto code_r0x0001427c8321;
                    goto LAB_1427c8336;
                  }
                  if (DAT_14c951858 == 0) {
                    local_58 = FUN_1449e2820;
                    local_d0 = FUN_14081d0ea;
                    local_d8 = FUN_14081d0ea;
                    local_e0 = &local_58;
                    local_e8 = &LAB_1468c5283;
                    local_f0 = FUN_142809da0;
                    local_f8 = L"Engine";
                    local_100 = 0x400000000;
                    local_108 = 0x10000000;
                    local_110 = 8;
                    local_118 = 0x50;
                    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                  }
                  local_110 = 0;
                  local_118 = 0;
                  lVar13 = FUN_140be85e0(DAT_14c951858,0,uVar20,0);
                  if (lVar13 == 0) {
                    *(undefined1 *)((longlong)puVar2 + 0x23) = 1;
                    uVar20 = local_b0;
                    pcVar21 = TlsGetValue_exref;
                    uVar22 = local_bc;
                    goto LAB_1427c85c2;
                  }
                  if (*(int *)(lVar15 + lVar17 + 8) == 0) {
                    *(longlong *)(lVar15 + lVar17 + 0x28) = lVar13;
                    FUN_146878962(pcVar4,lVar13);
                  }
LAB_1427c833b:
                  uVar20 = local_b0;
                  if (*(longlong *)(lVar13 + 0x48) == 0) {
                    lVar15 = 0;
                  }
                  else {
                    lVar15 = *(longlong *)(*(longlong *)(lVar13 + 0x48) + 0x20);
                  }
                  if ((lVar15 != 0) || (DAT_14c75b114 == '\0')) {
                    if ((lVar15 == 0) || (*(longlong *)(lVar15 + 0x398) == 0)) goto LAB_1427c83fe;
LAB_1427c8443:
                    FUN_1427bc13f(&local_64,lVar15,uVar18);
                    iVar19 = local_64;
                    uVar20 = local_b0;
                    uVar22 = local_bc;
                    if ((longlong)local_64 == 0) {
                      *(undefined1 *)((longlong)puVar2 + 0x23) = 1;
                      pcVar21 = TlsGetValue_exref;
                    }
                    else {
                      *(undefined1 *)((longlong)puVar2 + 0x23) = 0;
                      lVar17 = *(longlong *)(lVar15 + 0x18);
                      lVar13 = (longlong)local_64 * 0x68;
                      bVar3 = *(byte *)(lVar17 + -0x1c + lVar13);
                      *(byte *)((longlong)puVar2 + 0x23) = bVar3 >> 7;
                      pcVar21 = TlsGetValue_exref;
                      if (-1 < (char)bVar3) {
                        lVar17 = lVar17 + lVar13;
                        *(int *)((longlong)puVar2 + 0x1c) = local_64 + -1;
                        puVar2[6] = lVar15;
                        lVar13 = *(longlong *)(lVar17 + -0x28);
                        if (lVar13 == 0) {
                          local_50 = (uint)local_b8;
                          local_4c = 0;
                          local_78 = *(undefined8 *)(lVar15 + 0x398);
                          local_70 = local_64;
                          local_6c = 0;
                          local_58 = pcVar4;
                          FUN_1468779b6(&local_78,&local_58);
                          local_70 = 0;
                          local_78 = *(undefined8 *)(lVar15 + 0x398);
                          local_6c = 2;
                          FUN_1468779b6(&local_58,&local_78);
                        }
                        else {
                          puVar2[5] = lVar13;
                          FUN_146878962(pcVar4);
                        }
                        cVar8 = FUN_1468764f2(pcVar4,*(undefined8 *)(lVar17 + -0x28));
                        uVar20 = local_b0;
                        pcVar21 = TlsGetValue_exref;
                        uVar22 = local_bc;
                        if (cVar8 == '\0') {
                          local_50 = (uint)local_b8;
                          local_4c = 1;
                          local_78 = *(undefined8 *)(lVar15 + 0x398);
                          local_70 = iVar19;
                          local_6c = 1;
                          local_58 = pcVar4;
                          FUN_1468779b6(&local_78,&local_58);
                          uVar20 = local_b0;
                          pcVar21 = TlsGetValue_exref;
                          uVar22 = local_bc;
                        }
                      }
                    }
                    goto LAB_1427c85c2;
                  }
                  if ((*(byte *)(lVar13 + 0x2c) & 0x10) == 0) {
LAB_1427c83fe:
                    FUN_1427bbc60(pcVar4,uVar18);
                    cVar8 = FUN_1468764f2(pcVar4,puVar2[5]);
                    if (puVar2[5] == 0) {
LAB_1427c8427:
                      *(undefined1 *)((longlong)puVar2 + 0x23) = 1;
                    }
                    else if (cVar8 == '\0') {
                      puVar2[5] = 0;
                      goto LAB_1427c8427;
                    }
                    pcVar21 = TlsGetValue_exref;
                    uVar22 = local_bc;
                    if ((lVar15 == 0) || (*(longlong *)(lVar15 + 0x398) == 0)) goto LAB_1427c85c2;
                    goto LAB_1427c8443;
                  }
                  local_118 = (undefined4)local_b8;
                  cVar8 = FUN_146878bae(*(undefined8 *)(pcVar4 + 0x280),pcVar4,local_60);
                  pcVar21 = TlsGetValue_exref;
                  if (cVar8 == '\0') goto LAB_1427c83fe;
                  pcVar12 = local_a0;
                  if (uVar18 != 0xffffffff) {
                    if ((int)uVar18 < 0) {
                      iVar19 = *(int *)(pcVar4 + 0x604) + (int)local_b8 * 3 + -3;
                    }
                    else {
                      iVar19 = uVar18 * 2 + *(int *)(pcVar4 + 0x600);
                    }
                    pcVar12 = (code *)((longlong)iVar19 * 0x18 + *(longlong *)(pcVar4 + 0x5e8));
                  }
                  pcVar12[0x14] = (code)0x1;
                  uVar22 = local_bc;
                }
                *(undefined8 *)(lVar16 + 0x48) = uVar20;
                *(undefined4 *)(lVar16 + 0x40) = uVar22;
                uVar18 = *(uint *)(pcVar4 + 0xe0);
                lVar15 = *(longlong *)(pcVar4 + 0x50);
              } while ((int)uVar18 < *(int *)(lVar15 + 0x10));
            }
            piVar6 = DAT_14c950c20;
            if ((DAT_14c86a9f8 == '\x01') &&
               (iVar19 = *(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0xc60), iVar19 != 2)) {
              if (iVar19 == 1) {
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                if (DVar9 == DVar10) goto LAB_1427c8673;
              }
              LOCK();
              *piVar6 = *piVar6 + -1;
              UNLOCK();
            }
LAB_1427c8673:
            FUN_1427bae1e(&local_90);
            pcVar4[0x2d8] = (code)0x5;
            local_88 = 0x100000000;
            local_90 = pcVar4;
            FUN_146877aa2(*(longlong *)(pcVar4 + 0x278) + 0x410,&local_90);
            FUN_146878882(*(undefined8 *)(pcVar4 + 0x278),pcVar4);
          }
          break;
        }
        iVar19 = (int)plVar1[2];
      } while (iVar19 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001427c8321:
  lVar13 = *(longlong *)(lVar15 + 0x20);
  if ((*(uint *)(lVar15 + 8) >> 0x1c & 1) != 0) {
    lVar13 = FUN_142840154(lVar15);
LAB_1427c8336:
    if (lVar13 == 0) {
      lVar13 = *(longlong *)(lVar15 + 0x20);
      goto LAB_1427c8312;
    }
    goto LAB_1427c833b;
  }
  goto LAB_1427c8312;
}



// FUNCTION 1427c8780 FUN_1427c8780 body=12 status=ok
// SIG undefined FUN_1427c8780(void)

void FUN_1427c8780(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001427c8789. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1427c878c FUN_1427c878c body=29 status=ok
// SIG undefined FUN_1427c878c(void)

undefined8 FUN_1427c878c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427c87aa FUN_1427c87aa body=1678 status=ok
// SIG undefined FUN_1427c87aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427c87aa(longlong *param_1,undefined8 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  double dVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  double dVar7;
  int *piVar8;
  DWORD DVar9;
  DWORD DVar10;
  DWORD DVar11;
  LPVOID lpTlsValue;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  code *pcVar17;
  longlong lVar18;
  ulonglong uVar19;
  bool bVar20;
  double dVar21;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_90;
  int local_88;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = *param_1;
  if (((int)param_1[1] != 0 && lVar5 != 0) &&
     (lVar18 = param_1[2], *(int *)(lVar18 + 0x288) != *(int *)(lVar18 + 0x2b4))) {
    uVar12 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar15 = (uint)lVar5 & 0xffff;
    lVar16 = lVar18 + 0x2b8;
    if (*(longlong *)(lVar18 + 0x2c0) != 0) {
      lVar16 = *(longlong *)(lVar18 + 0x2c0);
    }
    iVar14 = *(int *)(lVar16 + (ulonglong)
                               (*(int *)(lVar18 + 0x2c8) - 1U &
                               (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar15) +
                               (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar15 >> 4)) * 4);
    if (iVar14 != -1) {
      while (plVar1 = (longlong *)(*(longlong *)(lVar18 + 0x280) + (longlong)iVar14 * 0x18),
            *plVar1 != lVar5) {
        iVar14 = (int)plVar1[2];
        if (iVar14 == -1) goto LAB_1427c88ad;
      }
      if (((plVar1 == (longlong *)0x0) || (lVar5 = plVar1[1], lVar5 == 0)) ||
         (*(int *)(lVar5 + 0x2dc) != (int)param_1[1])) goto LAB_1427c88ad;
      param_2[1] = L"Setup Exports";
      uVar6 = *(undefined8 *)(lVar5 + 0x58);
      param_2[2] = uVar6;
      *(undefined8 *)(lVar5 + 0x118) = *param_2;
      *(wchar_t **)(lVar5 + 0x128) = L"Setup Exports";
      *(undefined8 *)(lVar5 + 0x120) = uVar6;
      *(undefined4 *)(lVar5 + 0x108) = *(undefined4 *)(param_2 + 3);
      *(undefined1 *)(lVar5 + 0x10c) = *(undefined1 *)((longlong)param_2 + 0x1c);
      *(undefined1 *)(lVar5 + 0x10d) = *(undefined1 *)((longlong)param_2 + 0x1d);
      DVar10 = DAT_14c75ec34;
      local_b8 = lVar5;
      if (DAT_14c75ec34 == 0xffffffff) {
        DVar10 = TlsAlloc();
        DVar11 = 0xffffffff;
        LOCK();
        bVar20 = DAT_14c75ec34 != 0xffffffff;
        DVar9 = DVar10;
        if (bVar20) {
          DVar11 = DAT_14c75ec34;
          DVar9 = DAT_14c75ec34;
        }
        DAT_14c75ec34 = DVar9;
        UNLOCK();
        if (bVar20) {
          TlsFree(DVar10);
          DVar10 = DVar11;
        }
      }
      lpTlsValue = TlsGetValue(DVar10);
      if (lpTlsValue == (LPVOID)0x0) {
        lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
        FUN_141073f92(lpTlsValue);
        FUN_140fddf04(lpTlsValue);
        TlsSetValue(DVar10,lpTlsValue);
      }
      local_b0 = *(undefined8 *)((longlong)lpTlsValue + 0x40);
      *(longlong *)((longlong)lpTlsValue + 0x40) = lVar5;
      local_a8 = *(undefined8 *)((longlong)lpTlsValue + 0x48);
      lVar18 = *(longlong *)(lVar5 + 0x278) + 8;
      if (*(longlong *)(lVar5 + 0x278) == 0) {
        lVar18 = 0;
      }
      *(longlong *)((longlong)lpTlsValue + 0x48) = lVar18;
      FUN_146878118();
      piVar8 = DAT_14c950c20;
      if ((DAT_14c86a9f8 != '\x01') ||
         (iVar14 = *(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60), iVar14 == 2)) goto LAB_1427c8a15;
      if (iVar14 == 1) {
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        if (DVar10 == DVar11) goto LAB_1427c8a15;
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(piVar8 + 4);
      while( true ) {
        if (0 < piVar8[1]) {
          (**(code **)(**(longlong **)(piVar8 + 0xe) + 0x20))
                    (*(longlong **)(piVar8 + 0xe),0xffffffff,0);
        }
        EnterCriticalSection(lpCriticalSection);
        if (piVar8[1] == 0) break;
        LeaveCriticalSection(lpCriticalSection);
      }
      LOCK();
      *piVar8 = *piVar8 + 1;
      UNLOCK();
      LeaveCriticalSection(lpCriticalSection);
LAB_1427c8a15:
      *(wchar_t **)(lVar5 + 0x128) = L"SetupExports_Event";
      lVar18 = *(longlong *)(lVar5 + 0x50);
      *(undefined8 *)(lVar5 + 0x120) = *(undefined8 *)(lVar5 + 0x58);
      iVar14 = *(int *)(lVar5 + 0xe4);
      iVar13 = *(int *)(lVar18 + 0x20);
      if (iVar14 < iVar13) {
        pcVar17 = QueryPerformanceCounter_exref;
        do {
          uVar12 = iVar14 * -0x33333333 + 0x19999998;
          if ((uVar12 >> 1 | (uint)((uVar12 & 1) != 0) << 0x1f) < 0x19999999) {
            if (*(int *)(*(longlong *)(lVar5 + 0x278) + 0x84) == 0) {
              if (*(char *)(lVar5 + 0x10c) == '\x01') {
                dVar7 = (double)*(float *)(lVar5 + 0x108);
                dVar2 = *(double *)(lVar5 + 0x118);
                (*pcVar17)(&local_90);
                dVar21 = ((double)local_90 * DAT_14c83f420 + 16777216.0) - dVar2;
                if ((dVar7 < dVar21) && (DAT_14c948b4c != 0)) {
                  if (((DAT_14c75ec60 != dVar2) || (NAN(DAT_14c75ec60) || NAN(dVar2))) &&
                     (((double)_DAT_14c75ec58 < dVar21 && ((double)_DAT_14c75ec54 * dVar7 < dVar21))
                     )) {
                    DAT_14c75ec60 = dVar2;
                  }
                }
                if (dVar7 < dVar21) goto LAB_1427c8d1e;
              }
              iVar14 = *(int *)(lVar5 + 0xe4);
              if (DAT_14c950c20[2] == 0) {
                lVar18 = *(longlong *)(lVar5 + 0x50);
                goto LAB_1427c8b43;
              }
            }
            else {
LAB_1427c8d1e:
              iVar14 = *(int *)(lVar5 + 0xe4);
            }
            break;
          }
LAB_1427c8b43:
          iVar13 = iVar14 + 1;
          *(int *)(lVar5 + 0xe4) = iVar13;
          local_90 = lVar5;
          local_88 = iVar13;
          if (*(longlong *)(*(longlong *)(lVar18 + 0x18) + 0x40 + (longlong)iVar14 * 0x68) == 0) {
            lVar16 = *(longlong *)(lVar18 + 0x18) + (longlong)iVar14 * 0x68;
            bVar3 = *(byte *)(lVar16 + 0x4c);
            if (((((char)bVar3 < '\0') || ((*(byte *)(lVar16 + 0x4d) & 1) != 0)) ||
                (((bVar3 & 4) != 0 && (*(char *)(lVar18 + 0x230) != '\0')))) ||
               (((((bVar3 & 2) != 0 && (*(char *)(lVar18 + 0x231) != '\0')) ||
                 (*(int *)(lVar16 + 0x10) == 0)) || (*(int *)(lVar16 + 0xc) == 0)))) {
              *(byte *)(lVar16 + 0x4c) = bVar3 | 0x80;
            }
            else {
              uVar19 = (ulonglong)*(int *)(lVar16 + 0x54);
              if (-1 < (longlong)uVar19) {
                local_84 = 2;
                local_94 = 1;
                local_a0 = lVar5;
                if (0 < *(int *)(lVar16 + 0x58)) {
                  uVar12 = *(int *)(lVar16 + 0x58) + 1;
                  do {
                    local_98 = *(undefined4 *)
                                (*(longlong *)(*(longlong *)(lVar5 + 0x50) + 0x3a8) + uVar19 * 4);
                    uVar19 = uVar19 + 1;
                    FUN_1468779b6(&local_a0,&local_90);
                    uVar12 = uVar12 - 1;
                  } while (1 < uVar12);
                }
                local_84 = 2;
                local_94 = 0;
                if (0 < *(int *)(lVar16 + 0x5c)) {
                  uVar19 = uVar19 & 0xffffffff;
                  uVar12 = *(int *)(lVar16 + 0x5c) + 1;
                  do {
                    local_98 = *(undefined4 *)
                                (*(longlong *)(*(longlong *)(lVar5 + 0x50) + 0x3a8) + uVar19 * 4);
                    uVar19 = uVar19 + 1;
                    FUN_1468779b6(&local_a0,&local_90);
                    uVar12 = uVar12 - 1;
                  } while (1 < uVar12);
                }
                local_84 = 0;
                local_94 = 1;
                if (0 < *(int *)(lVar16 + 0x60)) {
                  uVar19 = uVar19 & 0xffffffff;
                  uVar12 = *(int *)(lVar16 + 0x60) + 1;
                  do {
                    local_98 = *(undefined4 *)
                                (*(longlong *)(*(longlong *)(lVar5 + 0x50) + 0x3a8) + uVar19 * 4);
                    uVar19 = uVar19 + 1;
                    FUN_1468779b6(&local_a0,&local_90);
                    uVar12 = uVar12 - 1;
                  } while (1 < uVar12);
                }
                local_84 = 0;
                local_94 = 0;
                pcVar17 = QueryPerformanceCounter_exref;
                if (0 < *(int *)(lVar16 + 100)) {
                  lVar18 = (uVar19 & 0xffffffff) << 2;
                  uVar12 = *(int *)(lVar16 + 100) + 1;
                  do {
                    local_98 = *(undefined4 *)
                                (*(longlong *)(*(longlong *)(lVar5 + 0x50) + 0x3a8) + lVar18);
                    FUN_1468779b6(&local_a0,&local_90);
                    lVar18 = lVar18 + 4;
                    uVar12 = uVar12 - 1;
                    pcVar17 = QueryPerformanceCounter_exref;
                  } while (1 < uVar12);
                }
              }
            }
          }
          local_84 = 0;
          local_90 = lVar5;
          local_88 = iVar13;
          FUN_146877f6a(&local_90,0);
          iVar14 = *(int *)(lVar5 + 0xe4);
          lVar18 = *(longlong *)(lVar5 + 0x50);
        } while (iVar14 < *(int *)(lVar18 + 0x20));
        iVar13 = *(int *)(*(longlong *)(lVar5 + 0x50) + 0x20);
      }
      piVar8 = DAT_14c950c20;
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar4 = *(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60), iVar4 != 2)) {
        if (iVar4 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          if (DVar10 == DVar11) goto LAB_1427c8d67;
        }
        LOCK();
        *piVar8 = *piVar8 + -1;
        UNLOCK();
      }
LAB_1427c8d67:
      if (iVar14 == iVar13) {
        FUN_1427bae1e(&local_b8);
        *(undefined1 *)(lVar5 + 0x2d8) = 6;
        FUN_146878e8a(lVar5);
      }
      else {
        FUN_146878882(*(undefined8 *)(lVar5 + 0x278),lVar5);
        FUN_1427bae1e(&local_b8);
      }
    }
  }
LAB_1427c88ad:
  if ((local_80 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427c8e60 FUN_1427c8e60 body=12 status=ok
// SIG undefined FUN_1427c8e60(void)

void FUN_1427c8e60(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001427c8e69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1427c8e6c FUN_1427c8e6c body=29 status=ok
// SIG undefined FUN_1427c8e6c(void)

undefined8 FUN_1427c8e6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427c8e8a FUN_1427c8e8a body=9751 status=ok
// SIG undefined FUN_1427c8e8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427c8e8a(longlong *param_1,longlong *param_2)

{
  LPCRITICAL_SECTION p_Var1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  double dVar7;
  DWORD DVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  DWORD DVar13;
  DWORD DVar14;
  LPVOID pvVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  undefined ***pppuVar18;
  undefined **ppuVar19;
  longlong *plVar20;
  longlong lVar21;
  byte bVar22;
  wchar_t *pwVar23;
  longlong *plVar24;
  ulonglong uVar25;
  int iVar26;
  code *pcVar27;
  undefined **ppuVar28;
  longlong lVar29;
  int iVar30;
  undefined **ppuVar31;
  longlong lVar32;
  uint uVar33;
  undefined4 uVar34;
  undefined *puVar35;
  undefined8 *puVar36;
  wchar_t *pwVar37;
  int iVar38;
  bool bVar39;
  double dVar40;
  undefined1 auStack_4c8 [32];
  undefined **local_4a8;
  undefined4 local_4a0;
  undefined8 local_498;
  wchar_t *local_490;
  wchar_t *local_488;
  code *local_480;
  undefined1 *local_478;
  undefined ***local_470;
  code *local_468;
  code *local_460;
  longlong *local_450;
  undefined **local_448;
  undefined *local_440;
  int *local_438;
  undefined ***local_430;
  undefined ***local_428;
  undefined **local_420;
  undefined **local_418;
  undefined **local_410;
  undefined **local_408;
  undefined8 local_400;
  longlong local_3f8;
  longlong local_3f0;
  undefined **local_3e8;
  undefined **local_3e0;
  undefined **local_3d8;
  undefined **local_3d0;
  undefined **local_3c8;
  undefined **local_3c0;
  undefined **local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  int local_39c;
  undefined **local_398;
  undefined8 uStack_390;
  undefined **local_388;
  undefined8 uStack_380;
  byte local_35d;
  undefined8 local_300;
  longlong *local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined1 local_2e0;
  undefined **local_2d8;
  undefined8 local_2d0;
  undefined **local_2c8;
  undefined8 local_2c0;
  undefined ***local_2b8;
  undefined ****ppppuStack_2b0;
  undefined2 local_2a8 [4];
  longlong *local_2a0;
  undefined8 local_298;
  undefined *puStack_290;
  longlong local_288;
  longlong *local_278;
  longlong local_268 [4];
  undefined8 local_248;
  undefined **local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  lVar21 = *param_1;
  if (((int)param_1[1] != 0 && lVar21 != 0) &&
     (lVar29 = param_1[2], *(int *)(lVar29 + 0x288) != *(int *)(lVar29 + 0x2b4))) {
    uVar12 = (uint)((ulonglong)lVar21 >> 0x10);
    uVar33 = (uint)lVar21 & 0xffff;
    lVar32 = lVar29 + 0x2b8;
    if (*(longlong *)(lVar29 + 0x2c0) != 0) {
      lVar32 = *(longlong *)(lVar29 + 0x2c0);
    }
    iVar38 = *(int *)(lVar32 + (ulonglong)
                               (*(int *)(lVar29 + 0x2c8) - 1U &
                               (int)((ulonglong)lVar21 >> 0x20) + ((uint)lVar21 << 0x10 | uVar33) +
                               (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar33 >> 4)) * 4);
    if (iVar38 != -1) {
      do {
        plVar20 = (longlong *)(*(longlong *)(lVar29 + 0x280) + (longlong)iVar38 * 0x18);
        if (*plVar20 == lVar21) {
          if (((plVar20 != (longlong *)0x0) &&
              (ppuVar5 = (undefined **)plVar20[1], ppuVar5 != (undefined **)0x0)) &&
             (*(int *)((longlong)ppuVar5 + 0x2dc) == (int)param_1[1])) {
            param_2[1] = (longlong)L"ProcessImportsAndExports";
            puVar35 = ppuVar5[0xb];
            param_2[2] = (longlong)puVar35;
            ppuVar5[0x23] = (undefined *)*param_2;
            ppuVar5[0x25] = (undefined *)L"ProcessImportsAndExports";
            ppuVar5[0x24] = puVar35;
            *(int *)(ppuVar5 + 0x21) = (int)param_2[3];
            *(undefined1 *)((longlong)ppuVar5 + 0x10c) = *(undefined1 *)((longlong)param_2 + 0x1c);
            *(undefined1 *)((longlong)ppuVar5 + 0x10d) = *(undefined1 *)((longlong)param_2 + 0x1d);
            if (*(char *)((longlong)ppuVar5 + 0x59a) == '\0') {
              DVar13 = DAT_14c75ec34;
              local_3b8 = ppuVar5;
              if (DAT_14c75ec34 == 0xffffffff) {
                DVar13 = TlsAlloc();
                DVar14 = 0xffffffff;
                LOCK();
                bVar39 = DAT_14c75ec34 != 0xffffffff;
                DVar8 = DVar13;
                if (bVar39) {
                  DVar14 = DAT_14c75ec34;
                  DVar8 = DAT_14c75ec34;
                }
                DAT_14c75ec34 = DVar8;
                UNLOCK();
                if (bVar39) {
                  TlsFree(DVar13);
                  DVar13 = DVar14;
                }
              }
              pvVar15 = TlsGetValue(DVar13);
              if (pvVar15 == (LPVOID)0x0) {
                pvVar15 = (LPVOID)FUN_14001cc68(0x60,0x10);
                FUN_141073f92(pvVar15);
                FUN_140fddf04(pvVar15);
                TlsSetValue(DVar13,pvVar15);
              }
              local_3b0 = *(undefined8 *)((longlong)pvVar15 + 0x40);
              *(undefined ***)((longlong)pvVar15 + 0x40) = ppuVar5;
              local_3a8 = *(undefined8 *)((longlong)pvVar15 + 0x48);
              puVar35 = ppuVar5[0x4f] + 8;
              if (ppuVar5[0x4f] == (undefined *)0x0) {
                puVar35 = (undefined *)0x0;
              }
              *(undefined **)((longlong)pvVar15 + 0x48) = puVar35;
              FUN_146878118();
              if (*(int *)(ppuVar5[0x4f] + 0x84) != 0) goto LAB_1427cb424;
              local_3c0 = ppuVar5 + 0x5c;
              local_3c8 = ppuVar5 + 0x5e;
              local_3d0 = ppuVar5 + 0x60;
              local_3d8 = ppuVar5 + 100;
              local_420 = ppuVar5 + 0x7e;
              local_408 = ppuVar5 + 0x85;
              local_3e0 = ppuVar5 + 0x80;
              ppuVar19 = ppuVar5 + 0x7c;
              local_438 = (int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0xc60);
              local_428 = &local_a8;
              local_410 = ppuVar5 + 0x68;
              local_3e8 = ppuVar5 + 0x6f;
              local_418 = ppuVar5 + 0x72;
              bVar22 = 1;
              iVar38 = 0;
              pcVar27 = QueryPerformanceCounter_exref;
              local_448 = ppuVar19;
              goto LAB_1427c91da;
            }
          }
          break;
        }
        iVar38 = (int)plVar20[2];
      } while (iVar38 != -1);
    }
  }
LAB_1427c9002:
  if ((local_a0 ^ (ulonglong)auStack_4c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1427c91da:
  if (*(char *)((longlong)ppuVar5 + 0x10c) == '\x01') {
    dVar7 = (double)*(float *)(ppuVar5 + 0x21);
    puVar35 = ppuVar5[0x23];
    (*pcVar27)(&local_2c8);
    dVar40 = ((double)(longlong)local_2c8 * DAT_14c83f420 + 16777216.0) - (double)puVar35;
    if ((dVar7 < dVar40) && (DAT_14c948b4c != 0)) {
      if ((((double)DAT_14c75ec60 != (double)puVar35) ||
          (NAN((double)DAT_14c75ec60) || NAN((double)puVar35))) &&
         (((double)_DAT_14c75ec58 < dVar40 && ((double)_DAT_14c75ec54 * dVar7 < dVar40)))) {
        DAT_14c75ec60 = puVar35;
      }
    }
    if (dVar7 < dVar40) goto LAB_1427cb424;
  }
  if (((bool)(~bVar22 & 1 | DAT_14c950c20[2] != 0)) ||
     (((iVar38 != 0 && (DAT_14c948744 != 0)) || (iVar38 = iVar38 + 1, iVar38 == 0x14))))
  goto LAB_1427cb424;
  if ((*(int *)(ppuVar5 + 0x69) - *(int *)((longlong)ppuVar5 + 0x374) < DAT_14c75ec2c) &&
     (*(int *)(ppuVar5 + 99) != 0)) {
    puVar35 = ppuVar5[0x4f];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9487b8) && (FUN_144b3d300(&DAT_14c9487b8), DAT_14c9487b8 == -1)) {
      cVar10 = '\x01';
      cVar9 = FUN_1427c6430();
      if (cVar9 == '\0') {
        cVar10 = FUN_1427c64b2();
      }
      DAT_14c9487b4 = cVar10;
      _Init_thread_footer(&DAT_14c9487b8);
      pcVar27 = QueryPerformanceCounter_exref;
      ppuVar19 = local_448;
    }
    if ((DAT_14c9487b4 == '\x01') &&
       (0x3ff < *(int *)(*(longlong *)(puVar35 + 0x470) + 0xa0) -
                *(int *)(*(longlong *)(puVar35 + 0x470) + 0xcc))) goto LAB_1427c932f;
LAB_1427c93ba:
    FUN_1427bd8be();
    ppuVar5[0x25] = (undefined *)L"ProcessImportsAndExports Start IO";
LAB_1427c93c9:
    ppuVar5[0x24] = (undefined *)0x0;
    bVar22 = 1;
  }
  else {
LAB_1427c932f:
    if (*(int *)(ppuVar5 + 0x5d) == 0) {
      if (*(int *)(ppuVar5 + 0x5f) != 0) {
        local_388 = (undefined **)CONCAT44(local_388._4_4_,0xffffffff);
        FUN_146878096(local_3c8,&local_388);
        local_2c0 = (undefined ***)CONCAT44(1,~(uint)local_388);
        local_2c8 = ppuVar5;
        FUN_146877aa2(ppuVar5[0x4f] + 0x410,&local_2c8);
        ppuVar5[0x25] = (undefined *)L"ProcessImportsAndExports ImportsThatAreNowSerialized";
        goto LAB_1427c93c9;
      }
      if (*(int *)(ppuVar5 + 0x61) == 0) {
        if (*(int *)(ppuVar5 + 99) != 0) {
          puVar35 = ppuVar5[0x4f];
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c9487b8) && (FUN_144b3d300(&DAT_14c9487b8), DAT_14c9487b8 == -1)) {
            cVar10 = '\x01';
            cVar9 = FUN_1427c6430();
            if (cVar9 == '\0') {
              cVar10 = FUN_1427c64b2();
            }
            DAT_14c9487b4 = cVar10;
            _Init_thread_footer(&DAT_14c9487b8);
            pcVar27 = QueryPerformanceCounter_exref;
            ppuVar19 = local_448;
          }
          if ((DAT_14c9487b4 != '\x01') ||
             (*(int *)(*(longlong *)(puVar35 + 0x470) + 0xa0) -
              *(int *)(*(longlong *)(puVar35 + 0x470) + 0xcc) < 0x400)) goto LAB_1427c93ba;
        }
        if (*(int *)(ppuVar5 + 0x65) == 0) {
          if ((0 < (longlong)ppuVar5[0x7d]) &&
             (*(int *)(ppuVar5 + 0x7f) == *(int *)((longlong)ppuVar5 + 0x424))) {
            *(undefined4 *)ppuVar19 = 0xffffffff;
            ((wchar_t *)((longlong)ppuVar19 + 4))[0] = L'\xffff';
            ((wchar_t *)((longlong)ppuVar19 + 4))[1] = L'\xffff';
            *(undefined4 *)(ppuVar19 + 1) = 0xffffffff;
            ((wchar_t *)((longlong)ppuVar19 + 0xc))[0] = L'\xffff';
            ((wchar_t *)((longlong)ppuVar19 + 0xc))[1] = L'\xffff';
            if (ppuVar5[10][0x2e3] == '\x01') {
              uVar17 = *(undefined8 *)(ppuVar5[10] + 0x328);
            }
            else {
              uVar17 = 0;
            }
            FUN_1427bdfea(uVar17);
            ppuVar5[0x25] = (undefined *)L"ProcessImportsAndExports FlushPrecacheBuffer";
            ppuVar5[0x24] = (undefined *)0x0;
          }
          ppuVar31 = local_418;
          ppuVar28 = local_420;
          iVar26 = *(int *)(ppuVar5 + 0x67);
          if ((longlong)iVar26 == 0) {
            bVar22 = 0;
          }
          else {
            ppuVar19 = *(undefined ***)(ppuVar5[0x66] + (longlong)iVar26 * 8 + -8);
            *(int *)(ppuVar5 + 0x67) = iVar26 + -1;
            if (*(int *)(ppuVar5 + 0x69) == *(int *)((longlong)ppuVar5 + 0x374)) {
              puVar35 = (undefined *)0x0;
            }
            else {
              uVar12 = ((uint)((ulonglong)ppuVar19 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)ppuVar19 >> 4)) * -0x7a143595;
              uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
              ppuVar16 = (undefined **)ppuVar5[0x70];
              if ((undefined **)ppuVar5[0x70] == (undefined **)0x0) {
                ppuVar16 = local_3e8;
              }
              iVar26 = *(int *)((longlong)ppuVar16 +
                               (ulonglong)
                               (*(int *)(ppuVar5 + 0x71) - 1U & (uVar12 >> 0x10 ^ uVar12)) * 4);
              if (iVar26 != -1) {
                do {
                  puVar35 = *local_410 + (longlong)iVar26 * 0x38;
                  if (*(undefined ***)(*local_410 + (longlong)iVar26 * 0x38) == ppuVar19)
                  goto LAB_1427c9a91;
                  iVar26 = *(int *)(puVar35 + 0x30);
                } while (iVar26 != -1);
              }
              puVar35 = (undefined *)0x0;
            }
LAB_1427c9a91:
            ppuVar5[0x7c] = *(undefined **)(puVar35 + 8);
            ppuVar5[0x7d] = *(undefined **)(puVar35 + 0x10);
            FUN_1402226aa(local_420);
            lVar21 = *(longlong *)(ppuVar5[0x4f] + 0x470);
            plVar20 = (longlong *)(lVar21 + 0x138);
            *plVar20 = *plVar20 - *(longlong *)(puVar35 + 0x10);
            FUN_1427c64f0(lVar21,0);
            if (ppuVar5[10][0x2e3] == '\x01') {
              uVar17 = *(undefined8 *)(ppuVar5[10] + 0x328);
            }
            else {
              uVar17 = 0;
            }
            if (*(char *)((longlong)ppuVar19 + 0x51) == '\0') {
              (**(code **)(*ppuVar19 + 0x10))(ppuVar19,0);
            }
            local_4a8 = ppuVar19;
            FUN_1427c544a(uVar17,ppuVar5[0x7c]);
            local_2c8 = (undefined **)CONCAT44(local_2c8._4_4_,*(int *)(puVar35 + 0x18));
            if (*(int *)(puVar35 + 0x18) <= *(int *)(puVar35 + 0x1c)) {
              do {
                FUN_14688368a(ppuVar31);
                FUN_1447cbafe(ppuVar28,&local_388);
                iVar26 = (int)local_2c8;
                local_2c8 = (undefined **)CONCAT44(local_2c8._4_4_,(int)local_2c8 + 1);
              } while (iVar26 < *(int *)(puVar35 + 0x1c));
            }
            iVar26 = *(int *)(puVar35 + 0x28);
            if ((longlong)iVar26 != 0) {
              lVar21 = *(longlong *)(puVar35 + 0x20);
              lVar29 = 0;
              do {
                local_2c0 = (undefined ***)CONCAT44(2,*(int *)(lVar21 + lVar29) + 1);
                local_2c8 = ppuVar5;
                FUN_146877aa2(ppuVar5[0x4f] + 0x410,&local_2c8);
                lVar29 = lVar29 + 4;
              } while ((longlong)iVar26 * 4 != lVar29);
            }
            FUN_146883734();
            ppuVar5[0x25] = (undefined *)L"ProcessImportsAndExports MakeNextPrecacheRequestCurrent";
            ppuVar5[0x24] = (undefined *)0x0;
            bVar22 = 0;
            pcVar27 = QueryPerformanceCounter_exref;
            ppuVar19 = local_448;
          }
          goto LAB_1427c9451;
        }
        local_39c = -1;
        FUN_146878096(local_3d8,&local_39c);
        iVar26 = local_39c;
        if (*(int *)(ppuVar5 + 0x7f) != *(int *)((longlong)ppuVar5 + 0x424)) {
          ppuVar28 = (undefined **)ppuVar5[0x86];
          if ((undefined **)ppuVar5[0x86] == (undefined **)0x0) {
            ppuVar28 = local_408;
          }
          pwVar23 = (wchar_t *)
                    ((longlong)ppuVar28 +
                    ((longlong)*(int *)(ppuVar5 + 0x87) - 1U & (longlong)local_39c) * 4);
          iVar11 = 0;
          do {
            iVar3 = *(int *)pwVar23;
            lVar21 = (longlong)iVar3;
            if (lVar21 == -1) break;
            piVar2 = (int *)(*local_420 + lVar21 * 0xc);
            iVar4 = *piVar2;
            if (iVar4 == local_39c) {
              ppuVar19 = (undefined **)ppuVar5[0x86];
              if ((undefined **)ppuVar5[0x86] == (undefined **)0x0) {
                ppuVar19 = local_408;
              }
              iVar30 = *(int *)((longlong)ppuVar19 + (longlong)piVar2[2] * 4);
              if (iVar30 == iVar3) {
                pwVar37 = (wchar_t *)((longlong)ppuVar19 + (longlong)piVar2[2] * 4);
              }
              else {
                do {
                  pwVar37 = (wchar_t *)(*local_420 + (longlong)iVar30 * 0xc + 4);
                  iVar30 = *(int *)pwVar37;
                } while (iVar30 != iVar3);
              }
              *(int *)pwVar37 = piVar2[1];
              puVar35 = ppuVar5[0x7e];
              if (*(int *)((longlong)ppuVar5 + 0x424) != 0) {
                *(int *)(puVar35 + (longlong)*(int *)(ppuVar5 + 0x84) * 0xc) = iVar3;
              }
              *(undefined4 *)(puVar35 + lVar21 * 0xc) = 0xffffffff;
              uVar34 = 0xffffffff;
              if (0 < *(int *)((longlong)ppuVar5 + 0x424)) {
                uVar34 = *(undefined4 *)(ppuVar5 + 0x84);
              }
              *(undefined4 *)(puVar35 + lVar21 * 0xc + 4) = uVar34;
              *(int *)(ppuVar5 + 0x84) = iVar3;
              *(int *)((longlong)ppuVar5 + 0x424) = *(int *)((longlong)ppuVar5 + 0x424) + 1;
              ppuVar19 = (undefined **)ppuVar5[0x82];
              if ((undefined **)ppuVar5[0x82] == (undefined **)0x0) {
                ppuVar19 = local_3e0;
              }
              iVar30 = iVar3 + 0x1f;
              if (-1 < iVar3) {
                iVar30 = iVar3;
              }
              bVar22 = (byte)iVar3 & 0x1f;
              pwVar37 = (wchar_t *)((longlong)ppuVar19 + (longlong)(iVar30 >> 5) * 4);
              *(uint *)pwVar37 = *(uint *)pwVar37 & (-2 << bVar22 | 0xfffffffeU >> 0x20 - bVar22);
              iVar11 = iVar11 + 1;
              ppuVar19 = local_448;
            }
            else {
              pwVar23 = (wchar_t *)(piVar2 + 1);
            }
          } while (iVar4 != local_39c);
          piVar2 = DAT_14c950c20;
          if (iVar11 == 1) {
            if ((DAT_14c86a9f8 == '\x01') && (*local_438 != 2)) {
              if (*local_438 == 1) {
                DVar13 = FUN_140ad26c0();
                DVar14 = GetCurrentThreadId();
                if (DVar13 == DVar14) goto LAB_1427c9c15;
              }
              p_Var1 = (LPCRITICAL_SECTION)(piVar2 + 4);
              while( true ) {
                if (0 < piVar2[1]) {
                  (**(code **)(**(longlong **)(piVar2 + 0xe) + 0x20))
                            (*(longlong **)(piVar2 + 0xe),0xffffffff);
                }
                EnterCriticalSection(p_Var1);
                if (piVar2[1] == 0) break;
                LeaveCriticalSection(p_Var1);
              }
              LOCK();
              *piVar2 = *piVar2 + 1;
              UNLOCK();
              LeaveCriticalSection(p_Var1);
              iVar26 = local_39c;
            }
LAB_1427c9c15:
            plVar20 = *(longlong **)
                       (*(longlong *)(ppuVar5[10] + 0x18) + 0x40 + (longlong)iVar26 * 0x68);
            if ((plVar20 != (longlong *)0x0) && ((*(uint *)(plVar20 + 1) >> 10 & 1) != 0)) {
              puVar35 = (undefined *)(*(longlong *)(ppuVar5[10] + 0x18) + (longlong)iVar26 * 0x68);
              local_450 = plVar20;
              FUN_1427bccfa(ppuVar5,*(undefined4 *)(puVar35 + 0xc),0,0);
              ppuVar5[0x25] = (undefined *)L"EventDrivenSerializeExport";
              ppuVar5[0x24] = (undefined *)local_450;
              local_440 = puVar35;
              if (DAT_14c948f88 == (longlong *)0x0) {
                local_398 = (undefined **)&DAT_1427db2a2;
                plVar20 = (longlong *)FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                DAT_14c948f88 = plVar20;
                FUN_1446f470e(&local_388,L"Struct",1);
                local_470 = &local_398;
                local_478 = &LAB_146891313;
                local_480 = FUN_146272f63;
                local_490 = L"Engine";
                local_488 = (wchar_t *)CONCAT44(local_488._4_4_,199);
                local_498 = 8;
                local_4a0 = 0x10000020;
                local_4a8._0_4_ = 8;
                FUN_14574b4b2(plVar20);
                DAT_14c948f88 = plVar20;
                if (DAT_14c927740 == 0) {
                  local_2c8 = (undefined **)FUN_1449e2820;
                  local_460 = FUN_14081d0ea;
                  local_468 = FUN_14081d0ea;
                  local_478 = &LAB_146856450;
                  local_480 = FUN_1427b121c;
                  local_488 = L"Engine";
                  local_490 = (wchar_t *)0x0;
                  local_498 = CONCAT44(local_498._4_4_,0x10000021);
                  local_4a0 = 8;
                  local_4a8._0_4_ = 0x28;
                  local_470 = &local_2c8;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                }
                plVar20 = DAT_14c948f88;
                lVar21 = DAT_14c927740;
                uVar17 = FUN_1400163b0();
                local_4a8 = (undefined **)0x149e6bce8;
                FUN_14574b446(uVar17,plVar20,lVar21,L"/Script/CoreUObject");
              }
              if ((((int)DAT_14c948f88[7] <= *(int *)(local_450[2] + 0x38)) &&
                  (*(longlong **)
                    (*(longlong *)(local_450[2] + 0x30) + (longlong)(int)DAT_14c948f88[7] * 8) ==
                   DAT_14c948f88 + 6)) && (*(int *)(local_440 + 0x14) != 0)) {
                lVar21 = FUN_1427bccfa(ppuVar5,*(int *)(local_440 + 0x14),1,iVar26 + 1);
                if (lVar21 == 0) {
                  FUN_1400021e4(local_440,&local_2c8);
                  ppuVar19 = (undefined **)&DAT_149dfb77a;
                  if ((int)local_2c0 != 0) {
                    ppuVar19 = local_2c8;
                  }
                  uVar12 = *(uint *)(local_440 + 0x14);
                  if ((longlong)(int)uVar12 < 0) {
                    lVar21 = (ulonglong)~uVar12 * 0x38 + *(longlong *)(ppuVar5[10] + 8);
                  }
                  else {
                    lVar21 = (longlong)(int)uVar12 * 0x68 + *(longlong *)(ppuVar5[10] + 0x18) +
                             -0x68;
                  }
                  FUN_1400021e4(lVar21,&local_388);
                  local_4a8 = ppuVar19;
                  FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",
                                0xda1);
                  if (local_388 != (undefined **)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_2c8 != (undefined **)0x0) {
                    FUN_1400020a8();
                  }
                  local_440[0x4c] = local_440[0x4c] | 0x80;
                  ppuVar19 = local_448;
                  goto LAB_1427ca0c1;
                }
                (**(code **)(*local_450 + 0x310))(local_450,lVar21);
                if (DAT_14c949118 == (undefined **)0x0) {
                  local_2d8 = (undefined **)FUN_140631fbe;
                  ppuVar19 = (undefined **)FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                  DAT_14c949118 = ppuVar19;
                  FUN_1446f470e(&local_2d0,L"Class",1);
                  local_470 = &local_2d8;
                  local_478 = &LAB_146891e90;
                  local_480 = (code *)&LAB_146273097;
                  local_490 = L"Engine";
                  local_488 = (wchar_t *)CONCAT44(local_488._4_4_,199);
                  local_498 = 0x20;
                  local_4a0 = 0x10000000;
                  local_4a8._0_4_ = 8;
                  FUN_14574b4b2(ppuVar19);
                  DAT_14c949118 = ppuVar19;
                  if (DAT_14c951858 == 0) {
                    local_2c8 = (undefined **)FUN_1449e2820;
                    local_460 = FUN_14081d0ea;
                    local_468 = FUN_14081d0ea;
                    local_478 = &LAB_1468c5283;
                    local_480 = FUN_142809da0;
                    local_488 = L"Engine";
                    local_490 = (wchar_t *)0x400000000;
                    local_498 = CONCAT44(local_498._4_4_,0x10000000);
                    local_4a0 = 8;
                    local_4a8._0_4_ = 0x50;
                    local_470 = &local_2c8;
                    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                  }
                  lVar21 = DAT_14c951858;
                  ppuVar19 = DAT_14c949118;
                  if (DAT_14c948f88 == (longlong *)0x0) {
                    local_398 = (undefined **)&DAT_1427db2a2;
                    plVar20 = (longlong *)FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                    DAT_14c948f88 = plVar20;
                    FUN_1446f470e(&local_388,L"Struct",1);
                    local_470 = &local_398;
                    local_478 = &LAB_146891313;
                    local_480 = FUN_146272f63;
                    local_490 = L"Engine";
                    local_488 = (wchar_t *)CONCAT44(local_488._4_4_,199);
                    local_498 = 8;
                    local_4a0 = 0x10000020;
                    local_4a8._0_4_ = 8;
                    FUN_14574b4b2(plVar20);
                    DAT_14c948f88 = plVar20;
                    if (DAT_14c927740 == 0) {
                      local_2c8 = (undefined **)FUN_1449e2820;
                      local_460 = FUN_14081d0ea;
                      local_468 = FUN_14081d0ea;
                      local_478 = &LAB_146856450;
                      local_480 = FUN_1427b121c;
                      local_488 = L"Engine";
                      local_490 = (wchar_t *)0x0;
                      local_498 = CONCAT44(local_498._4_4_,0x10000021);
                      local_4a0 = 8;
                      local_4a8._0_4_ = 0x28;
                      local_470 = &local_2c8;
                      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                    }
                    plVar20 = DAT_14c948f88;
                    lVar29 = DAT_14c927740;
                    uVar17 = FUN_1400163b0();
                    local_4a8 = (undefined **)0x149e6bce8;
                    FUN_14574b446(uVar17,plVar20,lVar29,L"/Script/CoreUObject");
                  }
                  local_4a8 = (undefined **)0x149e6ee30;
                  FUN_14574b446(DAT_14c948f88,ppuVar19,lVar21,L"/Script/CoreUObject");
                }
                if ((*(int *)(DAT_14c949118 + 7) <= *(int *)(local_450[2] + 0x38)) &&
                   (*(undefined ***)
                     (*(longlong *)(local_450[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 7) * 8
                     ) == DAT_14c949118 + 6)) {
                  (**(code **)(*local_450 + 0x2a8))();
                }
              }
              if (ppuVar5[10][0x2e3] == '\x01') {
                local_430 = *(undefined ****)(ppuVar5[10] + 0x328);
              }
              else {
                local_430 = (undefined ***)0x0;
              }
              local_3f0 = (longlong)((longlong)local_430[0x1b] + (longlong)*local_430[1]) -
                          (longlong)local_430[1][2];
              FUN_14687938c(local_430,*(undefined8 *)(local_440 + 0x28));
              FUN_14472eae2(local_450,0x400);
              DVar13 = DAT_14c75ec34;
              if (DAT_14c75ec34 == 0xffffffff) {
                DVar13 = TlsAlloc();
                DVar14 = 0xffffffff;
                LOCK();
                bVar39 = DAT_14c75ec34 != 0xffffffff;
                DVar8 = DVar13;
                if (bVar39) {
                  DVar14 = DAT_14c75ec34;
                  DVar8 = DAT_14c75ec34;
                }
                DAT_14c75ec34 = DVar8;
                UNLOCK();
                if (bVar39) {
                  TlsFree(DVar13);
                  DVar13 = DVar14;
                }
              }
              pvVar15 = TlsGetValue(DVar13);
              if (pvVar15 == (LPVOID)0x0) {
                pvVar15 = (LPVOID)FUN_14001cc68(0x60,0x10);
                FUN_141073f92(pvVar15);
                FUN_140fddf04(pvVar15);
                TlsSetValue(DVar13,pvVar15);
              }
              puVar35 = local_440;
              local_3f8 = *(longlong *)((longlong)pvVar15 + 0x58);
              local_400 = *(undefined8 *)(local_3f8 + 0x30);
              *(longlong **)(local_3f8 + 0x30) = local_450;
              ppuVar5[10][0x2e0] = 1;
              uVar17 = FUN_1427bccfa(ppuVar5,*(undefined4 *)(local_440 + 0x18),1,iVar26 + 1);
              *(undefined8 *)(ppuVar5[10] + 0x2d8) = uVar17;
              uVar17 = *(undefined8 *)(puVar35 + 0x20);
              uVar6 = *(undefined8 *)(puVar35 + 0x28);
              puVar35 = ppuVar5[10];
              plVar20 = (longlong *)(puVar35 + 0x240);
              plVar24 = plVar20;
              FUN_1407134c4(&local_388,plVar20);
              local_300 = *(undefined8 *)(puVar35 + 0x2c8);
              *(undefined ****)(puVar35 + 0x2c8) = &local_388;
              local_388 = &PTR_FUN_149e659c0;
              if ((puVar35[0x268] & 2) == 0) {
                local_2e0 = false;
              }
              else {
                local_2e0 = 0x3f0 < *(int *)(puVar35 + 0xb0);
              }
              uVar25 = CONCAT71((int7)((ulonglong)plVar24 >> 8),ppuVar5[10][0x26b]) &
                       0xffffffffffffff20;
              bVar22 = (byte)uVar25;
              local_35d = local_35d & 0xdf | bVar22;
              local_2f8 = plVar20;
              local_2f0 = uVar6;
              local_2e8 = uVar17;
              (**(code **)(*plVar20 + 0x70))(plVar20,CONCAT71((int7)(uVar25 >> 8),bVar22 >> 5));
              plVar20 = local_450;
              if ((*(uint *)(local_450 + 1) & 0x10) == 0) {
                (**(code **)(*local_450 + 0xd8))(local_450,&local_388);
              }
              else {
                local_2c8 = &PTR_FUN_149e37810;
                local_2c0 = &local_388;
                ppppuStack_2b0 = &local_2b8;
                local_2b8 = &local_2c8;
                (**(code **)(*(longlong *)local_450[2] + 0x3a8))((longlong *)local_450[2],local_450)
                ;
              }
              FUN_14041e0ea(&local_388);
              *(undefined8 *)(ppuVar5[10] + 0x2d8) = 0;
              FUN_144757f48(plVar20,0x200000);
              *(undefined8 *)(local_3f8 + 0x30) = local_400;
              ppuVar5[10][0x2e0] = 0;
              ppuVar19 = *(undefined ***)(local_440 + 0x20);
              ppuVar28 = (undefined **)
                         ((undefined *)((longlong)local_430[0x1b] + (longlong)*local_430[1]) +
                         -(longlong)(local_430[1][2] + *(longlong *)(local_440 + 0x28)));
              if ((ppuVar28 != ppuVar19) && ((*(byte *)(plVar20[2] + 0xd7) & 2) == 0)) {
                local_388 = (undefined **)0x0;
                uStack_380 = 0;
                FUN_14005eb28(&local_388,0x80);
                ppppuStack_2b0 = (undefined ****)((ulonglong)ppppuStack_2b0 & 0xffffffffffffff00);
                local_2c8 = (undefined **)local_2a8;
                local_2b8 = local_428;
                local_398 = *(undefined ***)(plVar20[2] + 0x18);
                local_2c0 = (undefined ***)local_2c8;
                FUN_14005eb5c(&local_398,&local_2c8);
                if (local_2b8 <= (undefined ***)((longlong)local_2c0 + 2)) {
                  FUN_140213274(&local_2c8,1);
                }
                *(wchar_t *)local_2c0 = L' ';
                local_2c0 = (undefined ***)((longlong)local_2c0 + 2);
                FUN_144750bde(local_450,0,&local_2c8);
                FUN_1400020e8(&local_388,local_2c8,
                              (ulonglong)((longlong)local_2c0 - (longlong)local_2c8) >> 1);
                if ((char)ppppuStack_2b0 == '\x01') {
                  FUN_1400020a8(local_2c8);
                }
                ppuVar31 = (undefined **)&DAT_149dfb77a;
                if ((int)uStack_380 != 0) {
                  ppuVar31 = local_388;
                }
                local_4a8 = ppuVar19;
                FUN_140002266(&local_2c8,L"%s: Serial size mismatch: Got %d, Expected %lld",ppuVar31
                              ,(ulonglong)ppuVar28 & 0xffffffff);
                FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",0xdea)
                ;
                if (local_2c8 != (undefined **)0x0) {
                  FUN_1400020a8();
                }
                if (local_388 != (undefined **)0x0) {
                  FUN_1400020a8();
                }
              }
              FUN_14687938c(local_430,local_3f0);
              ppuVar19 = local_448;
            }
LAB_1427ca0c1:
            piVar2 = DAT_14c950c20;
            if ((DAT_14c86a9f8 == '\x01') && (*local_438 != 2)) {
              if (*local_438 == 1) {
                DVar13 = FUN_140ad26c0();
                DVar14 = GetCurrentThreadId();
                if (DVar13 == DVar14) goto LAB_1427ca0ec;
              }
              LOCK();
              *piVar2 = *piVar2 + -1;
              UNLOCK();
            }
          }
        }
LAB_1427ca0ec:
        local_2c0 = (undefined ***)CONCAT44(1,local_39c + 1);
        puVar35 = ppuVar5[0x4f];
      }
      else {
        local_39c = -1;
        FUN_146878096(local_3d0,&local_39c);
        piVar2 = DAT_14c950c20;
        if ((DAT_14c86a9f8 == '\x01') && (*local_438 != 2)) {
          if (*local_438 == 1) {
            DVar13 = FUN_140ad26c0();
            DVar14 = GetCurrentThreadId();
            if (DVar13 == DVar14) goto LAB_1427c969f;
          }
          p_Var1 = (LPCRITICAL_SECTION)(piVar2 + 4);
          while( true ) {
            if (0 < piVar2[1]) {
              (**(code **)(**(longlong **)(piVar2 + 0xe) + 0x20))
                        (*(longlong **)(piVar2 + 0xe),0xffffffff);
            }
            EnterCriticalSection(p_Var1);
            if (piVar2[1] == 0) break;
            LeaveCriticalSection(p_Var1);
          }
          LOCK();
          *piVar2 = *piVar2 + 1;
          UNLOCK();
          LeaveCriticalSection(p_Var1);
        }
LAB_1427c969f:
        iVar26 = local_39c;
        puVar35 = *(undefined **)
                   (*(longlong *)(ppuVar5[10] + 0x18) + 0x40 + (longlong)local_39c * 0x68);
        if (puVar35 == (undefined *)0x0) {
          puVar36 = (undefined8 *)(*(longlong *)(ppuVar5[10] + 0x18) + (longlong)local_39c * 0x68);
          if (*(char *)((longlong)puVar36 + 0x4c) < '\0') {
LAB_1427c9753:
            *(byte *)((longlong)puVar36 + 0x4c) = *(byte *)((longlong)puVar36 + 0x4c) | 0x80;
            puVar35 = (undefined *)0x0;
            goto LAB_1427c975a;
          }
          FUN_1427bccfa(ppuVar5,*(undefined4 *)((longlong)puVar36 + 0xc),0,0);
          DVar13 = DAT_14c75ec34;
          if (DAT_14c75ec34 == 0xffffffff) {
            DVar13 = TlsAlloc();
            DVar14 = 0xffffffff;
            LOCK();
            bVar39 = DAT_14c75ec34 != 0xffffffff;
            DVar8 = DVar13;
            if (bVar39) {
              DVar14 = DAT_14c75ec34;
              DVar8 = DAT_14c75ec34;
            }
            DAT_14c75ec34 = DVar8;
            UNLOCK();
            ppuVar19 = local_448;
            if (bVar39) {
              TlsFree(DVar13);
              ppuVar19 = local_448;
              DVar13 = DVar14;
            }
          }
          pvVar15 = TlsGetValue(DVar13);
          if (pvVar15 == (LPVOID)0x0) {
            pvVar15 = (LPVOID)FUN_14001cc68(0x60,0x10);
            FUN_141073f92(pvVar15);
            FUN_140fddf04(pvVar15);
            ppuVar19 = local_448;
            TlsSetValue(DVar13,pvVar15);
          }
          bVar22 = *(byte *)((longlong)puVar36 + 0x4c);
          if (((((char)bVar22 < '\0') || ((*(byte *)((longlong)puVar36 + 0x4d) & 1) != 0)) ||
              (((bVar22 & 4) != 0 && (ppuVar5[10][0x230] != '\0')))) ||
             ((((bVar22 & 2) != 0 && (ppuVar5[10][0x231] != '\0')) || (*(int *)(puVar36 + 2) == 0)))
             ) {
LAB_1427c9739:
            if (puVar36[8] != 0) {
              FUN_146878962(ppuVar5);
              puVar35 = (undefined *)puVar36[8];
              if (puVar35 != (undefined *)0x0) goto LAB_1427c975a;
            }
            goto LAB_1427c9753;
          }
          ppuVar5[0x25] = (undefined *)L"EventDrivenCreateExport";
          ppuVar5[0x24] = (undefined *)0x0;
          if (*(int *)((longlong)puVar36 + 0xc) == 0) {
            ppuVar28 = DAT_14c949118;
            if (DAT_14c949118 == (undefined **)0x0) {
              local_2d8 = (undefined **)FUN_140631fbe;
              ppuVar19 = (undefined **)FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
              DAT_14c949118 = ppuVar19;
              FUN_1446f470e(&local_2d0,L"Class",1);
              local_470 = &local_2d8;
              local_478 = &LAB_146891e90;
              local_480 = (code *)&LAB_146273097;
              local_490 = L"Engine";
              local_488 = (wchar_t *)CONCAT44(local_488._4_4_,199);
              local_498 = 0x20;
              local_4a0 = 0x10000000;
              local_4a8._0_4_ = 8;
              FUN_14574b4b2(ppuVar19);
              DAT_14c949118 = ppuVar19;
              if (DAT_14c951858 == 0) {
                local_2c8 = (undefined **)FUN_1449e2820;
                local_460 = FUN_14081d0ea;
                local_468 = FUN_14081d0ea;
                local_478 = &LAB_1468c5283;
                local_480 = FUN_142809da0;
                local_488 = L"Engine";
                local_490 = (wchar_t *)0x400000000;
                local_498 = CONCAT44(local_498._4_4_,0x10000000);
                local_4a0 = 8;
                local_4a8._0_4_ = 0x50;
                local_470 = &local_2c8;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              }
              ppuVar19 = DAT_14c949118;
              if (DAT_14c948f88 == (longlong *)0x0) {
                local_398 = (undefined **)&DAT_1427db2a2;
                plVar20 = (longlong *)FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                DAT_14c948f88 = plVar20;
                FUN_1446f470e(&local_388,L"Struct",1);
                local_470 = &local_398;
                local_478 = &LAB_146891313;
                local_480 = FUN_146272f63;
                local_490 = L"Engine";
                local_488 = (wchar_t *)CONCAT44(local_488._4_4_,199);
                local_498 = 8;
                local_4a0 = 0x10000020;
                local_4a8._0_4_ = 8;
                FUN_14574b4b2(plVar20);
                DAT_14c948f88 = plVar20;
                if (DAT_14c927740 == 0) {
                  local_2c8 = (undefined **)FUN_1449e2820;
                  local_460 = FUN_14081d0ea;
                  local_468 = FUN_14081d0ea;
                  local_478 = &LAB_146856450;
                  local_480 = FUN_1427b121c;
                  local_488 = L"Engine";
                  local_490 = (wchar_t *)0x0;
                  local_498 = CONCAT44(local_498._4_4_,0x10000021);
                  local_4a0 = 8;
                  local_4a8._0_4_ = 0x28;
                  local_470 = &local_2c8;
                  local_450 = plVar20;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                }
                lVar21 = DAT_14c927740;
                local_450 = DAT_14c948f88;
                uVar17 = FUN_1400163b0();
                local_4a8 = (undefined **)0x149e6bce8;
                FUN_14574b446(uVar17,local_450,lVar21,L"/Script/CoreUObject");
              }
              local_4a8 = (undefined **)0x149e6ee30;
              FUN_14574b446(DAT_14c948f88,ppuVar19);
              ppuVar28 = DAT_14c949118;
              goto LAB_1427ca2e1;
            }
LAB_1427ca2ea:
            if (*(int *)(puVar36 + 1) != 0) {
              pppuVar18 = (undefined ***)FUN_1427bccfa(ppuVar5,*(int *)(puVar36 + 1),0,iVar26 + 1);
LAB_1427ca36f:
              if (pppuVar18 == (undefined ***)0x0) goto LAB_1427ca374;
              local_4a0 = 0;
              local_4a8 = (undefined **)((ulonglong)local_4a8 & 0xffffffff00000000);
              lVar21 = FUN_14283d079(0,pppuVar18);
              ppuVar19 = local_448;
              if (lVar21 == 0) {
                lVar21 = puVar36[8];
                if (lVar21 == 0) {
LAB_1427ca3d7:
                  local_450 = (longlong *)
                              FUN_1427bccfa(ppuVar5,*(undefined4 *)(puVar36 + 3),1,iVar26 + 1);
                  if (local_450 == (longlong *)0x0) goto LAB_1427ca374;
                  FUN_14472e7dc(local_450,0);
                  uVar12 = *(uint *)((longlong)puVar36 + 0x1c);
                  local_430 = (undefined ***)*puVar36;
                  if ((*(uint *)(ppuVar28 + 1) >> 10 & 1) == 0) {
                    local_440 = ppuVar28[0x22];
                    if (local_440 == (undefined *)0x0) {
                      (**(code **)(*ppuVar28 + 1000))();
                      local_440 = ppuVar28[0x22];
                    }
                    if ((*(uint *)(local_440 + 8) >> 10 & 1) == 0) {
                      if ((*(uint *)(local_450 + 1) >> 10 & 1) == 0) {
                        local_278 = (longlong *)0x0;
                        local_248 = 0;
                        local_288 = 0;
                        local_298 = 0;
                        local_2b8 = local_430;
                        ppppuStack_2b0 = (undefined ****)((ulonglong)uVar12 | 0x83400);
                        local_2a0 = local_450;
                        local_2a8[0] = 0x100;
                        puStack_290 = (undefined *)0x0;
                        if (*(int *)(puVar36 + 1) < 0) {
                          puStack_290 = ppuVar5[0xb];
                        }
                        local_2c8 = ppuVar28;
                        local_2c0 = pppuVar18;
                        lVar21 = FUN_1402710dd(&local_2c8);
                        puVar36[8] = lVar21;
                        if ((DAT_14c75b114 != '\0') || (DAT_14c9647c4 == '\x01')) {
                          uVar12 = *(uint *)(lVar21 + 0xc);
                          if ((int)uVar12 < DAT_14c9647dc) {
                            lVar21 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
                          }
                          else {
                            lVar21 = 0;
                          }
                          FUN_1447f71cc(lVar21,0x40000000);
                          lVar21 = puVar36[8];
                        }
                        FUN_1400f84b8(lVar21,ppuVar5[10]);
                        ppuVar19 = local_448;
                        if (local_288 != 0) {
                          plVar20 = local_278;
                          if (local_278 == (longlong *)0x0) {
                            plVar20 = local_268;
                          }
                          (**(code **)(*plVar20 + 0x10))();
                          ppuVar19 = local_448;
                        }
                        goto LAB_1427c9739;
                      }
                      FUN_1400021e4(puVar36,&local_388);
                      ppuVar19 = (undefined **)&DAT_149dfb77a;
                      if ((int)uStack_380 != 0) {
                        ppuVar19 = local_388;
                      }
                      local_398 = (undefined **)0x0;
                      uStack_390 = 0;
                      FUN_14005eb28(&local_398,0x80);
                      ppppuStack_2b0 =
                           (undefined ****)((ulonglong)ppppuStack_2b0 & 0xffffffffffffff00);
                      local_2c8 = (undefined **)local_2a8;
                      local_2b8 = local_428;
                      local_2d0 = *(undefined8 *)(local_450[2] + 0x18);
                      local_2c0 = (undefined ***)local_2c8;
                      FUN_14005eb5c(&local_2d0,&local_2c8);
                      if (local_2b8 <= (undefined ***)((longlong)local_2c0 + 2)) {
                        FUN_140213274(&local_2c8,1);
                      }
                      *(wchar_t *)local_2c0 = L' ';
                      local_2c0 = (undefined ***)((longlong)local_2c0 + 2);
                      FUN_144750bde(local_450,0,&local_2c8);
                      FUN_1400020e8(&local_398,local_2c8,
                                    (ulonglong)((longlong)local_2c0 - (longlong)local_2c8) >> 1);
                      if ((char)ppppuStack_2b0 == '\x01') {
                        FUN_1400020a8(local_2c8);
                      }
                      uVar17 = 0xd31;
                      local_4a8 = ppuVar19;
                      goto LAB_1427ca808;
                    }
                    FUN_1400021e4(puVar36,&local_2c8);
                    ppuVar19 = (undefined **)&DAT_149dfb77a;
                    if ((int)local_2c0 != 0) {
                      ppuVar19 = local_2c8;
                    }
                    FUN_144750a86(local_440,&local_388,0,0);
                    local_4a8 = ppuVar19;
                    FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",
                                  0xd2a);
                    ppuVar19 = local_2c8;
                    if (local_388 != (undefined **)0x0) {
                      FUN_1400020a8();
                      ppuVar19 = local_2c8;
                    }
                  }
                  else {
                    FUN_1400021e4(puVar36,&local_388);
                    ppuVar19 = (undefined **)&DAT_149dfb77a;
                    if ((int)uStack_380 != 0) {
                      ppuVar19 = local_388;
                    }
                    local_398 = (undefined **)0x0;
                    uStack_390 = 0;
                    FUN_14005eb28(&local_398,0x80);
                    ppppuStack_2b0 =
                         (undefined ****)((ulonglong)ppppuStack_2b0 & 0xffffffffffffff00);
                    local_2c8 = (undefined **)local_2a8;
                    local_2b8 = local_428;
                    local_2d0 = *(undefined8 *)(ppuVar28[2] + 0x18);
                    local_2c0 = (undefined ***)local_2c8;
                    FUN_14005eb5c(&local_2d0,&local_2c8);
                    if (local_2b8 <= (undefined ***)((longlong)local_2c0 + 2)) {
                      FUN_140213274(&local_2c8,1);
                    }
                    *(wchar_t *)local_2c0 = L' ';
                    local_2c0 = (undefined ***)((longlong)local_2c0 + 2);
                    FUN_144750bde(ppuVar28,0,&local_2c8);
                    FUN_1400020e8(&local_398,local_2c8,
                                  (ulonglong)((longlong)local_2c0 - (longlong)local_2c8) >> 1);
                    if ((char)ppppuStack_2b0 == '\x01') {
                      FUN_1400020a8(local_2c8);
                    }
                    uVar17 = 0xd22;
                    local_4a8 = ppuVar19;
LAB_1427ca808:
                    FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",
                                  uVar17);
                    ppuVar19 = local_388;
                    if (local_398 != (undefined **)0x0) {
                      FUN_1400020a8();
                      ppuVar19 = local_388;
                    }
                  }
                  if (ppuVar19 != (undefined **)0x0) {
                    FUN_1400020a8();
                  }
                  goto LAB_1427ca374;
                }
              }
              else {
                ppuVar31 = *(undefined ***)(lVar21 + 0x10);
                if (ppuVar31 == ppuVar28) {
                  puVar36[8] = lVar21;
                }
                else {
                  lVar21 = puVar36[8];
                  if (lVar21 == 0) {
                    if ((*(int *)(ppuVar28 + 7) <= *(int *)(ppuVar31 + 7)) &&
                       (*(undefined ***)(ppuVar31[6] + (longlong)*(int *)(ppuVar28 + 7) * 8) ==
                        ppuVar28 + 6)) goto LAB_1427ca3d7;
                    goto LAB_1427ca374;
                  }
                }
              }
              if ((*(byte *)((longlong)puVar36 + 0x4c) & 1) == 0) {
                FUN_1400f84b8(lVar21,ppuVar5[10]);
                lVar21 = puVar36[8];
                if ((*(uint *)(lVar21 + 8) >> 0x15 & 1) == 0) {
                  if ((*(uint *)(lVar21 + 8) >> 0x1b & 1) == 0) {
                    FUN_144750a86(lVar21,&local_2c8,0,0);
                    FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading.cpp",
                                  0xcc7);
                    if (local_2c8 != (undefined **)0x0) {
                      FUN_1400020a8();
                    }
                    lVar21 = puVar36[8];
                  }
                  FUN_144757f48(lVar21,(uint)((*(uint *)(lVar21 + 8) & 0x10) == 0) << 0xd | 0x81400)
                  ;
                  FUN_14472eae2(puVar36[8],0x8000000);
                  ppuVar19 = local_448;
                }
              }
              goto LAB_1427c9739;
            }
            bVar22 = *(byte *)((longlong)puVar36 + 0x4c);
            if ((bVar22 & 1) == 0) {
              pppuVar18 = (undefined ***)ppuVar5[0xb];
              goto LAB_1427ca36f;
            }
          }
          else {
            ppuVar28 = (undefined **)
                       FUN_1427bccfa(ppuVar5,*(int *)((longlong)puVar36 + 0xc),1,iVar26 + 1);
LAB_1427ca2e1:
            if (ppuVar28 != (undefined **)0x0) goto LAB_1427ca2ea;
LAB_1427ca374:
            bVar22 = *(byte *)((longlong)puVar36 + 0x4c);
          }
          ppuVar19 = local_448;
          *(byte *)((longlong)puVar36 + 0x4c) = bVar22 | 0x80;
          if (puVar36[8] != 0) {
            FUN_146878962(ppuVar5);
          }
        }
        else {
LAB_1427c975a:
          ppuVar5[0x24] = puVar35;
        }
        piVar2 = DAT_14c950c20;
        if ((DAT_14c86a9f8 == '\x01') && (*local_438 != 2)) {
          if (*local_438 == 1) {
            DVar13 = FUN_140ad26c0();
            DVar14 = GetCurrentThreadId();
            if (DVar13 == DVar14) goto LAB_1427c9798;
          }
          LOCK();
          *piVar2 = *piVar2 + -1;
          UNLOCK();
        }
LAB_1427c9798:
        local_2c0 = (undefined ***)(ulonglong)(local_39c + 1);
        puVar35 = ppuVar5[0x4f];
      }
      local_2c8 = ppuVar5;
      FUN_146877aa2(puVar35 + 0x410,&local_2c8);
      bVar22 = 1;
      pcVar27 = QueryPerformanceCounter_exref;
    }
    else {
      local_388 = (undefined **)CONCAT44(local_388._4_4_,0xffffffff);
      FUN_146878096(local_3c0,&local_388);
      piVar2 = DAT_14c950c20;
      if ((DAT_14c86a9f8 == '\x01') && (*local_438 != 2)) {
        if (*local_438 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          if (DVar13 == DVar14) goto LAB_1427c9573;
        }
        p_Var1 = (LPCRITICAL_SECTION)(piVar2 + 4);
        while( true ) {
          if (0 < piVar2[1]) {
            (**(code **)(**(longlong **)(piVar2 + 0xe) + 0x20))
                      (*(longlong **)(piVar2 + 0xe),0xffffffff,0);
          }
          EnterCriticalSection(p_Var1);
          if (piVar2[1] == 0) break;
          LeaveCriticalSection(p_Var1);
        }
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        LeaveCriticalSection(p_Var1);
      }
LAB_1427c9573:
      uVar12 = (uint)local_388;
      FUN_1427bc36c(ppuVar5,(ulonglong)local_388 & 0xffffffff);
      piVar2 = DAT_14c950c20;
      pcVar27 = QueryPerformanceCounter_exref;
      if ((DAT_14c86a9f8 == '\x01') && (*local_438 != 2)) {
        if (*local_438 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          pcVar27 = QueryPerformanceCounter_exref;
          if (DVar13 == DVar14) goto LAB_1427c95c2;
        }
        pcVar27 = QueryPerformanceCounter_exref;
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        uVar12 = (uint)local_388;
      }
LAB_1427c95c2:
      local_2c0 = (undefined ***)(ulonglong)~uVar12;
      local_2c8 = ppuVar5;
      FUN_146877aa2(ppuVar5[0x4f] + 0x410,&local_2c8);
      ppuVar5[0x25] = (undefined *)L"ProcessImportsAndExports LinkImport";
      ppuVar5[0x24] = (undefined *)0x0;
      bVar22 = 1;
    }
  }
LAB_1427c9451:
  if (*(int *)(ppuVar5[0x4f] + 0x84) != 0) goto LAB_1427cb424;
  goto LAB_1427c91da;
LAB_1427cb424:
  *(undefined1 *)(ppuVar5 + 0xb3) = 0;
  FUN_146878e8a(ppuVar5);
  FUN_1427bae1e(&local_3b8);
  goto LAB_1427c9002;
}



// FUNCTION 1427cb4c8 FUN_1427cb4c8 body=12 status=ok
// SIG undefined FUN_1427cb4c8(void)

void FUN_1427cb4c8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001427cb4d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1427cb4d4 FUN_1427cb4d4 body=29 status=ok
// SIG undefined FUN_1427cb4d4(void)

undefined8 FUN_1427cb4d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427cb4f2 FUN_1427cb4f2 body=3522 status=ok
// SIG undefined FUN_1427cb4f2(void)

void FUN_1427cb4f2(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  undefined1 auStack_128 [40];
  ulonglong local_100;
  longlong local_f8;
  uint *local_f0;
  longlong *local_e8;
  uint *local_e0;
  longlong local_d8;
  undefined1 local_cc [4];
  longlong local_c8;
  int local_c0;
  longlong local_b8;
  int local_b0;
  longlong local_a8;
  undefined4 local_a0;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar13 = *param_1;
  if (((int)param_1[1] != 0 && lVar13 != 0) &&
     (lVar17 = param_1[2], *(int *)(lVar17 + 0x288) != *(int *)(lVar17 + 0x2b4))) {
    uVar18 = (uint)((ulonglong)lVar13 >> 0x10);
    uVar5 = (uint)lVar13 & 0xffff;
    lVar9 = lVar17 + 0x2b8;
    if (*(longlong *)(lVar17 + 0x2c0) != 0) {
      lVar9 = *(longlong *)(lVar17 + 0x2c0);
    }
    iVar22 = *(int *)(lVar9 + (ulonglong)
                              (*(int *)(lVar17 + 0x2c8) - 1U &
                              (int)((ulonglong)lVar13 >> 0x20) + ((uint)lVar13 << 0x10 | uVar5) +
                              (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar22 != -1) {
      do {
        plVar16 = (longlong *)(*(longlong *)(lVar17 + 0x280) + (longlong)iVar22 * 0x18);
        if (*plVar16 == lVar13) {
          if (((plVar16 != (longlong *)0x0) && (lVar13 = plVar16[1], lVar13 != 0)) &&
             (*(int *)(lVar13 + 0x2dc) == (int)param_1[1])) {
            param_2[1] = L"Process Process Postload Wait";
            uVar1 = *(undefined8 *)(lVar13 + 0x58);
            param_2[2] = uVar1;
            *(undefined8 *)(lVar13 + 0x118) = *param_2;
            *(wchar_t **)(lVar13 + 0x128) = L"Process Process Postload Wait";
            *(undefined8 *)(lVar13 + 0x120) = uVar1;
            *(undefined4 *)(lVar13 + 0x108) = *(undefined4 *)(param_2 + 3);
            *(undefined1 *)(lVar13 + 0x10c) = *(undefined1 *)((longlong)param_2 + 0x1c);
            *(undefined1 *)(lVar13 + 0x10d) = *(undefined1 *)((longlong)param_2 + 0x1d);
            *(undefined1 *)(lVar13 + 0x599) = 0;
            local_a8 = *(longlong *)(lVar13 + 0x14);
            local_a0 = *(undefined4 *)(lVar13 + 0x2dc);
            iVar14 = 0;
            local_78 = 0;
            local_70 = 0;
            local_98 = 0;
            uStack_90 = 0;
            local_6c = 0xffffffff00000080;
            local_64 = 0;
            local_58 = (undefined1 *)0x0;
            local_50 = 0;
            FUN_146883844(&local_98,&local_b8);
            local_e8 = (longlong *)(lVar13 + 0x490);
            local_e0 = (uint *)(lVar13 + 0x4a0);
            iVar22 = *(int *)(lVar13 + 0x4b8);
            uVar21 = 1;
            uVar10 = 0;
            iVar11 = 0;
            if (iVar22 == 0) goto LAB_1427cb75b;
            puVar3 = *(uint **)(lVar13 + 0x4b0);
            if (*(uint **)(lVar13 + 0x4b0) == (uint *)0x0) {
              puVar3 = local_e0;
            }
            uVar18 = *puVar3;
            if (uVar18 != 0) {
              iVar14 = 0;
              uVar10 = 0;
              goto LAB_1427cb737;
            }
            iVar11 = iVar22 + 0x1e;
            if (-1 < iVar22 + -1) {
              iVar11 = iVar22 + -1;
            }
            uVar10 = 0;
            uVar21 = (ulonglong)(uint)(iVar11 >> 5);
            if (iVar11 >> 5 < 1) {
              uVar21 = 0;
            }
            iVar14 = 0;
            goto LAB_1427cb71e;
          }
          break;
        }
        iVar22 = (int)plVar16[2];
      } while (iVar22 != -1);
    }
  }
  goto LAB_1427cb5e3;
  while( true ) {
    iVar22 = iVar22 + 0x20;
    uVar5 = puVar3[uVar21 + 1];
    uVar21 = uVar21 + 1;
    if (uVar5 != 0) break;
LAB_1427cbcba:
    if (uVar10 == uVar21) goto LAB_1427cbd05;
  }
LAB_1427cbccd:
  uVar19 = (ulonglong)(-uVar5 & uVar5);
  uVar10 = uVar19 * 2 + 1;
  lVar9 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  uVar5 = (iVar22 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
  uVar10 = (ulonglong)uVar5;
  if ((int)uVar18 <= (int)uVar5) {
    uVar10 = local_100;
  }
LAB_1427cbcf6:
  if ((uint)uVar10 != uVar18) {
    uVar18 = 0xffffffff;
    do {
      local_c0 = *(int *)(*(longlong *)(lVar17 + 0x4e0) + 8 + (longlong)(int)uVar10 * 0x14);
      local_c8 = *(longlong *)(*(longlong *)(lVar17 + 0x4e0) + (longlong)(int)uVar10 * 0x14);
      if ((local_c0 != 0 && local_c8 != 0) &&
         (lVar9 = *(longlong *)(lVar13 + 0x278), *(int *)(lVar9 + 0x288) != *(int *)(lVar9 + 0x2b4))
         ) {
        uVar5 = (uint)((ulonglong)local_c8 >> 0x10);
        uVar8 = (uint)local_c8 & 0xffff;
        lVar15 = lVar9 + 0x2b8;
        if (*(longlong *)(lVar9 + 0x2c0) != 0) {
          lVar15 = *(longlong *)(lVar9 + 0x2c0);
        }
        iVar11 = *(int *)(lVar15 + (ulonglong)
                                   (*(int *)(lVar9 + 0x2c8) - 1U &
                                   (int)((ulonglong)local_c8 >> 0x20) +
                                   ((uint)local_c8 << 0x10 | uVar8) +
                                   (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4)) * 4);
        if (iVar11 != -1) {
          do {
            plVar16 = (longlong *)(*(longlong *)(lVar9 + 0x280) + (longlong)iVar11 * 0x18);
            if (*plVar16 == local_c8) {
              if (((plVar16 != (longlong *)0x0) && (lVar9 = plVar16[1], lVar9 != 0)) &&
                 (*(int *)(lVar9 + 0x2dc) == local_c0)) goto LAB_1427cbecb;
              break;
            }
            iVar11 = (int)plVar16[2];
          } while (iVar11 != -1);
        }
      }
      lVar9 = 0;
LAB_1427cbecb:
      FUN_146883844(local_d8,local_cc,&local_c8);
      FUN_146883844(lVar9 + 0x530,local_cc,&local_a8);
      uVar18 = uVar18 & ~(uint)uVar19;
      puVar3 = *(uint **)(lVar17 + 0x500);
      if (*(uint **)(lVar17 + 0x500) == (uint *)0x0) {
        puVar3 = local_f0;
      }
      uVar5 = *(uint *)(lVar17 + 0x508);
      iVar11 = (int)uVar21;
      lVar9 = (longlong)iVar11;
      uVar8 = puVar3[lVar9] & uVar18;
      if (uVar8 == 0) {
        iVar14 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar14 = uVar5 - 1;
        }
        iVar14 = iVar14 >> 5;
        iVar22 = iVar22 + 0x20;
        iVar6 = iVar14;
        if (iVar14 < iVar11) {
          iVar6 = iVar11;
        }
        if (iVar11 < iVar14) {
          lVar15 = 0;
          do {
            uVar8 = puVar3[lVar9 + lVar15 + 1];
            if (uVar8 != 0) {
              uVar21 = (ulonglong)(iVar11 + (int)lVar15 + 1);
              uVar18 = 0xffffffff;
              goto LAB_1427cbf7a;
            }
            iVar22 = iVar22 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar6 - lVar9 != lVar15);
          uVar18 = 0xffffffff;
          iVar11 = iVar6;
        }
        uVar21 = (ulonglong)(iVar11 + 1);
        lVar13 = local_f8;
        uVar8 = uVar5;
      }
      else {
LAB_1427cbf7a:
        uVar19 = (ulonglong)(-uVar8 & uVar8);
        uVar10 = uVar19 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar8 = (iVar22 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if ((int)uVar5 <= (int)uVar8) {
          uVar8 = uVar5;
        }
      }
      uVar10 = (ulonglong)uVar8;
    } while (uVar8 != (uint)local_100);
  }
LAB_1427cbd05:
  puVar3 = (uint *)(lVar17 + 0x4a0);
  uVar18 = *(uint *)(lVar17 + 0x4b8);
  uVar10 = (ulonglong)uVar18;
  lVar13 = local_f8;
  local_100 = uVar10;
  local_f0 = puVar3;
  if (uVar18 == 0) {
    uVar20 = 1;
    uVar21 = 0;
    iVar22 = 0;
    uVar19 = 0;
  }
  else {
    puVar4 = *(uint **)(lVar17 + 0x4b0);
    if (*(uint **)(lVar17 + 0x4b0) == (uint *)0x0) {
      puVar4 = puVar3;
    }
    uVar5 = *puVar4;
    if (uVar5 == 0) {
      iVar22 = uVar18 + 0x1e;
      if (-1 < (int)(uVar18 - 1)) {
        iVar22 = uVar18 - 1;
      }
      uVar21 = 0;
      uVar19 = (ulonglong)(uint)(iVar22 >> 5);
      if (iVar22 >> 5 < 1) {
        uVar19 = uVar21;
      }
      iVar22 = 0;
      do {
        if (uVar19 == uVar21) goto LAB_1427cbdc6;
        iVar22 = iVar22 + 0x20;
        uVar5 = puVar4[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar21 = 0;
      iVar22 = 0;
    }
    uVar20 = (ulonglong)(-uVar5 & uVar5);
    uVar19 = uVar20 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar5 = (iVar22 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    uVar19 = (ulonglong)uVar5;
    if ((int)uVar18 <= (int)uVar5) {
      uVar19 = uVar10;
    }
  }
  if ((uint)uVar19 != uVar18) {
    uVar18 = 0xffffffff;
    do {
      local_c0 = *(int *)(*(longlong *)(lVar17 + 0x490) + 8 + (longlong)(int)uVar19 * 0x14);
      local_c8 = *(longlong *)(*(longlong *)(lVar17 + 0x490) + (longlong)(int)uVar19 * 0x14);
      uVar8 = (uint)local_c8;
      uVar5 = (uint)((ulonglong)local_c8 >> 0x10);
      iVar11 = (int)((ulonglong)local_c8 >> 0x20);
      if ((int)uStack_90 != local_64) {
        puVar2 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar2 = local_60;
        }
        for (iVar14 = *(int *)(puVar2 + (ulonglong)
                                        (local_50 - 1U &
                                        iVar11 + (uVar8 << 0x10 | uVar8 & 0xffff) +
                                        (uVar5 << 0x13 | uVar5 & 0xffff) + ((uVar8 & 0xffff) >> 4))
                                        * 4); iVar14 != -1;
            iVar14 = *(int *)(local_98 + (longlong)iVar14 * 0x14 + 0xc)) {
          if (*(int *)(local_98 + 8 + (longlong)iVar14 * 0x14) == local_c0) goto LAB_1427cc163;
        }
      }
      if ((local_c0 != 0 && local_c8 != 0) &&
         (lVar9 = *(longlong *)(lVar13 + 0x278), *(int *)(lVar9 + 0x288) != *(int *)(lVar9 + 0x2b4))
         ) {
        lVar15 = lVar9 + 0x2b8;
        if (*(longlong *)(lVar9 + 0x2c0) != 0) {
          lVar15 = *(longlong *)(lVar9 + 0x2c0);
        }
        iVar11 = *(int *)(lVar15 + (ulonglong)
                                   (*(int *)(lVar9 + 0x2c8) - 1U &
                                   iVar11 + (uVar8 << 0x10 | uVar8 & 0xffff) +
                                   (uVar5 << 0x13 | uVar5 & 0xffff) + ((uVar8 & 0xffff) >> 4)) * 4);
        uVar10 = local_100;
        if (iVar11 != -1) {
          do {
            plVar16 = (longlong *)(*(longlong *)(lVar9 + 0x280) + (longlong)iVar11 * 0x18);
            if (*plVar16 == local_c8) {
              if ((((plVar16 != (longlong *)0x0) && (lVar9 = plVar16[1], lVar9 != 0)) &&
                  (*(int *)(lVar9 + 0x2dc) == local_c0)) && (*(byte *)(lVar9 + 0x2d8) < 8)) {
                if (*(char *)(lVar9 + 0x59a) == '\x01') {
                  plVar16 = &local_c8;
                  plVar12 = local_e8;
                }
                else {
                  FUN_146883844(local_d8,local_cc,&local_c8);
                  plVar12 = (longlong *)(lVar9 + 0x530);
                  plVar16 = &local_a8;
                }
                FUN_146883844(plVar12,local_cc,plVar16);
                puVar3 = local_f0;
                lVar13 = local_f8;
                uVar10 = local_100;
              }
              break;
            }
            iVar11 = (int)plVar16[2];
          } while (iVar11 != -1);
        }
      }
LAB_1427cc163:
      uVar18 = uVar18 & ~(uint)uVar20;
      puVar4 = *(uint **)(lVar17 + 0x4b0);
      if (*(uint **)(lVar17 + 0x4b0) == (uint *)0x0) {
        puVar4 = puVar3;
      }
      uVar5 = *(uint *)(lVar17 + 0x4b8);
      iVar11 = (int)uVar21;
      lVar9 = (longlong)iVar11;
      uVar8 = puVar4[lVar9] & uVar18;
      if (uVar8 == 0) {
        iVar14 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar14 = uVar5 - 1;
        }
        iVar14 = iVar14 >> 5;
        iVar22 = iVar22 + 0x20;
        iVar6 = iVar14;
        if (iVar14 < iVar11) {
          iVar6 = iVar11;
        }
        if (iVar11 < iVar14) {
          lVar15 = 0;
          do {
            uVar8 = puVar4[lVar9 + lVar15 + 1];
            if (uVar8 != 0) {
              uVar21 = (ulonglong)(iVar11 + (int)lVar15 + 1);
              uVar18 = 0xffffffff;
              goto LAB_1427cc1e7;
            }
            iVar22 = iVar22 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar6 - lVar9 != lVar15);
          uVar18 = 0xffffffff;
          iVar11 = iVar6;
        }
        uVar21 = (ulonglong)(iVar11 + 1);
        puVar3 = local_f0;
        lVar13 = local_f8;
        uVar10 = local_100;
        uVar8 = uVar5;
      }
      else {
LAB_1427cc1e7:
        uVar20 = (ulonglong)(-uVar8 & uVar8);
        uVar19 = uVar20 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar8 = (iVar22 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if ((int)uVar5 <= (int)uVar8) {
          uVar8 = uVar5;
        }
      }
      uVar19 = (ulonglong)uVar8;
    } while (uVar8 != (uint)uVar10);
  }
LAB_1427cbdc6:
  if (*(int *)(lVar13 + 0x498) == *(int *)(lVar13 + 0x4c4)) goto LAB_1427cb996;
  goto LAB_1427cb9f5;
  while( true ) {
    iVar14 = iVar14 + 0x20;
    uVar18 = puVar3[uVar10 + 1];
    uVar10 = uVar10 + 1;
    if (uVar18 != 0) break;
LAB_1427cb71e:
    if (uVar21 == uVar10) goto LAB_1427cb988;
  }
LAB_1427cb737:
  uVar21 = (ulonglong)(-uVar18 & uVar18);
  uVar19 = uVar21 * 2 + 1;
  lVar17 = 0x3f;
  if (uVar19 != 0) {
    for (; uVar19 >> lVar17 == 0; lVar17 = lVar17 + -1) {
    }
  }
  iVar11 = (iVar14 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
  if (iVar22 <= iVar11) {
    iVar11 = iVar22;
  }
LAB_1427cb75b:
  if (iVar11 < iVar22) {
    local_100 = lVar13 + 0x4e0;
    uVar18 = 0xffffffff;
    local_f8 = lVar13;
    do {
      local_b0 = *(int *)(*(longlong *)(lVar13 + 0x490) + 8 + (longlong)iVar11 * 0x14);
      local_b8 = *(longlong *)(*(longlong *)(lVar13 + 0x490) + (longlong)iVar11 * 0x14);
      if (((local_b8 != 0) && (local_b0 != 0)) &&
         (lVar17 = *(longlong *)(lVar13 + 0x278),
         *(int *)(lVar17 + 0x288) != *(int *)(lVar17 + 0x2b4))) {
        uVar5 = (uint)((ulonglong)local_b8 >> 0x10);
        uVar8 = (uint)local_b8 & 0xffff;
        lVar9 = lVar17 + 0x2b8;
        if (*(longlong *)(lVar17 + 0x2c0) != 0) {
          lVar9 = *(longlong *)(lVar17 + 0x2c0);
        }
        iVar6 = *(int *)(lVar9 + (ulonglong)
                                 (*(int *)(lVar17 + 0x2c8) - 1U &
                                 (int)((ulonglong)local_b8 >> 0x20) +
                                 ((uint)local_b8 << 0x10 | uVar8) + (uVar5 << 0x13 | uVar5 & 0xffff)
                                 + (uVar8 >> 4)) * 4);
        if (iVar6 != -1) {
          do {
            plVar16 = (longlong *)(*(longlong *)(lVar17 + 0x280) + (longlong)iVar6 * 0x18);
            if (*plVar16 == local_b8) {
              if (((plVar16 != (longlong *)0x0) && (lVar17 = plVar16[1], lVar17 != 0)) &&
                 ((lVar17 != lVar13 &&
                  ((*(int *)(lVar17 + 0x2dc) == local_b0 && (*(byte *)(lVar17 + 0x2d8) < 8)))))) {
                if (*(char *)(lVar17 + 0x59a) != '\0') goto LAB_1427cb8f2;
                FUN_146883844(&local_98,&local_c8,&local_b8);
                lVar13 = local_f8;
                FUN_146883844(local_100,&local_c8,&local_b8);
                plVar12 = (longlong *)(lVar17 + 0x530);
                plVar16 = &local_a8;
                goto LAB_1427cb8db;
              }
              break;
            }
            iVar6 = (int)plVar16[2];
          } while (iVar6 != -1);
        }
      }
      plVar12 = &local_98;
      plVar16 = &local_b8;
LAB_1427cb8db:
      FUN_146883844(plVar12,&local_c8,plVar16);
      FUN_146881ef0(local_e8,iVar11);
      iVar22 = *(int *)(lVar13 + 0x4b8);
LAB_1427cb8f2:
      uVar18 = uVar18 & ~(uint)uVar21;
      puVar3 = *(uint **)(lVar13 + 0x4b0);
      if (*(uint **)(lVar13 + 0x4b0) == (uint *)0x0) {
        puVar3 = local_e0;
      }
      iVar11 = (int)uVar10;
      lVar17 = (longlong)iVar11;
      uVar5 = puVar3[lVar17] & uVar18;
      if (uVar5 == 0) {
        iVar6 = iVar22 + 0x1e;
        if (-1 < iVar22 + -1) {
          iVar6 = iVar22 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar11) {
          iVar7 = iVar11;
        }
        if (iVar6 <= iVar11) break;
        lVar9 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar5 = puVar3[lVar17 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar17 == lVar9) goto LAB_1427cb988;
        }
        uVar10 = (ulonglong)(iVar11 + (int)lVar9 + 1);
        uVar18 = 0xffffffff;
      }
      uVar21 = (ulonglong)(-uVar5 & uVar5);
      uVar19 = uVar21 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar11 = (iVar14 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar22);
  }
LAB_1427cb988:
  if (*(int *)(lVar13 + 0x498) != *(int *)(lVar13 + 0x4c4)) {
    local_d8 = lVar13 + 0x4e0;
LAB_1427cb9f5:
    if (*(int *)(lVar13 + 0x4e8) == *(int *)(lVar13 + 0x514)) {
      iVar22 = *(int *)(lVar13 + 0x4b8);
      iVar11 = 0;
      if (iVar22 != 0) {
        puVar3 = *(uint **)(lVar13 + 0x4b0);
        if (*(uint **)(lVar13 + 0x4b0) == (uint *)0x0) {
          puVar3 = local_e0;
        }
        uVar18 = *puVar3;
        if (uVar18 == 0) {
          iVar11 = iVar22 + 0x1e;
          if (-1 < iVar22 + -1) {
            iVar11 = iVar22 + -1;
          }
          uVar5 = iVar11 >> 5;
          if (iVar11 >> 5 < 1) {
            uVar5 = 0;
          }
          lVar17 = 0;
          do {
            puVar3 = puVar3 + 1;
            iVar11 = iVar22;
            if ((ulonglong)uVar5 * 0x20 == lVar17) goto LAB_1427cba96;
            uVar18 = *puVar3;
            lVar17 = lVar17 + 0x20;
          } while (uVar18 == 0);
        }
        else {
          lVar17 = 0;
        }
        uVar10 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar11 = ((int)lVar17 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if (iVar22 <= iVar11) {
          iVar11 = iVar22;
        }
      }
LAB_1427cba96:
      local_b0 = *(int *)(*local_e8 + 8 + (longlong)iVar11 * 0x14);
      local_b8 = *(longlong *)(*local_e8 + (longlong)iVar11 * 0x14);
      FUN_146881ef0();
      iVar22 = local_b0;
      lVar17 = local_b8;
      uVar5 = (uint)local_b8;
      iVar11 = (int)((ulonglong)local_b8 >> 0x20);
      uVar18 = (uint)((ulonglong)local_b8 >> 0x10);
      if ((int)uStack_90 != local_64) {
        puVar2 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar2 = local_60;
        }
        for (iVar14 = *(int *)(puVar2 + (ulonglong)
                                        (local_50 - 1U &
                                        iVar11 + (uVar5 << 0x10 | uVar5 & 0xffff) +
                                        (uVar18 << 0x13 | uVar18 & 0xffff) + ((uVar5 & 0xffff) >> 4)
                                        ) * 4); iVar14 != -1;
            iVar14 = *(int *)(local_98 + (longlong)iVar14 * 0x14 + 0xc)) {
          if (*(int *)(local_98 + 8 + (longlong)iVar14 * 0x14) == local_b0) goto LAB_1427cbdc6;
        }
      }
      FUN_146883844(&local_98,&local_c8,&local_b8);
      if ((iVar22 != 0 && lVar17 != 0) &&
         (lVar9 = *(longlong *)(lVar13 + 0x278), *(int *)(lVar9 + 0x288) != *(int *)(lVar9 + 0x2b4))
         ) {
        lVar15 = lVar9 + 0x2b8;
        if (*(longlong *)(lVar9 + 0x2c0) != 0) {
          lVar15 = *(longlong *)(lVar9 + 0x2c0);
        }
        iVar11 = *(int *)(lVar15 + (ulonglong)
                                   (*(int *)(lVar9 + 0x2c8) - 1U &
                                   iVar11 + (uVar5 << 0x10 | uVar5 & 0xffff) +
                                   (uVar18 << 0x13 | uVar18 & 0xffff) + ((uVar5 & 0xffff) >> 4)) * 4
                         );
        if (iVar11 != -1) {
          do {
            plVar16 = (longlong *)(*(longlong *)(lVar9 + 0x280) + (longlong)iVar11 * 0x18);
            if (*plVar16 == lVar17) {
              if ((((plVar16 != (longlong *)0x0) && (lVar17 = plVar16[1], lVar17 != 0)) &&
                  (*(int *)(lVar17 + 0x2dc) == iVar22)) && (*(byte *)(lVar17 + 0x2d8) < 8)) {
                local_f0 = (uint *)(lVar17 + 0x4f0);
                uVar18 = *(uint *)(lVar17 + 0x508);
                local_100 = (ulonglong)uVar18;
                local_f8 = lVar13;
                if (uVar18 == 0) {
                  uVar19 = 1;
                  uVar21 = 0;
                  iVar22 = 0;
                  uVar10 = 0;
                  goto LAB_1427cbcf6;
                }
                puVar3 = *(uint **)(lVar17 + 0x500);
                if (*(uint **)(lVar17 + 0x500) == (uint *)0x0) {
                  puVar3 = local_f0;
                }
                uVar5 = *puVar3;
                if (uVar5 != 0) {
                  uVar21 = 0;
                  iVar22 = 0;
                  goto LAB_1427cbccd;
                }
                iVar22 = uVar18 + 0x1e;
                if (-1 < (int)(uVar18 - 1)) {
                  iVar22 = uVar18 - 1;
                }
                uVar21 = 0;
                uVar10 = (ulonglong)(uint)(iVar22 >> 5);
                if (iVar22 >> 5 < 1) {
                  uVar10 = uVar21;
                }
                iVar22 = 0;
                goto LAB_1427cbcba;
              }
              break;
            }
            iVar11 = (int)plVar16[2];
          } while (iVar11 != -1);
        }
      }
      goto LAB_1427cbdc6;
    }
  }
LAB_1427cb996:
  if (*(int *)(lVar13 + 0x4e8) == *(int *)(lVar13 + 0x514)) {
    *(undefined1 *)(lVar13 + 0x2d8) = 8;
    FUN_146879232(*(undefined8 *)(lVar13 + 0x278),lVar13);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146881e62(&local_98);
LAB_1427cb5e3:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427cc2dc FUN_1427cc2dc body=12 status=ok
// SIG undefined FUN_1427cc2dc(void)

void FUN_1427cc2dc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001427cc2e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1427cc2e8 FUN_1427cc2e8 body=29 status=ok
// SIG undefined FUN_1427cc2e8(void)

undefined8 FUN_1427cc2e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427cc306 FUN_1427cc306 body=1209 status=ok
// SIG undefined FUN_1427cc306(void)

void FUN_1427cc306(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 local_5c [4];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_1;
  if (((int)param_1[1] != 0 && lVar3 != 0) &&
     (lVar18 = param_1[2], *(int *)(lVar18 + 0x288) != *(int *)(lVar18 + 0x2b4))) {
    uVar12 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar8 = (uint)lVar3 & 0xffff;
    lVar15 = lVar18 + 0x2b8;
    if (*(longlong *)(lVar18 + 0x2c0) != 0) {
      lVar15 = *(longlong *)(lVar18 + 0x2c0);
    }
    iVar16 = *(int *)(lVar15 + (ulonglong)
                               (*(int *)(lVar18 + 0x2c8) - 1U &
                               (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar8) +
                               (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar16 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar18 + 0x280) + (longlong)iVar16 * 0x18);
        if (*plVar1 == lVar3) {
          if (((plVar1 != (longlong *)0x0) && (lVar3 = plVar1[1], lVar3 != 0)) &&
             (*(int *)(lVar3 + 0x2dc) == (int)param_1[1])) {
            param_2[1] = L"Exports Done";
            uVar7 = *(undefined8 *)(lVar3 + 0x58);
            param_2[2] = uVar7;
            *(undefined8 *)(lVar3 + 0x118) = *param_2;
            *(wchar_t **)(lVar3 + 0x128) = L"Exports Done";
            *(undefined8 *)(lVar3 + 0x120) = uVar7;
            *(undefined4 *)(lVar3 + 0x108) = *(undefined4 *)(param_2 + 3);
            *(undefined1 *)(lVar3 + 0x10c) = *(undefined1 *)((longlong)param_2 + 0x1c);
            *(undefined1 *)(lVar3 + 0x10d) = *(undefined1 *)((longlong)param_2 + 0x1d);
            *(undefined1 *)(lVar3 + 0x59a) = 1;
            local_50 = 0x200000000;
            local_58 = lVar3;
            FUN_146877aa2(*(longlong *)(lVar3 + 0x278) + 0x410);
            *(undefined1 *)(lVar3 + 0x2d8) = 7;
            *(undefined4 *)(lVar3 + 0x3e0) = 0xffffffff;
            *(undefined4 *)(lVar3 + 0x3e4) = 0xffffffff;
            *(undefined4 *)(lVar3 + 1000) = 0xffffffff;
            *(undefined4 *)(lVar3 + 0x3ec) = 0xffffffff;
            if (*(char *)(*(longlong *)(lVar3 + 0x50) + 0x2e3) == '\x01') {
              uVar7 = *(undefined8 *)(*(longlong *)(lVar3 + 0x50) + 0x328);
            }
            else {
              uVar7 = 0;
            }
            FUN_1427bdfea(uVar7);
            if ((*(char *)(lVar3 + 0x599) == '\0') &&
               (*(int *)(lVar3 + 0x4e8) == *(int *)(lVar3 + 0x514))) {
              *(undefined1 *)(lVar3 + 0x599) = 1;
              FUN_14687904e(*(undefined8 *)(lVar3 + 0x278),lVar3);
            }
            local_58 = *(longlong *)(lVar3 + 0x14);
            local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(lVar3 + 0x2dc));
            local_68 = lVar3 + 0x530;
            iVar16 = *(int *)(lVar3 + 0x558);
            if (iVar16 == 0) {
              uVar10 = 1;
              uVar19 = 0;
              iVar11 = 0;
              iVar9 = 0;
              goto LAB_1427cc59a;
            }
            puVar4 = *(uint **)(lVar3 + 0x550);
            if (*(uint **)(lVar3 + 0x550) == (uint *)0x0) {
              puVar4 = (uint *)(lVar3 + 0x540);
            }
            uVar12 = *puVar4;
            if (uVar12 != 0) {
              uVar19 = 0;
              iVar11 = 0;
              goto LAB_1427cc577;
            }
            iVar9 = iVar16 + 0x1e;
            if (-1 < iVar16 + -1) {
              iVar9 = iVar16 + -1;
            }
            uVar19 = 0;
            uVar10 = (ulonglong)(uint)(iVar9 >> 5);
            if (iVar9 >> 5 < 1) {
              uVar10 = uVar19;
            }
            iVar11 = 0;
            goto LAB_1427cc563;
          }
          break;
        }
        iVar16 = (int)plVar1[2];
      } while (iVar16 != -1);
    }
  }
  goto LAB_1427cc3f1;
  while( true ) {
    iVar11 = iVar11 + 0x20;
    uVar12 = puVar4[uVar19 + 1];
    uVar19 = uVar19 + 1;
    if (uVar12 != 0) break;
LAB_1427cc563:
    if (uVar10 == uVar19) goto LAB_1427cc59f;
  }
LAB_1427cc577:
  uVar10 = (ulonglong)(-uVar12 & uVar12);
  uVar2 = uVar10 * 2 + 1;
  lVar18 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  iVar9 = (iVar11 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
  if (iVar16 <= iVar9) {
    iVar9 = iVar16;
  }
LAB_1427cc59a:
  if (iVar9 != iVar16) {
    uVar12 = 0xffffffff;
    do {
      lVar18 = *(longlong *)(*(longlong *)(lVar3 + 0x530) + (longlong)iVar9 * 0x14);
      iVar9 = *(int *)(*(longlong *)(lVar3 + 0x530) + 8 + (longlong)iVar9 * 0x14);
      if ((iVar9 != 0 && lVar18 != 0) &&
         (lVar15 = *(longlong *)(lVar3 + 0x278),
         *(int *)(lVar15 + 0x288) != *(int *)(lVar15 + 0x2b4))) {
        uVar8 = (uint)((ulonglong)lVar18 >> 0x10);
        uVar17 = (uint)lVar18 & 0xffff;
        lVar14 = lVar15 + 0x2b8;
        if (*(longlong *)(lVar15 + 0x2c0) != 0) {
          lVar14 = *(longlong *)(lVar15 + 0x2c0);
        }
        iVar13 = *(int *)(lVar14 + (ulonglong)
                                   (*(int *)(lVar15 + 0x2c8) - 1U &
                                   (int)((ulonglong)lVar18 >> 0x20) +
                                   ((uint)lVar18 << 0x10 | uVar17) +
                                   (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar17 >> 4)) * 4);
        if (iVar13 != -1) {
          do {
            plVar1 = (longlong *)(*(longlong *)(lVar15 + 0x280) + (longlong)iVar13 * 0x18);
            if (*plVar1 == lVar18) {
              if (((plVar1 != (longlong *)0x0) && (lVar18 = plVar1[1], lVar18 != 0)) &&
                 (*(int *)(lVar18 + 0x2dc) == iVar9)) {
                FUN_1468795c6(lVar18 + 0x4e0,&local_58);
                FUN_146883844(lVar18 + 0x490,local_5c,&local_58);
                if ((*(char *)(lVar18 + 0x599) == '\0') &&
                   (*(int *)(lVar18 + 0x4e8) == *(int *)(lVar18 + 0x514))) {
                  *(undefined1 *)(lVar18 + 0x599) = 1;
                  FUN_14687904e(*(undefined8 *)(lVar18 + 0x278),lVar18);
                }
              }
              break;
            }
            iVar13 = (int)plVar1[2];
          } while (iVar13 != -1);
        }
      }
      uVar12 = uVar12 & ~(uint)uVar10;
      puVar4 = *(uint **)(lVar3 + 0x550);
      if (*(uint **)(lVar3 + 0x550) == (uint *)0x0) {
        puVar4 = (uint *)(lVar3 + 0x540);
      }
      iVar13 = *(int *)(lVar3 + 0x558);
      iVar9 = (int)uVar19;
      lVar18 = (longlong)iVar9;
      uVar8 = puVar4[lVar18] & uVar12;
      if (uVar8 == 0) {
        iVar5 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar5 = iVar13 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar9) {
          iVar6 = iVar9;
        }
        if (iVar9 < iVar5) {
          lVar15 = 0;
          do {
            uVar8 = puVar4[lVar18 + lVar15 + 1];
            if (uVar8 != 0) {
              uVar19 = (ulonglong)(iVar9 + (int)lVar15 + 1);
              uVar12 = 0xffffffff;
              goto LAB_1427cc715;
            }
            iVar11 = iVar11 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar6 - lVar18 != lVar15);
          uVar12 = 0xffffffff;
          iVar9 = iVar6;
        }
        uVar19 = (ulonglong)(iVar9 + 1);
        iVar9 = iVar13;
      }
      else {
LAB_1427cc715:
        uVar10 = (ulonglong)(-uVar8 & uVar8);
        uVar2 = uVar10 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar9 = (iVar11 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar13 <= iVar9) {
          iVar9 = iVar13;
        }
      }
    } while (iVar9 != iVar16);
  }
LAB_1427cc59f:
  FUN_14687964c(local_68);
LAB_1427cc3f1:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427cc7e6 FUN_1427cc7e6 body=12 status=ok
// SIG undefined FUN_1427cc7e6(void)

void FUN_1427cc7e6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001427cc7ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1427cc7f2 FUN_1427cc7f2 body=29 status=ok
// SIG undefined FUN_1427cc7f2(void)

undefined8 FUN_1427cc7f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427cc810 FUN_1427cc810 body=730 status=ok
// SIG undefined FUN_1427cc810(void)

void FUN_1427cc810(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  DWORD DVar6;
  uint uVar7;
  DWORD dwTlsIndex;
  DWORD DVar8;
  LPVOID lpTlsValue;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  
  lVar2 = *param_1;
  if ((int)param_1[1] == 0 || lVar2 == 0) {
    return;
  }
  lVar3 = param_1[2];
  if (*(int *)(lVar3 + 0x288) == *(int *)(lVar3 + 0x2b4)) {
    return;
  }
  uVar7 = (uint)((ulonglong)lVar2 >> 0x10);
  uVar13 = (uint)lVar2 & 0xffff;
  lVar9 = lVar3 + 0x2b8;
  if (*(longlong *)(lVar3 + 0x2c0) != 0) {
    lVar9 = *(longlong *)(lVar3 + 0x2c0);
  }
  iVar12 = *(int *)(lVar9 + (ulonglong)
                            (*(int *)(lVar3 + 0x2c8) - 1U &
                            (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar13) +
                            (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar13 >> 4)) * 4);
  if (iVar12 == -1) {
    return;
  }
  while (plVar1 = (longlong *)(*(longlong *)(lVar3 + 0x280) + (longlong)iVar12 * 0x18),
        *plVar1 != lVar2) {
    iVar12 = (int)plVar1[2];
    if (iVar12 == -1) {
      return;
    }
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar2 = plVar1[1];
  if (lVar2 == 0) {
    return;
  }
  if (*(int *)(lVar2 + 0x2dc) != (int)param_1[1]) {
    return;
  }
  param_2[1] = L"Start Post Load";
  uVar4 = *(undefined8 *)(lVar2 + 0x58);
  param_2[2] = uVar4;
  *(undefined8 *)(lVar2 + 0x118) = *param_2;
  *(wchar_t **)(lVar2 + 0x128) = L"Start Post Load";
  *(undefined8 *)(lVar2 + 0x120) = uVar4;
  *(undefined4 *)(lVar2 + 0x108) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)(lVar2 + 0x10c) = *(undefined1 *)((longlong)param_2 + 0x1c);
  *(undefined1 *)(lVar2 + 0x10d) = *(undefined1 *)((longlong)param_2 + 0x1d);
  *(undefined1 *)(lVar2 + 0x2d8) = 9;
  FUN_1427bbaaa(lVar2);
  dwTlsIndex = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar8 = 0xffffffff;
    LOCK();
    bVar16 = DAT_14c75ec34 != 0xffffffff;
    DVar6 = dwTlsIndex;
    if (bVar16) {
      DVar8 = DAT_14c75ec34;
      DVar6 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar6;
    UNLOCK();
    if (bVar16) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar8;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(lpTlsValue);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  lVar3 = *(longlong *)((longlong)lpTlsValue + 0x58);
  lVar9 = *(longlong *)(lVar2 + 0x50);
  iVar12 = *(int *)(lVar9 + 0x20);
  iVar10 = *(int *)(lVar3 + 0x18) + iVar12;
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  plVar1 = (longlong *)(lVar3 + 0x10);
  if (*(int *)(lVar3 + 0x1c) < iVar10) {
    FUN_14079e7a6(plVar1);
    lVar9 = *(longlong *)(lVar2 + 0x50);
    iVar12 = *(int *)(lVar9 + 0x20);
  }
  if (0 < iVar12) {
    lVar15 = 0x40;
    lVar14 = 0;
    do {
      lVar5 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + lVar15);
      if (lVar5 != 0) {
        if ((*(uint *)(lVar5 + 8) >> 0xc & 1) == 0) {
          uVar7 = *(uint *)(lVar5 + 0xc);
          if ((int)uVar7 < DAT_14c9647dc) {
            lVar11 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
          }
          else {
            lVar11 = 0;
          }
          if ((*(uint *)(lVar11 + 8) & 0x8400000) == 0) goto LAB_1427cca2d;
        }
        iVar12 = *(int *)(lVar3 + 0x18);
        uVar7 = iVar12 + 1;
        *(uint *)(lVar3 + 0x18) = uVar7;
        if (*(uint *)(lVar3 + 0x1c) < uVar7) {
          FUN_1447f76d2(plVar1);
        }
        *(longlong *)(*plVar1 + (longlong)iVar12 * 8) = lVar5;
        lVar9 = *(longlong *)(lVar2 + 0x50);
      }
LAB_1427cca2d:
      lVar14 = lVar14 + 1;
      lVar15 = lVar15 + 0x68;
    } while (lVar14 < *(int *)(lVar9 + 0x20));
  }
  lVar3 = *(longlong *)(lVar2 + 0x278);
  iVar12 = *(int *)(lVar3 + 0x2d8);
  *(uint *)(lVar3 + 0x2d8) = iVar12 + 1U;
  if (*(uint *)(lVar3 + 0x2dc) < iVar12 + 1U) {
    FUN_1468824fe((longlong *)(lVar3 + 0x2d0),iVar12);
  }
  *(longlong *)(*(longlong *)(lVar3 + 0x2d0) + (longlong)iVar12 * 8) = lVar2;
  return;
}



// FUNCTION 1427ccb10 FUN_1427ccb10 body=12 status=ok
// SIG undefined FUN_1427ccb10(void)

void FUN_1427ccb10(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001427ccb19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1427ccb1c FUN_1427ccb1c body=29 status=ok
// SIG undefined FUN_1427ccb1c(void)

undefined8 FUN_1427ccb1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427ccb6c FUN_1427ccb6c body=12 status=ok
// SIG undefined FUN_1427ccb6c(void)

void FUN_1427ccb6c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001427ccb75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1427ccb78 FUN_1427ccb78 body=29 status=ok
// SIG undefined FUN_1427ccb78(void)

undefined8 FUN_1427ccb78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427ccb98 FUN_1427ccb98 body=983 status=ok
// SIG undefined FUN_1427ccb98(void)

void FUN_1427ccb98(longlong *param_1,char *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_3d8 [32];
  longlong local_3b8;
  undefined8 uStack_3b0;
  undefined1 local_3a8 [4];
  int local_3a4;
  int local_384;
  undefined **local_270 [5];
  byte local_248;
  byte local_247;
  longlong *local_218;
  longlong local_1f8;
  longlong local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  char local_1c8;
  undefined **local_1c0;
  undefined ***local_1b8;
  undefined ***local_1b0;
  undefined8 **local_1a8;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  lVar1 = *param_1;
  if ((*param_2 != '\0') || ((*(byte *)(lVar1 + 0x29) & 2) != 0)) {
    if ((*(byte *)(lVar1 + 0x29) & 2) == 0) {
      *(undefined1 *)(lVar1 + 0x114) = 4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_3d8);
  }
  param_3 = (longlong *)*param_3;
  if (*(int *)(lVar1 + 0x110) == 0) {
    *(undefined4 *)(lVar1 + 0x110) = 1;
    if (*(char *)((longlong)param_3 + 0x53) == '\x01') {
      *(undefined8 *)(lVar1 + 0xd0) = 0xffffffffffffffff;
    }
    else {
      uVar3 = param_3[1];
      *(ulonglong *)(lVar1 + 0xd0) = uVar3;
      if (0x1f < (longlong)uVar3) {
        if (DAT_14c872ba8 == '\x01') {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c948778);
          *(undefined8 *)(lVar1 + 0x100) = *(undefined8 *)(lVar1 + 0xd0);
          local_3b8 = 0;
          FUN_1427c544a(lVar1,0,*(undefined8 *)(lVar1 + 0xd0),1);
          *(undefined4 *)(lVar1 + 0x110) = 2;
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_3d8);
        }
        uVar6 = 0x2000;
        if (uVar3 < 0x2000) {
          uVar6 = uVar3;
        }
        local_3b8 = lVar1 + 0x120;
        uVar5 = DAT_14c948718;
        if (4 < (int)DAT_14c948718) {
          uVar5 = 5;
        }
        if ((int)uVar5 < 1) {
          uVar5 = 0;
        }
        uStack_3b0 = 0;
        uVar4 = (**(code **)(**(longlong **)(lVar1 + 0x90) + 0x10))
                          (*(longlong **)(lVar1 + 0x90),0,uVar6,uVar5);
        *(undefined8 *)(lVar1 + 0xa8) = uVar4;
        uVar5 = 5;
        if ((int)DAT_14c948718 < 5) {
          uVar5 = DAT_14c948718;
        }
        if ((int)uVar5 < 1) {
          uVar5 = 0;
        }
        local_3b8 = 0;
        uStack_3b0 = 0;
        uVar4 = (**(code **)(**(longlong **)(lVar1 + 0x90) + 0x10))
                          (*(longlong **)(lVar1 + 0x90),0,uVar6,uVar5 | 0x100);
        *(undefined8 *)(lVar1 + 0xb0) = uVar4;
        goto LAB_1427ccf44;
      }
    }
    FUN_14572541c(lVar1);
    *(byte *)(lVar1 + 0x114) = 0 < *(longlong *)(lVar1 + 0xd0) | 2;
  }
  else if (*(int *)(lVar1 + 0x110) == 1) {
    lVar2 = param_3[1];
    if (lVar2 == 0 || *(char *)((longlong)param_3 + 0x53) != '\0') {
      FUN_14572541c(lVar1);
      *(undefined1 *)(lVar1 + 0x114) = 3;
      *(undefined4 *)(lVar1 + 0x110) = 2;
    }
    else {
      if (*(char *)((longlong)param_3 + 0x55) == '\0') {
        (**(code **)(*param_3 + 0x20))(param_3);
      }
      param_3[1] = 0;
      lVar7 = 0x2000;
      if (*(longlong *)(lVar1 + 0xd0) < 0x2000) {
        lVar7 = *(longlong *)(lVar1 + 0xd0);
      }
      FUN_144869430(local_270);
      local_270[0] = &PTR__purecall_149e30ac0;
      local_1d8 = 0;
      local_1c8 = '\0';
      local_248 = local_248 | 1;
      local_1e0 = lVar2;
      local_1d0 = lVar7;
      FUN_1449c2eca(local_270);
      local_270[0] = &PTR_FUN_149e447c0;
      memset(local_3a8,0,0x138);
      local_1a8 = &local_1b0;
      local_1c0 = &PTR_FUN_149e37810;
      local_1b0 = &local_1c0;
      local_1b8 = local_270;
      FUN_142809e3f(local_1a8,local_3a8);
      if ((((local_247 & 2) == 0) && ((longlong)local_384 <= *(longlong *)(lVar1 + 0xd0))) &&
         (0xd5 < local_3a4)) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c948778);
        *(undefined1 *)(lVar1 + 0x115) = 0;
        *(longlong *)(lVar1 + 0x100) = (longlong)local_384;
        local_3b8 = 0;
        FUN_1427c544a(lVar1,0,(longlong)local_384,1);
        *(undefined4 *)(lVar1 + 0x110) = 2;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c948778);
      }
      else {
        FUN_14572541c(lVar1);
        *(undefined1 *)(lVar1 + 0x114) = 3;
      }
      FUN_1400020a8(lVar2);
      FUN_146875c70(local_3a8);
      if (local_1c8 == '\x01') {
        FUN_1400020a8(local_1e0);
        local_1e0 = 0;
      }
      local_270[0] = &PTR__purecall_149e35f70;
      if (local_218 != (longlong *)0x0) {
        if (*local_218 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_218);
      }
      if (local_1f8 != 0) {
        if (*(longlong *)(local_1f8 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_1f8);
      }
    }
  }
LAB_1427ccf44:
  if ((local_30 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


