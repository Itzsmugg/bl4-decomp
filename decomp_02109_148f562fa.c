// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148f562fa FUN_148f562fa body=148 status=ok
// SIG undefined FUN_148f562fa(void)

undefined8 FUN_148f562fa(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459f456a();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f56390 FUN_148f56390 body=202 status=ok
// SIG undefined FUN_148f56390(void)

void FUN_148f56390(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  local_38 = L"OnStartDraw";
  local_30 = 0xb;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"UDrawPolygonTool";
  local_30 = 0x10;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,
                L"Draw a polygon on the drawing plane, and extrude it. Left-click to place polygon vertices. Hold Shift to ignore snapping while drawing."
               );
  (**(code **)(*plVar1 + 0x340))(plVar1,&local_38,2);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f5645c FUN_148f5645c body=422 status=ok
// SIG undefined FUN_148f5645c(void)

void FUN_148f5645c(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)((longlong)param_1 + 0x559) == '\x01') {
    *(undefined4 *)(param_1[0x15] + 0xbc) = *(undefined4 *)((longlong)param_1 + 0x55c);
    *(undefined1 *)((longlong)param_1 + 0x559) = 0;
  }
  FUN_14851b2ea(param_1[0x2a]);
  param_1[0x2a] = 0;
  (**(code **)(*(longlong *)param_1[0xae] + 0x2a8))();
  (**(code **)(*(longlong *)param_1[0xaf] + 0x2a8))();
  param_1[0xaf] = 0;
  uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  plVar2 = (longlong *)FUN_148451354(uVar1);
  (**(code **)(*plVar2 + 0x2d8))(plVar2,param_1);
  plVar2 = (longlong *)param_1[0x14];
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x15];
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x16];
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x17];
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f56604 FUN_148f56604 body=459 status=ok
// SIG undefined FUN_148f56604(void)

void FUN_148f56604(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_118 [32];
  wchar_t **local_f8;
  longlong **local_f0;
  undefined1 local_e8;
  undefined8 *local_e0;
  undefined1 **local_d8;
  undefined8 local_d0;
  longlong local_c8 [2];
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  longlong *local_a8 [2];
  wchar_t *local_98;
  undefined4 local_90;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78 = 0;
  local_68 = &PTR_LAB_14ba269c0;
  local_88[0] = &LAB_14436cf1e;
  local_98 = L"ToggleGizmoVisibilityTooltip";
  local_90 = 0x1c;
  local_d0 = param_2;
  local_60 = param_1;
  FUN_1446e940c(local_ac,&local_98);
  local_98 = L"UDrawPolygonTool";
  local_90 = 0x10;
  FUN_1446e940c(local_b0,&local_98);
  FUN_140208bae(local_a8,local_b0,local_ac,L"Toggle visibility of the transformation gizmo");
  local_98 = L"ToggleGizmoVisibilityUIName";
  local_90 = 0x1b;
  FUN_1446e940c(local_b4,&local_98);
  local_98 = L"UDrawPolygonTool";
  local_90 = 0x10;
  FUN_1446e940c(local_b8,&local_98);
  FUN_140208bae(&local_98,local_b8,local_b4,L"Toggle Gizmo");
  FUN_140056680(local_c8,L"ToggleGizmoVisibility");
  local_e0 = &DAT_14c966e80;
  local_e8 = 0;
  local_f8 = &local_98;
  local_f0 = local_a8;
  local_d8 = local_88;
  FUN_148450124(local_d0,param_1,0x2712,local_c8);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_98 + 0x10))();
  }
  if (local_a8[0] != (longlong *)0x0) {
    (**(code **)(*local_a8[0] + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f567d0 FUN_148f567d0 body=110 status=ok
// SIG undefined FUN_148f567d0(void)

void FUN_148f567d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x558) == '\0') && (*(int *)(param_1 + 200) != 0)) {
    *(undefined1 *)(param_1 + 0x1a8) = 0;
    if (*(char *)(param_1 + 0x191) == '\0') {
      FUN_1405b70a4(param_1 + 0xc0,param_3);
      iVar1 = *(int *)(param_1 + 200);
    }
    else {
      FUN_1405b70a4(param_1 + 0x198);
      iVar1 = *(int *)(param_1 + 0x1a0);
    }
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 400) = 1;
      *(int *)(param_1 + 0x580) = *(int *)(param_1 + 0x580) + 1;
    }
  }
  return;
}



// FUNCTION 148f5683e FUN_148f5683e body=144 status=ok
// SIG undefined FUN_148f5683e(void)

void FUN_148f5683e(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  char local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[0x16] != 0) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x378))(plVar1);
    (**(code **)(*plVar1 + 0x30))(plVar1,local_68);
    if (*(char *)(param_1[0x16] + 0xa9) != local_68[0]) {
      *(char *)(param_1[0x16] + 0xa9) = local_68[0];
      (**(code **)(*param_1 + 0x330))(param_1,param_1[0x16]);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f568cf FUN_148f568cf body=833 status=ok
// SIG undefined FUN_148f568cf(void)

void FUN_148f568cf(longlong *param_1,double *param_2,float param_3,double *param_4,
                  undefined8 param_5,undefined4 param_6)

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
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined1 local_120;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  dVar1 = param_2[3];
  dVar2 = param_2[4];
  dVar3 = param_2[5];
  dVar4 = dVar1 * param_4[1] - *param_4 * dVar2;
  dVar10 = dVar3 * *param_4 - param_4[2] * dVar1;
  dVar11 = param_4[2] * dVar2 - param_4[1] * dVar3;
  dVar6 = SQRT(dVar4 * dVar4 + dVar11 * dVar11 + dVar10 * dVar10);
  dVar12 = 1.0 / dVar6;
  if (0.0 < dVar6) {
    dVar11 = dVar11 * dVar12;
    dVar10 = dVar10 * dVar12;
  }
  else {
    dVar11 = 0.0;
    dVar10 = 0.0;
  }
  dVar5 = (double)param_3;
  dVar7 = dVar5 * 0.25;
  dVar12 = (double)(-(ulonglong)(0.0 < dVar6) & (ulonglong)(dVar4 * dVar12)) * dVar5;
  dVar6 = (param_2[2] - dVar7 * dVar3) - dVar12;
  dVar8 = (param_2[1] - dVar7 * dVar2) - dVar10 * dVar5;
  dVar4 = (*param_2 - dVar7 * dVar1) - dVar11 * dVar5;
  dVar12 = dVar7 * dVar3 + param_2[2] + dVar12;
  dVar9 = dVar7 * dVar2 + param_2[1] + dVar10 * dVar5;
  dVar10 = dVar7 * dVar1 + *param_2 + dVar11 * dVar5;
  local_120 = 1;
  local_128 = 0;
  local_130 = param_6;
  local_138 = 1;
  local_110 = dVar4;
  local_108 = dVar8;
  local_100 = dVar6;
  local_f8 = dVar10;
  local_f0 = dVar9;
  local_e8 = dVar12;
  (**(code **)(*param_1 + 0x30))(param_1,&local_110,&local_f8,param_5);
  dVar5 = dVar5 * 0.5;
  local_110 = dVar4 + dVar5 * dVar1;
  local_108 = dVar8 + dVar2 * dVar5;
  local_100 = dVar6 + dVar3 * dVar5;
  local_f8 = dVar5 * dVar1 + dVar10;
  local_f0 = dVar2 * dVar5 + dVar9;
  local_e8 = dVar3 * dVar5 + dVar12;
  local_120 = 1;
  local_128 = 0;
  local_130 = param_6;
  local_138 = 1;
  (**(code **)(*param_1 + 0x30))(param_1,&local_110,&local_f8,param_5);
  if ((local_e0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f56c12 FUN_148f56c12 body=5980 status=ok
// SIG undefined FUN_148f56c12(void)

void FUN_148f56c12(longlong *param_1,longlong *param_2)

{
  longlong **pplVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int iVar4;
  void *_Src;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  double *pdVar15;
  double *pdVar16;
  undefined4 uVar17;
  undefined8 unaff_RSI;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  undefined4 unaff_XMM13_Db;
  undefined1 auStack_2b8 [32];
  uint *local_298;
  double local_290;
  undefined4 local_288;
  undefined1 local_280;
  float local_278;
  undefined4 local_270;
  undefined1 local_268;
  uint local_25c;
  longlong *local_258;
  ulonglong local_250;
  ulonglong local_248;
  longlong *local_240;
  ulonglong local_238;
  longlong *local_230;
  ulonglong local_228;
  double *local_220;
  uint local_218;
  uint uStack_214;
  uint uStack_210;
  float fStack_20c;
  undefined8 local_208;
  undefined4 local_1f8;
  uint local_1f4;
  uint local_1f0;
  undefined4 local_1ec;
  longlong **local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double local_1d0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  longlong *local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  float local_108;
  char local_fc;
  ulonglong local_f0;
  undefined7 uVar20;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  plVar12 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
  local_150 = plVar12;
  plVar13 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  plVar13 = (longlong *)(**(code **)(*plVar13 + 0x378))(plVar13);
  (**(code **)(*plVar13 + 0x18))(plVar13,param_1 + 0x20);
  (**(code **)(*param_2 + 0x18))(param_2,&local_148);
  if ((char)param_1[0xac] == '\x01') {
    FUN_148f58370(param_1);
    *(undefined1 *)(param_1 + 0xac) = 0;
  }
  pdVar16 = (double *)(param_1 + 0x1c);
  dVar5 = (double)FUN_148556b6a(&local_148,pdVar16,0x3ff0000000000000);
  uVar20 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar17 = (undefined4)CONCAT71(uVar20,1);
  if (*(byte *)(param_1 + 0xab) == 0) {
    if ((char)param_1[0x5f] == '\x01') {
      uVar17 = (undefined4)CONCAT71(uVar20,(int)param_1[99] == 0x3e9);
    }
    else {
      uVar17 = 0;
    }
  }
  *(byte *)(param_1[0xaf] + 0x70) = *(byte *)(param_1 + 0xab) ^ 1;
  (**(code **)(*(longlong *)param_1[0xaf] + 0x2b0))((longlong *)param_1[0xaf],param_2);
  cVar9 = *(char *)((longlong)param_1 + 0x191);
  local_248 = CONCAT44(local_248._4_4_,uVar17);
  if (cVar9 == '\x01') {
    iVar4 = (int)param_1[0x34];
    if (0 < (longlong)iVar4) {
      local_1e8 = (longlong **)0x0;
      _Src = (void *)param_1[0x33];
      uStack_1e0 = (undefined4 *)CONCAT44(uStack_1e0._4_4_,iVar4);
      FUN_1405b70fe(&local_1e8,iVar4,0);
      memcpy(local_1e8,_Src,(longlong)iVar4 * 0x18);
      puVar8 = uStack_1e0;
      if ((char)param_1[0xab] == '\0') {
        lVar21 = (longlong)(int)uStack_1e0;
        uVar11 = (int)uStack_1e0 + 1;
        uStack_1e0 = (undefined4 *)CONCAT44(uStack_1e0._4_4_,uVar11);
        if (uStack_1e0._4_4_ < uVar11) {
          FUN_1403e3958(&local_1e8,(ulonglong)puVar8 & 0xffffffff);
        }
        local_1e8[lVar21 * 3 + 2] = (longlong *)param_1[0x1e];
        uVar17 = *(undefined4 *)((longlong)param_1 + 0xe4);
        lVar18 = param_1[0x1d];
        uVar7 = *(undefined4 *)((longlong)param_1 + 0xec);
        pplVar1 = local_1e8 + lVar21 * 3;
        *(undefined4 *)pplVar1 = *(undefined4 *)pdVar16;
        *(undefined4 *)((longlong)pplVar1 + 4) = uVar17;
        *(int *)(pplVar1 + 1) = (int)lVar18;
        *(undefined4 *)((longlong)pplVar1 + 0xc) = uVar7;
      }
      FUN_148f58554(param_1,&local_1e8,param_1 + 0x18,param_1 + 0x1a);
      if (local_1e8 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      cVar9 = *(char *)((longlong)param_1 + 0x191);
    }
  }
  local_250 = CONCAT71(local_250._1_7_,cVar9);
  fVar27 = local_108 / 90.0;
  plVar13 = param_1 + 0x18;
  local_228 = (ulonglong)*(uint *)(param_1 + 0x19);
  local_258 = plVar13;
  if ((char)param_1[0x5f] != '\x01') goto LAB_148f5757f;
  local_168 = (longlong **)CONCAT44(DAT_14c75905c,DAT_14c75905c);
  uStack_160 = (undefined4 *)CONCAT44(0x3f800000,DAT_14c758c60);
  local_1d8 = (double)param_1[0x77];
  local_1e8 = (longlong **)param_1[0x75];
  uStack_1e0 = (undefined4 *)param_1[0x76];
  local_298._0_1_ = 1;
  (**(code **)(*plVar12 + 0x40))(plVar12,&local_1e8,&local_168,fVar27 * 10.0);
  local_168 = (longlong **)CONCAT44(DAT_14c75905c,DAT_14c75905c);
  uStack_160 = (undefined4 *)CONCAT44(0x3f800000,DAT_14c758c60);
  local_1d8 = (double)param_1[0x74];
  local_1e8 = (longlong **)param_1[0x72];
  uStack_1e0 = (undefined4 *)param_1[0x73];
  local_298._0_1_ = 1;
  (**(code **)(*plVar12 + 0x40))(plVar12,&local_1e8,&local_168,fVar27 * 15.0);
  local_188 = (longlong **)CONCAT44(DAT_14c75905c,DAT_14c75905c);
  uStack_180 = (undefined4 *)CONCAT44(0x3f800000,DAT_14c758c60);
  local_1d8 = (double)param_1[0x74];
  local_1e8 = (longlong **)param_1[0x72];
  uStack_1e0 = (undefined4 *)param_1[0x73];
  local_158 = (double)param_1[0x77];
  local_168 = (longlong **)param_1[0x75];
  uStack_160 = (undefined4 *)param_1[0x76];
  local_280 = 1;
  local_290 = (double)CONCAT44(local_290._4_4_,fVar27 * 0.5);
  local_298 = (uint *)CONCAT71(local_298._1_7_,1);
  local_288 = 0;
  (**(code **)(*plVar12 + 0x30))(plVar12,&local_168,&local_1e8);
  if ((char)param_1[0x5f] == '\x01') {
    if ((int)param_1[99] == 0x3eb) {
      dVar25 = local_128 * 0.0 + local_120 * -0.0;
      dVar26 = local_118 * 0.0;
      dVar24 = local_128 * -0.0 + dVar26;
      dVar25 = dVar25 + dVar25;
      dVar6 = (dVar26 - local_128) + (dVar26 - local_128);
      dVar26 = (local_120 - dVar26) + (local_120 - dVar26);
      local_1d8 = (local_128 * dVar6 - dVar26 * local_120) + local_110 * dVar25 + 1.0;
      uStack_1e0 = (undefined4 *)
                   ((local_118 * dVar26 - dVar25 * local_128) + local_110 * dVar6 + 0.0);
      local_1e8 = (longlong **)((local_120 * dVar25 - dVar6 * local_118) + dVar26 * local_110 + 0.0)
      ;
      dVar25 = local_120 * -0.0 + local_128;
      dVar6 = local_120 * 0.0 - local_118;
      dVar25 = dVar25 + dVar25;
      dVar24 = dVar24 + dVar24;
      dVar6 = dVar6 + dVar6;
      local_158 = (local_128 * dVar24 - dVar6 * local_120) + local_110 * dVar25 + 0.0;
      uStack_160 = (undefined4 *)
                   ((local_118 * dVar6 - dVar25 * local_128) + local_110 * dVar24 + 1.0);
      local_168 = (longlong **)((local_120 * dVar25 - dVar24 * local_118) + dVar6 * local_110 + 0.0)
      ;
      local_178 = (double)param_1[0xaa];
      local_188 = (longlong **)param_1[0xa8];
      uStack_180 = (undefined4 *)param_1[0xa9];
      local_288 = 4;
LAB_148f573fd:
      local_290 = (double)(float)dVar5;
      local_298 = (uint *)&local_1a8;
      uStack_1a0 = (undefined4 *)CONCAT44(0x3f800000,DAT_14c758c60);
      local_1a8 = (longlong **)CONCAT44(DAT_14c75905c,DAT_14c75905c);
      local_268 = 1;
      local_270 = 0;
      local_280 = 1;
      local_278 = fVar27;
      FUN_147cb7c40(plVar12);
    }
    else if ((int)param_1[99] == 0x3ea) {
      if ((int)param_1[0xa7] == 1) {
        dVar6 = local_128 * 0.0 + local_120 * -0.0;
        dVar25 = local_118 * 0.0;
        dVar24 = local_128 * -0.0 + dVar25;
        dVar6 = dVar6 + dVar6;
        dVar26 = (dVar25 - local_128) + (dVar25 - local_128);
        dVar25 = (local_120 - dVar25) + (local_120 - dVar25);
        local_1d8 = (local_128 * dVar26 - dVar25 * local_120) + local_110 * dVar6 + 1.0;
        uStack_1e0 = (undefined4 *)
                     ((local_118 * dVar25 - dVar6 * local_128) + local_110 * dVar26 + 0.0);
        local_1e8 = (longlong **)
                    ((local_120 * dVar6 - dVar26 * local_118) + dVar25 * local_110 + 0.0);
        dVar25 = local_120 * -0.0 + local_128;
        dVar6 = local_120 * 0.0 - local_118;
        dVar25 = dVar25 + dVar25;
        dVar24 = dVar24 + dVar24;
        dVar6 = dVar6 + dVar6;
        local_158 = (local_128 * dVar24 - dVar6 * local_120) + local_110 * dVar25 + 0.0;
        uStack_160 = (undefined4 *)
                     ((local_118 * dVar6 - dVar25 * local_128) + local_110 * dVar24 + 1.0);
        local_168 = (longlong **)
                    ((local_120 * dVar25 - dVar24 * local_118) + dVar6 * local_110 + 0.0);
        local_178 = (double)param_1[0xa0];
        local_188 = (longlong **)param_1[0x9e];
        uStack_180 = (undefined4 *)param_1[0x9f];
        local_288 = 0x20;
        goto LAB_148f573fd;
      }
      local_188 = (longlong **)CONCAT44(DAT_14c75905c,DAT_14c75905c);
      uStack_180 = (undefined4 *)CONCAT44(0x3f800000,DAT_14c758c60);
      local_1d8 = (double)param_1[0xa3];
      local_1e8 = (longlong **)param_1[0xa1];
      uStack_1e0 = (undefined4 *)param_1[0xa2];
      local_158 = (double)param_1[0xa0];
      local_168 = (longlong **)param_1[0x9e];
      uStack_160 = (undefined4 *)param_1[0x9f];
      local_280 = 1;
      local_290 = (double)CONCAT44(local_290._4_4_,fVar27);
      local_298 = (uint *)CONCAT71(local_298._1_7_,1);
      local_288 = 0;
      (**(code **)(*plVar12 + 0x30))(plVar12);
    }
  }
  plVar13 = local_258;
  if (((char)param_1[0x5f] == '\x01') && (*(char *)((longlong)param_1 + 0x331) == '\x01')) {
    local_158 = (double)param_1[0x69] - (double)param_1[0x6c] * 99999.0;
    uStack_160 = (undefined4 *)((double)param_1[0x68] - (double)param_1[0x6b] * 99999.0);
    local_168 = (longlong **)((double)param_1[0x67] - (double)param_1[0x6a] * 99999.0);
    local_178 = (double)param_1[0x6c] * 99999.0 + (double)param_1[0x69];
    uStack_180 = (undefined4 *)((double)param_1[0x6b] * 99999.0 + (double)param_1[0x68]);
    local_188 = (longlong **)((double)param_1[0x6a] * 99999.0 + (double)param_1[0x67]);
    if (local_fc == '\0') {
      dVar25 = local_118 - local_128 * 0.0;
      dVar26 = local_128 * 0.0 - local_120;
      dVar6 = local_120 * 0.0 + local_118 * -0.0;
      dVar26 = dVar26 + dVar26;
      dVar25 = dVar25 + dVar25;
      dVar6 = dVar6 + dVar6;
      local_1d8 = (local_128 * dVar25 - dVar6 * local_120) + local_110 * dVar26 + 0.0;
      uStack_1e0 = (undefined4 *)
                   ((local_118 * dVar6 - dVar26 * local_128) + local_110 * dVar25 + 0.0);
      local_1e8 = (longlong **)((local_120 * dVar26 - dVar25 * local_118) + dVar6 * local_110 + 1.0)
      ;
      local_1d0 = (local_138 + local_1d8) * local_1d8 +
                  (local_148 + (double)local_1e8) * (double)local_1e8 +
                  (local_140 + (double)uStack_1e0) * (double)uStack_1e0;
      FUN_1485003b4(&local_1e8,&local_168,&local_188);
    }
    local_218 = DAT_14c75905c;
    uStack_214 = DAT_14c75905c;
    uStack_210 = DAT_14c758c60;
    fStack_20c = 1.0;
    local_1d8 = local_178;
    local_1e8 = local_188;
    uStack_1e0 = uStack_180;
    local_198 = local_158;
    local_1a8 = local_168;
    uStack_1a0 = uStack_160;
    local_280 = 1;
    local_290 = (double)CONCAT44(local_290._4_4_,fVar27 * 0.5);
    local_298 = (uint *)CONCAT71(local_298._1_7_,1);
    local_288 = 0;
    (**(code **)(*plVar12 + 0x30))(plVar12,&local_1a8,&local_1e8,&local_218);
    if (((char)param_1[0x5f] == '\x01') && ((char)param_1[0x6d] == '\x01')) {
      bVar23 = *(char *)((longlong)param_1 + 0x191) != '\0';
      if (bVar23) {
        plVar13 = param_1 + 0x33;
      }
      lVar21 = param_1[0xaf];
      dVar6 = *(double *)(lVar21 + 0x90);
      dVar25 = *(double *)(lVar21 + 0x98);
      dVar26 = *(double *)(lVar21 + 0xa0) + *(double *)(lVar21 + 0xa0);
      local_1a8 = (longlong **)(dVar6 * dVar26 + *(double *)(lVar21 + 0xa8) * (dVar25 + dVar25));
      uStack_1a0 = (undefined4 *)(dVar26 * dVar25 - (dVar6 + dVar6) * *(double *)(lVar21 + 0xa8));
      local_198 = 1.0 - ((dVar25 + dVar25) * dVar25 + dVar6 * (dVar6 + dVar6));
      local_218 = DAT_14c75905c;
      uStack_214 = DAT_14c75905c;
      uStack_210 = DAT_14c758c60;
      fVar28 = (float)dVar5 * 0.75;
      fStack_20c = 1.0;
      plVar19 = param_1 + 0x33;
      if (!bVar23) {
        plVar19 = local_258;
      }
      lVar18 = (longlong)*(int *)((longlong)param_1 + 0x36c) * 0x18;
      local_240 = param_2;
      FUN_146bd9232(&local_1e8,*plVar19 + lVar18,*plVar19 + lVar18 + 0x18);
      local_298 = &local_218;
      local_290._0_4_ = fVar27;
      FUN_148f568cf(plVar12,&local_1e8,CONCAT44(unaff_XMM13_Db,fVar28),&local_1a8);
      param_2 = local_240;
      local_218 = DAT_14c75905c;
      uStack_214 = DAT_14c75905c;
      uStack_210 = DAT_14c758c60;
      fStack_20c = 1.0;
      FUN_146bd9232(&local_1e8,*plVar19 + (longlong)(int)plVar13[1] * 0x18 + -0x18,pdVar16);
      local_298 = &local_218;
      local_290._0_4_ = fVar27;
      FUN_148f568cf(plVar12,&local_1e8,CONCAT44(unaff_XMM13_Db,fVar28),&local_1a8);
      plVar13 = local_258;
      local_1f8 = DAT_14c75905c;
      local_1f4 = DAT_14c75905c;
      local_1f0 = DAT_14c758c60;
      local_1ec = 0x3f800000;
      lVar21 = *plVar19;
      local_1d8 = *(double *)(lVar21 + 0x28 + lVar18);
      pdVar15 = (double *)(lVar21 + 0x18 + lVar18);
      local_1e8 = (longlong **)*pdVar15;
      uStack_1e0 = (undefined4 *)pdVar15[1];
      local_208 = *(undefined8 *)(lVar21 + 0x10 + lVar18);
      puVar2 = (uint *)(lVar21 + lVar18);
      local_218 = *puVar2;
      uStack_214 = puVar2[1];
      uStack_210 = puVar2[2];
      fStack_20c = (float)puVar2[3];
      local_280 = 1;
      local_288 = 0x3f800000;
      local_290 = (double)CONCAT44(local_290._4_4_,fVar27 + fVar27);
      local_298 = (uint *)CONCAT71(local_298._1_7_,1);
      (**(code **)(*plVar12 + 0x30))(plVar12,&local_218,&local_1e8);
    }
  }
LAB_148f5757f:
  plVar12 = local_150;
  if ((char)param_1[0x39] == '\x01') {
    local_168 = (longlong **)CONCAT44(DAT_14c75905c,DAT_14c75905c);
    uStack_160 = (undefined4 *)CONCAT44(0x3f800000,DAT_14c758c60);
    local_1d8 = (double)param_1[0x3c];
    local_1e8 = (longlong **)param_1[0x3a];
    uStack_1e0 = (undefined4 *)param_1[0x3b];
    local_298._0_1_ = 1;
    (**(code **)(*local_150 + 0x40))(local_150,&local_1e8,&local_168,fVar27 * 10.0);
    if ((*(float *)(param_1[0x16] + 0xb0) != 0.0) || (NAN(*(float *)(param_1[0x16] + 0xb0)))) {
      local_168 = (longlong **)CONCAT44(DAT_14c758ed0,DAT_14c75902c);
      uStack_160 = (undefined4 *)CONCAT44(0x3f800000,DAT_14c758ca8);
      local_1d8 = (double)param_1[0x3f];
      local_1e8 = (longlong **)param_1[0x3d];
      uStack_1e0 = (undefined4 *)param_1[0x3e];
      local_298._0_1_ = 1;
      (**(code **)(*plVar12 + 0x40))(plVar12,&local_1e8,&local_168,fVar27 * 15.0);
      plVar13 = local_258;
      local_188 = (longlong **)CONCAT44(DAT_14c75905c,DAT_14c75905c);
      uStack_180 = (undefined4 *)CONCAT44(0x3f800000,DAT_14c758c60);
      local_1d8 = (double)param_1[0x3c];
      local_1e8 = (longlong **)param_1[0x3a];
      uStack_1e0 = (undefined4 *)param_1[0x3b];
      local_158 = (double)param_1[0x3f];
      local_168 = (longlong **)param_1[0x3d];
      uStack_160 = (undefined4 *)param_1[0x3e];
      local_280 = 1;
      local_290 = (double)CONCAT44(local_290._4_4_,fVar27 * 0.5);
      local_298._0_1_ = 1;
      local_288 = 0;
      (**(code **)(*plVar12 + 0x30))(plVar12,&local_168,&local_1e8);
    }
    local_188 = (longlong **)CONCAT44(DAT_14c75905c,DAT_14c75905c);
    uStack_180 = (undefined4 *)CONCAT44(0x3f800000,DAT_14c758c60);
    local_1d8 = (double)param_1[0x1e];
    local_1e8 = (longlong **)*pdVar16;
    uStack_1e0 = (undefined4 *)param_1[0x1d];
    local_158 = (double)param_1[0x3f];
    local_168 = (longlong **)param_1[0x3d];
    uStack_160 = (undefined4 *)param_1[0x3e];
    local_280 = 1;
    local_290 = (double)CONCAT44(local_290._4_4_,fVar27 * 0.5);
    local_298 = (uint *)CONCAT71(local_298._1_7_,1);
    local_288 = 0;
    (**(code **)(*plVar12 + 0x30))(plVar12);
  }
  plVar12 = local_258;
  if (0 < (int)param_1[0x19]) {
    if ((char)local_250 == '\0' && (char)local_248 == '\0') {
      bVar23 = (char)param_1[0x35] != '\0';
      local_1f8 = 0xfff39c12;
      if (bVar23) {
        local_1f8 = 0xffff00ff;
      }
      local_248 = 0xff00ff00;
      pdVar15 = pdVar16;
      if (bVar23) {
        local_248 = 0xffff00ff;
      }
    }
    else {
      local_1f8 = 0xffffff00;
      local_248 = 0xffffff00;
      pdVar15 = (double *)*plVar13;
    }
    uStack_1a0 = &local_1f8;
    local_250 = local_248 >> 8;
    local_238 = local_248 >> 0x10;
    local_1e8 = (longlong **)*pdVar15;
    uStack_1e0 = (undefined4 *)pdVar15[1];
    local_1d8 = pdVar15[2];
    local_1a8 = &local_150;
    local_25c = (int)local_228 - 1;
    local_240 = param_2;
    local_230 = param_1;
    local_220 = pdVar16;
    if (1 < (int)local_228) {
      uVar14 = (ulonglong)local_25c;
      lVar21 = 0;
      do {
        local_218 = (&DAT_14c758c60)[local_1f8._2_1_];
        uStack_214 = (&DAT_14c758c60)[local_1f8._1_1_];
        uStack_210 = (&DAT_14c758c60)[(byte)local_1f8];
        fStack_20c = (float)(local_1f8 >> 0x18) * 0.003921569;
        lVar18 = *plVar12;
        local_158 = *(double *)(lVar18 + 0x28 + lVar21);
        puVar3 = (undefined8 *)(lVar18 + 0x18 + lVar21);
        local_168 = (longlong **)*puVar3;
        uStack_160 = (undefined4 *)puVar3[1];
        local_178 = *(double *)(lVar18 + 0x10 + lVar21);
        local_188 = *(longlong ***)(lVar18 + lVar21);
        uStack_180 = (undefined4 *)((undefined8 *)(lVar18 + lVar21))[1];
        local_280 = 1;
        local_290 = (double)CONCAT44(local_290._4_4_,fVar27);
        local_298 = (uint *)CONCAT71(local_298._1_7_,1);
        local_288 = 0;
        (**(code **)(*local_150 + 0x30))(local_150,&local_188,&local_168,&local_218);
        lVar21 = lVar21 + 0x18;
      } while (uVar14 * 0x18 != lVar21);
    }
    plVar12 = local_230;
    local_238 = (ulonglong)((uint)local_238 & 0xff);
    local_218 = (&DAT_14c758c60)[local_238];
    local_250 = (ulonglong)((uint)local_250 & 0xff);
    uStack_214 = (&DAT_14c758c60)[local_250];
    local_248 = (ulonglong)((uint)local_248 & 0xff);
    uStack_210 = (&DAT_14c758c60)[local_248];
    fStack_20c = 1.0;
    local_158 = local_1d8;
    local_168 = local_1e8;
    uStack_160 = uStack_1e0;
    lVar21 = (longlong)(int)local_25c;
    local_178 = *(double *)(local_230[0x18] + 0x10 + lVar21 * 0x18);
    puVar3 = (undefined8 *)(local_230[0x18] + lVar21 * 0x18);
    local_188 = (longlong **)*puVar3;
    uStack_180 = (undefined4 *)puVar3[1];
    local_280 = 1;
    local_290 = (double)CONCAT44(local_290._4_4_,fVar27);
    local_298 = (uint *)CONCAT71(local_298._1_7_,1);
    local_288 = 0;
    (**(code **)(*local_150 + 0x30))();
    if (0 < (int)plVar12[0x1b]) {
      lVar18 = 0;
      lVar22 = 0;
      do {
        FUN_144366c7a(&local_1a8,plVar12[0x1a] + lVar18,1,fVar27);
        lVar22 = lVar22 + 1;
        lVar18 = lVar18 + 0x10;
      } while (lVar22 < (int)plVar12[0x1b]);
    }
    plVar12 = local_258;
    fVar28 = fVar27 * 4.0;
    if (1 < (int)local_228) {
      uVar14 = (ulonglong)local_25c;
      lVar18 = 0;
      do {
        local_218 = (&DAT_14c758c60)[local_1f8._2_1_];
        uStack_214 = (&DAT_14c758c60)[local_1f8._1_1_];
        uStack_210 = (&DAT_14c758c60)[(byte)local_1f8];
        fStack_20c = (float)(local_1f8 >> 0x18) * 0.003921569;
        lVar22 = *plVar12;
        local_158 = *(double *)(lVar22 + 0x28 + lVar18);
        puVar3 = (undefined8 *)(lVar22 + 0x18 + lVar18);
        local_168 = (longlong **)*puVar3;
        uStack_160 = (undefined4 *)puVar3[1];
        local_178 = *(double *)(lVar22 + 0x10 + lVar18);
        local_188 = *(longlong ***)(lVar22 + lVar18);
        uStack_180 = (undefined4 *)((undefined8 *)(lVar22 + lVar18))[1];
        local_290 = (double)CONCAT44(local_290._4_4_,fVar28);
        local_280 = 1;
        local_288 = 0;
        local_298 = (uint *)((ulonglong)local_298 & 0xffffffffffffff00);
        (**(code **)(*local_150 + 0x30))(local_150,&local_188,&local_168,&local_218);
        lVar18 = lVar18 + 0x18;
      } while (uVar14 * 0x18 != lVar18);
    }
    param_1 = local_230;
    local_218 = (&DAT_14c758c60)[local_238];
    uStack_214 = (&DAT_14c758c60)[local_250];
    uStack_210 = (&DAT_14c758c60)[local_248];
    fStack_20c = 1.0;
    local_158 = local_1d8;
    local_168 = local_1e8;
    uStack_160 = uStack_1e0;
    local_178 = *(double *)(local_230[0x18] + 0x10 + lVar21 * 0x18);
    pdVar16 = (double *)(local_230[0x18] + lVar21 * 0x18);
    local_188 = (longlong **)*pdVar16;
    uStack_180 = (undefined4 *)pdVar16[1];
    local_290 = (double)CONCAT44(local_290._4_4_,fVar28);
    local_280 = 1;
    local_288 = 0;
    local_298 = (uint *)((ulonglong)local_298 & 0xffffffffffffff00);
    (**(code **)(*local_150 + 0x30))();
    if (0 < (int)param_1[0x1b]) {
      lVar18 = 0;
      lVar21 = 0;
      do {
        FUN_144366c7a(&local_1a8,param_1[0x1a] + lVar18,0,fVar28);
        lVar21 = lVar21 + 1;
        lVar18 = lVar18 + 0x10;
      } while (lVar21 < (int)param_1[0x1b]);
    }
    pdVar16 = local_220;
    param_2 = local_240;
    if (((char)param_1[0x35] != '\0') && ((char)param_1[0xab] == '\0')) {
      local_188 = (longlong **)CONCAT44(DAT_14c75905c,DAT_14c75905c);
      uStack_180 = (undefined4 *)CONCAT44(0x3f800000,DAT_14c758c60);
      local_158 = (double)param_1[0x38];
      local_168 = (longlong **)param_1[0x36];
      uStack_160 = (undefined4 *)param_1[0x37];
      local_298 = (uint *)CONCAT71(local_298._1_7_,1);
      (**(code **)(*local_150 + 0x40))(local_150,&local_168,&local_188,fVar27 * 12.0);
    }
  }
  bVar10 = *(byte *)(param_1 + 0xab);
  if (bVar10 == 0) {
    local_168 = (longlong **)CONCAT44(DAT_14c75905c,DAT_14c758c60);
    uStack_160 = (undefined4 *)CONCAT44(0x3f800000,DAT_14c758c60);
    local_1d8 = pdVar16[2];
    local_1e8 = (longlong **)*pdVar16;
    uStack_1e0 = (undefined4 *)pdVar16[1];
    local_298 = (uint *)CONCAT71(local_298._1_7_,1);
    (**(code **)(*local_150 + 0x40))(local_150,&local_1e8,&local_168,fVar27 * 10.0);
    bVar10 = *(byte *)(param_1 + 0xab);
  }
  if ((bVar10 & 1) != 0) {
    (**(code **)(*(longlong *)param_1[0xad] + 0x2b0))((longlong *)param_1[0xad],param_2);
  }
  if ((local_f0 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f58370 FUN_148f58370 body=483 status=ok
// SIG undefined FUN_148f58370(void)

void FUN_148f58370(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_318 [32];
  undefined8 *local_2f8;
  double local_2f0;
  undefined1 local_2e8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined1 local_238 [544];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_318;
  if ((1 < *(int *)(param_1 + 200)) && (*(longlong *)(param_1 + 0x150) != 0)) {
    cVar2 = FUN_14851bafc();
    if (cVar2 != '\0') {
      local_268 = DAT_14c8464f0;
      local_278 = DAT_14c8464e0;
      uStack_270 = DAT_14c8464e8;
      local_260 = 0;
      uStack_258 = 0;
      local_250 = 0;
      uStack_248 = 0x3ff0000000000000;
      local_2f8 = (undefined8 *)((ulonglong)local_2f8 & 0xffffffffffffff00);
      FUN_1411b354a(local_238,0,0,0);
      local_2f0 = 0.0;
      if (*(char *)(*(longlong *)(param_1 + 0xa8) + 0xb9) != '\0') {
        local_2f0 = (double)*(float *)(*(longlong *)(param_1 + 0xa8) + 0xbc);
      }
      local_2f8 = &local_278;
      local_2e8 = 0;
      cVar2 = FUN_148f5ab1c(param_1,param_1 + 0xc0,param_1 + 0xd0,local_238);
      if (cVar2 != '\0') {
        local_2d8 = local_260;
        uStack_2d0 = uStack_258;
        local_2c8 = (undefined4)local_250;
        uStack_2c4 = local_250._4_4_;
        uStack_2c0 = (undefined4)uStack_248;
        uStack_2bc = uStack_248._4_4_;
        local_2b8 = local_278;
        uStack_2b0 = uStack_270;
        local_2a8 = local_268;
        uStack_2a0 = 0;
        local_298 = 0x3ff0000000000000;
        uStack_290 = 0x3ff0000000000000;
        local_288 = 0x3ff0000000000000;
        uStack_280 = 0;
        FUN_14851b91a(*(undefined8 *)(param_1 + 0x150));
        uVar1 = *(undefined8 *)(param_1 + 0x150);
        uVar3 = FUN_14479d2ce(*(longlong *)(param_1 + 0xb8) + 0xa8);
        FUN_14851b338(uVar1,uVar3);
        FUN_14851b88e(*(undefined8 *)(param_1 + 0x150),
                      *(undefined1 *)(*(longlong *)(param_1 + 0xb8) + 0xb5));
        FUN_14851bbe8(*(undefined8 *)(param_1 + 0x150),local_238,1,0xf);
      }
      FUN_141082778(local_238);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f58554 FUN_148f58554 body=2009 status=ok
// SIG undefined FUN_148f58554(void)

/* WARNING: Removing unreachable block (ram,0x000148f58d24) */

void FUN_148f58554(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  double *pdVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  double *pdVar14;
  ulonglong uVar15;
  double *pdVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_1a8 [32];
  double *local_188;
  double *local_180;
  uint local_174;
  double *local_170;
  ulonglong local_168;
  longlong local_160;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  undefined8 uStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  longlong local_c8 [5];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_180 = &local_138;
  local_188 = &local_130;
  local_150 = param_4;
  FUN_148f58fae(param_1,param_2,&local_118,&local_128);
  dVar19 = cos(local_138);
  dVar20 = sin(local_138);
  local_148 = (longlong *)0x0;
  uStack_140 = 0;
  lVar18 = *(longlong *)(param_1 + 0xa8);
  cVar1 = *(char *)(lVar18 + 0xa8);
  if (cVar1 == '\x04') {
    dVar21 = (double)*(float *)(lVar18 + 0xac);
    dVar22 = 0.99;
    if (dVar21 <= 0.99) {
      dVar22 = dVar21;
    }
    local_188 = (double *)
                ((double)(-(ulonglong)(dVar21 < 0.01) & 0x3f847ae147ae147b |
                         ~-(ulonglong)(dVar21 < 0.01) & (ulonglong)dVar22) *
                 (double)(~-(ulonglong)(local_128 <= local_120) & (ulonglong)local_120 |
                         -(ulonglong)(local_128 <= local_120) & (ulonglong)local_128) * 0.5);
    dStack_100 = local_130 * local_120 * 0.5;
    local_108 = local_128 * 0.5;
    local_180 = (double *)CONCAT44(local_180._4_4_,*(undefined4 *)(lVar18 + 0xb0));
    FUN_148f5a4ca(&local_e8,&local_108,local_128,local_120);
  }
  else {
    if (cVar1 == '\x03') {
      dStack_100 = local_130 * local_120 * 0.5;
      local_108 = local_128 * 0.5;
    }
    else {
      if (cVar1 != '\x02') {
        FUN_1485ab348(&local_e8,local_128,*(undefined4 *)(lVar18 + 0xb0),0);
        pdVar16 = local_e8;
        uVar9 = (uint)local_e0;
        lVar18 = *(longlong *)(param_1 + 0xa8);
        if (*(char *)(lVar18 + 0xa8) == '\x05') {
          dVar21 = (double)*(float *)(lVar18 + 0xac);
          dVar22 = 0.99;
          if (dVar21 <= 0.99) {
            dVar22 = dVar21;
          }
          FUN_1485ab348(&local_e8,
                        local_128 *
                        (double)(-(ulonglong)(dVar21 < 0.01) & 0x3f847ae147ae147b |
                                ~-(ulonglong)(dVar21 < 0.01) & (ulonglong)dVar22),
                        *(undefined4 *)(lVar18 + 0xb0),0);
          uVar15 = uStack_140;
          lVar18 = (longlong)(int)uStack_140;
          uVar5 = (int)uStack_140 + 1;
          uStack_140 = CONCAT44(uStack_140._4_4_,uVar5);
          if (uStack_140._4_4_ < uVar5) {
            FUN_148279f30(&local_148,uVar15 & 0xffffffff);
          }
          local_148[lVar18 * 2] = 0;
          local_148[lVar18 * 2] = (longlong)local_e8;
          *(uint *)(local_148 + lVar18 * 2 + 1) = (uint)local_e0;
          *(undefined4 *)((longlong)local_148 + lVar18 * 0x10 + 0xc) = local_e0._4_4_;
          local_e0 = 0.0;
        }
        goto LAB_148f586c0;
      }
      local_128 = local_128 + local_128;
      local_108 = DAT_14c8463f0;
      dStack_100 = DAT_14c8463f8;
      local_120 = local_128;
    }
    FUN_1483f1e7e(&local_e8,&local_108,local_128,local_120);
  }
  pdVar16 = local_e8;
  uVar9 = (uint)local_e0;
LAB_148f586c0:
  local_e8 = (double *)0x0;
  local_d8 = (longlong *)FUN_14001cc68(0x28,8);
  *local_d8 = (longlong)&PTR_FUN_14ba26a30;
  local_d8[1] = (longlong)dVar19;
  local_d8[2] = (longlong)-dVar20;
  local_d8[3] = (longlong)dVar20;
  local_d8[4] = (longlong)dVar19;
  if ((double *)(local_d8 + 1) != (double *)0x0) {
    local_e8 = (double *)FUN_14436cf78;
  }
  uVar15 = (ulonglong)uVar9;
  local_160 = param_1;
  local_158 = param_3;
  if (0 < (int)uVar9) {
    uVar11 = uVar15;
    pdVar14 = pdVar16;
    do {
      pdVar4 = local_e8;
      plVar7 = local_d8;
      if (local_d8 == (longlong *)0x0) {
        plVar7 = local_c8;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*(code *)pdVar4)(&local_108,uVar6,pdVar14);
      *pdVar14 = local_108;
      pdVar14[1] = dStack_100;
      pdVar14 = pdVar14 + 2;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  local_168 = uVar15;
  if (local_e8 != (double *)0x0) {
    plVar7 = local_d8;
    if (local_d8 == (longlong *)0x0) {
      plVar7 = local_c8;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  local_174 = uVar9;
  local_170 = pdVar16;
  if ((longlong)(int)uStack_140 != 0) {
    plVar10 = local_148 + (longlong)(int)uStack_140 * 2;
    plVar7 = local_148;
    do {
      local_e8 = (double *)0x0;
      local_d8 = (longlong *)0x0;
      local_d8 = (longlong *)FUN_14001cc68(0x28,8);
      *local_d8 = (longlong)&PTR_FUN_14ba26a50;
      local_d8[1] = (longlong)dVar19;
      local_d8[2] = (longlong)-dVar20;
      local_d8[3] = (longlong)dVar20;
      local_d8[4] = (longlong)dVar19;
      if ((double *)(local_d8 + 1) != (double *)0x0) {
        local_e8 = (double *)FUN_14436d03c;
      }
      lVar18 = plVar7[1];
      if (0 < (longlong)(int)lVar18) {
        lVar13 = 0;
        do {
          pdVar16 = local_e8;
          lVar12 = *plVar7;
          plVar8 = local_d8;
          if (local_d8 == (longlong *)0x0) {
            plVar8 = local_c8;
          }
          uVar6 = (**(code **)(*plVar8 + 8))();
          (*(code *)pdVar16)(&local_108,uVar6,lVar12 + lVar13);
          lVar12 = *plVar7;
          *(double *)(lVar12 + lVar13) = local_108;
          ((double *)(lVar12 + lVar13))[1] = dStack_100;
          lVar13 = lVar13 + 0x10;
        } while ((longlong)(int)lVar18 * 0x10 != lVar13);
      }
      if (local_e8 != (double *)0x0) {
        plVar8 = local_d8;
        if (local_d8 == (longlong *)0x0) {
          plVar8 = local_c8;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar10);
  }
  plVar7 = local_158;
  uVar9 = local_174;
  lVar18 = *(longlong *)(local_160 + 0x578);
  FUN_14051b394(local_158,local_174,1);
  dVar20 = local_110;
  dVar19 = local_118;
  if (0 < (int)uVar9) {
    lVar13 = local_168 * 0x18;
    pdVar16 = local_170 + 1;
    lVar12 = 0;
    do {
      local_e0 = *pdVar16 + dVar20;
      local_e8 = (double *)(pdVar16[-1] + dVar19);
      local_d8 = (longlong *)0x0;
      FUN_146bed047(&local_108,lVar18 + 0x90,&local_e8);
      dVar22 = *(double *)(lVar18 + 0x88);
      dVar21 = *(double *)(lVar18 + 0x80);
      lVar17 = *plVar7;
      *(double *)(lVar17 + lVar12) = local_108 + *(double *)(lVar18 + 0x78);
      *(double *)(lVar17 + 8 + lVar12) = dStack_100 + dVar21;
      *(double *)(lVar17 + 0x10 + lVar12) = local_f8 + dVar22;
      lVar12 = lVar12 + 0x18;
      pdVar16 = pdVar16 + 2;
    } while (lVar13 != lVar12);
  }
  plVar7 = local_150;
  FUN_148f5a6dc(local_150,uStack_140 & 0xffffffff);
  if (0 < (int)uStack_140) {
    lVar13 = 0;
    do {
      iVar2 = (int)local_148[lVar13 * 2 + 1];
      FUN_14051b394(*plVar7 + lVar13 * 0x10,iVar2,1);
      if (0 < (longlong)iVar2) {
        lVar12 = 0x10;
        lVar17 = 0;
        do {
          local_e0 = *(double *)(local_148[lVar13 * 2] + 8 + lVar17) + local_110;
          local_e8 = (double *)(*(double *)(local_148[lVar13 * 2] + lVar17) + local_118);
          local_d8 = (longlong *)0x0;
          FUN_146bed047(&local_108,lVar18 + 0x90,&local_e8);
          dVar19 = *(double *)(lVar18 + 0x88);
          dVar20 = *(double *)(lVar18 + 0x80);
          lVar3 = *(longlong *)(*plVar7 + lVar13 * 0x10);
          *(double *)(lVar3 + -0x10 + lVar12) = local_108 + *(double *)(lVar18 + 0x78);
          *(double *)(lVar3 + -8 + lVar12) = dStack_100 + dVar20;
          *(double *)(lVar3 + lVar12) = local_f8 + dVar19;
          lVar17 = lVar17 + 0x10;
          lVar12 = lVar12 + 0x18;
        } while ((longlong)iVar2 * 0x10 != lVar17);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)uStack_140);
  }
  FUN_148273b89(local_148);
  if (local_148 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_170 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f58d2e FUN_148f58d2e body=160 status=ok
// SIG undefined FUN_148f58d2e(void)

void FUN_148f58d2e(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xcc) < 0) {
    *(undefined4 *)(param_1 + 200) = 0;
    FUN_1447a8aa0(param_1 + 0xc0,0);
  }
  else {
    *(undefined4 *)(param_1 + 200) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xdc);
  FUN_140627eac(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd8));
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0xdc) != 0)) {
    FUN_148f78058(param_1 + 0xd0);
  }
  FUN_148553580(param_1 + 0x210);
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  *(undefined1 *)(param_1 + 0x191) = 0;
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  *(int *)(param_1 + 0x580) = *(int *)(param_1 + 0x580) + 1;
  return;
}



// FUNCTION 148f58dce FUN_148f58dce body=479 status=ok
// SIG undefined FUN_148f58dce(void)

void FUN_148f58dce(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  double dVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  void *local_50;
  uint local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 4);
  uVar11 = param_2[1];
  uVar12 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 0xe0) = *param_2;
  *(undefined4 *)(param_1 + 0xe4) = uVar11;
  *(undefined4 *)(param_1 + 0xe8) = uVar12;
  *(undefined4 *)(param_1 + 0xec) = uVar5;
  lVar7 = (longlong)*(int *)(param_1 + 200);
  if (0 < lVar7) {
    if (*(char *)(param_1 + 0x191) == '\x01') {
      iVar2 = *(int *)(param_1 + 0x1a0);
      fVar8 = 0.0;
      if (0 < (longlong)iVar2) {
        local_50 = (void *)0x0;
        _Src = *(void **)(param_1 + 0x198);
        local_48 = iVar2;
        FUN_1405b70fe(&local_50,iVar2,0);
        memcpy(local_50,_Src,(longlong)iVar2 * 0x18);
        uVar6 = local_48;
        lVar7 = (longlong)(int)local_48;
        local_48 = local_48 + 1;
        if (local_44 < local_48) {
          FUN_1403e3958(&local_50,uVar6);
        }
        *(undefined8 *)((longlong)local_50 + lVar7 * 0x18 + 0x10) = *(undefined8 *)(param_1 + 0xf0);
        uVar11 = *(undefined4 *)(param_1 + 0xe4);
        uVar12 = *(undefined4 *)(param_1 + 0xe8);
        uVar5 = *(undefined4 *)(param_1 + 0xec);
        puVar1 = (undefined4 *)((longlong)local_50 + lVar7 * 0x18);
        *puVar1 = *(undefined4 *)(param_1 + 0xe0);
        puVar1[1] = uVar11;
        puVar1[2] = uVar12;
        puVar1[3] = uVar5;
        local_90 = local_80;
        local_98 = local_78;
        FUN_148f58fae(param_1,&local_50,local_60,local_70);
        uVar11 = (int)local_70._0_8_;
        uVar12 = SUB84(local_70._0_8_,4);
        if (local_48 != 2) {
          uVar11 = (undefined4)local_70._8_8_;
          uVar12 = SUB84(local_70._8_8_,4);
        }
        if (1 < (byte)(*(char *)(*(longlong *)(param_1 + 0xa8) + 0xa8) - 3U)) {
          uVar11 = (int)local_70._0_8_;
          uVar12 = SUB84(local_70._0_8_,4);
        }
        if (local_50 != (void *)0x0) {
          FUN_1400020a8();
        }
        fVar8 = (float)(double)CONCAT44(uVar12,uVar11);
      }
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0xc0);
      dVar4 = *(double *)(param_1 + 0xe0) - *(double *)(lVar3 + -0x18 + lVar7 * 0x18);
      dVar9 = *(double *)(param_1 + 0xe8) - *(double *)(lVar3 + -0x10 + lVar7 * 0x18);
      dVar10 = *(double *)(param_1 + 0xf0) - *(double *)(lVar3 + -8 + lVar7 * 0x18);
      fVar8 = (float)SQRT(dVar10 * dVar10 + dVar4 * dVar4 + dVar9 * dVar9);
    }
    *(float *)(*(longlong *)(param_1 + 0xa8) + 0xb4) = fVar8;
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f58fae FUN_148f58fae body=541 status=ok
// SIG undefined FUN_148f58fae(void)

void FUN_148f58fae(longlong param_1,longlong *param_2,double *param_3,double *param_4,
                  ulonglong *param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (1 < (int)param_2[1]) {
    lVar5 = *(longlong *)(param_1 + 0x578) + 0x78;
    FUN_146bca7ae(lVar5,&local_a0,*param_2,2);
    *(undefined4 *)param_3 = local_a0;
    *(undefined4 *)((longlong)param_3 + 4) = uStack_9c;
    *(undefined4 *)(param_3 + 1) = uStack_98;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_94;
    FUN_146bca7ae(lVar5,&local_a0,*param_2 + 0x18,2);
    dVar3 = (double)CONCAT44(uStack_94,uStack_98) - param_3[1];
    dVar2 = (double)CONCAT44(uStack_9c,local_a0) - *param_3;
    dVar1 = atan2(dVar3,dVar2);
    *param_6 = dVar1;
    dVar1 = SQRT(dVar2 * dVar2 + dVar3 * dVar3);
    dVar2 = dVar2 * (1.0 / dVar1);
    if ((dVar1 == 0.0) && (!NAN(dVar1))) {
      dVar2 = 1.0;
    }
    dVar3 = (1.0 / dVar1) * dVar3;
    if ((dVar1 == 0.0) && (!NAN(dVar1))) {
      dVar3 = 0.0;
    }
    lVar4 = 0x18;
    if ((int)param_2[1] == 3) {
      lVar4 = 0x30;
    }
    FUN_146bca7ae(lVar5,&local_b0,lVar4 + *param_2,2);
    dVar3 = dVar2 * (local_a8 - param_3[1]) - (local_b0 - *param_3) * dVar3;
    dVar2 = -dVar3;
    *param_5 = -(ulonglong)(dVar2 < dVar3) & 0x3ff0000000000000 |
               ~-(ulonglong)(dVar2 < dVar3) & -(ulonglong)(dVar3 < dVar2) & 0xbff0000000000000;
    *param_4 = dVar1;
    param_4[1] = (double)(~-(ulonglong)(dVar2 <= dVar3) & (ulonglong)dVar2 |
                         (ulonglong)dVar3 & -(ulonglong)(dVar2 <= dVar3));
  }
  if ((local_90 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f591cc FUN_148f591cc body=82 status=ok
// SIG undefined FUN_148f591cc(void)

void FUN_148f591cc(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar2 = *(int *)(param_1 + 200);
  *(uint *)(param_1 + 200) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xcc) < iVar2 + 1U) {
    FUN_1403e3958((longlong *)(param_1 + 0xc0),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0xc0);
  *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = param_2[2];
  uVar4 = param_2[1];
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x18);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  return;
}



// FUNCTION 148f5921e FUN_148f5921e body=1632 status=ok
// SIG undefined FUN_148f5921e(void)

undefined8 FUN_148f5921e(longlong param_1,double *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  double dVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  double *pdVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_248 [32];
  double *local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  double local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined4 local_144;
  undefined4 local_118;
  double local_e0;
  double dStack_d8;
  double local_d0;
  undefined8 local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_248;
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  lVar3 = *(longlong *)(param_1 + 0x578);
  local_1d8 = param_2[5];
  local_1e8 = param_2[3];
  uStack_1e0 = param_2[4];
  local_b8 = param_2[2];
  local_c8._0_4_ = *(undefined4 *)param_2;
  local_c8._4_4_ = *(undefined4 *)((longlong)param_2 + 4);
  dStack_c0 = param_2[1];
  local_228 = (double *)&local_a8;
  cVar6 = FUN_14848488c(lVar3 + 0x78,&local_c8,&local_1e8,2);
  if (cVar6 == '\0') {
    if ((*(char *)(*(longlong *)(param_1 + 0xb0) + 0xa8) == '\x01') &&
       (bVar1 = 0, *(char *)(param_1 + 0x200) == '\0')) goto LAB_148f592dd;
LAB_148f59547:
    uVar9 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x200);
LAB_148f592dd:
    if (((bVar1 & 1) == 0) && (*(char *)(*(longlong *)(param_1 + 0xb0) + 0xa8) != '\0')) {
      if (cVar6 != '\0') {
        cVar7 = FUN_148557342(param_1,&local_a8);
        if (cVar7 != '\0') {
          dVar13 = *(double *)(lVar3 + 0x90);
          dVar14 = *(double *)(lVar3 + 0x98);
          dVar12 = *(double *)(lVar3 + 0xa0) + *(double *)(lVar3 + 0xa0);
          dVar4 = dVar13 * dVar12 + *(double *)(lVar3 + 0xa8) * (dVar14 + dVar14);
          dVar12 = dVar12 * dVar14 - (dVar13 + dVar13) * *(double *)(lVar3 + 0xa8);
          dVar13 = 1.0 - ((dVar14 + dVar14) * dVar14 + dVar13 * (dVar13 + dVar13));
          dVar14 = (local_1d8 - *(double *)(lVar3 + 0x88)) * dVar13 +
                   (local_1e8 - *(double *)(lVar3 + 0x78)) * dVar4 +
                   (uStack_1e0 - *(double *)(lVar3 + 0x80)) * dVar12;
          local_1d8 = local_1d8 - dVar13 * dVar14;
          uStack_1e0 = uStack_1e0 - dVar12 * dVar14;
          local_1e8 = local_1e8 - dVar14 * dVar4;
          iVar5 = *(int *)(param_1 + 0x408);
          if (*(int *)(param_1 + 0x404) < *(int *)(param_1 + 0x408)) {
            iVar5 = *(int *)(param_1 + 0x404);
          }
          iVar10 = *(int *)(param_1 + 0x410);
          if (*(int *)(param_1 + 0x410) < *(int *)(param_1 + 0x40c)) {
            iVar10 = *(int *)(param_1 + 0x40c);
          }
          local_c8._0_4_ = 0;
          dStack_c0 = 999.0;
          local_228 = (double *)CONCAT44(local_228._4_4_,(iVar5 - iVar10) + -5);
          FUN_148550c42(param_1 + 0x210,&local_1e8);
          *(double *)(param_1 + 0x550) = local_1d8;
          *(undefined4 *)(param_1 + 0x540) = (undefined4)local_1e8;
          *(undefined4 *)(param_1 + 0x544) = local_1e8._4_4_;
          *(undefined4 *)(param_1 + 0x548) = (undefined4)uStack_1e0;
          *(undefined4 *)(param_1 + 0x54c) = uStack_1e0._4_4_;
        }
      }
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0xb0) + 0xaa);
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0xb0) + 0xab);
      if (((bVar1 | bVar2) & 1) != 0) {
        local_d0 = param_2[5] + param_2[2];
        dStack_d8 = param_2[4] + param_2[1];
        local_e0 = param_2[3] + *param_2;
        local_218 = param_1 + 0x4f0;
        pdVar11 = &local_e0;
        if (cVar6 != '\0') {
          pdVar11 = (double *)&local_a8;
        }
        local_210 = 0;
        local_220 = 0;
        local_228 = (double *)(CONCAT71(local_228._1_7_,~bVar1 | bVar2) & 0xffffffffffffff01);
        cVar7 = FUN_148556ffc(param_1,pdVar11,&local_c8);
        if (cVar7 != '\0') {
          iVar5 = *(int *)(param_1 + 0x408);
          if (*(int *)(param_1 + 0x404) < *(int *)(param_1 + 0x408)) {
            iVar5 = *(int *)(param_1 + 0x404);
          }
          iVar10 = *(int *)(param_1 + 0x410);
          if (*(int *)(param_1 + 0x410) < *(int *)(param_1 + 0x40c)) {
            iVar10 = *(int *)(param_1 + 0x40c);
          }
          FUN_148550b26(param_1 + 0x210,&local_c8,0x3ea,(iVar5 - iVar10) + -10);
        }
      }
      lVar8 = param_1 + 0xc0;
      if (*(char *)(param_1 + 0x191) != '\0') {
        lVar8 = param_1 + 0x198;
      }
      FUN_148553688(param_1 + 0x210,lVar8);
      lVar8 = *(longlong *)(param_1 + 0xb0);
      if (*(char *)(lVar8 + 0xac) == '\x01') {
        FUN_1485537ac(param_1 + 0x210,1,1);
        lVar8 = *(longlong *)(param_1 + 0xb0);
      }
      *(undefined1 *)(param_1 + 0x400) = *(undefined1 *)(lVar8 + 0xad);
    }
    else {
      FUN_148553580(param_1 + 0x210);
      if ((*(char *)(param_1 + 0x191) == '\0') && (0 < *(int *)(param_1 + 200))) {
        FUN_148550b26(param_1 + 0x210,*(undefined8 *)(param_1 + 0xc0),0x3e9,1);
      }
    }
    if ((*(char *)(param_1 + 0x191) == '\0') && (0 < (int)*(uint *)(param_1 + 200))) {
      if (*(uint *)(param_1 + 200) < 3) {
        FUN_1485510d6();
      }
      else {
        FUN_148551122(param_1 + 0x210,0x3e9);
      }
    }
    lVar8 = param_1 + 0x210;
    pdVar11 = (double *)&local_c8;
    if (cVar6 != '\0') {
      pdVar11 = (double *)&local_a8;
    }
    FUN_148555064(lVar8,pdVar11);
    FUN_148550d76(lVar8,0x3ea);
    FUN_148550d76(lVar8);
    if (*(char *)(param_1 + 0x2f8) == '\x01') {
      local_a8._0_4_ = *(undefined4 *)(param_1 + 0x3a8);
      local_a8._4_4_ = *(undefined4 *)(param_1 + 0x3ac);
      uStack_a0._0_4_ = *(undefined4 *)(param_1 + 0x3b0);
      uStack_a0._4_4_ = *(undefined4 *)(param_1 + 0x3b4);
      *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_1 + 0x3b8);
    }
    else {
      if (((*(char *)(*(longlong *)(param_1 + 0xb0) + 0xa8) == '\x01') &&
          (*(char *)(*(longlong *)(param_1 + 0xb0) + 0xae) == '\x01')) &&
         (*(char *)(param_1 + 0x200) == '\0')) {
        memset(&local_1e8,0,0x100);
        local_118 = 0xffffffff;
        local_1e8 = (double)CONCAT44(0x3f800000,(undefined4)local_1e8);
        local_144 = 0xffffffff;
        local_228 = (double *)0x0;
        cVar7 = FUN_14855784a(param_1,&local_1e8,param_2,0);
        if (cVar7 == '\0') goto LAB_148f5952b;
        *(undefined1 *)(param_1 + 0x1c8) = 1;
        *(double *)(param_1 + 0x1d0) = local_1c0;
        *(double *)(param_1 + 0x1d8) = dStack_1b8;
        *(double *)(param_1 + 0x1e0) = local_1b0;
        dVar13 = (double)*(float *)(*(longlong *)(param_1 + 0xb0) + 0xb0);
        local_d0 = local_198 * dVar13 + local_1b0;
        dStack_d8 = local_1a0 * dVar13 + dStack_1b8;
        local_e0 = dVar13 * local_1a8 + local_1c0;
        FUN_148f59880(lVar3 + 0x78,&local_200,&local_e0);
        local_98 = local_1f0;
        local_a8 = local_200;
        uStack_a0 = uStack_1f8;
        *(double *)(param_1 + 0x1f8) = local_d0;
        *(double *)(param_1 + 0x1e8) = local_e0;
        *(double *)(param_1 + 0x1f0) = dStack_d8;
      }
      else {
LAB_148f5952b:
        if (cVar6 == '\0') goto LAB_148f59547;
      }
      *(undefined8 *)(param_3 + 4) = local_98;
    }
    *param_3 = (undefined4)local_a8;
    param_3[1] = local_a8._4_4_;
    param_3[2] = (undefined4)uStack_a0;
    param_3[3] = uStack_a0._4_4_;
    uVar9 = 1;
  }
  if ((local_90 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 148f59880 FUN_148f59880 body=254 status=ok
// SIG undefined FUN_148f59880(void)

double * FUN_148f59880(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = param_1[3];
  dVar6 = param_1[4];
  dVar3 = param_1[5] + param_1[5];
  dVar2 = dVar5 * dVar3 + param_1[6] * (dVar6 + dVar6);
  dVar4 = dVar3 * dVar6 - (dVar5 + dVar5) * param_1[6];
  dVar3 = param_3[2];
  dVar1 = param_3[1];
  dVar5 = 1.0 - ((dVar6 + dVar6) * dVar6 + dVar5 * (dVar5 + dVar5));
  dVar6 = (dVar3 - param_1[2]) * dVar5 +
          (*param_3 - *param_1) * dVar2 + (dVar1 - param_1[1]) * dVar4;
  *param_2 = *param_3 - dVar6 * dVar2;
  param_2[1] = dVar1 - dVar4 * dVar6;
  param_2[2] = dVar3 - dVar5 * dVar6;
  return param_2;
}



// FUNCTION 148f5997e FUN_148f5997e body=98 status=ok
// SIG undefined FUN_148f5997e(void)

void FUN_148f5997e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = (**(code **)(*(longlong *)(param_1 + -0x98) + 0x398))(param_1 + -0x98,param_2,&local_28);
  if (cVar1 != '\0') {
    *(undefined8 *)(param_1 + 0x58) = local_18;
    *(undefined4 *)(param_1 + 0x48) = local_28;
    *(undefined4 *)(param_1 + 0x4c) = uStack_24;
    *(undefined4 *)(param_1 + 0x50) = uStack_20;
    *(undefined4 *)(param_1 + 0x54) = uStack_1c;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f599e6 FUN_148f599e6 body=232 status=ok
// SIG undefined FUN_148f599e6(void)

void FUN_148f599e6(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = param_1 + -0x13;
  (**(code **)(param_1[-0x13] + 0x380))(plVar1);
  cVar2 = (**(code **)(param_1[-0x13] + 0x398))(plVar1,param_2,local_38);
  if (cVar2 != '\0') {
    cVar2 = FUN_148556e90(param_1 + 0xd,local_38);
    if (cVar2 != '\0') {
      (**(code **)(param_1[-0x13] + 0x388))(plVar1,local_38);
      *(bool *)((longlong)param_1 + 0xf9) = *(char *)(param_1[2] + 0xa8) != '\0';
      if (*(int *)((longlong)param_1 + 0x10c) < 0) {
        *(undefined4 *)(param_1 + 0x21) = 0;
        FUN_1447a8aa0(param_1 + 0x20,0);
      }
      else {
        *(undefined4 *)(param_1 + 0x21) = 0;
      }
      (**(code **)(*param_1 + 0x30))(param_1,param_2);
      goto LAB_148f59a96;
    }
  }
  *(undefined1 *)(param_1 + 0x1f) = 1;
LAB_148f59a96:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f59ad0 FUN_148f59ad0 body=189 status=ok
// SIG undefined FUN_148f59ad0(void)

void FUN_148f59ad0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x4c0) == '\x01') {
    (**(code **)(**(longlong **)(param_1 + 0x4d0) + 0x2e0))();
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xbc) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x4d0) + 0xb0);
  }
  else {
    plVar1 = (longlong *)(param_1 + -0x98);
    cVar2 = (**(code **)(*plVar1 + 0x398))(plVar1,param_2,local_38);
    if ((cVar2 == '\0') ||
       ((cVar2 = *(char *)(param_1 + 0xf9),
        (**(code **)(*(longlong *)(param_1 + -0x98) + 0x388))(plVar1,local_38), cVar2 == '\0' &&
        (FUN_148f59b8e(plVar1), *(int *)(param_1 + 0x30) < 3)))) goto LAB_148f59b24;
  }
  *(undefined1 *)(param_1 + 0x4c8) = 1;
LAB_148f59b24:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f59b8e FUN_148f59b8e body=1160 status=ok
// SIG undefined FUN_148f59b8e(void)

void FUN_148f59b8e(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  longlong lVar12;
  ulonglong uVar13;
  double dVar14;
  undefined1 auStack_1f8 [40];
  double local_1d0;
  longlong local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  ulonglong local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  ulonglong local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  double local_130;
  double local_120;
  double local_118;
  double local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  if ((*(char *)(param_1 + 0x191) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0xa8) + 0xa9) == '\0')) {
    iVar4 = *(int *)(param_1 + 200);
    if (2 < (longlong)iVar4) {
      lVar5 = *(longlong *)(param_1 + 0x578);
      lVar1 = lVar5 + 0x78;
      FUN_146bca7ae(lVar1,&local_1c0,param_1 + 0xe0,2);
      FUN_146bca7ae(lVar1,&local_108,*(longlong *)(param_1 + 0xc0) + (longlong)iVar4 * 0x18 + -0x18,
                    2);
      dVar8 = (double)CONCAT44(uStack_fc,uStack_100) + local_1b8;
      dVar10 = (double)CONCAT44(uStack_104,local_108) + local_1c0;
      dVar9 = local_1b8 - (double)CONCAT44(uStack_fc,uStack_100);
      dVar7 = local_1c0 - (double)CONCAT44(uStack_104,local_108);
      dVar6 = SQRT(dVar7 * dVar7 + dVar9 * dVar9);
      if (0.0 < dVar6) {
        dVar7 = dVar7 * (1.0 / dVar6);
        dVar9 = dVar9 * (1.0 / dVar6);
      }
      else {
        dVar7 = 0.0;
        dVar9 = 0.0;
      }
      local_1d0 = 1.79769313486232e+308;
      lVar12 = 0x18;
      local_1c8 = lVar5 + 0x90;
      uVar13 = 0;
      do {
        FUN_146bca7ae(lVar1,&local_1c0,*(longlong *)(param_1 + 0xc0) + lVar12,2);
        FUN_146bca7ae(lVar1,&local_108,*(longlong *)(param_1 + 0xc0) + lVar12 + -0x18,2);
        local_180 = local_1b8 - (double)CONCAT44(uStack_fc,uStack_100);
        local_188 = local_1c0 - (double)CONCAT44(uStack_104,local_108);
        dVar14 = SQRT(local_188 * local_188 + local_180 * local_180);
        if (0.0 < dVar14) {
          local_188 = local_188 * (1.0 / dVar14);
          local_180 = local_180 * (1.0 / dVar14);
        }
        else {
          local_180 = 0.0;
          local_188 = 0.0;
        }
        local_190 = ((double)CONCAT44(uStack_fc,uStack_100) + local_1b8) * 0.5;
        local_198 = ((double)CONCAT44(uStack_104,local_108) + local_1c0) * 0.5;
        local_178 = (ulonglong)(dVar14 * 0.5) & -(ulonglong)(0.0 < dVar14);
        local_170 = 0;
        local_168 = 0x3e45798ee2308c3a;
        local_160 = 0;
        local_158 = 0;
        local_1c0 = dVar10 * 0.5;
        local_1b8 = dVar8 * 0.5;
        local_1b0 = dVar7;
        local_1a8 = dVar9;
        local_1a0 = -(ulonglong)(0.0 < dVar6) & (ulonglong)(dVar6 * 0.5);
        cVar11 = FUN_14850c2c4(&local_1c0);
        if (cVar11 != '\0') {
          *(undefined1 *)(param_1 + 0x1a8) = 1;
          dVar14 = local_130;
          if (local_130 < local_1d0) {
            *(int *)(param_1 + 0x1ac) = (int)uVar13;
            local_108 = local_150;
            uStack_104 = uStack_14c;
            uStack_100 = uStack_148;
            uStack_fc = uStack_144;
            local_f8 = 0;
            FUN_146bed047(&local_120,local_1c8,&local_108);
            dVar2 = *(double *)(lVar5 + 0x88);
            dVar3 = *(double *)(lVar5 + 0x80);
            *(double *)(param_1 + 0x1b0) = local_120 + *(double *)(lVar5 + 0x78);
            *(double *)(param_1 + 0x1b8) = local_118 + dVar3;
            *(double *)(param_1 + 0x1c0) = local_110 + dVar2;
            local_1d0 = dVar14;
          }
        }
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 0x18;
      } while (iVar4 - 2 != uVar13);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f5a018 FUN_148f5a018 body=1146 status=ok
// SIG undefined FUN_148f5a018(void)

ulonglong FUN_148f5a018(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined8 unaff_RBP;
  undefined7 uVar17;
  undefined8 unaff_RSI;
  ulonglong uVar18;
  undefined4 *puVar20;
  int iVar21;
  bool bVar22;
  undefined1 auStack_b8 [44];
  undefined4 local_8c;
  longlong *local_88;
  longlong *local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  undefined7 uVar19;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = (longlong *)(param_1 + -0x98);
  if (*(char *)(param_1 + 0x4c0) == '\x01') {
    (**(code **)(*plVar2 + 0x3b0))(plVar2);
    uVar18 = 0;
    goto LAB_148f5a055;
  }
  cVar10 = (**(code **)(*plVar2 + 0x398))(plVar2,param_2,&local_70);
  uVar19 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar18 = CONCAT71(uVar19,1);
  if (cVar10 == '\0') goto LAB_148f5a055;
  plVar1 = (longlong *)(param_1 + 0x28);
  plVar3 = (longlong *)(param_1 + 0x100);
  plVar12 = (longlong *)FUN_14001cc68(0x30,0x10);
  FUN_148f78088(plVar12,*(undefined4 *)(param_1 + 0x4e8),plVar3,plVar1);
  if (*(char *)(param_1 + 0xf9) == '\x01') {
    iVar21 = *(int *)(param_1 + 0x108);
    if (0 < (longlong)iVar21) {
      cVar10 = FUN_148556543(plVar2,*plVar3 + -0x18 + (longlong)iVar21 * 0x18,&local_70,0);
      if (cVar10 != '\0') {
LAB_148f5a1c8:
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x40))(plVar12,1);
        }
        goto LAB_148f5a055;
      }
      iVar21 = *(int *)(param_1 + 0x108);
    }
    *(uint *)(param_1 + 0x108) = iVar21 + 1U;
    local_88 = plVar12;
    if (*(uint *)(param_1 + 0x10c) < iVar21 + 1U) {
      FUN_1403e3958(plVar3,iVar21);
    }
    lVar14 = *(longlong *)(param_1 + 0x100);
    *(undefined8 *)(lVar14 + 0x10 + (longlong)iVar21 * 0x18) = local_60;
    puVar4 = (undefined4 *)(lVar14 + (longlong)iVar21 * 0x18);
    *puVar4 = local_70;
    puVar4[1] = uStack_6c;
    puVar4[2] = uStack_68;
    puVar4[3] = uStack_64;
    uVar16 = 0;
    if (*(int *)(param_1 + 0x108) ==
        ((byte)(*(char *)(*(longlong *)(param_1 + 0x10) + 0xa8) - 3U) < 2) + 2) {
      FUN_148f58554(plVar2,plVar3,plVar1,param_1 + 0x38);
      uVar16 = 1;
    }
  }
  else {
    if (0 < (longlong)*(int *)(param_1 + 0x30)) {
      cVar10 = FUN_148556543(plVar2,*plVar1 + (longlong)*(int *)(param_1 + 0x30) * 0x18 + -0x18,
                             &local_70,0);
      if (cVar10 != '\0') goto LAB_148f5a1c8;
    }
    uVar17 = (undefined7)((ulonglong)unaff_RBP >> 8);
    if (*(char *)(param_1 + 0x110) == '\x01') {
      iVar21 = *(int *)(param_1 + 0x30);
      iVar11 = *(int *)(param_1 + 0x114);
      if (iVar11 < iVar21 + -1) {
        if (((ABS(*(double *)(param_1 + 0x118) -
                  *(double *)(*(longlong *)(param_1 + 0x28) + 0x18 + (longlong)iVar11 * 0x18)) <
              1.9999999494757503e-05) &&
            (lVar14 = *(longlong *)(param_1 + 0x28) + (longlong)iVar11 * 0x18,
            ABS(*(double *)(param_1 + 0x120) - *(double *)(lVar14 + 0x20)) < 1.9999999494757503e-05)
            ) && (ABS(*(double *)(param_1 + 0x128) - *(double *)(lVar14 + 0x28)) <
                  1.9999999494757503e-05)) {
          iVar11 = iVar11 + 1;
          *(int *)(param_1 + 0x114) = iVar11;
        }
      }
      if (iVar11 < iVar21) {
        lVar13 = (longlong)iVar11;
        lVar14 = lVar13 * 0x18;
        do {
          lVar5 = *(longlong *)(param_1 + 0x28);
          puVar20 = (undefined4 *)(lVar5 + lVar14 + (longlong)*(int *)(param_1 + 0x114) * -0x18);
          *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(lVar5 + 0x10 + lVar14);
          puVar4 = (undefined4 *)(lVar5 + lVar14);
          uVar16 = puVar4[1];
          uVar6 = puVar4[2];
          uVar7 = puVar4[3];
          *puVar20 = *puVar4;
          puVar20[1] = uVar16;
          puVar20[2] = uVar6;
          puVar20[3] = uVar7;
          lVar13 = lVar13 + 1;
          iVar21 = *(int *)(param_1 + 0x30);
          lVar14 = lVar14 + 0x18;
        } while (lVar13 < iVar21);
        iVar11 = *(int *)(param_1 + 0x114);
      }
      uVar16 = (undefined4)CONCAT71(uVar17,1);
      local_88 = plVar12;
      FUN_14051b394(plVar1,iVar21 - iVar11,1);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x128);
      uVar6 = *(undefined4 *)(param_1 + 0x118);
      uVar7 = *(undefined4 *)(param_1 + 0x11c);
      uVar8 = *(undefined4 *)(param_1 + 0x120);
      uVar9 = *(undefined4 *)(param_1 + 0x124);
      *(undefined4 *)(param_1 + 0x48) = uVar6;
      *(undefined4 *)(param_1 + 0x4c) = uVar7;
      *(undefined4 *)(param_1 + 0x50) = uVar8;
      *(undefined4 *)(param_1 + 0x54) = uVar9;
      puVar4 = *(undefined4 **)(param_1 + 0x28);
      *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(param_1 + 0x128);
      *puVar4 = uVar6;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
    }
    else if (*(char *)(param_1 + 0x260) == '\x01') {
      uVar16 = (undefined4)CONCAT71(uVar17,*(int *)(param_1 + 0x280) == 0x3e9);
      local_88 = plVar12;
    }
    else {
      uVar16 = 0;
      local_88 = plVar12;
    }
  }
  local_8c = uVar16;
  lVar14 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
  local_58 = L"DrawPolyAddPoint";
  local_50 = 0x10;
  FUN_1446e940c(local_74,&local_58);
  local_58 = L"UDrawPolygonTool";
  local_50 = 0x10;
  FUN_1446e940c(local_78,&local_58);
  FUN_140208bae(&local_58,local_78,local_74,L"Add Point");
  local_80 = local_88;
  (**(code **)(*(longlong *)(lVar14 + 0x28) + 0x20))(lVar14 + 0x28,plVar2,&local_80,&local_58);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  if ((char)local_8c == '\0') {
    (**(code **)(*(longlong *)(param_1 + -0x98) + 0x390))(plVar2,&local_70);
    if ((*(char *)(param_1 + 0xf9) == '\0') && (*(int *)(param_1 + 0x30) == 1)) {
      FUN_148550b26(param_1 + 0x178,*(undefined8 *)(param_1 + 0x28),0x3e9,1);
    }
    (**(code **)(*plVar2 + 0x388))(plVar2,&local_70);
  }
  else {
    *(undefined1 *)(param_1 + 0x130) = 0;
    bVar22 = *(char *)(*(longlong *)(param_1 + 0x10) + 0xb9) != '\x02';
    if (bVar22) {
      (**(code **)(*(longlong *)(param_1 + -0x98) + 0x3a0))(plVar2);
      FUN_14851bb12(*(undefined8 *)(param_1 + 0xb8));
      uVar15 = *(undefined8 *)(param_1 + 0xb8);
      uVar18 = 0;
    }
    else {
      (**(code **)(*(longlong *)(param_1 + -0x98) + 0x3a8))(plVar2);
      FUN_14851bb12(*(undefined8 *)(param_1 + 0xb8));
      uVar15 = *(undefined8 *)(param_1 + 0xb8);
      uVar18 = CONCAT71(uVar19,1);
    }
    FUN_14851bab8(uVar15,!bVar22);
  }
LAB_148f5a055:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar18 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f5a4ca FUN_148f5a4ca body=530 status=ok
// SIG undefined FUN_148f5a4ca(void)

longlong *
FUN_148f5a4ca(longlong *param_1,double *param_2,double param_3,double param_4,double param_5,
             uint param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  
  uVar9 = 2;
  if (2 < (int)param_6) {
    uVar9 = (ulonglong)param_6;
  }
  iVar7 = (int)uVar9;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1482113de(0,iVar7 * 4,1);
  dVar2 = param_4 * 0.5 - param_5;
  dVar3 = param_3 * 0.5 - param_5;
  dVar5 = param_2[1] - dVar2;
  dVar6 = *param_2 - dVar3;
  dVar3 = dVar3 + *param_2;
  dVar2 = dVar2 + param_2[1];
  iVar11 = 0;
  lVar10 = 0;
  do {
    dVar4 = (double)iVar11 * (1.5707963267948966 / (double)(iVar7 + -1));
    dVar1 = cos(dVar4);
    dVar1 = dVar1 * param_5;
    dVar4 = sin(dVar4);
    dVar4 = dVar4 * param_5;
    lVar8 = *param_1;
    *(double *)(lVar8 + lVar10) = dVar6 - dVar1;
    *(double *)(lVar8 + 8 + lVar10) = dVar5 - dVar4;
    lVar8 = *param_1 + uVar9 * 0x10;
    *(double *)(lVar10 + lVar8) = dVar3 + dVar4;
    *(double *)(lVar10 + 8 + lVar8) = dVar5 - dVar1;
    lVar8 = *param_1 + (uVar9 << 5 | 8);
    *(double *)(lVar10 + -8 + lVar8) = dVar3 + dVar1;
    *(double *)(lVar10 + lVar8) = dVar2 + dVar4;
    lVar8 = *param_1 + ((ulonglong)(uint)(iVar7 * 3) << 4 | 8);
    *(double *)(lVar10 + -8 + lVar8) = dVar6 - dVar4;
    *(double *)(lVar10 + lVar8) = dVar1 + dVar2;
    lVar10 = lVar10 + 0x10;
    iVar11 = iVar11 + 1;
  } while (uVar9 * 0x10 != lVar10);
  return param_1;
}



// FUNCTION 148f5a6dc FUN_148f5a6dc body=130 status=ok
// SIG undefined FUN_148f5a6dc(void)

void FUN_148f5a6dc(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147c64112(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148f7818e(param_1,param_2,iVar1 - param_2);
    FUN_148f781e8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148f5a760 FUN_148f5a760 body=805 status=ok
// SIG undefined FUN_148f5a760(void)

void FUN_148f5a760(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_2c8 [32];
  longlong *local_2a8;
  undefined8 local_2a0;
  undefined1 local_298;
  longlong local_288;
  undefined8 uStack_280;
  longlong *local_278;
  undefined8 uStack_270;
  longlong local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  *(undefined2 *)(param_1 + 0x558) = 0x101;
  *(undefined4 *)(param_1 + 0x55c) = *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xbc);
  FUN_145b25b1e(param_1 + 0x210);
  plVar3 = (longlong *)FUN_148f5aa86(param_1);
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar3);
  }
  *(longlong **)(param_1 + 0x568) = plVar3;
  (**(code **)(*plVar3 + 0x2a0))(plVar3,param_1);
  lVar1 = *(longlong *)(param_1 + 0x568);
  local_288 = *(longlong *)(lVar1 + 0x30);
  uStack_280 = *(undefined8 *)(lVar1 + 0x38);
  local_278 = *(longlong **)(lVar1 + 0x40);
  uStack_270 = *(undefined8 *)(lVar1 + 0x48);
  local_268 = *(longlong *)(lVar1 + 0x50);
  uStack_260 = *(undefined8 *)(lVar1 + 0x58);
  local_258 = *(undefined8 *)(lVar1 + 0x60);
  uVar2 = *(undefined8 *)(lVar1 + 0x68);
  *(undefined8 *)(lVar1 + 0x60) = local_38;
  *(ulonglong *)(lVar1 + 0x68) = CONCAT44(uStack_2c,uStack_30);
  *(undefined ***)(lVar1 + 0x50) = &PTR_LAB_14ba26a70;
  *(longlong *)(lVar1 + 0x58) = param_1;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x48) = uStack_50;
  *(code **)(lVar1 + 0x30) = FUN_14436d100;
  *(undefined8 *)(lVar1 + 0x38) = uStack_60;
  uStack_250._0_4_ = (undefined4)uVar2;
  uStack_250._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_48 = local_268;
  uStack_40 = uStack_260;
  local_38 = local_258;
  uStack_30 = (undefined4)uStack_250;
  uStack_2c = uStack_250._4_4_;
  uStack_60 = uStack_280;
  uStack_50 = uStack_270;
  if (local_288 != 0) {
    plVar3 = local_278;
    if (local_278 == (longlong *)0x0) {
      plVar3 = &local_48;
    }
    uStack_250 = uVar2;
    local_68 = local_288;
    local_58 = local_278;
    (**(code **)(*plVar3 + 0x10))();
  }
  lVar1 = *(longlong *)(param_1 + 0x568);
  local_288 = *(longlong *)(lVar1 + 0x70);
  uStack_280 = *(undefined8 *)(lVar1 + 0x78);
  local_278 = *(longlong **)(lVar1 + 0x80);
  uStack_270 = *(undefined8 *)(lVar1 + 0x88);
  local_268 = *(longlong *)(lVar1 + 0x90);
  uStack_260 = *(undefined8 *)(lVar1 + 0x98);
  local_258 = *(undefined8 *)(lVar1 + 0xa0);
  uVar2 = *(undefined8 *)(lVar1 + 0xa8);
  *(undefined8 *)(lVar1 + 0xa0) = local_38;
  *(ulonglong *)(lVar1 + 0xa8) = CONCAT44(uStack_2c,uStack_30);
  *(undefined ***)(lVar1 + 0x90) = &PTR_LAB_14ba26a90;
  *(longlong *)(lVar1 + 0x98) = param_1;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined8 *)(lVar1 + 0x88) = uStack_50;
  *(undefined1 **)(lVar1 + 0x70) = &LAB_14436d168;
  *(undefined8 *)(lVar1 + 0x78) = uStack_60;
  uStack_250._0_4_ = (undefined4)uVar2;
  uStack_250._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = local_258;
  uStack_30 = (undefined4)uStack_250;
  uStack_2c = uStack_250._4_4_;
  local_48 = local_268;
  uStack_40 = uStack_260;
  uStack_250 = uVar2;
  local_68 = local_288;
  uStack_60 = uStack_280;
  local_58 = local_278;
  uStack_50 = uStack_270;
  if (local_288 != 0) {
    plVar3 = &local_48;
    if (local_278 != (longlong *)0x0) {
      plVar3 = local_278;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x568) + 0xb0) = 0x3f800000;
  local_2a8 = (longlong *)((ulonglong)local_2a8 & 0xffffffffffffff00);
  FUN_1411b354a(&local_288,0,0,0);
  local_58 = (longlong *)DAT_14c8464f0;
  local_68 = DAT_14c8464e0;
  uStack_60 = DAT_14c8464e8;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0x3ff0000000000000;
  local_2a0 = 0x40f869f000000000;
  local_298 = 1;
  local_2a8 = &local_68;
  FUN_148f5ab1c(param_1,param_1 + 0xc0,param_1 + 0xd0,&local_288);
  (**(code **)(**(longlong **)(param_1 + 0x568) + 0x2d8))
            (*(longlong **)(param_1 + 0x568),&local_288,&local_68,0);
  FUN_148f5bcfe(param_1);
  FUN_141082778(&local_288);
  if ((local_20 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f5aa86 FUN_148f5aa86 body=148 status=ok
// SIG undefined FUN_148f5aa86(void)

undefined8 FUN_148f5aa86(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1458f2764();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f5ab1c FUN_148f5ab1c body=4577 status=ok
// SIG undefined FUN_148f5ab1c(void)

ulonglong FUN_148f5ab1c(longlong param_1,longlong *param_2,longlong *param_3,double *param_4,
                       undefined8 *param_5,double param_6,char param_7)

{
  undefined4 *puVar1;
  float fVar2;
  double dVar3;
  undefined1 *puVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *_Src;
  double dVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 uVar14;
  uint uVar15;
  double *pdVar16;
  ulonglong uVar17;
  undefined ***pppuVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  double *unaff_RSI;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined1 auStack_568 [32];
  double *local_548;
  double *local_540;
  longlong local_538;
  code *local_530;
  undefined8 *local_528;
  double local_520;
  double local_518;
  double local_510;
  double local_508;
  double local_500;
  undefined1 local_4f8 [16];
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  longlong local_4d0;
  undefined8 uStack_4c8;
  double *local_4c0;
  uint local_4b8;
  undefined8 *local_4b0;
  double local_4a8;
  double local_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  double local_488;
  double local_480;
  double local_478;
  double local_470;
  double local_468;
  double local_460 [10];
  undefined1 local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined1 *local_3f8;
  double dStack_3f0;
  undefined ***local_3e8;
  undefined8 uStack_3e0;
  undefined **local_3d8;
  undefined8 *puStack_3d0;
  double *local_3c8;
  undefined8 uStack_3c0;
  double local_3b8;
  undefined1 local_3b0;
  float local_3ac;
  float local_368;
  undefined4 local_358;
  undefined4 local_354;
  double local_340;
  double local_338;
  undefined1 *local_330;
  double local_318;
  undefined4 local_310;
  undefined1 local_2b8 [136];
  double *local_230;
  undefined1 *local_228;
  double dStack_220;
  undefined ***local_218;
  undefined8 uStack_210;
  undefined **local_208;
  undefined8 *puStack_200;
  undefined1 local_1f8;
  undefined1 uStack_1f7;
  undefined1 uStack_1f6;
  undefined1 uStack_1f5;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  int local_1e8;
  undefined8 local_1e4;
  undefined1 *local_1d8;
  double dStack_1d0;
  undefined ***local_1c8;
  undefined8 uStack_1c0;
  undefined **local_1b8;
  undefined8 *puStack_1b0;
  double *local_1a8;
  undefined8 uStack_1a0;
  void *local_138;
  int local_130;
  int local_12c;
  void *local_128;
  int local_120;
  int local_11c;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_568;
  lVar13 = *(longlong *)(param_1 + 0x578);
  param_5[6] = *(undefined8 *)(lVar13 + 0xa8);
  uVar14 = *(undefined8 *)(lVar13 + 0x78);
  uVar6 = *(undefined8 *)(lVar13 + 0x80);
  uVar7 = *(undefined8 *)(lVar13 + 0x88);
  uVar8 = *(undefined8 *)(lVar13 + 0x90);
  uVar9 = *(undefined8 *)(lVar13 + 0xa0);
  param_5[4] = *(undefined8 *)(lVar13 + 0x98);
  param_5[5] = uVar9;
  param_5[2] = uVar7;
  param_5[3] = uVar8;
  *param_5 = uVar14;
  param_5[1] = uVar6;
  iVar20 = (int)param_2[1];
  dVar32 = 0.0;
  uStack_490 = 0.0;
  local_498 = 0.0;
  if (0 < (longlong)iVar20) {
    lVar13 = *param_2;
    lVar23 = 0;
    dVar32 = 0.0;
    do {
      local_498 = local_498 + *(double *)(lVar13 + lVar23);
      uStack_490 = uStack_490 + *(double *)(lVar13 + 8 + lVar23);
      dVar32 = dVar32 + *(double *)(lVar13 + 0x10 + lVar23);
      lVar23 = lVar23 + 0x18;
    } while ((longlong)iVar20 * 0x18 != lVar23);
  }
  local_488 = 1.0 / (double)iVar20;
  local_498 = local_498 * local_488;
  uStack_490 = uStack_490 * local_488;
  local_488 = local_488 * dVar32;
  FUN_146bca7ae(param_5,&local_4a8,&local_498,2);
  param_5[2] = local_488;
  *(undefined4 *)param_5 = (undefined4)local_498;
  *(undefined4 *)((longlong)param_5 + 4) = local_498._4_4_;
  *(undefined4 *)(param_5 + 1) = (undefined4)uStack_490;
  *(undefined4 *)((longlong)param_5 + 0xc) = uStack_490._4_4_;
  local_4b0 = param_5;
  FUN_144366dec(&local_4b0,&local_4c0);
  if ((longlong)(int)local_4b8 == 0) {
    uVar43 = 0xffffffff;
    uVar44 = 0xffefffff;
    uVar45 = 0xffffffff;
    uVar46 = 0x7fefffff;
    uVar26 = uVar43;
    uVar29 = uVar44;
    uVar47 = uVar45;
    uVar48 = uVar46;
  }
  else {
    auVar34 = ZEXT816(0x7fefffffffffffff);
    uVar26 = 0xffffffff;
    uVar29 = 0xffefffff;
    auVar37 = ZEXT816(0xffefffffffffffff);
    auVar39 = ZEXT816(0x7fefffffffffffff);
    pdVar16 = local_4c0;
    do {
      dVar32 = *pdVar16;
      uVar43 = SUB84(dVar32,0);
      uVar44 = (undefined4)((ulonglong)dVar32 >> 0x20);
      dVar3 = pdVar16[1];
      uVar28 = (undefined4)((ulonglong)dVar3 >> 0x20);
      uVar45 = uVar43;
      uVar46 = uVar44;
      if (auVar39._0_8_ <= dVar32) {
        uVar45 = auVar39._0_4_;
        uVar46 = auVar39._4_4_;
      }
      if (dVar32 <= auVar37._0_8_) {
        uVar43 = auVar37._0_4_;
        uVar44 = auVar37._4_4_;
      }
      uVar47 = SUB84(dVar3,0);
      uVar48 = uVar28;
      if (auVar34._0_8_ <= dVar3) {
        uVar47 = auVar34._0_4_;
        uVar48 = auVar34._4_4_;
      }
      uVar30 = SUB84(dVar3,0);
      if (dVar3 <= (double)CONCAT44(uVar29,uVar26)) {
        uVar30 = uVar26;
        uVar28 = uVar29;
      }
      uVar29 = uVar28;
      uVar26 = uVar30;
      pdVar16 = pdVar16 + 2;
      auVar37._4_4_ = uVar44;
      auVar37._0_4_ = uVar43;
      auVar37._8_8_ = 0;
      auVar34._4_4_ = uVar48;
      auVar34._0_4_ = uVar47;
      auVar34._8_8_ = 0;
      auVar39._4_4_ = uVar46;
      auVar39._0_4_ = uVar45;
      auVar39._8_8_ = 0;
    } while (pdVar16 != local_4c0 + (longlong)(int)local_4b8 * 2);
  }
  uVar21 = (uint)*(byte *)(*(longlong *)(param_1 + 0xa8) + 0xa8);
  if ((uVar21 < 6) && ((0x32U >> (uVar21 & 0x1f) & 1) != 0)) {
    unaff_RSI = &local_520;
    local_548 = &local_4e8;
    local_540 = unaff_RSI;
    FUN_148f58fae(param_1,param_1 + 0x198,&local_1d8,&local_228);
    dVar3 = local_520;
    puVar4 = (undefined1 *)((double)local_1d8 - local_4a8);
    dVar33 = dStack_1d0 - local_4a0;
    local_1d8 = puVar4;
    dStack_1d0 = dVar33;
    dVar32 = cos(local_520);
    dVar3 = sin(dVar3);
    cVar11 = *(char *)(*(longlong *)(param_1 + 0xa8) + 0xa8);
    if (cVar11 == '\x01') {
      FUN_146c5e79e(&local_408);
      local_358 = *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xb0);
      local_354 = 1;
      local_368 = (float)(double)local_228;
      uVar14 = FUN_142976fcc(&local_408);
LAB_148f5bce6:
      FUN_146c00e98(param_4,uVar14);
      FUN_146bd8050(&local_408);
    }
    else {
      if (cVar11 == '\x04') {
        FUN_146c60328(&local_408);
        dVar36 = local_4e8 * dStack_220 * 0.5;
        local_1d8 = (undefined1 *)
                    ((double)puVar4 + (double)local_228 * 0.5 * dVar32 + dVar36 * -dVar3);
        dStack_1d0 = dVar33 + dVar3 * (double)local_228 * 0.5 + dVar32 * dVar36;
        local_310 = *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xb0);
        fVar2 = *(float *)(*(longlong *)(param_1 + 0xa8) + 0xac);
        if (fVar2 < 0.01) {
          local_318 = 0.009999999776482582;
        }
        else {
          dVar33 = (double)fVar2;
          local_318 = 0.9900000095367432;
          if (dVar33 <= 0.9900000095367432) {
            local_318 = dVar33;
          }
        }
        local_318 = (double)(~-(ulonglong)((double)local_228 <= dStack_220) & (ulonglong)dStack_220
                            | -(ulonglong)((double)local_228 <= dStack_220) & (ulonglong)local_228)
                    * 0.5 * local_318;
        local_338 = dStack_220 + (-local_318 - local_318);
        local_340 = (-local_318 - local_318) + (double)local_228;
        local_330 = &DAT_100000001;
        uVar14 = FUN_146c60402(&local_408);
        goto LAB_148f5bce6;
      }
      if (cVar11 == '\x05') {
        FUN_146c5e828(&local_408);
        local_358 = *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xb0);
        local_354 = 1;
        local_368 = (float)(double)local_228;
        fVar2 = *(float *)(*(longlong *)(param_1 + 0xa8) + 0xac);
        if (fVar2 < 0.01) {
          dVar33 = 0.009999999776482582;
        }
        else {
          dVar36 = (double)fVar2;
          dVar33 = 0.9900000095367432;
          if (dVar36 <= 0.9900000095367432) {
            dVar33 = dVar36;
          }
        }
        local_338 = (double)CONCAT44(local_338._4_4_,(float)((double)local_228 * dVar33));
        uVar14 = FUN_146c5e980(&local_408);
        goto LAB_148f5bce6;
      }
    }
    uVar25 = 0;
    uVar21 = *(int *)(param_4 + 4) * 0x200 + *(int *)((longlong)param_4 + 0x24);
    if ((uVar21 != 0) && (0xfffd < (ushort)(**(short **)param_4[5] - 1U))) {
      uVar25 = 1;
      uVar12 = 1;
      if (1 < (int)uVar21) {
        uVar25 = (ulonglong)uVar21;
      }
      do {
        uVar24 = uVar12;
        if ((uint)uVar25 == uVar24) goto LAB_148f5ae84;
        uVar12 = uVar24 + 1;
      } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_4[5])[uVar24 >> 9] +
                                           (ulonglong)(uVar24 & 0x1ff) * 2) - 1U));
      uVar25 = (ulonglong)uVar24;
    }
LAB_148f5ae84:
    if ((uint)uVar25 != uVar21) {
      do {
        unaff_RSI = (double *)(uVar25 >> 9);
        lVar13 = *(longlong *)((longlong)param_4[2] + (longlong)unaff_RSI * 8);
        uVar17 = (ulonglong)((uint)uVar25 & 0x1ff);
        dVar33 = *(double *)(lVar13 + uVar17 * 0x18);
        dVar36 = *(double *)(lVar13 + 8 + uVar17 * 0x18);
        uStack_400 = dVar3 * dVar33 + dVar32 * dVar36 + dStack_1d0;
        local_408 = (double *)(dVar33 * dVar32 + dVar36 * -dVar3 + (double)local_1d8);
        local_3f8 = (undefined1 *)0x0;
        cVar11 = FUN_146bfed03(&local_408);
        if (cVar11 != '\0') {
          lVar13 = *(longlong *)((longlong)param_4[2] + (longlong)unaff_RSI * 8);
          *(undefined1 **)(lVar13 + 0x10 + uVar17 * 0x18) = local_3f8;
          puVar1 = (undefined4 *)(lVar13 + uVar17 * 0x18);
          *puVar1 = (undefined4)local_408;
          puVar1[1] = local_408._4_4_;
          puVar1[2] = (undefined4)uStack_400;
          puVar1[3] = uStack_400._4_4_;
          if (*(char *)(param_4 + 0x42) == '\x01') {
            LOCK();
            *(int *)((longlong)param_4 + 0x214) = *(int *)((longlong)param_4 + 0x214) + 1;
            UNLOCK();
          }
        }
        uVar12 = (uint)uVar25 + 1;
        if ((int)uVar12 < (int)uVar21) {
          uVar12 = uVar21;
        }
        do {
          if (uVar12 - 1 == (int)uVar25) {
            uVar25 = (ulonglong)uVar12;
            break;
          }
          uVar24 = (int)uVar25 + 1;
          uVar25 = (ulonglong)uVar24;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               ((longlong)param_4[5] + (ulonglong)(uVar24 >> 9) * 8)
                                             + (ulonglong)(uVar24 & 0x1ff) * 2) - 1U));
      } while ((uint)uVar25 != uVar21);
    }
  }
  else {
    local_4e8 = 0.0;
    dStack_4e0 = 0.0;
    local_4d0 = 0;
    uStack_4c8 = 0;
    local_538 = param_1;
    FUN_146c5f010(&local_1d8);
    if (0 < (int)local_4b8) {
      uVar17 = (ulonglong)(local_4b8 - 1);
      pdVar16 = local_4c0 + 1;
      dVar32 = 0.0;
      uVar25 = 0;
      do {
        dVar32 = dVar32 + (local_4c0[(longlong)(int)uVar17 * 2] * *pdVar16 -
                          pdVar16[-1] * local_4c0[(longlong)(int)uVar17 * 2 + 1]);
        uVar17 = uVar25 & 0xffffffff;
        uVar25 = uVar25 + 1;
        pdVar16 = pdVar16 + 2;
      } while (local_4b8 != uVar25);
      if ((local_4b8 != 1) && (0.0 <= dVar32 * 0.5)) {
        lVar13 = (ulonglong)local_4b8 << 4;
        lVar23 = 0;
        do {
          lVar13 = lVar13 + -0x10;
          pdVar16 = *(double **)((longlong)local_4c0 + lVar23);
          dVar32 = ((double *)((longlong)local_4c0 + lVar23))[1];
          uVar14 = ((undefined8 *)((longlong)local_4c0 + lVar13))[1];
          *(undefined8 *)((longlong)local_4c0 + lVar23) =
               *(undefined8 *)((longlong)local_4c0 + lVar13);
          ((undefined8 *)((longlong)local_4c0 + lVar23))[1] = uVar14;
          local_408._0_4_ = SUB84(pdVar16,0);
          local_408._4_4_ = (undefined4)((ulonglong)pdVar16 >> 0x20);
          uStack_400._0_4_ = SUB84(dVar32,0);
          uStack_400._4_4_ = (undefined4)((ulonglong)dVar32 >> 0x20);
          puVar1 = (undefined4 *)((longlong)local_4c0 + lVar13);
          *puVar1 = (undefined4)local_408;
          puVar1[1] = local_408._4_4_;
          puVar1[2] = (undefined4)uStack_400;
          puVar1[3] = uStack_400._4_4_;
          lVar23 = lVar23 + 0x10;
          local_408 = pdVar16;
          uStack_400 = dVar32;
        } while ((ulonglong)(local_4b8 >> 1) << 4 != lVar23);
      }
    }
    FUN_148f5c1ec(&local_4e8);
    if (0 < (int)param_3[1]) {
      unaff_RSI = (double *)0x0;
      lVar13 = 0;
      do {
        FUN_144366dec(&local_4b0,local_4f8,*param_3 + (longlong)unaff_RSI);
        FUN_148279580(&local_4e8,local_4f8,1,0);
        lVar13 = lVar13 + 1;
        unaff_RSI = unaff_RSI + 2;
      } while (lVar13 < (int)param_3[1]);
    }
    param_1 = local_538;
    local_208 = (undefined **)0x0;
    puStack_200 = (undefined8 *)0x0;
    local_218 = (undefined ***)0x0;
    uStack_210 = 0;
    local_228 = (undefined1 *)0x0;
    dStack_220 = 0.0;
    local_1f8 = 1;
    uStack_1f7 = 0;
    uStack_1f6 = 0;
    uStack_1f4 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    local_1e8 = 0;
    local_1e4 = 0xffffffff00000000;
    if (*(char *)(*(longlong *)(local_538 + 0xa8) + 0xa9) == '\0') {
      FUN_148266a14(&local_228,&local_4e8);
    }
    else {
      local_520 = 1.79769313486232e+308;
      local_518 = 1.79769313486232e+308;
      local_510 = -1.79769313486232e+308;
      local_508 = -1.79769313486232e+308;
      if ((longlong)(int)local_4b8 != 0) {
        uVar28 = 0xffffffff;
        uVar30 = 0xffefffff;
        auVar35 = ZEXT816(0x7fefffffffffffff);
        lVar13 = 0;
        auVar40 = ZEXT816(0x7fefffffffffffff);
        auVar38 = ZEXT816(0xffefffffffffffff);
        do {
          dVar32 = *(double *)((longlong)local_4c0 + lVar13);
          if (auVar35._0_8_ <= dVar32) {
            uVar41 = SUB84(dVar32,0);
            uVar42 = (undefined4)((ulonglong)dVar32 >> 0x20);
          }
          else {
            uVar41 = (undefined4)*(undefined8 *)((longlong)local_4c0 + lVar13);
            uVar42 = (undefined4)((ulonglong)*(undefined8 *)((longlong)local_4c0 + lVar13) >> 0x20);
            auVar35._8_8_ = 0;
            auVar35._0_8_ = dVar32;
            local_520 = dVar32;
          }
          if ((double)CONCAT44(uVar30,uVar28) <= (double)CONCAT44(uVar42,uVar41) &&
              (double)CONCAT44(uVar42,uVar41) != (double)CONCAT44(uVar30,uVar28)) {
            local_510 = (double)CONCAT44(uVar42,uVar41);
            uVar28 = uVar41;
            uVar30 = uVar42;
          }
          dVar32 = *(double *)((longlong)local_4c0 + lVar13 + 8);
          if (auVar40._0_8_ <= dVar32) {
            uVar41 = SUB84(dVar32,0);
            uVar42 = (undefined4)((ulonglong)dVar32 >> 0x20);
          }
          else {
            uVar14 = *(undefined8 *)((longlong)local_4c0 + lVar13 + 8);
            uVar41 = (undefined4)uVar14;
            uVar42 = (undefined4)((ulonglong)uVar14 >> 0x20);
            auVar40._8_8_ = 0;
            auVar40._0_8_ = dVar32;
            local_518 = dVar32;
          }
          if (auVar38._0_8_ <= (double)CONCAT44(uVar42,uVar41) &&
              (double)CONCAT44(uVar42,uVar41) != auVar38._0_8_) {
            local_508 = (double)CONCAT44(uVar42,uVar41);
            auVar38._4_4_ = uVar42;
            auVar38._0_4_ = uVar41;
            auVar38._8_8_ = 0;
          }
          lVar13 = lVar13 + 0x10;
        } while ((longlong)(int)local_4b8 * 0x10 != lVar13);
      }
      FUN_1485ab442(&local_408,&local_520);
      uStack_1f4 = 0;
      local_1f8 = 0;
      uStack_1f6 = 1;
      uVar25 = (ulonglong)dStack_4e0 & 0xffffffff;
      if (uVar25 != 0) {
        iVar20 = 1;
        lVar13 = 0;
        do {
          FUN_148279e70(&local_520,(longlong)local_4e8 + lVar13,
                        ((longlong)iVar20 % (longlong)dStack_4e0._0_4_ & 0xffffffffU) * 0x10 +
                        (longlong)local_4e8);
          local_468 = local_508 * local_500 + local_518;
          local_470 = local_500 * local_510 + local_520;
          local_478 = local_518 - local_508 * local_500;
          local_480 = local_520 - local_500 * local_510;
          local_548 = local_230;
          FUN_1485bc074(&local_408,&local_480,&local_470,0xffffffff);
          lVar13 = lVar13 + 0x10;
          iVar20 = iVar20 + 1;
        } while (uVar25 << 4 != lVar13);
      }
      FUN_1485ab58e(&local_228,&local_408);
      if ((longlong)(int)uStack_4c8 != 0) {
        lVar23 = (longlong)(int)uStack_4c8 << 4;
        lVar13 = local_4d0;
        do {
          FUN_148278c44(&local_228,lVar13,1);
          lVar13 = lVar13 + 0x10;
          lVar23 = lVar23 + -0x10;
        } while (lVar23 != 0);
      }
      unaff_RSI = (double *)0x0;
      FUN_146bb6118(local_2b8);
      FUN_1485bbfa6(&local_408);
      param_1 = local_538;
    }
    local_408 = &local_4e8;
    local_528 = &local_408;
    local_530 = FUN_14436d1c0;
    FUN_148268272(&local_228);
    puVar4 = local_228;
    if (local_1e8 == 0) {
      FUN_148267160(&local_228);
      FUN_146c5f080(&local_1d8);
      FUN_148267ee4(&local_4e8);
      uVar25 = 0;
      goto LAB_148f5b20e;
    }
    iVar20 = dStack_220._0_4_;
    lVar13 = (longlong)dStack_220._0_4_;
    local_130 = dStack_220._0_4_;
    if (dStack_220._0_4_ == 0 && local_12c == 0) {
      local_12c = 0;
    }
    else {
      FUN_144721d4c(&local_138,(ulonglong)dStack_220 & 0xffffffff);
      if (iVar20 != 0) {
        memcpy(local_138,puVar4,lVar13 << 4);
      }
    }
    iVar20 = local_1e8;
    lVar13 = (longlong)local_1e8;
    _Src = (void *)CONCAT44(uStack_1ec,uStack_1f0);
    local_120 = local_1e8;
    if (local_1e8 == 0 && local_11c == 0) {
      local_11c = 0;
    }
    else {
      FUN_148278bd0(&local_128,local_1e8);
      if (iVar20 != 0) {
        memcpy(local_128,_Src,lVar13 * 0xc);
      }
    }
    uVar14 = FUN_1429777f0(&local_1d8);
    FUN_146c00e98(param_4,uVar14);
    FUN_148267160(&local_228);
    FUN_146c5f080(&local_1d8);
    FUN_148267ee4(&local_4e8);
  }
  dVar33 = DAT_14c8463c8;
  dVar3 = DAT_14c8463c0;
  dVar32 = DAT_14c8463b8;
  if (param_7 != '\0') {
    uVar12 = *(int *)(param_4 + 4) * 0x200 + *(int *)((longlong)param_4 + 0x24);
    uVar21 = 0;
    if ((uVar12 != 0) && (uVar21 = 0, 0xfffd < (ushort)(**(short **)param_4[5] - 1U))) {
      uVar24 = 1;
      uVar15 = 1;
      if (1 < (int)uVar12) {
        uVar24 = uVar12;
      }
      do {
        uVar21 = uVar24;
        if (uVar24 == uVar15) break;
        uVar19 = uVar15 >> 9;
        uVar22 = uVar15 & 0x1ff;
        uVar21 = uVar15;
        uVar15 = uVar15 + 1;
      } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_4[5])[uVar19] +
                                           (ulonglong)uVar22 * 2) - 1U));
    }
    if (uVar21 != uVar12) {
      do {
        unaff_RSI = (double *)(ulonglong)(uVar21 >> 9);
        lVar13 = *(longlong *)((longlong)param_4[2] + (longlong)unaff_RSI * 8);
        uVar25 = (ulonglong)(uVar21 & 0x1ff);
        local_3f8 = (undefined1 *)(*(double *)(lVar13 + 0x10 + uVar25 * 0x18) - dVar33 * param_6);
        uStack_400 = *(double *)(lVar13 + 8 + uVar25 * 0x18) - dVar3 * param_6;
        local_408 = (double *)(*(double *)(lVar13 + uVar25 * 0x18) - param_6 * dVar32);
        cVar11 = FUN_146bfed03(&local_408);
        if (cVar11 != '\0') {
          lVar13 = *(longlong *)((longlong)param_4[2] + (longlong)unaff_RSI * 8);
          *(undefined1 **)(lVar13 + 0x10 + uVar25 * 0x18) = local_3f8;
          puVar1 = (undefined4 *)(lVar13 + uVar25 * 0x18);
          *puVar1 = (undefined4)local_408;
          puVar1[1] = local_408._4_4_;
          puVar1[2] = (undefined4)uStack_400;
          puVar1[3] = uStack_400._4_4_;
          if (*(char *)(param_4 + 0x42) == '\x01') {
            LOCK();
            *(int *)((longlong)param_4 + 0x214) = *(int *)((longlong)param_4 + 0x214) + 1;
            UNLOCK();
          }
        }
        uVar24 = uVar21 + 1;
        if ((int)(uVar21 + 1) < (int)uVar12) {
          uVar24 = uVar12;
        }
        do {
          uVar15 = uVar24;
          if (uVar24 - 1 == uVar21) break;
          uVar21 = uVar21 + 1;
          uVar15 = uVar21;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               ((longlong)param_4[5] + (ulonglong)(uVar21 >> 9) * 8)
                                             + (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
        uVar21 = uVar15;
      } while (uVar21 != uVar12);
    }
    param_6 = param_6 + param_6;
  }
  dVar32 = param_6;
  if ((param_6 != 0.0) || (NAN(param_6))) {
    FUN_1482d2c96(&local_408,param_4);
    local_208 = local_3d8;
    uVar14 = uStack_3e0;
    local_218 = local_3e8;
    dVar10 = dStack_3f0;
    local_228 = local_3f8;
    dVar31 = (double)CONCAT44(uVar29,uVar26) - (double)CONCAT44(uVar48,uVar47);
    dVar33 = (double)(-(ulonglong)(0.0 <= dVar31) & (ulonglong)dVar31);
    dVar3 = (double)CONCAT44(uVar44,uVar43) - (double)CONCAT44(uVar46,uVar45);
    dVar36 = (double)(-(ulonglong)(0.0 <= dVar3) & (ulonglong)dVar3);
    uVar25 = -(ulonglong)(dVar33 <= dVar36);
    local_3ac = (float)(1.0 / (double)(~uVar25 & (ulonglong)dVar33 | uVar25 & (ulonglong)dVar36));
    if (dVar32 < 0.0) {
      local_3b0 = 0;
    }
    local_4d8 = DAT_14c8463c8;
    local_4e8 = DAT_14c8463b8;
    dStack_4e0 = DAT_14c8463c0;
    local_1a8 = local_3c8;
    uStack_1a0 = uStack_3c0;
    local_1b8 = local_3d8;
    puStack_1b0 = puStack_3d0;
    local_1c8 = local_3e8;
    uStack_1c0 = uStack_3e0;
    local_1d8 = local_3f8;
    dStack_1d0 = dStack_3f0;
    uVar6 = CONCAT44(uStack_1ec,uStack_1f0);
    local_3d8 = &PTR_LAB_14ba26ab0;
    local_3e8 = (undefined ***)0x0;
    uStack_3e0 = uStack_210;
    local_3f8 = &LAB_14436d254;
    dStack_3f0 = dStack_220;
    dStack_220 = dVar10;
    local_1f8 = SUB81(local_3c8,0);
    uStack_1f7 = (undefined1)((ulonglong)local_3c8 >> 8);
    uStack_1f6 = (undefined1)((ulonglong)local_3c8 >> 0x10);
    uStack_1f5 = (undefined1)((ulonglong)local_3c8 >> 0x18);
    uStack_1f4 = (undefined4)((ulonglong)local_3c8 >> 0x20);
    uStack_1f0 = (undefined4)uStack_3c0;
    uStack_1ec = (undefined4)((ulonglong)uStack_3c0 >> 0x20);
    puStack_200 = puStack_3d0;
    uStack_210 = uVar14;
    puStack_3d0 = &param_6;
    local_3c8 = &local_4e8;
    uStack_3c0 = uVar6;
    local_3b8 = dVar32;
    if (local_228 != (undefined1 *)0x0) {
      pppuVar18 = local_218;
      if (local_218 == (undefined ***)0x0) {
        pppuVar18 = &local_208;
      }
      (*(code *)(*pppuVar18)[2])();
    }
    FUN_1482d2df4(&local_408);
    FUN_14830cf42(&local_408);
  }
  else {
    dVar31 = (double)CONCAT44(uVar29,uVar26) - (double)CONCAT44(uVar48,uVar47);
    dVar3 = (double)CONCAT44(uVar44,uVar43) - (double)CONCAT44(uVar46,uVar45);
  }
  dVar31 = (double)(-(ulonglong)(0.0 <= dVar31) & (ulonglong)dVar31);
  dVar3 = (double)(-(ulonglong)(0.0 <= dVar3) & (ulonglong)dVar3);
  uVar25 = -(ulonglong)(dVar31 <= dVar3);
  fVar2 = *(float *)(*(longlong *)(param_1 + 0xb8) + 0xb0);
  dVar32 = (double)(float)(1.0 / (double)(~uVar25 & (ulonglong)dVar31 | uVar25 & (ulonglong)dVar3));
  if (*(char *)(*(longlong *)(param_1 + 0xb8) + 0xb4) == '\0') {
    uVar25 = -(ulonglong)(-param_6 <= param_6);
    fVar27 = (float)((double)(~uVar25 & (ulonglong)-param_6 | (ulonglong)param_6 & uVar25) * dVar32)
    ;
    fVar5 = 1.0;
    if (1.0 <= fVar27) {
      fVar5 = fVar27;
    }
    uVar25 = (ulonglong)(uint)(fVar2 / fVar5);
  }
  else {
    dVar32 = ((double)fVar2 * 0.01) / dVar32;
    uVar25 = CONCAT44((int)((ulonglong)dVar32 >> 0x20),(float)dVar32);
  }
  local_548 = local_460;
  local_410 = 0;
  local_408 = param_4;
  FUN_146bcad02(&local_408,uVar25,0,0);
  uVar25 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
LAB_148f5b20e:
  if (local_4c0 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_568) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar25 & 0xffffffff;
}



// FUNCTION 148f5bcfe FUN_148f5bcfe body=202 status=ok
// SIG undefined FUN_148f5bcfe(void)

void FUN_148f5bcfe(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  local_38 = L"OnStartExtrude";
  local_30 = 0xe;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"UDrawPolygonTool";
  local_30 = 0x10;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,
                L"Set the height of the extrusion by positioning the mouse over the extrusion volume, or over objects to snap to their heights. Hold Shift to ignore snapping."
               );
  (**(code **)(*plVar1 + 0x340))(plVar1,&local_38,2);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f5bdca FUN_148f5bdca body=74 status=ok
// SIG undefined FUN_148f5bdca(void)

void FUN_148f5bdca(longlong *param_1)

{
  (**(code **)(*param_1 + 0x3a0))();
  FUN_14851bb12(param_1[0x2a]);
  FUN_14851bab8(param_1[0x2a],0);
  *(undefined1 *)(param_1 + 0xab) = 0;
  param_1[0xad] = 0;
  FUN_148f56390(param_1);
  return;
}



// FUNCTION 148f5be14 FUN_148f5be14 body=982 status=ok
// SIG undefined FUN_148f5be14(void)

void FUN_148f5be14(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined1 auStack_978 [32];
  undefined8 *local_958;
  double local_950;
  undefined1 local_948;
  char local_940 [8];
  longlong local_938;
  undefined1 local_91c [4];
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 local_900;
  undefined8 uStack_8f8;
  undefined8 local_8f0;
  undefined8 uStack_8e8;
  longlong local_8d8;
  int local_8d0;
  wchar_t *local_8c8;
  undefined4 local_8c0;
  longlong local_8a8;
  undefined4 local_898;
  undefined4 uStack_894;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  undefined4 local_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined1 local_838 [16];
  longlong local_828;
  uint local_820;
  uint local_81c;
  undefined1 local_258 [544];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_978;
  pwVar6 = L"Extrude";
  if (*(char *)(param_1[0x15] + 0xb9) == '\0') {
    pwVar6 = L"Polygon";
  }
  FUN_140056680(&local_8d8,pwVar6);
  local_908 = DAT_14c8464f0;
  local_918 = DAT_14c8464e0;
  uStack_910 = DAT_14c8464e8;
  local_900 = 0;
  uStack_8f8 = 0;
  local_8f0 = 0;
  uStack_8e8 = 0x3ff0000000000000;
  local_958 = (undefined8 *)((ulonglong)local_958 & 0xffffffffffffff00);
  FUN_1411b354a(local_258,0,0,0);
  local_950 = 0.0;
  if (*(char *)(param_1[0x15] + 0xb9) != '\0') {
    local_950 = (double)*(float *)(param_1[0x15] + 0xbc);
  }
  local_958 = &local_918;
  local_948 = 0;
  cVar3 = FUN_148f5ab1c(param_1,param_1 + 0x18,param_1 + 0x1a,local_258);
  if (cVar3 == '\0') {
    (**(code **)(*param_1 + 0x380))(param_1);
  }
  else {
    FUN_146c3b344(local_258);
    lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_8c8 = L"CreatePolygon";
    local_8c0 = 0xd;
    FUN_1446e940c(local_940,&local_8c8);
    local_8c8 = L"UDrawPolygonTool";
    local_8c0 = 0x10;
    FUN_1446e940c(local_91c,&local_8c8);
    FUN_140208bae(&local_8c8,local_91c,local_940,L"Create Polygon");
    (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x10))(lVar4 + 0x28,&local_8c8);
    if (local_8c8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_8c8 + 0x10))();
    }
    FUN_14850577a(&local_8c8,1);
    local_8a8 = param_1[0x1f];
    if ((local_8a8 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(local_8a8);
    }
    local_898 = (undefined4)local_900;
    uStack_894 = local_900._4_4_;
    uStack_890 = (undefined4)uStack_8f8;
    uStack_88c = uStack_8f8._4_4_;
    local_888 = (undefined4)local_8f0;
    uStack_884 = local_8f0._4_4_;
    uStack_880 = (undefined4)uStack_8e8;
    uStack_87c = uStack_8e8._4_4_;
    local_878 = local_918;
    uStack_870 = uStack_910;
    local_868 = local_908;
    uStack_860 = 0;
    local_858 = 0x3ff0000000000000;
    uStack_850 = 0x3ff0000000000000;
    local_848 = 0x3ff0000000000000;
    uStack_840 = 0;
    iVar1 = local_8d0 + -1;
    if (local_8d0 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(local_838,local_8d8,iVar1);
    lVar4 = FUN_14479d2ce(param_1[0x17] + 0xa8);
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar4);
    }
    uVar2 = local_820;
    lVar7 = (longlong)(int)local_820;
    local_820 = local_820 + 1;
    if (local_81c < local_820) {
      FUN_140655806(&local_828,uVar2);
    }
    *(longlong *)(local_828 + lVar7 * 8) = lVar4;
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar4);
    }
    FUN_148505bae(&local_8c8,local_258);
    (**(code **)(*(longlong *)param_1[0x14] + 0x2c0))((longlong *)param_1[0x14],&local_8c8);
    uVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_148505c7a(local_940,uVar5,&local_8c8);
    if ((local_940[0] == '\0') && (local_938 != 0)) {
      uVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
      FUN_1485509b4(uVar5,local_938);
    }
    lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x18))(lVar4 + 0x28);
    if (*(char *)((longlong)param_1 + 0x559) == '\x01') {
      *(undefined4 *)(param_1[0x15] + 0xbc) = *(undefined4 *)((longlong)param_1 + 0x55c);
      *(undefined1 *)((longlong)param_1 + 0x559) = 0;
    }
    (**(code **)(*param_1 + 0x380))(param_1);
    FUN_1484c7624(&local_8c8);
  }
  FUN_141082778(local_258);
  if (local_8d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_978) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f5c1ec FUN_148f5c1ec body=133 status=ok
// SIG undefined FUN_148f5c1ec(void)

void FUN_148f5c1ec(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  double *pdVar4;
  longlong lVar5;
  int iVar6;
  double dVar7;
  
  FUN_144721cf4();
  iVar1 = (int)param_2[1];
  if ((longlong)iVar1 < 1) {
    bVar3 = false;
  }
  else {
    lVar2 = *param_2;
    iVar6 = iVar1 + -1;
    pdVar4 = (double *)(lVar2 + 8);
    dVar7 = 0.0;
    lVar5 = 0;
    do {
      dVar7 = dVar7 + (*(double *)(lVar2 + (longlong)iVar6 * 0x10) * *pdVar4 -
                      pdVar4[-1] * *(double *)(lVar2 + 8 + (longlong)iVar6 * 0x10));
      iVar6 = (int)lVar5;
      lVar5 = lVar5 + 1;
      pdVar4 = pdVar4 + 2;
    } while (iVar1 != lVar5);
    bVar3 = dVar7 * 0.5 < 0.0;
  }
  *(bool *)(param_1 + 0x10) = bVar3;
  return;
}



// FUNCTION 148f5c272 FUN_148f5c272 body=89 status=ok
// SIG undefined FUN_148f5c272(void)

void FUN_148f5c272(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  if ((char)param_1[0xab] == '\x01') {
    FUN_14851bb12(param_1[0x2a]);
    FUN_14851bab8(param_1[0x2a],0);
    *(undefined1 *)(param_1 + 0xab) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000148f5c2a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3b8))(param_1,param_2,param_3);
  return;
}



// FUNCTION 148f5c2cc FUN_148f5c2cc body=78 status=ok
// SIG undefined FUN_148f5c2cc(void)

void FUN_148f5c2cc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145b9af86();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_148f5c2ff;
  }
  param_2 = 0;
LAB_148f5c2ff:
  FUN_148f5c272(param_2,param_1 + 0x10,param_1 + 0x20);
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



// FUNCTION 148f5c31a FUN_148f5c31a body=80 status=ok
// SIG undefined FUN_148f5c31a(void)

bool FUN_148f5c31a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 8) != '\0') {
    return true;
  }
  if (param_2 != 0) {
    lVar1 = FUN_145b9af86();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_148f5c335;
  }
  param_2 = 0;
LAB_148f5c335:
  return *(int *)(param_2 + 0x580) != *(int *)(param_1 + 0xc);
}



// FUNCTION 148f5c36a FUN_148f5c36a body=32 status=ok
// SIG undefined FUN_148f5c36a(void)

undefined8 FUN_148f5c36a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FDrawPolygonStateChange");
  return param_2;
}



// FUNCTION 148f5c3c6 FUN_148f5c3c6 body=84 status=ok
// SIG undefined FUN_148f5c3c6(void)

void FUN_148f5c3c6(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5c410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x21,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5c426 FUN_148f5c426 body=84 status=ok
// SIG undefined FUN_148f5c426(void)

void FUN_148f5c426(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5c470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,8,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5c47a FUN_148f5c47a body=84 status=ok
// SIG undefined FUN_148f5c47a(void)

void FUN_148f5c47a(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5c4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0xf,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5c4ce FUN_148f5c4ce body=84 status=ok
// SIG undefined FUN_148f5c4ce(void)

void FUN_148f5c4ce(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5c518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x13,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5c522 FUN_148f5c522 body=84 status=ok
// SIG undefined FUN_148f5c522(void)

void FUN_148f5c522(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5c56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0xe,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5c576 FUN_148f5c576 body=84 status=ok
// SIG undefined FUN_148f5c576(void)

void FUN_148f5c576(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5c5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x14,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5c5ca FUN_148f5c5ca body=84 status=ok
// SIG undefined FUN_148f5c5ca(void)

void FUN_148f5c5ca(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5c614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x15,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5c61e FUN_148f5c61e body=84 status=ok
// SIG undefined FUN_148f5c61e(void)

void FUN_148f5c61e(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5c668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,3,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5c672 FUN_148f5c672 body=84 status=ok
// SIG undefined FUN_148f5c672(void)

void FUN_148f5c672(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5c6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x11,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5c6c6 FUN_148f5c6c6 body=84 status=ok
// SIG undefined FUN_148f5c6c6(void)

void FUN_148f5c6c6(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5c710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,9,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5c71a FUN_148f5c71a body=84 status=ok
// SIG undefined FUN_148f5c71a(void)

void FUN_148f5c71a(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5c764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,10,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5c76e FUN_148f5c76e body=84 status=ok
// SIG undefined FUN_148f5c76e(void)

void FUN_148f5c76e(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5c7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,6,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5c7c2 FUN_148f5c7c2 body=84 status=ok
// SIG undefined FUN_148f5c7c2(void)

void FUN_148f5c7c2(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5c80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0xd,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5c816 FUN_148f5c816 body=84 status=ok
// SIG undefined FUN_148f5c816(void)

void FUN_148f5c816(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5c860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,5,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5c86a FUN_148f5c86a body=84 status=ok
// SIG undefined FUN_148f5c86a(void)

void FUN_148f5c86a(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5c8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,7,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5c8be FUN_148f5c8be body=84 status=ok
// SIG undefined FUN_148f5c8be(void)

void FUN_148f5c8be(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5c908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,4,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5c912 FUN_148f5c912 body=84 status=ok
// SIG undefined FUN_148f5c912(void)

void FUN_148f5c912(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5c95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x10,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5c966 FUN_148f5c966 body=84 status=ok
// SIG undefined FUN_148f5c966(void)

void FUN_148f5c966(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5c9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x12,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5c9ba FUN_148f5c9ba body=84 status=ok
// SIG undefined FUN_148f5c9ba(void)

void FUN_148f5c9ba(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5ca04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x20,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5ca12 FUN_148f5ca12 body=84 status=ok
// SIG undefined FUN_148f5ca12(void)

void FUN_148f5ca12(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5ca5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0xf,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5ca66 FUN_148f5ca66 body=84 status=ok
// SIG undefined FUN_148f5ca66(void)

void FUN_148f5ca66(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5cab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0xe,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5caba FUN_148f5caba body=84 status=ok
// SIG undefined FUN_148f5caba(void)

void FUN_148f5caba(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5cb04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x14,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5cb0e FUN_148f5cb0e body=84 status=ok
// SIG undefined FUN_148f5cb0e(void)

void FUN_148f5cb0e(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5cb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x15,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5cb62 FUN_148f5cb62 body=84 status=ok
// SIG undefined FUN_148f5cb62(void)

void FUN_148f5cb62(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5cbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,3,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5cbb6 FUN_148f5cbb6 body=84 status=ok
// SIG undefined FUN_148f5cbb6(void)

void FUN_148f5cbb6(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5cc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x11,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5cc0a FUN_148f5cc0a body=84 status=ok
// SIG undefined FUN_148f5cc0a(void)

void FUN_148f5cc0a(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5cc54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,6,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5cc5e FUN_148f5cc5e body=84 status=ok
// SIG undefined FUN_148f5cc5e(void)

void FUN_148f5cc5e(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5cca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,5,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5ccb2 FUN_148f5ccb2 body=84 status=ok
// SIG undefined FUN_148f5ccb2(void)

void FUN_148f5ccb2(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5ccfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,7,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5cd06 FUN_148f5cd06 body=84 status=ok
// SIG undefined FUN_148f5cd06(void)

void FUN_148f5cd06(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5cd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x22,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5cd5a FUN_148f5cd5a body=84 status=ok
// SIG undefined FUN_148f5cd5a(void)

void FUN_148f5cd5a(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5cda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,4,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5cdae FUN_148f5cdae body=84 status=ok
// SIG undefined FUN_148f5cdae(void)

void FUN_148f5cdae(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5cdf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x10,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5ce06 FUN_148f5ce06 body=84 status=ok
// SIG undefined FUN_148f5ce06(void)

void FUN_148f5ce06(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x1f,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5ce5e FUN_148f5ce5e body=84 status=ok
// SIG undefined FUN_148f5ce5e(void)

void FUN_148f5ce5e(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5cea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x1d,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5ceb2 FUN_148f5ceb2 body=84 status=ok
// SIG undefined FUN_148f5ceb2(void)

void FUN_148f5ceb2(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5cefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x1b,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5cf06 FUN_148f5cf06 body=84 status=ok
// SIG undefined FUN_148f5cf06(void)

void FUN_148f5cf06(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5cf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x16,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5cf5a FUN_148f5cf5a body=84 status=ok
// SIG undefined FUN_148f5cf5a(void)

void FUN_148f5cf5a(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5cfa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0xe,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5cfae FUN_148f5cfae body=84 status=ok
// SIG undefined FUN_148f5cfae(void)

void FUN_148f5cfae(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5cff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x1c,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5d002 FUN_148f5d002 body=84 status=ok
// SIG undefined FUN_148f5d002(void)

void FUN_148f5d002(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5d04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x1a,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5d056 FUN_148f5d056 body=84 status=ok
// SIG undefined FUN_148f5d056(void)

void FUN_148f5d056(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5d0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x1e,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5d0aa FUN_148f5d0aa body=84 status=ok
// SIG undefined FUN_148f5d0aa(void)

void FUN_148f5d0aa(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5d0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x19,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5d0fe FUN_148f5d0fe body=84 status=ok
// SIG undefined FUN_148f5d0fe(void)

void FUN_148f5d0fe(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5d148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x17,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5d152 FUN_148f5d152 body=84 status=ok
// SIG undefined FUN_148f5d152(void)

void FUN_148f5d152(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5d19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x18,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5d1aa FUN_148f5d1aa body=84 status=ok
// SIG undefined FUN_148f5d1aa(void)

void FUN_148f5d1aa(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5d1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x1b,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5d1fe FUN_148f5d1fe body=84 status=ok
// SIG undefined FUN_148f5d1fe(void)

void FUN_148f5d1fe(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5d248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x16,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5d252 FUN_148f5d252 body=84 status=ok
// SIG undefined FUN_148f5d252(void)

void FUN_148f5d252(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5d29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x1c,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5d2a6 FUN_148f5d2a6 body=84 status=ok
// SIG undefined FUN_148f5d2a6(void)

void FUN_148f5d2a6(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5d2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x1a,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5d2fa FUN_148f5d2fa body=84 status=ok
// SIG undefined FUN_148f5d2fa(void)

void FUN_148f5d2fa(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5d344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x24,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5d34e FUN_148f5d34e body=84 status=ok
// SIG undefined FUN_148f5d34e(void)

void FUN_148f5d34e(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5d398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x23,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5d3a2 FUN_148f5d3a2 body=84 status=ok
// SIG undefined FUN_148f5d3a2(void)

void FUN_148f5d3a2(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5d3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x17,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5d3f6 FUN_148f5d3f6 body=84 status=ok
// SIG undefined FUN_148f5d3f6(void)

void FUN_148f5d3f6(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148f5d440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3c8))(plVar2,0x18,*(code **)(*plVar2 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 148f5d452 FUN_148f5d452 body=314 status=ok
// SIG undefined FUN_148f5d452(void)

void FUN_148f5d452(ulonglong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_b8 [40];
  code *local_90;
  undefined8 *local_88;
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  uStack_50 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar4 = (int)param_2[5];
  }
  local_68 = local_48;
  uVar2 = local_68;
  uStack_60 = uStack_40;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
  iVar3 = local_68._4_4_;
  local_80 = param_2;
  if ((local_68._4_4_ != iVar4) || (local_68 = uVar2, uStack_50 != plVar1)) {
    do {
      local_68 = uVar2;
      local_88 = &local_58;
      local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(*local_80 + (longlong)iVar3 * 0xc));
      local_90 = FUN_14436d2e0;
      uStack_50 = param_2;
      local_48 = param_3;
      uStack_40 = param_1;
      FUN_1482ac790(param_1);
      local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
      FUN_1449c0562(&local_78);
      iVar3 = local_68._4_4_;
      uVar2 = local_68;
    } while (local_80 != param_2 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || local_68._4_4_ != iVar4));
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f5d58d FUN_148f5d58d body=2447 status=ok
// SIG undefined FUN_148f5d58d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_148f5d58d(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                       longlong *param_5,undefined1 *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_1e8 [44];
  uint local_1bc;
  longlong *local_1b8;
  uint *local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  undefined1 *local_198;
  uint **local_190;
  longlong *local_188;
  longlong *local_180;
  undefined4 local_178;
  undefined4 local_174;
  uint local_170;
  undefined1 local_16c;
  uint local_168;
  undefined1 local_164;
  uint local_160;
  undefined1 local_15c [4];
  uint *local_158;
  uint *puStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  int local_124;
  undefined1 local_120 [8];
  undefined1 *local_118;
  int local_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  puVar16 = (uint *)0x0;
  if (((param_2 == 0) || (param_1 == 0)) || ((int)param_3[1] == 0)) goto LAB_148f5d743;
  *param_6 = 0;
  iVar7 = (int)param_3[1];
  puVar16 = (uint *)*param_3;
  if ((longlong)iVar7 == 1) {
    iVar7 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar7 + 1U) {
      FUN_1446f48e2(param_4,iVar7);
    }
    *(uint *)(*param_4 + (longlong)iVar7 * 4) = *puVar16;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_1e8);
  }
  local_1b8 = param_5;
  local_198 = param_6;
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    lVar11 = 0;
    do {
      iVar3 = *(int *)((longlong)puVar16 + lVar11);
      cVar1 = FUN_1482ac16a(param_1,iVar3);
      plVar9 = local_1b8;
      if ((cVar1 != '\0') ||
         (uVar14 = **(uint **)(*(longlong *)(param_1 + 0x70) + 0x20 + (longlong)iVar3 * 0x50),
         *(int *)(*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x1c0) +
                   (ulonglong)(uVar14 >> 9) * 8) + 0xc + (ulonglong)((uVar14 & 0x1ff) << 4)) != -1))
      {
        puVar16 = (uint *)0x0;
        goto LAB_148f5d743;
      }
      lVar11 = lVar11 + 4;
    } while ((longlong)iVar7 * 4 != lVar11);
    iVar7 = (int)param_3[1];
    puVar16 = (uint *)*param_3;
    if (iVar7 == 2) {
      iVar7 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar7 + 1U) {
        FUN_1446f48e2(param_4,iVar7);
      }
      *(uint *)(*param_4 + (longlong)iVar7 * 4) = *puVar16;
      lVar11 = *param_3;
      iVar7 = (int)plVar9[1];
      *(uint *)(plVar9 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)plVar9 + 0xc) < iVar7 + 1U) {
        FUN_1446f48e2(plVar9,iVar7);
      }
      *(undefined4 *)(*plVar9 + (longlong)iVar7 * 4) = *(undefined4 *)(lVar11 + 4);
      puVar16 = (uint *)CONCAT71((int7)((ulonglong)puVar16 >> 8),1);
      goto LAB_148f5d743;
    }
  }
  iVar3 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = (undefined1 *)0x0;
  local_c0 = 0;
  plVar9 = local_1b8;
  if (iVar7 != 0) {
    local_1b0 = puVar16 + iVar7;
    do {
      local_160 = *puVar16;
      lVar11 = *(longlong *)(param_1 + 0x70);
      lVar17 = (longlong)(int)local_160 * 0x50;
      FUN_146c13626(param_2,&local_190,**(undefined4 **)(lVar11 + 0x20 + lVar17));
      uVar14 = **(uint **)(lVar11 + 0x10 + lVar17);
      local_164 = (uint)local_190 == uVar14;
      local_1bc = (uint)local_190;
      bVar18 = (uint)local_190 == uVar14;
      local_170 = *(uint *)(*(longlong *)(lVar11 + 0x10 + lVar17) +
                           (longlong)(*(int *)(lVar11 + 0x18 + lVar17) + -1) * 4);
      local_16c = !bVar18;
      local_1a8 = lVar11;
      local_1a0 = lVar17;
      local_168 = uVar14;
      if ((int)uStack_100 != local_d4) {
        puVar5 = local_c8;
        if (local_c8 == (undefined1 *)0x0) {
          puVar5 = local_d0;
        }
        iVar7 = *(int *)(puVar5 + (ulonglong)
                                  (((((uVar14 >> 2) + uVar14 * 0x40) -
                                    (uint)((uint)local_190 != uVar14)) + 0x9e3779ba ^ uVar14) &
                                  local_c0 - 1U) * 4);
        while (iVar7 != -1) {
          lVar6 = (longlong)iVar7;
          if ((*(uint *)(local_108 + lVar6 * 0x14) == uVar14) &&
             ((bool)*(char *)(local_108 + 4 + lVar6 * 0x14) == bVar18)) goto LAB_148f5db2a;
          iVar7 = *(int *)(local_108 + lVar6 * 0x14 + 0xc);
        }
        iVar7 = *(int *)(puVar5 + (ulonglong)
                                  (local_c0 - 1U &
                                  ((local_170 >> 2) +
                                   (local_170 << 6 | (uint)((uint)local_190 != uVar14)) + 0x9e3779b9
                                  ^ local_170)) * 4);
        while (iVar7 != -1) {
          lVar6 = (longlong)iVar7;
          if ((*(uint *)(local_108 + lVar6 * 0x14) == local_170) &&
             ((bool)*(char *)(local_108 + 4 + lVar6 * 0x14) == !bVar18)) goto LAB_148f5db2a;
          iVar7 = *(int *)(local_108 + lVar6 * 0x14 + 0xc);
        }
      }
      lVar11 = lVar11 + lVar17;
      local_158 = &local_168;
      puStack_150 = &local_160;
      FUN_148f78284(&local_108,&local_178,&local_158);
      local_158 = &local_170;
      puStack_150 = &local_160;
      FUN_148f78284(&local_108,&local_178,&local_158);
      plVar9 = local_1b8;
      if (local_1bc == uVar14) {
        puVar4 = *(undefined4 **)(lVar11 + 0x10);
        puVar8 = puVar4 + (*(int *)(lVar11 + 0x18) + -1);
      }
      else {
        puVar8 = *(undefined4 **)(lVar11 + 0x10);
        puVar4 = puVar8 + (*(int *)(lVar11 + 0x18) + -1);
      }
      local_174 = *puVar8;
      local_178 = *puVar4;
      local_158 = &local_160;
      puStack_150 = &local_178;
      FUN_14834aa14(&local_b8,local_15c,&local_158,0);
      puVar16 = puVar16 + 1;
    } while (puVar16 != local_1b0);
    puVar16 = (uint *)*param_3;
    iVar3 = (int)param_3[1];
  }
  local_190 = &local_158;
  local_138 = 0;
  local_130 = 0;
  local_158 = (uint *)0x0;
  puStack_150 = (undefined4 *)0x0;
  local_12c = 0xffffffff00000080;
  local_124 = 0;
  local_118 = (undefined1 *)0x0;
  local_110 = 0;
  local_188 = &local_b8;
  local_180 = &local_108;
  if (iVar3 != 0) {
    puVar15 = puVar16 + iVar3;
    do {
      uVar14 = *puVar16;
      if ((int)puStack_150 != local_124) {
        puVar5 = local_118;
        if (local_118 == (undefined1 *)0x0) {
          puVar5 = local_120;
        }
        for (uVar10 = *(uint *)(puVar5 + (ulonglong)(local_110 - 1U & uVar14) * 4);
            uVar10 != 0xffffffff; uVar10 = local_158[(longlong)(int)uVar10 * 3 + 1]) {
          if (local_158[(longlong)(int)uVar10 * 3] == uVar14) goto LAB_148f5db74;
        }
      }
      plVar13 = param_4;
      if (((int)param_4[1] != 0) && (plVar13 = plVar9, (int)plVar9[1] != 0)) goto LAB_148f5dbdb;
      FUN_14436703c(&local_190,uVar14,plVar13);
LAB_148f5db74:
      puVar16 = puVar16 + 1;
    } while (puVar16 != puVar15);
  }
  iVar7 = (int)plVar9[1];
  iVar3 = (int)param_4[1];
  if (iVar7 == 0) {
    if (iVar3 == 0) {
LAB_148f5dbdb:
      puVar16 = (uint *)0x0;
    }
    else {
      uVar14 = _DAT_00000004;
      if ((int)uStack_b0 != local_84) {
        uVar14 = *(uint *)*param_4;
        puVar5 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar5 = local_80;
        }
        uVar10 = *(uint *)(puVar5 + (ulonglong)(local_70 - 1U & uVar14) * 4);
        puVar15 = (uint *)&DAT_00000004;
        if (uVar10 != 0xffffffff) {
          do {
            puVar15 = (uint *)(local_b8 + (longlong)(int)uVar10 * 0x14);
            if (*puVar15 == uVar14) goto LAB_148f5dd1d;
            uVar10 = puVar15[3];
          } while (uVar10 != 0xffffffff);
          puVar15 = (uint *)0x0;
LAB_148f5dd1d:
          puVar15 = puVar15 + 1;
        }
        uVar14 = *puVar15;
        uVar10 = ((uint *)*param_4)[iVar3 + -1];
        uVar12 = *(uint *)(puVar5 + (ulonglong)(local_70 - 1U & uVar10) * 4);
        while (uVar12 != 0xffffffff) {
          puVar15 = (uint *)(local_b8 + (longlong)(int)uVar12 * 0x14);
          if (*puVar15 == uVar10) goto LAB_148f5d883;
          uVar12 = puVar15[3];
        }
      }
      puVar15 = (uint *)0x0;
LAB_148f5d883:
      puVar16 = (uint *)CONCAT71((int7)((ulonglong)puVar16 >> 8),uVar14 == puVar15[2]);
    }
  }
  else {
    if (iVar3 == 0) goto LAB_148f5dbdb;
    if (iVar7 < iVar3) {
      lVar11 = (longlong)(int)param_3[1];
      iVar7 = -1;
      if (lVar11 == 0) {
        iVar2 = -1;
      }
      else {
        lVar17 = lVar11 * 4;
        lVar6 = 0;
        do {
          if (*(int *)(*param_3 + lVar6 * 4) == ((int *)*param_4)[iVar3 + -1]) goto LAB_148f5de43;
          lVar6 = lVar6 + 1;
          lVar17 = lVar17 + -4;
        } while (lVar17 != 0);
        lVar6 = 0xffffffff;
LAB_148f5de43:
        iVar2 = (int)lVar6;
        lVar11 = lVar11 << 2;
        lVar17 = 0;
        do {
          if (*(int *)(*param_3 + lVar17 * 4) == *(int *)*param_4) {
            iVar7 = (int)lVar17;
            break;
          }
          lVar17 = lVar17 + 1;
          lVar11 = lVar11 + -4;
        } while (lVar11 != 0);
      }
      bVar18 = SBORROW4(iVar2,iVar7);
      iVar2 = iVar2 - iVar7;
LAB_148f5dc83:
      *local_198 = bVar18 != iVar2 < 0;
      iVar3 = (int)param_4[1];
      if (iVar3 == 0) goto LAB_148f5dbdb;
    }
    else if (iVar3 < iVar7) {
      lVar11 = (longlong)(int)param_3[1];
      iVar3 = -1;
      if (lVar11 == 0) {
        iVar2 = -1;
      }
      else {
        lVar17 = lVar11 * 4;
        lVar6 = 0;
        do {
          if (*(int *)(*param_3 + lVar6 * 4) == *(int *)*plVar9) goto LAB_148f5decb;
          lVar6 = lVar6 + 1;
          lVar17 = lVar17 + -4;
        } while (lVar17 != 0);
        lVar6 = 0xffffffff;
LAB_148f5decb:
        iVar2 = (int)lVar6;
        lVar11 = lVar11 << 2;
        lVar17 = 0;
        do {
          if (*(int *)(*param_3 + lVar17 * 4) == ((int *)*plVar9)[iVar7 + -1]) {
            iVar3 = (int)lVar17;
            break;
          }
          lVar17 = lVar17 + 1;
          lVar11 = lVar11 + -4;
        } while (lVar11 != 0);
      }
      bVar18 = SBORROW4(iVar2,iVar3);
      iVar2 = iVar2 - iVar3;
      goto LAB_148f5dc83;
    }
    if ((int)uStack_b0 == local_84) {
      puVar16 = (uint *)0x0;
      uVar12 = _DAT_00000004;
      if (_DAT_00000004 == _DAT_00000008) goto LAB_148f5dbde;
    }
    else {
      uVar14 = *(uint *)*param_4;
      puVar5 = local_78;
      if (local_78 == (undefined1 *)0x0) {
        puVar5 = local_80;
      }
      uVar12 = local_70 - 1;
      uVar10 = *(uint *)(puVar5 + (ulonglong)(uVar12 & uVar14) * 4);
      puVar16 = (uint *)&DAT_00000004;
      if (uVar10 != 0xffffffff) {
        do {
          puVar16 = (uint *)(local_b8 + (longlong)(int)uVar10 * 0x14);
          if (*puVar16 == uVar14) goto LAB_148f5dde2;
          uVar10 = puVar16[3];
        } while (uVar10 != 0xffffffff);
        puVar16 = (uint *)0x0;
LAB_148f5dde2:
        puVar16 = puVar16 + 1;
      }
      uVar14 = ((uint *)*param_4)[iVar3 + -1];
      uVar10 = *(uint *)(puVar5 + (ulonglong)(uVar14 & uVar12) * 4);
      while (uVar10 != 0xffffffff) {
        puVar15 = (uint *)(local_b8 + (longlong)(int)uVar10 * 0x14);
        if (*puVar15 == uVar14) goto LAB_148f5de64;
        uVar10 = puVar15[3];
      }
      puVar15 = (uint *)0x0;
LAB_148f5de64:
      if (*puVar16 == puVar15[2]) goto LAB_148f5dbdb;
      uVar14 = *(uint *)*plVar9;
      uVar10 = *(uint *)(puVar5 + (ulonglong)(uVar14 & uVar12) * 4);
      while (uVar10 != 0xffffffff) {
        puVar15 = (uint *)(local_b8 + (longlong)(int)uVar10 * 0x14);
        if (*puVar15 == uVar14) goto LAB_148f5def3;
        uVar10 = puVar15[3];
      }
      puVar15 = (uint *)0x0;
LAB_148f5def3:
      uVar14 = ((uint *)*plVar9)[(int)plVar9[1] + -1];
      uVar10 = *(uint *)(puVar5 + (ulonglong)(uVar12 & uVar14) * 4);
      while (uVar12 = puVar15[1], uVar10 != 0xffffffff) {
        puVar16 = (uint *)(local_b8 + (longlong)(int)uVar10 * 0x14);
        if (*puVar16 == uVar14) goto LAB_148f5df2c;
        uVar10 = puVar16[3];
      }
      puVar16 = (uint *)0x0;
    }
LAB_148f5df2c:
    puVar16 = (uint *)CONCAT71((int7)((ulonglong)puVar16 >> 8),uVar12 != puVar16[2]);
  }
LAB_148f5dbde:
  local_110 = 0;
  if (local_118 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_158);
LAB_148f5dc10:
  local_c0 = 0;
  if (local_c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_148f75e58(&local_108);
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1482fe8dc(&local_b8);
LAB_148f5d743:
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return (ulonglong)puVar16 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_148f5db2a:
  puVar16 = (uint *)0x0;
  goto LAB_148f5dc10;
}



// FUNCTION 148f5df42 FUN_148f5df42 body=1724 status=ok
// SIG undefined FUN_148f5df42(void)

int FUN_148f5df42(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined1 auStack_2b8 [32];
  int local_298;
  int local_294;
  longlong local_290;
  longlong *local_288;
  longlong *local_280;
  undefined8 *local_278;
  undefined1 local_270 [64];
  undefined **local_230;
  undefined1 *local_228;
  undefined8 uStack_220;
  longlong local_218;
  undefined1 local_210 [64];
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  void *local_1a8;
  int local_1a0;
  undefined4 local_19c;
  longlong *local_198;
  undefined8 local_190;
  longlong *local_188;
  uint local_180;
  int iStack_17c;
  undefined4 local_178;
  undefined4 local_174;
  longlong local_170;
  undefined1 local_161;
  undefined8 local_160;
  longlong *local_158;
  uint local_150;
  int iStack_14c;
  undefined4 local_148;
  undefined4 local_144;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  plVar9 = param_3 + 2;
  local_160 = 0x100000000;
  local_150 = 0xffffffff;
  iStack_14c = 0;
  local_148 = 0;
  local_294 = 0;
  iVar6 = 0;
  local_170 = param_1;
  local_158 = plVar9;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_160);
    iVar6 = (int)param_3[5];
  }
  local_180 = local_150;
  iStack_17c = iStack_14c;
  local_178 = local_148;
  local_174 = local_144;
  local_190 = local_160;
  local_188 = local_158;
  local_198 = param_3;
  if ((iStack_14c != iVar6) || (local_158 != plVar9)) {
    local_278 = (undefined8 *)(param_2 + 0xc0);
    local_294 = 0;
    local_298 = iVar6;
    local_290 = param_2;
    local_288 = plVar9;
    local_280 = param_3;
    do {
      iVar6 = *(int *)(*local_198 + (longlong)iStack_17c * 0xc);
      lVar12 = (longlong)iVar6;
      if (((lVar12 < 0) || (*(int *)(param_2 + 0x98) <= iVar6)) ||
         (lVar7 = (longlong)*(int *)(*(longlong *)(param_2 + 0x90) + lVar12 * 4), lVar7 == -1)) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar7 * 0x38 + *(longlong *)(param_2 + 0x60);
      }
      puVar8 = (undefined8 *)(lVar7 + 8);
      if (lVar7 == 0) {
        puVar8 = local_278;
      }
      local_1a8 = (void *)0x0;
      local_1a0 = *(int *)(puVar8 + 1);
      lVar7 = (longlong)local_1a0;
      pvVar2 = (void *)*puVar8;
      if (lVar7 == 0) {
        local_19c = 0;
      }
      else {
        FUN_144a06ca8(&local_1a8,local_1a0,0);
        memcpy(local_1a8,pvVar2,lVar7 << 2);
        pvVar2 = local_1a8;
        lVar7 = (longlong)local_1a0;
        if (lVar7 != 0) {
          lVar10 = 0;
          do {
            FUN_146c2c9fe(param_4,*(undefined4 *)((longlong)pvVar2 + lVar10),1);
            lVar10 = lVar10 + 4;
          } while (lVar7 * 4 != lVar10);
        }
        param_3 = local_280;
        if (local_1a8 != (void *)0x0) {
          FUN_1400020a8(local_1a8);
        }
      }
      FUN_146c6a7a4(&local_160,param_1,puVar8,1);
      plVar9 = local_288;
      param_2 = local_290;
      iVar4 = local_298;
      if ((((char)local_148 == '\0') && (local_150 == 1)) && (1 < *(int *)(puVar8 + 1))) {
        local_1b8 = 0;
        uStack_1b0 = 0;
        plVar9 = *(longlong **)(param_1 + 0x208);
        if ((plVar9 != (longlong *)0x0) &&
           (iVar4 = (**(code **)(*plVar9 + 0xa0))(plVar9), 0 < iVar4)) {
          lVar7 = 0;
          do {
            uVar3 = uStack_1b0;
            lVar10 = (longlong)(int)uStack_1b0;
            uVar5 = (int)uStack_1b0 + 1;
            uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar5);
            if (uStack_1b0._4_4_ < uVar5) {
              FUN_148307d2a(&local_1b8,uVar3 & 0xffffffff);
            }
            lVar10 = lVar10 * 0x50;
            puVar1 = (undefined8 *)(local_1b8 + 0x20 + lVar10);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)(local_1b8 + 0x30 + lVar10);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)(local_1b8 + 0x40 + lVar10);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)(local_1b8 + 0x10 + lVar10);
            *puVar1 = 0;
            puVar1[1] = 0;
            *(undefined8 *)(local_1b8 + lVar10) = 0;
            ((undefined8 *)(local_1b8 + lVar10))[1] = 0;
            *(undefined4 *)(local_1b8 + 0x2c + lVar10) = 0x80;
            *(undefined4 *)(local_1b8 + 0x30 + lVar10) = 0xffffffff;
            if (lVar7 < (int)plVar9[5]) {
              uVar11 = *(undefined8 *)(plVar9[4] + lVar7 * 8);
            }
            else {
              uVar11 = 0;
            }
            FUN_146c6c2c0(&local_160,local_158,uVar11,
                          (longlong)((int)uStack_1b0 + -1) * 0x50 + local_1b8);
            lVar7 = lVar7 + 1;
            iVar4 = (**(code **)(*plVar9 + 0xa0))(plVar9);
          } while (lVar7 < iVar4);
        }
        local_1c8 = 0;
        uStack_1c0 = 0;
        FUN_146c36aac(param_1,puVar8,&local_1c8);
        param_2 = local_290;
        if (iVar6 < 0) {
          lVar12 = 0;
        }
        else if ((iVar6 < *(int *)(local_290 + 0x98)) &&
                (lVar12 = (longlong)*(int *)(*(longlong *)(local_290 + 0x90) + lVar12 * 4),
                lVar12 != -1)) {
          lVar12 = lVar12 * 0x38 + *(longlong *)(local_290 + 0x60);
        }
        else {
          lVar12 = 0;
        }
        puVar8 = (undefined8 *)(lVar12 + 8);
        if (lVar12 == 0) {
          puVar8 = local_278;
        }
        local_228 = &local_161;
        local_230 = (undefined **)&DAT_142971dd8;
        FUN_146bc6232(&local_170,puVar8,0,&local_230);
        FUN_146c5d67a(local_158);
        FUN_146c7f310(local_270,local_158);
        local_228 = (undefined1 *)0x0;
        uStack_220 = 0;
        local_230 = &PTR_FUN_14ae72d10;
        local_218 = param_1;
        FUN_146c7f310(local_210,local_270);
        local_1d0 = 0xffffffff00000000;
        FUN_146bc7c1a(local_270);
        local_1d0 = CONCAT44(local_1d0._4_4_,1);
        FUN_148314c5e(&local_230,iVar6);
        lVar12 = local_1c8;
        lVar7 = (longlong)(int)uStack_1c0;
        if (lVar7 != 0) {
          lVar10 = 0;
          do {
            uVar5 = *(uint *)(lVar12 + lVar10);
            if ((((int)uVar5 < 0) ||
                (*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24) <= (int)uVar5)) ||
               ((ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar5 >> 9) * 8) +
                                   (ulonglong)(uVar5 & 0x1ff) * 2) + 1U) < 3)) {
              FUN_146c0b0ee(param_1,uVar5,0);
            }
            lVar10 = lVar10 + 4;
          } while (lVar7 * 4 != lVar10);
        }
        plVar9 = *(longlong **)(param_1 + 0x208);
        if (plVar9 != (longlong *)0x0) {
          iVar6 = (**(code **)(*plVar9 + 0xa0))(plVar9);
          if (0 < iVar6) {
            lVar7 = 0;
            lVar12 = 0;
            do {
              if (lVar12 < (int)plVar9[5]) {
                uVar11 = *(undefined8 *)(plVar9[4] + lVar12 * 8);
              }
              else {
                uVar11 = 0;
              }
              FUN_146c6c4c0(&local_160,local_1b8 + lVar7,uVar11);
              lVar12 = lVar12 + 1;
              iVar6 = (**(code **)(*plVar9 + 0xa0))(plVar9);
              lVar7 = lVar7 + 0x50;
            } while (lVar12 < iVar6);
          }
          FUN_14832ecfe(&local_230,&local_1b8);
        }
        local_230 = &PTR_FUN_14ae72d10;
        FUN_146bc7c1a(local_210);
        local_230 = &PTR_LAB_14ae72d28;
        if (local_228 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        param_3 = local_280;
        plVar9 = local_288;
        iVar4 = local_298;
        if (local_1c8 != 0) {
          FUN_1400020a8();
        }
        FUN_148307c36(local_1b8,uStack_1b0 & 0xffffffff);
        if (local_1b8 != 0) {
          FUN_1400020a8();
        }
        local_294 = local_294 + 1;
      }
      FUN_146bc7b3e(&local_160);
      local_180 = local_180 & ~local_190._4_4_;
      FUN_1449c0562(&local_190);
    } while (local_198 != param_3 || (local_188 != plVar9 || iStack_17c != iVar4));
  }
  *(undefined4 *)(param_3 + 9) = 0;
  if (param_3[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_3);
  if ((local_60 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_294;
}



// FUNCTION 148f5e5ff FUN_148f5e5ff body=178 status=ok
// SIG undefined FUN_148f5e5ff(void)

ulonglong FUN_148f5e5ff(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x1d8) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar1 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8) + 8 +
               (ulonglong)((param_2 & 0x1ff) << 4));
      uVar2 = uVar1 >> 0x20;
      if (*(int *)(param_1 + 0x170) < 3) {
        uVar3 = 0;
        if ((*(int *)(param_1 + 0x170) != 2) || (uVar2 = uVar1, (int)(uVar1 >> 0x20) != -1))
        goto LAB_148f5e688;
      }
      else {
        uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
        FUN_146c0b65a(param_1,uVar1,1,0);
        if (uVar2 == 0xffffffff) goto LAB_148f5e688;
      }
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
      FUN_146c0b65a(param_1,uVar2,1,0);
      goto LAB_148f5e688;
    }
  }
  uVar3 = 0;
LAB_148f5e688:
  return uVar3 & 0xffffffff;
}



// FUNCTION 148f5e6bb FUN_148f5e6bb body=148 status=ok
// SIG undefined FUN_148f5e6bb(void)

undefined8 FUN_148f5e6bb(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b9b244();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f5e750 FUN_148f5e750 body=37 status=ok
// SIG undefined FUN_148f5e750(void)

void FUN_148f5e750(longlong param_1,longlong param_2)

{
  FUN_1484cb36e();
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *(undefined1 *)(param_2 + 0x138) = 1;
  }
  return;
}



// FUNCTION 148f5e776 FUN_148f5e776 body=337 status=ok
// SIG undefined FUN_148f5e776(void)

byte FUN_148f5e776(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  byte *local_38;
  byte local_25;
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_1484cb2dc();
  if (cVar1 != '\0') {
    uVar4 = FUN_148451390(*(undefined8 *)(param_2 + 8));
    plVar5 = (longlong *)FUN_14855043a(uVar4);
    if (plVar5 != (longlong *)0x0) {
      local_1c = 1;
      local_20 = 4;
      local_38 = &local_25;
      local_25 = 0;
      (**(code **)(*plVar5 + 0x378))(plVar5,&local_1c,&local_20,local_24);
      iVar3 = (**(code **)(*plVar5 + 0x2d8))(plVar5);
      if (iVar3 == 0) {
        local_1c = 2;
      }
      iVar3 = *(int *)(param_1 + 0x30);
      bVar2 = 0;
      if (iVar3 < 9) {
        if (4 < iVar3 - 3U) goto LAB_148f5e79c;
      }
      else {
        if (0x1b < iVar3) {
          if (iVar3 == 0x1c) {
            iVar3 = local_20;
            bVar2 = local_25 ^ 1;
          }
          else {
            if (iVar3 == 0x20) goto LAB_148f5e83a;
            if (iVar3 != 0x26) goto LAB_148f5e79c;
            iVar3 = local_1c;
            bVar2 = local_25 ^ 1;
            if (local_20 == 1) {
              bVar2 = 0;
            }
          }
          if (iVar3 != 2) {
            bVar2 = 0;
          }
          goto LAB_148f5e79c;
        }
        if (iVar3 - 9U < 2) {
LAB_148f5e83a:
          bVar2 = local_1c == 2;
          goto LAB_148f5e79c;
        }
        if (iVar3 != 0xf) goto LAB_148f5e79c;
      }
      bVar2 = local_25 ^ 1;
      if (local_20 != 4 || local_1c != 2) {
        bVar2 = 0;
      }
      goto LAB_148f5e79c;
    }
  }
  bVar2 = 0;
LAB_148f5e79c:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2 & 1;
}



// FUNCTION 148f5e8c8 FUN_148f5e8c8 body=429 status=ok
// SIG undefined FUN_148f5e8c8(void)

void FUN_148f5e8c8(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1484cb36e();
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *(undefined1 *)(param_2 + 0x138) = 1;
  }
  uVar7 = FUN_148451390(*(undefined8 *)(param_3 + 8));
  plVar8 = (longlong *)FUN_14855043a(uVar7);
  if (plVar8 != (longlong *)0x0) {
    iVar6 = (**(code **)(*plVar8 + 0x2d8))(plVar8);
    if ((param_2 != 0) && (iVar6 == 1)) {
      lVar9 = FUN_145b9b244();
      if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
        *(undefined1 *)(param_2 + 0x138) = 1;
      }
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  local_a8 = *(longlong *)(param_2 + 0x8c0);
  uStack_60 = *(undefined8 *)(param_2 + 0x8c8);
  local_98 = *(longlong **)(param_2 + 0x8d0);
  uStack_50 = *(undefined8 *)(param_2 + 0x8d8);
  local_48 = *(longlong *)(param_2 + 0x8e0);
  uStack_40 = *(undefined8 *)(param_2 + 0x8e8);
  local_38 = *(undefined8 *)(param_2 + 0x8f0);
  uStack_30 = *(undefined8 *)(param_2 + 0x8f8);
  uVar4 = local_38;
  uVar5 = uStack_30;
  uVar3 = uStack_40;
  local_58 = local_98;
  uVar2 = uStack_50;
  local_68 = local_a8;
  uVar7 = uStack_60;
  *(ulonglong *)(param_2 + 0x8f0) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(param_2 + 0x8f8) = CONCAT44(uStack_6c,uStack_70);
  *(undefined ***)(param_2 + 0x8e0) = &PTR_LAB_14ba26ad0;
  *(undefined4 *)(param_2 + 0x8e8) = uVar1;
  *(undefined4 *)(param_2 + 0x8ec) = uStack_7c;
  *(undefined8 *)(param_2 + 0x8d0) = 0;
  *(ulonglong *)(param_2 + 0x8d8) = CONCAT44(uStack_8c,uStack_90);
  *(code **)(param_2 + 0x8c0) = FUN_14436d3c2;
  *(ulonglong *)(param_2 + 0x8c8) = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_60 = uVar7;
  uStack_50 = uVar2;
  uStack_40 = uVar3;
  local_38 = uVar4;
  uStack_30 = uVar5;
  if (local_a8 != 0) {
    plVar8 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar8 = &local_88;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f5ea76 FUN_148f5ea76 body=193 status=ok
// SIG undefined FUN_148f5ea76(void)

bool FUN_148f5ea76(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined1 local_2d;
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_1484cb2dc();
  if (cVar1 != '\0') {
    uVar3 = FUN_148451390(*(undefined8 *)(param_2 + 8));
    plVar4 = (longlong *)FUN_14855043a(uVar3);
    if (plVar4 != (longlong *)0x0) {
      iVar2 = (**(code **)(*plVar4 + 0x2d8))(plVar4);
      if (iVar2 == 0) {
        bVar5 = true;
        goto LAB_148f5ea9a;
      }
      local_24 = 1;
      local_28 = 4;
      local_38 = &local_2d;
      local_2d = 0;
      (**(code **)(*plVar4 + 0x378))(plVar4,&local_24,&local_28,local_2c);
      bVar5 = local_28 != 1;
      if (local_24 == 2) goto LAB_148f5ea9a;
    }
  }
  bVar5 = false;
LAB_148f5ea9a:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar5;
}



// FUNCTION 148f5eb38 FUN_148f5eb38 body=489 status=ok
// SIG undefined FUN_148f5eb38(void)

void FUN_148f5eb38(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined1 local_b5;
  undefined1 local_b4 [4];
  int local_b0;
  int local_ac;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1484cb36e();
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *(undefined1 *)(param_2 + 0x138) = 1;
  }
  uVar5 = FUN_148451390(*(undefined8 *)(param_3 + 8));
  plVar6 = (longlong *)FUN_14855043a(uVar5);
  if (plVar6 != (longlong *)0x0) {
    iVar4 = (**(code **)(*plVar6 + 0x2d8))(plVar6);
    if (iVar4 != 0) {
      local_ac = 1;
      local_b0 = 4;
      local_c8 = &local_b5;
      local_b5 = 0;
      (**(code **)(*plVar6 + 0x378))(plVar6,&local_ac,&local_b0,local_b4);
      if (local_ac == 2) {
        puVar7 = &DAT_100000001;
        if (local_b0 != 2) {
          puVar7 = (undefined1 *)(ulonglong)((uint)(local_b0 == 1) * 2);
        }
        local_a8 = *(longlong *)(param_2 + 0x8c0);
        uStack_60 = *(undefined8 *)(param_2 + 0x8c8);
        local_98 = *(longlong **)(param_2 + 0x8d0);
        uStack_50 = *(undefined8 *)(param_2 + 0x8d8);
        local_48 = *(longlong *)(param_2 + 0x8e0);
        uStack_40 = *(undefined8 *)(param_2 + 0x8e8);
        local_38 = *(undefined8 *)(param_2 + 0x8f0);
        uStack_30 = *(undefined8 *)(param_2 + 0x8f8);
        uVar2 = local_38;
        uVar3 = uStack_30;
        local_58 = local_98;
        uVar1 = uStack_50;
        local_68 = local_a8;
        uVar5 = uStack_60;
        *(ulonglong *)(param_2 + 0x8f0) = CONCAT44(uStack_74,local_78);
        *(ulonglong *)(param_2 + 0x8f8) = CONCAT44(uStack_6c,uStack_70);
        *(undefined ***)(param_2 + 0x8e0) = &PTR_LAB_14ba26af0;
        *(undefined1 **)(param_2 + 0x8e8) = puVar7;
        *(undefined8 *)(param_2 + 0x8d0) = 0;
        *(ulonglong *)(param_2 + 0x8d8) = CONCAT44(uStack_8c,uStack_90);
        *(code **)(param_2 + 0x8c0) = FUN_14436d422;
        *(ulonglong *)(param_2 + 0x8c8) = CONCAT44(uStack_9c,uStack_a0);
        uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
        uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
        local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
        uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
        local_78 = (undefined4)local_38;
        uStack_74 = local_38._4_4_;
        uStack_70 = (undefined4)uStack_30;
        uStack_6c = uStack_30._4_4_;
        local_88 = local_48;
        uStack_80 = uStack_40;
        uStack_90 = (undefined4)uStack_50;
        uStack_8c = uStack_50._4_4_;
        uStack_a0 = (undefined4)uStack_60;
        uStack_9c = uStack_60._4_4_;
        uStack_60 = uVar5;
        uStack_50 = uVar1;
        local_38 = uVar2;
        uStack_30 = uVar3;
        if (local_a8 != 0) {
          plVar6 = local_98;
          if (local_98 == (longlong *)0x0) {
            plVar6 = &local_88;
          }
          (**(code **)(*plVar6 + 0x10))();
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f5ed22 FUN_148f5ed22 body=105 status=ok
// SIG undefined FUN_148f5ed22(void)

void FUN_148f5ed22(longlong *param_1)

{
  if (param_1[0x2a] != 0) {
    (**(code **)(*param_1 + 0x328))(param_1,param_1[0x2a],0);
  }
  if (param_1[0x2c] != 0) {
    (**(code **)(*param_1 + 0x328))(param_1,param_1[0x2c],0);
  }
  if (param_1[0x2e] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000148f5ed81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x328))(param_1,param_1[0x2e],0);
    return;
  }
  return;
}



// FUNCTION 148f5ed8c FUN_148f5ed8c body=10735 status=ok
// SIG undefined FUN_148f5ed8c(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148f5ed8c(undefined8 ******param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 ****ppppuVar3;
  undefined8 ******ppppppuVar4;
  byte bVar5;
  int iVar6;
  undefined8 **ppuVar7;
  undefined8 *****pppppuVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  void *_Src;
  undefined ********ppppppppuVar14;
  char cVar15;
  char cVar16;
  undefined1 uVar17;
  undefined8 *****pppppuVar18;
  longlong *plVar19;
  undefined8 *****pppppuVar20;
  undefined8 uVar21;
  undefined8 ****ppppuVar22;
  undefined *****pppppuVar23;
  undefined8 uVar24;
  wchar_t *pwVar25;
  longlong lVar26;
  undefined8 *******pppppppuVar27;
  undefined8 ******ppppppuVar28;
  int iVar29;
  undefined4 *puVar30;
  undefined8 **ppuVar31;
  longlong lVar32;
  longlong *plVar33;
  undefined8 *puVar34;
  ulonglong uVar35;
  float fVar36;
  undefined1 auStack_5f8 [32];
  undefined8 *****local_5d8;
  code **local_5d0;
  undefined8 ******local_5c8;
  undefined8 ******local_5c0;
  undefined8 local_5b8 [8];
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined8 local_568;
  undefined8 uStack_560;
  void *local_550;
  int local_548;
  undefined4 local_544;
  void *local_540;
  longlong *local_538;
  undefined1 local_530 [4];
  undefined1 local_52c [4];
  longlong *local_528 [2];
  void *local_518;
  longlong *local_510;
  longlong *local_508 [2];
  void *local_4f8;
  longlong *local_4f0;
  code *local_4e8 [2];
  undefined8 local_4d8;
  undefined **local_4c8;
  undefined8 ******local_4c0;
  undefined8 *******local_4a0;
  undefined ******local_498;
  undefined8 uStack_490;
  undefined8 local_478;
  undefined4 local_470;
  undefined8 local_46c;
  undefined4 local_464;
  longlong local_458;
  undefined4 local_450;
  undefined8 local_448;
  undefined8 *****pppppuStack_440;
  undefined8 *****pppppuStack_438;
  undefined8 *****pppppuStack_430;
  undefined8 ****local_428;
  undefined8 ****ppppuStack_420;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  longlong local_400;
  undefined4 local_3f8;
  code *local_3e8 [2];
  undefined8 local_3d8;
  undefined **local_3c8;
  undefined8 ******local_3c0;
  code *local_3a8;
  undefined8 local_398;
  undefined **local_388;
  undefined8 ******local_380;
  code *local_368;
  undefined8 local_358;
  undefined **local_348;
  undefined8 ******local_340;
  undefined1 *local_328;
  undefined8 local_318;
  undefined **local_308;
  undefined8 ******local_300;
  undefined1 *local_2e8;
  undefined8 local_2d8;
  undefined **local_2c8;
  undefined8 ******local_2c0;
  code *local_2a8;
  undefined8 local_298;
  undefined **local_288;
  undefined8 ******local_280;
  undefined8 ******local_278;
  undefined ********local_268;
  undefined8 *****pppppuStack_260;
  undefined8 *****local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 *****local_238;
  undefined8 uStack_230;
  undefined8 *****local_228;
  undefined8 *****pppppuStack_220;
  undefined8 *****local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 *****local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 local_100;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_5f8;
  iVar6 = *DAT_14cbf3b28;
  pppppuStack_440 = (undefined8 *****)((ulonglong)pppppuStack_440 & 0xffffffff00000000);
  local_448 = (undefined8 ******)0x3e800000000;
  FUN_148506727(&local_268,param_1[0x14]);
  pppppuVar18 = (undefined8 *****)FUN_14001cc68(0x230,0x10);
  pppppuVar18[1] = (undefined8 ****)&DAT_100000001;
  *pppppuVar18 = (undefined8 ****)&PTR_FUN_149fab260;
  FUN_146bffece(pppppuVar18 + 2,&local_268);
  if (pppppuVar18 == (undefined8 *****)0x0) {
    param_1[0x4d] = (undefined8 *****)0x10;
    pppppuVar20 = param_1[0x4e];
    if (pppppuVar20 != (undefined8 *****)0x0) {
      param_1[0x4e] = (undefined8 *****)0x0;
LAB_148f5ee64:
      LOCK();
      pppppuVar8 = pppppuVar20 + 1;
      *(int *)pppppuVar8 = *(int *)pppppuVar8 + -1;
      UNLOCK();
      if (*(int *)pppppuVar8 == 0) {
        (*(code *)**pppppuVar20)(pppppuVar20);
        LOCK();
        piVar1 = (int *)((longlong)pppppuVar20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*pppppuVar20)[2])(pppppuVar20);
        }
      }
      if (pppppuVar18 != (undefined8 *****)0x0) goto LAB_148f5ee86;
    }
  }
  else {
    LOCK();
    *(int *)(pppppuVar18 + 1) = *(int *)(pppppuVar18 + 1) + 1;
    UNLOCK();
    param_1[0x4d] = pppppuVar18 + 2;
    pppppuVar20 = param_1[0x4e];
    if (pppppuVar18 == pppppuVar20) {
      LOCK();
      pppppuVar20 = pppppuVar18 + 1;
      *(int *)pppppuVar20 = *(int *)pppppuVar20 + -1;
      UNLOCK();
      if (*(int *)pppppuVar20 == 0) {
        (*(code *)**pppppuVar18)(pppppuVar18);
        LOCK();
        piVar1 = (int *)((longlong)pppppuVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*pppppuVar18)[2])(pppppuVar18);
        }
      }
    }
    else {
      param_1[0x4e] = pppppuVar18;
      if (pppppuVar20 != (undefined8 *****)0x0) goto LAB_148f5ee64;
    }
LAB_148f5ee86:
    LOCK();
    pppppuVar20 = pppppuVar18 + 1;
    *(int *)pppppuVar20 = *(int *)pppppuVar20 + -1;
    UNLOCK();
    if (*(int *)pppppuVar20 == 0) {
      (*(code *)**pppppuVar18)(pppppuVar18);
      LOCK();
      piVar1 = (int *)((longlong)pppppuVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*pppppuVar18)[2])(pppppuVar18);
      }
    }
  }
  FUN_141082778(&local_268);
  FUN_1485063a5(&local_268,param_1[0x14]);
  param_1[0x7b] = local_268;
  param_1[0x7c] = pppppuStack_260;
  param_1[0x7d] = local_258;
  param_1[0x7e] = uStack_250;
  *(undefined4 *)(param_1 + 0x7f) = (undefined4)local_248;
  *(uint *)((longlong)param_1 + 0x3fc) = local_248._4_4_;
  *(undefined4 *)(param_1 + 0x80) = (undefined4)uStack_240;
  *(undefined4 *)((longlong)param_1 + 0x404) = uStack_240._4_4_;
  param_1[0x81] = local_238;
  param_1[0x82] = local_228;
  param_1[0x83] = pppppuStack_220;
  param_1[0x84] = local_218;
  param_1[0x71] = (undefined8 *****)0x0;
  param_1[0x72] = (undefined8 *****)0x0;
  param_1[0x73] = (undefined8 *****)0x0;
  param_1[0x74] = (undefined8 *****)0x3ff0000000000000;
  pppppuVar18 = DAT_14c8464e8;
  param_1[0x75] = DAT_14c8464e0;
  param_1[0x76] = pppppuVar18;
  param_1[0x77] = DAT_14c8464f0;
  param_1[0x78] = param_1[0x82];
  param_1[0x79] = param_1[0x83];
  param_1[0x7a] = param_1[0x84];
  uVar13 = DAT_14c846518._4_4_;
  uVar12 = (undefined4)DAT_14c846518;
  uVar11 = DAT_14c846510._4_4_;
  *(undefined4 *)(param_1 + 0x82) = (undefined4)DAT_14c846510;
  *(undefined4 *)((longlong)param_1 + 0x414) = uVar11;
  *(undefined4 *)(param_1 + 0x83) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x41c) = uVar13;
  param_1[0x84] = DAT_14c846520;
  FUN_146c3cd49(param_1[0x4d],param_1 + 0x71,1);
  pppppuVar18 = param_1[0x4d];
  if (*(char *)(param_1 + 0x27) == '\x01') {
    iVar29 = *(int *)(pppppuVar18 + 0x40);
    *(bool *)((longlong)param_1 + 0x139) = iVar6 < iVar29;
    if (iVar29 <= iVar6) {
      pppppuVar20 = (undefined8 *****)FUN_14001cc68(0x180,0x10);
      pppppuVar20[1] = (undefined8 ****)&DAT_100000001;
      *pppppuVar20 = (undefined8 ****)&PTR_FUN_14ba26b10;
      FUN_1482aef0e(pppppuVar20 + 2,pppppuVar18,0);
      if (pppppuVar20 == (undefined8 *****)0x0) {
        param_1[0x4f] = (undefined8 *****)0x10;
        pppppuVar18 = param_1[0x50];
        if (pppppuVar18 != (undefined8 *****)0x0) {
          param_1[0x50] = (undefined8 *****)0x0;
LAB_148f5f313:
          LOCK();
          pppppuVar8 = pppppuVar18 + 1;
          *(int *)pppppuVar8 = *(int *)pppppuVar8 + -1;
          UNLOCK();
          if (*(int *)pppppuVar8 == 0) {
            (*(code *)**pppppuVar18)(pppppuVar18);
            LOCK();
            piVar1 = (int *)((longlong)pppppuVar18 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppppuVar18)[2])(pppppuVar18);
            }
          }
          if (pppppuVar20 != (undefined8 *****)0x0) goto LAB_148f5f7cc;
        }
      }
      else {
        LOCK();
        *(int *)(pppppuVar20 + 1) = *(int *)(pppppuVar20 + 1) + 1;
        UNLOCK();
        param_1[0x4f] = pppppuVar20 + 2;
        pppppuVar18 = param_1[0x50];
        if (pppppuVar20 == pppppuVar18) {
          LOCK();
          pppppuVar18 = pppppuVar20 + 1;
          *(int *)pppppuVar18 = *(int *)pppppuVar18 + -1;
          UNLOCK();
          if (*(int *)pppppuVar18 == 0) {
            (*(code *)**pppppuVar20)(pppppuVar20);
            LOCK();
            piVar1 = (int *)((longlong)pppppuVar20 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppppuVar20)[2])(pppppuVar20);
            }
          }
        }
        else {
          param_1[0x50] = pppppuVar20;
          if (pppppuVar18 != (undefined8 *****)0x0) goto LAB_148f5f313;
        }
LAB_148f5f7cc:
        LOCK();
        pppppuVar18 = pppppuVar20 + 1;
        *(int *)pppppuVar18 = *(int *)pppppuVar18 + -1;
        UNLOCK();
        if (*(int *)pppppuVar18 == 0) {
          (*(code *)**pppppuVar20)(pppppuVar20);
          LOCK();
          piVar1 = (int *)((longlong)pppppuVar20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            ppppuVar22 = *pppppuVar20;
            goto LAB_148f5f4ee;
          }
        }
      }
      goto LAB_148f5f4f1;
    }
    plVar19 = (longlong *)(*(code *)(*param_1)[0x59])(param_1);
    iVar29 = *(int *)(param_1[0x4d] + 0x40);
    local_268 = (undefined ********)0x14ba1e62a;
    pppppuStack_260._0_4_ = 0x13;
    FUN_1446e940c(local_52c,&local_268);
    local_268 = (undefined ********)0x14ba1c808;
    pppppuStack_260 = (undefined8 *****)CONCAT44(pppppuStack_260._4_4_,0x15);
    FUN_1446e940c(local_530,&local_268);
    FUN_140208bae(local_528,local_530,local_52c,
                  L"This tool is currently disallowed from operating on a mesh of this resolution. Current limit set by \"modeling.PolyEdit.EdgeLimit\" is {0} edges, and mesh has {1}. Limit can be changed but exists to avoid hanging the editor when trying to render too many edges using the current system, so make sure to save your work if you change the upper limit and try to edit a very dense mesh."
                 );
    FUN_14023409e(&local_518,local_528,1);
    local_268 = (undefined ********)((ulonglong)local_268 & 0xffffffff00000000);
    local_258 = (undefined8 *****)0x0;
    uStack_250 = (undefined8 *****)((ulonglong)uStack_250._4_4_ << 0x20);
    local_248 = (undefined **)((ulonglong)local_248._4_4_ << 0x20);
    local_238 = (undefined8 *****)0x0;
    uStack_230 = (undefined8 ****)((ulonglong)uStack_230._4_4_ << 0x20);
    local_498 = (undefined ******)&local_228;
    local_4a0 = &local_268;
    pppppuStack_260 = (undefined8 *****)(longlong)iVar6;
    uStack_240 = (undefined8 *****)(longlong)iVar29;
    FUN_14010d304(&local_448);
    local_4f8 = local_518;
    local_4f0 = local_510;
    if (local_510 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_510 + 1) = (int)local_510[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_508,&local_4f8,&local_448);
    FUN_14007f2db(local_448,(ulonglong)pppppuStack_440 & 0xffffffff);
    if (local_448 != (undefined8 ******)0x0) {
      FUN_1400020a8();
    }
    lVar32 = 0x30;
    do {
      if (*(longlong **)((longlong)&local_268 + lVar32) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_268 + lVar32) + 0x10))();
        *(undefined8 *)((longlong)&local_268 + lVar32) = 0;
        *(undefined4 *)((longlong)&pppppuStack_260 + lVar32) = 0;
      }
      lVar32 = lVar32 + -0x20;
      plVar33 = local_510;
    } while (lVar32 != -0x10);
LAB_148f5f148:
    if (plVar33 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar33 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar33)(plVar33);
        LOCK();
        piVar1 = (int *)((longlong)plVar33 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar33 + 0x10))(plVar33);
        }
      }
    }
    (**(code **)(*plVar19 + 0x340))(plVar19,local_508,4);
    if (local_508[0] != (longlong *)0x0) {
      (**(code **)(*local_508[0] + 0x10))();
    }
    if (local_528[0] != (longlong *)0x0) {
      (**(code **)(*local_528[0] + 0x10))();
    }
    goto LAB_148f5f1a8;
  }
  pppppuVar20 = (undefined8 *****)FUN_14001cc68(0x180,0x10);
  pppppuVar20[1] = (undefined8 ****)&DAT_100000001;
  *pppppuVar20 = (undefined8 ****)&PTR_FUN_14aee5500;
  FUN_1482aa55c(pppppuVar20 + 2,pppppuVar18,0);
  if (pppppuVar20 == (undefined8 *****)0x0) {
    param_1[0x4f] = (undefined8 *****)0x10;
    pppppuVar18 = param_1[0x50];
    if (pppppuVar18 != (undefined8 *****)0x0) {
      param_1[0x50] = (undefined8 *****)0x0;
LAB_148f5f28b:
      LOCK();
      pppppuVar8 = pppppuVar18 + 1;
      *(int *)pppppuVar8 = *(int *)pppppuVar8 + -1;
      UNLOCK();
      if (*(int *)pppppuVar8 == 0) {
        (*(code *)**pppppuVar18)(pppppuVar18);
        LOCK();
        piVar1 = (int *)((longlong)pppppuVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*pppppuVar18)[2])(pppppuVar18);
        }
      }
      if (pppppuVar20 != (undefined8 *****)0x0) goto LAB_148f5f3c9;
    }
  }
  else {
    LOCK();
    *(int *)(pppppuVar20 + 1) = *(int *)(pppppuVar20 + 1) + 1;
    UNLOCK();
    param_1[0x4f] = pppppuVar20 + 2;
    pppppuVar18 = param_1[0x50];
    if (pppppuVar20 == pppppuVar18) {
      LOCK();
      pppppuVar18 = pppppuVar20 + 1;
      *(int *)pppppuVar18 = *(int *)pppppuVar18 + -1;
      UNLOCK();
      if (*(int *)pppppuVar18 == 0) {
        (*(code *)**pppppuVar20)(pppppuVar20);
        LOCK();
        piVar1 = (int *)((longlong)pppppuVar20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*pppppuVar20)[2])(pppppuVar20);
        }
      }
    }
    else {
      param_1[0x50] = pppppuVar20;
      if (pppppuVar18 != (undefined8 *****)0x0) goto LAB_148f5f28b;
    }
LAB_148f5f3c9:
    LOCK();
    pppppuVar18 = pppppuVar20 + 1;
    *(int *)pppppuVar18 = *(int *)pppppuVar18 + -1;
    UNLOCK();
    if (*(int *)pppppuVar18 == 0) {
      (*(code *)**pppppuVar20)(pppppuVar20);
      LOCK();
      piVar1 = (int *)((longlong)pppppuVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*pppppuVar20)[2])(pppppuVar20);
      }
    }
  }
  pppppuVar18 = param_1[0x4f];
  local_448 = (undefined8 ******)pppppuVar18[2];
  pppppuStack_260 = (undefined8 *****)pppppuVar18[3];
  local_258 = (undefined8 *****)pppppuVar18[4];
  uStack_250 = (undefined8 *****)pppppuVar18[5];
  local_248 = (undefined **)pppppuVar18[6];
  uStack_240 = (undefined8 *****)pppppuVar18[7];
  local_238 = (undefined8 *****)pppppuVar18[8];
  uStack_230 = pppppuVar18[9];
  local_268 = (undefined ********)local_448;
  pppppuVar18[8] = (undefined8 ****)CONCAT44(uStack_414,local_418);
  pppppuVar18[9] = (undefined8 ****)CONCAT44(uStack_40c,uStack_410);
  pppppuVar18[6] = (undefined8 ****)&PTR_LAB_14ba26b30;
  pppppuVar18[7] = param_1;
  pppppuVar18[4] = (undefined8 ****)0x0;
  pppppuVar18[5] = pppppuStack_430;
  pppppuVar18[2] = (undefined8 ****)&LAB_14436d522;
  pppppuVar18[3] = pppppuStack_440;
  local_418 = SUB84(local_238,0);
  uStack_414 = (undefined4)((ulonglong)local_238 >> 0x20);
  uStack_410 = SUB84(uStack_230,0);
  uStack_40c = (undefined4)((ulonglong)uStack_230 >> 0x20);
  local_428 = (undefined8 ****)local_248;
  ppppuStack_420 = uStack_240;
  pppppuStack_438 = local_258;
  pppppuStack_430 = uStack_250;
  pppppuStack_440 = pppppuStack_260;
  if (local_448 != (undefined8 ******)0x0) {
    pppppuVar20 = local_258;
    if (local_258 == (undefined8 *****)0x0) {
      pppppuVar20 = &local_428;
    }
    ppppuVar22 = *pppppuVar20;
LAB_148f5f4ee:
    (*(code *)ppppuVar22[2])(pppppuVar20);
  }
LAB_148f5f4f1:
  pppppuVar18 = (undefined8 *****)FUN_148f6177c(param_1);
  if ((pppppuVar18 != (undefined8 *****)0x0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(pppppuVar18);
  }
  param_1[0x2f] = pppppuVar18;
  FUN_14485c47a(pppppuVar18 + 0x15,param_1);
  pppppuVar18 = param_1[0x2f];
  pwVar25 = L"PolyEditTool";
  if (*(char *)(param_1 + 0x27) != '\0') {
    pwVar25 = L"TriEditTool";
  }
  FUN_140056680(&local_268,pwVar25);
  (*(code *)(*pppppuVar18)[0x55])(pppppuVar18,param_1,&local_268);
  if (local_268 != (undefined ********)0x0) {
    FUN_1400020a8();
  }
  pppppuVar18 = (undefined8 *****)cos((double)param_1[0x2f][0x17] * 0.017453292519943295);
  param_1[0x9d] = pppppuVar18;
  local_298 = 0;
  local_288 = &PTR_LAB_14ba26b50;
  local_2a8 = FUN_14436d59c;
  local_280 = param_1;
  local_278 = param_1;
  FUN_14588c620(param_1[0x2f] + 5);
  (*(code *)(*param_1[0x4f])[1])();
  if (*(char *)(param_1 + 0x27) == '\0') {
    lVar32 = (longlong)*(int *)(param_1[0x4f] + 0xf);
    if (lVar32 == 0) {
      iVar29 = 0;
    }
    else {
      lVar26 = 0;
      iVar29 = 0;
      do {
        iVar29 = iVar29 + *(int *)((longlong)param_1[0x4f][0xe] + lVar26 + 0x28);
        lVar26 = lVar26 + 0x50;
      } while (lVar32 * 0x50 != lVar26);
    }
    *(bool *)((longlong)param_1 + 0x139) = iVar6 < iVar29;
    if (iVar6 < iVar29) {
      plVar19 = (longlong *)(*(code *)(*param_1)[0x59])(param_1);
      local_268 = (undefined ********)0x14ba1e9ca;
      pppppuStack_260._0_4_ = 0x14;
      FUN_1446e940c(local_52c,&local_268);
      local_268 = (undefined ********)0x14ba1c808;
      pppppuStack_260 = (undefined8 *****)CONCAT44(pppppuStack_260._4_4_,0x15);
      FUN_1446e940c(local_530,&local_268);
      FUN_140208bae(local_528,local_530,local_52c,
                    L"This tool is currently disallowed from operating on a group topology of this resolution. Current limit set by \"modeling.PolyEdit.EdgeLimit\" is {0} displayed edges, and topology has {1} edge segments to display. Limit can be changed, but it exists to avoid hanging the editor when trying to render too many edges using the current system, so make sure to save your work if you change the upper limit and try to edit a very complicated topology."
                   );
      FUN_14023409e(&local_540,local_528,1);
      local_268 = (undefined ********)((ulonglong)local_268 & 0xffffffff00000000);
      local_258 = (undefined8 *****)0x0;
      uStack_250 = (undefined8 *****)((ulonglong)uStack_250 & 0xffffffff00000000);
      local_248 = (undefined **)((ulonglong)local_248 & 0xffffffff00000000);
      local_238 = (undefined8 *****)0x0;
      uStack_230 = (undefined8 ****)((ulonglong)uStack_230 & 0xffffffff00000000);
      uStack_240 = (undefined8 *****)(longlong)iVar29;
      local_498 = (undefined ******)&local_228;
      local_4a0 = &local_268;
      pppppuStack_260 = (undefined8 *****)(longlong)iVar6;
      FUN_14010d304(&local_448);
      local_4f8 = local_540;
      local_4f0 = local_538;
      if (local_538 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_538 + 1) = (int)local_538[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_508,&local_4f8,&local_448);
      FUN_14007f2db(local_448,(ulonglong)pppppuStack_440 & 0xffffffff);
      if (local_448 != (undefined8 ******)0x0) {
        FUN_1400020a8();
      }
      lVar32 = 0x30;
      do {
        if (*(longlong **)((longlong)&local_268 + lVar32) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)&local_268 + lVar32) + 0x10))();
          *(undefined8 *)((longlong)&local_268 + lVar32) = 0;
          *(undefined4 *)((longlong)&pppppuStack_260 + lVar32) = 0;
        }
        lVar32 = lVar32 + -0x20;
        plVar33 = local_538;
      } while (lVar32 != -0x10);
      goto LAB_148f5f148;
    }
    pppppuVar18 = (undefined8 *****)FUN_148f6193b(DAT_14c951640);
    if ((pppppuVar18 != (undefined8 *****)0x0) && (DAT_14c950c29 != 0)) {
      FUN_14689c22e(pppppuVar18);
    }
    param_1[0x2a] = pppppuVar18;
    FUN_14485c47a(pppppuVar18 + 0x15,param_1);
    (*(code *)(*param_1)[0x61])(param_1,param_1[0x2a]);
    pppppuVar18 = (undefined8 *****)FUN_148f619d0(DAT_14c951640);
    if ((pppppuVar18 != (undefined8 *****)0x0) && (DAT_14c950c29 != 0)) {
      FUN_14689c22e(pppppuVar18);
    }
    param_1[0x2c] = pppppuVar18;
    FUN_14485c47a(pppppuVar18 + 0x15,param_1);
    (*(code *)(*param_1)[0x61])(param_1,param_1[0x2c]);
    pppppuVar18 = (undefined8 *****)FUN_148f61a65(DAT_14c951640);
    if ((pppppuVar18 != (undefined8 *****)0x0) && (DAT_14c950c29 != 0)) {
      FUN_14689c22e(pppppuVar18);
    }
    param_1[0x2e] = pppppuVar18;
    FUN_14485c47a(pppppuVar18 + 0x15,param_1);
    (*(code *)(*param_1)[0x61])(param_1,param_1[0x2e]);
    pppppuVar20 = DAT_14cbf3ad8;
    pppppuVar18 = param_1[0x58];
    if (pppppuVar18 != DAT_14cbf3ad8) {
      param_1[0x58] = DAT_14cbf3ad8;
      if (pppppuVar20 != (undefined8 *****)0x0) {
        (*(code *)(*pppppuVar20)[1])();
      }
      puVar30 = &DAT_14cbf3ae0;
      goto LAB_148f5fa7f;
    }
    puVar30 = &DAT_14cbf3ae0;
  }
  else {
    pppppuVar18 = (undefined8 *****)FUN_148f61811(DAT_14c951640);
    if ((pppppuVar18 != (undefined8 *****)0x0) && (DAT_14c950c29 != 0)) {
      FUN_14689c22e(pppppuVar18);
    }
    param_1[0x2b] = pppppuVar18;
    FUN_14485c47a(pppppuVar18 + 0x15,param_1);
    (*(code *)(*param_1)[0x61])(param_1,param_1[0x2b]);
    pppppuVar18 = (undefined8 *****)FUN_148f618a6(DAT_14c951640);
    if ((pppppuVar18 != (undefined8 *****)0x0) && (DAT_14c950c29 != 0)) {
      FUN_14689c22e(pppppuVar18);
    }
    param_1[0x2d] = pppppuVar18;
    FUN_14485c47a(pppppuVar18 + 0x15,param_1);
    (*(code *)(*param_1)[0x61])(param_1,param_1[0x2d]);
    local_268 = (undefined ********)0x14ba1ea10;
    pppppuStack_260._0_4_ = 0x19;
    FUN_1446e940c(&local_448,&local_268);
    local_268 = (undefined ********)0x14ba1c808;
    pppppuStack_260 = (undefined8 *****)CONCAT44(pppppuStack_260._4_4_,0x15);
    FUN_1446e940c(&local_4a0,&local_268);
    FUN_140208bae(&local_268,&local_4a0,&local_448,L"Triangle Edit");
    (*(code *)(*param_1)[0x6e])(param_1,&local_268);
    if (local_268 != (undefined ********)0x0) {
      (*(code *)(*local_268)[2])();
    }
    pppppuVar20 = DAT_14cbf3ac8;
    pppppuVar18 = param_1[0x58];
    if (pppppuVar18 == DAT_14cbf3ac8) {
      puVar30 = &DAT_14cbf3ad0;
    }
    else {
      param_1[0x58] = DAT_14cbf3ac8;
      if (pppppuVar20 != (undefined8 *****)0x0) {
        (*(code *)(*pppppuVar20)[1])();
      }
      puVar30 = &DAT_14cbf3ad0;
LAB_148f5fa7f:
      if (pppppuVar18 != (undefined8 *****)0x0) {
        (*(code *)(*pppppuVar18)[2])(pppppuVar18);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x59) = *puVar30;
  plVar19 = (longlong *)(*(code *)(*param_1)[0x59])(param_1);
  (**(code **)(*plVar19 + 0x340))(plVar19,param_1 + 0x58,2);
  plVar19 = (longlong *)(*(code *)(*param_1)[0x59])(param_1);
  FUN_144a5dc74(&local_268);
  (**(code **)(*plVar19 + 0x340))(plVar19,&local_268,3);
  if (local_268 != (undefined ********)0x0) {
    (*(code *)(*local_268)[2])();
  }
  pppppuVar18 = (undefined8 *****)FUN_148f61afa(param_1);
  if ((pppppuVar18 != (undefined8 *****)0x0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(pppppuVar18);
  }
  param_1[0x29] = pppppuVar18;
  pwVar25 = L"PolyEditTool";
  if (*(char *)(param_1 + 0x27) != '\0') {
    pwVar25 = L"TriEditTool";
  }
  FUN_140056680(&local_268,pwVar25);
  (*(code *)(*pppppuVar18)[0x55])(pppppuVar18,param_1,&local_268);
  if (local_268 != (undefined ********)0x0) {
    FUN_1400020a8();
  }
  local_2d8 = 0;
  local_2c8 = &PTR_LAB_14ba26bd0;
  local_2e8 = &LAB_14436d618;
  local_2c0 = param_1;
  FUN_148f61b90(param_1[0x29] + 5,(longlong)param_1[0x29] + 0xac);
  local_318 = 0;
  local_308 = &PTR_LAB_14ba26bf0;
  local_328 = &LAB_14436d668;
  local_300 = param_1;
  FUN_1484c9b00(param_1[0x29] + 5,param_1[0x29] + 0x16);
  local_358 = 0;
  local_348 = &PTR_LAB_14ba26c10;
  local_368 = FUN_14436d6ec;
  local_340 = param_1;
  FUN_1484c9b00(param_1[0x29] + 5,(longlong)param_1[0x29] + 0xaa);
  lVar32 = (longlong)*(int *)(param_1[0x29] + 6);
  if (lVar32 != 0) {
    ppppuVar22 = param_1[0x29][5];
    lVar26 = 0;
    do {
      (**(code **)(**(longlong **)((longlong)ppppuVar22 + lVar26) + 0x10))();
      lVar26 = lVar26 + 8;
    } while (lVar32 * 8 != lVar26);
  }
  local_5c8 = param_1 + 0x4d;
  FUN_146c38c5e(param_1[0x4d],0);
  pppppuVar18 = (undefined8 *****)FUN_1484c5d32(DAT_14c951640);
  if ((pppppuVar18 != (undefined8 *****)0x0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(pppppuVar18);
  }
  param_1[0x28] = pppppuVar18;
  uVar21 = (*(code *)(*param_1)[0x74])(param_1);
  FUN_148504e10(pppppuVar18,uVar21);
  FUN_148558526(param_1[0x28][0xb],param_1[0x14]);
  local_268 = (undefined ********)param_1[0x7b];
  pppppuStack_260 = param_1[0x7c];
  local_258 = param_1[0x7d];
  uStack_250 = param_1[0x7e];
  local_248 = (undefined **)param_1[0x7f];
  uStack_240 = param_1[0x80];
  local_238 = param_1[0x81];
  local_228 = param_1[0x82];
  pppppuStack_220 = param_1[0x83];
  local_218 = param_1[0x84];
  uStack_230 = (undefined8 ****)0x0;
  uStack_210 = 0;
  FUN_14851b91a(param_1[0x28][0xb]);
  *(undefined1 *)(param_1[0x28][0xb] + 8) = 1;
  FUN_148506417(&local_4f8,param_1[0x14],0);
  pppppuVar18 = param_1[0x28];
  uVar21 = (*(code *)(*param_1)[0x59])(param_1);
  uVar21 = FUN_1485578f6(uVar21);
  _Src = local_4f8;
  local_550 = (void *)0x0;
  lVar32 = (longlong)(int)local_4f0;
  local_548 = (int)local_4f0;
  if (lVar32 == 0) {
    local_544 = 0;
  }
  else {
    FUN_1411312f2(&local_550,(ulonglong)local_4f0 & 0xffffffff,0);
    memcpy(local_550,_Src,lVar32 << 3);
  }
  FUN_1485053d2(pppppuVar18,&local_550,uVar21,0);
  uVar21 = (*(code *)(*param_1)[0x59])(param_1);
  ppppuVar22 = (undefined8 ****)FUN_148557ea9(&DAT_149e1dd24,uVar21);
  if (ppppuVar22 != (undefined8 ****)0x0) {
    pppppuVar18 = param_1[0x28];
    if (DAT_14c950c29 == 1) {
      FUN_14689c22e(ppppuVar22);
    }
    pppppuVar18[0x10] = ppppuVar22;
  }
  pwVar25 = L"PolyEditTool";
  local_398 = 0;
  local_388 = &PTR_LAB_14ba26c30;
  local_3a8 = FUN_14436d762;
  local_380 = param_1;
  FUN_14851b5ae(param_1[0x28][0xb]);
  FUN_14851b65c(param_1[0x28][0xb],1);
  FUN_14851bbe8(param_1[0x28][0xb],param_1[0x4d],1,0xf);
  FUN_14851b88e(param_1[0x28][0xb],
                CONCAT71((int7)((ulonglong)param_1[0x29] >> 8),*(undefined1 *)(param_1[0x29] + 0x15)
                        ));
  FUN_1485054ca(param_1[0x28],1);
  pppppuVar18 = (undefined8 *****)FUN_14001cc68(0xe0,0x10);
  pppppuVar18[1] = (undefined8 ****)&DAT_100000001;
  *pppppuVar18 = (undefined8 ****)&PTR_FUN_14af7cde0;
  FUN_1457e37e0(pppppuVar18 + 2);
  if (pppppuVar18 == (undefined8 *****)0x0) {
    param_1[0x51] = (undefined8 *****)0x10;
    pppppuVar20 = param_1[0x52];
    if (pppppuVar20 != (undefined8 *****)0x0) {
      param_1[0x52] = (undefined8 *****)0x0;
LAB_148f5ff0a:
      LOCK();
      pppppuVar8 = pppppuVar20 + 1;
      *(int *)pppppuVar8 = *(int *)pppppuVar8 + -1;
      UNLOCK();
      if (*(int *)pppppuVar8 == 0) {
        (*(code *)**pppppuVar20)(pppppuVar20);
        LOCK();
        piVar1 = (int *)((longlong)pppppuVar20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*pppppuVar20)[2])(pppppuVar20);
        }
      }
      if (pppppuVar18 != (undefined8 *****)0x0) goto LAB_148f5ff72;
    }
  }
  else {
    LOCK();
    *(int *)(pppppuVar18 + 1) = *(int *)(pppppuVar18 + 1) + 1;
    UNLOCK();
    param_1[0x51] = pppppuVar18 + 2;
    pppppuVar20 = param_1[0x52];
    if (pppppuVar18 == pppppuVar20) {
      LOCK();
      pppppuVar20 = pppppuVar18 + 1;
      *(int *)pppppuVar20 = *(int *)pppppuVar20 + -1;
      UNLOCK();
      if (*(int *)pppppuVar20 == 0) {
        (*(code *)**pppppuVar18)(pppppuVar18);
        LOCK();
        piVar1 = (int *)((longlong)pppppuVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*pppppuVar18)[2])(pppppuVar18);
        }
      }
    }
    else {
      param_1[0x52] = pppppuVar18;
      if (pppppuVar20 != (undefined8 *****)0x0) goto LAB_148f5ff0a;
    }
LAB_148f5ff72:
    LOCK();
    pppppuVar20 = pppppuVar18 + 1;
    *(int *)pppppuVar20 = *(int *)pppppuVar20 + -1;
    UNLOCK();
    if (*(int *)pppppuVar20 == 0) {
      (*(code *)**pppppuVar18)(pppppuVar18);
      LOCK();
      piVar1 = (int *)((longlong)pppppuVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*pppppuVar18)[2])(pppppuVar18);
      }
    }
  }
  pppppuVar18 = param_1[0x51];
  pppppuVar18[1] = param_1[0x4d];
  pppppuVar18[2] = (undefined8 ****)0x0;
  FUN_146bee918(pppppuVar18,0);
  pppppuVar18[2] =
       (undefined8 ****)
       (ulonglong)
       (uint)(*(int *)((longlong)pppppuVar18[1] + 0x214) + *(int *)(pppppuVar18[1] + 0x43));
  pppppuVar18 = (undefined8 *****)FUN_148f61c65(param_1);
  if ((pppppuVar18 != (undefined8 *****)0x0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(pppppuVar18);
  }
  param_1[0x54] = pppppuVar18;
  *(undefined1 *)(pppppuVar18 + 8) = 0;
  (*(code *)(*param_1[0x54])[0x54])(param_1[0x54],param_1);
  FUN_14853267c(param_1[0x54],*(undefined1 *)((longlong)param_1[0x29] + 0xa9));
  ppppuVar22 = param_1[0x54][0xf];
  if (*(char *)(param_1 + 0x27) != '\0') {
    pwVar25 = L"TriEditTool";
  }
  FUN_140056680(&local_268,pwVar25);
  (*(code *)(*ppppuVar22)[0x55])(ppppuVar22,param_1,&local_268);
  if (local_268 != (undefined ********)0x0) {
    FUN_1400020a8();
  }
  *(byte *)((longlong)param_1[0x54][0xf] + 0xb3) = *(byte *)(param_1 + 0x27) ^ 1;
  local_268 = (undefined ********)&LAB_148f61dd6;
  pppppuStack_260 = (undefined8 *****)((ulonglong)pppppuStack_260 & 0xffffffff00000000);
  FUN_148f61cfa(param_1[0x54] + 9,&local_448,param_1,&local_268);
  pppppuVar18 = param_1[0x54];
  local_268 = (undefined ********)0x0;
  pppppuStack_260 = (undefined8 *****)((ulonglong)pppppuStack_260 & 0xffffffff00000000);
  FUN_1446efa72(&local_268,0,3,0x10);
  ppppppppuVar14 = local_268;
  pppppuStack_260 = (undefined8 *****)CONCAT44(pppppuStack_260._4_4_,3);
  *local_268 = (undefined *******)&PTR_LAB_149e020b0;
  pppppuVar20 = (undefined8 *****)FUN_144a3f946();
  ppppppppuVar14[2] = (undefined *******)pppppuVar20;
  *ppppppppuVar14 = (undefined *******)&PTR_FUN_14ba26cc0;
  ppppppppuVar14[3] = (undefined *******)0x0;
  FUN_14485c47a(ppppppppuVar14 + 3,param_1);
  ppppppppuVar14[4] = (undefined *******)param_1;
  FUN_1448b6402(pppppuVar18 + 0xc,&local_448,&local_268);
  FUN_1449db362(&local_268);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    *(undefined4 *)(param_1[0x54] + 0xfe) = 0x3f800000;
  }
  pppppuVar18 = param_1[0x54];
  local_3d8 = 0;
  local_3c8 = &PTR_LAB_14ba26d30;
  local_3e8[0] = FUN_14436dc26;
  pppppuVar20 = param_1[0x4f];
  local_3c0 = param_1;
  uVar21 = (*(code *)(*param_1)[0x74])(param_1);
  if (param_1[0x28][0xb][9] == (undefined8 ***)0x0) {
    local_5b8[0] = 0;
    local_5b8[1] = 0;
    local_5b8[2] = 0;
    local_5b8[3] = 0x3ff0000000000000;
    local_5b8[4] = 0;
    local_5b8[5] = 0;
    local_5b8[6] = 0;
    local_5b8[7] = 0;
    local_578 = 0;
    uStack_574 = 0x3ff00000;
    uStack_570 = 0;
    uStack_56c = 0x3ff00000;
    local_568 = 0x3ff0000000000000;
    uStack_560 = 0;
  }
  else {
    ppuVar7 = param_1[0x28][0xb][9][0x39];
    ppuVar31 = (undefined8 **)&DAT_14c846480;
    if (ppuVar7 != (undefined8 **)0x0) {
      ppuVar31 = ppuVar7 + 0x48;
    }
    puVar34 = local_5b8;
    for (lVar32 = 0xc; lVar32 != 0; lVar32 = lVar32 + -1) {
      *puVar34 = *ppuVar31;
      ppuVar31 = ppuVar31 + 1;
      puVar34 = puVar34 + 1;
    }
  }
  local_5d0 = local_3e8;
  local_5d8 = pppppuVar20;
  FUN_14854d762(pppppuVar18,param_1[0x4d],local_5b8,uVar21);
  local_5c0 = param_1 + 0xb7;
  FUN_1482dd128(local_5c0,param_1[0x4d],param_1[0x4f]);
  cVar15 = (*(code *)(*param_1)[0x77])(param_1);
  if (cVar15 != '\0') {
    pppppuVar23 = (undefined *****)(*(code *)(*param_1)[0x78])();
    ppppppuVar28 = local_5c8;
    local_448 = (undefined8 ******)&DAT_100000004;
    ppppuStack_420 = (undefined8 ****)0x0;
    local_418 = 0;
    pppppuStack_440 = (undefined8 *****)0x0;
    pppppuStack_438 = (undefined8 *****)0x0;
    uStack_414 = 0x80;
    uStack_410 = 0xffffffff;
    uStack_40c = 0;
    local_400 = 0;
    local_3f8 = 0;
    bVar5 = *(byte *)(param_1 + 0x27);
    iVar6 = *(int *)((longlong)pppppuVar23 + 4);
    if (((*(int *)pppppuVar23 == 2 & iVar6 == 2 & ~bVar5) == 1) &&
       (*(char *)(param_1[0x2f] + 0x16) == '\x01')) {
      local_448 = (undefined8 ******)&DAT_200000002;
      cVar16 = '\0';
      local_478 = 0;
      local_470 = 0;
      local_498 = (undefined ******)0x0;
      uStack_490 = 0;
      local_46c = 0xffffffff00000080;
      local_464 = 0;
      local_458 = 0;
      local_450 = 0;
      local_4a0 = (undefined8 *******)&DAT_100000002;
      FUN_1482aa55c(&local_268,*local_5c8,CONCAT71((uint7)(uint3)((uint)iVar6 >> 8),1));
      local_5d8 = (undefined8 *****)((ulonglong)local_5d8 & 0xffffffff00000000);
      cVar15 = FUN_14838948a(*ppppppuVar28,&local_268,pppppuVar23,&local_4a0);
      if (cVar15 != '\0') {
        local_5d8 = (undefined8 *****)((ulonglong)local_5d8 & 0xffffffff00000000);
        cVar16 = FUN_14838948a(param_1[0x4d],param_1[0x4f],&local_4a0,&local_448);
      }
      FUN_145aba0b4(&local_268);
      local_450 = 0;
      if (local_458 != 0) {
        FUN_1400020a8();
      }
      FUN_140345f8a(&local_498);
      pppppuVar23 = (undefined *****)&local_448;
      if (cVar16 != '\0') goto LAB_148f6043d;
    }
    else {
      if ((bool)bVar5 != (iVar6 == 1)) {
        local_448 = (undefined8 ******)CONCAT44(2 - (uint)bVar5,*(int *)pppppuVar23);
        local_1e8 = param_1[0x4d];
        local_268 = (undefined ********)&PTR_FUN_14ae728b0;
        local_258 = (undefined8 *****)0x0;
        local_248 = (undefined **)0x0;
        local_1b8 = 0;
        local_1b0 = 0x8000000000;
        local_218 = (undefined8 *****)0x0;
        uStack_210 = 0;
        local_208 = 0;
        uStack_200 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        uStack_1e0 = 0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_178 = 0;
        local_170 = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_16c = 0xffffffff00000080;
        local_164 = 0;
        local_158 = 0;
        local_150 = 0;
        local_128 = 0;
        local_120 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_11c = 0xffffffff00000080;
        local_114 = 0;
        local_108 = 0;
        local_100 = 0;
        pppppppuVar27 = (undefined8 *******)param_1[0x4f];
        if (bVar5 != 0) {
          FUN_1482aa71e(&local_268,param_1[0x4f]);
          pppppppuVar27 = &local_268;
        }
        local_5d8 = (undefined8 *****)((ulonglong)local_5d8 & 0xffffffff00000000);
        cVar15 = FUN_14838948a(*local_5c8,pppppppuVar27,pppppuVar23,&local_448);
        FUN_145aba0b4(&local_268);
        pppppuVar23 = (undefined *****)&local_448;
        if (cVar15 == '\0') goto LAB_148f605ec;
      }
LAB_148f6043d:
      if (*(int *)((longlong)pppppuVar23 + 4) == 2) {
        if (*(char *)(param_1 + 0x27) == '\0') {
          FUN_14854e5fc(param_1[0x54],pppppuVar23);
        }
      }
      else if ((*(int *)((longlong)pppppuVar23 + 4) == 1) && (*(char *)(param_1 + 0x27) == '\x01'))
      {
        FUN_14854e97c(param_1[0x54],pppppuVar23);
      }
    }
LAB_148f605ec:
    local_3f8 = 0;
    if (local_400 != 0) {
      FUN_1400020a8();
    }
    FUN_140345f8a(&pppppuStack_440);
  }
  uVar17 = FUN_1485316a8(param_1[0x54]);
  *(undefined1 *)(param_1 + 0x5a) = uVar17;
  FUN_145c688c4(param_1[0x4d],&local_268,0);
  dVar9 = (double)(-(ulonglong)(0.0 <= (double)uStack_240 - (double)local_258) &
                  (ulonglong)((double)uStack_240 - (double)local_258));
  dVar10 = (double)(-(ulonglong)(0.0 <= (double)local_248 - (double)pppppuStack_260) &
                   (ulonglong)((double)local_248 - (double)pppppuStack_260));
  uVar35 = -(ulonglong)(dVar9 <= dVar10);
  dVar10 = (double)(~uVar35 & (ulonglong)dVar9 | uVar35 & (ulonglong)dVar10);
  dVar9 = (double)(-(ulonglong)(0.0 <= (double)uStack_250 - (double)local_268) &
                  (ulonglong)((double)uStack_250 - (double)local_268));
  uVar35 = -(ulonglong)(dVar10 <= dVar9);
  fVar36 = (float)(double)(uVar35 & (ulonglong)dVar9 | ~uVar35 & (ulonglong)dVar10);
  if (0.0 < fVar36) {
    *(float *)((longlong)param_1 + 0x4d4) = 1.0 / fVar36;
  }
  pppppuVar18 = (undefined8 *****)FUN_148f61dde(DAT_14c951640);
  if (pppppuVar18 != (undefined8 *****)0x0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(pppppuVar18);
  }
  bVar5 = DAT_14c950c29;
  param_1[0x53] = pppppuVar18;
  *(undefined1 *)(pppppuVar18 + 0xd) = *(undefined1 *)(param_1 + 0x27);
  pppppuVar18 = param_1[0x29];
  pppppuVar20 = param_1[0x53];
  if ((bVar5 & 1) != 0) {
    if (pppppuVar18 == (undefined8 *****)0x0) {
      pppppuVar18 = (undefined8 *****)0x0;
    }
    else {
      FUN_14689c22e();
      pppppuVar18 = param_1[0x29];
    }
  }
  pppppuVar20[5] = pppppuVar18;
  pppppuVar18 = param_1[0x53];
  pppppuVar20 = param_1[0x4d];
  pppppuVar8 = param_1[0x4e];
  if (pppppuVar8 != (undefined8 *****)0x0) {
    LOCK();
    *(int *)(pppppuVar8 + 1) = *(int *)(pppppuVar8 + 1) + 1;
    UNLOCK();
  }
  ppppuVar22 = pppppuVar18[7];
  pppppuVar18[6] = pppppuVar20;
  pppppuVar18[7] = pppppuVar8;
  if (ppppuVar22 != (undefined8 ****)0x0) {
    LOCK();
    ppppuVar3 = ppppuVar22 + 1;
    *(int *)ppppuVar3 = *(int *)ppppuVar3 + -1;
    UNLOCK();
    if (*(int *)ppppuVar3 == 0) {
      (*(code *)**ppppuVar22)(ppppuVar22);
      LOCK();
      piVar1 = (int *)((longlong)ppppuVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*ppppuVar22)[2])(ppppuVar22);
      }
    }
  }
  pppppuVar18 = param_1[0x28];
  pppppuVar20 = param_1[0x53];
  if (DAT_14c950c29 == 1) {
    if (pppppuVar18 == (undefined8 *****)0x0) {
      pppppuVar18 = (undefined8 *****)0x0;
    }
    else {
      FUN_14689c22e();
      pppppuVar18 = param_1[0x28];
    }
  }
  pppppuVar20[8] = pppppuVar18;
  pppppuVar18 = param_1[0x53];
  pppppuVar20 = param_1[0x4f];
  pppppuVar8 = param_1[0x50];
  if (pppppuVar8 != (undefined8 *****)0x0) {
    LOCK();
    *(int *)(pppppuVar8 + 1) = *(int *)(pppppuVar8 + 1) + 1;
    UNLOCK();
  }
  ppppuVar22 = pppppuVar18[10];
  pppppuVar18[9] = pppppuVar20;
  pppppuVar18[10] = pppppuVar8;
  if (ppppuVar22 != (undefined8 ****)0x0) {
    LOCK();
    ppppuVar3 = ppppuVar22 + 1;
    *(int *)ppppuVar3 = *(int *)ppppuVar3 + -1;
    UNLOCK();
    if (*(int *)ppppuVar3 == 0) {
      (*(code *)**ppppuVar22)(ppppuVar22);
      LOCK();
      piVar1 = (int *)((longlong)ppppuVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*ppppuVar22)[2])(ppppuVar22);
      }
    }
  }
  pppppuVar18 = param_1[0x53];
  pppppuVar20 = param_1[0x51];
  pppppuVar8 = param_1[0x52];
  if (pppppuVar8 != (undefined8 *****)0x0) {
    LOCK();
    *(int *)(pppppuVar8 + 1) = *(int *)(pppppuVar8 + 1) + 1;
    UNLOCK();
  }
  ppppuVar22 = pppppuVar18[0xc];
  pppppuVar18[0xb] = pppppuVar20;
  pppppuVar18[0xc] = pppppuVar8;
  if (ppppuVar22 != (undefined8 ****)0x0) {
    LOCK();
    ppppuVar3 = ppppuVar22 + 1;
    *(int *)ppppuVar3 = *(int *)ppppuVar3 + -1;
    UNLOCK();
    if (*(int *)ppppuVar3 == 0) {
      (*(code *)**ppppuVar22)(ppppuVar22);
      LOCK();
      piVar1 = (int *)((longlong)ppppuVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*ppppuVar22)[2])(ppppuVar22);
      }
    }
  }
  pppppuVar18 = param_1[0x53];
  pppppuVar20 = param_1[0x54];
  if (DAT_14c950c29 == 1) {
    if (pppppuVar20 == (undefined8 *****)0x0) {
      pppppuVar20 = (undefined8 *****)0x0;
    }
    else {
      FUN_14689c22e();
      pppppuVar20 = param_1[0x54];
    }
  }
  pppppuVar18[0xe] = pppppuVar20;
  pppppuVar18 = param_1[0x53];
  local_448 = (undefined8 ******)pppppuVar18[0x18];
  pppppuStack_260 = (undefined8 *****)pppppuVar18[0x19];
  local_258 = (undefined8 *****)pppppuVar18[0x1a];
  uStack_250 = (undefined8 *****)pppppuVar18[0x1b];
  local_248 = (undefined **)pppppuVar18[0x1c];
  uStack_240 = (undefined8 *****)pppppuVar18[0x1d];
  local_238 = (undefined8 *****)pppppuVar18[0x1e];
  uStack_230 = pppppuVar18[0x1f];
  local_268 = (undefined ********)local_448;
  pppppuVar18[0x1e] = (undefined8 ****)CONCAT44(uStack_414,local_418);
  pppppuVar18[0x1f] = (undefined8 ****)CONCAT44(uStack_40c,uStack_410);
  pppppuVar18[0x1c] = (undefined8 ****)&PTR_LAB_14ba26d50;
  pppppuVar18[0x1d] = param_1;
  pppppuVar18[0x1a] = (undefined8 ****)0x0;
  pppppuVar18[0x1b] = pppppuStack_430;
  pppppuVar18[0x18] = (undefined8 ****)&LAB_14436dcbc;
  pppppuVar18[0x19] = pppppuStack_440;
  local_418 = SUB84(local_238,0);
  uStack_414 = (undefined4)((ulonglong)local_238 >> 0x20);
  uStack_410 = SUB84(uStack_230,0);
  uStack_40c = (undefined4)((ulonglong)uStack_230 >> 0x20);
  local_428 = (undefined8 ****)local_248;
  ppppuStack_420 = uStack_240;
  pppppuStack_438 = local_258;
  pppppuStack_430 = uStack_250;
  pppppuStack_440 = pppppuStack_260;
  if (local_448 != (undefined8 ******)0x0) {
    pppppuVar18 = local_258;
    if (local_258 == (undefined8 *****)0x0) {
      pppppuVar18 = &local_428;
    }
    (*(code *)(*pppppuVar18)[2])();
  }
  pppppuVar18 = param_1[0x53];
  local_448 = (undefined8 ******)pppppuVar18[0x10];
  pppppuStack_260 = (undefined8 *****)pppppuVar18[0x11];
  local_258 = (undefined8 *****)pppppuVar18[0x12];
  uStack_250 = (undefined8 *****)pppppuVar18[0x13];
  local_248 = (undefined **)pppppuVar18[0x14];
  uStack_240 = (undefined8 *****)pppppuVar18[0x15];
  local_238 = (undefined8 *****)pppppuVar18[0x16];
  uStack_230 = pppppuVar18[0x17];
  local_268 = (undefined ********)local_448;
  pppppuVar18[0x16] = (undefined8 ****)CONCAT44(uStack_414,local_418);
  pppppuVar18[0x17] = (undefined8 ****)CONCAT44(uStack_40c,uStack_410);
  pppppuVar18[0x14] = (undefined8 ****)&PTR_LAB_14ba26d70;
  pppppuVar18[0x15] = param_1;
  pppppuVar18[0x12] = (undefined8 ****)0x0;
  pppppuVar18[0x13] = pppppuStack_430;
  pppppuVar18[0x10] = (undefined8 ****)FUN_14436dcf8;
  pppppuVar18[0x11] = pppppuStack_440;
  local_418 = SUB84(local_238,0);
  uStack_414 = (undefined4)((ulonglong)local_238 >> 0x20);
  uStack_410 = SUB84(uStack_230,0);
  uStack_40c = (undefined4)((ulonglong)uStack_230 >> 0x20);
  local_428 = (undefined8 ****)local_248;
  ppppuStack_420 = uStack_240;
  pppppuStack_438 = local_258;
  pppppuStack_430 = uStack_250;
  pppppuStack_440 = pppppuStack_260;
  if (local_448 != (undefined8 ******)0x0) {
    pppppuVar18 = &local_428;
    if (local_258 != (undefined8 *****)0x0) {
      pppppuVar18 = local_258;
    }
    (*(code *)(*pppppuVar18)[2])(pppppuVar18);
  }
  uVar21 = (*(code *)(*param_1)[0x59])(param_1);
  uVar21 = FUN_148451390(uVar21);
  uVar24 = FUN_1411d87e8();
  FUN_148442eec(uVar21,uVar24);
  uVar21 = (*(code *)(*param_1)[0x59])(param_1);
  uVar21 = FUN_148451390(uVar21);
  FUN_14843c9e0(uVar21,param_1[0x53]);
  pppppuVar18 = (undefined8 *****)FUN_148f61e73(DAT_14c951640);
  if ((pppppuVar18 != (undefined8 *****)0x0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(pppppuVar18);
  }
  param_1[0x30] = pppppuVar18;
  (*(code *)(*pppppuVar18)[0x54])(pppppuVar18,param_1);
  pppppuVar18 = (undefined8 *****)FUN_148f61f08(DAT_14c951640);
  if ((pppppuVar18 != (undefined8 *****)0x0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(pppppuVar18);
  }
  param_1[0x31] = pppppuVar18;
  (*(code *)(*pppppuVar18)[0x54])(pppppuVar18,param_1);
  pppppuVar18 = (undefined8 *****)FUN_148f61f9d(DAT_14c951640);
  if ((pppppuVar18 != (undefined8 *****)0x0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(pppppuVar18);
  }
  param_1[0x32] = pppppuVar18;
  (*(code *)(*pppppuVar18)[0x54])(pppppuVar18,param_1);
  ppppppuVar28 = param_1 + 0x38;
  local_268 = (undefined ********)0x14ba1ea58;
  pppppuStack_260._0_4_ = 0x15;
  FUN_1446e940c(local_528,&local_268);
  local_268 = (undefined ********)0x14ba1c808;
  pppppuStack_260 = (undefined8 *****)CONCAT44(pppppuStack_260._4_4_,0x15);
  FUN_1446e940c(local_52c,&local_268);
  FUN_140208bae(&local_448,local_52c,local_528,L"Cut Faces");
  local_4a0 = (undefined8 *******)param_1[0x32];
  local_268 = (undefined ********)&local_4a0;
  pppppuStack_260 = (undefined8 *****)&local_448;
  FUN_148f78d5c(ppppppuVar28,local_508,&local_268);
  if (local_448 != (undefined8 ******)0x0) {
    (*(code *)(*local_448)[2])();
  }
  ppppppuVar4 = param_1 + 0x42;
  FUN_1446ddc76(&local_448,"PolyEd.CutFaces",1);
  local_4a0 = (undefined8 *******)param_1[0x32];
  local_268 = (undefined ********)&local_4a0;
  pppppuStack_260 = (undefined8 *****)&local_448;
  FUN_148f79280(ppppppuVar4,local_508);
  pppppuVar18 = (undefined8 *****)FUN_148f62032(DAT_14c951640);
  if ((pppppuVar18 != (undefined8 *****)0x0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(pppppuVar18);
  }
  param_1[0x33] = pppppuVar18;
  (*(code *)(*pppppuVar18)[0x54])(pppppuVar18,param_1);
  local_268 = (undefined ********)0x14ba1eaaa;
  pppppuStack_260._0_4_ = 0x16;
  FUN_1446e940c(local_528,&local_268);
  local_268 = (undefined ********)0x14ba1c808;
  pppppuStack_260 = (undefined8 *****)CONCAT44(pppppuStack_260._4_4_,0x15);
  FUN_1446e940c(local_52c,&local_268);
  FUN_140208bae(&local_448,local_52c,local_528,L"UV Project");
  local_4a0 = (undefined8 *******)param_1[0x33];
  local_268 = (undefined ********)&local_4a0;
  pppppuStack_260 = (undefined8 *****)&local_448;
  FUN_148f78d5c(ppppppuVar28,local_508,&local_268);
  if (local_448 != (undefined8 ******)0x0) {
    (*(code *)(*local_448)[2])();
  }
  FUN_1446ddc76(&local_448,"PolyEd.ProjectUVs",1);
  local_4a0 = (undefined8 *******)param_1[0x33];
  local_268 = (undefined ********)&local_4a0;
  pppppuStack_260 = (undefined8 *****)&local_448;
  FUN_148f79280(ppppppuVar4,local_508);
  pppppuVar18 = (undefined8 *****)FUN_148f620c7(DAT_14c951640);
  if ((pppppuVar18 != (undefined8 *****)0x0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(pppppuVar18);
  }
  param_1[0x35] = pppppuVar18;
  (*(code *)(*pppppuVar18)[0x54])(pppppuVar18,param_1);
  local_268 = (undefined ********)0x14ba1eb0e;
  pppppuStack_260._0_4_ = 0x1c;
  FUN_1446e940c(local_528,&local_268);
  local_268 = (undefined ********)0x14ba1c808;
  pppppuStack_260 = (undefined8 *****)CONCAT44(pppppuStack_260._4_4_,0x15);
  FUN_1446e940c(local_52c,&local_268);
  FUN_140208bae(&local_448,local_52c,local_528,L"Insert Edge Loops");
  local_4a0 = (undefined8 *******)param_1[0x35];
  local_268 = (undefined ********)&local_4a0;
  pppppuStack_260 = (undefined8 *****)&local_448;
  FUN_148f78d5c(ppppppuVar28,local_508,&local_268);
  if (local_448 != (undefined8 ******)0x0) {
    (*(code *)(*local_448)[2])();
  }
  FUN_1446ddc76(&local_448,"PolyEd.InsertEdgeLoop",1);
  local_4a0 = (undefined8 *******)param_1[0x35];
  local_268 = (undefined ********)&local_4a0;
  pppppuStack_260 = (undefined8 *****)&local_448;
  FUN_148f79280(ppppppuVar4,local_508);
  pppppuVar18 = (undefined8 *****)FUN_148f6215c(DAT_14c951640);
  if ((pppppuVar18 != (undefined8 *****)0x0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(pppppuVar18);
  }
  param_1[0x34] = pppppuVar18;
  (*(code *)(*pppppuVar18)[0x54])(pppppuVar18,param_1);
  local_268 = (undefined ********)0x14ba1eb78;
  pppppuStack_260._0_4_ = 0x18;
  FUN_1446e940c(local_528,&local_268);
  local_268 = (undefined ********)0x14ba1c808;
  pppppuStack_260 = (undefined8 *****)CONCAT44(pppppuStack_260._4_4_,0x15);
  FUN_1446e940c(local_52c,&local_268);
  FUN_140208bae(&local_448,local_52c,local_528,L"Insert Edges");
  local_4a0 = (undefined8 *******)param_1[0x34];
  local_268 = (undefined ********)&local_4a0;
  pppppuStack_260 = (undefined8 *****)&local_448;
  FUN_148f78d5c(ppppppuVar28,local_508,&local_268);
  if (local_448 != (undefined8 ******)0x0) {
    (*(code *)(*local_448)[2])();
  }
  FUN_1446ddc76(&local_448,"PolyEd.InsertGroupEdge",1);
  local_4a0 = (undefined8 *******)param_1[0x34];
  local_268 = (undefined ********)&local_4a0;
  pppppuStack_260 = (undefined8 *****)&local_448;
  FUN_148f79280(ppppppuVar4,local_508);
  pppppuVar18 = (undefined8 *****)FUN_148f621f1(DAT_14c951640);
  if ((pppppuVar18 != (undefined8 *****)0x0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(pppppuVar18);
  }
  param_1[0x36] = pppppuVar18;
  (*(code *)(*pppppuVar18)[0x54])(pppppuVar18,param_1);
  local_268 = (undefined ********)0x14ba1ebce;
  pppppuStack_260._0_4_ = 0x12;
  FUN_1446e940c(local_528,&local_268);
  local_268 = (undefined ********)0x14ba1c808;
  pppppuStack_260 = (undefined8 *****)CONCAT44(pppppuStack_260._4_4_,0x15);
  FUN_1446e940c(local_52c,&local_268);
  FUN_140208bae(&local_448,local_52c,local_528,L"Bevel");
  local_4a0 = (undefined8 *******)param_1[0x36];
  local_268 = (undefined ********)&local_4a0;
  pppppuStack_260 = (undefined8 *****)&local_448;
  FUN_148f78d5c(ppppppuVar28,local_508,&local_268);
  if (local_448 != (undefined8 ******)0x0) {
    (*(code *)(*local_448)[2])();
  }
  FUN_1446ddc76(&local_448,"PolyEd.Bevel",1);
  local_4a0 = (undefined8 *******)param_1[0x36];
  local_268 = (undefined ********)&local_4a0;
  pppppuStack_260 = (undefined8 *****)&local_448;
  FUN_148f79280(ppppppuVar4,local_508);
  pppppuVar18 = (undefined8 *****)FUN_148f62286(DAT_14c951640);
  if ((pppppuVar18 != (undefined8 *****)0x0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(pppppuVar18);
  }
  param_1[0x37] = pppppuVar18;
  (*(code *)(*pppppuVar18)[0x54])(pppppuVar18,param_1);
  local_268 = (undefined ********)0x14ba1ec1e;
  pppppuStack_260._0_4_ = 0x18;
  FUN_1446e940c(local_528,&local_268);
  local_268 = (undefined ********)0x14ba1c808;
  pppppuStack_260 = (undefined8 *****)CONCAT44(pppppuStack_260._4_4_,0x15);
  FUN_1446e940c(local_52c,&local_268);
  FUN_140208bae(&local_448,local_52c,local_528,L"Extrude Edges");
  local_4a0 = (undefined8 *******)param_1[0x37];
  local_268 = (undefined ********)&local_4a0;
  pppppuStack_260 = (undefined8 *****)&local_448;
  FUN_148f78d5c(ppppppuVar28,local_508,&local_268);
  if (local_448 != (undefined8 ******)0x0) {
    (*(code *)(*local_448)[2])();
  }
  FUN_1446ddc76(&local_448,"PolyEd.ExtrudeEdge",1);
  local_4a0 = (undefined8 *******)param_1[0x37];
  local_268 = (undefined ********)&local_4a0;
  pppppuStack_260 = (undefined8 *****)&local_448;
  FUN_148f79280(ppppppuVar4,local_508);
  (*(code *)(*param_1)[0x61])(param_1,param_1[0x54][0xf]);
  (*(code *)(*param_1)[0x61])(param_1,param_1[0x29]);
  if (*(char *)(param_1 + 0x27) == '\0') {
    (*(code *)(*param_1)[0x61])(param_1);
  }
  else {
    *(undefined1 *)(param_1[0x2f] + 0x16) = 0;
  }
  FUN_148506321(param_1[0x14]);
  uVar21 = (*(code *)(*param_1)[0x59])(param_1);
  uVar21 = FUN_148451354(uVar21);
  local_268 = (undefined ********)0x0;
  pppppuStack_260 = (undefined8 *****)0x0;
  pppppuVar18 = (undefined8 *****)FUN_14843d1a1(uVar21,0x1fffe,param_1);
  if ((pppppuVar18 != (undefined8 *****)0x0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(pppppuVar18);
  }
  param_1[0x56] = pppppuVar18;
  if (local_268 != (undefined ********)0x0) {
    FUN_1400020a8();
    pppppuVar18 = param_1[0x56];
  }
  if (pppppuVar18 != (undefined8 *****)0x0) {
    (*(code *)(*pppppuVar18)[99])(pppppuVar18,1);
    local_258 = (undefined8 *****)0x0;
    local_248 = &PTR_LAB_14aeb6a30;
    uStack_240 = (undefined8 *****)&LAB_14436dd76;
    local_268 = (undefined ********)FUN_146bd3274;
    (*(code *)(*param_1[0x56])[0x61])(param_1[0x56],&local_268);
    if (local_268 != (undefined ********)0x0) {
      pppppuVar18 = local_258;
      if (local_258 == (undefined8 *****)0x0) {
        pppppuVar18 = (undefined8 *****)&local_248;
      }
      (*(code *)(*pppppuVar18)[2])();
    }
    pppppuVar18 = (undefined8 *****)FUN_1484c6256(param_1);
    if ((pppppuVar18 != (undefined8 *****)0x0) && (DAT_14c950c29 != 0)) {
      FUN_14689c22e(pppppuVar18);
    }
    param_1[0x57] = pppppuVar18;
    local_268 = (undefined ********)FUN_148f623f8;
    pppppuStack_260 = (undefined8 *****)((ulonglong)pppppuStack_260 & 0xffffffff00000000);
    FUN_148f6231c(pppppuVar18 + 5,&local_448,param_1,&local_268);
    local_268 = (undefined ********)FUN_148f62586;
    pppppuStack_260 = (undefined8 *****)((ulonglong)pppppuStack_260 & 0xffffffff00000000);
    FUN_148f624aa(param_1[0x57] + 0xb,&local_448,param_1,&local_268);
    local_268 = (undefined ********)FUN_148f62664;
    pppppuStack_260 = (undefined8 *****)((ulonglong)pppppuStack_260 & 0xffffffff00000000);
    FUN_148f624aa(param_1[0x57] + 0xe,&local_448,param_1,&local_268);
    pppppuVar18 = param_1[0x57];
    local_268 = (undefined ********)0x0;
    pppppuStack_260 = (undefined8 *****)((ulonglong)pppppuStack_260 & 0xffffffff00000000);
    FUN_1446efa72(&local_268,0,3,0x10);
    ppppppppuVar14 = local_268;
    pppppuStack_260 = (undefined8 *****)CONCAT44(pppppuStack_260._4_4_,3);
    *local_268 = (undefined *******)&PTR_LAB_14af12c50;
    pppppuVar20 = (undefined8 *****)FUN_144a3f946();
    ppppppppuVar14[2] = (undefined *******)pppppuVar20;
    *ppppppppuVar14 = (undefined *******)&PTR_FUN_14ba26e70;
    ppppppppuVar14[3] = (undefined *******)0x0;
    FUN_14485c47a(ppppppppuVar14 + 3,param_1);
    ppppppppuVar14[4] = (undefined *******)param_1;
    FUN_148515308(pppppuVar18 + 0x17,&local_448,&local_268);
    FUN_1449db362(&local_268);
    pppppuVar18 = param_1[0x56];
    lVar26 = (*(code *)(*param_1)[0x59])(param_1);
    lVar32 = lVar26 + 0x28;
    if (lVar26 == 0) {
      lVar32 = 0;
    }
    (*(code *)(*pppppuVar18)[100])(pppppuVar18,param_1[0x57],lVar32);
    (*(code *)(*param_1[0x56])[0x6a])(param_1[0x56],0);
  }
  pppppuVar18 = (undefined8 *****)FUN_148f4925a(param_1);
  if ((pppppuVar18 != (undefined8 *****)0x0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(pppppuVar18);
  }
  param_1[0x55] = pppppuVar18;
  (*(code *)(*pppppuVar18)[0x54])(pppppuVar18,param_1);
  local_268 = (undefined ********)param_1[0x7b];
  pppppuStack_260 = param_1[0x7c];
  local_258 = param_1[0x7d];
  uStack_250 = param_1[0x7e];
  local_248 = (undefined **)param_1[0x7f];
  uStack_240 = param_1[0x80];
  local_238 = param_1[0x81];
  local_228 = param_1[0x82];
  pppppuStack_220 = param_1[0x83];
  local_218 = param_1[0x84];
  uStack_230 = (undefined8 ****)0x0;
  uStack_210 = 0;
  local_4d8 = 0;
  local_4c8 = &PTR_LAB_14ba26ee0;
  local_4e8[0] = FUN_14436e2e8;
  local_4c0 = param_1;
  FUN_1484f7652(param_1[0x55] + 6,local_4e8,&local_268,local_5c0);
  if (param_1[0x56] != (undefined8 *****)0x0) {
    FUN_1484f6c9e(param_1[0x55] + 6,param_1[0x56],0,0);
  }
  if (*(int *)(param_1[0x4f] + 0xd) < 2) {
    plVar19 = (longlong *)(*(code *)(*param_1)[0x59])(param_1);
    local_268 = (undefined ********)0x14ba1ed56;
    pppppuStack_260._0_4_ = 0xf;
    FUN_1446e940c(&local_448,&local_268);
    local_268 = (undefined ********)0x14ba1c808;
    pppppuStack_260 = (undefined8 *****)CONCAT44(pppppuStack_260._4_4_,0x15);
    FUN_1446e940c(&local_4a0,&local_268);
    FUN_140208bae(&local_268,&local_4a0,&local_448,
                  L"This object has only a single Polygroup. Use the GrpGen, GrpPnt or TriSel (Create Polygroup) tools to modify PolyGroups."
                 );
    (**(code **)(*plVar19 + 0x340))(plVar19,&local_268,3);
    if (local_268 != (undefined ********)0x0) {
      (*(code *)(*local_268)[2])();
    }
  }
  pppppuVar18 = param_1[0x118];
  if (pppppuVar18 != (undefined8 *****)0x0) {
    ppppppuVar28 = param_1 + 0x11c;
    if ((undefined8 ******)param_1[0x11a] != (undefined8 ******)0x0) {
      ppppppuVar28 = (undefined8 ******)param_1[0x11a];
    }
    local_268 = (undefined ********)param_1;
    uVar21 = (*(code *)(*ppppppuVar28)[1])(ppppppuVar28);
    (*(code *)pppppuVar18)(uVar21,&local_268);
  }
  if (local_4f8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_148f5f1a8:
  if ((local_48 ^ (ulonglong)auStack_5f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f6177c FUN_148f6177c body=148 status=ok
// SIG undefined FUN_148f6177c(void)

undefined8 FUN_148f6177c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14599a518();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f61811 FUN_148f61811 body=148 status=ok
// SIG undefined FUN_148f61811(void)

undefined8 FUN_148f61811(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14599a6f0();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f618a6 FUN_148f618a6 body=148 status=ok
// SIG undefined FUN_148f618a6(void)

undefined8 FUN_148f618a6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14599a9b4();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f6193b FUN_148f6193b body=148 status=ok
// SIG undefined FUN_148f6193b(void)

undefined8 FUN_148f6193b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14599a604();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f619d0 FUN_148f619d0 body=148 status=ok
// SIG undefined FUN_148f619d0(void)

undefined8 FUN_148f619d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14599a8c8();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f61a65 FUN_148f61a65 body=148 status=ok
// SIG undefined FUN_148f61a65(void)

undefined8 FUN_148f61a65(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14599a7dc();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f61afa FUN_148f61afa body=148 status=ok
// SIG undefined FUN_148f61afa(void)

undefined8 FUN_148f61afa(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14595e3a6();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f61b90 FUN_148f61b90 body=212 status=ok
// SIG undefined FUN_148f61b90(void)

void FUN_148f61b90(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_148f787a8(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f61c65 FUN_148f61c65 body=148 status=ok
// SIG undefined FUN_148f61c65(void)

undefined8 FUN_148f61c65(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1458bd2e4();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f61cfa FUN_148f61cfa body=218 status=ok
// SIG undefined FUN_148f61cfa(void)

undefined8
FUN_148f61cfa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_58 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14ba26c50;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f61dde FUN_148f61dde body=148 status=ok
// SIG undefined FUN_148f61dde(void)

undefined8 FUN_148f61dde(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1411d87e8();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f61e73 FUN_148f61e73 body=148 status=ok
// SIG undefined FUN_148f61e73(void)

undefined8 FUN_148f61e73(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459f4db6();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f61f08 FUN_148f61f08 body=148 status=ok
// SIG undefined FUN_148f61f08(void)

undefined8 FUN_148f61f08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459f533e();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f61f9d FUN_148f61f9d body=148 status=ok
// SIG undefined FUN_148f61f9d(void)

undefined8 FUN_148f61f9d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459f4a06();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f62032 FUN_148f62032 body=148 status=ok
// SIG undefined FUN_148f62032(void)

undefined8 FUN_148f62032(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459f5516();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f620c7 FUN_148f620c7 body=148 status=ok
// SIG undefined FUN_148f620c7(void)

undefined8 FUN_148f620c7(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459f5166();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f6215c FUN_148f6215c body=148 status=ok
// SIG undefined FUN_148f6215c(void)

undefined8 FUN_148f6215c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459f4f8e();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f621f1 FUN_148f621f1 body=148 status=ok
// SIG undefined FUN_148f621f1(void)

undefined8 FUN_148f621f1(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459f482e();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f62286 FUN_148f62286 body=148 status=ok
// SIG undefined FUN_148f62286(void)

undefined8 FUN_148f62286(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459f3e0a();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f6231c FUN_148f6231c body=218 status=ok
// SIG undefined FUN_148f6231c(void)

undefined8
FUN_148f6231c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_58 = &PTR_LAB_14aeff220;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14ba26d90;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1484d65de(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f623f8 FUN_148f623f8 body=177 status=ok
// SIG undefined FUN_148f623f8(void)

void FUN_148f623f8(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  if ((char)param_1[0x70] == '\x01') {
    lVar8 = param_3[5];
    lVar3 = param_3[6];
    lVar4 = *param_3;
    lVar5 = param_3[1];
    lVar1 = param_3[3];
    lVar2 = param_3[2];
    param_1[0x90] = param_3[4];
    param_1[0x91] = lVar8;
    param_1[0x92] = lVar3;
    param_1[0x93] = lVar4;
    param_1[0x94] = lVar5;
    param_1[0x95] = lVar2;
    param_1[0x96] = lVar1;
    uVar6 = *(undefined4 *)((longlong)param_3 + 0x44);
    lVar2 = param_3[9];
    uVar7 = *(undefined4 *)((longlong)param_3 + 0x4c);
    lVar1 = param_3[10];
    *(int *)(param_1 + 0x97) = (int)param_3[8];
    *(undefined4 *)((longlong)param_1 + 0x4bc) = uVar6;
    *(int *)(param_1 + 0x98) = (int)lVar2;
    *(undefined4 *)((longlong)param_1 + 0x4c4) = uVar7;
    param_1[0x99] = lVar1;
    plVar9 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
    (**(code **)(*plVar9 + 0x348))(plVar9);
    *(undefined1 *)(param_1 + 0x8f) = 1;
    if (param_1[0x56] == 0) {
      bVar10 = false;
    }
    else {
      bVar10 = *(char *)(param_1[0x56] + 0x83) == '\0';
    }
    *(bool *)(param_1 + 0x9a) = bVar10;
  }
  return;
}



// FUNCTION 148f624aa FUN_148f624aa body=218 status=ok
// SIG undefined FUN_148f624aa(void)

undefined8
FUN_148f624aa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_58 = &PTR_LAB_14af12c50;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14ba26e00;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_148515308(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f62586 FUN_148f62586 body=220 status=ok
// SIG undefined FUN_148f62586(void)

void FUN_148f62586(longlong param_1,longlong *param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14852f8ce(*(undefined8 *)(param_1 + 0x2a0));
  FUN_148f63dcc(param_1,*(longlong *)(param_1 + 0x2a0) + 0x390);
  (**(code **)(*param_2 + 0x2b0))(param_2,&local_88);
  *(undefined8 *)(param_1 + 0x428) = local_68;
  *(undefined8 *)(param_1 + 0x430) = uStack_60;
  *(undefined8 *)(param_1 + 0x438) = local_58;
  *(undefined8 *)(param_1 + 0x440) = local_88;
  *(undefined8 *)(param_1 + 0x448) = uStack_80;
  *(undefined8 *)(param_1 + 0x450) = local_78;
  *(undefined8 *)(param_1 + 0x458) = local_70;
  *(undefined4 *)(param_1 + 0x460) = local_48;
  *(undefined4 *)(param_1 + 0x464) = uStack_44;
  *(undefined4 *)(param_1 + 0x468) = uStack_40;
  *(undefined4 *)(param_1 + 0x46c) = uStack_3c;
  *(undefined8 *)(param_1 + 0x470) = local_38;
  FUN_148f63ea8(param_1);
  *(undefined1 *)(param_1 + 0x380) = 1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f62664 FUN_148f62664 body=426 status=ok
// SIG undefined FUN_148f62664(void)

void FUN_148f62664(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined1 *)(param_1 + 0x380) = 0;
  if (*(char *)(param_1 + 0x478) == '\x01') {
    FUN_148f63ef6(param_1);
  }
  *(undefined1 *)(param_1 + 0x478) = 0;
  *(undefined1 *)(param_1 + 0x4d1) = 1;
  lVar1 = *(longlong *)(param_1 + 0x2a0);
  FUN_14852f8ce(lVar1);
  *(undefined1 *)(*(longlong *)(lVar1 + 0x80) + 0xb1) = 0;
  (**(code **)(*param_2 + 0x2b0))(param_2,&local_d8);
  uVar9 = uStack_bc;
  uVar8 = uStack_c0;
  uVar7 = uStack_c4;
  uVar6 = local_c8;
  uVar3 = local_d8;
  uVar4 = (undefined4)uStack_d0;
  uVar5 = uStack_d0._4_4_;
  plVar2 = *(longlong **)(param_1 + 0x2b0);
  if (plVar2 != (longlong *)0x0) {
    if (*(char *)(*(longlong *)(param_1 + 0x148) + 0xb0) == '\x01') {
      local_d8 = *(undefined8 *)(param_1 + 0x360);
      uStack_d0 = *(undefined8 *)(param_1 + 0x368);
      local_c8 = *(undefined4 *)(param_1 + 0x370);
      uStack_c4 = *(undefined4 *)(param_1 + 0x374);
      uStack_c0 = *(undefined4 *)(param_1 + 0x378);
      uStack_bc = *(undefined4 *)(param_1 + 0x37c);
      uStack_a0 = 0;
      local_98 = 0x3ff0000000000000;
      uStack_90 = 0x3ff0000000000000;
      local_88 = 0x3ff0000000000000;
      uStack_80 = 0;
      FUN_148415b4c(plVar2,&local_d8,1);
    }
    else {
      (**(code **)(*plVar2 + 0x348))(plVar2,&DAT_14c846510);
    }
  }
  *(undefined8 *)(param_1 + 0x310) = local_b8;
  *(undefined8 *)(param_1 + 0x318) = uStack_b0;
  *(undefined8 *)(param_1 + 800) = local_a8;
  *(undefined8 *)(param_1 + 0x328) = uVar3;
  *(undefined4 *)(param_1 + 0x330) = uVar4;
  *(undefined4 *)(param_1 + 0x334) = uVar5;
  *(undefined4 *)(param_1 + 0x338) = uVar6;
  *(undefined4 *)(param_1 + 0x33c) = uVar7;
  *(undefined4 *)(param_1 + 0x340) = uVar8;
  *(undefined4 *)(param_1 + 0x344) = uVar9;
  FUN_148f644de(param_1);
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f62810 FUN_148f62810 body=278 status=ok
// SIG undefined FUN_148f62810(void)

void FUN_148f62810(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = (**(code **)(*(longlong *)param_1[0x56] + 0x358))();
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  if (cVar1 == '\0') {
    local_38 = L"ToggleTransformGizmoNotify";
    local_30 = 0x1a;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UEditMeshPolygonsTool";
    local_30 = 0x15;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&local_38,local_40,local_3c,
                  L"Transform gizmo hidden, unhide by toggling \"Gizmo Visible\" (or using hotkey, if set)"
                 );
    (**(code **)(*plVar2 + 0x340))(plVar2,&local_38,2);
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000148f6288b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x340))(plVar2,param_1 + 0x58,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f62932 FUN_148f62932 body=1897 status=ok
// SIG undefined FUN_148f62932(void)

void FUN_148f62932(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined4 uVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  longlong *local_148;
  longlong *local_140;
  undefined8 *local_138 [11];
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  longlong local_d8 [5];
  wchar_t *local_b0;
  undefined4 local_a8;
  int local_a0;
  int iStack_9c;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(char *)((longlong)param_1 + 0x139) == '\x01') {
    param_1[0x4d] = 0;
    plVar10 = (longlong *)param_1[0x4e];
    if (plVar10 != (longlong *)0x0) {
      param_1[0x4e] = 0;
      LOCK();
      plVar11 = plVar10 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    param_1[0x4f] = 0;
    puVar2 = (undefined8 *)param_1[0x50];
    if (puVar2 != (undefined8 *)0x0) {
      param_1[0x50] = 0;
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2);
        LOCK();
        piVar1 = (int *)((longlong)puVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_178);
        }
      }
    }
  }
  else {
    if (param_1[0x4c] != 0) {
      uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
      FUN_1485564be(&local_a0,uVar3);
      if (local_98 != (longlong *)0x0 && CONCAT44(iStack_9c,local_a0) != 0) {
        (**(code **)(*local_98 + 0x30))();
      }
      (**(code **)(*(longlong *)param_1[0x4c] + 0x300))((longlong *)param_1[0x4c],param_2);
      param_1[0x4c] = 0;
    }
    plVar10 = (longlong *)param_1[0x29];
    pwVar9 = L"PolyEditTool";
    pwVar7 = L"PolyEditTool";
    if ((char)param_1[0x27] != '\0') {
      pwVar7 = L"TriEditTool";
    }
    FUN_140056680(&local_a0,pwVar7);
    (**(code **)(*plVar10 + 0x2a0))(plVar10,param_1,&local_a0);
    if (CONCAT44(iStack_9c,local_a0) != 0) {
      FUN_1400020a8();
    }
    plVar10 = *(longlong **)(param_1[0x54] + 0x78);
    pwVar7 = L"PolyEditTool";
    if ((char)param_1[0x27] != '\0') {
      pwVar7 = L"TriEditTool";
    }
    FUN_140056680(&local_a0,pwVar7);
    (**(code **)(*plVar10 + 0x2a0))(plVar10,param_1,&local_a0);
    if (CONCAT44(iStack_9c,local_a0) != 0) {
      FUN_1400020a8();
    }
    plVar10 = (longlong *)param_1[0x2f];
    if ((char)param_1[0x27] != '\0') {
      pwVar9 = L"TriEditTool";
    }
    FUN_140056680(&local_a0,pwVar9);
    (**(code **)(*plVar10 + 0x2a0))(plVar10,param_1,&local_a0);
    if (CONCAT44(iStack_9c,local_a0) != 0) {
      FUN_1400020a8();
    }
    plVar10 = param_1 + 0x29;
    plVar11 = param_1 + 0x54;
    uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
    uVar3 = FUN_148451390(uVar3);
    uVar4 = FUN_1411d87e8();
    FUN_148442eec(uVar3,uVar4);
    param_1[0x53] = 0;
    (**(code **)(*(longlong *)param_1[0x30] + 0x2d0))((longlong *)param_1[0x30],param_2);
    (**(code **)(*(longlong *)param_1[0x31] + 0x2d0))((longlong *)param_1[0x31],param_2);
    (**(code **)(*(longlong *)param_1[0x32] + 0x2d0))((longlong *)param_1[0x32],param_2);
    (**(code **)(*(longlong *)param_1[0x33] + 0x2d0))((longlong *)param_1[0x33],param_2);
    (**(code **)(*(longlong *)param_1[0x34] + 0x2d0))((longlong *)param_1[0x34],param_2);
    (**(code **)(*(longlong *)param_1[0x35] + 0x2d0))((longlong *)param_1[0x35],param_2);
    (**(code **)(*(longlong *)param_1[0x36] + 0x2d0))((longlong *)param_1[0x36],param_2);
    (**(code **)(*(longlong *)param_1[0x37] + 0x2d0))((longlong *)param_1[0x37],param_2);
    uVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
    plVar5 = (longlong *)FUN_148451354(uVar4);
    (**(code **)(*plVar5 + 0x2d8))(plVar5,param_1);
    (**(code **)(*(longlong *)param_1[0x55] + 0x2a8))();
    if (param_1[0x28] != 0) {
      FUN_14850635b(param_1[0x14]);
      if ((char)param_2 == '\x01') {
        local_78 = 0;
        local_70 = 0;
        local_98 = (longlong *)0x0;
        uStack_90 = 0;
        local_6c = 0xffffffff00000080;
        local_64 = 0;
        local_58 = 0;
        local_50 = 0;
        lVar6 = *plVar11;
        local_a0 = 1;
        if (*(int *)(lVar6 + 1000) <= *(int *)(lVar6 + 0x414)) {
          local_a0 = (uint)(*(int *)(lVar6 + 0x438) <= *(int *)(lVar6 + 0x464)) * 2 + 2;
        }
        iStack_9c = 2 - (uint)*(byte *)(param_1 + 0x27);
        local_d8[2] = 0;
        local_d8[3] = 0;
        local_d8[0] = 0;
        local_d8[1] = 0;
        if ((*(int *)(lVar6 + 1000) == *(int *)(lVar6 + 0x414)) &&
           (*(int *)(lVar6 + 0x438) == *(int *)(lVar6 + 0x464))) {
          bVar12 = *(int *)(lVar6 + 0x398) == *(int *)(lVar6 + 0x3c4);
        }
        else {
          bVar12 = false;
        }
        if ((*(byte *)(param_1 + 0x27) == 0) || (0 < (int)param_1[0x117])) {
          plVar5 = local_d8;
          if (bVar12) {
            plVar5 = (longlong *)0x0;
          }
          FUN_146c09afc(param_1[0x4d],plVar5);
          uVar8 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        }
        else {
          uVar8 = 0;
        }
        local_140 = plVar10;
        if (!bVar12) {
          plVar10 = local_d8;
          if ((char)uVar8 == '\0') {
            plVar10 = (longlong *)0x0;
          }
          if ((char)param_1[0x27] == '\x01') {
            FUN_14854e04c(param_1[0x54],&local_a0);
          }
          else {
            FUN_14854da70(param_1[0x54],&local_a0,plVar10);
          }
        }
        local_148 = plVar11;
        lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
        local_b0 = L"EditMeshPolygonsToolTransactionName";
        local_a8 = 0x23;
        FUN_1446e940c(local_dc,&local_b0);
        local_b0 = L"UEditMeshPolygonsTool";
        local_a8 = 0x15;
        FUN_1446e940c(local_e0,&local_b0);
        FUN_140208bae(&local_b0,local_e0,local_dc,L"Deform Mesh");
        (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x10))(lVar6 + 0x28,&local_b0);
        if (local_b0 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_b0 + 0x10))();
        }
        FUN_146c3cfa5(param_1[0x4d],param_1 + 0x71,1);
        local_b0 = (wchar_t *)0x1000000010101;
        local_158 = 0;
        FUN_148506f34(param_1[0x14],param_1[0x4d],uVar8);
        plVar10 = local_140;
        plVar11 = local_148;
        if ((int)uStack_90 != local_64) {
          FUN_14855093c(param_1,param_1[0x14],&local_a0);
        }
        lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
        (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x18))(lVar6 + 0x28);
        if (local_d8[2] != 0) {
          FUN_1400020a8();
        }
        if (local_d8[0] != 0) {
          FUN_1400020a8();
        }
        local_50 = 0;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        FUN_140345f8a(&local_98);
      }
      FUN_143b84538(param_1[0x28],local_138);
      if (local_138[0] != (undefined8 *)0x0) {
        (**(code **)*local_138[0])(local_138[0],1);
      }
      param_1[0x28] = 0;
    }
    (**(code **)(*(longlong *)param_1[0x54] + 0x2a8))();
    param_1[0x4d] = 0;
    plVar10[4] = 0;
    plVar10[5] = 0;
    plVar10[2] = 0;
    plVar10[3] = 0;
    *plVar10 = 0;
    plVar10[1] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    plVar11[2] = 0;
    plVar11[3] = 0;
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar10 = (longlong *)param_1[0x4e];
    if (plVar10 != (longlong *)0x0) {
      param_1[0x4e] = 0;
      LOCK();
      plVar11 = plVar10 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    param_1[0x4f] = 0;
    plVar10 = (longlong *)param_1[0x50];
    if (plVar10 != (longlong *)0x0) {
      param_1[0x50] = 0;
      LOCK();
      plVar11 = plVar10 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    param_1[0x51] = 0;
    plVar10 = (longlong *)param_1[0x52];
    if (plVar10 != (longlong *)0x0) {
      param_1[0x52] = 0;
      LOCK();
      plVar11 = plVar10 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f630ba FUN_148f630ba body=1614 status=ok
// SIG undefined FUN_148f630ba(void)

void FUN_148f630ba(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_1e8 [32];
  wchar_t **local_1c8;
  longlong **local_1c0;
  undefined1 local_1b8;
  undefined8 *local_1b0;
  undefined1 **local_1a8;
  undefined8 local_198;
  undefined8 local_190;
  longlong local_188 [2];
  undefined1 local_178 [4];
  undefined1 local_174 [4];
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  longlong *local_168 [2];
  wchar_t *local_158;
  undefined4 local_150;
  undefined1 *local_148 [2];
  undefined8 local_138;
  undefined **local_128;
  undefined8 local_120;
  undefined1 *local_108 [2];
  undefined8 local_f8;
  undefined **local_e8;
  undefined8 local_e0;
  undefined1 *local_c8 [2];
  undefined8 local_b8;
  undefined **local_a8;
  undefined8 local_a0;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_78 = 0;
  local_68 = &PTR_LAB_14ba26f00;
  local_88[0] = &LAB_14436e37e;
  local_158 = L"ToggleLockRotationTooltip";
  local_150 = 0x19;
  local_198 = param_2;
  local_60 = param_1;
  FUN_1446e940c(local_16c,&local_158);
  local_158 = L"UEditMeshPolygonsTool";
  local_150 = 0x15;
  FUN_1446e940c(local_170,&local_158);
  FUN_140208bae(local_168,local_170,local_16c,L"Toggle Frame Rotation Lock on and off");
  local_158 = L"ToggleLockRotationUIName";
  local_150 = 0x18;
  FUN_1446e940c(local_174,&local_158);
  local_158 = L"UEditMeshPolygonsTool";
  local_150 = 0x15;
  FUN_1446e940c(local_178,&local_158);
  FUN_140208bae(&local_158,local_178,local_174,L"Lock Rotation");
  FUN_140056680(local_188,L"ToggleLockRotation");
  local_1b0 = &DAT_14c965118;
  local_1b8 = 1;
  local_1c8 = &local_158;
  local_1c0 = local_168;
  local_1a8 = local_88;
  local_190 = param_1;
  FUN_148450124(local_198,param_1,0x2712,local_188);
  if (local_188[0] != 0) {
    FUN_1400020a8();
  }
  if (local_158 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_158 + 0x10))();
  }
  if (local_168[0] != (longlong *)0x0) {
    (**(code **)(*local_168[0] + 0x10))();
  }
  uVar1 = local_190;
  local_b8 = 0;
  local_a8 = &PTR_LAB_14ba26f20;
  local_a0 = local_190;
  local_c8[0] = &LAB_14436e3d8;
  local_158 = L"DeleteSelectionTooltip";
  local_150 = 0x16;
  FUN_1446e940c(local_16c,&local_158);
  local_158 = L"UEditMeshPolygonsTool";
  local_150 = 0x15;
  FUN_1446e940c(local_170,&local_158);
  FUN_140208bae(local_168,local_170,local_16c,L"Delete Selection");
  local_158 = L"DeleteSelectionUIName";
  local_150 = 0x15;
  FUN_1446e940c(local_174,&local_158);
  local_158 = L"UEditMeshPolygonsTool";
  local_150 = 0x15;
  FUN_1446e940c(local_178,&local_158);
  FUN_140208bae(&local_158,local_178,local_174,L"Delete Selection");
  FUN_140056680(local_188,L"DeleteSelectionBackSpaceKey");
  local_1b0 = &DAT_14c966f40;
  local_1c0 = local_168;
  local_1b8 = 0;
  local_1c8 = &local_158;
  local_1a8 = local_c8;
  FUN_148450124(local_198,uVar1,0x2713,local_188);
  if (local_188[0] != 0) {
    FUN_1400020a8();
  }
  if (local_158 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_158 + 0x10))();
  }
  if (local_168[0] != (longlong *)0x0) {
    (**(code **)(*local_168[0] + 0x10))();
  }
  uVar1 = local_190;
  local_f8 = 0;
  local_e8 = &PTR_LAB_14ba26f20;
  local_e0 = local_190;
  local_108[0] = &LAB_14436e3d8;
  local_158 = L"DeleteSelectionTooltip";
  local_150 = 0x16;
  FUN_1446e940c(local_16c,&local_158);
  local_158 = L"UEditMeshPolygonsTool";
  local_150 = 0x15;
  FUN_1446e940c(local_170,&local_158);
  FUN_140208bae(local_168,local_170,local_16c,L"Delete Selection");
  local_158 = L"DeleteSelectionUIName";
  local_150 = 0x15;
  FUN_1446e940c(local_174,&local_158);
  local_158 = L"UEditMeshPolygonsTool";
  local_150 = 0x15;
  FUN_1446e940c(local_178,&local_158);
  FUN_140208bae(&local_158,local_178,local_174,L"Delete Selection");
  FUN_140056680(local_188,L"DeleteSelectionDeleteKey");
  local_1b0 = &DAT_14c966f58;
  local_1c0 = local_168;
  local_1b8 = 0;
  local_1c8 = &local_158;
  local_1a8 = local_108;
  FUN_148450124(local_198,uVar1,0x2714,local_188);
  if (local_188[0] != 0) {
    FUN_1400020a8();
  }
  if (local_158 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_158 + 0x10))();
  }
  if (local_168[0] != (longlong *)0x0) {
    (**(code **)(*local_168[0] + 0x10))();
  }
  uVar1 = local_190;
  local_138 = 0;
  local_128 = &PTR_LAB_14ba26f40;
  local_120 = local_190;
  local_148[0] = &LAB_14436e476;
  local_158 = L"ToggleGizmoVisibilityTooltip";
  local_150 = 0x1c;
  FUN_1446e940c(local_16c,&local_158);
  local_158 = L"UEditMeshPolygonsTool";
  local_150 = 0x15;
  FUN_1446e940c(local_170,&local_158);
  FUN_140208bae(local_168,local_170,local_16c,L"Toggle the visibility of the transform gizmo");
  local_158 = L"ToggleGizmoVisibilityUIName";
  local_150 = 0x1b;
  FUN_1446e940c(local_174,&local_158);
  local_158 = L"UEditMeshPolygonsTool";
  local_150 = 0x15;
  FUN_1446e940c(local_178,&local_158);
  FUN_140208bae(&local_158,local_178,local_174,L"Toggle Transform Gizmo Visibility");
  FUN_140056680(local_188,L"ToggleGizmoVisibilityKey");
  local_1b0 = &DAT_14c966e80;
  local_1b8 = 0;
  local_1c8 = &local_158;
  local_1c0 = local_168;
  local_1a8 = local_148;
  FUN_148450124(local_198,uVar1,0x2715,local_188);
  if (local_188[0] != 0) {
    FUN_1400020a8();
  }
  if (local_158 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_158 + 0x10))();
  }
  if (local_168[0] != (longlong *)0x0) {
    (**(code **)(*local_168[0] + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f6370a FUN_148f6370a body=258 status=ok
// SIG undefined FUN_148f6370a(void)

void FUN_148f6370a(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_1[0x54] == 0) || (*(char *)(param_1[0x54] + 0x6c8) != '\x01')) {
    if ((int)param_1[0x9b] == 0) {
      *(undefined4 *)(param_1 + 0x9b) = param_2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x9b) = 0;
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
    local_38 = L"CannotActDuringMarquee";
    local_30 = 0x16;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UEditMeshPolygonsTool";
    local_30 = 0x15;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&local_38,local_40,local_3c,L"Cannot perform action while marquee selecting");
    (**(code **)(*plVar1 + 0x340))(plVar1,&local_38,3);
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f63848 FUN_148f63848 body=379 status=ok
// SIG undefined FUN_148f63848(void)

void FUN_148f63848(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar5 = (undefined8 *)(param_1 + 0x2f0);
  puVar6 = (undefined8 *)(param_1 + 0x2f8);
  puVar7 = (undefined8 *)(param_1 + 0x300);
  puVar8 = (undefined8 *)(param_1 + 0x308);
  if (*(int *)(*(longlong *)(param_1 + 0x148) + 0xac) != 1) {
    puVar8 = (undefined8 *)(param_1 + 0x3f0);
    puVar7 = (undefined8 *)(param_1 + 1000);
    puVar6 = (undefined8 *)(param_1 + 0x3e0);
    puVar5 = (undefined8 *)(param_1 + 0x3d8);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x148) + 0xb0) == '\x01') {
    puVar5 = (undefined8 *)(param_1 + 0x360);
    puVar6 = (undefined8 *)(param_1 + 0x368);
    puVar7 = (undefined8 *)(param_1 + 0x370);
    puVar8 = (undefined8 *)(param_1 + 0x378);
  }
  uVar1 = *puVar8;
  uVar2 = *puVar7;
  uVar3 = *puVar6;
  uVar4 = *puVar5;
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x2d8);
  *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x2e8);
  *(undefined8 *)(param_1 + 0x328) = uVar4;
  *(undefined8 *)(param_1 + 0x330) = uVar3;
  *(undefined8 *)(param_1 + 0x338) = uVar2;
  *(undefined8 *)(param_1 + 0x340) = uVar1;
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    uStack_60 = 0;
    local_58 = 0x3ff0000000000000;
    uStack_50 = 0x3ff0000000000000;
    local_48 = 0x3ff0000000000000;
    uStack_40 = 0;
    local_98 = uVar4;
    uStack_90 = uVar3;
    local_88 = uVar2;
    uStack_80 = uVar1;
    local_78 = *(undefined8 *)(param_1 + 0x2d8);
    uStack_70 = *(undefined8 *)(param_1 + 0x2e0);
    local_68 = *(undefined8 *)(param_1 + 0x2e8);
    FUN_148415b4c(*(longlong *)(param_1 + 0x2b0),&local_98,
                  CONCAT71((int7)((ulonglong)puVar7 >> 8),1));
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f639c4 FUN_148f639c4 body=196 status=ok
// SIG undefined FUN_148f639c4(void)

double * FUN_148f639c4(longlong param_1,double *param_2)

{
  bool bVar1;
  undefined1 auStack_68 [32];
  double local_48;
  double dStack_40;
  double local_38;
  double local_30;
  double dStack_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x208) == 0) {
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    *param_2 = 0.0;
    param_2[1] = 0.0;
    *(undefined1 *)(param_2 + 6) = 0;
    if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  FUN_14853250a(*(longlong *)(param_1 + 0x208),&local_48,1);
  param_2[5] = local_20;
  param_2[3] = local_30;
  param_2[4] = dStack_28;
  param_2[2] = local_38;
  *param_2 = local_48;
  param_2[1] = dStack_40;
  if (local_48 <= local_30) {
    if (dStack_40 <= dStack_28) {
      bVar1 = local_38 <= local_20;
      goto LAB_148f63a31;
    }
  }
  bVar1 = false;
LAB_148f63a31:
  *(bool *)(param_2 + 6) = bVar1;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
}



// FUNCTION 148f63a8a FUN_148f63a8a body=833 status=ok
// SIG undefined FUN_148f63a8a(void)

bool FUN_148f63a8a(longlong param_1,undefined4 *param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double dStack_128;
  double local_120;
  double local_110;
  double dStack_108;
  double local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  undefined1 local_88;
  double local_60;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar1 = param_1 + 0x340;
  local_e8 = *(double *)(param_2 + 10);
  local_f8 = param_2[6];
  uStack_f4 = param_2[7];
  uStack_f0 = param_2[8];
  uStack_ec = param_2[9];
  FUN_146c5d1a4(lVar1,&local_d8);
  local_158 = *(undefined8 *)(param_2 + 4);
  local_168 = *param_2;
  uStack_164 = param_2[1];
  uStack_160 = param_2[2];
  uStack_15c = param_2[3];
  FUN_146ba22f0(lVar1,&local_110);
  local_138 = local_100;
  local_148 = local_110;
  dStack_140 = dStack_108;
  dVar5 = local_c8 * local_c8 + local_d8 * local_d8 + dStack_d0 * dStack_d0;
  if (9.99999993922529e-09 < dVar5) {
    dVar5 = 1.0 / SQRT(dVar5);
    local_d8 = local_d8 * dVar5;
    dStack_d0 = dStack_d0 * dVar5;
    local_c8 = local_c8 * dVar5;
    dVar5 = local_c8 * local_c8 + local_d8 * local_d8 + dStack_d0 * dStack_d0;
  }
  dVar5 = SQRT(dVar5);
  dVar6 = 1.0 / dVar5;
  if (0.0 < dVar5) {
    local_130 = local_d8 * dVar6;
    dStack_128 = dStack_d0 * dVar6;
  }
  else {
    local_130 = 0.0;
    dStack_128 = 0.0;
  }
  local_120 = (double)(-(ulonglong)(0.0 < dVar5) & (ulonglong)(local_c8 * dVar6));
  if (*(char *)(param_1 + 0x439) == '\x01') {
    lVar2 = *(longlong *)(param_1 + 0x1f0);
    FUN_146bee918(lVar2,0);
    *(ulonglong *)(lVar2 + 0x10) =
         (ulonglong)
         (uint)(*(int *)(*(longlong *)(lVar2 + 8) + 0x214) +
               *(int *)(*(longlong *)(lVar2 + 8) + 0x218));
    *(undefined1 *)(param_1 + 0x439) = 0;
  }
  local_d8 = 1.79769313486232e+308;
  local_c8 = 0.0;
  local_b8 = (longlong *)0x0;
  local_88 = 0;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x40))
                    (*(longlong **)(param_1 + 0x1f0),&local_148,&local_d8);
  if (local_c8 != 0.0) {
    plVar4 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar4 = local_a8;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (iVar3 != -1) {
    if (*(char *)(param_1 + 0x439) == '\x01') {
      lVar2 = *(longlong *)(param_1 + 0x1f0);
      FUN_146bee918(lVar2,0);
      *(ulonglong *)(lVar2 + 0x10) =
           (ulonglong)
           (uint)(*(int *)(*(longlong *)(lVar2 + 8) + 0x214) +
                 *(int *)(*(longlong *)(lVar2 + 8) + 0x218));
      *(undefined1 *)(param_1 + 0x439) = 0;
    }
    FUN_1483b309a(&local_d8,*(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 8),iVar3,&local_148);
    local_100 = (local_120 * local_60 + local_138) * *(double *)(param_1 + 0x388);
    dStack_108 = (dStack_128 * local_60 + dStack_140) * *(double *)(param_1 + 0x380);
    local_110 = (local_60 * local_130 + local_148) * *(double *)(param_1 + 0x378);
    FUN_146bed047(&local_f8,lVar1);
    dVar5 = *(double *)(param_1 + 0x370);
    dVar6 = *(double *)(param_1 + 0x368);
    *param_3 = (double)CONCAT44(uStack_f4,local_f8) + *(double *)(param_1 + 0x360);
    param_3[1] = (double)CONCAT44(uStack_ec,uStack_f0) + dVar6;
    param_3[2] = local_e8 + dVar5;
  }
  if ((local_38 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return iVar3 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f63dcc FUN_148f63dcc body=219 status=ok
// SIG undefined FUN_148f63dcc(void)

void FUN_148f63dcc(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_2 + 0x84) < *(int *)(param_2 + 0x58)) {
    FUN_140619b9c(param_2 + 0x50,local_28);
    FUN_1482dd62e(param_1 + 0x5b8,local_28);
  }
  else if (*(int *)(param_2 + 0xd4) < *(int *)(param_2 + 0xa8)) {
    FUN_140619b9c(param_2 + 0xa0,local_28);
    FUN_1482dd4c8(param_1 + 0x5b8,local_28);
  }
  else {
    if (*(int *)(param_2 + 8) <= *(int *)(param_2 + 0x34)) goto LAB_148f63e22;
    FUN_140619b9c(param_2,local_28);
    FUN_1482dd2be(param_1 + 0x5b8,local_28);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
LAB_148f63e22:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f63ea8 FUN_148f63ea8 body=77 status=ok
// SIG undefined FUN_148f63ea8(void)

void FUN_148f63ea8(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x8b0) != 0) {
    return;
  }
  uVar1 = FUN_14001cc68(0x150,0x10);
  FUN_1484ad3de(uVar1,0x11);
  *(undefined8 *)(param_1 + 0x8b0) = uVar1;
  FUN_148f6bf22(param_1,0);
  return;
}



// FUNCTION 148f63ef6 FUN_148f63ef6 body=1511 status=ok
// SIG undefined FUN_148f63ef6(void)

void FUN_148f63ef6(undefined **param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  undefined *puVar9;
  undefined *puVar10;
  char cVar11;
  longlong *plVar12;
  undefined ***pppuVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_1f8 [40];
  undefined *local_1d0;
  undefined *local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  undefined1 local_1a8 [24];
  double local_190;
  double local_188;
  double local_180;
  undefined *local_178;
  undefined *puStack_170;
  undefined *local_168;
  undefined *local_158;
  undefined *puStack_150;
  undefined *local_148;
  undefined *puStack_140;
  undefined *local_138;
  undefined *puStack_130;
  undefined *local_128;
  code *local_118 [2];
  undefined ***local_108;
  undefined **local_f8;
  undefined **local_f0;
  undefined **local_e8;
  undefined **local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  cVar11 = FUN_1485316a8(param_1[0x54]);
  if ((cVar11 != '\0') && (*(char *)(param_1 + 0x8f) != '\0')) {
    *(undefined1 *)(param_1 + 0x8f) = 0;
    puVar5 = param_1[0x96];
    local_158 = param_1[0x90];
    puStack_150 = param_1[0x91];
    local_148 = param_1[0x92];
    puVar9 = param_1[0x93];
    local_1d0 = param_1[0x94];
    puVar10 = param_1[0x95];
    local_168 = param_1[0x99];
    local_178 = param_1[0x97];
    puStack_170 = param_1[0x98];
    local_180 = (double)local_148 - (double)param_1[0x87];
    local_188 = (double)puStack_150 - (double)param_1[0x86];
    local_190 = (double)local_158 - (double)param_1[0x85];
    puVar1 = param_1[0x8b];
    puVar2 = param_1[0x8a];
    puVar3 = param_1[0x88];
    dVar7 = (double)local_168 - (double)param_1[0x8e];
    puVar4 = param_1[0x89];
    dVar15 = (double)puStack_170 - (double)param_1[0x8d];
    dVar8 = (double)local_178 - (double)param_1[0x8c];
    puStack_140 = puVar9;
    local_138 = local_1d0;
    puStack_130 = puVar10;
    local_128 = puVar5;
    FUN_146c5d1a4(param_1 + 0x7b,local_1a8,&local_190);
    puVar6 = param_1[0x4d];
    if ((0.0001 < local_180 * local_180 + local_190 * local_190 + local_188 * local_188) ||
       ((0.0001 < ((double)puVar5 - (double)puVar1) * ((double)puVar5 - (double)puVar1) +
                  ((double)puVar10 - (double)puVar2) * ((double)puVar10 - (double)puVar2) +
                  ((double)puVar9 - (double)puVar3) * ((double)puVar9 - (double)puVar3) +
                  ((double)local_1d0 - (double)puVar4) * ((double)local_1d0 - (double)puVar4) ||
        (0.0001 < dVar7 * dVar7 + dVar8 * dVar8 + dVar15 * dVar15)))) {
      if (*(char *)(param_1 + 0x9a) == '\x01') {
        puVar1 = param_1[0x88];
        puVar2 = param_1[0x89];
        puVar3 = param_1[0x8a];
        puVar4 = param_1[0x8b];
        dVar7 = (double)puVar4 * (double)puVar4 +
                (double)puVar3 * (double)puVar3 +
                (double)puVar1 * (double)puVar1 + (double)puVar2 * (double)puVar2;
        dVar16 = 0.0;
        dVar8 = 0.0;
        dVar14 = 0.0;
        dVar15 = 0.0;
        if (0.0 < dVar7) {
          dVar7 = 1.0 / dVar7;
          dVar15 = (double)puVar4 * dVar7;
          dVar14 = -(double)puVar3 * dVar7;
          dVar8 = -(double)puVar2 * dVar7;
          dVar16 = -(double)puVar1 * dVar7;
        }
        local_1b0 = (((double)puVar5 * dVar15 - dVar16 * (double)puVar9) - (double)local_1d0 * dVar8
                    ) - (double)puVar10 * dVar14;
        local_1c8 = (undefined *)
                    (((double)local_1d0 * dVar14 + (double)puVar5 * dVar16 + (double)puVar9 * dVar15
                     ) - (double)puVar10 * dVar8);
        local_1c0 = ((double)puVar10 * dVar16 + (double)puVar5 * dVar8 + (double)local_1d0 * dVar15)
                    - (double)puVar9 * dVar14;
        local_1b8 = ((double)puVar9 * dVar8 + (double)puVar5 * dVar14 + (double)puVar10 * dVar15) -
                    (double)local_1d0 * dVar16;
        local_118[0] = (code *)0x0;
        local_108 = (undefined ***)FUN_14001cc68(0x28,8);
        *local_108 = &PTR_FUN_14ba26f60;
        local_108[1] = param_1;
        local_108[2] = &local_1c8;
        local_108[3] = &local_178;
        local_108[4] = &local_158;
        if (local_108 + 1 != (undefined ***)0x0) {
          local_118[0] = FUN_14436e4dc;
        }
        FUN_1482df2d2(param_1 + 0xb7,puVar6,local_118);
      }
      else {
        local_108 = (undefined ***)0x0;
        local_f8 = &PTR_LAB_14ba26f80;
        local_e8 = &local_178;
        local_e0 = &local_158;
        local_118[0] = FUN_14436e6e6;
        local_f0 = param_1;
        FUN_1482df2d2(param_1 + 0xb7,puVar6,local_118);
      }
      if (local_118[0] != (code *)0x0) {
        pppuVar13 = local_108;
        if (local_108 == (undefined ***)0x0) {
          pppuVar13 = &local_f8;
        }
        (*(code *)(*pppuVar13)[2])();
      }
    }
    else {
      FUN_1482df22e(param_1 + 0xb7,puVar6);
    }
    FUN_14851bbe8(*(undefined8 *)(param_1[0x28] + 0x58),param_1[0x4d],2,5);
    plVar12 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*plVar12 + 0x348))(plVar12);
  }
  if ((local_d0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f644de FUN_148f644de body=311 status=ok
// SIG undefined FUN_148f644de(void)

void FUN_148f644de(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[0x116] != 0) {
    FUN_148f6bf22(param_1,1);
    lVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_48 = L"PolyMeshDeformationChange";
    local_40 = 0x19;
    FUN_1446e940c(local_4c,&local_48);
    local_48 = L"UEditMeshPolygonsTool";
    local_40 = 0x15;
    FUN_1446e940c(local_50,&local_48);
    FUN_140208bae(&local_48,local_50,local_4c,L"PolyMesh Edit");
    local_58 = *(undefined8 *)param_1[0x116];
    *(undefined8 *)param_1[0x116] = 0;
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x20))(lVar1 + 0x28,param_1,&local_58,&local_48);
    if (local_48 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_48 + 0x10))();
    }
    lVar1 = param_1[0x116];
    if (lVar1 != 0) {
      FUN_14854b8a8(lVar1);
      FUN_1400020a8(lVar1);
    }
  }
  param_1[0x116] = 0;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f64616 FUN_148f64616 body=2863 status=ok
// SIG undefined FUN_148f64616(void)

void FUN_148f64616(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_158 [40];
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  longlong *local_c8 [2];
  longlong local_b8;
  undefined1 local_ac [4];
  wchar_t *local_a8;
  longlong **pplStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(char *)((longlong)param_1 + 0x139) != '\0') goto LAB_148f6464a;
  FUN_148505016(param_1[0x28]);
  plVar3 = (longlong *)param_1[0x4c];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x2b8))(plVar3,param_2);
  }
  uVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
  plVar3 = (longlong *)FUN_148451354(uVar2);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x318))(plVar3);
  cVar1 = (**(code **)(*plVar3 + 0x20))(plVar3);
  if ((bool)*(char *)(param_1[0x29] + 0xb1) != (cVar1 == '\x01')) {
    *(bool *)(param_1[0x29] + 0xb1) = cVar1 == '\x01';
    (**(code **)(*param_1 + 0x330))(param_1,param_1[0x29]);
  }
  if ((char)param_1[0x8f] == '\x01') {
    FUN_148f63ef6(param_1);
  }
  if ((char)param_1[0x5a] == '\x01') {
    FUN_1484b31c2(*(undefined8 *)(*(longlong *)(param_1[0x28] + 0x58) + 0x50));
    FUN_148f65146(param_1);
    *(undefined1 *)(param_1 + 0x5a) = 0;
  }
  if ((int)param_1[0x9b] == 0) goto LAB_148f6464a;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_144a5dc74(&local_a8);
  (**(code **)(*plVar3 + 0x340))(plVar3,&local_a8,3);
  if (local_a8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_a8 + 0x10))();
  }
  switch((int)param_1[0x9b]) {
  case 3:
    lVar4 = param_1[0x54];
    if ((*(int *)(lVar4 + 0x398) == *(int *)(lVar4 + 0x3c4)) &&
       (*(int *)(lVar4 + 0x438) != *(int *)(lVar4 + 0x464))) {
      local_b8 = param_1[0x37];
      if ((local_b8 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e();
      }
      plVar3 = &local_b8;
    }
    else {
      *(undefined4 *)(param_1[0x30] + 0x48) = 0;
      *(undefined4 *)(param_1[0x30] + 0x4c) = 0;
      local_a8 = L"ExtrudeActivityLabel";
      pplStack_a0._0_4_ = 0x14;
      FUN_1446e940c(local_cc,&local_a8);
      local_a8 = L"UEditMeshPolygonsTool";
      pplStack_a0 = (longlong **)CONCAT44(pplStack_a0._4_4_,0x15);
      FUN_1446e940c(local_d0,&local_a8);
      FUN_140208bae(local_c8,local_d0,local_cc,L"Extrude");
      local_d8 = param_1[0x30];
      local_a8 = (wchar_t *)&local_d8;
      pplStack_a0 = local_c8;
      FUN_148f78d5c(param_1 + 0x38,local_ac,&local_a8);
      if (local_c8[0] != (longlong *)0x0) {
        (**(code **)(*local_c8[0] + 0x10))();
      }
      FUN_1446ddc76(local_c8,"PolyEd.Extrude",1);
      local_d8 = param_1[0x30];
      local_a8 = (wchar_t *)&local_d8;
      pplStack_a0 = local_c8;
      FUN_148f79280(param_1 + 0x42,local_ac);
      local_e0 = param_1[0x30];
      if ((local_e0 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e();
      }
      plVar3 = &local_e0;
    }
    goto LAB_148f647f2;
  case 4:
    *(undefined4 *)(param_1[0x30] + 0x48) = 1;
    *(undefined4 *)(param_1[0x30] + 0x4c) = 2;
    local_a8 = L"PushPullActivityLabel";
    pplStack_a0._0_4_ = 0x15;
    FUN_1446e940c(local_cc,&local_a8);
    local_a8 = L"UEditMeshPolygonsTool";
    pplStack_a0 = (longlong **)CONCAT44(pplStack_a0._4_4_,0x15);
    FUN_1446e940c(local_d0,&local_a8);
    FUN_140208bae(local_c8,local_d0,local_cc,L"Push/Pull");
    local_d8 = param_1[0x30];
    local_a8 = (wchar_t *)&local_d8;
    pplStack_a0 = local_c8;
    FUN_148f78d5c(param_1 + 0x38,local_ac,&local_a8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    FUN_1446ddc76(local_c8,"PolyEd.PushPull",1);
    local_d8 = param_1[0x30];
    local_a8 = (wchar_t *)&local_d8;
    pplStack_a0 = local_c8;
    FUN_148f79280(param_1 + 0x42,local_ac);
    local_e8 = param_1[0x30];
    if ((local_e8 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
    }
    plVar3 = &local_e8;
    goto LAB_148f647f2;
  case 5:
    *(undefined4 *)(param_1[0x30] + 0x48) = 0;
    *(undefined4 *)(param_1[0x30] + 0x4c) = 1;
    local_a8 = L"OffsetActivityLabel";
    pplStack_a0._0_4_ = 0x13;
    FUN_1446e940c(local_cc,&local_a8);
    local_a8 = L"UEditMeshPolygonsTool";
    pplStack_a0 = (longlong **)CONCAT44(pplStack_a0._4_4_,0x15);
    FUN_1446e940c(local_d0,&local_a8);
    FUN_140208bae(local_c8,local_d0,local_cc,L"Offset");
    local_d8 = param_1[0x30];
    local_a8 = (wchar_t *)&local_d8;
    pplStack_a0 = local_c8;
    FUN_148f78d5c(param_1 + 0x38,local_ac,&local_a8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    FUN_1446ddc76(local_c8,"PolyEd.Offset",1);
    local_d8 = param_1[0x30];
    local_a8 = (wchar_t *)&local_d8;
    pplStack_a0 = local_c8;
    FUN_148f79280(param_1 + 0x42,local_ac);
    local_f0 = param_1[0x30];
    if ((local_f0 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
    }
    plVar3 = &local_f0;
    goto LAB_148f647f2;
  case 6:
    *(undefined1 *)(*(longlong *)(param_1[0x31] + 0x40) + 0xb5) = 0;
    local_a8 = L"InsetActivityLabel";
    pplStack_a0._0_4_ = 0x12;
    FUN_1446e940c(local_cc,&local_a8);
    local_a8 = L"UEditMeshPolygonsTool";
    pplStack_a0 = (longlong **)CONCAT44(pplStack_a0._4_4_,0x15);
    FUN_1446e940c(local_d0,&local_a8);
    FUN_140208bae(local_c8,local_d0,local_cc,L"Inset");
    local_d8 = param_1[0x31];
    local_a8 = (wchar_t *)&local_d8;
    pplStack_a0 = local_c8;
    FUN_148f78d5c(param_1 + 0x38,local_ac,&local_a8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    FUN_1446ddc76(local_c8,"PolyEd.Inset",1);
    local_d8 = param_1[0x31];
    local_a8 = (wchar_t *)&local_d8;
    pplStack_a0 = local_c8;
    FUN_148f79280(param_1 + 0x42,local_ac);
    local_f8 = param_1[0x31];
    if ((local_f8 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
    }
    plVar3 = &local_f8;
    goto LAB_148f647f2;
  case 7:
    *(undefined1 *)(*(longlong *)(param_1[0x31] + 0x40) + 0xb5) = 1;
    local_a8 = L"OutsetActivityLabel";
    pplStack_a0._0_4_ = 0x13;
    FUN_1446e940c(local_cc,&local_a8);
    local_a8 = L"UEditMeshPolygonsTool";
    pplStack_a0 = (longlong **)CONCAT44(pplStack_a0._4_4_,0x15);
    FUN_1446e940c(local_d0,&local_a8);
    FUN_140208bae(local_c8,local_d0,local_cc,L"Outset");
    local_d8 = param_1[0x31];
    local_a8 = (wchar_t *)&local_d8;
    pplStack_a0 = local_c8;
    FUN_148f78d5c(param_1 + 0x38,local_ac,&local_a8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    FUN_1446ddc76(local_c8,"PolyEd.Outset",1);
    local_d8 = param_1[0x31];
    local_a8 = (wchar_t *)&local_d8;
    pplStack_a0 = local_c8;
    FUN_148f79280(param_1 + 0x42,local_ac);
    local_100 = param_1[0x31];
    if ((local_100 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
    }
    plVar3 = &local_100;
    goto LAB_148f647f2;
  case 8:
  case 0x1d:
    local_130 = param_1[0x36];
    if ((local_130 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
    }
    plVar3 = &local_130;
    goto LAB_148f647f2;
  case 9:
    local_118 = param_1[0x34];
    if ((local_118 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
    }
    plVar3 = &local_118;
    goto LAB_148f647f2;
  case 10:
    local_120 = param_1[0x35];
    if ((local_120 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
    }
    plVar3 = &local_120;
    goto LAB_148f647f2;
  case 0xd:
    FUN_148f65f5c(param_1);
    break;
  case 0xe:
    FUN_148f66290(param_1);
    break;
  case 0xf:
    local_108 = param_1[0x32];
    if ((local_108 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
    }
    plVar3 = &local_108;
    goto LAB_148f647f2;
  case 0x10:
    FUN_148f663ba(param_1);
    break;
  case 0x11:
    FUN_148f66816(param_1);
    break;
  case 0x12:
    FUN_148f69820(param_1);
    break;
  case 0x13:
    FUN_148f69b08(param_1);
    break;
  case 0x14:
    FUN_148f69f64(param_1);
    break;
  case 0x15:
    FUN_148f6a3d8(param_1);
    break;
  case 0x16:
  case 0x25:
    FUN_148f66b7a(param_1);
    break;
  case 0x17:
    uVar2 = 0;
    goto LAB_148f64fd6;
  case 0x18:
    uVar2 = 0x3fe0000000000000;
LAB_148f64fd6:
    FUN_148f6702c(param_1,uVar2);
    break;
  case 0x19:
    FUN_148f67ec6(param_1);
    break;
  case 0x1a:
    FUN_148f68364(param_1);
    break;
  case 0x1b:
    FUN_148f688f6(param_1);
    break;
  case 0x1c:
    if ((((*(char *)((longlong)param_1 + 0x4dc) == '\x01') &&
         (cVar1 = (**(code **)(*param_1 + 0x3b8))(param_1), cVar1 != '\0')) &&
        (lVar4 = (**(code **)(*param_1 + 0x3c0))(param_1), *(int *)(lVar4 + 4) == 2)) &&
       ((char)param_1[0x27] == '\0')) {
      local_88 = 0;
      local_80 = 0;
      local_a8 = (wchar_t *)0x0;
      pplStack_a0 = (longlong **)0x0;
      local_7c = 0xffffffff00000080;
      local_74 = 0;
      local_68 = 0;
      local_60 = 0;
      (**(code **)(*(longlong *)param_1[0x4f] + 0x10))((longlong *)param_1[0x4f],&local_a8);
      FUN_14852f91c(param_1[0x54],1);
      FUN_14854e5fc(param_1[0x54],lVar4);
      local_60 = 0;
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(&local_a8);
    }
    local_128 = param_1[0x37];
    if ((local_128 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
    }
    plVar3 = &local_128;
    goto LAB_148f647f2;
  case 0x1e:
    FUN_148f6941c(param_1);
    break;
  case 0x1f:
    local_110 = param_1[0x33];
    if ((local_110 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
    }
    plVar3 = &local_110;
LAB_148f647f2:
    FUN_148f65246(param_1,plVar3);
    break;
  case 0x20:
    FUN_148f6b546(param_1);
    break;
  case 0x21:
    FUN_148f6b7a8(param_1);
    break;
  case 0x22:
    FUN_148f6aa44(param_1);
    break;
  case 0x23:
    FUN_148f6adb0(param_1);
    break;
  case 0x24:
    FUN_148f6b15a(param_1);
  }
  *(undefined4 *)(param_1 + 0x9b) = 0;
LAB_148f6464a:
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f65146 FUN_148f65146 body=238 status=ok
// SIG undefined FUN_148f65146(void)

void FUN_148f65146(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = FUN_1485316a8(*(undefined8 *)(param_1 + 0x2a0));
  if (((cVar2 == '\0') || (*(char *)(*(longlong *)(param_1 + 0x148) + 0xaa) != '\x01')) ||
     (*(longlong *)(param_1 + 0x260) != 0)) {
    if (*(longlong *)(param_1 + 0x2b0) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x2b0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x350))(plVar1,1);
    }
    FUN_148532460(*(undefined8 *)(param_1 + 0x2a0),&local_50,1,param_1 + 0x2d8);
    *(undefined8 *)(param_1 + 0x308) = local_20;
    *(undefined4 *)(param_1 + 0x2f8) = local_30;
    *(undefined4 *)(param_1 + 0x2fc) = uStack_2c;
    *(undefined4 *)(param_1 + 0x300) = uStack_28;
    *(undefined4 *)(param_1 + 0x304) = uStack_24;
    *(undefined4 *)(param_1 + 0x2e8) = local_40;
    *(undefined4 *)(param_1 + 0x2ec) = uStack_3c;
    *(undefined4 *)(param_1 + 0x2f0) = uStack_38;
    *(undefined4 *)(param_1 + 0x2f4) = uStack_34;
    *(undefined4 *)(param_1 + 0x2d8) = local_50;
    *(undefined4 *)(param_1 + 0x2dc) = uStack_4c;
    *(undefined4 *)(param_1 + 0x2e0) = uStack_48;
    *(undefined4 *)(param_1 + 0x2e4) = uStack_44;
    FUN_148f63848(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f65246 FUN_148f65246 body=3348 status=ok
// SIG undefined FUN_148f65246(void)

void FUN_148f65246(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  code *pcVar13;
  ulonglong uVar14;
  char cVar15;
  int iVar16;
  longlong *plVar17;
  undefined8 uVar18;
  uint uVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong lVar23;
  int iVar24;
  ulonglong *puVar25;
  longlong **pplVar26;
  undefined1 auStack_1e8 [32];
  code **local_1c8;
  undefined1 local_1bc [4];
  longlong *local_1b8 [2];
  code *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  longlong *plStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  code *local_168;
  undefined8 uStack_160;
  longlong *local_158;
  undefined8 uStack_150;
  undefined **local_148;
  longlong *plStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  code *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  longlong *plStack_100;
  ulonglong local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  longlong *local_c0;
  undefined4 local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  longlong *local_a0;
  undefined4 local_98;
  code *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  FUN_148f6ba5e(param_1,1);
  iVar16 = (**(code **)(*(longlong *)*param_2 + 0x2e0))();
  if (iVar16 != 0) {
    if (*(char *)((longlong)param_1 + 0x4dc) == '\x01') {
      plVar17 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      FUN_144a5dc74(&local_168);
      local_1c8 = &local_168;
      (**(code **)(*plVar17 + 0x370))(plVar17,param_1,2,0);
      if (local_168 != (code *)0x0) {
        (**(code **)(*(longlong *)local_168 + 0x10))();
      }
    }
    goto LAB_148f652d6;
  }
  plVar17 = (longlong *)param_1[0x56];
  if (plVar17 != (longlong *)0x0) {
    (**(code **)(*plVar17 + 0x350))(plVar17,0);
  }
  FUN_14852f3f0(param_1[0x54],0,1);
  (**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(param_1[0x54] + 0x78),0);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x2f],0);
  lVar20 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_14689c22e();
      lVar20 = *param_2;
    }
  }
  param_1[0x4c] = lVar20;
  if (*(char *)((longlong)param_1 + 0x4dc) == '\0') {
    uVar18 = (**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_1485564be(&local_168,uVar18);
    plVar17 = uStack_160;
    if (uStack_160 != (longlong *)0x0 && local_168 != (code *)0x0) {
      local_168 = (code *)0x14ba1f32a;
      uStack_160._0_4_ = 0x16;
      FUN_1446e940c(&local_88,&local_168);
      local_168 = (code *)0x14ba1c808;
      uStack_160 = (longlong *)CONCAT44(uStack_160._4_4_,0x15);
      FUN_1446e940c(&local_1a8,&local_168);
      pplVar26 = local_1b8;
      FUN_140208bae(pplVar26,&local_1a8,&local_88,L"Current Action");
      cVar15 = (**(code **)(*(longlong *)param_1[0x4c] + 0x2f0))();
      if (cVar15 == '\0') {
        local_168 = (code *)0x0;
        local_158 = (longlong *)0x0;
        FUN_144a5dc74(&local_128);
        pcVar13 = local_128;
        local_118 = 0xffffffff;
        plStack_100 = (longlong *)0x0;
        local_f8 = local_f8 & 0xffffffff00000000;
        uStack_114 = 0;
        uStack_110 = 0;
        uStack_10c = 0;
        local_108 = 0;
        if ((int)param_1[0x39] != *(int *)((longlong)param_1 + 500)) {
          uVar1 = param_1[0x4c];
          uVar19 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
          uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
          plVar22 = param_1 + 0x3f;
          if ((longlong *)param_1[0x40] != (longlong *)0x0) {
            plVar22 = (longlong *)param_1[0x40];
          }
          iVar16 = *(int *)((longlong)plVar22 +
                           (ulonglong)((int)param_1[0x41] - 1U & (uVar19 >> 0x10 ^ uVar19)) * 4);
          if (iVar16 != -1) {
            lVar20 = param_1[0x38];
            iVar24 = iVar16;
            do {
              if (*(ulonglong *)(lVar20 + (longlong)iVar24 * 0x20) == uVar1) goto LAB_148f65ea3;
              iVar24 = *(int *)((longlong)iVar24 * 0x20 + lVar20 + 0x18);
            } while (iVar24 != -1);
          }
        }
        goto LAB_148f65aaa;
      }
      local_168 = (code *)0x0;
      local_158 = (longlong *)0x0;
      local_118 = 0;
      uStack_114 = 0;
      local_108 = 0x49f36510;
      uStack_104 = 1;
      plStack_100 = (longlong *)&LAB_148f75ee6;
      local_128 = FUN_146bd3274;
      FUN_144a5dc74(&local_e8);
      plVar22 = local_e8;
      local_d8 = 0xffffffff;
      local_c0 = (longlong *)0x0;
      local_b8 = 0;
      local_b0 = (longlong *)0x0;
      local_a8 = 0;
      local_a0 = (longlong *)0x0;
      local_98 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      pplVar26 = local_1b8;
      if ((int)param_1[0x39] != *(int *)((longlong)param_1 + 500)) {
        uVar1 = param_1[0x4c];
        uVar19 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
        uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
        plVar21 = param_1 + 0x3f;
        if ((longlong *)param_1[0x40] != (longlong *)0x0) {
          plVar21 = (longlong *)param_1[0x40];
        }
        iVar16 = *(int *)((longlong)plVar21 +
                         (ulonglong)((int)param_1[0x41] - 1U & (uVar19 >> 0x10 ^ uVar19)) * 4);
        if (iVar16 != -1) {
          lVar20 = param_1[0x38];
          iVar24 = iVar16;
          do {
            if (*(ulonglong *)(lVar20 + (longlong)iVar24 * 0x20) == uVar1) goto LAB_148f65e03;
            iVar24 = *(int *)((longlong)iVar24 * 0x20 + lVar20 + 0x18);
          } while (iVar24 != -1);
        }
      }
      goto LAB_148f6551e;
    }
  }
  else {
    (**(code **)(*param_1 + 0x328))(param_1,param_1[0x29],0);
  }
  goto LAB_148f659f8;
  while (iVar16 = *(int *)(lVar23 + 0x18), iVar16 != -1) {
LAB_148f65ea3:
    lVar23 = lVar20 + (longlong)iVar16 * 0x20;
    if (*(ulonglong *)(lVar20 + (longlong)iVar16 * 0x20) == uVar1) goto LAB_148f65f32;
  }
  lVar23 = 0;
LAB_148f65f32:
  pplVar26 = (longlong **)(lVar23 + 8);
LAB_148f65aaa:
  pcVar2 = (code *)*pplVar26;
  if (local_128 != pcVar2) {
    local_128 = pcVar2;
    if (pcVar2 != (code *)0x0) {
      (**(code **)(*(longlong *)pcVar2 + 8))();
    }
    if (pcVar13 != (code *)0x0) {
      (**(code **)(*(longlong *)pcVar13 + 0x10))(pcVar13);
    }
  }
  uStack_120 = CONCAT44(uStack_120._4_4_,*(undefined4 *)(pplVar26 + 1));
  if ((int)param_1[0x43] != *(int *)((longlong)param_1 + 0x244)) {
    uVar1 = param_1[0x4c];
    uVar19 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
    plVar22 = param_1 + 0x49;
    if ((longlong *)param_1[0x4a] != (longlong *)0x0) {
      plVar22 = (longlong *)param_1[0x4a];
    }
    iVar16 = *(int *)((longlong)plVar22 +
                     (ulonglong)((int)param_1[0x4b] - 1U & (uVar19 >> 0x10 ^ uVar19)) * 4);
    if (iVar16 != -1) {
      lVar20 = param_1[0x42];
      iVar24 = iVar16;
      do {
        if (*(ulonglong *)(lVar20 + (longlong)iVar24 * 0x18) == uVar1) goto LAB_148f65ef2;
        iVar24 = *(int *)(lVar20 + (longlong)iVar24 * 0x18 + 0x10);
      } while (iVar24 != -1);
    }
  }
  goto LAB_148f65b35;
  while (iVar16 = (int)puVar25[2], iVar16 != -1) {
LAB_148f65ef2:
    puVar25 = (ulonglong *)(lVar20 + (longlong)iVar16 * 0x18);
    if (*puVar25 == uVar1) goto LAB_148f65f3e;
  }
  puVar25 = (ulonglong *)0x0;
LAB_148f65f3e:
  if (puVar25 + 1 != (ulonglong *)&local_118) {
    uVar1 = puVar25[1];
    local_118 = (undefined4)uVar1;
    uStack_114 = (undefined4)(uVar1 >> 0x20);
  }
LAB_148f65b35:
  local_88 = (code *)0x14ba1f4f8;
  uStack_80._0_4_ = 0x17;
  FUN_1446e940c(&local_1a8,&local_88);
  local_88 = (code *)0x14ba1c808;
  uStack_80 = CONCAT44(uStack_80._4_4_,0x15);
  FUN_1446e940c(local_1bc,&local_88);
  FUN_140208bae(&local_88,local_1bc,&local_1a8,L"Done");
  if ((longlong *)CONCAT44(uStack_10c,uStack_110) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT44(uStack_10c,uStack_110) + 0x10))();
  }
  FUN_14023423e(&uStack_110,&local_88);
  if (local_88 != (code *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
  local_88 = (code *)0x14ba1f55e;
  uStack_80._0_4_ = 0x18;
  FUN_1446e940c(&local_1a8,&local_88);
  local_88 = (code *)0x14ba1c808;
  uStack_80 = CONCAT44(uStack_80._4_4_,0x15);
  FUN_1446e940c(local_1bc,&local_88);
  FUN_140208bae(&local_88,local_1bc,&local_1a8,L"Exit the current activity.");
  if (plStack_100 != (longlong *)0x0) {
    (**(code **)(*plStack_100 + 0x10))();
  }
  FUN_14023423e(&plStack_100,&local_88);
  if (local_88 != (code *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
  local_198 = local_158;
  local_1a8 = local_168;
  local_78 = local_158;
  local_88 = local_168;
  uStack_80 = uStack_160;
  uVar3 = CONCAT44(uStack_174,local_178);
  uVar4 = CONCAT44(uStack_16c,uStack_170);
  local_168 = FUN_14436ea1a;
  plVar22 = (longlong *)CONCAT44(uStack_19c,uStack_1a0);
  uVar18 = CONCAT44(uStack_18c,uStack_190);
  local_158 = (longlong *)0x0;
  local_148 = &PTR_LAB_14ba26fe0;
  plStack_140 = param_1;
  uStack_1a0 = (undefined4)uStack_160;
  uStack_19c = uStack_160._4_4_;
  local_178 = (undefined4)local_138;
  uStack_174 = local_138._4_4_;
  uStack_170 = (undefined4)uStack_130;
  uStack_16c = uStack_130._4_4_;
  uStack_190 = (undefined4)uStack_150;
  uStack_18c = uStack_150._4_4_;
  uStack_160 = plVar22;
  uStack_150 = uVar18;
  local_138 = uVar3;
  uStack_130 = uVar4;
  if (local_1a8 != (code *)0x0) {
    plVar22 = local_198;
    if (local_198 == (longlong *)0x0) {
      plVar22 = (longlong *)&local_188;
    }
    (**(code **)(*plVar22 + 0x10))();
  }
  (**(code **)(*plVar17 + 0x28))(plVar17,&local_168);
  FUN_148f6bcd2(&local_168);
  goto LAB_148f65d60;
  while (iVar16 = *(int *)(lVar23 + 0x18), iVar16 != -1) {
LAB_148f65e03:
    lVar23 = lVar20 + (longlong)iVar16 * 0x20;
    if (*(ulonglong *)(lVar20 + (longlong)iVar16 * 0x20) == uVar1) goto LAB_148f65f07;
  }
  lVar23 = 0;
LAB_148f65f07:
  pplVar26 = (longlong **)(lVar23 + 8);
LAB_148f6551e:
  plVar21 = *pplVar26;
  if (local_e8 != plVar21) {
    local_e8 = plVar21;
    if (plVar21 != (longlong *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    if (plVar22 != (longlong *)0x0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
  }
  local_e0 = *(undefined4 *)(pplVar26 + 1);
  if ((int)param_1[0x43] != *(int *)((longlong)param_1 + 0x244)) {
    uVar1 = param_1[0x4c];
    uVar19 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
    plVar22 = param_1 + 0x49;
    if ((longlong *)param_1[0x4a] != (longlong *)0x0) {
      plVar22 = (longlong *)param_1[0x4a];
    }
    iVar16 = *(int *)((longlong)plVar22 +
                     (ulonglong)((int)param_1[0x4b] - 1U & (uVar19 >> 0x10 ^ uVar19)) * 4);
    if (iVar16 != -1) {
      lVar20 = param_1[0x42];
      iVar24 = iVar16;
      do {
        if (*(ulonglong *)(lVar20 + (longlong)iVar24 * 0x18) == uVar1) goto LAB_148f65e59;
        iVar24 = *(int *)(lVar20 + (longlong)iVar24 * 0x18 + 0x10);
      } while (iVar24 != -1);
    }
  }
  goto LAB_148f655aa;
  while (iVar16 = (int)puVar25[2], iVar16 != -1) {
LAB_148f65e59:
    puVar25 = (ulonglong *)(lVar20 + (longlong)iVar16 * 0x18);
    if (*puVar25 == uVar1) goto LAB_148f65f13;
  }
  puVar25 = (ulonglong *)0x0;
LAB_148f65f13:
  if (puVar25 + 1 != (ulonglong *)&local_d8) {
    uVar1 = puVar25[1];
    local_d8 = (undefined4)uVar1;
    uStack_d4 = (undefined4)(uVar1 >> 0x20);
  }
LAB_148f655aa:
  local_88 = (code *)0x14ba1f374;
  uStack_80._0_4_ = 0x15;
  FUN_1446e940c(&local_1a8,&local_88);
  local_88 = (code *)0x14ba1c808;
  uStack_80 = CONCAT44(uStack_80._4_4_,0x15);
  FUN_1446e940c(local_1bc,&local_88);
  FUN_140208bae(&local_88,local_1bc,&local_1a8,L"Accept Action");
  if ((longlong *)CONCAT44(uStack_cc,uStack_d0) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT44(uStack_cc,uStack_d0) + 0x10))();
  }
  FUN_14023423e(&uStack_d0,&local_88);
  if (local_88 != (code *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
  local_88 = (code *)0x14ba1f3fa;
  uStack_80._0_4_ = 0x16;
  FUN_1446e940c(&local_1a8,&local_88);
  local_88 = (code *)0x14ba1c808;
  uStack_80 = CONCAT44(uStack_80._4_4_,0x15);
  FUN_1446e940c(local_1bc,&local_88);
  FUN_140208bae(&local_88,local_1bc,&local_1a8,L"Accept the action currently being performed.");
  if (local_c0 != (longlong *)0x0) {
    (**(code **)(*local_c0 + 0x10))();
  }
  FUN_14023423e(&local_c0,&local_88);
  if (local_88 != (code *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
  local_88 = (code *)0x14ba1f444;
  uStack_80._0_4_ = 0x15;
  FUN_1446e940c(&local_1a8,&local_88);
  local_88 = (code *)0x14ba1c808;
  uStack_80 = CONCAT44(uStack_80._4_4_,0x15);
  FUN_1446e940c(local_1bc,&local_88);
  FUN_140208bae(&local_88,local_1bc,&local_1a8,L"Cancel Action");
  if (local_b0 != (longlong *)0x0) {
    (**(code **)(*local_b0 + 0x10))();
  }
  FUN_14023423e(&local_b0,&local_88);
  if (local_88 != (code *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
  local_88 = (code *)0x14ba1f4ca;
  uStack_80._0_4_ = 0x16;
  FUN_1446e940c(&local_1a8,&local_88);
  local_88 = (code *)0x14ba1c808;
  uStack_80 = CONCAT44(uStack_80._4_4_,0x15);
  FUN_1446e940c(local_1bc,&local_88);
  FUN_140208bae(&local_88,local_1bc,&local_1a8,L"Cancel the action currently being performed.");
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x10))();
  }
  FUN_14023423e(&local_a0,&local_88);
  if (local_88 != (code *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
  plStack_180 = plStack_100;
  uVar10 = uStack_104;
  uVar9 = local_108;
  uVar8 = uStack_10c;
  uVar7 = uStack_110;
  uVar6 = uStack_114;
  uVar5 = local_118;
  local_1a8 = local_128;
  local_58 = local_f8;
  uVar14 = local_58;
  uStack_50 = uStack_f0;
  uVar4 = uStack_50;
  local_68 = CONCAT44(uStack_104,local_108);
  plStack_60 = plStack_100;
  local_78 = (longlong *)CONCAT44(uStack_114,local_118);
  local_88 = local_128;
  uStack_80 = uStack_120;
  uVar3 = uStack_80;
  uVar1 = CONCAT44(uStack_174,local_178);
  local_108 = 0x4ba26fa0;
  uStack_104 = 1;
  plStack_100 = param_1;
  local_118 = 0;
  uStack_114 = 0;
  uStack_110 = uStack_190;
  uStack_10c = uStack_18c;
  local_128 = (code *)&LAB_14436e8f2;
  uVar18 = CONCAT44(uStack_19c,uStack_1a0);
  uStack_80._0_4_ = (undefined4)uStack_120;
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_120 >> 0x20);
  local_58._0_4_ = (undefined4)local_f8;
  local_58._4_4_ = (undefined4)(local_f8 >> 0x20);
  uStack_50._0_4_ = (undefined4)uStack_f0;
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_f0 >> 0x20);
  local_178 = (undefined4)local_58;
  uStack_174 = local_58._4_4_;
  uStack_170 = (undefined4)uStack_50;
  uStack_16c = uStack_50._4_4_;
  _local_188 = CONCAT44(uVar10,uVar9);
  local_198 = (longlong *)CONCAT44(uVar6,uVar5);
  uStack_190 = uVar7;
  uStack_18c = uVar8;
  uStack_1a0 = (undefined4)uStack_80;
  uStack_19c = uStack_80._4_4_;
  uStack_120 = uVar18;
  local_f8 = uVar1;
  if (local_1a8 != (code *)0x0) {
    plVar22 = local_198;
    if (local_198 == (longlong *)0x0) {
      plVar22 = (longlong *)&local_188;
    }
    uStack_80 = uVar3;
    local_58 = uVar14;
    uStack_50 = uVar4;
    (**(code **)(*plVar22 + 0x10))();
  }
  local_198 = local_158;
  local_1a8 = local_168;
  uVar5 = (undefined4)uStack_160;
  uVar6 = uStack_160._4_4_;
  uVar7 = (undefined4)uStack_150;
  uVar8 = uStack_150._4_4_;
  uVar9 = (undefined4)local_138;
  uVar10 = local_138._4_4_;
  uVar11 = (undefined4)uStack_130;
  uVar12 = uStack_130._4_4_;
  local_78 = local_158;
  local_88 = local_168;
  uStack_80 = uStack_160;
  local_138 = CONCAT44(uStack_174,local_178);
  uStack_130 = CONCAT44(uStack_16c,uStack_170);
  local_168 = FUN_14436e94e;
  uStack_160 = (longlong *)CONCAT44(uStack_19c,uStack_1a0);
  local_158 = (longlong *)0x0;
  uStack_150 = CONCAT44(uStack_18c,uStack_190);
  local_148 = &PTR_LAB_14ba26fc0;
  plStack_140 = param_1;
  uStack_1a0 = uVar5;
  uStack_19c = uVar6;
  local_178 = uVar9;
  uStack_174 = uVar10;
  uStack_170 = uVar11;
  uStack_16c = uVar12;
  uStack_190 = uVar7;
  uStack_18c = uVar8;
  if (local_1a8 != (code *)0x0) {
    plVar22 = (longlong *)&local_188;
    if (local_198 != (longlong *)0x0) {
      plVar22 = local_198;
    }
    (**(code **)(*plVar22 + 0x10))(plVar22);
  }
  (**(code **)(*plVar17 + 0x18))(plVar17,&local_168);
  FUN_148f6bbc0(&local_168);
LAB_148f65d60:
  if (local_1b8[0] != (longlong *)0x0) {
    (**(code **)(*local_1b8[0] + 0x10))();
  }
LAB_148f659f8:
  FUN_148f6bd60(param_1,0);
LAB_148f652d6:
  if ((local_40 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f65f5c FUN_148f65f5c body=819 status=ok
// SIG undefined FUN_148f65f5c(void)

void FUN_148f65f5c(longlong *param_1)

{
  longlong lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_298 [36];
  undefined1 local_274 [4];
  undefined1 local_270 [12];
  int local_264;
  longlong local_260;
  longlong local_258;
  undefined8 uStack_250;
  void *local_248;
  int local_240;
  undefined4 local_23c;
  wchar_t *local_238;
  undefined4 local_230;
  wchar_t *local_228;
  undefined4 local_220;
  undefined8 local_138;
  undefined8 local_128;
  undefined1 local_f0 [168];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_298;
  cVar4 = FUN_148f6c06a();
  if (cVar4 == '\0') {
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_228 = L"OnMergeFailedMessage";
    local_220 = 0x14;
    FUN_1446e940c(local_f0,&local_228);
    local_228 = L"UEditMeshPolygonsTool";
    local_220 = 0x15;
    FUN_1446e940c(&local_260,&local_228);
    FUN_140208bae(&local_228,&local_260,local_f0,L"Cannot Merge Current Selection");
    (**(code **)(*plVar5 + 0x340))(plVar5,&local_228,3);
    if (local_228 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_228 + 0x10))();
    }
  }
  else {
    lVar1 = param_1[0x4d];
    FUN_146c2c368(local_f0,lVar1);
    FUN_146c2c4e8(local_f0);
    local_248 = (void *)0x0;
    local_240 = (int)param_1[0xad];
    lVar8 = (longlong)local_240;
    pvVar2 = (void *)param_1[0xac];
    if (lVar8 == 0) {
      local_23c = 0;
    }
    else {
      FUN_144a06ca8(&local_248,local_240,0);
      memcpy(local_248,pvVar2,lVar8 << 2);
      pvVar2 = local_248;
      lVar8 = (longlong)local_240;
      if (lVar8 != 0) {
        lVar7 = 0;
        do {
          FUN_146c2c9fe(local_f0,*(undefined4 *)((longlong)pvVar2 + lVar7),1);
          lVar7 = lVar7 + 4;
        } while (lVar8 * 4 != lVar7);
      }
      if (local_248 != (void *)0x0) {
        FUN_1400020a8(local_248);
      }
    }
    local_258 = 0;
    uStack_250 = 0;
    local_138 = 0;
    local_128 = 0;
    local_260 = lVar1;
    FUN_142984384(&local_260,param_1 + 0xac);
    FUN_1458d302c(&local_228);
    lVar8 = local_258;
    lVar7 = (longlong)(int)uStack_250;
    if (lVar7 != 0) {
      lVar6 = 0;
      do {
        puVar3 = *(undefined8 **)(lVar8 + lVar6);
        local_264 = *(int *)(lVar1 + 0x1b0);
        *(int *)(lVar1 + 0x1b0) = local_264 + 1;
        local_238 = (wchar_t *)*puVar3;
        local_230 = *(undefined4 *)(puVar3 + 1);
        FUN_1482aa2f0(lVar1,&local_238);
        FUN_1447cbafe(&local_228,&local_238,&local_264,0);
        lVar6 = lVar6 + 8;
      } while (lVar7 * 8 != lVar6);
    }
    FUN_146c2caf6(local_f0,local_270);
    local_238 = L"PolyMeshMergeChange";
    local_230 = 0x13;
    FUN_1446e940c(&local_264,&local_238);
    local_238 = L"UEditMeshPolygonsTool";
    local_230 = 0x15;
    FUN_1446e940c(local_274,&local_238);
    FUN_140208bae(&local_238,local_274,&local_264,L"Merge");
    FUN_148f6ca5e(param_1,&local_238,local_270,&local_228);
    if (local_238 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_238 + 0x10))();
    }
    FUN_1456c3cc8(&local_228);
    FUN_146be9400(&local_258);
    FUN_146c2c40e(local_f0);
  }
  if ((local_48 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f66290 FUN_148f66290 body=279 status=ok
// SIG undefined FUN_148f66290(void)

void FUN_148f66290(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_148f6c06a();
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  local_38 = local_44;
  local_40 = L"ư쳃捈䠂ঋ譈碉\x02䠀冋䡰見\x80";
  cVar1 = FUN_148f6e742(param_1);
  if (cVar1 == '\0') {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_40 = L"OnDeleteFailedMessage";
    local_38._0_4_ = 0x15;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UEditMeshPolygonsTool";
    local_38 = (undefined1 *)CONCAT44(local_38._4_4_,0x15);
    FUN_1446e940c(local_48,&local_40);
    FUN_140208bae(&local_40,local_48,local_44,L"Cannot Delete Current Selection");
    (**(code **)(*plVar2 + 0x340))(plVar2,&local_40,3);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  else {
    FUN_148f6c58a(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f663ba FUN_148f663ba body=1115 status=ok
// SIG undefined FUN_148f663ba(void)

void FUN_148f663ba(longlong *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_288 [44];
  int local_25c;
  longlong *local_258;
  undefined1 local_24c [4];
  undefined1 local_248 [8];
  void *local_240;
  int local_238;
  undefined4 local_234;
  wchar_t **local_230;
  undefined8 local_228;
  undefined1 *local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  longlong local_208;
  undefined8 local_200;
  undefined1 *local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  wchar_t *local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d0 [24];
  int local_1b8;
  undefined1 local_f0 [168];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  cVar3 = FUN_148f6c06a();
  if (cVar3 == '\0') {
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_1e0 = L"OnRecalcNormalsFailedMessage";
    local_1d8 = 0x1c;
    FUN_1446e940c(local_f0,&local_1e0);
    local_1e0 = L"UEditMeshPolygonsTool";
    local_1d8 = 0x15;
    FUN_1446e940c(&local_230,&local_1e0);
    FUN_140208bae(&local_1e0,&local_230,local_f0,L"Cannot Recalculate Normals for Current Selection"
                 );
    (**(code **)(*plVar5 + 0x340))(plVar5,&local_1e0,3);
    if (local_1e0 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_1e0 + 0x10))();
    }
  }
  else {
    lVar9 = param_1[0x4d];
    FUN_146c2c368(local_f0,lVar9);
    FUN_146c2c4e8(local_f0);
    local_208 = lVar9;
    FUN_14852586c(&local_1e0,param_1[0x54] + 0x390);
    local_200 = 0x100000000;
    local_1f0 = 0xffffffff;
    local_1e8 = 0;
    iVar8 = 0;
    local_1f8 = local_1d0;
    if (local_1b8 != 0) {
      FUN_1449c0562(&local_200);
      iVar8 = local_1b8;
    }
    local_218 = local_1f0;
    uVar2 = local_218;
    local_210 = local_1e8;
    local_20c = local_1e4;
    local_228 = local_200;
    local_220 = local_1f8;
    local_218._4_4_ = (int)((ulonglong)local_1f0 >> 0x20);
    local_230 = &local_1e0;
    if ((local_218._4_4_ != iVar8) || (local_1f8 != local_1d0)) {
      iVar4 = local_218._4_4_;
      local_25c = iVar8;
      local_258 = param_1;
      local_218 = uVar2;
      do {
        iVar4 = *(int *)(*local_230 + (longlong)iVar4 * 6);
        lVar10 = (longlong)iVar4;
        lVar9 = param_1[0x4f];
        if (((lVar10 < 0) || (*(int *)(lVar9 + 0x98) <= iVar4)) ||
           (lVar7 = (longlong)*(int *)(*(longlong *)(lVar9 + 0x90) + lVar10 * 4), lVar7 == -1)) {
          lVar7 = 0;
        }
        else {
          lVar7 = lVar7 * 0x38 + *(longlong *)(lVar9 + 0x60);
        }
        puVar6 = (undefined8 *)(lVar9 + 0xc0);
        if (lVar7 != 0) {
          puVar6 = (undefined8 *)(lVar7 + 8);
        }
        local_240 = (void *)0x0;
        local_238 = *(int *)(puVar6 + 1);
        lVar9 = (longlong)local_238;
        pvVar1 = (void *)*puVar6;
        if (lVar9 == 0) {
          local_234 = 0;
        }
        else {
          FUN_144a06ca8(&local_240,local_238,0);
          memcpy(local_240,pvVar1,lVar9 << 2);
          pvVar1 = local_240;
          lVar9 = (longlong)local_238;
          if (lVar9 != 0) {
            lVar7 = 0;
            do {
              FUN_146c2c9fe(local_f0,*(undefined4 *)((longlong)pvVar1 + lVar7),1);
              lVar7 = lVar7 + 4;
              param_1 = local_258;
              iVar8 = local_25c;
            } while (lVar9 * 4 != lVar7);
          }
          if (local_240 != (void *)0x0) {
            FUN_1400020a8(local_240);
          }
        }
        lVar9 = param_1[0x4f];
        if (((iVar4 < 0) || (*(int *)(lVar9 + 0x98) <= iVar4)) ||
           (lVar10 = (longlong)*(int *)(*(longlong *)(lVar9 + 0x90) + lVar10 * 4), lVar10 == -1)) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar10 * 0x38 + *(longlong *)(lVar9 + 0x60);
        }
        lVar9 = lVar9 + 0xc0;
        if (lVar10 != 0) {
          lVar9 = lVar10 + 8;
        }
        FUN_146bc9e14(&local_208,lVar9);
        local_218 = CONCAT44(local_218._4_4_,(uint)local_218 & ~local_228._4_4_);
        FUN_1449c0562(&local_228);
        iVar4 = local_218._4_4_;
        uVar2 = local_218;
      } while (local_230 != &local_1e0 || (local_220 != local_1d0 || local_218._4_4_ != iVar8));
    }
    local_218 = uVar2;
    FUN_146c2caf6(local_f0,local_248);
    local_230 = (wchar_t **)0x14ba1f882;
    local_228._0_4_ = 0x1b;
    FUN_1446e940c(&local_200,&local_230);
    local_230 = (wchar_t **)0x14ba1c808;
    local_228 = CONCAT44(local_228._4_4_,0x15);
    FUN_1446e940c(local_24c,&local_230);
    FUN_140208bae(&local_230,local_24c,&local_200,L"Recalculate Normals");
    FUN_148f6ca5e(param_1,&local_230,local_248,&local_1e0);
    if (local_230 != (wchar_t **)0x0) {
      (**(code **)(*local_230 + 8))();
    }
    FUN_1456c3cc8(&local_1e0);
    FUN_146c2c40e(local_f0);
  }
  if ((local_48 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f66816 FUN_148f66816 body=866 status=ok
// SIG undefined FUN_148f66816(void)

void FUN_148f66816(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_258 [36];
  undefined1 local_234 [4];
  undefined1 local_230 [8];
  wchar_t **local_228;
  undefined8 local_220;
  undefined1 *local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined8 local_200;
  undefined1 *local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  wchar_t *local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d0 [24];
  int local_1b8;
  undefined1 local_f0 [168];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  cVar5 = FUN_148f6c06a();
  if (cVar5 == '\0') {
    plVar7 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_1e0 = L"OnFlipNormalsFailedMessage";
    local_1d8 = 0x1a;
    FUN_1446e940c(local_f0,&local_1e0);
    local_1e0 = L"UEditMeshPolygonsTool";
    local_1d8 = 0x15;
    FUN_1446e940c(&local_228,&local_1e0);
    FUN_140208bae(&local_1e0,&local_228,local_f0,L"Cannot Flip Normals for Current  Selection");
    (**(code **)(*plVar7 + 0x340))(plVar7,&local_1e0,3);
    if (local_1e0 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_1e0 + 0x10))();
    }
  }
  else {
    lVar2 = param_1[0x4d];
    FUN_146c2c368(local_f0,lVar2);
    FUN_146c2c4e8(local_f0);
    FUN_14852586c(&local_1e0,param_1[0x54] + 0x390);
    local_1f8 = local_1d0;
    local_200 = 0x100000000;
    local_1f0 = 0xffffffff;
    local_1e8 = 0;
    iVar9 = 0;
    if (local_1b8 != 0) {
      FUN_1449c0562(&local_200);
      iVar9 = local_1b8;
    }
    local_210 = local_1f0;
    uVar4 = local_210;
    local_208 = local_1e8;
    local_204 = local_1e4;
    local_220 = local_200;
    local_218 = local_1f8;
    local_228 = &local_1e0;
    local_210._4_4_ = (int)((ulonglong)local_1f0 >> 0x20);
    if ((local_210._4_4_ != iVar9) || (local_1f8 != local_1d0)) {
      iVar6 = local_210._4_4_;
      local_210 = uVar4;
      do {
        iVar6 = *(int *)(*local_228 + (longlong)iVar6 * 6);
        lVar3 = param_1[0x4f];
        if ((((longlong)iVar6 < 0) || (*(int *)(lVar3 + 0x98) <= iVar6)) ||
           (lVar8 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x90) + (longlong)iVar6 * 4),
           lVar8 == -1)) {
          lVar8 = 0;
        }
        else {
          lVar8 = lVar8 * 0x38 + *(longlong *)(lVar3 + 0x60);
        }
        plVar7 = (longlong *)(lVar3 + 0xc0);
        if (lVar8 != 0) {
          plVar7 = (longlong *)(lVar8 + 8);
        }
        lVar3 = plVar7[1];
        if ((longlong)(int)lVar3 != 0) {
          lVar8 = *plVar7;
          lVar10 = 0;
          do {
            uVar1 = *(undefined4 *)(lVar8 + lVar10);
            FUN_146c2c9fe(local_f0,uVar1,1);
            FUN_146c0adfe(lVar2,uVar1);
            lVar10 = lVar10 + 4;
          } while ((longlong)(int)lVar3 * 4 != lVar10);
        }
        local_210 = CONCAT44(local_210._4_4_,(uint)local_210 & ~local_220._4_4_);
        FUN_1449c0562(&local_220);
        iVar6 = local_210._4_4_;
        uVar4 = local_210;
      } while (local_228 != &local_1e0 || (local_218 != local_1d0 || local_210._4_4_ != iVar9));
    }
    local_210 = uVar4;
    FUN_146c2caf6(local_f0,local_230);
    local_228 = (wchar_t **)0x14ba1f960;
    local_220._0_4_ = 0x19;
    FUN_1446e940c(&local_200,&local_228);
    local_228 = (wchar_t **)0x14ba1c808;
    local_220 = CONCAT44(local_220._4_4_,0x15);
    FUN_1446e940c(local_234,&local_228);
    FUN_140208bae(&local_228,local_234,&local_200,L"Flip Normals");
    FUN_148f6ca5e(param_1,&local_228,local_230,&local_1e0);
    if (local_228 != (wchar_t **)0x0) {
      (**(code **)(*local_228 + 8))();
    }
    FUN_1456c3cc8(&local_1e0);
    FUN_146c2c40e(local_f0);
  }
  if ((local_48 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f66b7a FUN_148f66b7a body=1200 status=ok
// SIG undefined FUN_148f66b7a(void)

void FUN_148f66b7a(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_318 [36];
  int local_2f4;
  longlong *local_2f0;
  longlong *local_2e8;
  undefined8 local_2e0;
  undefined1 *local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined8 local_2c0;
  undefined1 *local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined1 local_29c [4];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_26c;
  undefined4 local_264;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_21c;
  undefined4 local_214;
  longlong local_208;
  undefined4 local_200;
  wchar_t *local_1f8;
  undefined4 local_1f0;
  longlong local_150;
  int local_148;
  undefined1 local_140 [24];
  int local_128;
  int local_11c;
  undefined1 local_100 [8];
  int local_f8;
  int local_cc;
  undefined1 local_b0 [8];
  int local_a8;
  int local_7c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_318;
  lVar6 = param_1[0x4d];
  FUN_14852586c(&local_150,param_1[0x54] + 0x390);
  if (((local_f8 == local_cc) && (local_a8 == local_7c)) && (local_148 == local_11c)) {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_1f8 = L"OnCollapseFailedMessage";
    local_1f0 = 0x17;
    FUN_1446e940c(&local_248,&local_1f8);
    local_1f8 = L"UEditMeshPolygonsTool";
    local_1f0 = 0x15;
    FUN_1446e940c(&local_2e8,&local_1f8);
    FUN_140208bae(&local_1f8,&local_2e8,&local_248,L"Cannot collapse empty selection");
    (**(code **)(*plVar4 + 0x340))(plVar4,&local_1f8,3);
    if (local_1f8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_1f8 + 0x10))();
    }
  }
  else {
    lVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x10))(lVar5 + 0x28,&DAT_14cbf3b08);
    FUN_146c2c368(&local_1f8,lVar6);
    FUN_146c2c4e8(&local_1f8);
    local_228 = 0;
    local_220 = 0;
    local_248 = 0;
    uStack_240 = 0;
    local_21c = 0xffffffff00000080;
    local_214 = 0;
    local_208 = 0;
    local_200 = 0;
    FUN_145c3f772(&local_248,local_b0);
    if (local_148 == local_11c) {
      uVar1 = local_2d0;
      if (local_f8 != local_cc) {
        FUN_148f5d452(param_1[0x4f],local_100,&local_248);
        uVar1 = local_2d0;
      }
    }
    else {
      local_278 = 0;
      local_270 = 0;
      local_298 = 0;
      uStack_290 = 0;
      local_26c = 0xffffffff00000080;
      local_264 = 0;
      local_258 = 0;
      local_250 = 0;
      FUN_145c3f772(&local_298,&local_150);
      iVar2 = FUN_148f5df42(lVar6,param_1[0x4f],&local_298);
      if (iVar2 != local_148 - local_11c) {
        plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
        (**(code **)(*plVar4 + 0x340))(plVar4,&DAT_14cbf3af8,3);
      }
      (**(code **)(*(longlong *)param_1[0x4f] + 8))();
      local_2b8 = local_140;
      local_2c0 = 0x100000000;
      local_2b0 = 0xffffffff;
      local_2a8 = 0;
      iVar2 = 0;
      if (local_128 != 0) {
        FUN_1449c0562(&local_2c0);
        iVar2 = local_128;
      }
      local_2d0 = local_2b0;
      uVar1 = local_2d0;
      local_2c8 = local_2a8;
      local_2c4 = local_2a4;
      local_2e0 = local_2c0;
      local_2d8 = local_2b8;
      local_2e8 = &local_150;
      local_2d0._4_4_ = (int)((ulonglong)local_2b0 >> 0x20);
      if ((local_2d0._4_4_ != iVar2) || (local_2b8 != local_140)) {
        iVar3 = local_2d0._4_4_;
        local_2f4 = iVar2;
        local_2f0 = param_1;
        local_2d0 = uVar1;
        do {
          lVar6 = FUN_1482abc36(local_2f0[0x4f],*(undefined4 *)(*local_2e8 + (longlong)iVar3 * 0xc))
          ;
          if ((lVar6 != 0) && ((longlong)*(int *)(lVar6 + 0x20) != 0)) {
            plVar8 = *(longlong **)(lVar6 + 0x18);
            plVar4 = plVar8 + (longlong)*(int *)(lVar6 + 0x20) * 5;
            do {
              lVar6 = plVar8[1];
              if ((longlong)(int)lVar6 != 0) {
                lVar5 = *plVar8;
                lVar7 = 0;
                do {
                  local_2c0 = CONCAT44(local_2c0._4_4_,*(undefined4 *)(lVar5 + lVar7));
                  FUN_1447cbafe(&local_248,local_29c,&local_2c0,0);
                  lVar7 = lVar7 + 4;
                } while ((longlong)(int)lVar6 * 4 != lVar7);
              }
              plVar8 = plVar8 + 5;
            } while (plVar8 != plVar4);
          }
          local_2d0 = CONCAT44(local_2d0._4_4_,(uint)local_2d0 & ~local_2e0._4_4_);
          FUN_1449c0562(&local_2e0);
          param_1 = local_2f0;
          iVar3 = local_2d0._4_4_;
          uVar1 = local_2d0;
        } while (local_2e8 != &local_150 || (local_2d8 != local_140 || local_2d0._4_4_ != local_2f4)
                );
      }
    }
    local_2d0 = uVar1;
    FUN_148f6d6fc(param_1,&local_248,&local_1f8);
    lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x18))(lVar6 + 0x28);
    local_200 = 0;
    if (local_208 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_248);
    FUN_146c2c40e(&local_1f8);
  }
  FUN_1456c3cc8(&local_150);
  if ((local_60 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f6702c FUN_148f6702c body=3737 status=ok
// SIG undefined FUN_148f6702c(void)

void FUN_148f6702c(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStack_658 [32];
  longlong *local_638;
  char *local_630;
  int local_620;
  undefined1 local_61c [4];
  undefined8 local_618;
  undefined4 local_610;
  undefined1 local_604 [4];
  undefined8 local_600;
  longlong *local_5f8 [2];
  undefined1 local_5e8 [64];
  undefined1 local_5a8 [64];
  wchar_t *local_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined1 local_530;
  undefined2 local_4d8;
  undefined8 local_4d0;
  int local_4c0;
  wchar_t *local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined1 local_480;
  wchar_t *local_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined1 local_440;
  undefined1 *local_438;
  wchar_t *local_430;
  char *local_428;
  uint **local_420;
  longlong *local_418;
  char local_410;
  longlong local_408 [2];
  uint *local_3f8;
  undefined8 uStack_3f0;
  char local_3da;
  char local_3d9;
  longlong local_3d8;
  uint auStack_3d0 [2];
  longlong local_3c8;
  uint auStack_3c0 [2];
  wchar_t *local_3b8;
  undefined4 local_3b0;
  longlong local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_37c;
  int local_374;
  undefined1 local_370 [8];
  undefined1 *local_368;
  int local_360;
  wchar_t *local_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  void *local_340;
  undefined8 uStack_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  int iStack_324;
  undefined1 local_320;
  longlong local_318;
  undefined4 local_310;
  int local_300;
  int local_2d4;
  undefined1 local_2b8 [8];
  int local_2b0;
  int local_284;
  undefined1 local_260 [168];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  int local_184;
  longlong local_178;
  undefined4 local_170;
  undefined1 local_160 [80];
  undefined1 local_110 [8];
  int local_108;
  int local_dc;
  undefined1 local_c0 [80];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_658;
  FUN_14852586c(local_160,param_1[0x54] + 0x390);
  local_198 = 0;
  local_190 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_18c = 0xffffffff00000080;
  local_184 = 0;
  local_178 = 0;
  local_170 = 0;
  if (local_108 == local_dc) {
    FUN_145c3f772(&local_1b8,local_c0);
    if (1 < (int)uStack_1b0 - local_184) {
LAB_148f672c6:
      pwVar15 = (wchar_t *)param_1[0x4d];
      local_3c8 = 0;
      auStack_3c0[0] = 0;
      auStack_3c0[1] = 0;
      local_3d8 = 0;
      auStack_3d0[0] = 0;
      auStack_3d0[1] = 0;
      local_3d9 = '\0';
      FUN_140619b9c(&local_1b8,&local_358);
      local_638 = &local_3d8;
      local_630 = &local_3d9;
      cVar4 = FUN_148f5d58d(param_1[0x4f],pwVar15,&local_358,&local_3c8);
      if (cVar4 == '\0') {
        if (local_358 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
LAB_148f67a1b:
        plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
        local_358 = L"OnWeldEdgesFailedEdgeCount";
        uStack_350._0_4_ = 0x1a;
        FUN_1446e940c(&local_568,&local_358);
        local_358 = L"UEditMeshPolygonsTool";
        uStack_350 = CONCAT44(uStack_350._4_4_,0x15);
        FUN_1446e940c(local_260,&local_358);
        FUN_140208bae(&local_358,local_260,&local_568,
                      L"Cannot Weld current selection, selection could not be partitioned into two non-loop open-boundary sequences."
                     );
        (**(code **)(*plVar6 + 0x340))(plVar6,&local_358,3);
        if (local_358 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_358 + 0x10))();
        }
      }
      else {
        uVar17 = auStack_3d0[0];
        if (local_358 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        cVar4 = local_3d9;
        if (uVar17 == 0) goto LAB_148f67a1b;
        puVar9 = auStack_3d0;
        if (local_3d9 != '\0') {
          puVar9 = auStack_3c0;
        }
        uVar17 = *puVar9;
        plVar6 = &local_3d8;
        if (local_3d9 != '\0') {
          plVar6 = &local_3c8;
        }
        if (1 < (int)uVar17) {
          puVar2 = (undefined4 *)*plVar6;
          lVar14 = 0;
          puVar10 = puVar2;
          do {
            uVar1 = *puVar10;
            *puVar10 = puVar2[(ulonglong)uVar17 + lVar14 + -1];
            puVar2[(ulonglong)uVar17 + lVar14 + -1] = uVar1;
            lVar14 = lVar14 + -1;
            puVar10 = puVar10 + 1;
          } while (-lVar14 != (ulonglong)(uVar17 >> 1));
        }
        FUN_146c2c368(local_260,pwVar15);
        FUN_146c2c4e8(local_260);
        uVar17 = auStack_3d0[0];
        if ((int)auStack_3c0[0] < (int)auStack_3d0[0]) {
          uVar17 = auStack_3c0[0];
        }
        local_428 = &local_3da;
        local_3da = '\x01';
        local_420 = &local_3f8;
        local_3f8 = (uint *)0x0;
        uStack_3f0 = 0;
        local_418 = local_408;
        local_408[0] = 0;
        local_408[1] = 0;
        local_410 = cVar4;
        uVar17 = uVar17 - 1;
        if (auStack_3c0[0] == auStack_3d0[0]) {
          uVar17 = auStack_3c0[0];
        }
        local_438 = local_260;
        local_430 = pwVar15;
        if (0 < (int)uVar17) {
          uVar18 = 0;
          do {
            FUN_1443673ca(&local_438,
                          *(longlong *)(param_1[0x4f] + 0x70) +
                          (longlong)*(int *)(local_3c8 + uVar18 * 4) * 0x50 + 8,
                          *(longlong *)(param_1[0x4f] + 0x70) +
                          (longlong)*(int *)(local_3d8 + uVar18 * 4) * 0x50 + 8);
            uVar18 = uVar18 + 1;
          } while (uVar17 != uVar18);
        }
        if ((int)uVar17 < (int)auStack_3c0[0]) {
          local_3a8 = 0;
          uStack_3a0 = 0;
          iVar13 = 0;
          iVar11 = -1;
          local_620 = CONCAT31(local_620._1_3_,cVar4);
          uVar5 = auStack_3c0[0];
          do {
            iVar3 = uVar17 + iVar13;
            if (cVar4 != '\0') {
              iVar3 = uVar5 + iVar11;
            }
            FUN_146c7f210(&local_358,
                          *(longlong *)(param_1[0x4f] + 0x70) +
                          (longlong)*(int *)(local_3c8 + (longlong)iVar3 * 4) * 0x50 + 8);
            FUN_146c5e534(&local_358);
            uVar18 = uStack_3a0;
            lVar14 = (longlong)(int)(uint)uStack_338;
            if (lVar14 != 0) {
              iVar3 = (int)uStack_3a0;
              lVar16 = (longlong)(int)uStack_3a0;
              uStack_3a0 = CONCAT44(uStack_3a0._4_4_,(int)uStack_3a0 + (uint)uStack_338);
              if ((uint)(uStack_3a0._4_4_ - iVar3) < (uint)uStack_338) {
                FUN_1446f48e2(&local_3a8,uVar18 & 0xffffffff);
              }
              memcpy((void *)(lVar16 * 4 + local_3a8),local_340,lVar14 << 2);
              cVar4 = (char)local_620;
            }
            FUN_146c7d752(&local_358);
            iVar13 = iVar13 + 1;
            iVar11 = iVar11 + -1;
            uVar5 = auStack_3c0[0];
          } while (iVar13 < (int)(auStack_3c0[0] - uVar17));
          local_478 = (wchar_t *)0x0;
          uStack_470 = 0;
          if ((int)uVar17 < (int)auStack_3d0[0]) {
            iVar13 = 0;
            iVar11 = -1;
            do {
              iVar3 = iVar13 + uVar17;
              if (cVar4 == '\0') {
                iVar3 = auStack_3d0[0] + iVar11;
              }
              FUN_146c7f210(&local_358,
                            *(longlong *)(param_1[0x4f] + 0x70) +
                            (longlong)*(int *)(local_3d8 + (longlong)iVar3 * 4) * 0x50 + 8);
              FUN_146c5e534(&local_358);
              uVar18 = uStack_470;
              lVar14 = (longlong)(int)(uint)uStack_338;
              if (lVar14 != 0) {
                iVar3 = (int)uStack_470;
                lVar16 = (longlong)(int)uStack_470;
                uStack_470 = CONCAT44(uStack_470._4_4_,(int)uStack_470 + (uint)uStack_338);
                if ((uint)(uStack_470._4_4_ - iVar3) < (uint)uStack_338) {
                  FUN_1446f48e2(&local_478,uVar18 & 0xffffffff);
                }
                memcpy(local_478 + lVar16 * 2,local_340,lVar14 << 2);
                cVar4 = (char)local_620;
              }
              FUN_146c7d752(&local_358);
              iVar13 = iVar13 + 1;
              iVar11 = iVar11 + -1;
            } while (iVar13 < (int)(auStack_3d0[0] - uVar17));
          }
          local_330 = 0;
          uStack_32c = 0;
          uStack_328 = 0;
          iStack_324 = 0;
          local_340 = (void *)0x0;
          uStack_338 = 0;
          uStack_350 = 0;
          uStack_348 = 0;
          local_320 = 0;
          local_358 = pwVar15;
          FUN_146c5e334(&local_358,&local_3a8);
          local_530 = 0;
          local_540 = 0;
          uStack_538 = 0;
          local_550 = 0;
          uStack_548 = 0;
          local_560 = 0;
          uStack_558 = 0;
          local_568 = pwVar15;
          FUN_146c5e334(&local_568,&local_478);
          FUN_1443673ca(&local_438,&local_358,&local_568);
          FUN_146c7d752(&local_568);
          FUN_146c7d752(&local_358);
          if (local_478 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (local_3a8 != 0) {
            FUN_1400020a8();
          }
        }
        local_450 = 0;
        uStack_448 = 0;
        local_460 = 0;
        uStack_458 = 0;
        uStack_470 = 0;
        uStack_468 = 0;
        local_440 = 0;
        local_480 = 0;
        local_490 = 0;
        uStack_488 = 0;
        local_4a0 = 0;
        uStack_498 = 0;
        local_4b0 = 0;
        uStack_4a8 = 0;
        local_4b8 = pwVar15;
        local_478 = pwVar15;
        FUN_146c5e334(&local_478,&local_3f8);
        FUN_146c5e334(&local_4b8,local_408);
        FUN_146c7f210(local_5a8,&local_478);
        FUN_146c7f210(local_5e8,&local_4b8);
        FUN_148f6d64e(&local_568,pwVar15,local_5e8,local_5a8);
        local_4d8 = 0x101;
        local_4d0 = param_2;
        iVar11 = FUN_148336f66(&local_568);
        if (iVar11 != 0) {
          local_3da = '\0';
        }
        if (*(int *)(param_1[0x4d] + 0x170) == 0) {
          plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
          local_358 = L"WeldEdgesWouldDeleteAll";
          uStack_350._0_4_ = 0x17;
          FUN_1446e940c(&local_3a8,&local_358);
          local_358 = L"UEditMeshPolygonsTool";
          uStack_350 = CONCAT44(uStack_350._4_4_,0x15);
          FUN_1446e940c(&local_3b8,&local_358);
          FUN_140208bae(&local_358,&local_3b8,&local_3a8,
                        L"Could not weld current selection because doing so would discard entire mesh."
                       );
          (**(code **)(*plVar6 + 0x340))(plVar6,&local_358,3);
          if (local_358 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_358 + 0x10))();
          }
          FUN_146c2caf6(local_260,&local_358);
          FUN_146c2a5c4(local_358,param_1[0x4d],1);
          pwVar15 = local_358;
          if (local_358 != (wchar_t *)0x0) {
            FUN_146c2a142(local_358);
            FUN_1400020a8(pwVar15);
          }
          FUN_14851bbe8(*(undefined8 *)(param_1[0x28] + 0x58),param_1[0x4d],1,0xf);
          *(undefined1 *)((longlong)param_1 + 0x4d1) = 1;
          lVar14 = param_1[0x54];
          FUN_14852f8ce(lVar14);
          *(undefined1 *)(*(longlong *)(lVar14 + 0x80) + 0xb1) = 0;
          uStack_338 = 0;
          local_330 = 0;
          local_358 = (wchar_t *)0x0;
          uStack_350 = 0;
          uStack_32c = 0x80;
          uStack_328 = 0xffffffff;
          iStack_324 = 0;
          local_318 = 0;
          local_310 = 0;
          FUN_145c3f772(&local_358,param_1[0x4f] + 0x120);
          (**(code **)(*(longlong *)param_1[0x4f] + 0x10))((longlong *)param_1[0x4f],&local_358);
          local_310 = 0;
          if (local_318 != 0) {
            FUN_1400020a8();
          }
          FUN_1447a082e(&local_358);
        }
        else {
          local_620 = local_4c0;
          local_358 = L"PolyMeshWeldEdgeChange";
          uStack_350._0_4_ = 0x16;
          FUN_1446e940c(&local_3a8,&local_358);
          local_358 = L"UEditMeshPolygonsTool";
          uStack_350 = CONCAT44(uStack_350._4_4_,0x15);
          FUN_1446e940c(&local_3b8,&local_358);
          FUN_140208bae(local_5f8,&local_3b8,&local_3a8,L"Weld Edges");
          lVar14 = (**(code **)(*param_1 + 0x2c8))(param_1);
          (**(code **)(*(longlong *)(lVar14 + 0x28) + 0x10))(lVar14 + 0x28,local_5f8);
          FUN_1458d302c(&local_358);
          FUN_146c2caf6(local_260,&local_600);
          FUN_148f6ca5e(param_1,local_5f8,&local_600,&local_358);
          FUN_1456c3cc8(&local_358);
          FUN_1458d302c(&local_358);
          local_388 = 0;
          local_380 = 0;
          local_3a8 = 0;
          uStack_3a0 = 0;
          local_37c = 0xffffffff00000080;
          local_374 = 0;
          local_368 = (undefined1 *)0x0;
          local_360 = 0;
          if ((longlong)(int)uStack_3f0 != 0) {
            puVar12 = local_3f8 + (int)uStack_3f0;
            puVar9 = local_3f8;
            do {
              uVar17 = *puVar9;
              if (((-1 < (int)uVar17) &&
                  ((int)uVar17 < *(int *)(pwVar15 + 0xe8) * 0x200 + *(int *)(pwVar15 + 0xea))) &&
                 ((ushort)(*(short *)(*(longlong *)
                                       (*(longlong *)(pwVar15 + 0xec) + (ulonglong)(uVar17 >> 9) * 8
                                       ) + (ulonglong)(uVar17 & 0x1ff) * 2) - 1U) < 0xfffe)) {
                if ((int)uStack_3a0 != local_374) {
                  puVar7 = local_368;
                  if (local_368 == (undefined1 *)0x0) {
                    puVar7 = local_370;
                  }
                  for (iVar11 = *(int *)(puVar7 + (ulonglong)(local_360 + 0x7fffffffU & uVar17) * 4)
                      ; iVar11 != -1; iVar11 = *(int *)(local_3a8 + (longlong)iVar11 * 0xc + 4)) {
                    if (*(uint *)(local_3a8 + (longlong)iVar11 * 0xc) == uVar17) goto LAB_148f67d97;
                  }
                }
                iVar11 = FUN_1482abca2(param_1[0x4f]);
                local_3b8 = (wchar_t *)CONCAT44(local_3b8._4_4_,iVar11);
                if (iVar11 != -1) {
                  FUN_1447cbafe(local_2b8,local_604,&local_3b8,0);
                  puVar8 = (undefined8 *)
                           FUN_1482abdf2(param_1[0x4f],(ulonglong)local_3b8 & 0xffffffff);
                  local_618 = *puVar8;
                  local_610 = *(undefined4 *)(puVar8 + 1);
                  FUN_146bc855c(&local_3a8,&local_618);
                }
              }
LAB_148f67d97:
              puVar9 = puVar9 + 1;
            } while (puVar9 != puVar12);
          }
          if (((local_300 != local_2d4) || (local_2b0 != local_284)) ||
             ((int)uStack_350 != iStack_324)) {
            FUN_1485316d6(param_1[0x54],&local_358,1);
          }
          if (local_620 == 0) {
            if (local_3da == '\0') {
              plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
              local_3b8 = L"OnWeldEdgesPartialFailure";
              local_3b0 = 0x19;
              FUN_1446e940c(local_604,&local_3b8);
              local_3b8 = L"UEditMeshPolygonsTool";
              local_3b0 = 0x15;
              FUN_1446e940c(local_61c,&local_3b8);
              FUN_140208bae(&local_3b8,local_61c,local_604,
                            L"Warning: some edges could not be welded.");
              (**(code **)(*plVar6 + 0x340))(plVar6,&local_3b8,3);
              if (local_3b8 != (wchar_t *)0x0) {
                (**(code **)(*(longlong *)local_3b8 + 0x10))();
              }
            }
          }
          else {
            plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
            (**(code **)(*plVar6 + 0x340))(plVar6,&DAT_14cbf3ae8,3);
          }
          lVar14 = (**(code **)(*param_1 + 0x2c8))(param_1);
          (**(code **)(*(longlong *)(lVar14 + 0x28) + 0x18))(lVar14 + 0x28);
          local_360 = 0;
          if (local_368 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_1447a082e(&local_3a8);
          FUN_1456c3cc8(&local_358);
          if (local_5f8[0] != (longlong *)0x0) {
            (**(code **)(*local_5f8[0] + 0x10))();
          }
        }
        FUN_148f6d6be(&local_568);
        FUN_146c7d752(&local_4b8);
        FUN_146c7d752(&local_478);
        if (local_408[0] != 0) {
          FUN_1400020a8();
        }
        if (local_3f8 != (uint *)0x0) {
          FUN_1400020a8();
        }
        FUN_146c2c40e(local_260);
      }
      if (local_3d8 != 0) {
        FUN_1400020a8();
      }
      if (local_3c8 != 0) {
        FUN_1400020a8();
      }
      goto LAB_148f671b7;
    }
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_358 = L"OnWeldEdgesFailedTooFew";
    uStack_350._0_4_ = 0x17;
    FUN_1446e940c(&local_568,&local_358);
    local_358 = L"UEditMeshPolygonsTool";
    uStack_350 = CONCAT44(uStack_350._4_4_,0x15);
    FUN_1446e940c(local_260,&local_358);
    pwVar15 = L"Cannot Weld current selection, selection must be at least 2 edges.";
  }
  else {
    if (local_108 - local_dc == 2) {
      FUN_148f6cf8e(param_1,(int)param_2);
      goto LAB_148f671b7;
    }
    FUN_148f5d452(param_1[0x4f],local_110,&local_1b8);
    if (1 < (int)uStack_1b0 - local_184) goto LAB_148f672c6;
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_358 = L"OnWeldVerticesFailedInvalidCount";
    uStack_350._0_4_ = 0x20;
    FUN_1446e940c(&local_568,&local_358);
    local_358 = L"UEditMeshPolygonsTool";
    uStack_350 = CONCAT44(uStack_350._4_4_,0x15);
    FUN_1446e940c(local_260,&local_358);
    pwVar15 = 
    L"Cannot Weld current selection, selection must be either 2 vertices or convertible to at least 2 edges."
    ;
  }
  FUN_140208bae(&local_358,local_260,&local_568,pwVar15);
  (**(code **)(*plVar6 + 0x340))(plVar6,&local_358,3);
  if (local_358 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_358 + 0x10))();
  }
LAB_148f671b7:
  local_170 = 0;
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_1b8);
  FUN_1456c3cc8(local_160);
  if ((local_70 ^ (ulonglong)auStack_658) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f67ec6 FUN_148f67ec6 body=1181 status=ok
// SIG undefined FUN_148f67ec6(void)

void FUN_148f67ec6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  void *_Src;
  longlong lVar12;
  char cVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_2c8 [32];
  undefined1 local_2a8 [4];
  undefined1 local_2a4 [4];
  undefined1 local_2a0 [8];
  void *local_298;
  int local_290;
  wchar_t *local_288;
  undefined8 uStack_280;
  wchar_t *local_278;
  undefined1 *puStack_270;
  double local_268;
  undefined1 local_188 [168];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  puStack_270 = local_188;
  local_278 = L"ư쳃捈䠂ঋ譈碉\x02䠀冋䡰見\x80";
  cVar13 = FUN_148f6e742();
  if (cVar13 == '\0') {
    plVar14 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_278 = L"OnStraightenEdgesFailed";
    puStack_270._0_4_ = 0x17;
    FUN_1446e940c(local_188,&local_278);
    local_278 = L"UEditMeshPolygonsTool";
    puStack_270 = (undefined1 *)CONCAT44(puStack_270._4_4_,0x15);
    FUN_1446e940c(&local_288,&local_278);
    FUN_140208bae(&local_278,&local_288,local_188,L"Cannot Straighten current selection");
    (**(code **)(*plVar14 + 0x340))(plVar14,&local_278,3);
    if (local_278 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_278 + 0x10))();
    }
  }
  else {
    lVar11 = param_1[0x4d];
    FUN_146c2c368(local_188,lVar11);
    FUN_146c2c4e8(local_188);
    if ((longlong)(int)param_1[0xb5] != 0) {
      puVar17 = (undefined4 *)param_1[0xb4];
      puVar1 = puVar17 + (longlong)(int)param_1[0xb5] * 6;
      do {
        plVar14 = (longlong *)FUN_1482abdda(param_1[0x4f],*puVar17);
        iVar9 = (int)plVar14[1];
        if (2 < (longlong)iVar9) {
          local_298 = (void *)0x0;
          _Src = (void *)*plVar14;
          local_290 = iVar9;
          FUN_144a06ca8(&local_298,iVar9,0);
          memcpy(local_298,_Src,(longlong)iVar9 << 2);
          FUN_148f6e68c(local_188,&local_298,1);
          uVar10 = *(uint *)*plVar14;
          lVar12 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + (ulonglong)(uVar10 >> 9) * 8);
          uVar15 = (ulonglong)uVar10 & 0x1ff;
          dVar3 = *(double *)(lVar12 + uVar15 * 0x18);
          dVar4 = *(double *)(lVar12 + 8 + uVar15 * 0x18);
          dVar5 = *(double *)(lVar12 + 0x10 + uVar15 * 0x18);
          uVar10 = ((uint *)*plVar14)[iVar9 - 1];
          lVar12 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + (ulonglong)(uVar10 >> 9) * 8);
          uVar15 = (ulonglong)uVar10 & 0x1ff;
          dVar6 = *(double *)(lVar12 + uVar15 * 0x18);
          dVar7 = *(double *)(lVar12 + 8 + uVar15 * 0x18);
          dVar8 = *(double *)(lVar12 + 0x10 + uVar15 * 0x18);
          local_288 = (wchar_t *)0x0;
          uStack_280 = 0;
          dVar18 = (double)FUN_1482ac182(param_1[0x4f],*puVar17);
          uVar15 = 1;
          do {
            dVar19 = *(double *)(local_288 + uVar15 * 4) / dVar18;
            dVar20 = 1.0 - dVar19;
            local_268 = dVar20 * dVar5 + dVar8 * dVar19;
            puStack_270 = (undefined1 *)(dVar20 * dVar4 + dVar7 * dVar19);
            local_278 = (wchar_t *)(dVar20 * dVar3 + dVar19 * dVar6);
            uVar10 = *(uint *)(*plVar14 + uVar15 * 4);
            cVar13 = FUN_146bfed03(&local_278);
            if (cVar13 != '\0') {
              lVar12 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + (ulonglong)(uVar10 >> 9) * 8);
              uVar16 = (ulonglong)(uVar10 & 0x1ff);
              *(double *)(lVar12 + 0x10 + uVar16 * 0x18) = local_268;
              puVar2 = (undefined8 *)(lVar12 + uVar16 * 0x18);
              *puVar2 = local_278;
              puVar2[1] = puStack_270;
              if (*(char *)(lVar11 + 0x210) == '\x01') {
                LOCK();
                *(int *)(lVar11 + 0x214) = *(int *)(lVar11 + 0x214) + 1;
                UNLOCK();
              }
            }
            uVar15 = uVar15 + 1;
          } while (iVar9 - 1 != uVar15);
          if (local_288 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
        puVar17 = puVar17 + 6;
      } while (puVar17 != puVar1);
    }
    FUN_1458d302c(&local_278);
    FUN_146c2caf6(local_188,local_2a0);
    local_288 = L"PolyMeshStraightenEdgeChange";
    uStack_280._0_4_ = 0x1c;
    FUN_1446e940c(local_2a4,&local_288);
    local_288 = L"UEditMeshPolygonsTool";
    uStack_280 = CONCAT44(uStack_280._4_4_,0x15);
    FUN_1446e940c(local_2a8,&local_288);
    FUN_140208bae(&local_288,local_2a8,local_2a4,L"Straighten Edges");
    FUN_148f6ca5e(param_1,&local_288,local_2a0,&local_278);
    if (local_288 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_288 + 0x10))();
    }
    FUN_1456c3cc8(&local_278);
    FUN_146c2c40e(local_188);
  }
  if ((local_e0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f68364 FUN_148f68364 body=1425 status=ok
// SIG undefined FUN_148f68364(void)

void FUN_148f68364(longlong *param_1)

{
  wchar_t *pwVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_448 [32];
  undefined8 *local_428;
  undefined4 local_420;
  undefined1 local_418;
  undefined1 local_410;
  undefined1 local_408 [8];
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  wchar_t *local_3c0;
  undefined1 local_3b8 [24];
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  longlong local_388 [3];
  undefined4 local_370;
  int local_364;
  undefined1 local_360 [64];
  undefined **local_320;
  longlong local_318;
  undefined8 uStack_310;
  wchar_t *local_308;
  undefined1 local_300 [64];
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  wchar_t *local_298;
  longlong lStack_290;
  undefined8 uStack_288;
  undefined3 uStack_280;
  undefined5 local_27d;
  undefined3 uStack_278;
  undefined8 uStack_275;
  undefined1 *local_26c;
  undefined8 local_258;
  undefined8 local_248;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  wchar_t *local_1f8;
  longlong **local_1f0;
  longlong *local_108 [21];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_448;
  local_1f0 = local_108;
  local_1f8 = L"捈䠂ঋ譈碉\x02䠀冋䡰見\x80";
  local_108[0] = param_1;
  cVar4 = FUN_148f6e742();
  if (cVar4 == '\0') {
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_1f8 = L"OnEdgeFillFailed";
    local_1f0._0_4_ = 0x10;
    FUN_1446e940c(local_108,&local_1f8);
    local_1f8 = L"UEditMeshPolygonsTool";
    local_1f0 = (longlong **)CONCAT44(local_1f0._4_4_,0x15);
    FUN_1446e940c(&local_298,&local_1f8);
    FUN_140208bae(&local_1f8,&local_298,local_108,L"Cannot Fill current selection");
    (**(code **)(*plVar6 + 0x340))(plVar6,&local_1f8,3);
    if (local_1f8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_1f8 + 0x10))();
    }
  }
  else {
    pwVar1 = (wchar_t *)param_1[0x4d];
    FUN_146c2c368(local_108,pwVar1);
    FUN_146c2c4e8(local_108);
    FUN_1458d302c(&local_1f8);
    lVar3 = param_1[0xb5];
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = param_1[0xb4];
      lVar7 = 0;
      do {
        uVar5 = **(uint **)(lVar2 + 8 + lVar7);
        if (*(int *)(*(longlong *)(*(longlong *)(pwVar1 + 0xe0) + (ulonglong)(uVar5 >> 9) * 8) + 0xc
                    + (ulonglong)((uVar5 & 0x1ff) << 4)) == -1) {
          uStack_278 = 0;
          uStack_275 = 0;
          uStack_288 = 0;
          uStack_280 = 0;
          local_27d = 0;
          lStack_290 = 0;
          local_26c = &DAT_100000002;
          local_258 = 0;
          local_248 = 0;
          local_208 = 0;
          uStack_200 = 0;
          local_218 = 0;
          uStack_210 = 0;
          local_298 = pwVar1;
          FUN_146c68b4c(&local_298);
          uVar5 = FUN_146c68afe(&local_298,**(undefined4 **)(lVar2 + 8 + lVar7));
          if (-1 < (int)uVar5) {
            lVar8 = (ulonglong)uVar5 * 0x40 + lStack_290;
            FUN_146c7f310(local_360,lVar8);
            local_318 = 0;
            uStack_310 = 0;
            local_320 = &PTR_FUN_14ae72d10;
            local_308 = pwVar1;
            FUN_146c7f310(local_300,local_360);
            local_2c0 = 0xffffffff00000000;
            FUN_146bc7c1a(local_360);
            local_2c0 = CONCAT44(local_2c0._4_4_,1);
            local_364 = *(int *)(pwVar1 + 0xd8);
            *(int *)(pwVar1 + 0xd8) = local_364 + 1;
            FUN_148314c5e(&local_320);
            if ((char)param_1[0x27] == '\0') {
              FUN_1447cbafe(&local_1f8,&local_3f8,&local_364,0);
            }
            else {
              local_388[2] = local_318;
              local_370 = (undefined4)uStack_310;
              FUN_146bc855c(&local_1f8,local_388 + 2);
            }
            if (*(longlong *)(pwVar1 + 0x104) != 0) {
              local_388[0] = 0;
              local_388[1] = 0;
              FUN_14845d8b4(lVar8,local_388);
              FUN_146bd1842(local_388,local_3b8,&local_3a0);
              local_3e0 = 0;
              uStack_3d8 = 0;
              local_3d0 = 0;
              local_3c8 = 0x3ff0000000000000;
              local_3f8 = local_3a0;
              uStack_3f0 = uStack_398;
              local_3e8 = local_390;
              local_2a8 = DAT_14c8463c8;
              local_2b8 = (undefined4)DAT_14c8463b8;
              uStack_2b4 = DAT_14c8463b8._4_4_;
              uStack_2b0 = (undefined4)DAT_14c8463c0;
              uStack_2ac = DAT_14c8463c0._4_4_;
              local_3c0 = pwVar1;
              FUN_146bfb7f2(&local_3e0,&local_2b8,local_3b8);
              FUN_146bc9e14(&local_3c0,&local_318);
              local_400 = DAT_14c84635c;
              local_2b8 = *(undefined4 *)((longlong)param_1 + 0x4d4);
              local_428 = &local_400;
              local_410 = 0;
              local_418 = 1;
              local_420 = 0;
              uStack_2b4 = local_2b8;
              FUN_146bca2ae(&local_3c0,&local_318,&local_3f8);
              if (local_388[0] != 0) {
                FUN_1400020a8();
              }
            }
            local_320 = &PTR_FUN_14ae72d10;
            FUN_146bc7c1a(local_300);
            local_320 = &PTR_LAB_14ae72d28;
            if (local_318 != 0) {
              FUN_1400020a8();
            }
          }
          FUN_1482f1656(&local_298);
        }
        lVar7 = lVar7 + 0x18;
      } while ((longlong)(int)lVar3 * 0x18 != lVar7);
    }
    FUN_146c2caf6(local_108,local_408);
    local_298 = L"PolyMeshFillHoleChange";
    lStack_290._0_4_ = 0x16;
    FUN_1446e940c(&local_320,&local_298);
    local_298 = L"UEditMeshPolygonsTool";
    lStack_290 = CONCAT44(lStack_290._4_4_,0x15);
    FUN_1446e940c(&local_3f8,&local_298);
    FUN_140208bae(&local_298,&local_3f8,&local_320,L"Fill Hole");
    FUN_148f6ca5e(param_1,&local_298,local_408,&local_1f8);
    if (local_298 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_298 + 0x10))();
    }
    FUN_1456c3cc8(&local_1f8);
    FUN_146c2c40e(local_108);
  }
  if ((local_60 ^ (ulonglong)auStack_448) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f688f6 FUN_148f688f6 body=2852 status=ok
// SIG undefined FUN_148f688f6(void)

void FUN_148f688f6(longlong *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  void *pvVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_458 [32];
  longlong *local_438;
  char *local_430;
  char local_425;
  int local_424;
  ulonglong local_420;
  undefined8 local_418;
  undefined1 local_40c [4];
  void *local_408;
  undefined8 uStack_400;
  longlong *local_3f8;
  undefined8 uStack_3f0;
  uint local_3e8;
  longlong *local_3b8;
  longlong *local_3b0;
  longlong **local_3a8;
  longlong *local_3a0;
  longlong local_398;
  undefined8 uStack_390;
  char local_379;
  longlong local_378;
  undefined8 uStack_370;
  longlong local_368;
  undefined8 uStack_360;
  longlong local_358;
  longlong *local_350 [2];
  wchar_t *local_340;
  int local_338;
  undefined4 uStack_334;
  uint local_330;
  int local_30c;
  int local_2e8;
  int local_2bc;
  int local_298;
  int local_26c;
  undefined1 local_250 [168];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  longlong local_168;
  undefined4 local_160;
  wchar_t *local_150;
  undefined4 local_148;
  undefined1 local_100 [8];
  int local_f8;
  int local_cc;
  undefined1 local_b0 [80];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_458;
  local_150 = L"OnEdgeBridgeFailed";
  local_148 = 0x12;
  FUN_1446e940c(&local_340,&local_150);
  local_150 = L"UEditMeshPolygonsTool";
  local_148 = 0x15;
  FUN_1446e940c(local_250,&local_150);
  FUN_140208bae(local_350,local_250,&local_340,L"Cannot Bridge current selection");
  FUN_14852586c(&local_150,param_1[0x54] + 0x390);
  local_188 = 0;
  local_180 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_17c = 0xffffffff00000080;
  local_174 = 0;
  local_168 = 0;
  local_160 = 0;
  if (local_f8 == local_cc) {
    FUN_145c3f772(&local_1a8,local_b0);
  }
  else {
    FUN_148f5d452(param_1[0x4f],local_100,&local_1a8);
  }
  local_358 = param_1[0x4d];
  local_368 = 0;
  uStack_360 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_379 = '\0';
  FUN_140619b9c(&local_1a8,&local_340);
  local_438 = &local_378;
  local_430 = &local_379;
  cVar6 = FUN_148f5d58d(param_1[0x4f],local_358,&local_340,&local_368);
  if (local_340 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (cVar6 == '\0') {
    plVar9 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_340 = L"OnEdgeBridgeFailedInvalidSelection";
    local_338 = 0x22;
    FUN_1446e940c(local_250,&local_340);
    local_340 = L"UEditMeshPolygonsTool";
    local_338 = 0x15;
    FUN_1446e940c(&local_3f8,&local_340);
    FUN_140208bae(&local_340,&local_3f8,local_250,
                  L"Cannot bridge current selection, selection could not be partitioned into a single hole or two non-loop open-boundary sequences."
                 );
    (**(code **)(*plVar9 + 0x340))(plVar9,&local_340,3);
    if (local_340 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_340 + 0x10))();
    }
    goto LAB_148f69107;
  }
  local_3a0 = &local_398;
  local_398 = 0;
  uStack_390 = 0;
  local_3b8 = &local_358;
  local_3b0 = param_1;
  local_3a8 = local_350;
  FUN_146c2c368(local_250,local_358);
  FUN_146c2c4e8(local_250);
  if ((uint)uStack_370 == 0) {
    local_3f8 = (longlong *)0x0;
    uStack_3f0 = (void *)0x0;
    if (0 < (int)(uint)uStack_360) {
      lVar15 = 0;
      do {
        FUN_146c7f210(&local_340,
                      *(longlong *)(param_1[0x4f] + 0x70) +
                      (longlong)*(int *)(local_368 + lVar15 * 4) * 0x50 + 8);
        FUN_146c5e534(&local_340);
        if ((0 < (int)(uint)uStack_3f0) &&
           (*(int *)((longlong)local_3f8 + (ulonglong)((uint)uStack_3f0 - 1) * 4) ==
            *(int *)CONCAT44(uStack_334,local_338))) {
          uStack_3f0 = (void *)CONCAT44(uStack_3f0._4_4_,(uint)uStack_3f0 - 1);
          FUN_14479f406(&local_3f8);
        }
        pvVar5 = uStack_3f0;
        lVar17 = (longlong)(int)local_330;
        if (lVar17 != 0) {
          iVar12 = (uint)uStack_3f0;
          lVar18 = (longlong)(int)(uint)uStack_3f0;
          uStack_3f0 = (void *)CONCAT44(uStack_3f0._4_4_,(uint)uStack_3f0 + local_330);
          if (uStack_3f0._4_4_ - iVar12 < local_330) {
            FUN_1446f48e2(&local_3f8,(ulonglong)pvVar5 & 0xffffffff);
          }
          memcpy((int *)(lVar18 * 4 + (longlong)local_3f8),(void *)CONCAT44(uStack_334,local_338),
                 lVar17 << 2);
        }
        FUN_146c7d752(&local_340);
        lVar15 = lVar15 + 1;
      } while (lVar15 < (int)(uint)uStack_360);
      if ((0 < (int)(uint)uStack_3f0) &&
         (*(int *)((longlong)local_3f8 + (ulonglong)((uint)uStack_3f0 - 1) * 4) == (int)*local_3f8))
      {
        uStack_3f0 = (void *)CONCAT44(uStack_3f0._4_4_,(uint)uStack_3f0 - 1);
        FUN_14479f406(&local_3f8);
        FUN_1443677b4(&local_3b8,&local_3f8);
        goto LAB_148f692c3;
      }
    }
    plVar9 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*plVar9 + 0x340))(plVar9,local_350,3);
    if (local_3f8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_425 = local_379;
    plVar9 = &local_378;
    uVar8 = (uint)uStack_370;
    if (local_379 != '\0') {
      plVar9 = &local_368;
      uVar8 = (uint)uStack_360;
    }
    if (1 < (int)uVar8) {
      puVar2 = (undefined4 *)*plVar9;
      lVar15 = 0;
      puVar10 = puVar2;
      do {
        uVar7 = *puVar10;
        *puVar10 = puVar2[(ulonglong)uVar8 + lVar15 + -1];
        puVar2[(ulonglong)uVar8 + lVar15 + -1] = uVar7;
        lVar15 = lVar15 + -1;
        puVar10 = puVar10 + 1;
      } while (-lVar15 != (ulonglong)(uVar8 >> 1));
    }
    uVar8 = (uint)uStack_370;
    if ((int)(uint)uStack_360 < (int)(uint)uStack_370) {
      uVar8 = (uint)uStack_360;
    }
    local_420 = CONCAT44(local_420._4_4_,0xffffffff);
    local_424 = -1;
    uVar14 = (uint)uStack_370;
    uVar11 = (uint)uStack_360;
    if (0 < (int)uVar8) {
      uVar16 = 0;
      local_420 = (ulonglong)uVar8;
      do {
        FUN_146c7f210(&local_340,
                      *(longlong *)(param_1[0x4f] + 0x70) +
                      (longlong)*(int *)(local_368 + uVar16 * 4) * 0x50 + 8);
        FUN_146c5e534(&local_340);
        FUN_146c7f210(&local_3f8,
                      *(longlong *)(param_1[0x4f] + 0x70) +
                      (longlong)*(int *)(local_378 + uVar16 * 4) * 0x50 + 8);
        FUN_146c5e534(&local_3f8);
        local_408 = (void *)0x0;
        uStack_400 = 0;
        lVar15 = (longlong)(int)local_330;
        if (lVar15 != 0) {
          uStack_400 = (ulonglong)local_330;
          FUN_1446f48e2(&local_408,0);
          memcpy(local_408,(void *)CONCAT44(uStack_334,local_338),lVar15 << 2);
        }
        uVar4 = uStack_400;
        lVar15 = (longlong)(int)local_3e8;
        uVar14 = 0;
        if (lVar15 != 0) {
          iVar12 = (int)uStack_400;
          lVar17 = (longlong)(int)uStack_400;
          uStack_400 = CONCAT44(uStack_400._4_4_,(int)uStack_400 + local_3e8);
          if (uStack_400._4_4_ - iVar12 < local_3e8) {
            FUN_1446f48e2(&local_408,uVar4 & 0xffffffff);
          }
          memcpy((void *)(lVar17 * 4 + (longlong)local_408),uStack_3f0,lVar15 << 2);
          uVar14 = local_3e8;
        }
        lVar15 = (longlong)(int)local_330 + -1;
        if (local_425 != '\0') {
          lVar15 = 0;
        }
        uVar7 = *(undefined4 *)(CONCAT44(uStack_334,local_338) + lVar15 * 4);
        lVar15 = (longlong)(int)(uVar14 - 1);
        if (local_425 == '\0') {
          lVar15 = 0;
        }
        iVar12 = *(int *)((longlong)uStack_3f0 + lVar15 * 4);
        FUN_1443677b4(&local_3b8,&local_408);
        if (local_408 != (void *)0x0) {
          FUN_1400020a8();
        }
        FUN_146c7d752(&local_3f8);
        FUN_146c7d752(&local_340);
        uVar16 = uVar16 + 1;
      } while (local_420 != uVar16);
      local_420 = CONCAT44(local_420._4_4_,uVar7);
      uVar14 = (uint)uStack_370;
      uVar11 = (uint)uStack_360;
      local_424 = iVar12;
    }
    if (uVar11 != uVar14) {
      uVar3 = uVar14;
      if ((int)uVar14 <= (int)uVar11) {
        uVar3 = uVar11;
      }
      local_3f8 = (longlong *)0x0;
      uStack_3f0 = (void *)0x0;
      if ((int)uVar8 < (int)uVar3) {
        lVar15 = (longlong)(int)uVar8;
        do {
          pvVar5 = uStack_3f0;
          plVar9 = &local_378;
          if ((int)uVar14 < (int)uVar11) {
            plVar9 = &local_368;
          }
          lVar17 = *plVar9;
          lVar18 = (longlong)(int)(uint)uStack_3f0;
          uVar8 = (uint)uStack_3f0 + 1;
          uStack_3f0 = (void *)CONCAT44(uStack_3f0._4_4_,uVar8);
          if (uStack_3f0._4_4_ < uVar8) {
            FUN_1446f48e2(&local_3f8,(ulonglong)pvVar5 & 0xffffffff);
          }
          lVar1 = lVar15 * 4;
          lVar15 = lVar15 + 1;
          plVar9 = &local_378;
          if ((int)uVar14 < (int)uVar11) {
            plVar9 = &local_368;
          }
          *(int *)((longlong)local_3f8 + lVar18 * 4) = *(int *)(lVar17 + lVar1);
        } while (lVar15 < (int)plVar9[1]);
      }
      if (((bool)local_425 == (int)uVar14 < (int)uVar11) && (1 < (longlong)(int)(uint)uStack_3f0)) {
        lVar15 = (longlong)(int)(uint)uStack_3f0 * 4 + -4;
        lVar17 = 0;
        plVar9 = local_3f8;
        do {
          lVar18 = *plVar9;
          *(int *)plVar9 = *(int *)((longlong)local_3f8 + lVar17 * 4 + lVar15);
          *(int *)((longlong)local_3f8 + lVar17 * 4 + lVar15) = (int)lVar18;
          lVar17 = lVar17 + -1;
          plVar9 = (longlong *)((longlong)plVar9 + 4);
        } while (-lVar17 != (ulonglong)((uint)uStack_3f0 >> 1));
      }
      iVar12 = (int)local_420;
      if ((int)uVar14 < (int)uVar11) {
        iVar12 = local_424;
      }
      if (iVar12 != -1) {
        local_408 = (void *)0x0;
        uStack_400 = 0;
        iVar13 = 0;
        uVar8 = 0;
        if (0 < (int)(uint)uStack_3f0) {
          lVar15 = 0;
          do {
            FUN_146c7f210(&local_340,
                          *(longlong *)(param_1[0x4f] + 0x70) +
                          (longlong)*(int *)((longlong)local_3f8 + lVar15 * 4) * 0x50 + 8);
            FUN_146c5e534(&local_340);
            if ((0 < (int)uStack_400) &&
               (*(int *)((longlong)local_408 + (ulonglong)((int)uStack_400 - 1U) * 4) ==
                *(int *)CONCAT44(uStack_334,local_338))) {
              uStack_400 = CONCAT44(uStack_400._4_4_,(int)uStack_400 - 1U);
              FUN_14479f406(&local_408);
            }
            uVar16 = uStack_400;
            lVar17 = (longlong)(int)local_330;
            if (lVar17 != 0) {
              iVar13 = (int)uStack_400;
              lVar18 = (longlong)(int)uStack_400;
              uStack_400 = CONCAT44(uStack_400._4_4_,(int)uStack_400 + local_330);
              if (uStack_400._4_4_ - iVar13 < local_330) {
                FUN_1446f48e2(&local_408,uVar16 & 0xffffffff);
              }
              memcpy((void *)(lVar18 * 4 + (longlong)local_408),
                     (void *)CONCAT44(uStack_334,local_338),lVar17 << 2);
            }
            FUN_146c7d752(&local_340);
            lVar15 = lVar15 + 1;
          } while (lVar15 < (int)(uint)uStack_3f0);
          iVar13 = (int)uStack_400;
          uVar8 = uStack_400._4_4_;
        }
        uStack_400 = CONCAT44(uStack_400._4_4_,iVar13 + 1U);
        if (uVar8 < iVar13 + 1U) {
          FUN_1446f48e2(&local_408,iVar13);
        }
        *(int *)((longlong)local_408 + (longlong)iVar13 * 4) = iVar12;
        FUN_1443677b4(&local_3b8,&local_408);
        if (local_408 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_148f692c3:
      if (local_3f8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    local_340 = L"PolyMeshBridgeEdgeChange";
    local_338 = 0x18;
    FUN_1446e940c(&local_408,&local_340);
    local_340 = L"UEditMeshPolygonsTool";
    local_338 = 0x15;
    FUN_1446e940c(local_40c,&local_340);
    FUN_140208bae(&local_3f8,local_40c,&local_408,L"Bridge Edge");
    lVar15 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar15 + 0x28) + 0x10))(lVar15 + 0x28,&local_3f8);
    FUN_1458d302c(&local_340);
    FUN_146c2caf6(local_250,&local_418);
    FUN_148f6ca5e(param_1,&local_3f8,&local_418,&local_340);
    FUN_1456c3cc8(&local_340);
    FUN_1458d302c(&local_340);
    lVar15 = local_398;
    lVar17 = (longlong)(int)uStack_390;
    if (lVar17 != 0) {
      lVar18 = 0;
      do {
        uVar7 = (**(code **)(*(longlong *)param_1[0x4f] + 0x18))
                          ((longlong *)param_1[0x4f],*(undefined4 *)(lVar15 + lVar18));
        local_408 = (void *)CONCAT44(local_408._4_4_,uVar7);
        FUN_144984904(&local_340,local_40c,&local_408,0);
        lVar18 = lVar18 + 4;
      } while (lVar17 * 4 != lVar18);
    }
    if (((local_2e8 != local_2bc) || (local_298 != local_26c)) || (local_338 != local_30c)) {
      FUN_1485316d6(param_1[0x54],&local_340,1);
    }
    lVar15 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar15 + 0x28) + 0x18))(lVar15 + 0x28);
    FUN_1456c3cc8(&local_340);
    if (local_3f8 != (longlong *)0x0) {
      (**(code **)(*local_3f8 + 0x10))();
    }
  }
  FUN_146c2c40e(local_250);
  if (local_398 != 0) {
    FUN_1400020a8();
  }
LAB_148f69107:
  if (local_378 != 0) {
    FUN_1400020a8();
  }
  if (local_368 != 0) {
    FUN_1400020a8();
  }
  local_160 = 0;
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_1a8);
  FUN_1456c3cc8(&local_150);
  if (local_350[0] != (longlong *)0x0) {
    (**(code **)(*local_350[0] + 0x10))();
  }
  if ((local_60 ^ (ulonglong)auStack_458) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f6941c FUN_148f6941c body=1026 status=ok
// SIG undefined FUN_148f6941c(void)

void FUN_148f6941c(longlong *param_1)

{
  longlong lVar1;
  void *_Src;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_2e8 [40];
  longlong local_2c0;
  undefined1 local_2b8 [4];
  undefined1 local_2b4 [4];
  undefined1 local_2b0 [8];
  undefined8 local_2a8;
  undefined4 local_2a0;
  void *local_298;
  int local_290;
  undefined4 local_28c;
  wchar_t *local_288;
  undefined4 local_280;
  wchar_t *local_278;
  undefined1 *local_270;
  undefined2 local_268;
  undefined1 local_266;
  undefined4 local_264;
  undefined1 local_260;
  undefined4 local_25c;
  undefined8 local_188 [2];
  undefined8 local_178;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  undefined1 local_f0 [168];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  local_270 = local_f0;
  local_278 = L"ư쳃捈䠂ঋ譈碉\x02䠀冋䡰見\x80";
  cVar3 = FUN_148f6e742();
  if (cVar3 == '\0') {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_278 = L"OnSimplifyAlongEdgesFailed";
    local_270._0_4_ = 0x1a;
    FUN_1446e940c(local_f0,&local_278);
    local_278 = L"UEditMeshPolygonsTool";
    local_270 = (undefined1 *)CONCAT44(local_270._4_4_,0x15);
    FUN_1446e940c(&local_148,&local_278);
    FUN_140208bae(&local_278,&local_148,local_f0,L"Cannot Simplify current selection");
    (**(code **)(*plVar4 + 0x340))(plVar4,&local_278,3);
    if (local_278 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_278 + 0x10))();
    }
  }
  else {
    local_2c0 = param_1[0x4d];
    FUN_146c2c368(local_f0);
    FUN_146c2c4e8(local_f0);
    local_128 = 0;
    local_120 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_11c = 0xffffffff00000080;
    local_114 = 0;
    local_108 = 0;
    local_100 = 0;
    lVar2 = param_1[0xb5];
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = param_1[0xb4];
      lVar6 = 0;
      do {
        if (1 < *(int *)(lVar1 + 0x10 + lVar6)) {
          puVar5 = (undefined8 *)FUN_1482abdda(param_1[0x4f],*(undefined4 *)(lVar1 + lVar6));
          local_298 = (void *)0x0;
          local_290 = *(int *)(puVar5 + 1);
          lVar7 = (longlong)local_290;
          _Src = (void *)*puVar5;
          if (lVar7 == 0) {
            local_28c = 0;
          }
          else {
            FUN_144a06ca8(&local_298,local_290,0);
            memcpy(local_298,_Src,lVar7 << 2);
          }
          FUN_148f6e68c(local_f0,&local_298);
        }
        lVar6 = lVar6 + 0x18;
      } while ((longlong)(int)lVar2 * 0x18 != lVar6);
      lVar2 = param_1[0xb5];
      if ((longlong)(int)lVar2 != 0) {
        lVar1 = param_1[0xb4];
        lVar6 = 0;
        do {
          if (1 < *(int *)(lVar1 + 0x10 + lVar6)) {
            FUN_1402226aa(&local_148);
            local_2a8 = *(undefined8 *)(lVar1 + 8 + lVar6);
            local_2a0 = *(undefined4 *)(lVar1 + 0x10 + lVar6);
            FUN_146bc855c(&local_148,&local_2a8);
            local_278 = (wchar_t *)0x3fb999999999999a;
            local_270 = (undefined1 *)0x3fd0000000000000;
            local_268 = 0x101;
            local_266 = 1;
            local_264 = 0x358637bd;
            local_25c = 0x3c23d70a;
            local_260 = 0;
            local_188[0] = 0;
            local_178 = 0;
            FUN_146c6f442(&local_278,local_2c0,&local_148,local_188);
          }
          lVar6 = lVar6 + 0x18;
        } while ((longlong)(int)lVar2 * 0x18 != lVar6);
      }
    }
    FUN_1458d302c(&local_278);
    FUN_146c2caf6(local_f0,local_2b0);
    local_288 = L"PolyMeshSimplifyAlongEdgesChange";
    local_280 = 0x20;
    FUN_1446e940c(local_2b4,&local_288);
    local_288 = L"UEditMeshPolygonsTool";
    local_280 = 0x15;
    FUN_1446e940c(local_2b8,&local_288);
    FUN_140208bae(&local_288,local_2b8,local_2b4,L"Simplify Along Edges");
    FUN_148f6ca5e(param_1,&local_288,local_2b0,&local_278);
    if (local_288 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_288 + 0x10))();
    }
    FUN_1456c3cc8(&local_278);
    local_100 = 0;
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_148);
    FUN_146c2c40e(local_f0);
  }
  if ((local_48 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f69820 FUN_148f69820 body=742 status=ok
// SIG undefined FUN_148f69820(void)

void FUN_148f69820(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_268 [32];
  undefined1 local_248 [8];
  undefined1 local_240 [4];
  undefined1 local_23c [4];
  wchar_t *local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  undefined8 local_1e8;
  undefined4 local_1e0;
  wchar_t *local_1d0;
  int local_1c8;
  int local_19c;
  undefined1 local_e0 [168];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_268;
  cVar2 = FUN_148f6c06a();
  if (cVar2 == '\0') {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_1d0 = L"OnRetriangulateFailed";
    local_1c8 = 0x15;
    FUN_1446e940c(local_e0,&local_1d0);
    local_1d0 = L"UEditMeshPolygonsTool";
    local_1c8 = 0x15;
    FUN_1446e940c(&local_238,&local_1d0);
    FUN_140208bae(&local_1d0,&local_238,local_e0,L"Cannot Retriangulate Current Selection");
    (**(code **)(*plVar4 + 0x340))(plVar4,&local_1d0,3);
    if (local_1d0 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_1d0 + 0x10))();
    }
  }
  else {
    lVar1 = param_1[0x4d];
    FUN_146c2c368(local_e0,lVar1);
    FUN_146c2c4e8(local_e0);
    FUN_14852586c(&local_1d0,param_1[0x54] + 0x390);
    local_208 = 0;
    local_200 = 0;
    local_228 = 0;
    uStack_220 = 0;
    local_1fc = 0xffffffff00000080;
    local_1f4 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    FUN_145c3f772(&local_228,&local_1d0);
    iVar3 = FUN_148f5df42(lVar1,param_1[0x4f],&local_228,local_e0);
    if (iVar3 != local_1c8 - local_19c) {
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      local_238 = L"OnRetriangulateFailures";
      local_230 = 0x17;
      FUN_1446e940c(local_23c,&local_238);
      local_238 = L"UEditMeshPolygonsTool";
      local_230 = 0x15;
      FUN_1446e940c(local_240,&local_238);
      FUN_140208bae(&local_238,local_240,local_23c,L"Some faces could not be retriangulated");
      (**(code **)(*plVar4 + 0x340))(plVar4,&local_238,3);
      if (local_238 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_238 + 0x10))();
      }
    }
    FUN_146c2caf6(local_e0,local_248);
    local_238 = L"PolyMeshRetriangulateChange";
    local_230 = 0x1b;
    FUN_1446e940c(local_23c,&local_238);
    local_238 = L"UEditMeshPolygonsTool";
    local_230 = 0x15;
    FUN_1446e940c(local_240,&local_238);
    FUN_140208bae(&local_238,local_240,local_23c,L"Retriangulate");
    FUN_148f6ca5e(param_1,&local_238,local_248,&local_1d0);
    if (local_238 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_238 + 0x10))();
    }
    FUN_1456c3cc8(&local_1d0);
    FUN_146c2c40e(local_e0);
  }
  if ((local_38 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f69b08 FUN_148f69b08 body=1115 status=ok
// SIG undefined FUN_148f69b08(void)

void FUN_148f69b08(longlong *param_1)

{
  wchar_t *pwVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_278 [40];
  longlong local_250;
  undefined1 local_248 [12];
  undefined1 local_23c [4];
  void *local_238;
  int local_230;
  undefined4 local_22c;
  wchar_t *local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  wchar_t *local_1e0;
  undefined4 local_1d8;
  undefined1 local_f0 [168];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  cVar6 = FUN_148f6c06a();
  if (cVar6 == '\0') {
    plVar8 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_1e0 = L"OnDecomposeFailed";
    local_1d8 = 0x11;
    FUN_1446e940c(local_f0,&local_1e0);
    local_1e0 = L"UEditMeshPolygonsTool";
    local_1d8 = 0x15;
    FUN_1446e940c(&local_228,&local_1e0);
    FUN_140208bae(&local_1e0,&local_228,local_f0,L"Cannot Decompose Current Selection");
    (**(code **)(*plVar8 + 0x340))(plVar8,&local_1e0,3);
    if (local_1e0 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_1e0 + 0x10))();
    }
  }
  else {
    lVar3 = param_1[0x4d];
    FUN_146c2c368(local_f0,lVar3);
    FUN_146c2c4e8(local_f0);
    FUN_1458d302c(&local_1e0);
    lVar13 = param_1[0x54];
    pwVar1 = (wchar_t *)(lVar13 + 0x390);
    local_250 = lVar13 + 0x3a0;
    local_200 = 0x100000000;
    local_1f0 = 0xffffffff;
    local_1e8 = 0;
    iVar11 = 0;
    local_1f8 = local_250;
    if (*(int *)(lVar13 + 0x3b8) != 0) {
      FUN_1449c0562(&local_200);
      iVar11 = *(int *)(lVar13 + 0x3b8);
    }
    local_210 = local_1f0;
    uVar5 = local_210;
    local_208 = local_1e8;
    local_204 = local_1e4;
    local_220 = local_200;
    local_218 = local_1f8;
    local_210._4_4_ = (int)((ulonglong)local_1f0 >> 0x20);
    iVar7 = local_210._4_4_;
    local_228 = pwVar1;
    if ((local_210._4_4_ != iVar11) || (local_210 = uVar5, local_1f8 != local_250)) {
      do {
        local_210 = uVar5;
        iVar7 = *(int *)(*(longlong *)local_228 + (longlong)iVar7 * 0xc);
        lVar13 = param_1[0x4f];
        if (((longlong)iVar7 < 0) ||
           ((*(int *)(lVar13 + 0x98) <= iVar7 ||
            (lVar9 = (longlong)*(int *)(*(longlong *)(lVar13 + 0x90) + (longlong)iVar7 * 4),
            lVar9 == -1)))) {
          lVar9 = 0;
        }
        else {
          lVar9 = lVar9 * 0x38 + *(longlong *)(lVar13 + 0x60);
        }
        plVar8 = (longlong *)(lVar13 + 0xc0);
        if (lVar9 != 0) {
          plVar8 = (longlong *)(lVar9 + 8);
        }
        local_238 = (void *)0x0;
        local_230 = (int)plVar8[1];
        lVar13 = (longlong)local_230;
        pvVar4 = (void *)*plVar8;
        if (lVar13 == 0) {
          local_22c = 0;
        }
        else {
          FUN_144a06ca8(&local_238,local_230,0);
          memcpy(local_238,pvVar4,lVar13 << 2);
          pvVar4 = local_238;
          lVar13 = (longlong)local_230;
          if (lVar13 != 0) {
            lVar9 = 0;
            do {
              FUN_146c2c9fe(local_f0,*(undefined4 *)((longlong)pvVar4 + lVar9),1);
              lVar9 = lVar9 + 4;
            } while (lVar13 * 4 != lVar9);
          }
          if (local_238 != (void *)0x0) {
            FUN_1400020a8(local_238);
          }
        }
        lVar13 = plVar8[1];
        if ((longlong)(int)lVar13 != 0) {
          lVar9 = *plVar8;
          lVar12 = 0;
          do {
            uVar2 = *(uint *)(lVar9 + lVar12);
            iVar10 = *(int *)(lVar3 + 0x1b0);
            iVar7 = iVar10 + 1;
            *(int *)(lVar3 + 0x1b0) = iVar7;
            local_200 = CONCAT44(local_200._4_4_,iVar10);
            if (*(char *)(lVar3 + 0x1a8) == '\x01') {
              *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x198) + (ulonglong)(uVar2 >> 9) * 8) +
                      (ulonglong)(uVar2 & 0x1ff) * 4) = iVar10;
              iVar10 = *(int *)(lVar3 + 0x1b0);
              if (*(int *)(lVar3 + 0x1b0) < iVar7) {
                iVar10 = iVar7;
              }
              *(int *)(lVar3 + 0x1b0) = iVar10;
            }
            FUN_1447cbafe(&local_1e0,local_23c,&local_200,0);
            lVar12 = lVar12 + 4;
          } while ((longlong)(int)lVar13 * 4 != lVar12);
        }
        local_210 = CONCAT44(local_210._4_4_,(uint)local_210 & ~local_220._4_4_);
        FUN_1449c0562(&local_220);
        iVar7 = local_210._4_4_;
        uVar5 = local_210;
      } while (local_228 != pwVar1 || (local_218 != local_250 || local_210._4_4_ != iVar11));
    }
    FUN_146c2caf6(local_f0,local_248);
    local_228 = L"PolyMeshDecomposeChange";
    local_220._0_4_ = 0x17;
    FUN_1446e940c(&local_200,&local_228);
    local_228 = L"UEditMeshPolygonsTool";
    local_220 = CONCAT44(local_220._4_4_,0x15);
    FUN_1446e940c(local_23c,&local_228);
    FUN_140208bae(&local_228,local_23c,&local_200,L"Decompose");
    FUN_148f6ca5e(param_1,&local_228,local_248,&local_1e0);
    if (local_228 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_228 + 0x10))();
    }
    FUN_1456c3cc8(&local_1e0);
    FUN_146c2c40e(local_f0);
  }
  if ((local_48 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f69f64 FUN_148f69f64 body=1138 status=ok
// SIG undefined FUN_148f69f64(void)

void FUN_148f69f64(longlong *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_288 [32];
  longlong local_268;
  undefined1 local_260 [4];
  undefined1 local_25c [4];
  undefined1 local_258 [8];
  void *local_250;
  int local_248;
  undefined4 local_244;
  wchar_t **local_240;
  undefined8 local_238;
  undefined1 *local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  void *local_218;
  undefined8 uStack_210;
  longlong local_200;
  undefined1 *local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  wchar_t *local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d0 [24];
  int local_1b8;
  undefined1 local_f0 [168];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  cVar5 = FUN_148f6c06a();
  if (cVar5 == '\0') {
    plVar7 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_1e0 = L"OnDisconnectFailed";
    local_1d8 = 0x12;
    FUN_1446e940c(local_f0,&local_1e0);
    local_1e0 = L"UEditMeshPolygonsTool";
    local_1d8 = 0x15;
    FUN_1446e940c(&local_240,&local_1e0);
    FUN_140208bae(&local_1e0,&local_240,local_f0,L"Cannot Disconnect Current Selection");
    (**(code **)(*plVar7 + 0x340))(plVar7,&local_1e0,3);
    if (local_1e0 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_1e0 + 0x10))();
    }
    goto LAB_148f6a03a;
  }
  lVar10 = param_1[0x4d];
  FUN_146c2c368(local_f0,lVar10);
  FUN_146c2c4e8(local_f0);
  FUN_14852586c(&local_1e0,param_1[0x54] + 0x390);
  local_218 = (void *)0x0;
  uStack_210 = 0;
  local_200 = 0x100000000;
  local_1f0 = 0xffffffff;
  local_1e8 = 0;
  iVar9 = 0;
  local_1f8 = local_1d0;
  if (local_1b8 != 0) {
    FUN_1449c0562(&local_200);
    iVar9 = local_1b8;
  }
  local_228 = local_1f0;
  uVar3 = local_228;
  local_220 = local_1e8;
  local_21c = local_1e4;
  local_238 = local_200;
  local_230 = local_1f8;
  local_228._4_4_ = (int)((ulonglong)local_1f0 >> 0x20);
  local_240 = &local_1e0;
  local_228 = uVar3;
  if ((local_228._4_4_ == iVar9) && (local_1f8 == local_1d0)) {
    local_248 = 0;
LAB_148f6a16e:
    local_250 = (void *)0x0;
    local_244 = 0;
  }
  else {
    iVar6 = local_228._4_4_;
    local_268 = lVar10;
    do {
      uVar4 = uStack_210;
      iVar6 = *(int *)(*local_240 + (longlong)iVar6 * 6);
      lVar10 = param_1[0x4f];
      if ((((longlong)iVar6 < 0) || (*(int *)(lVar10 + 0x98) <= iVar6)) ||
         (lVar8 = (longlong)*(int *)(*(longlong *)(lVar10 + 0x90) + (longlong)iVar6 * 4),
         lVar8 == -1)) {
        lVar8 = 0;
      }
      else {
        lVar8 = lVar8 * 0x38 + *(longlong *)(lVar10 + 0x60);
      }
      puVar11 = (undefined8 *)(lVar10 + 0xc0);
      if (lVar8 != 0) {
        puVar11 = (undefined8 *)(lVar8 + 8);
      }
      uVar1 = *(uint *)(puVar11 + 1);
      if ((longlong)(int)uVar1 != 0) {
        iVar6 = (int)uStack_210;
        lVar10 = (longlong)(int)uStack_210;
        uStack_210 = CONCAT44(uStack_210._4_4_,uVar1 + (int)uStack_210);
        if ((uint)(uStack_210._4_4_ - iVar6) < uVar1) {
          FUN_1446f48e2(&local_218,uVar4 & 0xffffffff);
        }
        memcpy((void *)(lVar10 * 4 + (longlong)local_218),(void *)*puVar11,(longlong)(int)uVar1 << 2
              );
      }
      local_228 = CONCAT44(local_228._4_4_,(uint)local_228 & ~local_238._4_4_);
      FUN_1449c0562(&local_238);
      pvVar2 = local_218;
      iVar6 = local_228._4_4_;
    } while (local_240 != &local_1e0 || (local_230 != local_1d0 || local_228._4_4_ != iVar9));
    local_248 = (int)uStack_210;
    lVar8 = (longlong)(int)uStack_210;
    local_250 = (void *)0x0;
    lVar10 = local_268;
    if (lVar8 == 0) goto LAB_148f6a16e;
    FUN_144a06ca8(&local_250,uStack_210 & 0xffffffff,0);
    memcpy(local_250,pvVar2,lVar8 << 2);
    pvVar2 = local_250;
    lVar10 = (longlong)local_248;
    if (lVar10 != 0) {
      lVar8 = 0;
      do {
        FUN_146c2c9fe(local_f0,*(undefined4 *)((longlong)pvVar2 + lVar8),1);
        lVar8 = lVar8 + 4;
      } while (lVar10 * 4 != lVar8);
    }
    lVar10 = local_268;
    if (local_250 != (void *)0x0) {
      FUN_1400020a8(local_250);
    }
  }
  local_200 = lVar10;
  FUN_146bc7c58(&local_200,&local_218,0);
  FUN_146c2caf6(local_f0,local_258);
  local_240 = (wchar_t **)0x14ba1fd50;
  local_238._0_4_ = 0x18;
  FUN_1446e940c(local_25c,&local_240);
  local_240 = (wchar_t **)0x14ba1c808;
  local_238 = CONCAT44(local_238._4_4_,0x15);
  FUN_1446e940c(local_260,&local_240);
  FUN_140208bae(&local_240,local_260,local_25c,L"Disconnect");
  FUN_148f6ca5e(param_1,&local_240,local_258,&local_1e0);
  if (local_240 != (wchar_t **)0x0) {
    (**(code **)(*local_240 + 8))();
  }
  if (local_218 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1456c3cc8(&local_1e0);
  FUN_146c2c40e(local_f0);
LAB_148f6a03a:
  if ((local_48 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f6a3d8 FUN_148f6a3d8 body=1643 status=ok
// SIG undefined FUN_148f6a3d8(void)

void FUN_148f6a3d8(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_688 [40];
  longlong local_660;
  undefined1 local_658 [4];
  undefined1 local_654 [4];
  undefined1 local_650 [8];
  undefined8 local_648;
  undefined4 local_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  longlong local_5c0;
  longlong local_5b8;
  undefined8 uStack_5b0;
  wchar_t *local_5a8;
  undefined4 local_5a0;
  undefined8 local_598;
  undefined1 *local_590;
  undefined8 local_588;
  undefined4 local_580;
  undefined4 local_57c;
  wchar_t *local_4a8;
  undefined8 uStack_4a0;
  undefined1 *local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined4 local_480;
  undefined8 local_47c;
  undefined4 local_474;
  undefined8 local_468;
  undefined4 local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_438;
  undefined4 local_430;
  undefined8 local_42c;
  undefined4 local_424;
  undefined8 local_418;
  undefined4 local_410;
  undefined2 local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined8 local_3d4;
  undefined4 local_3cc;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_390;
  undefined4 local_388;
  undefined8 local_384;
  undefined4 local_37c;
  undefined8 local_370;
  undefined4 local_368;
  undefined2 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_338;
  undefined4 local_330;
  undefined8 local_32c;
  undefined4 local_324;
  undefined8 local_318;
  undefined4 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2dc;
  undefined4 local_2d4;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined1 local_2b8;
  undefined1 local_2b7;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_284;
  undefined4 local_27c;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_234;
  undefined4 local_22c;
  undefined8 local_220;
  undefined4 local_218;
  undefined2 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  wchar_t local_1e0 [8];
  undefined1 local_1d0 [24];
  int local_1b8;
  undefined1 local_f0 [168];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_688;
  cVar4 = FUN_148f6c06a();
  if (cVar4 == '\0') {
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_4a8 = L"OnDuplicateFailed";
    uStack_4a0._0_4_ = 0x11;
    FUN_1446e940c(local_1e0,&local_4a8);
    local_4a8 = L"UEditMeshPolygonsTool";
    uStack_4a0 = CONCAT44(uStack_4a0._4_4_,0x15);
    FUN_1446e940c(&local_598,&local_4a8);
    FUN_140208bae(&local_4a8,&local_598,local_1e0,L"Cannot Duplicate Current Selection");
    (**(code **)(*plVar6 + 0x340))(plVar6,&local_4a8,3);
    if (local_4a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_4a8 + 0x10))();
    }
  }
  else {
    local_660 = param_1[0x4d];
    FUN_146c2c368(local_f0);
    FUN_146c2c4e8(local_f0);
    FUN_14852586c(local_1e0,param_1[0x54] + 0x390);
    local_5b8 = 0;
    uStack_5b0 = 0;
    local_598 = 0x100000000;
    local_588 = 0xffffffff;
    local_580 = 0;
    iVar9 = 0;
    local_590 = local_1d0;
    if (local_1b8 != 0) {
      FUN_1449c0562(&local_598);
      iVar9 = local_1b8;
    }
    local_490 = local_588;
    uVar3 = local_490;
    local_488 = CONCAT44(local_57c,local_580);
    uStack_4a0 = local_598;
    local_498 = local_590;
    local_490._4_4_ = (int)((ulonglong)local_588 >> 0x20);
    if ((local_490._4_4_ != iVar9) || (local_590 != local_1d0)) {
      iVar5 = local_490._4_4_;
      local_4a8 = local_1e0;
      local_490 = uVar3;
      do {
        uVar2 = uStack_5b0;
        iVar5 = *(int *)(*(longlong *)local_4a8 + (longlong)iVar5 * 0xc);
        lVar10 = param_1[0x4f];
        if ((((longlong)iVar5 < 0) || (*(int *)(lVar10 + 0x98) <= iVar5)) ||
           (lVar7 = (longlong)*(int *)(*(longlong *)(lVar10 + 0x90) + (longlong)iVar5 * 4),
           lVar7 == -1)) {
          lVar7 = 0;
        }
        else {
          lVar7 = lVar7 * 0x38 + *(longlong *)(lVar10 + 0x60);
        }
        puVar8 = (undefined8 *)(lVar10 + 0xc0);
        if (lVar7 != 0) {
          puVar8 = (undefined8 *)(lVar7 + 8);
        }
        uVar1 = *(uint *)(puVar8 + 1);
        if ((longlong)(int)uVar1 != 0) {
          iVar5 = (int)uStack_5b0;
          lVar10 = (longlong)(int)uStack_5b0;
          uStack_5b0 = CONCAT44(uStack_5b0._4_4_,uVar1 + (int)uStack_5b0);
          if ((uint)(uStack_5b0._4_4_ - iVar5) < uVar1) {
            FUN_1446f48e2(&local_5b8,uVar2 & 0xffffffff);
          }
          memcpy((void *)(lVar10 * 4 + local_5b8),(void *)*puVar8,(longlong)(int)uVar1 << 2);
        }
        local_490 = CONCAT44(local_490._4_4_,(uint)local_490 & ~uStack_4a0._4_4_);
        FUN_1449c0562(&uStack_4a0);
        iVar5 = local_490._4_4_;
        uVar3 = local_490;
      } while (local_4a8 != local_1e0 || (local_498 != local_1d0 || local_490._4_4_ != iVar9));
    }
    local_490 = uVar3;
    local_5c0 = local_660;
    local_488 = 0;
    local_480 = 0;
    local_4a8 = (wchar_t *)0x0;
    uStack_4a0 = 0;
    local_47c = 0xffffffff00000080;
    local_474 = 0;
    local_468 = 0;
    local_460 = 0;
    local_438 = 0;
    local_430 = 0;
    local_458 = 0;
    uStack_450 = 0;
    local_42c = 0xffffffff00000080;
    local_424 = 0;
    local_418 = 0;
    local_410 = 0;
    local_408 = 0x101;
    local_3e0 = 0;
    local_3d8 = 0;
    local_400 = 0;
    uStack_3f8 = 0;
    local_3d4 = 0xffffffff00000080;
    local_3cc = 0;
    local_3c0 = 0;
    local_3b8 = 0;
    local_390 = 0;
    local_388 = 0;
    local_3b0 = 0;
    uStack_3a8 = 0;
    local_384 = 0xffffffff00000080;
    local_37c = 0;
    local_370 = 0;
    local_368 = 0;
    local_360 = 0x101;
    local_338 = 0;
    local_330 = 0;
    local_358 = 0;
    uStack_350 = 0;
    local_32c = 0xffffffff00000080;
    local_324 = 0;
    local_318 = 0;
    local_310 = 0;
    local_2e8 = 0;
    local_2e0 = 0;
    local_308 = 0;
    uStack_300 = 0;
    local_2dc = 0xffffffff00000080;
    local_2d4 = 0;
    local_2c8 = 0;
    local_2c0 = 0;
    local_2b7 = 1;
    local_2b8 = 1;
    local_290 = 0;
    local_288 = 0;
    local_2b0 = 0;
    uStack_2a8 = 0;
    local_284 = 0xffffffff00000080;
    local_27c = 0;
    local_270 = 0;
    local_268 = 0;
    local_240 = 0;
    local_238 = 0;
    local_260 = 0;
    uStack_258 = 0;
    local_234 = 0xffffffff00000080;
    local_22c = 0;
    local_220 = 0;
    local_218 = 0;
    local_210 = 0x101;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_5d8 = 0;
    uStack_5d0 = 0;
    local_5e8 = 0;
    uStack_5e0 = 0;
    local_5f8 = 0;
    uStack_5f0 = 0;
    local_608 = 0;
    uStack_600 = 0;
    local_618 = 0;
    uStack_610 = 0;
    local_628 = 0;
    uStack_620 = 0;
    local_638 = 0;
    uStack_630 = 0;
    FUN_146bc6684(&local_5c0,&local_5b8,&local_4a8,&local_638);
    FUN_1458d302c(&local_598);
    bVar11 = (char)param_1[0x27] != '\0';
    puVar8 = &local_5f8;
    if (bVar11) {
      puVar8 = &local_628;
    }
    local_648 = *puVar8;
    puVar8 = &uStack_620;
    if (!bVar11) {
      puVar8 = &uStack_5f0;
    }
    local_640 = *(undefined4 *)puVar8;
    FUN_146bc855c(&local_598);
    FUN_146c2caf6(local_f0,local_650);
    local_5a8 = L"PolyMeshDisconnectChange";
    local_5a0 = 0x18;
    FUN_1446e940c(local_654,&local_5a8);
    local_5a8 = L"UEditMeshPolygonsTool";
    local_5a0 = 0x15;
    FUN_1446e940c(local_658,&local_5a8);
    FUN_140208bae(&local_5a8,local_658,local_654,L"Disconnect");
    FUN_148f6ca5e(param_1,&local_5a8,local_650,&local_598);
    if (local_5a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_5a8 + 0x10))();
    }
    FUN_1456c3cc8(&local_598);
    FUN_146bc8622(&local_638);
    FUN_146bfdcfe(&local_4a8);
    if (local_5b8 != 0) {
      FUN_1400020a8();
    }
    FUN_1456c3cc8(local_1e0);
    FUN_146c2c40e(local_f0);
  }
  if ((local_48 ^ (ulonglong)auStack_688) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f6aa44 FUN_148f6aa44 body=874 status=ok
// SIG undefined FUN_148f6aa44(void)

void FUN_148f6aa44(longlong *param_1)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_288 [32];
  longlong *local_268;
  undefined1 local_260 [12];
  undefined1 local_254 [4];
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 local_244;
  undefined4 local_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 local_22c;
  undefined4 local_20c;
  void *local_208;
  int local_200;
  undefined4 local_1fc;
  wchar_t *local_1f8;
  undefined4 local_1f0;
  undefined1 local_108 [168];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_288;
  cVar2 = FUN_148f6c06a();
  if (cVar2 == '\0') {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_1f8 = L"OnPokeFailedMessage";
    local_1f0 = 0x13;
    FUN_1446e940c(local_108,&local_1f8);
    local_1f8 = L"UEditMeshPolygonsTool";
    local_1f0 = 0x15;
    FUN_1446e940c(&local_250,&local_1f8);
    FUN_140208bae(&local_1f8,&local_250,local_108,L"Cannot Poke Current Selection");
    (**(code **)(*plVar4 + 0x340))(plVar4,&local_1f8,3);
    if (local_1f8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_1f8 + 0x10))();
    }
  }
  else {
    plVar4 = (longlong *)param_1[0x4d];
    FUN_146c2c368(local_108,plVar4);
    FUN_146c2c4e8(local_108);
    local_208 = (void *)0x0;
    local_200 = (int)param_1[0xad];
    lVar5 = (longlong)local_200;
    pvVar1 = (void *)param_1[0xac];
    if (lVar5 == 0) {
      local_1fc = 0;
    }
    else {
      FUN_144a06ca8(&local_208,local_200,0);
      memcpy(local_208,pvVar1,lVar5 << 2);
      pvVar1 = local_208;
      lVar5 = (longlong)local_200;
      if (lVar5 != 0) {
        lVar7 = 0;
        do {
          FUN_146c2c9fe(local_108,*(undefined4 *)((longlong)pvVar1 + lVar7),1);
          lVar7 = lVar7 + 4;
        } while (lVar5 * 4 != lVar7);
      }
      if (local_208 != (void *)0x0) {
        FUN_1400020a8(local_208);
      }
    }
    FUN_1458d302c(&local_1f8);
    lVar5 = param_1[0xad];
    local_268 = param_1;
    if ((longlong)(int)lVar5 != 0) {
      lVar7 = param_1[0xac];
      lVar6 = 0;
      do {
        local_20c = *(undefined4 *)(lVar7 + lVar6);
        uStack_24c = 0xffffffff;
        uStack_248 = 0xffffffff;
        local_244 = 0xffffffff;
        local_22c = 0xffffffff;
        local_23c = 0xffffffff;
        uStack_238 = 0xffffffff;
        uStack_234 = 0xffffffff;
        uStack_230 = 0xffffffff;
        FUN_1447cbafe(&local_1f8,local_254,&local_20c,0);
        iVar3 = (**(code **)(*plVar4 + 0xb0))(plVar4,local_20c,&local_250);
        if (iVar3 == 0) {
          FUN_1447cbafe(&local_1f8,local_254,&local_23c,0);
          FUN_1447cbafe(&local_1f8,local_254,&uStack_238);
        }
        lVar6 = lVar6 + 4;
      } while ((longlong)(int)lVar5 * 4 != lVar6);
    }
    FUN_146c2caf6(local_108,local_260);
    local_250 = 0x4ba20c1a;
    uStack_24c = 1;
    uStack_248 = 0x12;
    FUN_1446e940c(&local_20c,&local_250);
    local_250 = 0x4ba1c808;
    uStack_24c = 1;
    uStack_248 = 0x15;
    FUN_1446e940c(local_254,&local_250);
    FUN_140208bae(&local_250,local_254,&local_20c,L"Poke Faces");
    FUN_148f6ca5e(local_268,&local_250,local_260,&local_1f8);
    if ((longlong *)CONCAT44(uStack_24c,local_250) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_24c,local_250) + 0x10))();
    }
    FUN_1456c3cc8(&local_1f8);
    FUN_146c2c40e(local_108);
  }
  if ((local_60 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f6adb0 FUN_148f6adb0 body=937 status=ok
// SIG undefined FUN_148f6adb0(void)

void FUN_148f6adb0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_288 [40];
  undefined1 local_260 [12];
  undefined1 local_254 [4];
  undefined8 local_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined8 local_23c;
  undefined4 local_22c;
  int aiStack_228 [6];
  undefined8 local_210;
  undefined1 local_208 [168];
  wchar_t *local_160;
  undefined1 *local_158;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_158 = local_208;
  local_160 = L"ư쳃捈䠂ঋ譈碉\x02䠀冋䡰見\x80";
  cVar4 = FUN_148f6e742();
  if (cVar4 == '\0') {
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_160 = L"OnSplitFailedMessage";
    local_158._0_4_ = 0x14;
    FUN_1446e940c(local_208,&local_160);
    local_160 = L"UEditMeshPolygonsTool";
    local_158 = (undefined1 *)CONCAT44(local_158._4_4_,0x15);
    FUN_1446e940c(&local_250,&local_160);
    FUN_140208bae(&local_160,&local_250,local_208,L"Cannot Split Current Selection");
    (**(code **)(*plVar6 + 0x340))(plVar6,&local_160,3);
    if (local_160 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_160 + 0x10))();
    }
  }
  else {
    plVar6 = (longlong *)param_1[0x4d];
    FUN_1458d302c(&local_160);
    FUN_146c2c368(local_208,plVar6);
    FUN_146c2c4e8(local_208);
    lVar3 = param_1[0xb5];
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = param_1[0xb4];
      lVar7 = 0;
      do {
        uVar1 = **(uint **)(lVar2 + 8 + lVar7);
        if ((-1 < (int)uVar1) &&
           ((int)uVar1 < (int)plVar6[0x3a] * 0x200 + *(int *)((longlong)plVar6 + 0x1d4))) {
          if ((ushort)(*(short *)(*(longlong *)(plVar6[0x3b] + (ulonglong)(uVar1 >> 9) * 8) +
                                 (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe) {
            local_210 = *(undefined8 *)
                         (*(longlong *)(plVar6[0x38] + (ulonglong)(uVar1 >> 9) * 8) + 8 +
                         (ulonglong)((uVar1 & 0x1ff) << 4));
            FUN_146c2c9fe(local_208,local_210,1);
            FUN_1447cbafe(&local_160,&local_250,&local_210,0);
            if (local_210._4_4_ != -1) {
              FUN_146c2c9fe(local_208,local_210._4_4_,1);
              FUN_1447cbafe(&local_160,&local_250,(longlong)&local_210 + 4,0);
            }
            local_250 = (wchar_t *)CONCAT44(0xffffffff,(undefined4)local_250);
            uStack_248 = 0xffffffff;
            uStack_244 = 0xffffffff;
            uStack_240 = 0xffffffff;
            local_23c = 0xffffffffffffffff;
            local_22c = 0xffffffff;
            aiStack_228[0] = -1;
            aiStack_228[1] = 0xffffffff;
            aiStack_228[2] = 0xffffffff;
            aiStack_228[3] = 0xffffffff;
            iVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,uVar1,&local_250,0);
            if ((iVar5 == 0) &&
               (FUN_1447cbafe(&local_160,local_254,&local_22c,0), aiStack_228[0] != -1)) {
              FUN_1447cbafe(&local_160,local_254,aiStack_228,0);
            }
          }
        }
        lVar7 = lVar7 + 0x18;
      } while ((longlong)(int)lVar3 * 0x18 != lVar7);
    }
    FUN_146c2caf6(local_208,local_260);
    local_250 = L"PolyMeshSplitChange";
    uStack_248 = 0x13;
    FUN_1446e940c(&local_210,&local_250);
    local_250 = L"UEditMeshPolygonsTool";
    uStack_248 = 0x15;
    FUN_1446e940c(local_254,&local_250);
    FUN_140208bae(&local_250,local_254,&local_210,L"Split Edges");
    FUN_148f6ca5e(param_1,&local_250,local_260,&local_160);
    if (local_250 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_250 + 0x10))();
    }
    FUN_146c2c40e(local_208);
    FUN_1456c3cc8(&local_160);
  }
  if ((local_70 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f6b15a FUN_148f6b15a body=1003 status=ok
// SIG undefined FUN_148f6b15a(void)

void FUN_148f6b15a(longlong *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_338 [32];
  undefined1 local_318 [4];
  undefined1 local_314 [4];
  undefined1 local_310 [8];
  code *local_308;
  undefined8 *local_300;
  wchar_t *local_2f8;
  undefined4 local_2f0;
  undefined4 local_2e8 [60];
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined8 local_1e4;
  undefined1 local_158 [80];
  undefined1 local_108 [168];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_338;
  pwVar2 = (wchar_t *)param_1[0x4d];
  local_300 = &local_1f8;
  local_308 = FUN_14436ebe6;
  local_1f8 = pwVar2;
  cVar5 = FUN_148f6e742();
  if (cVar5 == '\0') {
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_1f8 = L"OnFlipFailedMessage";
    uStack_1f0 = 0x13;
    FUN_1446e940c(local_2e8,&local_1f8);
    local_1f8 = L"UEditMeshPolygonsTool";
    uStack_1f0 = 0x15;
    FUN_1446e940c(local_108,&local_1f8);
    FUN_140208bae(&local_1f8,local_108,local_2e8,
                  L"Cannot Flip Current Selection (no non-seam edges selected)");
    (**(code **)(*plVar6 + 0x340))(plVar6,&local_1f8,3);
    if (local_1f8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_1f8 + 0x10))();
    }
  }
  else {
    FUN_146c2c368(local_108,pwVar2);
    FUN_146c2c4e8(local_108);
    lVar4 = param_1[0xb5];
    if ((longlong)(int)lVar4 != 0) {
      lVar3 = param_1[0xb4];
      lVar8 = 0;
      do {
        uVar1 = **(uint **)(lVar3 + 8 + lVar8);
        if ((-1 < (int)uVar1) &&
           ((int)uVar1 < *(int *)(pwVar2 + 0xe8) * 0x200 + *(int *)(pwVar2 + 0xea))) {
          uVar9 = (ulonglong)(uVar1 >> 9);
          uVar7 = uVar1 & 0x1ff;
          if (((ushort)(*(short *)(*(longlong *)(*(longlong *)(pwVar2 + 0xec) + uVar9 * 8) +
                                  (ulonglong)uVar7 * 2) - 1U) < 0xfffe) &&
             ((*(int *)(*(longlong *)(*(longlong *)(pwVar2 + 0xe0) + uVar9 * 8) + 0xc +
                       (ulonglong)(uVar7 << 4)) != -1 &&
              (cVar5 = (**(code **)(**(longlong **)(pwVar2 + 0x104) + 0x80))
                                 (*(longlong **)(pwVar2 + 0x104),uVar1), cVar5 == '\0')))) {
            uVar9 = *(ulonglong *)
                     (*(longlong *)(*(longlong *)(pwVar2 + 0xe0) + uVar9 * 8) + 8 +
                     (ulonglong)(uVar7 << 4));
            FUN_146c2c9fe(local_108,uVar9,1);
            FUN_146c2c9fe(local_108,uVar9 >> 0x20,1);
            local_1f8 = (wchar_t *)CONCAT44(0xffffffff,(undefined4)local_1f8);
            uStack_1f0 = 0xffffffff;
            uStack_1ec = 0xffffffff;
            uStack_1e8 = 0xffffffff;
            local_1e4 = 0xffffffffffffffff;
            (**(code **)(*(longlong *)pwVar2 + 0x40))(pwVar2,uVar1,&local_1f8);
          }
        }
        lVar8 = lVar8 + 0x18;
      } while ((longlong)(int)lVar4 * 0x18 != lVar8);
    }
    FUN_1458d302c(&local_1f8);
    (**(code **)(*(longlong *)param_1[0x4f] + 8))();
    lVar4 = param_1[0xb5];
    if ((longlong)(int)lVar4 != 0) {
      lVar3 = param_1[0xb4];
      lVar8 = 0;
      do {
        uVar1 = **(uint **)(lVar3 + 8 + lVar8);
        if (((-1 < (int)uVar1) &&
            ((int)uVar1 < *(int *)(pwVar2 + 0xe8) * 0x200 + *(int *)(pwVar2 + 0xea))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(pwVar2 + 0xec) + (ulonglong)(uVar1 >> 9) * 8) +
                               (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          local_2e8[0] = FUN_1482abca2(param_1[0x4f]);
          FUN_144984904(local_158,&local_2f8,local_2e8,0);
        }
        lVar8 = lVar8 + 0x18;
      } while ((longlong)(int)lVar4 * 0x18 != lVar8);
    }
    FUN_1458d302c(local_2e8);
    FUN_146c2caf6(local_108,local_310);
    local_2f8 = L"PolyMeshFlipChange";
    local_2f0 = 0x12;
    FUN_1446e940c(local_314,&local_2f8);
    local_2f8 = L"UEditMeshPolygonsTool";
    local_2f0 = 0x15;
    FUN_1446e940c(local_318,&local_2f8);
    FUN_140208bae(&local_2f8,local_318,local_314,L"Flip Edges");
    FUN_148f6ca5e(param_1,&local_2f8,local_310,local_2e8);
    if (local_2f8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_2f8 + 0x10))();
    }
    FUN_1456c3cc8(local_2e8);
    FUN_1456c3cc8(&local_1f8);
    FUN_146c2c40e(local_108);
  }
  if ((local_60 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f6b546 FUN_148f6b546 body=608 status=ok
// SIG undefined FUN_148f6b546(void)

void FUN_148f6b546(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_2d8 [44];
  undefined1 local_2ac [4];
  undefined1 local_2a8 [12];
  undefined1 local_29c [4];
  wchar_t *local_298;
  undefined4 local_290;
  wchar_t *local_288;
  undefined4 local_280;
  code *local_198;
  undefined8 local_188;
  undefined **local_178;
  code *local_170;
  undefined **local_158 [4];
  longlong local_138;
  longlong *local_128;
  longlong local_118 [7];
  undefined1 local_e0 [168];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  lVar1 = param_1[0x4d];
  FUN_146c2c368(local_e0,lVar1);
  FUN_146c2c4e8(local_e0);
  FUN_148f6cec8(local_e0,lVar1 + 0x140);
  local_188 = 0;
  local_178 = &PTR_LAB_14aee5540;
  local_170 = FUN_148266949;
  local_198 = FUN_148483c38;
  FUN_1485ead66(local_158,lVar1,param_1[0x4f]);
  cVar2 = FUN_148326618(local_158);
  if (cVar2 == '\0') {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_288 = L"OnSimplifyByGroupFailures";
    local_280 = 0x19;
    FUN_1446e940c(&local_298,&local_288);
    local_288 = L"UEditMeshPolygonsTool";
    local_280 = 0x15;
    FUN_1446e940c(local_29c,&local_288);
    FUN_140208bae(&local_288,local_29c,&local_298,
                  L"Some polygroups could not be correctly simplified");
    (**(code **)(*plVar3 + 0x340))(plVar3,&local_288,3);
    if (local_288 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_288 + 0x10))();
    }
  }
  FUN_1458d302c(&local_288);
  FUN_146c2caf6(local_e0,local_2a8);
  local_298 = L"PolyMeshSimplifyByGroup";
  local_290 = 0x17;
  FUN_1446e940c(local_29c,&local_298);
  local_298 = L"UEditMeshPolygonsTool";
  local_290 = 0x15;
  FUN_1446e940c(local_2ac,&local_298);
  FUN_140208bae(&local_298,local_2ac,local_29c,L"Simplify by Group");
  FUN_148f6ca5e(param_1,&local_298,local_2a8,&local_288);
  if (local_298 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_298 + 0x10))();
  }
  FUN_1456c3cc8(&local_288);
  local_158[0] = &PTR_FUN_14afa41b0;
  if (local_138 != 0) {
    if (local_128 == (longlong *)0x0) {
      local_128 = local_118;
    }
    (**(code **)(*local_128 + 0x10))();
  }
  FUN_146c2c40e(local_e0);
  if ((local_38 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f6b7a8 FUN_148f6b7a8 body=692 status=ok
// SIG undefined FUN_148f6b7a8(void)

void FUN_148f6b7a8(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  wchar_t *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  int local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((char)param_1[0x27] != '\0') || (param_1[0x4f] == 0)) goto LAB_148f6b7e0;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_145c3f772(&local_88,param_1[0x4f] + 0x120);
  (**(code **)(*(longlong *)param_1[0x4f] + 8))();
  lVar4 = param_1[0x4f];
  if ((int)uStack_80 - local_54 == *(int *)(lVar4 + 0x128) - *(int *)(lVar4 + 0x154)) {
    cVar1 = FUN_1484e701c(&local_88,lVar4 + 0x120);
    if (cVar1 == '\0') goto LAB_148f6b8bf;
  }
  else {
LAB_148f6b8bf:
    local_98 = L"RegenerateCornersTransactionName";
    local_90 = 0x20;
    FUN_1446e940c(local_9c,&local_98);
    local_98 = L"UEditMeshPolygonsTool";
    local_90 = 0x15;
    FUN_1446e940c(local_a0,&local_98);
    FUN_140208bae(&local_98,local_a0,local_9c,L"Regenerate Corners");
    lVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2 + 0x28,&local_98);
    lVar2 = param_1[0x54];
    if ((lVar2 != 0) &&
       (((*(int *)(lVar2 + 1000) != *(int *)(lVar2 + 0x414) ||
         (*(int *)(lVar2 + 0x438) != *(int *)(lVar2 + 0x464))) ||
        (*(int *)(lVar2 + 0x398) != *(int *)(lVar2 + 0x3c4))))) {
      FUN_148531782();
      FUN_14853173e(param_1[0x54]);
      lVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
      FUN_1485323bc(param_1[0x54],local_a8);
      (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x20))
                (lVar2 + 0x28,param_1[0x54],local_a8,&local_98);
    }
    lVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
    uVar3 = FUN_14001cc68(0xa8,0x10);
    FUN_148f79d3a(uVar3,&local_88,lVar4 + 0x120);
    local_b0 = uVar3;
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x20))(lVar2 + 0x28,param_1,&local_b0,&local_98);
    lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x18))(lVar4 + 0x28);
    if (local_98 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_98 + 0x10))();
    }
  }
  if (param_1[0x54] != 0) {
    FUN_14852f91c(param_1[0x54],1);
  }
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_88);
LAB_148f6b7e0:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f6ba5e FUN_148f6ba5e body=353 status=ok
// SIG undefined FUN_148f6ba5e(void)

void FUN_148f6ba5e(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  undefined1 auStack_68 [32];
  longlong **local_48;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong *)param_1[0x4c] != (longlong *)0x0) {
    cVar1 = (**(code **)(*(longlong *)param_1[0x4c] + 0x2e8))();
    if (cVar1 != '\0') {
      (**(code **)(*(longlong *)param_1[0x4c] + 0x300))((longlong *)param_1[0x4c],param_2);
    }
    param_1[0x4c] = 0;
    *(int *)(param_1 + 0x9c) = (int)param_1[0x9c] + 1;
    if (*(char *)((longlong)param_1 + 0x4dc) == '\x01') {
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      FUN_144a5dc74(&local_38);
      local_48 = &local_38;
      (**(code **)(*plVar2 + 0x370))(plVar2,param_1,param_2,0);
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x10))();
      }
      goto LAB_148f6bb08;
    }
    uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_1485564be(&local_38,uVar3);
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    if (local_30 != (longlong *)0x0 && local_38 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x30))();
    }
    FUN_148f6bd60(param_1,CONCAT71(uVar4,1));
    FUN_14852f3f0(param_1[0x54],1,1);
    (**(code **)(*param_1 + 0x328))(param_1,param_1[0x2f],1);
    (**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(param_1[0x54] + 0x78),1);
    FUN_148f65146(param_1);
  }
  FUN_148f62810(param_1);
LAB_148f6bb08:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f6bbc0 FUN_148f6bbc0 body=274 status=ok
// SIG undefined FUN_148f6bbc0(void)

void FUN_148f6bbc0(longlong *param_1)

{
  longlong *plVar1;
  
  if ((longlong *)param_1[0x19] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x19] + 0x10))();
    param_1[0x19] = 0;
    *(undefined4 *)(param_1 + 0x1a) = 0;
  }
  if ((longlong *)param_1[0x17] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
    param_1[0x17] = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x15] + 0x10))();
    param_1[0x15] = 0;
    *(undefined4 *)(param_1 + 0x16) = 0;
  }
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x10))();
    param_1[0x13] = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if ((int)param_1[0x12] != -1) {
    param_1[0x12] = 0xffffffff;
  }
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 0x10))();
  }
  if (param_1[8] != 0) {
    plVar1 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*param_1 != 0) {
    plVar1 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000148f6bcc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 148f6bcd2 FUN_148f6bcd2 body=141 status=ok
// SIG undefined FUN_148f6bcd2(void)

void FUN_148f6bcd2(longlong *param_1)

{
  longlong *plVar1;
  
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x10))();
    param_1[0xd] = 0;
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if ((int)param_1[10] != -1) {
    param_1[10] = 0xffffffff;
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  if (*param_1 != 0) {
    plVar1 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000148f6bd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 148f6bd60 FUN_148f6bd60 body=154 status=ok
// SIG undefined FUN_148f6bd60(void)

void FUN_148f6bd60(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if ((char)param_1[0x27] == '\0') {
    if (param_1[0x2a] != 0) {
      (**(code **)(*param_1 + 0x328))(param_1,param_1[0x2a],param_2);
    }
    if (param_1[0x2c] != 0) {
      (**(code **)(*param_1 + 0x328))(param_1,param_1[0x2c],param_2);
    }
    lVar1 = param_1[0x2e];
  }
  else {
    if (param_1[0x2b] != 0) {
      (**(code **)(*param_1 + 0x328))(param_1,param_1[0x2b],param_2);
    }
    lVar1 = param_1[0x2d];
  }
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000148f6bdb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x328))(param_1,lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148f6be08 FUN_148f6be08 body=129 status=ok
// SIG undefined FUN_148f6be08(void)

void FUN_148f6be08(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x139) == '\0') {
    FUN_14851b88e(*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x58),
                  CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x148) >> 8),
                           *(undefined1 *)(*(longlong *)(param_1 + 0x148) + 0xa8)));
    (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x2b0))(*(longlong **)(param_1 + 0x2a0),param_2)
    ;
    (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0x2b0))(*(longlong **)(param_1 + 0x2a8),param_2)
    ;
    plVar1 = *(longlong **)(param_1 + 0x260);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f6be86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148f6bea8 FUN_148f6bea8 body=120 status=ok
// SIG undefined FUN_148f6bea8(void)

void FUN_148f6bea8(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 != 0) {
    lVar1 = *(longlong *)(param_3 + 0x20);
    FUN_1446f470e(&local_28,L"bShowSelectableCorners",1);
    if (lVar1 == local_28) {
      FUN_14853267c(*(undefined8 *)(param_1 + 0x2a0),
                    *(undefined1 *)(*(longlong *)(param_1 + 0x148) + 0xa9));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f6bf22 FUN_148f6bf22 body=206 status=ok
// SIG undefined FUN_148f6bf22(void)

void FUN_148f6bf22(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x8b0);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x268);
    local_68 = 0;
    local_60 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_5c = 0xffffffff00000080;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_145c3f772(&local_88,param_1 + 0x5f0);
    FUN_14854b96e(lVar1,uVar2,&local_88,param_2 ^ 1);
    FUN_1484ade10(*(undefined8 *)(param_1 + 0x8b0),uVar2,param_1 + 0x820,param_2 ^ 1);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f6bff2 FUN_148f6bff2 body=119 status=ok
// SIG undefined FUN_148f6bff2(void)

void FUN_148f6bff2(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x58);
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x140);
  uVar3 = FUN_14851bd54(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x58));
  FUN_146c005f0(uVar2,uVar3,1,1,1,1);
  *(undefined1 *)(param_1 + 0x3a9) = 1;
  lVar1 = *(longlong *)(param_1 + 0x178);
  FUN_14852f8ce(lVar1);
  *(undefined1 *)(*(longlong *)(lVar1 + 0x80) + 0xb1) = 0;
  return;
}



// FUNCTION 148f6c06a FUN_148f6c06a body=615 status=ok
// SIG undefined FUN_148f6c06a(void)

undefined8 FUN_148f6c06a(longlong param_1)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined4 *)(param_1 + 0x568) = 0;
  if (*(int *)(param_1 + 0x56c) < 0) {
    FUN_14481578e(param_1 + 0x560,0);
  }
  lVar3 = *(longlong *)(param_1 + 0x2a0);
  FUN_1482aeaa2(*(undefined8 *)(param_1 + 0x278),lVar3 + 0x390,param_1 + 0x560);
  if ((*(int *)(lVar3 + 0x398) == *(int *)(lVar3 + 0x3c4)) ||
     (iVar2 = *(int *)(param_1 + 0x568), (longlong)iVar2 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x268);
    *(undefined8 *)(param_1 + 0x570) = 0x7fefffffffffffff;
    *(undefined8 *)(param_1 + 0x578) = 0x7fefffffffffffff;
    *(undefined8 *)(param_1 + 0x580) = 0x7fefffffffffffff;
    *(undefined8 *)(param_1 + 0x588) = 0xffefffffffffffff;
    *(undefined8 *)(param_1 + 0x590) = 0xffefffffffffffff;
    *(undefined8 *)(param_1 + 0x598) = 0xffefffffffffffff;
    lVar4 = *(longlong *)(param_1 + 0x560);
    lVar6 = 0;
    do {
      FUN_146c14aac(uVar5,&local_78,*(undefined4 *)(lVar4 + lVar6));
      dVar1 = *(double *)(param_1 + 0x570);
      uVar7 = SUB84(dVar1,0);
      uVar8 = (int)((ulonglong)dVar1 >> 0x20);
      if ((double)CONCAT44(uStack_74,local_78) <= dVar1) {
        uVar7 = local_78;
        uVar8 = uStack_74;
      }
      dVar1 = *(double *)(param_1 + 0x578);
      *(ulonglong *)(param_1 + 0x570) = CONCAT44(uVar8,uVar7);
      uVar7 = SUB84(dVar1,0);
      uVar8 = (int)((ulonglong)dVar1 >> 0x20);
      if ((double)CONCAT44(uStack_6c,uStack_70) <= dVar1) {
        uVar7 = uStack_70;
        uVar8 = uStack_6c;
      }
      *(ulonglong *)(param_1 + 0x578) = CONCAT44(uVar8,uVar7);
      dVar1 = *(double *)(param_1 + 0x580);
      uVar7 = SUB84(dVar1,0);
      uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (local_68 <= dVar1) {
        uVar7 = SUB84(local_68,0);
        uVar8 = (undefined4)((ulonglong)local_68 >> 0x20);
      }
      *(ulonglong *)(param_1 + 0x580) = CONCAT44(uVar8,uVar7);
      dVar1 = *(double *)(param_1 + 0x588);
      uVar7 = SUB84(dVar1,0);
      uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (dVar1 <= dStack_60) {
        uVar7 = SUB84(dStack_60,0);
        uVar8 = (undefined4)((ulonglong)dStack_60 >> 0x20);
      }
      *(ulonglong *)(param_1 + 0x588) = CONCAT44(uVar8,uVar7);
      dVar1 = *(double *)(param_1 + 0x590);
      uVar7 = SUB84(dVar1,0);
      uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (dVar1 <= local_58) {
        uVar7 = SUB84(local_58,0);
        uVar8 = (undefined4)((ulonglong)local_58 >> 0x20);
      }
      *(ulonglong *)(param_1 + 0x590) = CONCAT44(uVar8,uVar7);
      dVar1 = *(double *)(param_1 + 0x598);
      uVar7 = SUB84(dVar1,0);
      uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (dVar1 <= dStack_50) {
        uVar7 = SUB84(dStack_50,0);
        uVar8 = (undefined4)((ulonglong)dStack_50 >> 0x20);
      }
      *(ulonglong *)(param_1 + 0x598) = CONCAT44(uVar8,uVar7);
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar2 * 4 != lVar6);
    FUN_1482ad394(*(undefined8 *)(param_1 + 0x278),&local_78,lVar3 + 0x390,0);
    *(undefined8 *)(param_1 + 0x520) = local_48;
    *(double *)(param_1 + 0x510) = local_58;
    *(double *)(param_1 + 0x518) = dStack_50;
    *(double *)(param_1 + 0x500) = local_68;
    *(double *)(param_1 + 0x508) = dStack_60;
    *(ulonglong *)(param_1 + 0x4f0) = CONCAT44(uStack_74,local_78);
    *(ulonglong *)(param_1 + 0x4f8) = CONCAT44(uStack_6c,uStack_70);
    *(undefined8 *)(param_1 + 0x558) = *(undefined8 *)(param_1 + 0x520);
    *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(param_1 + 0x510);
    *(undefined4 *)(param_1 + 0x54c) = *(undefined4 *)(param_1 + 0x514);
    *(undefined4 *)(param_1 + 0x550) = *(undefined4 *)(param_1 + 0x518);
    *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(param_1 + 0x51c);
    *(undefined4 *)(param_1 + 0x538) = *(undefined4 *)(param_1 + 0x500);
    *(undefined4 *)(param_1 + 0x53c) = *(undefined4 *)(param_1 + 0x504);
    *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_1 + 0x508);
    *(undefined4 *)(param_1 + 0x544) = *(undefined4 *)(param_1 + 0x50c);
    *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(param_1 + 0x4f0);
    *(undefined4 *)(param_1 + 0x52c) = *(undefined4 *)(param_1 + 0x4f4);
    *(undefined4 *)(param_1 + 0x530) = *(undefined4 *)(param_1 + 0x4f8);
    *(undefined4 *)(param_1 + 0x534) = *(undefined4 *)(param_1 + 0x4fc);
    FUN_146bcb256(param_1 + 0x3d8,&local_78,param_1 + 0x528);
    *(double *)(param_1 + 0x538) = local_68;
    *(undefined4 *)(param_1 + 0x528) = local_78;
    *(undefined4 *)(param_1 + 0x52c) = uStack_74;
    *(undefined4 *)(param_1 + 0x530) = uStack_70;
    *(undefined4 *)(param_1 + 0x534) = uStack_6c;
    FUN_1482ff674(param_1 + 0x528,param_1 + 0x3d8);
    uVar5 = 1;
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f6c58a FUN_148f6c58a body=1235 status=ok
// SIG undefined FUN_148f6c58a(void)

void FUN_148f6c58a(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_358 [40];
  longlong local_330;
  longlong local_328;
  longlong local_320;
  undefined1 local_318 [8];
  void *local_310;
  int local_308;
  undefined4 local_304;
  undefined1 local_300 [4];
  uint local_2fc;
  longlong local_2f8;
  undefined8 *local_2f0;
  undefined8 uStack_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  code *local_2c8 [2];
  undefined8 local_2b8;
  undefined **local_2a8;
  longlong *local_2a0;
  undefined8 *local_298;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_25c;
  undefined4 local_254;
  longlong local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_20c;
  undefined4 local_204;
  longlong local_1f8;
  undefined4 local_1f0;
  undefined1 local_1e0 [240];
  undefined1 local_f0 [168];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_358;
  lVar5 = *(longlong *)(param_1 + 0x268);
  local_2e0 = lVar5;
  FUN_146c2c368(local_f0,lVar5);
  FUN_1458d302c(local_1e0);
  local_2f0 = (undefined8 *)0x0;
  uStack_2e8 = 0;
  local_218 = 0;
  local_210 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_20c = 0xffffffff00000080;
  local_204 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_268 = 0;
  local_260 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_25c = 0xffffffff00000080;
  local_254 = 0;
  local_248 = 0;
  local_240 = 0;
  local_330 = param_1;
  local_2f8 = lVar5;
  if ((longlong)*(int *)(param_1 + 0x5a8) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x5a0);
    local_320 = lVar5 + (longlong)*(int *)(param_1 + 0x5a8) * 0x18;
    do {
      iVar2 = *(int *)(lVar5 + 0x10);
      local_328 = lVar5;
      if ((longlong)iVar2 != 0) {
        lVar5 = *(longlong *)(lVar5 + 8);
        lVar6 = 0;
        do {
          local_2fc = *(uint *)(lVar5 + lVar6);
          local_2d8 = *(wchar_t **)
                       (*(longlong *)
                         (*(longlong *)(local_2e0 + 0x1c0) + (ulonglong)(local_2fc >> 9) * 8) + 8 +
                       (ulonglong)((local_2fc & 0x1ff) << 4));
          FUN_1447cbafe(&local_238,local_300,&local_2fc,0);
          FUN_1447cbafe(&local_288,local_300,&local_2d8);
          if (local_2d8._4_4_ != -1) {
            FUN_1447cbafe(&local_288,local_300,(longlong)&local_2d8 + 4,0);
          }
          lVar6 = lVar6 + 4;
        } while ((longlong)iVar2 * 4 != lVar6);
      }
      lVar5 = local_328 + 0x18;
    } while (lVar5 != local_320);
  }
  local_2b8 = 0;
  local_2a8 = &PTR_LAB_14ba27070;
  local_2a0 = &local_2e0;
  local_298 = &local_238;
  local_2c8[0] = FUN_14436eafe;
  FUN_140619b9c(&local_288,&local_2d8);
  FUN_14298451c(&local_2f8,&local_2d8,local_2c8);
  if (local_2d8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_146c2c4e8(local_f0);
  if ((longlong)(int)uStack_2e8 != 0) {
    puVar1 = local_2f0 + (int)uStack_2e8;
    puVar7 = local_2f0;
    do {
      plVar3 = (longlong *)*puVar7;
      local_310 = (void *)0x0;
      local_308 = (int)plVar3[1];
      lVar5 = (longlong)local_308;
      pvVar4 = (void *)*plVar3;
      if (lVar5 == 0) {
        local_304 = 0;
      }
      else {
        FUN_144a06ca8(&local_310,local_308,0);
        memcpy(local_310,pvVar4,lVar5 << 2);
        pvVar4 = local_310;
        lVar5 = (longlong)local_308;
        if (lVar5 != 0) {
          lVar6 = 0;
          do {
            FUN_146c2c9fe(local_f0,*(undefined4 *)((longlong)pvVar4 + lVar6),1);
            lVar6 = lVar6 + 4;
          } while (lVar5 * 4 != lVar6);
        }
        if (local_310 != (void *)0x0) {
          FUN_1400020a8(local_310);
        }
      }
      local_2fc = FUN_146bc96d4(local_2e0,*(undefined4 *)*plVar3);
      local_2d8 = (wchar_t *)*plVar3;
      local_2d0 = (undefined4)plVar3[1];
      FUN_1482aa2f0(local_2e0,&local_2d8,local_2fc);
      FUN_1447cbafe(local_1e0,&local_2d8,&local_2fc,0);
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar1);
  }
  FUN_146c2caf6(local_f0,local_318);
  local_2d8 = L"PolyMeshDeleteEdgesChange";
  local_2d0 = 0x19;
  FUN_1446e940c(&local_2fc,&local_2d8);
  local_2d8 = L"UEditMeshPolygonsTool";
  local_2d0 = 0x15;
  FUN_1446e940c(local_300,&local_2d8);
  FUN_140208bae(&local_2d8,local_300,&local_2fc,L"Delete Edges");
  FUN_148f6ca5e(local_330,&local_2d8,local_318,local_1e0);
  if (local_2d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_2d8 + 0x10))();
  }
  local_240 = 0;
  if (local_248 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_288);
  local_1f0 = 0;
  if (local_1f8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_238);
  FUN_146be9400(&local_2f0);
  FUN_1456c3cc8(local_1e0);
  FUN_146c2c40e(local_f0);
  if ((local_48 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f6ca5e FUN_148f6ca5e body=1128 status=ok
// SIG undefined FUN_148f6ca5e(void)

void FUN_148f6ca5e(longlong *param_1,undefined8 param_2,longlong *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_198 [40];
  undefined8 local_170;
  undefined1 local_168 [8];
  undefined8 *local_160;
  undefined1 local_158 [8];
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  wchar_t *local_148;
  undefined4 local_140;
  undefined1 local_138 [80];
  undefined1 local_e8 [80];
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar1 = (**(code **)(*param_1 + 0x2c8))();
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,param_2);
  lVar1 = param_1[0x54];
  FUN_1458d302c(local_138);
  lVar3 = param_1[0x54];
  if (((*(int *)(lVar3 + 1000) != *(int *)(lVar3 + 0x414)) ||
      (*(int *)(lVar3 + 0x438) != *(int *)(lVar3 + 0x464))) ||
     (*(int *)(lVar3 + 0x398) != *(int *)(lVar3 + 0x3c4))) {
    local_170 = param_2;
    if ((undefined1 *)(lVar1 + 0x390) == param_4) {
      FUN_145c3f772(local_138,param_4);
      FUN_145c3f772(local_e8,param_4 + 0x50);
      FUN_145c3f772(local_98,param_4 + 0xa0);
      lVar3 = param_1[0x54];
      param_4 = local_138;
    }
    FUN_148531782(lVar3);
    FUN_14853173e(param_1[0x54]);
    lVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_148 = L"ClearSelection";
    local_140 = 0xe;
    FUN_1446e940c(local_14c,&local_148);
    local_148 = L"UEditMeshPolygonsTool";
    local_140 = 0x15;
    FUN_1446e940c(local_150,&local_148);
    FUN_140208bae(&local_148,local_150,local_14c,L"Clear Selection");
    FUN_1485323bc(param_1[0x54],local_158);
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x20))
              (lVar1 + 0x28,param_1[0x54],local_158,&local_148);
    param_2 = local_170;
    if (local_148 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_148 + 0x10))();
      param_2 = local_170;
    }
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
  lVar1 = *param_3;
  *param_3 = 0;
  *puVar2 = &PTR_LAB_14ba27090;
  puVar2[5] = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  puVar2[9] = 0;
  *(undefined4 *)(puVar2 + 10) = 0;
  puVar2[0xf] = 0;
  *(undefined4 *)(puVar2 + 0x10) = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x8c) = 0;
  puVar2[0x13] = 0;
  *(undefined4 *)(puVar2 + 0x14) = 0;
  puVar2[0x15] = lVar1;
  plVar4 = (longlong *)param_1[0x4f];
  if ((int)plVar4[0x25] != *(int *)((longlong)plVar4 + 0x154)) {
    FUN_145c3f772(puVar2 + 1,plVar4 + 0x24);
    plVar4 = (longlong *)param_1[0x4f];
  }
  (**(code **)(*plVar4 + 8))(plVar4);
  lVar1 = param_1[0x4f];
  if (*(int *)(lVar1 + 0x128) != *(int *)(lVar1 + 0x154)) {
    FUN_145c3f772(puVar2 + 0xb,lVar1 + 0x120);
  }
  lVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_160 = puVar2;
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x20))(lVar1 + 0x28,param_1,&local_160,param_2);
  FUN_14851bbe8(*(undefined8 *)(param_1[0x28] + 0x58),param_1[0x4d],1,0xf);
  *(undefined1 *)((longlong)param_1 + 0x4d1) = 1;
  lVar1 = param_1[0x54];
  FUN_14852f8ce(lVar1);
  *(undefined1 *)(*(longlong *)(lVar1 + 0x80) + 0xb1) = 0;
  FUN_14852f91c(param_1[0x54],1);
  *(int *)(param_1 + 0x117) = (int)param_1[0x117] + 1;
  if (((*(int *)(param_4 + 0x58) != *(int *)(param_4 + 0x84)) ||
      (*(int *)(param_4 + 0xa8) != *(int *)(param_4 + 0xd4))) ||
     (*(int *)(param_4 + 8) != *(int *)(param_4 + 0x34))) {
    FUN_148531782(param_1[0x54]);
    FUN_1485316d6(param_1[0x54],param_4,1);
    lVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_148 = L"SetSelection";
    local_140 = 0xc;
    FUN_1446e940c(local_14c,&local_148);
    local_148 = L"UEditMeshPolygonsTool";
    local_140 = 0x15;
    FUN_1446e940c(local_150,&local_148);
    FUN_140208bae(&local_148,local_150,local_14c,L"Set Selection");
    FUN_1485323bc(param_1[0x54],local_168);
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x20))
              (lVar1 + 0x28,param_1[0x54],local_168,&local_148);
    if (local_148 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_148 + 0x10))();
    }
  }
  lVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x18))(lVar1 + 0x28);
  FUN_1456c3cc8(local_138);
  lVar1 = *param_3;
  if (lVar1 != 0) {
    FUN_146c2a142(lVar1);
    FUN_1400020a8(lVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f6cec8 FUN_148f6cec8 body=197 status=ok
// SIG undefined FUN_148f6cec8(void)

void FUN_148f6cec8(undefined8 param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *param_2 * 0x200 + param_2[1];
  uVar4 = 0;
  if ((uVar5 != 0) && (uVar4 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 2) - 1U)))
  {
    uVar2 = 1;
    uVar3 = 1;
    if (1 < (int)uVar5) {
      uVar2 = uVar5;
    }
    do {
      uVar4 = uVar2;
      if (uVar2 == uVar3) break;
      uVar1 = uVar3 >> 9;
      uVar6 = uVar3 & 0x1ff;
      uVar4 = uVar3;
      uVar3 = uVar3 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 2))[uVar1] +
                                         (ulonglong)uVar6 * 2) - 1U));
  }
  do {
    if (uVar4 == uVar5) {
      return;
    }
    FUN_146c2c9fe(param_1,uVar4,1);
    uVar2 = uVar4 + 1;
    if ((int)(uVar4 + 1) < (int)uVar5) {
      uVar2 = uVar5;
    }
    uVar3 = uVar4;
    do {
      uVar4 = uVar2;
      if (uVar2 - 1 == uVar3) break;
      uVar4 = uVar3 + 1;
      uVar3 = uVar4;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_2 + 2) + (ulonglong)(uVar4 >> 9) * 8
                                           ) + (ulonglong)(uVar4 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 148f6cf8e FUN_148f6cf8e body=1727 status=ok
// SIG undefined FUN_148f6cf8e(void)

void FUN_148f6cf8e(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined1 auStack_498 [32];
  undefined1 *local_478;
  undefined1 *local_470;
  undefined1 local_460 [12];
  undefined1 local_454 [4];
  wchar_t *local_450 [2];
  int local_440;
  undefined1 local_439;
  longlong *local_438;
  undefined4 local_430;
  undefined4 local_42c;
  undefined8 local_428;
  undefined1 *local_420;
  wchar_t **local_418;
  undefined1 *local_410;
  wchar_t **local_408;
  undefined4 *local_400;
  int local_3f8;
  wchar_t *local_3f0;
  undefined4 local_3e8;
  undefined1 local_3a0 [160];
  undefined1 local_300 [8];
  undefined8 local_2f8;
  undefined1 local_2b8;
  longlong local_278;
  longlong local_258;
  char local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_20c;
  int local_204;
  longlong local_1f8;
  undefined4 local_1f0;
  wchar_t local_1e8 [84];
  undefined1 local_140 [80];
  undefined1 local_f0 [160];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_498;
  FUN_14852586c(local_140,param_1[0x54] + 0x390);
  FUN_140619b9c(local_f0,&local_400);
  if (local_3f8 != 2) goto LAB_148f6d2aa;
  FUN_146c2c368(local_1e8,param_1[0x4d]);
  FUN_146c2c4e8(local_1e8);
  local_218 = 0;
  local_210 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_20c = 0xffffffff00000080;
  local_204 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  FUN_148f5d452(param_1[0x4f],local_f0,&local_238);
  if ((int)uStack_230 == local_204) {
    uVar2 = FUN_1482abba8(param_1[0x4f],local_400[1]);
    uVar3 = FUN_1482abba8(param_1[0x4f],*local_400);
    local_410 = &LAB_14436eae2;
    local_408 = &local_3f0;
    local_3f0 = local_1e8;
    FUN_146c03fd0(param_1[0x4d],uVar3);
    local_420 = &LAB_14436eaf0;
    local_418 = &local_3f0;
    local_3f0 = local_1e8;
    FUN_146c03fd0(param_1[0x4d],uVar2);
    local_470 = local_300;
    local_2f8 = 0;
    local_2b8 = 0;
    local_240 = '\0';
    local_478 = &local_439;
    local_439 = DAT_14cbf3b30;
    local_438 = param_1;
    local_430 = uVar2;
    local_42c = uVar3;
    local_428 = param_2;
    iVar4 = (**(code **)(*(longlong *)param_1[0x4d] + 0xa8))
                      ((longlong *)param_1[0x4d],uVar2,uVar3,(int)param_2);
    switch(iVar4) {
    case 0x17:
      iVar4 = FUN_146c061e0(param_1[0x4d],uVar2,uVar3);
      if (iVar4 != -1) {
        plVar5 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
        local_3f0 = L"WeldVerticesCollapseInvalidTopology";
        local_3e8 = 0x23;
        FUN_1446e940c(local_450,&local_3f0);
        local_3f0 = L"UEditMeshPolygonsTool";
        local_3e8 = 0x15;
        FUN_1446e940c(&local_440,&local_3f0);
        pwVar7 = 
        L"Could not weld vertices because the collapse would create an edge with more than two triangles (non-manifold geometry)."
        ;
        goto LAB_148f6d1f2;
      }
    case 0x1b:
      FUN_144367648(&local_438);
      plVar5 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      (**(code **)(*plVar5 + 0x340))(plVar5,&DAT_14cbf3ae8,3);
      break;
    case 0x18:
    case 0x1a:
    case 0x1d:
      uVar3 = FUN_146c061e0(param_1[0x4d],uVar2,uVar3);
      cVar1 = FUN_148f5e5ff(param_1[0x4d],uVar3);
      if (cVar1 == '\0') {
        plVar5 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
        local_3f0 = L"WeldVerticesCannotDeleteAll";
        local_3e8 = 0x1b;
        FUN_1446e940c(local_450,&local_3f0);
        local_3f0 = L"UEditMeshPolygonsTool";
        local_3e8 = 0x15;
        FUN_1446e940c(&local_440,&local_3f0);
        pwVar7 = L"Could not weld vertices because it would delete remainder of mesh.";
        goto LAB_148f6d1f2;
      }
      break;
    case 0x19:
    case 0x1c:
switchD_148f6d164_caseD_19:
      plVar5 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      local_3f0 = L"WeldVerticesGenericFailure";
      local_3e8 = 0x1a;
      FUN_1446e940c(local_450,&local_3f0);
      local_3f0 = L"UEditMeshPolygonsTool";
      local_3e8 = 0x15;
      FUN_1446e940c(&local_440,&local_3f0);
      pwVar7 = L"Could not weld vertices.";
LAB_148f6d1f2:
      FUN_140208bae(&local_3f0,&local_440,local_450,pwVar7);
      (**(code **)(*plVar5 + 0x340))(plVar5,&local_3f0,3);
      local_450[0] = local_3f0;
      goto LAB_148f6d59e;
    case 0x1e:
      FUN_144367648(&local_438);
      plVar5 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      local_3f0 = L"WeldVerticesDisallowInternalBowtie";
      local_3e8 = 0x22;
      FUN_1446e940c(local_450,&local_3f0);
      local_3f0 = L"UEditMeshPolygonsTool";
      local_3e8 = 0x15;
      FUN_1446e940c(&local_440,&local_3f0);
      FUN_140208bae(&local_3f0,&local_440,local_450,
                    L"Could not weld vertices because it would create a non-boundary edge bowtie. Vertices were moved to their destination without actually welding. Set modeling.PolyEdit.AllowWeldInternalBowtie to true to allow a true weld."
                   );
      (**(code **)(*plVar5 + 0x340))(plVar5,&local_3f0,3);
      if (local_3f0 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_3f0 + 0x10))();
      }
      break;
    default:
      if (iVar4 != 0) goto switchD_148f6d164_caseD_19;
    }
    local_3f0 = L"PolyMeshWeldVerticesChange";
    local_3e8 = 0x1a;
    FUN_1446e940c(&local_440,&local_3f0);
    local_3f0 = L"UEditMeshPolygonsTool";
    local_3e8 = 0x15;
    FUN_1446e940c(local_454,&local_3f0);
    FUN_140208bae(local_450,local_454,&local_440,L"Weld Vertices");
    lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x10))(lVar6 + 0x28,local_450);
    FUN_1458d302c(&local_3f0);
    FUN_146c2caf6(local_1e8,local_460);
    FUN_148f6ca5e(param_1,local_450,local_460,&local_3f0);
    FUN_1456c3cc8(&local_3f0);
    local_440 = FUN_1482abbb8(param_1[0x4f],uVar2);
    if (local_440 != -1) {
      FUN_1458d302c(&local_3f0);
      FUN_1447cbafe(local_3a0,local_454,&local_440,0);
      FUN_1485316d6(param_1[0x54],&local_3f0,1);
      FUN_1456c3cc8(&local_3f0);
    }
    lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x18))(lVar6 + 0x28);
LAB_148f6d59e:
    if (local_450[0] != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_450[0] + 0x10))();
    }
    if (local_240 == '\x01') {
      if (local_258 != 0) {
        FUN_1400020a8();
      }
      if (local_278 != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x10))(lVar6 + 0x28,&DAT_14cbf3b08);
    FUN_148f6d6fc(param_1,&local_238,local_1e8);
    lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x18))(lVar6 + 0x28);
  }
  local_1f0 = 0;
  if (local_1f8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_238);
  FUN_146c2c40e(local_1e8);
LAB_148f6d2aa:
  if (local_400 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1456c3cc8(local_140);
  if ((local_50 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f6d64e FUN_148f6d64e body=111 status=ok
// SIG undefined FUN_148f6d64e(void)

undefined8 *
FUN_148f6d64e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &PTR_FUN_14ba25a48;
  param_1[1] = param_2;
  FUN_146c7f210(param_1 + 2,param_3);
  FUN_146c7f210(param_1 + 10,param_4);
  *(undefined2 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_146c7d752(param_3);
  FUN_146c7d752(param_4);
  return param_1;
}



// FUNCTION 148f6d6be FUN_148f6d6be body=61 status=ok
// SIG undefined FUN_148f6d6be(void)

void FUN_148f6d6be(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba25a48;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_146c7d752(param_1 + 10);
  FUN_146c7d752(param_1 + 2);
  return;
}



// FUNCTION 148f6d6fc FUN_148f6d6fc body=3982 status=ok
// SIG undefined FUN_148f6d6fc(void)

void FUN_148f6d6fc(longlong *param_1,longlong ****param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong ****pppplVar15;
  longlong ****pppplVar16;
  double dVar17;
  undefined1 auStack_3c8 [32];
  longlong ****local_3a8;
  byte local_391;
  longlong *local_390;
  ulonglong local_388;
  undefined8 *local_380;
  longlong ***local_378;
  longlong ***local_370;
  longlong ***local_368;
  undefined8 local_360;
  longlong ****local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  ulonglong uStack_338;
  undefined8 local_330;
  longlong ***local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  double local_2e8;
  longlong ***local_2d8;
  longlong ****local_2d0;
  longlong local_2c8;
  undefined8 uStack_2c0;
  longlong ***local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined2 local_28b;
  undefined1 local_289;
  undefined8 *local_288;
  undefined1 local_280;
  longlong ****local_278;
  undefined8 uStack_270;
  longlong ***local_268;
  undefined8 local_260;
  undefined8 local_258;
  int local_250;
  undefined8 local_24c;
  int local_244;
  longlong local_238;
  undefined4 local_230;
  undefined1 local_228 [8];
  int local_220;
  int local_1f4;
  int local_1d0;
  int local_1a4;
  longlong **local_188;
  longlong ***ppplStack_180;
  double local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  uint local_160;
  undefined8 local_15c;
  undefined4 local_154;
  longlong local_148;
  undefined4 local_140;
  longlong local_138;
  longlong ***ppplStack_130;
  uint local_128;
  int iStack_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  int local_104;
  undefined1 local_100 [8];
  undefined1 *local_f8;
  int local_f0;
  longlong ***local_e8;
  undefined8 uStack_e0;
  longlong **local_d8 [2];
  undefined8 local_c8;
  int local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  plVar3 = (longlong *)param_1[0x4d];
  local_28b = 0x101;
  local_289 = 1;
  local_c8 = 0;
  iVar9 = 0;
  local_c0 = 0;
  local_e8 = (longlong ***)0x0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  pppplVar16 = param_2 + 2;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  local_120 = 0;
  local_380 = param_3;
  ppplStack_130 = (longlong ***)pppplVar16;
  if (*(int *)(param_2 + 5) != 0) {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_2 + 5);
  }
  local_260._0_4_ = local_128;
  local_260._4_4_ = iStack_124;
  local_258 = CONCAT44(local_11c,local_120);
  uStack_270 = (longlong ****)local_138;
  local_268 = ppplStack_130;
  local_278 = param_2;
  if ((iStack_124 != iVar9) || ((longlong ****)ppplStack_130 != pppplVar16)) {
    do {
      puVar10 = (undefined8 *)
                FUN_1482abdf2(param_1[0x4f],
                              *(undefined4 *)
                               ((longlong)*local_278 + (longlong)local_260._4_4_ * 0xc));
      local_2a0 = *puVar10;
      local_298 = *(undefined4 *)(puVar10 + 1);
      FUN_146bc855c(&local_e8);
      local_260._0_4_ = (uint)local_260 & ~uStack_270._4_4_;
      FUN_1449c0562(&uStack_270);
    } while (local_278 != param_2 ||
             ((longlong ****)local_268 != pppplVar16 || local_260._4_4_ != iVar9));
  }
  local_2b8 = (longlong ***)0x0;
  uStack_2b0 = 0;
  local_118 = 0;
  local_110 = 0;
  local_138 = 0;
  ppplStack_130 = (longlong ***)0x0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = (undefined1 *)0x0;
  local_f0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_188 = (longlong **)&DAT_100000000;
  ppplStack_180 = local_d8;
  local_178 = 2.12199579047121e-314;
  local_170 = 0;
  iVar9 = 0;
  local_390 = param_1;
  if (local_c0 != 0) {
    FUN_1449c0562(&local_188);
    iVar9 = local_c0;
  }
  local_260 = local_178;
  dVar17 = local_260;
  local_258 = CONCAT44(local_16c,local_170);
  uStack_270 = (longlong ****)local_188;
  local_268 = ppplStack_180;
  local_278 = &local_e8;
  local_260._4_4_ = (int)((ulonglong)local_178 >> 0x20);
  iVar7 = local_260._4_4_;
  if ((local_260._4_4_ != iVar9) || (local_260 = dVar17, ppplStack_180 != local_d8)) {
    do {
      local_260 = dVar17;
      uVar13 = uStack_2b0;
      uVar8 = *(uint *)((longlong)*local_278 + (longlong)iVar7 * 0xc);
      local_320 = (longlong ***)CONCAT44(local_320._4_4_,uVar8);
      if ((int)ppplStack_130 != local_104) {
        puVar12 = local_f8;
        if (local_f8 == (undefined1 *)0x0) {
          puVar12 = local_100;
        }
        for (iVar7 = *(int *)(puVar12 + (ulonglong)(local_f0 - 1U & uVar8) * 4); iVar7 != -1;
            iVar7 = *(int *)(local_138 + (longlong)iVar7 * 0xc + 4)) {
          if (*(uint *)(local_138 + (longlong)iVar7 * 0xc) == uVar8) goto LAB_148f6db8d;
        }
      }
      lVar14 = (longlong)(int)uStack_2b0;
      uVar8 = (int)uStack_2b0 + 1;
      uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar8);
      if (uStack_2b0._4_4_ < uVar8) {
        FUN_146e2cb8c(&local_2b8,uVar13 & 0xffffffff);
      }
      pppplVar16 = (longlong ****)(local_2b8 + lVar14 * 10);
      local_2b8[lVar14 * 10 + 4] = (longlong **)0x0;
      *(undefined4 *)(local_2b8 + lVar14 * 10 + 5) = 0;
      local_2b8[lVar14 * 10] = (longlong **)0x0;
      (local_2b8 + lVar14 * 10)[1] = (longlong **)0x0;
      *(undefined8 *)((longlong)local_2b8 + lVar14 * 0x50 + 0x2c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)local_2b8 + lVar14 * 0x50 + 0x34) = 0;
      local_2b8[lVar14 * 10 + 8] = (longlong **)0x0;
      *(undefined4 *)(local_2b8 + lVar14 * 10 + 9) = 0;
      FUN_1447cbafe(pppplVar16,&local_188,&local_320,0);
      local_2d0 = (longlong ****)&local_358;
      local_2d8 = (longlong ***)&LAB_14436ec32;
      uVar4 = local_320._0_4_;
      local_188 = (longlong **)0x0;
      ppplStack_180 = (longlong ***)CONCAT44(ppplStack_180._4_4_,1);
      local_358 = &local_e8;
      FUN_144a06ca8(&local_188,1,0);
      *(undefined4 *)local_188 = uVar4;
      local_3a8 = &local_2d8;
      FUN_146c8215c(plVar3,&local_188,pppplVar16);
      if ((longlong ***)local_188 != (longlong ***)0x0) {
        FUN_1400020a8();
      }
      FUN_1468b3f6e(&local_138,pppplVar16);
LAB_148f6db8d:
      local_260 = (double)CONCAT44(local_260._4_4_,(uint)local_260 & ~uStack_270._4_4_);
      FUN_1449c0562(&uStack_270);
      iVar7 = local_260._4_4_;
      dVar17 = local_260;
    } while (local_278 != &local_e8 || (local_268 != local_d8 || local_260._4_4_ != iVar9));
  }
  local_168 = 0;
  local_160 = 0;
  local_188 = (longlong **)0x0;
  ppplStack_180 = (longlong ***)0x0;
  local_15c = 0xffffffff00000080;
  local_154 = 0;
  local_148 = 0;
  local_388 = 0;
  local_140 = 0;
  if ((longlong)(int)uStack_2b0 != 0) {
    local_368 = local_2b8 + (longlong)(int)uStack_2b0 * 10;
    local_391 = 1;
    pppplVar16 = (longlong ****)local_2b8;
    do {
      local_2e8 = DAT_14c8464f0;
      local_2f8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_2f0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      pppplVar15 = pppplVar16 + 2;
      local_358 = (longlong ****)0x100000000;
      uStack_348 = (longlong ****)0xffffffff;
      local_340 = local_340 & 0xffffffff00000000;
      iVar9 = 0;
      local_350 = pppplVar15;
      if (*(int *)(pppplVar16 + 5) != 0) {
        FUN_1449c0562(&local_358);
        iVar9 = *(int *)(pppplVar16 + 5);
      }
      local_260 = (double)uStack_348;
      dVar17 = local_260;
      local_258 = local_340;
      uStack_270 = local_358;
      local_268 = (longlong ***)local_350;
      local_260._4_4_ = (int)((ulonglong)uStack_348 >> 0x20);
      iVar7 = local_260._4_4_;
      local_278 = pppplVar16;
      if ((local_260._4_4_ != iVar9) || (local_260 = dVar17, local_350 != pppplVar15)) {
        do {
          local_260 = dVar17;
          FUN_146c13ee2(plVar3,&local_358,
                        *(undefined4 *)((longlong)*local_278 + (longlong)iVar7 * 0xc),0);
          local_2f8 = (double)local_358 + local_2f8;
          uStack_2f0 = (double)local_350 + uStack_2f0;
          local_2e8 = (double)uStack_348 + local_2e8;
          local_260 = (double)CONCAT44(local_260._4_4_,(uint)local_260 & ~uStack_270._4_4_);
          FUN_1449c0562(&uStack_270);
          iVar7 = local_260._4_4_;
          dVar17 = local_260;
        } while (local_278 != pppplVar16 ||
                 ((longlong ****)local_268 != pppplVar15 || local_260._4_4_ != iVar9));
      }
      dVar17 = 1.0 / (double)(*(int *)(pppplVar16 + 1) - *(int *)((longlong)pppplVar16 + 0x34));
      local_2f8 = local_2f8 * dVar17;
      uStack_2f0 = uStack_2f0 * dVar17;
      local_2e8 = dVar17 * local_2e8;
      local_258 = 0;
      uVar8 = 0;
      local_250 = 0;
      local_278 = (longlong ****)0x0;
      uStack_270 = (longlong ****)0x0;
      local_24c = 0xffffffff00000080;
      local_244 = 0;
      local_238 = 0;
      local_230 = 0;
      local_358 = (longlong ****)0x100000000;
      uStack_348._0_4_ = 0xffffffff;
      uStack_348._4_4_ = 0;
      local_340 = local_340 & 0xffffffff00000000;
      local_350 = pppplVar15;
      if (*(int *)(pppplVar16 + 5) != 0) {
        FUN_1449c0562(&local_358);
        uVar8 = *(uint *)(pppplVar16 + 5);
      }
      uStack_308._0_4_ = (uint)uStack_348;
      uStack_308._4_4_ = uStack_348._4_4_;
      local_300 = (uint)local_340;
      local_2fc = local_340._4_4_;
      uStack_318 = local_358;
      local_310 = local_350;
      local_378 = (longlong ***)pppplVar15;
      local_370 = (longlong ***)pppplVar16;
      local_320 = (longlong ***)pppplVar16;
      if ((uStack_348._4_4_ != uVar8) || (local_350 != pppplVar15)) {
        do {
          puVar10 = local_380;
          uVar2 = *(uint *)((longlong)*local_320 + (longlong)(int)uStack_308._4_4_ * 0xc);
          bVar5 = local_391;
          if ((-1 < (int)uVar2) &&
             ((int)uVar2 < (int)plVar3[0x3a] * 0x200 + *(int *)((longlong)plVar3 + 0x1d4))) {
            if ((ushort)(*(short *)(*(longlong *)(plVar3[0x3b] + (ulonglong)(uVar2 >> 9) * 8) +
                                   (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe) {
              uVar13 = *(ulonglong *)
                        (*(longlong *)(plVar3[0x38] + (ulonglong)(uVar2 >> 9) * 8) +
                        (ulonglong)((uVar2 & 0x1ff) << 4));
              local_288 = local_380;
              local_280 = 1;
              local_358 = (longlong ****)&LAB_1482fe864;
              local_350 = (longlong ****)&local_288;
              FUN_146c03fd0(*local_380,uVar13 & 0xffffffff,&local_358);
              local_288 = puVar10;
              local_280 = 1;
              local_358 = (longlong ****)&LAB_1482fe864;
              local_350 = (longlong ****)&local_288;
              FUN_146c03fd0(*puVar10,uVar13 >> 0x20,&local_358);
              local_350 = (longlong ****)0xffffffffffffffff;
              local_330 = 0xffffffffffffffff;
              local_340 = 0xffffffffffffffff;
              uStack_338 = 0xffffffffffffffff;
              local_3a8 = (longlong ****)&local_358;
              iVar9 = (**(code **)(*plVar3 + 0x78))
                                (plVar3,uVar13 & 0xffffffff,uVar13 >> 0x20,&local_28b);
              pppplVar16 = (longlong ****)local_370;
              pppplVar15 = (longlong ****)local_378;
              bVar5 = 0;
              if (iVar9 < 0x18) {
                if (iVar9 == 0) {
                  FUN_1447cbafe(&local_278,&local_288,&local_358,0);
                  bVar5 = local_391;
                }
              }
              else if (((iVar9 == 0x18) || (iVar9 == 0x1d)) || (iVar9 == 0x1a)) {
                bVar5 = FUN_148f5e5ff(local_390[0x4d],uVar2);
                bVar5 = bVar5 & local_391;
              }
            }
          }
          local_391 = bVar5;
          uStack_308._0_4_ = (uint)uStack_308 & ~uStack_318._4_4_;
          FUN_1449c0562(&uStack_318);
        } while ((longlong ****)local_320 != pppplVar16 ||
                 (local_310 != pppplVar15 || uStack_308._4_4_ != uVar8));
      }
      local_320 = (longlong ***)0x100000000;
      local_310 = (longlong ****)0xffffffff;
      uStack_308 = (ulonglong)uStack_308._4_4_ << 0x20;
      uStack_318 = &local_268;
      if (local_250 == 0) {
        iVar9 = 0;
      }
      else {
        FUN_1449c0562(&local_320);
        iVar9 = local_250;
      }
      local_340 = (ulonglong)local_310;
      uVar13 = local_340;
      uStack_338 = uStack_308;
      local_350 = (longlong ****)local_320;
      uStack_348 = uStack_318;
      local_358 = (longlong ****)&local_278;
      local_340._4_4_ = (int)((ulonglong)local_310 >> 0x20);
      iVar7 = local_340._4_4_;
      if ((local_340._4_4_ != iVar9) || (local_340 = uVar13, uStack_318 != &local_268)) {
        do {
          local_340 = uVar13;
          uVar8 = *(uint *)((longlong)*local_358 + (longlong)iVar7 * 0xc);
          local_320 = (longlong ***)CONCAT44(local_320._4_4_,uVar8);
          if ((-1 < (int)uVar8) &&
             ((int)uVar8 < (int)plVar3[4] * 0x200 + *(int *)((longlong)plVar3 + 0x24))) {
            uVar13 = (ulonglong)(uVar8 & 0x1ff);
            if ((ushort)(*(short *)(*(longlong *)(plVar3[5] + (ulonglong)(uVar8 >> 9) * 8) +
                                   uVar13 * 2) - 1U) < 0xfffe) {
              cVar6 = FUN_146bfed03(&local_2f8);
              if (cVar6 != '\0') {
                lVar14 = *(longlong *)(plVar3[2] + (ulonglong)(uVar8 >> 9) * 8);
                *(double *)(lVar14 + 0x10 + uVar13 * 0x18) = local_2e8;
                puVar1 = (undefined4 *)(lVar14 + uVar13 * 0x18);
                *puVar1 = (undefined4)local_2f8;
                puVar1[1] = local_2f8._4_4_;
                puVar1[2] = (undefined4)uStack_2f0;
                puVar1[3] = uStack_2f0._4_4_;
                if ((char)plVar3[0x42] == '\x01') {
                  LOCK();
                  *(int *)((longlong)plVar3 + 0x214) = *(int *)((longlong)plVar3 + 0x214) + 1;
                  UNLOCK();
                }
              }
              FUN_1447cbafe(&local_188,&local_288,&local_320,0);
            }
          }
          local_340 = CONCAT44(local_340._4_4_,(uint)local_340 & ~local_350._4_4_);
          FUN_1449c0562(&local_350);
          iVar7 = local_340._4_4_;
          uVar13 = local_340;
        } while ((longlong *****)local_358 != &local_278 ||
                 (uStack_348 != &local_268 || local_340._4_4_ != iVar9));
      }
      local_230 = 0;
      if (local_238 != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(&local_278);
      pppplVar16 = pppplVar16 + 10;
    } while (pppplVar16 != (longlong ****)local_368);
    if ((local_391 & 1) == 0) {
      plVar11 = (longlong *)(**(code **)(*local_390 + 0x2c8))();
      (**(code **)(*plVar11 + 0x340))(plVar11,&DAT_14cbf3af8,3);
    }
  }
  FUN_1458d302c(&local_278);
  FUN_146c2caf6(local_380,&local_360);
  FUN_148f6ca5e(local_390,&DAT_14cbf3b08,&local_360,&local_278);
  FUN_1456c3cc8(&local_278);
  FUN_1458d302c(&local_278);
  local_320 = (longlong ***)0x100000000;
  local_310._0_4_ = 0xffffffff;
  local_310._4_4_ = 0;
  uStack_308 = uStack_308 & 0xffffffff00000000;
  uStack_318 = (longlong ****)&local_178;
  if (local_160 != 0) {
    FUN_1449c0562(&local_320);
    local_388 = (ulonglong)local_160;
  }
  local_340._0_4_ = (uint)local_310;
  local_340._4_4_ = local_310._4_4_;
  uStack_338 = uStack_308;
  local_350 = (longlong ****)local_320;
  uStack_348 = uStack_318;
  local_358 = (longlong ****)&local_188;
  if ((local_310._4_4_ != (int)local_388) || (uStack_318 != (longlong ****)&local_178)) {
    do {
      uVar8 = *(uint *)((longlong)*local_358 + (longlong)local_340._4_4_ * 0xc);
      if (((-1 < (int)uVar8) &&
          ((int)uVar8 < (int)plVar3[4] * 0x200 + *(int *)((longlong)plVar3 + 0x24))) &&
         ((ushort)(*(short *)(*(longlong *)(plVar3[5] + (ulonglong)(uVar8 >> 9) * 8) +
                             (ulonglong)(uVar8 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        iVar9 = FUN_1482abbb8(local_390[0x4f]);
        local_320 = (longlong ***)CONCAT44(local_320._4_4_,iVar9);
        if (iVar9 != -1) {
          FUN_1447cbafe(local_228,&local_2f8,&local_320,0);
        }
      }
      local_340._0_4_ = (uint)local_340 & ~local_350._4_4_;
      FUN_1449c0562(&local_350);
    } while (local_358 != (longlong ****)&local_188 ||
             (uStack_348 != (longlong ****)&local_178 || local_340._4_4_ != (int)local_388));
  }
  if (((local_220 != local_1f4) || (local_1d0 != local_1a4)) || ((int)uStack_270 != local_244)) {
    FUN_1485316d6(local_390[0x54],&local_278,1);
  }
  FUN_1456c3cc8(&local_278);
  local_140 = 0;
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_188);
  if (local_2c8 != 0) {
    FUN_1400020a8();
  }
  local_f0 = 0;
  if (local_f8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_138);
  FUN_140f35b7a(local_2b8,uStack_2b0 & 0xffffffff);
  if ((longlong ****)local_2b8 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_e8);
  if ((local_90 ^ (ulonglong)auStack_3c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f6e68c FUN_148f6e68c body=181 status=ok
// SIG undefined FUN_148f6e68c(void)

void FUN_148f6e68c(undefined8 *param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 *local_58;
  undefined8 **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *param_2;
  lVar1 = param_2[1];
  if ((longlong)(int)lVar1 != 0) {
    lVar3 = 0;
    local_70 = param_2;
    do {
      local_58 = &LAB_1482fe864;
      local_68 = param_1;
      local_60 = param_3;
      local_50 = &local_68;
      FUN_146c03fd0(*param_1,*(undefined4 *)(lVar2 + lVar3),&local_58);
      lVar3 = lVar3 + 4;
    } while ((longlong)(int)lVar1 * 4 != lVar3);
    lVar2 = *local_70;
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f6e742 FUN_148f6e742 body=562 status=ok
// SIG undefined FUN_148f6e742(void)

undefined8 FUN_148f6e742(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = param_1 + 0x5a0;
  iVar10 = *(int *)(param_1 + 0x5ac);
  FUN_145cbfd4b(*(undefined8 *)(param_1 + 0x5a0),*(undefined4 *)(param_1 + 0x5a8));
  *(undefined4 *)(param_1 + 0x5a8) = 0;
  if ((iVar10 < 0) && (*(int *)(param_1 + 0x5ac) != 0)) {
    FUN_148f79ffa(lVar1,0);
  }
  lVar6 = *(longlong *)(param_1 + 0x2a0);
  iVar10 = *(int *)(lVar6 + 0x438) - *(int *)(lVar6 + 0x464);
  if (iVar10 == 0) {
    uVar9 = 0;
  }
  else {
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar10);
    }
    if (*(int *)(param_1 + 0x5ac) < iVar10) {
      FUN_148f79ffa(lVar1);
    }
    plVar2 = (longlong *)(lVar6 + 0x430);
    lVar3 = lVar6 + 0x440;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    local_98 = lVar1;
    uStack_60 = lVar3;
    if (*(int *)(lVar6 + 0x458) == 0) {
      uVar11 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar11 = *(uint *)(lVar6 + 0x458);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar9 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
    uVar8 = (ulonglong)local_78._4_4_;
    bVar12 = local_78._4_4_ != uVar11;
    local_90 = plVar2;
    local_78 = uVar9;
    if ((bVar12) || (uStack_60 != lVar3)) {
      do {
        uVar5 = *(undefined4 *)(*local_90 + (longlong)(int)uVar8 * 0xc);
        local_68 = CONCAT44(local_68._4_4_,uVar5);
        cVar7 = (*(code *)*param_2)(param_2[1]);
        if (cVar7 != '\0') {
          iVar10 = *(int *)(param_1 + 0x5a8);
          *(uint *)(param_1 + 0x5a8) = iVar10 + 1U;
          if (*(uint *)(param_1 + 0x5ac) < iVar10 + 1U) {
            FUN_148f7a06a(local_98,iVar10);
          }
          puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x5a0) + (longlong)iVar10 * 0x18);
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          *(undefined4 *)puVar4 = uVar5;
          uVar9 = FUN_1482abdf2(*(undefined8 *)(param_1 + 0x278),uVar5);
          FUN_14054c6c4(puVar4 + 1,uVar9);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        uVar8 = (ulonglong)local_78._4_4_;
        bVar12 = local_78._4_4_ != uVar11;
      } while (local_90 != plVar2 || (CONCAT44(uStack_7c,uStack_80) != lVar3 || bVar12));
    }
    uVar9 = CONCAT71((int7)(uVar8 >> 8),0 < *(int *)(param_1 + 0x5a8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 148f6e976 FUN_148f6e976 body=196 status=ok
// SIG undefined FUN_148f6e976(void)

void FUN_148f6e976(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(int *)(param_1 + 0x9c) = (int)param_1[0x9c] + 1;
  lVar1 = (**(code **)(*param_1 + 0x2c8))();
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,param_2);
  lVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_30 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  lVar1 = param_1[0x9c];
  *local_30 = &PTR_LAB_14ba270e0;
  *(undefined1 *)(local_30 + 1) = 0;
  *(int *)((longlong)local_30 + 0xc) = (int)lVar1;
  (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x20))(lVar2 + 0x28,param_1,&local_30,param_2);
  lVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x18))(lVar1 + 0x28);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f6ea8e FUN_148f6ea8e body=362 status=ok
// SIG undefined FUN_148f6ea8e(void)

undefined8 FUN_148f6ea8e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x130) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x170);
    if ((lVar1 == 0) ||
       (((*(int *)(lVar1 + 1000) == *(int *)(lVar1 + 0x414) &&
         (*(int *)(lVar1 + 0x438) == *(int *)(lVar1 + 0x464))) &&
        (*(int *)(lVar1 + 0x398) == *(int *)(lVar1 + 0x3c4))))) {
      uVar2 = 0;
      goto LAB_148f6ebc8;
    }
    FUN_148531782();
    FUN_14853173e(*(undefined8 *)(param_1 + 0x170));
    lVar1 = (**(code **)(*(longlong *)(param_1 + -0x130) + 0x2c8))(param_1 + -0x130);
    local_48 = L"ClearSelection";
    local_40 = 0xe;
    FUN_1446e940c(local_4c,&local_48);
    local_48 = L"UEditMeshPolygonsTool";
    local_40 = 0x15;
    FUN_1446e940c(local_50,&local_48);
    FUN_140208bae(&local_48,local_50,local_4c,L"Clear Selection");
    FUN_1485323bc(*(undefined8 *)(param_1 + 0x170),local_58);
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x20))
              (lVar1 + 0x28,*(undefined8 *)(param_1 + 0x170),local_58,&local_48);
    if (local_48 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_48 + 0x10))();
    }
  }
  else {
    FUN_148f6ba5e(param_1 + -0x130,2);
  }
  uVar2 = 1;
LAB_148f6ebc8:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f6ec12 FUN_148f6ec12 body=45 status=ok
// SIG undefined FUN_148f6ec12(void)

bool FUN_148f6ec12(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x130);
  if (lVar1 != 0) {
    FUN_148f6ba5e(param_1 + -0x130,1);
  }
  return lVar1 != 0;
}



// FUNCTION 148f6ec40 FUN_148f6ec40 body=208 status=ok
// SIG undefined FUN_148f6ec40(void)

void FUN_148f6ec40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145b9b244();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_148f6ec74;
  }
  param_2 = 0;
LAB_148f6ec74:
  FUN_146c2a5c4(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_2 + 0x268),0);
  FUN_14851bbe8(*(undefined8 *)(*(longlong *)(param_2 + 0x140) + 0x58),
                *(undefined8 *)(param_2 + 0x268),1,0xf);
  *(undefined1 *)(param_2 + 0x4d1) = 1;
  lVar1 = *(longlong *)(param_2 + 0x2a0);
  FUN_14852f8ce(lVar1);
  *(undefined1 *)(*(longlong *)(lVar1 + 0x80) + 0xb1) = 0;
  *(int *)(param_2 + 0x8b8) = *(int *)(param_2 + 0x8b8) + 1;
  (**(code **)(**(longlong **)(param_2 + 0x278) + 0x10))
            (*(longlong **)(param_2 + 0x278),param_1 + 0x58);
  FUN_14852f91c(*(undefined8 *)(param_2 + 0x2a0),1);
  FUN_140898514(*(longlong *)(param_2 + 0x298) + 0x100,1);
  return;
}



// FUNCTION 148f6ed10 FUN_148f6ed10 body=208 status=ok
// SIG undefined FUN_148f6ed10(void)

void FUN_148f6ed10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145b9b244();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_148f6ed44;
  }
  param_2 = 0;
LAB_148f6ed44:
  FUN_146c2a5c4(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_2 + 0x268),1);
  FUN_14851bbe8(*(undefined8 *)(*(longlong *)(param_2 + 0x140) + 0x58),
                *(undefined8 *)(param_2 + 0x268),1,0xf);
  *(undefined1 *)(param_2 + 0x4d1) = 1;
  lVar1 = *(longlong *)(param_2 + 0x2a0);
  FUN_14852f8ce(lVar1);
  *(undefined1 *)(*(longlong *)(lVar1 + 0x80) + 0xb1) = 0;
  *(int *)(param_2 + 0x8b8) = *(int *)(param_2 + 0x8b8) + 1;
  (**(code **)(**(longlong **)(param_2 + 0x278) + 0x10))
            (*(longlong **)(param_2 + 0x278),param_1 + 8);
  FUN_14852f91c(*(undefined8 *)(param_2 + 0x2a0),1);
  FUN_140898514(*(longlong *)(param_2 + 0x298) + 0x100,1);
  return;
}



// FUNCTION 148f6ede0 FUN_148f6ede0 body=32 status=ok
// SIG undefined FUN_148f6ede0(void)

undefined8 FUN_148f6ede0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FEditMeshPolygonsToolMeshChange");
  return param_2;
}



// FUNCTION 148f6ee00 FUN_148f6ee00 body=72 status=ok
// SIG undefined FUN_148f6ee00(void)

void FUN_148f6ee00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145b9b244();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_148f6ee33;
  }
  param_2 = 0;
LAB_148f6ee33:
  FUN_148f6ba5e(param_2,2);
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



// FUNCTION 148f6ee48 FUN_148f6ee48 body=80 status=ok
// SIG undefined FUN_148f6ee48(void)

bool FUN_148f6ee48(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 8) != '\0') {
    return true;
  }
  if (param_2 != 0) {
    lVar1 = FUN_145b9b244();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_148f6ee63;
  }
  param_2 = 0;
LAB_148f6ee63:
  return *(int *)(param_2 + 0x4e0) != *(int *)(param_1 + 0xc);
}



// FUNCTION 148f6ee98 FUN_148f6ee98 body=32 status=ok
// SIG undefined FUN_148f6ee98(void)

undefined8 FUN_148f6ee98(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FPolyEditActivityStartChange");
  return param_2;
}



// FUNCTION 148f6eebb FUN_148f6eebb body=4081 status=ok
// SIG undefined FUN_148f6eebb(void)

undefined8 *
FUN_148f6eebb(undefined8 *param_1,undefined8 *param_2,double *param_3,double *param_4,
             double *param_5,double *param_6,double param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  uint uVar22;
  undefined1 auStack_1c8 [32];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  dVar13 = *param_6;
  dVar1 = param_6[1];
  dVar2 = param_6[2];
  dVar3 = *param_4;
  if ((((dVar13 != 0.0) || (NAN(dVar13))) || (dVar1 != 0.0)) ||
     (((NAN(dVar1) || (dVar2 != 0.0)) || (NAN(dVar2))))) {
    dVar4 = param_4[1];
    dVar5 = param_4[2];
    if (((dVar3 != 0.0) || (NAN(dVar3))) ||
       ((dVar4 != 0.0 || (((NAN(dVar4) || (dVar5 != 0.0)) || (NAN(dVar5))))))) {
      local_178 = *param_3;
      local_188 = param_3[1];
      local_190 = param_3[2];
      dVar14 = *param_5;
      dVar15 = param_5[1];
      dVar18 = param_5[2];
      uStack_1a0 = 0;
      uStack_170 = 0;
      uStack_180 = 0;
      if (local_190 != 0.0 || (local_188 != 0.0 || local_178 != 0.0)) {
        dVar6 = local_188;
        dVar7 = local_190;
        dVar19 = local_178;
        if (dVar18 == 0.0 && (dVar14 == 0.0 && dVar15 == 0.0)) {
          dVar18 = local_178 * dVar4 - dVar3 * local_188;
          dVar14 = local_190 * dVar3 - dVar5 * local_178;
          dVar15 = local_188 * dVar5 - dVar4 * local_190;
          dVar16 = dVar13 * dVar14 - dVar15 * dVar1;
          dVar21 = dVar2 * dVar15 - dVar18 * dVar13;
          dVar17 = dVar1 * dVar18 - dVar14 * dVar2;
          dVar20 = dVar16 * dVar16 + dVar17 * dVar17 + dVar21 * dVar21;
          dVar15 = local_188;
          dVar18 = local_190;
          dVar14 = local_178;
          if (9.99999993922529e-09 < dVar20) {
            dVar14 = 1.0 / SQRT(dVar20);
            dVar15 = dVar21 * dVar14;
            dVar18 = dVar16 * dVar14;
            dVar14 = dVar17 * dVar14;
          }
        }
      }
      else if (dVar18 != 0.0 || (dVar14 != 0.0 || dVar15 != 0.0)) {
        dVar6 = dVar14 * dVar1 - dVar13 * dVar15;
        dVar7 = dVar18 * dVar13 - dVar2 * dVar14;
        dVar19 = dVar15 * dVar2 - dVar1 * dVar18;
        dVar16 = dVar3 * dVar7 - dVar19 * dVar4;
        dVar17 = dVar5 * dVar19 - dVar6 * dVar3;
        dVar21 = dVar4 * dVar6 - dVar7 * dVar5;
        dVar20 = dVar16 * dVar16 + dVar21 * dVar21 + dVar17 * dVar17;
        dVar6 = dVar15;
        dVar7 = dVar18;
        dVar19 = dVar14;
        if (9.99999993922529e-09 < dVar20) {
          dVar19 = 1.0 / SQRT(dVar20);
          dVar6 = dVar17 * dVar19;
          dVar7 = dVar16 * dVar19;
          dVar19 = dVar21 * dVar19;
        }
      }
      else {
        dVar16 = dVar3 * dVar1 - dVar13 * dVar4;
        dVar17 = dVar5 * dVar13 - dVar2 * dVar3;
        dVar15 = dVar4 * dVar2 - dVar1 * dVar5;
        dVar14 = dVar16 * dVar16 + dVar15 * dVar15 + dVar17 * dVar17;
        if (9.99999993922529e-09 < dVar14) {
          dVar14 = 1.0 / SQRT(dVar14);
          dVar15 = dVar15 * dVar14;
          dVar17 = dVar17 * dVar14;
          dVar16 = dVar16 * dVar14;
        }
        if (((dVar15 == 0.0) && (!NAN(dVar15))) &&
           (((dVar17 == 0.0 && ((!NAN(dVar17) && (dVar16 == 0.0)))) && (!NAN(dVar16))))) {
          dVar16 = dVar3 * DAT_14c846390 + DAT_14c846388 * -dVar4;
          dVar17 = DAT_14c846398 * -dVar3 + dVar5 * DAT_14c846388;
          dVar15 = DAT_14c846390 * -dVar5 + dVar4 * DAT_14c846398;
          if ((dVar17 == 0.0 && dVar15 == 0.0) && dVar16 == 0.0) {
            dVar15 = (double)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
            dVar17 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
            dVar16 = DAT_14c8463c8;
          }
        }
        dVar7 = dVar3 * dVar17 + -dVar4 * dVar15;
        dVar6 = dVar5 * dVar15 + -dVar3 * dVar16;
        dVar19 = dVar4 * dVar16 + -dVar5 * dVar17;
        dVar14 = dVar7 * dVar7 + dVar19 * dVar19 + dVar6 * dVar6;
        if (9.99999993922529e-09 < dVar14) {
          dVar14 = 1.0 / SQRT(dVar14);
          dVar19 = dVar19 * dVar14;
          dVar6 = dVar6 * dVar14;
          dVar7 = dVar7 * dVar14;
        }
        dVar18 = dVar13 * dVar17 - dVar15 * dVar1;
        dVar15 = dVar2 * dVar15 - dVar16 * dVar13;
        dVar14 = dVar1 * dVar16 - dVar17 * dVar2;
        dVar17 = dVar18 * dVar18 + dVar14 * dVar14 + dVar15 * dVar15;
        if (9.99999993922529e-09 < dVar17) {
          dVar17 = 1.0 / SQRT(dVar17);
          dVar15 = dVar15 * dVar17;
          dVar18 = dVar18 * dVar17;
          dVar14 = dVar14 * dVar17;
        }
      }
      dVar21 = (dVar14 * dVar1 - dVar13 * dVar15) + (dVar19 * dVar4 - dVar3 * dVar6);
      dVar16 = (dVar18 * dVar13 - dVar2 * dVar14) + (dVar7 * dVar3 - dVar5 * dVar19);
      local_148 = (dVar15 * dVar2 - dVar1 * dVar18) + (dVar6 * dVar5 - dVar4 * dVar7);
      dVar17 = dVar21 * dVar21 + local_148 * local_148 + dVar16 * dVar16;
      if (9.99999993922529e-09 < dVar17) {
        dVar17 = 1.0 / SQRT(dVar17);
        local_148 = local_148 * dVar17;
        dVar16 = dVar16 * dVar17;
        dVar21 = dVar21 * dVar17;
      }
      local_1a8 = dVar5;
      if (((((local_148 != 0.0) || (NAN(local_148))) || (dVar16 != 0.0)) ||
          ((NAN(dVar16) || (dVar21 != 0.0)))) || (NAN(dVar21))) {
        dVar18 = dVar18 + dVar7;
        dVar15 = dVar15 + dVar6;
        dVar14 = dVar14 + dVar19;
        if ((dVar15 == 0.0 && dVar14 == 0.0) && dVar18 == 0.0) {
          dVar18 = dVar5 - dVar2;
          dVar15 = dVar4 - dVar1;
          dVar14 = dVar3 - dVar13;
        }
        uVar9 = SUB84(param_7,0);
        uVar22 = (uint)((ulonglong)param_7 >> 0x20);
        local_110 = dVar14 * dVar16 - local_148 * dVar15;
        local_128 = dVar18 * local_148 - dVar21 * dVar14;
        uStack_140 = dVar15 * dVar21 - dVar16 * dVar18;
        dVar13 = local_110 * local_110 + uStack_140 * uStack_140 + local_128 * local_128;
        if (9.99999993922529e-09 < dVar13) {
          dVar13 = 1.0 / SQRT(dVar13);
          uStack_140 = uStack_140 * dVar13;
          local_128 = local_128 * dVar13;
          local_110 = local_110 * dVar13;
        }
        local_108 = local_148 * local_128 - uStack_140 * dVar16;
        local_120 = dVar21 * uStack_140 - local_110 * local_148;
        local_138 = dVar16 * local_110 - local_128 * dVar21;
        local_158 = param_2[2];
        local_168 = *param_2;
        uStack_160 = param_2[1];
        local_f8 = 0;
        uStack_f0 = 0;
        local_e8 = 0;
        uStack_e0 = 0x3ff0000000000000;
        local_150 = param_2;
        local_130 = dVar16;
        local_118 = dVar21;
        FUN_146bfbbda(&local_f8);
        param_1[2] = local_158;
        *param_1 = local_168;
        param_1[1] = uStack_160;
        *(undefined4 *)(param_1 + 3) = (undefined4)local_f8;
        *(undefined4 *)((longlong)param_1 + 0x1c) = local_f8._4_4_;
        *(undefined4 *)(param_1 + 4) = (undefined4)uStack_f0;
        *(undefined4 *)((longlong)param_1 + 0x24) = uStack_f0._4_4_;
        param_1[5] = local_e8;
        param_1[6] = uStack_e0;
        *(undefined1 *)(param_1 + 10) = 0;
        param_1[0xb] = 0x3ff0000000000000;
        if (1.0 < param_7) {
          dVar13 = param_4[2];
          dVar1 = param_6[2];
          local_138 = dVar13 - dVar1;
          dVar2 = *param_4;
          dVar3 = param_4[1];
          dVar4 = *param_6;
          dVar5 = param_6[1];
          uStack_140 = dVar3 - dVar5;
          local_148 = dVar2 - dVar4;
          dVar14 = local_138 * local_138 + local_148 * local_148 + uStack_140 * uStack_140;
          if (9.99999993922529e-09 < dVar14) {
            dVar14 = 1.0 / SQRT(dVar14);
            local_148 = local_148 * dVar14;
            uStack_140 = uStack_140 * dVar14;
            local_138 = local_138 * dVar14;
          }
          if (((local_148 != 0.0) || (NAN(local_148))) ||
             ((uStack_140 != 0.0 || (((NAN(uStack_140) || (local_138 != 0.0)) || (NAN(local_138)))))
             )) {
            dVar18 = dVar2 * dVar5 - dVar4 * dVar3;
            dVar6 = dVar13 * dVar4 - dVar1 * dVar2;
            dVar15 = dVar3 * dVar1 - dVar5 * dVar13;
            dVar14 = dVar2 * dVar6 - dVar15 * dVar3;
            dVar15 = dVar13 * dVar15 - dVar18 * dVar2;
            dVar18 = dVar3 * dVar18 - dVar6 * dVar13;
            dVar6 = dVar14 * dVar14 + dVar18 * dVar18 + dVar15 * dVar15;
            if (9.99999993922529e-09 < dVar6) {
              dVar6 = 1.0 / SQRT(dVar6);
              dVar18 = dVar18 * dVar6;
              dVar15 = dVar15 * dVar6;
              dVar14 = dVar14 * dVar6;
            }
            dVar14 = local_138 * dVar14 + local_148 * dVar18 + uStack_140 * dVar15;
            if ((dVar14 != 0.0) || (NAN(dVar14))) {
              FUN_146bf2028(param_1 + 3,&local_f8,&local_148);
              if (&local_f8 != param_1 + 7) {
                param_1[9] = local_e8;
                param_1[7] = local_f8;
                param_1[8] = uStack_f0;
                *(undefined1 *)(param_1 + 10) = 1;
              }
              dVar13 = 1.0 / ABS(dVar14);
              if (param_7 <= 1.0 / ABS(dVar14)) {
                dVar13 = param_7;
              }
              uVar9 = SUB84(dVar13,0);
            }
            else {
              if (0.0 <= dVar13 * dVar1 + dVar2 * dVar4 + dVar3 * dVar5) goto LAB_148f6f98a;
              FUN_146bf2028(param_1 + 3,&local_f8,&local_148);
              dVar13 = (double)((ulonglong)uVar22 << 0x20);
              if (&local_f8 != param_1 + 7) {
                param_1[9] = local_e8;
                dVar13 = (double)CONCAT44(uVar22,(undefined4)local_f8);
                *(undefined4 *)(param_1 + 7) = (undefined4)local_f8;
                *(undefined4 *)((longlong)param_1 + 0x3c) = local_f8._4_4_;
                *(undefined4 *)(param_1 + 8) = (undefined4)uStack_f0;
                *(undefined4 *)((longlong)param_1 + 0x44) = uStack_f0._4_4_;
                *(undefined1 *)(param_1 + 10) = 1;
              }
            }
            param_1[0xb] = CONCAT44((int)((ulonglong)dVar13 >> 0x20),uVar9);
          }
        }
        goto LAB_148f6f98a;
      }
      if (local_190 != 0.0 || (local_188 != 0.0 || local_178 != 0.0)) goto LAB_148f6f958;
      local_138 = local_178 * DAT_14c846390 - DAT_14c846388 * local_188;
      uStack_140 = local_190 * DAT_14c846388 - DAT_14c846398 * local_178;
      local_148 = local_188 * DAT_14c846398 - DAT_14c846390 * local_190;
      param_6 = param_4;
      if (((local_148 != 0.0) || (NAN(local_148))) ||
         ((uStack_140 != 0.0 || (((NAN(uStack_140) || (local_138 != 0.0)) || (NAN(local_138)))))))
      goto LAB_148f6f985;
LAB_148f6f53e:
      local_138 = DAT_14c8463c8;
      uVar9 = (undefined4)DAT_14c8463b8;
      uVar10 = DAT_14c8463b8._4_4_;
      uVar11 = (undefined4)DAT_14c8463c0;
      uVar12 = DAT_14c8463c0._4_4_;
      goto LAB_148f6f969;
    }
    if (((*param_5 != 0.0) || (NAN(*param_5))) ||
       ((param_5[1] != 0.0 || (((NAN(param_5[1]) || (param_5[2] != 0.0)) || (NAN(param_5[2]))))))) {
      local_138 = param_5[2];
      uVar9 = *(undefined4 *)param_5;
      uVar10 = *(undefined4 *)((longlong)param_5 + 4);
      uVar11 = *(undefined4 *)(param_5 + 1);
      uVar12 = *(undefined4 *)((longlong)param_5 + 0xc);
LAB_148f6f644:
      local_148 = (double)CONCAT44(uVar10,uVar9);
      uStack_140 = (double)CONCAT44(uVar12,uVar11);
    }
    else {
      local_138 = dVar13 * DAT_14c846390 - DAT_14c846388 * dVar1;
      uStack_140 = dVar2 * DAT_14c846388 - DAT_14c846398 * dVar13;
      local_148 = dVar1 * DAT_14c846398 - DAT_14c846390 * dVar2;
      if (((((local_148 == 0.0) && (!NAN(local_148))) && (uStack_140 == 0.0)) &&
          ((!NAN(uStack_140) && (local_138 == 0.0)))) && (!NAN(local_138))) {
        local_138 = DAT_14c8463c8;
        uVar9 = (undefined4)DAT_14c8463b8;
        uVar10 = DAT_14c8463b8._4_4_;
        uVar11 = (undefined4)DAT_14c8463c0;
        uVar12 = DAT_14c8463c0._4_4_;
        goto LAB_148f6f644;
      }
    }
  }
  else {
    if (((dVar3 == 0.0) && (!NAN(dVar3))) &&
       ((param_4[1] == 0.0 && (((!NAN(param_4[1]) && (param_4[2] == 0.0)) && (!NAN(param_4[2])))))))
    {
      param_1[2] = param_2[2];
      uVar8 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar8;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0x3ff0000000000000;
      *(undefined1 *)(param_1 + 10) = 0;
      param_1[0xb] = 0x3ff0000000000000;
      goto LAB_148f6f98a;
    }
    dVar13 = *param_3;
    if ((dVar13 == 0.0) && (!NAN(dVar13))) {
      dVar1 = param_3[1];
      if ((dVar1 == 0.0) && (!NAN(dVar1))) {
        dVar2 = param_3[2];
        if ((dVar2 == 0.0) && (!NAN(dVar2))) {
          local_138 = dVar13 * DAT_14c846390 - DAT_14c846388 * dVar1;
          uStack_140 = dVar2 * DAT_14c846388 - DAT_14c846398 * dVar13;
          local_148 = dVar1 * DAT_14c846398 - DAT_14c846390 * dVar2;
          param_6 = param_4;
          if ((((local_148 == 0.0) && (!NAN(local_148))) && (uStack_140 == 0.0)) &&
             (((!NAN(uStack_140) && (local_138 == 0.0)) && (!NAN(local_138))))) goto LAB_148f6f53e;
          goto LAB_148f6f985;
        }
      }
    }
LAB_148f6f958:
    local_138 = param_3[2];
    uVar9 = *(undefined4 *)param_3;
    uVar10 = *(undefined4 *)((longlong)param_3 + 4);
    uVar11 = *(undefined4 *)(param_3 + 1);
    uVar12 = *(undefined4 *)((longlong)param_3 + 0xc);
LAB_148f6f969:
    local_148 = (double)CONCAT44(uVar10,uVar9);
    uStack_140 = (double)CONCAT44(uVar12,uVar11);
    param_6 = param_4;
  }
LAB_148f6f985:
  local_150 = param_2;
  FUN_144367d0e(&local_150,param_1,&local_148,param_6);
LAB_148f6f98a:
  if ((local_d0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148f6fead FUN_148f6fead body=603 status=ok
// SIG undefined FUN_148f6fead(void)

int FUN_148f6fead(longlong param_1,int param_2,uint param_3,undefined8 param_4,longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  double *pdVar7;
  double *pdVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_d8 [36];
  int local_b4;
  undefined8 local_b0;
  longlong local_a8;
  double local_a0;
  double local_98;
  double local_90;
  uint local_88;
  uint local_84;
  double local_80;
  double local_78;
  double local_70;
  uint local_68;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_146c13626(param_1,&local_68,param_2);
  lVar9 = *param_5;
  local_b4 = -1;
  if (local_68 == param_3 || local_64 == param_3) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(local_64 >> 9) * 8);
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(local_68 >> 9) * 8);
    uVar6 = (ulonglong)(local_64 & 0x1ff);
    uVar5 = (ulonglong)(local_68 & 0x1ff);
    local_70 = *(double *)(lVar2 + 0x10 + uVar6 * 0x18) - *(double *)(lVar10 + 0x10 + uVar5 * 0x18);
    local_78 = *(double *)(lVar2 + 8 + uVar6 * 0x18) - *(double *)(lVar10 + 8 + uVar5 * 0x18);
    local_80 = *(double *)(lVar2 + uVar6 * 0x18) - *(double *)(lVar10 + uVar5 * 0x18);
    lVar2 = param_5[1];
    local_a8 = param_1;
    if ((longlong)(int)lVar2 == 0) {
      local_b4 = -1;
    }
    else {
      local_b4 = -1;
      uVar12 = 0xffffffff;
      uVar13 = 0xffefffff;
      lVar10 = 0;
      local_b0 = param_4;
      do {
        iVar1 = *(int *)(lVar9 + lVar10);
        if (iVar1 != param_2) {
          FUN_146c13626(local_a8,&local_88,iVar1);
          if ((local_64 == param_3) != (local_84 == param_3) &&
              (local_88 == param_3 || local_84 == param_3)) {
            uVar5 = (ulonglong)(local_84 & 0x1ff);
            uVar6 = (ulonglong)(local_88 & 0x1ff);
            lVar3 = *(longlong *)(*(longlong *)(local_a8 + 0x10) + (ulonglong)(local_84 >> 9) * 8);
            lVar4 = *(longlong *)(*(longlong *)(local_a8 + 0x10) + (ulonglong)(local_88 >> 9) * 8);
            local_90 = *(double *)(lVar3 + 0x10 + uVar5 * 0x18) -
                       *(double *)(lVar4 + 0x10 + uVar6 * 0x18);
            local_98 = *(double *)(lVar3 + 8 + uVar5 * 0x18) - *(double *)(lVar4 + 8 + uVar6 * 0x18)
            ;
            local_a0 = *(double *)(lVar3 + uVar5 * 0x18) - *(double *)(lVar4 + uVar6 * 0x18);
            if (local_64 == param_3) {
              pdVar7 = &local_80;
              pdVar8 = &local_a0;
            }
            else {
              pdVar7 = &local_a0;
              pdVar8 = &local_80;
            }
            dVar11 = (double)FUN_146c6a283(pdVar7,pdVar8,local_b0);
            if ((double)CONCAT44(uVar13,uVar12) <= dVar11 &&
                dVar11 != (double)CONCAT44(uVar13,uVar12)) {
              local_b4 = iVar1;
            }
            if (dVar11 <= (double)CONCAT44(uVar13,uVar12)) {
              dVar11 = (double)CONCAT44(uVar13,uVar12);
            }
            uVar12 = SUB84(dVar11,0);
            uVar13 = (undefined4)((ulonglong)dVar11 >> 0x20);
          }
        }
        lVar10 = lVar10 + 4;
      } while ((longlong)(int)lVar2 * 4 != lVar10);
      lVar9 = *param_5;
    }
  }
  if (lVar9 != 0) {
    FUN_1400020a8(lVar9);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return local_b4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f7010a FUN_148f7010a body=119 status=ok
// SIG undefined FUN_148f7010a(void)

void FUN_148f7010a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_14ba20f08;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 1;
  param_1[8] = 0;
  param_1[10] = &PTR_LAB_14ba271e0;
  param_1[0xb] = param_1;
  param_1[6] = FUN_148f7a22c;
  param_1[0xe] = 0x3ff0000000000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0xffffffff00000000;
  param_1[0x11] = 0x3ff0000000000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return;
}



// FUNCTION 148f70182 FUN_148f70182 body=3330 status=ok
// SIG undefined FUN_148f70182(void)

ulonglong FUN_148f70182(longlong param_1,byte *param_2)

{
  double *pdVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  code *pcVar12;
  longlong lVar13;
  longlong lVar14;
  byte bVar15;
  char cVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  undefined8 uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong *plVar23;
  byte *pbVar24;
  undefined8 unaff_RBX;
  ulonglong uVar25;
  undefined1 *puVar26;
  longlong lVar27;
  longlong lVar28;
  undefined4 *puVar29;
  ulonglong uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined1 auStack_288 [32];
  longlong *local_268;
  undefined8 local_260;
  undefined8 local_258;
  ulonglong local_248;
  longlong *local_240;
  longlong local_238;
  longlong local_230;
  undefined1 *local_228;
  undefined1 *local_220;
  undefined8 local_218;
  double dStack_210;
  double local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  undefined4 *local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1ac [4];
  undefined8 local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  char local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  lVar21 = *(longlong *)(param_1 + 8);
  if ((lVar21 == 0) || (*(longlong *)(param_1 + 0x30) == 0)) goto LAB_148f70265;
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar22 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    goto LAB_148f70267;
  }
  if (param_2 != (byte *)0x0) {
    if (*param_2 == 0) {
      pcVar12 = *(code **)(param_2 + 0x70);
      pbVar24 = param_2 + 0x90;
      if (*(byte **)(param_2 + 0x80) != (byte *)0x0) {
        pbVar24 = *(byte **)(param_2 + 0x80);
      }
      uVar20 = (**(code **)(*(longlong *)pbVar24 + 8))();
      bVar15 = (*pcVar12)(uVar20);
      *param_2 = bVar15;
      if (bVar15 == 0) {
        lVar21 = *(longlong *)(param_1 + 8);
        goto LAB_148f702fa;
      }
    }
LAB_148f70265:
    uVar22 = 0;
    goto LAB_148f70267;
  }
LAB_148f702fa:
  local_1c8 = (undefined4 *)0x0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_268 = &local_148;
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = (undefined1 *)0x0;
  local_100 = 0;
  FUN_148f70e86(lVar21,param_1 + 0x10,CONCAT71(0xffffffff000000,*(undefined1 *)(param_1 + 0x21)),
                &local_1c8);
  lVar21 = (longlong)(int)uStack_1c0;
  uVar22 = CONCAT71((int7)((ulonglong)&local_1c8 >> 8),1);
  if (lVar21 != 0) {
    if (param_2 == (byte *)0x0) {
LAB_148f703c4:
      puVar2 = local_1c8 + lVar21 * 3;
      puVar29 = local_1c8;
      do {
        uVar17 = FUN_146c08ff0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 8),*puVar29);
        uVar22 = uStack_1d0;
        lVar21 = (longlong)(int)uStack_1d0;
        uVar18 = (int)uStack_1d0 + 1;
        uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar18);
        if (uStack_1d0._4_4_ < uVar18) {
          FUN_1446f48e2(&local_1d8,uVar22 & 0xffffffff);
        }
        *(undefined4 *)(local_1d8 + lVar21 * 4) = uVar17;
        puVar29 = puVar29 + 3;
      } while (puVar29 != puVar2);
      if (param_2 == (byte *)0x0) {
LAB_148f70432:
        puVar2 = local_1c8;
        local_1e8 = 0;
        uStack_1e0 = 0;
        if (*(char *)(param_1 + 0x20) == '\x01') {
          lVar21 = (longlong)(int)uStack_1c0;
          if (lVar21 != 0) {
            lVar27 = 0;
            do {
              uVar22 = uStack_1e0;
              lVar28 = (longlong)(int)uStack_1e0;
              uVar18 = (int)uStack_1e0 + 1;
              uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar18);
              if (uStack_1e0._4_4_ < uVar18) {
                FUN_148f7a2ec(&local_1e8,uVar22 & 0xffffffff);
              }
              lVar28 = lVar28 * 0x60;
              local_268 = (longlong *)(local_1e8 + lVar28);
              puVar4 = (undefined8 *)(local_1e8 + 0x18 + lVar28);
              *puVar4 = 0;
              puVar4[1] = 0;
              *(undefined8 *)(local_1e8 + 0x28 + lVar28) = 0;
              *(undefined8 *)(local_1e8 + 0x30 + lVar28) = 0x3ff0000000000000;
              dVar35 = DAT_14c8464e8;
              dVar34 = DAT_14c8464e0;
              *(double *)(local_1e8 + 0x10 + lVar28) = DAT_14c8464f0;
              *(double *)(local_1e8 + lVar28) = dVar34;
              ((double *)(local_1e8 + lVar28))[1] = dVar35;
              *(undefined8 *)(local_1e8 + 0x30 + lVar28) = 0x3ff0000000000000;
              *(undefined1 *)(local_1e8 + 0x50 + lVar28) = 0;
              *(undefined8 *)(local_1e8 + 0x58 + lVar28) = 0x3ff0000000000000;
              local_260 = *(undefined8 *)(param_1 + 0x70);
              FUN_148f718d6(*(undefined8 *)(param_1 + 8),*(undefined4 *)((longlong)puVar2 + lVar27),
                            *(undefined4 *)((longlong)puVar2 + lVar27 + 4),
                            *(undefined4 *)((longlong)puVar2 + lVar27 + 8));
              lVar27 = lVar27 + 0xc;
            } while (lVar21 * 0xc != lVar27);
          }
          if (param_2 == (byte *)0x0) goto LAB_148f70535;
          if (*param_2 == 0) {
            pcVar12 = *(code **)(param_2 + 0x70);
            pbVar24 = param_2 + 0x90;
            if (*(byte **)(param_2 + 0x80) != (byte *)0x0) {
              pbVar24 = *(byte **)(param_2 + 0x80);
            }
            uVar20 = (**(code **)(*(longlong *)pbVar24 + 8))();
            bVar15 = (*pcVar12)(uVar20);
            *param_2 = bVar15;
            if (bVar15 == 0) goto LAB_148f70535;
          }
LAB_148f70b91:
          uVar22 = 0;
        }
        else {
LAB_148f70535:
          if (0 < (int)uStack_1d0) {
            local_240 = (longlong *)(param_1 + 0x50);
            lVar21 = 0;
            lVar27 = 0;
            do {
              uVar18 = *(uint *)(local_1d8 + lVar27 * 4);
              local_1ac = *(undefined1 (*) [4])((longlong)local_1c8 + lVar21);
              if (*(char *)(param_1 + 0x20) == '\x01') {
                pdVar1 = (double *)(local_1e8 + lVar21 * 8);
                local_1a8 = *pdVar1;
                dStack_1a0 = pdVar1[1];
                pdVar1 = (double *)(local_1e8 + 0x10 + lVar21 * 8);
                local_198 = *pdVar1;
                dStack_190 = pdVar1[1];
                puVar4 = (undefined8 *)(local_1e8 + 0x20 + lVar21 * 8);
                local_188 = *puVar4;
                uStack_180 = puVar4[1];
                local_178 = *(undefined8 *)(local_1e8 + 0x30 + lVar21 * 8);
                local_158 = *(char *)(local_1e8 + 0x50 + lVar21 * 8);
                if (local_158 == '\x01') {
                  local_160 = *(undefined8 *)(local_1e8 + 0x48 + lVar21 * 8);
                  puVar4 = (undefined8 *)(local_1e8 + 0x38 + lVar21 * 8);
                  local_170 = *puVar4;
                  uStack_168 = puVar4[1];
                }
                uVar20 = *(undefined8 *)(local_1e8 + 0x58 + lVar21 * 8);
                uVar17 = (int)uVar20;
                uVar33 = (int)((ulonglong)uVar20 >> 0x20);
              }
              else {
                local_198 = DAT_14c8464f0;
                local_1a8 = DAT_14c8464e0;
                dStack_1a0 = DAT_14c8464e8;
                dStack_190 = 0.0;
                local_188 = 0;
                uStack_180 = 0;
                local_178 = 0x3ff0000000000000;
                local_158 = '\0';
                uVar17 = 0;
                uVar33 = 0x3ff00000;
              }
              local_248 = *(ulonglong *)(param_1 + 8);
              local_150 = CONCAT44(uVar33,uVar17);
              uVar25 = (ulonglong)(uVar18 >> 9);
              lVar28 = *(longlong *)(*(longlong *)(local_248 + 0x10) + uVar25 * 8);
              uVar22 = (ulonglong)(uVar18 & 0x1ff);
              local_208 = *(double *)(lVar28 + 0x10 + uVar22 * 0x18);
              pdVar1 = (double *)(lVar28 + uVar22 * 0x18);
              local_218 = *pdVar1;
              dStack_210 = pdVar1[1];
              pcVar12 = *(code **)(param_1 + 0x30);
              plVar23 = *(longlong **)(param_1 + 0x40);
              if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
                plVar23 = local_240;
              }
              uVar20 = (**(code **)(*plVar23 + 8))();
              local_268 = (longlong *)local_1ac;
              (*pcVar12)(&local_200,uVar20,&local_218,&local_1a8);
              cVar16 = FUN_146bfed03(&local_200);
              if (cVar16 != '\0') {
                lVar28 = *(longlong *)(*(longlong *)(local_248 + 0x10) + uVar25 * 8);
                *(undefined8 *)(lVar28 + 0x10 + uVar22 * 0x18) = local_1f0;
                puVar2 = (undefined4 *)(lVar28 + uVar22 * 0x18);
                *puVar2 = local_200;
                puVar2[1] = uStack_1fc;
                puVar2[2] = uStack_1f8;
                puVar2[3] = uStack_1f4;
                if (*(char *)(local_248 + 0x210) == '\x01') {
                  LOCK();
                  *(int *)(local_248 + 0x214) = *(int *)(local_248 + 0x214) + 1;
                  UNLOCK();
                }
              }
              lVar27 = lVar27 + 1;
              lVar21 = lVar21 + 0xc;
            } while (lVar27 < (int)uStack_1d0);
          }
          if (param_2 != (byte *)0x0) {
            if (*param_2 == 0) {
              pcVar12 = *(code **)(param_2 + 0x70);
              pbVar24 = param_2 + 0x90;
              if (*(byte **)(param_2 + 0x80) != (byte *)0x0) {
                pbVar24 = *(byte **)(param_2 + 0x80);
              }
              uVar20 = (**(code **)(*(longlong *)pbVar24 + 8))();
              bVar15 = (*pcVar12)(uVar20);
              *param_2 = bVar15;
              if (bVar15 == 0) goto LAB_148f70736;
            }
            goto LAB_148f70b91;
          }
LAB_148f70736:
          if (*(int *)(param_1 + 0x84) == -1) {
LAB_148f70743:
            lVar21 = *(longlong *)(param_1 + 8);
            uVar22 = 0;
            if (*(char *)(lVar21 + 0x1a8) == '\x01') {
              uVar22 = (ulonglong)*(uint *)(lVar21 + 0x1b0);
              *(uint *)(lVar21 + 0x1b0) = *(uint *)(lVar21 + 0x1b0) + 1;
            }
            iVar19 = *(int *)(param_1 + 0x18);
          }
          else {
            iVar19 = *(int *)(param_1 + 0x80);
            uVar22 = 0;
            if (iVar19 != *(int *)(param_1 + 0x18)) {
              if (*(longlong *)(param_1 + 0x78) != 0) {
                FUN_1400020a8();
              }
              *(undefined8 *)(param_1 + 0x78) = 0;
              *(undefined8 *)(param_1 + 0x80) = 0xffffffff00000000;
              goto LAB_148f70743;
            }
          }
          if (0 < iVar19) {
            lVar28 = 0;
            lVar21 = param_1 + 0x90;
            lVar27 = param_1 + 0xa0;
            do {
              if (*(int *)(param_1 + 0x84) != -1) {
                uVar22 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x78) + lVar28 * 4);
              }
              uVar18 = *(uint *)(*(longlong *)(param_1 + 0x10) + lVar28 * 4);
              if ((*(int *)(*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) +
                             (ulonglong)(uVar18 >> 9) * 8) + 0xc +
                           (ulonglong)((uVar18 & 0x1ff) << 4)) == -1) &&
                 ((int)uStack_140 != local_114)) {
                puVar26 = local_108;
                if (local_108 == (undefined1 *)0x0) {
                  puVar26 = local_110;
                }
                uVar11 = *(uint *)(puVar26 + (ulonglong)(local_100 - 1U & uVar18) * 4);
                while (uVar11 != 0xffffffff) {
                  puVar3 = (uint *)(local_148 + (longlong)(int)uVar11 * 0x14);
                  if (*puVar3 == uVar18) {
                    if ((((puVar3 + 1 != (uint *)0x0 && puVar3 != (uint *)0x0) &&
                         (uVar18 = puVar3[1], -1 < (int)uVar18)) && ((int)uVar18 < (int)uStack_1d0))
                       && ((int)puVar3[2] < (int)uStack_1d0 && -1 < (int)puVar3[2])) {
                      local_238 = lVar27;
                      local_230 = lVar21;
                      FUN_146c13626(*(longlong *)(param_1 + 8),&local_218);
                      uVar33 = (undefined4)local_218;
                      local_248 = CONCAT44(local_248._4_4_,
                                           *(undefined4 *)(local_1d8 + (longlong)(int)puVar3[1] * 4)
                                          );
                      uVar17 = *(undefined4 *)(local_1d8 + (longlong)(int)puVar3[2] * 4);
                      local_1a8 = (double)CONCAT44((undefined4)local_218,local_218._4_4_);
                      local_240 = (longlong *)CONCAT44(local_240._4_4_,uVar17);
                      dStack_1a0 = (double)CONCAT44(dStack_1a0._4_4_,uVar17);
                      uVar17 = FUN_146c01152(*(undefined8 *)(param_1 + 8),&local_1a8,uVar22);
                      iVar19 = *(int *)(param_1 + 0x98);
                      *(uint *)(param_1 + 0x98) = iVar19 + 1U;
                      if (*(uint *)(param_1 + 0x9c) < iVar19 + 1U) {
                        FUN_1446f48e2(local_230,iVar19);
                      }
                      *(undefined4 *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar19 * 4) = uVar17
                      ;
                      local_200 = uVar33;
                      uStack_1fc = (undefined4)local_248;
                      uStack_1f8 = local_240._0_4_;
                      uVar17 = FUN_146c01152(*(undefined8 *)(param_1 + 8),&local_200,uVar22);
                      lVar21 = local_230;
                      iVar19 = *(int *)(param_1 + 0x98);
                      *(uint *)(param_1 + 0x98) = iVar19 + 1U;
                      if (*(uint *)(param_1 + 0x9c) < iVar19 + 1U) {
                        FUN_1446f48e2(local_230,iVar19);
                      }
                      *(undefined4 *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar19 * 4) = uVar17
                      ;
                      uVar17 = FUN_146c085f4(*(undefined8 *)(param_1 + 8),local_248 & 0xffffffff,
                                             (ulonglong)local_240 & 0xffffffff,
                                             *(undefined4 *)
                                              (*(longlong *)(param_1 + 0x90) +
                                              (longlong)(*(int *)(param_1 + 0x98) + -1) * 4));
                      iVar19 = *(int *)(param_1 + 0xa8);
                      *(uint *)(param_1 + 0xa8) = iVar19 + 1U;
                      if (*(uint *)(param_1 + 0xac) < iVar19 + 1U) {
                        FUN_1446f48e2(local_238,iVar19);
                      }
                      *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar19 * 4) = uVar17
                      ;
                      iVar19 = *(int *)(param_1 + 0x18);
                      lVar27 = local_238;
                    }
                    break;
                  }
                  uVar11 = puVar3[3];
                }
              }
              lVar28 = lVar28 + 1;
            } while (lVar28 < iVar19);
          }
          lVar21 = *(longlong *)(param_1 + 8);
          uVar22 = CONCAT71((int7)(uVar22 >> 8),1);
          if (*(longlong *)(lVar21 + 0x208) != 0) {
            if (param_2 != (byte *)0x0) {
              if (*param_2 == 0) {
                pcVar12 = *(code **)(param_2 + 0x70);
                pbVar24 = param_2 + 0x90;
                if (*(byte **)(param_2 + 0x80) != (byte *)0x0) {
                  pbVar24 = *(byte **)(param_2 + 0x80);
                }
                uVar20 = (**(code **)(*(longlong *)pbVar24 + 8))();
                bVar15 = (*pcVar12)(uVar20);
                *param_2 = bVar15;
                if (bVar15 == 0) {
                  lVar21 = *(longlong *)(param_1 + 8);
                  goto LAB_148f70a76;
                }
              }
              goto LAB_148f70b91;
            }
LAB_148f70a76:
            if ((longlong)*(int *)(param_1 + 0x98) == 0) {
              uVar43 = 0xffffffff;
              uVar44 = 0xffefffff;
              uVar17 = 0xffffffff;
              uVar33 = 0x7fefffff;
              uVar39 = uVar17;
              uVar40 = uVar33;
              uVar41 = uVar17;
              uVar42 = uVar33;
              uVar45 = uVar43;
              uVar46 = uVar44;
              uVar31 = uVar43;
              uVar32 = uVar44;
            }
            else {
              lVar27 = *(longlong *)(lVar21 + 0x10);
              uVar17 = 0xffffffff;
              uVar33 = 0x7fefffff;
              uVar31 = 0xffffffff;
              uVar32 = 0xffefffff;
              lVar28 = 0;
              dVar34 = -1.79769313486232e+308;
              dVar35 = -1.79769313486232e+308;
              uVar39 = uVar17;
              uVar40 = uVar33;
              uVar41 = uVar17;
              uVar42 = uVar33;
              do {
                uVar18 = *(uint *)(*(longlong *)(param_1 + 0x90) + lVar28);
                lVar13 = *(longlong *)(*(longlong *)(lVar21 + 0x130) + (ulonglong)(uVar18 >> 9) * 8)
                ;
                uVar25 = (ulonglong)uVar18 & 0x1ff;
                uVar18 = *(uint *)(lVar13 + uVar25 * 0xc);
                uVar11 = *(uint *)(lVar13 + 4 + uVar25 * 0xc);
                lVar14 = *(longlong *)(lVar27 + (ulonglong)(uVar18 >> 9) * 8);
                uVar30 = (ulonglong)uVar18 & 0x1ff;
                dVar5 = *(double *)(lVar14 + uVar30 * 0x18);
                uVar50 = SUB84(dVar5,0);
                uVar51 = (undefined4)((ulonglong)dVar5 >> 0x20);
                dVar38 = *(double *)(lVar14 + 8 + uVar30 * 0x18);
                dVar36 = *(double *)(lVar14 + 0x10 + uVar30 * 0x18);
                lVar14 = *(longlong *)(lVar27 + (ulonglong)(uVar11 >> 9) * 8);
                uVar30 = (ulonglong)uVar11 & 0x1ff;
                dVar6 = *(double *)(lVar14 + uVar30 * 0x18);
                uVar45 = (undefined4)((ulonglong)dVar6 >> 0x20);
                dVar7 = *(double *)(lVar14 + 8 + uVar30 * 0x18);
                uVar48 = SUB84(dVar7,0);
                uVar49 = (undefined4)((ulonglong)dVar7 >> 0x20);
                dVar37 = *(double *)(lVar14 + 0x10 + uVar30 * 0x18);
                uVar18 = *(uint *)(lVar13 + 8 + uVar25 * 0xc);
                lVar13 = *(longlong *)(lVar27 + (ulonglong)(uVar18 >> 9) * 8);
                uVar25 = (ulonglong)uVar18 & 0x1ff;
                dVar8 = *(double *)(lVar13 + uVar25 * 0x18);
                uVar44 = (undefined4)((ulonglong)dVar8 >> 0x20);
                dVar9 = *(double *)(lVar13 + 8 + uVar25 * 0x18);
                uVar46 = (undefined4)((ulonglong)dVar9 >> 0x20);
                dVar10 = *(double *)(lVar13 + 0x10 + uVar25 * 0x18);
                uVar47 = (undefined4)((ulonglong)dVar10 >> 0x20);
                uVar43 = uVar50;
                uVar52 = uVar51;
                if ((double)CONCAT44(uVar40,uVar39) <= dVar5) {
                  uVar43 = uVar39;
                  uVar52 = uVar40;
                }
                if (dVar5 <= dVar35) {
                  uVar50 = SUB84(dVar35,0);
                  uVar51 = (undefined4)((ulonglong)dVar35 >> 0x20);
                }
                dVar35 = dVar38;
                if ((double)CONCAT44(uVar42,uVar41) <= dVar38) {
                  dVar35 = (double)CONCAT44(uVar42,uVar41);
                }
                if (dVar38 <= dVar34) {
                  dVar38 = dVar34;
                }
                dVar34 = dVar36;
                if ((double)CONCAT44(uVar33,uVar17) <= dVar36) {
                  dVar34 = (double)CONCAT44(uVar33,uVar17);
                }
                if (dVar36 <= (double)CONCAT44(uVar32,uVar31)) {
                  dVar36 = (double)CONCAT44(uVar32,uVar31);
                }
                uVar17 = SUB84(dVar6,0);
                uVar33 = uVar45;
                if ((double)CONCAT44(uVar52,uVar43) <= dVar6) {
                  uVar17 = uVar43;
                  uVar33 = uVar52;
                }
                uVar41 = SUB84(dVar6,0);
                if (dVar6 <= (double)CONCAT44(uVar51,uVar50)) {
                  uVar41 = uVar50;
                  uVar45 = uVar51;
                }
                uVar31 = uVar48;
                uVar32 = uVar49;
                if (dVar35 <= dVar7) {
                  uVar31 = SUB84(dVar35,0);
                  uVar32 = (undefined4)((ulonglong)dVar35 >> 0x20);
                }
                if (dVar7 <= dVar38) {
                  uVar48 = SUB84(dVar38,0);
                  uVar49 = (undefined4)((ulonglong)dVar38 >> 0x20);
                }
                dVar35 = dVar37;
                if (dVar34 <= dVar37) {
                  dVar35 = dVar34;
                }
                if (dVar37 <= dVar36) {
                  dVar37 = dVar36;
                }
                uVar39 = SUB84(dVar8,0);
                uVar40 = uVar44;
                if ((double)CONCAT44(uVar33,uVar17) <= dVar8) {
                  uVar39 = uVar17;
                  uVar40 = uVar33;
                }
                uVar43 = SUB84(dVar8,0);
                if (dVar8 <= (double)CONCAT44(uVar45,uVar41)) {
                  uVar43 = uVar41;
                  uVar44 = uVar45;
                }
                uVar41 = SUB84(dVar9,0);
                uVar42 = uVar46;
                if ((double)CONCAT44(uVar32,uVar31) <= dVar9) {
                  uVar41 = uVar31;
                  uVar42 = uVar32;
                }
                uVar45 = SUB84(dVar9,0);
                if (dVar9 <= (double)CONCAT44(uVar49,uVar48)) {
                  uVar45 = uVar48;
                  uVar46 = uVar49;
                }
                uVar17 = SUB84(dVar10,0);
                uVar33 = uVar47;
                if (dVar35 <= dVar10) {
                  uVar17 = SUB84(dVar35,0);
                  uVar33 = (undefined4)((ulonglong)dVar35 >> 0x20);
                }
                uVar31 = SUB84(dVar10,0);
                uVar32 = uVar47;
                if (dVar10 <= dVar37) {
                  uVar31 = SUB84(dVar37,0);
                  uVar32 = (undefined4)((ulonglong)dVar37 >> 0x20);
                }
                lVar28 = lVar28 + 4;
                dVar34 = (double)CONCAT44(uVar46,uVar45);
                dVar35 = (double)CONCAT44(uVar44,uVar43);
              } while ((longlong)*(int *)(param_1 + 0x98) * 4 != lVar28);
            }
            if (*(int *)(*(longlong *)(lVar21 + 0x208) + 0x28) < 1) {
              uVar20 = 0;
            }
            else {
              uVar20 = **(undefined8 **)(*(longlong *)(lVar21 + 0x208) + 0x20);
            }
            FUN_148325be8(&local_200,lVar21,uVar20);
            local_198 = ((double)CONCAT44(uVar33,uVar17) + (double)CONCAT44(uVar32,uVar31)) * 0.5;
            dStack_1a0 = ((double)CONCAT44(uVar42,uVar41) + (double)CONCAT44(uVar46,uVar45)) * 0.5;
            local_1a8 = ((double)CONCAT44(uVar40,uVar39) + (double)CONCAT44(uVar44,uVar43)) * 0.5;
            dStack_190 = 0.0;
            local_188 = 0;
            uStack_180 = 0;
            local_178 = 0x3ff0000000000000;
            local_208 = ((double)CONCAT44(uVar32,uVar31) - (double)CONCAT44(uVar33,uVar17)) * 0.5;
            dStack_210 = ((double)CONCAT44(uVar46,uVar45) - (double)CONCAT44(uVar42,uVar41)) * 0.5;
            local_218 = ((double)CONCAT44(uVar44,uVar43) - (double)CONCAT44(uVar40,uVar39)) * 0.5;
            local_208 = local_208 + local_208;
            dStack_210 = dStack_210 + dStack_210;
            local_218 = local_218 + local_218;
            local_268 = &local_218;
            local_220 = local_1ac;
            local_228 = &LAB_14436ecd4;
            local_258 = 0;
            local_260 = CONCAT44(local_260._4_4_,2);
            FUN_14833ab42(&local_200,param_1 + 0x90);
          }
        }
        FUN_148f7a2d3(local_1e8,uStack_1e0 & 0xffffffff);
        if (local_1e8 != 0) {
          FUN_1400020a8();
        }
        goto LAB_148f70364;
      }
      if ((*param_2 & 1) == 0) {
LAB_148f70a24:
        pcVar12 = *(code **)(param_2 + 0x70);
        pbVar24 = param_2 + 0x90;
        if (*(byte **)(param_2 + 0x80) != (byte *)0x0) {
          pbVar24 = *(byte **)(param_2 + 0x80);
        }
        uVar20 = (**(code **)(*(longlong *)pbVar24 + 8))();
        bVar15 = (*pcVar12)(uVar20);
        *param_2 = bVar15;
        if (bVar15 == 0) goto LAB_148f70432;
      }
    }
    else if (*param_2 == 0) {
      pcVar12 = *(code **)(param_2 + 0x70);
      pbVar24 = param_2 + 0x90;
      if (*(byte **)(param_2 + 0x80) != (byte *)0x0) {
        pbVar24 = *(byte **)(param_2 + 0x80);
      }
      uVar20 = (**(code **)(*(longlong *)pbVar24 + 8))();
      bVar15 = (*pcVar12)(uVar20);
      *param_2 = bVar15;
      if (bVar15 == 0) {
        lVar21 = (longlong)(int)uStack_1c0;
        if (lVar21 != 0) goto LAB_148f703c4;
        goto LAB_148f70a24;
      }
    }
    uVar22 = 0;
  }
LAB_148f70364:
  local_100 = 0;
  if (local_108 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1482fe8dc(&local_148);
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
  if (local_1c8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
LAB_148f70267:
  if ((local_f0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return uVar22 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f70e86 FUN_148f70e86 body=2639 status=ok
// SIG undefined FUN_148f70e86(void)

undefined8
FUN_148f70e86(longlong param_1,undefined8 *param_2,char param_3,longlong *param_4,undefined8 param_5
             )

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *_Src;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  undefined1 *puVar10;
  undefined8 **ppuVar11;
  uint *puVar12;
  int iVar13;
  longlong lVar14;
  int *piVar15;
  undefined8 *puVar16;
  longlong lVar17;
  bool bVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auStack_238 [32];
  void **local_218;
  char local_201;
  undefined8 *local_200;
  int *local_1f8;
  longlong *local_1f0;
  int *local_1e8;
  undefined8 *local_1e0;
  void *local_1d8;
  int local_1d0;
  undefined4 local_1cc;
  void *local_1c8;
  int local_1c0;
  undefined4 local_1bc;
  void *local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  int local_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 *local_190;
  undefined8 local_188;
  uint local_180;
  undefined4 local_17c;
  undefined8 *local_178;
  undefined8 uStack_170;
  longlong local_160;
  int *local_158;
  undefined8 uStack_150;
  longlong *local_148;
  undefined8 local_140;
  undefined8 *local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 local_120;
  undefined4 local_11c;
  int *local_110;
  int **local_108;
  undefined8 **ppuStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  *(undefined4 *)(param_4 + 1) = 0;
  local_201 = param_3;
  if (*(int *)((longlong)param_4 + 0xc) < 0) {
    FUN_148f7a380(param_4);
  }
  FUN_148f7a3b0(param_5);
  local_140 = param_5;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_158 = (int *)0x0;
  uStack_150 = 0;
  puVar12 = (uint *)*param_2;
  local_1f0 = param_4;
  local_148 = param_4;
  if ((longlong)*(int *)(param_2 + 1) == 0) {
    uVar8 = 0;
  }
  else {
    puVar1 = puVar12 + *(int *)(param_2 + 1);
    local_200 = param_2;
    do {
      uVar2 = *puVar12;
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar2 >> 9) * 8) + 0xc
                  + (ulonglong)((uVar2 & 0x1ff) << 4)) == -1) {
        FUN_146c13626(param_1,&local_1a0,uVar2);
        lVar20 = 1;
        puVar9 = (uint *)&local_1a0;
        bVar6 = true;
        do {
          bVar18 = bVar6;
          uVar7 = *puVar9;
          local_110 = (int *)CONCAT44(local_110._4_4_,uVar7);
          if ((int)uStack_b0 != local_84) {
            puVar10 = local_78;
            if (local_78 == (undefined1 *)0x0) {
              puVar10 = local_80;
            }
            uVar3 = *(uint *)(puVar10 + (ulonglong)(local_70 - 1U & uVar7) * 4);
            while (uVar3 != 0xffffffff) {
              puVar9 = (uint *)(local_b8 + (longlong)(int)uVar3 * 0x14);
              if (*puVar9 == uVar7) {
                if (puVar9 != (uint *)0x0) goto LAB_148f71097;
                break;
              }
              uVar3 = puVar9[3];
            }
          }
          local_138 = (undefined8 *)0xffffffffffffffff;
          local_108 = &local_110;
          ppuStack_100 = &local_138;
          FUN_14834aa14(&local_b8,&local_178,&local_108,0);
          puVar9 = (uint *)(local_b8 + (longlong)(int)local_178 * 0x14);
LAB_148f71097:
          if (puVar9[lVar20 + 1] == 0xffffffff) {
            puVar9[lVar20 + 1] = uVar2;
          }
          else {
            lVar20 = (longlong)(int)uStack_150;
            uVar7 = (int)uStack_150 + 1;
            uStack_150 = CONCAT44(uStack_150._4_4_,uVar7);
            if (uStack_150._4_4_ < uVar7) {
              FUN_1446f48e2(&local_158);
            }
            local_158[lVar20] = (int)local_110;
          }
          lVar20 = 0;
          puVar9 = (uint *)((longlong)&local_1a0 + 4);
          bVar6 = false;
        } while (bVar18);
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar1);
    puVar12 = (uint *)*local_200;
    uVar8 = *(undefined4 *)(local_200 + 1);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_108 = (int **)0x0;
  ppuStack_100 = (undefined8 **)0x0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = (undefined1 *)0x0;
  local_c0 = 0;
  local_198 = (undefined8 *)CONCAT44(local_198._4_4_,uVar8);
  local_1a0 = puVar12;
  local_160 = param_1;
  FUN_146bc855c();
  if ((longlong)(int)uStack_150 != 0) {
    local_1e8 = local_158 + (int)uStack_150;
    puVar12 = (uint *)(param_1 + 0xb8);
    piVar15 = local_158;
    do {
      iVar13 = *piVar15;
      FUN_148f7a3f4(&local_b8,iVar13);
      local_138 = (undefined8 *)0x0;
      uStack_130 = (undefined1 *)0x0;
      local_178 = (undefined8 *)0x0;
      uStack_170 = 0;
      FUN_146be983e(&local_1a0,puVar12,iVar13,0);
      if (local_1a0 != puVar12) goto LAB_148f71309;
      if ((int)local_198 != iVar13) goto LAB_148f71309;
      if ((uint)local_188 != -1) goto LAB_148f71309;
      iVar19 = local_188._4_4_;
      while (iVar19 != -1) {
LAB_148f71309:
        do {
          uVar2 = local_180;
          if ((*(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_180 >> 9) * 8) + 0xc +
                       (ulonglong)((local_180 & 0x1ff) << 4)) == -1) &&
             ((int)ppuStack_100 != local_d4)) {
            puVar10 = local_c8;
            if (local_c8 == (undefined1 *)0x0) {
              puVar10 = local_d0;
            }
            for (iVar19 = *(int *)(puVar10 + (ulonglong)(local_c0 - 1U & local_180) * 4);
                iVar19 != -1; iVar19 = *(int *)((longlong)local_108 + (longlong)iVar19 * 0xc + 4)) {
              if (*(uint *)((longlong)local_108 + (longlong)iVar19 * 0xc) == local_180) {
                FUN_146c13626(param_1,&local_110,local_180);
                uVar5 = (ulonglong)uStack_130;
                uVar4 = uStack_170;
                if ((int)local_110 == iVar13) {
                  iVar19 = (int)uStack_170;
                  uVar7 = (int)uStack_170 + 1;
                  uStack_170 = CONCAT44(uStack_170._4_4_,uVar7);
                  if (uStack_170._4_4_ < uVar7) {
                    FUN_1446f48e2(&local_178,uVar4 & 0xffffffff);
                  }
                  ppuVar11 = &local_178;
                }
                else {
                  iVar19 = (int)uStack_130;
                  uVar7 = (int)uStack_130 + 1;
                  uStack_130 = (undefined1 *)CONCAT44(uStack_130._4_4_,uVar7);
                  if (uStack_130._4_4_ < uVar7) {
                    FUN_1446f48e2(&local_138,uVar5 & 0xffffffff);
                  }
                  ppuVar11 = &local_138;
                }
                *(uint *)((longlong)*ppuVar11 + (longlong)iVar19 * 4) = uVar2;
                break;
              }
            }
          }
          if ((int)local_190 == 0) {
            local_198 = (undefined8 *)CONCAT44(0xffffffff,(int)local_198);
            local_188 = 0xffffffffffffffff;
            local_188._4_4_ = -1;
            local_188._0_4_ = -1;
          }
          else {
            FUN_146be9922(&local_1a0);
          }
        } while (((local_1a0 != puVar12) || ((int)local_198 != iVar13)) ||
                (iVar19 = local_188._4_4_, (uint)local_188 != -1));
      }
      local_1f8 = piVar15;
      FUN_144367eac(&local_160,&local_1a0,iVar13);
      local_200 = (undefined8 *)(longlong)(int)uStack_130;
      if (local_200 != (undefined8 *)0x0) {
        local_1e0 = local_138;
        local_200 = (undefined8 *)((longlong)local_200 << 2);
        puVar16 = (undefined8 *)0x0;
        do {
          _Src = local_178;
          uVar8 = *(undefined4 *)((longlong)local_1e0 + (longlong)puVar16);
          local_1b8 = (void *)0x0;
          lVar20 = (longlong)(int)uStack_170;
          local_1b0 = (int)uStack_170;
          if (lVar20 == 0) {
            local_1ac = 0;
          }
          else {
            FUN_144a06ca8(&local_1b8,uStack_170 & 0xffffffff,0);
            memcpy(local_1b8,_Src,lVar20 << 2);
          }
          local_218 = &local_1b8;
          local_1a4 = FUN_148f6fead(param_1,uVar8,iVar13,&local_1a0);
          if (local_1a4 != -1) {
            local_110 = &local_1a4;
            FUN_144a9d2f8(&local_178,&local_110);
          }
          FUN_1443681c6(&local_148,iVar13);
          puVar16 = (undefined8 *)((longlong)puVar16 + 4);
        } while (local_200 != puVar16);
      }
      lVar20 = (longlong)(int)uStack_170;
      if (lVar20 != 0) {
        lVar17 = 0;
        do {
          FUN_1443681c6(&local_148,iVar13,0xffffffff);
          lVar17 = lVar17 + 4;
        } while (lVar20 * 4 != lVar17);
      }
      piVar15 = local_1f8;
      if (local_178 != (undefined8 *)0x0) {
        FUN_1400020a8(local_178);
      }
      if (local_138 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      piVar15 = piVar15 + 1;
    } while (piVar15 != local_1e8);
  }
  local_138 = (undefined8 *)&DAT_100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  local_120 = 0;
  iVar13 = 0;
  uStack_130 = local_a8;
  if (local_90 != 0) {
    FUN_1449c0562(&local_138);
    iVar13 = local_90;
  }
  local_188._0_4_ = local_128;
  local_188._4_4_ = iStack_124;
  local_180 = local_120;
  local_17c = local_11c;
  local_198 = local_138;
  local_190 = uStack_130;
  local_1a0 = (uint *)&local_b8;
  if ((iStack_124 != iVar13) || (uStack_130 != local_a8)) {
    do {
      lVar20 = *(longlong *)local_1a0;
      lVar17 = (longlong)local_188._4_4_;
      FUN_1443681c6(&local_148,*(undefined4 *)(lVar20 + lVar17 * 0x14),
                    *(undefined4 *)(lVar20 + 4 + lVar17 * 0x14),
                    *(undefined4 *)(lVar20 + 8 + lVar17 * 0x14));
      local_188._0_4_ = (uint)local_188 & ~local_198._4_4_;
      FUN_1449c0562(&local_198);
    } while (local_1a0 != (uint *)&local_b8 || (local_190 != local_a8 || local_188._4_4_ != iVar13))
    ;
  }
  if ((local_201 != '\0') && (lVar20 = local_1f0[1], (longlong)(int)lVar20 != 0)) {
    lVar17 = *local_1f0;
    lVar14 = 0;
    do {
      if ((*(int *)(lVar17 + 4 + lVar14) == -1) || (*(int *)(lVar17 + 8 + lVar14) == -1)) {
        FUN_144367eac(&local_160,&local_1a0,*(undefined4 *)(lVar17 + lVar14));
        local_138 = (undefined8 *)0x0;
        uStack_130 = (undefined1 *)0x0;
        FUN_146c12af6(param_1,*(undefined4 *)(lVar17 + lVar14),&local_138);
        iVar13 = *(int *)(lVar17 + 4 + lVar14);
        iVar19 = *(int *)(lVar17 + 8 + lVar14);
        if (iVar13 == -1) {
          if (iVar19 != -1) {
            local_1c8 = (void *)0x0;
            lVar21 = (longlong)(int)uStack_130;
            local_1c0 = (int)uStack_130;
            if (lVar21 == 0) {
              local_1bc = 0;
            }
            else {
              local_200 = local_138;
              FUN_144a06ca8(&local_1c8,(ulonglong)uStack_130 & 0xffffffff,0);
              memcpy(local_1c8,local_200,lVar21 << 2);
              iVar19 = *(int *)(lVar17 + 8 + lVar14);
            }
            local_218 = &local_1c8;
            uVar8 = FUN_148f6fead(param_1,iVar19,*(undefined4 *)(lVar17 + lVar14),&local_1a0);
            *(undefined4 *)(lVar17 + 4 + lVar14) = uVar8;
          }
        }
        else if (iVar19 == -1) {
          local_1d8 = (void *)0x0;
          lVar21 = (longlong)(int)uStack_130;
          local_1d0 = (int)uStack_130;
          if (lVar21 == 0) {
            local_1cc = 0;
          }
          else {
            local_200 = local_138;
            FUN_144a06ca8(&local_1d8,(ulonglong)uStack_130 & 0xffffffff,0);
            memcpy(local_1d8,local_200,lVar21 << 2);
            iVar13 = *(int *)(lVar17 + 4 + lVar14);
          }
          local_218 = &local_1d8;
          uVar8 = FUN_148f6fead(param_1,iVar13,*(undefined4 *)(lVar17 + lVar14),&local_1a0);
          *(undefined4 *)(lVar17 + 8 + lVar14) = uVar8;
        }
        if (local_138 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar14 = lVar14 + 0xc;
    } while ((longlong)(int)lVar20 * 0xc != lVar14);
  }
  local_c0 = 0;
  if (local_c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_108);
  if (local_158 != (int *)0x0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1482fe8dc(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 148f718d6 FUN_148f718d6 body=397 status=ok
// SIG undefined FUN_148f718d6(void)

undefined8
FUN_148f718d6(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined8 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined1 local_108 [24];
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  longlong local_a8;
  uint local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  byte local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_148 = local_f0;
  local_a8 = param_1;
  local_a0 = param_2;
  cVar3 = FUN_1443683a0(&local_a8,param_3,1,local_c0);
  if (cVar3 == '\0') {
    uVar5 = 0;
    goto LAB_148f71a2e;
  }
  uVar5 = 0;
  local_148 = local_108;
  cVar3 = FUN_1443683a0(&local_a8,param_4,0,local_d8);
  if (cVar3 == '\0') goto LAB_148f71a2e;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(param_2 >> 9) * 8);
  local_118 = *(undefined8 *)(lVar2 + 0x10 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  puVar1 = (undefined4 *)(lVar2 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  local_128 = *puVar1;
  uStack_124 = puVar1[1];
  uStack_120 = puVar1[2];
  uStack_11c = puVar1[3];
  local_138 = param_6;
  local_148 = local_108;
  local_140 = local_d8;
  FUN_148f6eebb(&local_98,&local_128,local_f0,local_c0);
  param_5[6] = local_68;
  param_5[4] = local_78;
  param_5[5] = uStack_70;
  param_5[2] = local_88;
  param_5[3] = uStack_80;
  *param_5 = local_98;
  param_5[1] = uStack_90;
  if (&local_98 != param_5) {
    if ((local_48 & 1) == 0) {
      if (*(char *)(param_5 + 10) != '\x01') goto LAB_148f71a19;
      uVar4 = 0;
    }
    else {
      param_5[9] = local_50;
      param_5[7] = local_60;
      param_5[8] = uStack_58;
      uVar4 = 1;
    }
    *(undefined1 *)(param_5 + 10) = uVar4;
  }
LAB_148f71a19:
  param_5[0xb] = local_40;
  uVar5 = 1;
LAB_148f71a2e:
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f71a64 FUN_148f71a64 body=320 status=ok
// SIG undefined FUN_148f71a64(void)

double * FUN_148f71a64(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_a8 [40];
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 10) == '\x01') {
    dVar2 = param_1[0xb];
    if ((dVar2 != 1.0) || (NAN(dVar2))) {
      dVar2 = (dVar2 + -1.0) *
              (param_3[2] * param_1[9] + *param_3 * param_1[7] + param_3[1] * param_1[8]);
      local_70 = param_1[9] * dVar2 + param_3[2];
      local_78 = param_1[8] * dVar2 + param_3[1];
      local_80 = dVar2 * param_1[7] + *param_3;
    }
  }
  FUN_146bed047(&local_68,param_1 + 3);
  dVar2 = param_1[2];
  dVar1 = param_1[1];
  *param_2 = local_68 + *param_1;
  param_2[1] = local_60 + dVar1;
  param_2[2] = local_58 + dVar2;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f71ba6 FUN_148f71ba6 body=394 status=ok
// SIG undefined FUN_148f71ba6(void)

double * FUN_148f71ba6(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_b8 [40];
  double local_90;
  double dStack_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = param_3[2] - param_1[2];
  local_70 = param_3[1] - param_1[1];
  local_78 = *param_3 - *param_1;
  FUN_146bf2028(param_1 + 3,&local_90);
  if (*(char *)(param_1 + 10) == '\x01') {
    dVar1 = param_1[0xb];
    if (((dVar1 != 1.0) || (NAN(dVar1))) && ((dVar1 != 0.0 || (NAN(dVar1))))) {
      dVar2 = param_1[8];
      dVar3 = param_1[9];
      dVar1 = (1.0 - 1.0 / dVar1) * (local_80 * dVar3 + local_90 * param_1[7] + dStack_88 * dVar2);
      *param_2 = local_90 - dVar1 * param_1[7];
      param_2[1] = dStack_88 - dVar2 * dVar1;
      param_2[2] = local_80 - dVar3 * dVar1;
      goto LAB_148f71cf1;
    }
  }
  param_2[2] = local_80;
  *param_2 = local_90;
  param_2[1] = dStack_88;
LAB_148f71cf1:
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f71d8c FUN_148f71d8c body=26 status=ok
// SIG undefined FUN_148f71d8c(void)

void FUN_148f71d8c(undefined8 param_1)

{
  FUN_1484464a0();
  FUN_148f71da6(param_1);
  return;
}



// FUNCTION 148f71da6 FUN_148f71da6 body=319 status=ok
// SIG undefined FUN_148f71da6(void)

void FUN_148f71da6(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = FUN_140a1dfd8();
  local_50 = 0;
  local_60 = 0;
  local_58 = 1;
  local_68 = 0;
  lVar4 = FUN_1412ecd05(uVar3,0,L"/MeshModelingToolsetExp/Materials/CheckerMaterial",0);
  if (lVar4 != 0) {
    lVar4 = FUN_14090ceee(lVar4,0,0);
    if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
      *(longlong *)(param_1 + 0xd8) = lVar4;
      if (lVar4 == 0) goto LAB_148f71eb0;
    }
    else {
      FUN_14689c22e(lVar4);
      *(longlong *)(param_1 + 0xd8) = lVar4;
    }
    uVar1 = *(undefined4 *)(param_1 + 0xac);
    FUN_1446ddc76(&local_38,"Density",1);
    FUN_14472da24(lVar4,local_38,uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0xd8);
    iVar2 = FUN_140e1307c(param_1 + 200,param_1 + 0xb8);
    FUN_1446ddc76(&local_40,"UVChannel",1);
    FUN_14472da24(uVar3,local_40,(float)iVar2);
  }
LAB_148f71eb0:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f71ee6 FUN_148f71ee6 body=201 status=ok
// SIG undefined FUN_148f71ee6(void)

void FUN_148f71ee6(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0xd8);
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xac);
    FUN_1446ddc76(&local_38,"Density",1);
    FUN_14472da24(lVar2,local_38,uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0xd8);
    iVar4 = FUN_140e1307c(param_1 + 200,param_1 + 0xb8);
    FUN_1446ddc76(&local_40,"UVChannel",1);
    FUN_14472da24(uVar3,local_40,(float)iVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f71fb0 FUN_148f71fb0 body=37 status=ok
// SIG undefined FUN_148f71fb0(void)

undefined8 FUN_148f71fb0(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    lVar1 = 0xd8;
  }
  else {
    if (*(char *)(param_1 + 0xa8) != '\x02') {
      return 0;
    }
    lVar1 = 0xb0;
  }
  return *(undefined8 *)(param_1 + lVar1);
}



// FUNCTION 148f71fd6 FUN_148f71fd6 body=256 status=ok
// SIG undefined FUN_148f71fd6(void)

void FUN_148f71fd6(longlong param_1,uint param_2,longlong *param_3,char param_4)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140bee9ec(param_1 + 200,param_3);
  if (param_4 != '\0') {
    if (((int)param_2 < 0) || ((int)param_3[1] <= (int)param_2)) {
      FUN_140056680(&local_40,&DAT_149dfb77a);
    }
    else {
      local_40 = (void *)0x0;
      local_38 = *(int *)(*param_3 + 8 + (ulonglong)param_2 * 0x10);
      lVar2 = (longlong)local_38;
      _Src = *(void **)(*param_3 + (ulonglong)param_2 * 0x10);
      if (lVar2 == 0) {
        local_34 = 0;
      }
      else {
        FUN_1446dd670(&local_40,local_38,0);
        memcpy(local_40,_Src,lVar2 * 2);
      }
    }
    iVar1 = local_38 + -1;
    if (local_38 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(param_1 + 0xb8,local_40,iVar1);
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f720fa FUN_148f720fa body=508 status=ok
// SIG undefined FUN_148f720fa(void)

/* WARNING: Removing unreachable block (ram,0x000148f721db) */

void FUN_148f720fa(longlong param_1,int param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  void *pvVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [47];
  char local_59;
  void *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0xb8);
  iVar7 = *(int *)(param_1 + 0xc4);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0));
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if ((iVar7 < 0) && (*(int *)(param_1 + 0xc4) != 0)) {
    FUN_1408be2c4(plVar1,0);
  }
  if (param_2 < 1) {
    if (param_3 == '\0') goto LAB_148f7227a;
    FUN_140056680(&local_58,&DAT_149dfb77a);
  }
  else {
    iVar7 = 0;
    local_59 = param_3;
    pvVar5 = local_58;
    uVar6 = local_50;
    do {
      local_50 = uVar6;
      local_58 = pvVar5;
      FUN_140002266(&local_58,L"UV %d",iVar7);
      iVar2 = *(int *)(param_1 + 0xc0);
      *(uint *)(param_1 + 0xc0) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0xc4) < iVar2 + 1U) {
        FUN_1447a1bd6(plVar1,iVar2);
      }
      lVar4 = *plVar1;
      lVar8 = (longlong)iVar2 * 0x10;
      *(undefined8 *)(lVar4 + lVar8) = 0;
      *(void **)(lVar4 + lVar8) = local_58;
      local_58 = (void *)0x0;
      pvVar5 = local_58;
      *(undefined4 *)(lVar4 + 8 + lVar8) = (undefined4)local_50;
      *(undefined4 *)(lVar4 + 0xc + lVar8) = local_50._4_4_;
      local_50 = 0;
      uVar6 = local_50;
      local_50 = 0;
      local_58 = (void *)0x0;
      iVar7 = iVar7 + 1;
    } while (param_2 != iVar7);
    if (local_59 == '\0') goto LAB_148f7227a;
    local_58 = (void *)0x0;
    uVar3 = *(uint *)((undefined8 *)*plVar1 + 1);
    pvVar5 = *(void **)*plVar1;
    local_50 = (ulonglong)uVar3;
    if ((longlong)(int)uVar3 == 0) {
      local_50 = (ulonglong)uVar3;
    }
    else {
      FUN_1446dd670(&local_58,uVar3,0);
      memcpy(local_58,pvVar5,(longlong)(int)uVar3 * 2);
    }
  }
  if ((void **)(param_1 + 0xa8) == &local_58) {
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      FUN_1400020a8();
    }
    *(void **)(param_1 + 0xa8) = local_58;
    *(undefined4 *)(param_1 + 0xb0) = (undefined4)local_50;
    *(undefined4 *)(param_1 + 0xb4) = local_50._4_4_;
  }
LAB_148f7227a:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f722f8 FUN_148f722f8 body=117 status=ok
// SIG undefined FUN_148f722f8(void)

void FUN_148f722f8(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x58);
  }
  FUN_146fa23d0(lVar1 + 0x20,&local_28,DAT_14c99c620);
  FUN_148f720fa(param_1,*(undefined4 *)(local_28 + 0x38),param_3);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f7236e FUN_148f7236e body=54 status=ok
// SIG undefined FUN_148f7236e(void)

void FUN_148f7236e(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x208);
  uVar2 = 0;
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0xa0))(plVar1,0);
  }
  FUN_148f720fa(param_1,uVar2,param_3);
  return;
}



// FUNCTION 148f723a4 FUN_148f723a4 body=323 status=ok
// SIG undefined FUN_148f723a4(void)

bool FUN_148f723a4(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = FUN_140e1307c((longlong *)(param_1 + 0xb8),(void **)(param_1 + 0xa8));
  if (param_2 == '\x01' && iVar2 == -1) {
    if (*(int *)(param_1 + 0xc0) < 1) {
      FUN_140056680(&local_50,&DAT_149dfb77a);
    }
    else {
      puVar1 = *(undefined8 **)(param_1 + 0xb8);
      local_50 = (void *)0x0;
      local_48 = *(int *)(puVar1 + 1);
      lVar3 = (longlong)local_48;
      _Src = (void *)*puVar1;
      if (lVar3 == 0) {
        local_44 = 0;
      }
      else {
        FUN_1446dd670(&local_50,local_48,0);
        memcpy(local_50,_Src,lVar3 * 2);
      }
    }
    if ((void **)(param_1 + 0xa8) == &local_50) {
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        FUN_1400020a8();
      }
      *(void **)(param_1 + 0xa8) = local_50;
      *(int *)(param_1 + 0xb0) = local_48;
      *(undefined4 *)(param_1 + 0xb4) = local_44;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar2 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f724e8 FUN_148f724e8 body=46 status=ok
// SIG undefined FUN_148f724e8(void)

int FUN_148f724e8(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_140e1307c(param_1 + 0xb8,param_1 + 0xa8);
  if (iVar1 == -1) {
    iVar1 = (param_2 & 0xff) - 1;
  }
  return iVar1;
}



// FUNCTION 148f7255b FUN_148f7255b body=148 status=ok
// SIG undefined FUN_148f7255b(void)

undefined8 FUN_148f7255b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b9b418();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f725f0 FUN_148f725f0 body=142 status=ok
// SIG undefined FUN_148f725f0(void)

bool FUN_148f725f0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined1 *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_1484cb076();
  if (cVar2 == '\0') {
    bVar3 = false;
  }
  else {
    plVar1 = *(longlong **)(param_2 + 0x10);
    local_30 = &local_39;
    local_38 = &LAB_14436ece8;
    uVar5 = (**(code **)(*param_1 + 0x2c0))(param_1);
    iVar4 = (**(code **)(*plVar1 + 0x2d0))(plVar1,param_2,uVar5,&local_38);
    bVar3 = 0 < iVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f72680 FUN_148f72680 body=2979 status=ok
// SIG undefined FUN_148f72680(void)

void FUN_148f72680(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  void *_Src;
  wchar_t *pwVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined1 auStack_478 [32];
  undefined1 local_458;
  undefined1 local_44c [4];
  undefined8 local_448 [13];
  undefined1 local_3e0 [56];
  void *local_3a8;
  int local_3a0;
  undefined4 local_39c;
  void *local_398;
  int local_390;
  wchar_t *local_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  longlong *local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  longlong local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  wchar_t *local_348;
  undefined8 uStack_340;
  longlong *local_338;
  undefined8 uStack_330;
  longlong local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  code *local_2e8;
  undefined8 local_2d8;
  undefined **local_2c8;
  longlong *local_2c0;
  code *local_2a8;
  undefined8 local_298;
  undefined **local_288;
  longlong *local_280;
  undefined8 local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_478;
  FUN_1484416be();
  plVar9 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_149fab260;
  local_458 = 0;
  FUN_1411b354a(plVar9 + 2,0,0,0);
  if (plVar9 == (longlong *)0x0) {
    param_1[0x1f] = 0x10;
    plVar14 = (longlong *)param_1[0x20];
    if (plVar14 != (longlong *)0x0) {
      param_1[0x20] = 0;
LAB_148f72715:
      LOCK();
      plVar1 = plVar14 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      if (plVar9 != (longlong *)0x0) goto LAB_148f7277b;
    }
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    param_1[0x1f] = (longlong)(plVar9 + 2);
    plVar14 = (longlong *)param_1[0x20];
    if (plVar9 == plVar14) {
      LOCK();
      plVar14 = plVar9 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
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
    else {
      param_1[0x20] = (longlong)plVar9;
      if (plVar14 != (longlong *)0x0) goto LAB_148f72715;
    }
LAB_148f7277b:
    LOCK();
    plVar14 = plVar9 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  uStack_340 = (ulonglong)uStack_340._4_4_ << 0x20;
  local_348 = (wchar_t *)0x3e800000000;
  FUN_148506727(local_268,param_1[0x14]);
  FUN_146c00942(param_1[0x1f],local_268);
  FUN_141082778(local_268);
  FUN_148506417(&local_398,param_1[0x14],0);
  FUN_1485063a5(local_268,param_1[0x14]);
  plVar9 = (longlong *)FUN_148f73224(param_1);
  if ((plVar9 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar9);
  }
  param_1[0x18] = (longlong)plVar9;
  FUN_140056680(&local_348,&DAT_149dfb77a);
  (**(code **)(*plVar9 + 0x2a8))(plVar9,param_1,&local_348);
  if (local_348 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1[0x18] + 0xd9) = 0;
  *(undefined1 *)(param_1[0x18] + 0xd8) = 0;
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x18]);
  plVar9 = (longlong *)FUN_148f732b9(param_1);
  if ((plVar9 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar9);
  }
  param_1[0x17] = (longlong)plVar9;
  FUN_140056680(&local_348,&DAT_149dfb77a);
  (**(code **)(*plVar9 + 0x2a8))(plVar9,param_1,&local_348);
  if (local_348 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  lVar10 = param_1[0x17];
  plVar9 = *(longlong **)(param_1[0x1f] + 0x208);
  uVar8 = 0;
  if (plVar9 != (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar9 + 0xa0))(plVar9,0);
  }
  FUN_148f720fa(lVar10,uVar8,0);
  FUN_148f723a4(param_1[0x17],1);
  local_298 = 0;
  local_288 = &PTR_LAB_14ba27200;
  local_2a8 = FUN_14436ecf0;
  local_280 = param_1;
  FUN_1484c5b30(param_1[0x17] + 0x28,param_1[0x17] + 0xa8);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x17]);
  plVar9 = (longlong *)FUN_148f7334e(param_1);
  if ((plVar9 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar9);
  }
  param_1[0x19] = (longlong)plVar9;
  FUN_140056680(&local_348,L"RecomputeUVsTool");
  (**(code **)(*plVar9 + 0x2a8))(plVar9,param_1,&local_348);
  if (local_348 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_14851d694(param_1[0x19],param_1[0x1f]);
  local_2d8 = 0;
  local_2c8 = &PTR_LAB_14ba27220;
  local_2e8 = FUN_14436ed7c;
  local_2c0 = param_1;
  FUN_1484c9a28(param_1[0x19] + 0x28,param_1[0x19] + 0xa8);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x19]);
  FUN_148f733e4(param_1);
  lVar10 = FUN_148f735f0(param_1);
  if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar10);
  }
  param_1[0x1a] = lVar10;
  *(undefined1 *)(lVar10 + 0xa8) = 1;
  plVar9 = (longlong *)param_1[0x1a];
  FUN_140056680(&local_348,L"ModelingUVTools");
  (**(code **)(*plVar9 + 0x2a8))(plVar9,param_1,&local_348);
  if (local_348 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x1a]);
  FUN_148506321(param_1[0x14]);
  FUN_148f71ee6(param_1[0x1a]);
  lVar10 = FUN_148f73685(DAT_14c951640);
  if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar10);
  }
  param_1[0x1d] = lVar10;
  lVar12 = param_1[0x1f];
  lVar3 = param_1[0x20];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar9 = *(longlong **)(lVar10 + 0xa0);
  *(longlong *)(lVar10 + 0x98) = lVar12;
  *(longlong *)(lVar10 + 0xa0) = lVar3;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar9 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  lVar10 = param_1[0x1d];
  lVar12 = param_1[0x21];
  lVar3 = param_1[0x22];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar9 = *(longlong **)(lVar10 + 0x90);
  *(longlong *)(lVar10 + 0x88) = lVar12;
  *(longlong *)(lVar10 + 0x90) = lVar3;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar9 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  lVar10 = param_1[0x18];
  lVar12 = param_1[0x1d];
  if (DAT_14c950c29 == '\x01') {
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else {
      FUN_14689c22e();
      lVar10 = param_1[0x18];
    }
  }
  *(longlong *)(lVar12 + 0x30) = lVar10;
  FUN_1485063a5(&local_348,param_1[0x14]);
  lVar10 = param_1[0x1d];
  *(wchar_t **)(lVar10 + 0xf0) = local_348;
  *(ulonglong *)(lVar10 + 0xf8) = uStack_340;
  *(longlong **)(lVar10 + 0x100) = local_338;
  *(undefined8 *)(lVar10 + 0x108) = uStack_330;
  *(longlong *)(lVar10 + 0x110) = local_328;
  *(undefined8 *)(lVar10 + 0x118) = uStack_320;
  *(undefined8 *)(lVar10 + 0x120) = local_318;
  *(undefined8 *)(lVar10 + 0x128) = local_308;
  *(undefined8 *)(lVar10 + 0x130) = uStack_300;
  *(undefined8 *)(lVar10 + 0x138) = local_2f8;
  lVar10 = param_1[0x1d];
  local_388 = *(wchar_t **)(lVar10 + 0xb0);
  uStack_340 = *(ulonglong *)(lVar10 + 0xb8);
  local_378 = *(longlong **)(lVar10 + 0xc0);
  uStack_330 = *(undefined8 *)(lVar10 + 200);
  local_328 = *(longlong *)(lVar10 + 0xd0);
  uStack_320 = *(undefined8 *)(lVar10 + 0xd8);
  local_318 = *(undefined8 *)(lVar10 + 0xe0);
  uStack_310 = *(undefined8 *)(lVar10 + 0xe8);
  uVar6 = local_318;
  uVar7 = uStack_310;
  local_338 = local_378;
  uVar11 = uStack_330;
  local_348 = local_388;
  uVar5 = uStack_340;
  *(ulonglong *)(lVar10 + 0xe0) = CONCAT44(uStack_354,local_358);
  *(ulonglong *)(lVar10 + 0xe8) = CONCAT44(uStack_34c,uStack_350);
  *(undefined ***)(lVar10 + 0xd0) = &PTR_LAB_14ba27240;
  *(longlong **)(lVar10 + 0xd8) = param_1;
  *(undefined8 *)(lVar10 + 0xc0) = 0;
  *(ulonglong *)(lVar10 + 200) = CONCAT44(uStack_36c,uStack_370);
  *(code **)(lVar10 + 0xb0) = FUN_14436ede6;
  *(ulonglong *)(lVar10 + 0xb8) = CONCAT44(uStack_37c,uStack_380);
  uStack_340._4_4_ = (uint)(uStack_340 >> 0x20);
  uStack_330._4_4_ = (undefined4)((ulonglong)uStack_330 >> 0x20);
  local_318._4_4_ = (undefined4)((ulonglong)local_318 >> 0x20);
  uStack_310._4_4_ = (undefined4)((ulonglong)uStack_310 >> 0x20);
  local_358 = (undefined4)local_318;
  uStack_354 = local_318._4_4_;
  uStack_350 = (undefined4)uStack_310;
  uStack_34c = uStack_310._4_4_;
  local_368 = local_328;
  uStack_360 = uStack_320;
  uStack_370 = (undefined4)uStack_330;
  uStack_36c = uStack_330._4_4_;
  uStack_380 = (undefined4)uStack_340;
  uStack_37c = uStack_340._4_4_;
  uStack_340 = uVar5;
  uStack_330 = uVar11;
  local_318 = uVar6;
  uStack_310 = uVar7;
  if (local_388 != (wchar_t *)0x0) {
    plVar9 = local_378;
    if (local_378 == (longlong *)0x0) {
      plVar9 = &local_368;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  lVar10 = FUN_1484c5d32(param_1);
  if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar10);
  }
  param_1[0x1e] = lVar10;
  lVar12 = param_1[0x1d] + 0x28;
  if (param_1[0x1d] == 0) {
    lVar12 = 0;
  }
  uVar11 = (**(code **)(*param_1 + 0x3a0))(param_1);
  FUN_148504f74(lVar10,uVar11,lVar12);
  FUN_148558526(*(undefined8 *)(param_1[0x1e] + 0x58),param_1[0x14]);
  FUN_14851b65c(*(undefined8 *)(param_1[0x1e] + 0x58),1);
  FUN_14851c290(*(undefined8 *)(param_1[0x1e] + 0x58),param_1[0x1f]);
  lVar10 = param_1[0x1e];
  uVar11 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar11 = FUN_1485578f6(uVar11);
  _Src = local_398;
  local_3a8 = (void *)0x0;
  local_3a0 = local_390;
  if ((longlong)local_390 == 0) {
    local_39c = 0;
  }
  else {
    FUN_1411312f2(&local_3a8,local_390,0);
    memcpy(local_3a8,_Src,(longlong)local_390 << 3);
  }
  FUN_1485053d2(lVar10,&local_3a8,uVar11,0);
  FUN_14851b91a(*(undefined8 *)(param_1[0x1e] + 0x58),local_268);
  lVar10 = param_1[0x1e];
  local_348 = (wchar_t *)0x0;
  uStack_340 = uStack_340 & 0xffffffff00000000;
  FUN_1446efa72(&local_348,0,2,0x10);
  pwVar4 = local_348;
  uStack_340 = CONCAT44(uStack_340._4_4_,2);
  *(undefined ***)local_348 = &PTR_LAB_14aefe820;
  uVar11 = FUN_144a3f946();
  *(undefined8 *)(pwVar4 + 8) = uVar11;
  *(undefined ***)pwVar4 = &PTR_FUN_14ba27260;
  *(longlong **)(pwVar4 + 0xc) = param_1;
  FUN_1484d607c(lVar10 + 0x28,&local_388,&local_348);
  FUN_1449db362(&local_348);
  lVar10 = param_1[0x1a];
  if (*(char *)(lVar10 + 0xa8) == '\x02') {
    lVar10 = *(longlong *)(lVar10 + 0xb0);
  }
  else if ((*(char *)(lVar10 + 0xa8) != '\x01') ||
          (lVar10 = *(longlong *)(lVar10 + 0xd8), lVar10 == 0)) {
    plVar9 = (longlong *)(param_1[0x1e] + 0x70);
    lVar10 = 0;
    goto LAB_148f72f4a;
  }
  plVar9 = (longlong *)(param_1[0x1e] + 0x70);
  if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar10);
  }
LAB_148f72f4a:
  *plVar9 = lVar10;
  if ((char)param_1[0x1b] == '\x01') {
    lVar10 = FUN_148f7371a(param_1);
    if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar10);
    }
    param_1[0x1c] = lVar10;
    uVar11 = (**(code **)(*param_1 + 0x3a0))(param_1);
    FUN_1484e44b4(lVar10,uVar11);
    FUN_1484e49f8(param_1[0x1c],&local_398);
    lVar10 = param_1[0x1c];
    plVar9 = (longlong *)FUN_1485062af(param_1[0x14]);
    (**(code **)(*plVar9 + 0x520))(plVar9,local_3e0,0,0);
    puVar13 = local_268;
    puVar15 = local_448;
    for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
      *puVar15 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar15 = puVar15 + 1;
    }
    FUN_1484e4a20(lVar10,local_448,local_3e0);
    *(undefined1 *)(*(longlong *)(param_1[0x1c] + 0x28) + 0xa8) = 0;
    *(undefined1 *)(*(longlong *)(param_1[0x1c] + 0x28) + 200) = 0;
    plVar9 = *(longlong **)(param_1[0x1c] + 0x28);
    FUN_140056680(&local_348,L"RecomputeUVsTool");
    (**(code **)(*plVar9 + 0x2a8))(plVar9,param_1,&local_348);
    if (local_348 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(param_1[0x1c] + 0x28));
  }
  FUN_1485051e4(param_1[0x1e]);
  local_348 = L"ToolNameLocal";
  uStack_340._0_4_ = 0xd;
  FUN_1446e940c(&local_388,&local_348);
  local_348 = L"URecomputeUVsTool";
  uStack_340 = CONCAT44(uStack_340._4_4_,0x11);
  FUN_1446e940c(local_44c,&local_348);
  FUN_140208bae(&local_348,local_44c,&local_388,L"UV Unwrap");
  (**(code **)(*param_1 + 0x370))(param_1,&local_348);
  if (local_348 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_348 + 0x10))();
  }
  plVar9 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_348 = L"OnStartTool_Regions";
  uStack_340._0_4_ = 0x13;
  FUN_1446e940c(&local_388,&local_348);
  local_348 = L"URecomputeUVsTool";
  uStack_340 = CONCAT44(uStack_340._4_4_,0x11);
  FUN_1446e940c(local_44c,&local_348);
  FUN_140208bae(&local_348,local_44c,&local_388,
                L"Generate UVs for PolyGroups or existing UV islands of the mesh using various strategies."
               );
  (**(code **)(*plVar9 + 0x340))(plVar9,&local_348,2);
  if (local_348 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_348 + 0x10))();
  }
  if (local_398 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f73224 FUN_148f73224 body=148 status=ok
// SIG undefined FUN_148f73224(void)

undefined8 FUN_148f73224(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14595bb40();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f732b9 FUN_148f732b9 body=148 status=ok
// SIG undefined FUN_148f732b9(void)

undefined8 FUN_148f732b9(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14587e4c8();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f7334e FUN_148f7334e body=148 status=ok
// SIG undefined FUN_148f7334e(void)

undefined8 FUN_148f7334e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1411d0206();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f733e4 FUN_148f733e4 body=524 status=ok
// SIG undefined FUN_148f733e4(void)

void FUN_148f733e4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  cVar6 = FUN_14851db82(*(undefined8 *)(param_1 + 200));
  if (cVar6 == '\0') {
    lVar4 = *(longlong *)(param_1 + 0xf8);
    plVar8 = (longlong *)FUN_14001cc68(0x28,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14ba272d0;
    plVar9 = plVar8 + 2;
    plVar8[3] = 0;
    plVar8[2] = lVar4;
    plVar8[4] = 0xffffffff;
    FUN_148376a28(plVar9);
  }
  else {
    uVar7 = FUN_14837b9bf(*(undefined8 *)(param_1 + 0xf8),
                          *(undefined8 *)(*(longlong *)(param_1 + 200) + 0xa8));
    uVar3 = *(undefined8 *)(param_1 + 0xf8);
    plVar8 = (longlong *)FUN_14001cc68(0x28,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14ba272d0;
    plVar9 = plVar8 + 2;
    FUN_148376c7c(plVar9,uVar3,uVar7);
  }
  if (plVar8 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0x108) = plVar9;
    plVar9 = *(longlong **)(param_1 + 0x110);
    if (plVar9 == (longlong *)0x0) goto LAB_148f734d5;
    *(undefined8 *)(param_1 + 0x110) = 0;
LAB_148f73496:
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
    if (plVar8 == (longlong *)0x0) goto LAB_148f734d5;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x108) = plVar9;
    plVar9 = *(longlong **)(param_1 + 0x110);
    if (plVar8 == plVar9) {
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x110) = plVar8;
      if (plVar9 != (longlong *)0x0) goto LAB_148f73496;
    }
  }
  LOCK();
  plVar9 = plVar8 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
LAB_148f734d5:
  lVar4 = *(longlong *)(param_1 + 0xe8);
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x108);
    lVar5 = *(longlong *)(param_1 + 0x110);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar9 = *(longlong **)(lVar4 + 0x90);
    *(undefined8 *)(lVar4 + 0x88) = uVar3;
    *(longlong *)(lVar4 + 0x90) = lVar5;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148f73537. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar9 + 0x10))(plVar9);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148f735f0 FUN_148f735f0 body=148 status=ok
// SIG undefined FUN_148f735f0(void)

undefined8 FUN_148f735f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14587e3de();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f73685 FUN_148f73685 body=148 status=ok
// SIG undefined FUN_148f73685(void)

undefined8 FUN_148f73685(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459d76f2();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f7371a FUN_148f7371a body=148 status=ok
// SIG undefined FUN_148f7371a(void)

undefined8 FUN_148f7371a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14594bdbc();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f737b0 FUN_148f737b0 body=182 status=ok
// SIG undefined FUN_148f737b0(void)

void FUN_148f737b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0xc0) == param_2) || (*(longlong *)(param_1 + 0xb8) == param_2)) {
    FUN_1485051e4(*(undefined8 *)(param_1 + 0xf0));
    lVar1 = *(longlong *)(param_1 + 0xd0);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0xd0);
    if (lVar1 != param_2) {
      return;
    }
  }
  FUN_148f71ee6(lVar1);
  lVar1 = *(longlong *)(param_1 + 0xd0);
  if (*(char *)(lVar1 + 0xa8) == '\x02') {
    lVar1 = *(longlong *)(lVar1 + 0xb0);
  }
  else if ((*(char *)(lVar1 + 0xa8) != '\x01') || (lVar1 = *(longlong *)(lVar1 + 0xd8), lVar1 == 0))
  {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0xf0) + 0x70);
    lVar1 = 0;
    goto LAB_148f7382e;
  }
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0xf0) + 0x70);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
LAB_148f7382e:
  *plVar2 = lVar1;
  return;
}



// FUNCTION 148f73866 FUN_148f73866 body=673 status=ok
// SIG undefined FUN_148f73866(void)

void FUN_148f73866(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  undefined8 *local_a0 [11];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1[0x1c] != 0) {
    plVar1 = *(longlong **)(param_1[0x1c] + 0x28);
    FUN_140056680(local_a0,L"RecomputeUVsTool");
    (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_a0);
    if (local_a0[0] != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1484e49a4(param_1[0x1c]);
  }
  plVar1 = (longlong *)param_1[0x17];
  FUN_140056680(local_a0,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_a0);
  if (local_a0[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)param_1[0x18];
  FUN_140056680(local_a0,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_a0);
  if (local_a0[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)param_1[0x19];
  FUN_140056680(local_a0,L"RecomputeUVsTool");
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,local_a0);
  if (local_a0[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)param_1[0x1a];
  FUN_140056680(local_a0,L"ModelingUVTools");
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_a0);
  if (local_a0[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14850635b(param_1[0x14]);
  FUN_143b84538(param_1[0x1e],local_a0);
  if (param_2 == '\x01') {
    lVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_48 = L"RecomputeUVs";
    local_40 = 0xc;
    FUN_1446e940c(local_a4,&local_48);
    local_48 = L"URecomputeUVsTool";
    local_40 = 0x11;
    FUN_1446e940c(local_a8,&local_48);
    FUN_140208bae(&local_48,local_a8,local_a4,L"Recompute UVs");
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2 + 0x28,&local_48);
    if (local_48 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_48 + 0x10))();
    }
    if (local_a0[0] != (undefined8 *)0x0) {
      FUN_148507113(param_1[0x14]);
    }
    lVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x18))(lVar2 + 0x28);
  }
  if (param_1[0x1d] != 0) {
    param_1[0x1d] = 0;
  }
  if (local_a0[0] != (undefined8 *)0x0) {
    (**(code **)*local_a0[0])(local_a0[0],1);
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f73b1a FUN_148f73b1a body=69 status=ok
// SIG undefined FUN_148f73b1a(void)

void FUN_148f73b1a(longlong param_1,undefined4 param_2)

{
  FUN_148505016(*(undefined8 *)(param_1 + 0xf0));
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1484e55e8(*(longlong *)(param_1 + 0xe0),param_2);
    return;
  }
  return;
}



// FUNCTION 148f73b60 FUN_148f73b60 body=44 status=ok
// SIG undefined FUN_148f73b60(void)

undefined8 FUN_148f73b60(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x388))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)param_1[0x1e] >> 8),*(undefined1 *)(param_1[0x1e] + 0x91));
  }
  return uVar2;
}



// FUNCTION 148f73b8c FUN_148f73b8c body=181 status=ok
// SIG undefined FUN_148f73b8c(void)

void FUN_148f73b8c(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  int *local_30;
  undefined1 *local_28;
  longlong *local_20;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xb8);
    if (lVar1 == 0) {
      local_14 = 0;
    }
    else {
      iVar2 = FUN_140e1307c(lVar1 + 0xb8,lVar1 + 0xa8);
      local_14 = 0;
      if (iVar2 != -1) {
        local_14 = iVar2;
      }
    }
    local_30 = &local_14;
    local_20 = &local_38;
    local_28 = &LAB_14436efde;
    local_38 = param_1;
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xf0) + 0x58) + 0x2a0))();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_148f71ee6();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f73c42 FUN_148f73c42 body=102 status=ok
// SIG undefined FUN_148f73c42(void)

undefined8 FUN_148f73c42(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_148f73ca8();
  uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  FUN_14851b11a(uVar1,uVar2,&DAT_14c846480);
  FUN_148558526(uVar1,0);
  FUN_148f73d3d(param_1,param_2,uVar1,1);
  FUN_14851b88e(uVar1,1);
  return uVar1;
}



// FUNCTION 148f73ca8 FUN_148f73ca8 body=148 status=ok
// SIG undefined FUN_148f73ca8(void)

undefined8 FUN_148f73ca8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1458bd1fa();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f73d3d FUN_148f73d3d body=329 status=ok
// SIG undefined FUN_148f73d3d(void)

void FUN_148f73d3d(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_4 == 2) {
    uVar1 = FUN_140a1dfd8();
    local_50 = 0;
    local_60 = 0;
    local_58 = 1;
    local_68 = 0;
    lVar2 = FUN_1412ecd05(uVar1,0,L"/MeshModelingToolsetExp/Materials/CheckerMaterial",0);
    if (lVar2 != 0) {
      uVar1 = FUN_14090ceee(lVar2,0,0);
      FUN_1446ddc76(&local_40,"Density",1);
      FUN_14472da24(uVar1,local_40,0x3f800000);
      FUN_14851b56e(param_3,uVar1);
    }
  }
  else if (param_4 == 1) {
    FUN_14851b580(param_3);
    uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_38[0] = 0x3f4000003f4ccccd;
    local_38[1] = 0x3f80000000000000;
    uVar1 = FUN_148557ea9(local_38,uVar1,0);
    FUN_14851b338(param_3,uVar1);
  }
  else if (param_4 == 0) {
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_14851b4f6(*(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x58),local_38);
    FUN_14851b580(param_3);
    FUN_14851b480(param_3,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f73e98 FUN_148f73e98 body=562 status=ok
// SIG undefined FUN_148f73e98(void)

void FUN_148f73e98(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_198 [32];
  longlong local_178 [2];
  undefined1 *local_168;
  undefined8 local_158;
  undefined **local_148;
  longlong *local_140;
  undefined1 *local_128;
  undefined8 local_118;
  undefined **local_108;
  longlong *local_100;
  undefined1 *local_e8;
  undefined8 local_d8;
  undefined **local_c8;
  longlong *local_c0;
  undefined1 *local_a8;
  undefined8 local_98;
  undefined **local_88;
  longlong *local_80;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_1484445fc();
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 5);
  uVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
  uVar2 = FUN_148451390(uVar2);
  lVar3 = FUN_148f740cc(uVar2);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar3);
  }
  param_1[8] = lVar3;
  plVar1 = (longlong *)FUN_148f7415a(DAT_14c951640);
  if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar1);
  }
  param_1[7] = (longlong)plVar1;
  FUN_140056680(local_178,&DAT_149dfb77a);
  uVar2 = FUN_14479d2ce(param_1 + 5);
  (**(code **)(*plVar1 + 0x2a8))(plVar1,uVar2,local_178);
  if (local_178[0] != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x2c0))(param_1,param_1[7]);
  (**(code **)(*param_1 + 0x2c8))(param_1,param_1[7],0);
  local_58 = 0;
  local_48 = &PTR_LAB_14ba27310;
  local_68 = &LAB_14436eff4;
  local_40 = param_1;
  FUN_14588c620(param_1[7] + 0x28,param_1[7] + 0xa8);
  local_98 = 0;
  local_88 = &PTR_LAB_14ba27390;
  local_a8 = &LAB_14436f054;
  local_80 = param_1;
  FUN_148f741f0(param_1[7] + 0x28,param_1[7] + 0xb0);
  local_d8 = 0;
  local_c8 = &PTR_LAB_14ba273b0;
  local_e8 = &LAB_14436f0b4;
  local_c0 = param_1;
  FUN_1484de26e(param_1[7] + 0x28,param_1[7] + 0xb4);
  local_118 = 0;
  local_108 = &PTR_LAB_14ba273d0;
  local_128 = &LAB_14436f114;
  local_100 = param_1;
  FUN_1484c9b00(param_1[7] + 0x28,param_1[7] + 0xb8);
  local_158 = 0;
  local_148 = &PTR_LAB_14ba273f0;
  local_168 = &LAB_14436f174;
  local_140 = param_1;
  FUN_148f741f0(param_1[7] + 0x28,param_1[7] + 0xbc);
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f740cc FUN_148f740cc body=142 status=ok
// SIG undefined FUN_148f740cc(void)

longlong FUN_148f740cc(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x30);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x28);
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(lVar4 + lVar5);
        if (lVar2 != 0) {
          lVar3 = FUN_1411d87e8();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            return lVar2;
          }
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    param_1 = *(longlong *)(param_1 + 0x20);
    if (param_1 == 0) {
      return 0;
    }
    lVar4 = FUN_1459d7446();
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) break;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) != lVar4 + 0x30) {
      return 0;
    }
  }
  return 0;
}



// FUNCTION 148f7415a FUN_148f7415a body=148 status=ok
// SIG undefined FUN_148f7415a(void)

undefined8 FUN_148f7415a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459f4742();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 148f741f0 FUN_148f741f0 body=215 status=ok
// SIG undefined FUN_148f741f0(void)

int FUN_148f741f0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_148f7a836(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f742c8 FUN_148f742c8 body=173 status=ok
// SIG undefined FUN_148f742c8(void)

void FUN_148f742c8(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((char)param_1[9] == '\x01') {
    (**(code **)(*param_1 + 0x300))(param_1);
  }
  plVar1 = (longlong *)param_1[7];
  FUN_140056680(local_30,&DAT_149dfb77a);
  uVar2 = FUN_14479d2ce(param_1 + 5);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,uVar2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  param_1[7] = 0;
  local_30[0] = 0;
  FUN_14485c47a(local_30,0);
  param_1[5] = local_30[0];
  param_1[8] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f74376 FUN_148f74376 body=819 status=ok
// SIG undefined FUN_148f74376(void)

ulonglong FUN_148f74376(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int *piVar13;
  uint uVar14;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar12 = (undefined8 *)0x0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x70);
    plVar1 = (longlong *)(lVar5 + 0x430);
    lVar2 = lVar5 + 0x440;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    lStack_60 = lVar2;
    if (*(int *)(lVar5 + 0x458) != 0) {
      FUN_1449c0562(&local_68);
      puVar12 = (undefined8 *)(ulonglong)*(uint *)(lVar5 + 0x458);
    }
    local_78 = local_58;
    uVar6 = local_78;
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_88 = local_68;
    lStack_80 = lStack_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = plVar1;
    if ((local_78._4_4_ != (int)puVar12) || (lStack_60 != lVar2)) {
      iVar8 = local_78._4_4_;
      local_78 = uVar6;
      do {
        if (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x48) + 0x70) + 4 +
                    (longlong)*(int *)(*local_90 + (longlong)iVar8 * 0xc) * 0x50) != -1)
        goto LAB_148f74676;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar6 = local_78;
      } while (local_90 != plVar1 || (lStack_80 != lVar2 || local_78._4_4_ != (int)puVar12));
    }
    local_78 = uVar6;
    plVar1 = (longlong *)(lVar5 + 0x390);
    lVar2 = lVar5 + 0x3a0;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    lStack_60 = lVar2;
    if (*(int *)(lVar5 + 0x3b8) == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar8 = *(int *)(lVar5 + 0x3b8);
    }
    puVar12 = &local_88;
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar6 = local_78;
    local_88 = local_68;
    lStack_80 = lStack_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar7 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar8) || (local_78 = uVar6, lStack_60 != lVar2)) {
      do {
        local_78 = uVar6;
        uVar4 = *(uint *)(*local_90 + (longlong)iVar7 * 0xc);
        lVar9 = FUN_1482abc36(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x48),uVar4);
        if ((lVar9 != 0) && ((longlong)*(int *)(lVar9 + 0x20) != 0)) {
          puVar10 = *(undefined8 **)(lVar9 + 0x18);
          local_98 = puVar10 + (longlong)*(int *)(lVar9 + 0x20) * 5;
          do {
            if ((longlong)*(int *)(puVar10 + 1) != 0) {
              piVar13 = (int *)*puVar10;
              piVar3 = piVar13 + *(int *)(puVar10 + 1);
              lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x48) + 0x70);
              do {
                uVar14 = *(uint *)(lVar9 + (longlong)*piVar13 * 0x50);
                if (uVar14 == uVar4) {
                  uVar14 = *(uint *)((longlong)*piVar13 * 0x50 + lVar9 + 4);
                }
                if (uVar14 != 0xffffffff) {
                  if (*(int *)(lVar5 + 0x398) == *(int *)(lVar5 + 0x3c4)) goto LAB_148f74676;
                  lVar11 = *(longlong *)(lVar5 + 0x3d0);
                  if (*(longlong *)(lVar5 + 0x3d0) == 0) {
                    lVar11 = lVar5 + 0x3c8;
                  }
                  iVar7 = *(int *)(lVar11 + (ulonglong)(*(int *)(lVar5 + 0x3d8) - 1U & uVar14) * 4);
                  if (iVar7 == -1) goto LAB_148f74676;
                  while (*(uint *)(*plVar1 + (longlong)iVar7 * 0xc) != uVar14) {
                    iVar7 = *(int *)((longlong)iVar7 * 0xc + *plVar1 + 4);
                    if (iVar7 == -1) goto LAB_148f74676;
                  }
                }
                piVar13 = piVar13 + 1;
              } while (piVar13 != piVar3);
            }
            puVar10 = puVar10 + 5;
          } while (puVar10 != local_98);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(puVar12);
        iVar7 = local_78._4_4_;
        uVar6 = local_78;
      } while ((lStack_80 != lVar2 || local_78._4_4_ != iVar8) || local_90 != plVar1);
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_148f74679:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)puVar12 & 0xffffffff;
LAB_148f74676:
  puVar12 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar12 >> 8),1);
  goto LAB_148f74679;
}



// FUNCTION 148f746aa FUN_148f746aa body=606 status=ok
// SIG undefined FUN_148f746aa(void)

undefined8 FUN_148f746aa(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [40];
  undefined1 local_50 [12];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar4 = (**(code **)(*param_1 + 0x2d8))();
  if (cVar4 == '\0') {
    plVar5 = (longlong *)FUN_14479d2ce(param_1 + 5);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2c8))(plVar5);
    local_40 = L"OnBevelFailedMesssage";
    local_38 = 0x15;
    FUN_1446e940c(local_50,&local_40);
    local_40 = L"UPolyEditBevelEdgeActivity";
    local_38 = 0x1a;
    FUN_1446e940c(local_44,&local_40);
    FUN_140208bae(&local_40,local_44,local_50,
                  L"Cannot Bevel with current selection: Make sure your selection includes (or borders) non-boundary edges."
                 );
    (**(code **)(*plVar5 + 0x340))(plVar5,&local_40,3);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
    uVar7 = 1;
  }
  else {
    FUN_143b8439e(*(undefined8 *)(param_1[8] + 0x40),param_1 + 6);
    lVar1 = *(longlong *)(param_1[8] + 0x40);
    uVar7 = 0;
    local_40 = (wchar_t *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    pwVar3 = local_40;
    local_38 = 3;
    *(undefined ***)local_40 = &PTR_LAB_14ba263d0;
    uVar6 = FUN_144a3f946();
    *(undefined8 *)(pwVar3 + 8) = uVar6;
    *(undefined ***)pwVar3 = &PTR_FUN_14ba27410;
    pwVar3[0xc] = L'\0';
    pwVar3[0xd] = L'\0';
    pwVar3[0xe] = L'\0';
    pwVar3[0xf] = L'\0';
    FUN_14485c47a(pwVar3 + 0xc,param_1);
    *(longlong **)(pwVar3 + 0x10) = param_1;
    FUN_148f76e8e(lVar1 + 0x40,local_50,&local_40);
    FUN_1449db362(&local_40);
    (**(code **)(*param_1 + 0x2c8))(param_1,param_1[7],1);
    (**(code **)(*param_1 + 0x308))(param_1);
    *(undefined1 *)(param_1 + 9) = 1;
    lVar1 = param_1[8];
    local_40 = L"BeginBevelActivity";
    local_38 = 0x12;
    FUN_1446e940c(local_50,&local_40);
    local_40 = L"UPolyEditBevelEdgeActivity";
    local_38 = 0x1a;
    FUN_1446e940c(local_44,&local_40);
    FUN_140208bae(&local_40,local_44,local_50,L"Begin Bevel");
    pcVar2 = *(code **)(lVar1 + 0xc0);
    plVar5 = (longlong *)(lVar1 + 0xe0);
    if (*(longlong **)(lVar1 + 0xd0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(lVar1 + 0xd0);
    }
    uVar6 = (**(code **)(*plVar5 + 8))(plVar5);
    (*pcVar2)(uVar6,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f7490a FUN_148f7490a body=188 status=ok
// SIG undefined FUN_148f7490a(void)

void FUN_148f7490a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_138 [40];
  undefined1 local_110 [240];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x70);
  FUN_145c3f772(param_1 + 0x50,lVar1 + 0x390);
  FUN_145c3f772(param_1 + 0xa0,lVar1 + 0x3e0);
  FUN_145c3f772(param_1 + 0xf0,lVar1 + 0x430);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x70);
  FUN_1458d302c(local_110);
  FUN_1485316d6(uVar2,local_110,0);
  FUN_1456c3cc8(local_110);
  FUN_1485051e4(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x40));
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f749cc FUN_148f749cc body=134 status=ok
// SIG undefined FUN_148f749cc(void)

undefined8 FUN_148f749cc(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  
  if ((char)param_1[9] == '\0') {
    (**(code **)(*param_1 + 0x318))(param_1);
    uVar1 = 2;
  }
  else if (param_2 == '\x02') {
    (**(code **)(*param_1 + 0x318))(param_1);
    uVar1 = 1;
    FUN_14851bbe8(*(undefined8 *)(*(longlong *)(param_1[8] + 0x40) + 0x58),
                  *(undefined8 *)(param_1[8] + 0x30),1,0xf);
  }
  else {
    FUN_143b844a2(*(undefined8 *)(param_1[8] + 0x40));
    (**(code **)(*param_1 + 0x310))(param_1);
    (**(code **)(*param_1 + 0x318))(param_1);
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 148f74a52 FUN_148f74a52 body=120 status=ok
// SIG undefined FUN_148f74a52(void)

void FUN_148f74a52(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_148544206(*(longlong *)(param_1[8] + 0x70) + 0x390,param_1 + 10);
  if (cVar1 == '\0') {
    FUN_1485316d6(*(undefined8 *)(param_1[8] + 0x70),param_1 + 10,0);
  }
  FUN_143b844d6(*(undefined8 *)(param_1[8] + 0x40));
  FUN_140457ffc(*(longlong *)(param_1[8] + 0x40) + 0x40,param_1);
  (**(code **)(*param_1 + 0x2c8))(param_1,param_1[7],0);
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}



// FUNCTION 148f74aca FUN_148f74aca body=1123 status=ok
// SIG undefined FUN_148f74aca(void)

void FUN_148f74aca(longlong param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_258 [32];
  undefined1 local_238;
  undefined1 local_230;
  undefined1 local_228 [4];
  undefined1 local_224 [4];
  undefined1 local_220 [8];
  void *local_218;
  int local_210;
  undefined4 local_20c;
  void *local_208;
  undefined8 uStack_200;
  wchar_t *local_1f0;
  undefined4 local_1e8;
  wchar_t *local_1e0;
  undefined4 local_1d8;
  undefined1 local_190 [80];
  undefined1 auStack_140 [80];
  undefined1 local_f0 [168];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  lVar5 = FUN_14851bd54(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40) + 0x58))
  ;
  if (*(int *)(lVar5 + 0x170) == 0) {
    plVar6 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2c8))(plVar6);
    local_1e0 = L"OnBevelEmptyMeshMessage";
    local_1d8 = 0x17;
    FUN_1446e940c(local_f0,&local_1e0);
    local_1e0 = L"UPolyEditBevelEdgeActivity";
    local_1d8 = 0x1a;
    FUN_1446e940c(&local_1f0,&local_1e0);
    FUN_140208bae(&local_1e0,&local_1f0,local_f0,L"Bevel created empty mesh, ignoring");
    (**(code **)(*plVar6 + 0x340))(plVar6,&local_1e0,3);
    if (local_1e0 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_1e0 + 0x10))();
    }
    FUN_14851bbe8(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40) + 0x58),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30),1,0xf);
    goto LAB_148f74db3;
  }
  FUN_146c2c368(local_f0,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30));
  FUN_146c2c4e8(local_f0);
  local_208 = (void *)0x0;
  uStack_200 = 0;
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x30);
  uVar10 = *(int *)(lVar9 + 0x140) * 0x200 + *(int *)(lVar9 + 0x144);
  uVar12 = 0;
  if ((uVar10 != 0) &&
     (uVar12 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar9 + 0x148) - 1U))) {
    uVar4 = 1;
    uVar7 = 1;
    if (1 < (int)uVar10) {
      uVar4 = uVar10;
    }
    do {
      uVar12 = uVar4;
      if (uVar4 == uVar7) break;
      uVar8 = uVar7 >> 9;
      uVar11 = uVar7 & 0x1ff;
      uVar12 = uVar7;
      uVar7 = uVar7 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar9 + 0x148))[uVar8] +
                                         (ulonglong)uVar11 * 2) - 1U));
  }
  if (uVar12 == uVar10) {
    local_210 = 0;
LAB_148f74c50:
    local_218 = (void *)0x0;
    local_20c = 0;
  }
  else {
    do {
      uVar2 = uStack_200;
      lVar13 = (longlong)(int)uStack_200;
      uVar4 = (int)uStack_200 + 1;
      uStack_200 = CONCAT44(uStack_200._4_4_,uVar4);
      if (uStack_200._4_4_ < uVar4) {
        FUN_1446f48e2(&local_208,uVar2 & 0xffffffff);
      }
      pvVar1 = local_208;
      *(uint *)((longlong)local_208 + lVar13 * 4) = uVar12;
      uVar4 = uVar12 + 1;
      if ((int)(uVar12 + 1) < (int)uVar10) {
        uVar4 = uVar10;
      }
      do {
        uVar7 = uVar4;
        if (uVar4 - 1 == uVar12) break;
        uVar12 = uVar12 + 1;
        uVar7 = uVar12;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar9 + 0x148) +
                                             (ulonglong)(uVar12 >> 9) * 8) +
                                           (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
      uVar12 = uVar7;
    } while (uVar12 != uVar10);
    local_210 = (int)uStack_200;
    lVar9 = (longlong)(int)uStack_200;
    local_218 = (void *)0x0;
    if (lVar9 == 0) goto LAB_148f74c50;
    FUN_144a06ca8(&local_218,uStack_200 & 0xffffffff,0);
    memcpy(local_218,pvVar1,lVar9 << 2);
    pvVar1 = local_218;
    lVar9 = (longlong)local_210;
    if (lVar9 != 0) {
      lVar13 = 0;
      do {
        FUN_146c2c9fe(local_f0,*(undefined4 *)((longlong)pvVar1 + lVar13),1);
        lVar13 = lVar13 + 4;
      } while (lVar9 * 4 != lVar13);
    }
    if (local_218 != (void *)0x0) {
      FUN_1400020a8(local_218);
    }
  }
  local_230 = 1;
  local_238 = 1;
  FUN_146c005f0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30),lVar5,1,1);
  FUN_1458d302c(&local_1e0);
  lVar5 = param_1 + 0x50;
  cVar3 = FUN_148544206(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x70) + 0x390,lVar5);
  if (cVar3 == '\0') {
    FUN_1485316d6(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x70),lVar5,0);
  }
  lVar9 = *(longlong *)(param_1 + 0x40);
  FUN_146c2caf6(local_f0,local_220);
  local_1f0 = L"PolyMeshBevelChange";
  local_1e8 = 0x13;
  FUN_1446e940c(local_224,&local_1f0);
  local_1f0 = L"UPolyEditBevelEdgeActivity";
  local_1e8 = 0x1a;
  FUN_1446e940c(local_228,&local_1f0);
  FUN_140208bae(&local_1f0,local_228,local_224,L"Bevel");
  FUN_148f74f2e(lVar9 + 0x80,&local_1f0,local_220,&local_1e0);
  if (local_1f0 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_1f0 + 0x10))();
  }
  FUN_145c3f772(lVar5,&local_1e0);
  FUN_145c3f772(param_1 + 0xa0,local_190);
  FUN_145c3f772(param_1 + 0xf0,auStack_140);
  FUN_1456c3cc8(&local_1e0);
  if (local_208 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_146c2c40e(local_f0);
LAB_148f74db3:
  if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f74f2e FUN_148f74f2e body=100 status=ok
// SIG undefined FUN_148f74f2e(void)

void FUN_148f74f2e(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = (code *)*param_1;
  plVar4 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,param_2,param_3,param_4);
  lVar2 = *param_3;
  if (lVar2 == 0) {
    return;
  }
  FUN_146c2a142(lVar2);
  FUN_1400020a8(lVar2);
  return;
}



// FUNCTION 148f74f9e FUN_148f74f9e body=45 status=ok
// SIG undefined FUN_148f74f9e(void)

longlong FUN_148f74f9e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145e18748(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f74fe2 FUN_148f74fe2 body=45 status=ok
// SIG undefined FUN_148f74fe2(void)

longlong FUN_148f74fe2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1457ee352(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f75016 FUN_148f75016 body=48 status=ok
// SIG undefined FUN_148f75016(void)

longlong FUN_148f75016(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_1457ee352(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f75046 FUN_148f75046 body=48 status=ok
// SIG undefined FUN_148f75046(void)

longlong FUN_148f75046(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa0;
  FUN_1457ee352(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f75076 FUN_148f75076 body=48 status=ok
// SIG undefined FUN_148f75076(void)

longlong FUN_148f75076(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa8;
  FUN_1457ee352(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f750ae FUN_148f750ae body=45 status=ok
// SIG undefined FUN_148f750ae(void)

longlong FUN_148f750ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1457ee352(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f750dc FUN_148f750dc body=48 status=ok
// SIG undefined FUN_148f750dc(void)

longlong FUN_148f750dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_1457ee352(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f7510c FUN_148f7510c body=48 status=ok
// SIG undefined FUN_148f7510c(void)

longlong FUN_148f7510c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa0;
  FUN_1457ee352(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f7513c FUN_148f7513c body=48 status=ok
// SIG undefined FUN_148f7513c(void)

longlong FUN_148f7513c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa8;
  FUN_1457ee352(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f7516c FUN_148f7516c body=45 status=ok
// SIG undefined FUN_148f7516c(void)

longlong FUN_148f7516c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1457ee352(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f7519a FUN_148f7519a body=48 status=ok
// SIG undefined FUN_148f7519a(void)

longlong FUN_148f7519a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_1457ee352(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f751ca FUN_148f751ca body=48 status=ok
// SIG undefined FUN_148f751ca(void)

longlong FUN_148f751ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa0;
  FUN_1457ee352(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f751fa FUN_148f751fa body=48 status=ok
// SIG undefined FUN_148f751fa(void)

longlong FUN_148f751fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa8;
  FUN_1457ee352(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f7522a FUN_148f7522a body=45 status=ok
// SIG undefined FUN_148f7522a(void)

longlong FUN_148f7522a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1457ee352(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f75258 FUN_148f75258 body=48 status=ok
// SIG undefined FUN_148f75258(void)

longlong FUN_148f75258(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_1457ee352(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f75288 FUN_148f75288 body=48 status=ok
// SIG undefined FUN_148f75288(void)

longlong FUN_148f75288(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa0;
  FUN_1457ee352(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f752b8 FUN_148f752b8 body=48 status=ok
// SIG undefined FUN_148f752b8(void)

longlong FUN_148f752b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa8;
  FUN_1457ee352(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f752e8 FUN_148f752e8 body=45 status=ok
// SIG undefined FUN_148f752e8(void)

longlong FUN_148f752e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1457ee352(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f75316 FUN_148f75316 body=48 status=ok
// SIG undefined FUN_148f75316(void)

longlong FUN_148f75316(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_1457ee352(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f75346 FUN_148f75346 body=48 status=ok
// SIG undefined FUN_148f75346(void)

longlong FUN_148f75346(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa0;
  FUN_1457ee352(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f75376 FUN_148f75376 body=48 status=ok
// SIG undefined FUN_148f75376(void)

longlong FUN_148f75376(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa8;
  FUN_1457ee352(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f753a6 FUN_148f753a6 body=45 status=ok
// SIG undefined FUN_148f753a6(void)

longlong FUN_148f753a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1457ee352(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}


