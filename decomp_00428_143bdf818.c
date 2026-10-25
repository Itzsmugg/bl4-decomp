// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143bdf818 FUN_143bdf818 body=51 status=ok
// SIG undefined FUN_143bdf818(void)

void FUN_143bdf818(longlong *param_1,undefined4 *param_2)

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



// FUNCTION 143bdf850 FUN_143bdf850 body=48 status=ok
// SIG undefined FUN_143bdf850(void)

bool FUN_143bdf850(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *param_3;
  iVar2 = FUN_146bc96d4(*param_1,*param_2);
  iVar3 = FUN_146bc96d4(*param_1,uVar1);
  return iVar2 == iVar3;
}



// FUNCTION 143bdf8d0 FUN_143bdf8d0 body=79 status=ok
// SIG undefined FUN_143bdf8d0(void)

void FUN_143bdf8d0(longlong *param_1,uint *param_2)

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



// FUNCTION 143bdf92a FUN_143bdf92a body=843 status=ok
// SIG undefined FUN_143bdf92a(void)

void FUN_143bdf92a(void)

{
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af42900,1,&PTR_FUN_14af427e0,7,
                &PTR_FUN_14af42740,5);
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af44d20,1,&PTR_FUN_14af44c50,5,
                &PTR_FUN_14af44c30,1);
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af46650,1,&PTR_FUN_14af465d0,3,
                &PTR_FUN_14af465b0,1);
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af47cb0,1,0,0,0,0);
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af4ab00,1,&PTR_FUN_14af4a9c0,8,
                &PTR_FUN_14af4a980,2);
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af4bea0,1,0,0,0,0);
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af4ef20,1,0,0,0,0);
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af535c0,1,&PTR_FUN_14af53480,8,
                &PTR_FUN_14af533e0,5);
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af56720,1,&PTR_FUN_14af566a0,3,
                &PTR_FUN_14af56680,1);
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af590e0,1,0,0,0,0);
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af59b10,1,0,0,0,0);
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af62a00,1,&PTR_FUN_14af62930,5,
                &PTR_FUN_14af628b0,4);
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af6a390,1,0,0,0,0);
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af6b490,1,&PTR_FUN_14af6b440,2,
                &PTR_FUN_14af6b3e0,3);
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af6d970,1,&PTR_FUN_14af6d850,7,
                &PTR_FUN_14af6d7f0,3);
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af6f730,1,&PTR_FUN_14af6f6e0,2,
                &PTR_FUN_14af6f6a0,2);
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af73650,1,0,0,&PTR_FUN_14af73630,1);
  return;
}



// FUNCTION 143bdfc78 FUN_143bdfc78 body=55 status=ok
// SIG undefined FUN_143bdfc78(void)

void FUN_143bdfc78(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4f640 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4f640 =
         FUN_14171c317(FUN_14649f98e,uVar1,L"EGeometryScriptRemoveMeshSimplificationType");
  }
  return;
}



// FUNCTION 143bdfcaf FUN_143bdfcaf body=55 status=ok
// SIG undefined FUN_143bdfcaf(void)

void FUN_143bdfcaf(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4f750 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4f750 = FUN_14171c317(FUN_14649ff6c,uVar1,L"ESelectiveTessellatePatternType");
  }
  return;
}



// FUNCTION 143bdfce6 FUN_143bdfce6 body=55 status=ok
// SIG undefined FUN_143bdfce6(void)

void FUN_143bdfce6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4f828 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4f828 = FUN_14171c317(FUN_1464a03ec,uVar1,L"EGeometryScriptUVLayoutType");
  }
  return;
}



// FUNCTION 143bdfd1d FUN_143bdfd1d body=55 status=ok
// SIG undefined FUN_143bdfd1d(void)

void FUN_143bdfd1d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4f858 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4f858 = FUN_14171c317(FUN_1464a04b2,uVar1,L"EGeometryScriptUVFlattenMethod");
  }
  return;
}



// FUNCTION 143bdfd54 FUN_143bdfd54 body=55 status=ok
// SIG undefined FUN_143bdfd54(void)

void FUN_143bdfd54(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4f870 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4f870 = FUN_14171c317(FUN_1464a04e1,uVar1,L"EGeometryScriptUVIslandSource");
  }
  return;
}



// FUNCTION 143bdfd8b FUN_143bdfd8b body=55 status=ok
// SIG undefined FUN_143bdfd8b(void)

void FUN_143bdfd8b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4f900 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4f900 = FUN_14171c317(FUN_1464a0800,uVar1,L"EGeometryScriptTexelDensityMode");
  }
  return;
}



// FUNCTION 143bdfdc2 FUN_143bdfdc2 body=55 status=ok
// SIG undefined FUN_143bdfdc2(void)

void FUN_143bdfdc2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4fa18 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4fa18 = FUN_14171c317(FUN_1464a0dd1,uVar1,L"EGeometryScriptBlurColorMode");
  }
  return;
}



// FUNCTION 143bdfdf9 FUN_143bdfdf9 body=55 status=ok
// SIG undefined FUN_143bdfdf9(void)

void FUN_143bdfdf9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4fa98 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4fa98 = FUN_14171c317(FUN_1464a1055,uVar1,L"EGeometryScriptGridSizingMethod");
  }
  return;
}



// FUNCTION 143bdfe30 FUN_143bdfe30 body=55 status=ok
// SIG undefined FUN_143bdfe30(void)

void FUN_143bdfe30(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4fae0 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4fae0 = FUN_14171c317(FUN_1464a11b2,uVar1,L"EGeometryScriptMorphologicalOpType");
  }
  return;
}



// FUNCTION 143bdfe67 FUN_143bdfe67 body=69 status=ok
// SIG undefined FUN_143bdfe67(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143bdfe67(void)

{
  _DAT_14cb4fb30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143bdfea9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb4fb38,1);
  return;
}



// FUNCTION 143bdfeac FUN_143bdfeac body=55 status=ok
// SIG undefined FUN_143bdfeac(void)

void FUN_143bdfeac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4fb50 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4fb50 = FUN_14171c317(FUN_1464a134b,uVar1,L"EGeometryScriptInitKMeansMethod");
  }
  return;
}



// FUNCTION 143bdfee3 FUN_143bdfee3 body=216 status=ok
// SIG undefined FUN_143bdfee3(void)

undefined4 * FUN_143bdfee3(undefined4 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[1] = (int)param_3[3];
  *param_1 = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_38[0] = 0;
  local_38[1] = 0;
  plVar1 = param_3;
  if ((int)param_3[1] == 0) {
    if (*(char *)((longlong)param_3 + 0x14) == '\x01') {
      local_48 = *param_2;
      local_40 = *(undefined4 *)(param_2 + 1);
      plVar1 = local_38;
      FUN_1485e9270(&local_48,(int)param_3[2],plVar1);
    }
    else {
      plVar1 = local_38;
    }
  }
  local_58 = *plVar1;
  local_50 = (undefined4)plVar1[1];
  local_68 = *param_2;
  local_60 = *(undefined4 *)(param_2 + 1);
  FUN_1485e937a(param_1,&local_68,(int)param_3[2]);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bdffbc FUN_143bdffbc body=55 status=ok
// SIG undefined FUN_143bdffbc(void)

void FUN_143bdffbc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4fc10 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4fc10 = FUN_14171c317(FUN_1464a175d,uVar1,L"EGeometryScriptPolyOffsetJoinType");
  }
  return;
}



// FUNCTION 143bdfff3 FUN_143bdfff3 body=55 status=ok
// SIG undefined FUN_143bdfff3(void)

void FUN_143bdfff3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4fc28 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4fc28 = FUN_14171c317(FUN_1464a178c,uVar1,L"EGeometryScriptPathOffsetEndType");
  }
  return;
}



// FUNCTION 143be002a FUN_143be002a body=152 status=ok
// SIG undefined FUN_143be002a(void)

undefined4 *
FUN_143be002a(undefined4 *param_1,longlong param_2,undefined1 *param_3,int param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  plVar4 = (longlong *)FUN_143be02a5(param_2,param_5,param_6);
  if ((plVar4 == (longlong *)0x0) || ((int)plVar4[1] == 0)) {
    *param_3 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    *param_3 = 1;
    param_4 = param_4 % (int)*(uint *)(plVar4 + 1);
    puVar3 = (undefined4 *)
             (*plVar4 + (longlong)(int)((param_4 >> 0x1f & *(uint *)(plVar4 + 1)) + param_4) * 0x10)
    ;
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
  }
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  plVar4 = *(longlong **)(param_2 + 8);
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
  return param_1;
}



// FUNCTION 143be00c2 FUN_143be00c2 body=237 status=ok
// SIG undefined FUN_143be00c2(void)

undefined8
FUN_143be00c2(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,ulonglong param_4,
             undefined8 param_5,undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_38 = param_3[4];
  uStack_34 = param_3[5];
  uStack_30 = param_3[6];
  uStack_2c = param_3[7];
  local_28 = *(undefined8 *)(param_3 + 8);
  local_58 = *param_2;
  local_50 = param_2[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_68 = param_6;
  local_70 = param_5;
  local_78 = param_4 ^ 0x8000000000000000;
  FUN_1485d9b6e(param_1,&local_58,&local_48);
  plVar3 = (longlong *)param_2[1];
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be01b2 FUN_143be01b2 body=240 status=ok
// SIG undefined FUN_143be01b2(void)

undefined8
FUN_143be01b2(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_38 = param_3[4];
  uStack_34 = param_3[5];
  uStack_30 = param_3[6];
  uStack_2c = param_3[7];
  local_28 = *(undefined8 *)(param_3 + 8);
  local_58 = *param_2;
  local_50 = param_2[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_68 = param_6;
  local_70 = param_5;
  local_78 = param_4;
  FUN_1485d9b6e(param_1,&local_58,&local_48,(int)param_4);
  plVar3 = (longlong *)param_2[1];
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be02a5 FUN_143be02a5 body=75 status=ok
// SIG undefined FUN_143be02a5(void)

longlong FUN_143be02a5(longlong *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  
  param_1 = (longlong *)*param_1;
  if ((((int)param_2 < 0 || param_1 == (longlong *)0x0) || ((int)param_1[1] <= (int)param_2)) ||
     (lVar1 = (ulonglong)param_2 * 0x28 + *param_1, lVar1 == 0)) {
    return 0;
  }
  if (param_3 != 0xffffffff) {
    if ((int)param_3 < 0) {
      return 0;
    }
    if (*(int *)(lVar1 + 0x20) <= (int)param_3) {
      return 0;
    }
    lVar1 = (ulonglong)param_3 * 0x10 + *(longlong *)(lVar1 + 0x18);
  }
  return lVar1;
}



// FUNCTION 143be02f0 FUN_143be02f0 body=55 status=ok
// SIG undefined FUN_143be02f0(void)

void FUN_143be02f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4fdc8 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4fdc8 = FUN_14171c317(FUN_1464a20a5,uVar1,L"EGeometryScriptSampleSpacing");
  }
  return;
}



// FUNCTION 143be0327 FUN_143be0327 body=55 status=ok
// SIG undefined FUN_143be0327(void)

void FUN_143be0327(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4fde0 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4fde0 = FUN_14171c317(FUN_1464a20d4,uVar1,L"EGeometryScriptEvaluateSplineRange");
  }
  return;
}



// FUNCTION 143be035e FUN_143be035e body=2341 status=ok
// SIG undefined FUN_143be035e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143be035e(undefined8 *param_1,float param_2)

{
  double *pdVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar24;
  undefined1 auVar23 [16];
  double dVar25;
  undefined1 auVar26 [16];
  double dVar28;
  undefined1 auVar27 [16];
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auStack_328 [32];
  undefined1 local_308;
  undefined1 local_300;
  float local_2f4;
  double local_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
  undefined8 local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
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
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  local_300 = *(undefined1 *)(param_1 + 5);
  local_308 = *(undefined1 *)((longlong)param_1 + 0x29);
  uVar12 = *param_1;
  puVar15 = local_2c8;
  local_2f4 = param_2;
  FUN_147a230da(uVar12,puVar15,param_1[3],*(undefined1 *)(param_1[3] + 9));
  pdVar1 = (double *)param_1[4];
  auVar26._8_8_ = dStack_280;
  auVar26._0_8_ = local_288;
  dVar25 = local_278._0_8_;
  dVar20 = local_278._8_8_;
  auVar21 = *(undefined1 (*) [16])(pdVar1 + 8);
  dVar39 = auVar21._0_8_;
  dVar3 = auVar21._8_8_;
  auVar30 = *(undefined1 (*) [16])(pdVar1 + 10);
  dVar33 = auVar30._0_8_;
  auVar21 = minpd(auVar21,auVar26);
  auVar26 = minpd(auVar30,local_278);
  auVar22._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
  auVar22._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
  iVar11 = movmskpd((int)uVar12,auVar22);
  auVar21._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
  auVar21._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
  uVar14 = movmskpd((int)puVar15,auVar21);
  uVar12 = local_2c8._0_8_;
  uVar9 = local_2b8._0_8_;
  uVar8 = local_2c8._8_8_;
  uVar10 = local_2b8._8_8_;
  if ((uVar14 & 0x3fffffff) == 0 && iVar11 == 0) {
    dVar31 = *pdVar1;
    dVar5 = pdVar1[1];
    dVar6 = pdVar1[2];
    dVar7 = pdVar1[3];
    dVar38 = dVar6 * (double)local_2b8._8_8_;
    dVar36 = (double)local_2c8._0_8_ * dVar5;
    dVar37 = (double)local_2c8._0_8_ * dVar31;
    dVar32 = dVar6 * (double)local_2c8._8_8_;
    dVar34 = dVar31 * (double)local_2c8._8_8_;
    dVar28 = dVar5 * (double)local_2c8._8_8_;
    dVar29 = pdVar1[4] * local_288;
    dVar24 = pdVar1[5] * dStack_280;
    dVar4 = pdVar1[6] * dVar25;
    dVar35 = pdVar1[7] * dVar20;
    local_2c8._8_8_ =
         dVar31 * (double)local_2b8._0_8_ * 1.0 +
         dVar7 * (double)local_2c8._8_8_ +
         dVar6 * (double)local_2c8._0_8_ * -1.0 + dVar5 * (double)local_2b8._8_8_;
    local_2c8._0_8_ =
         dVar5 * (double)local_2b8._0_8_ * -1.0 +
         dVar32 + dVar7 * (double)local_2c8._0_8_ * 1.0 + dVar31 * (double)local_2b8._8_8_;
    local_2b8._8_8_ =
         dVar6 * (double)local_2b8._0_8_ * -1.0 +
         ((dVar37 * -1.0 + dVar7 * (double)local_2b8._8_8_) - dVar28);
    local_2b8._0_8_ = dVar7 * (double)local_2b8._0_8_ * 1.0 + ((dVar36 * 1.0 + dVar38) - dVar34);
    dVar28 = dVar24 * (double)uVar12 - (double)uVar8 * dVar29;
    dVar31 = dVar4 * (double)uVar8 - (double)uVar9 * dVar24;
    dVar32 = dVar29 * (double)uVar9 - (double)uVar12 * dVar4;
    dVar34 = dVar35 * (double)uVar10 - (double)uVar10 * dVar35;
    dVar31 = dVar31 + dVar31;
    dVar32 = dVar32 + dVar32;
    dVar28 = dVar28 + dVar28;
    dVar34 = dVar34 + dVar34;
    local_2a8 = (dVar28 * (double)uVar8 - (double)uVar9 * dVar32) + (double)uVar10 * dVar31 + dVar29
                + local_2a8;
    dStack_2a0 = (dVar31 * (double)uVar9 - dVar28 * (double)uVar12) +
                 (double)uVar10 * dVar32 + dVar24 + dStack_2a0;
    local_298 = (dVar32 * (double)uVar12 - (double)uVar8 * dVar31) + (double)uVar10 * dVar28 + dVar4
                + local_298;
    dStack_290 = (dVar34 * (double)uVar10 - dVar34 * (double)uVar10) +
                 (double)uVar10 * dVar34 + dVar35 + dStack_290;
    dVar33 = dVar33 * dVar25;
    dVar20 = auVar30._8_8_ * dVar20;
    local_288 = dVar39 * local_288;
    dStack_280 = dVar3 * dStack_280;
  }
  else {
    dVar24 = (double)local_2c8._8_8_ + (double)local_2c8._8_8_;
    dVar32 = (double)local_2b8._0_8_ + (double)local_2b8._0_8_;
    dVar34 = (double)local_2c8._0_8_ * ((double)local_2c8._0_8_ + (double)local_2c8._0_8_);
    local_178 = (1.0 - (dVar34 + (double)local_2c8._8_8_ * dVar24)) * dVar25;
    dVar29 = ((double)local_2c8._0_8_ + (double)local_2c8._0_8_) * (double)local_2b8._8_8_;
    local_188 = (dVar24 * (double)local_2b8._8_8_ + (double)local_2c8._0_8_ * dVar32) * dVar25;
    dVar20 = dVar20 * auVar30._8_8_;
    local_2d8._8_4_ = SUB84(dVar20,0);
    local_2d8._0_8_ = dVar25 * dVar33;
    local_2d8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    local_1a8 = (dVar24 * (double)local_2c8._0_8_ - dVar32 * (double)local_2b8._8_8_) * dStack_280;
    dStack_180 = (dVar32 * (double)local_2c8._8_8_ - dVar29) * dVar25;
    local_1c8 = (1.0 - ((double)local_2b8._0_8_ * dVar32 + (double)local_2c8._8_8_ * dVar24)) *
                local_288;
    dStack_1a0 = (1.0 - ((double)local_2b8._0_8_ * dVar32 + dVar34)) * dStack_280;
    dStack_1c0 = (dVar24 * (double)local_2c8._0_8_ + dVar32 * (double)local_2b8._8_8_) * local_288;
    local_198 = (dVar32 * (double)local_2c8._8_8_ + dVar29) * dStack_280;
    local_1b8 = ((double)local_2c8._0_8_ * dVar32 - dVar24 * (double)local_2b8._8_8_) * local_288;
    uStack_1b0 = 0;
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = local_2a8;
    dStack_160 = dStack_2a0;
    local_158 = (undefined4)local_298;
    uStack_154 = local_298._4_4_;
    uStack_150 = 0;
    uStack_14c = 0x3ff00000;
    dVar24 = *pdVar1;
    dVar34 = pdVar1[1];
    dVar4 = pdVar1[2];
    dVar28 = dVar34 + dVar34;
    dVar20 = dVar4 + dVar4;
    dVar35 = dVar24 * (dVar24 + dVar24);
    local_1f8 = (1.0 - (dVar35 + dVar34 * dVar28)) * dVar33;
    dVar25 = pdVar1[3];
    dVar32 = dVar20 * dVar25;
    dVar29 = (dVar24 + dVar24) * pdVar1[3];
    dVar25 = dVar28 * dVar25;
    local_208 = (dVar25 + *pdVar1 * dVar20) * dVar33;
    local_228 = (dVar28 * dVar24 - dVar32) * dVar3;
    dStack_200 = (dVar20 * dVar34 - dVar29) * dVar33;
    local_2e8._8_4_ = SUB84(dStack_280 * dVar3,0);
    local_2e8._0_8_ = local_288 * dVar39;
    local_2e8._12_4_ = (int)((ulonglong)(dStack_280 * dVar3) >> 0x20);
    local_248 = (1.0 - (dVar4 * dVar20 + dVar34 * dVar28)) * dVar39;
    dStack_220 = (1.0 - (dVar4 * dVar20 + dVar35)) * dVar3;
    dStack_240 = (dVar28 * dVar24 + dVar32) * dVar39;
    local_218 = (dVar20 * dVar34 + dVar29) * dVar3;
    local_238 = (*pdVar1 * dVar20 - dVar25) * dVar39;
    uStack_230 = 0;
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1e8 = pdVar1[4];
    dStack_1e0 = pdVar1[5];
    local_1d8 = *(undefined4 *)(pdVar1 + 6);
    uStack_1d4 = *(undefined4 *)((longlong)pdVar1 + 0x34);
    uStack_1d0 = 0;
    uStack_1cc = 0x3ff00000;
    FUN_1447fea8d(&local_148);
    auVar21 = _DAT_149934d80;
    local_2f0 = local_138;
    dVar25 = local_138 * local_138 + local_148 * local_148 + local_140 * local_140;
    dVar39 = local_118 * local_118 + local_128 * local_128 + local_120 * local_120;
    dVar33 = local_f8 * local_f8 + local_108 * local_108 + local_100 * local_100;
    uVar18 = -(ulonglong)(0.0 <= dVar25 + -9.99999993922529e-09);
    dVar25 = (double)(~uVar18 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar25)) & uVar18);
    uVar18 = -(ulonglong)(0.0 <= dVar39 + -9.99999993922529e-09);
    dVar39 = (double)(~uVar18 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar39)) & uVar18);
    uVar18 = -(ulonglong)(0.0 <= dVar33 + -9.99999993922529e-09);
    dVar3 = (double)(~uVar18 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar33)) & uVar18);
    dVar33 = (double)local_2d8._0_8_;
    dVar20 = (double)local_2d8._8_8_;
    uVar12 = local_2e8._0_8_;
    uVar8 = local_2e8._8_8_;
    auVar30._8_8_ = -(ulonglong)(0.0 <= (double)local_2e8._8_8_);
    auVar30._0_8_ = -(ulonglong)(0.0 <= (double)local_2e8._0_8_);
    auVar30 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar30);
    dVar32 = (double)(~-(ulonglong)(0.0 <= (double)local_2d8._0_8_) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= (double)local_2d8._0_8_) & 0x3ff0000000000000);
    dVar29 = auVar30._0_8_;
    local_148 = local_148 * dVar25 * dVar29;
    local_140 = local_140 * dVar25 * dVar29;
    local_138 = dVar25 * local_138 * dVar29;
    dVar25 = auVar30._8_8_;
    local_118 = dVar39 * local_118 * dVar25;
    local_120 = local_120 * dVar39 * dVar25;
    local_128 = dVar25 * local_128 * dVar39;
    local_f8 = dVar3 * local_f8 * dVar32;
    local_100 = local_100 * dVar3 * dVar32;
    local_108 = dVar32 * local_108 * dVar3;
    FUN_14481fd10(&local_268,&local_148);
    dVar25 = local_258 * local_258 + local_268 * local_268;
    dVar39 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar23._0_8_ = dVar25 + dVar39;
    auVar23._8_8_ = dVar25 + dVar39;
    auVar19._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
    auVar19._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
    auVar30 = sqrtpd(auVar23,auVar23);
    auVar21 = divpd(auVar21,auVar30);
    auVar27._0_8_ = auVar21._0_8_ * local_258;
    auVar27._8_8_ = auVar21._8_8_ * dStack_250;
    uVar18 = (ulonglong)(dStack_260 * auVar21._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
    local_2b8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar27,auVar19);
    local_288 = (double)uVar12;
    dStack_280 = (double)uVar8;
    local_2c8._8_4_ = (int)uVar18;
    local_2c8._0_8_ =
         (ulonglong)(local_268 * auVar21._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
    local_2c8._12_4_ = (int)(uVar18 >> 0x20);
    local_2a8 = local_e8;
    dStack_2a0 = dStack_e0;
    local_298 = local_d8;
    dStack_290 = 0.0;
  }
  local_278._8_4_ = SUB84(dVar20,0);
  local_278._0_8_ = dVar33;
  local_278._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  plVar2 = (longlong *)param_1[1];
  iVar11 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar11 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar11 + 1U) {
    FUN_144a2c682(plVar2,iVar11);
  }
  puVar16 = (undefined8 *)local_2c8;
  puVar17 = (undefined8 *)((longlong)iVar11 * 0x60 + *plVar2);
  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  plVar2 = (longlong *)param_1[2];
  iVar11 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar11 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar11 + 1U) {
    FUN_144941252(plVar2,iVar11);
  }
  *(double *)(*plVar2 + (longlong)iVar11 * 8) = (double)local_2f4;
  if ((local_c0 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be0c84 FUN_143be0c84 body=161 status=ok
// SIG undefined FUN_143be0c84(void)

ulonglong FUN_143be0c84(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong unaff_RBP;
  longlong lVar5;
  longlong lVar6;
  
  if ((int)param_1[1] < 1) {
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
  }
  else {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(*param_1 + lVar5 * 8);
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),lVar2 != 0);
      if (lVar2 == 0) break;
      lVar3 = *param_2;
      uVar4 = *(undefined8 *)(lVar2 + 0x98);
      iVar1 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
        FUN_1485ea0ae(param_3,iVar1);
      }
      FUN_1485ea048((longlong)iVar1 * 0xb8 + *param_3,uVar4,lVar3 + lVar6);
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x60;
    } while (lVar5 < (int)param_1[1]);
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 143be0d25 FUN_143be0d25 body=55 status=ok
// SIG undefined FUN_143be0d25(void)

void FUN_143be0d25(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb500a8 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb500a8 = FUN_14171c317(FUN_1464a2f8f,uVar1,L"EGeometryScriptPixelSamplingMethod");
  }
  return;
}



// FUNCTION 143be0d5c FUN_143be0d5c body=590 status=ok
// SIG undefined FUN_143be0d5c(void)

void FUN_143be0d5c(int *param_1,longlong *param_2,char *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14856e04a(param_4,0);
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    uVar2 = *(uint *)(param_2 + 1);
    uVar7 = (ulonglong)uVar2;
    if (uVar7 != 0) {
      plVar3 = (longlong *)*param_4;
      FUN_14735c9c0(plVar3,uVar7,1);
      if (0 < (int)uVar2) {
        lVar8 = 0;
        do {
          dVar5 = *(double *)(*param_2 + 8 + lVar8) * *(double *)(param_3 + 0x10) +
                  *(double *)(param_3 + 0x20);
          dVar6 = *(double *)(*param_2 + lVar8) * *(double *)(param_3 + 8) +
                  *(double *)(param_3 + 0x18);
          if (param_3[1] == '\x01') {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = dVar5;
            auVar10 = roundsd(ZEXT816(0),auVar10,9);
            auVar11._8_8_ = 0;
            auVar11._0_8_ = dVar6;
            auVar11 = roundsd(ZEXT816(0),auVar11,9);
            dVar5 = dVar5 - auVar10._0_8_;
            dVar6 = dVar6 - auVar11._0_8_;
            if (*param_3 == '\0') {
              local_b8 = 0;
              uStack_b0 = 0;
              local_88 = dVar5 * (double)param_1[1];
              local_90 = dVar6 * (double)*param_1;
              FUN_1485ea29a(param_1,&local_a8,&local_90,&local_b8);
            }
            else {
LAB_143be0ee0:
              puVar1 = (undefined8 *)
                       ((longlong)(int)(dVar6 * (double)*param_1) * 0x10 +
                       (longlong)(int)(dVar5 * (double)param_1[1]) * (longlong)*param_1 * 0x10 +
                       *(longlong *)(param_1 + 2));
              local_a8 = *puVar1;
              uStack_a0 = puVar1[1];
            }
          }
          else {
            dVar9 = 1.0;
            if (dVar6 <= 1.0) {
              dVar9 = dVar6;
            }
            dVar6 = (double)(~-(ulonglong)(dVar6 < 0.0) & (ulonglong)dVar9);
            dVar9 = 1.0;
            if (dVar5 <= 1.0) {
              dVar9 = dVar5;
            }
            dVar5 = (double)(~-(ulonglong)(dVar5 < 0.0) & (ulonglong)dVar9);
            if (*param_3 != '\0') goto LAB_143be0ee0;
            local_b8 = 0;
            uStack_b0 = 0;
            local_88 = dVar5 * (double)param_1[1];
            local_90 = dVar6 * (double)*param_1;
            FUN_1485ea582(param_1,&local_a8,&local_90,&local_b8);
          }
          lVar4 = *plVar3;
          *(undefined4 *)(lVar4 + lVar8) = (undefined4)local_a8;
          *(undefined4 *)(lVar4 + 4 + lVar8) = local_a8._4_4_;
          *(undefined4 *)(lVar4 + 8 + lVar8) = (undefined4)uStack_a0;
          *(undefined4 *)(lVar4 + 0xc + lVar8) = uStack_a0._4_4_;
          lVar8 = lVar8 + 0x10;
        } while (uVar7 << 4 != lVar8);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143be0fac FUN_143be0fac body=175 status=ok
// SIG undefined FUN_143be0fac(void)

longlong * FUN_143be0fac(longlong *param_1,double param_2,longlong *param_3)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar3 = (longlong *)*param_3;
  if (plVar3 != (longlong *)0x0) {
    uVar2 = *(uint *)(plVar3 + 1);
    FUN_14856dcec(param_1,0);
    plVar4 = (longlong *)*param_1;
    if (*(uint *)(plVar4 + 1) != uVar2) {
      FUN_146bad8b2(plVar4,uVar2,1);
    }
    if (0 < (int)uVar2) {
      uVar5 = 0;
      do {
        *(double *)(*plVar4 + uVar5 * 8) = *(double *)(*plVar3 + uVar5 * 8) * param_2;
        uVar5 = uVar5 + 1;
      } while (uVar2 != uVar5);
    }
  }
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  return param_1;
}



// FUNCTION 143be105c FUN_143be105c body=219 status=ok
// SIG undefined FUN_143be105c(void)

longlong * FUN_143be105c(longlong *param_1,double param_2,longlong *param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar5 = (longlong *)*param_3;
  if (plVar5 != (longlong *)0x0) {
    uVar4 = *(uint *)(plVar5 + 1);
    FUN_14856dde4(param_1,0);
    plVar6 = (longlong *)*param_1;
    if (*(uint *)(plVar6 + 1) != uVar4) {
      FUN_140b463b8(plVar6,uVar4,1);
    }
    if (0 < (int)uVar4) {
      lVar9 = 0;
      do {
        lVar7 = *plVar5;
        dVar2 = *(double *)(lVar7 + 0x10 + lVar9);
        dVar3 = *(double *)(lVar7 + 8 + lVar9);
        lVar8 = *plVar6;
        *(double *)(lVar8 + lVar9) = *(double *)(lVar7 + lVar9) * param_2;
        *(double *)(lVar8 + 8 + lVar9) = dVar3 * param_2;
        *(double *)(lVar8 + 0x10 + lVar9) = dVar2 * param_2;
        lVar9 = lVar9 + 0x18;
      } while ((ulonglong)uVar4 * 0x18 != lVar9);
    }
  }
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  return param_1;
}



// FUNCTION 143be1138 FUN_143be1138 body=92 status=ok
// SIG undefined FUN_143be1138(void)

void FUN_143be1138(double param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  param_2 = (longlong *)*param_2;
  if ((param_2 != (longlong *)0x0) && (lVar2 = param_2[1], 0 < (longlong)(int)lVar2)) {
    lVar3 = 0;
    do {
      lVar1 = *param_2;
      *(double *)(lVar1 + lVar3) = *(double *)(lVar1 + lVar3) * param_1;
      *(double *)(lVar1 + 8 + lVar3) = *(double *)(lVar1 + 8 + lVar3) * param_1;
      *(double *)(lVar1 + 0x10 + lVar3) = *(double *)(lVar1 + 0x10 + lVar3) * param_1;
      lVar3 = lVar3 + 0x18;
    } while ((longlong)(int)lVar2 * 0x18 != lVar3);
  }
  return;
}



// FUNCTION 143be1194 FUN_143be1194 body=271 status=ok
// SIG undefined FUN_143be1194(void)

longlong *
FUN_143be1194(longlong *param_1,longlong *param_2,longlong *param_3,double param_4,double param_5)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar3 = (longlong *)*param_2;
  if ((plVar3 != (longlong *)0x0) && (plVar4 = (longlong *)*param_3, plVar4 != (longlong *)0x0)) {
    uVar2 = *(uint *)(plVar3 + 1);
    if (uVar2 == *(uint *)(plVar4 + 1)) {
      FUN_14856dcec(param_1,0);
      plVar5 = (longlong *)*param_1;
      if (*(uint *)(plVar5 + 1) != uVar2) {
        FUN_146bad8b2(plVar5,uVar2,1);
      }
      if (0 < (int)uVar2) {
        uVar6 = 0;
        do {
          *(double *)(*plVar5 + uVar6 * 8) =
               *(double *)(*plVar3 + uVar6 * 8) * param_4 +
               *(double *)(*plVar4 + uVar6 * 8) * param_5;
          uVar6 = uVar6 + 1;
        } while (uVar2 != uVar6);
      }
    }
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  return param_1;
}



// FUNCTION 143be12a4 FUN_143be12a4 body=134 status=ok
// SIG undefined FUN_143be12a4(void)

void FUN_143be12a4(longlong *param_1,longlong *param_2,double param_3,double param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)*param_1;
  if ((plVar4 != (longlong *)0x0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
    iVar3 = (int)plVar4[1];
    if ((0 < (longlong)iVar3) && (iVar3 == (int)param_2[1])) {
      lVar5 = 0;
      do {
        *(double *)(*param_2 + lVar5 * 8) =
             *(double *)(*plVar4 + lVar5 * 8) * param_3 +
             *(double *)(*param_2 + lVar5 * 8) * param_4;
        lVar5 = lVar5 + 1;
      } while (iVar3 != lVar5);
    }
  }
  plVar4 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x000143be131f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143be132a FUN_143be132a body=271 status=ok
// SIG undefined FUN_143be132a(void)

longlong *
FUN_143be132a(longlong *param_1,longlong *param_2,double param_3,ulonglong param_4,double param_5)

{
  int *piVar1;
  double dVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar4 = (longlong *)*param_2;
  if (plVar4 != (longlong *)0x0) {
    uVar3 = *(uint *)(plVar4 + 1);
    FUN_14856dcec(param_1,0);
    plVar5 = (longlong *)*param_1;
    if (*(uint *)(plVar5 + 1) != uVar3) {
      FUN_146bad8b2(plVar5,uVar3,1);
    }
    if (0 < (int)uVar3) {
      uVar6 = 0;
      do {
        dVar2 = *(double *)(*plVar4 + uVar6 * 8);
        uVar7 = -(ulonglong)(-dVar2 <= dVar2);
        uVar7 = -(ulonglong)
                 (param_5 < (double)(~uVar7 & (ulonglong)-dVar2 | uVar7 & (ulonglong)dVar2));
        *(ulonglong *)(*plVar5 + uVar6 * 8) =
             ~uVar7 & param_4 | (ulonglong)(param_3 / dVar2) & uVar7;
        uVar6 = uVar6 + 1;
      } while (uVar3 != uVar6);
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
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
  return param_1;
}



// FUNCTION 143be143a FUN_143be143a body=254 status=ok
// SIG undefined FUN_143be143a(void)

longlong * FUN_143be143a(longlong *param_1,longlong *param_2,longlong *param_3,double param_4)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar3 = (longlong *)*param_2;
  if ((plVar3 != (longlong *)0x0) && (plVar4 = (longlong *)*param_3, plVar4 != (longlong *)0x0)) {
    uVar2 = *(uint *)(plVar3 + 1);
    if (uVar2 == *(uint *)(plVar4 + 1)) {
      FUN_14856dcec(param_1,0);
      plVar5 = (longlong *)*param_1;
      if (*(uint *)(plVar5 + 1) != uVar2) {
        FUN_146bad8b2(plVar5,uVar2,1);
      }
      if (0 < (int)uVar2) {
        uVar6 = 0;
        do {
          *(double *)(*plVar5 + uVar6 * 8) =
               *(double *)(*plVar3 + uVar6 * 8) * param_4 * *(double *)(*plVar4 + uVar6 * 8);
          uVar6 = uVar6 + 1;
        } while (uVar2 != uVar6);
      }
    }
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  return param_1;
}



// FUNCTION 143be1538 FUN_143be1538 body=126 status=ok
// SIG undefined FUN_143be1538(void)

void FUN_143be1538(longlong *param_1,longlong *param_2,double param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)*param_1;
  if ((plVar4 != (longlong *)0x0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
    iVar3 = (int)plVar4[1];
    if ((0 < (longlong)iVar3) && (iVar3 == (int)param_2[1])) {
      lVar5 = 0;
      do {
        *(double *)(*param_2 + lVar5 * 8) =
             *(double *)(*plVar4 + lVar5 * 8) * param_3 * *(double *)(*param_2 + lVar5 * 8);
        lVar5 = lVar5 + 1;
      } while (iVar3 != lVar5);
    }
  }
  plVar4 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x000143be15ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143be15b6 FUN_143be15b6 body=298 status=ok
// SIG undefined FUN_143be15b6(void)

longlong * FUN_143be15b6(longlong *param_1,longlong *param_2,longlong *param_3,double param_4)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  double dVar12;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar5 = (longlong *)*param_2;
  if ((plVar5 != (longlong *)0x0) && (plVar6 = (longlong *)*param_3, plVar6 != (longlong *)0x0)) {
    uVar4 = *(uint *)(plVar5 + 1);
    if (uVar4 == *(uint *)(plVar6 + 1)) {
      FUN_14856dde4(param_1,0);
      plVar7 = (longlong *)*param_1;
      if (*(uint *)(plVar7 + 1) != uVar4) {
        FUN_140b463b8(plVar7,uVar4,1);
      }
      if (0 < (int)uVar4) {
        lVar10 = 2;
        uVar11 = 0;
        do {
          lVar8 = *plVar6;
          dVar12 = *(double *)(*plVar5 + uVar11 * 8) * param_4;
          dVar2 = *(double *)(lVar8 + lVar10 * 8);
          dVar3 = *(double *)(lVar8 + -8 + lVar10 * 8);
          lVar9 = *plVar7;
          *(double *)(lVar9 + -0x10 + lVar10 * 8) = dVar12 * *(double *)(lVar8 + -0x10 + lVar10 * 8)
          ;
          *(double *)(lVar9 + -8 + lVar10 * 8) = dVar3 * dVar12;
          *(double *)(lVar9 + lVar10 * 8) = dVar2 * dVar12;
          uVar11 = uVar11 + 1;
          lVar10 = lVar10 + 3;
        } while (uVar4 != uVar11);
      }
    }
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  return param_1;
}



// FUNCTION 143be16e0 FUN_143be16e0 body=172 status=ok
// SIG undefined FUN_143be16e0(void)

void FUN_143be16e0(longlong *param_1,longlong *param_2,double param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  
  plVar4 = (longlong *)*param_1;
  if ((plVar4 != (longlong *)0x0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
    iVar3 = (int)plVar4[1];
    if ((0 < (longlong)iVar3) && (iVar3 == (int)param_2[1])) {
      lVar6 = 0x10;
      lVar7 = 0;
      do {
        lVar5 = *param_2;
        dVar8 = *(double *)(*plVar4 + lVar7 * 8) * param_3;
        *(double *)(lVar5 + -0x10 + lVar6) = dVar8 * *(double *)(lVar5 + -0x10 + lVar6);
        *(double *)(lVar5 + -8 + lVar6) = *(double *)(lVar5 + -8 + lVar6) * dVar8;
        *(double *)(lVar5 + lVar6) = *(double *)(lVar5 + lVar6) * dVar8;
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0x18;
      } while (iVar3 != lVar7);
    }
  }
  plVar4 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x000143be1781. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143be178c FUN_143be178c body=345 status=ok
// SIG undefined FUN_143be178c(void)

longlong *
FUN_143be178c(longlong *param_1,longlong *param_2,longlong *param_3,double param_4,double param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar7 = (longlong *)*param_2;
  if ((plVar7 != (longlong *)0x0) && (plVar8 = (longlong *)*param_3, plVar8 != (longlong *)0x0)) {
    uVar6 = *(uint *)(plVar7 + 1);
    if (uVar6 == *(uint *)(plVar8 + 1)) {
      FUN_14856dde4(param_1,0);
      plVar9 = (longlong *)*param_1;
      if (*(uint *)(plVar9 + 1) != uVar6) {
        FUN_140b463b8(plVar9,uVar6,1);
      }
      if (0 < (int)uVar6) {
        lVar13 = 0;
        do {
          lVar10 = *plVar8;
          lVar11 = *plVar7;
          dVar2 = *(double *)(lVar11 + 0x10 + lVar13);
          dVar3 = *(double *)(lVar11 + 8 + lVar13);
          dVar4 = *(double *)(lVar10 + 0x10 + lVar13);
          dVar5 = *(double *)(lVar10 + 8 + lVar13);
          lVar12 = *plVar9;
          *(double *)(lVar12 + lVar13) =
               *(double *)(lVar10 + lVar13) * param_5 + *(double *)(lVar11 + lVar13) * param_4;
          *(double *)(lVar12 + 8 + lVar13) = dVar5 * param_5 + dVar3 * param_4;
          *(double *)(lVar12 + 0x10 + lVar13) = dVar4 * param_5 + dVar2 * param_4;
          lVar13 = lVar13 + 0x18;
        } while ((ulonglong)uVar6 * 0x18 != lVar13);
      }
    }
  }
  plVar7 = (longlong *)param_2[1];
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
  }
  plVar7 = (longlong *)param_3[1];
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
  }
  return param_1;
}



// FUNCTION 143be18e6 FUN_143be18e6 body=221 status=ok
// SIG undefined FUN_143be18e6(void)

void FUN_143be18e6(longlong *param_1,longlong *param_2,double param_3,double param_4)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  plVar6 = (longlong *)*param_1;
  if ((plVar6 != (longlong *)0x0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
    iVar5 = (int)plVar6[1];
    if ((0 < (longlong)iVar5) && (iVar5 == (int)param_2[1])) {
      lVar9 = 0;
      do {
        lVar7 = *param_2;
        lVar8 = *plVar6;
        dVar3 = *(double *)(lVar8 + 0x10 + lVar9);
        dVar4 = *(double *)(lVar8 + 8 + lVar9);
        *(double *)(lVar7 + lVar9) =
             *(double *)(lVar7 + lVar9) * param_4 + *(double *)(lVar8 + lVar9) * param_3;
        *(double *)(lVar7 + 8 + lVar9) = *(double *)(lVar7 + 8 + lVar9) * param_4 + dVar4 * param_3;
        *(double *)(lVar7 + 0x10 + lVar9) =
             *(double *)(lVar7 + 0x10 + lVar9) * param_4 + dVar3 * param_3;
        lVar9 = lVar9 + 0x18;
      } while ((longlong)iVar5 * 0x18 != lVar9);
    }
  }
  plVar6 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x000143be19b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143be19c4 FUN_143be19c4 body=340 status=ok
// SIG undefined FUN_143be19c4(void)

longlong * FUN_143be19c4(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar9 = (longlong *)*param_2;
  if ((plVar9 != (longlong *)0x0) && (plVar10 = (longlong *)*param_3, plVar10 != (longlong *)0x0)) {
    uVar8 = *(uint *)(plVar9 + 1);
    if (uVar8 == *(uint *)(plVar10 + 1)) {
      FUN_14856dde4(param_1,0);
      plVar11 = (longlong *)*param_1;
      if (*(uint *)(plVar11 + 1) != uVar8) {
        FUN_140b463b8(plVar11,uVar8,1);
      }
      if (0 < (int)uVar8) {
        lVar14 = 0;
        do {
          lVar12 = *plVar10;
          lVar13 = *plVar9;
          dVar2 = *(double *)(lVar12 + lVar14);
          dVar3 = *(double *)(lVar12 + 8 + lVar14);
          dVar4 = *(double *)(lVar13 + lVar14);
          dVar5 = *(double *)(lVar13 + 8 + lVar14);
          dVar6 = *(double *)(lVar13 + 0x10 + lVar14);
          dVar7 = *(double *)(lVar12 + 0x10 + lVar14);
          lVar12 = *plVar11;
          *(double *)(lVar12 + lVar14) = dVar5 * dVar7 - dVar3 * dVar6;
          *(double *)(lVar12 + 8 + lVar14) = dVar2 * dVar6 - dVar4 * dVar7;
          *(double *)(lVar12 + 0x10 + lVar14) = dVar4 * dVar3 - dVar2 * dVar5;
          lVar14 = lVar14 + 0x18;
        } while ((ulonglong)uVar8 * 0x18 != lVar14);
      }
    }
  }
  plVar9 = (longlong *)param_2[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar9 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  plVar9 = (longlong *)param_3[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar9 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  return param_1;
}



// FUNCTION 143be1b18 FUN_143be1b18 body=279 status=ok
// SIG undefined FUN_143be1b18(void)

longlong * FUN_143be1b18(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar3 = (longlong *)*param_2;
  if ((plVar3 != (longlong *)0x0) && (plVar4 = (longlong *)*param_3, plVar4 != (longlong *)0x0)) {
    uVar2 = *(uint *)(plVar3 + 1);
    if (uVar2 == *(uint *)(plVar4 + 1)) {
      FUN_14856dcec(param_1,0);
      plVar5 = (longlong *)*param_1;
      if (*(uint *)(plVar5 + 1) != uVar2) {
        FUN_146bad8b2(plVar5,uVar2,1);
      }
      if (0 < (int)uVar2) {
        lVar8 = 2;
        uVar9 = 0;
        do {
          lVar6 = *plVar4;
          lVar7 = *plVar3;
          *(double *)(*plVar5 + uVar9 * 8) =
               *(double *)(lVar7 + lVar8 * 8) * *(double *)(lVar6 + lVar8 * 8) +
               *(double *)(lVar7 + -0x10 + lVar8 * 8) * *(double *)(lVar6 + -0x10 + lVar8 * 8) +
               *(double *)(lVar7 + -8 + lVar8 * 8) * *(double *)(lVar6 + -8 + lVar8 * 8);
          uVar9 = uVar9 + 1;
          lVar8 = lVar8 + 3;
        } while (uVar2 != uVar9);
      }
    }
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  return param_1;
}



// FUNCTION 143be1c30 FUN_143be1c30 body=967 status=ok
// SIG undefined FUN_143be1c30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143be1c30(longlong *param_1,double *param_2,char param_3)

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [16];
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double *pdVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  auVar8 = _DAT_149934d80;
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    pdVar9 = (double *)*param_1;
    iVar4 = (int)param_1[1];
    pdVar1 = pdVar9 + (longlong)iVar4 * 3;
    if (param_3 == '\0') {
      if (iVar4 != 0) {
        do {
          dVar7 = *pdVar9;
          dVar10 = pdVar9[1];
          dVar12 = *param_2;
          dVar5 = -dVar12;
          dVar6 = -param_2[1];
          dVar13 = param_2[2] * -1.0;
          dVar14 = param_2[3] * 1.0;
          dVar17 = dVar10 * dVar5 - dVar7 * dVar6;
          dVar15 = pdVar9[2] * dVar6 - dVar10 * dVar13;
          dVar16 = dVar7 * dVar13 - dVar5 * pdVar9[2];
          dVar15 = dVar15 + dVar15;
          dVar16 = dVar16 + dVar16;
          dVar17 = dVar17 + dVar17;
          auVar3 = *(undefined1 (*) [16])(param_2 + 8);
          auVar11 = divpd(auVar8,auVar3);
          dVar2 = param_2[10];
          *pdVar9 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) & auVar11._0_8_)
                    * ((dVar17 * dVar6 - dVar16 * dVar13) + dVar14 * dVar15 + dVar7);
          pdVar9[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_)) &
                              auVar11._8_8_) *
                      (dVar12 * dVar17 + dVar13 * dVar15 + dVar14 * dVar16 + dVar10);
          pdVar9[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar2)) &
                              (ulonglong)(1.0 / dVar2)) *
                      (dVar14 * dVar17 + pdVar9[2] + (dVar16 * dVar5 - dVar15 * dVar6));
          pdVar9 = pdVar9 + 3;
        } while (pdVar9 != pdVar1);
      }
    }
    else if (iVar4 != 0) {
      do {
        dVar5 = *pdVar9 - param_2[4];
        dVar6 = pdVar9[1] - param_2[5];
        dVar10 = pdVar9[2] - param_2[6];
        dVar7 = *param_2;
        dVar15 = -dVar7;
        dVar16 = -param_2[1];
        dVar13 = param_2[2] * -1.0;
        dVar14 = param_2[3] * 1.0;
        dVar12 = dVar5 * dVar13 - dVar15 * dVar10;
        dVar17 = dVar6 * dVar15 - dVar5 * dVar16;
        dVar18 = dVar10 * dVar16 - dVar6 * dVar13;
        dVar18 = dVar18 + dVar18;
        dVar12 = dVar12 + dVar12;
        dVar17 = dVar17 + dVar17;
        auVar3 = *(undefined1 (*) [16])(param_2 + 8);
        auVar11 = divpd(auVar8,auVar3);
        dVar2 = param_2[10];
        *pdVar9 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) & auVar11._0_8_) *
                  ((dVar17 * dVar16 - dVar12 * dVar13) + dVar14 * dVar18 + dVar5);
        pdVar9[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_)) & auVar11._8_8_)
                    * (dVar7 * dVar17 + dVar13 * dVar18 + dVar14 * dVar12 + dVar6);
        pdVar9[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar2)) &
                            (ulonglong)(1.0 / dVar2)) *
                    (dVar14 * dVar17 + dVar10 + (dVar12 * dVar15 - dVar18 * dVar16));
        pdVar9 = pdVar9 + 3;
      } while (pdVar9 != pdVar1);
    }
  }
  return;
}



// FUNCTION 143be1ff8 FUN_143be1ff8 body=207 status=ok
// SIG undefined FUN_143be1ff8(void)

longlong * FUN_143be1ff8(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar5 = (longlong *)*param_2;
  if (plVar5 != (longlong *)0x0) {
    uVar4 = *(uint *)(plVar5 + 1);
    FUN_14856dcec(param_1,0);
    plVar6 = (longlong *)*param_1;
    if (*(uint *)(plVar6 + 1) != uVar4) {
      FUN_146bad8b2(plVar6,uVar4,1);
    }
    if (0 < (int)uVar4) {
      lVar8 = 0x10;
      uVar9 = 0;
      do {
        lVar7 = *plVar5;
        dVar2 = *(double *)(lVar7 + -0x10 + lVar8);
        dVar3 = *(double *)(lVar7 + -8 + lVar8);
        *(double *)(*plVar6 + uVar9 * 8) =
             SQRT(*(double *)(lVar7 + lVar8) * *(double *)(lVar7 + lVar8) +
                  dVar2 * dVar2 + dVar3 * dVar3);
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x18;
      } while (uVar4 != uVar9);
    }
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  return param_1;
}



// FUNCTION 143be20c8 FUN_143be20c8 body=212 status=ok
// SIG undefined FUN_143be20c8(void)

void FUN_143be20c8(longlong *param_1,double *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  param_1 = (longlong *)*param_1;
  if ((param_1 != (longlong *)0x0) && (lVar2 = param_1[1], 0 < (longlong)(int)lVar2)) {
    lVar3 = 0;
    do {
      lVar1 = *param_1;
      dVar4 = *(double *)(lVar1 + lVar3);
      dVar5 = *(double *)(lVar1 + 8 + lVar3);
      dVar6 = *(double *)(lVar1 + 0x10 + lVar3);
      dVar7 = dVar6 * dVar6 + dVar4 * dVar4 + dVar5 * dVar5;
      if ((dVar7 != 1.0) || (NAN(dVar7))) {
        if (9.99999993922529e-09 <= dVar7) {
          dVar7 = 1.0 / SQRT(dVar7);
          dVar6 = dVar6 * dVar7;
          dVar5 = dVar5 * dVar7;
          dVar4 = dVar4 * dVar7;
        }
        else {
          dVar4 = *param_2;
          dVar5 = param_2[1];
          dVar6 = param_2[2];
        }
      }
      *(double *)(lVar1 + lVar3) = dVar4;
      *(double *)(lVar1 + 8 + lVar3) = dVar5;
      *(double *)(lVar1 + 0x10 + lVar3) = dVar6;
      lVar3 = lVar3 + 0x18;
    } while ((longlong)(int)lVar2 * 0x18 != lVar3);
  }
  return;
}



// FUNCTION 143be219c FUN_143be219c body=173 status=ok
// SIG undefined FUN_143be219c(void)

void FUN_143be219c(undefined8 *param_1,double *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  
  param_1 = (undefined8 *)*param_1;
  if ((param_1 != (undefined8 *)0x0) && ((longlong)*(int *)(param_1 + 1) != 0)) {
    pdVar5 = (double *)*param_1;
    pdVar1 = pdVar5 + (longlong)*(int *)(param_1 + 1) * 3;
    do {
      dVar2 = param_2[1];
      dVar3 = param_2[2];
      dVar4 = (dVar3 * pdVar5[2] + *param_2 * *pdVar5 + dVar2 * pdVar5[1]) - param_2[3];
      *pdVar5 = *pdVar5 - dVar4 * *param_2;
      pdVar5[1] = pdVar5[1] - dVar2 * dVar4;
      pdVar5[2] = pdVar5[2] - dVar3 * dVar4;
      pdVar5 = pdVar5 + 3;
    } while (pdVar5 != pdVar1);
  }
  return;
}



// FUNCTION 143be224a FUN_143be224a body=239 status=ok
// SIG undefined FUN_143be224a(void)

longlong *
FUN_143be224a(longlong *param_1,longlong *param_2,double param_3,double param_4,double param_5)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar3 = (longlong *)*param_2;
  if (plVar3 != (longlong *)0x0) {
    uVar2 = *(uint *)(plVar3 + 1);
    FUN_14856dcec(param_1,0);
    plVar4 = (longlong *)*param_1;
    if (*(uint *)(plVar4 + 1) != uVar2) {
      FUN_146bad8b2(plVar4,uVar2,1);
    }
    if (0 < (int)uVar2) {
      lVar6 = 0x10;
      uVar7 = 0;
      do {
        lVar5 = *plVar3;
        *(double *)(*plVar4 + uVar7 * 8) =
             *(double *)(lVar5 + lVar6) * param_5 +
             *(double *)(lVar5 + -0x10 + lVar6) * param_3 +
             *(double *)(lVar5 + -8 + lVar6) * param_4;
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x18;
      } while (uVar2 != uVar7);
    }
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  return param_1;
}



// FUNCTION 143be233a FUN_143be233a body=559 status=ok
// SIG undefined FUN_143be233a(void)

void FUN_143be233a(longlong *param_1,double *param_2,char param_3)

{
  undefined1 (*pauVar1) [16];
  double dVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 (*pauVar9) [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    pauVar9 = (undefined1 (*) [16])*param_1;
    iVar3 = (int)param_1[1];
    pauVar1 = (undefined1 (*) [16])((longlong)pauVar9 + (longlong)iVar3 * 0x18);
    if (param_3 == '\0') {
      if (iVar3 != 0) {
        do {
          dVar10 = *(double *)*pauVar9 * param_2[8];
          dVar16 = *(double *)(*pauVar9 + 8) * param_2[9];
          dVar11 = *(double *)pauVar9[1] * param_2[10];
          dVar6 = *param_2;
          dVar7 = param_2[1];
          dVar8 = param_2[2];
          dVar2 = param_2[3];
          dVar13 = dVar16 * dVar6 - dVar10 * dVar7;
          dVar12 = dVar11 * dVar7 - dVar16 * dVar8;
          dVar14 = dVar10 * dVar8 - dVar6 * dVar11;
          dVar12 = dVar12 + dVar12;
          dVar14 = dVar14 + dVar14;
          dVar13 = dVar13 + dVar13;
          dVar16 = (dVar8 * dVar12 - dVar6 * dVar13) + param_2[3] * dVar14 + dVar16;
          auVar5._8_4_ = SUB84(dVar16,0);
          auVar5._0_8_ = (dVar13 * dVar7 - dVar14 * dVar8) + dVar2 * dVar12 + dVar10;
          auVar5._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
          *pauVar9 = auVar5;
          *(double *)pauVar9[1] = dVar13 * dVar2 + dVar11 + (dVar14 * dVar6 - dVar12 * dVar7);
          pauVar9 = (undefined1 (*) [16])(pauVar9[1] + 8);
        } while (pauVar9 != pauVar1);
      }
    }
    else if (iVar3 != 0) {
      do {
        dVar12 = *(double *)*pauVar9 * param_2[8];
        dVar13 = *(double *)(*pauVar9 + 8) * param_2[9];
        dVar10 = *(double *)pauVar9[1] * param_2[10];
        dVar7 = *param_2;
        dVar8 = param_2[1];
        dVar11 = param_2[2];
        dVar2 = param_2[3];
        dVar14 = dVar13 * dVar7 - dVar12 * dVar8;
        dVar15 = dVar10 * dVar8 - dVar13 * dVar11;
        dVar16 = dVar12 * dVar11 - dVar7 * dVar10;
        dVar15 = dVar15 + dVar15;
        dVar16 = dVar16 + dVar16;
        dVar14 = dVar14 + dVar14;
        dVar6 = (dVar11 * dVar15 - dVar7 * dVar14) + param_2[3] * dVar16 + dVar13 + param_2[5];
        dVar13 = param_2[6];
        auVar4._8_4_ = SUB84(dVar6,0);
        auVar4._0_8_ = (dVar14 * dVar8 - dVar16 * dVar11) + dVar2 * dVar15 + dVar12 + param_2[4];
        auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        *pauVar9 = auVar4;
        *(double *)pauVar9[1] = dVar14 * dVar2 + dVar10 + (dVar16 * dVar7 - dVar15 * dVar8) + dVar13
        ;
        pauVar9 = (undefined1 (*) [16])(pauVar9[1] + 8);
      } while (pauVar9 != pauVar1);
    }
  }
  return;
}



// FUNCTION 143be2569 FUN_143be2569 body=55 status=ok
// SIG undefined FUN_143be2569(void)

void FUN_143be2569(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb501c8 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb501c8 = FUN_14171c317(FUN_1464a3579,uVar1,L"EDistanceFieldComputeMode");
  }
  return;
}



// FUNCTION 143be25a0 FUN_143be25a0 body=55 status=ok
// SIG undefined FUN_143be25a0(void)

void FUN_143be25a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb501e0 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb501e0 = FUN_14171c317(FUN_1464a35a8,uVar1,L"EDistanceFieldUnits");
  }
  return;
}



// FUNCTION 143be277c FUN_143be277c body=231 status=ok
// SIG undefined FUN_143be277c(void)

void FUN_143be277c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_1;
  cVar2 = FUN_143ba9b82(uVar1);
  local_38 = param_2;
  if (cVar2 == '\x03') {
    local_40 = param_1[1];
    local_28 = &local_40;
    local_30 = FUN_143be28d4;
    FUN_143bae282(uVar1,param_2,&local_30,0);
  }
  else if (cVar2 == '\0') {
    local_40 = param_1[1];
    local_28 = &local_40;
    local_30 = FUN_143be2864;
    FUN_143bad420(uVar1,param_2,&local_30,0);
  }
  else {
    local_40 = param_1[1];
    local_28 = &local_40;
    local_30 = FUN_143be29b0;
    FUN_143bac7da(uVar1,param_2,&local_30,0);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be2864 FUN_143be2864 body=110 status=ok
// SIG undefined FUN_143be2864(void)

void FUN_143be2864(undefined8 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)(*param_2 >> 9) * 8);
  uVar3 = (ulonglong)(*param_2 & 0x1ff);
  local_18 = *(undefined8 *)(lVar2 + 0x10 + uVar3 * 0x18);
  puVar1 = (undefined4 *)(lVar2 + uVar3 * 0x18);
  local_28 = *puVar1;
  uStack_24 = puVar1[1];
  uStack_20 = puVar1[2];
  uStack_1c = puVar1[3];
  FUN_146ba5262(*param_1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be28d4 FUN_143be28d4 body=219 status=ok
// SIG undefined FUN_143be28d4(void)

void FUN_143be28d4(undefined8 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + (ulonglong)(*param_2 >> 9) * 8) +
           (ulonglong)((*param_2 & 0x1ff) << 4));
  lVar2 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (uVar3 >> 9 & 0x7fffff) * 8);
  local_38 = *(undefined8 *)(lVar2 + 0x10 + (uVar3 & 0x1ff) * 0x18);
  puVar1 = (undefined4 *)(lVar2 + (uVar3 & 0x1ff) * 0x18);
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  FUN_146ba5262(*param_1,&local_48);
  lVar2 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (uVar3 >> 0x29) * 8);
  uVar3 = uVar3 >> 0x20 & 0x1ff;
  local_38 = *(undefined8 *)(lVar2 + 0x10 + uVar3 * 0x18);
  puVar1 = (undefined4 *)(lVar2 + uVar3 * 0x18);
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  FUN_146ba5262(*param_1,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be29b0 FUN_143be29b0 body=160 status=ok
// SIG undefined FUN_143be29b0(void)

void FUN_143be29b0(undefined8 *param_1,undefined4 *param_2)

{
  double *pdVar1;
  double dVar2;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pdVar1 = (double *)*param_1;
  FUN_146c14aac(param_1[1],&local_48,*param_2);
  dVar2 = *pdVar1;
  if (local_48 <= *pdVar1) {
    dVar2 = local_48;
  }
  *pdVar1 = dVar2;
  dVar2 = pdVar1[1];
  if (local_40 <= pdVar1[1]) {
    dVar2 = local_40;
  }
  pdVar1[1] = dVar2;
  dVar2 = pdVar1[2];
  if (local_38 <= pdVar1[2]) {
    dVar2 = local_38;
  }
  pdVar1[2] = dVar2;
  dVar2 = pdVar1[3];
  if (pdVar1[3] <= local_30) {
    dVar2 = local_30;
  }
  pdVar1[3] = dVar2;
  dVar2 = pdVar1[4];
  if (pdVar1[4] <= local_28) {
    dVar2 = local_28;
  }
  pdVar1[4] = dVar2;
  dVar2 = pdVar1[5];
  if (pdVar1[5] <= local_20) {
    dVar2 = local_20;
  }
  pdVar1[5] = dVar2;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be2a52 FUN_143be2a52 body=884 status=ok
// SIG undefined FUN_143be2a52(void)

void FUN_143be2a52(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  byte bVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_1f8 [40];
  undefined8 *local_1d0;
  uint local_1c8;
  uint uStack_1c4;
  undefined8 uStack_1c0;
  longlong *local_1b8;
  longlong *local_1a8;
  longlong *plStack_1a0;
  undefined1 local_198;
  code *local_188;
  longlong **local_180;
  longlong local_178 [3];
  longlong *local_160;
  longlong local_158;
  undefined4 local_150;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_178[0] = 0;
  local_178[1] = 0;
  local_180 = &local_160;
  local_188 = FUN_143be2dc8;
  local_160 = local_178;
  FUN_143bac7da(*param_1,param_2,&local_188,0);
  FUN_146c6a7a4(&local_160,param_2,local_178,0);
  bVar8 = FUN_146c6abd6(&local_160);
  *(byte *)param_1[1] = bVar8 ^ 1;
  *(undefined4 *)param_1[2] = local_150;
  iVar10 = *(int *)param_1[2];
  if (-1 < iVar10) {
    if (*(int *)(param_1[3] + 0xc) < iVar10) {
      FUN_1485eab5e();
      iVar10 = *(int *)param_1[2];
      if (iVar10 < 0) goto LAB_143be2dbf;
    }
    if (*(int *)(param_1[4] + 0xc) < iVar10) {
      FUN_1485eabce();
      iVar10 = *(int *)param_1[2];
    }
    if (0 < iVar10) {
      lVar14 = 0;
      local_1d0 = param_1;
      do {
        lVar13 = local_158;
        local_1a8 = (longlong *)0x0;
        plStack_1a0 = (longlong *)0x0;
        local_198 = 0;
        FUN_14858f506(&local_1a8,0);
        local_198 = 1;
        iVar10 = *(int *)(lVar13 + 0x10 + lVar14 * 0x40);
        if (iVar10 < 0) goto LAB_143be2dbf;
        lVar13 = lVar13 + lVar14 * 0x40;
        plVar11 = (longlong *)(lVar13 + 8);
        if (*(int *)((longlong)local_1a8 + 0xc) < iVar10) {
          FUN_1447a8aa0();
          iVar10 = *(int *)(lVar13 + 0x10);
        }
        if (iVar10 != 0) {
          lVar5 = *plVar11;
          lVar12 = 0;
          do {
            plVar2 = local_1a8;
            lVar6 = *(longlong *)
                     (*(longlong *)(param_2 + 0x10) +
                     (ulonglong)(*(uint *)(lVar5 + lVar12) >> 9) * 8);
            uVar9 = (ulonglong)(*(uint *)(lVar5 + lVar12) & 0x1ff);
            local_1b8 = *(longlong **)(lVar6 + 0x10 + uVar9 * 0x18);
            puVar3 = (uint *)(lVar6 + uVar9 * 0x18);
            local_1c8 = *puVar3;
            uStack_1c4 = puVar3[1];
            uStack_1c0._0_4_ = puVar3[2];
            uStack_1c0._4_4_ = puVar3[3];
            iVar4 = (int)local_1a8[1];
            *(uint *)(local_1a8 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)local_1a8 + 0xc) < iVar4 + 1U) {
              FUN_1403e3958(local_1a8,iVar4);
            }
            lVar6 = *plVar2;
            *(longlong **)(lVar6 + 0x10 + (longlong)iVar4 * 0x18) = local_1b8;
            puVar3 = (uint *)(lVar6 + (longlong)iVar4 * 0x18);
            *puVar3 = local_1c8;
            puVar3[1] = uStack_1c4;
            puVar3[2] = (uint)uStack_1c0;
            puVar3[3] = uStack_1c0._4_4_;
            lVar12 = lVar12 + 4;
          } while ((longlong)iVar10 * 4 != lVar12);
        }
        local_1c8 = local_1c8 & 0xffffff00;
        uStack_1c0 = (longlong *)0x0;
        local_1b8 = (longlong *)0x0;
        FUN_14856da48(&local_1c8,3,0);
        plVar2 = uStack_1c0;
        if (uStack_1c0 != plVar11) {
          if (*uStack_1c0 != 0) {
            FUN_1400020a8();
          }
          *plVar2 = *plVar11;
          *plVar11 = 0;
          *(undefined4 *)(plVar2 + 1) = *(undefined4 *)(lVar13 + 0x10);
          *(undefined4 *)((longlong)plVar2 + 0xc) = *(undefined4 *)(lVar13 + 0x14);
          *(undefined8 *)(lVar13 + 0x10) = 0;
        }
        puVar7 = local_1d0;
        plVar11 = (longlong *)local_1d0[4];
        iVar10 = (int)plVar11[1];
        lVar13 = (longlong)iVar10;
        *(uint *)(plVar11 + 1) = iVar10 + 1U;
        if (*(uint *)((longlong)plVar11 + 0xc) < iVar10 + 1U) {
          FUN_1485eac3e(plVar11,iVar10);
        }
        lVar5 = *plVar11;
        *(longlong **)(lVar5 + lVar13 * 0x18) = local_1a8;
        *(longlong **)(lVar5 + 8 + lVar13 * 0x18) = plStack_1a0;
        if (plStack_1a0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_1a0 + 1) = (int)plStack_1a0[1] + 1;
          UNLOCK();
        }
        *(undefined1 *)(lVar5 + lVar13 * 0x18 + 0x10) = local_198;
        plVar11 = (longlong *)puVar7[3];
        iVar10 = (int)plVar11[1];
        lVar13 = (longlong)iVar10;
        *(uint *)(plVar11 + 1) = iVar10 + 1U;
        if (*(uint *)((longlong)plVar11 + 0xc) < iVar10 + 1U) {
          FUN_1485eacd2(plVar11,iVar10);
        }
        plVar2 = local_1b8;
        lVar5 = *plVar11;
        *(undefined1 *)(lVar5 + lVar13 * 0x18) = (undefined1)local_1c8;
        *(longlong **)(lVar5 + 8 + lVar13 * 0x18) = uStack_1c0;
        *(longlong **)(lVar5 + 0x10 + lVar13 * 0x18) = local_1b8;
        if (local_1b8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1b8 + 1) = (int)local_1b8[1] + 1;
          UNLOCK();
          if (local_1b8 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_1b8 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*local_1b8)(local_1b8);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
        }
        plVar11 = plStack_1a0;
        if (plStack_1a0 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_1a0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_1a0)(plStack_1a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < *(int *)puVar7[2]);
    }
    FUN_146bc7b3e(&local_160);
    if (local_178[0] != 0) {
      FUN_1400020a8();
    }
    if ((local_60 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_143be2dbf:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar10);
}



// FUNCTION 143be2dc8 FUN_143be2dc8 body=51 status=ok
// SIG undefined FUN_143be2dc8(void)

void FUN_143be2dc8(longlong *param_1,undefined4 *param_2)

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



// FUNCTION 143be2dfc FUN_143be2dfc body=173 status=ok
// SIG undefined FUN_143be2dfc(void)

void FUN_143be2dfc(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  undefined1 auStack_2f8 [47];
  undefined1 local_2c9;
  undefined1 *local_2c8;
  undefined1 *local_2c0;
  undefined1 local_2b8 [336];
  undefined4 local_168;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  FUN_1482c3c14(local_2b8);
  local_168 = 2;
  local_2c0 = &local_2c9;
  local_2c8 = &LAB_148401e18;
  dVar1 = 1e-05;
  if (1e-05 <= (double)*(float *)*param_1) {
    dVar1 = (double)*(float *)*param_1;
  }
  FUN_1482c3e64(local_2b8,dVar1);
  if (*(char *)(*param_1 + 4) == '\x01') {
    FUN_146c09afc(param_2,0);
  }
  FUN_1482fed12(local_2b8);
  if ((local_20 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be2eaa FUN_143be2eaa body=567 status=ok
// SIG undefined FUN_143be2eaa(void)

void FUN_143be2eaa(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  code *local_d8 [2];
  undefined8 local_c8;
  undefined **local_b8;
  code *local_b0;
  undefined **local_98;
  undefined4 local_90;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [4];
  double local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 != 0) {
    pbVar4 = (byte *)*param_1;
    if (*pbVar4 == 1) {
      if (*(char *)(param_2 + 0x1a8) != '\0') {
        bVar6 = 1;
LAB_143be2fd0:
        if ((bVar6 & 1) == 0) {
          uVar2 = *(undefined8 *)
                   (*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x60) +
                   (longlong)*(int *)(pbVar4 + 4) * 8);
          puVar5 = (undefined8 *)FUN_14001cc68(0x170,0x10);
          FUN_1482aa63a(puVar5,param_2,uVar2,1);
        }
        else {
          puVar5 = (undefined8 *)FUN_14001cc68(0x170,0x10);
          FUN_1482aa55c(puVar5,param_2,1);
        }
        local_c8 = 0;
        local_b8 = &PTR_LAB_14aee5540;
        local_b0 = FUN_148266949;
        local_d8[0] = FUN_148483c38;
        FUN_1485ead66(&local_98,param_2,puVar5);
        local_38 = (double)*(float *)param_1[2];
        FUN_148326618(&local_98);
        if (*(char *)(param_1[2] + 4) == '\x01') {
          FUN_146c09afc(param_2,0);
        }
        local_98 = &PTR_FUN_14afa41b0;
        if (local_78 != 0) {
          if (local_68 == (longlong *)0x0) {
            local_68 = local_58;
          }
          (**(code **)(*local_68 + 0x10))();
        }
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5,1);
        }
        goto LAB_143be2fa4;
      }
    }
    else {
      iVar1 = *(int *)(pbVar4 + 4);
      if ((-1 < iVar1) && (*(longlong **)(param_2 + 0x208) != (longlong *)0x0)) {
        iVar3 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xc0))();
        if (iVar1 < iVar3) {
          pbVar4 = (byte *)*param_1;
          bVar6 = *pbVar4;
          goto LAB_143be2fd0;
        }
      }
    }
  }
  local_98 = (undefined **)0x14afa4150;
  local_90 = 0x2e;
  FUN_1446e940c(local_dc,&local_98);
  local_98 = (undefined **)0x14af7eb90;
  local_90 = 0x2c;
  FUN_1446e940c(local_e0,&local_98);
  local_98 = (undefined **)0x14afa40c0;
  local_90 = 0x47;
  FUN_140208c1e(local_d8,local_e0,local_dc,&local_98);
  FUN_143ba90d7(*(undefined8 *)param_1[1],2,local_d8);
  if (local_d8[0] != (code *)0x0) {
    (**(code **)(*(longlong *)local_d8[0] + 0x10))();
  }
LAB_143be2fa4:
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be30e2 FUN_143be30e2 body=184 status=ok
// SIG undefined FUN_143be30e2(void)

void FUN_143be30e2(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_10;
  uint3 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = (char *)*param_1;
  if (*pcVar1 == '\x01') {
    local_10 = *(undefined4 *)pcVar1;
    uStack_c = (uint3)((uint)*(undefined4 *)(pcVar1 + 3) >> 8);
    local_28 = 0;
    uStack_20 = 0;
    FUN_1485eb0eb(param_2,&local_10,CONCAT71((uint7)uStack_c,1),*(undefined4 *)param_1[1]);
  }
  else if (*pcVar1 == '\x02') {
    local_10 = *(undefined4 *)pcVar1;
    uStack_c = (uint3)((uint)*(undefined4 *)(pcVar1 + 3) >> 8);
    local_28 = 0;
    uStack_20 = 0;
    FUN_1485eae7d(param_2,&local_10,CONCAT71((uint7)uStack_c,1));
  }
  else {
    local_10 = *(undefined4 *)pcVar1;
    uStack_c = (uint3)((uint)*(undefined4 *)(pcVar1 + 3) >> 8);
    local_28 = 0;
    uStack_20 = 0;
    FUN_1485eb359(param_2,&local_10,CONCAT71((uint7)uStack_c,1));
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be319c FUN_143be319c body=184 status=ok
// SIG undefined FUN_143be319c(void)

void FUN_143be319c(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_10;
  undefined3 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = (char *)*param_1;
  if (*pcVar1 == '\x01') {
    local_10 = *(undefined4 *)pcVar1;
    uStack_c = (undefined3)((uint)*(undefined4 *)(pcVar1 + 3) >> 8);
    local_28 = 0;
    uStack_20 = 0;
    FUN_1485eb0eb(param_2,&local_10,0,*(undefined4 *)param_1[1]);
  }
  else if (*pcVar1 == '\x02') {
    local_10 = *(undefined4 *)pcVar1;
    uStack_c = (undefined3)((uint)*(undefined4 *)(pcVar1 + 3) >> 8);
    local_28 = 0;
    uStack_20 = 0;
    FUN_1485eae7d(param_2,&local_10,0);
  }
  else {
    local_10 = *(undefined4 *)pcVar1;
    uStack_c = (undefined3)((uint)*(undefined4 *)(pcVar1 + 3) >> 8);
    local_28 = 0;
    uStack_20 = 0;
    FUN_1485eb359(param_2,&local_10,0);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be3256 FUN_143be3256 body=377 status=ok
// SIG undefined FUN_143be3256(void)

void FUN_143be3256(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  float fVar2;
  undefined1 auStack_378 [32];
  undefined ***local_358;
  double local_350;
  undefined4 local_348;
  undefined3 uStack_344;
  undefined **local_340;
  undefined1 *local_338;
  undefined1 *local_330;
  undefined1 local_328 [216];
  undefined1 local_250 [544];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_378;
  local_358 = (undefined ***)((ulonglong)local_358 & 0xffffffffffffff00);
  FUN_1411b354a(local_250,0,0,0);
  local_350 = (double)((ulonglong)local_350 & 0xffffffffffffff00);
  local_358 = (undefined ***)((ulonglong)local_358 & 0xffffffffffffff00);
  FUN_146c005f0(local_250,param_2,0,0);
  FUN_146ba21d6(local_328,local_250,1);
  local_340 = &PTR_FUN_14ae73f80;
  fVar2 = 0.0;
  if (0.0 <= *(float *)*param_1) {
    fVar2 = *(float *)*param_1;
  }
  pcVar1 = (char *)param_1[1];
  local_350 = (double)fVar2;
  local_338 = local_250;
  local_330 = local_328;
  if (*pcVar1 == '\x01') {
    local_348 = *(undefined4 *)pcVar1;
    uStack_344 = (undefined3)((uint)*(undefined4 *)(pcVar1 + 3) >> 8);
    local_358 = &local_340;
    FUN_1485eb0eb(param_2,&local_348,1,1);
  }
  else if (*pcVar1 == '\x02') {
    local_348 = *(undefined4 *)pcVar1;
    uStack_344 = (undefined3)((uint)*(undefined4 *)(pcVar1 + 3) >> 8);
    local_358 = &local_340;
    FUN_1485eae7d(param_2,&local_348,1,1);
  }
  else {
    local_348 = *(undefined4 *)pcVar1;
    uStack_344 = (undefined3)((uint)*(undefined4 *)(pcVar1 + 3) >> 8);
    local_358 = &local_340;
    FUN_1485eb359(param_2,&local_348,1,1);
  }
  FUN_1457e5b52(local_328);
  FUN_141082778(local_250);
  if ((local_30 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be33d0 FUN_143be33d0 body=330 status=ok
// SIG undefined FUN_143be33d0(void)

void FUN_143be33d0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)*param_1;
  *(undefined8 *)(lVar3 + 8) = param_2;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  FUN_146bee918(lVar3,0);
  *(ulonglong *)(lVar3 + 0x10) =
       (ulonglong)
       (uint)(*(int *)(*(longlong *)(lVar3 + 8) + 0x214) +
             *(int *)(*(longlong *)(lVar3 + 8) + 0x218));
  local_29 = 1;
  local_38 = *(undefined8 *)*param_1;
  plVar4 = (longlong *)FUN_14001cc68(0x80,0x10);
  FUN_1485eb5c8(plVar4,&local_38,&local_29);
  if (plVar4 == (longlong *)0x0) {
    lVar3 = *param_1;
    *(undefined8 *)(lVar3 + 0x10) = 0x10;
    plVar5 = *(longlong **)(lVar3 + 0x18);
    if (plVar5 == (longlong *)0x0) goto LAB_143be350d;
    *(undefined8 *)(lVar3 + 0x18) = 0;
LAB_143be3495:
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
    if (plVar4 == (longlong *)0x0) goto LAB_143be350d;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    lVar3 = *param_1;
    *(longlong **)(lVar3 + 0x10) = plVar4 + 2;
    plVar5 = *(longlong **)(lVar3 + 0x18);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(lVar3 + 0x18) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_143be3495;
    }
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
LAB_143be350d:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143be352e FUN_143be352e body=406 status=ok
// SIG undefined FUN_143be352e(void)

void FUN_143be352e(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)*param_1 != '\0') {
    lVar3 = *(longlong *)param_1[1];
    lVar4 = *(longlong *)(lVar3 + 8);
    if (((lVar4 == param_2) && (-1 < *(int *)(lVar3 + 0xcc))) &&
       (*(ulonglong *)(lVar3 + 0x10) ==
        (ulonglong)(uint)(*(int *)(lVar4 + 0x214) + *(int *)(lVar4 + 0x218)))) goto LAB_143be3581;
  }
  lVar3 = *(longlong *)param_1[1];
  *(longlong *)(lVar3 + 8) = param_2;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = *(longlong *)param_1[1];
  FUN_146bee918(lVar3,0);
  *(ulonglong *)(lVar3 + 0x10) =
       (ulonglong)
       (uint)(*(int *)(*(longlong *)(lVar3 + 8) + 0x214) +
             *(int *)(*(longlong *)(lVar3 + 8) + 0x218));
  local_29 = 1;
  local_38 = *(undefined8 *)param_1[1];
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  FUN_1485eb5c8(plVar5,&local_38,&local_29);
  if (plVar5 == (longlong *)0x0) {
    lVar3 = param_1[1];
    *(undefined8 *)(lVar3 + 0x10) = 0x10;
    plVar6 = *(longlong **)(lVar3 + 0x18);
    if (plVar6 == (longlong *)0x0) goto LAB_143be3581;
    *(undefined8 *)(lVar3 + 0x18) = 0;
LAB_143be3657:
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
    if (plVar5 == (longlong *)0x0) goto LAB_143be3581;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    lVar3 = param_1[1];
    *(longlong **)(lVar3 + 0x10) = plVar5 + 2;
    plVar6 = *(longlong **)(lVar3 + 0x18);
    if (plVar5 == plVar6) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    else {
      *(longlong **)(lVar3 + 0x18) = plVar5;
      if (plVar6 != (longlong *)0x0) goto LAB_143be3657;
    }
  }
  LOCK();
  plVar6 = plVar5 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_143be3581:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143be36c6 FUN_143be36c6 body=420 status=ok
// SIG undefined FUN_143be36c6(void)

void FUN_143be36c6(undefined8 *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  double local_98;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  undefined1 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar10 = (longlong *)*param_1;
  lVar2 = *plVar10;
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(*(longlong *)param_1[1] + 0x98);
    lVar4 = *(longlong *)(lVar2 + 8);
    if (lVar4 == lVar3) {
      pfVar5 = (float *)param_1[2];
      puVar6 = (undefined4 *)param_1[4];
      puVar7 = (undefined1 *)param_1[5];
      puVar8 = (undefined1 *)param_1[6];
      if ((*(int *)(lVar2 + 0xcc) < 0) || (*(char *)(pfVar5 + 1) != '\0')) {
        if (*(int *)(lVar2 + 0xcc) < 0) goto LAB_143be3708;
      }
      else if (*(ulonglong *)(lVar2 + 0x10) !=
               (ulonglong)(uint)(*(int *)(lVar4 + 0x214) + *(int *)(lVar4 + 0x218)))
      goto LAB_143be3708;
      *(undefined1 *)param_1[3] = 1;
      local_88 = 0;
      local_78 = (longlong *)0x0;
      local_48 = 0;
      fVar1 = *pfVar5;
      uVar11 = -(uint)(fVar1 == 0.0);
      local_98 = (double)(float)(~uVar11 & (uint)fVar1 | uVar11 & 0x7f7fffff);
      local_130 = 0;
      local_118 = *(undefined8 *)(puVar6 + 4);
      local_128 = *puVar6;
      uStack_124 = puVar6[1];
      uStack_120 = puVar6[2];
      uStack_11c = puVar6[3];
      iVar9 = (**(code **)(*(longlong *)*plVar10 + 0x20))();
      if (-1 < iVar9) {
        *puVar7 = 0;
        local_148 = *puVar6;
        uStack_144 = puVar6[1];
        uStack_140 = puVar6[2];
        uStack_13c = puVar6[3];
        local_138 = *(undefined8 *)(puVar6 + 4);
        FUN_146bd7ec2(&local_128,lVar3,iVar9);
        *puVar8 = 1;
        *(int *)(puVar8 + 4) = iVar9;
        *(undefined8 *)(puVar8 + 0x18) = local_a0;
        *(undefined8 *)(puVar8 + 8) = local_b0;
        *(undefined8 *)(puVar8 + 0x10) = uStack_a8;
        *(undefined8 *)(puVar8 + 0x30) = local_b8;
        *(undefined4 *)(puVar8 + 0x20) = local_c8;
        *(undefined4 *)(puVar8 + 0x24) = uStack_c4;
        *(undefined4 *)(puVar8 + 0x28) = uStack_c0;
        *(undefined4 *)(puVar8 + 0x2c) = uStack_bc;
      }
      if (local_88 != 0) {
        plVar10 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar10 = local_68;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
    }
  }
LAB_143be3708:
  if ((local_30 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143be386c FUN_143be386c body=736 status=ok
// SIG undefined FUN_143be386c(void)

void FUN_143be386c(undefined8 *param_1)

{
  float fVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  double *pdVar7;
  double *pdVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  double dVar11;
  int iVar12;
  longlong *plVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_1a8 [32];
  double local_188;
  double dStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined1 local_158 [120];
  double local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  double local_b8 [2];
  longlong local_a8;
  longlong *local_98;
  longlong local_88 [4];
  undefined1 local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar13 = (longlong *)*param_1;
  lVar3 = *plVar13;
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(*(longlong *)param_1[1] + 0x98);
    lVar5 = *(longlong *)(lVar3 + 8);
    if (lVar5 == lVar4) {
      pfVar6 = (float *)param_1[2];
      pdVar7 = (double *)param_1[4];
      pdVar8 = (double *)param_1[5];
      puVar9 = (undefined1 *)param_1[6];
      puVar10 = (undefined1 *)param_1[7];
      if ((*(int *)(lVar3 + 0xcc) < 0) || (*(char *)(pfVar6 + 1) != '\0')) {
        if (*(int *)(lVar3 + 0xcc) < 0) goto LAB_143be38c0;
      }
      else if (*(ulonglong *)(lVar3 + 0x10) !=
               (ulonglong)(uint)(*(int *)(lVar5 + 0x214) + *(int *)(lVar5 + 0x218)))
      goto LAB_143be38c0;
      *(undefined1 *)param_1[3] = 1;
      local_a8 = 0;
      local_98 = (longlong *)0x0;
      local_68 = 0;
      fVar1 = *pfVar6;
      uVar14 = -(uint)(fVar1 == 0.0);
      local_b8[0] = (double)(float)(~uVar14 & (uint)fVar1 | uVar14 & 0x7f7fffff);
      dVar15 = *pdVar8;
      dVar2 = pdVar8[1];
      local_160 = pdVar8[2];
      dVar11 = SQRT(local_160 * local_160 + dVar15 * dVar15 + dVar2 * dVar2);
      local_168 = 0.0;
      dVar16 = 1.0 / dVar11;
      local_170 = (double)(-(ulonglong)(0.0 < dVar11) & (ulonglong)(dVar15 * dVar16));
      if (0.0 < dVar11) {
        local_160 = local_160 * dVar16;
        local_168 = dVar2 * dVar16;
      }
      else {
        local_160 = 0.0;
      }
      local_188 = *pdVar7;
      dStack_180 = pdVar7[1];
      local_178 = pdVar7[2];
      dVar15 = local_160 * local_160 + local_170 * local_170 + local_168 * local_168;
      if (9.99999993922529e-09 < dVar15) {
        dVar15 = 1.0 / SQRT(dVar15);
        local_170 = local_170 * dVar15;
        local_168 = local_168 * dVar15;
        local_160 = local_160 * dVar15;
      }
      plVar13 = (longlong *)*plVar13;
      iVar12 = (**(code **)(*plVar13 + 0x40))(plVar13,&local_188,local_b8);
      if (-1 < iVar12) {
        *puVar9 = 0;
        FUN_1483b309a(local_158,lVar4,iVar12,&local_188);
        *(float *)(puVar10 + 4) = (float)local_e0;
        *puVar10 = 1;
        *(int *)(puVar10 + 8) = iVar12;
        *(double *)(puVar10 + 0x10) = local_e0 * local_170 + local_188;
        *(double *)(puVar10 + 0x18) = local_168 * local_e0 + dStack_180;
        *(double *)(puVar10 + 0x20) = local_160 * local_e0 + local_178;
        *(undefined8 *)(puVar10 + 0x38) = local_c8;
        *(undefined4 *)(puVar10 + 0x28) = local_d8;
        *(undefined4 *)(puVar10 + 0x2c) = uStack_d4;
        *(undefined4 *)(puVar10 + 0x30) = uStack_d0;
        *(undefined4 *)(puVar10 + 0x34) = uStack_cc;
      }
      if (local_a8 != 0) {
        plVar13 = local_98;
        if (local_98 == (longlong *)0x0) {
          plVar13 = local_88;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
    }
  }
LAB_143be38c0:
  if ((local_50 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143be3b4e FUN_143be3b4e body=242 status=ok
// SIG undefined FUN_143be3b4e(void)

void FUN_143be3b4e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)*param_1;
  lVar2 = *plVar1;
  if (((lVar2 != 0) && (plVar1[2] != 0)) &&
     (lVar3 = *(longlong *)(lVar2 + 8), lVar3 == *(longlong *)(*(longlong *)param_1[1] + 0x98))) {
    lVar4 = param_1[2];
    lVar5 = param_1[4];
    puVar6 = (undefined8 *)param_1[5];
    puVar7 = (undefined1 *)param_1[6];
    if ((*(int *)(lVar2 + 0xcc) < 0) || (*(char *)(lVar4 + 4) != '\0')) {
      if (*(int *)(lVar2 + 0xcc) < 0) goto LAB_143be3bd0;
    }
    else if (*(ulonglong *)(lVar2 + 0x10) !=
             (ulonglong)(uint)(*(int *)(lVar3 + 0x214) + *(int *)(lVar3 + 0x218)))
    goto LAB_143be3bd0;
    *(undefined1 *)param_1[3] = 1;
    dVar8 = (double)*(float *)(lVar4 + 8);
    local_58 = puVar6[2];
    local_68 = *puVar6;
    uStack_60 = puVar6[1];
    local_48 = local_68;
    uStack_40 = uStack_60;
    local_38 = local_58;
    dVar9 = (double)FUN_146bed438((longlong *)plVar1[2],
                                  *(undefined4 *)(*(longlong *)plVar1[2] + 0xcc));
    *(bool *)lVar5 = dVar8 < dVar9;
    if (dVar8 < dVar9) {
      *puVar7 = 0;
    }
  }
LAB_143be3bd0:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143be3c42 FUN_143be3c42 body=3511 status=ok
// SIG undefined FUN_143be3c42(void)

void FUN_143be3c42(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_348 [32];
  longlong local_328;
  undefined8 uStack_320;
  longlong local_318;
  longlong lStack_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  code *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  longlong *local_2d8;
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
  code *local_2a8;
  undefined8 uStack_2a0;
  longlong *local_298;
  undefined8 uStack_290;
  undefined **local_288;
  undefined1 *puStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 *local_268;
  undefined8 local_258;
  undefined **local_248;
  undefined *local_240;
  code *local_228;
  undefined8 uStack_220;
  longlong *local_218;
  undefined8 uStack_210;
  undefined **local_208;
  undefined *puStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 *local_1e8;
  undefined8 local_1d8;
  undefined **local_1c8;
  undefined *local_1c0;
  code *local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_348;
  plVar2 = (longlong *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 == 0) goto switchD_143be3d2a_default;
  lVar20 = *(longlong *)(*(longlong *)param_1[1] + 0x98);
  lVar19 = *(longlong *)(lVar3 + 8);
  if (lVar19 != lVar20) goto switchD_143be3d2a_default;
  puVar4 = (undefined8 *)param_1[4];
  plVar17 = (longlong *)param_1[5];
  uVar5 = param_1[6];
  uVar6 = param_1[7];
  piVar7 = (int *)param_1[8];
  if ((*(int *)(lVar3 + 0xcc) < 0) || (*(char *)(param_1[2] + 4) != '\0')) {
    if (*(int *)(lVar3 + 0xcc) < 0) goto switchD_143be3d2a_default;
  }
  else if (*(ulonglong *)(lVar3 + 0x10) !=
           (ulonglong)(uint)(*(int *)(lVar19 + 0x214) + *(int *)(lVar19 + 0x218)))
  goto switchD_143be3d2a_default;
  switch(*(undefined1 *)param_1[3]) {
  case 0:
    *puVar4 = &DAT_100000001;
    local_298 = (longlong *)0x0;
    local_288 = &PTR_LAB_14aef06d0;
    puStack_280 = &LAB_1484c1484;
    local_2a8 = (code *)&LAB_1484c1488;
    local_258 = 0;
    local_248 = &PTR_LAB_14aef06f0;
    local_240 = &DAT_1484c14e0;
    local_268 = &LAB_1484c14e2;
    local_218 = (longlong *)0x0;
    local_208 = &PTR_LAB_14aef0710;
    puStack_200 = &DAT_1484c1538;
    local_228 = (code *)&LAB_1484c153a;
    local_1d8 = 0;
    local_1c8 = &PTR_LAB_14aef0710;
    local_1c0 = &DAT_1484c158a;
    local_1e8 = &LAB_1484c153a;
    local_2e8 = (code *)*plVar17;
    uStack_2e0 = (undefined4)plVar17[1];
    uStack_2dc = *(undefined4 *)((longlong)plVar17 + 0xc);
    local_2d8 = (longlong *)plVar17[2];
    uStack_2d0 = (undefined4)plVar17[3];
    uStack_2cc = *(undefined4 *)((longlong)plVar17 + 0x1c);
    local_2c8 = (undefined4)plVar17[4];
    uStack_2c4 = *(undefined4 *)((longlong)plVar17 + 0x24);
    uStack_2c0 = (undefined4)plVar17[5];
    uStack_2bc = *(undefined4 *)((longlong)plVar17 + 0x2c);
    local_a8 = (code *)0x0;
    puVar16 = (undefined8 *)FUN_14001cc68(0x38,8);
    puVar10 = puStack_280;
    ppuVar9 = local_288;
    local_98 = local_298;
    pcVar8 = local_2a8;
    *puVar16 = &PTR_FUN_14afa41e0;
    puVar16[5] = CONCAT44(uStack_2c4,local_2c8);
    puVar16[6] = CONCAT44(uStack_2bc,uStack_2c0);
    puVar16[3] = local_2d8;
    puVar16[4] = CONCAT44(uStack_2cc,uStack_2d0);
    puVar16[1] = local_2e8;
    puVar16[2] = CONCAT44(uStack_2dc,uStack_2e0);
    if (puVar16 + 1 != (longlong *)0x0) {
      local_a8 = (code *)&LAB_143be49fa;
    }
    local_2a8 = local_a8;
    uStack_2a0 = uStack_a0;
    local_298 = puVar16;
    uStack_290 = uStack_90;
    local_288 = local_88;
    puStack_280 = uStack_80;
    local_278 = local_78;
    uStack_270 = uStack_70;
    local_a8 = pcVar8;
    local_88 = ppuVar9;
    uStack_80 = puVar10;
    if (pcVar8 != (code *)0x0) {
      plVar18 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar18 = &local_88;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    local_318 = *plVar17;
    lStack_310 = plVar17[1];
    local_308 = (undefined4)plVar17[2];
    uStack_304 = *(undefined4 *)((longlong)plVar17 + 0x14);
    uStack_300 = (undefined4)plVar17[3];
    uStack_2fc = *(undefined4 *)((longlong)plVar17 + 0x1c);
    local_2f8 = (undefined4)plVar17[4];
    uStack_2f4 = *(undefined4 *)((longlong)plVar17 + 0x24);
    uStack_2f0 = (undefined4)plVar17[5];
    uStack_2ec = *(undefined4 *)((longlong)plVar17 + 0x2c);
    local_2e8 = (code *)0x0;
    local_2d8 = (longlong *)FUN_14001cc68(0x48,8);
    *local_2d8 = (longlong)&PTR_FUN_14afa4200;
    local_2d8[1] = lVar20;
    local_2d8[2] = (longlong)puVar4;
    local_2d8[7] = CONCAT44(uStack_2f4,local_2f8);
    local_2d8[8] = CONCAT44(uStack_2ec,uStack_2f0);
    local_2d8[5] = CONCAT44(uStack_304,local_308);
    local_2d8[6] = CONCAT44(uStack_2fc,uStack_300);
    local_2d8[3] = local_318;
    local_2d8[4] = lStack_310;
    if (local_2d8 + 1 != (longlong *)0x0) {
      local_2e8 = FUN_143be4ad4;
    }
    break;
  case 1:
    *puVar4 = &DAT_100000004;
    local_298 = (longlong *)0x0;
    local_288 = &PTR_LAB_14aef06d0;
    puStack_280 = &LAB_1484c1484;
    local_2a8 = (code *)&LAB_1484c1488;
    local_258 = 0;
    local_248 = &PTR_LAB_14aef06f0;
    local_240 = &DAT_1484c14e0;
    local_268 = &LAB_1484c14e2;
    local_218 = (longlong *)0x0;
    local_208 = &PTR_LAB_14aef0710;
    puStack_200 = &DAT_1484c1538;
    local_228 = (code *)&LAB_1484c153a;
    local_1d8 = 0;
    local_1c8 = &PTR_LAB_14aef0710;
    local_1c0 = &DAT_1484c158a;
    local_1e8 = &LAB_1484c153a;
    local_2e8 = (code *)*plVar17;
    uStack_2e0 = (undefined4)plVar17[1];
    uStack_2dc = *(undefined4 *)((longlong)plVar17 + 0xc);
    local_2d8 = (longlong *)plVar17[2];
    uStack_2d0 = (undefined4)plVar17[3];
    uStack_2cc = *(undefined4 *)((longlong)plVar17 + 0x1c);
    local_2c8 = (undefined4)plVar17[4];
    uStack_2c4 = *(undefined4 *)((longlong)plVar17 + 0x24);
    uStack_2c0 = (undefined4)plVar17[5];
    uStack_2bc = *(undefined4 *)((longlong)plVar17 + 0x2c);
    local_a8 = (code *)0x0;
    puVar16 = (undefined8 *)FUN_14001cc68(0x38,8);
    puVar10 = puStack_280;
    ppuVar9 = local_288;
    local_98 = local_298;
    pcVar8 = local_2a8;
    *puVar16 = &PTR_FUN_14afa4220;
    puVar16[5] = CONCAT44(uStack_2c4,local_2c8);
    puVar16[6] = CONCAT44(uStack_2bc,uStack_2c0);
    puVar16[3] = local_2d8;
    puVar16[4] = CONCAT44(uStack_2cc,uStack_2d0);
    puVar16[1] = local_2e8;
    puVar16[2] = CONCAT44(uStack_2dc,uStack_2e0);
    if (puVar16 + 1 != (longlong *)0x0) {
      local_a8 = (code *)&LAB_143be4c74;
    }
    local_2a8 = local_a8;
    uStack_2a0 = uStack_a0;
    local_298 = puVar16;
    uStack_290 = uStack_90;
    local_288 = local_88;
    puStack_280 = uStack_80;
    local_278 = local_78;
    uStack_270 = uStack_70;
    local_a8 = pcVar8;
    local_88 = ppuVar9;
    uStack_80 = puVar10;
    if (pcVar8 != (code *)0x0) {
      plVar18 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar18 = &local_88;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    local_2e8 = (code *)0x0;
    puVar16 = (undefined8 *)FUN_14001cc68(0x30,8);
    *puVar16 = &PTR_FUN_14afa4240;
    puVar16[1] = uVar6;
    puVar16[2] = lVar20;
    puVar16[3] = plVar17;
    puVar16[4] = piVar7;
    puVar16[5] = puVar4;
    if (puVar16 + 1 != (undefined8 *)0x0) {
      local_2e8 = FUN_143be4d4e;
    }
    local_78 = local_1f8;
    uStack_70 = uStack_1f0;
    local_88 = local_208;
    uStack_80 = puStack_200;
    local_98 = local_218;
    uStack_90 = uStack_210;
    local_a8 = local_228;
    uStack_a0 = uStack_220;
    local_208 = (undefined **)CONCAT44(uStack_2c4,local_2c8);
    puStack_200 = (undefined *)CONCAT44(uStack_2bc,uStack_2c0);
    local_218 = puVar16;
    uStack_210 = CONCAT44(uStack_2cc,uStack_2d0);
    local_228 = local_2e8;
    uStack_220 = CONCAT44(uStack_2dc,uStack_2e0);
    goto LAB_143be497b;
  case 2:
    local_318 = 0;
    lStack_310 = 0;
    local_328 = 0;
    uStack_320 = 0;
    local_298 = (longlong *)0x0;
    local_288 = &PTR_LAB_14aef06d0;
    puStack_280 = &LAB_1484c1484;
    local_2a8 = (code *)&LAB_1484c1488;
    local_258 = 0;
    local_248 = &PTR_LAB_14aef06f0;
    local_240 = &DAT_1484c14e0;
    local_268 = &LAB_1484c14e2;
    local_218 = (longlong *)0x0;
    local_208 = &PTR_LAB_14aef0710;
    puStack_200 = &DAT_1484c1538;
    local_228 = (code *)&LAB_1484c153a;
    local_1d8 = 0;
    local_1c8 = &PTR_LAB_14aef0710;
    local_1c0 = &DAT_1484c158a;
    local_1e8 = &LAB_1484c153a;
    local_2e8 = (code *)*plVar17;
    uStack_2e0 = (undefined4)plVar17[1];
    uStack_2dc = *(undefined4 *)((longlong)plVar17 + 0xc);
    local_2d8 = (longlong *)plVar17[2];
    uStack_2d0 = (undefined4)plVar17[3];
    uStack_2cc = *(undefined4 *)((longlong)plVar17 + 0x1c);
    local_2c8 = (undefined4)plVar17[4];
    uStack_2c4 = *(undefined4 *)((longlong)plVar17 + 0x24);
    uStack_2c0 = (undefined4)plVar17[5];
    uStack_2bc = *(undefined4 *)((longlong)plVar17 + 0x2c);
    local_a8 = (code *)0x0;
    puVar16 = (undefined8 *)FUN_14001cc68(0x38,8);
    puVar10 = puStack_280;
    ppuVar9 = local_288;
    local_98 = local_298;
    pcVar8 = local_2a8;
    *puVar16 = &PTR_FUN_14afa42a0;
    puVar16[5] = CONCAT44(uStack_2c4,local_2c8);
    puVar16[6] = CONCAT44(uStack_2bc,uStack_2c0);
    puVar16[3] = local_2d8;
    puVar16[4] = CONCAT44(uStack_2cc,uStack_2d0);
    puVar16[1] = local_2e8;
    puVar16[2] = CONCAT44(uStack_2dc,uStack_2e0);
    if (puVar16 + 1 != (longlong *)0x0) {
      local_a8 = (code *)&LAB_143be530e;
    }
    local_2a8 = local_a8;
    uStack_2a0 = uStack_a0;
    local_298 = puVar16;
    uStack_290 = uStack_90;
    local_288 = local_88;
    puStack_280 = uStack_80;
    local_278 = local_78;
    uStack_270 = uStack_70;
    local_a8 = pcVar8;
    local_88 = ppuVar9;
    uStack_80 = puVar10;
    if (pcVar8 != (code *)0x0) {
      plVar18 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar18 = &local_88;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    local_2e8 = (code *)0x0;
    puVar16 = (undefined8 *)FUN_14001cc68(0x38,8);
    puVar13 = puStack_200;
    ppuVar9 = local_208;
    uVar12 = uStack_210;
    local_2d8 = local_218;
    uVar11 = uStack_220;
    pcVar8 = local_228;
    *puVar16 = &PTR_FUN_14afa42c0;
    puVar16[1] = uVar6;
    puVar16[2] = lVar20;
    puVar16[3] = plVar17;
    puVar16[4] = piVar7;
    puVar16[5] = &local_318;
    puVar16[6] = &local_328;
    if (puVar16 + 1 != (undefined8 *)0x0) {
      local_2e8 = FUN_143be53e8;
    }
    local_78 = local_1f8;
    uVar14 = local_78;
    uStack_70 = uStack_1f0;
    uVar15 = uStack_70;
    local_88 = local_208;
    uStack_80 = puStack_200;
    local_98 = local_218;
    uStack_90 = uStack_210;
    local_a8 = local_228;
    uStack_a0 = uStack_220;
    uVar6 = uStack_a0;
    local_208 = (undefined **)CONCAT44(uStack_2c4,local_2c8);
    puStack_200 = (undefined *)CONCAT44(uStack_2bc,uStack_2c0);
    local_218 = puVar16;
    uStack_210 = CONCAT44(uStack_2cc,uStack_2d0);
    local_228 = local_2e8;
    uStack_220 = CONCAT44(uStack_2dc,uStack_2e0);
    uStack_a0._0_4_ = (undefined4)uVar11;
    uStack_a0._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
    uStack_90._0_4_ = (undefined4)uVar12;
    uStack_90._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
    local_88._0_4_ = SUB84(ppuVar9,0);
    local_88._4_4_ = (undefined4)((ulonglong)ppuVar9 >> 0x20);
    uStack_80._0_4_ = SUB84(puVar13,0);
    uStack_80._4_4_ = (undefined4)((ulonglong)puVar13 >> 0x20);
    local_78._0_4_ = (undefined4)local_1f8;
    local_78._4_4_ = (undefined4)((ulonglong)local_1f8 >> 0x20);
    uStack_70._0_4_ = (undefined4)uStack_1f0;
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_1f0 >> 0x20);
    local_2b8 = (undefined4)local_78;
    uStack_2b4 = local_78._4_4_;
    uStack_2b0 = (undefined4)uStack_70;
    uStack_2ac = uStack_70._4_4_;
    local_2c8 = (undefined4)local_88;
    uStack_2c4 = local_88._4_4_;
    uStack_2c0 = (undefined4)uStack_80;
    uStack_2bc = uStack_80._4_4_;
    uStack_2d0 = (undefined4)uStack_90;
    uStack_2cc = uStack_90._4_4_;
    local_2e8 = pcVar8;
    uStack_2e0 = (undefined4)uStack_a0;
    uStack_2dc = uStack_a0._4_4_;
    uStack_a0 = uVar6;
    uStack_90 = uVar12;
    local_88 = ppuVar9;
    uStack_80 = puVar13;
    local_78 = uVar14;
    uStack_70 = uVar15;
    if (pcVar8 != (code *)0x0) {
      plVar17 = local_2d8;
      if (local_2d8 == (longlong *)0x0) {
        plVar17 = (longlong *)&local_2c8;
      }
      (**(code **)(*plVar17 + 0x10))();
    }
    (**(code **)(*(longlong *)*plVar2 + 0x78))((longlong *)*plVar2,&local_2a8,uVar5);
    lVar3 = local_328;
    *puVar4 = 0x200000004;
    lVar20 = (longlong)(int)uStack_320;
    if (lVar20 != 0) {
      lVar19 = 0;
      do {
        local_a8 = *(code **)(lVar3 + lVar19);
        FUN_1483b983a(puVar4 + 1,&local_2e8,&local_a8,0);
        lVar19 = lVar19 + 8;
      } while (lVar20 * 8 != lVar19);
    }
    FUN_1484c1188(&local_2a8);
    if (local_328 != 0) {
      FUN_1400020a8();
    }
    if (local_318 != 0) {
      FUN_1400020a8();
    }
    goto switchD_143be3d2a_default;
  case 3:
    iVar1 = *piVar7;
    *puVar4 = &DAT_100000002;
    local_298 = (longlong *)0x0;
    local_288 = &PTR_LAB_14aef06d0;
    puStack_280 = &LAB_1484c1484;
    local_2a8 = (code *)&LAB_1484c1488;
    local_258 = 0;
    local_248 = &PTR_LAB_14aef06f0;
    local_240 = &DAT_1484c14e0;
    local_268 = &LAB_1484c14e2;
    local_218 = (longlong *)0x0;
    local_208 = &PTR_LAB_14aef0710;
    puStack_200 = &DAT_1484c1538;
    local_228 = (code *)&LAB_1484c153a;
    local_1d8 = 0;
    local_1c8 = &PTR_LAB_14aef0710;
    local_1c0 = &DAT_1484c158a;
    local_1e8 = &LAB_1484c153a;
    local_2e8 = (code *)*plVar17;
    uStack_2e0 = (undefined4)plVar17[1];
    uStack_2dc = *(undefined4 *)((longlong)plVar17 + 0xc);
    local_2d8 = (longlong *)plVar17[2];
    uStack_2d0 = (undefined4)plVar17[3];
    uStack_2cc = *(undefined4 *)((longlong)plVar17 + 0x1c);
    local_2c8 = (undefined4)plVar17[4];
    uStack_2c4 = *(undefined4 *)((longlong)plVar17 + 0x24);
    uStack_2c0 = (undefined4)plVar17[5];
    uStack_2bc = *(undefined4 *)((longlong)plVar17 + 0x2c);
    local_a8 = (code *)0x0;
    puVar16 = (undefined8 *)FUN_14001cc68(0x38,8);
    puVar10 = puStack_280;
    ppuVar9 = local_288;
    local_98 = local_298;
    pcVar8 = local_2a8;
    *puVar16 = &PTR_FUN_14afa4260;
    puVar16[5] = CONCAT44(uStack_2c4,local_2c8);
    puVar16[6] = CONCAT44(uStack_2bc,uStack_2c0);
    puVar16[3] = local_2d8;
    puVar16[4] = CONCAT44(uStack_2cc,uStack_2d0);
    puVar16[1] = local_2e8;
    puVar16[2] = CONCAT44(uStack_2dc,uStack_2e0);
    if (puVar16 + 1 != (longlong *)0x0) {
      local_a8 = (code *)&LAB_143be502c;
    }
    local_2a8 = local_a8;
    uStack_2a0 = uStack_a0;
    local_298 = puVar16;
    uStack_290 = uStack_90;
    local_288 = local_88;
    puStack_280 = uStack_80;
    local_278 = local_78;
    uStack_270 = uStack_70;
    local_a8 = pcVar8;
    local_88 = ppuVar9;
    uStack_80 = puVar10;
    if (pcVar8 != (code *)0x0) {
      plVar18 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar18 = &local_88;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    local_318 = *plVar17;
    lStack_310 = plVar17[1];
    local_308 = (undefined4)plVar17[2];
    uStack_304 = *(undefined4 *)((longlong)plVar17 + 0x14);
    uStack_300 = (undefined4)plVar17[3];
    uStack_2fc = *(undefined4 *)((longlong)plVar17 + 0x1c);
    local_2f8 = (undefined4)plVar17[4];
    uStack_2f4 = *(undefined4 *)((longlong)plVar17 + 0x24);
    uStack_2f0 = (undefined4)plVar17[5];
    uStack_2ec = *(undefined4 *)((longlong)plVar17 + 0x2c);
    local_2e8 = (code *)0x0;
    local_2d8 = (longlong *)FUN_14001cc68(0x50,8);
    *local_2d8 = (longlong)&PTR_FUN_14afa4280;
    local_2d8[1] = lVar20;
    local_2d8[2] = (longlong)puVar4;
    local_2d8[7] = CONCAT44(uStack_2f4,local_2f8);
    local_2d8[8] = CONCAT44(uStack_2ec,uStack_2f0);
    local_2d8[5] = CONCAT44(uStack_304,local_308);
    local_2d8[6] = CONCAT44(uStack_2fc,uStack_300);
    local_2d8[3] = local_318;
    local_2d8[4] = lStack_310;
    *(uint *)(local_2d8 + 9) = (1 < iVar1) + 1;
    if (local_2d8 + 1 != (longlong *)0x0) {
      local_2e8 = FUN_143be5106;
    }
    break;
  default:
    goto switchD_143be3d2a_default;
  }
  local_78 = local_1f8;
  uStack_70 = uStack_1f0;
  local_88 = local_208;
  uStack_80 = puStack_200;
  local_98 = local_218;
  uStack_90 = uStack_210;
  local_a8 = local_228;
  uStack_a0 = uStack_220;
  local_208 = (undefined **)CONCAT44(uStack_2c4,local_2c8);
  puStack_200 = (undefined *)CONCAT44(uStack_2bc,uStack_2c0);
  local_218 = local_2d8;
  uStack_210 = CONCAT44(uStack_2cc,uStack_2d0);
  local_228 = local_2e8;
  uStack_220 = CONCAT44(uStack_2dc,uStack_2e0);
LAB_143be497b:
  local_2b8 = (undefined4)local_78;
  uStack_2b4 = local_78._4_4_;
  uStack_2b0 = (undefined4)uStack_70;
  uStack_2ac = uStack_70._4_4_;
  local_2c8 = (undefined4)local_88;
  uStack_2c4 = local_88._4_4_;
  uStack_2c0 = (undefined4)uStack_80;
  uStack_2bc = uStack_80._4_4_;
  local_2d8 = local_98;
  uStack_2d0 = (undefined4)uStack_90;
  uStack_2cc = uStack_90._4_4_;
  local_2e8 = local_a8;
  uStack_2e0 = (undefined4)uStack_a0;
  uStack_2dc = uStack_a0._4_4_;
  if (local_a8 != (code *)0x0) {
    plVar17 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar17 = (longlong *)&local_2c8;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  (**(code **)(*(longlong *)*plVar2 + 0x78))((longlong *)*plVar2,&local_2a8,uVar5);
  FUN_1484c1188(&local_2a8);
switchD_143be3d2a_default:
  if ((local_60 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143be4a44 FUN_143be4a44 body=78 status=ok
// SIG undefined FUN_143be4a44(void)

undefined8 * FUN_143be4a44(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14afa41e0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar6[5] = *(undefined8 *)(param_1 + 0x28);
  puVar6[6] = uVar5;
  puVar6[3] = uVar3;
  puVar6[4] = uVar4;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  return puVar6 + 1;
}



// FUNCTION 143be4a98 FUN_143be4a98 body=29 status=ok
// SIG undefined FUN_143be4a98(void)

void FUN_143be4a98(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143be4ab6 FUN_143be4ab6 body=29 status=ok
// SIG undefined FUN_143be4ab6(void)

undefined8 FUN_143be4ab6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143be4ad4 FUN_143be4ad4 body=263 status=ok
// SIG undefined FUN_143be4ad4(void)

void FUN_143be4ad4(longlong *param_1,uint *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  ulonglong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar7 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(*param_2 >> 9) * 8);
  uVar6 = (ulonglong)(*param_2 & 0x1ff);
  local_30 = *(undefined4 *)(lVar7 + 8 + uVar6 * 0xc);
  local_38 = *(undefined8 *)(lVar7 + uVar6 * 0xc);
  lVar7 = 0;
  do {
    uVar4 = *(uint *)((longlong)&local_38 + lVar7 * 4);
    lVar5 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
    uVar6 = (ulonglong)(uVar4 & 0x1ff);
    dVar1 = *(double *)(lVar5 + uVar6 * 0x18);
    if (((((double)param_1[2] <= dVar1) &&
         (dVar2 = *(double *)(lVar5 + 8 + uVar6 * 0x18), (double)param_1[3] <= dVar2)) &&
        (dVar3 = *(double *)(lVar5 + 0x10 + uVar6 * 0x18), (double)param_1[4] <= dVar3)) &&
       (((dVar1 <= (double)param_1[5] && (dVar2 <= (double)param_1[6])) &&
        (dVar3 <= (double)param_1[7])))) {
      local_40 = (ulonglong)uVar4;
      FUN_1483b983a(param_1[1] + 8,local_44,&local_40,0);
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be4bdc FUN_143be4bdc body=86 status=ok
// SIG undefined FUN_143be4bdc(void)

undefined8 * FUN_143be4bdc(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)FUN_14001cc68(0x48,8);
  *param_2 = puVar8;
  *puVar8 = &PTR_FUN_14afa4200;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  puVar8[7] = *(undefined8 *)(param_1 + 0x38);
  puVar8[8] = uVar7;
  puVar8[5] = uVar5;
  puVar8[6] = uVar6;
  puVar8[3] = uVar3;
  puVar8[4] = uVar4;
  puVar8[1] = uVar1;
  puVar8[2] = uVar2;
  return puVar8 + 1;
}



// FUNCTION 143be4c38 FUN_143be4c38 body=29 status=ok
// SIG undefined FUN_143be4c38(void)

void FUN_143be4c38(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143be4c56 FUN_143be4c56 body=29 status=ok
// SIG undefined FUN_143be4c56(void)

undefined8 FUN_143be4c56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143be4cbe FUN_143be4cbe body=78 status=ok
// SIG undefined FUN_143be4cbe(void)

undefined8 * FUN_143be4cbe(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14afa4220;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar6[5] = *(undefined8 *)(param_1 + 0x28);
  puVar6[6] = uVar5;
  puVar6[3] = uVar3;
  puVar6[4] = uVar4;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  return puVar6 + 1;
}



// FUNCTION 143be4d12 FUN_143be4d12 body=29 status=ok
// SIG undefined FUN_143be4d12(void)

void FUN_143be4d12(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143be4d30 FUN_143be4d30 body=29 status=ok
// SIG undefined FUN_143be4d30(void)

undefined8 FUN_143be4d30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143be4d4e FUN_143be4d4e body=589 status=ok
// SIG undefined FUN_143be4d4e(void)

void FUN_143be4d4e(longlong param_1,uint *param_2)

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
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  double *pdVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined1 auStack_b8 [44];
  undefined1 local_8c [4];
  ulonglong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar16 = *param_2;
  pdVar20 = *(double **)(param_1 + 0x10);
  lVar21 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
  lVar22 = *(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 8) + 0x130) + (ulonglong)(uVar16 >> 9) * 8);
  uVar23 = (ulonglong)uVar16 & 0x1ff;
  uVar17 = *(uint *)(lVar22 + uVar23 * 0xc);
  uVar18 = *(uint *)(lVar22 + 4 + uVar23 * 0xc);
  uVar19 = *(uint *)(lVar22 + 8 + uVar23 * 0xc);
  lVar22 = *(longlong *)(lVar21 + (ulonglong)(uVar17 >> 9) * 8);
  uVar23 = (ulonglong)uVar17 & 0x1ff;
  dVar1 = *(double *)(lVar22 + uVar23 * 0x18);
  dVar2 = *(double *)(lVar22 + 8 + uVar23 * 0x18);
  dVar3 = *(double *)(lVar22 + 0x10 + uVar23 * 0x18);
  dVar4 = pdVar20[1];
  dVar5 = *pdVar20;
  dVar6 = pdVar20[2];
  dVar7 = pdVar20[3];
  dVar8 = pdVar20[4];
  dVar9 = pdVar20[5];
  lVar22 = *(longlong *)(lVar21 + (ulonglong)(uVar18 >> 9) * 8);
  uVar23 = (ulonglong)uVar18 & 0x1ff;
  dVar10 = *(double *)(lVar22 + uVar23 * 0x18);
  dVar11 = *(double *)(lVar22 + 8 + uVar23 * 0x18);
  dVar12 = *(double *)(lVar22 + 0x10 + uVar23 * 0x18);
  lVar21 = *(longlong *)(lVar21 + (ulonglong)(uVar19 >> 9) * 8);
  uVar23 = (ulonglong)uVar19 & 0x1ff;
  dVar13 = *(double *)(lVar21 + uVar23 * 0x18);
  dVar14 = *(double *)(lVar21 + 8 + uVar23 * 0x18);
  dVar15 = *(double *)(lVar21 + 0x10 + uVar23 * 0x18);
  if (**(int **)(param_1 + 0x18) <=
      (int)((uint)(byte)((dVar12 <= dVar9 &&
                         (dVar11 <= dVar8 && (dVar10 <= dVar7 && dVar6 <= dVar12))) &
                        -(dVar5 <= dVar10) & -(dVar4 <= dVar11)) +
            (uint)(byte)((dVar3 <= dVar9 && (dVar2 <= dVar8 && (dVar1 <= dVar7 && dVar6 <= dVar3)))
                        & -(dVar5 <= dVar1) & -(dVar4 <= dVar2)) +
           (uint)(byte)((dVar15 <= dVar9 &&
                        (dVar14 <= dVar8 && (dVar13 <= dVar7 && dVar6 <= dVar15))) &
                       -(dVar5 <= dVar13 && dVar4 <= dVar14)))) {
    local_88 = (ulonglong)uVar16;
    FUN_1483b983a(*(longlong *)(param_1 + 0x20) + 8,local_8c,&local_88,0);
  }
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be4f9c FUN_143be4f9c body=78 status=ok
// SIG undefined FUN_143be4f9c(void)

undefined8 * FUN_143be4f9c(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14afa4240;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 143be4ff0 FUN_143be4ff0 body=29 status=ok
// SIG undefined FUN_143be4ff0(void)

void FUN_143be4ff0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143be500e FUN_143be500e body=29 status=ok
// SIG undefined FUN_143be500e(void)

undefined8 FUN_143be500e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143be5076 FUN_143be5076 body=78 status=ok
// SIG undefined FUN_143be5076(void)

undefined8 * FUN_143be5076(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14afa4260;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar6[5] = *(undefined8 *)(param_1 + 0x28);
  puVar6[6] = uVar5;
  puVar6[3] = uVar3;
  puVar6[4] = uVar4;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  return puVar6 + 1;
}



// FUNCTION 143be50ca FUN_143be50ca body=29 status=ok
// SIG undefined FUN_143be50ca(void)

void FUN_143be50ca(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143be50e8 FUN_143be50e8 body=29 status=ok
// SIG undefined FUN_143be50e8(void)

undefined8 FUN_143be50e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143be5106 FUN_143be5106 body=380 status=ok
// SIG undefined FUN_143be5106(void)

void FUN_143be5106(longlong *param_1,uint *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStack_98 [44];
  undefined1 local_6c [4];
  ulonglong local_68;
  undefined8 local_60;
  undefined4 local_58;
  byte local_54 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar9 = *param_2;
  lVar16 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar9 >> 9) * 8);
  local_58 = *(undefined4 *)(lVar16 + 8 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
  local_60 = *(undefined8 *)(lVar16 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
  local_54[2] = 0;
  local_54[0] = 0;
  local_54[1] = 0;
  lVar16 = *(longlong *)(*param_1 + 0x10);
  dVar1 = (double)param_1[2];
  dVar2 = (double)param_1[3];
  dVar3 = (double)param_1[4];
  dVar4 = (double)param_1[5];
  dVar5 = (double)param_1[6];
  lVar11 = 0;
  do {
    uVar15 = *(uint *)((longlong)&local_60 + lVar11 * 4);
    lVar10 = *(longlong *)(lVar16 + (ulonglong)(uVar15 >> 9) * 8);
    uVar14 = (ulonglong)(uVar15 & 0x1ff);
    dVar6 = *(double *)(lVar10 + uVar14 * 0x18);
    bVar12 = false;
    bVar13 = false;
    if ((((dVar1 <= dVar6) &&
         (dVar7 = *(double *)(lVar10 + 8 + uVar14 * 0x18), bVar13 = bVar12, dVar2 <= dVar7)) &&
        (dVar8 = *(double *)(lVar10 + 0x10 + uVar14 * 0x18), dVar3 <= dVar8)) &&
       ((dVar6 <= dVar4 && (dVar7 <= dVar5)))) {
      bVar13 = dVar8 <= (double)param_1[7];
    }
    local_54[lVar11] = bVar13;
    lVar11 = lVar11 + 1;
  } while (lVar11 != 3);
  uVar15 = 2;
  lVar16 = 0;
  do {
    if ((int)param_1[8] <= (int)((uint)local_54[uVar15] + (uint)local_54[lVar16])) {
      local_68 = (ulonglong)(uVar15 * 0x40000000 | uVar15 + uVar9 * 4 >> 2);
      FUN_1483b983a(param_1[1] + 8,local_6c,&local_68,0);
    }
    uVar15 = (uint)lVar16;
    lVar16 = lVar16 + 1;
  } while (lVar16 != 3);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be5284 FUN_143be5284 body=71 status=ok
// SIG undefined FUN_143be5284(void)

void FUN_143be5284(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14afa4280;
  lVar2 = 9;
  while( true ) {
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar1 = *param_1;
  }
  return;
}



// FUNCTION 143be52d2 FUN_143be52d2 body=29 status=ok
// SIG undefined FUN_143be52d2(void)

void FUN_143be52d2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143be52f0 FUN_143be52f0 body=29 status=ok
// SIG undefined FUN_143be52f0(void)

undefined8 FUN_143be52f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143be5358 FUN_143be5358 body=78 status=ok
// SIG undefined FUN_143be5358(void)

undefined8 * FUN_143be5358(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14afa42a0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar6[5] = *(undefined8 *)(param_1 + 0x28);
  puVar6[6] = uVar5;
  puVar6[3] = uVar3;
  puVar6[4] = uVar4;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  return puVar6 + 1;
}



// FUNCTION 143be53ac FUN_143be53ac body=29 status=ok
// SIG undefined FUN_143be53ac(void)

void FUN_143be53ac(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143be53ca FUN_143be53ca body=29 status=ok
// SIG undefined FUN_143be53ca(void)

undefined8 FUN_143be53ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143be53e8 FUN_143be53e8 body=662 status=ok
// SIG undefined FUN_143be53e8(void)

void FUN_143be53e8(longlong param_1,uint *param_2)

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
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  double *pdVar21;
  longlong *plVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  
  uVar16 = *param_2;
  pdVar21 = *(double **)(param_1 + 0x10);
  lVar24 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
  lVar27 = *(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 8) + 0x130) + (ulonglong)(uVar16 >> 9) * 8);
  uVar26 = (ulonglong)uVar16 & 0x1ff;
  uVar17 = *(uint *)(lVar27 + uVar26 * 0xc);
  uVar18 = *(uint *)(lVar27 + 4 + uVar26 * 0xc);
  uVar19 = *(uint *)(lVar27 + 8 + uVar26 * 0xc);
  lVar27 = *(longlong *)(lVar24 + (ulonglong)(uVar17 >> 9) * 8);
  uVar26 = (ulonglong)uVar17 & 0x1ff;
  dVar1 = *(double *)(lVar27 + uVar26 * 0x18);
  dVar2 = *(double *)(lVar27 + 8 + uVar26 * 0x18);
  dVar3 = *(double *)(lVar27 + 0x10 + uVar26 * 0x18);
  dVar4 = pdVar21[1];
  dVar5 = *pdVar21;
  dVar6 = pdVar21[2];
  dVar7 = pdVar21[3];
  dVar8 = pdVar21[4];
  dVar9 = pdVar21[5];
  lVar27 = *(longlong *)(lVar24 + (ulonglong)(uVar18 >> 9) * 8);
  uVar26 = (ulonglong)uVar18 & 0x1ff;
  dVar10 = *(double *)(lVar27 + uVar26 * 0x18);
  dVar11 = *(double *)(lVar27 + 8 + uVar26 * 0x18);
  dVar12 = *(double *)(lVar27 + 0x10 + uVar26 * 0x18);
  lVar24 = *(longlong *)(lVar24 + (ulonglong)(uVar19 >> 9) * 8);
  uVar26 = (ulonglong)uVar19 & 0x1ff;
  dVar13 = *(double *)(lVar24 + uVar26 * 0x18);
  dVar14 = *(double *)(lVar24 + 8 + uVar26 * 0x18);
  dVar15 = *(double *)(lVar24 + 0x10 + uVar26 * 0x18);
  if (**(int **)(param_1 + 0x18) <=
      (int)((uint)(byte)((dVar12 <= dVar9 &&
                         (dVar11 <= dVar8 && (dVar10 <= dVar7 && dVar6 <= dVar12))) &
                        -(dVar5 <= dVar10) & -(dVar4 <= dVar11)) +
            (uint)(byte)((dVar3 <= dVar9 && (dVar2 <= dVar8 && (dVar1 <= dVar7 && dVar6 <= dVar3)))
                        & -(dVar5 <= dVar1) & -(dVar4 <= dVar2)) +
           (uint)(byte)((dVar15 <= dVar9 &&
                        (dVar14 <= dVar8 && (dVar13 <= dVar7 && dVar6 <= dVar15))) &
                       -(dVar5 <= dVar13 && dVar4 <= dVar14)))) {
    iVar23 = FUN_146bc96d4();
    plVar22 = *(longlong **)(param_1 + 0x20);
    lVar24 = *plVar22;
    iVar20 = (int)plVar22[1];
    lVar27 = (longlong)iVar20;
    if (lVar27 != 0) {
      lVar25 = 0;
      do {
        if (*(int *)(lVar24 + lVar25) == iVar23) {
          return;
        }
        lVar25 = lVar25 + 4;
      } while (lVar27 * 4 - lVar25 != 0);
    }
    *(uint *)(plVar22 + 1) = iVar20 + 1U;
    if (*(uint *)((longlong)plVar22 + 0xc) < iVar20 + 1U) {
      FUN_1446f48e2(plVar22,iVar20);
      lVar24 = *plVar22;
    }
    *(int *)(lVar24 + lVar27 * 4) = iVar23;
    plVar22 = *(longlong **)(param_1 + 0x28);
    iVar20 = (int)plVar22[1];
    *(uint *)(plVar22 + 1) = iVar20 + 1U;
    if (*(uint *)((longlong)plVar22 + 0xc) < iVar20 + 1U) {
      FUN_146be54b8(plVar22,iVar20);
    }
    *(ulonglong *)(*plVar22 + (longlong)iVar20 * 8) = CONCAT44(iVar23,uVar16);
  }
  return;
}



// FUNCTION 143be567e FUN_143be567e body=78 status=ok
// SIG undefined FUN_143be567e(void)

undefined8 * FUN_143be567e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14afa42c0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar6[5] = *(undefined8 *)(param_1 + 0x28);
  puVar6[6] = uVar5;
  puVar6[3] = uVar3;
  puVar6[4] = uVar4;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  return puVar6 + 1;
}



// FUNCTION 143be56d2 FUN_143be56d2 body=29 status=ok
// SIG undefined FUN_143be56d2(void)

void FUN_143be56d2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143be56f0 FUN_143be56f0 body=29 status=ok
// SIG undefined FUN_143be56f0(void)

undefined8 FUN_143be56f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143be570e FUN_143be570e body=419 status=ok
// SIG undefined FUN_143be570e(void)

void FUN_143be570e(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [40];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  longlong *local_68 [2];
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  undefined1 local_3c;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = &PTR_FUN_14afa4400;
  local_48 = 0;
  local_40 = *(int *)*param_1;
  local_3c = *(undefined1 *)param_1[1];
  local_50 = param_2;
  if (param_2 == 0 || local_40 < 0) {
    local_38 = L"ApplyPNTessellation_Error";
    local_30 = 0x19;
    FUN_1446e940c(local_6c,&local_38);
    local_38 = L"UGeometryScriptLibrary_MeshSubdivideFunctions";
    local_30 = 0x2d;
    FUN_1446e940c(local_70,&local_38);
    local_38 = L"ApplyPNTessellation: The inputs are invalid";
    local_30 = 0x2b;
    FUN_140208c1e(local_68,local_70,local_6c,&local_38);
    uVar2 = *(undefined8 *)param_1[2];
    uVar3 = 2;
  }
  else {
    cVar1 = FUN_148324b68(&local_58);
    if (cVar1 != '\0') goto LAB_143be5891;
    local_38 = L"ApplyPNTessellation_Failed";
    local_30 = 0x1a;
    FUN_1446e940c(local_6c,&local_38);
    local_38 = L"UGeometryScriptLibrary_MeshSubdivideFunctions";
    local_30 = 0x2d;
    FUN_1446e940c(local_70,&local_38);
    local_38 = L"ApplyPNTessellation: Tessellation failed";
    local_30 = 0x28;
    FUN_140208c1e(local_68,local_70,local_6c,&local_38);
    uVar2 = *(undefined8 *)param_1[2];
    uVar3 = 3;
  }
  FUN_143ba90d7(uVar2,uVar3,local_68);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
LAB_143be5891:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be58b2 FUN_143be58b2 body=575 status=ok
// SIG undefined FUN_143be58b2(void)

void FUN_143be58b2(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_158 [32];
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  longlong *local_130 [2];
  wchar_t *local_120;
  undefined4 local_118;
  undefined **local_110;
  undefined8 local_108;
  int local_100;
  undefined2 local_fc;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_110 = &PTR_FUN_14ae72d40;
  local_108 = 0;
  local_fc = 1;
  local_c0 = 0;
  local_b8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_b4 = 0xffffffff00000080;
  local_ac = 0;
  local_a0 = 0;
  local_98 = 0;
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_64 = 0xffffffff00000080;
  local_5c = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 1;
  local_100 = *(int *)*param_1;
  local_f8 = param_2;
  if (param_2 == 0 || local_100 < 0) {
    local_120 = L"ApplyUniformTessellation_Error";
    local_118 = 0x1e;
    FUN_1446e940c(local_134,&local_120);
    local_120 = L"UGeometryScriptLibrary_MeshSubdivideFunctions";
    local_118 = 0x2d;
    FUN_1446e940c(local_138,&local_120);
    local_120 = L"ApplyUniformTessellation: The inputs are invalid";
    local_118 = 0x30;
    FUN_140208c1e(local_130,local_138,local_134,&local_120);
    uVar2 = *(undefined8 *)param_1[1];
    uVar3 = 2;
  }
  else {
    cVar1 = FUN_148324074(&local_110);
    if (cVar1 != '\0') goto LAB_143be5ac0;
    local_120 = L"ApplyUniformTessellation_Failed";
    local_118 = 0x1f;
    FUN_1446e940c(local_134,&local_120);
    local_120 = L"UGeometryScriptLibrary_MeshSubdivideFunctions";
    local_118 = 0x2d;
    FUN_1446e940c(local_138,&local_120);
    local_120 = L"ApplyUniformTessellation: Tessellation failed";
    local_118 = 0x2d;
    FUN_140208c1e(local_130,local_138,local_134,&local_120);
    uVar2 = *(undefined8 *)param_1[1];
    uVar3 = 3;
  }
  FUN_143ba90d7(uVar2,uVar3,local_130);
  if (local_130[0] != (longlong *)0x0) {
    (**(code **)(*local_130[0] + 0x10))();
  }
LAB_143be5ac0:
  FUN_1482f16dc(&local_110);
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be5af2 FUN_143be5af2 body=755 status=ok
// SIG undefined FUN_143be5af2(void)

void FUN_143be5af2(undefined8 *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  char cVar2;
  undefined1 auStack_2f8 [32];
  undefined1 local_2d8;
  undefined1 local_2d0 [4];
  undefined1 local_2cc [4];
  longlong *local_2c8 [2];
  longlong local_2b8;
  undefined8 uStack_2b0;
  undefined **local_2a8;
  undefined8 local_2a0;
  undefined1 local_298;
  wchar_t *local_290;
  undefined1 *local_288;
  undefined8 local_280;
  longlong local_278;
  undefined1 local_270;
  wchar_t *local_268;
  undefined4 local_260;
  undefined1 local_258 [544];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  local_2d8 = 0;
  FUN_1411b354a(local_258,0,0,0);
  local_2a8 = &PTR_FUN_14afa46a0;
  local_2a0 = 0;
  local_298 = 1;
  local_290 = (wchar_t *)0x0;
  local_280 = 0;
  local_270 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_288 = local_258;
  local_278 = param_2;
  FUN_143bab15a(*param_1,param_2,&local_2b8,1);
  if ((int)uStack_2b0 == 0) {
    if ((*(char *)(param_1[1] + 1) != '\0') || (*(char *)param_1[2] != '\0')) goto LAB_143be5cb9;
LAB_143be5cff:
    FUN_14832da8c(&local_268,param_2,*(undefined4 *)param_1[3]);
  }
  else {
    if (*(char *)param_1[2] != '\0') goto LAB_143be5cb9;
    if ((int)uStack_2b0 < 1) goto LAB_143be5cff;
    FUN_14832db8a(&local_268,param_2,*(undefined4 *)param_1[3],&local_2b8);
  }
  pwVar1 = local_268;
  local_290 = local_268;
  local_298 = *(undefined1 *)param_1[1];
  if (local_268 == (wchar_t *)0x0 || param_2 == 0) {
    local_268 = L"ApplyAdapativeTessellation_Error";
    local_260 = 0x20;
    FUN_1446e940c(local_2cc,&local_268);
    local_268 = L"UGeometryScriptLibrary_MeshSubdivideFunctions";
    local_260 = 0x2d;
    FUN_1446e940c(local_2d0,&local_268);
    local_268 = L"ApplyAdapativeTessellation: The inputs are invalid";
    local_260 = 0x32;
    FUN_140208c1e(local_2c8,local_2d0,local_2cc,&local_268);
    FUN_143ba90d7(*(undefined8 *)param_1[4],2,local_2c8);
    if (local_2c8[0] != (longlong *)0x0) {
      (**(code **)(*local_2c8[0] + 0x10))();
    }
    if (pwVar1 == (wchar_t *)0x0) goto LAB_143be5cb9;
  }
  else {
    cVar2 = FUN_14832e82c(&local_2a8);
    if (cVar2 == '\0') {
      local_268 = L"ApplyAdapativeTessellate_Failed";
      local_260 = 0x1f;
      FUN_1446e940c(local_2cc,&local_268);
      local_268 = L"UGeometryScriptLibrary_MeshSubdivideFunctions";
      local_260 = 0x2d;
      FUN_1446e940c(local_2d0,&local_268);
      local_268 = L"ApplyAdapativeTessellate: Tessellation failed";
      local_260 = 0x2d;
      FUN_140208c1e(local_2c8,local_2d0,local_2cc,&local_268);
      FUN_143ba90d7(*(undefined8 *)param_1[4],3,local_2c8);
      if (local_2c8[0] != (longlong *)0x0) {
        (**(code **)(*local_2c8[0] + 0x10))();
      }
    }
    else {
      FUN_146c00942(param_2,local_258);
    }
  }
  (*(code *)**(undefined8 **)pwVar1)(pwVar1,1);
LAB_143be5cb9:
  if (local_2b8 != 0) {
    FUN_1400020a8();
  }
  FUN_141082778(local_258);
  if ((local_38 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be5de6 FUN_143be5de6 body=122 status=ok
// SIG undefined FUN_143be5de6(void)

void FUN_143be5de6(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)*param_1;
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  local_48 = puVar1[2];
  uStack_40 = puVar1[3];
  local_38 = puVar1[4];
  uStack_30 = puVar1[5];
  local_28 = puVar1[6];
  local_20 = *(undefined4 *)(puVar1 + 8);
  uStack_1c = *(undefined4 *)((longlong)puVar1 + 0x44);
  uStack_18 = *(undefined4 *)(puVar1 + 9);
  uStack_14 = *(undefined4 *)((longlong)puVar1 + 0x4c);
  local_10 = puVar1[10];
  FUN_146c3cd49(param_2,&local_58,*(undefined1 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be5e62 FUN_143be5e62 body=79 status=ok
// SIG undefined FUN_143be5e62(void)

void FUN_143be5e62(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined4 *)*param_1;
  local_18 = *(undefined8 *)(puVar1 + 4);
  local_28 = *puVar1;
  uStack_24 = puVar1[1];
  uStack_20 = puVar1[2];
  uStack_1c = puVar1[3];
  FUN_146c3c4e4(param_2);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be5ec4 FUN_143be5ec4 body=115 status=ok
// SIG undefined FUN_143be5ec4(void)

void FUN_143be5ec4(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)param_1[1];
  local_18 = puVar1[2];
  local_28 = *puVar1;
  uStack_20 = puVar1[1];
  puVar2 = (undefined4 *)*param_1;
  local_38 = *(undefined8 *)(puVar2 + 4);
  local_48 = *puVar2;
  uStack_44 = puVar2[1];
  uStack_40 = puVar2[2];
  uStack_3c = puVar2[3];
  local_58 = 0;
  FUN_146c3c569(param_2,&local_48,&local_28,*(undefined1 *)param_1[2]);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be5f38 FUN_143be5f38 body=590 status=ok
// SIG undefined FUN_143be5f38(void)

void FUN_143be5f38(undefined8 *param_1,longlong param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  uint uVar4;
  double *pdVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  char cVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  double local_b8;
  longlong local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_143bab15a(*param_1,param_2,&local_a8,3);
  lVar10 = local_a8;
  lVar15 = (longlong)(int)uStack_a0;
  if (lVar15 != 0) {
    lVar13 = 0;
    do {
      uVar4 = *(uint *)(lVar10 + lVar13);
      if ((-1 < (int)uVar4) &&
         ((int)uVar4 < *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24))) {
        uVar14 = (ulonglong)(uVar4 >> 9);
        uVar12 = (ulonglong)(uVar4 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + uVar14 * 8) +
                               uVar12 * 2) - 1U) < 0xfffe) {
          pdVar5 = (double *)param_1[1];
          lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar14 * 8);
          pdVar1 = (double *)(lVar6 + uVar12 * 0x18);
          dVar17 = *pdVar1 * pdVar5[8];
          dVar18 = pdVar1[1] * pdVar5[9];
          dVar16 = *(double *)(lVar6 + 0x10 + uVar12 * 0x18) * pdVar5[10];
          dVar7 = *pdVar5;
          dVar8 = pdVar5[1];
          dVar9 = pdVar5[2];
          dVar3 = pdVar5[3];
          dVar19 = dVar18 * dVar7 - dVar17 * dVar8;
          dVar20 = dVar16 * dVar8 - dVar18 * dVar9;
          dVar21 = dVar17 * dVar9 - dVar7 * dVar16;
          dVar20 = dVar20 + dVar20;
          dVar21 = dVar21 + dVar21;
          dVar19 = dVar19 + dVar19;
          dVar18 = (dVar9 * dVar20 - dVar7 * dVar19) + pdVar5[3] * dVar21 + dVar18 + pdVar5[5];
          local_b8 = dVar19 * dVar3 + dVar16 + (dVar21 * dVar7 - dVar20 * dVar8) + pdVar5[6];
          local_c8._8_4_ = SUB84(dVar18,0);
          local_c8._0_8_ = (dVar19 * dVar8 - dVar21 * dVar9) + dVar3 * dVar20 + dVar17 + pdVar5[4];
          local_c8._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
          cVar11 = FUN_146bfed03(local_c8);
          if (cVar11 != '\0') {
            lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar14 * 8);
            *(double *)(lVar6 + 0x10 + uVar12 * 0x18) = local_b8;
            puVar2 = (undefined8 *)(lVar6 + uVar12 * 0x18);
            *puVar2 = local_c8._0_8_;
            puVar2[1] = local_c8._8_8_;
            if (*(char *)(param_2 + 0x210) == '\x01') {
              LOCK();
              *(int *)(param_2 + 0x214) = *(int *)(param_2 + 0x214) + 1;
              UNLOCK();
            }
          }
        }
      }
      lVar13 = lVar13 + 4;
    } while (lVar15 * 4 != lVar13);
  }
  if (local_a8 != 0) {
    FUN_1400020a8(local_a8);
  }
  if ((local_90 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143be6188 FUN_143be6188 body=359 status=ok
// SIG undefined FUN_143be6188(void)

void FUN_143be6188(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  double local_70;
  double dStack_68;
  double local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)*param_1;
  if (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 0x3c)) {
    local_58 = 0;
    uStack_50 = 0;
    FUN_143bab15a((longlong *)*param_1,param_2,&local_58,3);
    lVar2 = local_58;
    lVar9 = (longlong)(int)uStack_50;
    if (lVar9 != 0) {
      lVar7 = 0;
      do {
        uVar1 = *(uint *)(lVar2 + lVar7);
        if ((-1 < (int)uVar1) &&
           ((int)uVar1 < *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24))) {
          uVar8 = (ulonglong)(uVar1 >> 9);
          uVar6 = (ulonglong)(uVar1 & 0x1ff);
          if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + uVar8 * 8) +
                                 uVar6 * 2) - 1U) < 0xfffe) {
            lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar8 * 8);
            pdVar4 = (double *)param_1[1];
            local_60 = *(double *)(lVar3 + 0x10 + uVar6 * 0x18) + pdVar4[2];
            dStack_68 = *(double *)(lVar3 + 8 + uVar6 * 0x18) + pdVar4[1];
            local_70 = *(double *)(lVar3 + uVar6 * 0x18) + *pdVar4;
            cVar5 = FUN_146bfed03(&local_70);
            if (cVar5 != '\0') {
              lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar8 * 8);
              *(double *)(lVar3 + 0x10 + uVar6 * 0x18) = local_60;
              pdVar4 = (double *)(lVar3 + uVar6 * 0x18);
              *pdVar4 = local_70;
              pdVar4[1] = dStack_68;
              if (*(char *)(param_2 + 0x210) == '\x01') {
                LOCK();
                *(int *)(param_2 + 0x214) = *(int *)(param_2 + 0x214) + 1;
                UNLOCK();
              }
            }
          }
        }
        lVar7 = lVar7 + 4;
      } while (lVar9 * 4 != lVar7);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143be62f0 FUN_143be62f0 body=457 status=ok
// SIG undefined FUN_143be62f0(void)

void FUN_143be62f0(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double dStack_68;
  double local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *(longlong *)*param_1;
  if (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 0x3c)) {
    local_58 = 0;
    uStack_50 = 0;
    FUN_143bab15a((longlong *)*param_1,param_2,&local_58,3);
    lVar2 = local_58;
    lVar8 = (longlong)(int)uStack_50;
    if (lVar8 != 0) {
      lVar7 = 0;
      do {
        uVar1 = *(uint *)(lVar2 + lVar7);
        if ((-1 < (int)uVar1) &&
           ((int)uVar1 < *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24))) {
          uVar9 = (ulonglong)(uVar1 >> 9);
          uVar6 = (ulonglong)(uVar1 & 0x1ff);
          if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + uVar9 * 8) +
                                 uVar6 * 2) - 1U) < 0xfffe) {
            lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar9 * 8);
            pdVar4 = (double *)param_1[2];
            local_90 = *(double *)(lVar3 + 0x10 + uVar6 * 0x18) - pdVar4[2];
            local_98 = *(double *)(lVar3 + 8 + uVar6 * 0x18) - pdVar4[1];
            local_a0 = *(double *)(lVar3 + uVar6 * 0x18) - *pdVar4;
            FUN_1401c9a0e(param_1[1],&local_88,&local_a0);
            pdVar4 = (double *)param_1[2];
            local_60 = local_78 + pdVar4[2];
            dStack_68 = local_80 + pdVar4[1];
            local_70 = local_88 + *pdVar4;
            cVar5 = FUN_146bfed03(&local_70);
            if (cVar5 != '\0') {
              lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar9 * 8);
              *(double *)(lVar3 + 0x10 + uVar6 * 0x18) = local_60;
              pdVar4 = (double *)(lVar3 + uVar6 * 0x18);
              *pdVar4 = local_70;
              pdVar4[1] = dStack_68;
              if (*(char *)(param_2 + 0x210) == '\x01') {
                LOCK();
                *(int *)(param_2 + 0x214) = *(int *)(param_2 + 0x214) + 1;
                UNLOCK();
              }
            }
          }
        }
        lVar7 = lVar7 + 4;
      } while (lVar8 * 4 != lVar7);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143be64ba FUN_143be64ba body=412 status=ok
// SIG undefined FUN_143be64ba(void)

void FUN_143be64ba(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  double *pdVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  double local_70;
  double dStack_68;
  double local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)*param_1;
  if (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 0x3c)) {
    local_58 = 0;
    uStack_50 = 0;
    FUN_143bab15a((longlong *)*param_1,param_2,&local_58,3);
    lVar2 = local_58;
    lVar10 = (longlong)(int)uStack_50;
    if (lVar10 != 0) {
      lVar8 = 0;
      do {
        uVar1 = *(uint *)(lVar2 + lVar8);
        if ((-1 < (int)uVar1) &&
           ((int)uVar1 < *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24))) {
          uVar9 = (ulonglong)(uVar1 >> 9);
          uVar7 = (ulonglong)(uVar1 & 0x1ff);
          if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + uVar9 * 8) +
                                 uVar7 * 2) - 1U) < 0xfffe) {
            lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar9 * 8);
            pdVar4 = (double *)param_1[1];
            pdVar5 = (double *)param_1[2];
            local_60 = (*(double *)(lVar3 + 0x10 + uVar7 * 0x18) - pdVar4[2]) * pdVar5[2] +
                       pdVar4[2];
            dStack_68 = (*(double *)(lVar3 + 8 + uVar7 * 0x18) - pdVar4[1]) * pdVar5[1] + pdVar4[1];
            local_70 = (*(double *)(lVar3 + uVar7 * 0x18) - *pdVar4) * *pdVar5 + *pdVar4;
            cVar6 = FUN_146bfed03(&local_70);
            if (cVar6 != '\0') {
              lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar9 * 8);
              *(double *)(lVar3 + 0x10 + uVar7 * 0x18) = local_60;
              pdVar4 = (double *)(lVar3 + uVar7 * 0x18);
              *pdVar4 = local_70;
              pdVar4[1] = dStack_68;
              if (*(char *)(param_2 + 0x210) == '\x01') {
                LOCK();
                *(int *)(param_2 + 0x214) = *(int *)(param_2 + 0x214) + 1;
                UNLOCK();
              }
            }
          }
        }
        lVar8 = lVar8 + 4;
      } while (lVar10 * 4 != lVar8);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143be6658 FUN_143be6658 body=100 status=ok
// SIG undefined FUN_143be6658(void)

void FUN_143be6658(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x208);
  if (plVar3 == (longlong *)0x0) {
    FUN_14582ed12(param_2);
    plVar3 = *(longlong **)(param_2 + 0x208);
  }
  iVar1 = *(int *)*param_1;
  iVar2 = (**(code **)(*plVar3 + 0xa0))();
  if (iVar1 == iVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143be66a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_2 + 0x208) + 0xa8))
            (*(longlong **)(param_2 + 0x208),*(undefined4 *)*param_1);
  return;
}



// FUNCTION 143be66bc FUN_143be66bc body=374 status=ok
// SIG undefined FUN_143be66bc(void)

void FUN_143be66bc(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  wchar_t *local_60;
  undefined4 local_58;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong **)(param_2 + 0x208) != (longlong *)0x0) {
    iVar1 = *(int *)*param_1;
    iVar3 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xa0))();
    plVar2 = *(longlong **)(param_2 + 0x208);
    if (iVar1 < iVar3) {
      iVar1 = *(int *)*param_1;
      lVar4 = 0;
      if ((-1 < (longlong)iVar1) && (iVar1 < (int)plVar2[5])) {
        lVar4 = *(longlong *)(plVar2[4] + (longlong)iVar1 * 8);
      }
    }
    else {
      lVar4 = 0;
    }
    iVar1 = *(int *)param_1[1];
    iVar3 = (**(code **)(*plVar2 + 0xa0))();
    if (iVar1 < iVar3) {
      iVar1 = *(int *)param_1[1];
      if ((((-1 < (longlong)iVar1) && (iVar1 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28))) &&
          (lVar4 != 0)) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + (longlong)iVar1 * 8)
          != 0)) {
        FUN_148325be8(&local_60,param_2);
        FUN_148337614(&local_60,lVar4);
        goto LAB_143be67f4;
      }
    }
  }
  local_60 = L"SetNumUVSets_CopyUVSet";
  local_58 = 0x16;
  FUN_1446e940c(local_44,&local_60);
  local_60 = L"UGeometryScriptLibrary_MeshUVFunctions";
  local_58 = 0x26;
  FUN_1446e940c(local_48,&local_60);
  local_60 = L"CopyUVSet: From or To UV Set does not Exist";
  local_58 = 0x2b;
  FUN_140208c1e(local_40,local_48,local_44,&local_60);
  FUN_143ba90d7(*(undefined8 *)param_1[2],2,local_40);
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
LAB_143be67f4:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be6834 FUN_143be6834 body=368 status=ok
// SIG undefined FUN_143be6834(void)

void FUN_143be6834(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [44];
  float local_3c;
  float local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)*param_1;
  if ((((-1 < (int)uVar1) &&
       ((int)uVar1 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) &&
      ((ushort)(*(short *)(*(longlong *)
                            (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar1 >> 9) * 8) +
                          (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
     (*(longlong **)(param_2 + 0x208) != (longlong *)0x0)) {
    iVar2 = *(int *)param_1[1];
    iVar4 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xa0))();
    if (iVar2 < iVar4) {
      iVar2 = *(int *)param_1[1];
      if (((-1 < (longlong)iVar2) && (iVar2 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28))) &&
         (lVar3 = *(longlong *)
                   (*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + (longlong)iVar2 * 8),
         lVar3 != 0)) {
        *(undefined1 *)param_1[2] = 1;
        local_38 = (float)((double *)param_1[3])[1];
        local_3c = (float)*(double *)param_1[3];
        fVar5 = (float)FUN_146c2d0a4(lVar3,&local_3c);
        local_38 = (float)*(double *)(param_1[3] + 0x18);
        local_3c = (float)*(double *)(param_1[3] + 0x10);
        uVar6 = FUN_146c2d0a4(lVar3,&local_3c);
        local_38 = (float)*(double *)(param_1[3] + 0x28);
        local_3c = (float)*(double *)(param_1[3] + 0x20);
        local_34 = FUN_146c2d0a4(lVar3,&local_3c);
        local_3c = fVar5;
        local_38 = (float)uVar6;
        FUN_146c01486(lVar3,*(undefined4 *)*param_1,&local_3c,1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be69a6 FUN_143be69a6 body=171 status=ok
// SIG undefined FUN_143be69a6(void)

void FUN_143be69a6(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong **)(param_2 + 0x208) != (longlong *)0x0) {
    iVar1 = *(int *)*param_1;
    iVar2 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xa0))();
    if (iVar1 < iVar2) {
      iVar1 = *(int *)*param_1;
      if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28))) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + (longlong)iVar1 * 8)
          != 0)) {
        *(undefined1 *)param_1[1] = 1;
        local_24 = (float)((double *)param_1[3])[1];
        local_28 = (float)*(double *)param_1[3];
        uVar3 = FUN_146c2d0a4();
        *(undefined4 *)param_1[2] = uVar3;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be6a52 FUN_143be6a52 body=379 status=ok
// SIG undefined FUN_143be6a52(void)

void FUN_143be6a52(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)*param_1;
  if ((((-1 < (int)uVar1) &&
       ((int)uVar1 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) &&
      ((ushort)(*(short *)(*(longlong *)
                            (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar1 >> 9) * 8) +
                          (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
     (*(longlong **)(param_2 + 0x208) != (longlong *)0x0)) {
    iVar5 = *(int *)param_1[1];
    iVar4 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xa0))();
    if (iVar5 < iVar4) {
      iVar5 = *(int *)param_1[1];
      if (((-1 < (longlong)iVar5) && (iVar5 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28))) &&
         (lVar2 = *(longlong *)
                   (*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + (longlong)iVar5 * 8),
         lVar2 != 0)) {
        lVar7 = *(longlong *)
                 (*(longlong *)(param_2 + 0x130) + (ulonglong)(*(uint *)*param_1 >> 9) * 8);
        uVar6 = (ulonglong)(*(uint *)*param_1 & 0x1ff);
        local_28 = *(undefined4 *)(lVar7 + 8 + uVar6 * 0xc);
        local_30 = *(undefined8 *)(lVar7 + uVar6 * 0xc);
        puVar3 = (undefined4 *)param_1[2];
        lVar7 = 0;
        do {
          iVar5 = *(int *)(*(longlong *)
                            (*(longlong *)(lVar2 + 0x60) + (ulonglong)((uint)puVar3[lVar7] >> 9) * 8
                            ) + (ulonglong)(puVar3[lVar7] & 0x1ff) * 4);
          if ((iVar5 != -1) && (iVar5 != *(int *)((longlong)&local_30 + lVar7 * 4)))
          goto LAB_143be6baf;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 3);
        local_3c = *puVar3;
        local_38 = puVar3[1];
        local_34 = puVar3[2];
        iVar5 = FUN_146c01486();
        if (iVar5 == 0) {
          *(undefined1 *)param_1[3] = 1;
        }
      }
    }
  }
LAB_143be6baf:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be6bce FUN_143be6bce body=322 status=ok
// SIG undefined FUN_143be6bce(void)

void FUN_143be6bce(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = *(uint *)*param_1;
  if ((((-1 < (int)uVar7) &&
       ((int)uVar7 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) &&
      ((ushort)(*(short *)(*(longlong *)
                            (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar7 >> 9) * 8) +
                          (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
     (*(longlong **)(param_2 + 0x208) != (longlong *)0x0)) {
    iVar1 = *(int *)param_1[1];
    iVar6 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xa0))();
    if (iVar1 < iVar6) {
      iVar1 = *(int *)param_1[1];
      if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28))) &&
         ((lVar4 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + (longlong)iVar1 * 8),
          lVar4 != 0 &&
          (-1 < *(int *)(*(longlong *)
                          (*(longlong *)(lVar4 + 0x78) +
                          (ulonglong)((uint)(*(int *)*param_1 * 3) >> 9) * 8) +
                        (ulonglong)(*(int *)*param_1 * 3 & 0x1ff) * 4))))) {
        *(undefined1 *)param_1[2] = 1;
        puVar5 = (undefined4 *)param_1[3];
        iVar1 = *(int *)*param_1;
        uVar7 = iVar1 * 3 + 2;
        lVar4 = *(longlong *)(lVar4 + 0x78);
        uVar2 = *(undefined4 *)
                 (*(longlong *)(lVar4 + (ulonglong)(uVar7 >> 9) * 8) +
                 (ulonglong)(uVar7 & 0x1ff) * 4);
        uVar7 = iVar1 * 3 + 1;
        uVar3 = *(undefined4 *)
                 (*(longlong *)(lVar4 + (ulonglong)(uVar7 >> 9) * 8) +
                 (ulonglong)(uVar7 & 0x1ff) * 4);
        *puVar5 = *(undefined4 *)
                   (*(longlong *)(lVar4 + (ulonglong)((uint)(iVar1 * 3) >> 9) * 8) +
                   (ulonglong)(iVar1 * 3 & 0x1ff) * 4);
        puVar5[1] = uVar3;
        puVar5[2] = uVar2;
      }
    }
  }
  return;
}



// FUNCTION 143be6d10 FUN_143be6d10 body=223 status=ok
// SIG undefined FUN_143be6d10(void)

void FUN_143be6d10(undefined8 *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  double *pdVar5;
  int iVar6;
  ulonglong uVar7;
  
  if (*(longlong **)(param_2 + 0x208) != (longlong *)0x0) {
    iVar2 = *(int *)*param_1;
    iVar6 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xa0))();
    if (iVar2 < iVar6) {
      iVar2 = *(int *)*param_1;
      if ((((-1 < (longlong)iVar2) && (iVar2 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28))) &&
          (lVar4 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + (longlong)iVar2 * 8),
          lVar4 != 0)) &&
         (((uVar3 = *(uint *)param_1[1], -1 < (int)uVar3 &&
           ((int)uVar3 < *(int *)(lVar4 + 8) * 0x200 + *(int *)(lVar4 + 0xc))) &&
          ((ushort)(*(short *)(*(longlong *)
                                (*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar3 >> 9) * 8) +
                              (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe)))) {
        *(undefined1 *)param_1[2] = 1;
        pdVar5 = (double *)param_1[3];
        lVar4 = *(longlong *)
                 (*(longlong *)(lVar4 + 0x48) + (ulonglong)(*(uint *)param_1[1] >> 5 & 0x3fffff8));
        uVar7 = (ulonglong)((*(uint *)param_1[1] & 0xff) << 3);
        fVar1 = *(float *)(lVar4 + 4 + uVar7);
        *pdVar5 = (double)*(float *)(lVar4 + uVar7);
        pdVar5[1] = (double)fVar1;
      }
    }
  }
  return;
}



// FUNCTION 143be6df0 FUN_143be6df0 body=235 status=ok
// SIG undefined FUN_143be6df0(void)

void FUN_143be6df0(undefined8 *param_1,longlong param_2)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (*(longlong **)(param_2 + 0x208) != (longlong *)0x0) {
    iVar2 = *(int *)*param_1;
    iVar5 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xa0))();
    if (iVar2 < iVar5) {
      iVar2 = *(int *)*param_1;
      if ((((-1 < (longlong)iVar2) && (iVar2 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28))) &&
          (lVar4 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + (longlong)iVar2 * 8),
          lVar4 != 0)) &&
         (((uVar3 = *(uint *)param_1[1], -1 < (int)uVar3 &&
           ((int)uVar3 < *(int *)(lVar4 + 8) * 0x200 + *(int *)(lVar4 + 0xc))) &&
          ((ushort)(*(short *)(*(longlong *)
                                (*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar3 >> 9) * 8) +
                              (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe)))) {
        *(undefined1 *)param_1[2] = 1;
        uVar6 = (ulonglong)(*(uint *)param_1[1] >> 5 & 0x3fffff8);
        uVar7 = (ulonglong)((*(uint *)param_1[1] & 0xff) << 3);
        dVar1 = ((double *)param_1[3])[1];
        *(float *)(*(longlong *)(*(longlong *)(lVar4 + 0x48) + uVar6) + uVar7) =
             (float)*(double *)param_1[3];
        *(float *)(*(longlong *)(*(longlong *)(lVar4 + 0x48) + uVar6) + 4 + uVar7) = (float)dVar1;
      }
    }
  }
  return;
}



// FUNCTION 143be6edc FUN_143be6edc body=211 status=ok
// SIG undefined FUN_143be6edc(void)

void FUN_143be6edc(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_2 + 0x208) != (longlong *)0x0) {
    iVar1 = *(int *)*param_1;
    iVar2 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xa0))();
    if (iVar1 < iVar2) {
      iVar1 = *(int *)*param_1;
      if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28))) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + (longlong)iVar1 * 8)
          != 0)) {
        *(undefined1 *)param_1[1] = 1;
        iVar1 = *(int *)*param_1;
        uVar3 = 0;
        if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28))) {
          uVar3 = *(undefined8 *)
                   (*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + (longlong)iVar1 * 8);
        }
        FUN_148325be8(local_48,param_2,uVar3);
        local_30 = uVar3;
        (**(code **)param_1[2])(((undefined8 *)param_1[2])[1],param_2,&local_30,local_48);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be6fb0 FUN_143be6fb0 body=221 status=ok
// SIG undefined FUN_143be6fb0(void)

void FUN_143be6fb0(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *param_2 * 3;
  lVar2 = *(longlong *)(*param_1 + 0x78);
  iVar1 = *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar3 >> 9) * 8) +
                  (ulonglong)(uVar3 & 0x1ff) * 4);
  if (-1 < iVar1) {
    local_24 = *(undefined4 *)
                (*(longlong *)(lVar2 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
                (ulonglong)(uVar3 + 2 & 0x1ff) * 4);
    local_28 = *(undefined4 *)
                (*(longlong *)(lVar2 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
    local_2c = iVar1;
    FUN_1447cbafe(param_1[1],local_30,&local_2c,0);
    FUN_1447cbafe(param_1[1],local_30,&local_28,0);
    FUN_1447cbafe(param_1[1],local_30,&local_24,0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be708e FUN_143be708e body=365 status=ok
// SIG undefined FUN_143be708e(void)

void FUN_143be708e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  ulonglong uStack_80;
  undefined1 local_78 [16];
  longlong local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_143bab15a(*param_1,param_2,&local_a8,2);
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0x80;
  uStack_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_98 = local_a8;
  local_90 = (undefined4)uStack_a0;
  FUN_146bc855c();
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_146bcfc22(&local_88,*(undefined8 *)(param_4 + 8),0);
  }
  else {
    FUN_146bcf4da(&local_88,*(undefined8 *)(param_4 + 8));
  }
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  uVar1 = uStack_80 >> 0x20;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_1447a08a2(&local_88,0);
  }
  uStack_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    FUN_1446efbd8(local_78,0);
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be71fc FUN_143be71fc body=94 status=ok
// SIG undefined FUN_143be71fc(void)

void FUN_143be71fc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1[1];
  local_10 = &local_20;
  local_18 = &LAB_143be725c;
  FUN_1485d0599(param_2,*param_3,*param_1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be7280 FUN_143be7280 body=102 status=ok
// SIG undefined FUN_143be7280(void)

void FUN_143be7280(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_1[1];
  local_10 = &local_28;
  local_20 = param_1[2];
  local_18 = &LAB_143be72e8;
  FUN_1485d0599(param_2,*param_3,*param_1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be732a FUN_143be732a body=102 status=ok
// SIG undefined FUN_143be732a(void)

void FUN_143be732a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_1[1];
  local_10 = &local_28;
  local_20 = param_1[2];
  local_18 = &LAB_143be7392;
  FUN_1485d0599(param_2,*param_3,*param_1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be73ee FUN_143be73ee body=248 status=ok
// SIG undefined FUN_143be73ee(void)

void FUN_143be73ee(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined8 local_c0;
  undefined1 local_a9;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  code *local_48;
  undefined8 **local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_38[0] = 0;
  local_38[1] = 0;
  local_40 = &local_88;
  local_48 = FUN_143be74e8;
  local_88 = local_38;
  FUN_143bac7da(*param_1,param_2,&local_48,1);
  puVar1 = (undefined8 *)param_1[1];
  local_88 = (longlong *)puVar1[4];
  uStack_80 = puVar1[5];
  local_78 = puVar1[6];
  local_70 = *puVar1;
  uStack_68 = puVar1[1];
  local_60 = *(undefined4 *)(puVar1 + 2);
  uStack_5c = *(undefined4 *)((longlong)puVar1 + 0x14);
  uStack_58 = *(undefined4 *)(puVar1 + 3);
  uStack_54 = *(undefined4 *)((longlong)puVar1 + 0x1c);
  local_98 = *(undefined4 *)(puVar1 + 8);
  uStack_94 = *(undefined4 *)((longlong)puVar1 + 0x44);
  uStack_90 = *(undefined4 *)(puVar1 + 9);
  uStack_8c = *(undefined4 *)((longlong)puVar1 + 0x4c);
  local_c8 = &local_98;
  local_a0 = &local_a9;
  local_a8 = &LAB_143be751c;
  local_c0 = 0;
  FUN_148337f42(param_4,local_38,&local_a8,&local_88);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be74e8 FUN_143be74e8 body=51 status=ok
// SIG undefined FUN_143be74e8(void)

void FUN_143be74e8(longlong *param_1,undefined4 *param_2)

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



// FUNCTION 143be7530 FUN_143be7530 body=268 status=ok
// SIG undefined FUN_143be7530(void)

void FUN_143be7530(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined1 local_b9;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  code *local_48;
  undefined8 **local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_38[0] = 0;
  local_38[1] = 0;
  local_40 = &local_88;
  local_48 = FUN_143be763e;
  local_88 = local_38;
  FUN_143bac7da(*param_1,param_2,&local_48,1);
  puVar1 = (undefined8 *)param_1[1];
  local_88 = (longlong *)puVar1[4];
  uStack_80 = puVar1[5];
  local_78 = puVar1[6];
  local_70 = *puVar1;
  uStack_68 = puVar1[1];
  local_60 = puVar1[2];
  uStack_58 = puVar1[3];
  local_a8 = *(undefined4 *)(puVar1 + 8);
  uStack_a4 = *(undefined4 *)((longlong)puVar1 + 0x44);
  uStack_a0 = *(undefined4 *)(puVar1 + 9);
  uStack_9c = *(undefined4 *)((longlong)puVar1 + 0x4c);
  local_98 = puVar1[10];
  local_d8 = &local_a8;
  local_d0 = *(undefined4 *)param_1[2];
  local_b0 = &local_b9;
  local_b8 = &LAB_143be7672;
  local_c8 = 0;
  FUN_14833ab42(param_4,local_38,&local_b8,&local_88);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be763e FUN_143be763e body=51 status=ok
// SIG undefined FUN_143be763e(void)

void FUN_143be763e(longlong *param_1,undefined4 *param_2)

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



// FUNCTION 143be7686 FUN_143be7686 body=272 status=ok
// SIG undefined FUN_143be7686(void)

void FUN_143be7686(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined1 local_b9;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  code *local_48;
  undefined8 **local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_38[0] = 0;
  local_38[1] = 0;
  local_40 = &local_88;
  local_48 = FUN_143be7798;
  local_88 = local_38;
  FUN_143bac7da(*param_1,param_2,&local_48,1);
  puVar1 = (undefined8 *)param_1[1];
  local_88 = (longlong *)puVar1[4];
  uStack_80 = puVar1[5];
  local_78 = puVar1[6];
  local_70 = *puVar1;
  uStack_68 = puVar1[1];
  local_60 = puVar1[2];
  uStack_58 = puVar1[3];
  local_a8 = puVar1[8];
  uStack_a0 = puVar1[9];
  local_98 = puVar1[10];
  local_d8 = &local_a8;
  local_d0 = *(undefined4 *)param_1[2];
  local_b0 = &local_b9;
  local_b8 = &LAB_143be77cc;
  local_c8 = 0;
  FUN_14833bba6(param_4,local_38,&local_b8,&local_88);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be7798 FUN_143be7798 body=51 status=ok
// SIG undefined FUN_143be7798(void)

void FUN_143be7798(longlong *param_1,undefined4 *param_2)

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



// FUNCTION 143be77e0 FUN_143be77e0 body=1104 status=ok
// SIG undefined FUN_143be77e0(void)

void FUN_143be77e0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_248 [40];
  undefined1 local_220 [4];
  undefined1 local_21c [4];
  longlong *local_218;
  undefined8 uStack_210;
  longlong *local_208;
  int local_200;
  wchar_t *local_1f8;
  ulonglong uStack_1f0;
  undefined1 local_1e8 [16];
  longlong local_1d8;
  undefined4 local_1d0;
  uint local_1cc;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  longlong local_1b8;
  undefined4 local_1b0;
  undefined1 local_1a8 [8];
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  int local_148;
  longlong *local_120;
  longlong *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  int local_108;
  int local_104;
  int local_100;
  undefined1 local_fc;
  undefined1 local_f8 [80];
  undefined1 local_a8 [88];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_248;
  plVar8 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_149fab260;
  plVar1 = plVar8 + 2;
  FUN_146bffece(plVar1,param_2);
  if (plVar8 == (longlong *)0x0) {
    FUN_148484526(local_1a8);
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar4 = (int *)((longlong)plVar8 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    FUN_148484526(local_1a8);
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plVar2 = local_118;
  local_120 = plVar1;
  plVar7 = plVar8;
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_118 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      puVar5 = (undefined8 *)*local_118;
      local_118 = plVar8;
      (*(code *)*puVar5)(plVar2);
      LOCK();
      piVar4 = (int *)((longlong)plVar2 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      plVar7 = local_118;
      if (*piVar4 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        plVar7 = local_118;
      }
    }
  }
  local_118 = plVar7;
  if ((ulonglong)*(byte *)*param_1 < 3) {
    local_110 = *(undefined4 *)(&DAT_14afa5938 + (ulonglong)*(byte *)*param_1 * 4);
  }
  local_218 = (longlong *)0x0;
  uStack_210 = 0;
  FUN_143bab15a(param_1[1],plVar1,&local_218,1);
  lVar9 = *param_1;
  local_104 = (int)*(float *)(lVar9 + 4);
  local_100 = (int)*(float *)(lVar9 + 8);
  local_10c = *(undefined4 *)param_1[2];
  local_108 = (int)*(float *)(lVar9 + 0xc);
  local_150 = DAT_14c846520;
  local_160 = DAT_14c846510;
  uStack_158 = DAT_14c846518;
  local_168 = DAT_14c8464f0;
  local_178 = (undefined4)DAT_14c8464e0;
  uStack_174 = DAT_14c8464e0._4_4_;
  uStack_170 = (undefined4)DAT_14c8464e8;
  uStack_16c = DAT_14c8464e8._4_4_;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  local_180 = 0x3ff0000000000000;
  local_fc = *(undefined1 *)(lVar9 + 0x10);
  if (0 < (int)uStack_210) {
    local_1d8 = 0;
    local_1d0 = 0;
    local_1f8 = (wchar_t *)0x0;
    uStack_1f0 = 0;
    local_1cc = 0x80;
    uStack_1c8 = 0xffffffff;
    local_1c4 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_208 = local_218;
    local_200 = (int)uStack_210;
    FUN_146bc855c(&local_1f8);
    FUN_146be9af0(local_f8,&local_1f8);
    local_1b0 = 0;
    if (local_1b8 != 0) {
      FUN_1400020a8();
    }
    uVar6 = uStack_1f0 >> 0x20;
    uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
    if ((int)uVar6 != 0) {
      FUN_1447a08a2(&local_1f8,0);
    }
    uStack_1c8 = 0xffffffff;
    local_1c4 = 0;
    local_1d0 = 0;
    if (0x80 < local_1cc) {
      local_1cc = 0x80;
      FUN_1446efbd8(local_1e8,0);
    }
    if (local_1d8 != 0) {
      FUN_1400020a8();
    }
    if (local_1f8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    lVar9 = *param_1;
  }
  if (*(int *)(lVar9 + 0x4c) < *(int *)(lVar9 + 0x20)) {
    if ((undefined1 *)(lVar9 + 0x18) != local_a8) {
      FUN_14848469e();
    }
  }
  FUN_143b581cc(local_1a8,0);
  puVar5 = local_1a0;
  if (local_148 == 0) {
    local_1a0 = (undefined8 *)0x0;
    FUN_146c00942(param_2,puVar5);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  else {
    FUN_146c00942(param_2,plVar1);
    local_1f8 = L"ApplyTexelDensityUVScaling_ComputeError";
    uStack_1f0._0_4_ = 0x27;
    FUN_1446e940c(local_21c,&local_1f8);
    local_1f8 = L"UGeometryScriptLibrary_MeshUVFunctions";
    uStack_1f0._0_4_ = 0x26;
    FUN_1446e940c(local_220,&local_1f8);
    local_1f8 = L"ApplyTexelDensityUVScaling: Error computing result, returning input mesh";
    uStack_1f0 = CONCAT44(uStack_1f0._4_4_,0x48);
    FUN_140208c1e(&local_208,local_220,local_21c,&local_1f8);
    FUN_143ba90d7(*(undefined8 *)param_1[3],2,&local_208);
    if (local_208 != (longlong *)0x0) {
      (**(code **)(*local_208 + 0x10))();
    }
  }
  if (local_218 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_148484612(local_1a8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar4 = (int *)((longlong)plVar8 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be7c32 FUN_143be7c32 body=1177 status=ok
// SIG undefined FUN_143be7c32(void)

void FUN_143be7c32(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  code *pcVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_148 [40];
  undefined4 local_120;
  undefined8 *local_118;
  undefined8 local_108;
  longlong **pplStack_100;
  undefined8 local_f8;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong *local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  longlong local_b8;
  longlong local_b0;
  undefined1 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  code *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_b0 = *param_3;
  local_b8 = 0;
  lVar8 = *param_1;
  if ((*(char *)(lVar8 + 1) == '\0') &&
     (*(int *)(*(longlong *)param_1[1] + 0x10) == *(int *)(*(longlong *)param_1[1] + 0x3c))) {
    if (param_2 != (longlong *)0x0) {
      bVar1 = *(byte *)(lVar8 + 0x10);
      uVar7 = *(uint *)(lVar8 + 0x14);
      if ((ulonglong)bVar1 == 0) {
        if (((-1 < (int)uVar7) && ((longlong *)param_2[0x41] != (longlong *)0x0)) &&
           (iVar6 = (**(code **)(*(longlong *)param_2[0x41] + 0xc0))(), (int)uVar7 < iVar6))
        goto LAB_143be7daa;
      }
      else if ((char)param_2[0x35] != '\0') {
LAB_143be7daa:
        lVar8 = FUN_14001cc68(0x18,0x10);
        FUN_148376c0e(lVar8,param_2,(ulonglong)uVar7 << 0x20 | (ulonglong)bVar1);
        local_b8 = lVar8;
        goto LAB_143be7dd9;
      }
    }
    local_88 = (code *)0x14afa489e;
    local_80 = 0x1e;
    FUN_1446e940c(&local_108,&local_88);
    local_88 = (code *)0x14af891d0;
    local_80 = 0x26;
    FUN_1446e940c(&local_98,&local_88);
    local_88 = (code *)0x14afa4828;
    local_80 = 0x3a;
    FUN_140208c1e(&local_d0,&local_98,&local_108,&local_88);
    FUN_143ba90d7(*(undefined8 *)param_1[2],3,&local_d0);
    if (local_d0 != (longlong *)0x0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  else {
LAB_143be7dd9:
    local_c8 = 0;
    uStack_c0 = 0;
    lVar8 = *(longlong *)param_1[1];
    local_d0 = param_2;
    if (*(int *)(lVar8 + 0x10) == *(int *)(lVar8 + 0x3c)) {
      if (*(char *)(*param_1 + 1) == '\0') {
        local_68 = &PTR_LAB_14afa48e0;
        local_60 = &local_b8;
        pcVar9 = FUN_143be80ce;
      }
      else {
        local_68 = &PTR_LAB_14afa4900;
        local_60 = &local_b0;
        pcVar9 = (code *)&LAB_143be8194;
      }
      local_78 = 0;
      local_88 = pcVar9;
      FUN_142984024(&local_d0);
    }
    else {
      local_108 = (longlong *)0x0;
      pplStack_100 = (longlong **)0x0;
      FUN_143bab15a((longlong *)param_1[1],param_2,&local_108,1);
      local_78 = 0;
      local_68 = &PTR_LAB_14afa4920;
      local_60 = &local_b0;
      local_88 = (code *)&LAB_143be81ec;
      FUN_142984384(&local_d0);
      if (local_108 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    uVar13 = uStack_c0;
    iVar6 = (int)uStack_c0;
    uVar10 = uStack_c0 & 0xffffffff;
    local_e8 = 0;
    uStack_e0 = 0;
    if ((int)uStack_c0 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar10);
    }
    if ((int)uStack_c0 != 0) {
      FUN_14475e67c(&local_e8);
      iVar11 = iVar6;
      do {
        lVar8 = (longlong)(int)uStack_e0;
        uVar7 = (int)uStack_e0 + 1;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar7);
        if (uStack_e0._4_4_ < uVar7) {
          FUN_1401c3474(&local_e8);
        }
        *(undefined1 *)(local_e8 + lVar8) = 0;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      uVar12 = 1;
      if (1 < iVar6) {
        uVar12 = uVar13 & 0xffffffff;
      }
      uVar13 = 0;
      do {
        uVar3 = *(undefined8 *)(local_c8 + uVar13 * 8);
        *(undefined1 *)(local_e8 + uVar13) = 0;
        pcVar4 = (char *)*param_1;
        cVar2 = *pcVar4;
        if (cVar2 == '\0') {
          local_108 = (longlong *)CONCAT44(local_108._4_4_,*(undefined4 *)(pcVar4 + 4));
          pplStack_100 = (longlong **)(double)*(float *)(pcVar4 + 8);
          uVar5 = FUN_148325c62(param_4,uVar3,&local_108,0);
          *(undefined1 *)(local_e8 + uVar13) = uVar5;
        }
        else {
          if (cVar2 == '\x01') {
            local_108 = (longlong *)((ulonglong)local_108 & 0xffffffffff000000);
          }
          else {
            if (cVar2 != '\x02') goto LAB_143be7fcb;
            local_108._0_3_ = CONCAT12(pcVar4[0xc],0x100);
          }
          pplStack_100 = (longlong **)0x0;
          uVar5 = FUN_148339b5e(param_4,uVar3,&local_108);
          *(undefined1 *)(local_e8 + uVar13) = uVar5;
          if (*(char *)(local_e8 + uVar13) == '\x01') {
            FUN_14833c41c(param_4,uVar3,1);
          }
        }
LAB_143be7fcb:
        uVar13 = uVar13 + 1;
      } while (uVar12 != uVar13);
    }
    if (*(char *)(*param_1 + 0x18) != '\0') {
      local_108 = &local_e8;
      local_a0 = &local_108;
      pplStack_100 = &local_d0;
      local_118 = &local_98;
      local_98 = 0;
      local_90 = 0;
      local_a8 = &LAB_143be8244;
      local_120 = 0;
      local_f8 = param_4;
      FUN_1401f8d10(L"ParallelFor Task",uVar10,1);
    }
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    FUN_146be9400(&local_c8);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143be80ce FUN_143be80ce body=126 status=ok
// SIG undefined FUN_143be80ce(void)

bool FUN_143be80ce(undefined8 *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  uVar1 = *param_3;
  lVar4 = (*(undefined8 **)*param_1)[1];
  if (lVar4 == 0) {
    iVar2 = FUN_146bc96d4(**(undefined8 **)*param_1);
    lVar4 = (*(undefined8 **)*param_1)[1];
    if (lVar4 == 0) {
      iVar3 = FUN_146bc96d4(**(undefined8 **)*param_1,uVar1);
      goto LAB_143be8114;
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
LAB_143be8114:
  return iVar2 == iVar3;
}



// FUNCTION 143be8176 FUN_143be8176 body=29 status=ok
// SIG undefined FUN_143be8176(void)

undefined8 FUN_143be8176(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143be81ce FUN_143be81ce body=29 status=ok
// SIG undefined FUN_143be81ce(void)

undefined8 FUN_143be81ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143be8226 FUN_143be8226 body=29 status=ok
// SIG undefined FUN_143be8226(void)

undefined8 FUN_143be8226(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143be826a FUN_143be826a body=290 status=ok
// SIG undefined FUN_143be826a(void)

void FUN_143be826a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_108 [40];
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulonglong uStack_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  undefined8 *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a0 = *param_3;
  piVar1 = (int *)*param_1;
  if ((char)piVar1[1] == '\x01') {
    local_b0 = 0;
    uStack_a8 = 0;
    local_68 = 0;
    local_58 = &PTR_LAB_14afa4940;
    local_50 = &local_a0;
    local_78 = &LAB_143be838e;
    local_b8 = param_2;
    FUN_142984024(&local_b8);
    local_90 = &local_c8;
    local_d8 = &local_88;
    local_88 = 0;
    local_80 = 0;
    local_98 = &LAB_143be83e6;
    local_e0 = 0;
    local_c8 = param_4;
    local_c0 = &local_b8;
    FUN_1401f8d10(L"ParallelFor Task",uStack_a8 & 0xffffffff,1);
    FUN_146be9400(&local_b0);
    piVar1 = (int *)*param_1;
  }
  iVar2 = 0x10;
  if (0x10 < *piVar1) {
    iVar2 = *piVar1;
  }
  FUN_14833d860(param_4,iVar2,0x3f800000);
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be83c8 FUN_143be83c8 body=29 status=ok
// SIG undefined FUN_143be83c8(void)

undefined8 FUN_143be83c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143be8400 FUN_143be8400 body=1161 status=ok
// SIG undefined FUN_143be8400(void)

void FUN_143be8400(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_258 [40];
  undefined1 local_230 [4];
  undefined1 local_22c [4];
  longlong *local_228;
  undefined8 uStack_220;
  longlong *local_218;
  int local_210;
  wchar_t *local_208;
  ulonglong uStack_200;
  undefined1 local_1f8 [16];
  longlong local_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  undefined4 uStack_1d8;
  undefined4 local_1d4;
  longlong local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b0 [8];
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  int local_150;
  longlong *local_128;
  longlong *local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_10c;
  undefined1 local_10b;
  undefined1 local_10a;
  undefined4 local_108;
  undefined1 local_100;
  undefined1 local_f8 [80];
  undefined1 local_a8 [80];
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_258;
  plVar8 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_149fab260;
  plVar1 = plVar8 + 2;
  FUN_146bffece(plVar1,param_2);
  if (plVar8 == (longlong *)0x0) {
    FUN_148484708(local_1b0);
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar4 = (int *)((longlong)plVar8 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    FUN_148484708(local_1b0);
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plVar2 = local_120;
  local_128 = plVar1;
  plVar7 = plVar8;
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_120 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      puVar5 = (undefined8 *)*local_120;
      local_120 = plVar8;
      (*(code *)*puVar5)(plVar2);
      LOCK();
      piVar4 = (int *)((longlong)plVar2 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      plVar7 = local_120;
      if (*piVar4 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        plVar7 = local_120;
      }
    }
  }
  local_120 = plVar7;
  if ((ulonglong)*(byte *)*param_1 < 4) {
    local_118 = *(undefined4 *)(&DAT_14afa5944 + (ulonglong)*(byte *)*param_1 * 4);
  }
  local_228 = (longlong *)0x0;
  uStack_220 = 0;
  FUN_143bab15a(param_1[1],plVar1,&local_228,1);
  lVar9 = *param_1;
  local_10c = *(undefined1 *)(lVar9 + 0x20);
  local_10b = *(undefined1 *)(lVar9 + 0x21);
  local_10a = *(undefined1 *)(lVar9 + 0x22);
  local_108 = *(undefined4 *)(lVar9 + 8);
  local_54 = (float)*(double *)(lVar9 + 0x18);
  local_58 = (float)*(double *)(lVar9 + 0x10);
  local_114 = *(undefined4 *)param_1[2];
  local_110 = *(undefined4 *)(lVar9 + 4);
  local_158 = DAT_14c846520;
  local_168 = DAT_14c846510;
  uStack_160 = DAT_14c846518;
  local_170 = DAT_14c8464f0;
  local_180 = (undefined4)DAT_14c8464e0;
  uStack_17c = DAT_14c8464e0._4_4_;
  uStack_178 = (undefined4)DAT_14c8464e8;
  uStack_174 = DAT_14c8464e8._4_4_;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  local_188 = 0x3ff0000000000000;
  local_100 = *(undefined1 *)(lVar9 + 0x23);
  if (0 < (int)uStack_220) {
    local_1e8 = 0;
    local_1e0 = 0;
    local_208 = (wchar_t *)0x0;
    uStack_200 = 0;
    local_1dc = 0x80;
    uStack_1d8 = 0xffffffff;
    local_1d4 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_218 = local_228;
    local_210 = (int)uStack_220;
    FUN_146bc855c(&local_208);
    FUN_146be9af0(local_f8,&local_208);
    local_1c0 = 0;
    if (local_1c8 != 0) {
      FUN_1400020a8();
    }
    uVar6 = uStack_200 >> 0x20;
    uStack_200 = uStack_200 & 0xffffffff00000000;
    if ((int)uVar6 != 0) {
      FUN_1447a08a2(&local_208,0);
    }
    uStack_1d8 = 0xffffffff;
    local_1d4 = 0;
    local_1e0 = 0;
    if (0x80 < local_1dc) {
      local_1dc = 0x80;
      FUN_1446efbd8(local_1f8,0);
    }
    if (local_1e8 != 0) {
      FUN_1400020a8();
    }
    if (local_208 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    lVar9 = *param_1;
  }
  if (*(int *)(lVar9 + 0x5c) < *(int *)(lVar9 + 0x30)) {
    if ((undefined1 *)(lVar9 + 0x28) != local_a8) {
      FUN_14848469e();
    }
  }
  FUN_143b59786(local_1b0,0);
  puVar5 = local_1a8;
  if (local_150 == 0) {
    local_1a8 = (undefined8 *)0x0;
    FUN_146c00942(param_2,puVar5);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  else {
    FUN_146c00942(param_2,plVar1);
    local_208 = L"LayoutMeshUVs_ComputeError";
    uStack_200._0_4_ = 0x1a;
    FUN_1446e940c(local_22c,&local_208);
    local_208 = L"UGeometryScriptLibrary_MeshUVFunctions";
    uStack_200._0_4_ = 0x26;
    FUN_1446e940c(local_230,&local_208);
    local_208 = L"LayoutMeshUVs: Error computing result, returning input mesh";
    uStack_200 = CONCAT44(uStack_200._4_4_,0x3b);
    FUN_140208c1e(&local_218,local_230,local_22c,&local_208);
    FUN_143ba90d7(*(undefined8 *)param_1[3],2,&local_218);
    if (local_218 != (longlong *)0x0) {
      (**(code **)(*local_218 + 0x10))();
    }
  }
  if (local_228 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_148484800(local_1b0);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar4 = (int *)((longlong)plVar8 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be888a FUN_143be888a body=1143 status=ok
// SIG undefined FUN_143be888a(void)

void FUN_143be888a(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  wchar_t *pwVar6;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 local_f4 [4];
  longlong *local_f0 [2];
  wchar_t *local_e0;
  undefined4 local_d8;
  undefined1 local_b4 [4];
  wchar_t *local_b0;
  int local_a8;
  undefined1 local_a4;
  double local_a0;
  int local_98;
  double local_90;
  undefined8 local_88;
  double local_80;
  int local_78;
  double local_70;
  undefined1 local_68;
  char local_67;
  undefined8 local_64;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*(int *)(param_2 + 0x38) * 0x200 + *(int *)(param_2 + 0x3c) != 0) ||
      (*(int *)(param_2 + 0x1e8) * 0x200 + *(int *)(param_2 + 0x1ec) != 0)) ||
     (*(int *)(param_2 + 0x158) * 0x200 + *(int *)(param_2 + 0x15c) != 0)) {
    local_b0 = L"AutoGeneratePatchBuilderMeshUVs_NonCompact";
    local_a8 = 0x2a;
    FUN_1446e940c(&local_58,&local_b0);
    local_b0 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_a8 = 0x26;
    FUN_1446e940c(local_f0,&local_b0);
    local_b0 = 
    L"AutoGeneratePatchBuilderMeshUVs: TargetMesh is non-Compact, PatchBuilder cannot be run. Try calling CompactMesh to update TargetMesh"
    ;
    local_a8 = 0x84;
    FUN_140208c1e(&local_e0,local_f0,&local_58,&local_b0);
    FUN_143ba90d7(*(undefined8 *)*param_1,2,&local_e0);
    if (local_e0 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_e0 + 0x10))();
    }
    goto LAB_143be897f;
  }
  local_b0 = (wchar_t *)0x0;
  local_88 = 0x416312cfe0000000;
  local_68 = 1;
  local_64 = 0x3f80000000000200;
  piVar5 = (int *)param_1[1];
  if ((char)piVar5[7] == '\x01') {
    if (param_2 == 0) {
LAB_143be89ff:
      local_e0 = L"AutoGeneratePatchBuilderMeshUVs_MissingGruops";
      local_d8 = 0x2d;
      FUN_1446e940c(local_f0,&local_e0);
      local_e0 = L"UGeometryScriptLibrary_MeshUVFunctions";
      local_d8 = 0x26;
      FUN_1446e940c(local_b4,&local_e0);
      local_e0 = L"AutoGeneratePatchBuilderMeshUVs: Requested Polygroup Layer does not exist";
      local_d8 = 0x49;
      FUN_140208c1e(&local_58,local_b4,local_f0,&local_e0);
      FUN_143ba90d7(*(undefined8 *)*param_1,2,&local_58);
      if (local_58 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_58 + 0x10))();
      }
      pwVar6 = (wchar_t *)0x0;
    }
    else {
      bVar1 = *(byte *)(piVar5 + 8);
      uVar2 = piVar5[9];
      if ((ulonglong)bVar1 == 0) {
        if (((-1 < (int)uVar2) && (*(longlong **)(param_2 + 0x208) != (longlong *)0x0)) &&
           (iVar4 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xc0))(), (int)uVar2 < iVar4))
        goto LAB_143be8ca4;
        goto LAB_143be89ff;
      }
      if (*(char *)(param_2 + 0x1a8) == '\0') goto LAB_143be89ff;
LAB_143be8ca4:
      pwVar6 = (wchar_t *)FUN_14001cc68(0x18,0x10);
      FUN_148376c0e(pwVar6,param_2,(ulonglong)uVar2 << 0x20 | (ulonglong)bVar1);
      local_b0 = pwVar6;
    }
    piVar5 = (int *)param_1[1];
  }
  else {
    pwVar6 = (wchar_t *)0x0;
  }
  local_a8 = *piVar5;
  if (local_a8 < 2) {
    local_a8 = 1;
  }
  local_a4 = 1;
  local_a0 = (double)(float)piVar5[2];
  if (999999.0 <= local_a0) {
    local_a0 = 999999.0;
  }
  if (local_a0 <= 0.0) {
    local_a0 = 0.0;
  }
  local_98 = 1;
  if (1 < piVar5[1]) {
    local_98 = piVar5[1];
  }
  local_90 = (double)(float)piVar5[3];
  if (9999.0 <= local_90) {
    local_90 = 9999.0;
  }
  if (local_90 <= 0.001) {
    local_90 = 0.001;
  }
  local_80 = (double)(float)piVar5[4];
  if (180.0 <= local_80) {
    local_80 = 180.0;
  }
  if (local_80 <= 0.0) {
    local_80 = 0.0;
  }
  iVar4 = 9999;
  if (piVar5[5] < 9999) {
    iVar4 = piVar5[5];
  }
  local_78 = 0;
  if (0 < iVar4) {
    local_78 = iVar4;
  }
  local_70 = (double)(float)piVar5[6];
  if (1.0 <= local_70) {
    local_70 = 1.0;
  }
  if (local_70 <= 0.0) {
    local_70 = 0.0;
  }
  local_67 = (char)piVar5[10];
  if (local_67 == '\x01') {
    local_68 = (undefined1)piVar5[0xc];
    iVar4 = 0x1000;
    if (piVar5[0xb] < 0x1000) {
      iVar4 = piVar5[0xb];
    }
    iVar3 = 0x10;
    if (0x10 < iVar4) {
      iVar3 = iVar4;
    }
    local_64 = CONCAT44(0x3f800000,iVar3);
  }
  local_108 = 0;
  FUN_148343ab4(&local_b0,&local_e0,*param_4,param_4[1]);
  if ((int)local_e0 == 4) {
    local_58 = L"AutoGeneratePatchBuilderMeshUVs_Failed";
    local_50 = 0x26;
    FUN_1446e940c(local_b4,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshUVFunctions";
    local_50 = 0x26;
    FUN_1446e940c(local_f4,&local_58);
    local_58 = L"AutoGeneratePatchBuilderMeshUVs: UV Generation Failed";
    local_50 = 0x35;
    FUN_140208c1e(local_f0,local_f4,local_b4,&local_58);
    FUN_143ba90d7(*(undefined8 *)*param_1,3,local_f0);
    if (local_f0[0] != (longlong *)0x0) {
      (**(code **)(*local_f0[0] + 0x10))();
    }
  }
  FUN_146c81a14(&local_e0);
  if (pwVar6 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar6);
  }
LAB_143be897f:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143be8d02 FUN_143be8d02 body=1943 status=ok
// SIG undefined FUN_143be8d02(void)

void FUN_143be8d02(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  code *pcVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined **ppuVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined4 local_1bc;
  float local_1b8 [2];
  int local_1b0;
  longlong local_1a8 [2];
  longlong local_198;
  ulonglong uStack_190;
  undefined8 local_188;
  ulonglong uStack_180;
  longlong local_178;
  undefined8 uStack_170;
  longlong local_168 [2];
  wchar_t *local_158;
  undefined8 uStack_150;
  longlong local_148 [2];
  longlong *local_138;
  longlong local_128 [4];
  longlong *local_108;
  undefined8 uStack_100;
  code *local_f8;
  undefined **local_e8;
  longlong local_e0;
  undefined *local_d8 [4];
  wchar_t *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined4 local_90;
  undefined2 local_8c;
  wchar_t *local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (((*(int *)(param_2 + 0x38) * 0x200 + *(int *)(param_2 + 0x3c) == 0) &&
      (*(int *)(param_2 + 0x1e8) * 0x200 + *(int *)(param_2 + 0x1ec) == 0)) &&
     (*(int *)(param_2 + 0x158) * 0x200 + *(int *)(param_2 + 0x15c) == 0)) {
    uVar5 = *param_3;
    iVar13 = *(int *)(param_2 + 0x50);
    local_168[0] = 0;
    local_168[1] = 0;
    FUN_146bca1c8(local_168,iVar13,1);
    if (0 < (longlong)iVar13) {
      lVar11 = 8;
      uVar14 = 0;
      do {
        lVar17 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (uVar14 >> 9 & 0x7fffff) * 8);
        uVar18 = (ulonglong)((uint)uVar14 & 0x1ff);
        dVar1 = *(double *)(lVar17 + 0x10 + uVar18 * 0x18);
        dVar2 = *(double *)(lVar17 + 8 + uVar18 * 0x18);
        *(float *)(local_168[0] + -8 + lVar11) = (float)*(double *)(lVar17 + uVar18 * 0x18);
        *(float *)(local_168[0] + -4 + lVar11) = (float)dVar2;
        *(float *)(local_168[0] + lVar11) = (float)dVar1;
        uVar14 = uVar14 + 1;
        lVar11 = lVar11 + 0xc;
      } while ((longlong)iVar13 != uVar14);
    }
    local_178 = 0;
    uStack_170 = 0;
    iVar13 = *(int *)(param_2 + 0x170);
    if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar13 * 3);
    }
    if (iVar13 != 0) {
      FUN_14481578e(&local_178);
    }
    local_f8 = (code *)0x0;
    local_e8 = &PTR_DAT_149f3b6a0;
    local_108 = (longlong *)&DAT_146c408a8;
    local_e0 = param_2;
    FUN_146c406b8(param_2 + 0x140,&local_b8);
    FUN_146bfea58(&local_b8,&local_108);
    iVar13 = *(int *)local_78 * 0x200 + *(int *)(local_78 + 2);
    local_138 = (longlong *)0x0;
    local_148[0] = 0;
    local_158 = local_78;
    uStack_150 = CONCAT44(iVar13,iVar13);
    FUN_146c40784(local_148,&local_b8);
    if ((uint)uStack_100 != (uint)uStack_150) {
      uVar8 = (uint)uStack_100;
      do {
        pcVar6 = local_f8;
        local_198 = CONCAT44(local_198._4_4_,uVar8);
        ppuVar15 = local_e8;
        if (local_e8 == (undefined **)0x0) {
          ppuVar15 = local_d8;
        }
        uVar12 = (**(code **)(*ppuVar15 + 8))();
        (*pcVar6)(&local_188,uVar12,&local_198);
        lVar11 = (longlong)(int)(uint)uStack_170;
        uVar8 = (uint)uStack_170 + 1;
        if (uStack_170._4_4_ < uVar8) {
          uVar14 = uStack_170 & 0xffffffff;
          uStack_170._0_4_ = uVar8;
          FUN_1446f48e2(&local_178,uVar14);
          uVar8 = (uint)uStack_170;
        }
        uStack_170._0_4_ = uVar8;
        uVar8 = (uint)uStack_170;
        *(undefined4 *)(local_178 + lVar11 * 4) = (undefined4)local_188;
        lVar11 = (longlong)(int)(uint)uStack_170;
        uStack_170._0_4_ = (uint)uStack_170 + 1;
        if (uStack_170._4_4_ < (uint)uStack_170) {
          FUN_1446f48e2(&local_178,uVar8);
        }
        uVar8 = (uint)uStack_170;
        *(undefined4 *)(local_178 + lVar11 * 4) = local_188._4_4_;
        lVar11 = (longlong)(int)(uint)uStack_170;
        uStack_170._0_4_ = (uint)uStack_170 + 1;
        if (uStack_170._4_4_ < (uint)uStack_170) {
          FUN_1446f48e2(&local_178,uVar8);
        }
        *(int *)(local_178 + lVar11 * 4) = (int)uStack_180;
        iVar13 = uStack_100._4_4_;
        uVar8 = (uint)uStack_100;
        do {
          uVar8 = uVar8 + 1;
          uStack_100 = CONCAT44(uStack_100._4_4_,uVar8);
          if (iVar13 <= (int)uVar8) break;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (local_108[1] + (ulonglong)(uVar8 >> 9) * 8) +
                                             (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
      } while ((uint)uStack_150 != uVar8);
    }
    if (local_148[0] != 0) {
      plVar16 = local_138;
      if (local_138 == (longlong *)0x0) {
        plVar16 = local_128;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if (local_f8 != (code *)0x0) {
      ppuVar15 = local_e8;
      if (local_e8 == (undefined **)0x0) {
        ppuVar15 = local_d8;
      }
      (**(code **)(*ppuVar15 + 0x10))();
    }
    if (local_b8 != (wchar_t *)0x0) {
      plVar16 = (longlong *)CONCAT44(uStack_a4,local_a8);
      if ((longlong *)CONCAT44(uStack_a4,local_a8) == (longlong *)0x0) {
        plVar16 = &local_98;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    local_1e8 = &local_188;
    local_188 = 0;
    uStack_180 = 0;
    local_1e0 = &local_198;
    local_198 = 0;
    uStack_190 = 0;
    local_1d8 = local_1a8;
    local_1a8[0] = 0;
    local_1a8[1] = 0;
    local_b8 = (wchar_t *)0x0;
    uStack_b0 = 0;
    local_a8 = 0x40000000;
    uStack_a4 = 0x3c23d70a;
    uStack_a0 = 0x40c00000;
    uStack_9c = 0x40800000;
    local_98 = 0x400000003f000000;
    local_8c = 0;
    local_90 = *(undefined4 *)param_1[1];
    local_108 = (longlong *)0x0;
    uStack_100 = 0;
    local_f8 = (code *)CONCAT26(local_f8._6_2_,0x10100000001);
    cVar7 = FUN_1482a9eac(&local_178,local_168);
    if (cVar7 == '\0') {
      local_158 = L"AutoGenerateXAtlasMeshUVs_Failed";
      uStack_150._0_4_ = 0x20;
      FUN_1446e940c(&local_1c4,&local_158);
      local_158 = L"UGeometryScriptLibrary_MeshUVFunctions";
      uStack_150._0_4_ = 0x26;
      FUN_1446e940c(&local_1d0,&local_158);
      local_158 = L"AutoGenerateXAtlasMeshUVs: UV Generation Failed";
      uStack_150 = CONCAT44(uStack_150._4_4_,0x2f);
      FUN_140208c1e(local_1b8,&local_1d0,&local_1c4,&local_158);
      FUN_143ba90d7(*(undefined8 *)*param_1,3,local_1b8);
      if ((longlong *)CONCAT44(local_1b8[1],local_1b8[0]) != (longlong *)0x0) {
        (**(code **)(*(longlong *)CONCAT44(local_1b8[1],local_1b8[0]) + 0x10))();
      }
    }
    else {
      FUN_146c19cce(uVar5);
      uVar14 = uStack_180 & 0xffffffff;
      local_158 = (wchar_t *)0x0;
      uStack_150 = 0;
      if ((int)uStack_180 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar14);
      }
      if (uVar14 != 0) {
        FUN_14481578e(&local_158,uVar14);
        lVar11 = 0;
        do {
          local_1b8[1] = (float)*(double *)(local_188 + 8 + lVar11);
          local_1b8[0] = (float)*(double *)(local_188 + lVar11);
          uVar9 = FUN_146c2d0a4(uVar5,local_1b8);
          uVar18 = uStack_150;
          lVar17 = (longlong)(int)(uint)uStack_150;
          uVar8 = (uint)uStack_150 + 1;
          uStack_150 = CONCAT44(uStack_150._4_4_,uVar8);
          if (uStack_150._4_4_ < uVar8) {
            FUN_1446f48e2(&local_158,uVar18 & 0xffffffff);
          }
          *(undefined4 *)(local_158 + lVar17 * 2) = uVar9;
          lVar11 = lVar11 + 0x10;
        } while (uVar14 << 4 != lVar11);
      }
      if (2 < (int)uStack_190) {
        uVar14 = uStack_190 & 0xffffffff;
        uVar18 = 0;
        do {
          iVar13 = *(int *)(local_198 + 8 + uVar18 * 0xc);
          fVar3 = *(float *)(local_198 + 4 + uVar18 * 0xc);
          fVar4 = *(float *)(local_198 + uVar18 * 0xc);
          local_1b8[0] = fVar4;
          local_1b8[1] = fVar3;
          local_1b0 = iVar13;
          local_1c4 = 0xffffffffffffffff;
          local_1bc = 0xffffffff;
          lVar11 = 0;
          do {
            *(undefined4 *)((longlong)&local_1c4 + lVar11 * 4) =
                 *(undefined4 *)(local_1a8[0] + (longlong)(int)local_1b8[lVar11] * 4);
            lVar11 = lVar11 + 1;
          } while (lVar11 != 3);
          iVar10 = FUN_146c13bc0(param_2,local_1c4 & 0xffffffff,local_1c4._4_4_,local_1bc);
          if (iVar10 != -1) {
            local_1c8 = *(undefined4 *)(local_158 + (longlong)iVar13 * 2);
            local_1cc = *(undefined4 *)(local_158 + (longlong)(int)fVar3 * 2);
            local_1d0 = *(undefined4 *)(local_158 + (longlong)(int)fVar4 * 2);
            FUN_146c01486(uVar5,iVar10,&local_1d0,1);
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar14 / 3);
      }
      if (local_158 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_1a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_198 != 0) {
      FUN_1400020a8();
    }
    if (local_188 != 0) {
      FUN_1400020a8();
    }
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    if (local_168[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_b8 = L"AutoGenerateXAtlasMeshUVs_NonCompact";
    uStack_b0._0_4_ = 0x24;
    FUN_1446e940c(&local_158,&local_b8);
    local_b8 = L"UGeometryScriptLibrary_MeshUVFunctions";
    uStack_b0._0_4_ = 0x26;
    FUN_1446e940c(local_168,&local_b8);
    local_b8 = 
    L"AutoGenerateXAtlasMeshUVs: TargetMesh is non-Compact, XAtlas cannot be run. Try calling CompactMesh to update TargetMesh."
    ;
    uStack_b0 = CONCAT44(uStack_b0._4_4_,0x79);
    FUN_140208c1e(&local_108,local_168,&local_158,&local_b8);
    FUN_143ba90d7(*(undefined8 *)*param_1,2,&local_108);
    if (local_108 != (longlong *)0x0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143be949c FUN_143be949c body=429 status=ok
// SIG undefined FUN_143be949c(void)

void FUN_143be949c(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  code *local_40;
  wchar_t **local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(longlong **)(param_2 + 0x208) != (longlong *)0x0) && (iVar1 = *(int *)*param_1, -1 < iVar1)
     ) {
    iVar2 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xa0))();
    if (iVar1 < iVar2) {
      iVar1 = *(int *)*param_1;
      if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28))) &&
         (local_30 = *(longlong *)
                      (*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + (longlong)iVar1 * 8),
         local_30 != 0)) {
        *(undefined1 *)param_1[2] = 1;
        local_88 = (wchar_t *)&local_30;
        local_38 = &local_88;
        local_80 = param_1[4];
        local_78 = param_1[5];
        local_68 = param_1[6];
        local_60 = param_1[7];
        local_58 = param_1[8];
        local_50 = param_1[9];
        local_40 = FUN_143be964a;
        local_70 = param_2;
        FUN_143bac7da(param_1[3],param_2,&local_40,1);
        goto LAB_143be9623;
      }
    }
  }
  local_88 = L"GetMeshUVSizeInfo_InvalidUVSet";
  local_80._0_4_ = 0x1e;
  FUN_1446e940c(local_44,&local_88);
  local_88 = L"UGeometryScriptLibrary_MeshUVFunctions";
  local_80._0_4_ = 0x26;
  FUN_1446e940c(local_48,&local_88);
  local_88 = L"GetMeshUVSizeInfo: UV Set does not Exist";
  local_80 = CONCAT44(local_80._4_4_,0x28);
  FUN_140208c1e(&local_40,local_48,local_44,&local_88);
  FUN_143ba90d7(*(undefined8 *)param_1[1],2,&local_40);
  if (local_40 != (code *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
LAB_143be9623:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be964a FUN_143be964a body=916 status=ok
// SIG undefined FUN_143be964a(void)

void FUN_143be964a(undefined8 *param_1,uint *param_2)

{
  double *pdVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  double dVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  undefined1 auStack_d8 [32];
  float *local_b8;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  double local_88;
  double dStack_80;
  double local_78;
  double local_70;
  double dStack_68;
  double local_60;
  double local_58;
  double dStack_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar11 = *param_2;
  iVar2 = *(int *)(*(longlong *)
                    (*(longlong *)(*(longlong *)*param_1 + 0x78) + (ulonglong)(uVar11 * 3 >> 9) * 8)
                  + (ulonglong)(uVar11 * 3 & 0x1ff) * 4);
  if ((-1 < iVar2) || (*(undefined1 *)param_1[1] = 1, *(char *)param_1[2] == '\0')) {
    lVar4 = *(longlong *)(param_1[3] + 0x10);
    lVar5 = *(longlong *)(*(longlong *)(param_1[3] + 0x130) + (ulonglong)(uVar11 >> 9) * 8);
    uVar9 = (ulonglong)uVar11 & 0x1ff;
    uVar3 = *(uint *)(lVar5 + uVar9 * 0xc);
    lVar6 = *(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8);
    uVar10 = (ulonglong)uVar3 & 0x1ff;
    local_78 = *(double *)(lVar6 + 0x10 + uVar10 * 0x18);
    pdVar1 = (double *)(lVar6 + uVar10 * 0x18);
    local_88 = *pdVar1;
    dStack_80 = pdVar1[1];
    uVar3 = *(uint *)(lVar5 + 4 + uVar9 * 0xc);
    lVar6 = *(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8);
    uVar10 = (ulonglong)uVar3 & 0x1ff;
    local_60 = *(double *)(lVar6 + 0x10 + uVar10 * 0x18);
    pdVar1 = (double *)(lVar6 + uVar10 * 0x18);
    local_70 = *pdVar1;
    dStack_68 = pdVar1[1];
    uVar3 = *(uint *)(lVar5 + 8 + uVar9 * 0xc);
    lVar4 = *(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8);
    uVar9 = (ulonglong)uVar3 & 0x1ff;
    local_48 = *(double *)(lVar4 + 0x10 + uVar9 * 0x18);
    pdVar1 = (double *)(lVar4 + uVar9 * 0x18);
    local_58 = *pdVar1;
    dStack_50 = pdVar1[1];
    dVar8 = (local_58 - local_88) * (dStack_68 - dStack_80) -
            (local_70 - local_88) * (dStack_50 - dStack_80);
    dVar13 = (local_48 - local_78) * (local_70 - local_88) -
             (local_60 - local_78) * (local_58 - local_88);
    dVar12 = (dStack_50 - dStack_80) * (local_60 - local_78) -
             (local_48 - local_78) * (dStack_68 - dStack_80);
    *(double *)param_1[4] =
         SQRT(dVar8 * dVar8 + dVar12 * dVar12 + dVar13 * dVar13) * 0.5 + *(double *)param_1[4];
    FUN_146ba5262(param_1[5],&local_88);
    FUN_146ba5262(param_1[5],&local_70);
    FUN_146ba5262(param_1[5],&local_58);
    if (-1 < iVar2) {
      local_b8 = &local_98;
      FUN_146c35244(*(undefined8 *)*param_1,uVar11,&local_a8,&local_a0);
      fVar14 = (local_94 - local_a4) * (local_a0 - local_a8) -
               (local_98 - local_a8) * (local_9c - local_a4);
      uVar11 = -(uint)(-fVar14 <= fVar14);
      *(double *)param_1[6] =
           (double)((float)(~uVar11 & (uint)-fVar14 | (uint)fVar14 & uVar11) * 0.5) +
           *(double *)param_1[6];
      pfVar7 = (float *)param_1[7];
      if (local_a8 < *pfVar7) {
        *pfVar7 = local_a8;
      }
      if (pfVar7[2] <= local_a8 && local_a8 != pfVar7[2]) {
        pfVar7[2] = local_a8;
      }
      if (local_a4 < pfVar7[1]) {
        pfVar7[1] = local_a4;
      }
      if (pfVar7[3] <= local_a4 && local_a4 != pfVar7[3]) {
        pfVar7[3] = local_a4;
      }
      pfVar7 = (float *)param_1[7];
      if (local_a0 < *pfVar7) {
        *pfVar7 = local_a0;
      }
      if (pfVar7[2] <= local_a0 && local_a0 != pfVar7[2]) {
        pfVar7[2] = local_a0;
      }
      if (local_9c < pfVar7[1]) {
        pfVar7[1] = local_9c;
      }
      if (pfVar7[3] <= local_9c && local_9c != pfVar7[3]) {
        pfVar7[3] = local_9c;
      }
      pfVar7 = (float *)param_1[7];
      if (local_98 < *pfVar7) {
        *pfVar7 = local_98;
      }
      if (pfVar7[2] <= local_98 && local_98 != pfVar7[2]) {
        pfVar7[2] = local_98;
      }
      if (local_94 < pfVar7[1]) {
        pfVar7[1] = local_94;
      }
      if (pfVar7[3] <= local_94 && local_94 != pfVar7[3]) {
        pfVar7[3] = local_94;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143be99e0 FUN_143be99e0 body=881 status=ok
// SIG undefined FUN_143be99e0(void)

void FUN_143be99e0(undefined8 *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_88 [32];
  uint local_68 [3];
  undefined1 local_5c [4];
  longlong *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong **)(param_2 + 0x208) != (longlong *)0x0) &&
     (iVar2 = *(int *)*param_1, iVar7 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xa0))(),
     iVar2 < iVar7)) {
    iVar2 = *(int *)*param_1;
    if ((-1 < (longlong)iVar2) &&
       ((iVar2 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28) &&
        (lVar4 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + (longlong)iVar2 * 8),
        lVar4 != 0)))) {
      *(bool *)param_1[2] = *(int *)(param_2 + 0x38) * 0x200 + *(int *)(param_2 + 0x3c) != 0;
      local_48 = (wchar_t *)CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
      uStack_40 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
      FUN_147031ed6(param_1[3],&local_48,*(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24)
                   );
      local_48 = (wchar_t *)0x0;
      uStack_40 = 0;
      local_58 = (longlong *)CONCAT44(local_58._4_4_,0xffffffff);
      FUN_1448156a8(&local_48,&local_58,*(undefined4 *)(param_1[3] + 8));
      uVar8 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
      uVar3 = 0;
      if ((uVar8 != 0) &&
         (uVar3 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
        uVar9 = 1;
        uVar13 = 1;
        if (1 < (int)uVar8) {
          uVar9 = uVar8;
        }
        do {
          uVar11 = uVar13;
          uVar3 = uVar9;
          if (uVar9 == uVar11) break;
          uVar13 = uVar11 + 1;
          uVar3 = uVar11;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar11 >> 9] +
                                             (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      }
joined_r0x000143be9bc6:
      uVar9 = uVar3;
      if (uVar9 != uVar8) {
        uVar13 = uVar9 * 3;
        lVar12 = *(longlong *)(lVar4 + 0x78);
        uVar3 = *(uint *)(*(longlong *)(lVar12 + (ulonglong)(uVar13 >> 9) * 8) +
                         (ulonglong)(uVar13 & 0x1ff) * 4);
        if (-1 < (int)uVar3) {
          lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar9 >> 9) * 8);
          local_50 = *(undefined4 *)(lVar14 + 8 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
          local_58 = *(longlong **)(lVar14 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
          local_68[0] = uVar3;
          local_68[1] = *(undefined4 *)
                         (*(longlong *)(lVar12 + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                         (ulonglong)(uVar13 + 1 & 0x1ff) * 4);
          local_68[2] = *(undefined4 *)
                         (*(longlong *)(lVar12 + (ulonglong)(uVar13 + 2 >> 9) * 8) +
                         (ulonglong)(uVar13 + 2 & 0x1ff) * 4);
          lVar12 = 0;
          do {
            lVar14 = (longlong)*(int *)((longlong)&local_58 + lVar12 * 4);
            uVar3 = local_68[lVar12];
            if (*(uint *)(local_48 + lVar14 * 2) == 0xffffffff) {
              lVar5 = *(longlong *)
                       (*(longlong *)(lVar4 + 0x48) + (ulonglong)(uVar3 >> 5 & 0x3fffff8));
              uVar10 = (ulonglong)((uVar3 & 0xff) << 3);
              fVar1 = *(float *)(lVar5 + 4 + uVar10);
              lVar6 = *(longlong *)param_1[3];
              *(double *)(lVar6 + lVar14 * 0x10) = (double)*(float *)(lVar5 + uVar10);
              *(double *)(lVar6 + 8 + lVar14 * 0x10) = (double)fVar1;
              *(uint *)(local_48 + lVar14 * 2) = uVar3;
            }
            else if (*(uint *)(local_48 + lVar14 * 2) != uVar3) {
              *(undefined1 *)param_1[4] = 1;
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 != 3);
        }
        uVar13 = uVar9 + 1;
        if ((int)(uVar9 + 1) < (int)uVar8) {
          uVar13 = uVar8;
        }
        do {
          uVar3 = uVar13;
          if (uVar13 - 1 == uVar9) break;
          uVar9 = uVar9 + 1;
          uVar3 = uVar9;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x148) +
                                               (ulonglong)(uVar9 >> 9) * 8) +
                                             (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
        goto joined_r0x000143be9bc6;
      }
      *(undefined1 *)param_1[5] = 1;
      if (local_48 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143be9ada;
    }
  }
  local_48 = L"GetMeshPerVertexUVs_InvalidUVSet";
  uStack_40._0_4_ = 0x20;
  FUN_1446e940c(local_68,&local_48);
  local_48 = L"UGeometryScriptLibrary_MeshUVFunctions";
  uStack_40._0_4_ = 0x26;
  FUN_1446e940c(local_5c,&local_48);
  local_48 = L"GetMeshPerVertexUVs: UVSetIndex does not exist on TargetMesh";
  uStack_40 = CONCAT44(uStack_40._4_4_,0x3c);
  FUN_140208c1e(&local_58,local_5c,local_68,&local_48);
  FUN_143ba90d7(*(undefined8 *)param_1[1],2,&local_58);
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
LAB_143be9ada:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143be9d52 FUN_143be9d52 body=1192 status=ok
// SIG undefined FUN_143be9d52(void)

void FUN_143be9d52(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  double local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(longlong **)(param_2 + 0x208) != (longlong *)0x0) &&
     (iVar6 = *(int *)*param_1, iVar4 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xa0))(),
     iVar6 < iVar4)) {
    iVar6 = *(int *)*param_1;
    if ((-1 < (longlong)iVar6) &&
       ((iVar6 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28) &&
        (lVar1 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + (longlong)iVar6 * 8),
        lVar1 != 0)))) {
      *(undefined1 *)param_1[2] = 1;
      FUN_14582eef4(param_1[3],0);
      FUN_14582ed12(param_1[3]);
      (**(code **)(**(longlong **)(param_1[3] + 0x208) + 0xa8))
                (*(longlong **)(param_1[3] + 0x208),0);
      bVar3 = true;
      if ((*(longlong *)(param_2 + 0x208) == 0) ||
         (local_a8 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x48), local_a8 == 0)) {
        local_a8 = 0;
        local_b0 = 0;
      }
      else {
        FUN_14582ed9a(*(undefined8 *)(param_1[3] + 0x208));
        local_b0 = *(longlong *)(*(longlong *)(param_1[3] + 0x208) + 0x48);
        bVar3 = false;
      }
      uVar13 = *(int *)(lVar1 + 8) * 0x200 + *(int *)(lVar1 + 0xc);
      uVar10 = 0;
      if ((uVar13 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x10) - 1U))) {
        uVar7 = 1;
        uVar12 = 1;
        if (1 < (int)uVar13) {
          uVar7 = uVar13;
        }
        do {
          uVar10 = uVar7;
          if (uVar7 == uVar12) break;
          uVar9 = uVar12 >> 9;
          uVar11 = uVar12 & 0x1ff;
          uVar10 = uVar12;
          uVar12 = uVar12 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x10))[uVar9] +
                                             (ulonglong)uVar11 * 2) - 1U));
      }
      if (uVar10 != uVar13) {
        do {
          lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x48) + (ulonglong)(uVar10 >> 5 & 0x3fffff8));
          uVar8 = (ulonglong)((uVar10 & 0xff) << 3);
          local_98 = (double)*(float *)(lVar2 + 4 + uVar8);
          local_a0 = (wchar_t *)(double)*(float *)(lVar2 + uVar8);
          local_90 = 0;
          local_80 = DAT_14c846338;
          local_88 = DAT_14c846330;
          local_74 = DAT_14c846338;
          local_7c = DAT_14c846330;
          local_70 = DAT_14c84635c;
          local_68 = 0;
          local_66 = 0;
          FUN_146c091bc(param_1[3],uVar10,&local_a0,1);
          uVar7 = uVar10 + 1;
          if ((int)(uVar10 + 1) < (int)uVar13) {
            uVar7 = uVar13;
          }
          do {
            uVar12 = uVar7;
            if (uVar7 - 1 == uVar10) break;
            uVar10 = uVar10 + 1;
            uVar12 = uVar10;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar1 + 0x10) +
                                                 (ulonglong)(uVar10 >> 9) * 8) +
                                               (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
          uVar10 = uVar12;
        } while (uVar10 != uVar13);
      }
      FUN_146c2cfb6(param_1[3] + 0x20);
      uVar13 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
      uVar10 = 0;
      if ((uVar13 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
        uVar7 = 1;
        uVar12 = 1;
        if (1 < (int)uVar13) {
          uVar7 = uVar13;
        }
        do {
          uVar10 = uVar7;
          if (uVar7 == uVar12) break;
          uVar9 = uVar12 >> 9;
          uVar11 = uVar12 & 0x1ff;
          uVar10 = uVar12;
          uVar12 = uVar12 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar9] +
                                             (ulonglong)uVar11 * 2) - 1U));
      }
      if (uVar10 != uVar13) {
        do {
          uVar7 = uVar10 * 3 + 2;
          lVar2 = *(longlong *)(lVar1 + 0x78);
          uVar12 = uVar10 * 3 + 1;
          local_a0 = (wchar_t *)
                     CONCAT44(*(undefined4 *)
                               (*(longlong *)(lVar2 + (ulonglong)(uVar12 >> 9) * 8) +
                               (ulonglong)(uVar12 & 0x1ff) * 4),
                              *(undefined4 *)
                               (*(longlong *)(lVar2 + (ulonglong)(uVar10 * 3 >> 9) * 8) +
                               (ulonglong)(uVar10 * 3 & 0x1ff) * 4));
          local_98 = (double)CONCAT44(local_98._4_4_,
                                      *(undefined4 *)
                                       (*(longlong *)(lVar2 + (ulonglong)(uVar7 >> 9) * 8) +
                                       (ulonglong)(uVar7 & 0x1ff) * 4));
          uVar5 = FUN_146bc96d4(param_2,uVar10);
          local_b8 = 1;
          iVar6 = FUN_146c09656(param_1[3],uVar10,&local_a0,uVar5);
          if (iVar6 == 0) {
            if (!bVar3) {
              uVar8 = (ulonglong)((uVar10 & 0x1ff) << 2);
              *(undefined4 *)
               (*(longlong *)(*(longlong *)(local_b0 + 0x20) + (ulonglong)(uVar10 >> 9) * 8) + uVar8
               ) = *(undefined4 *)
                    (*(longlong *)(*(longlong *)(local_a8 + 0x20) + (ulonglong)(uVar10 >> 9) * 8) +
                    uVar8);
            }
          }
          else {
            *(undefined1 *)param_1[4] = 1;
          }
          uVar7 = uVar10 + 1;
          if ((int)(uVar10 + 1) < (int)uVar13) {
            uVar7 = uVar13;
          }
          do {
            uVar12 = uVar7;
            if (uVar7 - 1 == uVar10) break;
            uVar10 = uVar10 + 1;
            uVar12 = uVar10;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(param_2 + 0x148) +
                                                 (ulonglong)(uVar10 >> 9) * 8) +
                                               (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
          uVar10 = uVar12;
        } while (uVar10 != uVar13);
      }
      FUN_146c2cfb6(param_1[3] + 0x140);
      goto LAB_143be9e5b;
    }
  }
  local_a0 = L"CopyMeshToUVMesh_InvalidUVSet";
  local_98._0_4_ = 0x1d;
  FUN_1446e940c(local_5c,&local_a0);
  local_a0 = L"UGeometryScriptLibrary_MeshUVFunctions";
  local_98._0_4_ = 0x26;
  FUN_1446e940c(local_60,&local_a0);
  local_a0 = L"CopyMeshUVLayerToMesh: UVSetIndex does not exist on CopyFromMesh";
  local_98 = (double)CONCAT44(local_98._4_4_,0x40);
  FUN_140208c1e(local_58,local_60,local_5c,&local_a0);
  FUN_143ba90d7(*(undefined8 *)param_1[1],2,local_58);
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
LAB_143be9e5b:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bea1fc FUN_143bea1fc body=1332 status=ok
// SIG undefined FUN_143bea1fc(void)

void FUN_143bea1fc(undefined8 *param_1,longlong param_2)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  longlong *local_60 [2];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong **)(param_2 + 0x208) != (longlong *)0x0) &&
     (iVar2 = *(int *)*param_1, iVar7 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xa0))(),
     iVar2 < iVar7)) {
    iVar2 = *(int *)*param_1;
    if ((-1 < (longlong)iVar2) &&
       ((iVar2 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28) &&
        (lVar3 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x20) + (longlong)iVar2 * 8),
        lVar3 != 0)))) {
      *(undefined1 *)param_1[2] = 1;
      puVar4 = (undefined1 *)param_1[5];
      lVar5 = *(longlong *)(*(longlong *)param_1[3] + 0x98);
      if (*(char *)param_1[4] == '\x01') {
        uVar8 = *(int *)(lVar5 + 0x20) * 0x200 + *(int *)(lVar5 + 0x24);
        if ((int)uVar8 <= *(int *)(lVar3 + 8) * 0x200 + *(int *)(lVar3 + 0xc)) {
          uVar11 = 0;
          if ((uVar8 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar5 + 0x28) - 1U))) {
            uVar9 = 1;
            uVar10 = 1;
            if (1 < (int)uVar8) {
              uVar9 = uVar8;
            }
            do {
              uVar11 = uVar9;
              if (uVar9 == uVar10) break;
              uVar13 = uVar10 >> 9;
              uVar14 = uVar10 & 0x1ff;
              uVar11 = uVar10;
              uVar10 = uVar10 + 1;
            } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar5 + 0x28))[uVar13] +
                                                 (ulonglong)uVar14 * 2) - 1U));
          }
LAB_143bea4b5:
          if (uVar11 != uVar8) {
            if (((int)uVar11 < 0) ||
               (*(int *)(lVar3 + 8) * 0x200 + *(int *)(lVar3 + 0xc) <= (int)uVar11)) {
LAB_143bea46d:
              *puVar4 = 1;
            }
            else {
              uVar12 = (ulonglong)(uVar11 & 0x1ff);
              if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                (*(longlong *)(lVar3 + 0x10) +
                                                (ulonglong)(uVar11 >> 9) * 8) + uVar12 * 2) - 1U))
              goto LAB_143bea46d;
              lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
              uVar15 = (ulonglong)((uVar11 & 0xff) << 3);
              dVar1 = *(double *)(lVar6 + 8 + uVar12 * 0x18);
              *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar11 >> 8) * 8) +
                        uVar15) = (float)*(double *)(lVar6 + uVar12 * 0x18);
              *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar11 >> 8) * 8) +
                         4 + uVar15) = (float)dVar1;
            }
            uVar9 = uVar11 + 1;
            if ((int)(uVar11 + 1) < (int)uVar8) {
              uVar9 = uVar8;
            }
            uVar10 = uVar11;
            do {
              uVar11 = uVar9;
              if (uVar9 - 1 == uVar10) break;
              uVar11 = uVar10 + 1;
              uVar10 = uVar11;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(lVar5 + 0x28) +
                                                   (ulonglong)(uVar11 >> 9) * 8) +
                                                 (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
            goto LAB_143bea4b5;
          }
          goto LAB_143bea3be;
        }
      }
      else if (*(int *)(lVar5 + 0x140) * 0x200 + *(int *)(lVar5 + 0x144) <=
               *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144)) {
        FUN_146c19cce(lVar3);
        uVar11 = *(int *)(lVar5 + 0x20) * 0x200 + *(int *)(lVar5 + 0x24);
        uVar8 = 0;
        if ((uVar11 != 0) &&
           (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar5 + 0x28) - 1U))) {
          uVar9 = 1;
          uVar10 = 1;
          if (1 < (int)uVar11) {
            uVar9 = uVar11;
          }
          do {
            uVar8 = uVar9;
            if (uVar9 == uVar10) break;
            uVar13 = uVar10 >> 9;
            uVar14 = uVar10 & 0x1ff;
            uVar8 = uVar10;
            uVar10 = uVar10 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar5 + 0x28))[uVar13] +
                                               (ulonglong)uVar14 * 2) - 1U));
        }
        if (uVar8 != uVar11) {
          do {
            lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)(uVar8 >> 9) * 8);
            local_50 = (wchar_t *)
                       CONCAT44((float)*(double *)(lVar6 + 8 + (ulonglong)(uVar8 & 0x1ff) * 0x18),
                                (float)*(double *)(lVar6 + (ulonglong)(uVar8 & 0x1ff) * 0x18));
            FUN_146c294c4(lVar3,uVar8,&local_50,1);
            uVar9 = uVar8 + 1;
            if ((int)(uVar8 + 1) < (int)uVar11) {
              uVar9 = uVar11;
            }
            do {
              uVar10 = uVar9;
              if (uVar9 - 1 == uVar8) break;
              uVar8 = uVar8 + 1;
              uVar10 = uVar8;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(lVar5 + 0x28) +
                                                   (ulonglong)(uVar8 >> 9) * 8) +
                                                 (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
            uVar8 = uVar10;
          } while (uVar8 != uVar11);
        }
        FUN_146c2cfb6(lVar3 + 8);
        uVar11 = *(int *)(lVar5 + 0x140) * 0x200 + *(int *)(lVar5 + 0x144);
        uVar8 = 0;
        if ((uVar11 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar5 + 0x148) - 1U))) {
          uVar9 = 1;
          uVar10 = 1;
          if (1 < (int)uVar11) {
            uVar9 = uVar11;
          }
          do {
            uVar8 = uVar9;
            if (uVar9 == uVar10) break;
            uVar13 = uVar10 >> 9;
            uVar14 = uVar10 & 0x1ff;
            uVar8 = uVar10;
            uVar10 = uVar10 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar5 + 0x148))[uVar13] +
                                               (ulonglong)uVar14 * 2) - 1U));
        }
        if (uVar8 != uVar11) {
          do {
            if (((int)uVar8 < 0) ||
               (*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144) <= (int)uVar8)) {
LAB_143bea6a9:
              *puVar4 = 1;
            }
            else {
              uVar12 = (ulonglong)(uVar8 & 0x1ff);
              if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                (*(longlong *)(param_2 + 0x148) +
                                                (ulonglong)(uVar8 >> 9) * 8) + uVar12 * 2) - 1U))
              goto LAB_143bea6a9;
              lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x130) + (ulonglong)(uVar8 >> 9) * 8);
              local_48 = *(undefined4 *)(lVar6 + 8 + uVar12 * 0xc);
              local_50 = *(wchar_t **)(lVar6 + uVar12 * 0xc);
              FUN_146c01486(lVar3,uVar8,&local_50,1);
            }
            uVar9 = uVar8 + 1;
            if ((int)(uVar8 + 1) < (int)uVar11) {
              uVar9 = uVar11;
            }
            do {
              uVar10 = uVar9;
              if (uVar9 - 1 == uVar8) break;
              uVar8 = uVar8 + 1;
              uVar10 = uVar8;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(lVar5 + 0x148) +
                                                   (ulonglong)(uVar8 >> 9) * 8) +
                                                 (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
            uVar8 = uVar10;
          } while (uVar8 != uVar11);
        }
        goto LAB_143bea3be;
      }
      *puVar4 = 1;
      goto LAB_143bea3be;
    }
  }
  local_50 = L"CopyMeshToMeshUVLayer_InvalidUVSet";
  local_48 = 0x22;
  FUN_1446e940c(local_64,&local_50);
  local_50 = L"UGeometryScriptLibrary_MeshUVFunctions";
  local_48 = 0x26;
  FUN_1446e940c(local_68,&local_50);
  local_50 = L"CopyMeshToMeshUVLayer: ToUVSetIndex does not exist on CopyFromMesh";
  local_48 = 0x42;
  FUN_140208c1e(local_60,local_68,local_64,&local_50);
  FUN_143ba90d7(*(undefined8 *)param_1[1],2,local_60);
  if (local_60[0] != (longlong *)0x0) {
    (**(code **)(*local_60[0] + 0x10))();
  }
LAB_143bea3be:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bea732 FUN_143bea732 body=1842 status=ok
// SIG undefined FUN_143bea732(void)

void FUN_143bea732(undefined8 *param_1,longlong *******param_2)

{
  longlong *****ppppplVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong ******pppppplVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double _X;
  double dVar11;
  double dVar12;
  ulonglong uVar13;
  longlong ****pppplVar14;
  longlong *******ppppppplVar15;
  undefined1 auStack_2c8 [32];
  undefined8 *local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  double local_280;
  double dStack_278;
  double local_270;
  double local_268;
  undefined8 local_258;
  uint local_250;
  longlong ******local_248;
  longlong ******pppppplStack_240;
  longlong ******local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  longlong ******local_228;
  longlong ******pppppplStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong ******local_1f8;
  longlong ******pppppplStack_1f0;
  longlong ******pppppplStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong ******local_b8;
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
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  uVar2 = *(uint *)*param_1;
  if ((-1 < (int)uVar2) &&
     ((int)uVar2 < *(int *)(param_2 + 0x28) * 0x200 + *(int *)((longlong)param_2 + 0x144))) {
    uVar13 = (ulonglong)(uVar2 & 0x1ff);
    if ((ushort)(*(short *)((longlong)param_2[0x29][uVar2 >> 9] + uVar13 * 2) - 1U) < 0xfffe) {
      local_250 = *(uint *)((longlong)param_2[0x26][uVar2 >> 9] + uVar13 * 0xc + 8);
      local_258 = *(ulonglong *)((longlong)param_2[0x26][uVar2 >> 9] + uVar13 * 0xc);
      FUN_146c13dec(param_2,&local_c8);
      FUN_146c149e0(param_2,&local_298,*(undefined4 *)*param_1);
      local_280 = 0.0;
      dStack_278 = 0.0;
      local_270 = 0.0;
      local_268 = 1.0;
      local_1f8 = (longlong ******)DAT_14c8463c8;
      local_208 = (wchar_t *)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
      uStack_200 = (longlong ****)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
      FUN_146bfb7f2(&local_280,&local_208,&local_c8);
      puVar3 = (undefined8 *)param_1[2];
      local_288 = puVar3[2];
      local_298 = *puVar3;
      uStack_290 = puVar3[1];
      if ((((*(char *)param_1[3] == '\x01') &&
           (pppppplVar4 = param_2[0x41], pppppplVar4 != (longlong ******)0x0)) &&
          (0 < *(int *)(pppppplVar4 + 7))) &&
         ((*pppppplVar4[6] != (longlong ****)0x0 &&
          (-1 < *(int *)((longlong)(*pppppplVar4[6])[0xf][(uint)(*(int *)*param_1 * 3) >> 9] +
                        (ulonglong)(*(int *)*param_1 * 3 & 0x1ff) * 4))))) {
        pppppplVar4 = param_2[2];
        ppppplVar1 = pppppplVar4[local_250 >> 9] + ((ulonglong)local_250 & 0x1ff) * 3;
        local_1d8 = (undefined **)*ppppplVar1;
        uStack_1d0 = (longlong *******)ppppplVar1[1];
        local_1c8 = (longlong *******)
                    pppppplVar4[local_250 >> 9][((ulonglong)local_250 & 0x1ff) * 3 + 2];
        ppppplVar1 = pppppplVar4[local_258._4_4_ >> 9] + ((ulonglong)local_258._4_4_ & 0x1ff) * 3;
        local_248 = (longlong ******)*ppppplVar1;
        pppppplStack_240 = (longlong ******)ppppplVar1[1];
        local_238 = (longlong ******)
                    pppppplVar4[local_258._4_4_ >> 9][((ulonglong)local_258._4_4_ & 0x1ff) * 3 + 2];
        ppppplVar1 = pppppplVar4[local_258 >> 9 & 0x7fffff] + (local_258 & 0x1ff) * 3;
        local_208 = (wchar_t *)*ppppplVar1;
        uStack_200 = ppppplVar1[1];
        local_1f8 = (longlong ******)
                    pppppplVar4[local_258 >> 9 & 0x7fffff][(local_258 & 0x1ff) * 3 + 2];
        local_2a8 = &local_1d8;
        pppppplStack_1f0 = local_248;
        pppppplStack_1e8 = pppppplStack_240;
        uStack_1e0 = (longlong *******)local_238;
        local_c8 = (longlong *******)local_1d8;
        uStack_c0 = uStack_1d0;
        local_b8 = (longlong ******)local_1c8;
        FUN_146c7de05(&local_c8,&local_298,&local_208);
        if (*(int *)(param_2[0x41] + 7) < 1) {
          pppplVar14 = (longlong ****)0x0;
        }
        else {
          pppplVar14 = *param_2[0x41][6];
        }
        FUN_1483b2fbe(pppplVar14,*(undefined4 *)*param_1,&local_c8,&local_248);
        FUN_1482ae234(&local_298,2,&local_248);
      }
      pdVar5 = (double *)param_1[4];
      if (pdVar5[2] * pdVar5[2] + *pdVar5 * *pdVar5 + pdVar5[1] * pdVar5[1] <= 0.1) {
        local_208 = (wchar_t *)
                    (local_280 * (local_270 + local_270) + local_268 * (dStack_278 + dStack_278));
        dVar8 = (dStack_278 + dStack_278) * dStack_278 + local_280 * (local_280 + local_280);
        uStack_200 = (longlong ****)
                     ((local_270 + local_270) * dStack_278 - (local_280 + local_280) * local_268);
        local_b8 = (longlong ******)DAT_14c8463c8;
        local_c8 = (longlong *******)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
        uStack_c0 = (longlong *******)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
      }
      else {
        local_208 = (wchar_t *)
                    (local_280 * (local_270 + local_270) + local_268 * (dStack_278 + dStack_278));
        dVar8 = (dStack_278 + dStack_278) * dStack_278 + local_280 * (local_280 + local_280);
        uStack_200 = (longlong ****)
                     ((local_270 + local_270) * dStack_278 - (local_280 + local_280) * local_268);
      }
      local_1f8 = (longlong ******)(1.0 - dVar8);
      FUN_1482ae2be(&local_298,1);
      dVar8 = *(double *)param_1[5];
      if ((dVar8 != 0.0) || (NAN(dVar8))) {
        dVar10 = local_280 * (local_280 + local_280);
        dVar6 = (local_280 + local_280) * local_268;
        dVar9 = local_268 * (dStack_278 + dStack_278);
        dVar11 = local_280 * (local_270 + local_270);
        dVar7 = (dStack_278 + dStack_278) * dStack_278;
        dVar12 = (local_270 + local_270) * dStack_278;
        _X = dVar8 * 0.017453292519943295 * 0.5;
        dVar8 = sin(_X);
        pppppplStack_1f0 = (longlong ******)cos(_X);
        local_208 = (wchar_t *)((dVar11 + dVar9) * dVar8);
        uStack_200 = (longlong ****)((dVar12 - dVar6) * dVar8);
        local_1f8 = (longlong ******)((1.0 - (dVar7 + dVar10)) * dVar8);
        FUN_1482ff674(&local_298);
      }
      FUN_1483301a8(&local_208,param_2);
      pppppplStack_220 = (longlong ******)uStack_1d0;
      local_228 = (longlong ******)local_1d8;
      local_238 = pppppplStack_1e8;
      pppppplVar4 = pppppplStack_1f0;
      local_248 = local_1f8;
      uStack_200 = (longlong ****)CONCAT62(uStack_200._2_6_,0x103);
      local_98 = (undefined4)local_1c8;
      uStack_94 = local_1c8._4_4_;
      uStack_90 = uStack_1c0;
      uStack_8c = uStack_1bc;
      local_a8 = (undefined4)local_1d8;
      uStack_a4 = local_1d8._4_4_;
      uStack_a0 = (undefined4)uStack_1d0;
      uStack_9c = uStack_1d0._4_4_;
      local_b8 = pppppplStack_1e8;
      uStack_b0 = (undefined4)uStack_1e0;
      uStack_ac = uStack_1e0._4_4_;
      local_c8 = (longlong *******)local_1f8;
      uStack_c0 = (longlong *******)pppppplStack_1f0;
      local_1f8 = (longlong ******)FUN_143beae66;
      pppppplStack_1f0 = pppppplStack_240;
      pppppplStack_1e8 = (longlong ******)0x0;
      local_1d8 = &PTR_LAB_14afa52b0;
      uStack_1d0 = param_2;
      pppppplStack_240 = pppppplVar4;
      local_218 = (undefined4)local_1c8;
      uStack_214 = local_1c8._4_4_;
      uStack_210 = uStack_1c0;
      uStack_20c = uStack_1bc;
      uStack_230 = (undefined4)uStack_1e0;
      uStack_22c = uStack_1e0._4_4_;
      if ((longlong *******)local_248 != (longlong *******)0x0) {
        ppppppplVar15 = (longlong *******)local_238;
        if ((longlong *******)local_238 == (longlong *******)0x0) {
          ppppppplVar15 = &local_228;
        }
        (*(code *)(*ppppppplVar15)[2])();
      }
      FUN_1483399ba(&local_208,&local_298,&local_258,
                    SUB84(*(double *)param_1[6] * 1.4142135623730951,0));
      local_2a8 = (undefined8 *)(*(double *)param_1[6] + *(double *)param_1[6]);
      FUN_1485eb722(&local_208,param_1[7],param_1[8]);
      FUN_148330418(&local_208);
      goto LAB_143bea873;
    }
  }
  local_208 = L"ComputeMeshLocalUVParam_InvalidTriangle";
  uStack_200._0_4_ = 0x27;
  FUN_1446e940c(&local_248,&local_208);
  local_208 = L"UGeometryScriptLibrary_MeshUVFunctions";
  uStack_200._0_4_ = 0x26;
  FUN_1446e940c(&local_298,&local_208);
  local_208 = L"ComputeMeshLocalUVParam: CenterPointTriangleID is not a valid triangle";
  uStack_200 = (longlong ****)CONCAT44(uStack_200._4_4_,0x46);
  FUN_140208c1e(&local_c8,&local_298,&local_248,&local_208);
  FUN_143ba90d7(*(undefined8 *)param_1[1],2,&local_c8);
  if (local_c8 != (longlong *******)0x0) {
    (*(code *)(*local_c8)[2])();
  }
LAB_143bea873:
  if ((local_80 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143beae66 FUN_143beae66 body=36 status=ok
// SIG undefined FUN_143beae66(void)

undefined8 FUN_143beae66(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  FUN_146c393d4(param_1,*param_2,*param_3,1,1);
  return param_1;
}



// FUNCTION 143beaeb4 FUN_143beaeb4 body=29 status=ok
// SIG undefined FUN_143beaeb4(void)

undefined8 FUN_143beaeb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143beaed2 FUN_143beaed2 body=1125 status=ok
// SIG undefined FUN_143beaed2(void)

void FUN_143beaed2(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined4 *puVar13;
  longlong lVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar14 = *(longlong *)(param_2 + 0x208);
  lVar7 = lVar14;
  if (lVar14 == 0) {
    FUN_14582ed12(param_2);
    lVar7 = *(longlong *)(param_2 + 0x208);
  }
  lVar7 = *(longlong *)(lVar7 + 0x40);
  if (lVar7 == 0) {
    FUN_146c17f82();
    lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x40);
  }
  else if ((lVar14 != 0) && (*(char *)*param_1 != '\0')) {
    FUN_146c32e62();
  }
  if (*(int *)(lVar7 + 0x38) == 0) {
    local_48 = (void *)0x0;
    uStack_40 = 0;
    uVar6 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
    if ((int)uVar6 < 1) {
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar6);
      }
    }
    else {
      uStack_40 = (ulonglong)uVar6;
      FUN_1446f48e2(&local_48);
      memset(local_48,0,(ulonglong)uVar6 << 2);
      uVar6 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
      if (uVar6 != 0) {
        uVar2 = 0;
        if (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x28) - 1U)) {
          uVar4 = 1;
          uVar5 = 1;
          if (1 < (int)uVar6) {
            uVar4 = uVar6;
          }
          do {
            uVar2 = uVar4;
            if (uVar4 == uVar5) break;
            uVar12 = uVar5 >> 9;
            uVar15 = uVar5 & 0x1ff;
            uVar2 = uVar5;
            uVar5 = uVar5 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x28))[uVar12] +
                                               (ulonglong)uVar15 * 2) - 1U));
        }
        if (uVar2 != uVar6) {
          do {
            puVar1 = (undefined4 *)param_1[1];
            local_58 = *puVar1;
            uStack_54 = puVar1[1];
            uStack_50 = puVar1[2];
            uStack_4c = puVar1[3];
            uVar3 = FUN_146c32f5e(lVar7,&local_58);
            *(undefined4 *)((longlong)local_48 + (longlong)(int)uVar2 * 4) = uVar3;
            uVar4 = uVar2 + 1;
            if ((int)(uVar2 + 1) < (int)uVar6) {
              uVar4 = uVar6;
            }
            do {
              uVar5 = uVar4;
              if (uVar4 - 1 == uVar2) break;
              uVar2 = uVar2 + 1;
              uVar5 = uVar2;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(param_2 + 0x28) +
                                                   (ulonglong)(uVar2 >> 9) * 8) +
                                                 (ulonglong)(uVar2 & 0x1ff) * 2) - 1U));
            uVar2 = uVar5;
          } while (uVar2 != uVar6);
        }
      }
    }
    uVar2 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar6 = 0;
    if ((uVar2 != 0) &&
       (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar4 = 1;
      uVar5 = 1;
      if (1 < (int)uVar2) {
        uVar4 = uVar2;
      }
      do {
        uVar6 = uVar4;
        if (uVar4 == uVar5) break;
        uVar12 = uVar5 >> 9;
        uVar15 = uVar5 & 0x1ff;
        uVar6 = uVar5;
        uVar5 = uVar5 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar12] +
                                           (ulonglong)uVar15 * 2) - 1U));
    }
    if (uVar6 != uVar2) {
      do {
        lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar6 >> 9) * 8);
        uVar8 = (ulonglong)(uVar6 & 0x1ff);
        uStack_50 = *(undefined4 *)
                     ((longlong)local_48 + (longlong)*(int *)(lVar14 + 8 + uVar8 * 0xc) * 4);
        uStack_54 = *(undefined4 *)
                     ((longlong)local_48 + (longlong)*(int *)(lVar14 + 4 + uVar8 * 0xc) * 4);
        local_58 = *(undefined4 *)
                    ((longlong)local_48 + (longlong)*(int *)(lVar14 + uVar8 * 0xc) * 4);
        FUN_146c2a048(lVar7,uVar6,&local_58,1);
        uVar4 = uVar6 + 1;
        if ((int)(uVar6 + 1) < (int)uVar2) {
          uVar4 = uVar2;
        }
        do {
          uVar5 = uVar4;
          if (uVar4 - 1 == uVar6) break;
          uVar6 = uVar6 + 1;
          uVar5 = uVar6;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x148) +
                                               (ulonglong)(uVar6 >> 9) * 8) +
                                             (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
        uVar6 = uVar5;
      } while (uVar6 != uVar2);
    }
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar2 = *(int *)(lVar7 + 8) * 0x200 + *(int *)(lVar7 + 0xc);
    uVar6 = 0;
    if ((uVar2 != 0) &&
       (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar7 + 0x10) - 1U))) {
      uVar4 = 1;
      uVar5 = 1;
      if (1 < (int)uVar2) {
        uVar4 = uVar2;
      }
      do {
        uVar6 = uVar4;
        if (uVar4 == uVar5) break;
        uVar12 = uVar5 >> 9;
        uVar15 = uVar5 & 0x1ff;
        uVar6 = uVar5;
        uVar5 = uVar5 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar7 + 0x10))[uVar12] +
                                           (ulonglong)uVar15 * 2) - 1U));
    }
LAB_143beb08c:
    if (uVar6 != uVar2) {
      uVar8 = (ulonglong)(uVar6 >> 7 & 0x7fffff);
      uVar11 = (ulonglong)((uVar6 & 0x7f) << 4);
      puVar13 = (undefined4 *)(*(longlong *)(*(longlong *)(lVar7 + 0x48) + uVar8 * 8) + uVar11);
      puVar1 = (undefined4 *)param_1[1];
      uVar4 = *(uint *)param_1[2];
      puVar9 = puVar13;
      if ((uVar4 & 1) != 0) {
        puVar9 = puVar1;
      }
      puVar16 = puVar1;
      if ((uVar4 >> 8 & 1) == 0) {
        puVar16 = puVar13;
      }
      puVar10 = puVar1;
      if ((uVar4 >> 0x10 & 1) == 0) {
        puVar10 = puVar13;
      }
      if ((uVar4 >> 0x18 & 1) != 0) {
        puVar13 = puVar1;
      }
      local_48 = (void *)CONCAT44(puVar16[1],*puVar9);
      uStack_40 = CONCAT44(puVar13[3],puVar10[2]);
      lVar14 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x48) + uVar8 * 8) + uVar11 + lVar14 * 4) =
             *(undefined4 *)((longlong)&local_48 + lVar14 * 4);
        lVar14 = lVar14 + 1;
      } while (lVar14 != 4);
      uVar4 = uVar6 + 1;
      if ((int)(uVar6 + 1) < (int)uVar2) {
        uVar4 = uVar2;
      }
      uVar5 = uVar6;
      do {
        uVar6 = uVar4;
        if (uVar4 - 1 == uVar5) break;
        uVar6 = uVar5 + 1;
        uVar5 = uVar6;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar7 + 0x10) +
                                             (ulonglong)(uVar6 >> 9) * 8) +
                                           (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
      goto LAB_143beb08c;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143beb33a FUN_143beb33a body=2124 status=ok
// SIG undefined FUN_143beb33a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143beb33a(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 local_188 [40];
  longlong *local_160;
  uint *local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  uint *local_138;
  undefined8 uStack_130;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_fc [4];
  longlong *local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 uStack_c8;
  int local_c4;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)local_188;
  local_160 = param_2;
  if (param_2[0x41] == 0) {
    FUN_14582ed12(param_2);
    lVar13 = *(longlong *)(param_2[0x41] + 0x40);
    if (lVar13 == 0) goto LAB_143beb8b2;
  }
  else {
    local_120 = *(longlong *)(param_2[0x41] + 0x40);
    if (local_120 != 0) goto LAB_143beb3b7;
LAB_143beb8b2:
    FUN_146c17f82();
    lVar13 = *(longlong *)(param_2[0x41] + 0x40);
  }
  local_f8 = (longlong *)0x0;
  plStack_f0 = (longlong *)0x0;
  uVar12 = (int)param_2[4] * 0x200 + *(int *)((longlong)param_2 + 0x24);
  local_120 = lVar13;
  if ((int)uVar12 < 1) {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar12);
    }
  }
  else {
    plStack_f0 = (longlong *)(ulonglong)uVar12;
    FUN_1446f48e2(&local_f8);
    memset(local_f8,0,(ulonglong)uVar12 << 2);
    uVar12 = (int)local_160[4] * 0x200 + *(int *)((longlong)local_160 + 0x24);
    if (uVar12 != 0) {
      uVar11 = 0;
      if (0xfffd < (ushort)(**(short **)local_160[5] - 1U)) {
        uVar14 = 1;
        uVar6 = 1;
        if (1 < (int)uVar12) {
          uVar14 = uVar12;
        }
        do {
          uVar11 = uVar14;
          if (uVar14 == uVar6) break;
          uVar9 = uVar6 >> 9;
          uVar15 = uVar6 & 0x1ff;
          uVar11 = uVar6;
          uVar6 = uVar6 + 1;
        } while (0xfffd < (ushort)(*(short *)(((undefined8 *)local_160[5])[uVar9] +
                                             (ulonglong)uVar15 * 2) - 1U));
      }
      if (uVar11 != uVar12) {
        do {
          local_118 = (code *)&DAT_3f8000003f800000;
          uStack_110 = (longlong **)&DAT_3f8000003f800000;
          uVar19 = FUN_146c32f5e(lVar13,&local_118);
          *(undefined4 *)((longlong)local_f8 + (longlong)(int)uVar11 * 4) = uVar19;
          uVar14 = uVar11 + 1;
          if ((int)(uVar11 + 1) < (int)uVar12) {
            uVar14 = uVar12;
          }
          do {
            uVar6 = uVar14;
            if (uVar14 - 1 == uVar11) break;
            uVar11 = uVar11 + 1;
            uVar6 = uVar11;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (local_160[5] + (ulonglong)(uVar11 >> 9) * 8) +
                                               (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
          uVar11 = uVar6;
        } while (uVar11 != uVar12);
      }
    }
  }
  param_2 = local_160;
  uVar11 = (int)local_160[0x28] * 0x200 + *(int *)((longlong)local_160 + 0x144);
  uVar12 = 0;
  if ((uVar11 != 0) && (uVar12 = 0, 0xfffd < (ushort)(**(short **)local_160[0x29] - 1U))) {
    uVar14 = 1;
    uVar6 = 1;
    if (1 < (int)uVar11) {
      uVar14 = uVar11;
    }
    do {
      uVar12 = uVar14;
      if (uVar14 == uVar6) break;
      uVar9 = uVar6 >> 9;
      uVar15 = uVar6 & 0x1ff;
      uVar12 = uVar6;
      uVar6 = uVar6 + 1;
    } while (0xfffd < (ushort)(*(short *)(((undefined8 *)local_160[0x29])[uVar9] +
                                         (ulonglong)uVar15 * 2) - 1U));
  }
  if (uVar12 != uVar11) {
    do {
      lVar3 = *(longlong *)(param_2[0x26] + (ulonglong)(uVar12 >> 9) * 8);
      uVar5 = (ulonglong)(uVar12 & 0x1ff);
      local_118 = (code *)CONCAT44(*(undefined4 *)
                                    ((longlong)local_f8 +
                                    (longlong)*(int *)(lVar3 + 4 + uVar5 * 0xc) * 4),
                                   *(undefined4 *)
                                    ((longlong)local_f8 +
                                    (longlong)*(int *)(lVar3 + uVar5 * 0xc) * 4));
      uStack_110 = (longlong **)
                   CONCAT44(uStack_110._4_4_,
                            *(undefined4 *)
                             ((longlong)local_f8 + (longlong)*(int *)(lVar3 + 8 + uVar5 * 0xc) * 4))
      ;
      FUN_146c2a048(lVar13,uVar12,&local_118,1);
      uVar14 = uVar12 + 1;
      if ((int)(uVar12 + 1) < (int)uVar11) {
        uVar14 = uVar11;
      }
      do {
        uVar6 = uVar14;
        if (uVar14 - 1 == uVar12) break;
        uVar12 = uVar12 + 1;
        uVar6 = uVar12;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (param_2[0x29] + (ulonglong)(uVar12 >> 9) * 8) +
                                           (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
      uVar12 = uVar6;
    } while (uVar12 != uVar11);
  }
  if (local_f8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143beb3b7:
  if (*(char *)*param_1 == '\x01') {
    puVar16 = (undefined4 *)param_1[1];
    uVar12 = *(uint *)param_1[2];
    uVar19 = 0;
    if ((uVar12 & 1) == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *puVar16;
    }
    uVar21 = 0;
    if ((uVar12 >> 8 & 1) != 0) {
      uVar21 = puVar16[1];
    }
    if ((uVar12 >> 0x10 & 1) != 0) {
      uVar19 = puVar16[2];
    }
    if ((uVar12 >> 0x18 & 1) == 0) {
      uVar22 = 0x3f800000;
    }
    else {
      uVar22 = puVar16[3];
    }
    local_138 = (uint *)0x0;
    uStack_130 = 0;
    FUN_143bab15a(param_1[3],param_2,&local_138,1);
    local_d8 = 0;
    local_d0 = 0;
    local_f8 = (longlong *)0x0;
    plStack_f0 = (longlong *)0x0;
    local_cc = 0x80;
    uStack_c8 = 0xffffffff;
    local_c4 = 0;
    local_b8 = (undefined1 *)0x0;
    local_b0 = 0;
    if ((longlong)(int)uStack_130 != 0) {
      local_158 = local_138 + (int)uStack_130;
      puVar18 = local_138;
      do {
        lVar13 = *(longlong *)(param_2[0x26] + (ulonglong)(*puVar18 >> 9) * 8);
        uVar5 = (ulonglong)(*puVar18 & 0x1ff);
        local_140 = *(undefined4 *)(lVar13 + 8 + uVar5 * 0xc);
        local_148 = *(undefined8 *)(lVar13 + uVar5 * 0xc);
        lVar13 = 0;
        do {
          if ((int)plStack_f0 != local_c4) {
            uVar12 = *(uint *)((longlong)&local_148 + lVar13 * 4);
            puVar8 = local_b8;
            if (local_b8 == (undefined1 *)0x0) {
              puVar8 = local_c0;
            }
            iVar17 = *(int *)(puVar8 + (ulonglong)(local_b0 - 1U & uVar12) * 4);
            while (iVar17 != -1) {
              plVar1 = local_f8 + (longlong)iVar17 * 2;
              if (*(uint *)(local_f8 + (longlong)iVar17 * 2) == uVar12) {
                if ((plVar1 != (longlong *)0x0) && (plVar1 != (longlong *)0xfffffffffffffffc))
                goto LAB_143beb5f1;
                break;
              }
              iVar17 = (int)plVar1[1];
            }
          }
          local_118 = (code *)CONCAT44(uVar21,uVar20);
          uStack_110 = (longlong **)CONCAT44(uVar22,uVar19);
          local_14c = FUN_146c32f5e(local_120,&local_118);
          local_118 = (code *)((longlong)&local_148 + lVar13 * 4);
          uStack_110 = (longlong **)&local_14c;
          FUN_140263e2a(&local_f8,local_fc,&local_118,0);
LAB_143beb5f1:
          plVar1 = local_160;
          lVar13 = lVar13 + 1;
        } while (lVar13 != 3);
        puVar18 = puVar18 + 1;
        param_2 = local_160;
      } while (puVar18 != local_158);
      if ((longlong)(int)uStack_130 != 0) {
        puVar18 = local_138 + (int)uStack_130;
        puVar10 = local_138;
        do {
          uVar12 = *puVar10;
          lVar13 = *(longlong *)(plVar1[0x26] + (ulonglong)(uVar12 >> 9) * 8);
          uVar11 = *(uint *)(lVar13 + 8 + (ulonglong)(uVar12 & 0x1ff) * 0xc);
          uVar5 = *(ulonglong *)(lVar13 + (ulonglong)(uVar12 & 0x1ff) * 0xc);
          if ((int)plStack_f0 == local_c4) {
            local_118 = (code *)CONCAT44(_DAT_00000004,_DAT_00000004);
          }
          else {
            puVar8 = local_b8;
            if (local_b8 == (undefined1 *)0x0) {
              puVar8 = local_c0;
            }
            uVar14 = local_b0 - 1;
            iVar17 = *(int *)(puVar8 + (ulonglong)(uVar14 & (uint)uVar5) * 4);
            puVar16 = (undefined4 *)&DAT_00000004;
            if (iVar17 != -1) {
              do {
                plVar7 = local_f8 + (longlong)iVar17 * 2;
                if (*(uint *)(local_f8 + (longlong)iVar17 * 2) == (uint)uVar5) goto LAB_143beb6fb;
                iVar17 = (int)plVar7[1];
              } while (iVar17 != -1);
              plVar7 = (longlong *)0x0;
LAB_143beb6fb:
              puVar16 = (undefined4 *)((longlong)plVar7 + 4);
            }
            local_118._4_4_ = (uint)(uVar5 >> 0x20);
            iVar17 = *(int *)(puVar8 + (ulonglong)(local_118._4_4_ & uVar14) * 4);
            while (iVar17 != -1) {
              plVar7 = local_f8 + (longlong)iVar17 * 2;
              if (*(uint *)(local_f8 + (longlong)iVar17 * 2) == local_118._4_4_) goto LAB_143beb736;
              iVar17 = (int)plVar7[1];
            }
            plVar7 = (longlong *)0x0;
LAB_143beb736:
            local_118 = (code *)CONCAT44(*(undefined4 *)((longlong)plVar7 + 4),*puVar16);
            uVar5 = (ulonglong)uVar11;
            iVar17 = *(int *)(puVar8 + (ulonglong)(uVar14 & uVar11) * 4);
            while (iVar17 != -1) {
              plVar7 = local_f8 + (longlong)iVar17 * 2;
              if (*(uint *)(local_f8 + (longlong)iVar17 * 2) == uVar11) goto LAB_143beb680;
              iVar17 = (int)plVar7[1];
            }
          }
          plVar7 = (longlong *)0x0;
LAB_143beb680:
          uStack_110 = (longlong **)CONCAT44(uStack_110._4_4_,*(undefined4 *)((longlong)plVar7 + 4))
          ;
          FUN_146c2a048(local_120,uVar12,&local_118,CONCAT71((int7)(uVar5 >> 8),1));
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar18);
      }
    }
    local_b0 = 0;
    if (local_b8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    uVar5 = (ulonglong)plStack_f0 >> 0x20;
    plStack_f0 = (longlong *)((ulonglong)plStack_f0 & 0xffffffff00000000);
    if ((int)uVar5 != 0) {
      FUN_14472eb64(&local_f8,0);
    }
    uStack_c8 = 0xffffffff;
    local_c4 = 0;
    local_d0 = 0;
    if (0x80 < local_cc) {
      local_cc = 0x80;
      FUN_1446efbd8(&local_e8,0);
    }
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    if (local_f8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_138 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar2 = param_1[3];
    cVar4 = FUN_143ba9b82(uVar2);
    if ((cVar4 == '\x03') || (cVar4 == '\0')) {
      uStack_110 = &local_f8;
      plStack_f0 = &local_120;
      local_e8 = param_1[1];
      local_e0 = param_1[2];
      local_118 = FUN_143bebb88;
      local_f8 = param_2;
      FUN_143bad420(uVar2,param_2,&local_118,0);
    }
    else {
      local_f8 = &local_120;
      uStack_110 = &local_f8;
      plStack_f0 = (longlong *)param_1[1];
      local_e8 = param_1[2];
      local_118 = FUN_143bebd8c;
      FUN_143bac7da(uVar2,param_2,&local_118,0);
    }
  }
  if ((local_a0 ^ (ulonglong)local_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bebb88 FUN_143bebb88 body=118 status=ok
// SIG undefined FUN_143bebb88(void)

void FUN_143bebb88(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  code *local_20;
  undefined8 *local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_c = *param_2;
  local_38 = &local_c;
  local_40 = param_1[1];
  local_18 = &local_40;
  local_30 = param_1[2];
  local_28 = param_1[3];
  local_20 = FUN_143bebc00;
  FUN_146c03fd0(*param_1);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bebc00 FUN_143bebc00 body=394 status=ok
// SIG undefined FUN_143bebc00(void)

void FUN_143bebc00(undefined8 *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined1 auStack_68 [32];
  undefined4 local_48 [7];
  uint local_2c [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = *param_2 * 3;
  lVar5 = *(longlong *)(*(longlong *)*param_1 + 0x78);
  uVar1 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar4 >> 9) * 8) +
                   (ulonglong)(uVar4 & 0x1ff) * 4);
  if (-1 < (int)uVar1) {
    local_2c[0] = uVar1;
    local_2c[1] = *(undefined4 *)
                   (*(longlong *)(lVar5 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                   (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
    local_2c[2] = *(undefined4 *)
                   (*(longlong *)(lVar5 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
                   (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)*param_1;
      uVar1 = local_2c[lVar5];
      if (*(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x60) + (ulonglong)(uVar1 >> 9) * 8) +
                  (ulonglong)(uVar1 & 0x1ff) * 4) == *(int *)param_1[1]) {
        uVar10 = (ulonglong)(uVar1 >> 7 & 0x7fffff);
        uVar9 = (ulonglong)((uVar1 & 0x7f) << 4);
        puVar11 = (undefined4 *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + uVar10 * 8) + uVar9);
        puVar3 = (undefined4 *)param_1[2];
        uVar1 = *(uint *)param_1[3];
        puVar7 = puVar11;
        if ((uVar1 & 1) != 0) {
          puVar7 = puVar3;
        }
        puVar6 = puVar3;
        if ((uVar1 >> 8 & 1) == 0) {
          puVar6 = puVar11;
        }
        puVar8 = puVar3;
        if ((uVar1 >> 0x10 & 1) == 0) {
          puVar8 = puVar11;
        }
        if ((uVar1 >> 0x18 & 1) != 0) {
          puVar11 = puVar3;
        }
        local_48[0] = *puVar7;
        local_48[1] = puVar6[1];
        local_48[2] = puVar8[2];
        local_48[3] = puVar11[3];
        lVar12 = 0;
        do {
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x48) + uVar10 * 8) + uVar9 + lVar12 * 4) =
               local_48[lVar12];
          lVar12 = lVar12 + 1;
        } while (lVar12 != 4);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 3);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bebd8c FUN_143bebd8c body=352 status=ok
// SIG undefined FUN_143bebd8c(void)

void FUN_143bebd8c(undefined8 *param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined1 auStack_68 [32];
  undefined4 local_48 [7];
  uint local_2c [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = *param_2 * 3;
  lVar5 = *(longlong *)(*(longlong *)*param_1 + 0x78);
  uVar1 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar4 >> 9) * 8) +
                   (ulonglong)(uVar4 & 0x1ff) * 4);
  if (-1 < (int)uVar1) {
    local_2c[0] = uVar1;
    local_2c[1] = *(undefined4 *)
                   (*(longlong *)(lVar5 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                   (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
    local_2c[2] = *(undefined4 *)
                   (*(longlong *)(lVar5 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
                   (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
    lVar5 = 0;
    do {
      puVar2 = (undefined4 *)param_1[1];
      lVar3 = *(longlong *)*param_1;
      uVar10 = (ulonglong)(local_2c[lVar5] >> 7 & 0x7fffff);
      uVar9 = (ulonglong)((local_2c[lVar5] & 0x7f) << 4);
      puVar12 = (undefined4 *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + uVar10 * 8) + uVar9);
      uVar1 = *(uint *)param_1[2];
      puVar7 = puVar12;
      if ((uVar1 & 1) != 0) {
        puVar7 = puVar2;
      }
      puVar6 = puVar2;
      if ((uVar1 >> 8 & 1) == 0) {
        puVar6 = puVar12;
      }
      puVar8 = puVar2;
      if ((uVar1 >> 0x10 & 1) == 0) {
        puVar8 = puVar12;
      }
      if ((uVar1 >> 0x18 & 1) != 0) {
        puVar12 = puVar2;
      }
      local_48[0] = *puVar7;
      local_48[1] = puVar6[1];
      local_48[2] = puVar8[2];
      local_48[3] = puVar12[3];
      lVar11 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x48) + uVar10 * 8) + uVar9 + lVar11 * 4) =
             local_48[lVar11];
        lVar11 = lVar11 + 1;
      } while (lVar11 != 4);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 3);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bebeee FUN_143bebeee body=904 status=ok
// SIG undefined FUN_143bebeee(void)

void FUN_143bebeee(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_98 [40];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  wchar_t *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = *(longlong **)*param_1;
  if ((int)plVar2[1] < *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24)) {
    local_58 = L"SetMeshPerVertexColors_IncorrectCount";
    uStack_50._0_4_ = 0x25;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshVertexColorFunctions";
    uStack_50._0_4_ = 0x2f;
    FUN_1446e940c(local_70,&local_58);
    local_58 = 
    L"SetMeshPerVertexColors: size of provided VertexColorList is smaller than MaxVertexID of Mesh";
    uStack_50 = CONCAT44(uStack_50._4_4_,0x5c);
    FUN_140208c1e(&local_68,local_70,local_6c,&local_58);
    FUN_143ba90d7(*(undefined8 *)param_1[1],2,&local_68);
    if ((longlong *)CONCAT44(uStack_64,local_68) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x10))();
    }
  }
  else {
    lVar6 = *(longlong *)(param_2 + 0x208);
    if (lVar6 == 0) {
      FUN_14582ed12(param_2);
      lVar6 = *(longlong *)(param_2 + 0x208);
    }
    lVar6 = *(longlong *)(lVar6 + 0x40);
    if (lVar6 == 0) {
      FUN_146c17f82();
      lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x40);
    }
    FUN_146c32e62(lVar6);
    local_58 = (wchar_t *)0x0;
    uStack_50 = 0;
    uVar12 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
    if ((int)uVar12 < 1) {
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar12);
      }
    }
    else {
      uStack_50 = (ulonglong)uVar12;
      FUN_1446f48e2(&local_58);
      memset(local_58,0,(ulonglong)uVar12 << 2);
      uVar12 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
      if (uVar12 != 0) {
        uVar10 = 0;
        if (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x28) - 1U)) {
          uVar9 = 1;
          uVar5 = 1;
          if (1 < (int)uVar12) {
            uVar9 = uVar12;
          }
          do {
            uVar10 = uVar9;
            if (uVar9 == uVar5) break;
            uVar8 = uVar5 >> 9;
            uVar11 = uVar5 & 0x1ff;
            uVar10 = uVar5;
            uVar5 = uVar5 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x28))[uVar8] +
                                               (ulonglong)uVar11 * 2) - 1U));
        }
        if (uVar10 != uVar12) {
          do {
            puVar1 = (undefined4 *)(*plVar2 + (longlong)(int)uVar10 * 0x10);
            local_68 = *puVar1;
            uStack_64 = puVar1[1];
            uStack_60 = puVar1[2];
            uStack_5c = puVar1[3];
            uVar4 = FUN_146c32f5e(lVar6,&local_68);
            *(undefined4 *)(local_58 + (longlong)(int)uVar10 * 2) = uVar4;
            uVar9 = uVar10 + 1;
            if ((int)(uVar10 + 1) < (int)uVar12) {
              uVar9 = uVar12;
            }
            do {
              uVar5 = uVar9;
              if (uVar9 - 1 == uVar10) break;
              uVar10 = uVar10 + 1;
              uVar5 = uVar10;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(param_2 + 0x28) +
                                                   (ulonglong)(uVar10 >> 9) * 8) +
                                                 (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
            uVar10 = uVar5;
          } while (uVar10 != uVar12);
        }
      }
    }
    uVar10 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar12 = 0;
    if ((uVar10 != 0) &&
       (uVar12 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar9 = 1;
      uVar5 = 1;
      if (1 < (int)uVar10) {
        uVar9 = uVar10;
      }
      do {
        uVar12 = uVar9;
        if (uVar9 == uVar5) break;
        uVar8 = uVar5 >> 9;
        uVar11 = uVar5 & 0x1ff;
        uVar12 = uVar5;
        uVar5 = uVar5 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar8] +
                                           (ulonglong)uVar11 * 2) - 1U));
    }
    if (uVar12 != uVar10) {
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar12 >> 9) * 8);
        uVar7 = (ulonglong)(uVar12 & 0x1ff);
        uStack_60 = *(undefined4 *)(local_58 + (longlong)*(int *)(lVar3 + 8 + uVar7 * 0xc) * 2);
        uStack_64 = *(undefined4 *)(local_58 + (longlong)*(int *)(lVar3 + 4 + uVar7 * 0xc) * 2);
        local_68 = *(undefined4 *)(local_58 + (longlong)*(int *)(lVar3 + uVar7 * 0xc) * 2);
        FUN_146c2a048(lVar6,uVar12,&local_68,1);
        uVar9 = uVar12 + 1;
        if ((int)(uVar12 + 1) < (int)uVar10) {
          uVar9 = uVar10;
        }
        do {
          uVar5 = uVar9;
          if (uVar9 - 1 == uVar12) break;
          uVar12 = uVar12 + 1;
          uVar5 = uVar12;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x148) +
                                               (ulonglong)(uVar12 >> 9) * 8) +
                                             (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
        uVar12 = uVar5;
      } while (uVar12 != uVar10);
    }
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bec278 FUN_143bec278 body=1440 status=ok
// SIG undefined FUN_143bec278(void)

void FUN_143bec278(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  float fVar22;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong lStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar16 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar16);
  }
  plVar7 = (longlong *)*param_1;
  *(undefined4 *)(plVar7 + 1) = 0;
  if (*(int *)((longlong)plVar7 + 0xc) != iVar16) {
    FUN_144750f90(plVar7,iVar16);
  }
  for (; iVar16 != 0; iVar16 = iVar16 + -1) {
    iVar5 = (int)plVar7[1];
    *(uint *)(plVar7 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)plVar7 + 0xc) < iVar5 + 1U) {
      FUN_1467ff840(plVar7,iVar5);
    }
    puVar1 = (undefined8 *)(*plVar7 + (longlong)iVar5 * 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *(bool *)param_1[1] = *(int *)(param_2 + 0x38) * 0x200 + *(int *)(param_2 + 0x3c) != 0;
  if ((*(longlong *)(param_2 + 0x208) != 0) &&
     (lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x40), lVar10 != 0)) {
    if (*(char *)param_1[2] == '\x01') {
      local_78 = 0;
      lStack_70 = 0;
      local_88 = local_88 & 0xffffffff00000000;
      FUN_1448156a8(&local_78,&local_88,*(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24))
      ;
      uVar17 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
      uVar9 = 0;
      if ((uVar17 != 0) &&
         (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
        uVar13 = 1;
        uVar20 = 1;
        if (1 < (int)uVar17) {
          uVar20 = uVar17;
        }
        do {
          uVar11 = (uint)uVar13;
          uVar9 = uVar20;
          if (uVar20 == uVar11) break;
          uVar8 = uVar13 >> 9;
          uVar13 = (ulonglong)(uVar11 + 1);
          uVar9 = uVar11;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar8] +
                                             (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      }
joined_r0x000143bec3d5:
      uVar20 = uVar9;
      if (uVar20 != uVar17) {
        if (-1 < *(int *)(*(longlong *)
                           (*(longlong *)(lVar10 + 0x78) + (ulonglong)(uVar20 * 3 >> 9) * 8) +
                         (ulonglong)(uVar20 * 3 & 0x1ff) * 4)) {
          lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar20 >> 9) * 8);
          uVar13 = (ulonglong)(uVar20 & 0x1ff);
          lVar18 = (longlong)*(int *)(lVar14 + uVar13 * 0xc);
          lVar21 = (longlong)*(int *)(lVar14 + 4 + uVar13 * 0xc);
          lVar19 = (longlong)*(int *)(lVar14 + 8 + uVar13 * 0xc);
          local_88 = 0;
          uStack_80 = 0x3f80000000000000;
          local_98 = 0;
          uStack_90 = 0x3f80000000000000;
          local_a8 = 0;
          uStack_a0 = 0x3f80000000000000;
          local_b8 = &local_a8;
          FUN_146c35c54(lVar10,uVar20,&local_88,&local_98);
          lVar14 = *(longlong *)*param_1;
          lVar15 = lVar18 * 0x10;
          *(float *)(lVar14 + lVar15) = (float)local_88 + *(float *)(lVar14 + lVar15);
          *(float *)(lVar14 + 4 + lVar15) = local_88._4_4_ + *(float *)(lVar14 + 4 + lVar15);
          *(float *)(lVar14 + 8 + lVar15) = (float)uStack_80 + *(float *)(lVar14 + 8 + lVar15);
          *(float *)(lVar14 + 0xc + lVar15) = uStack_80._4_4_ + *(float *)(lVar14 + 0xc + lVar15);
          piVar2 = (int *)(local_78 + lVar18 * 4);
          *piVar2 = *piVar2 + 1;
          lVar14 = *(longlong *)*param_1;
          lVar15 = lVar21 * 0x10;
          *(float *)(lVar14 + lVar15) = (float)local_98 + *(float *)(lVar14 + lVar15);
          *(float *)(lVar14 + 4 + lVar15) = local_98._4_4_ + *(float *)(lVar14 + 4 + lVar15);
          *(float *)(lVar14 + 8 + lVar15) = (float)uStack_90 + *(float *)(lVar14 + 8 + lVar15);
          *(float *)(lVar14 + 0xc + lVar15) = uStack_90._4_4_ + *(float *)(lVar14 + 0xc + lVar15);
          piVar2 = (int *)(local_78 + lVar21 * 4);
          *piVar2 = *piVar2 + 1;
          lVar14 = *(longlong *)*param_1;
          lVar15 = lVar19 * 0x10;
          *(float *)(lVar14 + lVar15) = (float)local_a8 + *(float *)(lVar14 + lVar15);
          *(float *)(lVar14 + 4 + lVar15) = local_a8._4_4_ + *(float *)(lVar14 + 4 + lVar15);
          *(float *)(lVar14 + 8 + lVar15) = (float)uStack_a0 + *(float *)(lVar14 + 8 + lVar15);
          *(float *)(lVar14 + 0xc + lVar15) = uStack_a0._4_4_ + *(float *)(lVar14 + 0xc + lVar15);
          piVar2 = (int *)(local_78 + lVar19 * 4);
          *piVar2 = *piVar2 + 1;
        }
        uVar11 = uVar20 + 1;
        if ((int)(uVar20 + 1) < (int)uVar17) {
          uVar11 = uVar17;
        }
        do {
          uVar9 = uVar11;
          if (uVar11 - 1 == uVar20) break;
          uVar20 = uVar20 + 1;
          uVar9 = uVar20;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x148) +
                                               (ulonglong)(uVar20 >> 9) * 8) +
                                             (ulonglong)(uVar20 & 0x1ff) * 2) - 1U));
        goto joined_r0x000143bec3d5;
      }
      if (0 < (int)lStack_70) {
        lVar10 = 0xc;
        lVar14 = 0;
        do {
          iVar16 = *(int *)(local_78 + lVar14 * 4);
          if (1 < iVar16) {
            fVar22 = 1.0 / (float)iVar16;
            lVar15 = *(longlong *)*param_1;
            *(float *)(lVar15 + -0xc + lVar10) = *(float *)(lVar15 + -0xc + lVar10) * fVar22;
            *(float *)(lVar15 + -8 + lVar10) = *(float *)(lVar15 + -8 + lVar10) * fVar22;
            *(float *)(lVar15 + -4 + lVar10) = *(float *)(lVar15 + -4 + lVar10) * fVar22;
            *(float *)(lVar15 + lVar10) = fVar22 * *(float *)(lVar15 + lVar10);
          }
          lVar14 = lVar14 + 1;
          lVar10 = lVar10 + 0x10;
        } while (lVar14 < (int)lStack_70);
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      uVar17 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
      uVar9 = 0;
      if ((uVar17 != 0) &&
         (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
        uVar20 = 1;
        uVar11 = 1;
        if (1 < (int)uVar17) {
          uVar20 = uVar17;
        }
        do {
          uVar12 = uVar11;
          uVar9 = uVar20;
          if (uVar20 == uVar12) break;
          uVar11 = uVar12 + 1;
          uVar9 = uVar12;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar12 >> 9] +
                                             (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
      }
joined_r0x000143bec4e2:
      uVar20 = uVar9;
      if (uVar20 != uVar17) {
        if (-1 < *(int *)(*(longlong *)
                           (*(longlong *)(lVar10 + 0x78) + (ulonglong)(uVar20 * 3 >> 9) * 8) +
                         (ulonglong)(uVar20 * 3 & 0x1ff) * 4)) {
          lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar20 >> 9) * 8);
          uVar13 = (ulonglong)(uVar20 & 0x1ff);
          iVar16 = *(int *)(lVar14 + uVar13 * 0xc);
          iVar5 = *(int *)(lVar14 + 4 + uVar13 * 0xc);
          iVar6 = *(int *)(lVar14 + 8 + uVar13 * 0xc);
          local_78 = 0;
          lStack_70 = 0x3f80000000000000;
          local_88 = 0;
          uStack_80 = 0x3f80000000000000;
          local_98 = 0;
          uStack_90 = 0x3f80000000000000;
          local_b8 = &local_98;
          FUN_146c35c54(lVar10,uVar20,&local_78,&local_88);
          plVar7 = (longlong *)(*(longlong *)*param_1 + (longlong)iVar16 * 0x10);
          *plVar7 = local_78;
          plVar7[1] = lStack_70;
          puVar3 = (ulonglong *)(*(longlong *)*param_1 + (longlong)iVar5 * 0x10);
          *puVar3 = local_88;
          puVar3[1] = uStack_80;
          puVar4 = (undefined4 *)(*(longlong *)*param_1 + (longlong)iVar6 * 0x10);
          *puVar4 = (float)local_98;
          puVar4[1] = local_98._4_4_;
          puVar4[2] = (float)uStack_90;
          puVar4[3] = uStack_90._4_4_;
        }
        uVar11 = uVar20 + 1;
        if ((int)(uVar20 + 1) < (int)uVar17) {
          uVar11 = uVar17;
        }
        do {
          uVar9 = uVar11;
          if (uVar11 - 1 == uVar20) break;
          uVar20 = uVar20 + 1;
          uVar9 = uVar20;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x148) +
                                               (ulonglong)(uVar20 >> 9) * 8) +
                                             (ulonglong)(uVar20 & 0x1ff) * 2) - 1U));
        goto joined_r0x000143bec4e2;
      }
    }
    *(undefined1 *)param_1[3] = 1;
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bec81a FUN_143bec81a body=581 status=ok
// SIG undefined FUN_143bec81a(void)

void FUN_143bec81a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((*(longlong *)(param_2 + 0x208) != 0) &&
      (lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x40), lVar2 != 0)) &&
     (0 < *(int *)(lVar2 + 0x38))) {
    uVar8 = *(int *)(lVar2 + 8) * 0x200 + *(int *)(lVar2 + 0xc);
    uVar3 = 0;
    if ((uVar8 != 0) &&
       (uVar3 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x10) - 1U))) {
      uVar6 = 1;
      uVar7 = 1;
      if (1 < (int)uVar8) {
        uVar7 = uVar8;
      }
      do {
        uVar5 = (uint)uVar6;
        uVar3 = uVar7;
        if (uVar7 == uVar5) break;
        uVar9 = uVar6 >> 9;
        uVar6 = (ulonglong)(uVar5 + 1);
        uVar3 = uVar5;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar2 + 0x10))[uVar9] +
                                           (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
    }
joined_r0x000143bec8da:
    uVar7 = uVar3;
    if (uVar7 != uVar8) {
      uVar9 = (ulonglong)(uVar7 >> 7 & 0x7fffff);
      uVar6 = (ulonglong)((uVar7 & 0x7f) << 4);
      puVar1 = (undefined8 *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + uVar9 * 8) + uVar6);
      local_a8 = *puVar1;
      uStack_a0 = puVar1[1];
      if ((float)local_a8 <= 0.04045) {
        fVar10 = (float)local_a8 / 12.92;
      }
      else {
        fVar10 = powf(((float)local_a8 + 0.055) / 1.055,2.4);
      }
      local_a8 = CONCAT44(local_a8._4_4_,fVar10);
      if (local_a8._4_4_ <= 0.04045) {
        fVar10 = local_a8._4_4_ / 12.92;
      }
      else {
        fVar10 = powf((local_a8._4_4_ + 0.055) / 1.055,2.4);
      }
      local_a8 = CONCAT44(fVar10,(float)local_a8);
      if ((float)uStack_a0 <= 0.04045) {
        fVar10 = (float)uStack_a0 / 12.92;
      }
      else {
        fVar10 = powf(((float)uStack_a0 + 0.055) / 1.055,2.4);
      }
      uStack_a0 = CONCAT44(uStack_a0._4_4_,fVar10);
      lVar4 = 0;
      do {
        *(undefined4 *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + uVar9 * 8) + uVar6 + lVar4 * 4)
             = *(undefined4 *)((longlong)&local_a8 + lVar4 * 4);
        lVar4 = lVar4 + 1;
      } while (lVar4 != 4);
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar8) {
        uVar5 = uVar8;
      }
      do {
        uVar3 = uVar5;
        if (uVar5 - 1 == uVar7) break;
        uVar7 = uVar7 + 1;
        uVar3 = uVar7;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar2 + 0x10) +
                                             (ulonglong)(uVar7 >> 9) * 8) +
                                           (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
      goto joined_r0x000143bec8da;
    }
  }
  if ((local_90 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143beca60 FUN_143beca60 body=581 status=ok
// SIG undefined FUN_143beca60(void)

void FUN_143beca60(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((*(longlong *)(param_2 + 0x208) != 0) &&
      (lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x40), lVar2 != 0)) &&
     (0 < *(int *)(lVar2 + 0x38))) {
    uVar8 = *(int *)(lVar2 + 8) * 0x200 + *(int *)(lVar2 + 0xc);
    uVar3 = 0;
    if ((uVar8 != 0) &&
       (uVar3 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x10) - 1U))) {
      uVar6 = 1;
      uVar7 = 1;
      if (1 < (int)uVar8) {
        uVar7 = uVar8;
      }
      do {
        uVar5 = (uint)uVar6;
        uVar3 = uVar7;
        if (uVar7 == uVar5) break;
        uVar9 = uVar6 >> 9;
        uVar6 = (ulonglong)(uVar5 + 1);
        uVar3 = uVar5;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar2 + 0x10))[uVar9] +
                                           (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
    }
joined_r0x000143becb20:
    uVar7 = uVar3;
    if (uVar7 != uVar8) {
      uVar9 = (ulonglong)(uVar7 >> 7 & 0x7fffff);
      uVar6 = (ulonglong)((uVar7 & 0x7f) << 4);
      puVar1 = (undefined8 *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + uVar9 * 8) + uVar6);
      local_a8 = *puVar1;
      uStack_a0 = puVar1[1];
      if ((float)local_a8 <= 0.0031308) {
        fVar10 = (float)local_a8 * 12.92;
      }
      else {
        fVar10 = powf((float)local_a8,0.41666666);
        fVar10 = fVar10 * 1.055 + -0.055;
      }
      local_a8 = CONCAT44(local_a8._4_4_,fVar10);
      if (local_a8._4_4_ <= 0.0031308) {
        fVar10 = local_a8._4_4_ * 12.92;
      }
      else {
        fVar10 = powf(local_a8._4_4_,0.41666666);
        fVar10 = fVar10 * 1.055 + -0.055;
      }
      local_a8 = CONCAT44(fVar10,(float)local_a8);
      if ((float)uStack_a0 <= 0.0031308) {
        fVar10 = (float)uStack_a0 * 12.92;
      }
      else {
        fVar10 = powf((float)uStack_a0,0.41666666);
        fVar10 = fVar10 * 1.055 + -0.055;
      }
      uStack_a0 = CONCAT44(uStack_a0._4_4_,fVar10);
      lVar4 = 0;
      do {
        *(undefined4 *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + uVar9 * 8) + uVar6 + lVar4 * 4)
             = *(undefined4 *)((longlong)&local_a8 + lVar4 * 4);
        lVar4 = lVar4 + 1;
      } while (lVar4 != 4);
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar8) {
        uVar5 = uVar8;
      }
      do {
        uVar3 = uVar5;
        if (uVar5 - 1 == uVar7) break;
        uVar7 = uVar7 + 1;
        uVar3 = uVar7;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar2 + 0x10) +
                                             (ulonglong)(uVar7 >> 9) * 8) +
                                           (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
      goto joined_r0x000143becb20;
    }
  }
  if ((local_90 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143becca6 FUN_143becca6 body=798 status=ok
// SIG undefined FUN_143becca6(void)

void FUN_143becca6(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_178 [40];
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  longlong *local_148 [2];
  code *local_138;
  undefined ****local_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined ***local_118;
  undefined4 local_110;
  undefined **local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined1 local_df;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (((*(longlong *)(param_2 + 0x208) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x40), lVar1 != 0)) &&
     (0 < *(int *)(lVar1 + 0x38))) {
    local_108 = &PTR_FUN_14ae731a0;
    local_100 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_df = 0;
    local_d0 = 0;
    local_70 = 0;
    local_68 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_64 = 0xffffffff00000080;
    local_5c = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x3ff0000000000000;
    local_f8 = 1;
    local_dc = *(undefined4 *)*param_1;
    local_d8 = *(undefined8 *)param_1[1];
    local_e0 = *(undefined1 *)param_1[2];
    local_128 = 0;
    uStack_120 = 0;
    local_c8 = param_2;
    FUN_14475e67c(&local_128,4);
    puVar2 = (undefined1 *)param_1[3];
    lVar6 = (longlong)(int)(uint)uStack_120;
    uVar4 = (uint)uStack_120 + 1;
    if (uStack_120._4_4_ < uVar4) {
      uVar5 = uStack_120 & 0xffffffff;
      uStack_120._0_4_ = uVar4;
      FUN_1401c3474(&local_128,uVar5);
      uVar4 = (uint)uStack_120;
    }
    uStack_120._0_4_ = uVar4;
    uVar4 = (uint)uStack_120;
    *(undefined1 *)(local_128 + lVar6) = *puVar2;
    lVar6 = param_1[3];
    lVar7 = (longlong)(int)(uint)uStack_120;
    uStack_120._0_4_ = (uint)uStack_120 + 1;
    if (uStack_120._4_4_ < (uint)uStack_120) {
      FUN_1401c3474(&local_128,uVar4);
    }
    uVar4 = (uint)uStack_120;
    *(undefined1 *)(local_128 + lVar7) = *(undefined1 *)(lVar6 + 1);
    lVar6 = param_1[3];
    lVar7 = (longlong)(int)(uint)uStack_120;
    uStack_120._0_4_ = (uint)uStack_120 + 1;
    if (uStack_120._4_4_ < (uint)uStack_120) {
      FUN_1401c3474(&local_128,uVar4);
    }
    uVar4 = (uint)uStack_120;
    *(undefined1 *)(local_128 + lVar7) = *(undefined1 *)(lVar6 + 2);
    lVar6 = param_1[3];
    lVar7 = (longlong)(int)(uint)uStack_120;
    uStack_120._0_4_ = (uint)uStack_120 + 1;
    if (uStack_120._4_4_ < (uint)uStack_120) {
      FUN_1401c3474(&local_128,uVar4);
    }
    *(undefined1 *)(local_128 + lVar7) = *(undefined1 *)(lVar6 + 3);
    lVar6 = *(longlong *)param_1[4];
    if (*(int *)(lVar6 + 0x10) != *(int *)(lVar6 + 0x3c)) {
      local_118 = &local_108;
      local_130 = &local_118;
      local_138 = FUN_143becfc6;
      FUN_143bad420((longlong *)param_1[4],param_2,&local_138,0);
    }
    cVar3 = FUN_148330714(&local_108,lVar1,&local_128);
    if (cVar3 == '\0') {
      local_118 = (undefined ***)0x14afa5438;
      local_110 = 0x1f;
      FUN_1446e940c(local_14c,&local_118);
      local_118 = (undefined ***)0x14af8c190;
      local_110 = 0x2f;
      FUN_1446e940c(local_150,&local_118);
      local_118 = (undefined ***)0x14afa53d6;
      local_110 = 0x30;
      FUN_140208c1e(local_148,local_150,local_14c,&local_118);
      FUN_143ba90d7(*(undefined8 *)param_1[5],3,local_148);
      if (local_148[0] != (longlong *)0x0) {
        (**(code **)(*local_148[0] + 0x10))();
      }
    }
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    FUN_14837697e(&local_108);
  }
  if ((local_38 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143becfc6 FUN_143becfc6 body=55 status=ok
// SIG undefined FUN_143becfc6(void)

void FUN_143becfc6(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *param_2;
  lVar3 = *param_1;
  iVar2 = *(int *)(lVar3 + 0x20);
  *(uint *)(lVar3 + 0x20) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x24) < iVar2 + 1U) {
    FUN_1446f48e2((longlong *)(lVar3 + 0x18),iVar2);
  }
  *(undefined4 *)(*(longlong *)(lVar3 + 0x18) + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 143becffe FUN_143becffe body=1962 status=ok
// SIG undefined FUN_143becffe(void)

void FUN_143becffe(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_7e8 [32];
  undefined1 local_7c8;
  undefined1 local_7c0;
  undefined1 local_7b0 [4];
  undefined1 local_7ac [4];
  longlong *local_7a8 [2];
  double local_798;
  double dStack_790;
  double local_788;
  double dStack_780;
  double local_778;
  double dStack_770;
  undefined1 local_768 [16];
  double local_758;
  double dStack_750;
  double local_748;
  double dStack_740;
  double local_738;
  double dStack_730;
  wchar_t *local_728;
  undefined4 local_720;
  longlong local_718;
  undefined1 *local_710;
  undefined1 **local_708;
  double local_700;
  double local_6f8;
  undefined1 local_6f0;
  undefined4 local_6ec;
  double local_6e8;
  code *local_6d8;
  undefined ***local_6c8;
  undefined2 local_6c0;
  undefined **local_6b8;
  undefined1 *local_6b0;
  undefined **local_698;
  undefined1 local_690 [152];
  undefined8 local_5f8;
  undefined8 local_5e8;
  undefined8 local_5b8;
  double local_5b0;
  double local_5a8;
  double local_5a0;
  double local_598;
  double local_590;
  double local_588;
  undefined8 local_580;
  undefined1 local_578;
  undefined1 local_577;
  undefined8 local_574;
  undefined4 local_56c;
  code *local_568;
  undefined8 local_558;
  undefined **local_548;
  undefined1 *local_540;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined4 uStack_4a0;
  undefined4 local_49c;
  undefined4 uStack_498;
  undefined8 uStack_494;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined1 local_468;
  undefined8 local_460;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined8 uStack_44c;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined4 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined1 *local_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined8 local_394;
  undefined4 local_38c;
  longlong local_380;
  undefined4 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined4 local_360;
  undefined1 local_358 [216];
  undefined1 local_280 [544];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_7e8;
  FUN_145c688c4(param_2,&local_758,1);
  local_7c8 = 0;
  FUN_1411b354a(local_280,0,0,0);
  pcVar1 = (char *)*param_1;
  if (pcVar1[0x1c] == '\x01') {
    if (*pcVar1 == '\x01') {
      dVar7 = (double)(-(ulonglong)(0.0 <= dStack_730 - local_748) &
                      (ulonglong)(dStack_730 - local_748));
      dVar8 = (double)(-(ulonglong)(0.0 <= local_738 - dStack_750) &
                      (ulonglong)(local_738 - dStack_750));
      uVar6 = -(ulonglong)(dVar7 <= dVar8);
      dVar8 = (double)(~uVar6 & (ulonglong)dVar7 | uVar6 & (ulonglong)dVar8);
      dVar7 = (double)(-(ulonglong)(0.0 <= dStack_740 - local_758) &
                      (ulonglong)(dStack_740 - local_758));
      uVar6 = -(ulonglong)(dVar8 <= dVar7);
      dVar7 = (double)(uVar6 & (ulonglong)dVar7 | ~uVar6 & (ulonglong)dVar8) /
              (double)*(int *)(pcVar1 + 8);
    }
    else {
      dVar7 = (double)*(float *)(pcVar1 + 4);
    }
    dVar8 = *(double *)(pcVar1 + 0x20);
    uVar6 = -(ulonglong)(dVar8 <= dVar7 + dVar7);
    local_7c0 = 0;
    local_7c8 = 0;
    FUN_146c005f0(local_280,param_2,0,0);
    FUN_146c38c5e(local_280,0);
    FUN_1482d2c96(&local_718,local_280);
    local_6c8 = (undefined ***)
                ((~uVar6 & (ulonglong)dVar8 | (ulonglong)(dVar7 + dVar7) & uVar6) ^
                0x8000000000000000);
    local_6c0 = 0x100;
    FUN_1482d2df4(&local_718);
    local_7c0 = 1;
    local_7c8 = 1;
    FUN_146c005f0(param_2,local_280,1,1);
    FUN_14830cf42(&local_718);
  }
  FUN_146ba21d6(local_358,param_2,1);
  local_3a0 = 0;
  local_398 = 0;
  local_3c0 = 0;
  uStack_3b8 = 0;
  local_394 = 0xffffffff00000080;
  local_38c = 0;
  local_380 = 0;
  local_378 = 0;
  local_370 = 0;
  local_368 = 0x4000000000000000;
  local_360 = 2;
  local_3c8 = local_358;
  FUN_146bef8a8(&local_3c8);
  local_700 = 0.5;
  local_6f8 = 1.0;
  local_6f0 = 1;
  local_6ec = 4;
  local_6e8 = 1.0;
  local_6c8 = (undefined ***)0x0;
  local_6b8 = &PTR_LAB_149f36510;
  local_6b0 = &LAB_148474896;
  local_6d8 = FUN_146bd3274;
  local_718 = param_2;
  local_710 = local_358;
  local_708 = &local_3c8;
  memset(local_690,0,0x91);
  local_698 = &PTR_FUN_149f361f0;
  local_5f8 = 0;
  local_5e8 = 0;
  local_5b8 = 0;
  local_578 = 1;
  local_577 = 1;
  local_574 = 0x1000;
  local_56c = 5;
  local_558 = 0;
  local_548 = &PTR_LAB_149f36510;
  local_540 = &LAB_146bd3270;
  local_568 = FUN_146bd3274;
  local_528 = 0;
  uStack_520 = 0x7fffffff00000000;
  local_518 = 0x7fffffff7fffffff;
  uStack_510 = 0x8000000180000001;
  local_508 = 0x7fffffff80000001;
  uStack_500 = 0x7fffffff7fffffff;
  local_4f8 = 0x8000000180000001;
  local_4f0 = 0x80000001;
  local_4e8 = 0x1000000000000000;
  local_4e0 = 0x2000000000000000;
  local_4d8 = 0x4000000000000000;
  local_4d0 = 0x40;
  uStack_498 = 0;
  uStack_494 = 0;
  uStack_4a8 = 0;
  uStack_4a0 = 0;
  local_49c = 0;
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_488 = 0;
  uStack_480 = 0;
  local_478 = 0;
  uStack_470 = 0;
  local_468 = 0;
  local_460 = 0;
  uStack_458 = 0;
  uStack_454 = 0;
  uStack_450 = 0;
  uStack_44c = 0;
  local_440 = 0;
  uStack_438 = 0;
  local_430 = 0;
  uStack_428 = 0;
  local_420 = 0;
  local_418 = 0x40;
  local_410 = 0;
  uStack_408 = 0;
  local_400 = 0;
  uStack_3f8 = 0;
  local_3f0 = 0x40;
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_5a0 = DAT_14c8464f0 + -8.0;
  local_5a8 = DAT_14c8464e8 + -8.0;
  local_5b0 = DAT_14c8464e0 + -8.0;
  local_588 = DAT_14c8464f0 + 8.0;
  local_590 = DAT_14c8464e8 + 8.0;
  local_598 = DAT_14c8464e0 + 8.0;
  local_580 = 0x3fd0000000000000;
  uVar3 = *(undefined8 *)param_1[1];
  if (*(char *)*param_1 == '\x01') {
    FUN_140056680(&local_798,L"ApplyMeshSolidify");
    iVar2 = FUN_143bed7a9(*(undefined4 *)(*param_1 + 8),&local_798,uVar3);
    lVar4 = *param_1;
    dVar8 = (double)(-(ulonglong)(0.0 <= dStack_730 - local_748) &
                    (ulonglong)(dStack_730 - local_748));
    dVar7 = (double)(-(ulonglong)(0.0 <= local_738 - dStack_750) &
                    (ulonglong)(local_738 - dStack_750));
    uVar6 = -(ulonglong)(dVar8 <= dVar7);
    dVar8 = (double)(~uVar6 & (ulonglong)dVar8 | uVar6 & (ulonglong)dVar7);
    dVar7 = (double)(-(ulonglong)(0.0 <= dStack_740 - local_758) &
                    (ulonglong)(dStack_740 - local_758));
    uVar6 = -(ulonglong)(dVar8 <= dVar7);
    local_6e8 = ((double)*(float *)(lVar4 + 0x14) + (double)*(float *)(lVar4 + 0x14) +
                (double)(uVar6 & (ulonglong)dVar7 | ~uVar6 & (ulonglong)dVar8)) / (double)iVar2;
  }
  else {
    FUN_140056680(local_768,L"ApplyMeshSolidify");
    local_798 = local_758;
    dStack_790 = dStack_750;
    local_788 = local_748;
    dStack_780 = dStack_740;
    local_778 = local_738;
    dStack_770 = dStack_730;
    local_6e8 = (double)FUN_143bed9e3(SUB84((double)*(float *)(*param_1 + 4),0),&local_798,local_768
                                      ,uVar3);
    lVar4 = *param_1;
  }
  local_700 = (double)*(float *)(lVar4 + 0xc);
  local_6ec = *(undefined4 *)(lVar4 + 0x18);
  local_6f0 = *(undefined1 *)(lVar4 + 0x10);
  local_6f8 = (double)*(float *)(lVar4 + 0x14);
  uVar3 = FUN_1484629d6(&local_718);
  FUN_146c00e98(param_2,uVar3);
  if (*(int *)(param_2 + 0x170) == 0) {
    local_728 = L"ApplyMeshSolidify_EmptyMesh";
    local_720 = 0x1b;
    FUN_1446e940c(local_7ac,&local_728);
    local_728 = L"UGeometryScriptLibrary_MeshVoxelFunctions";
    local_720 = 0x29;
    FUN_1446e940c(local_7b0,&local_728);
    local_728 = L"ApplyMeshSolidify: Solidify operation output an empty mesh";
    local_720 = 0x3a;
    FUN_140208c1e(local_7a8,local_7b0,local_7ac,&local_728);
    FUN_143ba90d7(*(undefined8 *)param_1[1],3,local_7a8);
    if (local_7a8[0] != (longlong *)0x0) {
      (**(code **)(*local_7a8[0] + 0x10))();
    }
  }
  else {
    FUN_14582ed12(param_2);
    if (*(int *)(*(longlong *)(param_2 + 0x208) + 0x38) < 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = **(undefined8 **)(*(longlong *)(param_2 + 0x208) + 0x30);
    }
    FUN_146c39810(uVar3,0);
  }
  FUN_146ba0c6a(&local_698);
  if (local_6d8 != (code *)0x0) {
    pppuVar5 = local_6c8;
    if (local_6c8 == (undefined ***)0x0) {
      pppuVar5 = &local_6b8;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  local_378 = 0;
  if (local_380 != 0) {
    FUN_1400020a8();
  }
  FUN_146bddd50(&local_3c0);
  FUN_1457e5b52(local_358);
  FUN_141082778(local_280);
  if ((local_60 ^ (ulonglong)auStack_7e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bed7a9 FUN_143bed7a9 body=569 status=ok
// SIG undefined FUN_143bed7a9(void)

int FUN_143bed7a9(int param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [4];
  undefined1 local_d4 [4];
  longlong *local_d0 [2];
  undefined8 local_c0;
  longlong *local_b8;
  longlong *local_b0 [2];
  longlong *local_a0 [2];
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar3 = 4;
  if (4 < param_1) {
    iVar3 = param_1;
  }
  if ((0x100 < param_1) && (*DAT_14cb4fb40 == '\0')) {
    FUN_140009b9a(local_b0,param_2);
    local_60 = L"ClampedGridResolution";
    local_58 = 0x15;
    FUN_1446e940c(local_d4,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshVoxelFunctions";
    local_58 = 0x29;
    FUN_1446e940c(local_d8,&local_60);
    local_60 = 
    L"{0}: Requested GridResolution clamped to 256 to avoid significant memory/computation. Use CVar geometry.GeometryScript.AllowUnclampedGridDimensions to disable this limit."
    ;
    local_58 = 0xaa;
    FUN_140208c1e(local_d0,local_d8,local_d4,&local_60);
    FUN_14023409e(&local_c0,local_d0,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,local_b0);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_c0;
    local_88 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_a0,&local_90,&local_70);
    FUN_14007f2db(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)local_b8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_b8 + 0x10))(local_b8);
        }
      }
    }
    if (local_b0[0] != (longlong *)0x0) {
      (**(code **)(*local_b0[0] + 0x10))();
    }
    FUN_143ba90d7(param_3,2,local_a0);
    if (local_a0[0] != (longlong *)0x0) {
      (**(code **)(*local_a0[0] + 0x10))();
    }
    if (local_d0[0] != (longlong *)0x0) {
      (**(code **)(*local_d0[0] + 0x10))();
    }
    iVar3 = 0x100;
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bed9e3 FUN_143bed9e3 body=851 status=ok
// SIG undefined FUN_143bed9e3(void)

double FUN_143bed9e3(double param_1,double *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  longlong *local_f0 [2];
  undefined8 local_e0;
  longlong *local_d8;
  longlong *local_d0 [2];
  longlong *local_c0 [2];
  undefined8 local_b0;
  longlong *local_a8;
  wchar_t **local_a0;
  ulonglong *local_98;
  longlong local_90;
  undefined4 local_88;
  wchar_t *local_80;
  undefined4 local_78;
  longlong *local_70 [2];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar7 = 0xd2f1a9fc;
  uVar8 = 0x3f50624d;
  if (0.001 <= param_1) {
    uVar7 = SUB84(param_1,0);
    uVar8 = (undefined4)((ulonglong)param_1 >> 0x20);
  }
  dVar5 = (double)(-(ulonglong)(0.0 <= param_2[5] - param_2[2]) &
                  (ulonglong)(param_2[5] - param_2[2]));
  dVar6 = (double)(-(ulonglong)(0.0 <= param_2[4] - param_2[1]) &
                  (ulonglong)(param_2[4] - param_2[1]));
  uVar3 = -(ulonglong)(dVar5 <= dVar6);
  dVar6 = (double)(~uVar3 & (ulonglong)dVar5 | uVar3 & (ulonglong)dVar6);
  dVar4 = (double)(-(ulonglong)(0.0 <= param_2[3] - *param_2) & (ulonglong)(param_2[3] - *param_2));
  uVar3 = -(ulonglong)(dVar6 <= dVar4);
  dVar5 = (double)CONCAT44(uVar8,uVar7);
  if ((0x100 < (int)((double)(uVar3 & (ulonglong)dVar4 | ~uVar3 & (ulonglong)dVar6) / dVar5)) &&
     (*DAT_14cb4fb40 == '\0')) {
    FUN_140009b9a(local_d0,param_3);
    local_80 = L"ClampedCellSize";
    local_78 = 0xf;
    FUN_1446e940c(local_f4,&local_80);
    local_80 = L"UGeometryScriptLibrary_MeshVoxelFunctions";
    local_78 = 0x29;
    FUN_1446e940c(local_f8,&local_80);
    local_80 = 
    L"{0}: Requested GridCellSize will require significant memory/computation, clamping to 256 cells. Use CVar geometry.GeometryScript.AllowUnclampedGridDimensions to disable this limit."
    ;
    local_78 = 0xb4;
    FUN_140208c1e(local_f0,local_f8,local_f4,&local_80);
    FUN_14023409e(&local_e0,local_f0,1);
    local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
    FUN_14023423e(local_70,local_d0);
    local_98 = local_60;
    local_a0 = &local_80;
    FUN_14010d304(&local_90);
    local_b0 = local_e0;
    local_a8 = local_d8;
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c0,&local_b0,&local_90);
    FUN_14007f2db(local_90,local_88);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    if (local_70[0] != (longlong *)0x0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar2 = (int *)((longlong)local_d8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_d8 + 0x10))(local_d8);
        }
      }
    }
    if (local_d0[0] != (longlong *)0x0) {
      (**(code **)(*local_d0[0] + 0x10))();
    }
    FUN_143ba90d7(param_4,2,local_c0);
    if (local_c0[0] != (longlong *)0x0) {
      (**(code **)(*local_c0[0] + 0x10))();
    }
    if (local_f0[0] != (longlong *)0x0) {
      (**(code **)(*local_f0[0] + 0x10))();
    }
    dVar5 = (double)(-(ulonglong)(0.0 <= param_2[5] - param_2[2]) &
                    (ulonglong)(param_2[5] - param_2[2]));
    dVar6 = (double)(-(ulonglong)(0.0 <= param_2[4] - param_2[1]) &
                    (ulonglong)(param_2[4] - param_2[1]));
    uVar3 = -(ulonglong)(dVar5 <= dVar6);
    dVar5 = (double)(~uVar3 & (ulonglong)dVar5 | uVar3 & (ulonglong)dVar6);
    dVar6 = (double)(-(ulonglong)(0.0 <= param_2[3] - *param_2) & (ulonglong)(param_2[3] - *param_2)
                    );
    uVar3 = -(ulonglong)(dVar5 <= dVar6);
    dVar5 = (double)(float)(double)(uVar3 & (ulonglong)dVar6 | ~uVar3 & (ulonglong)dVar5) *
            0.00390625;
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_60[0] ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return dVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bedd38 FUN_143bedd38 body=2403 status=ok
// SIG undefined FUN_143bedd38(void)

void FUN_143bedd38(longlong *param_1,longlong param_2)

{
  double dVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  undefined1 auStack_588 [40];
  undefined1 local_560 [4];
  undefined1 local_55c [4];
  longlong *local_558 [2];
  double local_548;
  double local_540;
  double local_538;
  double local_530;
  double local_528;
  double local_520;
  undefined1 local_518 [16];
  double local_508;
  double local_500;
  double local_4f8;
  double local_4f0;
  double local_4e8;
  double local_4e0;
  undefined1 local_4d8 [16];
  wchar_t *local_4c8;
  undefined4 local_4c0;
  longlong local_4b8;
  undefined1 *local_4b0;
  uint local_4a8;
  double local_4a0;
  double local_498;
  double local_490;
  code *local_488;
  undefined ***local_478;
  undefined **local_468;
  undefined1 *local_460;
  undefined **local_448;
  undefined1 local_440 [152];
  undefined8 local_3a8;
  undefined8 local_398;
  undefined8 local_368;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  double local_340;
  double local_338;
  undefined8 local_330;
  undefined1 local_328;
  undefined1 local_327;
  undefined8 local_324;
  undefined4 local_31c;
  code *local_318;
  undefined8 local_308;
  undefined **local_2f8;
  undefined1 *local_2f0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined4 local_24c;
  undefined4 uStack_248;
  undefined8 uStack_244;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218;
  undefined8 local_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined8 uStack_1fc;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_168 [136];
  longlong local_e0;
  longlong local_c8;
  uint local_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_588;
  FUN_146ba21d6(local_168,param_2,1);
  local_4a0 = 1.0;
  local_498 = 1.0;
  local_490 = 1.0;
  local_478 = (undefined ***)0x0;
  local_468 = &PTR_LAB_149f36510;
  local_460 = &LAB_148473406;
  local_488 = FUN_146bd3274;
  memset(local_440,0,0x91);
  local_448 = &PTR_FUN_149f361f0;
  local_3a8 = 0;
  local_398 = 0;
  local_368 = 0;
  local_328 = 1;
  local_327 = 1;
  local_324 = 0x1000;
  local_31c = 5;
  local_308 = 0;
  local_2f8 = &PTR_LAB_149f36510;
  local_2f0 = &LAB_146bd3270;
  local_318 = FUN_146bd3274;
  local_2d8 = 0;
  uStack_2d0 = 0x7fffffff00000000;
  local_2c8 = 0x7fffffff7fffffff;
  uStack_2c0 = 0x8000000180000001;
  local_2b8 = 0x7fffffff80000001;
  uStack_2b0 = 0x7fffffff7fffffff;
  local_2a8 = 0x8000000180000001;
  local_2a0 = 0x80000001;
  local_298 = 0x1000000000000000;
  local_290 = 0x2000000000000000;
  local_288 = 0x4000000000000000;
  local_280 = 0x40;
  uStack_248 = 0;
  uStack_244 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  local_24c = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  local_210 = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  uStack_200 = 0;
  uStack_1fc = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0x40;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0x40;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_350 = DAT_14c8464f0 + -8.0;
  local_358 = DAT_14c8464e8 + -8.0;
  local_360 = DAT_14c8464e0 + -8.0;
  local_338 = DAT_14c8464f0 + 8.0;
  local_340 = DAT_14c8464e8 + 8.0;
  local_348 = DAT_14c8464e0 + 8.0;
  local_330 = 0x3fd0000000000000;
  pcVar2 = (char *)*param_1;
  local_4a8 = (uint)(byte)pcVar2[0x1c];
  fVar14 = *(float *)(pcVar2 + 0x20);
  local_4a0 = (double)fVar14;
  if ((fVar14 == 0.0) && (!NAN(fVar14))) {
    local_4a8 = 0;
    local_4a0 = 1e-05;
  }
  uVar7 = *(undefined8 *)param_1[1];
  local_4b8 = param_2;
  local_4b0 = local_168;
  if (*pcVar2 == '\x01') {
    uVar9 = *(undefined4 *)(pcVar2 + 8);
    FUN_140056680(&local_508,L"ApplyMeshMorphology");
    iVar5 = FUN_143bed7a9(uVar9,&local_508,uVar7);
    if ((int)local_9c < 0) {
      dVar12 = -INFINITY;
      dVar13 = -INFINITY;
      dVar11 = -INFINITY;
    }
    else {
      lVar6 = *(longlong *)(local_e0 + (ulonglong)(local_9c >> 9) * 8);
      lVar4 = (ulonglong)((local_9c & 0x1ff) << 3) * 3;
      lVar3 = *(longlong *)(local_c8 + (ulonglong)(local_9c >> 9) * 8);
      dVar11 = *(double *)(lVar6 + 0x10 + lVar4);
      dVar12 = *(double *)(lVar3 + 0x10 + lVar4);
      dVar13 = *(double *)(lVar6 + 8 + lVar4);
      dVar1 = *(double *)(lVar3 + 8 + lVar4);
      dVar12 = (dVar11 + dVar12) - (dVar11 - dVar12);
      dVar13 = (dVar13 + dVar1) - (dVar13 - dVar1);
      dVar11 = (*(double *)(lVar6 + lVar4) + *(double *)(lVar3 + lVar4)) -
               (*(double *)(lVar6 + lVar4) - *(double *)(lVar3 + lVar4));
    }
    dVar12 = (double)(-(ulonglong)(0.0 <= dVar12) & (ulonglong)dVar12);
    dVar13 = (double)(-(ulonglong)(0.0 <= dVar13) & (ulonglong)dVar13);
    uVar10 = -(ulonglong)(dVar12 <= dVar13);
    dVar12 = (double)(~uVar10 & (ulonglong)dVar12 | uVar10 & (ulonglong)dVar13);
    dVar11 = (double)(-(ulonglong)(0.0 <= dVar11) & (ulonglong)dVar11);
    uVar10 = -(ulonglong)(dVar12 <= dVar11);
    local_498 = (local_4a0 + local_4a0 +
                (double)(uVar10 & (ulonglong)dVar11 | ~uVar10 & (ulonglong)dVar12)) / (double)iVar5;
    lVar6 = *param_1;
    if (*(char *)(lVar6 + 0xc) == '\x01') {
LAB_143bee2cc:
      if (*(char *)(lVar6 + 0x10) != '\x01') {
        fVar14 = *(float *)(lVar6 + 0x14);
        goto LAB_143bee39c;
      }
      uVar9 = *(undefined4 *)(lVar6 + 0x18);
    }
    uVar7 = *(undefined8 *)param_1[1];
    FUN_140056680(&local_548,L"ApplyMeshMorphology");
    iVar5 = FUN_143bed7a9(uVar9,&local_548,uVar7);
    if ((int)local_9c < 0) {
      dVar12 = -INFINITY;
      dVar13 = -INFINITY;
      dVar11 = -INFINITY;
    }
    else {
      lVar6 = *(longlong *)(local_e0 + (ulonglong)(local_9c >> 9) * 8);
      lVar4 = (ulonglong)((local_9c & 0x1ff) << 3) * 3;
      lVar3 = *(longlong *)(local_c8 + (ulonglong)(local_9c >> 9) * 8);
      dVar11 = *(double *)(lVar6 + 0x10 + lVar4);
      dVar12 = *(double *)(lVar3 + 0x10 + lVar4);
      dVar13 = *(double *)(lVar6 + 8 + lVar4);
      dVar1 = *(double *)(lVar3 + 8 + lVar4);
      dVar12 = (dVar11 + dVar12) - (dVar11 - dVar12);
      dVar13 = (dVar13 + dVar1) - (dVar13 - dVar1);
      dVar11 = (*(double *)(lVar6 + lVar4) + *(double *)(lVar3 + lVar4)) -
               (*(double *)(lVar6 + lVar4) - *(double *)(lVar3 + lVar4));
    }
    dVar12 = (double)(-(ulonglong)(0.0 <= dVar12) & (ulonglong)dVar12);
    dVar13 = (double)(-(ulonglong)(0.0 <= dVar13) & (ulonglong)dVar13);
    uVar10 = -(ulonglong)(dVar12 <= dVar13);
    dVar12 = (double)(~uVar10 & (ulonglong)dVar12 | uVar10 & (ulonglong)dVar13);
    dVar11 = (double)(-(ulonglong)(0.0 <= dVar11) & (ulonglong)dVar11);
    uVar10 = -(ulonglong)(dVar12 <= dVar11);
    local_490 = (local_4a0 + local_4a0 +
                (double)(uVar10 & (ulonglong)dVar11 | ~uVar10 & (ulonglong)dVar12)) / (double)iVar5;
  }
  else {
    fVar14 = *(float *)(pcVar2 + 4);
    FUN_140056680(local_4d8,L"ApplyMeshMorphology");
    if ((int)local_9c < 0) {
      local_4f0 = -1.79769313486232e+308;
      local_508 = 1.79769313486232e+308;
      local_500 = 1.79769313486232e+308;
      local_4f8 = 1.79769313486232e+308;
      local_4e8 = -1.79769313486232e+308;
      local_4e0 = -1.79769313486232e+308;
    }
    else {
      lVar6 = *(longlong *)(local_e0 + (ulonglong)(local_9c >> 9) * 8);
      lVar4 = (ulonglong)((local_9c & 0x1ff) << 3) * 3;
      lVar3 = *(longlong *)(local_c8 + (ulonglong)(local_9c >> 9) * 8);
      local_4e0 = *(double *)(lVar6 + 0x10 + lVar4);
      dVar11 = *(double *)(lVar3 + 0x10 + lVar4);
      local_4f8 = local_4e0 - dVar11;
      local_4e8 = *(double *)(lVar6 + 8 + lVar4);
      dVar12 = *(double *)(lVar3 + 8 + lVar4);
      local_500 = local_4e8 - dVar12;
      local_508 = *(double *)(lVar6 + lVar4) - *(double *)(lVar3 + lVar4);
      local_4e0 = local_4e0 + dVar11;
      local_4e8 = local_4e8 + dVar12;
      local_4f0 = *(double *)(lVar6 + lVar4) + *(double *)(lVar3 + lVar4);
    }
    local_498 = (double)FUN_143bed9e3((double)fVar14,&local_508,local_4d8,uVar7);
    lVar6 = *param_1;
    if (*(char *)(lVar6 + 0xc) != '\0') goto LAB_143bee2cc;
LAB_143bee39c:
    uVar7 = *(undefined8 *)param_1[1];
    FUN_140056680(local_518,L"ApplyMeshMorphology");
    if ((int)local_9c < 0) {
      local_530 = -1.79769313486232e+308;
      local_548 = 1.79769313486232e+308;
      local_540 = 1.79769313486232e+308;
      local_538 = 1.79769313486232e+308;
      local_528 = -1.79769313486232e+308;
      local_520 = -1.79769313486232e+308;
    }
    else {
      lVar6 = *(longlong *)(local_e0 + (ulonglong)(local_9c >> 9) * 8);
      lVar4 = (ulonglong)((local_9c & 0x1ff) << 3) * 3;
      lVar3 = *(longlong *)(local_c8 + (ulonglong)(local_9c >> 9) * 8);
      local_520 = *(double *)(lVar6 + 0x10 + lVar4);
      dVar11 = *(double *)(lVar3 + 0x10 + lVar4);
      local_538 = local_520 - dVar11;
      local_528 = *(double *)(lVar6 + 8 + lVar4);
      dVar12 = *(double *)(lVar3 + 8 + lVar4);
      local_540 = local_528 - dVar12;
      local_548 = *(double *)(lVar6 + lVar4) - *(double *)(lVar3 + lVar4);
      local_520 = local_520 + dVar11;
      local_528 = local_528 + dVar12;
      local_530 = *(double *)(lVar6 + lVar4) + *(double *)(lVar3 + lVar4);
    }
    local_490 = (double)FUN_143bed9e3((double)fVar14,&local_548,local_518,uVar7);
  }
  uVar7 = FUN_14846457a(&local_4b8);
  FUN_146c00e98(param_2,uVar7);
  if (*(int *)(param_2 + 0x170) == 0) {
    local_4c8 = L"ApplyMeshMorphology_EmptyMesh";
    local_4c0 = 0x1d;
    FUN_1446e940c(local_55c,&local_4c8);
    local_4c8 = L"UGeometryScriptLibrary_MeshVoxelFunctions";
    local_4c0 = 0x29;
    FUN_1446e940c(local_560,&local_4c8);
    local_4c8 = L"ApplyMeshMorphology: Morphology operation output an empty mesh";
    local_4c0 = 0x3e;
    FUN_140208c1e(local_558,local_560,local_55c,&local_4c8);
    FUN_143ba90d7(*(undefined8 *)param_1[1],3,local_558);
    if (local_558[0] != (longlong *)0x0) {
      (**(code **)(*local_558[0] + 0x10))();
    }
  }
  else {
    FUN_14582ed12(param_2);
    if (*(int *)(*(longlong *)(param_2 + 0x208) + 0x38) < 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = **(undefined8 **)(*(longlong *)(param_2 + 0x208) + 0x30);
    }
    FUN_146c39810(uVar7,0);
  }
  FUN_146ba0c6a(&local_448);
  if (local_488 != (code *)0x0) {
    pppuVar8 = local_478;
    if (local_478 == (undefined ***)0x0) {
      pppuVar8 = &local_468;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  FUN_1457e5b52(local_168);
  if ((local_90 ^ (ulonglong)auStack_588) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bee69c FUN_143bee69c body=124 status=ok
// SIG undefined FUN_143bee69c(void)

void FUN_143bee69c(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined8 *)(param_2 + 4);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  plVar3 = *(longlong **)*param_1;
  iVar2 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
    FUN_1403e3958(plVar3,iVar2);
  }
  lVar4 = *plVar3;
  *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar2 * 0x18) = local_28;
  puVar1 = (undefined4 *)(lVar4 + (longlong)iVar2 * 0x18);
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bee738 FUN_143bee738 body=1044 status=ok
// SIG undefined FUN_143bee738(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143bee738(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af7da80,1,0);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14af7ef40;
  local_78 = 3;
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af7efe0,1,&PTR_FUN_14af7ef60);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af80e30,1,&PTR_FUN_14af80de0);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14af821d0;
  local_78 = 2;
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af82240,1,&PTR_FUN_14af821f0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af83a20,1,0);
  ppuStack_70 = &PTR_FUN_14af896c0;
  local_68 = 4;
  local_78 = 8;
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af89880,1,&PTR_FUN_14af89740);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14af8c560;
  local_78 = 1;
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af8c5b0,1,&PTR_FUN_14af8c580);
  local_68 = 2;
  ppuStack_70 = &PTR_FUN_14af8db40;
  local_78 = 3;
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af8dc00,1,&PTR_FUN_14af8db80);
  local_60 = (char *)((ulonglong)local_60 & 0xffffffffffffff00);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cb4fb30,L"geometry.GeometryScript.AllowUnclampedGridDimensions",&local_60,
                L"Flag to disable grid dimension clamping in GeometryScript grid-based operations");
  atexit(FUN_143bdfe67);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14af8f980;
  local_78 = 3;
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af8fa20,1,&PTR_FUN_14af8f9a0);
  local_68 = 2;
  ppuStack_70 = &PTR_FUN_14af943c0;
  local_78 = 2;
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af94450,2,&PTR_FUN_14af94400);
  local_68 = 2;
  ppuStack_70 = &PTR_FUN_14af96c10;
  local_78 = 1;
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af96c80,1,&PTR_FUN_14af96c50);
  local_60 = "SMInstance";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb4fec8 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14cb4fed0);
  if (cVar1 == '\0') {
    _DAT_14cb4fed0 = 0;
    uRam000000014cb4fed8 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_60 = "bone";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af98350,1,&PTR_FUN_14af98300);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af9cc30,3,0);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14af9d6b0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af9d700,1,&PTR_FUN_14af9d6d0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af9ff80,1,0);
  local_68 = 2;
  ppuStack_70 = &PTR_FUN_14afa0a20;
  local_78 = 2;
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14afa0ab0,1,&PTR_FUN_14afa0a60);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143beeb50 FUN_143beeb50 body=69 status=ok
// SIG undefined FUN_143beeb50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143beeb50(void)

{
  _DAT_14cb50360 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143beeb92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb50368,1);
  return;
}



// FUNCTION 143beebea FUN_143beebea body=15700 status=ok
// SIG undefined FUN_143beebea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143beebea(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined2 uVar21;
  undefined4 uVar22;
  ulonglong uVar23;
  void *_Dst;
  uint uVar25;
  longlong *plVar26;
  longlong lVar27;
  undefined8 *puVar28;
  int iVar29;
  longlong lVar30;
  void *pvVar31;
  undefined8 *puVar32;
  undefined6 uVar33;
  undefined1 auStack_1b8 [32];
  wchar_t *local_198;
  wchar_t *local_190;
  undefined4 local_188;
  undefined4 local_180;
  code *local_178;
  code *local_170;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined4 local_148;
  undefined *local_140;
  ulonglong *local_130;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  undefined8 local_110;
  undefined8 *local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  int local_d4;
  int local_d0;
  int local_cc;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 local_98;
  int iStack_94;
  int iStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined6 uStack_82;
  ulonglong local_70;
  int6 iVar24;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_128 = param_1;
  cVar6 = FUN_14038f67a();
  if ((((cVar6 != '\0') && (cVar6 = (**(code **)(*DAT_14cb50b60 + 0xa8))(), cVar6 != '\0')) &&
      (lVar10 = *(longlong *)(local_128 + 0xd0), lVar10 != 0)) &&
     (lVar16 = *(longlong *)(local_128 + 0xd8), lVar16 != 0)) {
    puVar9 = (ulonglong *)(param_2 + 0x70);
    local_120 = (longlong *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    plVar26 = local_120 + 8;
    local_130 = puVar9;
    if (*(longlong **)(param_2 + 0x78) < plVar26) {
      FUN_140023dd8(puVar9,0x48);
      local_120 = (longlong *)(*puVar9 + 7 & 0xfffffffffffffff8);
      plVar26 = local_120 + 8;
    }
    local_f8 = local_128 + 0x30;
    *(longlong **)(param_2 + 0x70) = plVar26;
    puVar9 = (ulonglong *)(**(code **)(*(longlong *)(lVar10 + 0x50) + 0x10))(lVar10 + 0x50);
    uVar11 = *puVar9;
    uVar7 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    uVar8 = uVar7 & 0x7fffffff ^ uVar7 >> 0x10;
    uVar7 = *(uint *)(param_2 + 0x248);
    uVar25 = uVar8 & uVar7;
    lVar10 = *(longlong *)(param_2 + 0x238);
    if (*(longlong *)(param_2 + 0x238) == 0) {
      lVar10 = param_2 + 0x230;
    }
    lVar27 = *(longlong *)(param_2 + 0x220);
    if (*(longlong *)(param_2 + 0x220) == 0) {
      lVar27 = param_2 + 0x218;
    }
    do {
      local_f0 = param_3;
      if (*(uint *)(lVar10 + (longlong)(int)uVar25 * 4) == uVar8) {
        iVar18 = *(int *)(lVar27 + (longlong)(int)uVar25 * 4);
        lVar30 = (longlong)iVar18 * 0x10;
        if (*(ulonglong *)(*(longlong *)(param_2 + 0x1d8) + lVar30) == uVar11) {
          if (((iVar18 != -1) &&
              (plVar26 = (longlong *)(*(longlong *)(param_2 + 0x1d8) + lVar30 + 8),
              plVar26 != (longlong *)0x0)) && (lVar10 = *plVar26, lVar10 != 0)) goto LAB_143beedd0;
          break;
        }
      }
      uVar25 = uVar25 + 1 & uVar7;
    } while (uVar25 != (*(int *)(param_2 + 0x24c) + uVar8 + 1 & uVar7));
    FUN_1447ec05f(&local_b8,uVar11,L"GbxWind.Velocity");
    lVar10 = FUN_14473c272(param_2,&local_b8,0);
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x38))();
    }
LAB_143beedd0:
    plVar26 = local_120;
    *local_120 = lVar10;
    puVar9 = (ulonglong *)(**(code **)(*(longlong *)(lVar16 + 0x50) + 0x10))(lVar16 + 0x50);
    uVar11 = *puVar9;
    uVar7 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    uVar8 = uVar7 & 0x7fffffff ^ uVar7 >> 0x10;
    uVar7 = *(uint *)(param_2 + 0x248);
    uVar25 = uVar8 & uVar7;
    lVar10 = param_2 + 0x230;
    if (*(longlong *)(param_2 + 0x238) != 0) {
      lVar10 = *(longlong *)(param_2 + 0x238);
    }
    lVar16 = param_2 + 0x218;
    if (*(longlong *)(param_2 + 0x220) != 0) {
      lVar16 = *(longlong *)(param_2 + 0x220);
    }
    do {
      if (*(uint *)(lVar10 + (longlong)(int)uVar25 * 4) == uVar8) {
        iVar18 = *(int *)(lVar16 + (longlong)(int)uVar25 * 4);
        lVar27 = (longlong)iVar18 * 0x10;
        if (*(ulonglong *)(*(longlong *)(param_2 + 0x1d8) + lVar27) == uVar11) {
          if (((iVar18 != -1) &&
              (plVar15 = (longlong *)(*(longlong *)(param_2 + 0x1d8) + lVar27 + 8),
              plVar15 != (longlong *)0x0)) && (lVar10 = *plVar15, lVar10 != 0)) goto LAB_143beeecd;
          break;
        }
      }
      uVar25 = uVar25 + 1 & uVar7;
    } while (uVar25 != (*(int *)(param_2 + 0x24c) + uVar8 + 1 & uVar7));
    FUN_1447ec05f(&local_b8,uVar11,L"GbxWind.HistoryVelocity");
    lVar10 = FUN_14473c272(param_2,&local_b8,0);
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x38))();
    }
LAB_143beeecd:
    puVar9 = local_130;
    plVar26[1] = lVar10;
    uStack_8c = *(undefined2 *)(local_128 + 0x68);
    uStack_b0 = DAT_14ca83a30;
    uStack_ac = DAT_14ca83a34;
    uStack_a8 = DAT_14ca83a38;
    uStack_a4 = DAT_14ca83a3c;
    uStack_86 = 2;
    local_b8 = (longlong *)0x20049;
    uStack_85 = 0x15;
    uStack_84 = 0;
    iStack_94 = *(int *)(local_128 + 0x60);
    if (DAT_14ca84e40 <= *(int *)(local_128 + 0x60)) {
      iStack_94 = DAT_14ca84e40;
    }
    if (iStack_94 < 2) {
      iStack_94 = 1;
    }
    iStack_90 = DAT_14ca84e40;
    if (*(int *)(local_128 + 100) < DAT_14ca84e40) {
      iStack_90 = *(int *)(local_128 + 100);
    }
    uStack_8a = 1;
    uStack_88 = 0x101;
    local_98 = 0;
    uStack_83 = 0xff;
    uStack_a0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
    if (iStack_90 < 2) {
      iStack_90 = 1;
    }
    uVar23 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar11 = uVar23 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar11) {
      FUN_140023dd8(local_130,0x128);
      uVar23 = *puVar9 + 7 & 0xfffffffffffffff8;
      uVar11 = uVar23 + 0x120;
    }
    puVar32 = (undefined8 *)(param_2 + 0x178);
    *(ulonglong *)(param_2 + 0x70) = uVar11;
    FUN_1456bbb8c(uVar23,L"GbxWind.Divergence",&local_b8,0);
    iVar18 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar18 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar18 + 1U) {
      FUN_14472c0f6(puVar32,iVar18);
    }
    puVar9 = local_130;
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar18 * 8) = uVar23;
    *(int *)(uVar23 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    plVar26[3] = uVar23;
    uStack_8c = *(undefined2 *)(local_128 + 0x68);
    uStack_b0 = DAT_14ca83a30;
    uStack_ac = DAT_14ca83a34;
    uStack_a8 = DAT_14ca83a38;
    uStack_a4 = DAT_14ca83a3c;
    uStack_86 = 2;
    local_b8 = (longlong *)0x20049;
    uStack_85 = 0x15;
    uStack_84 = 0;
    iStack_94 = *(int *)(local_128 + 0x60);
    if (DAT_14ca84e40 <= *(int *)(local_128 + 0x60)) {
      iStack_94 = DAT_14ca84e40;
    }
    if (iStack_94 < 2) {
      iStack_94 = 1;
    }
    iStack_90 = DAT_14ca84e40;
    if (*(int *)(local_128 + 100) < DAT_14ca84e40) {
      iStack_90 = *(int *)(local_128 + 100);
    }
    uStack_8a = 1;
    uStack_88 = 0x101;
    local_98 = 0;
    uStack_83 = 0xff;
    uStack_a0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
    if (iStack_90 < 2) {
      iStack_90 = 1;
    }
    uVar23 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar11 = uVar23 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar11) {
      FUN_140023dd8(local_130,0x128);
      uVar23 = *puVar9 + 7 & 0xfffffffffffffff8;
      uVar11 = uVar23 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar11;
    FUN_1456bbb8c(uVar23,L"GbxWind.Pressure",&local_b8,0);
    iVar18 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar18 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar18 + 1U) {
      FUN_14472c0f6(puVar32,iVar18);
    }
    puVar9 = local_130;
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar18 * 8) = uVar23;
    *(int *)(uVar23 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    plVar26[4] = uVar23;
    uStack_8c = *(undefined2 *)(local_128 + 0x68);
    uStack_b0 = DAT_14ca83a30;
    uStack_ac = DAT_14ca83a34;
    uStack_a8 = DAT_14ca83a38;
    uStack_a4 = DAT_14ca83a3c;
    uStack_86 = 2;
    local_b8 = (longlong *)0x20049;
    uStack_85 = 0x47;
    uStack_84 = 0;
    iStack_94 = *(int *)(local_128 + 0x60);
    if (DAT_14ca84e40 <= *(int *)(local_128 + 0x60)) {
      iStack_94 = DAT_14ca84e40;
    }
    if (iStack_94 < 2) {
      iStack_94 = 1;
    }
    iStack_90 = DAT_14ca84e40;
    if (*(int *)(local_128 + 100) < DAT_14ca84e40) {
      iStack_90 = *(int *)(local_128 + 100);
    }
    uStack_8a = 1;
    uStack_88 = 0x101;
    local_98 = 0;
    uStack_83 = 0xff;
    uStack_a0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
    if (iStack_90 < 2) {
      iStack_90 = 1;
    }
    uVar23 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar11 = uVar23 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar11) {
      FUN_140023dd8(local_130,0x128);
      uVar23 = *puVar9 + 7 & 0xfffffffffffffff8;
      uVar11 = uVar23 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar11;
    FUN_1456bbb8c(uVar23,L"GbxWind.Obstacles",&local_b8,0);
    iVar18 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar18 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar18 + 1U) {
      FUN_14472c0f6(puVar32,iVar18);
    }
    puVar9 = local_130;
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar18 * 8) = uVar23;
    *(int *)(uVar23 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    plVar26[6] = uVar23;
    uStack_8c = *(undefined2 *)(local_128 + 0x68);
    uStack_b0 = DAT_14ca83a30;
    uStack_ac = DAT_14ca83a34;
    uStack_a8 = DAT_14ca83a38;
    uStack_a4 = DAT_14ca83a3c;
    uStack_86 = 2;
    local_b8 = (longlong *)0x20049;
    uStack_85 = 10;
    uStack_84 = 0;
    iStack_94 = *(int *)(local_128 + 0x60);
    if (DAT_14ca84e40 <= *(int *)(local_128 + 0x60)) {
      iStack_94 = DAT_14ca84e40;
    }
    if (iStack_94 < 2) {
      iStack_94 = 1;
    }
    iStack_90 = DAT_14ca84e40;
    if (*(int *)(local_128 + 100) < DAT_14ca84e40) {
      iStack_90 = *(int *)(local_128 + 100);
    }
    uStack_8a = 1;
    uStack_88 = 0x101;
    local_98 = 0;
    uStack_83 = 0xff;
    uStack_a0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
    if (iStack_90 < 2) {
      iStack_90 = 1;
    }
    uVar23 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar11 = uVar23 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar11) {
      FUN_140023dd8(local_130,0x128);
      uVar23 = *puVar9 + 7 & 0xfffffffffffffff8;
      uVar11 = uVar23 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar11;
    FUN_1456bbb8c(uVar23,L"GbxWind.Velocity_Temp",&local_b8,0);
    iVar18 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar18 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar18 + 1U) {
      FUN_14472c0f6(puVar32,iVar18);
    }
    puVar9 = local_130;
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar18 * 8) = uVar23;
    *(int *)(uVar23 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    plVar26[2] = uVar23;
    uStack_8c = *(undefined2 *)(local_128 + 0x68);
    uStack_b0 = DAT_14ca83a30;
    uStack_ac = DAT_14ca83a34;
    uStack_a8 = DAT_14ca83a38;
    uStack_a4 = DAT_14ca83a3c;
    uStack_86 = 2;
    local_b8 = (longlong *)0x20049;
    uStack_85 = 0x15;
    uStack_84 = 0;
    iStack_94 = *(int *)(local_128 + 0x60);
    if (DAT_14ca84e40 <= *(int *)(local_128 + 0x60)) {
      iStack_94 = DAT_14ca84e40;
    }
    if (iStack_94 < 2) {
      iStack_94 = 1;
    }
    iStack_90 = DAT_14ca84e40;
    if (*(int *)(local_128 + 100) < DAT_14ca84e40) {
      iStack_90 = *(int *)(local_128 + 100);
    }
    uStack_8a = 1;
    uStack_88 = 0x101;
    local_98 = 0;
    uStack_83 = 0xff;
    uStack_a0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
    if (iStack_90 < 2) {
      iStack_90 = 1;
    }
    uVar23 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar11 = uVar23 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar11) {
      FUN_140023dd8(local_130,0x128);
      uVar23 = *puVar9 + 7 & 0xfffffffffffffff8;
      uVar11 = uVar23 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar11;
    FUN_1456bbb8c(uVar23,L"GbxWind.Pressure_Temp",&local_b8,0);
    iVar18 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar18 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar18 + 1U) {
      FUN_14472c0f6(puVar32,iVar18);
    }
    puVar9 = local_130;
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar18 * 8) = uVar23;
    *(int *)(uVar23 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    plVar26[5] = uVar23;
    uVar11 = (ulonglong)(*(int *)(local_128 + 200) + -1 + (uint)(*(int *)(local_128 + 200) == 0)) *
             2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar8 = 1 << ((byte)lVar10 & 0x1f);
    uVar7 = 0x20;
    if (DAT_14ca84e48 < 0x20) {
      uVar7 = DAT_14ca84e48;
    }
    uStack_b0 = 0x10100;
    uVar25 = DAT_14ca84e48;
    if (uVar8 < DAT_14ca84e48) {
      uVar25 = uVar8;
    }
    uStack_a8 = 0;
    uStack_a4 = 0;
    local_b8 = (longlong *)CONCAT44(uVar25 + (uVar25 == 0),uVar7 + (uVar7 == 0));
    uVar23 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar11 = uVar23 + 0x150;
    if (*(ulonglong *)(param_2 + 0x78) < uVar11) {
      FUN_140023dd8(local_130,0x160);
      uVar23 = *puVar9 + 0xf & 0xfffffffffffffff0;
      uVar11 = uVar23 + 0x150;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar11;
    local_108 = puVar32;
    FUN_1456bd266(uVar23,L"GbxWind.SphereSourceBuffer",&local_b8,0);
    iVar18 = *(int *)(param_2 + 400);
    *(uint *)(param_2 + 400) = iVar18 + 1U;
    if (*(uint *)(param_2 + 0x194) < iVar18 + 1U) {
      FUN_144737178(param_2 + 0x188,iVar18);
    }
    puVar9 = local_130;
    *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar18 * 8) = uVar23;
    *(int *)(uVar23 + 0x7c) = *(int *)(param_2 + 400) + -1;
    lVar10 = (ulonglong)uVar8 * 0x20;
    _Dst = (void *)(*(longlong *)(param_2 + 0x70) + 3U & 0xfffffffffffffffc);
    pvVar31 = (void *)((longlong)_Dst + lVar10);
    if (*(void **)(param_2 + 0x78) < pvVar31) {
      FUN_140023dd8(local_130,(uint)lVar10 | 4);
      _Dst = (void *)(*puVar9 + 3 & 0xfffffffffffffffc);
      pvVar31 = (void *)(lVar10 + (longlong)_Dst);
    }
    *(void **)(param_2 + 0x70) = pvVar31;
    memcpy(_Dst,*(void **)(local_128 + 0xc0),(longlong)*(int *)(local_128 + 200) << 5);
    puVar9 = local_130;
    puVar32 = (undefined8 *)((longlong)(int)uVar8 * 0x20);
    pvVar31 = (void *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar12 = (undefined *)((longlong)pvVar31 + (longlong)puVar32);
    if (*(undefined **)(param_2 + 0x78) < puVar12) {
      FUN_140023dd8(local_130,(uint)puVar32 | 0x10);
      pvVar31 = (void *)(*puVar9 + 0xf & 0xfffffffffffffff0);
      puVar12 = (undefined *)((longlong)pvVar31 + (longlong)puVar32);
    }
    *(undefined **)(param_2 + 0x70) = puVar12;
    memcpy(pvVar31,_Dst,(size_t)puVar32);
    iVar18 = *(int *)(param_2 + 0x590);
    uVar7 = iVar18 + 1;
    *(uint *)(param_2 + 0x590) = uVar7;
    if (*(uint *)(param_2 + 0x594) < uVar7) {
      FUN_144775ac8(param_2 + 0x588);
    }
    lVar10 = *(longlong *)(param_2 + 0x588);
    lVar16 = (longlong)iVar18 * 0x120;
    *(undefined2 *)(lVar10 + lVar16) = 0;
    *(ulonglong *)(lVar10 + 8 + lVar16) = uVar23;
    *(void **)(lVar10 + 0x10 + lVar16) = pvVar31;
    *(undefined8 **)(lVar10 + 0x18 + lVar16) = puVar32;
    *(undefined8 *)(lVar10 + 0x20 + lVar16) = 0;
    *(undefined8 *)(lVar10 + 0x30 + lVar16) = 0;
    *(undefined8 *)(lVar10 + 0x60 + lVar16) = 0;
    *(undefined8 *)(lVar10 + 0x70 + lVar16) = 0;
    *(undefined8 *)(lVar10 + 0xa0 + lVar16) = 0;
    *(undefined8 *)(lVar10 + 0xb0 + lVar16) = 0;
    *(undefined8 *)(lVar10 + 0xe0 + lVar16) = 0;
    *(undefined8 *)(lVar10 + 0xf0 + lVar16) = 0;
    *(byte *)(uVar23 + 0x24) = *(byte *)(uVar23 + 0x24) | 0x80;
    plVar26[7] = uVar23;
    FUN_14022b18a(param_2,*plVar26);
    FUN_14022b18a(param_2,plVar26[1]);
    uStack_b0 = DAT_14c9a52a0;
    local_b8 = DAT_14c9a5298;
    uStack_a4 = DAT_14c9a52a0;
    local_98 = DAT_14c9a52a0;
    iStack_94 = 0;
    iStack_90 = 0;
    uStack_8c = 1;
    uStack_8a = 0;
    uStack_88 = 0;
    uStack_86 = 0;
    uStack_85 = 0;
    uStack_84 = 0;
    uStack_83 = 0;
    uStack_82 = 0x10000;
    uStack_ac = (undefined4)DAT_14c967818;
    uStack_a8 = (undefined4)((ulonglong)DAT_14c967818 >> 0x20);
    uStack_a0 = DAT_14c967818;
    FUN_1400e8d41(param_2,*plVar26,plVar26[1]);
    uVar14 = *(undefined8 *)
              (&DAT_14ca8c1f0 +
              (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
    FUN_14152e45c();
    FUN_1448e935e(uVar14,&local_b8,&DAT_14cb50480,0);
    FUN_14152e45c();
    puVar9 = local_130;
    local_118 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      uVar14 = CONCAT44(uStack_ac,uStack_b0);
      puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar32 = puVar28 + 8;
      if (*(undefined8 **)(param_2 + 0x78) < puVar32) {
        FUN_140023dd8(local_130,0x50);
        puVar28 = (undefined8 *)(*puVar9 + 0xf & 0xfffffffffffffff0);
        puVar32 = puVar28 + 8;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar32;
      *puVar28 = &PTR_FUN_14afab308;
      puVar28[2] = 0;
      *(undefined1 *)(puVar28 + 3) = 1;
      puVar28[4] = 0;
      *(undefined1 *)(puVar28 + 5) = 1;
      puVar28[6] = 0;
      puVar28[7] = 0;
      iVar18 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar18 + 1U) {
        FUN_1448cfae8(param_2 + 0x98,iVar18);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar18 * 8) = puVar28;
      lVar10 = FUN_1447e4f80();
      cVar6 = *(char *)(lVar10 + 0x41);
      if (cVar6 == '\x03') {
        cVar6 = '\x02';
      }
      puVar28[4] = *(undefined8 *)(local_f0 + 0x18);
      *(char *)(puVar28 + 5) = cVar6;
      uVar13 = FUN_144a99741(param_2,local_f8);
      FUN_144a8d58a();
      puVar9 = local_130;
      cVar6 = DAT_14cb503c1;
      if (DAT_14cb503c1 == '\x03') {
        cVar6 = '\x02';
      }
      puVar28[2] = uVar13;
      *(char *)(puVar28 + 3) = cVar6;
      lVar10 = *plVar26;
      if ((*(char *)(lVar10 + 0x92) == '\x04') || (*(char *)(lVar10 + 0x92) == '\x01')) {
        uVar21 = *(undefined2 *)(lVar10 + 0x8e);
      }
      else {
        uVar21 = 0;
      }
      uVar2 = *(undefined1 *)(lVar10 + 0x90);
      puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar32 = puVar19 + 8;
      local_110 = uVar14;
      if (*(undefined8 **)(param_2 + 0x78) < puVar32) {
        FUN_140023dd8(local_130,0x48);
        puVar19 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
        puVar32 = puVar19 + 8;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar32;
      puVar19[1] = *(undefined8 *)(lVar10 + 8);
      puVar19[2] = 0;
      *(undefined1 *)(puVar19 + 3) = 1;
      *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
      *puVar19 = &PTR_FUN_14a203858;
      *(undefined2 *)(puVar19 + 5) = 0;
      *(undefined1 *)((longlong)puVar19 + 0x2a) = uVar2;
      *(undefined1 *)((longlong)puVar19 + 0x2b) = 0;
      *(undefined2 *)((longlong)puVar19 + 0x2c) = 0;
      *(undefined2 *)((longlong)puVar19 + 0x2e) = uVar21;
      *(undefined1 *)(puVar19 + 6) = 0;
      *(undefined1 *)((longlong)puVar19 + 0x32) = 0;
      puVar19[7] = lVar10;
      iVar18 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
        FUN_1447568fc(param_2 + 0x198,iVar18);
      }
      puVar9 = local_130;
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar19;
      *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      puVar28[6] = puVar19;
      lVar10 = local_120[2];
      uVar2 = *(undefined1 *)(lVar10 + 0x94);
      puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar19 = puVar20 + 9;
      if (*(undefined8 **)(param_2 + 0x78) < puVar19) {
        FUN_140023dd8(local_130,0x50);
        puVar20 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
        puVar19 = puVar20 + 9;
      }
      puVar32 = puVar28 + 2;
      *(undefined8 **)(param_2 + 0x70) = puVar19;
      puVar20[1] = *(undefined8 *)(lVar10 + 8);
      puVar20[2] = 0;
      *(undefined1 *)(puVar20 + 3) = 0;
      *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar20 + 5) = 0;
      *puVar20 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar20 + 6) = uVar2;
      *(undefined1 *)(puVar20 + 7) = 0;
      *(undefined4 *)((longlong)puVar20 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar20 + 0x35) = 0;
      puVar20[8] = lVar10;
      iVar18 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
        FUN_1447568fc(param_2 + 0x198,iVar18);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar20;
      *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      puVar28[7] = puVar20;
      iVar3 = *(int *)(local_128 + 0x68) + 7;
      iVar29 = *(int *)(local_128 + 0x68) + 0xe;
      if (-1 < iVar3) {
        iVar29 = iVar3;
      }
      iVar3 = *(int *)(local_128 + 100) + 7;
      iVar4 = *(int *)(local_128 + 100) + 0xe;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
      iVar3 = *(int *)(local_128 + 0x60) + 7;
      iVar5 = *(int *)(local_128 + 0x60) + 0xe;
      if (-1 < iVar3) {
        iVar5 = iVar3;
      }
      FUN_14152e57e();
      local_b8 = (longlong *)0x0;
      uStack_b0 = 0;
      uStack_ac = 0;
      FUN_1448f70da(local_118,&DAT_14cb50ba0,puVar32);
      FUN_140069376(param_2);
      puVar9 = local_130;
      iVar24 = (int6)(short)((uint)iVar18 >> 0x10);
      uVar22 = (undefined4)CONCAT62(iVar24,2);
      if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
         ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
        uVar22 = (undefined4)CONCAT62(iVar24,4);
      }
      puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar28 = puVar19 + 0x3d;
      if (*(undefined8 **)(param_2 + 0x78) < puVar28) {
        FUN_140023dd8(local_130,0x1f0);
        puVar19 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar19 + 0x3d;
      }
      *local_130 = (ulonglong)puVar28;
      uStack_b0 = (undefined4)DAT_14cb50be8;
      uStack_ac = (undefined4)((ulonglong)DAT_14cb50be8 >> 0x20);
      if (DAT_14cb50be8 != 0) {
        LOCK();
        *(int *)(DAT_14cb50be8 + 8) = *(int *)(DAT_14cb50be8 + 8) + 1;
        UNLOCK();
      }
      uStack_a8 = 0x4cb50ba0;
      uStack_a4 = 1;
      local_198 = (wchar_t *)CONCAT71(local_198._1_7_,2);
      local_b8 = puVar32;
      FUN_140068f1a(puVar19,&local_c8,&local_b8,uVar22);
      *puVar19 = &PTR_FUN_14afab310;
      puVar19[0x37] = &DAT_14cb50ba0;
      puVar19[0x38] = puVar32;
      puVar19[0x39] = local_118;
      puVar19[0x3a] = local_110;
      *(int *)(puVar19 + 0x3b) = iVar5 >> 3;
      *(int *)((longlong)puVar19 + 0x1dc) = iVar4 >> 3;
      *(int *)(puVar19 + 0x3c) = iVar29 >> 3;
      iVar18 = *(int *)(param_2 + 0x170);
      *(uint *)(param_2 + 0x170) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0x174) < iVar18 + 1U) {
        FUN_14470e57a(param_2 + 0x168,iVar18);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar18 * 8) = puVar19;
      *(int *)((longlong)puVar19 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
      FUN_140069100(param_2,puVar19);
      plVar26 = local_120;
      uStack_b0 = DAT_14c9a52a0;
      local_b8 = DAT_14c9a5298;
      uStack_a4 = DAT_14c9a52a0;
      local_98 = DAT_14c9a52a0;
      iStack_94 = 0;
      iStack_90 = 0;
      uStack_8c = 1;
      uStack_8a = 0;
      uStack_88 = 0;
      uStack_86 = 0;
      uStack_85 = 0;
      uStack_84 = 0;
      uStack_83 = 0;
      uStack_82 = 0x10000;
      uStack_ac = (undefined4)DAT_14c967818;
      uStack_a8 = (undefined4)((ulonglong)DAT_14c967818 >> 0x20);
      uStack_a0 = DAT_14c967818;
      FUN_1400e8d41(param_2,local_120[2],*local_120);
    }
    uVar14 = *(undefined8 *)
              (&DAT_14ca8c1f0 +
              (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
    FUN_141574c2e();
    FUN_1448e935e(uVar14,&local_b8,&DAT_14cb505a8,0);
    FUN_141574c2e();
    puVar9 = local_130;
    local_118 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      uVar14 = CONCAT44(uStack_ac,uStack_b0);
      puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar32 = puVar28 + 0xc;
      if (*(undefined8 **)(param_2 + 0x78) < puVar32) {
        FUN_140023dd8(local_130,0x70);
        puVar28 = (undefined8 *)(*puVar9 + 0xf & 0xfffffffffffffff0);
        puVar32 = puVar28 + 0xc;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar32;
      *puVar28 = &PTR_FUN_14afab328;
      puVar28[2] = 0;
      *(undefined1 *)(puVar28 + 3) = 1;
      puVar28[4] = 0;
      *(undefined1 *)(puVar28 + 5) = 1;
      puVar28[6] = 0;
      puVar28[7] = 0;
      puVar28[8] = 0;
      puVar28[9] = 0;
      iVar18 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar18 + 1U) {
        FUN_1448cfae8(param_2 + 0x98,iVar18);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar18 * 8) = puVar28;
      lVar10 = FUN_1447e4f80();
      puVar9 = local_130;
      cVar6 = '\x02';
      if (*(char *)(lVar10 + 0x41) != '\x03') {
        cVar6 = *(char *)(lVar10 + 0x41);
      }
      puVar28[4] = *(undefined8 *)(local_f0 + 0x18);
      *(char *)(puVar28 + 5) = cVar6;
      uStack_8c = *(undefined2 *)(local_128 + 0x68);
      uStack_b0 = DAT_14ca83a30;
      uStack_ac = DAT_14ca83a34;
      uStack_a8 = DAT_14ca83a38;
      uStack_a4 = DAT_14ca83a3c;
      uStack_86 = 2;
      local_b8 = (longlong *)0x20049;
      uStack_85 = 0x47;
      uStack_84 = 0;
      iStack_94 = *(int *)(local_128 + 0x60);
      if (DAT_14ca84e40 <= *(int *)(local_128 + 0x60)) {
        iStack_94 = DAT_14ca84e40;
      }
      if (iStack_94 < 2) {
        iStack_94 = 1;
      }
      iStack_90 = DAT_14ca84e40;
      if (*(int *)(local_128 + 100) < DAT_14ca84e40) {
        iStack_90 = *(int *)(local_128 + 100);
      }
      uStack_8a = 1;
      uStack_88 = 0x101;
      local_98 = 0;
      uStack_83 = 0xff;
      uStack_a0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iStack_90 < 2) {
        iStack_90 = 1;
      }
      puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar19 = puVar32 + 0x24;
      if (*(undefined8 **)(param_2 + 0x78) < puVar19) {
        FUN_140023dd8(local_130,0x128);
        puVar32 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
        puVar19 = puVar32 + 0x24;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar19;
      FUN_1456bbb8c(puVar32,L"GbxWind.Obstacles_Temp",&local_b8,0);
      iVar18 = *(int *)(param_2 + 0x180);
      *(uint *)(param_2 + 0x180) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0x184) < iVar18 + 1U) {
        FUN_14472c0f6(local_108,iVar18);
      }
      puVar9 = local_130;
      *(undefined8 **)(*(longlong *)(param_2 + 0x178) + (longlong)iVar18 * 8) = puVar32;
      *(int *)((longlong)puVar32 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
      lVar10 = plVar26[7];
      cVar6 = *(char *)(lVar10 + 0x68);
      puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar19 = puVar20 + 9;
      if (*(undefined8 **)(param_2 + 0x78) < puVar19) {
        FUN_140023dd8(local_130,0x50);
        puVar20 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
        puVar19 = puVar20 + 9;
      }
      local_108 = (undefined8 *)(param_2 + 0x198);
      *(undefined8 **)(param_2 + 0x70) = puVar19;
      puVar20[1] = *(undefined8 *)(lVar10 + 8);
      puVar20[2] = 0;
      *(undefined1 *)(puVar20 + 3) = 3;
      *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
      *puVar20 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar20 + 5) = cVar6 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar20 + 0x2c) = 0xffffffff00000000;
      puVar20[7] = 0;
      puVar20[8] = lVar10;
      iVar18 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
        FUN_1447568fc(local_108,iVar18);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar20;
      *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      puVar28[9] = puVar20;
      uVar13 = FUN_144a99741(param_2,local_f8);
      FUN_144a8d58a();
      puVar9 = local_130;
      cVar6 = '\x02';
      if (DAT_14cb503c1 != '\x03') {
        cVar6 = DAT_14cb503c1;
      }
      puVar28[2] = uVar13;
      *(char *)(puVar28 + 3) = cVar6;
      lVar10 = *plVar26;
      if ((*(char *)(lVar10 + 0x92) == '\x04') || (*(char *)(lVar10 + 0x92) == '\x01')) {
        uVar21 = *(undefined2 *)(lVar10 + 0x8e);
      }
      else {
        uVar21 = 0;
      }
      uVar2 = *(undefined1 *)(lVar10 + 0x90);
      puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar19 = puVar20 + 8;
      local_110 = uVar14;
      if (*(undefined8 **)(param_2 + 0x78) < puVar19) {
        FUN_140023dd8(local_130,0x48);
        puVar20 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
        puVar19 = puVar20 + 8;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar19;
      puVar20[1] = *(undefined8 *)(lVar10 + 8);
      puVar20[2] = 0;
      *(undefined1 *)(puVar20 + 3) = 1;
      *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
      *puVar20 = &PTR_FUN_14a203858;
      *(undefined2 *)(puVar20 + 5) = 0;
      *(undefined1 *)((longlong)puVar20 + 0x2a) = uVar2;
      *(undefined1 *)((longlong)puVar20 + 0x2b) = 0;
      *(undefined2 *)((longlong)puVar20 + 0x2c) = 0;
      *(undefined2 *)((longlong)puVar20 + 0x2e) = uVar21;
      *(undefined1 *)(puVar20 + 6) = 0;
      *(undefined1 *)((longlong)puVar20 + 0x32) = 0;
      puVar20[7] = lVar10;
      iVar18 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
        FUN_1447568fc(local_108,iVar18);
      }
      puVar9 = local_130;
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar20;
      *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      puVar28[6] = puVar20;
      lVar10 = local_120[2];
      uVar2 = *(undefined1 *)(lVar10 + 0x94);
      puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar19 = puVar20 + 9;
      if (*(undefined8 **)(param_2 + 0x78) < puVar19) {
        FUN_140023dd8(local_130,0x50);
        puVar20 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
        puVar19 = puVar20 + 9;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar19;
      puVar20[1] = *(undefined8 *)(lVar10 + 8);
      puVar20[2] = 0;
      *(undefined1 *)(puVar20 + 3) = 0;
      *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar20 + 5) = 0;
      *puVar20 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar20 + 6) = uVar2;
      *(undefined1 *)(puVar20 + 7) = 0;
      *(undefined4 *)((longlong)puVar20 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar20 + 0x35) = 0;
      puVar20[8] = lVar10;
      iVar18 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
        FUN_1447568fc(local_108,iVar18);
      }
      puVar9 = local_130;
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar20;
      *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      puVar28[7] = puVar20;
      uVar2 = *(undefined *)((longlong)puVar32 + 0x94);
      puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar19 = puVar20 + 9;
      if (*(undefined8 **)(param_2 + 0x78) < puVar19) {
        FUN_140023dd8(local_130,0x50);
        puVar20 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
        puVar19 = puVar20 + 9;
      }
      puVar17 = puVar28 + 2;
      *(undefined8 **)(param_2 + 0x70) = puVar19;
      puVar20[1] = puVar32[1];
      puVar20[2] = 0;
      *(undefined1 *)(puVar20 + 3) = 0;
      *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar20 + 5) = 0;
      *puVar20 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar20 + 6) = uVar2;
      *(undefined1 *)(puVar20 + 7) = 0;
      *(undefined4 *)((longlong)puVar20 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar20 + 0x35) = 0;
      puVar20[8] = puVar32;
      iVar18 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
        FUN_1447568fc(local_108,iVar18);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar20;
      *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      puVar28[8] = puVar20;
      *(undefined4 *)(puVar28 + 10) = *(undefined4 *)(local_128 + 200);
      iVar18 = *(int *)(local_128 + 0x68) + 7;
      iVar3 = *(int *)(local_128 + 0x68) + 0xe;
      if (-1 < iVar18) {
        iVar3 = iVar18;
      }
      iVar18 = *(int *)(local_128 + 100) + 7;
      iVar29 = *(int *)(local_128 + 100) + 0xe;
      if (-1 < iVar18) {
        iVar29 = iVar18;
      }
      iVar18 = *(int *)(local_128 + 0x60) + 7;
      iVar4 = *(int *)(local_128 + 0x60) + 0xe;
      if (-1 < iVar18) {
        iVar4 = iVar18;
      }
      FUN_141574d50();
      local_b8 = (longlong *)0x0;
      uStack_b0 = 0;
      uStack_ac = 0;
      FUN_1448f70da(local_118,&DAT_14cb50c28,puVar17);
      FUN_140069376(param_2);
      puVar9 = local_130;
      uVar14 = 2;
      if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
         ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
        uVar14 = 4;
      }
      puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar28 = puVar19 + 0x3d;
      if (*(undefined8 **)(param_2 + 0x78) < puVar28) {
        FUN_140023dd8(local_130,0x1f0);
        puVar19 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar19 + 0x3d;
      }
      *local_130 = (ulonglong)puVar28;
      uStack_b0 = (undefined4)DAT_14cb50c70;
      uStack_ac = (undefined4)((ulonglong)DAT_14cb50c70 >> 0x20);
      if (DAT_14cb50c70 != 0) {
        LOCK();
        *(int *)(DAT_14cb50c70 + 8) = *(int *)(DAT_14cb50c70 + 8) + 1;
        UNLOCK();
      }
      uStack_a8 = 0x4cb50c28;
      uStack_a4 = 1;
      local_198 = (wchar_t *)CONCAT71(local_198._1_7_,2);
      local_b8 = puVar17;
      FUN_140068f1a(puVar19,&local_c8,&local_b8,uVar14);
      *puVar19 = &PTR_FUN_14afab330;
      puVar19[0x37] = &DAT_14cb50c28;
      puVar19[0x38] = puVar17;
      puVar19[0x39] = local_118;
      puVar19[0x3a] = local_110;
      *(int *)(puVar19 + 0x3b) = iVar4 >> 3;
      *(int *)((longlong)puVar19 + 0x1dc) = iVar29 >> 3;
      *(int *)(puVar19 + 0x3c) = iVar3 >> 3;
      iVar18 = *(int *)(param_2 + 0x170);
      *(uint *)(param_2 + 0x170) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0x174) < iVar18 + 1U) {
        FUN_14470e57a(param_2 + 0x168,iVar18);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar18 * 8) = puVar19;
      *(int *)((longlong)puVar19 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
      FUN_140069100(param_2,puVar19);
      plVar26 = local_120;
      uStack_b0 = DAT_14c9a52a0;
      local_b8 = DAT_14c9a5298;
      uStack_a4 = DAT_14c9a52a0;
      local_98 = DAT_14c9a52a0;
      iStack_94 = 0;
      iStack_90 = 0;
      uStack_8c = 1;
      uStack_8a = 0;
      uStack_88 = 0;
      uStack_86 = 0;
      uStack_85 = 0;
      uStack_84 = 0;
      uStack_83 = 0;
      uStack_82 = 0x10000;
      uStack_ac = (undefined4)DAT_14c967818;
      uStack_a8 = (undefined4)((ulonglong)DAT_14c967818 >> 0x20);
      uStack_a0 = DAT_14c967818;
      FUN_1400e8d41(param_2,local_120[2],*local_120,&local_b8);
      uStack_b0 = DAT_14c9a52a0;
      local_b8 = DAT_14c9a5298;
      uStack_a4 = DAT_14c9a52a0;
      local_98 = DAT_14c9a52a0;
      iStack_94 = 0;
      iStack_90 = 0;
      uStack_8c = 1;
      uStack_8a = 0;
      uStack_88 = 0;
      uStack_86 = 0;
      uStack_85 = 0;
      uStack_84 = 0;
      uStack_83 = 0;
      uStack_82 = 0x10000;
      uStack_ac = (undefined4)DAT_14c967818;
      uStack_a8 = (undefined4)((ulonglong)DAT_14c967818 >> 0x20);
      uStack_a0 = DAT_14c967818;
      FUN_1400e8d41(param_2,puVar32,plVar26[6],&local_b8);
    }
    uVar14 = *(undefined8 *)
              (&DAT_14ca8c1f0 +
              (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
    FUN_1415936f6();
    FUN_1448e935e(uVar14,&local_b8,&DAT_14cb506d0,0);
    FUN_1415936f6();
    puVar9 = local_130;
    local_118 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      uVar14 = CONCAT44(uStack_ac,uStack_b0);
      puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar32 = puVar28 + 10;
      if (*(undefined8 **)(param_2 + 0x78) < puVar32) {
        FUN_140023dd8(local_130,0x60);
        puVar28 = (undefined8 *)(*puVar9 + 0xf & 0xfffffffffffffff0);
        puVar32 = puVar28 + 10;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar32;
      *puVar28 = &PTR_FUN_14afab348;
      puVar28[2] = 0;
      *(undefined1 *)(puVar28 + 3) = 1;
      puVar28[4] = 0;
      puVar28[5] = 0;
      puVar28[6] = 0;
      puVar28[7] = 0;
      iVar18 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar18 + 1U) {
        FUN_1448cfae8(param_2 + 0x98,iVar18);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar18 * 8) = puVar28;
      uVar13 = FUN_144a99741(param_2,local_f8);
      FUN_144a8d58a();
      puVar9 = local_130;
      cVar6 = '\x02';
      if (DAT_14cb503c1 != '\x03') {
        cVar6 = DAT_14cb503c1;
      }
      puVar28[2] = uVar13;
      *(char *)(puVar28 + 3) = cVar6;
      lVar10 = *local_120;
      if ((*(char *)(lVar10 + 0x92) == '\x04') || (*(char *)(lVar10 + 0x92) == '\x01')) {
        uVar21 = *(undefined2 *)(lVar10 + 0x8e);
      }
      else {
        uVar21 = 0;
      }
      uVar2 = *(undefined1 *)(lVar10 + 0x90);
      puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar32 = puVar19 + 8;
      local_110 = uVar14;
      if (*(undefined8 **)(param_2 + 0x78) < puVar32) {
        FUN_140023dd8(local_130,0x48);
        puVar19 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
        puVar32 = puVar19 + 8;
      }
      lVar16 = param_2 + 0x198;
      *(undefined8 **)(param_2 + 0x70) = puVar32;
      puVar19[1] = *(undefined8 *)(lVar10 + 8);
      puVar19[2] = 0;
      *(undefined1 *)(puVar19 + 3) = 1;
      *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
      *puVar19 = &PTR_FUN_14a203858;
      *(undefined2 *)(puVar19 + 5) = 0;
      *(undefined1 *)((longlong)puVar19 + 0x2a) = uVar2;
      *(undefined1 *)((longlong)puVar19 + 0x2b) = 0;
      *(undefined2 *)((longlong)puVar19 + 0x2c) = 0;
      *(undefined2 *)((longlong)puVar19 + 0x2e) = uVar21;
      *(undefined1 *)(puVar19 + 6) = 0;
      *(undefined1 *)((longlong)puVar19 + 0x32) = 0;
      puVar19[7] = lVar10;
      iVar18 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
        FUN_1447568fc(lVar16,iVar18);
      }
      puVar9 = local_130;
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar19;
      *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      puVar28[4] = puVar19;
      lVar10 = local_120[6];
      if ((*(char *)(lVar10 + 0x92) == '\x04') || (*(char *)(lVar10 + 0x92) == '\x01')) {
        uVar21 = *(undefined2 *)(lVar10 + 0x8e);
      }
      else {
        uVar21 = 0;
      }
      uVar2 = *(undefined1 *)(lVar10 + 0x90);
      puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar32 = puVar19 + 8;
      if (*(undefined8 **)(param_2 + 0x78) < puVar32) {
        FUN_140023dd8(local_130,0x48);
        puVar19 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
        puVar32 = puVar19 + 8;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar32;
      puVar19[1] = *(undefined8 *)(lVar10 + 8);
      puVar19[2] = 0;
      *(undefined1 *)(puVar19 + 3) = 1;
      *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
      *puVar19 = &PTR_FUN_14a203858;
      *(undefined2 *)(puVar19 + 5) = 0;
      *(undefined1 *)((longlong)puVar19 + 0x2a) = uVar2;
      *(undefined1 *)((longlong)puVar19 + 0x2b) = 0;
      *(undefined2 *)((longlong)puVar19 + 0x2c) = 0;
      *(undefined2 *)((longlong)puVar19 + 0x2e) = uVar21;
      *(undefined1 *)(puVar19 + 6) = 0;
      *(undefined1 *)((longlong)puVar19 + 0x32) = 0;
      puVar19[7] = lVar10;
      iVar18 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
        FUN_1447568fc(lVar16,iVar18);
      }
      puVar9 = local_130;
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar19;
      *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      puVar28[5] = puVar19;
      lVar10 = local_120[3];
      uVar2 = *(undefined1 *)(lVar10 + 0x94);
      puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar32 = puVar19 + 9;
      if (*(undefined8 **)(param_2 + 0x78) < puVar32) {
        FUN_140023dd8(local_130,0x50);
        puVar19 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
        puVar32 = puVar19 + 9;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar32;
      puVar19[1] = *(undefined8 *)(lVar10 + 8);
      puVar19[2] = 0;
      *(undefined1 *)(puVar19 + 3) = 0;
      *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar19 + 5) = 0;
      *puVar19 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar19 + 6) = uVar2;
      *(undefined1 *)(puVar19 + 7) = 0;
      *(undefined4 *)((longlong)puVar19 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar19 + 0x35) = 0;
      puVar19[8] = lVar10;
      iVar18 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
        FUN_1447568fc(lVar16,iVar18);
      }
      puVar9 = local_130;
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar19;
      *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      puVar28[6] = puVar19;
      lVar10 = local_120[7];
      cVar6 = *(char *)(lVar10 + 0x68);
      puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar32 = puVar19 + 9;
      if (*(undefined8 **)(param_2 + 0x78) < puVar32) {
        FUN_140023dd8(local_130,0x50);
        puVar19 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
        puVar32 = puVar19 + 9;
      }
      puVar20 = puVar28 + 2;
      *(undefined8 **)(param_2 + 0x70) = puVar32;
      puVar19[1] = *(undefined8 *)(lVar10 + 8);
      puVar19[2] = 0;
      *(undefined1 *)(puVar19 + 3) = 3;
      *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
      *puVar19 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar19 + 5) = cVar6 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar19 + 0x2c) = 0xffffffff00000000;
      puVar19[7] = 0;
      puVar19[8] = lVar10;
      iVar18 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
        FUN_1447568fc(lVar16,iVar18);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar19;
      *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      puVar28[7] = puVar19;
      *(undefined4 *)(puVar28 + 8) = *(undefined4 *)(local_128 + 200);
      iVar3 = *(int *)(local_128 + 0x68) + 7;
      iVar29 = *(int *)(local_128 + 0x68) + 0xe;
      if (-1 < iVar3) {
        iVar29 = iVar3;
      }
      iVar3 = *(int *)(local_128 + 100) + 7;
      iVar4 = *(int *)(local_128 + 100) + 0xe;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
      iVar3 = *(int *)(local_128 + 0x60) + 7;
      iVar5 = *(int *)(local_128 + 0x60) + 0xe;
      if (-1 < iVar3) {
        iVar5 = iVar3;
      }
      FUN_141593818();
      local_b8 = (longlong *)0x0;
      uStack_b0 = 0;
      uStack_ac = 0;
      puVar32 = (undefined8 *)&DAT_14cb50cb0;
      FUN_1448f70da(local_118,&DAT_14cb50cb0,puVar20);
      FUN_140069376(param_2);
      puVar9 = local_130;
      iVar24 = (int6)(short)((uint)iVar18 >> 0x10);
      uVar22 = (undefined4)CONCAT62(iVar24,2);
      if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
         ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
        uVar22 = (undefined4)CONCAT62(iVar24,4);
      }
      puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar28 = puVar19 + 0x3d;
      if (*(undefined8 **)(param_2 + 0x78) < puVar28) {
        FUN_140023dd8(local_130,0x1f0);
        puVar19 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar19 + 0x3d;
      }
      *local_130 = (ulonglong)puVar28;
      uStack_b0 = (undefined4)DAT_14cb50cf8;
      uStack_ac = (undefined4)((ulonglong)DAT_14cb50cf8 >> 0x20);
      if (DAT_14cb50cf8 != 0) {
        LOCK();
        *(int *)(DAT_14cb50cf8 + 8) = *(int *)(DAT_14cb50cf8 + 8) + 1;
        UNLOCK();
      }
      uStack_a8 = 0x4cb50cb0;
      uStack_a4 = 1;
      local_198 = (wchar_t *)CONCAT71(local_198._1_7_,2);
      local_b8 = puVar20;
      FUN_140068f1a(puVar19,&local_c8,&local_b8,uVar22);
      *puVar19 = &PTR_FUN_14afab350;
      puVar19[0x37] = &DAT_14cb50cb0;
      puVar19[0x38] = puVar20;
      puVar19[0x39] = local_118;
      puVar19[0x3a] = local_110;
      *(int *)(puVar19 + 0x3b) = iVar5 >> 3;
      *(int *)((longlong)puVar19 + 0x1dc) = iVar4 >> 3;
      *(int *)(puVar19 + 0x3c) = iVar29 >> 3;
      iVar18 = *(int *)(param_2 + 0x170);
      *(uint *)(param_2 + 0x170) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0x174) < iVar18 + 1U) {
        FUN_14470e57a(param_2 + 0x168,iVar18);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar18 * 8) = puVar19;
      *(int *)((longlong)puVar19 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
      FUN_140069100(param_2,puVar19);
      plVar26 = local_120;
    }
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    local_b8 = (longlong *)0x0;
    uStack_b0 = 0;
    uStack_ac = 0;
    local_98 = 0;
    iStack_94 = 0;
    iStack_90 = 1;
    uStack_8c = 0;
    uStack_8a = 0;
    uStack_88 = 1;
    uStack_86 = 0;
    uStack_85 = 0;
    FUN_1401a4871(param_2,plVar26[4]);
    if (0 < *(int *)(DAT_14cb50b20 + 4)) {
      local_e8 = param_2 + 0x98;
      local_100 = param_2 + 0x198;
      local_e0 = param_2 + 0x168;
      iVar18 = 0;
      do {
        if (*(char *)(DAT_14cb50b38 + 1) == '\x01') {
          uVar14 = *(undefined8 *)
                    (&DAT_14ca8c1f0 +
                    (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cb509c8) && (FUN_144b3d300(&DAT_14cb509c8), DAT_14cb509c8 == -1)) {
            FUN_141579b64();
            FUN_145e67f12();
            local_140 = &DAT_14cb50dc0;
            local_150 = &LAB_14712ac08;
            local_158 = &LAB_14712ac0c;
            local_160 = &LAB_1485ec7f0;
            local_168 = &LAB_1485ec7f4;
            local_170 = FUN_1485ec7f8;
            local_178 = FUN_1485ec858;
            local_190 = L"JacobiSORIteration";
            local_198 = L"/GbxWindShaders/JacobiSolve.usf";
            local_148 = 0xe0;
            local_180 = 1;
            local_188 = 5;
            FUN_140db5666(&DAT_14cb50920,0,&DAT_14cb508b8);
            _DAT_14cb50920 = FGlobalShaderType::vftable;
            atexit((_func_5014 *)&LAB_143beebd1);
            _Init_thread_footer(&DAT_14cb509c8);
          }
          FUN_1448e935e(uVar14,&local_b8,&DAT_14cb50920,0);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cb509c8) && (FUN_144b3d300(&DAT_14cb509c8), DAT_14cb509c8 == -1)) {
            FUN_141579b64();
            FUN_145e67f12();
            local_140 = &DAT_14cb50dc0;
            local_150 = &LAB_14712ac08;
            local_158 = &LAB_14712ac0c;
            local_160 = &LAB_1485ec7f0;
            local_168 = &LAB_1485ec7f4;
            local_170 = FUN_1485ec7f8;
            local_178 = FUN_1485ec858;
            local_190 = L"JacobiSORIteration";
            local_198 = L"/GbxWindShaders/JacobiSolve.usf";
            local_148 = 0xe0;
            local_180 = 1;
            local_188 = 5;
            FUN_140db5666(&DAT_14cb50920,0,&DAT_14cb508b8);
            _DAT_14cb50920 = FGlobalShaderType::vftable;
            atexit((_func_5014 *)&LAB_143beebd1);
            _Init_thread_footer(&DAT_14cb509c8);
          }
          puVar9 = local_130;
          local_118 = local_b8;
          if (local_b8 != (longlong *)0x0) {
            local_108 = (undefined8 *)CONCAT44(uStack_ac,uStack_b0);
            puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar32 = puVar28 + 10;
            if (*(undefined8 **)(param_2 + 0x78) < puVar32) {
              FUN_140023dd8(local_130,0x60);
              puVar28 = (undefined8 *)(*puVar9 + 0xf & 0xfffffffffffffff0);
              puVar32 = puVar28 + 10;
            }
            *(undefined8 **)(param_2 + 0x70) = puVar32;
            *puVar28 = &PTR_FUN_14afab388;
            puVar28[2] = 0;
            *(undefined1 *)(puVar28 + 3) = 1;
            puVar28[4] = 0;
            puVar28[5] = 0;
            puVar28[6] = 0;
            puVar28[7] = 0;
            iVar3 = *(int *)(param_2 + 0xa0);
            *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
            if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
              FUN_1448cfae8(local_e8,iVar3);
            }
            *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar28;
            uVar14 = FUN_144a99741(param_2,local_f8);
            FUN_144a8d58a();
            puVar9 = local_130;
            cVar6 = DAT_14cb503c1;
            if (DAT_14cb503c1 == '\x03') {
              cVar6 = '\x02';
            }
            puVar28[2] = uVar14;
            *(char *)(puVar28 + 3) = cVar6;
            lVar10 = plVar26[4];
            uVar2 = *(undefined1 *)(lVar10 + 0x90);
            local_110 = CONCAT44(local_110._4_4_,iVar18);
            if ((*(char *)(lVar10 + 0x92) == '\x04') || (*(char *)(lVar10 + 0x92) == '\x01')) {
              uVar21 = *(undefined2 *)(lVar10 + 0x8e);
            }
            else {
              uVar21 = 0;
            }
            puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar32 = puVar19 + 8;
            if (*(undefined8 **)(param_2 + 0x78) < puVar32) {
              FUN_140023dd8(local_130,0x48);
              puVar19 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
              puVar32 = puVar19 + 8;
            }
            *(undefined8 **)(param_2 + 0x70) = puVar32;
            puVar19[1] = *(undefined8 *)(lVar10 + 8);
            puVar19[2] = 0;
            *(undefined1 *)(puVar19 + 3) = 1;
            *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
            *puVar19 = &PTR_FUN_14a203858;
            *(undefined2 *)(puVar19 + 5) = 0;
            *(undefined1 *)((longlong)puVar19 + 0x2a) = uVar2;
            *(undefined1 *)((longlong)puVar19 + 0x2b) = 0;
            *(undefined2 *)((longlong)puVar19 + 0x2c) = 0;
            *(undefined2 *)((longlong)puVar19 + 0x2e) = uVar21;
            *(undefined1 *)(puVar19 + 6) = 0;
            *(undefined1 *)((longlong)puVar19 + 0x32) = 0;
            puVar19[7] = lVar10;
            iVar18 = *(int *)(param_2 + 0x1a0);
            *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
            if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
              FUN_1447568fc(local_100,iVar18);
            }
            puVar9 = local_130;
            *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar19;
            *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
            puVar28[4] = puVar19;
            lVar10 = plVar26[3];
            uVar2 = *(undefined1 *)(lVar10 + 0x90);
            if ((*(char *)(lVar10 + 0x92) == '\x04') || (*(char *)(lVar10 + 0x92) == '\x01')) {
              uVar21 = *(undefined2 *)(lVar10 + 0x8e);
            }
            else {
              uVar21 = 0;
            }
            puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar32 = puVar19 + 8;
            if (*(undefined8 **)(param_2 + 0x78) < puVar32) {
              FUN_140023dd8(local_130,0x48);
              puVar19 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
              puVar32 = puVar19 + 8;
            }
            *(undefined8 **)(param_2 + 0x70) = puVar32;
            puVar19[1] = *(undefined8 *)(lVar10 + 8);
            puVar19[2] = 0;
            *(undefined1 *)(puVar19 + 3) = 1;
            *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
            *puVar19 = &PTR_FUN_14a203858;
            *(undefined2 *)(puVar19 + 5) = 0;
            *(undefined1 *)((longlong)puVar19 + 0x2a) = uVar2;
            *(undefined1 *)((longlong)puVar19 + 0x2b) = 0;
            *(undefined2 *)((longlong)puVar19 + 0x2c) = 0;
            *(undefined2 *)((longlong)puVar19 + 0x2e) = uVar21;
            *(undefined1 *)(puVar19 + 6) = 0;
            *(undefined1 *)((longlong)puVar19 + 0x32) = 0;
            puVar19[7] = lVar10;
            iVar18 = *(int *)(param_2 + 0x1a0);
            *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
            if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
              FUN_1447568fc(local_100,iVar18);
            }
            puVar9 = local_130;
            *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar19;
            *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
            puVar28[5] = puVar19;
            lVar10 = plVar26[6];
            uVar2 = *(undefined1 *)(lVar10 + 0x90);
            if ((*(char *)(lVar10 + 0x92) == '\x04') || (*(char *)(lVar10 + 0x92) == '\x01')) {
              uVar21 = *(undefined2 *)(lVar10 + 0x8e);
            }
            else {
              uVar21 = 0;
            }
            puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar32 = puVar19 + 8;
            if (*(undefined8 **)(param_2 + 0x78) < puVar32) {
              FUN_140023dd8(local_130,0x48);
              puVar19 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
              puVar32 = puVar19 + 8;
            }
            *(undefined8 **)(param_2 + 0x70) = puVar32;
            puVar19[1] = *(undefined8 *)(lVar10 + 8);
            puVar19[2] = 0;
            *(undefined1 *)(puVar19 + 3) = 1;
            *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
            *puVar19 = &PTR_FUN_14a203858;
            *(undefined2 *)(puVar19 + 5) = 0;
            *(undefined1 *)((longlong)puVar19 + 0x2a) = uVar2;
            *(undefined1 *)((longlong)puVar19 + 0x2b) = 0;
            *(undefined2 *)((longlong)puVar19 + 0x2c) = 0;
            *(undefined2 *)((longlong)puVar19 + 0x2e) = uVar21;
            *(undefined1 *)(puVar19 + 6) = 0;
            *(undefined1 *)((longlong)puVar19 + 0x32) = 0;
            puVar19[7] = lVar10;
            iVar18 = *(int *)(param_2 + 0x1a0);
            *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
            if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
              FUN_1447568fc(local_100,iVar18);
            }
            puVar9 = local_130;
            *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar19;
            *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
            puVar28[6] = puVar19;
            *(int *)(puVar28 + 8) = (int)local_110;
            *(undefined4 *)((longlong)puVar28 + 0x44) = *(undefined4 *)(DAT_14cb50b50 + 4);
            lVar10 = plVar26[5];
            uVar2 = *(undefined1 *)(lVar10 + 0x94);
            puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar32 = puVar19 + 9;
            if (*(undefined8 **)(param_2 + 0x78) < puVar32) {
              FUN_140023dd8(local_130,0x50);
              puVar19 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
              puVar32 = puVar19 + 9;
            }
            *(undefined8 **)(param_2 + 0x70) = puVar32;
            puVar19[1] = *(undefined8 *)(lVar10 + 8);
            puVar19[2] = 0;
            *(undefined1 *)(puVar19 + 3) = 0;
            *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar19 + 5) = 0;
            *puVar19 = &PTR_FUN_14a1fb948;
            *(undefined1 *)(puVar19 + 6) = uVar2;
            *(undefined1 *)(puVar19 + 7) = 0;
            *(undefined4 *)((longlong)puVar19 + 0x31) = 0;
            *(undefined2 *)((longlong)puVar19 + 0x35) = 0;
            puVar19[8] = lVar10;
            iVar18 = *(int *)(param_2 + 0x1a0);
            *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
            if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
              FUN_1447568fc(local_100,iVar18);
            }
            *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar19;
            *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
            puVar28[7] = puVar19;
            puVar28 = puVar28 + 2;
            uStack_b0 = DAT_14c9a52a0;
            local_b8 = DAT_14c9a5298;
            uStack_a4 = DAT_14c9a52a0;
            local_98 = DAT_14c9a52a0;
            iStack_94 = 0;
            iStack_90 = 0;
            uStack_8c = 1;
            uStack_8a = 0;
            uStack_88 = 0;
            uStack_86 = 0;
            uStack_85 = 0;
            uStack_84 = 0;
            uStack_83 = 0;
            uStack_82 = 0x10000;
            uStack_ac = (undefined4)DAT_14c967818;
            uStack_a8 = (undefined4)((ulonglong)DAT_14c967818 >> 0x20);
            uStack_a0 = DAT_14c967818;
            FUN_1400e8d41(param_2,plVar26[4],plVar26[5],&local_b8);
            iVar29 = *(int *)(local_128 + 0x60) / 2;
            iVar18 = *(int *)(local_128 + 0x68) + 7;
            iVar3 = *(int *)(local_128 + 0x68) + 0xe;
            if (-1 < iVar18) {
              iVar3 = iVar18;
            }
            iVar18 = *(int *)(local_128 + 100) + 7;
            iVar4 = *(int *)(local_128 + 100) + 0xe;
            if (-1 < iVar18) {
              iVar4 = iVar18;
            }
            iVar18 = iVar29 + 7;
            iVar29 = iVar29 + 0xe;
            if (-1 < iVar18) {
              iVar29 = iVar18;
            }
            FUN_141579b64();
            local_b8 = (longlong *)0x0;
            uStack_b0 = 0;
            uStack_ac = 0;
            FUN_1448f70da(local_118,&DAT_14cb50dc0,puVar28,&local_b8);
            FUN_140069376(param_2);
            puVar9 = local_130;
            uVar14 = 2;
            if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
               ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
              uVar14 = 4;
            }
            puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar32 = puVar19 + 0x3d;
            if (*(undefined8 **)(param_2 + 0x78) < puVar32) {
              FUN_140023dd8(local_130,0x1f0);
              puVar19 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
              puVar32 = puVar19 + 0x3d;
            }
            *local_130 = (ulonglong)puVar32;
            uStack_b0 = (undefined4)DAT_14cb50e08;
            uStack_ac = (undefined4)((ulonglong)DAT_14cb50e08 >> 0x20);
            if (DAT_14cb50e08 != 0) {
              LOCK();
              *(int *)(DAT_14cb50e08 + 8) = *(int *)(DAT_14cb50e08 + 8) + 1;
              UNLOCK();
            }
            puVar32 = (undefined8 *)(ulonglong)(uint)(iVar29 >> 3);
            uStack_a8 = 0x4cb50dc0;
            uStack_a4 = 1;
            local_198 = (wchar_t *)CONCAT71(local_198._1_7_,2);
            local_b8 = puVar28;
            FUN_140068f1a(puVar19,&local_c8,&local_b8,uVar14);
            *puVar19 = &PTR_FUN_14afab390;
            puVar19[0x37] = &DAT_14cb50dc0;
            puVar19[0x38] = puVar28;
            puVar19[0x39] = local_118;
            puVar19[0x3a] = local_108;
            *(int *)(puVar19 + 0x3b) = iVar29 >> 3;
            *(int *)((longlong)puVar19 + 0x1dc) = iVar4 >> 3;
            *(int *)(puVar19 + 0x3c) = iVar3 >> 3;
            iVar18 = *(int *)(param_2 + 0x170);
            *(uint *)(param_2 + 0x170) = iVar18 + 1U;
            if (*(uint *)(param_2 + 0x174) < iVar18 + 1U) {
              FUN_14470e57a(local_e0,iVar18);
            }
            *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar18 * 8) = puVar19;
            *(int *)((longlong)puVar19 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
            FUN_140069100(param_2,puVar19);
            plVar26 = local_120;
LAB_143bf117d:
            uStack_b0 = DAT_14c9a52a0;
            local_b8 = DAT_14c9a5298;
            uStack_a4 = DAT_14c9a52a0;
            local_98 = DAT_14c9a52a0;
            iStack_94 = 0;
            iStack_90 = 0;
            uStack_8c = 1;
            uStack_8a = 0;
            uStack_88 = 0;
            uStack_86 = 0;
            uStack_85 = 0;
            uStack_84 = 0;
            uStack_83 = 0;
            uStack_82 = 0x10000;
            uStack_ac = (undefined4)DAT_14c967818;
            uStack_a8 = (undefined4)((ulonglong)DAT_14c967818 >> 0x20);
            uStack_a0 = DAT_14c967818;
            FUN_1400e8d41(param_2,plVar26[5],plVar26[4]);
            iVar18 = (int)local_110;
          }
        }
        else {
          uVar14 = *(undefined8 *)
                    (&DAT_14ca8c1f0 +
                    (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
          FUN_145e9c71c();
          FUN_1448e935e(uVar14,&local_b8,&DAT_14cb507f8,0);
          FUN_145e9c71c();
          puVar9 = local_130;
          local_c8 = local_b8;
          local_c0 = CONCAT44(uStack_ac,uStack_b0);
          if (local_b8 != (longlong *)0x0) {
            puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar28 = puVar32 + 8;
            if (*(undefined8 **)(param_2 + 0x78) < puVar28) {
              FUN_140023dd8(local_130,0x50);
              puVar32 = (undefined8 *)(*puVar9 + 0xf & 0xfffffffffffffff0);
              puVar28 = puVar32 + 8;
            }
            *(undefined8 **)(param_2 + 0x70) = puVar28;
            *puVar32 = &PTR_FUN_14afab368;
            puVar32[2] = 0;
            *(undefined1 *)(puVar32 + 3) = 1;
            puVar32[4] = 0;
            puVar32[5] = 0;
            puVar32[6] = 0;
            puVar32[7] = 0;
            iVar3 = *(int *)(param_2 + 0xa0);
            *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
            if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
              FUN_1448cfae8(local_e8,iVar3);
            }
            *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar32;
            uVar14 = FUN_144a99741(param_2,local_f8);
            FUN_144a8d58a();
            puVar9 = local_130;
            cVar6 = DAT_14cb503c1;
            if (DAT_14cb503c1 == '\x03') {
              cVar6 = '\x02';
            }
            puVar32[2] = uVar14;
            *(char *)(puVar32 + 3) = cVar6;
            lVar10 = plVar26[4];
            uVar2 = *(undefined1 *)(lVar10 + 0x90);
            local_110 = CONCAT44(local_110._4_4_,iVar18);
            if ((*(char *)(lVar10 + 0x92) == '\x04') || (*(char *)(lVar10 + 0x92) == '\x01')) {
              uVar21 = *(undefined2 *)(lVar10 + 0x8e);
            }
            else {
              uVar21 = 0;
            }
            puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar28 = puVar19 + 8;
            if (*(undefined8 **)(param_2 + 0x78) < puVar28) {
              FUN_140023dd8(local_130,0x48);
              puVar19 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
              puVar28 = puVar19 + 8;
            }
            *(undefined8 **)(param_2 + 0x70) = puVar28;
            puVar19[1] = *(undefined8 *)(lVar10 + 8);
            puVar19[2] = 0;
            *(undefined1 *)(puVar19 + 3) = 1;
            *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
            *puVar19 = &PTR_FUN_14a203858;
            *(undefined2 *)(puVar19 + 5) = 0;
            *(undefined1 *)((longlong)puVar19 + 0x2a) = uVar2;
            *(undefined1 *)((longlong)puVar19 + 0x2b) = 0;
            *(undefined2 *)((longlong)puVar19 + 0x2c) = 0;
            *(undefined2 *)((longlong)puVar19 + 0x2e) = uVar21;
            *(undefined1 *)(puVar19 + 6) = 0;
            *(undefined1 *)((longlong)puVar19 + 0x32) = 0;
            puVar19[7] = lVar10;
            iVar18 = *(int *)(param_2 + 0x1a0);
            *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
            if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
              FUN_1447568fc(local_100,iVar18);
            }
            puVar9 = local_130;
            *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar19;
            *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
            puVar32[4] = puVar19;
            lVar10 = plVar26[3];
            uVar2 = *(undefined1 *)(lVar10 + 0x90);
            if ((*(char *)(lVar10 + 0x92) == '\x04') || (*(char *)(lVar10 + 0x92) == '\x01')) {
              uVar21 = *(undefined2 *)(lVar10 + 0x8e);
            }
            else {
              uVar21 = 0;
            }
            puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar28 = puVar19 + 8;
            if (*(undefined8 **)(param_2 + 0x78) < puVar28) {
              FUN_140023dd8(local_130,0x48);
              puVar19 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
              puVar28 = puVar19 + 8;
            }
            *(undefined8 **)(param_2 + 0x70) = puVar28;
            puVar19[1] = *(undefined8 *)(lVar10 + 8);
            puVar19[2] = 0;
            *(undefined1 *)(puVar19 + 3) = 1;
            *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
            *puVar19 = &PTR_FUN_14a203858;
            *(undefined2 *)(puVar19 + 5) = 0;
            *(undefined1 *)((longlong)puVar19 + 0x2a) = uVar2;
            *(undefined1 *)((longlong)puVar19 + 0x2b) = 0;
            *(undefined2 *)((longlong)puVar19 + 0x2c) = 0;
            *(undefined2 *)((longlong)puVar19 + 0x2e) = uVar21;
            *(undefined1 *)(puVar19 + 6) = 0;
            *(undefined1 *)((longlong)puVar19 + 0x32) = 0;
            puVar19[7] = lVar10;
            iVar18 = *(int *)(param_2 + 0x1a0);
            *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
            if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
              FUN_1447568fc(local_100,iVar18);
            }
            puVar9 = local_130;
            *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar19;
            *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
            puVar32[5] = puVar19;
            lVar10 = plVar26[6];
            uVar2 = *(undefined1 *)(lVar10 + 0x90);
            if ((*(char *)(lVar10 + 0x92) == '\x04') || (*(char *)(lVar10 + 0x92) == '\x01')) {
              uVar21 = *(undefined2 *)(lVar10 + 0x8e);
            }
            else {
              uVar21 = 0;
            }
            puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar28 = puVar19 + 8;
            if (*(undefined8 **)(param_2 + 0x78) < puVar28) {
              FUN_140023dd8(local_130,0x48);
              puVar19 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
              puVar28 = puVar19 + 8;
            }
            *(undefined8 **)(param_2 + 0x70) = puVar28;
            puVar19[1] = *(undefined8 *)(lVar10 + 8);
            puVar19[2] = 0;
            *(undefined1 *)(puVar19 + 3) = 1;
            *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
            *puVar19 = &PTR_FUN_14a203858;
            *(undefined2 *)(puVar19 + 5) = 0;
            *(undefined1 *)((longlong)puVar19 + 0x2a) = uVar2;
            *(undefined1 *)((longlong)puVar19 + 0x2b) = 0;
            *(undefined2 *)((longlong)puVar19 + 0x2c) = 0;
            *(undefined2 *)((longlong)puVar19 + 0x2e) = uVar21;
            *(undefined1 *)(puVar19 + 6) = 0;
            *(undefined1 *)((longlong)puVar19 + 0x32) = 0;
            puVar19[7] = lVar10;
            iVar18 = *(int *)(param_2 + 0x1a0);
            *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
            if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
              FUN_1447568fc(local_100,iVar18);
            }
            puVar9 = local_130;
            *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar19;
            *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
            puVar32[6] = puVar19;
            lVar10 = plVar26[5];
            uVar2 = *(undefined1 *)(lVar10 + 0x94);
            puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar28 = puVar19 + 9;
            if (*(undefined8 **)(param_2 + 0x78) < puVar28) {
              FUN_140023dd8(local_130,0x50);
              puVar19 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
              puVar28 = puVar19 + 9;
            }
            *(undefined8 **)(param_2 + 0x70) = puVar28;
            puVar19[1] = *(undefined8 *)(lVar10 + 8);
            puVar19[2] = 0;
            *(undefined1 *)(puVar19 + 3) = 0;
            *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar19 + 5) = 0;
            *puVar19 = &PTR_FUN_14a1fb948;
            *(undefined1 *)(puVar19 + 6) = uVar2;
            *(undefined1 *)(puVar19 + 7) = 0;
            *(undefined4 *)((longlong)puVar19 + 0x31) = 0;
            *(undefined2 *)((longlong)puVar19 + 0x35) = 0;
            puVar19[8] = lVar10;
            iVar18 = *(int *)(param_2 + 0x1a0);
            *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
            if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
              FUN_1447568fc(local_100,iVar18);
            }
            *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar19;
            *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
            puVar32[7] = puVar19;
            puVar32 = puVar32 + 2;
            iVar18 = *(int *)(local_128 + 0x68) + 7;
            local_cc = *(int *)(local_128 + 0x68) + 0xe;
            if (-1 < iVar18) {
              local_cc = iVar18;
            }
            local_cc = local_cc >> 3;
            iVar18 = *(int *)(local_128 + 100) + 7;
            local_d0 = *(int *)(local_128 + 100) + 0xe;
            if (-1 < iVar18) {
              local_d0 = iVar18;
            }
            local_d0 = local_d0 >> 3;
            iVar18 = *(int *)(local_128 + 0x60) + 7;
            local_d4 = *(int *)(local_128 + 0x60) + 0xe;
            if (-1 < iVar18) {
              local_d4 = iVar18;
            }
            local_d4 = local_d4 >> 3;
            local_198 = (wchar_t *)&local_d4;
            FUN_1485ec9a7(param_2,&local_b8,&local_c8,puVar32);
            goto LAB_143bf117d;
          }
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < *(int *)(DAT_14cb50b20 + 4));
    }
    uVar14 = *(undefined8 *)
              (&DAT_14ca8c1f0 +
              (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
    FUN_14157ad98();
    FUN_1448e935e(uVar14,&local_b8,&DAT_14cb50a48,0);
    FUN_14157ad98();
    puVar9 = local_130;
    local_118 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      uVar14 = CONCAT44(uStack_ac,uStack_b0);
      puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar28 = puVar19 + 10;
      if (*(undefined8 **)(param_2 + 0x78) < puVar28) {
        FUN_140023dd8(local_130,0x60);
        puVar19 = (undefined8 *)(*puVar9 + 0xf & 0xfffffffffffffff0);
        puVar28 = puVar19 + 10;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar28;
      *puVar19 = &PTR_FUN_14afab3a8;
      puVar19[2] = 0;
      *(undefined1 *)(puVar19 + 3) = 1;
      puVar19[4] = 0;
      *(undefined1 *)(puVar19 + 5) = 1;
      puVar19[6] = 0;
      puVar19[7] = 0;
      puVar19[8] = 0;
      puVar19[9] = 0;
      iVar18 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar18 + 1U) {
        FUN_1448cfae8(param_2 + 0x98,iVar18);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar18 * 8) = puVar19;
      uVar13 = FUN_144a99741(param_2,local_f8);
      FUN_144a8d58a();
      cVar6 = DAT_14cb503c1;
      if (DAT_14cb503c1 == '\x03') {
        cVar6 = '\x02';
      }
      puVar19[2] = uVar13;
      *(char *)(puVar19 + 3) = cVar6;
      lVar10 = FUN_1447e4f80();
      puVar9 = local_130;
      cVar6 = *(char *)(lVar10 + 0x41);
      if (cVar6 == '\x03') {
        cVar6 = '\x02';
      }
      puVar19[4] = *(undefined8 *)(local_f0 + 0x18);
      *(char *)(puVar19 + 5) = cVar6;
      lVar10 = plVar26[4];
      if ((*(char *)(lVar10 + 0x92) == '\x04') || (*(char *)(lVar10 + 0x92) == '\x01')) {
        uVar21 = *(undefined2 *)(lVar10 + 0x8e);
      }
      else {
        uVar21 = 0;
      }
      uVar2 = *(undefined1 *)(lVar10 + 0x90);
      puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar28 = puVar20 + 8;
      local_110 = uVar14;
      if (*(undefined8 **)(param_2 + 0x78) < puVar28) {
        FUN_140023dd8(local_130,0x48);
        puVar20 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar20 + 8;
      }
      puVar17 = (undefined8 *)(param_2 + 0x198);
      *(undefined8 **)(param_2 + 0x70) = puVar28;
      puVar20[1] = *(undefined8 *)(lVar10 + 8);
      puVar20[2] = 0;
      *(undefined1 *)(puVar20 + 3) = 1;
      *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
      *puVar20 = &PTR_FUN_14a203858;
      *(undefined2 *)(puVar20 + 5) = 0;
      *(undefined1 *)((longlong)puVar20 + 0x2a) = uVar2;
      *(undefined1 *)((longlong)puVar20 + 0x2b) = 0;
      *(undefined2 *)((longlong)puVar20 + 0x2c) = 0;
      *(undefined2 *)((longlong)puVar20 + 0x2e) = uVar21;
      *(undefined1 *)(puVar20 + 6) = 0;
      *(undefined1 *)((longlong)puVar20 + 0x32) = 0;
      puVar20[7] = lVar10;
      iVar18 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
        FUN_1447568fc(puVar17,iVar18);
        puVar32 = puVar17;
      }
      puVar9 = local_130;
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar20;
      *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      puVar19[7] = puVar20;
      lVar10 = *local_120;
      if ((*(char *)(lVar10 + 0x92) == '\x04') || (*(char *)(lVar10 + 0x92) == '\x01')) {
        uVar21 = *(undefined2 *)(lVar10 + 0x8e);
      }
      else {
        uVar21 = 0;
      }
      uVar2 = *(undefined1 *)(lVar10 + 0x90);
      puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar28 = puVar20 + 8;
      if (*(undefined8 **)(param_2 + 0x78) < puVar28) {
        FUN_140023dd8(local_130,0x48);
        puVar20 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar20 + 8;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar28;
      puVar20[1] = *(undefined8 *)(lVar10 + 8);
      puVar20[2] = 0;
      *(undefined1 *)(puVar20 + 3) = 1;
      *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
      *puVar20 = &PTR_FUN_14a203858;
      *(undefined2 *)(puVar20 + 5) = 0;
      *(undefined1 *)((longlong)puVar20 + 0x2a) = uVar2;
      *(undefined1 *)((longlong)puVar20 + 0x2b) = 0;
      *(undefined2 *)((longlong)puVar20 + 0x2c) = 0;
      *(undefined2 *)((longlong)puVar20 + 0x2e) = uVar21;
      *(undefined1 *)(puVar20 + 6) = 0;
      *(undefined1 *)((longlong)puVar20 + 0x32) = 0;
      puVar20[7] = lVar10;
      iVar18 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
      puVar32 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar32 >> 8),uVar2);
      if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
        FUN_1447568fc(puVar17,iVar18);
        puVar32 = puVar17;
      }
      plVar26 = local_120;
      puVar9 = local_130;
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar20;
      *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      puVar19[6] = puVar20;
      lVar10 = local_120[6];
      if ((*(char *)(lVar10 + 0x92) == '\x04') || (*(char *)(lVar10 + 0x92) == '\x01')) {
        uVar21 = *(undefined2 *)(lVar10 + 0x8e);
      }
      else {
        uVar21 = 0;
      }
      uVar2 = *(undefined1 *)(lVar10 + 0x90);
      puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar28 = puVar20 + 8;
      if (*(undefined8 **)(param_2 + 0x78) < puVar28) {
        local_108 = puVar17;
        FUN_140023dd8(local_130,0x48);
        puVar20 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar20 + 8;
        puVar17 = local_108;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar28;
      puVar20[1] = *(undefined8 *)(lVar10 + 8);
      puVar20[2] = 0;
      *(undefined1 *)(puVar20 + 3) = 1;
      *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
      *puVar20 = &PTR_FUN_14a203858;
      *(undefined2 *)(puVar20 + 5) = 0;
      *(undefined1 *)((longlong)puVar20 + 0x2a) = uVar2;
      *(undefined1 *)((longlong)puVar20 + 0x2b) = 0;
      *(undefined2 *)((longlong)puVar20 + 0x2c) = 0;
      *(undefined2 *)((longlong)puVar20 + 0x2e) = uVar21;
      *(undefined1 *)(puVar20 + 6) = 0;
      *(undefined1 *)((longlong)puVar20 + 0x32) = 0;
      puVar20[7] = lVar10;
      iVar18 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
      puVar32 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar32 >> 8),uVar2);
      if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
        FUN_1447568fc(puVar17,iVar18);
        puVar32 = puVar17;
      }
      puVar9 = local_130;
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar20;
      *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      puVar19[8] = puVar20;
      lVar10 = plVar26[2];
      uVar2 = *(undefined1 *)(lVar10 + 0x94);
      puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar28 = puVar20 + 9;
      if (*(undefined8 **)(param_2 + 0x78) < puVar28) {
        FUN_140023dd8(local_130,0x50);
        puVar20 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar20 + 9;
        puVar32 = puVar17;
      }
      puVar1 = puVar19 + 2;
      *(undefined8 **)(param_2 + 0x70) = puVar28;
      puVar20[1] = *(undefined8 *)(lVar10 + 8);
      puVar20[2] = 0;
      *(undefined1 *)(puVar20 + 3) = 0;
      *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar20 + 5) = 0;
      *puVar20 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar20 + 6) = uVar2;
      *(undefined1 *)(puVar20 + 7) = 0;
      *(undefined4 *)((longlong)puVar20 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar20 + 0x35) = 0;
      puVar20[8] = lVar10;
      iVar18 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
        FUN_1447568fc(puVar17,iVar18);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar20;
      *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      puVar19[9] = puVar20;
      iVar18 = *(int *)(local_128 + 0x68) + 7;
      iVar3 = *(int *)(local_128 + 0x68) + 0xe;
      if (-1 < iVar18) {
        iVar3 = iVar18;
      }
      iVar18 = *(int *)(local_128 + 100) + 7;
      iVar29 = *(int *)(local_128 + 100) + 0xe;
      if (-1 < iVar18) {
        iVar29 = iVar18;
      }
      iVar18 = *(int *)(local_128 + 0x60) + 7;
      iVar4 = *(int *)(local_128 + 0x60) + 0xe;
      if (-1 < iVar18) {
        iVar4 = iVar18;
      }
      FUN_14157aeba();
      local_b8 = (longlong *)0x0;
      uStack_b0 = 0;
      uStack_ac = 0;
      FUN_1448f70da(local_118,&DAT_14cb50e48,puVar1);
      FUN_140069376(param_2);
      puVar9 = local_130;
      uVar33 = (undefined6)((ulonglong)puVar32 >> 0x10);
      uVar11 = CONCAT62(uVar33,2);
      if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
         ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
        uVar11 = CONCAT62(uVar33,4);
      }
      puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar32 = puVar28 + 0x3d;
      if (*(undefined8 **)(param_2 + 0x78) < puVar32) {
        FUN_140023dd8(local_130,0x1f0);
        puVar28 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
        puVar32 = puVar28 + 0x3d;
      }
      *local_130 = (ulonglong)puVar32;
      uStack_b0 = (undefined4)DAT_14cb50e90;
      uStack_ac = (undefined4)((ulonglong)DAT_14cb50e90 >> 0x20);
      if (DAT_14cb50e90 != 0) {
        LOCK();
        *(int *)(DAT_14cb50e90 + 8) = *(int *)(DAT_14cb50e90 + 8) + 1;
        UNLOCK();
      }
      uStack_a8 = 0x4cb50e48;
      uStack_a4 = 1;
      local_198 = (wchar_t *)CONCAT71(local_198._1_7_,2);
      local_b8 = puVar1;
      FUN_140068f1a(puVar28,&local_c8,&local_b8,uVar11 & 0xffffffff);
      *puVar28 = &PTR_FUN_14afab3b0;
      puVar28[0x37] = &DAT_14cb50e48;
      puVar28[0x38] = puVar1;
      puVar28[0x39] = local_118;
      puVar28[0x3a] = local_110;
      *(int *)(puVar28 + 0x3b) = iVar4 >> 3;
      *(int *)((longlong)puVar28 + 0x1dc) = iVar29 >> 3;
      *(int *)(puVar28 + 0x3c) = iVar3 >> 3;
      iVar18 = *(int *)(param_2 + 0x170);
      *(uint *)(param_2 + 0x170) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0x174) < iVar18 + 1U) {
        FUN_14470e57a(param_2 + 0x168,iVar18);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar18 * 8) = puVar28;
      *(int *)((longlong)puVar28 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
      FUN_140069100(param_2,puVar28);
      plVar26 = local_120;
      uStack_b0 = DAT_14c9a52a0;
      local_b8 = DAT_14c9a5298;
      uStack_a4 = DAT_14c9a52a0;
      local_98 = DAT_14c9a52a0;
      iStack_94 = 0;
      iStack_90 = 0;
      uStack_8c = 1;
      uStack_8a = 0;
      uStack_88 = 0;
      uStack_86 = 0;
      uStack_85 = 0;
      uStack_84 = 0;
      uStack_83 = 0;
      uStack_82 = 0x10000;
      uStack_ac = (undefined4)DAT_14c967818;
      uStack_a8 = (undefined4)((ulonglong)DAT_14c967818 >> 0x20);
      uStack_a0 = DAT_14c967818;
      FUN_1400e8d41(param_2,local_120[2],*local_120);
    }
    lVar10 = *plVar26;
    if ((*(byte *)(lVar10 + 0x20) & 0xc) == 0) {
      if ((*(byte *)(lVar10 + 0x20) & 0x10) != 0) {
        FUN_140069376(param_2);
      }
      iVar18 = *(int *)(param_2 + 0x5a0);
      *(uint *)(param_2 + 0x5a0) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0x5a4) < iVar18 + 1U) {
        FUN_1400f155a((longlong *)(param_2 + 0x598),iVar18);
      }
      *(longlong *)(*(longlong *)(param_2 + 0x598) + (longlong)iVar18 * 8) = lVar10;
      *(undefined4 *)(lVar10 + 0x1c) = 0x70;
      *(byte *)(lVar10 + 0x20) = *(byte *)(lVar10 + 0x20) & 0xe8 | 0x15;
      *(undefined4 *)(lVar10 + 0x58) = 0x70;
    }
    lVar10 = plVar26[1];
    if ((*(byte *)(lVar10 + 0x20) & 0xc) == 0) {
      if ((*(byte *)(lVar10 + 0x20) & 0x10) != 0) {
        FUN_140069376(param_2);
      }
      iVar18 = *(int *)(param_2 + 0x5a0);
      *(uint *)(param_2 + 0x5a0) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0x5a4) < iVar18 + 1U) {
        FUN_1400f155a((longlong *)(param_2 + 0x598),iVar18);
      }
      *(longlong *)(*(longlong *)(param_2 + 0x598) + (longlong)iVar18 * 8) = lVar10;
      *(undefined4 *)(lVar10 + 0x1c) = 0x70;
      *(byte *)(lVar10 + 0x20) = *(byte *)(lVar10 + 0x20) & 0xe8 | 0x15;
      *(undefined4 *)(lVar10 + 0x58) = 0x70;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bf2944 FUN_143bf2944 body=69 status=ok
// SIG undefined FUN_143bf2944(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143bf2944(void)

{
  _DAT_14cb50b10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143bf2986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb50b18,1);
  return;
}



// FUNCTION 143bf2989 FUN_143bf2989 body=69 status=ok
// SIG undefined FUN_143bf2989(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143bf2989(void)

{
  _DAT_14cb50b28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143bf29cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb50b30,1);
  return;
}



// FUNCTION 143bf29ce FUN_143bf29ce body=69 status=ok
// SIG undefined FUN_143bf29ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143bf29ce(void)

{
  _DAT_14cb50b40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143bf2a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb50b48,1);
  return;
}



// FUNCTION 143bf2a14 FUN_143bf2a14 body=801 status=ok
// SIG undefined FUN_143bf2a14(void)

undefined1 (*) [16] FUN_143bf2a14(longlong param_1,undefined1 (*param_2) [16],double *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
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
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  dVar10 = (double)*(float *)(param_1 + 0x628);
  dVar7 = *param_3;
  dVar8 = param_3[1];
  dVar1 = param_3[2];
  dVar18 = param_3[8];
  dVar11 = param_3[9];
  dVar13 = param_3[10];
  dVar6 = dVar8 + dVar8;
  dVar3 = dVar1 + dVar1;
  dVar17 = dVar7 * (dVar7 + dVar7);
  dVar15 = (1.0 - (dVar1 * dVar3 + dVar8 * dVar6)) * dVar18;
  dVar16 = (1.0 - (dVar1 * dVar3 + dVar17)) * dVar11;
  dVar14 = (1.0 - (dVar17 + dVar8 * dVar6)) * dVar13;
  dVar1 = param_3[3];
  dVar17 = dVar3 * dVar1;
  dVar4 = (dVar7 + dVar7) * param_3[3];
  dVar1 = dVar6 * dVar1;
  dVar19 = (dVar6 * dVar7 + dVar17) * dVar18;
  dVar20 = (dVar3 * dVar8 + dVar4) * dVar11;
  dVar12 = (dVar1 + *param_3 * dVar3) * dVar13;
  dVar18 = (*param_3 * dVar3 - dVar1) * dVar18;
  dVar11 = (dVar6 * dVar7 - dVar17) * dVar11;
  dVar13 = (dVar3 * dVar8 - dVar4) * dVar13;
  dVar3 = DAT_14c8464e0 * dVar15;
  dVar4 = DAT_14c8464e8 * dVar11;
  dVar17 = DAT_14c8464f0 * dVar12;
  dVar6 = ABS(dVar10 * dVar12) + ABS(dVar10 * dVar11) + ABS(dVar10 * dVar15);
  dVar7 = ABS(dVar10 * dVar13) + ABS(dVar10 * dVar16) + ABS(dVar10 * dVar19);
  dVar21 = ABS(dVar14 * dVar10) + ABS(dVar20 * dVar10) + ABS(dVar18 * dVar10);
  dVar8 = DAT_14c8464e0 * dVar18;
  dVar9 = DAT_14c8464e8 * dVar20;
  dVar1 = DAT_14c8464f0 * dVar14;
  dVar12 = dVar12 * dVar12 + dVar11 * dVar11 + dVar15 * dVar15;
  dVar11 = dVar13 * dVar13 + dVar16 * dVar16 + dVar19 * dVar19;
  dVar18 = dVar14 * dVar14 + dVar20 * dVar20 + dVar18 * dVar18;
  if (dVar12 <= dVar11) {
    dVar12 = dVar11;
  }
  if (dVar12 <= dVar18) {
    dVar12 = dVar18;
  }
  dVar11 = param_3[4];
  dVar13 = DAT_14c8464f0 * dVar13 + DAT_14c8464e8 * dVar16 + DAT_14c8464e0 * dVar19 + param_3[5];
  dVar18 = param_3[6];
  if (dVar12 < 0.0) {
    dVar12 = sqrt(dVar12);
  }
  else {
    dVar12 = SQRT(dVar12);
  }
  dVar15 = SQRT(dVar7 * dVar7 + dVar21 * dVar21 + dVar6 * dVar6);
  dVar14 = dVar12 * dVar10;
  if (dVar15 <= dVar12 * dVar10) {
    dVar14 = dVar15;
  }
  auVar2._8_4_ = SUB84(dVar13,0);
  auVar2._0_8_ = dVar17 + dVar4 + dVar3 + dVar11;
  auVar2._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *param_2 = auVar2;
  *(double *)param_2[1] = dVar1 + dVar9 + dVar8 + dVar18;
  auVar5._8_4_ = SUB84(dVar7,0);
  auVar5._0_8_ = dVar6;
  auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(param_2[1] + 8) = auVar5;
  *(double *)(param_2[2] + 8) = dVar21;
  *(double *)param_2[3] = dVar14;
  return param_2;
}



// FUNCTION 143bf2d35 FUN_143bf2d35 body=69 status=ok
// SIG undefined FUN_143bf2d35(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143bf2d35(void)

{
  _DAT_14cb50b58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143bf2d77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb50b60,1);
  return;
}



// FUNCTION 143bf2d7a FUN_143bf2d7a body=69 status=ok
// SIG undefined FUN_143bf2d7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143bf2d7a(void)

{
  _DAT_14cb50b70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143bf2dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb50b78,1);
  return;
}



// FUNCTION 143bf2e3a FUN_143bf2e3a body=38 status=ok
// SIG undefined FUN_143bf2e3a(void)

undefined8 FUN_143bf2e3a(undefined8 param_1,int param_2)

{
  FUN_140064e2c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bf2e68 FUN_143bf2e68 body=1784 status=ok
// SIG undefined FUN_143bf2e68(void)

void FUN_143bf2e68(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  ulonglong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  double *pdVar10;
  double *pdVar11;
  uint uVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  undefined1 auStack_318 [32];
  longlong local_2f8;
  undefined1 local_2f0;
  uint local_2e8;
  ulonglong local_2e0;
  ulonglong local_2d8;
  longlong local_2c8;
  double *local_2c0;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278 [16];
  double local_1f8 [4];
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 local_178;
  undefined8 local_170;
  double dStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  if (DAT_14cb0d2b0 != 0) {
    lVar6 = FUN_14001cc68(0xe8,0x10);
    local_178 = "GizmoColor";
    local_170 = (double)CONCAT35(local_170._5_3_,10);
    uVar4 = FUN_14001a6c0(&local_178,1);
    local_178 = (char *)CONCAT44((&DAT_14c758c60)[*(byte *)(param_1 + 0x299)],
                                 (&DAT_14c758c60)[*(byte *)(param_1 + 0x29a)]);
    local_170 = (double)CONCAT44((float)*(byte *)(param_1 + 0x29b) * 0.003921569,
                                 (&DAT_14c758c60)[*(byte *)(param_1 + 0x298)]);
    uVar7 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0x6f8) + 0x2f0))();
    local_2c8 = lVar6;
    FUN_14089e406(lVar6,uVar7,&local_178,uVar4);
    iVar5 = (int)param_2[1];
    if (0 < iVar5) {
      local_2c0 = (double *)(param_1 + 0x100);
      lVar6 = 0;
      do {
        uVar12 = (uint)lVar6;
        if ((param_4 >> (uVar12 & 0x1f) & 1) != 0) {
          lVar9 = *(longlong *)(*param_2 + lVar6 * 8);
          lVar8 = *(longlong *)(param_5 + 0x60);
          if (*(longlong *)(param_5 + 0x60) == 0) {
            lVar8 = param_5 + 0x50;
          }
          if ((lVar9 != 0) && (lVar8 = *(longlong *)(lVar8 + lVar6 * 8), lVar8 != 0)) {
            fVar17 = (float)*(byte *)(param_1 + 0x29b) * 0.003921569;
            if ((*(byte *)(param_1 + 0x6c) & 6) == 0) {
              fVar13 = *(float *)(&DAT_14a819f80 +
                                 (ulonglong)((*(byte *)(param_1 + 0x6c) & 0x10) == 0) * 4);
            }
            else {
              fVar13 = 1.0;
            }
            fVar1 = (float)(&DAT_14c758c60)[*(byte *)(param_1 + 0x29a)];
            fVar2 = (float)(&DAT_14c758c60)[*(byte *)(param_1 + 0x299)];
            fVar3 = (float)(&DAT_14c758c60)[*(byte *)(param_1 + 0x298)];
            local_2b8 = powf(fVar13,2.2);
            local_2b0 = fVar3 * local_2b8;
            local_2b4 = fVar2 * local_2b8;
            local_2b8 = fVar1 * local_2b8;
            dVar14 = *(double *)(lVar9 + 0x1058) - *(double *)(param_1 + 0x170);
            dVar16 = *(double *)(lVar9 + 0x1050) - *(double *)(param_1 + 0x168);
            dVar15 = *(double *)(lVar9 + 0x1048) - *(double *)(param_1 + 0x160);
            fVar13 = (float)(dVar14 * dVar14 + dVar15 * dVar15 + dVar16 * dVar16);
            local_2ac = fVar17;
            if ((*(float *)(param_1 + 0x274) * *(float *)(param_1 + 0x274) <= fVar13) &&
               (fVar13 <= *(float *)(param_1 + 0x270) * *(float *)(param_1 + 0x270))) {
              iVar5 = (int)(*(float *)(param_1 + 0x29c) * 0.25);
              if (0x3f < iVar5) {
                iVar5 = 0x40;
              }
              if (iVar5 < 0x11) {
                iVar5 = 0x10;
              }
              local_2d8 = local_2d8 & 0xffffffffffffff00;
              local_2e0 = local_2e0 & 0xffffffff00000000;
              local_2e8 = 0;
              local_2f0 = 0;
              local_2f8 = CONCAT44(local_2f8._4_4_,iVar5);
              local_178 = (char *)*(double *)(param_1 + 0x160);
              local_170 = *(double *)(param_1 + 0x168);
              dStack_168 = *(double *)(param_1 + 0x170);
              FUN_147cb8959(lVar8,&local_178,&local_2b8,(double)*(float *)(param_1 + 0x29c));
              if (local_2c8 != 0) {
                pdVar10 = local_2c0;
                pdVar11 = local_1f8;
                for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
                  *pdVar11 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar11 = pdVar11 + 1;
                }
                local_290 = local_198;
                local_288 = dStack_190;
                local_280 = local_188;
                local_2a8 = local_198 +
                            local_198 * 0.0 +
                            local_1b8 * 0.0 + local_1d8 * 0.0 + local_1f8[0] * 72.0;
                local_298 = local_1f8[2] * 72.0 + local_1c8 * 0.0 + local_1a8 * 0.0 +
                            local_188 * 0.0 + local_188;
                local_2a0 = dStack_190 * 0.0 +
                            dStack_1b0 * 0.0 + dStack_1d0 * 0.0 + local_1f8[1] * 72.0 + dStack_190;
                local_2d8 = 0;
                local_2e0 = param_5;
                local_2f0 = 0;
                local_2f8 = local_2c8;
                local_2e8 = uVar12;
                FUN_147cb5b9f(&local_290,&local_2a8,0x4003333320000000,0x10);
                local_198 = local_290 +
                            local_198 * 0.0 +
                            local_1b8 * 0.0 + local_1d8 * 0.0 + local_1f8[0] * 80.0;
                local_188 = local_1f8[2] * 80.0 + local_1c8 * 0.0 + local_1a8 * 0.0 +
                            local_188 * 0.0 + local_280;
                dStack_190 = dStack_190 * 0.0 +
                             dStack_1b0 * 0.0 + dStack_1d0 * 0.0 + local_1f8[1] * 80.0 + local_288;
                local_178 = (char *)0xc030000000000000;
                local_160 = 0;
                uStack_158 = 0;
                local_170 = 0.0;
                dStack_168 = 0.0;
                local_150 = 0xc030000000000000;
                local_138 = 0;
                uStack_130 = 0;
                local_148 = 0;
                uStack_140 = 0;
                local_128 = 0xc030000000000000;
                local_110 = 0;
                uStack_108 = 0;
                local_120 = 0;
                uStack_118 = 0;
                local_100 = 0x3ff0000000000000;
                FUN_1447fea8d(local_278,&local_178,local_1f8);
                pdVar10 = local_278;
                pdVar11 = local_1f8;
                for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
                  *pdVar11 = *pdVar10;
                  pdVar10 = pdVar10 + 1;
                  pdVar11 = pdVar11 + 1;
                }
                local_2d8 = 0;
                local_2e0 = param_5;
                local_2f0 = 0;
                local_2f8 = local_2c8;
                local_2e8 = uVar12;
                FUN_147cb5fef(local_1f8,0,0x41a00000,0x20);
              }
            }
            iVar5 = (int)param_2[1];
          }
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar5);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bf3562 FUN_143bf3562 body=84 status=ok
// SIG undefined FUN_143bf3562(void)

undefined8 * FUN_143bf3562(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = true;
  if ((*(byte *)(param_1 + 0x2a0) & 1) != 0) {
    bVar3 = (*(byte *)(param_1 + 0x6c) & 6) != 0;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)((longlong)param_2 + 4) = 2;
  bVar1 = FUN_14480c900(0,param_3);
  uVar2 = (uint)bVar1 << 2 | 0x82;
  if (!bVar3) {
    uVar2 = 0x82;
  }
  *(uint *)(param_2 + 2) = uVar2;
  return param_2;
}



// FUNCTION 143bf35c4 FUN_143bf35c4 body=29 status=ok
// SIG undefined FUN_143bf35c4(void)

undefined8 FUN_143bf35c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bf3760 FUN_143bf3760 body=93 status=ok
// SIG undefined FUN_143bf3760(void)

void FUN_143bf3760(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afab220;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143bf37be FUN_143bf37be body=93 status=ok
// SIG undefined FUN_143bf37be(void)

void FUN_143bf37be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afab220;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143bf381c FUN_143bf381c body=126 status=ok
// SIG undefined FUN_143bf381c(void)

void FUN_143bf381c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afab220;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143bf388b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143bf38f6 FUN_143bf38f6 body=357 status=ok
// SIG undefined FUN_143bf38f6(void)

undefined8 FUN_143bf38f6(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143bf3a55;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143bf3a55;
    }
    FUN_140192332(param_1 + 0x18,&local_20,0);
  }
  else {
LAB_143bf3a55:
    local_20 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143bf39ae;
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if ((*(int *)(param_1 + 0x24) != 0) &&
         ((((uVar2 = *(uint *)(param_1 + 0x20), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)) &&
           (plVar5 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar5 != (longlong *)0x0)) &&
          (((int)plVar5[2] == *(int *)(param_1 + 0x24) &&
           ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))))) {
        if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
          lVar7 = *plVar5;
        }
        else {
          lVar7 = 0;
        }
        *(undefined4 *)(lVar7 + 0x338) = 0xffffffff;
      }
      goto LAB_143bf39ae;
    }
  }
  uVar6 = 0;
LAB_143bf39ae:
  if ((local_20 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bf3a5c FUN_143bf3a5c body=2332 status=ok
// SIG undefined FUN_143bf3a5c(void)

void FUN_143bf3a5c(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  void *pvVar21;
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auStack_2b8 [32];
  code **local_298;
  undefined1 local_288 [144];
  void *local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined8 local_184;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [144];
  code *local_b8 [2];
  longlong *local_a8;
  longlong local_98 [5];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_16c = *(float *)(param_1 + 2);
  pvVar21 = (void *)*param_1;
  uVar13 = *(uint *)(param_1 + 1);
  auVar22 = ZEXT816(0);
  local_1c0 = *(undefined8 *)(param_2 + 0x28);
  local_1d0 = *(undefined8 *)(param_2 + 0x18);
  uStack_1c8 = *(undefined8 *)(param_2 + 0x20);
  local_1b8 = *(undefined8 *)(param_2 + 8);
  local_1b0 = *(undefined4 *)(param_2 + 0x10);
  local_1d8 = *(double *)(param_2 + 0x28);
  local_1e8 = *(double *)(param_2 + 0x18);
  local_1e0 = *(double *)(param_2 + 0x20);
  local_1a8 = (local_1e8 + local_1e8) / (double)*(int *)(param_2 + 8);
  local_1a0 = (local_1e0 + local_1e0) / (double)*(int *)(param_2 + 0xc);
  local_198 = (local_1d8 + local_1d8) / (double)*(int *)(param_2 + 0x10);
  if (0.2 <= local_16c) {
    local_16c = 0.2;
  }
  if (local_16c <= 0.0001) {
    local_16c = 0.0001;
  }
  local_1d8 = local_1d8 + *(double *)(param_2 + 0x68);
  local_1e0 = local_1e0 + *(double *)(param_2 + 0x60);
  local_1e8 = local_1e8 + *(double *)(param_2 + 0x58);
  dVar23 = local_1d8 * 1.52587890625e-05 + 0.5;
  dVar27 = local_1e0 * 1.52587890625e-05 + 0.5;
  dVar25 = local_1e8 * 1.52587890625e-05 + 0.5;
  auVar24._0_4_ = (float)dVar23;
  auVar24._4_4_ = (int)((ulonglong)dVar23 >> 0x20);
  auVar24._8_8_ = 0;
  auVar28._0_4_ = (float)dVar27;
  auVar28._4_4_ = (int)((ulonglong)dVar27 >> 0x20);
  auVar28._8_8_ = 0;
  auVar26._0_4_ = (float)dVar25;
  auVar26._4_4_ = (int)((ulonglong)dVar25 >> 0x20);
  auVar26._8_8_ = 0;
  auVar26 = blendps(auVar26,auVar22,0xe);
  auVar26 = roundps(auVar26,auVar26,1);
  local_190 = auVar26._0_4_;
  auVar28 = blendps(auVar28,auVar22,0xe);
  auVar26 = roundps(auVar26,auVar28,1);
  local_18c = auVar26._0_4_;
  auVar24 = blendps(auVar24,auVar22,0xe);
  auVar22 = roundps(auVar22,auVar24,1);
  local_188 = auVar22._0_4_;
  local_168 = (float)(*(int *)(param_2 + 0x70) - *(int *)(param_2 + 0x48));
  local_164 = (float)(*(int *)(param_2 + 0x74) - *(int *)(param_2 + 0x4c));
  local_160 = (float)(*(int *)(param_2 + 0x78) - *(int *)(param_2 + 0x50));
  local_178 = *(undefined8 *)(param_2 + 0x3c);
  local_170 = *(undefined4 *)(param_2 + 0x44);
  local_184 = *(undefined8 *)(param_2 + 0x30);
  local_17c = *(undefined4 *)(param_2 + 0x38);
  local_158 = ZEXT416(uVar13) << 0x40;
  if ((longlong)(int)uVar13 == 0) {
    local_158 = ZEXT416(uVar13) << 0x40;
    memcpy(local_288,&local_1e8,0x8c);
LAB_143bf3ca8:
    pvVar21 = (void *)0x0;
    uVar16 = 0;
    uVar20 = 0;
  }
  else {
    FUN_1418417ec(local_158,uVar13,0);
    memcpy((void *)local_158._0_8_,pvVar21,(longlong)(int)uVar13 << 5);
    uVar16 = local_158._8_4_;
    lVar18 = (longlong)(int)local_158._8_4_;
    memcpy(local_288,&local_1e8,0x8c);
    local_1f8 = (void *)0x0;
    uVar12 = local_158._0_8_;
    uStack_1f0 = CONCAT44(uStack_1f0._4_4_,uVar16);
    if (lVar18 == 0) goto LAB_143bf3ca8;
    FUN_1418417ec(&local_1f8,uVar16,0);
    memcpy(local_1f8,(void *)uVar12,lVar18 << 5);
    pvVar21 = local_1f8;
    uVar16 = (undefined4)uStack_1f0;
    uVar20 = uStack_1f0._4_4_;
  }
  memcpy(local_148,local_288,0x8c);
  local_1f8 = (void *)0x0;
  uStack_1f0 = 0;
  lVar18 = *(longlong *)(param_2 + 0xb8);
  plVar14 = *(longlong **)(param_2 + 0xc0);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143bf3d0f;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143bf3d18;
      goto LAB_143bf3e52;
    }
LAB_143bf3d18:
    memcpy((void *)(lVar18 + 0x30),local_148,0x8c);
    if (*(longlong *)(lVar18 + 0xc0) != 0) {
      FUN_1400020a8();
    }
    *(void **)(lVar18 + 0xc0) = pvVar21;
    *(undefined4 *)(lVar18 + 200) = uVar16;
    *(undefined4 *)(lVar18 + 0xcc) = uVar20;
    if (plVar14 == (longlong *)0x0) goto LAB_143bf3f57;
    LOCK();
    plVar9 = plVar14 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_143bf3f57;
    (**(code **)*plVar14)(plVar14);
    LOCK();
    piVar1 = (int *)((longlong)plVar14 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_143bf3f57;
    lVar18 = *plVar14;
  }
  else {
LAB_143bf3d0f:
    if (iVar6 == 0x10) goto LAB_143bf3d18;
LAB_143bf3e52:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
      goto LAB_143bf3d18;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_143bf3d18;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_143bf4062;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_143bf63d9);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar4 + 0x310);
        *(undefined8 *)(lVar4 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        FUN_140217a48(puVar2);
        puVar11 = (uint *)*puVar2;
LAB_143bf4062:
        puVar19 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar19 + 0x2b);
        uVar13 = puVar11[0x12];
        if (puVar15 <= puVar11 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
          LOCK();
          uVar3 = *puVar11;
          *puVar11 = *puVar11 + uVar13 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar13) != 0xffffffff) break;
          puVar11 = (uint *)*puVar2;
          *puVar11 = 0xffffffff;
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          puVar19 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar19 + 0x2b);
          uVar13 = 0;
          if (puVar15 <= puVar11 + 0x4000) {
            uVar13 = 1;
            goto LAB_143bf40e2;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_143bf40e2:
      *(uint **)(puVar11 + 0x10) = puVar15;
      puVar11[0x12] = uVar13;
      iVar6 = 0;
      FUN_1447247dc(puVar19,0);
      *puVar19 = &PTR_FUN_14afab498;
      memcpy(puVar19 + 0x15,local_148,0x8c);
      puVar19[0x27] = pvVar21;
      *(undefined4 *)(puVar19 + 0x28) = uVar16;
      *(undefined4 *)((longlong)puVar19 + 0x144) = uVar20;
      puVar19[0x29] = lVar18;
      puVar19[0x2a] = plVar14;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
          iVar6 = 0;
        }
        else {
          uVar17 = 2;
        }
      }
      else {
        iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar17 = 5;
      }
      if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
      }
      puVar19[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar19[9] = puVar19;
      puVar19[10] = puVar19;
      lVar18 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar18 == 0) {
        uVar5 = 1;
        if ((char)uVar17 != '\x06') {
          uVar5 = uVar17;
        }
        uVar17 = uVar5;
        uVar12 = 0;
      }
      else {
        if ((char)uVar17 == '\x06') {
          uVar17 = *(ulonglong *)(lVar18 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar18 + 0x30);
      }
      puVar19[0xf] = uVar12;
      puVar19[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar19 + 0x1c) = iVar6;
      if (puVar19 == (undefined8 *)0x0) {
        local_b8[0] = (code *)CONCAT71(local_b8[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
        UNLOCK();
        local_b8[0] = (code *)CONCAT71(local_b8[0]._1_7_,1);
        FUN_1447439e4(puVar19);
        LOCK();
        piVar1 = (int *)(puVar19 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar19)(puVar19,1);
        }
      }
      goto LAB_143bf3f57;
    }
    local_b8[0] = (code *)0x0;
    plVar9 = (longlong *)FUN_14001cc68(0xb8,8);
    *plVar9 = (longlong)&PTR_LAB_14afab440;
    local_a8 = plVar9;
    memcpy(plVar9 + 1,local_148,0x8c);
    plVar9[0x13] = (longlong)pvVar21;
    *(undefined4 *)(plVar9 + 0x14) = uVar16;
    *(undefined4 *)((longlong)plVar9 + 0xa4) = uVar20;
    plVar9[0x15] = lVar18;
    plVar9[0x16] = (longlong)plVar14;
    if (plVar9 != (longlong *)&DAT_fffffffffffffff8) {
      local_b8[0] = FUN_143bf659a;
    }
    local_298 = local_b8;
    FUN_14005a792(&DAT_14ca9a440,L"UpdateWindSimulationData",&DAT_14cb50ffc);
    if (local_b8[0] == (code *)0x0) goto LAB_143bf3f57;
    plVar14 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar14 = local_98;
    }
    lVar18 = *plVar14;
  }
  (**(code **)(lVar18 + 0x10))(plVar14);
LAB_143bf3f57:
  if (local_1f8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_158._0_8_ != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bf437a FUN_143bf437a body=123 status=ok
// SIG undefined FUN_143bf437a(void)

undefined8 * FUN_143bf437a(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14afab290;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_1418417ec(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 5);
  }
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 143bf43f6 FUN_143bf43f6 body=5 status=ok
// SIG undefined FUN_143bf43f6(void)

longlong FUN_143bf43f6(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143bf43fc FUN_143bf43fc body=12 status=ok
// SIG undefined FUN_143bf43fc(void)

void FUN_143bf43fc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143bf4405. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143bf4408 FUN_143bf4408 body=57 status=ok
// SIG undefined FUN_143bf4408(void)

undefined8 * FUN_143bf4408(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14afab290;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bf4442 FUN_143bf4442 body=370 status=ok
// SIG undefined FUN_143bf4442(void)

void FUN_143bf4442(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0x2020201;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0x7f7fffff;
  local_2c = 1;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_143bf4565;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_48 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_143bf4565:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bf45b6 FUN_143bf45b6 body=31 status=ok
// SIG undefined FUN_143bf45b6(void)

undefined8 FUN_143bf45b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bf45d6 FUN_143bf45d6 body=1324 status=ok
// SIG undefined FUN_143bf45d6(void)

void FUN_143bf45d6(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bf4b04 FUN_143bf4b04 body=31 status=ok
// SIG undefined FUN_143bf4b04(void)

undefined8 FUN_143bf4b04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bf4b24 FUN_143bf4b24 body=1324 status=ok
// SIG undefined FUN_143bf4b24(void)

void FUN_143bf4b24(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bf5052 FUN_143bf5052 body=31 status=ok
// SIG undefined FUN_143bf5052(void)

undefined8 FUN_143bf5052(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bf5072 FUN_143bf5072 body=1324 status=ok
// SIG undefined FUN_143bf5072(void)

void FUN_143bf5072(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bf55a0 FUN_143bf55a0 body=481 status=ok
// SIG undefined FUN_143bf55a0(void)

void FUN_143bf55a0(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1485ede44(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bf5782 FUN_143bf5782 body=232 status=ok
// SIG undefined FUN_143bf5782(void)

void FUN_143bf5782(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 143bf586a FUN_143bf586a body=81 status=ok
// SIG undefined FUN_143bf586a(void)

void FUN_143bf586a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1485edee7(param_1,param_2,lVar1);
  return;
}



// FUNCTION 143bf58bc FUN_143bf58bc body=31 status=ok
// SIG undefined FUN_143bf58bc(void)

undefined8 FUN_143bf58bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bf58dc FUN_143bf58dc body=1324 status=ok
// SIG undefined FUN_143bf58dc(void)

void FUN_143bf58dc(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bf5e0a FUN_143bf5e0a body=31 status=ok
// SIG undefined FUN_143bf5e0a(void)

undefined8 FUN_143bf5e0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bf5e2a FUN_143bf5e2a body=1315 status=ok
// SIG undefined FUN_143bf5e2a(void)

void FUN_143bf5e2a(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bf6368 FUN_143bf6368 body=29 status=ok
// SIG undefined FUN_143bf6368(void)

void FUN_143bf6368(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143bf6386 FUN_143bf6386 body=83 status=ok
// SIG undefined FUN_143bf6386(void)

undefined8 * FUN_143bf6386(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14afab3d0;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bf6400 FUN_143bf6400 body=282 status=ok
// SIG undefined FUN_143bf6400(void)

undefined8 * FUN_143bf6400(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143bf63d9);
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



// FUNCTION 143bf651a FUN_143bf651a body=128 status=ok
// SIG undefined FUN_143bf651a(void)

void FUN_143bf651a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x17];
  uVar5 = *(undefined4 *)((longlong)param_1 + 0xac);
  uVar6 = *(undefined4 *)(param_1 + 0x16);
  uVar7 = *(undefined4 *)((longlong)param_1 + 0xb4);
  *(undefined4 *)(lVar3 + 0xd0) = *(undefined4 *)(param_1 + 0x15);
  *(undefined4 *)(lVar3 + 0xd4) = uVar5;
  *(undefined4 *)(lVar3 + 0xd8) = uVar6;
  *(undefined4 *)(lVar3 + 0xdc) = uVar7;
  plVar4 = (longlong *)param_1[0x18];
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
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143bf658f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143bf659a FUN_143bf659a body=122 status=ok
// SIG undefined FUN_143bf659a(void)

void FUN_143bf659a(void *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)param_1 + 0xa0);
  memcpy((void *)(lVar1 + 0x30),param_1,0x8c);
  if ((void *)(lVar1 + 0x30) != param_1) {
    if (*(longlong *)(lVar1 + 0xc0) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(lVar1 + 0xc0) = *(undefined8 *)((longlong)param_1 + 0x90);
    *(undefined8 *)((longlong)param_1 + 0x90) = 0;
    *(undefined4 *)(lVar1 + 200) = *(undefined4 *)((longlong)param_1 + 0x98);
    *(undefined4 *)(lVar1 + 0xcc) = *(undefined4 *)((longlong)param_1 + 0x9c);
    *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  }
  return;
}



// FUNCTION 143bf661e FUN_143bf661e body=29 status=ok
// SIG undefined FUN_143bf661e(void)

void FUN_143bf661e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143bf663c FUN_143bf663c body=103 status=ok
// SIG undefined FUN_143bf663c(void)

undefined8 * FUN_143bf663c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14afab440;
  plVar3 = (longlong *)param_1[0x16];
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
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bf66a4 FUN_143bf66a4 body=282 status=ok
// SIG undefined FUN_143bf66a4(void)

undefined8 * FUN_143bf66a4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143bf63d9);
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



// FUNCTION 143bf67be FUN_143bf67be body=246 status=ok
// SIG undefined FUN_143bf67be(void)

void FUN_143bf67be(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x29];
  memcpy((undefined8 *)(lVar3 + 0x30),param_1 + 0x15,0x8c);
  if ((undefined8 *)(lVar3 + 0x30) != param_1 + 0x15) {
    if (*(longlong *)(lVar3 + 0xc0) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(lVar3 + 0xc0) = param_1[0x27];
    param_1[0x27] = 0;
    *(undefined4 *)(lVar3 + 200) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(lVar3 + 0xcc) = *(undefined4 *)((longlong)param_1 + 0x144);
    param_1[0x28] = 0;
  }
  plVar4 = (longlong *)param_1[0x2a];
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
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143bf68a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143bf68cc FUN_143bf68cc body=12 status=ok
// SIG undefined FUN_143bf68cc(void)

void FUN_143bf68cc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143bf68d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143bf68d8 FUN_143bf68d8 body=83 status=ok
// SIG undefined FUN_143bf68d8(void)

undefined8 * FUN_143bf68d8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14afab4b0;
  plVar3 = (longlong *)param_1[2];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bf692c FUN_143bf692c body=282 status=ok
// SIG undefined FUN_143bf692c(void)

undefined8 * FUN_143bf692c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143bf63d9);
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



// FUNCTION 143bf6a46 FUN_143bf6a46 body=124 status=ok
// SIG undefined FUN_143bf6a46(void)

void FUN_143bf6a46(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x15];
  *(undefined8 *)(lVar3 + 0xd0) = 0;
  *(undefined8 *)(lVar3 + 0xd8) = 0;
  plVar4 = (longlong *)param_1[0x16];
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
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143bf6ab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143bf6ac2 FUN_143bf6ac2 body=1075 status=ok
// SIG undefined FUN_143bf6ac2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143bf6ac2(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/GbxDynamicWind",&PTR_FUN_14afa6190,1,0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/GbxDynamicWind",&PTR_FUN_14afa6f50,1,0);
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/GbxDynamicWind",0,0,&PTR_FUN_14afa7220);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/GbxDynamicWind",&PTR_FUN_14afa7650,1,0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/GbxDynamicWind",&PTR_FUN_14afa82f0,1,0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/GbxDynamicWind",&PTR_FUN_14afa8a40,1,0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/GbxDynamicWind",&PTR_FUN_14afa9760,1,0);
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_58,&DAT_14cb50320);
  if (cVar1 == '\0') {
    _DAT_14cb50320 = 0;
    uRam000000014cb50328 = 0;
  }
  if (local_58 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxDynamicWind",&PTR_FUN_14afa9ad0,1,0);
  local_58 = (undefined *)0x800000014afa9b18;
  local_44 = 0xe;
  uVar2 = FUN_14577453c();
  local_50._0_5_ = CONCAT14(1,uVar2);
  FUN_1464a4316(&local_58);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffffffffff00);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cb50360,L"Gbx.Wind.DebugDraw.Grid",&local_58,
                L"Draw the gbx dynamic wind grid.");
  atexit(FUN_143beeb50);
  FUN_1411e592c(&DAT_14cb50378,L"GbxWindParams");
  local_50 = FUN_144a8d58a;
  local_58 = &DAT_14152059c;
  FUN_14142a670(&DAT_14cb50408,&local_58);
  local_50 = FUN_14152e45c;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb50530,&local_58);
  local_50 = FUN_141574c2e;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb50658,&local_58);
  local_50 = FUN_1415936f6;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb50780,&local_58);
  local_50 = FUN_145e9c71c;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb508a8,&local_58);
  local_50 = FUN_144a8ffea;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb509d0,&local_58);
  local_50 = FUN_14157ad98;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb50af8,&local_58);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,8);
  local_78._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14cb50b10,L"r.GbxWind.SolverIterations",&local_58,
                L"Controls the number of iterations done on the pressure solve for the wind simulation. More iterations is more expensive, but results in a more accurate result."
               );
  atexit(FUN_143bf2944);
  local_58 = (undefined *)CONCAT71(local_58._1_7_,1);
  local_78._0_4_ = 0x60;
  FUN_140bd5914(&DAT_14cb50b28,L"r.GbxWind.SOR.Enable",&local_58,
                L"Enables successive over-relaxation which allows for far less jacobi iterations while maintaing the same solver accuracy"
               );
  atexit(FUN_143bf2989);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0x3f000000);
  local_78._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14cb50b40,L"r.GbxWind.SOR.Weight",&local_58,
                L"Determines the amount of over-relaxation that occurs when SOR is enabled. Higher values converge faster, but could be more unstable."
               );
  atexit(FUN_143bf29ce);
  local_58._0_1_ = 1;
  local_78._0_4_ = 0;
  FUN_140bd5914(&DAT_14cb50b58,L"Gbx.Wind.Simulate",&local_58,
                L"Toggle the gpu simulation step of gbx wind. this keeps the uobjects alive so it can be toggled at any time."
               );
  atexit(FUN_143bf2d35);
  local_58 = (undefined *)CONCAT71(local_58._1_7_,1);
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  FUN_140bd5914(&DAT_14cb50b70,L"Gbx.Wind.Active",&local_58,
                L"Setting this to false will unregister the gbx wind instances. You\'d need a reload to re-enable the feature."
               );
  atexit(FUN_143bf2d7a);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bf6ef8 FUN_143bf6ef8 body=194 status=ok
// SIG undefined FUN_143bf6ef8(void)

void FUN_143bf6ef8(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxEditorUtilitiesRuntime",&PTR_FUN_14afabc70,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxEditorUtilitiesRuntime",&PTR_FUN_14afabfe0,1,0);
  local_48 = 0x800000014afac0fe;
  local_34 = 0x19;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_1464a50e6(&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bf6fbc FUN_143bf6fbc body=55 status=ok
// SIG undefined FUN_143bf6fbc(void)

void FUN_143bf6fbc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb51208 == 0) {
    uVar1 = FUN_14107672d();
    DAT_14cb51208 = FUN_14171c317(FUN_1464a5913,uVar1,L"EGbxSplineClutterType");
  }
  return;
}



// FUNCTION 143bf6ff3 FUN_143bf6ff3 body=55 status=ok
// SIG undefined FUN_143bf6ff3(void)

void FUN_143bf6ff3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb51220 == 0) {
    uVar1 = FUN_14107672d();
    DAT_14cb51220 = FUN_14171c317(FUN_1464a56a3,uVar1,L"EGbxSplineClutterAnchorPoint");
  }
  return;
}



// FUNCTION 143bf702a FUN_143bf702a body=55 status=ok
// SIG undefined FUN_143bf702a(void)

void FUN_143bf702a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb51400 == 0) {
    uVar1 = FUN_14107672d();
    DAT_14cb51400 = FUN_14171c317(FUN_1464a610a,uVar1,L"EGbxSplineConfigSource");
  }
  return;
}



// FUNCTION 143bf70e0 FUN_143bf70e0 body=814 status=ok
// SIG undefined FUN_143bf70e0(void)

void FUN_143bf70e0(void)

{
  FUN_14282b410(L"/Script/GbxSpline",&PTR_FUN_14afac2a0,1,0,0,0,0);
  FUN_14282b410(L"/Script/GbxSpline",&PTR_FUN_14afac370,1,0,0,0,0);
  FUN_14282b410(L"/Script/GbxSpline",&PTR_FUN_14afac460,1,0,0,0,0);
  FUN_1446f470e(&DAT_14cb510b8,L"EvaluateRule",1);
  FUN_1446f470e(&DAT_14cb510c8,L"LandscapeAdjustmentHitFilter",1);
  FUN_1446f470e(&DAT_14cb510d8,L"ObjectOverlapFilter",1);
  FUN_1446f470e(&DAT_14cb510e8,L"SelectClutter",1);
  FUN_14282b410(L"/Script/GbxSpline",&PTR_FUN_14afad780,4,0,0,0,0);
  FUN_14282b410(L"/Script/GbxSpline",&PTR_FUN_14afad8b0,1,0,0,0,0);
  FUN_14282b410(L"/Script/GbxSpline",0,0,&PTR_FUN_14afad960,1,0,0);
  FUN_14282b410(L"/Script/GbxSpline",&PTR_FUN_14afaeb90,1,0,0,0,0);
  FUN_14282b410(L"/Script/GbxSpline",&PTR_FUN_14afaeef0,1,0,0,0,0);
  FUN_14282b410(L"/Script/GbxSpline",&PTR_FUN_14afb0320,2,&PTR_FUN_14afb0280,4,&PTR_FUN_14afb0240,2)
  ;
  FUN_14282b410(L"/Script/GbxSpline",&PTR_FUN_14afb0450,1,0,0,0,0);
  FUN_14282b410(L"/Script/GbxSpline",&PTR_FUN_14afb0850,1,0,0,0,0);
  FUN_14282b410(L"/Script/GbxSpline",&PTR_FUN_14afb09d0,1,0,0,0,0);
  FUN_14282b410(L"/Script/GbxSpline",&PTR_FUN_14afb1080,2,0,0,0,0);
  FUN_1446f470e(&DAT_14cb51348,L"GetWidth",1);
  FUN_1446f470e(&DAT_14cb51358,L"IsIntersection",1);
  FUN_14282b410(L"/Script/GbxSpline",&PTR_FUN_14afb1590,1,0,0,0,0);
  FUN_14282b410(L"/Script/GbxSpline",&PTR_FUN_14afb20a0,1,&PTR_FUN_14afb2020,3,0,0);
  FUN_14282b410(L"/Script/GbxSpline",&PTR_FUN_14afb2570,2,0,0,&PTR_FUN_14afb2550,1);
  FUN_14282b410(L"/Script/GbxSpline",&PTR_FUN_14afb29d0,1,&PTR_FUN_14afb29a0,1,0,0);
  return;
}



// FUNCTION 143bf7410 FUN_143bf7410 body=91 status=ok
// SIG undefined FUN_143bf7410(void)

void FUN_143bf7410(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_1 = DAT_14c8464e0;
  param_1[1] = uVar1;
  param_1[5] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[3] = DAT_14c8464e0;
  param_1[4] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[6] = DAT_14c8464e0;
  param_1[7] = uVar1;
  param_1[8] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[9] = DAT_14c8464e0;
  param_1[10] = uVar1;
  param_1[0xb] = DAT_14c8464f0;
  return;
}



// FUNCTION 143bf7494 FUN_143bf7494 body=756 status=ok
// SIG undefined FUN_143bf7494(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143bf7494(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_4c;
  char *local_48;
  undefined4 uStack_40;
  uint uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxSpline",0,0,&PTR_FUN_14afb5fc0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxSpline",&PTR_FUN_14afb6350,1,0);
  FUN_1446f470e(&DAT_14cb51488,L"GetEndControlPoint",1);
  FUN_1446f470e(&DAT_14cb51498,L"GetStartControlPoint",1);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxSpline",&PTR_FUN_14afb6880,1,0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxSpline",&PTR_FUN_14afb6f70,1,0);
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxSpline",0,0,&PTR_FUN_14afb7260);
  local_48 = "SMInstance";
  uStack_40 = 10;
  uStack_3c = uStack_3c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb514f0 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_48,&DAT_14cb514f8);
  if (cVar1 == '\0') {
    _DAT_14cb514f8 = 0;
    uRam000000014cb51500 = 0;
  }
  if (local_48 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_48 = (char *)0x800000014afb7288;
  local_4c = 9;
  uStack_40 = FUN_14577453c();
  uStack_3c._0_1_ = 1;
  FUN_1464a68c2(&local_48);
  local_48 = "GbxSpline";
  uStack_40 = 9;
  uStack_3c._0_1_ = 0;
  uVar2 = FUN_14001a6c0(&local_48,1);
  DAT_14cb51510 = (ulonglong)uVar2;
  local_48 = "GbxSplineMetadata";
  uStack_40 = 0x11;
  uStack_3c._0_1_ = 0;
  uVar2 = FUN_14001a6c0(&local_48,1);
  DAT_14cb51518 = (ulonglong)uVar2;
  local_48 = "GbxSplineConfig";
  uStack_40 = 0xf;
  uStack_3c._0_1_ = 0;
  FUN_14001a6c0(&local_48,1);
  local_48 = "GbxSplineClutterState";
  uStack_40 = 0x15;
  uStack_3c._0_1_ = 0;
  FUN_14001a6c0(&local_48,1);
  local_48 = "SegmentConfig";
  uStack_40 = 0xd;
  uStack_3c._0_1_ = 0;
  FUN_14001a6c0(&local_48,1);
  local_48 = "SegmentClutterState";
  uStack_40 = 0x13;
  uStack_3c = (uint)uStack_3c._1_3_ << 8;
  FUN_14001a6c0(&local_48,1);
  local_48 = (char *)0x977845f1bf9fd3d7;
  uStack_40 = 0x997e307f;
  uStack_3c = 0x8178fe75;
  _DAT_14cb51520 = 0xbf9fd3d7;
  uRam000000014cb51524 = 0x977845f1;
  uRam000000014cb51528 = 0x997e307f;
  uRam000000014cb5152c = 0x8178fe75;
  FUN_141005458(&local_48,2,L"Dev-GbxSpline",0);
  atexit((_func_5014 *)&LAB_143bf746b);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bf7798 FUN_143bf7798 body=1582 status=ok
// SIG undefined FUN_143bf7798(void)

ulonglong FUN_143bf7798(longlong param_1,longlong param_2,int *param_3,longlong *param_4,
                       byte param_5)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  ulonglong *local_f8;
  longlong local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  uint local_94;
  uint local_90;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined2 local_85;
  undefined1 local_83;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar4 = param_3[2];
  iVar8 = param_3[3];
  iVar9 = param_3[1];
  iVar5 = *param_3;
  local_a0 = DAT_14ca83a40;
  uStack_b0 = CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
  uStack_a8 = (undefined *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
  uVar17 = (iVar8 - iVar9) - (int)((ulonglong)DAT_14c967818 >> 0x20);
  local_e8 = (ulonglong)uVar17;
  local_e0 = DAT_14c967818;
  uVar16 = (iVar4 - iVar5) - (int)DAT_14c967818;
  local_d8 = (ulonglong)uVar16;
  local_9c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_86 = 0;
  local_b8 = (undefined8 *)&DAT_00020008;
  local_85 = 0x15;
  local_8c = 0x10001;
  local_88 = 0x101;
  local_98 = 0;
  local_83 = 0xff;
  local_94 = DAT_14ca84e40;
  if ((int)uVar16 < (int)DAT_14ca84e40) {
    local_94 = uVar16;
  }
  if ((int)local_94 < 2) {
    local_94 = 1;
  }
  local_90 = DAT_14ca84e40;
  if ((int)uVar17 < (int)DAT_14ca84e40) {
    local_90 = uVar17;
  }
  if ((int)local_90 < 2) {
    local_90 = 1;
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar18 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar10 = uVar18 + 0x120;
  local_f8 = puVar1;
  local_f0 = param_2;
  if (*(ulonglong *)(param_1 + 0x78) < uVar10) {
    FUN_140023dd8(puVar1,0x128);
    uVar18 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar10 = uVar18 + 0x120;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar10;
  FUN_1456bbb8c(uVar18,L"DLSSBiasCurrentColor",&local_b8,0);
  iVar6 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar6 + 1U) {
    FUN_14472c0f6(param_1 + 0x178,iVar6);
  }
  puVar1 = local_f8;
  *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar6 * 8) = uVar18;
  *(int *)(uVar18 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar11 = puVar13 + 0x22;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_f8,0x120);
    puVar13 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar11 = puVar13 + 0x22;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  *puVar13 = &PTR_FUN_14afb7cc0;
  puVar13[2] = 0;
  puVar13[0x13] = 0;
  iVar6 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar6 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar6);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar6 * 8) = puVar13;
  puVar13[2] = param_4[1];
  local_c8 = *(undefined8 *)param_3;
  uStack_c0 = *(undefined8 *)(param_3 + 2);
  local_d0 = *(undefined8 *)(*param_4 + 0x84);
  FUN_144a2c7c2(&local_b8);
  puVar1 = local_f8;
  ppuVar14 = &local_b8;
  puVar11 = puVar13 + 4;
  for (lVar12 = 0xe; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar11 = *ppuVar14;
    ppuVar14 = ppuVar14 + 1;
    puVar11 = puVar11 + 1;
  }
  *(uint *)(puVar13 + 0x12) = (uint)param_5;
  uVar3 = *(undefined1 *)(uVar18 + 0x94);
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar15 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_f8,0x50);
    puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar15 + 9;
  }
  puVar2 = puVar13 + 2;
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  puVar15[1] = *(undefined8 *)(uVar18 + 8);
  puVar15[2] = 0;
  *(undefined1 *)(puVar15 + 3) = 0;
  *(undefined8 *)((longlong)puVar15 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar15 + 5) = 0;
  *puVar15 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar15 + 6) = uVar3;
  *(undefined1 *)(puVar15 + 7) = 0;
  *(undefined4 *)((longlong)puVar15 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar15 + 0x35) = 0;
  puVar15[8] = uVar18;
  iVar6 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar6 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar6);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar6 * 8) = puVar15;
  *(int *)((longlong)puVar15 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  uStack_c0 = CONCAT44(iVar8 - iVar9,iVar4 - iVar5);
  puVar13[0x13] = puVar15;
  local_d0 = *(undefined8 *)(uVar18 + 0x84);
  local_c8 = local_e0;
  FUN_144a2c7c2(&local_b8);
  ppuVar14 = &local_b8;
  puVar11 = puVar13 + 0x14;
  for (lVar12 = 0xe; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar11 = *ppuVar14;
    ppuVar14 = ppuVar14 + 1;
    puVar11 = puVar11 + 1;
  }
  uVar7 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(local_f0 + 0x3090) * 2) * 8);
  FUN_141574e54();
  FUN_1448e935e(uVar7,&local_b8,&DAT_14cb515a8,0);
  FUN_141574e54();
  puVar11 = local_b8;
  local_f0 = uStack_b0;
  iVar8 = (int)local_e8 + 7;
  iVar4 = (int)local_e8 + 0xe;
  if (-1 < iVar8) {
    iVar4 = iVar8;
  }
  iVar9 = (int)local_d8 + 7;
  iVar8 = (int)local_d8 + 0xe;
  if (-1 < iVar9) {
    iVar8 = iVar9;
  }
  FUN_141574f76();
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  FUN_1448f70da(puVar11,&DAT_14cb518d8,puVar2,&local_b8);
  FUN_140069376(param_1);
  puVar1 = local_f8;
  uVar10 = 2;
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar10 = 4;
  }
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar15 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    local_e8 = CONCAT62(local_e8._2_6_,(short)uVar10);
    FUN_140023dd8(local_f8,0x1f0);
    uVar10 = local_e8 & 0xffff;
    puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar15 + 0x3d;
  }
  *local_f8 = (ulonglong)puVar13;
  uStack_b0 = DAT_14cb51920;
  if (DAT_14cb51920 != 0) {
    LOCK();
    *(int *)(DAT_14cb51920 + 8) = *(int *)(DAT_14cb51920 + 8) + 1;
    UNLOCK();
  }
  uStack_a8 = &DAT_14cb518d8;
  local_108 = 2;
  local_b8 = puVar2;
  FUN_140068f1a(puVar15,&local_d0,&local_b8,uVar10);
  *puVar15 = &PTR_FUN_14afb7cd0;
  puVar15[0x37] = &DAT_14cb518d8;
  puVar15[0x38] = puVar2;
  puVar15[0x39] = puVar11;
  puVar15[0x3a] = local_f0;
  *(int *)(puVar15 + 0x3b) = iVar8 >> 3;
  *(int *)((longlong)puVar15 + 0x1dc) = iVar4 >> 3;
  *(undefined4 *)(puVar15 + 0x3c) = 1;
  iVar4 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar4 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar4 * 8) = puVar15;
  *(int *)((longlong)puVar15 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar15);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18;
}



// FUNCTION 143bf7dc7 FUN_143bf7dc7 body=69 status=ok
// SIG undefined FUN_143bf7dc7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143bf7dc7(void)

{
  _DAT_14cb51670 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143bf7e09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51678,1);
  return;
}



// FUNCTION 143bf7e18 FUN_143bf7e18 body=3487 status=ok
// SIG undefined FUN_143bf7e18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong *
FUN_143bf7e18(ulonglong *param_1,longlong param_2,longlong param_3,undefined8 param_4,int *param_5,
             char param_6)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  char cVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 auStack_238 [32];
  wchar_t *local_218;
  wchar_t *local_210;
  undefined4 local_208;
  undefined4 local_200;
  code *local_1f8;
  code *local_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  int local_1ac;
  ulonglong *local_1a8;
  longlong local_1a0;
  undefined8 *local_198;
  undefined1 local_189;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  char local_15d;
  undefined1 local_15c;
  undefined1 local_15b;
  undefined1 local_15a;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined2 local_12b;
  undefined1 local_129;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined1 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  plVar1 = (longlong *)(param_2 + 0x70);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar20 + 0x4c;
  if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(plVar1,0x270);
    puVar20 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar10 = puVar20 + 0x4c;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar10;
  *puVar20 = &PTR_FUN_14afb7da0;
  puVar10 = puVar20 + 2;
  local_1a8 = (ulonglong *)plVar1;
  FUN_1485f2126(puVar10);
  iVar17 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar17 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar17 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar17);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar17 * 8) = puVar20;
  FUN_1472e1877(&local_158,param_2,param_3,0x1fff);
  *(undefined4 *)(puVar20 + 4) = local_148;
  *(undefined4 *)((longlong)puVar20 + 0x24) = uStack_144;
  *(undefined4 *)(puVar20 + 5) = uStack_140;
  *(undefined4 *)((longlong)puVar20 + 0x2c) = uStack_13c;
  *(undefined4 *)puVar10 = local_158;
  *(undefined4 *)((longlong)puVar20 + 0x14) = uStack_154;
  *(undefined4 *)(puVar20 + 3) = uStack_150;
  *(undefined4 *)((longlong)puVar20 + 0x1c) = uStack_14c;
  local_198 = puVar10;
  lVar11 = FUN_1447e4f80();
  puVar7 = local_1a8;
  cVar13 = '\x02';
  if (*(char *)(lVar11 + 0x41) != '\x03') {
    cVar13 = *(char *)(lVar11 + 0x41);
  }
  puVar20[6] = *(undefined8 *)(param_3 + 0x18);
  *(char *)(puVar20 + 7) = cVar13;
  puVar20[8] = *(undefined8 *)(DAT_14ca63b68 + 8);
  puVar20[9] = DAT_14c9c0de0;
  iVar14 = param_5[3] - param_5[1];
  iVar17 = param_5[2] - *param_5;
  if (param_6 != '\0') {
    local_118 = CONCAT44(local_118._4_4_,DAT_14ca85098);
    local_128 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
    uStack_120 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
    uVar16 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_d8 = CONCAT26(local_d8._6_2_,0xff001a000000);
    local_108 = 9;
    local_d8 = CONCAT62(local_d8._2_6_,0x101);
    uStack_100 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
    uStack_f8 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
    local_f0 = DAT_14ca85098;
    iStack_e4 = DAT_14ca84e40;
    if (iVar17 < DAT_14ca84e40) {
      iStack_e4 = iVar17;
    }
    if (iStack_e4 < 2) {
      iStack_e4 = 1;
    }
    uStack_e8 = 0;
    iVar5 = DAT_14ca84e40;
    if (iVar14 < DAT_14ca84e40) {
      iVar5 = iVar14;
    }
    if (iVar5 < 2) {
      iVar5 = 1;
    }
    local_e0 = CONCAT44(0x10001,iVar5);
    uVar15 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar12 = uVar15 + 0x120;
    local_1ac = iVar17;
    uStack_ec = uVar16;
    if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
      FUN_140023dd8(local_1a8,0x128);
      uVar15 = *puVar7 + 7 & 0xfffffffffffffff8;
      uVar12 = uVar15 + 0x120;
    }
    local_1a0 = param_2 + 0x178;
    *(ulonglong *)(param_2 + 0x70) = uVar12;
    FUN_1456bbb8c(uVar15,L"DLSSDiffuseAlbedo",&local_108,0);
    iVar17 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar17 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar17 + 1U) {
      FUN_14472c0f6(local_1a0,iVar17);
    }
    puVar7 = local_1a8;
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar17 * 8) = uVar15;
    *(int *)(uVar15 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    local_d8 = CONCAT26(local_d8._6_2_,0xff001a000000);
    local_108 = 9;
    local_d8 = CONCAT62(local_d8._2_6_,0x101);
    uStack_100 = local_128;
    uStack_f8 = uStack_120;
    local_f0 = (undefined4)local_118;
    uStack_e8 = 0;
    iStack_e4 = DAT_14ca84e40;
    if (local_1ac < DAT_14ca84e40) {
      iStack_e4 = local_1ac;
    }
    if (iStack_e4 < 2) {
      iStack_e4 = 1;
    }
    iVar17 = DAT_14ca84e40;
    if (iVar14 < DAT_14ca84e40) {
      iVar17 = iVar14;
    }
    *param_1 = uVar15;
    if (iVar17 < 2) {
      iVar17 = 1;
    }
    local_e0 = CONCAT44(0x10001,iVar17);
    uVar18 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar12 = uVar18 + 0x120;
    uStack_ec = uVar16;
    if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
      FUN_140023dd8(local_1a8,0x128);
      uVar18 = *puVar7 + 7 & 0xfffffffffffffff8;
      uVar12 = uVar18 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar12;
    FUN_1456bbb8c(uVar18,L"DLSSSpecularAlbedo",&local_108,0);
    iVar17 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar17 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar17 + 1U) {
      FUN_14472c0f6(local_1a0,iVar17);
    }
    puVar7 = local_1a8;
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar17 * 8) = uVar18;
    *(int *)(uVar18 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    param_1[1] = uVar18;
    puVar20[0x2c] = uVar15;
    puVar20[0x2d] = 0;
    *(undefined4 *)(puVar20 + 0x2e) = 0xffff0000;
    puVar20[0x2f] = uVar18;
    puVar20[0x30] = 0;
    *(undefined4 *)(puVar20 + 0x31) = 0xffff0000;
    local_f0 = DAT_14ca85098;
    uStack_100 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
    uStack_f8 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
    uStack_ec = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_108 = 9;
    uStack_e8 = 0;
    iStack_e4 = DAT_14ca84e40;
    if (local_1ac < DAT_14ca84e40) {
      iStack_e4 = local_1ac;
    }
    if (iStack_e4 < 2) {
      iStack_e4 = 1;
    }
    local_d8 = CONCAT26(local_d8._6_2_,0xff000a000101);
    iVar17 = DAT_14ca84e40;
    if (iVar14 < DAT_14ca84e40) {
      iVar17 = iVar14;
    }
    if (iVar17 < 2) {
      iVar17 = 1;
    }
    local_e0 = CONCAT44(0x10001,iVar17);
    uVar15 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar12 = uVar15 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
      FUN_140023dd8(local_1a8,0x128);
      uVar15 = *puVar7 + 7 & 0xfffffffffffffff8;
      uVar12 = uVar15 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar12;
    FUN_1456bbb8c(uVar15,L"DLSSNormal",&local_108,0);
    iVar17 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar17 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar17 + 1U) {
      FUN_14472c0f6(local_1a0,iVar17);
    }
    puVar7 = local_1a8;
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar17 * 8) = uVar15;
    *(int *)(uVar15 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    param_1[2] = uVar15;
    puVar20[0x32] = uVar15;
    puVar20[0x33] = 0;
    *(undefined4 *)(puVar20 + 0x34) = 0xffff0000;
    local_f0 = DAT_14ca85098;
    uStack_100 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
    uStack_f8 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
    uStack_ec = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_108 = 9;
    uStack_e8 = 0;
    iStack_e4 = DAT_14ca84e40;
    if (local_1ac < DAT_14ca84e40) {
      iStack_e4 = local_1ac;
    }
    if (iStack_e4 < 2) {
      iStack_e4 = 1;
    }
    local_d8 = CONCAT26(local_d8._6_2_,0xff000d000101);
    iVar17 = DAT_14ca84e40;
    if (iVar14 < DAT_14ca84e40) {
      iVar17 = iVar14;
    }
    if (iVar17 < 2) {
      iVar17 = 1;
    }
    local_e0 = CONCAT44(0x10001,iVar17);
    uVar15 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar12 = uVar15 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
      FUN_140023dd8(local_1a8,0x128);
      uVar15 = *puVar7 + 7 & 0xfffffffffffffff8;
      uVar12 = uVar15 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar12;
    FUN_1456bbb8c(uVar15,L"DLSSRoughness",&local_108,0);
    iVar17 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar17 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar17 + 1U) {
      FUN_14472c0f6(local_1a0,iVar17);
    }
    puVar7 = local_1a8;
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar17 * 8) = uVar15;
    *(int *)(uVar15 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    param_1[3] = uVar15;
    puVar20[0x35] = uVar15;
    puVar20[0x36] = 0;
    *(undefined4 *)(puVar20 + 0x37) = 0xffff0000;
    local_f0 = DAT_14ca85098;
    uStack_100 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
    uStack_f8 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
    uStack_ec = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_108 = 9;
    uStack_e8 = 0;
    iStack_e4 = DAT_14ca84e40;
    if (local_1ac < DAT_14ca84e40) {
      iStack_e4 = local_1ac;
    }
    if (iStack_e4 < 2) {
      iStack_e4 = 1;
    }
    local_d8 = CONCAT26(local_d8._6_2_,0xff000d000101);
    iVar17 = DAT_14ca84e40;
    if (iVar14 < DAT_14ca84e40) {
      iVar17 = iVar14;
    }
    if (iVar17 < 2) {
      iVar17 = 1;
    }
    local_e0 = CONCAT44(0x10001,iVar17);
    uVar15 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar12 = uVar15 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
      FUN_140023dd8(local_1a8,0x128);
      uVar15 = *puVar7 + 7 & 0xfffffffffffffff8;
      uVar12 = uVar15 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar12;
    FUN_1456bbb8c(uVar15,L"DLSSDepth",&local_108,0);
    iVar17 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar17 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar17 + 1U) {
      FUN_14472c0f6(local_1a0,iVar17);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar17 * 8) = uVar15;
    *(int *)(uVar15 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    param_1[4] = uVar15;
    puVar20[0x38] = uVar15;
    puVar20[0x39] = 0;
    *(undefined4 *)(puVar20 + 0x3a) = 0xffff0000;
    iVar17 = local_1ac;
  }
  local_15d = param_6;
  local_15b = 0;
  local_15c = *(undefined1 *)(DAT_14cb51680 + 1);
  local_15a = 0;
  local_1a8 = param_1;
  FUN_1485f1a14(&local_170,
                *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2) *
                 8));
  uStack_120 = *(undefined8 *)param_5;
  local_128 = *(undefined8 *)(param_5 + 2);
  local_188 = CONCAT44(iVar14,iVar17);
  local_180 = DAT_14c967818;
  uStack_178 = local_188;
  local_118 = local_128;
  FUN_144a2c7c2(&local_108);
  puVar10 = &local_108;
  puVar19 = puVar20 + 10;
  for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar19 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar19 = puVar19 + 1;
  }
  FUN_144a2c7c2(&local_108,&local_188);
  puVar10 = &local_108;
  puVar20 = puVar20 + 0x18;
  for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar20 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar20 = puVar20 + 1;
  }
  iVar17 = *(int *)(param_3 + 0x3090);
  local_1ac = *(undefined4 *)(param_3 + 0x1dd4);
  uVar3 = *(undefined4 *)(param_3 + 0x3094);
  uVar2 = (&DAT_00001de6)[param_3];
  uVar4 = *(undefined8 *)
           (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar17 * 2) * 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4b780) {
    FUN_144b3d300(&DAT_14ca4b780);
    if (DAT_14ca4b780 == -1) {
      FUN_145e1a792();
      local_1d0 = &LAB_14712ac08;
      local_1d8 = &LAB_14712ac0c;
      local_1e0 = &LAB_1472e3912;
      local_1e8 = &LAB_1472e3916;
      local_1f0 = FUN_1472e391a;
      local_1f8 = FUN_1472e3942;
      local_210 = L"ScreenPassVS";
      local_218 = L"/Engine/Private/ScreenPass.usf";
      local_1c0 = 0;
      local_1c8 = 0xe0;
      local_200 = 1;
      local_208 = 0;
      FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
      _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430179ee);
      _Init_thread_footer(&DAT_14ca4b780);
    }
  }
  FUN_1448e935e(uVar4,&local_108,&DAT_14ca4b6d8,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4b780) {
    FUN_144b3d300(&DAT_14ca4b780);
    if (DAT_14ca4b780 == -1) {
      FUN_145e1a792();
      local_1d0 = &LAB_14712ac08;
      local_1d8 = &LAB_14712ac0c;
      local_1e0 = &LAB_1472e3912;
      local_1e8 = &LAB_1472e3916;
      local_1f0 = FUN_1472e391a;
      local_1f8 = FUN_1472e3942;
      local_210 = L"ScreenPassVS";
      local_218 = L"/Engine/Private/ScreenPass.usf";
      local_1c0 = 0;
      local_1c8 = 0xe0;
      local_200 = 1;
      local_208 = 0;
      FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
      _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430179ee);
      _Init_thread_footer(&DAT_14ca4b780);
    }
  }
  uVar9 = uStack_100;
  uVar8 = local_108;
  uVar6 = DAT_14c9c0d98;
  uVar4 = DAT_14c9c0d50;
  FUN_145f5da0c();
  puVar10 = local_198;
  local_108 = 0;
  uStack_100 = 0;
  FUN_1448f70da(CONCAT44(uStack_16c,local_170),&DAT_14cb51960,local_198,&local_108);
  local_108 = CONCAT44(local_1ac,iVar17);
  uStack_100 = CONCAT17(local_129,CONCAT25(local_12b,CONCAT14(uVar2,uVar3)));
  uStack_f8 = local_188;
  local_f0 = (undefined4)local_180;
  uStack_ec = local_180._4_4_;
  uStack_e8 = (undefined4)uStack_178;
  iStack_e4 = uStack_178._4_4_;
  local_e0 = local_128;
  local_d8 = uStack_120;
  local_d0 = local_118;
  local_c8 = uVar8;
  uStack_c0 = uVar9;
  local_a8 = uVar4;
  local_a0 = uVar6;
  local_98 = DAT_14ca94df8;
  local_90 = 0;
  local_88 = local_170;
  uStack_84 = uStack_16c;
  uStack_80 = uStack_168;
  uStack_7c = uStack_164;
  local_78 = puVar10;
  local_70 = 0;
  FUN_145f5da0c();
  FUN_1485f21e2(param_2,&local_189,puVar10,&local_108);
  if ((local_60 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return local_1a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bf8bc4 FUN_143bf8bc4 body=1751 status=ok
// SIG undefined FUN_143bf8bc4(void)

ulonglong FUN_143bf8bc4(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                       longlong param_5,int *param_6,int *param_7,undefined8 param_8,byte param_9)

{
  ulonglong *puVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  char cVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 **ppuVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  ulonglong *local_100;
  undefined8 *local_f8;
  longlong local_f0;
  ulonglong local_e8;
  int local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  uint local_94;
  uint local_90;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined2 local_85;
  undefined1 local_83;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  piVar7 = param_6;
  if (param_9 != 0) {
    piVar7 = param_7;
  }
  iVar3 = piVar7[3];
  iVar4 = piVar7[1];
  local_dc = piVar7[2] - *piVar7;
  local_a0 = DAT_14ca83a40;
  uStack_b0 = CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
  uStack_a8 = (undefined *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
  uVar12 = (iVar3 - iVar4) - (int)((ulonglong)DAT_14c967818 >> 0x20);
  local_d8 = DAT_14c967818;
  uVar15 = local_dc - (int)DAT_14c967818;
  local_e8 = (ulonglong)uVar15;
  local_9c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_86 = 0;
  local_b8 = (undefined8 *)&DAT_00020008;
  local_85 = 0xf;
  local_8c = 0x10001;
  local_88 = 0x101;
  local_98 = 0;
  local_83 = 0xff;
  local_94 = DAT_14ca84e40;
  if ((int)uVar15 < (int)DAT_14ca84e40) {
    local_94 = uVar15;
  }
  if ((int)local_94 < 2) {
    local_94 = 1;
  }
  local_90 = DAT_14ca84e40;
  if ((int)uVar12 < (int)DAT_14ca84e40) {
    local_90 = uVar12;
  }
  if ((int)local_90 < 2) {
    local_90 = 1;
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar18 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar8 = uVar18 + 0x120;
  local_100 = puVar1;
  local_f8 = (undefined8 *)param_3;
  local_f0 = param_2;
  if (*(ulonglong *)(param_1 + 0x78) < uVar8) {
    FUN_140023dd8(puVar1,0x128);
    uVar18 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar8 = uVar18 + 0x120;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar8;
  FUN_1456bbb8c(uVar18,L"DLSSCombinedVelocity",&local_b8,0);
  iVar6 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar6 + 1U) {
    FUN_14472c0f6(param_1 + 0x178,iVar6);
  }
  puVar1 = local_100;
  *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar6 * 8) = uVar18;
  *(int *)(uVar18 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar16 + 0x2a;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(local_100,0x160);
    puVar16 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar9 = puVar16 + 0x2a;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar9;
  *puVar16 = &PTR_FUN_14afb7dc8;
  puVar16[0x16] = 0;
  puVar16[2] = 0;
  puVar16[3] = 0;
  puVar16[0x12] = 0;
  puVar16[0x13] = 0;
  *(undefined1 *)(puVar16 + 0x17) = 1;
  puVar16[0x18] = 0;
  puVar16[0x28] = 0;
  iVar6 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar6 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar6);
  }
  puVar9 = local_f8;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar6 * 8) = puVar16;
  puVar16[2] = param_4;
  puVar16[3] = DAT_14c9c0d80;
  local_c8 = *(undefined8 *)param_6;
  uStack_c0 = *(undefined8 *)(param_6 + 2);
  local_d0 = *(undefined8 *)((longlong)local_f8 + 0x84);
  FUN_144a2c7c2(&local_b8);
  puVar1 = local_100;
  ppuVar13 = &local_b8;
  puVar14 = puVar16 + 4;
  for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar14 = *ppuVar13;
    ppuVar13 = ppuVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  puVar16[0x12] = puVar9;
  puVar16[0x13] = DAT_14c9c0d80;
  puVar16[0x28] = param_5;
  uVar2 = *(undefined1 *)(uVar18 + 0x94);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar14 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(local_100,0x50);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar14 + 9;
  }
  local_f8 = puVar16 + 2;
  *(undefined8 **)(param_1 + 0x70) = puVar9;
  puVar14[1] = *(undefined8 *)(uVar18 + 8);
  puVar14[2] = 0;
  *(undefined1 *)(puVar14 + 3) = 0;
  *(undefined8 *)((longlong)puVar14 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar14 + 5) = 0;
  *puVar14 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar14 + 6) = uVar2;
  *(undefined1 *)(puVar14 + 7) = 0;
  *(undefined4 *)((longlong)puVar14 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar14 + 0x35) = 0;
  puVar14[8] = uVar18;
  iVar6 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar6 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar6);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar6 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  uStack_c0 = CONCAT44(iVar3 - iVar4,local_dc);
  puVar16[0x18] = puVar14;
  local_d0 = *(undefined8 *)(uVar18 + 0x84);
  local_c8 = local_d8;
  FUN_144a2c7c2(&local_b8);
  ppuVar13 = &local_b8;
  puVar9 = puVar16 + 0x1a;
  for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar9 = *ppuVar13;
    ppuVar13 = ppuVar13 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar16[0x14] = param_8;
  lVar11 = FUN_1447e4f80();
  cVar10 = '\x02';
  if (*(char *)(lVar11 + 0x41) != '\x03') {
    cVar10 = *(char *)(lVar11 + 0x41);
  }
  puVar16[0x16] = *(undefined8 *)(local_f0 + 0x18);
  *(char *)(puVar16 + 0x17) = cVar10;
  uVar5 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(local_f0 + 0x3090) * 2) * 8);
  FUN_14159e93e();
  FUN_1448e935e(uVar5,&local_b8,&DAT_14cb51818,(uint)param_9 + (uint)(param_5 != 0) * 2);
  FUN_14159e93e();
  puVar9 = local_b8;
  local_f0 = uStack_b0;
  iVar3 = uVar12 + 0xe;
  if (-1 < (int)(uVar12 + 7)) {
    iVar3 = uVar12 + 7;
  }
  iVar6 = (int)local_e8 + 7;
  iVar4 = (int)local_e8 + 0xe;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  FUN_14159ea60();
  puVar16 = local_f8;
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  FUN_1448f70da(puVar9,&DAT_14cb519e8,local_f8,&local_b8);
  FUN_140069376(param_1);
  puVar1 = local_100;
  uVar8 = 2;
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar8 = 4;
  }
  puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar14 = puVar17 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
    local_e8 = CONCAT62(local_e8._2_6_,(short)uVar8);
    FUN_140023dd8(local_100,0x1f0);
    uVar8 = local_e8 & 0xffff;
    puVar17 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar17 + 0x3d;
  }
  *local_100 = (ulonglong)puVar14;
  local_b8 = puVar16;
  uStack_b0 = DAT_14cb51a30;
  if (DAT_14cb51a30 != 0) {
    LOCK();
    *(int *)(DAT_14cb51a30 + 8) = *(int *)(DAT_14cb51a30 + 8) + 1;
    UNLOCK();
  }
  uStack_a8 = &DAT_14cb519e8;
  local_108 = 2;
  FUN_140068f1a(puVar17,&local_d0,&local_b8,uVar8);
  *puVar17 = &PTR_FUN_14afb7dd0;
  puVar17[0x37] = &DAT_14cb519e8;
  puVar17[0x38] = puVar16;
  puVar17[0x39] = puVar9;
  puVar17[0x3a] = local_f0;
  *(int *)(puVar17 + 0x3b) = iVar4 >> 3;
  *(int *)((longlong)puVar17 + 0x1dc) = iVar3 >> 3;
  *(undefined4 *)(puVar17 + 0x3c) = 1;
  iVar3 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 8) = puVar17;
  *(int *)((longlong)puVar17 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar17);
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bf92c0 FUN_143bf92c0 body=36 status=ok
// SIG undefined FUN_143bf92c0(void)

undefined8 FUN_143bf92c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 143bf92e4 FUN_143bf92e4 body=1324 status=ok
// SIG undefined FUN_143bf92e4(void)

void FUN_143bf92e4(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bf9812 FUN_143bf9812 body=518 status=ok
// SIG undefined FUN_143bf9812(void)

void FUN_143bf9812(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *_Src;
  ulonglong **_Src_00;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0;
  longlong **local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong *local_c0;
  longlong **local_b8;
  longlong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = (int)local_b0;
  if ((longlong)(int)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    _Src_00 = (ulonglong **)local_b8;
    if ((ulonglong **)local_b8 == (ulonglong **)0x0) {
      _Src_00 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,(int)local_b0,0);
    puVar1 = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 2;
    }
    memcpy(puVar1,_Src_00,(longlong)(int)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if ((ulonglong **)local_b8 != (ulonglong **)0x0) {
    FUN_1400020a8();
  }
  local_b8 = (longlong **)(param_1 + 0x238);
  local_b0 = param_1 + 0x248;
  local_f0 = *(undefined1 *)(param_1 + 0x250);
  local_f8 = param_1 + 0x1f8;
  local_d8 = *(undefined4 *)(param_1 + 0x1b8);
  uStack_d4 = *(undefined4 *)(param_1 + 0x1bc);
  uStack_d0 = *(undefined4 *)(param_1 + 0x1c0);
  uStack_cc = *(undefined4 *)(param_1 + 0x1c4);
  local_e8 = (longlong **)&local_c0;
  local_c0 = param_2;
  FUN_1485f23c9(param_2,&local_d8,param_1 + 0x1c8,param_1 + 0x1e0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bf9a1a FUN_143bf9a1a body=123 status=ok
// SIG undefined FUN_143bf9a1a(void)

void FUN_143bf9a1a(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar1 = *(undefined8 *)param_1[2];
  lVar5 = *(longlong *)param_1[1];
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(((longlong *)param_1[1])[1] + 8);
    lVar6 = (longlong)*(int *)(lVar5 + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + lVar6 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar2,lVar6,1);
    }
  }
  uVar3 = *param_1;
  puVar4 = (undefined8 *)param_1[1];
  FUN_145f5da0c();
  FUN_1449cc26b(uVar3,lVar5,*puVar4,&DAT_14cb51960,uVar1);
  return;
}



// FUNCTION 143bf9a96 FUN_143bf9a96 body=36 status=ok
// SIG undefined FUN_143bf9a96(void)

undefined8 FUN_143bf9a96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 143bf9aba FUN_143bf9aba body=1324 status=ok
// SIG undefined FUN_143bf9aba(void)

void FUN_143bf9aba(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bf9fe7 FUN_143bf9fe7 body=333 status=ok
// SIG undefined FUN_143bf9fe7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143bf9fe7(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400b22c2(&local_38,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_38,&DAT_14cb51530);
  if (cVar1 == '\0') {
    _DAT_14cb51530 = 0;
    uRam000000014cb51538 = 0;
  }
  if (local_38 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_30 = FUN_141574e54;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb51658,&local_38);
  local_38 = (undefined *)0x800000014afb77d8;
  local_24 = 0xb;
  uVar2 = FUN_14577453c();
  local_30._0_5_ = CONCAT14(1,uVar2);
  FUN_1464a6b9a(&local_38);
  local_38 = (undefined *)CONCAT71(local_38._1_7_,1);
  local_48 = 0x20;
  FUN_140bd5914(&DAT_14cb51670,L"r.NGX.DLSS.DisableSubsurfaceCheckerboard",&local_38,
                L"Skip checkerboard decoding for GBuffer Resolve Pass\n");
  atexit(FUN_143bf7dc7);
  local_30 = FUN_145f5d79e;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb517a0,&local_38);
  local_30 = FUN_14159e93e;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb518c8,&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bfa149 FUN_143bfa149 body=69 status=ok
// SIG undefined FUN_143bfa149(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143bfa149(void)

{
  _DAT_14cb51b10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143bfa18b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51b18,1);
  return;
}



// FUNCTION 143bfa18e FUN_143bfa18e body=69 status=ok
// SIG undefined FUN_143bfa18e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143bfa18e(void)

{
  _DAT_14cb51b28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143bfa1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51b30,1);
  return;
}



// FUNCTION 143bfa1d3 FUN_143bfa1d3 body=69 status=ok
// SIG undefined FUN_143bfa1d3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143bfa1d3(void)

{
  _DAT_14cb51b40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143bfa215. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb51b48,1);
  return;
}



// FUNCTION 143bfa218 FUN_143bfa218 body=709 status=ok
// SIG undefined FUN_143bfa218(void)

void FUN_143bfa218(char *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  size_t sVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  longlong local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_40 = 0;
  if (param_1 == (char *)0x0) {
    local_38 = 0;
    local_30 = 0;
  }
  else {
    sVar7 = strlen(param_1);
    FUN_1446e6fe8(&local_140,param_1,sVar7 & 0xffffffff,1);
  }
  FUN_140056680(&local_160,local_38);
  FUN_140ded26a(&local_160);
  local_150 = local_160;
  uStack_148 = uStack_158;
  local_160 = 0;
  uStack_158 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_170 = 0xffffffff;
  local_178 = 0;
  iVar4 = FUN_1447ee042(&local_150,L" doesn\'t exist in any of the search paths",0x29,1);
  if (iVar4 == -1) {
LAB_143bfa323:
    local_170 = 0xffffffff;
    local_178 = 0;
    iVar4 = FUN_1447ee042(&local_150,L"warning: UWP compliant mode enabled",0x23,1);
    bVar9 = iVar4 == -1;
  }
  else {
    local_170 = 0xffffffff;
    local_178 = 0;
    iVar4 = FUN_1447ee042(&local_150,L"nvngx_dlss.dll",0xe,1);
    if (iVar4 != -1) goto LAB_143bfa323;
    bVar9 = false;
  }
  lVar2 = DAT_14cb51b50;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar4 = *(int *)(lVar1 + 0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar8 = 0;
  }
  else if (iVar4 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar8 = (ulonglong)(DVar5 != DVar6);
  }
  else {
    uVar8 = 1;
  }
  lVar3 = DAT_14cb51b50;
  if (*(int *)(lVar2 + uVar8 * 4) != 2) {
    iVar4 = *(int *)(lVar1 + 0xc60);
    if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
      uVar8 = 0;
    }
    else if (iVar4 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    if (!(bool)(~bVar9 & *(int *)(lVar3 + uVar8 * 4) == 1)) goto LAB_143bfa47d;
  }
  local_178 = 1;
  FUN_140807d8e(&local_150,&local_140,L"error:",L"e_rror:");
  if (local_150 != 0) {
    FUN_1400020a8();
  }
  local_150 = CONCAT44(uStack_13c,local_140);
  local_178 = 1;
  FUN_140807d8e(&local_150,&local_140,L"Warning:",L"w_arning:");
  if (local_150 != 0) {
    FUN_1400020a8();
  }
  local_150 = CONCAT44(uStack_13c,local_140);
  uStack_148 = CONCAT44(uStack_134,uStack_138);
LAB_143bfa47d:
  if (local_150 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bfa4de FUN_143bfa4de body=5202 status=ok
// SIG undefined FUN_143bfa4de(void)

undefined8 * FUN_143bfa4de(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  wchar_t wVar3;
  void *pvVar4;
  undefined8 ***_Src;
  void *_Src_00;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 uVar10;
  undefined8 ****ppppuVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  size_t sVar15;
  int iVar16;
  uint uVar17;
  undefined2 *puVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  wchar_t *pwVar22;
  undefined8 *puVar23;
  undefined8 *****pppppuVar24;
  ulonglong uVar25;
  wchar_t *pwVar26;
  wchar_t *pwVar27;
  longlong lVar28;
  bool bVar29;
  undefined1 auStack_248 [40];
  undefined8 *local_220;
  undefined8 *local_218;
  longlong *local_210;
  longlong *local_208;
  undefined8 ****local_200;
  undefined8 ****local_1f8;
  undefined8 ****local_1f0;
  undefined4 local_1e8;
  undefined8 ****local_1e0;
  void *local_1d8;
  int local_1d0;
  undefined8 ***local_1c8;
  uint local_1c0;
  undefined8 ***local_1b8;
  uint local_1b0;
  undefined4 local_1ac;
  void *local_1a8;
  uint local_1a0;
  void *local_198;
  uint local_190;
  uint local_184;
  undefined8 ****local_180;
  int local_178;
  undefined4 local_174;
  undefined8 ****local_100;
  undefined8 ****local_f8;
  uint local_f0;
  undefined8 ****local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  int local_d0;
  undefined4 local_cc;
  void *local_c8;
  uint local_c0;
  undefined4 local_bc;
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined8 ****local_68;
  undefined8 ****local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  *param_1 = &PTR_LAB_14afb8430;
  param_1[1] = param_2[2];
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0x1d6;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x1d6;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  param_1[7] = 0x1d6;
  param_1[8] = 0xbad00000bad00000;
  *(undefined4 *)(param_1 + 9) = 0xbad00000;
  *(undefined4 *)(param_1 + 10) = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x105) = 0;
  local_e8 = (undefined8 ****)*param_2;
  iVar7 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar7 = 0;
  }
  local_d8 = L"Binaries/ThirdParty";
  local_d0 = 0x13;
  local_c8 = DAT_14cb51b00;
  local_c0 = DAT_14cb51b08 + -1;
  if (DAT_14cb51b08 == 0) {
    local_c0 = 0;
  }
  local_e0._0_4_ = iVar7;
  FUN_140bee87a(&local_198,&local_e8,3);
  local_e8 = (undefined8 ****)*param_2;
  iVar7 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar7 = 0;
  }
  local_e0 = CONCAT44(local_e0._4_4_,iVar7);
  local_d8 = L"Binaries/ThirdParty";
  local_d0 = 0x13;
  local_c8 = DAT_14cb51b00;
  local_c0 = DAT_14cb51b08 + -1;
  if (DAT_14cb51b08 == 0) {
    local_c0 = 0;
  }
  local_b8 = L"/Development/";
  local_b0 = 0xd;
  FUN_140bee87a(&local_1a8,&local_e8,4);
  pvVar4 = local_198;
  local_1b8 = (undefined8 ****)0x0;
  lVar20 = (longlong)(int)local_190;
  local_1b0 = local_190;
  if (lVar20 == 0) {
    local_1ac = 0;
  }
  else {
    FUN_1446dd670(&local_1b8,local_190,0);
    memcpy(local_1b8,pvVar4,lVar20 * 2);
  }
  uVar10 = FUN_140d6afb0();
  FUN_140056680(&local_180,uVar10);
  iVar7 = local_178 + -1;
  if (local_178 == 0) {
    iVar7 = 0;
  }
  local_e8 = local_180;
  local_e0 = CONCAT44(local_e0._4_4_,iVar7);
  local_d8 = L"Binaries/ThirdParty/NVIDIA/NGX";
  local_d0 = 0x1e;
  local_c8 = DAT_14cb51b00;
  local_c0 = DAT_14cb51b08 + -1;
  if (DAT_14cb51b08 == 0) {
    local_c0 = 0;
  }
  FUN_140bee87a(&local_1c8,&local_e8,3);
  if ((undefined8 *****)local_180 != (undefined8 *****)0x0) {
    FUN_1400020a8();
  }
  uVar10 = FUN_14598c0e0();
  FUN_140056680(&local_180,uVar10);
  local_e8 = local_180;
  iVar7 = local_178 + -1;
  if (local_178 == 0) {
    iVar7 = 0;
  }
  local_e0 = CONCAT44(local_e0._4_4_,iVar7);
  local_d8 = L"Binaries/ThirdParty/NVIDIA/NGX";
  local_d0 = 0x1e;
  local_c8 = DAT_14cb51b00;
  local_c0 = DAT_14cb51b08 - 1;
  if (DAT_14cb51b08 == 0) {
    local_c0 = 0;
  }
  FUN_140bee87a(&local_1d8,&local_e8,3);
  if ((undefined8 *****)local_180 != (undefined8 *****)0x0) {
    FUN_1400020a8();
  }
  _Src_00 = local_198;
  pvVar4 = local_1a8;
  _Src = local_1c8;
  plVar13 = param_1 + 0x19;
  iVar7 = *(int *)(param_2 + 3);
  local_220 = param_2;
  if (iVar7 == 1) {
    local_e8 = (undefined8 ****)0x0;
    local_e0 = CONCAT44(local_e0._4_4_,local_190);
    if ((longlong)(int)local_190 == 0) {
      local_e0 = (ulonglong)local_190;
    }
    else {
      FUN_1446dd670(&local_e8,local_190,0);
      memcpy(local_e8,_Src_00,(longlong)(int)local_190 * 2);
    }
    iVar7 = *(int *)(param_1 + 0x1a);
    *(int *)(param_1 + 0x1a) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xd4) == iVar7) {
      FUN_1447a1bd6(plVar13,iVar7);
    }
    FUN_140b8566a((longlong)iVar7 * 0x10 + *plVar13,&local_e8,1);
    if (local_e8 != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
  }
  else if (iVar7 == 2) {
    local_e8 = (undefined8 ****)0x0;
    lVar20 = (longlong)(int)local_1c0;
    local_e0 = CONCAT44(local_e0._4_4_,local_1c0);
    if (lVar20 == 0) {
      local_e0 = (ulonglong)local_1c0;
    }
    else {
      FUN_1446dd670(&local_e8,local_1c0,0);
      memcpy(local_e8,_Src,lVar20 * 2);
    }
    pvVar4 = local_1d8;
    local_d8 = (wchar_t *)0x0;
    local_d0 = local_1d0;
    if ((longlong)local_1d0 == 0) {
      local_cc = 0;
    }
    else {
      FUN_1446dd670(&local_d8,local_1d0,0);
      memcpy(local_d8,pvVar4,(longlong)local_1d0 * 2);
    }
    iVar7 = *(int *)(param_1 + 0x1a);
    *(int *)(param_1 + 0x1a) = iVar7 + 2;
    if ((uint)(*(int *)((longlong)param_1 + 0xd4) - iVar7) < 2) {
      FUN_1447a1bd6(plVar13,iVar7);
    }
    FUN_140b8566a((longlong)iVar7 * 0x10 + *plVar13,&local_e8,2);
    lVar20 = 0x20;
    do {
      if (*(longlong *)((longlong)&local_f8 + lVar20) != 0) {
        FUN_1400020a8();
      }
      lVar20 = lVar20 + -0x10;
    } while (lVar20 != 0);
  }
  else if (iVar7 == 3) {
    local_e8 = (undefined8 ****)0x0;
    lVar20 = (longlong)(int)local_1a0;
    local_e0 = CONCAT44(local_e0._4_4_,local_1a0);
    if (lVar20 == 0) {
      local_e0 = (ulonglong)local_1a0;
    }
    else {
      FUN_1446dd670(&local_e8,local_1a0,0);
      memcpy(local_e8,pvVar4,lVar20 * 2);
    }
    iVar7 = *(int *)(param_1 + 0x1a);
    *(int *)(param_1 + 0x1a) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xd4) == iVar7) {
      FUN_1447a1bd6(plVar13,iVar7);
    }
    FUN_140b8566a((longlong)iVar7 * 0x10 + *plVar13,&local_e8,1);
    if (local_e8 != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
    iVar7 = local_1a0 - 1;
    if (local_1a0 == 0) {
      iVar7 = 0;
    }
    FUN_1402980a2(&local_1b8,local_1a8,iVar7);
  }
  else {
    local_e8 = (undefined8 ****)0x0;
    lVar20 = (longlong)(int)local_1c0;
    local_e0 = CONCAT44(local_e0._4_4_,local_1c0);
    if (lVar20 == 0) {
      local_e0 = (ulonglong)local_1c0;
    }
    else {
      FUN_1446dd670(&local_e8,local_1c0,0);
      memcpy(local_e8,_Src,lVar20 * 2);
    }
    pvVar4 = local_1d8;
    local_d8 = (wchar_t *)0x0;
    local_d0 = local_1d0;
    if ((longlong)local_1d0 == 0) {
      local_cc = 0;
    }
    else {
      FUN_1446dd670(&local_d8,local_1d0,0);
      memcpy(local_d8,pvVar4,(longlong)local_1d0 * 2);
    }
    pvVar4 = local_198;
    local_c8 = (void *)0x0;
    local_c0 = local_190;
    if ((longlong)(int)local_190 == 0) {
      local_bc = 0;
    }
    else {
      FUN_1446dd670(&local_c8,local_190,0);
      memcpy(local_c8,pvVar4,(longlong)(int)local_190 * 2);
    }
    iVar7 = *(int *)(param_1 + 0x1a);
    *(int *)(param_1 + 0x1a) = iVar7 + 3;
    if ((uint)(*(int *)((longlong)param_1 + 0xd4) - iVar7) < 3) {
      FUN_1447a1bd6(plVar13,iVar7);
    }
    FUN_140b8566a((longlong)iVar7 * 0x10 + *plVar13,&local_e8,3);
    lVar20 = 0x30;
    do {
      if (*(longlong *)((longlong)&local_f8 + lVar20) != 0) {
        FUN_1400020a8();
      }
      lVar20 = lVar20 + -0x10;
    } while (lVar20 != 0);
  }
  local_200 = (undefined8 ****)(param_1 + 0xd);
  if (0 < *(int *)(param_1 + 0x1a)) {
    local_210 = param_1 + 0x1b;
    lVar20 = 0;
    local_208 = plVar13;
    do {
      lVar21 = lVar20 * 0x10;
      FUN_1401aea18(&local_e8,*plVar13 + lVar21);
      pppppuVar24 = (undefined8 *****)(*plVar13 + lVar21);
      if (pppppuVar24 != &local_e8) {
        if (*pppppuVar24 != (undefined8 ****)0x0) {
          FUN_1400020a8();
        }
        *pppppuVar24 = local_e8;
        local_e8 = (undefined8 ****)0x0;
        *(int *)(pppppuVar24 + 1) = (int)local_e0;
        *(undefined4 *)((longlong)pppppuVar24 + 0xc) = local_e0._4_4_;
        local_e0 = 0;
      }
      if (local_e8 != (undefined8 ****)0x0) {
        FUN_1400020a8();
      }
      puVar23 = (undefined8 *)(*plVar13 + lVar21);
      FUN_1400b22c2(&local_e8,&DAT_14afb88ae);
      uVar25 = 0;
      ppppuVar11 = local_e8;
      uVar14 = (ulonglong)((int)local_e0 - 1);
      if ((int)local_e0 == 0) {
        ppppuVar11 = (undefined8 ****)&DAT_149dfb77a;
        uVar14 = uVar25;
      }
      if (0 < (int)uVar14) {
        puVar18 = &DAT_149dfb77a;
        if (*(int *)(puVar23 + 1) != 0) {
          puVar18 = (undefined2 *)*puVar23;
        }
        lVar28 = 0;
LAB_143bfad33:
        uVar1 = *(ushort *)((longlong)puVar18 + lVar28);
        uVar2 = *(ushort *)((longlong)ppppuVar11 + lVar28);
        if (uVar1 == uVar2) {
          iVar7 = 0;
          if ((uVar1 == 0) || (uVar14 == 1)) goto LAB_143bfada4;
LAB_143bfad50:
          uVar14 = uVar14 - 1;
          lVar28 = lVar28 + 2;
          goto LAB_143bfad33;
        }
        local_218 = param_1;
        if ((uVar2 | uVar1) < 0x80) {
          if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
            iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
            goto LAB_143bfada4;
          }
          if (uVar14 == 1) {
            iVar7 = 0;
            goto LAB_143bfada4;
          }
          goto LAB_143bfad50;
        }
        iVar7 = (uint)uVar1 - (uint)uVar2;
LAB_143bfada4:
        uVar25 = (ulonglong)(iVar7 == 0);
      }
      if (local_e8 != (undefined8 ****)0x0) {
        FUN_1400020a8();
      }
      if ((char)uVar25 == '\0') {
        FUN_1401ae99a(puVar23);
      }
      else {
        FUN_1400b22c2(&local_e8,L"/Disabled");
        iVar7 = *(int *)(puVar23 + 1);
        puVar18 = &DAT_149dfb77a;
        if (iVar7 != 0) {
          puVar18 = (undefined2 *)*puVar23;
        }
        iVar16 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar16 = 0;
        }
        FUN_14006620a(&local_1f8,puVar18 + (0 < iVar16),iVar16 - (uint)(0 < iVar16));
        FUN_14052c168(&local_180,&local_1f8);
        ppppuVar11 = local_180;
        iVar7 = local_178 + -1;
        if (local_178 == 0) {
          iVar7 = 0;
        }
        FUN_1400020e8(&local_e8,local_180,iVar7);
        if ((undefined8 *****)ppppuVar11 != (undefined8 *****)0x0) {
          FUN_1400020a8(ppppuVar11);
        }
        if ((undefined8 *****)local_1f8 != (undefined8 *****)0x0) {
          FUN_1400020a8();
        }
        iVar7 = (int)local_e0 + -1;
        if ((int)local_e0 == 0) {
          iVar7 = 0;
        }
        FUN_1402980a2(puVar23,local_e8,iVar7);
        plVar13 = local_208;
        if (local_e8 != (undefined8 ****)0x0) {
          FUN_1400020a8();
          plVar13 = local_208;
        }
      }
      FUN_145a3c032(*plVar13 + lVar21);
      puVar18 = &DAT_149dfb77a;
      if (*(int *)(*plVar13 + 8 + lVar21) != 0) {
        puVar18 = *(undefined2 **)(*plVar13 + lVar21);
      }
      iVar7 = *(int *)(param_1 + 0x1c);
      *(uint *)(param_1 + 0x1c) = iVar7 + 1U;
      if (*(uint *)((longlong)param_1 + 0xe4) < iVar7 + 1U) {
        FUN_1414d5cb2(local_210,iVar7);
      }
      *(undefined2 **)(*local_210 + (longlong)iVar7 * 8) = puVar18;
      plVar12 = (longlong *)FUN_140e92164();
      local_e8 = *(undefined8 *****)(*plVar13 + lVar21);
      iVar7 = *(int *)(*plVar13 + 8 + lVar21);
      iVar16 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar16 = 0;
      }
      local_e0 = CONCAT44(local_e0._4_4_,iVar16);
      local_d8 = L"nvngx_dlss.dll";
      local_d0 = 0xe;
      FUN_140bee87a(&local_180,&local_e8,2);
      pppppuVar24 = (undefined8 *****)&DAT_149dfb77a;
      if (local_178 != 0) {
        pppppuVar24 = (undefined8 *****)local_180;
      }
      (**(code **)(*plVar12 + 0x78))(plVar12,pppppuVar24);
      if ((undefined8 *****)local_180 != (undefined8 *****)0x0) {
        FUN_1400020a8();
      }
      plVar12 = (longlong *)FUN_140e92164();
      local_e8 = *(undefined8 *****)(*plVar13 + lVar21);
      iVar7 = *(int *)(*plVar13 + 8 + lVar21);
      iVar16 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar16 = 0;
      }
      local_e0 = CONCAT44(local_e0._4_4_,iVar16);
      local_d8 = L"nvngx_dlssd.dll";
      local_d0 = 0xf;
      FUN_140bee87a(&local_180,&local_e8,2);
      pppppuVar24 = (undefined8 *****)&DAT_149dfb77a;
      if (local_178 != 0) {
        pppppuVar24 = (undefined8 *****)local_180;
      }
      (**(code **)(*plVar12 + 0x78))(plVar12,pppppuVar24);
      if ((undefined8 *****)local_180 != (undefined8 *****)0x0) {
        FUN_1400020a8();
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 < *(int *)(param_1 + 0x1a));
  }
  local_e8 = (undefined8 ****)local_1b8;
  iVar7 = local_1b0 - 1;
  if (local_1b0 == 0) {
    iVar7 = 0;
  }
  local_e0 = CONCAT44(local_e0._4_4_,iVar7);
  local_d8 = L"nvngx_dlss.dll";
  local_d0 = 0xe;
  FUN_140bee87a(&local_180,&local_e8,2);
  puVar23 = local_220;
  if ((undefined8 *****)local_200 == &local_180) {
    if ((undefined8 *****)local_180 != (undefined8 *****)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if ((undefined8 ****)*local_200 != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
    param_1[0xd] = local_180;
    local_180 = (undefined8 *****)0x0;
    *(int *)(param_1 + 0xe) = local_178;
    *(undefined4 *)((longlong)param_1 + 0x74) = local_174;
  }
  pppppuVar24 = (undefined8 *****)(param_1 + 0x10);
  plVar13 = (longlong *)FUN_140e92164();
  uVar5 = (**(code **)(*plVar13 + 0x78))(plVar13);
  *(undefined1 *)(param_1 + 0xf) = uVar5;
  iVar7 = local_1c0 - 1;
  if (local_1c0 == 0) {
    iVar7 = 0;
  }
  local_e8 = (undefined8 ****)local_1c8;
  local_e0 = CONCAT44(local_e0._4_4_,iVar7);
  local_d8 = L"nvngx_dlss.dll";
  local_d0 = 0xe;
  FUN_140bee87a(&local_180,&local_e8,2);
  if (pppppuVar24 == &local_180) {
    if ((undefined8 *****)local_180 != (undefined8 *****)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*pppppuVar24 != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
    param_1[0x10] = local_180;
    local_180 = (undefined8 *****)0x0;
    *(int *)(param_1 + 0x11) = local_178;
    *(undefined4 *)((longlong)param_1 + 0x8c) = local_174;
  }
  plVar13 = (longlong *)FUN_140e92164();
  if (*(int *)(param_1 + 0x11) == 0) {
    ppppuVar11 = (undefined8 ****)&DAT_149dfb77a;
  }
  else {
    ppppuVar11 = *pppppuVar24;
  }
  uVar5 = (**(code **)(*plVar13 + 0x78))(plVar13,ppppuVar11);
  *(undefined1 *)(param_1 + 0x12) = uVar5;
  local_e8 = (undefined8 ****)local_1b8;
  iVar7 = local_1b0 - 1;
  if (local_1b0 == 0) {
    iVar7 = 0;
  }
  local_e0 = CONCAT44(local_e0._4_4_,iVar7);
  local_d8 = L"nvngx_dlssd.dll";
  local_d0 = 0xf;
  FUN_140bee87a(&local_180,&local_e8,2);
  if ((undefined8 *****)(param_1 + 0x13) == &local_180) {
    if ((undefined8 *****)local_180 != (undefined8 *****)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if ((undefined8 ****)param_1[0x13] != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
    param_1[0x13] = local_180;
    local_180 = (undefined8 *****)0x0;
    *(int *)(param_1 + 0x14) = local_178;
    *(undefined4 *)((longlong)param_1 + 0xa4) = local_174;
  }
  pppppuVar24 = (undefined8 *****)(param_1 + 0x16);
  plVar13 = (longlong *)FUN_140e92164();
  uVar5 = (**(code **)(*plVar13 + 0x78))(plVar13);
  *(undefined1 *)(param_1 + 0x15) = uVar5;
  iVar7 = local_1c0 - 1;
  if (local_1c0 == 0) {
    iVar7 = 0;
  }
  local_e8 = (undefined8 ****)local_1c8;
  local_e0 = CONCAT44(local_e0._4_4_,iVar7);
  local_d8 = L"nvngx_dlssd.dll";
  local_d0 = 0xf;
  FUN_140bee87a(&local_180,&local_e8,2);
  if (pppppuVar24 == &local_180) {
    if ((undefined8 *****)local_180 != (undefined8 *****)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*pppppuVar24 != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
    param_1[0x16] = local_180;
    local_180 = (undefined8 *****)0x0;
    *(int *)(param_1 + 0x17) = local_178;
    *(undefined4 *)((longlong)param_1 + 0xbc) = local_174;
  }
  plVar13 = (longlong *)FUN_140e92164();
  if (*(int *)(param_1 + 0x17) == 0) {
    ppppuVar11 = (undefined8 ****)&DAT_149dfb77a;
  }
  else {
    ppppuVar11 = *pppppuVar24;
  }
  uVar5 = (**(code **)(*plVar13 + 0x78))(plVar13,ppppuVar11);
  *(undefined1 *)(param_1 + 0x18) = uVar5;
  param_1[0x1d] = param_1[0x1b];
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined1 *)((longlong)param_1 + 0x10c) = 1;
  param_1[0x20] = FUN_143bfa218;
  lVar20 = DAT_14cb51b20;
  iVar7 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (iVar7 == 0x40000002) {
    uVar14 = 0;
  }
  else {
    bVar29 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar7 != 2)) {
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        bVar29 = DVar8 == DVar9;
      }
      else {
        bVar29 = false;
      }
    }
    uVar14 = (ulonglong)(bVar29 ^ 1);
  }
  iVar7 = *(int *)(lVar20 + uVar14 * 4);
  iVar16 = (iVar7 == 2) + 1;
  if (iVar7 == 0) {
    iVar16 = 0;
  }
  *(int *)(param_1 + 0x21) = iVar16;
  if (*(char *)(puVar23 + 9) != '\0') {
    if ((*(int *)((longlong)puVar23 + 0x1c) == 2) ||
       (*(int *)((longlong)puVar23 + 0x1c) == 0 && *(uint *)(puVar23 + 4) != 0)) {
      local_e0 = (ulonglong)*(uint *)(puVar23 + 4);
      local_e8 = (undefined8 ****)((ulonglong)local_e8 & 0xffffffff00000000);
      NVSDK_NGX_UpdateFeature(&local_e8,1);
    }
    else {
      if (*(int *)(puVar23 + 8) == 0) {
        pwVar27 = L"";
      }
      else {
        pwVar27 = (wchar_t *)puVar23[7];
      }
      local_68 = (undefined8 *****)0x0;
      if (pwVar27 == (wchar_t *)0x0) {
        local_60 = (undefined8 *****)0x0;
        local_58 = 0;
      }
      else {
        sVar15 = wcslen(pwVar27);
        local_1f8 = (undefined8 ****)((ulonglong)local_1f8 & 0xffffffff00000000);
        local_180 = (undefined8 ****)CONCAT44(local_180._4_4_,0x7fffffff);
        uVar14 = sVar15 & 0xffffffff;
        pwVar26 = pwVar27;
        do {
          iVar7 = (int)uVar14;
          if (iVar7 < 1) {
LAB_143bfb568:
            local_58 = (int)local_1f8;
            uVar17 = (int)local_1f8 + 1;
            if (uVar17 < 0x81) goto LAB_143bfb581;
            FUN_1446efa72(&local_68,0,uVar17,1);
            pppppuVar24 = (undefined8 *****)local_68;
            goto LAB_143bfb583;
          }
          wVar3 = *pwVar26;
          uVar17 = (uint)(ushort)wVar3;
          pwVar22 = pwVar26 + 1;
          uVar19 = iVar7 - 1;
          if ((wVar3 & 0xfc00U) == 0xd800) {
            if (iVar7 == 1) {
              cVar6 = FUN_140024707(uVar17,&local_1f8,&local_180);
              if (cVar6 != '\0') goto LAB_143bfb568;
              break;
            }
            if (((ushort)*pwVar22 & 0xfc00) == 0xdc00) {
              uVar17 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar22 + 0xfca02400;
              pwVar22 = pwVar26 + 2;
              uVar19 = iVar7 - 2;
            }
          }
          cVar6 = FUN_140024707(uVar17,&local_1f8,&local_180);
          uVar14 = (ulonglong)uVar19;
          pwVar26 = pwVar22;
        } while (cVar6 != '\0');
        local_58 = -1;
        uVar17 = 0;
LAB_143bfb581:
        pppppuVar24 = (undefined8 *****)0x0;
LAB_143bfb583:
        local_180 = &local_e8;
        if (pppppuVar24 != (undefined8 *****)0x0) {
          local_180 = pppppuVar24;
        }
        iVar7 = (int)sVar15 + 1;
        local_1f8 = (undefined8 ****)CONCAT44(local_1f8._4_4_,uVar17);
        local_60 = local_180;
        do {
          puVar23 = local_220;
          if (iVar7 < 1) break;
          wVar3 = *pwVar27;
          uVar17 = (uint)(ushort)wVar3;
          pwVar26 = pwVar27 + 1;
          iVar16 = iVar7 + -1;
          if ((wVar3 & 0xfc00U) == 0xd800) {
            if (iVar7 == 1) {
              FUN_1400247af(uVar17,&local_180,&local_1f8);
              puVar23 = local_220;
              break;
            }
            if (((ushort)*pwVar26 & 0xfc00) == 0xdc00) {
              uVar17 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar26 + 0xfca02400;
              pwVar26 = pwVar27 + 2;
              iVar16 = iVar7 + -2;
            }
          }
          iVar7 = iVar16;
          cVar6 = FUN_1400247af(uVar17,&local_180,&local_1f8);
          puVar23 = local_220;
          pwVar27 = pwVar26;
        } while (cVar6 != '\0');
      }
      if (*(int *)(puVar23 + 6) == 0) {
        pwVar27 = L"";
      }
      else {
        pwVar27 = (wchar_t *)puVar23[5];
      }
      local_100 = (undefined8 *****)0x0;
      if (pwVar27 == (wchar_t *)0x0) {
        local_f8 = (undefined8 *****)0x0;
        local_f0 = 0;
      }
      else {
        sVar15 = wcslen(pwVar27);
        local_184 = 0;
        local_1f8 = (undefined8 ****)CONCAT44(local_1f8._4_4_,0x7fffffff);
        uVar14 = sVar15 & 0xffffffff;
        pwVar26 = pwVar27;
        do {
          iVar7 = (int)uVar14;
          if (iVar7 < 1) {
LAB_143bfb767:
            local_f0 = local_184;
            uVar17 = local_184 + 1;
            if (uVar17 < 0x81) goto LAB_143bfb787;
            FUN_1446efa72(&local_100,0,uVar17,1);
            pppppuVar24 = (undefined8 *****)local_100;
            goto LAB_143bfb789;
          }
          wVar3 = *pwVar26;
          uVar17 = (uint)(ushort)wVar3;
          pwVar22 = pwVar26 + 1;
          uVar19 = iVar7 - 1;
          if ((wVar3 & 0xfc00U) == 0xd800) {
            if (iVar7 == 1) {
              cVar6 = FUN_140024707(uVar17,&local_184,&local_1f8);
              if (cVar6 != '\0') goto LAB_143bfb767;
              break;
            }
            if (((ushort)*pwVar22 & 0xfc00) == 0xdc00) {
              uVar17 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar22 + 0xfca02400;
              pwVar22 = pwVar26 + 2;
              uVar19 = iVar7 - 2;
            }
          }
          cVar6 = FUN_140024707(uVar17,&local_184,&local_1f8);
          uVar14 = (ulonglong)uVar19;
          pwVar26 = pwVar22;
        } while (cVar6 != '\0');
        local_f0 = 0xffffffff;
        uVar17 = 0;
LAB_143bfb787:
        pppppuVar24 = (undefined8 *****)0x0;
LAB_143bfb789:
        local_1f8 = &local_180;
        if (pppppuVar24 != (undefined8 *****)0x0) {
          local_1f8 = pppppuVar24;
        }
        iVar7 = (int)sVar15 + 1;
        local_184 = uVar17;
        local_f8 = local_1f8;
        do {
          if (iVar7 < 1) break;
          wVar3 = *pwVar27;
          uVar17 = (uint)(ushort)wVar3;
          pwVar26 = pwVar27 + 1;
          iVar16 = iVar7 + -1;
          if ((wVar3 & 0xfc00U) == 0xd800) {
            if (iVar7 == 1) {
              FUN_1400247af(uVar17,&local_1f8,&local_184);
              break;
            }
            if (((ushort)*pwVar26 & 0xfc00) == 0xdc00) {
              uVar17 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar26 + 0xfca02400;
              pwVar26 = pwVar27 + 2;
              iVar16 = iVar7 + -2;
            }
          }
          iVar7 = iVar16;
          pwVar27 = pwVar26;
          cVar6 = FUN_1400247af(uVar17,&local_1f8,&local_184);
        } while (cVar6 != '\0');
      }
      local_1f8 = (undefined8 ****)CONCAT44(local_1f8._4_4_,1);
      local_1f0 = local_60;
      local_1e8 = 1;
      local_1e0 = local_f8;
      NVSDK_NGX_UpdateFeature();
      if ((undefined8 *****)local_100 != (undefined8 *****)0x0) {
        FUN_1400020a8();
      }
      if ((undefined8 *****)local_68 != (undefined8 *****)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_1d8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((undefined8 ****)local_1c8 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
  if ((undefined8 ****)local_1b8 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
  if (local_1a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_198 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143bfb932 FUN_143bfb932 body=173 status=ok
// SIG undefined FUN_143bfb932(void)

void FUN_143bfb932(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14afb8430;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1485f268a(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143bfb9e0 FUN_143bfb9e0 body=656 status=ok
// SIG undefined FUN_143bfb9e0(void)

void FUN_143bfb9e0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_88 [44];
  uint local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_3c = 1;
  local_40 = 0;
  local_44 = 0;
  local_48 = 1;
  local_4c = 0;
  local_50 = 0;
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    *(undefined4 *)(param_1 + 6) = 0xbad00000;
    *(undefined2 *)(param_1 + 1) = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,"SuperSampling.NeedsUpdatedDriver",&local_3c);
    uVar3 = (**(code **)(*(longlong *)*param_1 + 0x58))
                      ((longlong *)*param_1,"SuperSampling.MinDriverVersionMajor",&local_40);
    uVar4 = (**(code **)(*(longlong *)*param_1 + 0x58))
                      ((longlong *)*param_1,"SuperSampling.MinDriverVersionMinor",&local_44);
    uVar5 = (**(code **)(*(longlong *)*param_1 + 0x58))
                      ((longlong *)*param_1,"SuperSamplingDenoising.NeedsUpdatedDriver",&local_48);
    uVar6 = (**(code **)(*(longlong *)*param_1 + 0x58))
                      ((longlong *)*param_1,"SuperSamplingDenoising.MinDriverVersionMajor",&local_4c
                      );
    uVar7 = (**(code **)(*(longlong *)*param_1 + 0x58))
                      ((longlong *)*param_1,"SuperSamplingDenoising.MinDriverVersionMinor",&local_50
                      );
    if ((((uVar2 & 0xfff00000) != 0xbad00000) &&
        (*(bool *)(param_1 + 3) = local_3c != 0, (uVar3 & 0xfff00000) != 0xbad00000)) &&
       (local_40 != 0 && (uVar4 & 0xfff00000) != 0xbad00000)) {
      *(int *)((longlong)param_1 + 0x1c) = local_40;
      *(undefined4 *)(param_1 + 4) = local_44;
    }
    *(undefined1 *)((longlong)param_1 + 0x24) = 1;
    param_1[5] = 0x200000219;
    if ((((uVar5 & 0xfff00000) != 0xbad00000) &&
        (*(bool *)((longlong)param_1 + 0x24) = local_48 != 0, (uVar6 & 0xfff00000) != 0xbad00000))
       && (local_4c != 0 && (uVar7 & 0xfff00000) != 0xbad00000)) {
      *(int *)(param_1 + 5) = local_4c;
      *(undefined4 *)((longlong)param_1 + 0x2c) = local_50;
    }
    local_54 = 0;
    uVar2 = (**(code **)(*(longlong *)*param_1 + 0x58))((longlong *)*param_1,&DAT_14afb85df);
    if (((uVar2 & 0xfff00000) != 0xbad00000) && (local_54 != 0)) {
      *(undefined1 *)(param_1 + 1) = 1;
      *(uint *)((longlong)param_1 + 0x34) = uVar2;
    }
    local_58 = 0;
    uVar2 = (**(code **)(*(longlong *)*param_1 + 0x58))
                      ((longlong *)*param_1,"SuperSamplingDenoising.Available");
    if (((uVar2 & 0xfff00000) != 0xbad00000) && (local_58 != 0)) {
      *(byte *)((longlong)param_1 + 9) = *(byte *)(param_1 + 1);
      *(uint *)(param_1 + 7) = uVar2;
    }
    if ((*(byte *)(param_1 + 1) & 1) == 0) {
      local_5c = 0xbad00000;
      uVar3 = (**(code **)(*(longlong *)*param_1 + 0x58))
                        ((longlong *)*param_1,"SuperSampling.FeatureInitResult");
      uVar2 = uVar3 & 0xfff00000;
      if ((uVar3 & 0xfff00000) != 0xbad00000) {
        uVar2 = local_5c;
      }
      *(uint *)((longlong)param_1 + 0x34) = uVar2;
    }
    if (*(char *)((longlong)param_1 + 9) == '\0') {
      local_5c = 0xbad00000;
      uVar3 = (**(code **)(*(longlong *)*param_1 + 0x58))
                        ((longlong *)*param_1,"SuperSamplingDenoising.FeatureInitResult");
      uVar2 = uVar3 & 0xfff00000;
      if ((uVar3 & 0xfff00000) != 0xbad00000) {
        uVar2 = local_5c;
      }
      *(uint *)(param_1 + 7) = uVar2;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bfbc72 FUN_143bfbc72 body=538 status=ok
// SIG undefined FUN_143bfbc72(void)

int * FUN_143bfbc72(undefined8 *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_78 [32];
  int *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = param_3[2];
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = *param_1;
  local_50 = (code *)0x0;
  NVSDK_NGX_Parameter_GetVoidPointer(uVar3,"DLSSOptimalSettingsCallback",&local_50);
  if (local_50 != (code *)0x0) {
    NVSDK_NGX_Parameter_SetUI(uVar3,"Width",uVar1);
    NVSDK_NGX_Parameter_SetUI(uVar3,"Height",uVar2);
    NVSDK_NGX_Parameter_SetI(uVar3,"PerfQualityValue",uVar4);
    NVSDK_NGX_Parameter_SetI(uVar3,"RTXValue",0);
    uVar4 = (*local_50)(uVar3);
    if ((uVar4 & 0xfff00000) != 0xbad00000) {
      local_58 = param_2 + 6;
      NVSDK_NGX_Parameter_GetUI(uVar3,"OutWidth",param_2);
      NVSDK_NGX_Parameter_GetUI(uVar3,"OutHeight",param_2 + 1);
      param_2[4] = *param_2;
      param_2[5] = param_2[1];
      param_2[2] = *param_2;
      param_2[3] = param_2[1];
      NVSDK_NGX_Parameter_GetUI(uVar3,"DLSS.Get.Dynamic.Max.Render.Width",param_2 + 4);
      NVSDK_NGX_Parameter_GetUI(uVar3,"DLSS.Get.Dynamic.Max.Render.Height",param_2 + 5);
      NVSDK_NGX_Parameter_GetUI(uVar3,"DLSS.Get.Dynamic.Min.Render.Width",param_2 + 2);
      NVSDK_NGX_Parameter_GetUI(uVar3,"DLSS.Get.Dynamic.Min.Render.Height",param_2 + 3);
      NVSDK_NGX_Parameter_GetF(uVar3,"Sharpness",local_58);
    }
  }
  *(bool *)(param_2 + 7) = 0 < param_2[1] && 0 < *param_2;
  fVar6 = (float)*param_3;
  fVar8 = (float)param_3[1];
  fVar5 = (float)param_2[2] / fVar6;
  if ((float)param_2[3] / fVar8 <= (float)param_2[2] / fVar6) {
    fVar5 = (float)param_2[3] / fVar8;
  }
  param_2[9] = (int)fVar5;
  fVar7 = (float)param_2[4] / fVar6;
  if ((float)param_2[5] / fVar8 <= (float)param_2[4] / fVar6) {
    fVar7 = (float)param_2[5] / fVar8;
  }
  param_2[10] = (int)fVar7;
  fVar6 = (float)*param_2 / fVar6;
  fVar8 = (float)param_2[1] / fVar8;
  if (fVar8 <= fVar6) {
    fVar6 = fVar8;
  }
  if (fVar7 <= fVar6) {
    fVar6 = fVar7;
  }
  if (fVar6 <= fVar5) {
    fVar6 = fVar5;
  }
  param_2[8] = (int)fVar6;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bfbe8e FUN_143bfbe8e body=128 status=ok
// SIG undefined FUN_143bfbe8e(void)

void FUN_143bfbe8e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  iVar3 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x60) = iVar3 + 1U;
  if (*(uint *)(param_1 + 100) < iVar3 + 1U) {
    FUN_1464a7724((longlong *)(param_1 + 0x58),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x58);
  *(undefined8 *)(lVar4 + (longlong)iVar3 * 0x10) = *param_2;
  lVar5 = param_2[1];
  *(longlong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    plVar6 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000143bfbef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x10))(plVar6);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143bfbf0e FUN_143bfbf0e body=58 status=ok
// SIG undefined FUN_143bfbf0e(void)

void FUN_143bfbf0e(longlong param_1)

{
  FUN_1485f268a(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) == 0) {
    return;
  }
  FUN_1464a77a8(param_1 + 0x58,0);
  return;
}



// FUNCTION 143bfbf48 FUN_143bfbf48 body=502 status=ok
// SIG undefined FUN_143bfbf48(void)

void FUN_143bfbf48(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  code *pcVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  DWORD DVar11;
  DWORD DVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  lVar14 = DAT_14cb51b38;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar9 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar9 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar9 == 2)) {
    uVar13 = 0;
  }
  else if (iVar9 == 1) {
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    uVar13 = (ulonglong)(DVar11 != DVar12);
  }
  else {
    uVar13 = 1;
  }
  iVar9 = *(int *)(param_1 + 0x60);
  if (0 < iVar9) {
    uVar10 = *(uint *)(lVar14 + uVar13 * 4);
    plVar1 = (longlong *)(param_1 + 0x58);
    iVar16 = 0;
    do {
      lVar14 = *plVar1;
      lVar6 = *(longlong *)(lVar14 + 8 + (longlong)iVar16 * 0x10);
      if (((lVar6 == 0) || (*(int *)(lVar6 + 8) != 1)) ||
         (plVar15 = (longlong *)((longlong)iVar16 * 0x10 + lVar14),
         (uint)(*(int *)(param_1 + 0x50) - *(int *)(*plVar15 + 0x58)) <= uVar10)) {
        iVar16 = iVar16 + 1;
      }
      else {
        pcVar7 = (code *)*plVar15;
        lVar6 = plVar15[1];
        plVar3 = (longlong *)(lVar14 + -0x10 + (longlong)iVar9 * 0x10);
        lVar8 = plVar3[1];
        *plVar15 = *plVar3;
        plVar15[1] = lVar8;
        local_58._0_4_ = SUB84(pcVar7,0);
        local_58._4_4_ = (undefined4)((ulonglong)pcVar7 >> 0x20);
        uStack_50._0_4_ = (undefined4)lVar6;
        uStack_50._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
        puVar4 = (undefined4 *)(lVar14 + -0x10 + (longlong)iVar9 * 0x10);
        *puVar4 = (undefined4)local_58;
        puVar4[1] = local_58._4_4_;
        puVar4[2] = (undefined4)uStack_50;
        puVar4[3] = uStack_50._4_4_;
        lVar14 = (longlong)*(int *)(param_1 + 0x60) * 0x10;
        plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x58) + -8 + lVar14);
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + -0x10 + lVar14);
        *puVar5 = 0;
        puVar5[1] = 0;
        local_58 = pcVar7;
        uStack_50 = lVar6;
        FUN_1485f26d4(plVar1,*(int *)(param_1 + 0x60) + -1);
        FUN_146079a88(plVar1);
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar15 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
      }
      iVar9 = *(int *)(param_1 + 0x60);
    } while (iVar16 < iVar9);
  }
  lVar14 = *(longlong *)(param_1 + 0x10);
  if (lVar14 != 0) {
    local_68 = 0;
    local_5c = 0;
    local_58 = (code *)0x0;
    NVSDK_NGX_Parameter_GetVoidPointer(lVar14,"DLSSGetStatsCallback",&local_58);
    if ((local_58 != (code *)0x0) &&
       (uVar10 = (*local_58)(lVar14), (uVar10 & 0xfff00000) != 0xbad00000)) {
      NVSDK_NGX_Parameter_GetULL(lVar14,"SizeInBytes",&local_68);
      NVSDK_NGX_Parameter_GetUI(lVar14,&DAT_14afb899c,&local_5c);
      NVSDK_NGX_Parameter_GetUI(lVar14,&DAT_14afb899f,&local_5c);
    }
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bfc140 FUN_143bfc140 body=242 status=ok
// SIG undefined FUN_143bfc140(void)

void FUN_143bfc140(void)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  lVar2 = DAT_14cb51b20;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  local_1c = *(undefined4 *)(lVar2 + uVar6 * 4);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar3 = FUN_141369f9a(&DAT_14c846b20,L"ngxloglevel=",&local_1c);
  if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bfc24d FUN_143bfc24d body=309 status=ok
// SIG undefined FUN_143bfc24d(void)

void FUN_143bfc24d(void)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(&DAT_14cb51b00,L"Win64");
  atexit((_func_5014 *)&LAB_143bfa138);
  local_30._0_4_ = 1;
  local_38 = 4;
  FUN_14078dbce(&DAT_14cb51b10,L"r.NGX.LogLevel",&local_30,
                L"Determines the minimal amount of logging the NGX implementation pipes into LogDLSSNGX. Can be overridden by the -NGXLogLevel= command line option\nPlease refer to the DLSS plugin documentation on other ways to change the logging level.\n0: off \n1: on (default)\n2: verbose "
               );
  atexit(FUN_143bfa149);
  local_30._0_4_ = 3;
  local_38 = 0x20;
  FUN_14078dbce(&DAT_14cb51b28,L"r.NGX.FramesUntilFeatureDestruction",&local_30,
                L"Number of frames until an unused NGX feature gets destroyed. (default=3)");
  atexit(FUN_143bfa18e);
  local_30 = CONCAT44(local_30._4_4_,1);
  local_38 = 0;
  FUN_14078dbce(&DAT_14cb51b40,L"r.NGX.RenameNGXLogSeverities",&local_30,
                L"Renames \'error\' and \'warning\' in messages returned by the NGX log callback to \'e_rror\' and \'w_arning\' before passing them to the UE log system\n0: off \n1: on, for select messages during initalization (default)\n2: on, for all messages\n"
               );
  atexit(FUN_143bfa1d3);
  local_30 = 0x800000014afb8886;
  local_1c = 6;
  local_28 = FUN_14577453c();
  local_24 = 1;
  FUN_1464a7662(&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bfc384 FUN_143bfc384 body=1598 status=ok
// SIG undefined FUN_143bfc384(void)

undefined8 * FUN_143bfc384(undefined8 *param_1,longlong param_2)

{
  wchar_t wVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  size_t sVar9;
  ulonglong uVar10;
  int iVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  undefined1 *puVar14;
  wchar_t *pwVar15;
  uint uVar16;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined8 *local_1f0;
  uint local_1e8;
  undefined2 *local_1d8;
  undefined8 local_1d0;
  undefined8 *local_1c8;
  longlong local_1c0;
  undefined8 *local_1b8;
  undefined1 **local_1b0;
  undefined1 ***local_1a8;
  undefined1 *local_1a0;
  undefined2 *local_198;
  int local_190;
  undefined1 **local_188;
  uint local_17c;
  undefined1 *local_178 [16];
  undefined1 **local_f8;
  undefined1 **local_f0;
  uint local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_143bfa4de();
  *param_1 = &PTR_LAB_14afb8a60;
  plVar7 = (longlong *)(**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))();
  param_1[0x22] = plVar7;
  uVar8 = (**(code **)(*plVar7 + 0x510))(plVar7);
  param_1[0x23] = uVar8;
  uVar8 = (**(code **)(*(longlong *)param_1[0x22] + 0x518))();
  param_1[0x24] = uVar8;
  DAT_14cb51b59 = FUN_1485f287e(param_1[0x23]);
  FUN_1464a72e4(&local_198);
  local_1d8 = &DAT_149dfb77a;
  if (local_190 != 0) {
    local_1d8 = local_198;
  }
  local_1b8 = param_1 + 0x1d;
  local_1d0 = param_1[0x23];
  local_1b0 = &local_60;
  local_1a8 = &local_f8;
  uVar6 = 0x15;
  local_1c8 = param_1;
  local_1c0 = param_2;
  do {
    if ((*(int *)(param_2 + 0x1c) == 2) ||
       (*(int *)(param_2 + 0x1c) == 0 && *(int *)(param_2 + 0x20) != 0)) {
      local_1f8 = CONCAT44(local_1f8._4_4_,uVar6);
      uVar5 = FUN_144d605e0(*(int *)(param_2 + 0x20),local_1d8,local_1d0,local_1b8);
    }
    else {
      pwVar15 = L"";
      if (*(int *)(param_2 + 0x30) != 0) {
        pwVar15 = *(wchar_t **)(param_2 + 0x28);
      }
      local_60 = (undefined1 *)0x0;
      if (pwVar15 == (wchar_t *)0x0) {
        local_58 = (undefined1 *)0x0;
        local_50 = 0;
      }
      else {
        sVar9 = wcslen(pwVar15);
        local_188 = (undefined1 **)((ulonglong)local_188 & 0xffffffff00000000);
        local_178[0] = (undefined1 *)CONCAT44(local_178[0]._4_4_,0x7fffffff);
        uVar10 = sVar9 & 0xffffffff;
        pwVar13 = pwVar15;
        do {
          iVar11 = (int)uVar10;
          if (iVar11 < 1) {
LAB_143bfc5d8:
            local_50 = (int)local_188;
            uVar5 = (int)local_188 + 1;
            if (uVar5 < 0x81) goto LAB_143bfc5f4;
            FUN_1446efa72(local_1b0,0,uVar5,1);
            local_178[0] = local_60;
            goto LAB_143bfc5f6;
          }
          wVar1 = *pwVar13;
          uVar5 = (uint)(ushort)wVar1;
          pwVar12 = pwVar13 + 1;
          uVar16 = iVar11 - 1;
          if ((wVar1 & 0xfc00U) == 0xd800) {
            if (iVar11 == 1) {
              cVar4 = FUN_140024707(uVar5,&local_188,local_178);
              if (cVar4 != '\0') goto LAB_143bfc5d8;
              break;
            }
            if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
              uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
              pwVar12 = pwVar13 + 2;
              uVar16 = iVar11 - 2;
            }
          }
          cVar4 = FUN_140024707(uVar5,&local_188,local_178);
          uVar10 = (ulonglong)uVar16;
          pwVar13 = pwVar12;
        } while (cVar4 != '\0');
        local_50 = -1;
        uVar5 = 0;
LAB_143bfc5f4:
        local_178[0] = (undefined1 *)0x0;
LAB_143bfc5f6:
        if (local_178[0] == (undefined1 *)0x0) {
          local_178[0] = local_e0;
        }
        iVar11 = (int)sVar9 + 1;
        local_188 = (undefined1 **)CONCAT44(local_188._4_4_,uVar5);
        local_58 = local_178[0];
        do {
          param_2 = local_1c0;
          if (iVar11 < 1) break;
          wVar1 = *pwVar15;
          uVar5 = (uint)(ushort)wVar1;
          pwVar13 = pwVar15 + 1;
          iVar3 = iVar11 + -1;
          if ((wVar1 & 0xfc00U) == 0xd800) {
            if (iVar11 == 1) {
              FUN_1400247af(uVar5,local_178,&local_188);
              param_2 = local_1c0;
              break;
            }
            if (((ushort)*pwVar13 & 0xfc00) == 0xdc00) {
              uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar13 + 0xfca02400;
              pwVar13 = pwVar15 + 2;
              iVar3 = iVar11 + -2;
            }
          }
          iVar11 = iVar3;
          cVar4 = FUN_1400247af(uVar5,local_178,&local_188);
          pwVar15 = pwVar13;
          param_2 = local_1c0;
        } while (cVar4 != '\0');
      }
      pwVar15 = L"";
      if (*(int *)(param_2 + 0x40) != 0) {
        pwVar15 = *(wchar_t **)(param_2 + 0x38);
      }
      local_f8 = (undefined1 **)0x0;
      if (pwVar15 == (wchar_t *)0x0) {
        local_f0 = (undefined1 **)0x0;
        local_e8 = 0;
        puVar14 = local_58;
      }
      else {
        local_1a0 = local_58;
        sVar9 = wcslen(pwVar15);
        local_17c = 0;
        local_188 = (undefined1 **)CONCAT44(local_188._4_4_,0x7fffffff);
        uVar10 = sVar9 & 0xffffffff;
        pwVar13 = pwVar15;
        do {
          iVar11 = (int)uVar10;
          if (iVar11 < 1) {
LAB_143bfc7c9:
            local_e8 = local_17c;
            uVar5 = local_17c + 1;
            if (uVar5 < 0x81) goto LAB_143bfc7e9;
            FUN_1446efa72(local_1a8,0,uVar5,1);
            local_188 = local_f8;
            goto LAB_143bfc7eb;
          }
          wVar1 = *pwVar13;
          uVar5 = (uint)(ushort)wVar1;
          pwVar12 = pwVar13 + 1;
          uVar16 = iVar11 - 1;
          if ((wVar1 & 0xfc00U) == 0xd800) {
            if (iVar11 == 1) {
              cVar4 = FUN_140024707(uVar5,&local_17c,&local_188);
              if (cVar4 != '\0') goto LAB_143bfc7c9;
              break;
            }
            if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
              uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
              uVar16 = iVar11 - 2;
              pwVar12 = pwVar13 + 2;
            }
          }
          pwVar13 = pwVar12;
          cVar4 = FUN_140024707(uVar5,&local_17c,&local_188);
          uVar10 = (ulonglong)uVar16;
        } while (cVar4 != '\0');
        local_e8 = 0xffffffff;
        uVar5 = 0;
LAB_143bfc7e9:
        local_188 = (undefined1 **)0x0;
LAB_143bfc7eb:
        if (local_188 == (undefined1 **)0x0) {
          local_188 = local_178;
        }
        iVar11 = (int)sVar9 + 1;
        local_17c = uVar5;
        local_f0 = local_188;
        do {
          puVar14 = local_1a0;
          param_2 = local_1c0;
          if (iVar11 < 1) break;
          wVar1 = *pwVar15;
          uVar5 = (uint)(ushort)wVar1;
          pwVar13 = pwVar15 + 1;
          iVar3 = iVar11 + -1;
          if ((wVar1 & 0xfc00U) == 0xd800) {
            if (iVar11 == 1) {
              FUN_1400247af(uVar5,&local_188,&local_17c);
              puVar14 = local_1a0;
              param_2 = local_1c0;
              break;
            }
            if (((ushort)*pwVar13 & 0xfc00) == 0xdc00) {
              uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar13 + 0xfca02400;
              pwVar13 = pwVar15 + 2;
              iVar3 = iVar11 + -2;
            }
          }
          iVar11 = iVar3;
          pwVar15 = pwVar13;
          cVar4 = FUN_1400247af(uVar5,&local_188,&local_17c);
          puVar14 = local_1a0;
          param_2 = local_1c0;
        } while (cVar4 != '\0');
      }
      param_1 = local_1c8;
      local_1f0 = local_1b8;
      local_1f8 = local_1d0;
      local_1e8 = uVar6;
      uVar5 = FUN_144d60700(local_f0,1,puVar14,local_1d8);
      if (local_f8 != (undefined1 **)0x0) {
        FUN_1400020a8();
      }
      if (local_60 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    if ((uVar5 & 0xfff00000) != 0xbad00000) {
      *(uint *)(param_1 + 8) = uVar5;
      DAT_14cb51b58 = 1;
      uVar6 = NVSDK_NGX_D3D11_GetCapabilityParameters(param_1 + 2);
      if (uVar6 == 0xbad0000c) goto LAB_143bfc966;
      if ((uVar6 & 0xfff00000) != 0xbad00000) {
        FUN_143bfb9e0(param_1 + 2);
      }
      goto LAB_143bfc980;
    }
    cVar4 = FUN_1464a7342(param_1);
    if (cVar4 != '\0') {
      NVSDK_NGX_D3D11_Shutdown1(local_1d0);
    }
    bVar2 = uVar6 < 0x14;
    uVar6 = uVar6 - 1;
    if (bVar2) {
      *(uint *)(param_1 + 8) = uVar5;
      if (uVar5 == 0xbad0000c) {
LAB_143bfc966:
        *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
      }
LAB_143bfc980:
      if (local_198 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if ((local_48 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  } while( true );
}



// FUNCTION 143bfc9c4 FUN_143bfc9c4 body=83 status=ok
// SIG undefined FUN_143bfc9c4(void)

void FUN_143bfc9c4(longlong param_1)

{
  char cVar1;
  
  if (DAT_14cb51b58 == '\x01') {
    FUN_143bfbf0e(param_1);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      NVSDK_NGX_D3D11_DestroyParameters();
    }
    cVar1 = FUN_1464a7342(param_1);
    if (cVar1 != '\0') {
      NVSDK_NGX_D3D11_Shutdown1(*(undefined8 *)(param_1 + 0x118));
    }
    DAT_14cb51b58 = '\0';
  }
  FUN_143bfb932(param_1);
  return;
}



// FUNCTION 143bfca18 FUN_143bfca18 body=6811 status=ok
// SIG undefined FUN_143bfca18(void)

void FUN_143bfca18(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  char cVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  longlong *plVar22;
  longlong *plVar23;
  undefined8 uVar24;
  uint uVar25;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  int local_174;
  longlong *local_170;
  longlong local_168;
  int local_15c;
  int local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  ulonglong local_148;
  ulonglong local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  longlong local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (*(char *)(param_1 + 0x18) != '\x01') goto LAB_143bfde14;
  FUN_1418419e8(param_3);
  cVar15 = FUN_1403127a6(*param_4,param_3);
  if (cVar15 != '\0') {
    puVar8 = (undefined8 *)*param_4;
    *puVar8 = 0;
    plVar22 = (longlong *)puVar8[1];
    if (plVar22 != (longlong *)0x0) {
      puVar8[1] = 0;
      LOCK();
      plVar23 = plVar22 + 1;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)*plVar23 == 0) {
        (**(code **)*plVar22)(plVar22);
        LOCK();
        piVar1 = (int *)((longlong)plVar22 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
    }
  }
  if (*(char *)(param_3 + 0x33) == '\x01') {
    FUN_1464a74a6(param_1,&local_f0,param_3);
    plVar22 = local_e8;
    puVar9 = (ulonglong *)*param_4;
    if (puVar9 != &local_f0) {
      *puVar9 = local_f0;
      local_f0 = 0;
      plVar23 = (longlong *)puVar9[1];
      if (local_e8 != plVar23) {
        local_e8 = (longlong *)0x0;
        puVar9[1] = (ulonglong)plVar22;
        if (plVar23 != (longlong *)0x0) {
          LOCK();
          plVar22 = plVar23 + 1;
          *(int *)plVar22 = (int)*plVar22 + -1;
          UNLOCK();
          if ((int)*plVar22 == 0) {
            (**(code **)*plVar23)(plVar23);
            LOCK();
            piVar1 = (int *)((longlong)plVar23 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar23 + 0x10))(plVar23);
            }
          }
        }
      }
    }
    plVar22 = local_e8;
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar23 = local_e8 + 1;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)*plVar23 == 0) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar1 = (int *)((longlong)plVar22 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
    }
  }
  local_170 = param_4;
  if (*(longlong *)*param_4 == 0) {
    local_c8 = 0;
    NVSDK_NGX_D3D11_AllocateParameters(&local_c8);
    FUN_145a00270(param_1,local_c8,param_3);
    if (*(int *)((longlong)param_3 + 0x1bc) == 1) {
      FUN_1485f25a2(param_3,&local_f0);
      lVar11 = local_c8;
      local_f8 = 0;
      uVar16 = *(undefined8 *)(param_1 + 0x120);
      NVSDK_NGX_Parameter_SetUI(local_c8,"Width",local_e8._4_4_);
      NVSDK_NGX_Parameter_SetUI(lVar11,"Height",local_e0);
      NVSDK_NGX_Parameter_SetUI(lVar11,"OutWidth",local_dc);
      NVSDK_NGX_Parameter_SetUI(lVar11,"OutHeight",local_d8);
      NVSDK_NGX_Parameter_SetI(lVar11,"PerfQualityValue",local_d4);
      NVSDK_NGX_Parameter_SetI(lVar11,"DLSS.Feature.Create.Flags",local_d0);
      NVSDK_NGX_Parameter_SetI(lVar11,"DLSS.Enable.Output.Subrects",local_cc);
      NVSDK_NGX_Parameter_SetI(lVar11,"DLSS.Denoise.Mode",1);
      NVSDK_NGX_Parameter_SetUI(lVar11,"DLSS.Roughness.Mode",local_f0._4_4_);
      NVSDK_NGX_Parameter_SetUI(lVar11,"DLSS.Use.HW.Depth",(ulonglong)local_e8 & 0xffffffff);
      uVar25 = NVSDK_NGX_D3D11_CreateFeature(uVar16,0xd,lVar11,&local_f8);
      if ((uVar25 & 0xfff00000) == 0xbad00000) {
        puVar8 = (undefined8 *)*param_4;
        *puVar8 = 0;
        plVar22 = (longlong *)puVar8[1];
        if (plVar22 != (longlong *)0x0) {
          puVar8[1] = 0;
          LOCK();
          plVar23 = plVar22 + 1;
          *(int *)plVar23 = (int)*plVar23 + -1;
          UNLOCK();
          if ((int)*plVar23 == 0) {
            (**(code **)*plVar22)(plVar22);
            LOCK();
            piVar1 = (int *)((longlong)plVar22 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar22 + 0x10))(plVar22);
            }
          }
        }
      }
      else {
        lVar11 = param_3[0xc];
        lVar12 = param_3[0xd];
        lVar13 = param_3[0xe];
        lVar14 = param_3[0xf];
        local_168 = *(longlong *)((longlong)param_3 + 0x19c);
        local_174 = *(int *)((longlong)param_3 + 0x1a4);
        fVar2 = *(float *)((longlong)param_3 + 0x194);
        local_178 = CONCAT31(local_178._1_3_,*(undefined1 *)(param_3 + 0x32));
        uVar5 = *(undefined2 *)(param_3 + 0x36);
        uVar4 = *(undefined1 *)((longlong)param_3 + 0x1b3);
        uVar16 = *(undefined8 *)((longlong)param_3 + 0x1b4);
        uVar6 = *(undefined4 *)((longlong)param_3 + 0x1bc);
        plVar22 = (longlong *)FUN_14001cc68(0x70,0x10);
        param_4 = local_170;
        plVar22[1] = (longlong)&DAT_100000001;
        *plVar22 = (longlong)&PTR_FUN_14afb9e30;
        uVar7 = *(undefined4 *)(param_1 + 0x50);
        plVar22[3] = lVar11;
        plVar22[4] = lVar12;
        plVar22[5] = lVar13;
        plVar22[6] = lVar14;
        plVar22[7] = local_168;
        *(int *)(plVar22 + 8) = local_174;
        *(undefined1 *)((longlong)plVar22 + 0x44) = (undefined1)local_178;
        *(bool *)((longlong)plVar22 + 0x45) = fVar2 != 0.0;
        *(undefined2 *)((longlong)plVar22 + 0x46) = uVar5;
        *(undefined1 *)(plVar22 + 9) = uVar4;
        *(undefined8 *)((longlong)plVar22 + 0x4c) = uVar16;
        *(undefined4 *)((longlong)plVar22 + 0x54) = uVar6;
        plVar22[0xb] = local_f8;
        plVar22[0xc] = local_c8;
        *(undefined4 *)(plVar22 + 0xd) = uVar7;
        *(undefined1 *)((longlong)plVar22 + 0x6c) = 0;
        plVar22[2] = (longlong)&PTR_FUN_14afb9e48;
        if (plVar22 == (longlong *)0x0) {
          puVar8 = (undefined8 *)*local_170;
          *puVar8 = 0x10;
          plVar23 = (longlong *)puVar8[1];
          if (plVar23 != (longlong *)0x0) {
            puVar8[1] = 0;
LAB_143bfe446:
            LOCK();
            plVar10 = plVar23 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*plVar23)(plVar23);
              LOCK();
              piVar1 = (int *)((longlong)plVar23 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar23 + 0x10))(plVar23);
              }
            }
            if (plVar22 != (longlong *)0x0) goto LAB_143bfe487;
          }
        }
        else {
          LOCK();
          *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
          UNLOCK();
          plVar10 = (longlong *)*local_170;
          *plVar10 = (longlong)(plVar22 + 2);
          plVar23 = (longlong *)plVar10[1];
          if (plVar22 == plVar23) {
            LOCK();
            plVar23 = plVar22 + 1;
            *(int *)plVar23 = (int)*plVar23 + -1;
            UNLOCK();
            if ((int)*plVar23 == 0) {
              (**(code **)*plVar22)(plVar22);
              LOCK();
              piVar1 = (int *)((longlong)plVar22 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar22 + 0x10))(plVar22);
              }
            }
          }
          else {
            plVar10[1] = (longlong)plVar22;
            if (plVar23 != (longlong *)0x0) goto LAB_143bfe446;
          }
LAB_143bfe487:
          LOCK();
          plVar23 = plVar22 + 1;
          *(int *)plVar23 = (int)*plVar23 + -1;
          UNLOCK();
          if ((int)*plVar23 == 0) {
            (**(code **)*plVar22)(plVar22);
            LOCK();
            piVar1 = (int *)((longlong)plVar22 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar22 + 0x10))(plVar22);
            }
          }
        }
        *(undefined1 *)(*(longlong *)*param_4 + 0x5c) = 1;
      }
    }
    plVar22 = (longlong *)*param_4;
    local_108 = *plVar22;
    if (local_108 == 0) {
      FUN_1485f24ca(param_3,&local_f0);
      lVar11 = local_c8;
      local_f8 = 0;
      uVar16 = *(undefined8 *)(param_1 + 0x120);
      NVSDK_NGX_Parameter_SetUI(local_c8,"Width",local_f0 & 0xffffffff);
      NVSDK_NGX_Parameter_SetUI(lVar11,"Height",local_f0._4_4_);
      NVSDK_NGX_Parameter_SetUI(lVar11,"OutWidth",(ulonglong)local_e8 & 0xffffffff);
      NVSDK_NGX_Parameter_SetUI(lVar11,"OutHeight",local_e8._4_4_);
      NVSDK_NGX_Parameter_SetI(lVar11,"PerfQualityValue",local_e0);
      NVSDK_NGX_Parameter_SetI(lVar11,"DLSS.Feature.Create.Flags",local_dc);
      NVSDK_NGX_Parameter_SetI(lVar11,"DLSS.Enable.Output.Subrects",(undefined1)local_d8);
      NVSDK_NGX_D3D11_CreateFeature(uVar16,1,lVar11,&local_f8);
      lVar11 = param_3[0xc];
      lVar12 = param_3[0xd];
      lVar13 = param_3[0xe];
      lVar14 = param_3[0xf];
      local_168 = *(longlong *)((longlong)param_3 + 0x19c);
      local_174 = *(int *)((longlong)param_3 + 0x1a4);
      fVar2 = *(float *)((longlong)param_3 + 0x194);
      local_178 = CONCAT31(local_178._1_3_,*(undefined1 *)(param_3 + 0x32));
      uVar5 = *(undefined2 *)(param_3 + 0x36);
      uVar4 = *(undefined1 *)((longlong)param_3 + 0x1b3);
      uVar16 = *(undefined8 *)((longlong)param_3 + 0x1b4);
      uVar6 = *(undefined4 *)((longlong)param_3 + 0x1bc);
      plVar22 = (longlong *)FUN_14001cc68(0x70,0x10);
      param_4 = local_170;
      plVar22[1] = (longlong)&DAT_100000001;
      *plVar22 = (longlong)&PTR_FUN_14afb9e30;
      uVar7 = *(undefined4 *)(param_1 + 0x50);
      plVar22[3] = lVar11;
      plVar22[4] = lVar12;
      plVar22[5] = lVar13;
      plVar22[6] = lVar14;
      plVar22[7] = local_168;
      *(int *)(plVar22 + 8) = local_174;
      *(undefined1 *)((longlong)plVar22 + 0x44) = (undefined1)local_178;
      *(bool *)((longlong)plVar22 + 0x45) = fVar2 != 0.0;
      *(undefined2 *)((longlong)plVar22 + 0x46) = uVar5;
      *(undefined1 *)(plVar22 + 9) = uVar4;
      *(undefined8 *)((longlong)plVar22 + 0x4c) = uVar16;
      *(undefined4 *)((longlong)plVar22 + 0x54) = uVar6;
      plVar22[0xb] = local_f8;
      plVar22[0xc] = local_c8;
      *(undefined4 *)(plVar22 + 0xd) = uVar7;
      *(undefined1 *)((longlong)plVar22 + 0x6c) = 0;
      plVar22[2] = (longlong)&PTR_FUN_14afb9e48;
      if (plVar22 == (longlong *)0x0) {
        puVar8 = (undefined8 *)*local_170;
        *puVar8 = 0x10;
        plVar23 = (longlong *)puVar8[1];
        if (plVar23 != (longlong *)0x0) {
          puVar8[1] = 0;
LAB_143bfe3bf:
          LOCK();
          plVar10 = plVar23 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar23)(plVar23);
            LOCK();
            piVar1 = (int *)((longlong)plVar23 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar23 + 0x10))(plVar23);
            }
          }
          if (plVar22 != (longlong *)0x0) goto LAB_143bfe400;
        }
      }
      else {
        LOCK();
        *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
        UNLOCK();
        plVar10 = (longlong *)*local_170;
        *plVar10 = (longlong)(plVar22 + 2);
        plVar23 = (longlong *)plVar10[1];
        if (plVar22 == plVar23) {
          LOCK();
          plVar23 = plVar22 + 1;
          *(int *)plVar23 = (int)*plVar23 + -1;
          UNLOCK();
          if ((int)*plVar23 == 0) {
            (**(code **)*plVar22)(plVar22);
            LOCK();
            piVar1 = (int *)((longlong)plVar22 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar22 + 0x10))(plVar22);
            }
          }
        }
        else {
          plVar10[1] = (longlong)plVar22;
          if (plVar23 != (longlong *)0x0) goto LAB_143bfe3bf;
        }
LAB_143bfe400:
        LOCK();
        plVar23 = plVar22 + 1;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)*plVar23 == 0) {
          (**(code **)*plVar22)(plVar22);
          LOCK();
          piVar1 = (int *)((longlong)plVar22 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
          }
        }
      }
      plVar22 = (longlong *)*param_4;
      local_108 = *plVar22;
    }
    local_100 = plVar22[1];
    if (local_100 != 0) {
      LOCK();
      *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
      UNLOCK();
    }
    FUN_143bfbe8e(param_1,&local_108);
  }
  (**(code **)(**(longlong **)(param_1 + 0x110) + 0x578))(*(longlong **)(param_1 + 0x110),1);
  cVar15 = *(char *)(*(longlong *)*param_4 + 0x5c);
  plVar22 = *(longlong **)(param_1 + 0x110);
  local_14c = *(undefined4 *)(param_3 + 0xe);
  local_178 = *(undefined4 *)((longlong)param_3 + 0x74);
  local_15c = *(int *)(param_3 + 0xc);
  local_174 = *(int *)(param_3 + 0xd) - local_15c;
  local_158 = *(int *)((longlong)param_3 + 100);
  local_168 = CONCAT44(local_168._4_4_,*(int *)((longlong)param_3 + 0x6c) - local_158);
  uVar16 = (**(code **)(*plVar22 + 0x550))(plVar22,param_3[1]);
  local_154 = *(undefined4 *)(param_3 + 0xc);
  local_150 = *(undefined4 *)((longlong)param_3 + 100);
  uVar17 = (**(code **)(*plVar22 + 0x550))(plVar22,param_3[2]);
  if (cVar15 == '\x01') {
    if (*(char *)((longlong)param_3 + 0x1b2) == '\0') {
      local_120 = 0;
    }
    else {
      local_120 = (**(code **)(*plVar22 + 0x550))(plVar22,param_3[4]);
    }
    local_128 = *(undefined4 *)(param_3 + 0xc);
    local_124 = *(undefined4 *)((longlong)param_3 + 100);
    if (*(char *)(param_3 + 0x36) == '\0') {
      uVar18 = (**(code **)(*plVar22 + 0x550))(plVar22,param_3[3]);
    }
    else {
      uVar18 = 0;
    }
    fVar2 = *(float *)(param_3 + 0x11);
    fVar3 = *(float *)((longlong)param_3 + 0x8c);
    uVar4 = *(undefined1 *)(param_3 + 0x33);
    uVar19 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x550))
                       (*(longlong **)(param_1 + 0x110),param_3[9]);
    uVar20 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x550))
                       (*(longlong **)(param_1 + 0x110),*param_3);
    local_110 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x550))
                          (*(longlong **)(param_1 + 0x110),param_3[5]);
    local_118 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x550))
                          (*(longlong **)(param_1 + 0x110),param_3[6]);
    local_140 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x550))
                          (*(longlong **)(param_1 + 0x110),param_3[7]);
    local_148 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x550))
                          (*(longlong **)(param_1 + 0x110),param_3[8]);
    local_130 = *(undefined8 *)(*(longlong *)*local_170 + 0x48);
    uVar24 = *(undefined8 *)(*(longlong *)*local_170 + 0x50);
    local_138 = *(undefined8 *)(param_1 + 0x120);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"Color",uVar20);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"Output",uVar19);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"Depth",uVar16);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"MotionVectors",uVar17);
    NVSDK_NGX_Parameter_SetF(uVar24,"Jitter.Offset.X");
    NVSDK_NGX_Parameter_SetF(uVar24,"Jitter.Offset.Y");
    NVSDK_NGX_Parameter_SetI(uVar24,"Reset",uVar4);
    uVar25 = -(uint)(fVar2 == 0.0);
    NVSDK_NGX_Parameter_SetF(uVar24,"MV.Scale.X",~uVar25 & (uint)fVar2 | uVar25 & 0x3f800000);
    uVar25 = -(uint)(fVar3 == 0.0);
    NVSDK_NGX_Parameter_SetF(uVar24,"MV.Scale.Y",~uVar25 & (uint)fVar3 | uVar25 & 0x3f800000);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"TransparencyMask",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"ExposureTexture",uVar18);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSS.Input.Bias.Current.Color.Mask",local_120);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Albedo",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Roughness",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Metallic",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Specular",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Subsurface",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Normals",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.ShadingModelId",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.MaterialId",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Attrib.8",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Attrib.9",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.SpecularMvec",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Attrib.11",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Attrib.12",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Attrib.13",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Attrib.14",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Attrib.15",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"TonemapperType",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"MotionVectors3D",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"IsParticleMask",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"AnimatedTextureMask",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DepthHighRes",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"Position.ViewSpace",0);
    NVSDK_NGX_Parameter_SetF(uVar24,"FrameTimeDeltaInMsec");
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"RayTracingHitDistance",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Color.Subrect.Base.X",local_15c);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Color.Subrect.Base.Y",local_158);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Depth.Subrect.Base.X",local_154);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Depth.Subrect.Base.Y",local_150);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.MV.Subrect.Base.X",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.MV.Subrect.Base.Y",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Translucency.Subrect.Base.X",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Translucency.Subrect.Base.Y",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Bias.Current.Color.Subrect.Base.X",local_128);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Bias.Current.Color.Subrect.Base.Y",local_124);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Output.Subrect.Base.X",local_14c);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Output.Subrect.Base.Y",local_178);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Render.Subrect.Dimensions.Width",local_174);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Render.Subrect.Dimensions.Height");
    NVSDK_NGX_Parameter_SetF(uVar24,"DLSS.Pre.Exposure");
    NVSDK_NGX_Parameter_SetF(uVar24,"DLSS.Exposure.Scale");
    NVSDK_NGX_Parameter_SetI(uVar24,"DLSS.Indicator.Invert.X.Axis",0);
    NVSDK_NGX_Parameter_SetI(uVar24,"DLSS.Indicator.Invert.Y.Axis",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSS.Input.DiffuseAlbedo",local_110);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSS.Input.SpecularAlbedo",local_118);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.DiffuseAlbedo.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.DiffuseAlbedo.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.SpecularAlbedo.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.SpecularAlbedo.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Normals.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Normals.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Roughness.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Roughness.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Emissive",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSSD.Alpha",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSSD.OutputAlpha",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSSD.ReflectedAlbedo",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSSD.ColorBeforeParticles",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSSD.ColorAfterParticles",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSSD.ColorBeforeTransparency",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSSD.ColorAfterTransparency",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSSD.ColorBeforeFog",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSSD.ColorAfterFog",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSSD.ScreenSpaceSubsurfaceScatteringGuide",0);
    NVSDK_NGX_Parameter_SetD3d11Resource
              (uVar24,"DLSSD.ColorBeforeScreenSpaceSubsurfaceScattering",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSSD.ColorAfterScreenSpaceSubsurfaceScattering",0)
    ;
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSSD.ScreenSpaceRefractionGuide",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSSD.ColorBeforeScreenSpaceRefraction",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSSD.ColorAfterScreenSpaceRefraction",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSSD.DepthOfFieldGuide",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSSD.ColorBeforeDepthOfField",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSSD.ColorAfterDepthOfField",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSSD.DiffuseHitDistance");
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSSD.SpecularHitDistance");
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSSD.DiffuseRayDirection");
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSSD.SpecularRayDirection");
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSSD.DiffuseRayDirectionHitDistance");
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSSD.SpecularRayDirectionHitDistance");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.Alpha.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.Alpha.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.OutputAlpha.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.OutputAlpha.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ReflectedAlbedo.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ReflectedAlbedo.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorAfterParticles.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorAfterParticles.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorBeforeParticles.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorBeforeParticles.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorBeforeTransparency.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorBeforeTransparency.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorAfterTransparency.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorAfterTransparency.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorBeforeFog.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorBeforeFog.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorAfterFog.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorAfterFog.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ScreenSpaceSubsurfaceScatteringGuide.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ScreenSpaceSubsurfaceScatteringGuide.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI
              (uVar24,"DLSSD.ColorBeforeScreenSpaceSubsurfaceScattering.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI
              (uVar24,"DLSSD.ColorBeforeScreenSpaceSubsurfaceScattering.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI
              (uVar24,"DLSSD.ColorAfterScreenSpaceSubsurfaceScattering.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI
              (uVar24,"DLSSD.ColorAfterScreenSpaceSubsurfaceScattering.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ScreenSpaceRefractionGuide.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ScreenSpaceRefractionGuide.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorBeforeScreenSpaceRefraction.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorBeforeScreenSpaceRefraction.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorAfterScreenSpaceRefraction.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorAfterScreenSpaceRefraction.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.DepthOfFieldGuide.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.DepthOfFieldGuide.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorBeforeDepthOfField.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorBeforeDepthOfField.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorAfterDepthOfField.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorAfterDepthOfField.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.DiffuseHitDistance.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.DiffuseHitDistance.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.SpecularHitDistance.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.SpecularHitDistance.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.DiffuseRayDirection.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.DiffuseRayDirection.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.SpecularRayDirection.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.SpecularRayDirection.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.DiffuseRayDirectionHitDistance.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.DiffuseRayDirectionHitDistance.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.SpecularRayDirectionHitDistance.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.SpecularRayDirectionHitDistance.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetVoidPointer(uVar24,"WorldToViewMatrix",0);
    NVSDK_NGX_Parameter_SetVoidPointer(uVar24,"ViewToClipMatrix",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Normals",local_140);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Roughness",local_148);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSS.TransparencyLayer",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSS.TransparencyLayerOpacity",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSS.TransparencyLayerMvecs",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSS.DisocclusionMask",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.TransparencyLayer.Subrect.Base.X",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.TransparencyLayer.Subrect.Base.Y",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.TransparencyLayerOpacity.Subrect.Base.X",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.TransparencyLayerOpacity.Subrect.Base.Y",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.TransparencyLayerMvecs.Subrect.Base.X",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.TransparencyLayerMvecs.Subrect.Base.Y",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.DisocclusionMask.Subrect.Base.X",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.DisocclusionMask.Subrect.Base.Y",0);
  }
  else {
    if (*(char *)((longlong)param_3 + 0x1b2) == '\0') {
      uVar18 = 0;
    }
    else {
      uVar18 = (**(code **)(*plVar22 + 0x550))(plVar22,param_3[4]);
    }
    local_148 = CONCAT44(local_148._4_4_,*(undefined4 *)(param_3 + 0xc));
    local_140 = CONCAT44(local_140._4_4_,*(undefined4 *)((longlong)param_3 + 100));
    if (*(char *)(param_3 + 0x36) == '\0') {
      uVar19 = (**(code **)(*plVar22 + 0x550))(plVar22,param_3[3]);
    }
    else {
      uVar19 = 0;
    }
    fVar2 = *(float *)(param_3 + 0x11);
    fVar3 = *(float *)((longlong)param_3 + 0x8c);
    uVar4 = *(undefined1 *)(param_3 + 0x33);
    uVar20 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x550))
                       (*(longlong **)(param_1 + 0x110),param_3[9]);
    uVar21 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x550))
                       (*(longlong **)(param_1 + 0x110),*param_3);
    local_130 = *(undefined8 *)(*(longlong *)*local_170 + 0x48);
    uVar24 = *(undefined8 *)(*(longlong *)*local_170 + 0x50);
    local_138 = *(undefined8 *)(param_1 + 0x120);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"Color",uVar21);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"Output",uVar20);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"Depth",uVar16);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"MotionVectors",uVar17);
    NVSDK_NGX_Parameter_SetF(uVar24,"Jitter.Offset.X");
    NVSDK_NGX_Parameter_SetF(uVar24,"Jitter.Offset.Y");
    NVSDK_NGX_Parameter_SetF(uVar24,"Sharpness");
    NVSDK_NGX_Parameter_SetI(uVar24,"Reset",uVar4);
    uVar25 = -(uint)(fVar2 == 0.0);
    NVSDK_NGX_Parameter_SetF(uVar24,"MV.Scale.X",~uVar25 & (uint)fVar2 | uVar25 & 0x3f800000);
    uVar25 = -(uint)(fVar3 == 0.0);
    NVSDK_NGX_Parameter_SetF(uVar24,"MV.Scale.Y",~uVar25 & (uint)fVar3 | uVar25 & 0x3f800000);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"TransparencyMask",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"ExposureTexture",uVar19);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DLSS.Input.Bias.Current.Color.Mask",uVar18);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Albedo",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Roughness",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Metallic",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Specular",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Subsurface",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Normals",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.ShadingModelId",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.MaterialId",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Attrib.8",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Attrib.9",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Attrib.10",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Attrib.11",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Attrib.12",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Attrib.13",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Attrib.14",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"GBuffer.Attrib.15",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"TonemapperType",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"MotionVectors3D",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"IsParticleMask",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"AnimatedTextureMask",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"DepthHighRes",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"Position.ViewSpace",0);
    NVSDK_NGX_Parameter_SetF(uVar24,"FrameTimeDeltaInMsec");
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"RayTracingHitDistance",0);
    NVSDK_NGX_Parameter_SetD3d11Resource(uVar24,"MotionVectorsReflection",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Color.Subrect.Base.X",local_15c);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Color.Subrect.Base.Y",local_158);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Depth.Subrect.Base.X",local_154);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Depth.Subrect.Base.Y",local_150);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.MV.Subrect.Base.X",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.MV.Subrect.Base.Y",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Translucency.Subrect.Base.X",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Translucency.Subrect.Base.Y",0);
    NVSDK_NGX_Parameter_SetUI
              (uVar24,"DLSS.Input.Bias.Current.Color.Subrect.Base.X",local_148 & 0xffffffff);
    NVSDK_NGX_Parameter_SetUI
              (uVar24,"DLSS.Input.Bias.Current.Color.Subrect.Base.Y",local_140 & 0xffffffff);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Output.Subrect.Base.X",local_14c);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Output.Subrect.Base.Y",local_178);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Render.Subrect.Dimensions.Width",local_174);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Render.Subrect.Dimensions.Height");
    NVSDK_NGX_Parameter_SetF(uVar24,"DLSS.Pre.Exposure");
    NVSDK_NGX_Parameter_SetF(uVar24,"DLSS.Exposure.Scale");
    NVSDK_NGX_Parameter_SetI(uVar24,"DLSS.Indicator.Invert.X.Axis",0);
    NVSDK_NGX_Parameter_SetI(uVar24,"DLSS.Indicator.Invert.Y.Axis",0);
  }
  NVSDK_NGX_D3D11_EvaluateFeature_C(local_138,local_130,uVar24,0);
  *(undefined4 *)(*(longlong *)*local_170 + 0x58) = *(undefined4 *)(param_1 + 0x50);
  param_4 = local_170;
LAB_143bfde14:
  plVar22 = (longlong *)param_4[1];
  if (plVar22 != (longlong *)0x0) {
    LOCK();
    plVar23 = plVar22 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
      (**(code **)*plVar22)(plVar22);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bfe4b4 FUN_143bfe4b4 body=102 status=ok
// SIG undefined FUN_143bfe4b4(void)

void FUN_143bfe4b4(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014afb8a80;
  local_14 = 0xb;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1464a78e6(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bfe524 FUN_143bfe524 body=8303 status=ok
// SIG undefined FUN_143bfe524(void)

void FUN_143bfe524(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 *puVar15;
  char cVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  longlong *plVar22;
  longlong *plVar23;
  undefined8 uVar24;
  int iVar25;
  uint uVar26;
  undefined1 auStack_4d8 [32];
  undefined4 local_4b8;
  longlong local_4b0;
  undefined4 local_4a8;
  int local_4a4;
  longlong *local_4a0;
  int local_494;
  int local_490;
  int local_48c;
  undefined4 local_488;
  undefined4 local_484;
  undefined8 local_480;
  ulonglong local_478;
  undefined8 local_470;
  undefined8 local_468;
  int local_45c;
  undefined8 local_458;
  ulonglong local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined4 local_434;
  undefined8 local_430;
  undefined8 local_428;
  longlong local_420;
  longlong local_418;
  longlong local_410;
  undefined1 *local_408;
  undefined4 local_400;
  undefined8 local_3fc;
  undefined4 local_3f4;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined8 local_3d4;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined1 local_3a4;
  longlong *local_390;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  if (*(char *)(param_1 + 0x18) != '\x01') goto LAB_143bffe68;
  FUN_1418419e8(param_3);
  local_434 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x570))
                        (*(longlong **)(param_1 + 0x110),*param_3);
  uVar17 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x538))
                     (*(longlong **)(param_1 + 0x110),param_2);
  cVar16 = FUN_1403127a6(*param_4,param_3);
  if (cVar16 != '\0') {
    puVar7 = (undefined8 *)*param_4;
    *puVar7 = 0;
    plVar22 = (longlong *)puVar7[1];
    if (plVar22 != (longlong *)0x0) {
      puVar7[1] = 0;
      LOCK();
      plVar23 = plVar22 + 1;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)*plVar23 == 0) {
        (**(code **)*plVar22)(plVar22);
        LOCK();
        piVar1 = (int *)((longlong)plVar22 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
    }
  }
  if ((char)param_3[0x33] == '\x01') {
    FUN_1464a74a6(param_1,&local_3c8,param_3);
    plVar22 = local_3c0;
    puVar8 = (ulonglong *)*param_4;
    if (puVar8 != &local_3c8) {
      *puVar8 = local_3c8;
      local_3c8 = 0;
      plVar23 = (longlong *)puVar8[1];
      if (local_3c0 != plVar23) {
        local_3c0 = (longlong *)0x0;
        puVar8[1] = (ulonglong)plVar22;
        if (plVar23 != (longlong *)0x0) {
          LOCK();
          plVar22 = plVar23 + 1;
          *(int *)plVar22 = (int)*plVar22 + -1;
          UNLOCK();
          if ((int)*plVar22 == 0) {
            (**(code **)*plVar23)(plVar23);
            LOCK();
            piVar1 = (int *)((longlong)plVar23 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar23 + 0x10))(plVar23);
            }
          }
        }
      }
    }
    plVar22 = local_3c0;
    if (local_3c0 != (longlong *)0x0) {
      LOCK();
      plVar23 = local_3c0 + 1;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)*plVar23 == 0) {
        (**(code **)*local_3c0)(local_3c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar22 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
    }
  }
  lVar18 = *(longlong *)*param_4;
  local_4b0 = param_2;
  local_4a0 = param_4;
  local_468 = uVar17;
  if (lVar18 == 0) {
    local_408 = (undefined1 *)0x0;
    NVSDK_NGX_D3D12_AllocateParameters(&local_408);
    FUN_145a00270(param_1,local_408,param_3);
    local_410 = 0;
    iVar25 = 1 << (*(byte *)((longlong)param_3 + 0x1b4) & 0x1f);
    lVar18 = param_3[0x37];
    if (*(int *)((longlong)param_3 + 0x1bc) == 1) {
      FUN_1485f25a2(param_3,&local_3c8);
      puVar15 = local_408;
      NVSDK_NGX_Parameter_SetUI(local_408,"CreationNodeMask",iVar25);
      NVSDK_NGX_Parameter_SetUI(puVar15,"VisibilityNodeMask",(int)lVar18);
      NVSDK_NGX_Parameter_SetUI(puVar15,"Width",local_3c0._4_4_);
      NVSDK_NGX_Parameter_SetUI(puVar15,"Height",local_3b8);
      NVSDK_NGX_Parameter_SetUI(puVar15,"OutWidth",local_3b4);
      NVSDK_NGX_Parameter_SetUI(puVar15,"OutHeight",local_3b0);
      NVSDK_NGX_Parameter_SetI(puVar15,"PerfQualityValue",local_3ac);
      NVSDK_NGX_Parameter_SetI(puVar15,"DLSS.Feature.Create.Flags",local_3a8);
      NVSDK_NGX_Parameter_SetI(puVar15,"DLSS.Enable.Output.Subrects",local_3a4);
      NVSDK_NGX_Parameter_SetI(puVar15,"DLSS.Denoise.Mode",1);
      NVSDK_NGX_Parameter_SetUI(puVar15,"DLSS.Roughness.Mode",local_3c8._4_4_);
      NVSDK_NGX_Parameter_SetUI(puVar15,"DLSS.Use.HW.Depth",(ulonglong)local_3c0 & 0xffffffff);
      uVar26 = NVSDK_NGX_D3D12_CreateFeature(uVar17,0xd,puVar15,&local_410);
      if ((uVar26 & 0xfff00000) == 0xbad00000) {
        puVar7 = (undefined8 *)*local_4a0;
        *puVar7 = 0;
        plVar22 = (longlong *)puVar7[1];
        if (plVar22 != (longlong *)0x0) {
          puVar7[1] = 0;
          LOCK();
          plVar23 = plVar22 + 1;
          *(int *)plVar23 = (int)*plVar23 + -1;
          UNLOCK();
          if ((int)*plVar23 == 0) {
            (**(code **)*plVar22)(plVar22);
            LOCK();
            piVar1 = (int *)((longlong)plVar22 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar22 + 0x10))(plVar22);
            }
          }
        }
      }
      else {
        lVar9 = param_3[0xc];
        lVar11 = param_3[0xd];
        lVar12 = param_3[0xe];
        lVar13 = param_3[0xf];
        local_478 = *(ulonglong *)((longlong)param_3 + 0x19c);
        local_4a4 = *(int *)((longlong)param_3 + 0x1a4);
        fVar2 = *(float *)((longlong)param_3 + 0x194);
        local_4a8 = CONCAT31(local_4a8._1_3_,(char)param_3[0x32]);
        lVar14 = param_3[0x36];
        uVar4 = *(undefined1 *)((longlong)param_3 + 0x1b3);
        local_450 = *(ulonglong *)((longlong)param_3 + 0x1b4);
        local_48c = *(int *)((longlong)param_3 + 0x1bc);
        plVar22 = (longlong *)FUN_14001cc68(0x70,0x10);
        uVar17 = local_468;
        param_2 = local_4b0;
        plVar22[1] = (longlong)&DAT_100000001;
        *plVar22 = (longlong)&PTR_FUN_14afb9f70;
        uVar5 = *(undefined4 *)(param_1 + 0x50);
        plVar22[3] = lVar9;
        plVar22[4] = lVar11;
        plVar22[5] = lVar12;
        plVar22[6] = lVar13;
        plVar22[7] = local_478;
        *(int *)(plVar22 + 8) = local_4a4;
        *(undefined1 *)((longlong)plVar22 + 0x44) = (undefined1)local_4a8;
        *(bool *)((longlong)plVar22 + 0x45) = fVar2 != 0.0;
        *(short *)((longlong)plVar22 + 0x46) = (short)lVar14;
        *(undefined1 *)(plVar22 + 9) = uVar4;
        *(ulonglong *)((longlong)plVar22 + 0x4c) = local_450;
        *(int *)((longlong)plVar22 + 0x54) = local_48c;
        plVar22[0xb] = local_410;
        plVar22[0xc] = (longlong)local_408;
        *(undefined4 *)(plVar22 + 0xd) = uVar5;
        *(undefined1 *)((longlong)plVar22 + 0x6c) = 0;
        plVar22[2] = (longlong)&PTR_FUN_14afb9f88;
        if (plVar22 == (longlong *)0x0) {
          puVar7 = (undefined8 *)*local_4a0;
          *puVar7 = 0x10;
          plVar23 = (longlong *)puVar7[1];
          if (plVar23 != (longlong *)0x0) {
            puVar7[1] = 0;
LAB_143c00518:
            LOCK();
            plVar10 = plVar23 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*plVar23)(plVar23);
              LOCK();
              piVar1 = (int *)((longlong)plVar23 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar23 + 0x10))(plVar23);
              }
            }
            if (plVar22 != (longlong *)0x0) goto LAB_143c00563;
          }
        }
        else {
          LOCK();
          *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
          UNLOCK();
          plVar10 = (longlong *)*local_4a0;
          *plVar10 = (longlong)(plVar22 + 2);
          plVar23 = (longlong *)plVar10[1];
          if (plVar22 == plVar23) {
            LOCK();
            plVar23 = plVar22 + 1;
            *(int *)plVar23 = (int)*plVar23 + -1;
            UNLOCK();
            if ((int)*plVar23 == 0) {
              (**(code **)*plVar22)(plVar22);
              LOCK();
              piVar1 = (int *)((longlong)plVar22 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar22 + 0x10))(plVar22);
              }
            }
          }
          else {
            plVar10[1] = (longlong)plVar22;
            if (plVar23 != (longlong *)0x0) goto LAB_143c00518;
          }
LAB_143c00563:
          LOCK();
          plVar23 = plVar22 + 1;
          *(int *)plVar23 = (int)*plVar23 + -1;
          UNLOCK();
          if ((int)*plVar23 == 0) {
            (**(code **)*plVar22)(plVar22);
            LOCK();
            piVar1 = (int *)((longlong)plVar22 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar22 + 0x10))(plVar22);
            }
          }
        }
        *(undefined1 *)(*(longlong *)*local_4a0 + 0x5c) = 1;
      }
    }
    plVar22 = (longlong *)*local_4a0;
    local_420 = *plVar22;
    if (local_420 == 0) {
      FUN_1485f24ca(param_3,&local_3c8);
      puVar15 = local_408;
      NVSDK_NGX_Parameter_SetUI(local_408,"CreationNodeMask",iVar25);
      NVSDK_NGX_Parameter_SetUI(puVar15,"VisibilityNodeMask",(int)lVar18);
      NVSDK_NGX_Parameter_SetUI(puVar15,"Width",local_3c8 & 0xffffffff);
      NVSDK_NGX_Parameter_SetUI(puVar15,"Height",local_3c8._4_4_);
      NVSDK_NGX_Parameter_SetUI(puVar15,"OutWidth",(ulonglong)local_3c0 & 0xffffffff);
      NVSDK_NGX_Parameter_SetUI(puVar15,"OutHeight",local_3c0._4_4_);
      NVSDK_NGX_Parameter_SetI(puVar15,"PerfQualityValue",local_3b8);
      NVSDK_NGX_Parameter_SetI(puVar15,"DLSS.Feature.Create.Flags",local_3b4);
      NVSDK_NGX_Parameter_SetI(puVar15,"DLSS.Enable.Output.Subrects",(undefined1)local_3b0);
      NVSDK_NGX_D3D12_CreateFeature(uVar17,1,puVar15,&local_410);
      lVar18 = param_3[0xc];
      lVar9 = param_3[0xd];
      lVar11 = param_3[0xe];
      lVar12 = param_3[0xf];
      local_478 = *(ulonglong *)((longlong)param_3 + 0x19c);
      local_4a4 = *(int *)((longlong)param_3 + 0x1a4);
      fVar2 = *(float *)((longlong)param_3 + 0x194);
      local_4a8 = CONCAT31(local_4a8._1_3_,(char)param_3[0x32]);
      lVar13 = param_3[0x36];
      uVar4 = *(undefined1 *)((longlong)param_3 + 0x1b3);
      uVar17 = *(undefined8 *)((longlong)param_3 + 0x1b4);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0x1bc);
      plVar22 = (longlong *)FUN_14001cc68(0x70,0x10);
      param_2 = local_4b0;
      plVar22[1] = (longlong)&DAT_100000001;
      *plVar22 = (longlong)&PTR_FUN_14afb9f70;
      uVar6 = *(undefined4 *)(param_1 + 0x50);
      plVar22[3] = lVar18;
      plVar22[4] = lVar9;
      plVar22[5] = lVar11;
      plVar22[6] = lVar12;
      plVar22[7] = local_478;
      *(int *)(plVar22 + 8) = local_4a4;
      *(undefined1 *)((longlong)plVar22 + 0x44) = (undefined1)local_4a8;
      *(bool *)((longlong)plVar22 + 0x45) = fVar2 != 0.0;
      *(short *)((longlong)plVar22 + 0x46) = (short)lVar13;
      *(undefined1 *)(plVar22 + 9) = uVar4;
      *(undefined8 *)((longlong)plVar22 + 0x4c) = uVar17;
      *(undefined4 *)((longlong)plVar22 + 0x54) = uVar5;
      plVar22[0xb] = local_410;
      plVar22[0xc] = (longlong)local_408;
      *(undefined4 *)(plVar22 + 0xd) = uVar6;
      *(undefined1 *)((longlong)plVar22 + 0x6c) = 0;
      plVar22[2] = (longlong)&PTR_FUN_14afb9f88;
      if (plVar22 == (longlong *)0x0) {
        puVar7 = (undefined8 *)*local_4a0;
        *puVar7 = 0x10;
        plVar23 = (longlong *)puVar7[1];
        if (plVar23 != (longlong *)0x0) {
          puVar7[1] = 0;
LAB_143c0047f:
          LOCK();
          plVar10 = plVar23 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar23)(plVar23);
            LOCK();
            piVar1 = (int *)((longlong)plVar23 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar23 + 0x10))(plVar23);
            }
          }
          if (plVar22 != (longlong *)0x0) goto LAB_143c004c5;
        }
      }
      else {
        LOCK();
        *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
        UNLOCK();
        plVar10 = (longlong *)*local_4a0;
        *plVar10 = (longlong)(plVar22 + 2);
        plVar23 = (longlong *)plVar10[1];
        if (plVar22 == plVar23) {
          LOCK();
          plVar23 = plVar22 + 1;
          *(int *)plVar23 = (int)*plVar23 + -1;
          UNLOCK();
          if ((int)*plVar23 == 0) {
            (**(code **)*plVar22)(plVar22);
            LOCK();
            piVar1 = (int *)((longlong)plVar22 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar22 + 0x10))(plVar22);
            }
          }
        }
        else {
          plVar10[1] = (longlong)plVar22;
          if (plVar23 != (longlong *)0x0) goto LAB_143c0047f;
        }
LAB_143c004c5:
        LOCK();
        plVar23 = plVar22 + 1;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)*plVar23 == 0) {
          (**(code **)*plVar22)(plVar22);
          LOCK();
          piVar1 = (int *)((longlong)plVar22 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
          }
        }
      }
      plVar22 = (longlong *)*local_4a0;
      local_420 = *plVar22;
    }
    plVar23 = local_4a0;
    local_418 = plVar22[1];
    if (local_418 != 0) {
      LOCK();
      *(int *)(local_418 + 8) = *(int *)(local_418 + 8) + 1;
      UNLOCK();
    }
    FUN_143bfbe8e(param_1,&local_420);
    lVar18 = *(longlong *)*plVar23;
  }
  plVar22 = *(longlong **)(param_1 + 0x110);
  local_450 = CONCAT44(local_450._4_4_,(int)param_3[0xe]);
  local_4a8 = *(undefined4 *)((longlong)param_3 + 0x74);
  local_494 = (int)param_3[0xc];
  local_4a4 = (int)param_3[0xd] - local_494;
  local_490 = *(int *)((longlong)param_3 + 100);
  local_478 = CONCAT44(local_478._4_4_,*(int *)((longlong)param_3 + 0x6c) - local_490);
  lVar9 = param_3[1];
  local_48c = local_490;
  local_45c = local_494;
  if (*(char *)(lVar18 + 0x5c) == '\0') {
    if (lVar9 == 0) {
      local_470 = 0;
    }
    else {
      local_4b8 = 0xffffffff;
      (**(code **)(*plVar22 + 0x5b0))(plVar22,param_2,lVar9,0x40);
      local_470 = (**(code **)(*plVar22 + 0x560))(plVar22,lVar9);
      local_494 = (int)param_3[0xc];
      local_490 = *(int *)((longlong)param_3 + 100);
    }
    lVar18 = param_3[2];
    if (lVar18 == 0) {
      uVar17 = 0;
    }
    else {
      local_4b8 = 0xffffffff;
      (**(code **)(*plVar22 + 0x5b0))(plVar22,param_2,lVar18,0x40);
      uVar17 = (**(code **)(*plVar22 + 0x560))(plVar22,lVar18);
    }
    if ((*(char *)((longlong)param_3 + 0x1b2) == '\x01') && (lVar18 = param_3[4], lVar18 != 0)) {
      local_4b8 = 0xffffffff;
      (**(code **)(*plVar22 + 0x5b0))(plVar22,local_4b0,lVar18,0x40);
      local_480 = (**(code **)(*plVar22 + 0x560))(plVar22,lVar18);
    }
    else {
      local_480 = 0;
    }
    local_488 = (undefined4)param_3[0xc];
    local_484 = *(undefined4 *)((longlong)param_3 + 100);
    if (((char)param_3[0x36] == '\0') && (lVar18 = param_3[3], lVar18 != 0)) {
      local_4b8 = 0xffffffff;
      (**(code **)(*plVar22 + 0x5b0))(plVar22,local_4b0,lVar18,0x40);
      uVar19 = (**(code **)(*plVar22 + 0x560))(plVar22,lVar18);
    }
    else {
      uVar19 = 0;
    }
    fVar2 = *(float *)(param_3 + 0x11);
    fVar3 = *(float *)((longlong)param_3 + 0x8c);
    lVar9 = param_3[0x33];
    lVar18 = param_3[9];
    if (lVar18 == 0) {
      uVar20 = 0;
    }
    else {
      plVar22 = *(longlong **)(param_1 + 0x110);
      local_4b8 = 0xffffffff;
      (**(code **)(*plVar22 + 0x5b0))(plVar22,local_4b0,lVar18,8);
      uVar20 = (**(code **)(*plVar22 + 0x560))(plVar22,lVar18);
    }
    lVar18 = *param_3;
    if (lVar18 == 0) {
      uVar21 = 0;
    }
    else {
      plVar22 = *(longlong **)(param_1 + 0x110);
      local_4b8 = 0xffffffff;
      (**(code **)(*plVar22 + 0x5b0))(plVar22,local_4b0,lVar18,0x40);
      uVar21 = (**(code **)(*plVar22 + 0x560))(plVar22,lVar18);
    }
    if (DAT_14ca8507a == '\x01') {
      FUN_140048e76(&local_3c8,*(undefined8 *)(local_4b0 + 0x38));
      local_3f4 = DAT_14c9a52a0;
      local_3fc = DAT_14c9a5298;
      local_3f0 = DAT_14c9a5298;
      local_3e8 = DAT_14c9a52a0;
      local_3e4 = 0;
      uStack_3e0 = 0;
      uStack_3dc = 1;
      uStack_3d8 = 0;
      local_3d4 = 0x100000000;
      local_408 = &DAT_100000001;
      local_400 = 1;
      (**(code **)(*local_390 + 0x228))(local_390,param_3[10],param_3[0xb]);
      FUN_140048db6(&local_3c8);
    }
    param_4 = local_4a0;
    local_458 = *(undefined8 *)(*(longlong *)*local_4a0 + 0x48);
    uVar24 = *(undefined8 *)(*(longlong *)*local_4a0 + 0x50);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"Color",uVar21);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"Output",uVar20);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"Depth",local_470);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"MotionVectors",uVar17);
    NVSDK_NGX_Parameter_SetF(uVar24,"Jitter.Offset.X");
    NVSDK_NGX_Parameter_SetF(uVar24,"Jitter.Offset.Y");
    NVSDK_NGX_Parameter_SetF(uVar24,"Sharpness");
    NVSDK_NGX_Parameter_SetI(uVar24,"Reset",(char)lVar9);
    uVar26 = -(uint)(fVar2 == 0.0);
    NVSDK_NGX_Parameter_SetF(uVar24,"MV.Scale.X",~uVar26 & (uint)fVar2 | uVar26 & 0x3f800000);
    uVar26 = -(uint)(fVar3 == 0.0);
    NVSDK_NGX_Parameter_SetF(uVar24,"MV.Scale.Y",~uVar26 & (uint)fVar3 | uVar26 & 0x3f800000);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"TransparencyMask",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"ExposureTexture",uVar19);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSS.Input.Bias.Current.Color.Mask",local_480);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Albedo",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Roughness",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Metallic",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Specular",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Subsurface",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Normals",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.ShadingModelId",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.MaterialId",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Attrib.8",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Attrib.9",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Attrib.10",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Attrib.11",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Attrib.12",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Attrib.13",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Attrib.14",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Attrib.15",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"TonemapperType",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"MotionVectors3D",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"IsParticleMask",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"AnimatedTextureMask",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DepthHighRes",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"Position.ViewSpace",0);
    NVSDK_NGX_Parameter_SetF(uVar24,"FrameTimeDeltaInMsec");
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"RayTracingHitDistance",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"MotionVectorsReflection",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Color.Subrect.Base.X",local_45c);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Color.Subrect.Base.Y",local_48c);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Depth.Subrect.Base.X",local_494);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Depth.Subrect.Base.Y",local_490);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.MV.Subrect.Base.X",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.MV.Subrect.Base.Y",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Translucency.Subrect.Base.X",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Translucency.Subrect.Base.Y",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Bias.Current.Color.Subrect.Base.X",local_488);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Bias.Current.Color.Subrect.Base.Y",local_484);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Output.Subrect.Base.X",local_450 & 0xffffffff);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Output.Subrect.Base.Y",local_4a8);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Render.Subrect.Dimensions.Width",local_4a4);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Render.Subrect.Dimensions.Height");
    NVSDK_NGX_Parameter_SetF(uVar24,"DLSS.Pre.Exposure");
    NVSDK_NGX_Parameter_SetF(uVar24,"DLSS.Exposure.Scale");
    NVSDK_NGX_Parameter_SetI(uVar24,"DLSS.Indicator.Invert.X.Axis",0);
    NVSDK_NGX_Parameter_SetI(uVar24,"DLSS.Indicator.Invert.Y.Axis",0);
    uVar17 = local_458;
  }
  else {
    if (lVar9 == 0) {
      local_428 = 0;
    }
    else {
      local_4b8 = 0xffffffff;
      (**(code **)(*plVar22 + 0x5b0))(plVar22,param_2,lVar9,0x40);
      local_428 = (**(code **)(*plVar22 + 0x560))(plVar22,lVar9);
      local_494 = (int)param_3[0xc];
      local_490 = *(int *)((longlong)param_3 + 100);
    }
    lVar18 = param_3[2];
    if (lVar18 == 0) {
      local_430 = 0;
    }
    else {
      local_4b8 = 0xffffffff;
      (**(code **)(*plVar22 + 0x5b0))(plVar22,param_2,lVar18,0x40);
      local_430 = (**(code **)(*plVar22 + 0x560))(plVar22,lVar18);
    }
    if ((*(char *)((longlong)param_3 + 0x1b2) == '\x01') && (lVar18 = param_3[4], lVar18 != 0)) {
      local_4b8 = 0xffffffff;
      (**(code **)(*plVar22 + 0x5b0))(plVar22,param_2,lVar18,0x40);
      local_440 = (**(code **)(*plVar22 + 0x560))(plVar22,lVar18);
    }
    else {
      local_440 = 0;
    }
    local_488 = (undefined4)param_3[0xc];
    local_484 = *(undefined4 *)((longlong)param_3 + 100);
    if (((char)param_3[0x36] == '\0') && (lVar18 = param_3[3], lVar18 != 0)) {
      local_4b8 = 0xffffffff;
      (**(code **)(*plVar22 + 0x5b0))(plVar22,param_2,lVar18,0x40);
      local_448 = (**(code **)(*plVar22 + 0x560))(plVar22,lVar18);
    }
    else {
      local_448 = 0;
    }
    fVar2 = *(float *)(param_3 + 0x11);
    fVar3 = *(float *)((longlong)param_3 + 0x8c);
    lVar9 = param_3[0x33];
    lVar18 = param_3[9];
    if (lVar18 == 0) {
      uVar19 = 0;
    }
    else {
      plVar22 = *(longlong **)(param_1 + 0x110);
      local_4b8 = 0xffffffff;
      (**(code **)(*plVar22 + 0x5b0))(plVar22,param_2,lVar18,8);
      uVar19 = (**(code **)(*plVar22 + 0x560))(plVar22,lVar18);
    }
    lVar18 = *param_3;
    if (lVar18 == 0) {
      uVar20 = 0;
    }
    else {
      plVar22 = *(longlong **)(param_1 + 0x110);
      local_4b8 = 0xffffffff;
      (**(code **)(*plVar22 + 0x5b0))(plVar22,param_2,lVar18,0x40);
      uVar20 = (**(code **)(*plVar22 + 0x560))(plVar22,lVar18);
    }
    lVar18 = param_3[5];
    if (lVar18 == 0) {
      local_480 = 0;
    }
    else {
      plVar22 = *(longlong **)(param_1 + 0x110);
      local_4b8 = 0xffffffff;
      (**(code **)(*plVar22 + 0x5b0))(plVar22,local_4b0,lVar18,0x40);
      local_480 = (**(code **)(*plVar22 + 0x560))(plVar22,lVar18);
    }
    lVar18 = param_3[6];
    if (lVar18 == 0) {
      local_470 = 0;
    }
    else {
      plVar22 = *(longlong **)(param_1 + 0x110);
      local_4b8 = 0xffffffff;
      (**(code **)(*plVar22 + 0x5b0))(plVar22,local_4b0,lVar18,0x40);
      local_470 = (**(code **)(*plVar22 + 0x560))(plVar22,lVar18);
    }
    lVar18 = param_3[7];
    if (lVar18 == 0) {
      local_458 = 0;
    }
    else {
      plVar22 = *(longlong **)(param_1 + 0x110);
      local_4b8 = 0xffffffff;
      (**(code **)(*plVar22 + 0x5b0))(plVar22,local_4b0,lVar18,0x40);
      local_458 = (**(code **)(*plVar22 + 0x560))(plVar22,lVar18);
    }
    lVar18 = param_3[8];
    if (lVar18 == 0) {
      uVar21 = 0;
    }
    else {
      plVar22 = *(longlong **)(param_1 + 0x110);
      local_4b8 = 0xffffffff;
      (**(code **)(*plVar22 + 0x5b0))(plVar22,local_4b0,lVar18,0x40);
      uVar21 = (**(code **)(*plVar22 + 0x560))(plVar22,lVar18);
    }
    param_4 = local_4a0;
    if (DAT_14ca8507a == '\x01') {
      FUN_140048e76(&local_3c8,*(undefined8 *)(local_4b0 + 0x38));
      local_3f4 = DAT_14c9a52a0;
      local_3fc = DAT_14c9a5298;
      local_3f0 = DAT_14c9a5298;
      local_3e8 = DAT_14c9a52a0;
      local_3e4 = 0;
      uStack_3e0 = 0;
      uStack_3dc = 1;
      uStack_3d8 = 0;
      local_3d4 = 0x100000000;
      local_408 = &DAT_100000001;
      local_400 = 1;
      (**(code **)(*local_390 + 0x228))(local_390,param_3[10],param_3[0xb]);
      FUN_140048db6(&local_3c8);
    }
    uVar17 = *(undefined8 *)(*(longlong *)*param_4 + 0x48);
    uVar24 = *(undefined8 *)(*(longlong *)*param_4 + 0x50);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"Color",uVar20);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"Output",uVar19);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"Depth",local_428);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"MotionVectors",local_430);
    NVSDK_NGX_Parameter_SetF(uVar24,"Jitter.Offset.X");
    NVSDK_NGX_Parameter_SetF(uVar24,"Jitter.Offset.Y");
    NVSDK_NGX_Parameter_SetI(uVar24,"Reset",(char)lVar9);
    uVar26 = -(uint)(fVar2 == 0.0);
    NVSDK_NGX_Parameter_SetF(uVar24,"MV.Scale.X",~uVar26 & (uint)fVar2 | uVar26 & 0x3f800000);
    uVar26 = -(uint)(fVar3 == 0.0);
    NVSDK_NGX_Parameter_SetF(uVar24,"MV.Scale.Y",~uVar26 & (uint)fVar3 | uVar26 & 0x3f800000);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"TransparencyMask",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"ExposureTexture",local_448);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSS.Input.Bias.Current.Color.Mask",local_440);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Albedo",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Roughness",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Metallic",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Specular",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Subsurface",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Normals",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.ShadingModelId",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.MaterialId",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Attrib.8",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Attrib.9",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Attrib.11",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Attrib.12",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Attrib.13",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Attrib.14",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Attrib.15",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"TonemapperType",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"MotionVectors3D",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"IsParticleMask",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"AnimatedTextureMask",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DepthHighRes",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"Position.ViewSpace",0);
    NVSDK_NGX_Parameter_SetF(uVar24,"FrameTimeDeltaInMsec");
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"RayTracingHitDistance",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.SpecularMvec",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Color.Subrect.Base.X",local_45c);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Color.Subrect.Base.Y",local_48c);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Depth.Subrect.Base.X",local_494);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Depth.Subrect.Base.Y",local_490);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.MV.Subrect.Base.X",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.MV.Subrect.Base.Y",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Translucency.Subrect.Base.X",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Translucency.Subrect.Base.Y",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Bias.Current.Color.Subrect.Base.X",local_488);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Bias.Current.Color.Subrect.Base.Y",local_484);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Output.Subrect.Base.X",local_450 & 0xffffffff);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Output.Subrect.Base.Y",local_4a8);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Render.Subrect.Dimensions.Width",local_4a4);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Render.Subrect.Dimensions.Height",local_478 & 0xffffffff)
    ;
    NVSDK_NGX_Parameter_SetF(uVar24,"DLSS.Pre.Exposure");
    NVSDK_NGX_Parameter_SetF(uVar24,"DLSS.Exposure.Scale");
    NVSDK_NGX_Parameter_SetI(uVar24,"DLSS.Indicator.Invert.X.Axis",0);
    NVSDK_NGX_Parameter_SetI(uVar24,"DLSS.Indicator.Invert.Y.Axis",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Emissive",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSS.Input.DiffuseAlbedo",local_480);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSS.Input.SpecularAlbedo");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.DiffuseAlbedo.Subrect.Base.X",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.DiffuseAlbedo.Subrect.Base.Y",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.SpecularAlbedo.Subrect.Base.X",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.SpecularAlbedo.Subrect.Base.Y",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Normals.Subrect.Base.X",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Normals.Subrect.Base.Y",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Roughness.Subrect.Base.X",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.Input.Roughness.Subrect.Base.Y",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Normals",local_458);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"GBuffer.Roughness",uVar21);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSSD.Alpha",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSSD.OutputAlpha",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSSD.ReflectedAlbedo",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSSD.ColorBeforeParticles",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSSD.ColorAfterParticles",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSSD.ColorBeforeTransparency",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSSD.ColorAfterTransparency",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSSD.ColorBeforeFog",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSSD.ColorAfterFog",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSSD.ScreenSpaceSubsurfaceScatteringGuide",0);
    NVSDK_NGX_Parameter_SetD3d12Resource
              (uVar24,"DLSSD.ColorBeforeScreenSpaceSubsurfaceScattering",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSSD.ColorAfterScreenSpaceSubsurfaceScattering");
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSSD.ScreenSpaceRefractionGuide");
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSSD.ColorBeforeScreenSpaceRefraction");
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSSD.ColorAfterScreenSpaceRefraction");
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSSD.DepthOfFieldGuide");
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSSD.ColorBeforeDepthOfField");
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSSD.ColorAfterDepthOfField");
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSSD.DiffuseHitDistance");
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSSD.SpecularHitDistance");
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSSD.DiffuseRayDirection");
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSSD.SpecularRayDirection");
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSSD.DiffuseRayDirectionHitDistance");
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSSD.SpecularRayDirectionHitDistance");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.Alpha.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.Alpha.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.OutputAlpha.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.OutputAlpha.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ReflectedAlbedo.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ReflectedAlbedo.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorAfterParticles.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorAfterParticles.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorBeforeParticles.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorBeforeParticles.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorBeforeTransparency.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorBeforeTransparency.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorAfterTransparency.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorAfterTransparency.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorAfterFog.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorAfterFog.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorBeforeFog.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorBeforeFog.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ScreenSpaceSubsurfaceScatteringGuide.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ScreenSpaceSubsurfaceScatteringGuide.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI
              (uVar24,"DLSSD.ColorBeforeScreenSpaceSubsurfaceScattering.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI
              (uVar24,"DLSSD.ColorBeforeScreenSpaceSubsurfaceScattering.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI
              (uVar24,"DLSSD.ColorAfterScreenSpaceSubsurfaceScattering.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI
              (uVar24,"DLSSD.ColorAfterScreenSpaceSubsurfaceScattering.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ScreenSpaceRefractionGuide.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ScreenSpaceRefractionGuide.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorBeforeScreenSpaceRefraction.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorBeforeScreenSpaceRefraction.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorAfterScreenSpaceRefraction.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorAfterScreenSpaceRefraction.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.DepthOfFieldGuide.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.DepthOfFieldGuide.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorBeforeDepthOfField.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorBeforeDepthOfField.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorAfterDepthOfField.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.ColorAfterDepthOfField.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.DiffuseHitDistance.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.DiffuseHitDistance.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.SpecularHitDistance.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.SpecularHitDistance.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.DiffuseRayDirection.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.DiffuseRayDirection.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.SpecularRayDirection.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.SpecularRayDirection.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.DiffuseRayDirectionHitDistance.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.DiffuseRayDirectionHitDistance.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.SpecularRayDirectionHitDistance.Subrect.Base.X");
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSSD.SpecularRayDirectionHitDistance.Subrect.Base.Y");
    NVSDK_NGX_Parameter_SetVoidPointer(uVar24,"WorldToViewMatrix");
    NVSDK_NGX_Parameter_SetVoidPointer(uVar24,"ViewToClipMatrix");
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSS.TransparencyLayer",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSS.TransparencyLayerOpacity",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSS.TransparencyLayerMvecs",0);
    NVSDK_NGX_Parameter_SetD3d12Resource(uVar24,"DLSS.DisocclusionMask",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.TransparencyLayer.Subrect.Base.X",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.TransparencyLayer.Subrect.Base.Y",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.TransparencyLayerOpacity.Subrect.Base.X",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.TransparencyLayerOpacity.Subrect.Base.Y",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.TransparencyLayerMvecs.Subrect.Base.X",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.TransparencyLayerMvecs.Subrect.Base.Y",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.DisocclusionMask.Subrect.Base.X",0);
    NVSDK_NGX_Parameter_SetUI(uVar24,"DLSS.DisocclusionMask.Subrect.Base.Y",0);
  }
  uVar19 = local_468;
  NVSDK_NGX_D3D12_EvaluateFeature_C(local_468,uVar17,uVar24,0);
  *(undefined4 *)(*(longlong *)*param_4 + 0x58) = *(undefined4 *)(param_1 + 0x50);
  (**(code **)(**(longlong **)(param_1 + 0x110) + 0x5a8))
            (*(longlong **)(param_1 + 0x110),local_4b0,local_434,uVar19);
LAB_143bffe68:
  plVar22 = (longlong *)param_4[1];
  if (plVar22 != (longlong *)0x0) {
    LOCK();
    plVar23 = plVar22 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
      (**(code **)*plVar22)(plVar22);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_4d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c00594 FUN_143c00594 body=102 status=ok
// SIG undefined FUN_143c00594(void)

void FUN_143c00594(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014afb9f30;
  local_14 = 0xb;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1464a7a86(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c005fc FUN_143c005fc body=1723 status=ok
// SIG undefined FUN_143c005fc(void)

undefined8 * FUN_143c005fc(undefined8 *param_1,longlong param_2)

{
  wchar_t wVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  size_t sVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined1 *puVar12;
  int iVar13;
  wchar_t *pwVar14;
  uint uVar15;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 *local_220;
  undefined8 uStack_218;
  undefined8 *local_210;
  uint local_208;
  undefined2 *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 *local_1e8;
  longlong local_1e0;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  undefined1 **local_1c8;
  undefined1 ***local_1c0;
  undefined1 *local_1b8;
  undefined2 *local_1b0;
  int local_1a8;
  undefined1 **local_1a0;
  uint local_194;
  undefined1 *local_190 [16];
  undefined1 **local_110;
  undefined1 **local_108;
  uint local_100;
  undefined1 local_f8 [128];
  undefined1 *local_78;
  undefined1 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_143bfa4de();
  *param_1 = &PTR_LAB_14afba050;
  uVar7 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))();
  param_1[0x22] = uVar7;
  FUN_1464a72e4(&local_1b0);
  DAT_14cb51b59 = 0;
  uVar7 = (**(code **)(*(longlong *)param_1[0x22] + 0x518))();
  local_1d0 = (**(code **)(*(longlong *)param_1[0x22] + 0x530))();
  local_1f8 = (**(code **)(*(longlong *)param_1[0x22] + 0x520))();
  local_200 = &DAT_149dfb77a;
  if (local_1a8 != 0) {
    local_200 = local_1b0;
  }
  local_1d8 = param_1 + 0x1d;
  local_1c8 = &local_78;
  local_1c0 = &local_110;
  uVar6 = 0x15;
  local_1f0 = uVar7;
  local_1e8 = param_1;
  local_1e0 = param_2;
  do {
    if ((*(int *)(param_2 + 0x1c) == 2) ||
       (*(int *)(param_2 + 0x1c) == 0 && *(int *)(param_2 + 0x20) != 0)) {
      uStack_218 = CONCAT44(uStack_218._4_4_,uVar6);
      local_220 = local_1d8;
      local_230 = 0;
      uStack_228 = 0;
      local_238 = local_1f8;
      uVar5 = NVSDK_NGX_VULKAN_Init(*(int *)(param_2 + 0x20),local_200,uVar7,local_1d0);
    }
    else {
      pwVar14 = L"";
      if (*(int *)(param_2 + 0x30) != 0) {
        pwVar14 = *(wchar_t **)(param_2 + 0x28);
      }
      local_78 = (undefined1 *)0x0;
      if (pwVar14 == (wchar_t *)0x0) {
        local_70 = (undefined1 *)0x0;
        local_68 = 0;
      }
      else {
        sVar8 = wcslen(pwVar14);
        local_1a0 = (undefined1 **)((ulonglong)local_1a0 & 0xffffffff00000000);
        local_190[0] = (undefined1 *)CONCAT44(local_190[0]._4_4_,0x7fffffff);
        uVar9 = sVar8 & 0xffffffff;
        pwVar11 = pwVar14;
        do {
          iVar13 = (int)uVar9;
          if (iVar13 < 1) {
LAB_143c0088a:
            local_68 = (int)local_1a0;
            uVar5 = (int)local_1a0 + 1;
            if (uVar5 < 0x81) goto LAB_143c008a6;
            FUN_1446efa72(local_1c8,0,uVar5,1);
            local_190[0] = local_78;
            goto LAB_143c008a8;
          }
          wVar1 = *pwVar11;
          uVar5 = (uint)(ushort)wVar1;
          pwVar10 = pwVar11 + 1;
          uVar15 = iVar13 - 1;
          if ((wVar1 & 0xfc00U) == 0xd800) {
            if (iVar13 == 1) {
              cVar4 = FUN_140024707(uVar5,&local_1a0,local_190);
              if (cVar4 != '\0') goto LAB_143c0088a;
              break;
            }
            if (((ushort)*pwVar10 & 0xfc00) == 0xdc00) {
              uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar10 + 0xfca02400;
              pwVar10 = pwVar11 + 2;
              uVar15 = iVar13 - 2;
            }
          }
          cVar4 = FUN_140024707(uVar5,&local_1a0,local_190);
          uVar9 = (ulonglong)uVar15;
          pwVar11 = pwVar10;
        } while (cVar4 != '\0');
        local_68 = -1;
        uVar5 = 0;
LAB_143c008a6:
        local_190[0] = (undefined1 *)0x0;
LAB_143c008a8:
        if (local_190[0] == (undefined1 *)0x0) {
          local_190[0] = local_f8;
        }
        iVar13 = (int)sVar8 + 1;
        local_1a0 = (undefined1 **)CONCAT44(local_1a0._4_4_,uVar5);
        local_70 = local_190[0];
        do {
          param_2 = local_1e0;
          if (iVar13 < 1) break;
          wVar1 = *pwVar14;
          uVar5 = (uint)(ushort)wVar1;
          pwVar11 = pwVar14 + 1;
          iVar3 = iVar13 + -1;
          if ((wVar1 & 0xfc00U) == 0xd800) {
            if (iVar13 == 1) {
              FUN_1400247af(uVar5,local_190,&local_1a0);
              param_2 = local_1e0;
              break;
            }
            if (((ushort)*pwVar11 & 0xfc00) == 0xdc00) {
              uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar11 + 0xfca02400;
              pwVar11 = pwVar14 + 2;
              iVar3 = iVar13 + -2;
            }
          }
          iVar13 = iVar3;
          cVar4 = FUN_1400247af(uVar5,local_190,&local_1a0);
          pwVar14 = pwVar11;
          param_2 = local_1e0;
        } while (cVar4 != '\0');
      }
      pwVar14 = L"";
      if (*(int *)(param_2 + 0x40) != 0) {
        pwVar14 = *(wchar_t **)(param_2 + 0x38);
      }
      local_110 = (undefined1 **)0x0;
      if (pwVar14 == (wchar_t *)0x0) {
        local_108 = (undefined1 **)0x0;
        local_100 = 0;
        puVar12 = local_70;
      }
      else {
        local_1b8 = local_70;
        sVar8 = wcslen(pwVar14);
        local_194 = 0;
        local_1a0 = (undefined1 **)CONCAT44(local_1a0._4_4_,0x7fffffff);
        uVar9 = sVar8 & 0xffffffff;
        pwVar11 = pwVar14;
        do {
          iVar13 = (int)uVar9;
          if (iVar13 < 1) {
LAB_143c00a8b:
            local_100 = local_194;
            uVar5 = local_194 + 1;
            if (uVar5 < 0x81) goto LAB_143c00aab;
            FUN_1446efa72(local_1c0,0,uVar5,1);
            local_1a0 = local_110;
            goto LAB_143c00aad;
          }
          wVar1 = *pwVar11;
          uVar5 = (uint)(ushort)wVar1;
          pwVar10 = pwVar11 + 1;
          uVar15 = iVar13 - 1;
          if ((wVar1 & 0xfc00U) == 0xd800) {
            if (iVar13 == 1) {
              cVar4 = FUN_140024707(uVar5,&local_194,&local_1a0);
              if (cVar4 != '\0') goto LAB_143c00a8b;
              break;
            }
            if (((ushort)*pwVar10 & 0xfc00) == 0xdc00) {
              uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar10 + 0xfca02400;
              uVar15 = iVar13 - 2;
              pwVar10 = pwVar11 + 2;
            }
          }
          pwVar11 = pwVar10;
          cVar4 = FUN_140024707(uVar5,&local_194,&local_1a0);
          uVar9 = (ulonglong)uVar15;
        } while (cVar4 != '\0');
        local_100 = 0xffffffff;
        uVar5 = 0;
LAB_143c00aab:
        local_1a0 = (undefined1 **)0x0;
LAB_143c00aad:
        if (local_1a0 == (undefined1 **)0x0) {
          local_1a0 = local_190;
        }
        iVar13 = (int)sVar8 + 1;
        local_194 = uVar5;
        local_108 = local_1a0;
        do {
          puVar12 = local_1b8;
          param_2 = local_1e0;
          if (iVar13 < 1) break;
          wVar1 = *pwVar14;
          uVar5 = (uint)(ushort)wVar1;
          pwVar11 = pwVar14 + 1;
          iVar3 = iVar13 + -1;
          if ((wVar1 & 0xfc00U) == 0xd800) {
            if (iVar13 == 1) {
              FUN_1400247af(uVar5,&local_1a0,&local_194);
              puVar12 = local_1b8;
              param_2 = local_1e0;
              break;
            }
            if (((ushort)*pwVar11 & 0xfc00) == 0xdc00) {
              uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar11 + 0xfca02400;
              pwVar11 = pwVar14 + 2;
              iVar3 = iVar13 + -2;
            }
          }
          iVar13 = iVar3;
          pwVar14 = pwVar11;
          cVar4 = FUN_1400247af(uVar5,&local_1a0,&local_194);
          puVar12 = local_1b8;
          param_2 = local_1e0;
        } while (cVar4 != '\0');
      }
      param_1 = local_1e8;
      uVar7 = local_1f0;
      local_210 = local_1d8;
      local_220 = (undefined8 *)0x0;
      uStack_218 = 0;
      uStack_228 = local_1f8;
      local_230 = local_1d0;
      local_238 = local_1f0;
      local_208 = uVar6;
      uVar5 = FUN_144d66530(local_108,1,puVar12,local_200);
      if (local_110 != (undefined1 **)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    if ((uVar5 & 0xfff00000) != 0xbad00000) {
      *(uint *)(param_1 + 8) = uVar5;
      DAT_14cb51b58 = 1;
      uVar6 = NVSDK_NGX_VULKAN_GetCapabilityParameters(param_1 + 2);
      if (uVar6 == 0xbad0000c) goto LAB_143c00c52;
      if ((uVar6 & 0xfff00000) != 0xbad00000) {
        FUN_143bfb9e0(param_1 + 2);
      }
      goto LAB_143c00c6d;
    }
    cVar4 = FUN_1464a7342(param_1);
    if (cVar4 != '\0') {
      NVSDK_NGX_VULKAN_Shutdown1(local_1f8);
    }
    bVar2 = uVar6 < 0x14;
    uVar6 = uVar6 - 1;
    if (bVar2) {
      *(uint *)(param_1 + 8) = uVar5;
      if (uVar5 == 0xbad0000c) {
LAB_143c00c52:
        *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
      }
LAB_143c00c6d:
      if (local_1b0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if ((local_60 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  } while( true );
}



// FUNCTION 143c00cb8 FUN_143c00cb8 body=95 status=ok
// SIG undefined FUN_143c00cb8(void)

void FUN_143c00cb8(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (DAT_14cb51b58 == '\x01') {
    FUN_143bfbf0e(param_1);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      NVSDK_NGX_VULKAN_DestroyParameters();
    }
    cVar1 = FUN_1464a7342(param_1);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x520))();
      NVSDK_NGX_VULKAN_Shutdown1(uVar2);
    }
    DAT_14cb51b58 = '\0';
  }
  FUN_143bfb932(param_1);
  return;
}



// FUNCTION 143c00d18 FUN_143c00d18 body=11011 status=ok
// SIG undefined FUN_143c00d18(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143c00d18(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  int *piVar1;
  float fVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  char cVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_678 [32];
  longlong *local_658;
  undefined1 local_641;
  undefined4 local_640;
  undefined4 local_63c;
  undefined8 local_638;
  longlong local_630;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 local_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  longlong local_5f8;
  undefined4 local_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined4 local_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  longlong local_5c0;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  longlong local_588;
  longlong local_580 [2];
  undefined4 local_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  longlong local_550;
  longlong local_548 [2];
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 local_528;
  undefined4 uStack_51c;
  longlong local_518;
  undefined4 local_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 local_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  longlong local_4e0;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  longlong local_4a8;
  undefined8 local_4a0;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 local_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  longlong local_470;
  longlong local_468;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  longlong local_438;
  longlong local_430;
  longlong local_428;
  undefined8 local_420;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 local_400;
  undefined4 uStack_3f4;
  uint local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined8 local_3b0;
  uint local_3a8;
  float fStack_3a4;
  undefined4 *local_3a0;
  undefined4 *local_398;
  longlong *local_390;
  undefined8 local_388;
  uint local_380;
  float local_37c;
  float local_378;
  undefined4 local_374;
  undefined8 local_370;
  undefined8 local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 local_354;
  float local_350;
  undefined4 local_34c;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 local_300;
  undefined4 uStack_2fc;
  float local_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  longlong local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  longlong local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  undefined4 local_290;
  undefined4 uStack_28c;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 local_180;
  longlong local_178 [16];
  undefined4 local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined4 local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_678;
  if (*(char *)(param_1 + 0x18) != '\x01') goto LAB_143c030c6;
  FUN_1418419e8(param_3);
  uVar13 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x558))();
  cVar11 = FUN_1403127a6(*param_4);
  if (cVar11 != '\0') {
    puVar6 = (undefined8 *)*param_4;
    *puVar6 = 0;
    plVar15 = (longlong *)puVar6[1];
    if (plVar15 != (longlong *)0x0) {
      puVar6[1] = 0;
      LOCK();
      plVar16 = plVar15 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
  }
  if (*(char *)(param_3 + 0x33) == '\x01') {
    FUN_1464a74a6(param_1,&local_3e0,param_3);
    plVar15 = local_3d8;
    puVar6 = (undefined8 *)*param_4;
    if (puVar6 != &local_3e0) {
      *puVar6 = local_3e0;
      local_3e0 = (longlong *)0x0;
      plVar16 = (longlong *)puVar6[1];
      if (local_3d8 != plVar16) {
        local_3d8 = (longlong *)0x0;
        puVar6[1] = plVar15;
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar15 = plVar16 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
        }
      }
    }
    plVar15 = local_3d8;
    if (local_3d8 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_3d8 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*local_3d8)(local_3d8);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
  }
  lVar14 = *(longlong *)*param_4;
  if (lVar14 == 0) {
    lVar14 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x520))();
    local_420 = 0;
    NVSDK_NGX_VULKAN_AllocateParameters(&local_420);
    FUN_145a00270(param_1,local_420,param_3);
    if (*(int *)((longlong)param_3 + 0x1bc) == 1) {
      FUN_1485f25a2(param_3,&local_3e0);
      lVar8 = local_420;
      local_468 = 0;
      uVar5 = *(undefined4 *)(param_3 + 0x37);
      NVSDK_NGX_Parameter_SetUI
                (local_420,"CreationNodeMask",1 << (*(byte *)((longlong)param_3 + 0x1b4) & 0x1f));
      NVSDK_NGX_Parameter_SetUI(lVar8,"VisibilityNodeMask",uVar5);
      NVSDK_NGX_Parameter_SetUI(lVar8,"Width",local_3d8._4_4_);
      NVSDK_NGX_Parameter_SetUI(lVar8,"Height",(ulonglong)local_3d0 & 0xffffffff);
      NVSDK_NGX_Parameter_SetUI(lVar8,"OutWidth",local_3d0._4_4_);
      NVSDK_NGX_Parameter_SetUI(lVar8,"OutHeight",(ulonglong)local_3c8 & 0xffffffff);
      NVSDK_NGX_Parameter_SetI(lVar8,"PerfQualityValue",local_3c8._4_4_);
      NVSDK_NGX_Parameter_SetI(lVar8,"DLSS.Feature.Create.Flags",(ulonglong)local_3c0 & 0xffffffff);
      NVSDK_NGX_Parameter_SetI(lVar8,"DLSS.Enable.Output.Subrects",local_3c0._4_1_);
      NVSDK_NGX_Parameter_SetI(lVar8,"DLSS.Denoise.Mode",1);
      NVSDK_NGX_Parameter_SetUI(lVar8,"DLSS.Roughness.Mode",local_3e0._4_4_);
      NVSDK_NGX_Parameter_SetUI(lVar8,"DLSS.Use.HW.Depth",(ulonglong)local_3d8 & 0xffffffff);
      if (lVar14 == 0) {
        uVar12 = NVSDK_NGX_VULKAN_CreateFeature(uVar13,0xd,lVar8,&local_468);
      }
      else {
        local_658 = &local_468;
        uVar12 = NVSDK_NGX_VULKAN_CreateFeature1(lVar14,uVar13,0xd,lVar8);
      }
      if ((uVar12 & 0xfff00000) == 0xbad00000) {
        puVar6 = (undefined8 *)*param_4;
        *puVar6 = 0;
        plVar15 = (longlong *)puVar6[1];
        if (plVar15 != (longlong *)0x0) {
          puVar6[1] = 0;
          LOCK();
          plVar16 = plVar15 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
      }
      else {
        lVar14 = param_3[0xc];
        lVar8 = param_3[0xd];
        lVar9 = param_3[0xe];
        lVar10 = param_3[0xf];
        local_630 = *(longlong *)((longlong)param_3 + 0x19c);
        local_63c = *(undefined4 *)((longlong)param_3 + 0x1a4);
        fVar2 = *(float *)((longlong)param_3 + 0x194);
        local_641 = *(undefined1 *)(param_3 + 0x32);
        uVar4 = *(undefined2 *)(param_3 + 0x36);
        uVar3 = *(undefined1 *)((longlong)param_3 + 0x1b3);
        local_638 = *(undefined8 *)((longlong)param_3 + 0x1b4);
        local_640 = *(undefined4 *)((longlong)param_3 + 0x1bc);
        plVar15 = (longlong *)FUN_14001cc68(0x70,0x10);
        plVar15[1] = (longlong)&DAT_100000001;
        *plVar15 = (longlong)&PTR_FUN_14afba090;
        uVar5 = *(undefined4 *)(param_1 + 0x50);
        plVar15[3] = lVar14;
        plVar15[4] = lVar8;
        plVar15[5] = lVar9;
        plVar15[6] = lVar10;
        plVar15[7] = local_630;
        *(undefined4 *)(plVar15 + 8) = local_63c;
        *(undefined1 *)((longlong)plVar15 + 0x44) = local_641;
        *(bool *)((longlong)plVar15 + 0x45) = fVar2 != 0.0;
        *(undefined2 *)((longlong)plVar15 + 0x46) = uVar4;
        *(undefined1 *)(plVar15 + 9) = uVar3;
        *(undefined8 *)((longlong)plVar15 + 0x4c) = local_638;
        *(undefined4 *)((longlong)plVar15 + 0x54) = local_640;
        plVar15[0xb] = local_468;
        plVar15[0xc] = local_420;
        *(undefined4 *)(plVar15 + 0xd) = uVar5;
        *(undefined1 *)((longlong)plVar15 + 0x6c) = 0;
        plVar15[2] = (longlong)&PTR_FUN_14afba0a8;
        if (plVar15 == (longlong *)0x0) {
          puVar6 = (undefined8 *)*param_4;
          *puVar6 = 0x10;
          plVar16 = (longlong *)puVar6[1];
          if (plVar16 != (longlong *)0x0) {
            puVar6[1] = 0;
LAB_143c037a5:
            LOCK();
            plVar7 = plVar16 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
              }
            }
            if (plVar15 != (longlong *)0x0) goto LAB_143c037ee;
          }
        }
        else {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
          plVar7 = (longlong *)*param_4;
          *plVar7 = (longlong)(plVar15 + 2);
          plVar16 = (longlong *)plVar7[1];
          if (plVar15 == plVar16) {
            LOCK();
            plVar16 = plVar15 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
          else {
            plVar7[1] = (longlong)plVar15;
            if (plVar16 != (longlong *)0x0) goto LAB_143c037a5;
          }
LAB_143c037ee:
          LOCK();
          plVar16 = plVar15 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        *(undefined1 *)(*(longlong *)*param_4 + 0x5c) = 1;
      }
    }
    plVar15 = (longlong *)*param_4;
    local_430 = *plVar15;
    if (local_430 == 0) {
      FUN_1485f24ca(param_3,&local_3e0);
      lVar14 = local_420;
      local_468 = 0;
      uVar5 = *(undefined4 *)(param_3 + 0x37);
      NVSDK_NGX_Parameter_SetUI
                (local_420,"CreationNodeMask",1 << (*(byte *)((longlong)param_3 + 0x1b4) & 0x1f));
      NVSDK_NGX_Parameter_SetUI(lVar14,"VisibilityNodeMask",uVar5);
      NVSDK_NGX_Parameter_SetUI(lVar14,"Width",(ulonglong)local_3e0 & 0xffffffff);
      NVSDK_NGX_Parameter_SetUI(lVar14,"Height",local_3e0._4_4_);
      NVSDK_NGX_Parameter_SetUI(lVar14,"OutWidth",(ulonglong)local_3d8 & 0xffffffff);
      NVSDK_NGX_Parameter_SetUI(lVar14,"OutHeight",local_3d8._4_4_);
      NVSDK_NGX_Parameter_SetI(lVar14,"PerfQualityValue",(ulonglong)local_3d0 & 0xffffffff);
      NVSDK_NGX_Parameter_SetI(lVar14,"DLSS.Feature.Create.Flags",local_3d0._4_4_);
      NVSDK_NGX_Parameter_SetI(lVar14,"DLSS.Enable.Output.Subrects",(ulonglong)local_3c8 & 0xff);
      NVSDK_NGX_VULKAN_CreateFeature(uVar13,1,lVar14,&local_468);
      lVar14 = param_3[0xc];
      lVar8 = param_3[0xd];
      lVar9 = param_3[0xe];
      lVar10 = param_3[0xf];
      local_630 = *(longlong *)((longlong)param_3 + 0x19c);
      local_63c = *(undefined4 *)((longlong)param_3 + 0x1a4);
      fVar2 = *(float *)((longlong)param_3 + 0x194);
      local_641 = *(undefined1 *)(param_3 + 0x32);
      uVar4 = *(undefined2 *)(param_3 + 0x36);
      uVar3 = *(undefined1 *)((longlong)param_3 + 0x1b3);
      local_638 = *(undefined8 *)((longlong)param_3 + 0x1b4);
      local_640 = *(undefined4 *)((longlong)param_3 + 0x1bc);
      plVar15 = (longlong *)FUN_14001cc68(0x70,0x10);
      plVar15[1] = (longlong)&DAT_100000001;
      *plVar15 = (longlong)&PTR_FUN_14afba090;
      uVar5 = *(undefined4 *)(param_1 + 0x50);
      plVar15[3] = lVar14;
      plVar15[4] = lVar8;
      plVar15[5] = lVar9;
      plVar15[6] = lVar10;
      plVar15[7] = local_630;
      *(undefined4 *)(plVar15 + 8) = local_63c;
      *(undefined1 *)((longlong)plVar15 + 0x44) = local_641;
      *(bool *)((longlong)plVar15 + 0x45) = fVar2 != 0.0;
      *(undefined2 *)((longlong)plVar15 + 0x46) = uVar4;
      *(undefined1 *)(plVar15 + 9) = uVar3;
      *(undefined8 *)((longlong)plVar15 + 0x4c) = local_638;
      *(undefined4 *)((longlong)plVar15 + 0x54) = local_640;
      plVar15[0xb] = local_468;
      plVar15[0xc] = local_420;
      *(undefined4 *)(plVar15 + 0xd) = uVar5;
      *(undefined1 *)((longlong)plVar15 + 0x6c) = 0;
      plVar15[2] = (longlong)&PTR_FUN_14afba0a8;
      if (plVar15 == (longlong *)0x0) {
        puVar6 = (undefined8 *)*param_4;
        *puVar6 = 0x10;
        plVar16 = (longlong *)puVar6[1];
        if (plVar16 != (longlong *)0x0) {
          puVar6[1] = 0;
LAB_143c03717:
          LOCK();
          plVar7 = plVar16 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
          if (plVar15 != (longlong *)0x0) goto LAB_143c03760;
        }
      }
      else {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
        plVar7 = (longlong *)*param_4;
        *plVar7 = (longlong)(plVar15 + 2);
        plVar16 = (longlong *)plVar7[1];
        if (plVar15 == plVar16) {
          LOCK();
          plVar16 = plVar15 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        else {
          plVar7[1] = (longlong)plVar15;
          if (plVar16 != (longlong *)0x0) goto LAB_143c03717;
        }
LAB_143c03760:
        LOCK();
        plVar16 = plVar15 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
      plVar15 = (longlong *)*param_4;
      local_430 = *plVar15;
    }
    local_428 = plVar15[1];
    if (local_428 != 0) {
      LOCK();
      *(int *)(local_428 + 8) = *(int *)(local_428 + 8) + 1;
      UNLOCK();
    }
    FUN_143bfbe8e(param_1);
    lVar14 = *(longlong *)*param_4;
  }
  plVar15 = *(longlong **)(param_1 + 0x110);
  if (*(char *)(lVar14 + 0x5c) == '\x01') {
    memset(&local_3e0,0,0x370);
    plVar16 = (longlong *)param_3[9];
    lVar14 = (**(code **)(*plVar16 + 0x10))(plVar16);
    if (lVar14 != 0) {
      plVar16 = *(longlong **)(lVar14 + 0x60);
    }
    (**(code **)(*plVar15 + 0x5e0))(plVar15,&local_420,plVar16);
    local_3b0 = &local_468;
    local_438 = (ulonglong)((local_3e8 & 0x60000) != 0) << 0x20;
    local_468 = local_420;
    uStack_460 = uStack_418;
    uStack_45c = uStack_414;
    local_458 = local_410;
    uStack_454 = uStack_40c;
    uStack_450 = uStack_408;
    uStack_44c = uStack_404;
    local_300 = *(undefined4 *)(param_3 + 0xe);
    uStack_2fc = *(undefined4 *)((longlong)param_3 + 0x74);
    local_388 = (longlong *)
                CONCAT44(*(int *)((longlong)param_3 + 0x6c) - *(int *)((longlong)param_3 + 100),
                         *(int *)(param_3 + 0xd) - *(int *)(param_3 + 0xc));
    plVar16 = (longlong *)*param_3;
    lVar14 = (**(code **)(*plVar16 + 0x10))(plVar16);
    if (lVar14 != 0) {
      plVar16 = *(longlong **)(lVar14 + 0x60);
    }
    (**(code **)(*plVar15 + 0x5e0))(plVar15,&local_420,plVar16);
    local_3c0 = (undefined4 *)&local_4a0;
    local_470 = (ulonglong)((local_3e8 & 0x60000) != 0) << 0x20;
    local_4a0._0_4_ = (undefined4)local_420;
    local_4a0._4_4_ = local_420._4_4_;
    uStack_498 = uStack_418;
    uStack_494 = uStack_414;
    local_490 = local_410;
    uStack_48c = uStack_40c;
    uStack_488 = uStack_408;
    uStack_484 = uStack_404;
    local_328 = *(undefined4 *)(param_3 + 0xc);
    uStack_324 = *(undefined4 *)((longlong)param_3 + 100);
    plVar16 = (longlong *)param_3[1];
    lVar14 = (**(code **)(*plVar16 + 0x10))(plVar16);
    if (lVar14 != 0) {
      plVar16 = *(longlong **)(lVar14 + 0x60);
    }
    (**(code **)(*plVar15 + 0x5e0))(plVar15,&local_420,plVar16);
    local_3a0 = &local_4d8;
    local_4a8 = (ulonglong)((local_3e8 & 0x60000) != 0) << 0x20;
    local_4d8 = (undefined4)local_420;
    uStack_4d4 = local_420._4_4_;
    uStack_4d0 = uStack_418;
    uStack_4cc = uStack_414;
    local_4c8 = local_410;
    uStack_4c4 = uStack_40c;
    uStack_4c0 = uStack_408;
    uStack_4bc = uStack_404;
    local_320 = *(undefined4 *)(param_3 + 0xc);
    uStack_31c = *(undefined4 *)((longlong)param_3 + 100);
    plVar16 = (longlong *)param_3[2];
    lVar14 = (**(code **)(*plVar16 + 0x10))(plVar16);
    if (lVar14 != 0) {
      plVar16 = *(longlong **)(lVar14 + 0x60);
    }
    (**(code **)(*plVar15 + 0x5e0))(plVar15,&local_420,plVar16);
    local_398 = &local_510;
    local_4e0 = (ulonglong)((local_3e8 & 0x60000) != 0) << 0x20;
    local_510 = (undefined4)local_420;
    uStack_50c = local_420._4_4_;
    uStack_508 = uStack_418;
    uStack_504 = uStack_414;
    local_500 = local_410;
    uStack_4fc = uStack_40c;
    uStack_4f8 = uStack_408;
    uStack_4f4 = uStack_404;
    local_318 = 0;
    plVar16 = (longlong *)param_3[3];
    lVar14 = (**(code **)(*plVar16 + 0x10))(plVar16);
    if (lVar14 != 0) {
      plVar16 = *(longlong **)(lVar14 + 0x60);
    }
    (**(code **)(*plVar15 + 0x5e0))(plVar15,&local_420,plVar16);
    local_518 = (ulonglong)((local_3e8 & 0x60000) != 0) << 0x20;
    local_548[0] = local_420;
    local_538 = local_410;
    uStack_534 = uStack_40c;
    uStack_530 = uStack_408;
    uStack_52c = uStack_404;
    local_528 = local_400;
    uStack_51c = uStack_3f4;
    local_368 = local_548;
    if (*(char *)(param_3 + 0x36) != '\0') {
      local_368 = (longlong *)0x0;
    }
    local_2f8 = *(float *)((longlong)param_3 + 0x1ac);
    local_390 = (longlong *)param_3[0x10];
    local_37c = *(float *)(param_3 + 0x11);
    local_378 = *(float *)((longlong)param_3 + 0x8c);
    local_380 = (uint)*(byte *)(param_3 + 0x33);
    local_c8 = *(undefined4 *)(param_3 + 0x35);
    plVar16 = (longlong *)param_3[5];
    lVar14 = (**(code **)(*plVar16 + 0x10))(plVar16);
    if (lVar14 != 0) {
      plVar16 = *(longlong **)(lVar14 + 0x60);
    }
    (**(code **)(*plVar15 + 0x5e0))(plVar15,&local_420,plVar16);
    local_3e0 = local_580;
    local_550 = (ulonglong)((local_3e8 & 0x60000) != 0) << 0x20;
    local_580[0] = local_420;
    local_570 = local_410;
    uStack_56c = uStack_40c;
    uStack_568 = uStack_408;
    uStack_564 = uStack_404;
    local_348 = 0;
    plVar16 = (longlong *)param_3[6];
    lVar14 = (**(code **)(*plVar16 + 0x10))(plVar16);
    if (lVar14 != 0) {
      plVar16 = *(longlong **)(lVar14 + 0x60);
    }
    (**(code **)(*plVar15 + 0x5e0))(plVar15,&local_420,plVar16);
    local_3d8 = (longlong *)&local_5b8;
    local_588 = (ulonglong)((local_3e8 & 0x60000) != 0) << 0x20;
    local_5b8 = (undefined4)local_420;
    uStack_5b4 = local_420._4_4_;
    uStack_5b0 = uStack_418;
    uStack_5ac = uStack_414;
    local_5a8 = local_410;
    uStack_5a4 = uStack_40c;
    uStack_5a0 = uStack_408;
    uStack_59c = uStack_404;
    local_340 = 0;
    plVar16 = (longlong *)param_3[7];
    lVar14 = (**(code **)(*plVar16 + 0x10))(plVar16);
    if (lVar14 != 0) {
      plVar16 = *(longlong **)(lVar14 + 0x60);
    }
    (**(code **)(*plVar15 + 0x5e0))(plVar15,&local_420,plVar16);
    local_3d0 = &local_5f0;
    local_5c0 = (ulonglong)((local_3e8 & 0x60000) != 0) << 0x20;
    local_5f0 = (undefined4)local_420;
    uStack_5ec = local_420._4_4_;
    uStack_5e8 = uStack_418;
    uStack_5e4 = uStack_414;
    local_5e0 = local_410;
    uStack_5dc = uStack_40c;
    uStack_5d8 = uStack_408;
    uStack_5d4 = uStack_404;
    local_338 = 0;
    plVar16 = (longlong *)param_3[8];
    lVar14 = (**(code **)(*plVar16 + 0x10))(plVar16);
    if (lVar14 != 0) {
      plVar16 = *(longlong **)(lVar14 + 0x60);
    }
    (**(code **)(*plVar15 + 0x5e0))(plVar15,&local_420,plVar16);
    local_5f8 = (ulonglong)((local_3e8 & 0x60000) != 0) << 0x20;
    local_628 = (undefined4)local_420;
    uStack_624 = local_420._4_4_;
    uStack_620 = uStack_418;
    uStack_61c = uStack_414;
    local_618 = local_410;
    uStack_614 = uStack_40c;
    uStack_610 = uStack_408;
    uStack_60c = uStack_404;
    local_3c8 = &local_628;
    local_330 = 0;
    uVar18 = *(undefined8 *)(*(longlong *)*param_4 + 0x48);
    uVar17 = *(undefined8 *)(*(longlong *)*param_4 + 0x50);
    if (((((local_3c0 == (undefined4 *)0x0) || (local_3c0[0xc] == 0)) &&
         ((CONCAT44(uStack_3b4,local_3b8) == 0 ||
          (*(int *)(CONCAT44(uStack_3b4,local_3b8) + 0x30) == 0)))) &&
        (((local_398 == (undefined4 *)0x0 || (local_398[0xc] == 0)) &&
         ((local_3b0 == (longlong *)0x0 || ((int)local_3b0[6] == 0)))))) &&
       (((((CONCAT44(fStack_3a4,local_3a8) == 0 ||
           (*(int *)(CONCAT44(fStack_3a4,local_3a8) + 0x30) == 0)) &&
          ((local_3a0 == (undefined4 *)0x0 || (local_3a0[0xc] == 0)))) &&
         ((local_3e0 == (longlong *)0x0 || ((int)local_3e0[6] == 0)))) &&
        (((local_3d8 == (longlong *)0x0 || ((int)local_3d8[6] == 0)) &&
         ((((local_370 == 0 || (*(int *)(local_370 + 0x30) == 0)) &&
           ((local_368 == (longlong *)0x0 || ((int)local_368[6] == 0)))) &&
          ((CONCAT44(uStack_35c,local_360) == 0 ||
           (*(int *)(CONCAT44(uStack_35c,local_360) + 0x30) == 0)))))))))) {
      lVar14 = 0x4d;
      do {
        if (((&local_3e0)[lVar14] != 0) && (*(int *)((&local_3e0)[lVar14] + 0x30) != 0))
        goto LAB_143c03092;
        lVar14 = lVar14 + 1;
      } while (lVar14 != 0x5d);
      if ((((((((local_f0 == 0) || (*(int *)(local_f0 + 0x30) == 0)) &&
              ((local_e8 == 0 || (*(int *)(local_e8 + 0x30) == 0)))) &&
             (((((local_e0 == 0 || (*(int *)(local_e0 + 0x30) == 0)) &&
                ((local_d8 == 0 || (*(int *)(local_d8 + 0x30) == 0)))) &&
               (((local_d0 == 0 || (*(int *)(local_d0 + 0x30) == 0)) &&
                ((local_c0 == 0 || (*(int *)(local_c0 + 0x30) == 0)))))) &&
              (((local_b8 == 0 || (*(int *)(local_b8 + 0x30) == 0)) &&
               ((local_2e8 == 0 || (*(int *)(local_2e8 + 0x30) == 0)))))))) &&
            (((((((local_2e0 == 0 || (*(int *)(local_2e0 + 0x30) == 0)) &&
                 ((local_2d8 == 0 || (*(int *)(local_2d8 + 0x30) == 0)))) &&
                ((local_2d0 == 0 || (*(int *)(local_2d0 + 0x30) == 0)))) &&
               ((local_2c8 == 0 || (*(int *)(local_2c8 + 0x30) == 0)))) &&
              ((((CONCAT44(uStack_2bc,local_2c0) == 0 ||
                 (*(int *)(CONCAT44(uStack_2bc,local_2c0) + 0x30) == 0)) &&
                ((local_2b8 == 0 || (*(int *)(local_2b8 + 0x30) == 0)))) &&
               ((local_2b0 == 0 || (*(int *)(local_2b0 + 0x30) == 0)))))) &&
             ((local_2a8 == 0 || (*(int *)(local_2a8 + 0x30) == 0)))))) &&
           ((((((local_2a0 == 0 || (*(int *)(local_2a0 + 0x30) == 0)) &&
               ((local_298 == 0 || (*(int *)(local_298 + 0x30) == 0)))) &&
              (((CONCAT44(uStack_28c,local_290) == 0 ||
                (*(int *)(CONCAT44(uStack_28c,local_290) + 0x30) == 0)) &&
               ((local_288 == 0 || (*(int *)(local_288 + 0x30) == 0)))))) &&
             (((((((local_280 == 0 || (*(int *)(local_280 + 0x30) == 0)) &&
                  ((local_278 == 0 || (*(int *)(local_278 + 0x30) == 0)))) &&
                 ((local_270 == 0 || (*(int *)(local_270 + 0x30) == 0)))) &&
                ((local_268 == 0 || (*(int *)(local_268 + 0x30) == 0)))) &&
               (((local_260 == 0 || (*(int *)(local_260 + 0x30) == 0)) &&
                ((local_258 == 0 || (*(int *)(local_258 + 0x30) == 0)))))) &&
              ((local_250 == 0 || (*(int *)(local_250 + 0x30) == 0)))))) &&
            ((local_248 == 0 || (*(int *)(local_248 + 0x30) == 0)))))) &&
          (((((local_240 == 0 || (*(int *)(local_240 + 0x30) == 0)) &&
             ((local_b0 == 0 || (*(int *)(local_b0 + 0x30) == 0)))) &&
            ((local_a0 == 0 || (*(int *)(local_a0 + 0x30) == 0)))) &&
           ((local_90 == 0 || (*(int *)(local_90 + 0x30) == 0)))))) &&
         ((local_80 == 0 || (*(int *)(local_80 + 0x30) == 0)))) {
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"Color");
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"Output",local_3b0);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"Depth",local_3a0);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"MotionVectors",local_398);
        NVSDK_NGX_Parameter_SetF(uVar17,"Jitter.Offset.X");
        NVSDK_NGX_Parameter_SetF(uVar17,"Jitter.Offset.Y");
        NVSDK_NGX_Parameter_SetI(uVar17,"Reset",local_380);
        NVSDK_NGX_Parameter_SetF
                  (uVar17,"MV.Scale.X",
                   ~-(uint)(local_37c == 0.0) & (uint)local_37c |
                   -(uint)(local_37c == 0.0) & 0x3f800000);
        NVSDK_NGX_Parameter_SetF
                  (uVar17,"MV.Scale.Y",
                   ~-(uint)(local_378 == 0.0) & (uint)local_378 |
                   -(uint)(local_378 == 0.0) & 0x3f800000);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"TransparencyMask",local_370);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"ExposureTexture",local_368);
        NVSDK_NGX_Parameter_SetVoidPointer
                  (uVar17,"DLSS.Input.Bias.Current.Color.Mask",CONCAT44(uStack_35c,local_360));
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Albedo",local_178[0]);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Roughness",local_178[1]);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Metallic",local_178[2]);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Specular",local_178[3]);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Subsurface",local_178[4]);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Normals",local_178[5]);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.ShadingModelId",local_178[6]);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.MaterialId",local_178[7]);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Attrib.8",local_178[8]);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Attrib.9",local_178[9]);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.SpecularMvec",local_b8);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Attrib.11",local_178[0xb]);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Attrib.12",local_178[0xc]);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Attrib.13",local_178[0xd]);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Attrib.14",local_178[0xe]);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Attrib.15",local_178[0xf]);
        NVSDK_NGX_Parameter_SetUI(uVar17,"TonemapperType",local_f8);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"MotionVectors3D",local_f0);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"IsParticleMask",local_e8);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"AnimatedTextureMask",local_e0);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DepthHighRes",local_d8);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"Position.ViewSpace",local_d0);
        NVSDK_NGX_Parameter_SetF(uVar17,"FrameTimeDeltaInMsec");
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"RayTracingHitDistance",local_c0);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.Color.Subrect.Base.X",local_328);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.Color.Subrect.Base.Y",uStack_324);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.Depth.Subrect.Base.X",local_320);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.Depth.Subrect.Base.Y",uStack_31c);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.MV.Subrect.Base.X",local_318 & 0xffffffff);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.MV.Subrect.Base.Y",local_318._4_4_);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.Translucency.Subrect.Base.X",local_310);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.Translucency.Subrect.Base.Y",uStack_30c);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.Bias.Current.Color.Subrect.Base.X",local_308);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.Bias.Current.Color.Subrect.Base.Y",uStack_304);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Output.Subrect.Base.X",local_300);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Output.Subrect.Base.Y",uStack_2fc);
        NVSDK_NGX_Parameter_SetUI
                  (uVar17,"DLSS.Render.Subrect.Dimensions.Width",(ulonglong)local_388 & 0xffffffff);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Render.Subrect.Dimensions.Height",local_388._4_4_);
        NVSDK_NGX_Parameter_SetF
                  (uVar17,"DLSS.Pre.Exposure",
                   ~-(uint)(local_2f8 == 0.0) & (uint)local_2f8 |
                   -(uint)(local_2f8 == 0.0) & 0x3f800000);
        NVSDK_NGX_Parameter_SetF(uVar17,"DLSS.Exposure.Scale");
        NVSDK_NGX_Parameter_SetI(uVar17,"DLSS.Indicator.Invert.X.Axis",local_2f0);
        NVSDK_NGX_Parameter_SetI(uVar17,"DLSS.Indicator.Invert.Y.Axis",uStack_2ec);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Emissive",local_178[0xc]);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSS.Input.DiffuseAlbedo",local_3e0);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSS.Input.SpecularAlbedo",local_3d8);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Normals",local_3d0);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Roughness",local_3c8);
        NVSDK_NGX_Parameter_SetUI
                  (uVar17,"DLSS.Input.DiffuseAlbedo.Subrect.Base.X",local_348 & 0xffffffff);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.DiffuseAlbedo.Subrect.Base.Y",local_348._4_4_);
        NVSDK_NGX_Parameter_SetUI
                  (uVar17,"DLSS.Input.SpecularAlbedo.Subrect.Base.X",local_340 & 0xffffffff);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.SpecularAlbedo.Subrect.Base.Y",local_340._4_4_)
        ;
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.Normals.Subrect.Base.X",local_338 & 0xffffffff)
        ;
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.Normals.Subrect.Base.Y",local_338._4_4_);
        NVSDK_NGX_Parameter_SetUI
                  (uVar17,"DLSS.Input.Roughness.Subrect.Base.X",local_330 & 0xffffffff);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.Roughness.Subrect.Base.Y",local_330._4_4_);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSSD.Alpha",CONCAT44(uStack_3b4,local_3b8));
        NVSDK_NGX_Parameter_SetVoidPointer
                  (uVar17,"DLSSD.OutputAlpha",CONCAT44(fStack_3a4,local_3a8));
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSSD.ReflectedAlbedo",local_2e8);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSSD.ColorBeforeParticles",local_2e0);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSSD.ColorAfterParticles",local_2d8);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSSD.ColorBeforeTransparency",local_2d0);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSSD.ColorAfterTransparency",local_2c8);
        NVSDK_NGX_Parameter_SetVoidPointer
                  (uVar17,"DLSSD.ColorBeforeFog",CONCAT44(uStack_2bc,local_2c0));
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSSD.ColorAfterFog",local_2b8);
        NVSDK_NGX_Parameter_SetVoidPointer
                  (uVar17,"DLSSD.ScreenSpaceSubsurfaceScatteringGuide",local_2b0);
        NVSDK_NGX_Parameter_SetVoidPointer
                  (uVar17,"DLSSD.ColorBeforeScreenSpaceSubsurfaceScattering",local_2a8);
        NVSDK_NGX_Parameter_SetVoidPointer
                  (uVar17,"DLSSD.ColorAfterScreenSpaceSubsurfaceScattering",local_2a0);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSSD.ScreenSpaceRefractionGuide",local_298);
        NVSDK_NGX_Parameter_SetVoidPointer
                  (uVar17,"DLSSD.ColorBeforeScreenSpaceRefraction",CONCAT44(uStack_28c,local_290));
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSSD.ColorAfterScreenSpaceRefraction",local_288)
        ;
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSSD.DepthOfFieldGuide",local_280);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSSD.ColorBeforeDepthOfField",local_278);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSSD.ColorAfterDepthOfField",local_270);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSSD.DiffuseHitDistance",local_268);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSSD.SpecularHitDistance",local_260);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSSD.DiffuseRayDirection",local_258);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSSD.SpecularRayDirection",local_250);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSSD.DiffuseRayDirectionHitDistance",local_248);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSSD.SpecularRayDirectionHitDistance",local_240)
        ;
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.Alpha.Subrect.Base.X",local_358);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.Alpha.Subrect.Base.Y",local_354);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.OutputAlpha.Subrect.Base.X",local_350);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.OutputAlpha.Subrect.Base.Y",local_34c);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.ReflectedAlbedo.Subrect.Base.X",local_238);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.ReflectedAlbedo.Subrect.Base.Y",local_234);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.ColorBeforeParticles.Subrect.Base.X",local_230);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.ColorBeforeParticles.Subrect.Base.Y",local_22c);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.ColorAfterParticles.Subrect.Base.X",local_228);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.ColorAfterParticles.Subrect.Base.Y",local_224);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.ColorBeforeTransparency.Subrect.Base.X",local_220);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.ColorBeforeTransparency.Subrect.Base.Y",local_21c);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.ColorAfterTransparency.Subrect.Base.X",local_218);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.ColorAfterTransparency.Subrect.Base.Y",local_214);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.ColorBeforeFog.Subrect.Base.X",local_210);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.ColorBeforeFog.Subrect.Base.Y",local_20c);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.ColorAfterFog.Subrect.Base.X",local_208);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.ColorAfterFog.Subrect.Base.Y",local_204);
        NVSDK_NGX_Parameter_SetUI
                  (uVar17,"DLSSD.ScreenSpaceSubsurfaceScatteringGuide.Subrect.Base.X",local_200);
        NVSDK_NGX_Parameter_SetUI
                  (uVar17,"DLSSD.ScreenSpaceSubsurfaceScatteringGuide.Subrect.Base.Y",local_1fc);
        NVSDK_NGX_Parameter_SetUI
                  (uVar17,"DLSSD.ColorBeforeScreenSpaceSubsurfaceScattering.Subrect.Base.X",
                   local_1f8);
        NVSDK_NGX_Parameter_SetUI
                  (uVar17,"DLSSD.ColorBeforeScreenSpaceSubsurfaceScattering.Subrect.Base.Y",
                   local_1f4);
        NVSDK_NGX_Parameter_SetUI
                  (uVar17,"DLSSD.ColorAfterScreenSpaceSubsurfaceScattering.Subrect.Base.X",local_1f0
                  );
        NVSDK_NGX_Parameter_SetUI
                  (uVar17,"DLSSD.ColorAfterScreenSpaceSubsurfaceScattering.Subrect.Base.Y",local_1ec
                  );
        NVSDK_NGX_Parameter_SetUI
                  (uVar17,"DLSSD.ScreenSpaceRefractionGuide.Subrect.Base.X",local_1e8);
        NVSDK_NGX_Parameter_SetUI
                  (uVar17,"DLSSD.ScreenSpaceRefractionGuide.Subrect.Base.Y",local_1e4);
        NVSDK_NGX_Parameter_SetUI
                  (uVar17,"DLSSD.ColorBeforeScreenSpaceRefraction.Subrect.Base.X",local_1e0);
        NVSDK_NGX_Parameter_SetUI
                  (uVar17,"DLSSD.ColorBeforeScreenSpaceRefraction.Subrect.Base.Y",local_1dc);
        NVSDK_NGX_Parameter_SetUI
                  (uVar17,"DLSSD.ColorAfterScreenSpaceRefraction.Subrect.Base.X",local_1d8);
        NVSDK_NGX_Parameter_SetUI
                  (uVar17,"DLSSD.ColorAfterScreenSpaceRefraction.Subrect.Base.Y",local_1d4);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.DepthOfFieldGuide.Subrect.Base.X",local_1d0);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.DepthOfFieldGuide.Subrect.Base.Y",local_1cc);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.ColorBeforeDepthOfField.Subrect.Base.X",local_1c8);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.ColorBeforeDepthOfField.Subrect.Base.Y",local_1c4);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.ColorAfterDepthOfField.Subrect.Base.X",local_1c0);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.ColorAfterDepthOfField.Subrect.Base.Y",local_1bc);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.DiffuseHitDistance.Subrect.Base.X",local_1b8);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.DiffuseHitDistance.Subrect.Base.Y",local_1b4);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.SpecularHitDistance.Subrect.Base.X",local_1b0);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.SpecularHitDistance.Subrect.Base.Y",local_1ac);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.DiffuseRayDirection.Subrect.Base.X",local_1a8);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.DiffuseRayDirection.Subrect.Base.Y",local_1a4);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.SpecularRayDirection.Subrect.Base.X",local_1a0);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSSD.SpecularRayDirection.Subrect.Base.Y",local_19c);
        NVSDK_NGX_Parameter_SetUI
                  (uVar17,"DLSSD.DiffuseRayDirectionHitDistance.Subrect.Base.X",local_198);
        NVSDK_NGX_Parameter_SetUI
                  (uVar17,"DLSSD.DiffuseRayDirectionHitDistance.Subrect.Base.Y",local_194);
        NVSDK_NGX_Parameter_SetUI
                  (uVar17,"DLSSD.SpecularRayDirectionHitDistance.Subrect.Base.X",local_190);
        NVSDK_NGX_Parameter_SetUI
                  (uVar17,"DLSSD.SpecularRayDirectionHitDistance.Subrect.Base.Y",local_18c);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"WorldToViewMatrix",local_188);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"ViewToClipMatrix",local_180);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSS.TransparencyLayer",local_b0);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSS.TransparencyLayerOpacity",local_a0);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSS.TransparencyLayerMvecs",local_90);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSS.DisocclusionMask",local_80);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.TransparencyLayer.Subrect.Base.X",local_a8);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.TransparencyLayer.Subrect.Base.Y",local_a4);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.TransparencyLayerOpacity.Subrect.Base.X",local_98);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.TransparencyLayerOpacity.Subrect.Base.Y",local_94);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.TransparencyLayerMvecs.Subrect.Base.X",local_88);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.TransparencyLayerMvecs.Subrect.Base.Y",local_84);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.DisocclusionMask.Subrect.Base.X",local_78);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.DisocclusionMask.Subrect.Base.Y",local_74);
LAB_143c03081:
        NVSDK_NGX_VULKAN_EvaluateFeature_C(uVar13,uVar18,uVar17,0);
      }
    }
  }
  else {
    memset(&local_3e0,0,0x168);
    plVar16 = (longlong *)param_3[9];
    lVar14 = (**(code **)(*plVar16 + 0x10))(plVar16);
    if (lVar14 != 0) {
      plVar16 = *(longlong **)(lVar14 + 0x60);
    }
    (**(code **)(*plVar15 + 0x5e0))(plVar15,&local_420,plVar16);
    local_3d8 = &local_468;
    local_438 = (ulonglong)((local_3e8 & 0x60000) != 0) << 0x20;
    local_468 = local_420;
    uStack_460 = uStack_418;
    uStack_45c = uStack_414;
    local_458 = local_410;
    uStack_454 = uStack_40c;
    uStack_450 = uStack_408;
    uStack_44c = uStack_404;
    local_358 = *(undefined4 *)(param_3 + 0xe);
    local_354 = *(undefined4 *)((longlong)param_3 + 0x74);
    local_3b0 = (longlong *)
                CONCAT44(*(int *)((longlong)param_3 + 0x6c) - *(int *)((longlong)param_3 + 100),
                         *(int *)(param_3 + 0xd) - *(int *)(param_3 + 0xc));
    plVar16 = (longlong *)*param_3;
    lVar14 = (**(code **)(*plVar16 + 0x10))(plVar16);
    if (lVar14 != 0) {
      plVar16 = *(longlong **)(lVar14 + 0x60);
    }
    (**(code **)(*plVar15 + 0x5e0))(plVar15,&local_420,plVar16);
    local_3e0 = &local_4a0;
    local_470 = (ulonglong)((local_3e8 & 0x60000) != 0) << 0x20;
    local_4a0._0_4_ = (undefined4)local_420;
    local_4a0._4_4_ = local_420._4_4_;
    uStack_498 = uStack_418;
    uStack_494 = uStack_414;
    local_490 = local_410;
    uStack_48c = uStack_40c;
    uStack_488 = uStack_408;
    uStack_484 = uStack_404;
    local_380 = *(uint *)(param_3 + 0xc);
    local_37c = *(float *)((longlong)param_3 + 100);
    plVar16 = (longlong *)param_3[1];
    lVar14 = (**(code **)(*plVar16 + 0x10))(plVar16);
    if (lVar14 != 0) {
      plVar16 = *(longlong **)(lVar14 + 0x60);
    }
    (**(code **)(*plVar15 + 0x5e0))(plVar15,&local_420,plVar16);
    local_3c8 = &local_4d8;
    local_4a8 = (ulonglong)((local_3e8 & 0x60000) != 0) << 0x20;
    local_4d8 = (undefined4)local_420;
    uStack_4d4 = local_420._4_4_;
    uStack_4d0 = uStack_418;
    uStack_4cc = uStack_414;
    local_4c8 = local_410;
    uStack_4c4 = uStack_40c;
    uStack_4c0 = uStack_408;
    uStack_4bc = uStack_404;
    local_378 = *(float *)(param_3 + 0xc);
    local_374 = *(undefined4 *)((longlong)param_3 + 100);
    plVar16 = (longlong *)param_3[2];
    lVar14 = (**(code **)(*plVar16 + 0x10))(plVar16);
    if (lVar14 != 0) {
      plVar16 = *(longlong **)(lVar14 + 0x60);
    }
    (**(code **)(*plVar15 + 0x5e0))(plVar15,&local_420,plVar16);
    local_3c0 = &local_510;
    local_4e0 = (ulonglong)((local_3e8 & 0x60000) != 0) << 0x20;
    local_510 = (undefined4)local_420;
    uStack_50c = local_420._4_4_;
    uStack_508 = uStack_418;
    uStack_504 = uStack_414;
    local_500 = local_410;
    uStack_4fc = uStack_40c;
    uStack_4f8 = uStack_408;
    uStack_4f4 = uStack_404;
    local_370 = 0;
    local_388 = (longlong *)0x0;
    if (*(char *)((longlong)param_3 + 0x1b2) == '\x01') {
      plVar16 = (longlong *)param_3[4];
      lVar14 = (**(code **)(*plVar16 + 0x10))(plVar16);
      if (lVar14 != 0) {
        plVar16 = *(longlong **)(lVar14 + 0x60);
      }
      (**(code **)(*plVar15 + 0x5e0))(plVar15,&local_420,plVar16);
      local_518 = (ulonglong)((local_3e8 & 0x60000) != 0) << 0x20;
      local_538 = local_410;
      uStack_534 = uStack_40c;
      uStack_530 = uStack_408;
      uStack_52c = uStack_404;
      local_528 = local_400;
      local_548[0] = local_420;
      uStack_51c = uStack_3f4;
      local_388 = (longlong *)0x0;
      if ((*(byte *)((longlong)param_3 + 0x1b2) & 1) != 0) {
        local_388 = local_548;
      }
    }
    local_360 = *(undefined4 *)(param_3 + 0xc);
    uStack_35c = *(undefined4 *)((longlong)param_3 + 0x74);
    plVar16 = (longlong *)param_3[3];
    lVar14 = (**(code **)(*plVar16 + 0x10))(plVar16);
    if (lVar14 != 0) {
      plVar16 = *(longlong **)(lVar14 + 0x60);
    }
    (**(code **)(*plVar15 + 0x5e0))(plVar15,&local_420,plVar16);
    local_550 = (ulonglong)((local_3e8 & 0x60000) != 0) << 0x20;
    local_580[0] = local_420;
    local_570 = local_410;
    uStack_56c = uStack_40c;
    uStack_568 = uStack_408;
    uStack_564 = uStack_404;
    local_390 = local_580;
    if (*(char *)(param_3 + 0x36) != '\0') {
      local_390 = (longlong *)0x0;
    }
    local_350 = *(float *)((longlong)param_3 + 0x1ac);
    local_3d0 = (undefined4 *)CONCAT44(local_3d0._4_4_,*(undefined4 *)((longlong)param_3 + 0x194));
    local_3b8 = *(undefined4 *)(param_3 + 0x10);
    uStack_3b4 = *(undefined4 *)((longlong)param_3 + 0x84);
    fStack_3a4 = *(float *)(param_3 + 0x11);
    local_3a0 = (undefined4 *)CONCAT44(local_3a0._4_4_,*(undefined4 *)((longlong)param_3 + 0x8c));
    local_3a8 = (uint)*(byte *)(param_3 + 0x33);
    local_290 = *(undefined4 *)(param_3 + 0x35);
    uVar18 = *(undefined8 *)(*(longlong *)*param_4 + 0x48);
    uVar17 = *(undefined8 *)(*(longlong *)*param_4 + 0x50);
    if (((((local_3e0 == (longlong *)0x0) || ((int)local_3e0[6] == 0)) &&
         ((local_3c0 == (undefined4 *)0x0 || (local_3c0[0xc] == 0)))) &&
        ((local_3d8 == (longlong *)0x0 || ((int)local_3d8[6] == 0)))) &&
       (((local_3c8 == (undefined4 *)0x0 || (local_3c8[0xc] == 0)) &&
        (((local_398 == (undefined4 *)0x0 || (local_398[0xc] == 0)) &&
         ((local_388 == (longlong *)0x0 || ((int)local_388[6] == 0)))))))) {
      lVar14 = 0;
      do {
        if (((&local_340)[lVar14] != 0) && (*(int *)((&local_340)[lVar14] + 0x30) != 0))
        goto LAB_143c03092;
        lVar14 = lVar14 + 1;
      } while (lVar14 != 0x10);
      if (((((local_2b8 == 0) || (*(int *)(local_2b8 + 0x30) == 0)) &&
           ((local_2b0 == 0 || (*(int *)(local_2b0 + 0x30) == 0)))) &&
          (((local_2a8 == 0 || (*(int *)(local_2a8 + 0x30) == 0)) &&
           ((local_2a0 == 0 || (*(int *)(local_2a0 + 0x30) == 0)))))) &&
         ((((local_298 == 0 || (*(int *)(local_298 + 0x30) == 0)) &&
           ((local_288 == 0 || (*(int *)(local_288 + 0x30) == 0)))) &&
          ((local_280 == 0 || (*(int *)(local_280 + 0x30) == 0)))))) {
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"Color");
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"Output",local_3d8);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"Depth",local_3c8);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"MotionVectors",local_3c0);
        NVSDK_NGX_Parameter_SetF(uVar17,"Jitter.Offset.X");
        NVSDK_NGX_Parameter_SetF(uVar17,"Jitter.Offset.Y");
        NVSDK_NGX_Parameter_SetF(uVar17,"Sharpness");
        NVSDK_NGX_Parameter_SetI(uVar17,"Reset",local_3a8);
        NVSDK_NGX_Parameter_SetF
                  (uVar17,"MV.Scale.X",
                   ~-(uint)(fStack_3a4 == 0.0) & (uint)fStack_3a4 |
                   -(uint)(fStack_3a4 == 0.0) & 0x3f800000);
        NVSDK_NGX_Parameter_SetF
                  (uVar17,"MV.Scale.Y",
                   ~-(uint)(local_3a0._0_4_ == 0.0) & (uint)local_3a0._0_4_ |
                   -(uint)(local_3a0._0_4_ == 0.0) & 0x3f800000);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"TransparencyMask",local_398);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"ExposureTexture",local_390);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DLSS.Input.Bias.Current.Color.Mask",local_388);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Albedo",local_340);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Roughness",local_338);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Metallic",local_330);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Specular",CONCAT44(uStack_324,local_328))
        ;
        NVSDK_NGX_Parameter_SetVoidPointer
                  (uVar17,"GBuffer.Subsurface",CONCAT44(uStack_31c,local_320));
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Normals",local_318);
        NVSDK_NGX_Parameter_SetVoidPointer
                  (uVar17,"GBuffer.ShadingModelId",CONCAT44(uStack_30c,local_310));
        NVSDK_NGX_Parameter_SetVoidPointer
                  (uVar17,"GBuffer.MaterialId",CONCAT44(uStack_304,local_308));
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Attrib.8",CONCAT44(uStack_2fc,local_300))
        ;
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Attrib.9",CONCAT44(uStack_2f4,local_2f8))
        ;
        NVSDK_NGX_Parameter_SetVoidPointer
                  (uVar17,"GBuffer.Attrib.10",CONCAT44(uStack_2ec,local_2f0));
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Attrib.11",local_2e8);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Attrib.12",local_2e0);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Attrib.13",local_2d8);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Attrib.14",local_2d0);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"GBuffer.Attrib.15",local_2c8);
        NVSDK_NGX_Parameter_SetUI(uVar17,"TonemapperType",local_2c0);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"MotionVectors3D",local_2b8);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"IsParticleMask",local_2b0);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"AnimatedTextureMask",local_2a8);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"DepthHighRes",local_2a0);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"Position.ViewSpace",local_298);
        NVSDK_NGX_Parameter_SetF(uVar17,"FrameTimeDeltaInMsec");
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"RayTracingHitDistance",local_288);
        NVSDK_NGX_Parameter_SetVoidPointer(uVar17,"MotionVectorsReflection",local_280);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.Color.Subrect.Base.X",local_380);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.Color.Subrect.Base.Y",local_37c);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.Depth.Subrect.Base.X",local_378);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.Depth.Subrect.Base.Y",local_374);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.MV.Subrect.Base.X",local_370 & 0xffffffff);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.MV.Subrect.Base.Y",local_370._4_4_);
        NVSDK_NGX_Parameter_SetUI
                  (uVar17,"DLSS.Input.Translucency.Subrect.Base.X",(ulonglong)local_368 & 0xffffffff
                  );
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.Translucency.Subrect.Base.Y",local_368._4_4_);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.Bias.Current.Color.Subrect.Base.X",local_360);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Input.Bias.Current.Color.Subrect.Base.Y",uStack_35c);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Output.Subrect.Base.X",local_358);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Output.Subrect.Base.Y",local_354);
        NVSDK_NGX_Parameter_SetUI
                  (uVar17,"DLSS.Render.Subrect.Dimensions.Width",(ulonglong)local_3b0 & 0xffffffff);
        NVSDK_NGX_Parameter_SetUI(uVar17,"DLSS.Render.Subrect.Dimensions.Height",local_3b0._4_4_);
        NVSDK_NGX_Parameter_SetF
                  (uVar17,"DLSS.Pre.Exposure",
                   ~-(uint)(local_350 == 0.0) & (uint)local_350 |
                   -(uint)(local_350 == 0.0) & 0x3f800000);
        NVSDK_NGX_Parameter_SetF(uVar17,"DLSS.Exposure.Scale");
        NVSDK_NGX_Parameter_SetI(uVar17,"DLSS.Indicator.Invert.X.Axis",local_348 & 0xffffffff);
        NVSDK_NGX_Parameter_SetI(uVar17,"DLSS.Indicator.Invert.Y.Axis",local_348._4_4_);
        goto LAB_143c03081;
      }
    }
  }
LAB_143c03092:
  *(undefined4 *)(*(longlong *)*param_4 + 0x58) = *(undefined4 *)(param_1 + 0x50);
  (**(code **)(**(longlong **)(param_1 + 0x110) + 0x600))(*(longlong **)(param_1 + 0x110),1);
  (**(code **)(**(longlong **)(param_1 + 0x110) + 0x5f8))(*(longlong **)(param_1 + 0x110),uVar13);
LAB_143c030c6:
  plVar15 = (longlong *)param_4[1];
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_678) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


