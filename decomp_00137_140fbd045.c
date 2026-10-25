// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140fbd045 FUN_140fbd045 body=363 status=ok
// SIG undefined FUN_140fbd045(void)

void FUN_140fbd045(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined **local_50 [3];
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x10))(param_1,&local_60,"FGbxUIWidgetDefPayload",param_2);
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    cohtml::Property::Property((Property *)local_50,"ClassIdent",true);
    local_50[0] = &PTR_FUN_14b477c80;
    local_38 = 0x10;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    plVar1 = local_60;
    cohtml::Property::Property((Property *)local_50,"WidgetIdent",true);
    local_50[0] = &PTR_FUN_14b477c80;
    local_38 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    plVar1 = local_60;
    cohtml::Property::Property((Property *)local_50,"ContentPath",true);
    local_50[0] = &PTR_FUN_14b477c80;
    local_38 = 0x20;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    cohtml::Property::Property((Property *)local_50,"InstId",true);
    local_50[0] = &PTR_FUN_14b477d10;
    local_38 = 0x30;
    (**(code **)(*local_60 + 0x18))(local_60,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_60);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fbd1b1 FUN_140fbd1b1 body=181 status=ok
// SIG undefined FUN_140fbd1b1(void)

void FUN_140fbd1b1(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x158))
                    (param_1,param_2,FUN_148a06f6b,FUN_148a06fc9,&LAB_148a06fc4,&LAB_148a06f54);
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0x160))(param_1,(longlong)(int)param_2[1]);
    if (0 < (int)param_2[1]) {
      lVar4 = 0;
      iVar3 = 0;
      do {
        lVar1 = *param_2;
        (**(code **)(*param_1 + 0x28))(param_1);
        FUN_140fbd266(param_1,lVar1 + lVar4);
        (**(code **)(*param_1 + 0x48))(param_1,lVar1 + lVar4);
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 0x30;
      } while (iVar3 < (int)param_2[1]);
    }
                    /* WARNING: Could not recover jumptable at 0x000140fbd253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x168))(param_1);
    return;
  }
  return;
}



// FUNCTION 140fbd266 FUN_140fbd266 body=298 status=ok
// SIG undefined FUN_140fbd266(void)

void FUN_140fbd266(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined **local_50 [3];
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x10))(param_1,&local_60,"FGbxUIComponentPayload",param_2);
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    cohtml::Property::Property((Property *)local_50,"Ident",true);
    local_50[0] = &PTR_FUN_14b477da0;
    local_38 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    plVar1 = local_60;
    cohtml::Property::Property((Property *)local_50,"ContentPath",true);
    local_50[0] = &PTR_FUN_14b477da0;
    local_38 = 0x10;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    cohtml::Property::Property((Property *)local_50,"JSPath",true);
    local_50[0] = &PTR_FUN_14b477da0;
    local_38 = 0x20;
    (**(code **)(*local_60 + 0x18))(local_60,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_60);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fbd39a FUN_140fbd39a body=749 status=ok
// SIG undefined FUN_140fbd39a(void)

undefined8 * FUN_140fbd39a(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1409e6ae2();
  *param_1 = &PTR_FUN_14b6a0d20;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0x3007;
  param_1[0x94] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  *(undefined8 *)((longlong)param_1 + 0x48c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x494) = 0;
  param_1[0x95] = &PTR_FUN_14b023b08;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  param_1[0x98] = 0;
  *(undefined2 *)(param_1 + 0x99) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0x3b9cbb9e;
  *(undefined2 *)(param_1 + 0xa5) = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xac] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x554) = 0;
  *(undefined4 *)(param_1 + 0xad) = 0xc000;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x584) = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58c) = 0xffffffff;
  param_1[0xba] = 0;
  *(undefined4 *)(param_1 + 0xbb) = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x593) = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5e4) = 0;
  param_1[0xbe] = 0;
  *(undefined4 *)(param_1 + 0xbf) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 3;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  *(undefined4 *)(param_1 + 0xc5) = 0x447a0000;
  param_1[0xd7] = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6cc) = 0;
  param_1[0xdb] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  lVar4 = DAT_14cbcd1e0;
  param_1[0xe9] = 0x4049000000000000;
  param_1[0xea] = 0x4049000000000000;
  param_1[0xeb] = 0x4049000000000000;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  *(undefined8 *)((longlong)param_1 + 0x769) = 0;
  *(undefined8 *)((longlong)param_1 + 0x771) = 0;
  *(undefined2 *)((longlong)param_1 + 0x779) = 1;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  *(undefined4 *)(param_1 + 0xf2) = 0x3dcccccd;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xf3) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x79c) = uVar1;
  *(undefined4 *)(param_1 + 0xf4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x7a4) = uVar3;
  param_1[0xf5] = DAT_14c8464f0;
  param_1[0xf6] = 0;
  *(undefined1 *)(param_1 + 0x57) = 1;
  if (lVar4 != 0) {
    param_1[0xaf] = lVar4;
    *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  local_20 = "usabilitydata_lootable_default";
  local_18 = 0x1e;
  local_14 = 0;
  uVar5 = FUN_14001a6c0(&local_20,1);
  if (param_1[0x35] != (ulonglong)uVar5) {
    param_1[0x37] = 0;
  }
  param_1[0x35] = (ulonglong)uVar5;
  *(undefined1 *)((longlong)param_1 + 0x2f9) = 1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fbd69e FUN_140fbd69e body=706 status=ok
// SIG undefined FUN_140fbd69e(void)

void FUN_140fbd69e(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(byte *)(param_1 + 0x80) & 1) != 0) ||
     (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x1b0), plVar2 == (longlong *)0x0))
  goto LAB_140fbd77e;
  lVar6 = *plVar2;
  if (*(code **)(lVar6 + 0x5e8) == FUN_140972dde) {
    if (plVar2[0x76] == 0) {
      if (*(code **)(lVar6 + 0x5f8) == FUN_144784df4) {
        if (*(code **)(plVar2[0x784] + 0x18) == (code *)&LAB_144904684) {
          if ((((*(int *)((longlong)plVar2 + 0x75b4) == 0) ||
               (uVar1 = *(uint *)(plVar2 + 0xeb6), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)
              ) || (((plVar8 = (longlong *)
                               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                     plVar8 == (longlong *)0x0 ||
                     ((int)plVar8[2] != *(int *)((longlong)plVar2 + 0x75b4))) ||
                    ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) goto LAB_140fbd77e;
          if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
            lVar6 = *plVar8;
          }
          else {
            lVar6 = 0;
          }
          lVar6 = lVar6 + 0x110;
        }
        else {
          lVar6 = (**(code **)(plVar2[0x784] + 0x18))(plVar2 + 0x784);
        }
        if (lVar6 == 0) goto LAB_140fbd77e;
        lVar6 = *(longlong *)(lVar6 + 0x20);
      }
      else {
        lVar6 = (**(code **)(lVar6 + 0x5f8))(plVar2);
      }
      if (lVar6 == 0) goto LAB_140fbd77e;
      lVar6 = *(longlong *)(lVar6 + 0x3b0);
      goto LAB_140fbd7d0;
    }
  }
  else {
    lVar6 = (**(code **)(lVar6 + 0x5e8))(plVar2);
LAB_140fbd7d0:
    if (lVar6 == 0) goto LAB_140fbd77e;
    lVar6 = *plVar2;
  }
  cVar5 = (**(code **)(lVar6 + 0x700))(plVar2);
  if (cVar5 != '\0') {
    *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) | 1;
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (0.0 < *(float *)(lVar6 + 0x5c)) {
      local_58 = 0;
      uStack_50 = 0;
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      local_68 = (undefined8 *)0x0;
      local_60 = 0;
      FUN_1446efa72(&local_68,0,3,0x10);
      puVar4 = local_68;
      local_60 = 3;
      *local_68 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar6 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_68[2] = lVar7;
      *local_68 = &PTR_FUN_14b4aa630;
      local_68[3] = 0;
      FUN_14485c47a(local_68 + 3,param_1);
      puVar4[4] = &LAB_148a19ec0;
      local_78 = &local_58;
      FUN_14107bdda(uVar3,&local_68,1,param_1);
      FUN_1449db362(&local_68);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      lVar6 = *(longlong *)(param_1 + 0x40);
    }
    if (0.0 < *(float *)(lVar6 + 0x58)) {
      lVar6 = *(longlong *)(param_1 + 0x30);
      FUN_1457db1a4(&local_70);
      local_58 = 0;
      FUN_14485c47a(&local_58,param_1);
      uStack_50 = local_70;
      FUN_14113f0c0(&local_58);
      FUN_14053c012(lVar6 + 0xa70,&local_58);
    }
  }
LAB_140fbd77e:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fbd962 FUN_140fbd962 body=40 status=ok
// SIG undefined FUN_140fbd962(void)

undefined8 FUN_140fbd962(undefined8 param_1,int param_2)

{
  FUN_140fbd98a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fbd98a FUN_140fbd98a body=600 status=ok
// SIG undefined FUN_140fbd98a(void)

void FUN_140fbd98a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b021dc0;
  param_1[0x72] = &PTR_FUN_14b022410;
  param_1[0x73] = &PTR_FUN_14b022430;
  param_1[0x74] = &PTR_FUN_14b022460;
  param_1[0x75] = &PTR_FUN_14b022470;
  param_1[0x76] = &PTR_FUN_14b0224e0;
  param_1[0x77] = &PTR_FUN_14b022510;
  param_1[0x78] = &PTR_FUN_14b022540;
  param_1[0x7f] = &PTR_FUN_14b0225f0;
  param_1[0x80] = &PTR_FUN_14b022660;
  param_1[0x81] = &PTR_FUN_14b0226d0;
  param_1[0x82] = &PTR_FUN_14b022700;
  param_1[0x83] = &PTR_FUN_14b022740;
  param_1[0x84] = &PTR_FUN_14b0227e0;
  param_1[0x85] = &PTR_FUN_14b022800;
  param_1[0x89] = &PTR_FUN_14b022820;
  param_1[0x8a] = &PTR_FUN_14b0228e0;
  param_1[0x8b] = &PTR_FUN_14b022960;
  param_1[0x8c] = &PTR_FUN_14b0229b0;
  param_1[0x8d] = &PTR_FUN_14b0229f0;
  param_1[0x8e] = &PTR_FUN_14b022a10;
  param_1[0x8f] = &PTR_FUN_14b022a30;
  param_1[0x90] = &PTR_FUN_14b022a50;
  param_1[0x91] = &PTR_FUN_14b022a70;
  param_1[0x92] = &PTR_FUN_14b022a90;
  param_1[0x93] = &PTR_FUN_14b022ab0;
  param_1[0x94] = &PTR_FUN_14b022ad0;
  param_1[0x95] = &PTR_FUN_14b022af0;
  param_1[0x96] = &PTR_FUN_14b022b10;
  param_1[0x34b] = &PTR_FUN_14b022b30;
  param_1[0x34c] = &PTR_FUN_14b022c10;
  FUN_140fbdc96(param_1 + 0x386);
  if (param_1[0x382] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x380] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x362] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x35d) = 0;
  if (param_1[0x35c] != 0) {
    FUN_1400020a8();
  }
  FUN_140fbdbe2(param_1 + 0x354);
  if (param_1[0x351] != 0) {
    FUN_1400020a8();
  }
  FUN_140639d0a(param_1);
  return;
}



// FUNCTION 140fbdbe2 FUN_140fbdbe2 body=55 status=ok
// SIG undefined FUN_140fbdbe2(void)

void FUN_140fbdbe2(longlong *param_1)

{
  FUN_140fbdc1a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140fbdc1a FUN_140fbdc1a body=123 status=ok
// SIG undefined FUN_140fbdc1a(void)

void FUN_140fbdc1a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140fbdc96 FUN_140fbdc96 body=83 status=ok
// SIG undefined FUN_140fbdc96(void)

void FUN_140fbdc96(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b023630;
  if (param_1[8] == 0) {
    *param_1 = &PTR_FUN_14b0236e0;
  }
  else {
    FUN_140872868(param_1);
    *param_1 = &PTR_FUN_14b0236e0;
    if (param_1[8] != 0) {
      FUN_140872868(param_1);
    }
  }
  FUN_1403d7c6c(param_1);
  return;
}



// FUNCTION 140fbdcea FUN_140fbdcea body=388 status=ok
// SIG undefined FUN_140fbdcea(void)

void FUN_140fbdcea(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (*(short *)(*(longlong *)(param_1 + 0x18) + 0xb6) == 0x20)) {
    if (*param_2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(*param_2 + 0x130);
    }
    plVar2 = (longlong *)FUN_14001cc68(0x20,0x10);
    plVar2[1] = (longlong)&DAT_100000001;
    *plVar2 = (longlong)&PTR_FUN_14a7be080;
    local_50 = plVar2 + 2;
    plVar2[2] = (longlong)param_2;
    *(undefined4 *)(plVar2 + 3) = 1;
    if (plVar2 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      local_48 = plVar2;
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    local_38 = 0;
    local_40 = param_3;
    plVar3 = (longlong *)FUN_140721bac(*(undefined8 *)(lVar4 + 0x10));
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3);
    local_38 = *(undefined8 *)
                (*(longlong *)(*plVar3 + (longlong)*(int *)(*(longlong *)(param_3 + 8) + 0x20) * 8)
                + 0x70);
    FUN_140fbde72(param_1,lVar4,&local_50);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar2 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar2)(plVar2);
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fbde70 FUN_140fbde70 body=1 status=ok
// SIG undefined FUN_140fbde70(void)

void FUN_140fbde70(void)

{
  return;
}



// FUNCTION 140fbde72 FUN_140fbde72 body=123 status=ok
// SIG undefined FUN_140fbde72(void)

void FUN_140fbde72(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140fbdeab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x248))(param_2,lVar3,param_3,*(code **)(*param_2 + 0x248));
    return;
  }
  plVar2 = *(longlong **)(lVar1 + 0x110);
  if (plVar2 == (longlong *)0x0) {
    FUN_140aa6c08(lVar1);
    plVar2 = *(longlong **)(lVar1 + 0x110);
    lVar3 = *(longlong *)(param_1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x000140fbdeea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x248))(plVar2,lVar3,param_3);
  return;
}



// FUNCTION 140fbdf08 FUN_140fbdf08 body=1719 status=ok
// SIG undefined FUN_140fbdf08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fbdf08(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  byte bVar3;
  double *pdVar4;
  longlong lVar5;
  undefined *puVar6;
  uint *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
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
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double _X;
  double _X_00;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double _X_01;
  undefined1 auStack_178 [32];
  double *local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar9 = *(longlong **)(param_1 + 0x1c8);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x4a0))(plVar9,&DAT_14cadad9c);
    }
    if ((*(byte *)(param_1 + 0x60) & 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_178);
    }
  }
  else if ((plVar9 != (longlong *)0x0) &&
          ((lVar10 = *(longlong *)(param_1 + 0xd8), lVar10 != 0 ||
           (lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x1c8), lVar10 != 0)))) {
    local_f8 = *(longlong *)(param_1 + 0x98);
    local_108 = *(longlong *)(param_1 + 0x88);
    lStack_100 = *(longlong *)(param_1 + 0x90);
    uVar2 = plVar9[7];
    if (uVar2 < 0xffffffff00000000) {
      plVar8 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar8 = (longlong *)0x0;
      }
      (**(code **)(*plVar8 + 0x58))(plVar8,plVar9,uVar2,5);
    }
    else {
      uVar11 = (uint)uVar2;
      if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c998088)) {
        puVar6 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar6 = DAT_14c998080;
        }
        if ((*(uint *)(puVar6 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar11 & 0x1f) & 1) != 0) {
          lVar12 = DAT_14c998060 + (ulonglong)(uVar11 & 0x7fffffff) * 0x68;
          puVar7 = *(uint **)(lVar12 + 0x18);
          if (*(uint **)(lVar12 + 0x18) == (uint *)0x0) {
            puVar7 = (uint *)(lVar12 + 8);
          }
          *puVar7 = *puVar7 | 0x20;
          *(byte *)(lVar12 + 0x60) = *(byte *)(lVar12 + 0x60) | 1;
        }
      }
    }
    plVar9[0x35] = local_f8;
    plVar9[0x33] = local_108;
    plVar9[0x34] = lStack_100;
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    local_118 = *(undefined8 *)(param_1 + 200);
    local_128 = *(undefined8 *)(param_1 + 0xb8);
    uStack_120 = *(undefined8 *)(param_1 + 0xc0);
    uVar2 = *(ulonglong *)(lVar12 + 0x38);
    if (uVar2 < 0xffffffff00000000) {
      plVar9 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar9 = (longlong *)0x0;
      }
      (**(code **)(*plVar9 + 0x58))(plVar9,lVar12,uVar2,6);
    }
    else {
      uVar11 = (uint)uVar2;
      if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c998088)) {
        puVar6 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar6 = DAT_14c998080;
        }
        if ((*(uint *)(puVar6 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar11 & 0x1f) & 1) != 0) {
          lVar5 = DAT_14c998060 + (ulonglong)(uVar11 & 0x7fffffff) * 0x68;
          puVar7 = *(uint **)(lVar5 + 0x18);
          if (*(uint **)(lVar5 + 0x18) == (uint *)0x0) {
            puVar7 = (uint *)(lVar5 + 8);
          }
          *puVar7 = *puVar7 | 0x40;
          *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
        }
      }
    }
    *(undefined8 *)(lVar12 + 0x1c0) = local_118;
    *(undefined8 *)(lVar12 + 0x1b0) = local_128;
    *(undefined8 *)(lVar12 + 0x1b8) = uStack_120;
    local_148 = *(undefined8 *)(param_1 + 0xa0);
    uStack_140 = *(undefined8 *)(param_1 + 0xa8);
    local_138 = *(undefined8 *)(param_1 + 0xb0);
    FUN_14084f00a(*(undefined8 *)(param_1 + 0x1c8));
    if (((lVar10 == *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x120)) &&
        (*(longlong *)(param_1 + 0xd0) == *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x128))) &&
       (iVar1 = *(int *)(lVar10 + 0x140), (longlong)iVar1 != 0)) {
      lVar10 = *(longlong *)(lVar10 + 0x138);
      lVar12 = 0;
      bVar3 = DAT_14c950c29;
      do {
        lVar5 = *(longlong *)(param_1 + 0x1c8);
        if ((lVar5 != 0 & bVar3) == 1) {
          FUN_1456cec3c(lVar5);
          bVar3 = DAT_14c950c29;
        }
        if (*(longlong *)(lVar10 + lVar12) == lVar5) {
          lVar10 = *(longlong *)(param_1 + 0x1c8);
          auVar18 = *(undefined1 (*) [16])(lVar10 + 0x1b0);
          dVar14 = auVar18._0_8_;
          dVar15 = auVar18._8_8_;
          dVar13 = *(double *)(lVar10 + 0x1c0);
          pdVar4 = *(double **)(lVar10 + 0x230);
          if (pdVar4 == (double *)0x0) {
            pdVar4 = (double *)FUN_14001cc68(0x40,0x10);
            dVar16 = DAT_14c8463d8;
            *pdVar4 = DAT_14c8463d0;
            pdVar4[1] = dVar16;
            dVar16 = DAT_14c8463e8;
            pdVar4[2] = DAT_14c8463e0;
            pdVar4[3] = dVar16;
            dVar16 = DAT_14c846500;
            pdVar4[4] = DAT_14c8464f8;
            pdVar4[5] = dVar16;
            pdVar4[6] = DAT_14c846508;
            *(double **)(lVar10 + 0x230) = pdVar4;
          }
          auVar22 = _DAT_1499387d0;
          if ((((pdVar4[4] != dVar14) || (NAN(pdVar4[4]) || NAN(dVar14))) ||
              ((pdVar4[5] != dVar15 || ((NAN(pdVar4[5]) || NAN(dVar15) || (pdVar4[6] != dVar13))))))
             || (NAN(pdVar4[6]) || NAN(dVar13))) {
            auVar24._8_8_ = 0;
            auVar24._0_8_ = dVar13;
            dVar16 = (double)DAT_1499387d0;
            dVar17 = DAT_1499387d0._8_8_;
            auVar18 = divpd(auVar18,_DAT_1499387d0);
            auVar21 = divpd(auVar24,_DAT_1499387d0);
            auVar18 = roundpd(auVar18,auVar18,3);
            auVar21 = roundpd(auVar21,auVar21,3);
            auVar30._0_8_ = dVar14 - auVar18._0_8_ * dVar16;
            auVar30._8_8_ = dVar15 - auVar18._8_8_ * dVar17;
            auVar25._0_8_ = dVar13 - auVar21._0_8_ * dVar16;
            auVar25._8_8_ = 0.0 - auVar21._8_8_ * dVar17;
            auVar28._0_8_ = auVar30._0_8_ + dVar16;
            auVar28._8_8_ = auVar30._8_8_ + dVar17;
            auVar23._0_8_ = auVar25._0_8_ + dVar16;
            auVar23._8_8_ = auVar25._8_8_ + dVar17;
            auVar21._8_8_ = -(ulonglong)(0.0 <= auVar30._8_8_);
            auVar21._0_8_ = -(ulonglong)(0.0 <= auVar30._0_8_);
            auVar18 = blendvpd(auVar28,auVar30,auVar21);
            auVar29._8_8_ = -(ulonglong)(0.0 <= auVar25._8_8_);
            auVar29._0_8_ = -(ulonglong)(0.0 <= auVar25._0_8_);
            auVar21 = blendvpd(auVar23,auVar25,auVar29);
            auVar26._0_8_ = auVar18._0_8_ + -360.0;
            auVar26._8_8_ = auVar18._8_8_ + -360.0;
            auVar19._8_8_ = -(ulonglong)(180.0 < auVar18._8_8_);
            auVar19._0_8_ = -(ulonglong)(180.0 < auVar18._0_8_);
            auVar29 = blendvpd(auVar18,auVar26,auVar19);
            auVar20._8_8_ = -(ulonglong)(180.0 < auVar21._8_8_);
            auVar20._0_8_ = -(ulonglong)(180.0 < auVar21._0_8_);
            auVar18._8_8_ = auVar21._8_8_ + 0.0;
            auVar18._0_8_ = auVar21._0_8_ + -360.0;
            auVar18 = blendvpd(auVar21,auVar18,auVar20);
            *(undefined1 (*) [16])(pdVar4 + 4) = auVar29;
            dVar13 = auVar18._0_8_;
            pdVar4[6] = dVar13;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = dVar13;
            auVar18 = divpd(auVar29,auVar22);
            auVar22 = divpd(auVar31,auVar22);
            auVar18 = roundpd(auVar18,auVar18,3);
            auVar22 = roundpd(auVar22,auVar22,3);
            dVar27 = (auVar29._0_8_ - auVar18._0_8_ * dVar16) * 0.008726646259971648;
            _X = (auVar29._8_8_ - auVar18._8_8_ * dVar17) * 0.008726646259971648;
            _X_00 = (dVar13 - auVar22._0_8_ * dVar16) * 0.008726646259971648;
            _X_01 = (0.0 - auVar22._8_8_ * dVar17) * 0.008726646259971648;
            dVar13 = sin(dVar27);
            dVar14 = sin(_X);
            dVar15 = sin(_X_00);
            sin(_X_01);
            dVar16 = cos(dVar27);
            dVar17 = cos(_X);
            dVar27 = cos(_X_00);
            cos(_X_01);
            *pdVar4 = dVar13 * dVar14 * dVar27 - dVar16 * dVar17 * dVar15;
            pdVar4[1] = -(dVar13 * dVar17 * dVar27) - dVar16 * dVar14 * dVar15;
            pdVar4[2] = -(dVar17 * dVar13 * dVar15) + dVar14 * dVar16 * dVar27;
            pdVar4[3] = dVar14 * dVar13 * dVar15 + dVar17 * dVar16 * dVar27;
          }
          local_e8 = *pdVar4;
          dStack_e0 = pdVar4[1];
          local_d8 = pdVar4[2];
          dStack_d0 = pdVar4[3];
          local_158 = &local_e8;
          local_150 = 0;
          FUN_140092404(lVar10,*(undefined8 *)(lVar10 + 0x120),*(undefined8 *)(lVar10 + 0x128),1);
          goto LAB_140fbe232;
        }
        lVar12 = lVar12 + 8;
      } while ((longlong)iVar1 * 8 != lVar12);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_178);
  }
LAB_140fbe232:
  if ((local_c0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fbe69c FUN_140fbe69c body=1365 status=ok
// SIG undefined FUN_140fbe69c(void)

void FUN_140fbe69c(longlong param_1,undefined8 *param_2)

{
  void **ppvVar1;
  byte *pbVar2;
  void *pvVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  void *local_e8;
  int local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  void *local_c8;
  int local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  void *local_a8;
  int local_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_78;
  ulonglong uStack_70;
  void *local_68;
  int local_60;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14099dcfc();
  uStack_90 = CONCAT44(uStack_90._4_4_,DAT_14c9a7588);
  local_98 = DAT_14c9a7580;
  FUN_1448075d0(&local_68);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar7 = &DAT_14c9a1288;
    }
    else {
      plVar7 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
      plVar10 = plVar7 + 8;
      if ((longlong *)plVar7[9] != (longlong *)0x0) {
        plVar10 = (longlong *)plVar7[9];
      }
      iVar9 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar7[10] - 1U & (uint)local_68) * 4);
      if (iVar9 != -1) {
        do {
          lVar11 = *plVar7 + (longlong)iVar9 * 0x40;
          if (*(uint *)(*plVar7 + (longlong)iVar9 * 0x40) == (uint)local_68) {
            if ((((lVar11 != 0) &&
                 (puVar8 = (undefined8 *)(lVar11 + 0x28), puVar8 != (undefined8 *)0x0)) &&
                ((byte *)*puVar8 != (byte *)0x0)) && ((*(byte *)*puVar8 & 0x40) == 0))
            goto LAB_140fbe76e;
            break;
          }
          iVar9 = *(int *)(lVar11 + 0x38);
        } while (iVar9 != -1);
      }
    }
  }
  puVar8 = &DAT_14c9a1308;
LAB_140fbe76e:
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  pbVar2 = (byte *)*puVar8;
  if (pbVar2 != (byte *)0x0) {
    bVar4 = *pbVar2 & 3;
    if ((bVar4 != 0) && ((*pbVar2 & 0x68) == 0)) {
      if (*(short *)(pbVar2 + 0x20) < 0) {
        if (bVar4 == 1) {
          uVar6 = *(undefined8 *)(pbVar2 + 8);
        }
        else {
          uVar6 = 0;
        }
        FUN_1470e10fe(&local_d8,uVar6);
        pvVar3 = local_c8;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x20) = local_d8;
        *(undefined4 *)(param_1 + 0x24) = uStack_d4;
        *(undefined4 *)(param_1 + 0x28) = uStack_d0;
        *(undefined4 *)(param_1 + 0x2c) = uStack_cc;
        ppvVar1 = (void **)(param_1 + 0x30);
        if (ppvVar1 != &local_c8) {
          *(int *)(param_1 + 0x38) = local_c0;
          if (local_c0 == 0 && *(int *)(param_1 + 0x3c) == 0) {
            *(undefined4 *)(param_1 + 0x3c) = 0;
          }
          else {
            FUN_1446dd670(ppvVar1,local_c0);
            if (local_c0 != 0) {
              memcpy(*ppvVar1,pvVar3,(longlong)local_c0 * 2);
            }
          }
        }
      }
      else if ((pbVar2[1] & 1) == 0) {
        uVar6 = FUN_142b207ce(pbVar2 + 0x24);
        local_98 = (void *)0x0;
        uStack_90 = 0;
        FUN_1400b2348(uVar6,&local_98,1);
        local_88 = 0;
        uStack_80 = 0;
        local_78 = (void *)0x0;
        uStack_70 = 0;
        local_68 = local_98;
        local_60 = (int)uStack_90 + -1;
        if ((int)uStack_90 == 0) {
          local_60 = 0;
        }
        FUN_14475bf92(&local_88);
        pvVar3 = local_78;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x20) = (undefined4)local_88;
        *(undefined4 *)(param_1 + 0x24) = local_88._4_4_;
        *(undefined4 *)(param_1 + 0x28) = (undefined4)uStack_80;
        *(undefined4 *)(param_1 + 0x2c) = uStack_80._4_4_;
        ppvVar1 = (void **)(param_1 + 0x30);
        if (ppvVar1 != &local_78) {
          iVar9 = (int)uStack_70;
          lVar11 = (longlong)(int)uStack_70;
          *(int *)(param_1 + 0x38) = (int)uStack_70;
          if ((int)uStack_70 == 0 && *(int *)(param_1 + 0x3c) == 0) {
            *(undefined4 *)(param_1 + 0x3c) = 0;
          }
          else {
            FUN_1446dd670(ppvVar1,uStack_70 & 0xffffffff);
            if (iVar9 != 0) {
              memcpy(*ppvVar1,pvVar3,lVar11 * 2);
            }
          }
        }
        local_c8 = local_98;
        if (local_78 != (void *)0x0) {
          FUN_1400020a8();
          local_c8 = local_98;
        }
      }
      else {
        FUN_14006788a(&local_b8,pbVar2,0,1);
        pvVar3 = local_a8;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x20) = local_b8;
        *(undefined4 *)(param_1 + 0x24) = uStack_b4;
        *(undefined4 *)(param_1 + 0x28) = uStack_b0;
        *(undefined4 *)(param_1 + 0x2c) = uStack_ac;
        ppvVar1 = (void **)(param_1 + 0x30);
        local_c8 = local_a8;
        if (ppvVar1 != &local_a8) {
          *(int *)(param_1 + 0x38) = local_a0;
          if (local_a0 == 0 && *(int *)(param_1 + 0x3c) == 0) {
            *(undefined4 *)(param_1 + 0x3c) = 0;
          }
          else {
            FUN_1446dd670(ppvVar1,local_a0);
            local_c8 = local_a8;
            if (local_a0 != 0) {
              memcpy(*ppvVar1,pvVar3,(longlong)local_a0 * 2);
              local_c8 = local_a8;
            }
          }
        }
      }
      if (local_c8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar6 = FUN_14099df22();
    FUN_1400bbfc4(&local_f8,uVar6);
    pvVar3 = local_e8;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = local_f8;
    *(undefined4 *)(param_1 + 0x24) = uStack_f4;
    *(undefined4 *)(param_1 + 0x28) = uStack_f0;
    *(undefined4 *)(param_1 + 0x2c) = uStack_ec;
    ppvVar1 = (void **)(param_1 + 0x30);
    if (ppvVar1 != &local_e8) {
      *(int *)(param_1 + 0x38) = local_e0;
      if (local_e0 == 0 && *(int *)(param_1 + 0x3c) == 0) {
        *(undefined4 *)(param_1 + 0x3c) = 0;
      }
      else {
        FUN_1446dd670(ppvVar1,local_e0);
        if (local_e0 != 0) {
          memcpy(*ppvVar1,pvVar3,(longlong)local_e0 * 2);
        }
      }
    }
    if (local_e8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  uStack_90 = CONCAT44(uStack_90._4_4_,DAT_14c9a75a0);
  local_98 = DAT_14c9a7598;
  FUN_1448075d0(&local_68);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar7 = &DAT_14c9a1288;
    }
    else {
      plVar7 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
      plVar10 = plVar7 + 8;
      if ((longlong *)plVar7[9] != (longlong *)0x0) {
        plVar10 = (longlong *)plVar7[9];
      }
      iVar9 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar7[10] - 1U & (uint)local_68) * 4);
      if (iVar9 != -1) {
        do {
          lVar11 = *plVar7 + (longlong)iVar9 * 0x40;
          if (*(uint *)(*plVar7 + (longlong)iVar9 * 0x40) == (uint)local_68) {
            if (((lVar11 != 0) &&
                (puVar8 = (undefined8 *)(lVar11 + 0x28), puVar8 != (undefined8 *)0x0)) &&
               (((byte *)*puVar8 != (byte *)0x0 && ((*(byte *)*puVar8 & 0x40) == 0))))
            goto LAB_140fbe8ba;
            break;
          }
          iVar9 = *(int *)(lVar11 + 0x38);
        } while (iVar9 != -1);
      }
    }
  }
  puVar8 = &DAT_14c9a1308;
LAB_140fbe8ba:
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  pbVar2 = (byte *)*puVar8;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 0x68) == 0 && (*pbVar2 & 3) != 0)) {
    uVar5 = FUN_14000584e(pbVar2,0);
    *(undefined1 *)(param_1 + 0x40) = uVar5;
  }
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fbebf8 FUN_140fbebf8 body=57 status=ok
// SIG undefined FUN_140fbebf8(void)

void FUN_140fbebf8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0dd0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0dd0 = FUN_140002ddd(FUN_1465ac5ff,uVar1,L"GbxBrainAspect_Revive");
  }
  return;
}



// FUNCTION 140fbec32 FUN_140fbec32 body=335 status=ok
// SIG undefined FUN_140fbec32(void)

undefined8 FUN_140fbec32(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  byte bVar5;
  bool bVar6;
  
  lVar2 = *param_2;
  bVar5 = *(byte *)(param_1 + 0x448);
  if ((((((*(byte *)(lVar2 + 0x448) ^ bVar5) & 0x1c) == 0) &&
       ((bVar5 & 1) == (*(byte *)(lVar2 + 0x448) & 1))) && ((bVar5 >> 1 & 1) == (bVar5 & 1))) &&
     ((*(int *)(param_1 + 0x4b8) == *(int *)(lVar2 + 0x4b8) &&
      (*(int *)(param_1 + 0x4bc) == *(int *)(lVar2 + 0x4bc))))) {
    cVar3 = FUN_1401246e4(param_1 + 0x450,lVar2 + 0x450);
    if (cVar3 != '\0') {
      cVar3 = FUN_1401246e4(param_1 + 0x458,lVar2 + 0x450);
      if (cVar3 != '\0') {
        bVar5 = *(byte *)(param_1 + 0x448) >> 7;
        if (bVar5 == (byte)-(*(char *)(lVar2 + 0x448) >> 7)) {
          bVar1 = *(byte *)(param_1 + 0x449);
          if ((((bVar1 & 1) == bVar5) && (((*(byte *)(lVar2 + 0x449) ^ bVar1) & 4) == 0)) &&
             ((bVar6 = (bool)(bVar1 >> 3 & 1), bVar6 == ((*(byte *)(lVar2 + 0x449) >> 3 & 1) != 0)
              && ((((bool)(bVar1 >> 4 & 1) == bVar6 &&
                   (*(int *)(param_1 + 0x548) == *(int *)(lVar2 + 0x548))) &&
                  (*(int *)(param_1 + 0x54c) == *(int *)(param_1 + 0x548))))))) {
            uVar4 = FUN_140fbed82(param_1,param_2,param_3,param_4);
            return uVar4;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140fbed82 FUN_140fbed82 body=1997 status=ok
// SIG undefined FUN_140fbed82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140fbed82(longlong *param_1,longlong *param_2,undefined8 param_3,float param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  bool bVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  undefined1 auStack_88 [32];
  double local_68 [3];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((((*(byte *)(param_1 + 2) & 8) == 0) &&
       (param_2 = (longlong *)*param_2,
       (*(byte *)(param_1 + 2) & 0x10) == 0 && (*(byte *)(param_2 + 2) & 8) == 0)) &&
      (cVar5 = FUN_140fbf550((longlong)param_1 + 0x364), cVar5 != '\0')) &&
     (cVar5 = FUN_140fbf550((longlong)param_2 + 0x364), cVar5 != '\0')) {
    if (((((double)param_2[0x65] != 0.0) || (NAN((double)param_2[0x65]))) ||
        (((double)param_2[0x66] != 0.0 ||
         ((NAN((double)param_2[0x66]) || ((double)param_2[0x67] != 0.0)))))) ||
       (NAN((double)param_2[0x67]))) {
      if ((*(float *)(param_2 + 3) + *(float *)(param_1 + 3) < param_4) &&
         ((double)*(float *)(param_1 + 0x88) <=
          (double)param_1[0x6b] * (double)param_2[0x6b] +
          (double)param_1[0x69] * (double)param_2[0x69] +
          (double)param_1[0x6a] * (double)param_2[0x6a])) goto LAB_140fbee8a;
    }
    else if (((double)param_1[0x65] == 0.0) &&
            ((((!NAN((double)param_1[0x65]) && ((double)param_1[0x66] == 0.0)) &&
              (!NAN((double)param_1[0x66]))) &&
             (((double)param_1[0x67] == 0.0 && (!NAN((double)param_1[0x67]))))))) {
LAB_140fbee8a:
      if (((double)param_1[0xc] != 0.0) ||
         (((NAN((double)param_1[0xc]) || ((double)param_1[0xd] != 0.0)) ||
          (NAN((double)param_1[0xd]))))) {
        bVar13 = false;
      }
      else {
        bVar13 = (double)param_1[0xe] == 0.0;
      }
      if (((((double)param_2[0xc] != 0.0) || (NAN((double)param_2[0xc]))) ||
          ((double)param_2[0xd] != 0.0)) || (NAN((double)param_2[0xd]))) {
        if (bVar13 == false) goto LAB_140fbef09;
      }
      else if (bVar13 == ((double)param_2[0xe] == 0.0)) {
LAB_140fbef09:
        if (((ABS(*(float *)(param_1 + 0x68) - *(float *)(param_2 + 0x68)) <=
              *(float *)((longlong)param_1 + 0x444)) &&
            ((*(float *)(param_2 + 0x68) != 0.0) != (*(float *)(param_1 + 0x68) == 0.0))) &&
           (((((*(float *)(param_1 + 4) == 0.0) != (*(float *)(param_2 + 4) != 0.0) &&
              ((((*(byte *)(param_2 + 2) ^ *(byte *)(param_1 + 2)) & 0x20) == 0 &&
               (*(int *)((longlong)param_1 + 0x2c) == *(int *)((longlong)param_2 + 0x2c))))) &&
             ((int)param_1[5] == (int)param_2[5])) &&
            ((*(float *)((longlong)param_1 + 0x24) == 0.0) !=
             (*(float *)((longlong)param_2 + 0x24) != 0.0))))) {
          cVar5 = (**(code **)(*param_1 + 0x50))(param_1);
          cVar6 = (**(code **)(*param_2 + 0x50))();
          if (cVar5 == cVar6) {
            if (*(int *)((longlong)param_1 + 0x1ec) == 0) {
LAB_140fbf419:
              lVar16 = 0;
            }
            else {
              uVar7 = *(uint *)(param_1 + 0x3d);
              lVar16 = 0;
              if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
                plVar11 = (longlong *)
                          ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
                if ((plVar11 == (longlong *)0x0) ||
                   (((int)plVar11[2] != *(int *)((longlong)param_1 + 0x1ec) ||
                    ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_140fbf419;
                lVar16 = *plVar11;
              }
            }
            if (*(int *)((longlong)param_2 + 0x1ec) == 0) {
LAB_140fbf420:
              lVar15 = 0;
            }
            else {
              uVar7 = *(uint *)(param_2 + 0x3d);
              lVar15 = 0;
              if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
                plVar11 = (longlong *)
                          ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
                if ((plVar11 == (longlong *)0x0) ||
                   (((int)plVar11[2] != *(int *)((longlong)param_2 + 0x1ec) ||
                    ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_140fbf420;
                lVar15 = *plVar11;
              }
            }
            if (lVar16 == 0) {
              if (lVar15 != 0) {
                cVar5 = *(char *)(lVar15 + 0x1fb);
                goto joined_r0x000140fbf371;
              }
              if (DAT_14c7613b4 == 0) goto LAB_140fbf442;
            }
            else {
              cVar5 = *(char *)(lVar16 + 0x1fb);
              bVar13 = cVar5 == '\x02';
              if (lVar15 == 0) {
joined_r0x000140fbf371:
                bVar13 = false;
                uVar8 = 0;
                bVar14 = false;
                if (cVar5 == '\x02') goto LAB_140fbf328;
              }
              else {
                bVar14 = *(char *)(lVar15 + 0x1fb) == '\x02';
                if ((cVar5 == '\x02') != bVar14) goto LAB_140fbf412;
              }
              if (((bVar14) || (bVar13)) || (DAT_14c7613b4 == 0)) {
                if (lVar16 == lVar15) {
LAB_140fbf442:
                  if (param_1[0x3e] == param_2[0x3e]) goto LAB_140fbf0ef;
                }
                goto LAB_140fbf412;
              }
            }
LAB_140fbf0ef:
            if ((*(char *)((longlong)param_1 + 0x12) == *(char *)((longlong)param_2 + 0x12)) &&
               (*(char *)((longlong)param_1 + 0x13) == *(char *)((longlong)param_1 + 0x12))) {
              if ((*(float *)(param_1 + 0x3c) == *(float *)(param_2 + 0x3c)) &&
                 (!NAN(*(float *)(param_1 + 0x3c)) && !NAN(*(float *)(param_2 + 0x3c)))) {
                if ((*(float *)((longlong)param_1 + 0x1e4) == *(float *)((longlong)param_2 + 0x1e4))
                   && (!NAN(*(float *)((longlong)param_1 + 0x1e4)) &&
                       !NAN(*(float *)((longlong)param_2 + 0x1e4)))) {
                  if (*(int *)((longlong)param_1 + 0x204) == 0) {
LAB_140fbf427:
                    lVar16 = 0;
                  }
                  else {
                    uVar7 = *(uint *)(param_1 + 0x40);
                    lVar16 = 0;
                    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
                      plVar11 = (longlong *)
                                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
                      if ((plVar11 == (longlong *)0x0) ||
                         (((int)plVar11[2] != *(int *)((longlong)param_1 + 0x204) ||
                          ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_140fbf427;
                      lVar16 = *plVar11;
                    }
                  }
                  if (*(int *)((longlong)param_1 + 0x2ec) == 0) {
LAB_140fbf42e:
                    lVar15 = 0;
                  }
                  else {
                    uVar7 = *(uint *)(param_1 + 0x5d);
                    lVar15 = 0;
                    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
                      plVar11 = (longlong *)
                                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
                      if ((plVar11 == (longlong *)0x0) ||
                         (((int)plVar11[2] != *(int *)((longlong)param_1 + 0x2ec) ||
                          ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_140fbf42e;
                      lVar15 = *plVar11;
                    }
                  }
                  if (*(int *)((longlong)param_2 + 0x204) == 0) {
LAB_140fbf435:
                    lVar12 = 0;
                  }
                  else {
                    uVar7 = *(uint *)(param_2 + 0x40);
                    lVar12 = 0;
                    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
                      plVar11 = (longlong *)
                                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
                      if ((plVar11 == (longlong *)0x0) ||
                         (((int)plVar11[2] != *(int *)((longlong)param_2 + 0x204) ||
                          ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_140fbf435;
                      lVar12 = *plVar11;
                    }
                  }
                  uVar8 = 0;
                  if ((lVar16 != lVar12) || (lVar15 != lVar12)) goto LAB_140fbf328;
                  lVar12 = param_2[0x41];
                  if ((param_1[0x41] == lVar12) && (param_1[0x5e] == lVar12)) {
                    if (lVar15 == 0) {
                      lVar15 = -(ulonglong)
                                (9.999999747378752e-05 <
                                ABS((double)param_1[0x39] - (double)param_2[0x39]));
                      auVar4._8_4_ = (int)lVar15;
                      auVar4._0_8_ = -(ulonglong)
                                      (9.999999747378752e-05 <
                                      ABS((double)param_1[0x38] - (double)param_2[0x38]));
                      auVar4._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
                      uVar7 = movmskpd((int)lVar12,auVar4);
                      lVar15 = -(ulonglong)
                                (9.999999747378752e-05 <
                                ABS((double)param_1[0x3b] - (double)param_2[0x3b]));
                      auVar3._8_4_ = (int)lVar15;
                      auVar3._0_8_ = -(ulonglong)
                                      (9.999999747378752e-05 <
                                      ABS((double)param_1[0x3a] - (double)param_2[0x3a]));
                      auVar3._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
                      iVar9 = movmskpd((int)lVar16,auVar3);
                      uVar10 = iVar9 << 2 | uVar7;
                      if (uVar10 != 0) {
                        lVar16 = -(ulonglong)
                                  (9.999999747378752e-05 <
                                  ABS((double)param_1[0x39] + (double)param_2[0x39]));
                        auVar1._8_4_ = (int)lVar16;
                        auVar1._0_8_ = -(ulonglong)
                                        (9.999999747378752e-05 <
                                        ABS((double)param_1[0x38] + (double)param_2[0x38]));
                        auVar1._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
                        iVar9 = movmskpd(uVar7,auVar1);
                        lVar16 = -(ulonglong)
                                  (9.999999747378752e-05 <
                                  ABS((double)param_1[0x3b] + (double)param_2[0x3b]));
                        auVar2._8_4_ = (int)lVar16;
                        auVar2._0_8_ = -(ulonglong)
                                        (9.999999747378752e-05 <
                                        ABS((double)param_1[0x3a] + (double)param_2[0x3a]));
                        auVar2._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
                        uVar7 = movmskpd(uVar10,auVar2);
                        if ((uVar7 & 0x3fffffff) != 0 || iVar9 != 0) goto LAB_140fbf412;
                      }
LAB_140fbf304:
                      if ((*(float *)((longlong)param_1 + 0x1c) ==
                           *(float *)((longlong)param_2 + 0x1c)) &&
                         (!NAN(*(float *)((longlong)param_1 + 0x1c)) &&
                          !NAN(*(float *)((longlong)param_2 + 0x1c)))) {
                        uVar8 = CONCAT31((int3)((uint)(int)param_1[0x5c] >> 8),
                                         (int)param_1[0x5c] == (int)param_2[0x3f]);
                        goto LAB_140fbf328;
                      }
                    }
                    else {
                      dVar17 = (double)_DAT_14c7613b8;
                      uVar8 = 0;
                      if (((dVar17 < ABS((double)param_1[0x42] - (double)param_2[0x42])) ||
                          (uVar8 = 0, dVar17 < ABS((double)param_1[0x43] - (double)param_2[0x43])))
                         || (dVar17 < ABS((double)param_1[0x44] - (double)param_2[0x44])))
                      goto LAB_140fbf328;
                      local_68[2] = (double)param_1[0x47] - (double)param_2[0x47];
                      local_68[0] = (double)param_1[0x45] - (double)param_2[0x45];
                      local_68[1] = 0.0;
                      cVar5 = FUN_1467f8b44(local_68,SUB84((double)_DAT_14c7613bc,0));
                      if (cVar5 != '\0') goto LAB_140fbf304;
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
LAB_140fbf412:
  uVar8 = 0;
LAB_140fbf328:
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 140fbf550 FUN_140fbf550 body=70 status=ok
// SIG undefined FUN_140fbf550(void)

bool FUN_140fbf550(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = true;
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && ((lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 != 0 &&
         (*(uint *)(lVar2 + 0x10) == param_1[1])))) {
    bVar3 = (*(uint *)(lVar2 + 8) & 0x10200000) != 0;
  }
  return bVar3;
}



// FUNCTION 140fbf5a2 FUN_140fbf5a2 body=429 status=ok
// SIG undefined FUN_140fbf5a2(void)

undefined8 * FUN_140fbf5a2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140bb8f84();
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *param_1 = &PTR_FUN_14b097f60;
  param_1[0xd] = &PTR_FUN_14b0982e0;
  param_1[0x16] = &PTR_FUN_14b098320;
  param_1[0x17] = &PTR_FUN_14b098340;
  param_1[0x18] = &PTR_FUN_14b098358;
  param_1[0x1d] = &PTR_FUN_14b098370;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xfc) = DAT_14cb8a5d0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0xffffffff;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = DAT_14c9a63f8;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 300) = 0;
  local_38 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_38[1] = (longlong)&DAT_100000001;
  *local_38 = (longlong)&PTR_FUN_14a1b6cc0;
  local_40 = local_38 + 2;
  local_38[2] = (longlong)&PTR_FUN_14a18e458;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  local_38[0xc] = 0;
  local_38[0xd] = 0;
  local_38[0xe] = 0;
  local_38[0xf] = 0;
  local_38[0x10] = 0;
  local_38[0x11] = 0;
  local_38[0x12] = 0;
  FUN_1404e24cc(&local_40);
  FUN_1404e256a(param_1 + 0x26,&local_40);
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fbf750 FUN_140fbf750 body=374 status=ok
// SIG undefined FUN_140fbf750(void)

longlong * FUN_140fbf750(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    FUN_140fbf8c6(param_1,param_2);
  }
  else {
    lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined4 *)(lVar7 + 0xc7c);
    uVar6 = *puVar3;
    pbVar4 = (byte *)(lVar7 + 0xc80);
    bVar5 = *pbVar4;
    if ((bVar5 & 1) != 0) {
      *pbVar4 = 0;
      *puVar3 = 0xffffffff;
    }
    plVar8 = (longlong *)FUN_14001cc68(0x470);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14b97e020;
    memset(plVar8 + 3,0,0x420);
    plVar8[8] = 0;
    plVar8[9] = 0;
    *(undefined4 *)(plVar8 + 10) = 0;
    *(undefined2 *)(plVar8 + 0xb) = 0x101;
    *(undefined1 *)(plVar8 + 0x81) = 0;
    plVar8[0xe] = 0;
    plVar8[0xf] = 0;
    plVar8[0x10] = 0;
    plVar8[0x11] = 0;
    plVar8[0x87] = 0;
    plVar8[0x88] = 0;
    plVar8[0x89] = 0;
    plVar8[0x8a] = 0;
    *(undefined8 *)((longlong)plVar8 + 0x5c) = 0;
    *(undefined8 *)((longlong)plVar8 + 0x61) = 0;
    plVar8[2] = (longlong)&PTR_FUN_14b800e40;
    plVar8[0x8b] = 0;
    plVar8[0x8c] = 0;
    plVar8[0x8d] = 0;
    if ((bVar5 & 1) != 0) {
      *puVar3 = uVar6;
      *pbVar4 = 1;
    }
    FUN_140d895f4(plVar8 + 0x8b,param_1 + 0xd0);
    *param_2 = (longlong)(plVar8 + 2);
    param_2[1] = (longlong)plVar8;
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
  }
  return param_2;
}



// FUNCTION 140fbf8c6 FUN_140fbf8c6 body=366 status=ok
// SIG undefined FUN_140fbf8c6(void)

longlong * FUN_140fbf8c6(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined4 *)(lVar7 + 0xc7c);
  uVar4 = *puVar1;
  pbVar2 = (byte *)(lVar7 + 0xc80);
  bVar3 = *pbVar2;
  if ((bVar3 & 1) != 0) {
    *pbVar2 = 0;
    *puVar1 = 0xffffffff;
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x458);
  puVar6[1] = &DAT_100000001;
  *puVar6 = &PTR_FUN_14b41dc70;
  memset(puVar6 + 3,0,0x420);
  puVar6[2] = &PTR_FUN_14b1787d0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  *(undefined4 *)(puVar6 + 10) = 0;
  *(undefined2 *)(puVar6 + 0xb) = 0x101;
  *(undefined1 *)(puVar6 + 0x81) = 0;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x87] = 0;
  puVar6[0x88] = 0;
  puVar6[0x89] = 0;
  puVar6[0x8a] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x61) = 0;
  *param_2 = (longlong)(puVar6 + 2);
  param_2[1] = (longlong)puVar6;
  if ((bVar3 & 1) != 0) {
    *puVar1 = uVar4;
    *pbVar2 = 1;
  }
  *(undefined1 *)(puVar6 + 5) = *(undefined1 *)(param_1 + 0x90);
  iVar5 = *(int *)(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0x98) != 0 || iVar5 != 0) {
    puVar6[6] = *(longlong *)(param_1 + 0x98);
    *(int *)(puVar6 + 7) = iVar5;
    puVar6[8] = 0;
  }
  *(undefined4 *)(puVar6 + 10) = *(undefined4 *)(param_1 + 0xb8);
  puVar6[9] = *(undefined8 *)(param_1 + 0xb0);
  lVar7 = FUN_140fcbb85();
  FUN_1403de7ba(puVar6 + 0x87,lVar7 + 0x80);
  return param_2;
}



// FUNCTION 140fbfa34 FUN_140fbfa34 body=117 status=ok
// SIG undefined FUN_140fbfa34(void)

void FUN_140fbfa34(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b273730;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140fbfaa9(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b2629f0;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140fbfaa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140fbfaa9 FUN_140fbfaa9 body=77 status=ok
// SIG undefined FUN_140fbfaa9(void)

void FUN_140fbfaa9(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140fbfb03 FUN_140fbfb03 body=144 status=ok
// SIG undefined FUN_140fbfb03(void)

undefined8 FUN_140fbfb03(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1 != 0) {
    uVar3 = FUN_14018b740();
    plVar4 = (longlong *)FUN_144718840(param_1,uVar3);
    if (plVar4 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar4 + 0x58))(plVar4);
      if (cVar1 != '\0') {
        uVar2 = (**(code **)(*plVar4 + 0x18))(plVar4);
        goto LAB_140fbfb45;
      }
    }
  }
  lVar5 = FUN_1405c6693(param_1);
  if (lVar5 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined4 *)(lVar5 + 0x5e0);
  }
LAB_140fbfb45:
  lVar5 = FUN_140425b2f(param_1);
  if (lVar5 != 0) {
    uVar3 = FUN_140fbfb94(lVar5,param_1,uVar2,param_2);
    return uVar3;
  }
  return 1;
}



// FUNCTION 140fbfb94 FUN_140fbfb94 body=450 status=ok
// SIG undefined FUN_140fbfb94(void)

int FUN_140fbfb94(longlong param_1,longlong param_2,int param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*param_4 != 0) {
    *param_4 = 0;
  }
  if (*(longlong *)(param_1 + 0x3f0) == 0) {
LAB_140fbfc0a:
    if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return param_3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar4 = FUN_14030d660();
  lVar2 = *(longlong *)(param_1 + 0x3f0);
  if ((((lVar2 == 0) || (lVar4 == 0)) || (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 == 0)) ||
     ((*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
       lVar4 + 0x30)))) goto LAB_140fbfc0a;
  iVar1 = *(int *)(lVar2 + 0x5e0);
  uVar5 = FUN_140c38791();
  if (param_2 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1478c0a72;
      local_60 = &LAB_1417b2375;
      local_68 = L"Engine";
      local_70 = 0x1000000000;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_140fbfc66;
  }
  param_2 = 0;
LAB_140fbfc66:
  FUN_1412d6d74(uVar5,param_2,param_3 - iVar1,param_4);
  FUN_140d72879();
  FUN_1401e6c61();
  FUN_140b0af60();
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
}



// FUNCTION 140fbfd62 FUN_140fbfd62 body=183 status=ok
// SIG undefined FUN_140fbfd62(void)

undefined8 * FUN_140fbfd62(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_14076ffa2();
  *param_1 = &PTR_FUN_14b2bd500;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xf00000d000000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x1ffffffff;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x14] = DAT_14cb8ce08;
  *param_1 = &PTR_FUN_14b2bd810;
  param_1[6] = &PTR_LAB_14b2bdb00;
  lVar1 = 0xd8;
  do {
    FUN_1406d2124((longlong)param_1 + lVar1);
    lVar1 = lVar1 + 0x150;
  } while (lVar1 != 0x618);
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  return param_1;
}



// FUNCTION 140fbfe2a FUN_140fbfe2a body=44 status=ok
// SIG undefined FUN_140fbfe2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fbfe2a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb88f1c = _DAT_14cb88f1c + -1;
  *param_1 = DAT_14cb88f10;
  DAT_14cb88f10 = param_1;
  return;
}



// FUNCTION 140fbfe56 FUN_140fbfe56 body=66 status=ok
// SIG undefined FUN_140fbfe56(void)

void FUN_140fbfe56(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  FUN_140fbfe98();
  lVar1 = *(longlong *)(param_1 + 0x48);
  cVar2 = FUN_140337e44(lVar1 + 0x140,*(longlong *)(param_1 + 0x40) + 0x240,lVar1 + 0x158);
  *(bool *)(param_1 + 0xd8) = *(char *)(lVar1 + 0x159) != cVar2;
  return;
}



// FUNCTION 140fbfe98 FUN_140fbfe98 body=1401 status=ok
// SIG undefined FUN_140fbfe98(void)

void FUN_140fbfe98(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 uVar13;
  float fVar14;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  code *local_68;
  code *local_60;
  int local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x55) = 0;
  lVar11 = param_1[9];
  cVar3 = FUN_140337e44(lVar11 + 0x38,param_1[8] + 0x240,lVar11 + 0x50);
  *(bool *)((longlong)param_1 + 0x54) = *(char *)(lVar11 + 0x51) != cVar3;
  uVar13 = FUN_140309e34(param_1[9] + 0x58,param_1[8] + 0x240,param_1[9] + 0x70);
  *(undefined4 *)(param_1 + 0xb) = uVar13;
  lVar11 = param_1[9];
  iVar6 = 0x7fffffff;
  if (*(char *)(lVar11 + 0x84) != '\0') {
    iVar6 = *(int *)(lVar11 + 0x80);
  }
  lVar2 = param_1[8];
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (*(int *)((longlong)param_1 + 0x6c) < 0) {
    FUN_1447a8aa0(param_1 + 0xc,0);
  }
  plVar9 = param_1 + 0xf;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)((longlong)param_1 + 0xc4) < 0) {
    FUN_147f53e9a(plVar9,0);
  }
  if (((((*(int *)(lVar2 + 0x4c) != 0) && (uVar1 = *(uint *)(lVar2 + 0x48), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(lVar2 + 0x4c))))) &&
     (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
      (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)))) {
    if (DAT_14cac9ca8 == 0) {
      local_70 = &local_50;
      local_50 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1478c0a72;
      local_80 = &LAB_1417b2375;
      local_88 = L"Engine";
      local_90 = 0x1000000000;
      local_98 = 0x10000004;
      local_a0 = 8;
      local_a8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
        DAT_14cac9ca8 + 0x30)) {
      uVar1 = *(uint *)((longlong)plVar5 + 0xc);
      local_50 = (code *)(ulonglong)uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar4 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar12) {
          local_54 = iVar10;
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
          iVar10 = local_54;
        }
        LOCK();
        iVar4 = *(int *)(lVar7 + 0x10);
        bVar12 = iVar4 == 0;
        if (bVar12) {
          *(int *)(lVar7 + 0x10) = iVar10;
          iVar4 = 0;
        }
        UNLOCK();
        uVar1 = (uint)local_50;
        if (bVar12) {
          iVar4 = iVar10;
        }
      }
      local_50._0_4_ = uVar1;
      local_50 = (code *)CONCAT44(iVar4,(uint)local_50);
      FUN_14108df6c(plVar9);
      lVar7 = FUN_1447210f0(plVar5);
      if (lVar7 == 0) {
        *(undefined4 *)(param_1 + 0x19) = 0;
        iVar4 = 0;
      }
      else {
        uVar1 = *(uint *)(lVar7 + 0xc);
        *(uint *)(param_1 + 0x19) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        iVar4 = *(int *)(lVar7 + 0x10);
        if (*(int *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar12) {
            local_54 = iVar10;
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
            iVar10 = local_54;
          }
          LOCK();
          iVar4 = *(int *)(lVar7 + 0x10);
          bVar12 = iVar4 == 0;
          if (bVar12) {
            *(int *)(lVar7 + 0x10) = iVar10;
            iVar4 = 0;
          }
          UNLOCK();
          if (bVar12) {
            iVar4 = iVar10;
          }
        }
      }
      *(int *)((longlong)param_1 + 0xcc) = iVar4;
      if (DAT_14caf64b8 == 0) {
        local_50 = FUN_141030f22;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_142b4754c;
        local_70 = &local_50;
        local_78 = &LAB_147c45ce0;
        local_80 = &LAB_1463f1ff4;
        local_88 = L"Game";
        local_90 = 0x4000000000;
        local_98 = 0x10000004;
        local_a0 = 8;
        local_a8 = 0x428;
        FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
      }
      if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) ==
          DAT_14caf64b8 + 0x30)) {
        uVar13 = (**(code **)(*plVar5 + 0x678))(plVar5);
        *(undefined4 *)(param_1 + 0xe) = uVar13;
      }
    }
  }
  if (*(char *)(lVar11 + 0xa8) == '\x01') {
    lVar7 = lVar11 + 0x88;
    if ((longlong)*(int *)(lVar11 + 0xb8) != 0) {
      lVar8 = *(longlong *)(lVar11 + 0xb0);
      lVar11 = (longlong)*(int *)(lVar11 + 0xb8) * 0x40 + lVar8;
      local_54 = iVar6;
      do {
        cVar3 = FUN_140337e44(lVar8,lVar2 + 0x240,lVar8 + 0x18);
        iVar6 = local_54;
        if (*(char *)(lVar8 + 0x19) != cVar3) {
          lVar7 = lVar8 + 0x20;
          break;
        }
        lVar8 = lVar8 + 0x40;
      } while (lVar8 != lVar11);
    }
    uVar13 = FUN_140309e34(lVar7,lVar2 + 0x240,lVar7 + 0x18);
    *(undefined4 *)(param_1 + 0xe) = uVar13;
  }
  (**(code **)(*param_1 + 0xe0))(param_1,param_1 + 0xc,plVar9,iVar6);
  fVar14 = (float)(int)param_1[0xd];
  if (fVar14 <= 1.0) {
    fVar14 = 1.0;
  }
  *(float *)((longlong)param_1 + 0xd4) = fVar14;
  iVar6 = (int)param_1[0x18];
  *(uint *)(param_1 + 0x18) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc4) < iVar6 + 1U) {
    FUN_1457ef560(plVar9,iVar6);
  }
  if ((longlong *)param_1[0x17] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[0x17];
  }
  plVar9[iVar6] = 0;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fc0412 FUN_140fc0412 body=446 status=ok
// SIG undefined FUN_140fc0412(void)

undefined8 * FUN_140fc0412(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  void *_Dst;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong _Size;
  
  if ((*(longlong *)(param_1 + 0x138) == 0) || (*(int *)(*(longlong *)(param_1 + 0x138) + 0x20) < 1)
     ) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)FUN_14001cc68(0x348);
    *(undefined4 *)(puVar5 + 1) = 0xffffffff;
    *(undefined2 *)((longlong)puVar5 + 0xc) = 0x105;
    *(undefined1 *)((longlong)puVar5 + 0xe) = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0xc7efffffe0000000;
    puVar5[6] = 0;
    puVar5[7] = 0;
    *(undefined8 *)((longlong)puVar5 + 0x3f) = 0;
    puVar5[9] = 0;
    *puVar5 = &PTR_FUN_14aad43f0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0x66] = param_1;
    *(undefined4 *)(puVar5 + 0x67) = 0;
    puVar5[0x68] = 0;
    memset(puVar5 + 0xc,0,0x2d0);
    lVar3 = *(longlong *)(param_1 + 0x138);
    iVar2 = *(int *)(lVar3 + 0x20);
    iVar8 = 1;
    if (1 < *(int *)(lVar3 + 0x14)) {
      iVar8 = *(int *)(lVar3 + 0x14);
    }
    if (iVar8 <= iVar2) {
      uVar9 = 0;
      puVar10 = puVar5;
      do {
        lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + uVar9 * 8);
        uVar6 = (ulonglong)*(uint5 *)(lVar4 + 0x28);
        if (uVar6 != 0) {
          lVar1 = lVar4 + 0x20;
          *(int *)(puVar5 + 0x67) = *(int *)(puVar5 + 0x67) + *(int *)(lVar4 + 0x28);
          uVar6 = uVar6 / 6;
          lVar7 = FUN_140fc05d0(lVar1,1);
          _Size = uVar6 & 0xffffffff;
          lVar12 = 0x60;
          uVar11 = 0;
          do {
            _Dst = (void *)FUN_14001cc68(_Size,0);
            *(void **)((longlong)puVar10 + lVar12) = _Dst;
            memcpy(_Dst,(void *)((uVar11 & 0xffffffff) + lVar7),_Size);
            lVar12 = lVar12 + 0x78;
            uVar11 = uVar11 + uVar6;
          } while (lVar12 != 0x330);
          *(undefined1 *)(lVar4 + 0x33) = 0;
          if ((*(byte *)(lVar4 + 0x34) & 8) != 0) {
            FUN_1400ea36e(lVar1,lVar1);
          }
        }
        uVar9 = uVar9 + 1;
        puVar10 = puVar10 + 1;
      } while (uVar9 != (iVar2 - iVar8) + 1);
    }
  }
  return puVar5;
}



// FUNCTION 140fc05d0 FUN_140fc05d0 body=139 status=ok
// SIG undefined FUN_140fc05d0(void)

longlong * FUN_140fc05d0(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong *plVar2;
  
  FUN_14031515e();
  if ((param_2 & 2) == 0) {
    if ((param_2 & 1) == 0) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/BulkData.cpp",0x3e6,
                    L"Unknown lock flag \'%u\'",param_2);
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x13) = 1;
      plVar2 = (longlong *)*param_1;
      if ((*(byte *)((longlong)param_1 + 0x17) & 0x40) == 0) {
        return plVar2;
      }
      if (plVar2 != (longlong *)0x0) {
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          return (longlong *)*plVar2;
        }
        if (plVar2[2] != 0) {
          return *(longlong **)(plVar2[2] + 8);
        }
      }
    }
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x13) = 2;
    uVar1 = *(uint *)((longlong)param_1 + 0x14);
    *(uint *)((longlong)param_1 + 0x14) = uVar1 & 0xfffbffff;
    if ((uVar1 >> 0x1e & 1) == 0) {
      return (longlong *)*param_1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140fc065c FUN_140fc065c body=10411 status=ok
// SIG undefined FUN_140fc065c(void)

void FUN_140fc065c(longlong param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  ulonglong uVar22;
  uint *puVar23;
  undefined8 *puVar24;
  uint uVar25;
  ushort *puVar26;
  longlong *plVar27;
  uint uVar28;
  int iVar29;
  longlong *plVar30;
  uint **ppuVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined8 *puVar34;
  ulonglong *puVar35;
  longlong lVar36;
  ulonglong uVar37;
  bool bVar38;
  undefined4 uVar39;
  undefined1 auStack_3e8 [32];
  longlong *local_3c8;
  longlong local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  longlong local_3a8;
  longlong local_3a0;
  longlong *local_398;
  longlong *local_390;
  longlong local_388;
  ulonglong local_380;
  longlong *local_378;
  ulonglong local_370;
  longlong *local_368;
  longlong local_360;
  longlong local_358;
  longlong local_350;
  longlong local_348;
  longlong local_340;
  undefined8 local_338;
  longlong local_330;
  int local_328;
  uint *local_320;
  undefined4 local_318;
  longlong local_310;
  longlong local_308;
  longlong local_300;
  longlong local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  longlong *local_2d8;
  int local_2d0;
  longlong local_2c8;
  uint *local_2c0;
  longlong *local_2b8;
  int local_2b0;
  undefined4 uStack_2ac;
  longlong local_2a8;
  longlong *local_2a0;
  undefined4 local_298;
  longlong *local_290;
  longlong *local_288;
  undefined4 local_280;
  longlong local_278;
  uint *local_270;
  undefined8 local_268;
  int local_260;
  undefined4 uStack_25c;
  undefined1 local_254 [4];
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  uint local_238;
  uint local_234;
  uint local_230 [4];
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  uint local_208 [4];
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 uStack_1e8;
  ulonglong local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  uint *local_180;
  undefined4 local_178;
  longlong local_170;
  longlong local_168;
  undefined8 local_160;
  longlong local_158;
  longlong local_150;
  undefined4 local_148;
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  ulonglong uStack_128;
  uint *local_120;
  undefined4 local_118;
  longlong local_110;
  uint *local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  uint *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined4 local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined4 local_88;
  longlong local_80;
  uint *local_78;
  undefined4 local_70;
  longlong local_68;
  uint *local_60;
  undefined4 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  local_3a8 = param_1;
  lVar10 = FUN_14009d2a0();
  lVar11 = FUN_14038fb82();
  uVar4 = local_248;
  if (DAT_14c76101d != '\x01') goto LAB_140fc1afb;
  uVar1 = *(ushort *)(lVar11 + 0xfa);
  iVar29 = uVar1 + 1;
  local_254._0_2_ = *(undefined2 *)(lVar10 + 0x11a);
  local_254._2_2_ = *(undefined2 *)(lVar11 + 0xf10);
  local_250._0_4_ = CONCAT22(*(undefined2 *)(lVar11 + 0xf4),uVar1);
  local_250._0_6_ = CONCAT24(*(undefined2 *)(lVar11 + 0xf8),(undefined4)local_250);
  local_250 = (undefined8 *)CONCAT26(*(undefined2 *)(lVar11 + 0xf6),(uint6)local_250);
  local_248._0_4_ = CONCAT22(*(undefined2 *)(lVar11 + 0xee),*(undefined2 *)(lVar11 + 0xea));
  local_248._6_2_ = SUB82(uVar4,6);
  local_248._0_6_ = CONCAT24(*(undefined2 *)(lVar11 + 0xf0),(undefined4)local_248);
  local_240._0_2_ = (ushort)(byte)local_240;
  local_240 = (undefined8 *)CONCAT44(0x6ff,(undefined4)local_240);
  local_238 = local_238 & 0xffffff00;
  local_210 = 0x10000000000;
  uStack_1e8 = 0x10000000000;
  local_1b0 = 0x10000000000;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_188 = 0x10000000000;
  iVar16 = iVar29;
  local_388 = lVar10;
  if (0xff < uVar1) {
    FUN_14497ddce(local_230,0);
    iVar16 = (int)local_210 + iVar29;
  }
  iVar18 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar18 = iVar16;
  }
  local_210 = CONCAT44(local_210._4_4_,iVar16);
  if (iVar16 % 0x20 != 0) {
    bVar15 = -(char)(iVar16 % 0x20);
    local_230[iVar18 >> 5] = (local_230[iVar18 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
  }
  local_358 = lVar11;
  FUN_1447c45ca(local_230,0,iVar29,0);
  local_230[uVar1 >> 5] = local_230[uVar1 >> 5] | 1 << ((byte)uVar1 & 0x1f);
  local_d0 = 0x10000000000;
  lVar10 = 1;
  do {
    uVar33 = local_d0;
    uVar1 = *(ushort *)((longlong)&local_250 + lVar10 * 2);
    if (uVar1 != 0xffff) {
      iVar16 = uVar1 + 1;
      iVar29 = iVar16 - (int)local_d0;
      if (iVar29 != 0 && (int)local_d0 <= iVar16) {
        if ((int)local_d0 == 0) {
LAB_140fc083e:
          if (local_d0._4_4_ <= (int)(uint)uVar1) {
            local_d0 = CONCAT44(0x100,(int)local_d0);
            FUN_14497ddce(&local_f0,uVar33 & 0xffffffff);
            iVar16 = (int)local_d0 + iVar29;
          }
          iVar18 = iVar16 + 0x1f;
          if (-1 < iVar16) {
            iVar18 = iVar16;
          }
          local_d0 = CONCAT44(local_d0._4_4_,iVar16);
          if (iVar16 % 0x20 != 0) {
            bVar15 = -(char)(iVar16 % 0x20);
            *(uint *)((longlong)&local_f0 + (longlong)(iVar18 >> 5) * 4) =
                 (uint)(*(int *)((longlong)&local_f0 + (longlong)(iVar18 >> 5) * 4) <<
                       (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
          }
        }
        else {
          iVar18 = (int)local_d0 + 0x1e;
          if (-1 < (int)local_d0 + -1) {
            iVar18 = (int)local_d0 + -1;
          }
          if (iVar18 >> 5 != (uint)(uVar1 >> 5)) goto LAB_140fc083e;
          local_d0 = CONCAT44(local_d0._4_4_,iVar16);
        }
        FUN_1447c45ca(&local_f0,uVar33 & 0xffffffff,iVar29,0);
      }
      puVar21 = (uint *)((longlong)&local_f0 + (ulonglong)(uVar1 >> 5) * 4);
      *puVar21 = *puVar21 | 1 << ((byte)uVar1 & 0x1f);
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != 7);
  FUN_140dad9c2(local_230,&local_f0,1);
  local_f0 = (undefined8 *)local_254;
  local_e8 = &local_250;
  FUN_1403b5126(local_230,&local_f0,2);
  uVar33 = uStack_1e8;
  uVar1 = *(ushort *)(local_388 + 0x11c);
  iVar16 = uVar1 + 1;
  iVar29 = iVar16 - (int)uStack_1e8;
  if (iVar29 != 0 && (int)uStack_1e8 <= iVar16) {
    if ((int)uStack_1e8 == 0) {
LAB_140fc095f:
      if (uStack_1e8._4_4_ <= (int)(uint)uVar1) {
        uStack_1e8 = CONCAT44(0x100,(int)uStack_1e8);
        FUN_14497ddce(local_208,uVar33 & 0xffffffff);
        iVar16 = (int)uStack_1e8 + iVar29;
      }
      iVar18 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar18 = iVar16;
      }
      uStack_1e8 = CONCAT44(uStack_1e8._4_4_,iVar16);
      if (iVar16 % 0x20 != 0) {
        bVar15 = -(char)(iVar16 % 0x20);
        local_208[iVar18 >> 5] = (local_208[iVar18 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
      }
    }
    else {
      iVar18 = (int)uStack_1e8 + 0x1e;
      if (-1 < (int)uStack_1e8 + -1) {
        iVar18 = (int)uStack_1e8 + -1;
      }
      if (iVar18 >> 5 != (uint)(uVar1 >> 5)) goto LAB_140fc095f;
      uStack_1e8 = CONCAT44(uStack_1e8._4_4_,iVar16);
    }
    FUN_1447c45ca(local_208,uVar33 & 0xffffffff,iVar29,0);
  }
  lVar10 = local_3a8;
  local_208[uVar1 >> 5] = local_208[uVar1 >> 5] | 1 << ((byte)uVar1 & 0x1f);
  if ((short)local_250 != -1) {
    lVar11 = *(longlong *)(local_3a8 + 0x28);
    local_330 = lVar11 + 0x28;
    cVar7 = *(char *)(lVar11 + 0x298);
    if (cVar7 == '\0') {
      *(int *)(lVar11 + 0x28c) = *(int *)(lVar11 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(lVar11 + 0x28c) = *(int *)(lVar11 + 0x28c) + 1;
      UNLOCK();
    }
    local_338 = local_230;
    local_328 = FUN_1403b8464(&local_338,0);
    if (local_328 != *(int *)(lVar11 + 0x38)) {
      local_370 = lVar10 + 0x40;
      local_380 = lVar10 + 0x1b8;
      local_3b8 = (undefined8 *)CONCAT71(local_3b8._1_7_,cVar7);
      local_398 = (longlong *)CONCAT44(local_398._4_4_,*(int *)(lVar11 + 0x38));
      do {
        local_390 = (longlong *)(longlong)local_328;
        puVar21 = *(uint **)(*(longlong *)(local_330 + 0x60) + (longlong)local_390 * 8);
        local_3a0 = local_330;
        if (cVar7 == '\0') {
          puVar21[5] = 0;
          puVar23 = puVar21;
        }
        else {
          puVar23 = (uint *)0x0;
        }
        FUN_140fc2f5e(puVar21,&local_2c0,local_248._4_2_);
        FUN_140fc2f5e(puVar21,&local_270,local_248._2_2_);
        FUN_140fc2f5e(puVar21,&local_2d8,local_248 & 0xffff);
        FUN_140fc2f08(puVar21,&local_2f0,local_250._6_2_);
        FUN_140fc2f08(puVar21,&local_308,local_250._4_2_);
        FUN_140fc2f08(puVar21,&local_320,local_250._2_2_);
        local_180 = local_320;
        local_178 = local_318;
        local_170 = local_310;
        local_168 = local_308;
        local_160 = CONCAT44(local_160._4_4_,(undefined4)local_300);
        local_158 = local_2f8;
        local_150 = local_2f0;
        local_148 = (undefined4)local_2e8;
        local_140 = local_2e0;
        local_138 = local_2d8;
        local_130 = CONCAT44(local_130._4_4_,local_2d0);
        uStack_128 = local_2c8;
        local_120 = local_270;
        local_118 = (undefined4)local_268;
        local_110 = CONCAT44(uStack_25c,local_260);
        local_108 = local_2c0;
        local_100 = local_2b8._0_4_;
        local_f8 = CONCAT44(uStack_2ac,local_2b0);
        if ((ushort)puVar21[3] != 0) {
          puVar34 = *(undefined8 **)(puVar21 + 10);
          lVar10 = (ulonglong)(ushort)puVar21[3] << 5;
          do {
            if (*(short *)((longlong)puVar34 + 0x1e) == (short)local_250) goto LAB_140fc0c54;
            puVar34 = puVar34 + 4;
            lVar10 = lVar10 + -0x20;
          } while (lVar10 != 0);
        }
        puVar34 = (undefined8 *)0x0;
LAB_140fc0c54:
        uVar9 = puVar21[5];
        local_3b0 = puVar23;
        if (uVar9 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar34 + 1));
        }
        lVar6 = local_f8;
        lVar36 = local_110;
        uVar33 = uStack_128;
        lVar12 = local_140;
        lVar11 = local_158;
        lVar10 = local_170;
        LOCK();
        *(int *)(puVar34 + 3) = *(int *)(puVar34 + 3) + 1;
        UNLOCK();
        uVar4 = *puVar34;
        local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,uVar9);
        local_d8 = local_180;
        local_d0 = CONCAT44(local_d0._4_4_,local_178);
        local_180 = (uint *)0x0;
        local_c8 = local_170;
        local_170 = 0;
        local_c0 = local_168;
        local_b8 = (int)local_160;
        local_168 = 0;
        local_b0 = local_158;
        local_158 = 0;
        local_a8 = local_150;
        local_a0 = CONCAT44(local_a0._4_4_,local_148);
        local_150 = 0;
        local_98 = local_140;
        local_140 = 0;
        local_90 = local_138;
        local_88 = (undefined4)local_130;
        local_138 = (longlong *)0x0;
        local_80 = uStack_128;
        uStack_128 = 0;
        local_78 = local_120;
        local_70 = local_118;
        local_120 = (uint *)0x0;
        local_68 = local_110;
        local_110 = 0;
        local_60 = local_108;
        local_58 = local_100;
        local_108 = (uint *)0x0;
        local_50 = local_f8;
        local_f8 = 0;
        local_f0 = puVar34;
        local_e0 = uVar4;
        FUN_140fc30ee(&local_180);
        puVar21 = local_3b0;
        uVar5 = *(undefined8 *)(*(longlong *)(local_3a0 + 0x60) + (longlong)local_390 * 8);
        uVar37 = local_370;
        if (((lVar10 == 0) && (uVar37 = local_380, lVar10 = lVar11, lVar11 == 0)) &&
           (lVar10 = lVar12, lVar12 == 0)) {
          uVar37 = local_370;
          if ((uVar33 != 0) || (uVar37 = local_380, uVar33 = lVar36, lVar36 != 0)) {
            FUN_14768eb26(uVar37,uVar5,uVar4,uVar33);
            goto LAB_140fc0e2f;
          }
          cVar7 = (char)local_3b8;
          iVar16 = (int)local_398;
          if (lVar6 != 0) {
            FUN_14768eb26(local_380,uVar5,uVar4,lVar6);
          }
        }
        else {
          FUN_140fc462a(uVar37,uVar5,uVar4,lVar10);
LAB_140fc0e2f:
          puVar21 = local_3b0;
          cVar7 = (char)local_3b8;
          iVar16 = (int)local_398;
        }
        FUN_140fc30ee(&local_d8);
        if (puVar34 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar34 + 3) = *(int *)(puVar34 + 3) + -1;
          UNLOCK();
          if ((int)local_e8 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_f0 + 1));
          }
        }
        lVar10 = local_3a8;
        if (puVar21 != (uint *)0x0) {
          puVar21[5] = 1;
        }
        local_328 = FUN_1403b8464(&local_338,local_328 + 1);
      } while (local_328 != iVar16);
    }
    if (local_338 != (uint *)0x0) {
      if (*(char *)(local_330 + 0x270) == '\0') {
        *(int *)(local_330 + 0x264) = *(int *)(local_330 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_330 + 0x264) = *(int *)(local_330 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_1e0 != 0) {
    FUN_1400020a8();
  }
  uVar1 = *(ushort *)(local_388 + 0x11c);
  iVar29 = uVar1 + 1;
  local_250._0_6_ = (uint6)(uint5)local_250;
  local_248 = CONCAT35(local_248._5_3_,0x6ff);
  local_220 = 0x10000000000;
  local_1f8 = 0x10000000000;
  local_1c0 = 0x10000000000;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_198 = 0x10000000000;
  iVar16 = iVar29;
  if (0xff < uVar1) {
    FUN_14497ddce(&local_240,0);
    iVar16 = (int)local_220 + iVar29;
  }
  iVar18 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar18 = iVar16;
  }
  local_220 = CONCAT44(local_220._4_4_,iVar16);
  if (iVar16 % 0x20 != 0) {
    bVar15 = -(char)(iVar16 % 0x20);
    *(uint *)((longlong)&local_240 + (longlong)(iVar18 >> 5) * 4) =
         (uint)(*(int *)((longlong)&local_240 + (longlong)(iVar18 >> 5) * 4) << (bVar15 & 0x1f)) >>
         (bVar15 & 0x1f);
  }
  FUN_1447c45ca(&local_240,0,iVar29,0);
  puVar21 = (uint *)((longlong)&local_240 + (ulonglong)(uVar1 >> 5) * 4);
  *puVar21 = *puVar21 | 1 << ((byte)uVar1 & 0x1f);
  lVar11 = *(longlong *)(lVar10 + 0x28);
  local_e8 = (undefined8 *)(lVar11 + 0x28);
  cVar7 = *(char *)(lVar11 + 0x298);
  if (cVar7 == '\0') {
    *(int *)(lVar11 + 0x28c) = *(int *)(lVar11 + 0x28c) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar11 + 0x28c) = *(int *)(lVar11 + 0x28c) + 1;
    UNLOCK();
  }
  local_f0 = &local_240;
  iVar29 = FUN_1403b8464(&local_f0,0);
  local_e0 = CONCAT44(local_e0._4_4_,iVar29);
  iVar16 = *(int *)(lVar11 + 0x38);
  local_350 = lVar10 + 0x40;
  local_348 = lVar10 + 0x1b8;
  if (iVar29 != iVar16) {
    local_3b8 = local_e8;
    do {
      lVar10 = local_350;
      if (cVar7 == '\0') {
        lVar11 = *(longlong *)(local_3b8[0xc] + (longlong)iVar29 * 8);
        *(undefined4 *)(lVar11 + 0x14) = 0;
      }
      else {
        lVar11 = 0;
      }
      lVar12 = *(longlong *)(local_3b8[0xc] + (longlong)iVar29 * 8);
      uVar1 = *(ushort *)(lVar12 + 0xe);
      if ((ulonglong)uVar1 != 0) {
        local_398 = (longlong *)CONCAT44(local_398._4_4_,iVar16);
        lVar36 = *(longlong *)(lVar12 + 0x18);
        uVar33 = 0;
        do {
          FUN_140fc2fb4(lVar10,*(undefined2 *)(lVar36 + uVar33 * 2));
          uVar33 = uVar33 + 1;
        } while (uVar1 != uVar33);
        uVar1 = *(ushort *)(lVar12 + 0xe);
        iVar16 = (int)local_398;
        if ((ulonglong)uVar1 != 0) {
          lVar10 = *(longlong *)(lVar12 + 0x18);
          uVar33 = 0;
          do {
            FUN_140fc2fb4(local_348,*(undefined2 *)(lVar10 + uVar33 * 2));
            uVar33 = uVar33 + 1;
          } while (uVar1 != uVar33);
        }
      }
      if (lVar11 != 0) {
        *(undefined4 *)(lVar11 + 0x14) = 1;
      }
      iVar29 = FUN_1403b8464(&local_f0,iVar29 + 1);
      local_e0 = CONCAT44(local_e0._4_4_,iVar29);
      lVar10 = local_3a8;
    } while (iVar29 != iVar16);
  }
  if (local_f0 != (undefined8 *)0x0) {
    if (*(char *)(local_e8 + 0x4e) == '\0') {
      *(int *)((longlong)local_e8 + 0x264U) = *(int *)((longlong)local_e8 + 0x264U) + -1;
    }
    else {
      LOCK();
      *(int *)((longlong)local_e8 + 0x264U) = *(int *)((longlong)local_e8 + 0x264U) + -1;
      UNLOCK();
    }
  }
  if (local_1f0 != 0) {
    FUN_1400020a8();
  }
  local_2f0 = *(longlong *)(lVar10 + 0x28);
  local_3b0 = (uint *)(lVar10 + 0x168);
  local_2e8 = lVar10;
  if (*(int *)(lVar10 + 0x180) != 0) {
    local_240 = (undefined8 *)0x0;
    local_234 = 8;
    local_3a0 = local_2f0;
    lVar11 = FUN_14009d2a0();
    local_380 = CONCAT62(local_380._2_6_,*(undefined2 *)(lVar11 + 0x10a));
    uVar9 = *(uint *)(lVar10 + 0x180);
    if (uVar9 == 0) {
      uVar37 = 1;
      uVar33 = 0;
      iVar16 = 0;
      puVar34 = (undefined8 *)0x0;
    }
    else {
      puVar21 = *(uint **)(lVar10 + 0x178);
      if (*(uint **)(lVar10 + 0x178) == (uint *)0x0) {
        puVar21 = local_3b0;
      }
      uVar28 = *puVar21;
      if (uVar28 == 0) {
        iVar16 = uVar9 + 0x1e;
        if (-1 < (int)(uVar9 - 1)) {
          iVar16 = uVar9 - 1;
        }
        puVar34 = (undefined8 *)0x0;
        puVar24 = (undefined8 *)(ulonglong)(uint)(iVar16 >> 5);
        if (iVar16 >> 5 < 1) {
          puVar24 = puVar34;
        }
        iVar16 = 0;
        do {
          if (puVar24 == puVar34) goto LAB_140fc1072;
          iVar16 = iVar16 + 0x20;
          uVar28 = puVar21[(longlong)puVar34 + 1];
          puVar34 = (undefined8 *)((longlong)puVar34 + 1);
        } while (uVar28 == 0);
      }
      else {
        iVar16 = 0;
        puVar34 = (undefined8 *)0x0;
      }
      uVar37 = (ulonglong)(-uVar28 & uVar28);
      uVar33 = uVar37 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar33 != 0) {
        for (; uVar33 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar28 = (iVar16 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      uVar33 = (ulonglong)uVar28;
      if ((int)uVar9 <= (int)uVar28) {
        uVar33 = (ulonglong)uVar9;
      }
    }
    if ((int)uVar33 < (int)uVar9) {
      local_378 = (longlong *)(lVar10 + 0x90);
      local_370 = lVar10 + 200;
      local_360 = local_3a0 + 0xd0;
      local_390 = (longlong *)(lVar10 + 0x130);
      local_368 = (longlong *)(local_3a0 + 0x28);
      local_340 = lVar10 + 0x188;
      uVar9 = 0xffffffff;
      do {
        local_398 = (longlong *)CONCAT44(local_398._4_4_,iVar16);
        local_238 = 0;
        local_3b8 = puVar34;
        if ((int)local_234 < 0) {
          FUN_1475b398e(&local_250,0);
        }
        uVar32 = uVar33 & 0xffff;
        uVar28 = (uint)uVar32;
        if (*(int *)(lVar10 + 0xd8) != 0) {
          uVar22 = *(ulonglong *)(lVar10 + 0xd0);
          if (*(ulonglong *)(lVar10 + 0xd0) == 0) {
            uVar22 = local_370;
          }
          iVar16 = *(int *)(uVar22 + (ulonglong)(*(int *)(lVar10 + 0xd8) - 1U & uVar28) * 4);
          do {
            iVar29 = iVar16;
            if (iVar29 == -1) goto LAB_140fc1e22;
            lVar11 = *local_378;
            iVar16 = *(int *)(lVar11 + 4 + (longlong)iVar29 * 0xc);
            lVar12 = local_3a0;
          } while (*(short *)(lVar11 + (longlong)iVar29 * 0xc) != (short)uVar33);
          do {
            uVar17 = local_238;
            puVar26 = (ushort *)(lVar11 + (longlong)iVar29 * 0xc + 2);
            uVar1 = *puVar26;
            if ((uVar1 == 0xffff) ||
               (*(uint *)(lVar12 + 0xe8) == (uint)uVar1 ||
                (int)*(uint *)(lVar12 + 0xe8) < (int)(uint)uVar1)) {
LAB_140fc29ac:
              FUN_140bbeb1c(local_350,puVar26);
              FUN_14086b624(local_378,iVar29);
              lVar12 = local_3a0;
            }
            else {
              lVar11 = *(longlong *)(lVar12 + 0xe0);
              if (*(longlong *)(lVar12 + 0xe0) == 0) {
                lVar11 = local_360;
              }
              if ((*(uint *)(lVar11 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0)
              goto LAB_140fc29ac;
              lVar11 = (longlong)(int)local_238;
              local_238 = local_238 + 1;
              if (local_234 < local_238) {
                FUN_1475b3a76(&local_250,uVar17);
                lVar12 = local_3a0;
              }
              puVar34 = local_240;
              if (local_240 == (undefined8 *)0x0) {
                puVar34 = &local_250;
              }
              *(ushort *)((longlong)puVar34 + lVar11 * 2) = *puVar26;
            }
            do {
              iVar29 = iVar16;
              if (iVar29 == -1) goto LAB_140fc1e22;
              lVar11 = *local_378;
              iVar16 = *(int *)(lVar11 + 4 + (longlong)iVar29 * 0xc);
            } while (*(short *)(lVar11 + (longlong)iVar29 * 0xc) != (short)uVar33);
          } while( true );
        }
LAB_140fc1e22:
        lVar12 = (ulonglong)(uVar28 << 6) + *local_390;
        lVar11 = (longlong)(int)local_238;
        if (lVar11 < 1) {
          FUN_1457db340(&local_2f0,lVar12 + 0x20);
          puVar34 = local_3b8;
        }
        else {
          puVar24 = local_240;
          if (local_240 == (undefined8 *)0x0) {
            puVar24 = &local_250;
          }
          lVar36 = 0;
          do {
            cVar7 = FUN_140bbead8(local_368,*(undefined2 *)((longlong)puVar24 + lVar36),
                                  local_380 & 0xffff);
            lVar10 = local_3a8;
            puVar34 = local_3b8;
            if (cVar7 != '\0') break;
            bVar38 = lVar11 * 2 + -2 != lVar36;
            lVar36 = lVar36 + 2;
          } while (bVar38);
          *(char *)(lVar12 + 0x3c) = cVar7;
          if ((int)uVar28 < *(int *)(local_3a8 + 0x1a0)) {
            lVar11 = *(longlong *)(local_3a8 + 0x198);
            if (*(longlong *)(local_3a8 + 0x198) == 0) {
              lVar11 = local_340;
            }
            if ((*(uint *)(lVar11 + (uVar32 >> 5) * 4) >> ((uint)uVar33 & 0x1f) & 1) == 0)
            goto LAB_140fc1fd3;
            local_f0 = local_240;
            if (local_240 == (undefined8 *)0x0) {
              local_f0 = &local_250;
            }
          }
          else {
LAB_140fc1fd3:
            local_f0 = local_240;
            if (local_240 == (undefined8 *)0x0) {
              local_f0 = &local_250;
            }
          }
          local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,local_238);
          local_3c8 = (longlong *)(lVar12 + 0x20);
          FUN_140fc31f0(&local_2f0,lVar12,lVar12 + 0x10,&local_f0);
        }
        iVar16 = (int)local_398;
        if (local_238 == 0) {
          FUN_1457db39e(lVar10 + 0xe0,(ulonglong)(uVar28 << 6) + *(longlong *)(lVar10 + 0x130));
          FUN_1457db2cc(local_390,uVar32);
        }
        uVar9 = uVar9 & ~(uint)uVar37;
        puVar21 = *(uint **)(lVar10 + 0x178);
        if (*(uint **)(lVar10 + 0x178) == (uint *)0x0) {
          puVar21 = local_3b0;
        }
        uVar28 = *(uint *)(lVar10 + 0x180);
        iVar29 = (int)puVar34;
        lVar11 = (longlong)iVar29;
        uVar17 = puVar21[lVar11] & uVar9;
        if (uVar17 == 0) {
          iVar18 = uVar28 + 0x1e;
          if (-1 < (int)(uVar28 - 1)) {
            iVar18 = uVar28 - 1;
          }
          iVar18 = iVar18 >> 5;
          iVar19 = iVar18;
          if (iVar18 < iVar29) {
            iVar19 = iVar29;
          }
          if (iVar18 <= iVar29) break;
          lVar12 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar17 = puVar21[lVar11 + lVar12 + 1];
            if (uVar17 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar19 - lVar11 == lVar12) goto LAB_140fc2a29;
          }
          puVar34 = (undefined8 *)(ulonglong)(iVar29 + (int)lVar12 + 1);
          uVar9 = 0xffffffff;
        }
        uVar37 = (ulonglong)(-uVar17 & uVar17);
        uVar33 = uVar37 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar33 != 0) {
          for (; uVar33 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar25 = (iVar16 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        uVar17 = uVar25;
        if ((int)uVar28 <= (int)uVar25) {
          uVar17 = uVar28;
        }
        uVar33 = (ulonglong)uVar17;
      } while ((int)uVar25 < (int)uVar28);
LAB_140fc2a29:
      if (local_240 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_140fc1072:
  *(undefined4 *)(lVar10 + 0x180) = 0;
  if (0x80 < *(uint *)(lVar10 + 0x184)) {
    *(undefined4 *)(lVar10 + 0x184) = 0x80;
    FUN_1446efbd8(local_3b0,0);
  }
  *(undefined4 *)(lVar10 + 0x1a0) = 0;
  if (0x80 < *(uint *)(lVar10 + 0x1a4)) {
    *(undefined4 *)(lVar10 + 0x1a4) = 0x80;
    FUN_1446efbd8(lVar10 + 0x188,0);
  }
  lVar11 = *(longlong *)(lVar10 + 0x28);
  puVar21 = (uint *)(lVar10 + 0x2e0);
  local_308 = lVar11;
  local_300 = lVar10;
  if (*(int *)(lVar10 + 0x2f8) != 0) {
    local_240 = (undefined8 *)0x0;
    local_234 = 8;
    lVar12 = FUN_14009d2a0();
    local_370 = CONCAT62(local_370._2_6_,*(undefined2 *)(lVar12 + 0x10a));
    uVar9 = *(uint *)(lVar10 + 0x2f8);
    if (uVar9 == 0) {
      uVar33 = 1;
      uVar28 = 0;
      iVar16 = 0;
      uVar37 = 0;
    }
    else {
      puVar23 = *(uint **)(lVar10 + 0x2f0);
      if (*(uint **)(lVar10 + 0x2f0) == (uint *)0x0) {
        puVar23 = puVar21;
      }
      uVar28 = *puVar23;
      if (uVar28 == 0) {
        iVar16 = uVar9 + 0x1e;
        if (-1 < (int)(uVar9 - 1)) {
          iVar16 = uVar9 - 1;
        }
        uVar37 = 0;
        uVar33 = (ulonglong)(uint)(iVar16 >> 5);
        if (iVar16 >> 5 < 1) {
          uVar33 = uVar37;
        }
        iVar16 = 0;
        do {
          lVar10 = local_3a8;
          if (uVar33 == uVar37) goto LAB_140fc10d3;
          iVar16 = iVar16 + 0x20;
          uVar28 = puVar23[uVar37 + 1];
          uVar37 = uVar37 + 1;
        } while (uVar28 == 0);
      }
      else {
        iVar16 = 0;
        uVar37 = 0;
      }
      uVar33 = (ulonglong)(-uVar28 & uVar28);
      uVar32 = uVar33 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar28 = (iVar16 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      if ((int)uVar9 <= (int)uVar28) {
        uVar28 = uVar9;
      }
    }
    lVar10 = local_3a8;
    if ((int)uVar28 < (int)uVar9) {
      local_390 = (longlong *)(local_3a8 + 0x240);
      local_398 = (longlong *)(local_3a8 + 0x2a8);
      uVar9 = 0xffffffff;
      local_380 = lVar11 + 0x28;
      local_378 = (longlong *)(local_3a8 + 0x300);
      local_360 = local_3a8 + 600;
      do {
        local_3a0 = CONCAT44(local_3a0._4_4_,uVar9);
        local_3b0 = (uint *)CONCAT44(local_3b0._4_4_,iVar16);
        local_238 = 0;
        if ((int)local_234 < 0) {
          FUN_1475b398e(&local_250,0);
        }
        uVar9 = uVar28 & 0xffff;
        local_3b8 = (undefined8 *)(CONCAT44(local_3b8._4_4_,uVar28) & 0xffffffff0000ffff);
        if (*(int *)(local_3a8 + 0x250) != 0) {
          plVar13 = *(longlong **)(local_3a8 + 0x248);
          if (*(longlong **)(local_3a8 + 0x248) == (longlong *)0x0) {
            plVar13 = local_390;
          }
          iVar16 = *(int *)((longlong)plVar13 +
                           (ulonglong)(*(int *)(local_3a8 + 0x250) - 1U & uVar9) * 4);
          do {
            iVar29 = iVar16;
            if (iVar29 == -1) goto LAB_140fc243a;
            lVar10 = *(longlong *)(local_3a8 + 0x208);
            iVar16 = *(int *)(lVar10 + 4 + (longlong)iVar29 * 0xc);
          } while (*(short *)(lVar10 + (longlong)iVar29 * 0xc) != (short)uVar28);
          plVar13 = (longlong *)(local_3a8 + 0x208);
          do {
            uVar17 = local_238;
            puVar26 = (ushort *)(lVar10 + (longlong)iVar29 * 0xc + 2);
            uVar1 = *puVar26;
            if ((uVar1 == 0xffff) ||
               (*(uint *)(lVar11 + 0xe8) == (uint)uVar1 ||
                (int)*(uint *)(lVar11 + 0xe8) < (int)(uint)uVar1)) {
LAB_140fc2dc9:
              FUN_140bbeb1c(local_348,puVar26);
              FUN_14086b624(plVar13,iVar29);
              uVar9 = (uint)local_3b8;
            }
            else {
              lVar10 = lVar11 + 0xd0;
              if (*(longlong *)(lVar11 + 0xe0) != 0) {
                lVar10 = *(longlong *)(lVar11 + 0xe0);
              }
              if ((*(uint *)(lVar10 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0)
              goto LAB_140fc2dc9;
              lVar10 = (longlong)(int)local_238;
              local_238 = local_238 + 1;
              if (local_234 < local_238) {
                local_368 = plVar13;
                FUN_1475b3a76(&local_250,uVar17);
                plVar13 = local_368;
                uVar9 = (uint)local_3b8;
              }
              puVar34 = local_240;
              if (local_240 == (undefined8 *)0x0) {
                puVar34 = &local_250;
              }
              *(ushort *)((longlong)puVar34 + lVar10 * 2) = *puVar26;
            }
            do {
              iVar29 = iVar16;
              if (iVar29 == -1) goto LAB_140fc243a;
              lVar10 = *plVar13;
              iVar16 = *(int *)(lVar10 + 4 + (longlong)iVar29 * 0xc);
            } while (*(short *)(lVar10 + (longlong)iVar29 * 0xc) != (short)uVar28);
          } while( true );
        }
LAB_140fc243a:
        lVar10 = (ulonglong)(uVar9 << 6) + *local_398;
        if ((longlong)(int)local_238 < 1) {
          FUN_1457db6a6(&local_308,lVar10 + 0x20);
          iVar16 = (int)local_3b0;
          uVar9 = (uint)local_3a0;
        }
        else {
          puVar34 = local_240;
          if (local_240 == (undefined8 *)0x0) {
            puVar34 = &local_250;
          }
          local_368 = (longlong *)((longlong)(int)local_238 * 2 + -2);
          plVar13 = (longlong *)0x0;
          do {
            cVar7 = FUN_140bbead8(local_380,*(undefined2 *)((longlong)puVar34 + (longlong)plVar13),
                                  local_370 & 0xffff);
            if (cVar7 != '\0') break;
            bVar38 = local_368 != plVar13;
            plVar13 = (longlong *)((longlong)plVar13 + 2);
          } while (bVar38);
          *(char *)(lVar10 + 0x3c) = cVar7;
          uVar9 = (uint)local_3a0;
          if ((int)(uint)local_3b8 < *(int *)(local_3a8 + 0x318)) {
            plVar13 = *(longlong **)(local_3a8 + 0x310);
            if (*(longlong **)(local_3a8 + 0x310) == (longlong *)0x0) {
              plVar13 = local_378;
            }
            if ((*(uint *)((longlong)plVar13 + (ulonglong)((uint)local_3b8 >> 5) * 4) >>
                 (uVar28 & 0x1f) & 1) == 0) goto LAB_140fc25f7;
            local_f0 = local_240;
            if (local_240 == (undefined8 *)0x0) {
              local_f0 = &local_250;
            }
          }
          else {
LAB_140fc25f7:
            local_f0 = local_240;
            if (local_240 == (undefined8 *)0x0) {
              local_f0 = &local_250;
            }
          }
          local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,local_238);
          local_3c8 = (longlong *)(lVar10 + 0x20);
          FUN_1457db704(&local_308,lVar10,lVar10 + 0x10,&local_f0);
          iVar16 = (int)local_3b0;
        }
        puVar34 = local_3b8;
        if (local_238 == 0) {
          FUN_1457db39e(local_360,
                        (ulonglong)((uint)local_3b8 << 6) + *(longlong *)(local_3a8 + 0x2a8));
          FUN_1457db2cc(local_398,(ulonglong)puVar34 & 0xffffffff);
        }
        uVar9 = uVar9 & ~(uint)uVar33;
        puVar23 = *(uint **)(local_3a8 + 0x2f0);
        if (*(uint **)(local_3a8 + 0x2f0) == (uint *)0x0) {
          puVar23 = puVar21;
        }
        iVar29 = *(int *)(local_3a8 + 0x2f8);
        iVar18 = (int)uVar37;
        lVar10 = (longlong)iVar18;
        uVar28 = puVar23[lVar10] & uVar9;
        if (uVar28 == 0) {
          iVar19 = iVar29 + 0x1e;
          if (-1 < iVar29 + -1) {
            iVar19 = iVar29 + -1;
          }
          iVar19 = iVar19 >> 5;
          iVar20 = iVar19;
          if (iVar19 < iVar18) {
            iVar20 = iVar18;
          }
          if (iVar19 <= iVar18) break;
          lVar12 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar28 = puVar23[lVar10 + lVar12 + 1];
            if (uVar28 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar20 - lVar10 == lVar12) goto LAB_140fc2e76;
          }
          uVar37 = (ulonglong)(iVar18 + (int)lVar12 + 1);
          uVar9 = 0xffffffff;
        }
        uVar33 = (ulonglong)(-uVar28 & uVar28);
        uVar32 = uVar33 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar32 != 0) {
          for (; uVar32 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar28 = (iVar16 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while ((int)uVar28 < iVar29);
LAB_140fc2e76:
      lVar10 = local_3a8;
      if (local_240 != (undefined8 *)0x0) {
        FUN_1400020a8();
        lVar10 = local_3a8;
      }
    }
  }
LAB_140fc10d3:
  *(undefined4 *)(lVar10 + 0x2f8) = 0;
  if (0x80 < *(uint *)(lVar10 + 0x2fc)) {
    *(undefined4 *)(lVar10 + 0x2fc) = 0x80;
    FUN_1446efbd8(puVar21,0);
  }
  lVar11 = local_358;
  *(undefined4 *)(lVar10 + 0x318) = 0;
  if (0x80 < *(uint *)(lVar10 + 0x31c)) {
    *(undefined4 *)(lVar10 + 0x31c) = 0x80;
    FUN_1446efbd8(lVar10 + 0x300,0);
  }
  local_160 = 0x10000000000;
  local_138 = (longlong *)0x10000000000;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = (uint *)((ulonglong)local_120 & 0xffffffff00000000);
  lVar10 = FUN_14009d2a0();
  uVar1 = *(ushort *)(lVar10 + 0x11a);
  iVar29 = uVar1 + 1;
  iVar16 = iVar29;
  if (0xff < uVar1) {
    local_160 = CONCAT44(0x100,(int)local_160);
    FUN_14497ddce(&local_180,0);
    iVar16 = (int)local_160 + iVar29;
  }
  iVar18 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar18 = iVar16;
  }
  local_160._0_4_ = iVar16;
  if (iVar16 % 0x20 != 0) {
    bVar15 = -(char)(iVar16 % 0x20);
    *(uint *)((longlong)&local_180 + (longlong)(iVar18 >> 5) * 4) =
         (uint)(*(int *)((longlong)&local_180 + (longlong)(iVar18 >> 5) * 4) << (bVar15 & 0x1f)) >>
         (bVar15 & 0x1f);
  }
  FUN_1447c45ca(&local_180,0,iVar29,0);
  puVar21 = (uint *)((longlong)&local_180 + (ulonglong)(uVar1 >> 5) * 4);
  *puVar21 = *puVar21 | 1 << ((byte)uVar1 & 0x1f);
  local_160 = (ulonglong)local_160._4_4_ << 0x20;
  local_138 = (longlong *)((ulonglong)local_138 & 0xffffffff00000000);
  bVar38 = (longlong)uStack_128 < 0;
  uStack_128 = uStack_128 & 0xffffffff00000000;
  if (bVar38) {
    FUN_1476644c4(&local_130,0);
  }
  local_250._0_4_ = CONCAT22(*(undefined2 *)(local_388 + 0x5c),*(undefined2 *)(lVar11 + 0xfc));
  lVar10 = 0;
  do {
    uVar33 = (ulonglong)local_138;
    uVar1 = *(ushort *)((longlong)&local_250 + lVar10);
    iVar16 = uVar1 + 1;
    iVar29 = iVar16 - (int)local_138;
    if (iVar29 != 0 && (int)local_138 <= iVar16) {
      if ((int)local_138 == 0) {
LAB_140fc1237:
        if (local_138._4_4_ <= (int)(uint)uVar1) {
          local_138 = (longlong *)CONCAT44(0x100,(int)local_138);
          FUN_14497ddce(&local_158,uVar33 & 0xffffffff);
          iVar16 = (int)local_138 + iVar29;
        }
        iVar18 = iVar16 + 0x1f;
        if (-1 < iVar16) {
          iVar18 = iVar16;
        }
        local_138 = (longlong *)CONCAT44(local_138._4_4_,iVar16);
        if (iVar16 % 0x20 != 0) {
          bVar15 = -(char)(iVar16 % 0x20);
          *(uint *)((longlong)&local_158 + (longlong)(iVar18 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_158 + (longlong)(iVar18 >> 5) * 4) <<
                     (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
        }
      }
      else {
        iVar18 = (int)local_138 + 0x1e;
        if (-1 < (int)local_138 + -1) {
          iVar18 = (int)local_138 + -1;
        }
        if (iVar18 >> 5 != (uint)(uVar1 >> 5)) goto LAB_140fc1237;
        local_138 = (longlong *)CONCAT44(local_138._4_4_,iVar16);
      }
      FUN_1447c45ca(&local_158,uVar33 & 0xffffffff,iVar29,0);
    }
    puVar21 = (uint *)((longlong)&local_158 + (ulonglong)(uVar1 >> 5) * 4);
    *puVar21 = *puVar21 | 1 << ((byte)uVar1 & 0x1f);
    lVar10 = lVar10 + 2;
  } while (lVar10 != 4);
  local_248 = (longlong)&local_f0 + 4;
  local_f0._0_4_ = CONCAT22(*(undefined2 *)(lVar11 + 0xf10),*(undefined2 *)(local_388 + 0x11a));
  local_250 = &local_f0;
  FUN_1403b5126(&local_180,&local_250,2);
  local_f0 = *(undefined8 **)(local_3a8 + 0x330);
  uVar2 = *(undefined2 *)(lVar11 + 0xf4);
  uVar3 = *(undefined2 *)(lVar11 + 0xfa);
  lVar10 = *(longlong *)(local_3a8 + 0x28);
  local_c8 = 0;
  uVar9 = (int)local_160 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar9) {
    uVar28 = 0x100;
    if (0x100 < uVar9) {
      uVar28 = uVar9;
    }
    local_c8 = (ulonglong)uVar28 << 0x20;
    FUN_14497ddce(&local_e8,0);
  }
  local_c8 = CONCAT44(local_c8._4_4_,(int)local_160);
  if ((int)local_160 != 0) {
    memcpy(&local_e8,&local_180,(ulonglong)((int)local_160 + 0x1fU >> 3 & 0xfffffffc));
  }
  local_a0 = 0;
  uVar9 = (int)local_138 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar9) {
    uVar28 = 0x100;
    if (0x100 < uVar9) {
      uVar28 = uVar9;
    }
    local_a0 = (ulonglong)uVar28 << 0x20;
    FUN_14497ddce(&local_c0,0);
  }
  local_a0 = CONCAT44(local_a0._4_4_,(int)local_138);
  if ((int)local_138 != 0) {
    memcpy(&local_c0,&local_158,(ulonglong)((int)local_138 + 0x1fU >> 3 & 0xfffffffc));
  }
  uVar33 = uStack_128;
  lVar12 = local_130;
  local_98 = 0;
  local_90 = (longlong *)CONCAT44(local_90._4_4_,(int)uStack_128);
  if ((int)uStack_128 == 0) {
    local_90 = (longlong *)(uStack_128 & 0xffffffff);
  }
  else {
    FUN_1403b8c86(&local_98,uStack_128 & 0xffffffff,0);
    FUN_1403b8bfd(local_98,lVar12,uVar33 & 0xffffffff);
  }
  local_88 = local_120._0_4_;
  lVar12 = FUN_14009d2a0();
  local_250._0_4_ = CONCAT22(*(undefined2 *)(lVar12 + 0x50),(short)local_250);
  local_250._0_6_ = CONCAT24(uVar3,(undefined4)local_250);
  local_250 = (undefined8 *)CONCAT26(uVar2,(uint6)local_250);
  local_248._0_2_ = (ushort)(byte)local_248;
  local_248 = CONCAT44(0x6ff,(undefined4)local_248);
  local_240 = (undefined8 *)((ulonglong)local_240 & 0xffffffffffffff00);
  local_218 = 0;
  uVar9 = (int)local_160 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar9) {
    uVar28 = 0x100;
    if (0x100 < uVar9) {
      uVar28 = uVar9;
    }
    local_218 = (ulonglong)uVar28 << 0x20;
    FUN_14497ddce(&local_238,0);
  }
  local_218 = CONCAT44(local_218._4_4_,(int)local_160);
  if ((int)local_160 != 0) {
    memcpy(&local_238,&local_180,(ulonglong)((int)local_160 + 0x1fU >> 3 & 0xfffffffc));
  }
  local_1f0 = 0;
  uVar9 = (int)local_138 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar9) {
    uVar28 = 0x100;
    if (0x100 < uVar9) {
      uVar28 = uVar9;
    }
    local_1f0 = (ulonglong)uVar28 << 0x20;
    FUN_14497ddce(&local_210,0);
  }
  local_1f0 = CONCAT44(local_1f0._4_4_,(int)local_138);
  if ((int)local_138 != 0) {
    memcpy(&local_210,&local_158,(ulonglong)((int)local_138 + 0x1fU >> 3 & 0xfffffffc));
  }
  uVar33 = uStack_128;
  lVar12 = local_130;
  uStack_1e8 = 0;
  local_1e0 = CONCAT44(local_1e0._4_4_,(int)uStack_128);
  if ((int)uStack_128 == 0) {
    local_1e0 = uStack_128 & 0xffffffff;
  }
  else {
    FUN_1403b8c86(&uStack_1e8,uStack_128 & 0xffffffff,0);
    FUN_1403b8bfd(uStack_1e8,lVar12,uVar33 & 0xffffffff);
  }
  lVar12 = local_3a8;
  local_1b8 = 0x10000000000;
  local_190 = 0x10000000000;
  FUN_140fc441c(&local_250,&local_238);
  if (((local_250._2_2_ != -1) && (local_250._4_2_ != -1)) && (local_250._6_2_ != -1)) {
    local_2b8 = (longlong *)(lVar10 + 0x28);
    cVar7 = *(char *)(lVar10 + 0x298);
    if (cVar7 == '\0') {
      *(int *)(lVar10 + 0x28c) = *(int *)(lVar10 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(lVar10 + 0x28c) = *(int *)(lVar10 + 0x28c) + 1;
      UNLOCK();
    }
    local_2c0 = &local_238;
    iVar16 = FUN_1403b8464(&local_2c0,0);
    local_2b0 = iVar16;
    if (iVar16 != *(int *)(lVar10 + 0x38)) {
      local_3b8 = (undefined8 *)CONCAT44(local_3b8._4_4_,*(int *)(lVar10 + 0x38));
      local_398 = (longlong *)CONCAT71(local_398._1_7_,cVar7);
      do {
        plVar13 = local_2b8;
        puVar21 = *(uint **)(local_2b8[0xc] + (longlong)iVar16 * 8);
        if (cVar7 == '\0') {
          puVar21[5] = 0;
          local_3b0 = puVar21;
        }
        else {
          local_3b0 = (uint *)0x0;
        }
        if ((ushort)puVar21[3] != 0) {
          plVar27 = *(longlong **)(puVar21 + 10);
          lVar10 = (ulonglong)(ushort)puVar21[3] << 5;
          do {
            if (*(short *)((longlong)plVar27 + 0x1e) == local_250._6_2_) goto LAB_140fc2071;
            plVar27 = plVar27 + 4;
            lVar10 = lVar10 + -0x20;
          } while (lVar10 != 0);
        }
        plVar27 = (longlong *)0x0;
LAB_140fc2071:
        uVar9 = puVar21[5];
        local_2b0 = iVar16;
        if (uVar9 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar27 + 1));
        }
        LOCK();
        *(int *)(plVar27 + 3) = (int)plVar27[3] + 1;
        UNLOCK();
        lVar10 = *plVar27;
        if ((ushort)puVar21[3] != 0) {
          plVar30 = *(longlong **)(puVar21 + 10);
          lVar11 = (ulonglong)(ushort)puVar21[3] << 5;
          do {
            if (*(short *)((longlong)plVar30 + 0x1e) == local_250._4_2_) goto LAB_140fc20b9;
            plVar30 = plVar30 + 4;
            lVar11 = lVar11 + -0x20;
          } while (lVar11 != 0);
        }
        plVar30 = (longlong *)0x0;
LAB_140fc20b9:
        local_3a0 = CONCAT44(local_3a0._4_4_,puVar21[5]);
        if (puVar21[5] == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar30 + 1));
        }
        LOCK();
        *(int *)(plVar30 + 3) = (int)plVar30[3] + 1;
        UNLOCK();
        local_390 = (longlong *)*plVar30;
        if ((ushort)puVar21[3] != 0) {
          puVar35 = *(ulonglong **)(puVar21 + 10);
          lVar11 = (ulonglong)(ushort)puVar21[3] << 5;
          do {
            if (*(short *)((longlong)puVar35 + 0x1e) == local_250._2_2_) goto LAB_140fc210a;
            puVar35 = puVar35 + 4;
            lVar11 = lVar11 + -0x20;
          } while (lVar11 != 0);
        }
        puVar35 = (ulonglong *)0x0;
LAB_140fc210a:
        uVar28 = puVar21[5];
        local_388 = lVar10;
        if (uVar28 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar35 + 1));
        }
        lVar10 = (longlong)local_f0;
        LOCK();
        *(int *)(puVar35 + 3) = (int)puVar35[3] + 1;
        UNLOCK();
        local_370 = *puVar35;
        local_380 = *(ulonglong *)(puVar21 + 6);
        local_2d8 = plVar13;
        local_2d0 = iVar16;
        FUN_140cd6274(&local_338,&local_2d8);
        iVar16 = (int)local_338;
        plVar13 = (longlong *)((ulonglong)local_338 & 0xffffffff);
        cVar7 = local_338._4_1_;
        if (((**(int **)(lVar10 + 0xb0) != 0) || (local_338._4_1_ != '\0')) &&
           (local_360 = FUN_140732858(), 0 < iVar16)) {
          plVar14 = (longlong *)0x0;
          do {
            local_378 = plVar14;
            FUN_1457dbc5e(lVar10,&local_320,local_390,local_388);
            local_254._0_2_ = *(undefined2 *)(local_380 + (longlong)local_378 * 2);
            local_270 = local_320;
            local_268 = (longlong *)
                        CONCAT44(*(undefined4 *)(local_370 + (longlong)local_378 * 4),local_318);
            local_260 = CONCAT31(local_260._1_3_,cVar7);
            ppuVar31 = &local_270;
            FUN_1449da5a2(local_360,local_254);
            lVar11 = FUN_1400e4054(*(undefined8 *)(lVar10 + 0xb0),&local_320);
            if (lVar11 == 0) {
              uVar39 = 0;
            }
            else {
              uVar39 = (undefined4)
                       CONCAT71((int7)((ulonglong)ppuVar31 >> 8),
                                '\x02' - (*(short *)(lVar11 + 0xe) == 0));
            }
            local_368 = (longlong *)CONCAT44(local_368._4_4_,uVar39);
            cVar8 = FUN_1457dbe74(lVar10,local_318);
            if (cVar8 == '\0') {
              uVar39 = FUN_1457dbf04(local_390,local_388);
              local_270 = (uint *)CONCAT44(local_270._4_4_,uVar39);
              FUN_1457dbde8(lVar10,local_318,(ulonglong)local_368 & 0xffffffff,&local_270);
            }
            plVar14 = (longlong *)((longlong)local_378 + 1);
            local_390 = local_390 + 2;
            local_388 = local_388 + 0x10;
          } while (plVar13 != plVar14);
        }
        if (plVar27 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar27 + 3) = (int)plVar27[3] + -1;
          UNLOCK();
          if (uVar9 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar27 + 1));
          }
        }
        puVar21 = local_3b0;
        if (plVar30 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar30 + 3) = (int)plVar30[3] + -1;
          UNLOCK();
          if ((uint)local_3a0 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar30 + 1));
          }
        }
        cVar7 = (char)local_398;
        if (puVar35 != (ulonglong *)0x0) {
          LOCK();
          *(int *)(puVar35 + 3) = (int)puVar35[3] + -1;
          UNLOCK();
          if (uVar28 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(puVar35 + 1));
          }
        }
        lVar12 = local_3a8;
        if (puVar21 != (uint *)0x0) {
          puVar21[5] = 1;
        }
        iVar16 = FUN_1403b8464(&local_2c0,local_2b0 + 1);
        lVar11 = local_358;
        local_2b0 = iVar16;
      } while (iVar16 != (uint)local_3b8);
    }
    if (local_2c0 != (uint *)0x0) {
      if ((char)local_2b8[0x4e] == '\0') {
        *(int *)((longlong)local_2b8 + 0x264) = *(int *)((longlong)local_2b8 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)((longlong)local_2b8 + 0x264) = *(int *)((longlong)local_2b8 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (uStack_1e8 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  local_f0 = *(undefined8 **)(lVar12 + 0x330);
  uVar2 = *(undefined2 *)(lVar11 + 0xea);
  uVar3 = *(undefined2 *)(lVar11 + 0xfa);
  lVar10 = *(longlong *)(lVar12 + 0x28);
  local_c8 = 0;
  uVar9 = (int)local_160 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar9) {
    uVar28 = 0x100;
    if (0x100 < uVar9) {
      uVar28 = uVar9;
    }
    local_c8 = (ulonglong)uVar28 << 0x20;
    FUN_14497ddce(&local_e8,0);
  }
  local_c8 = CONCAT44(local_c8._4_4_,(int)local_160);
  if ((int)local_160 != 0) {
    memcpy(&local_e8,&local_180,(ulonglong)((int)local_160 + 0x1fU >> 3 & 0xfffffffc));
  }
  local_a0 = 0;
  uVar9 = (int)local_138 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar9) {
    uVar28 = 0x100;
    if (0x100 < uVar9) {
      uVar28 = uVar9;
    }
    local_a0 = (ulonglong)uVar28 << 0x20;
    FUN_14497ddce(&local_c0,0);
  }
  local_a0 = CONCAT44(local_a0._4_4_,(int)local_138);
  if ((int)local_138 != 0) {
    memcpy(&local_c0,&local_158,(ulonglong)((int)local_138 + 0x1fU >> 3 & 0xfffffffc));
  }
  uVar33 = uStack_128;
  lVar12 = local_130;
  local_98 = 0;
  local_90 = (longlong *)CONCAT44(local_90._4_4_,(int)uStack_128);
  if ((int)uStack_128 == 0) {
    local_90 = (longlong *)(uStack_128 & 0xffffffff);
  }
  else {
    FUN_1403b8c86(&local_98,uStack_128 & 0xffffffff,0);
    FUN_1403b8bfd(local_98,lVar12,uVar33 & 0xffffffff);
  }
  local_88 = local_120._0_4_;
  lVar12 = FUN_14009d2a0();
  local_250._0_4_ = CONCAT22(*(undefined2 *)(lVar12 + 0x50),(short)local_250);
  local_250._0_6_ = CONCAT24(uVar3,(undefined4)local_250);
  local_250 = (undefined8 *)CONCAT26(uVar2,(uint6)local_250);
  local_248._0_2_ = (ushort)(byte)local_248;
  local_248 = CONCAT44(0x6ff,(undefined4)local_248);
  local_240 = (undefined8 *)((ulonglong)local_240 & 0xffffffffffffff00);
  local_218 = 0;
  uVar9 = (int)local_160 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar9) {
    uVar28 = 0x100;
    if (0x100 < uVar9) {
      uVar28 = uVar9;
    }
    local_218 = (ulonglong)uVar28 << 0x20;
    FUN_14497ddce(&local_238,0);
  }
  local_218 = CONCAT44(local_218._4_4_,(int)local_160);
  if ((int)local_160 != 0) {
    memcpy(&local_238,&local_180,(ulonglong)((int)local_160 + 0x1fU >> 3 & 0xfffffffc));
  }
  local_1f0 = 0;
  uVar9 = (int)local_138 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar9) {
    uVar28 = 0x100;
    if (0x100 < uVar9) {
      uVar28 = uVar9;
    }
    local_1f0 = (ulonglong)uVar28 << 0x20;
    FUN_14497ddce(&local_210,0);
  }
  local_1f0 = CONCAT44(local_1f0._4_4_,(int)local_138);
  if ((int)local_138 != 0) {
    memcpy(&local_210,&local_158,(ulonglong)((int)local_138 + 0x1fU >> 3 & 0xfffffffc));
  }
  uVar33 = uStack_128;
  lVar12 = local_130;
  uStack_1e8 = 0;
  local_1e0 = CONCAT44(local_1e0._4_4_,(int)uStack_128);
  if ((int)uStack_128 == 0) {
    local_1e0 = uStack_128 & 0xffffffff;
  }
  else {
    FUN_1403b8c86(&uStack_1e8,uStack_128 & 0xffffffff,0);
    FUN_1403b8bfd(uStack_1e8,lVar12,uVar33 & 0xffffffff);
  }
  lVar12 = local_3a8;
  local_1b8 = 0x10000000000;
  local_190 = 0x10000000000;
  FUN_140fc3e02(&local_250,&local_238);
  bVar38 = local_250._2_2_ != -1;
  plVar13 = local_398;
  if (((bVar38) && (bVar38 = local_250._4_2_ != -1, bVar38)) &&
     (bVar38 = local_250._6_2_ != -1, bVar38)) {
    local_268 = (longlong *)(lVar10 + 0x28);
    cVar7 = *(char *)(lVar10 + 0x298);
    if (cVar7 == '\0') {
      *(int *)(lVar10 + 0x28c) = *(int *)(lVar10 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(lVar10 + 0x28c) = *(int *)(lVar10 + 0x28c) + 1;
      UNLOCK();
    }
    local_270 = &local_238;
    iVar29 = FUN_1403b8464(&local_270,0);
    iVar16 = *(int *)(lVar10 + 0x38);
    plVar13 = local_398;
    lVar11 = local_358;
    local_398 = local_268;
    uVar4 = local_250;
    while (local_358 = lVar11, local_268 = local_398, local_260 = iVar29,
          local_250 = (undefined8 *)uVar4, iVar29 != iVar16) {
      puVar34 = *(undefined8 **)(local_398[0xc] + (longlong)iVar29 * 8);
      if (cVar7 == '\0') {
        *(undefined4 *)((longlong)puVar34 + 0x14) = 0;
        local_3b8 = puVar34;
      }
      else {
        local_3b8 = (undefined8 *)0x0;
      }
      if (*(ushort *)((longlong)puVar34 + 0xc) != 0) {
        local_250._6_2_ = (short)((ulonglong)uVar4 >> 0x30);
        plVar13 = (longlong *)puVar34[5];
        lVar10 = (ulonglong)*(ushort *)((longlong)puVar34 + 0xc) << 5;
        do {
          if (*(short *)((longlong)plVar13 + 0x1e) == local_250._6_2_) goto LAB_140fc2b1a;
          plVar13 = plVar13 + 4;
          lVar10 = lVar10 + -0x20;
        } while (lVar10 != 0);
      }
      plVar13 = (longlong *)0x0;
LAB_140fc2b1a:
      local_3b0._4_4_ = (undefined4)((ulonglong)local_3b0 >> 0x20);
      local_3b0 = (uint *)CONCAT44(local_3b0._4_4_,*(int *)((longlong)puVar34 + 0x14));
      if (*(int *)((longlong)puVar34 + 0x14) == 1) {
        AcquireSRWLockShared((PSRWLOCK)(plVar13 + 1));
      }
      LOCK();
      *(int *)(plVar13 + 3) = (int)plVar13[3] + 1;
      UNLOCK();
      local_3a0 = *plVar13;
      if (*(ushort *)((longlong)puVar34 + 0xc) != 0) {
        plVar27 = (longlong *)puVar34[5];
        lVar10 = (ulonglong)*(ushort *)((longlong)puVar34 + 0xc) << 5;
        do {
          if (*(short *)((longlong)plVar27 + 0x1e) == local_250._4_2_) goto LAB_140fc2b50;
          plVar27 = plVar27 + 4;
          lVar10 = lVar10 + -0x20;
        } while (lVar10 != 0);
      }
      plVar27 = (longlong *)0x0;
LAB_140fc2b50:
      local_388 = CONCAT44(local_388._4_4_,*(int *)((longlong)puVar34 + 0x14));
      if (*(int *)((longlong)puVar34 + 0x14) == 1) {
        AcquireSRWLockShared((PSRWLOCK)(plVar27 + 1));
      }
      LOCK();
      *(int *)(plVar27 + 3) = (int)plVar27[3] + 1;
      UNLOCK();
      local_390 = (longlong *)*plVar27;
      if (*(ushort *)((longlong)puVar34 + 0xc) != 0) {
        plVar30 = (longlong *)puVar34[5];
        lVar10 = (ulonglong)*(ushort *)((longlong)puVar34 + 0xc) << 5;
        do {
          if (*(short *)((longlong)plVar30 + 0x1e) == local_250._2_2_) goto LAB_140fc2b82;
          plVar30 = plVar30 + 4;
          lVar10 = lVar10 + -0x20;
        } while (lVar10 != 0);
      }
      plVar30 = (longlong *)0x0;
LAB_140fc2b82:
      iVar18 = *(int *)((longlong)puVar34 + 0x14);
      if (iVar18 == 1) {
        AcquireSRWLockShared((PSRWLOCK)(plVar30 + 1));
      }
      LOCK();
      *(int *)(plVar30 + 3) = (int)plVar30[3] + 1;
      UNLOCK();
      local_2a8 = *plVar30;
      local_2c0 = (uint *)puVar34[3];
      local_298 = (undefined4)local_388;
      local_290 = local_390;
      local_280 = (int)local_3b0;
      local_278 = local_3a0;
      local_2d8 = local_398;
      local_3c0 = local_3a0;
      local_3c8 = local_390;
      local_2d0 = iVar29;
      local_2b8 = plVar30;
      local_2b0 = iVar18;
      local_2a0 = plVar27;
      local_288 = plVar13;
      FUN_147691a0e(&local_f0,&local_2d8);
      FUN_14768de02(&local_2c0);
      if (local_3b8 != (undefined8 *)0x0) {
        *(undefined4 *)((longlong)local_3b8 + 0x14) = 1;
      }
      iVar29 = FUN_1403b8464(&local_270,local_260 + 1);
      lVar12 = local_3a8;
      plVar13 = local_398;
      lVar11 = local_358;
      local_398 = local_268;
      uVar4 = local_250;
    }
    if (local_270 != (uint *)0x0) {
      if ((char)local_398[0x4e] == '\0') {
        *(int *)((longlong)local_398 + 0x264) = *(int *)((longlong)local_398 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)((longlong)local_398 + 0x264) = *(int *)((longlong)local_398 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  local_398 = plVar13;
  if (uStack_1e8 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  local_3c8._0_2_ = *(undefined2 *)(lVar11 + 0xf8);
  FUN_140fc4010(*(undefined8 *)(lVar12 + 0x340),*(undefined8 *)(lVar12 + 0x28),&local_180,
                *(undefined2 *)(lVar11 + 0xfa));
  local_3c8._0_2_ = *(undefined2 *)(lVar11 + 0xf6);
  FUN_140fc4010(*(undefined8 *)(lVar12 + 0x340),*(undefined8 *)(lVar12 + 0x28),&local_180,
                *(undefined2 *)(lVar11 + 0xfa));
  local_3c8._0_2_ = *(undefined2 *)(lVar11 + 0xee);
  FUN_140fc3a44(*(undefined8 *)(lVar12 + 0x340),*(undefined8 *)(lVar12 + 0x28),&local_180,
                *(undefined2 *)(lVar11 + 0xfa));
  local_3c8 = (longlong *)CONCAT62(local_3c8._2_6_,*(undefined2 *)(lVar11 + 0xf0));
  FUN_140fc3a44(*(undefined8 *)(lVar12 + 0x340),*(undefined8 *)(lVar12 + 0x28),&local_180,
                *(undefined2 *)(lVar11 + 0xfa));
  if (local_130 != 0) {
    FUN_1400020a8();
  }
LAB_140fc1afb:
  if ((local_48 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fc2f08 FUN_140fc2f08 body=86 status=ok
// SIG undefined FUN_140fc2f08(void)

undefined8 * FUN_140fc2f08(longlong param_1,undefined8 *param_2,short param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(ushort *)(param_1 + 0xc) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)(lVar2 + 0x1e) == param_3) {
        if (lVar2 != 0) {
          FUN_140fc3074(param_2,lVar2,*(undefined4 *)(param_1 + 0x14),0);
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



// FUNCTION 140fc2f5e FUN_140fc2f5e body=86 status=ok
// SIG undefined FUN_140fc2f5e(void)

undefined8 * FUN_140fc2f5e(longlong param_1,undefined8 *param_2,short param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(ushort *)(param_1 + 0xc) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)(lVar2 + 0x1e) == param_3) {
        if (lVar2 != 0) {
          FUN_147664b62(param_2,lVar2,*(undefined4 *)(param_1 + 0x14),0);
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



// FUNCTION 140fc2fb4 FUN_140fc2fb4 body=190 status=ok
// SIG undefined FUN_140fc2fb4(void)

void FUN_140fc2fb4(longlong param_1,undefined2 param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_58 [46];
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2a = param_2;
  uVar2 = FUN_140fc52d2();
  if ((short)uVar2 != -1) {
    uVar6 = uVar2 & 0xffff;
    FUN_14086b58e(param_1 + 0x50,uVar2,&local_2a);
    FUN_140bbeb1c(param_1,&local_2a);
    lVar4 = param_1 + 0x128;
    iVar5 = (uVar6 - *(int *)(param_1 + 0x140)) + 1;
    if (0 < iVar5) {
      uVar3 = FUN_144a54ea4(lVar4,iVar5);
      FUN_1447c6044(lVar4,uVar3,iVar5,0);
    }
    if (*(longlong *)(param_1 + 0x138) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x138);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar6 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar6 & 0x1f);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fc3074 FUN_140fc3074 body=121 status=ok
// SIG undefined FUN_140fc3074(void)

longlong * FUN_140fc3074(longlong *param_1,longlong *param_2,int param_3,int param_4)

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
    param_1[2] = (longlong)param_4 * 0x10 + *param_2;
  }
  return param_1;
}



// FUNCTION 140fc30ee FUN_140fc30ee body=258 status=ok
// SIG undefined FUN_140fc30ee(void)

void FUN_140fc30ee(longlong *param_1)

{
  int *piVar1;
  
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
                    /* WARNING: Could not recover jumptable at 0x000140fc31e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 140fc31f0 FUN_140fc31f0 body=1933 status=ok
// SIG undefined FUN_140fc31f0(void)

void FUN_140fc31f0(longlong *param_1,longlong *param_2,undefined8 *param_3,ulonglong *param_4,
                  longlong param_5)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  char cVar8;
  ushort uVar9;
  longlong lVar10;
  longlong *plVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  uint *puVar17;
  int iVar18;
  longlong lVar19;
  undefined *puVar20;
  bool bVar21;
  undefined1 auStack_188 [32];
  uint *local_168;
  longlong local_160;
  undefined4 local_158;
  undefined8 local_150;
  wchar_t *local_148;
  code *local_140;
  undefined1 *local_138;
  undefined8 *local_130;
  undefined1 *local_128;
  code *local_120;
  ulonglong local_110;
  undefined8 *local_108;
  longlong local_100;
  longlong *local_f8;
  int local_ec;
  uint local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ushort auStack_d4 [2];
  uint local_d0 [8];
  undefined8 local_b0;
  uint local_a8 [4];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int local_88;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar10 = FUN_14009d2a0();
  FUN_14038fb82();
  iVar15 = (int)param_4[1];
  if (iVar15 == 0) goto LAB_140fc35f4;
  local_108 = param_3;
  if (*param_2 == 0) {
    FUN_1457db340(param_1,param_5);
    uVar6 = param_4[1];
    if ((longlong)(int)uVar6 != 0) {
      uVar5 = *param_4;
      lVar16 = 0;
      do {
        FUN_14055cd1c(*param_1 + 0x28,*(undefined2 *)(uVar5 + lVar16),*(undefined2 *)(lVar10 + 0x5a)
                     );
        lVar16 = lVar16 + 2;
      } while ((longlong)(int)uVar6 * 2 != lVar16);
    }
    goto LAB_140fc35f4;
  }
  local_ec = iVar15;
  if (iVar15 < 2) {
    lVar16 = *param_1 + 0x28;
    uVar1 = *(undefined2 *)*param_4;
    cVar8 = FUN_140bbead8(lVar16,uVar1,*(undefined2 *)(lVar10 + 0x110));
    if ((cVar8 == '\0') ||
       (cVar8 = FUN_140bbead8(lVar16,uVar1,*(undefined2 *)(lVar10 + 0xf4)), cVar8 != '\0'))
    goto LAB_140fc36e3;
    if ((iVar15 == 1) && (*(short *)(param_5 + 0x14) == -1)) {
      local_f8 = param_2;
      FUN_14055cd1c(lVar16,uVar1,*(undefined2 *)(lVar10 + 0x5a));
      uVar2 = *(ushort *)*param_4;
      lVar10 = *param_1;
      lVar16 = FUN_14009d2a0();
      local_100 = FUN_14038fb82();
      uVar9 = *(ushort *)(*(longlong *)(lVar10 + 0xc0) + (ulonglong)uVar2 * 8);
      if (uVar9 == 0xffff) {
        puVar20 = &DAT_14cab2728;
      }
      else {
        puVar20 = (undefined *)((ulonglong)((uint)uVar9 * 0x28) + *(longlong *)(lVar10 + 0x30));
      }
      uVar9 = *(ushort *)(lVar16 + 0x10a);
      auStack_d4[1] = *(undefined2 *)(lVar16 + 0x132);
      local_b0 = 0x10000000000;
      lVar16 = 2;
      iVar15 = 0;
      local_110 = (ulonglong)uVar2;
      do {
        iVar13 = uVar9 + 1;
        iVar18 = iVar13 - iVar15;
        if (iVar18 != 0 && iVar15 <= iVar13) {
          if (iVar15 == 0) {
LAB_140fc337d:
            if (local_b0._4_4_ <= (int)(uint)uVar9) {
              local_b0 = CONCAT44(0x100,(int)local_b0);
              FUN_14497ddce(local_d0,iVar15);
              iVar13 = (int)local_b0 + iVar18;
            }
            iVar14 = iVar13 + 0x1f;
            if (-1 < iVar13) {
              iVar14 = iVar13;
            }
            local_b0 = CONCAT44(local_b0._4_4_,iVar13);
            if (iVar13 % 0x20 != 0) {
              bVar12 = -(char)(iVar13 % 0x20);
              local_d0[iVar14 >> 5] = (local_d0[iVar14 >> 5] << (bVar12 & 0x1f)) >> (bVar12 & 0x1f);
            }
          }
          else {
            iVar14 = iVar15 + 0x1e;
            if (-1 < iVar15 + -1) {
              iVar14 = iVar15 + -1;
            }
            if (iVar14 >> 5 != (uint)(uVar9 >> 5)) goto LAB_140fc337d;
            local_b0 = CONCAT44(local_b0._4_4_,iVar13);
          }
          FUN_1447c45ca(local_d0,iVar15,iVar18,0);
        }
        local_d0[uVar9 >> 5] = local_d0[uVar9 >> 5] | 1 << ((byte)uVar9 & 0x1f);
        if (lVar16 == 4) goto LAB_140fc3406;
        uVar9 = *(ushort *)((longlong)auStack_d4 + lVar16);
        lVar16 = lVar16 + 2;
        iVar15 = (int)local_b0;
      } while( true );
    }
  }
  else {
LAB_140fc36e3:
    if (*(short *)(param_5 + 0x14) == -1) {
      lVar16 = *param_1;
      if (*(longlong *)(param_1[1] + 0x350) == 0) {
        lVar19 = FUN_147685e68(lVar16);
        lVar16 = param_1[1];
        if ((lVar19 != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(lVar19);
        }
        *(longlong *)(lVar16 + 0x350) = lVar19;
        FUN_14129a52a(*param_1 + 0x2a0,param_1[1],*(undefined8 *)(param_1[1] + 0x350));
        lVar16 = *param_1;
      }
      FUN_14485c47a(param_5,lVar16);
      lVar16 = *(longlong *)(param_1[1] + 0x350);
      if ((lVar16 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar16);
      }
      local_78 = (code *)0x0;
      FUN_14485c47a(&local_78,lVar16);
      *(code **)(param_5 + 8) = local_78;
      FUN_1457ab9aa(*(undefined8 *)(param_1[1] + 0x350),&local_78);
      *(uint *)(param_5 + 0x16) = (uint)local_78;
      local_e8 = (uint)*param_4;
      uStack_e4 = *(undefined4 *)((longlong)param_4 + 4);
      uStack_e0 = (undefined4)param_4[1];
      uStack_dc = *(undefined4 *)((longlong)param_4 + 0xc);
      local_168 = &local_e8;
      local_160 = param_5;
      FUN_14768ecea(*param_1,param_2,local_108,
                    *(undefined2 *)(*(longlong *)(param_1[1] + 0x350) + 0x66));
      iVar15 = (int)param_4[1];
    }
    if (iVar15 != 0) {
      local_f8 = (longlong *)
                 CONCAT62(local_f8._2_6_,*(undefined2 *)(*(longlong *)(param_1[1] + 0x350) + 0x66));
      local_110 = *param_4;
      lVar16 = 0;
      do {
        uVar1 = *(undefined2 *)(local_110 + lVar16);
        lVar19 = *param_1;
        uVar3 = *(undefined2 *)(lVar10 + 0x5a);
        cVar8 = FUN_140bbead8(lVar19 + 0x28,uVar1,uVar3);
        if (cVar8 == '\0') {
          FUN_147686232(lVar19 + 0x28,uVar1,uVar3,param_5 + 0x16);
        }
        else {
          FUN_1476862f4();
        }
        FUN_1405e0ab4(*param_1 + 0x28,uVar1,(ulonglong)local_f8 & 0xffff);
        lVar16 = lVar16 + 2;
      } while ((longlong)iVar15 * 2 != lVar16);
    }
  }
  goto LAB_140fc35ea;
code_r0x000140fc347f:
  lVar19 = lVar19 + -0x20;
  puVar17 = puVar17 + 1;
  if ((ulonglong)((int)local_58 + 0x1fU & 0xffffffe0) + lVar19 == 0) goto LAB_140fc349e;
  goto LAB_140fc3477;
LAB_140fc3406:
  local_58 = 0x10000000000;
  puVar17 = local_a8;
  local_168 = puVar17;
  FUN_14009e926(puVar20,local_d0,&local_78,2);
  plVar7 = local_f8;
  lVar16 = local_100;
  uVar6 = local_110;
  local_a8[0] = (uint)local_78;
  local_a8[1] = local_78._4_4_;
  local_a8[2] = uStack_70;
  local_a8[3] = uStack_6c;
  local_98 = local_68;
  uStack_94 = uStack_64;
  uStack_90 = uStack_60;
  uStack_8c = uStack_5c;
  local_88 = (int)local_58;
  local_84 = local_58._4_4_;
  iVar15 = -1;
  if (0x1f < (int)local_58 + 0x1fU) {
    lVar19 = 0;
LAB_140fc3477:
    uVar4 = *puVar17;
    if (uVar4 == 0) goto code_r0x000140fc347f;
    iVar13 = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> iVar13 & 1) == 0; iVar13 = iVar13 + 1) {
      }
    }
    iVar13 = iVar13 - (int)lVar19;
    if (iVar13 < (int)local_58) {
      iVar15 = iVar13;
    }
  }
LAB_140fc349e:
  uVar2 = *(ushort *)(local_100 + 0xb6);
  if ((uVar2 == 0xffff) ||
     (*(uint *)(puVar20 + 0x20) == (uint)uVar2 || (int)*(uint *)(puVar20 + 0x20) < (int)(uint)uVar2)
     ) {
    bVar21 = false;
  }
  else {
    bVar21 = (*(uint *)(puVar20 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0;
  }
  if ((iVar15 != -1) && (!bVar21)) {
    local_d0[0] = 0;
    plVar11 = (longlong *)FUN_1406f4b62(local_f8);
    if (plVar11 == (longlong *)0x0) {
LAB_140fc3798:
      lVar16 = FUN_1406f4b62(plVar7);
      if (lVar16 != 0) {
        lVar19 = FUN_140a2e7a0();
        if ((*(int *)(lVar19 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar19 + 0x38) * 8) == lVar19 + 0x30)) {
          FUN_1409b8518(lVar16,*local_108,local_d0);
          lVar16 = local_100;
          goto LAB_140fc35b1;
        }
      }
    }
    else {
      if (DAT_14caec470 == 0) {
        local_78 = FUN_1417df956;
        local_120 = FUN_14081d0ea;
        local_128 = &LAB_1463eaa20;
        local_138 = &LAB_147bbd9ea;
        local_140 = FUN_1401cf6d7;
        local_148 = L"Engine";
        local_150 = 0;
        local_158 = 0x10000000;
        local_160 = CONCAT44(local_160._4_4_,8);
        local_168 = (uint *)CONCAT44(local_168._4_4_,0x330);
        local_130 = &local_78;
        FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e);
      }
      if ((*(int *)(plVar11[2] + 0x38) < *(int *)(DAT_14caec470 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) !=
          DAT_14caec470 + 0x30)) goto LAB_140fc3798;
      local_a8[0] = (uint)*local_108;
      local_a8[1] = 0;
      local_a8[2] = (uint)((ulonglong)*local_108 >> 0x20);
      local_a8[3] = *(undefined4 *)((longlong)local_108 + 0xc);
      local_98 = CONCAT31(local_98._1_3_,*(undefined1 *)(local_108 + 1));
      local_58 = CONCAT71(local_58._1_7_,0xff);
      local_50 = 0xffffffff;
      local_4c = 0;
      local_168 = (uint *)CONCAT44(local_168._4_4_,3);
      cVar8 = (**(code **)(*plVar11 + 0x3c0))(plVar11,0);
      if (cVar8 != '\0') {
        local_d0[0] = (uint)local_78;
      }
LAB_140fc35b1:
      FUN_140fc397e(lVar10 + 0x28,uVar6 & 0xffffffff,*(undefined2 *)(lVar16 + 0xb6),local_d0);
    }
  }
  lVar16 = FUN_14009d2a0();
  FUN_14055cd1c(lVar10 + 0x28,uVar6 & 0xffffffff,*(undefined2 *)(lVar16 + 0xf2));
LAB_140fc35ea:
  *(int *)(param_5 + 0x10) = local_ec;
LAB_140fc35f4:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fc397e FUN_140fc397e body=197 status=ok
// SIG undefined FUN_140fc397e(void)

void FUN_140fc397e(longlong param_1,ulonglong param_2,short param_3,float *param_4)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  FUN_1405e0ab4();
  uVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x98) + (param_2 & 0xffff) * 8);
  if ((uVar4 != 0xffff) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar4 * 8), lVar3 != 0)) {
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x98) + 2 + (param_2 & 0xffff) * 8);
    if (*(ushort *)(lVar3 + 0xc) != 0) {
      plVar6 = *(longlong **)(lVar3 + 0x28);
      lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
      do {
        if (*(short *)((longlong)plVar6 + 0x1e) == param_3) goto LAB_140fc39e7;
        plVar6 = plVar6 + 4;
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
    }
    plVar6 = (longlong *)0x0;
LAB_140fc39e7:
    iVar2 = *(int *)(lVar3 + 0x14);
    if (iVar2 == 1) {
      AcquireSRWLockExclusive((PSRWLOCK)(plVar6 + 1));
    }
    LOCK();
    *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
    UNLOCK();
    *(double *)(*plVar6 + (ulonglong)*(byte *)((longlong)plVar6 + 0x1c) * (ulonglong)uVar1) =
         (double)*param_4;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 3) = (int)plVar6[3] + -1;
      UNLOCK();
      if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140fc3a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(plVar6 + 1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140fc3a44 FUN_140fc3a44 body=957 status=ok
// SIG undefined FUN_140fc3a44(void)

void FUN_140fc3a44(undefined8 param_1,longlong param_2,longlong param_3,short param_4,short param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined8 local_230;
  longlong local_220;
  int local_218;
  int local_214;
  undefined8 local_210;
  undefined8 local_208;
  longlong local_200;
  longlong local_1f8;
  int local_1f0;
  undefined8 local_1e8;
  undefined8 *local_1e0;
  int local_1d8;
  undefined8 local_1d0;
  undefined8 *local_1c8;
  int local_1c0;
  undefined8 local_1b8;
  undefined8 *local_1b0;
  int local_1a8;
  undefined8 local_1a0;
  undefined1 *local_198;
  longlong local_190;
  int local_188;
  undefined1 local_180 [2];
  short local_17e;
  short local_17c;
  short local_17a;
  undefined1 local_177;
  undefined4 local_174;
  undefined1 local_170;
  undefined1 local_168 [80];
  longlong local_118;
  undefined8 local_e8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [80];
  longlong local_60;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_b8 = param_1;
  FUN_1403b8af8(local_b0,param_3);
  local_50 = *(undefined4 *)(param_3 + 0x60);
  lVar5 = FUN_14009d2a0();
  local_17e = *(short *)(lVar5 + 0x50);
  local_17a = param_5;
  local_177 = 0;
  local_174 = 0x6ff;
  local_170 = 0;
  local_17c = param_4;
  FUN_1403b8af8(local_168,param_3);
  local_e8 = 0x10000000000;
  local_c0 = 0x10000000000;
  FUN_140fc3e02(local_180,local_168);
  lVar5 = local_200;
  if (((local_17e != -1) && (local_17c != -1)) && (local_17a != -1)) {
    local_190 = param_2 + 0x28;
    cVar1 = *(char *)(param_2 + 0x298);
    if (cVar1 == '\0') {
      *(int *)(param_2 + 0x28c) = *(int *)(param_2 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(param_2 + 0x28c) = *(int *)(param_2 + 0x28c) + 1;
      UNLOCK();
    }
    local_198 = local_168;
    iVar4 = FUN_1403b8464(&local_198,0);
    iVar2 = *(int *)(param_2 + 0x38);
    lVar5 = local_200;
    local_200 = local_190;
    while (local_190 = local_200, local_188 = iVar4, iVar4 != iVar2) {
      lVar5 = *(longlong *)(*(longlong *)(local_200 + 0x60) + (longlong)iVar4 * 8);
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar5 + 0x14) = 0;
        local_220 = lVar5;
      }
      else {
        local_220 = 0;
      }
      if (*(ushort *)(lVar5 + 0xc) != 0) {
        puVar9 = *(undefined8 **)(lVar5 + 0x28);
        lVar6 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
        do {
          if (*(short *)((longlong)puVar9 + 0x1e) == local_17a) goto LAB_140fc3c37;
          puVar9 = puVar9 + 4;
          lVar6 = lVar6 + -0x20;
        } while (lVar6 != 0);
      }
      puVar9 = (undefined8 *)0x0;
LAB_140fc3c37:
      local_214 = *(int *)(lVar5 + 0x14);
      if (local_214 == 1) {
        AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
      }
      LOCK();
      *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
      UNLOCK();
      local_208 = *puVar9;
      if (*(ushort *)(lVar5 + 0xc) != 0) {
        puVar7 = *(undefined8 **)(lVar5 + 0x28);
        lVar6 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
        do {
          if (*(short *)((longlong)puVar7 + 0x1e) == local_17c) goto LAB_140fc3c69;
          puVar7 = puVar7 + 4;
          lVar6 = lVar6 + -0x20;
        } while (lVar6 != 0);
      }
      puVar7 = (undefined8 *)0x0;
LAB_140fc3c69:
      local_218 = *(int *)(lVar5 + 0x14);
      if (local_218 == 1) {
        AcquireSRWLockShared((PSRWLOCK)(puVar7 + 1));
      }
      LOCK();
      *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
      UNLOCK();
      local_210 = *puVar7;
      if (*(ushort *)(lVar5 + 0xc) != 0) {
        puVar8 = *(undefined8 **)(lVar5 + 0x28);
        lVar6 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
        do {
          if (*(short *)((longlong)puVar8 + 0x1e) == local_17e) goto LAB_140fc3c9b;
          puVar8 = puVar8 + 4;
          lVar6 = lVar6 + -0x20;
        } while (lVar6 != 0);
      }
      puVar8 = (undefined8 *)0x0;
LAB_140fc3c9b:
      iVar3 = *(int *)(lVar5 + 0x14);
      if (iVar3 == 1) {
        AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
      }
      LOCK();
      *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
      UNLOCK();
      local_1d0 = *puVar8;
      local_1e8 = *(undefined8 *)(lVar5 + 0x18);
      local_1c0 = local_218;
      local_1b8 = local_210;
      local_1a8 = local_214;
      local_1a0 = local_208;
      local_1f8 = local_200;
      local_230 = local_208;
      local_238 = local_210;
      local_1f0 = iVar4;
      local_1e0 = puVar8;
      local_1d8 = iVar3;
      local_1c8 = puVar7;
      local_1b0 = puVar9;
      FUN_147691c34(&local_b8,&local_1f8);
      FUN_14768de02(&local_1e8);
      if (local_220 != 0) {
        *(undefined4 *)(local_220 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_198,local_188 + 1);
      lVar5 = local_200;
      local_200 = local_190;
    }
    if (local_198 != (undefined1 *)0x0) {
      if (*(char *)(local_200 + 0x270) == '\0') {
        *(int *)(local_200 + 0x264) = *(int *)(local_200 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_200 + 0x264) = *(int *)(local_200 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  local_200 = lVar5;
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fc3e02 FUN_140fc3e02 body=525 status=ok
// SIG undefined FUN_140fc3e02(void)

void FUN_140fc3e02(longlong param_1,longlong param_2)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = *(ushort *)(param_1 + 2);
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 != 0 && iVar3 <= iVar5) {
    if (iVar3 == 0) {
LAB_140fc3e48:
      if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(param_2 + 0x24) = 0x100;
        FUN_14497ddce(param_2,iVar3);
        iVar5 = *(int *)(param_2 + 0x20) + iVar7;
      }
      iVar6 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar6 = iVar5;
      }
      *(int *)(param_2 + 0x20) = iVar5;
      if (iVar5 % 0x20 != 0) {
        bVar4 = -(char)(iVar5 % 0x20);
        *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140fc3e48;
      *(int *)(param_2 + 0x20) = iVar5;
    }
    FUN_1447c45ca(param_2,iVar3,iVar7,0);
  }
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)(param_1 + 4);
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 != 0 && iVar3 <= iVar5) {
    if (iVar3 == 0) {
LAB_140fc3ed0:
      if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(param_2 + 0x24) = 0x100;
        FUN_14497ddce(param_2,iVar3);
        iVar5 = *(int *)(param_2 + 0x20) + iVar7;
      }
      iVar6 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar6 = iVar5;
      }
      *(int *)(param_2 + 0x20) = iVar5;
      if (iVar5 % 0x20 != 0) {
        bVar4 = -(char)(iVar5 % 0x20);
        *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140fc3ed0;
      *(int *)(param_2 + 0x20) = iVar5;
    }
    FUN_1447c45ca(param_2,iVar3,iVar7,0);
  }
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)(param_1 + 6);
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 == 0 || iVar5 < iVar3) goto LAB_140fc3f8a;
  if (iVar3 == 0) {
LAB_140fc3f4b:
    if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
      *(undefined4 *)(param_2 + 0x24) = 0x100;
      FUN_14497ddce(param_2,iVar3);
      iVar5 = *(int *)(param_2 + 0x20) + iVar7;
    }
    iVar6 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar6 = iVar5;
    }
    *(int *)(param_2 + 0x20) = iVar5;
    if (iVar5 % 0x20 != 0) {
      bVar4 = -(char)(iVar5 % 0x20);
      *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
           (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
           (bVar4 & 0x1f);
    }
  }
  else {
    iVar6 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar6 = iVar3 + -1;
    }
    if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140fc3f4b;
    *(int *)(param_2 + 0x20) = iVar5;
  }
  FUN_1447c45ca(param_2,iVar3,iVar7,0);
LAB_140fc3f8a:
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  return;
}



// FUNCTION 140fc4010 FUN_140fc4010 body=1035 status=ok
// SIG undefined FUN_140fc4010(void)

void FUN_140fc4010(undefined8 param_1,longlong param_2,longlong param_3,short param_4,short param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_220;
  longlong local_218;
  int local_210;
  int local_20c;
  undefined8 local_208;
  longlong local_200;
  longlong local_1f8;
  int local_1f0;
  undefined8 local_1e8;
  undefined8 *local_1e0;
  int local_1d8;
  undefined8 local_1d0;
  undefined8 *local_1c8;
  int local_1c0;
  undefined8 local_1b8;
  undefined8 *local_1b0;
  int local_1a8;
  undefined8 local_1a0;
  undefined1 *local_198;
  longlong local_190;
  int local_188;
  undefined1 local_180 [2];
  short local_17e;
  short local_17c;
  short local_17a;
  undefined1 local_177;
  undefined4 local_174;
  undefined1 local_170;
  undefined1 local_168 [80];
  longlong local_118;
  undefined8 local_e8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [80];
  longlong local_60;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_b8 = param_1;
  FUN_1403b8af8(local_b0,param_3);
  local_50 = *(undefined4 *)(param_3 + 0x60);
  lVar6 = FUN_14009d2a0();
  local_17e = *(short *)(lVar6 + 0x50);
  local_17a = param_5;
  local_177 = 0;
  local_174 = 0x6ff;
  local_170 = 0;
  local_17c = param_4;
  FUN_1403b8af8(local_168,param_3);
  local_e8 = 0x10000000000;
  local_c0 = 0x10000000000;
  FUN_140fc441c(local_180,local_168);
  if (((local_17e != -1) && (local_17c != -1)) && (local_17a != -1)) {
    local_190 = param_2 + 0x28;
    cVar1 = *(char *)(param_2 + 0x298);
    if (cVar1 == '\0') {
      *(int *)(param_2 + 0x28c) = *(int *)(param_2 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(param_2 + 0x28c) = *(int *)(param_2 + 0x28c) + 1;
      UNLOCK();
    }
    local_198 = local_168;
    iVar5 = FUN_1403b8464(&local_198,0);
    iVar2 = *(int *)(param_2 + 0x38);
    lVar6 = local_190;
    while (local_190 = lVar6, local_188 = iVar5, iVar5 != iVar2) {
      lVar4 = *(longlong *)(*(longlong *)(lVar6 + 0x60) + (longlong)iVar5 * 8);
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar4 + 0x14) = 0;
        lVar10 = lVar4;
      }
      else {
        lVar10 = 0;
      }
      if (*(ushort *)(lVar4 + 0xc) != 0) {
        puVar8 = *(undefined8 **)(lVar4 + 0x28);
        lVar7 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
        do {
          if (*(short *)((longlong)puVar8 + 0x1e) == local_17a) goto LAB_140fc4203;
          puVar8 = puVar8 + 4;
          lVar7 = lVar7 + -0x20;
        } while (lVar7 != 0);
      }
      puVar8 = (undefined8 *)0x0;
LAB_140fc4203:
      iVar11 = *(int *)(lVar4 + 0x14);
      if (iVar11 == 1) {
        AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
      }
      LOCK();
      *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
      UNLOCK();
      if (*(ushort *)(lVar4 + 0xc) != 0) {
        puVar9 = *(undefined8 **)(lVar4 + 0x28);
        lVar7 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
        do {
          if (*(short *)((longlong)puVar9 + 0x1e) == local_17c) goto LAB_140fc424a;
          puVar9 = puVar9 + 4;
          lVar7 = lVar7 + -0x20;
        } while (lVar7 != 0);
      }
      puVar9 = (undefined8 *)0x0;
LAB_140fc424a:
      local_20c = *(int *)(lVar4 + 0x14);
      uVar12 = *puVar8;
      if (local_20c == 1) {
        local_220 = *puVar8;
        local_218 = lVar6;
        AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
        lVar6 = local_218;
        uVar12 = local_220;
      }
      LOCK();
      *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
      UNLOCK();
      local_208 = *puVar9;
      if (*(ushort *)(lVar4 + 0xc) != 0) {
        puVar13 = *(undefined8 **)(lVar4 + 0x28);
        lVar7 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
        do {
          if (*(short *)((longlong)puVar13 + 0x1e) == local_17e) goto LAB_140fc429f;
          puVar13 = puVar13 + 4;
          lVar7 = lVar7 + -0x20;
        } while (lVar7 != 0);
      }
      puVar13 = (undefined8 *)0x0;
LAB_140fc429f:
      iVar3 = *(int *)(lVar4 + 0x14);
      local_200 = lVar10;
      if (iVar3 == 1) {
        local_220 = uVar12;
        local_218 = lVar6;
        local_210 = iVar11;
        AcquireSRWLockShared((PSRWLOCK)(puVar13 + 1));
        lVar6 = local_218;
        uVar12 = local_220;
        iVar11 = local_210;
      }
      LOCK();
      *(int *)(puVar13 + 3) = *(int *)(puVar13 + 3) + 1;
      UNLOCK();
      local_1d0 = *puVar13;
      local_1e8 = *(undefined8 *)(lVar4 + 0x18);
      local_1c0 = local_20c;
      local_1b8 = local_208;
      local_238 = local_208;
      local_230 = uVar12;
      local_1f8 = lVar6;
      local_1f0 = iVar5;
      local_1e0 = puVar13;
      local_1d8 = iVar3;
      local_1c8 = puVar9;
      local_1b0 = puVar8;
      local_1a8 = iVar11;
      local_1a0 = uVar12;
      FUN_1457db530(&local_b8,&local_1f8);
      FUN_1457db250(&local_1e8);
      if (local_200 != 0) {
        *(undefined4 *)(local_200 + 0x14) = 1;
      }
      iVar5 = FUN_1403b8464(&local_198,local_188 + 1);
      lVar6 = local_190;
    }
    if (local_198 != (undefined1 *)0x0) {
      if (*(char *)(lVar6 + 0x270) == '\0') {
        *(int *)(lVar6 + 0x264) = *(int *)(lVar6 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(lVar6 + 0x264) = *(int *)(lVar6 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fc441c FUN_140fc441c body=525 status=ok
// SIG undefined FUN_140fc441c(void)

void FUN_140fc441c(longlong param_1,longlong param_2)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = *(ushort *)(param_1 + 2);
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 != 0 && iVar3 <= iVar5) {
    if (iVar3 == 0) {
LAB_140fc4462:
      if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(param_2 + 0x24) = 0x100;
        FUN_14497ddce(param_2,iVar3);
        iVar5 = *(int *)(param_2 + 0x20) + iVar7;
      }
      iVar6 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar6 = iVar5;
      }
      *(int *)(param_2 + 0x20) = iVar5;
      if (iVar5 % 0x20 != 0) {
        bVar4 = -(char)(iVar5 % 0x20);
        *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140fc4462;
      *(int *)(param_2 + 0x20) = iVar5;
    }
    FUN_1447c45ca(param_2,iVar3,iVar7,0);
  }
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)(param_1 + 4);
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 != 0 && iVar3 <= iVar5) {
    if (iVar3 == 0) {
LAB_140fc44ea:
      if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(param_2 + 0x24) = 0x100;
        FUN_14497ddce(param_2,iVar3);
        iVar5 = *(int *)(param_2 + 0x20) + iVar7;
      }
      iVar6 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar6 = iVar5;
      }
      *(int *)(param_2 + 0x20) = iVar5;
      if (iVar5 % 0x20 != 0) {
        bVar4 = -(char)(iVar5 % 0x20);
        *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140fc44ea;
      *(int *)(param_2 + 0x20) = iVar5;
    }
    FUN_1447c45ca(param_2,iVar3,iVar7,0);
  }
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)(param_1 + 6);
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 == 0 || iVar5 < iVar3) goto LAB_140fc45a4;
  if (iVar3 == 0) {
LAB_140fc4565:
    if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
      *(undefined4 *)(param_2 + 0x24) = 0x100;
      FUN_14497ddce(param_2,iVar3);
      iVar5 = *(int *)(param_2 + 0x20) + iVar7;
    }
    iVar6 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar6 = iVar5;
    }
    *(int *)(param_2 + 0x20) = iVar5;
    if (iVar5 % 0x20 != 0) {
      bVar4 = -(char)(iVar5 % 0x20);
      *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
           (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
           (bVar4 & 0x1f);
    }
  }
  else {
    iVar6 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar6 = iVar3 + -1;
    }
    if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140fc4565;
    *(int *)(param_2 + 0x20) = iVar5;
  }
  FUN_1447c45ca(param_2,iVar3,iVar7,0);
LAB_140fc45a4:
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  return;
}



// FUNCTION 140fc462a FUN_140fc462a body=450 status=ok
// SIG undefined FUN_140fc462a(void)

void FUN_140fc462a(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 *puVar1;
  ushort uVar2;
  longlong lVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 unaff_RBP;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *(ushort *)(param_2 + 0xe);
  lVar3 = *(longlong *)(param_2 + 0x18);
  local_70 = param_4;
  lVar5 = FUN_14009d2a0();
  if (*(ushort *)(param_2 + 0xc) == 0) {
    uVar8 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)(lVar6 + 0x1e) == *(short *)(lVar5 + 0x11a)) goto LAB_140fc4693;
      lVar6 = lVar6 + 0x20;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
    lVar6 = 0;
LAB_140fc4693:
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),lVar6 != 0);
  }
  lVar5 = FUN_14009d2a0();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    lVar6 = *(longlong *)(param_2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)(lVar6 + 0x1e) == *(short *)(lVar5 + 0x10a)) {
        if (lVar6 != 0) {
          if (uVar2 != 0) {
            uVar9 = 0;
            do {
              local_68 = *(longlong *)(param_3 + uVar9 * 8);
              if ((DAT_14c950c29 == '\x01') && (local_68 != 0)) {
                FUN_1456cec3c();
              }
              puVar1 = (undefined4 *)(local_70 + uVar9 * 8);
              local_60 = *(undefined8 *)(param_3 + 8 + uVar9 * 8);
              local_58 = *puVar1;
              uStack_54 = puVar1[1];
              uStack_50 = puVar1[2];
              uStack_4c = puVar1[3];
              uVar4 = FUN_140fc47ee(param_1,*(undefined2 *)(lVar3 + uVar9),&local_68,
                                    uVar8 & 0xffffffff);
              *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0x3c + (ulonglong)uVar4 * 0x40) = 1;
              uVar9 = uVar9 + 2;
            } while ((uint)uVar2 * 2 != uVar9);
          }
          goto LAB_140fc4731;
        }
        break;
      }
      lVar6 = lVar6 + 0x20;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  if (uVar2 != 0) {
    uVar9 = 0;
    do {
      local_68 = *(longlong *)(param_3 + uVar9 * 8);
      if ((DAT_14c950c29 == '\x01') && (local_68 != 0)) {
        FUN_1456cec3c();
      }
      puVar1 = (undefined4 *)(local_70 + uVar9 * 8);
      local_60 = *(undefined8 *)(param_3 + 8 + uVar9 * 8);
      local_58 = *puVar1;
      uStack_54 = puVar1[1];
      uStack_50 = puVar1[2];
      uStack_4c = puVar1[3];
      FUN_140fc47ee(param_1,*(undefined2 *)(lVar3 + uVar9),&local_68,uVar8 & 0xffffffff);
      uVar9 = uVar9 + 2;
    } while ((uint)uVar2 * 2 != uVar9);
  }
LAB_140fc4731:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fc47ee FUN_140fc47ee body=2786 status=ok
// SIG undefined FUN_140fc47ee(void)

uint FUN_140fc47ee(longlong param_1,ushort param_2,longlong *param_3,char param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ushort *puVar17;
  longlong lVar18;
  byte bVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  undefined1 auStack_98 [36];
  ushort local_74;
  char local_71;
  longlong *local_70;
  ulonglong local_68;
  ushort local_60;
  ushort local_5e;
  undefined1 local_5c [4];
  ushort *local_58;
  ushort *puStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_71 = param_4;
  local_5e = param_2;
  uVar11 = FUN_140fc52d2();
  uVar12 = FUN_140fc544a(param_3);
  local_70 = (longlong *)(param_1 + 0xa0);
  iVar13 = FUN_140fc5338((longlong *)(param_1 + 0xa0),uVar12,param_3);
  if (iVar13 == -1) {
LAB_140fc484e:
    lVar16 = *param_3;
    if ((lVar16 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar16);
    }
    lVar18 = param_3[1];
    local_58 = (ushort *)param_3[2];
    puStack_50 = (ushort *)param_3[3];
    local_74 = (ushort)uVar11;
    if (*(int *)(param_1 + 0x124) == 0) {
      uVar27 = *(uint *)(param_1 + 0xf8);
      *(uint *)(param_1 + 0xf8) = uVar27 + 1;
      if (*(uint *)(param_1 + 0xfc) == uVar27) {
        FUN_1406cd6a8(param_1 + 0xf0,uVar27);
      }
      iVar13 = *(int *)(param_1 + 0x118);
      if (iVar13 == 0) {
        iVar14 = -1;
      }
      else {
        iVar14 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar14 = iVar13 + -1;
        }
        iVar14 = iVar14 >> 5;
      }
      lVar23 = param_1 + 0x100;
      iVar24 = iVar13 + 1;
      iVar21 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar21 = iVar13;
      }
      if (iVar21 >> 5 == iVar14) {
        *(int *)(param_1 + 0x118) = iVar24;
      }
      else {
        if (*(int *)(param_1 + 0x11c) <= iVar13) {
          if (iVar13 + 0x20U < 0xa0) {
            iVar24 = 0x80;
            iVar14 = iVar13;
          }
          else {
            uVar11 = iVar13 + 0x20U >> 5;
            local_68 = (ulonglong)uVar11;
            if (*(int *)(param_1 + 0x11c) + 0x1fU < 0xa0) {
              uVar26 = 4;
              if (4 < uVar11) {
                uVar26 = uVar11;
              }
            }
            else {
              uVar26 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
            }
            uVar22 = FUN_144a3809e(uVar26 << 2,0);
            iVar14 = (int)(uVar22 >> 2);
            iVar24 = -0x20;
            if ((int)local_68 <= iVar14) {
              iVar24 = iVar14 << 5;
            }
            iVar14 = *(int *)(param_1 + 0x118);
          }
          *(int *)(param_1 + 0x11c) = iVar24;
          FUN_1446efbd8(lVar23,iVar14);
          iVar24 = *(int *)(param_1 + 0x118) + 1;
        }
        iVar14 = iVar24 + 0x1f;
        if (-1 < iVar24) {
          iVar14 = iVar24;
        }
        *(int *)(param_1 + 0x118) = iVar24;
        if (iVar24 % 0x20 != 0) {
          lVar15 = *(longlong *)(param_1 + 0x110);
          if (*(longlong *)(param_1 + 0x110) == 0) {
            lVar15 = lVar23;
          }
          bVar19 = -(char)(iVar24 % 0x20);
          *(uint *)(lVar15 + (longlong)(iVar14 >> 5) * 4) =
               (uint)(*(int *)(lVar15 + (longlong)(iVar14 >> 5) * 4) << (bVar19 & 0x1f)) >>
               (bVar19 & 0x1f);
        }
      }
      lVar15 = (longlong)(int)uVar27;
      if (*(longlong *)(param_1 + 0x110) != 0) {
        lVar23 = *(longlong *)(param_1 + 0x110);
      }
      bVar19 = (byte)iVar13 & 0x1f;
      puVar1 = (uint *)(lVar23 + (longlong)(iVar21 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar19 | 0xfffffffeU >> 0x20 - bVar19);
    }
    else {
      uVar27 = *(uint *)(param_1 + 0x120);
      lVar15 = (longlong)(int)uVar27;
      iVar13 = *(int *)(*(longlong *)(param_1 + 0xf0) + 4 + lVar15 * 0x40);
      *(int *)(param_1 + 0x120) = iVar13;
      iVar14 = *(int *)(param_1 + 0x124) + -1;
      *(int *)(param_1 + 0x124) = iVar14;
      if (iVar14 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar13 * 0x40) = 0xffffffff;
      }
    }
    uVar11 = 1 << ((byte)uVar27 & 0x1f);
    lVar23 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar23 = *(longlong *)(param_1 + 0x110);
    }
    uVar26 = uVar27 + 0x1f;
    if (-1 < (int)uVar27) {
      uVar26 = uVar27;
    }
    puVar1 = (uint *)(lVar23 + (longlong)((int)uVar26 >> 5) * 4);
    *puVar1 = *puVar1 | uVar11;
    lVar23 = *(longlong *)(param_1 + 0xf0) + lVar15 * 0x40;
    *(longlong *)(*(longlong *)(param_1 + 0xf0) + lVar15 * 0x40) = lVar16;
    if ((lVar16 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar16);
    }
    *(longlong *)(lVar23 + 8) = lVar18;
    *(ushort **)(lVar23 + 0x10) = local_58;
    *(ushort **)(lVar23 + 0x18) = puStack_50;
    *(undefined8 *)(lVar23 + 0x20) = 0;
    *(undefined8 *)(lVar23 + 0x28) = 0;
    *(undefined4 *)(lVar23 + 0x30) = 0;
    *(undefined2 *)(lVar23 + 0x34) = 0xffff;
    *(undefined1 *)(lVar23 + 0x36) = 0xff;
    *(undefined2 *)(lVar23 + 0x38) = 0xffff;
    *(undefined1 *)(lVar23 + 0x3c) = 0;
    lVar16 = param_1 + 0x148;
    uVar26 = uVar27 & 0xffff;
    iVar13 = uVar26 + 1;
    iVar14 = *(int *)(param_1 + 0x160);
    iVar24 = iVar13 - iVar14;
    if (0 < iVar24) {
      if (iVar14 == 0) {
LAB_140fc4d44:
        if (*(int *)(param_1 + 0x164) <= (int)uVar26) {
          if (uVar26 < 0x80) {
            iVar21 = 0x80;
            iVar13 = iVar14;
          }
          else {
            uVar26 = uVar26 + 0x20 >> 5;
            if (*(int *)(param_1 + 0x164) + 0x1fU < 0xa0) {
              uVar20 = 4;
              if (4 < uVar26) {
                uVar20 = uVar26;
              }
            }
            else {
              uVar20 = (uVar26 * 3 >> 3) + uVar26 + 0x10;
            }
            uVar22 = FUN_144a3809e(uVar20 << 2,0);
            iVar13 = (int)(uVar22 >> 2);
            iVar21 = -0x20;
            if ((int)uVar26 <= iVar13) {
              iVar21 = iVar13 << 5;
            }
            iVar13 = *(int *)(param_1 + 0x160);
          }
          *(int *)(param_1 + 0x164) = iVar21;
          FUN_1446efbd8(lVar16,iVar13);
          iVar13 = *(int *)(param_1 + 0x160) + iVar24;
        }
        iVar21 = iVar13 + 0x1f;
        if (-1 < iVar13) {
          iVar21 = iVar13;
        }
        *(int *)(param_1 + 0x160) = iVar13;
        if (iVar13 % 0x20 != 0) {
          lVar18 = *(longlong *)(param_1 + 0x158);
          if (*(longlong *)(param_1 + 0x158) == 0) {
            lVar18 = lVar16;
          }
          bVar19 = -(char)(iVar13 % 0x20);
          *(uint *)(lVar18 + (longlong)(iVar21 >> 5) * 4) =
               (uint)(*(int *)(lVar18 + (longlong)(iVar21 >> 5) * 4) << (bVar19 & 0x1f)) >>
               (bVar19 & 0x1f);
        }
      }
      else {
        iVar21 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar21 = iVar14 + -1;
        }
        if (uVar26 >> 5 != iVar21 >> 5) goto LAB_140fc4d44;
        *(int *)(param_1 + 0x160) = iVar13;
      }
      FUN_1447c6044(lVar16,iVar14,iVar24,0);
    }
    if (*(longlong *)(param_1 + 0x158) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x158);
    }
    puVar1 = (uint *)(lVar16 + (ulonglong)(uVar27 >> 3 & 0x1ffc));
    *puVar1 = *puVar1 | uVar11;
    if (*(int *)(param_1 + 0xd4) == 0) {
      iVar13 = *(int *)(param_1 + 0xa8);
      *(int *)(param_1 + 0xa8) = iVar13 + 1;
      if (*(int *)(param_1 + 0xac) == iVar13) {
        FUN_140044672(local_70,iVar13);
      }
      iVar14 = *(int *)(param_1 + 200);
      if (iVar14 == 0) {
        iVar24 = -1;
      }
      else {
        iVar24 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar24 = iVar14 + -1;
        }
        iVar24 = iVar24 >> 5;
      }
      lVar18 = param_1 + 0xb0;
      iVar21 = iVar14 + 1;
      iVar25 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar25 = iVar14;
      }
      if (iVar25 >> 5 == iVar24) {
        *(int *)(param_1 + 200) = iVar21;
      }
      else {
        if (*(int *)(param_1 + 0xcc) <= iVar14) {
          if (iVar14 + 0x20U < 0xa0) {
            iVar21 = 0x80;
            iVar24 = iVar14;
          }
          else {
            uVar11 = iVar14 + 0x20U >> 5;
            if (*(int *)(param_1 + 0xcc) + 0x1fU < 0xa0) {
              uVar26 = 4;
              if (4 < uVar11) {
                uVar26 = uVar11;
              }
            }
            else {
              uVar26 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
            }
            uVar22 = FUN_144a3809e(uVar26 << 2,0);
            iVar24 = (int)(uVar22 >> 2);
            iVar21 = -0x20;
            if ((int)uVar11 <= iVar24) {
              iVar21 = iVar24 << 5;
            }
            iVar24 = *(int *)(param_1 + 200);
          }
          *(int *)(param_1 + 0xcc) = iVar21;
          FUN_1446efbd8(lVar18,iVar24);
          iVar21 = *(int *)(param_1 + 200) + 1;
        }
        iVar24 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar24 = iVar21;
        }
        *(int *)(param_1 + 200) = iVar21;
        if (iVar21 % 0x20 != 0) {
          lVar16 = *(longlong *)(param_1 + 0xc0);
          if (*(longlong *)(param_1 + 0xc0) == 0) {
            lVar16 = lVar18;
          }
          bVar19 = -(char)(iVar21 % 0x20);
          *(uint *)(lVar16 + (longlong)(iVar24 >> 5) * 4) =
               (uint)(*(int *)(lVar16 + (longlong)(iVar24 >> 5) * 4) << (bVar19 & 0x1f)) >>
               (bVar19 & 0x1f);
        }
      }
      lVar16 = (longlong)iVar13;
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        lVar18 = *(longlong *)(param_1 + 0xc0);
      }
      bVar19 = (byte)iVar14 & 0x1f;
      puVar1 = (uint *)(lVar18 + (longlong)(iVar25 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar19 | 0xfffffffeU >> 0x20 - bVar19);
    }
    else {
      iVar13 = *(int *)(param_1 + 0xd0);
      lVar16 = (longlong)iVar13;
      iVar14 = *(int *)(*(longlong *)(param_1 + 0xa0) + 4 + lVar16 * 0x30);
      *(int *)(param_1 + 0xd0) = iVar14;
      iVar24 = *(int *)(param_1 + 0xd4) + -1;
      *(int *)(param_1 + 0xd4) = iVar24;
      if (iVar24 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar14 * 0x30) = 0xffffffff;
      }
    }
    lVar18 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar18 = *(longlong *)(param_1 + 0xc0);
    }
    iVar14 = iVar13 + 0x1f;
    if (-1 < iVar13) {
      iVar14 = iVar13;
    }
    puVar1 = (uint *)(lVar18 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
    iVar14 = 1;
    puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0xa0) + lVar16 * 0x30);
    lVar18 = *param_3;
    *(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar16 * 0x30) = lVar18;
    if ((lVar18 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    *(longlong *)(puVar2 + 2) = param_3[1];
    uVar12 = *(undefined4 *)((longlong)param_3 + 0x14);
    lVar16 = param_3[3];
    uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
    puVar2[4] = (int)param_3[2];
    puVar2[5] = uVar12;
    puVar2[6] = (int)lVar16;
    puVar2[7] = uVar4;
    *(short *)(puVar2 + 8) = (short)uVar27;
    puVar2[10] = 0xffffffff;
    uVar11 = FUN_140fc544a(puVar2);
    if (*(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0xd4) == 1) {
      uVar26 = 1;
LAB_140fc4b7d:
      if (((int)uVar26 < 1) || (iVar14 <= *(int *)(param_1 + 0xe8))) {
        uVar11 = *(int *)(param_1 + 0xe8) - 1U & uVar11;
        puVar2[0xb] = uVar11;
        lVar16 = *(longlong *)(param_1 + 0xe0);
        if (*(longlong *)(param_1 + 0xe0) == 0) {
          lVar16 = param_1 + 0xd8;
        }
        puVar2[10] = *(undefined4 *)
                      (lVar16 + ((longlong)*(int *)(param_1 + 0xe8) - 1U & (longlong)(int)uVar11) *
                                4);
        lVar16 = *(longlong *)(param_1 + 0xe0);
        if (*(longlong *)(param_1 + 0xe0) == 0) {
          lVar16 = param_1 + 0xd8;
        }
        *(int *)(lVar16 + ((longlong)*(int *)(param_1 + 0xe8) - 1U & (longlong)(int)uVar11) * 4) =
             iVar13;
      }
      else {
        *(int *)(param_1 + 0xe8) = iVar14;
        FUN_140fc5678(local_70);
      }
    }
    else {
      iVar24 = FUN_140fc5338(local_70,uVar11,puVar2);
      if (iVar24 == -1) {
        uVar26 = *(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0xd4);
        if (3 < uVar26) {
          uVar22 = (ulonglong)(uVar26 & 0xfffffffe) + 0xf;
          lVar16 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar14 = 1 << ((byte)lVar16 & 0x1f);
        }
        goto LAB_140fc4b7d;
      }
      lVar16 = *local_70;
      lVar18 = (longlong)iVar24 * 0x30;
      uVar12 = *puVar2;
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      uVar7 = puVar2[4];
      uVar8 = puVar2[5];
      uVar9 = puVar2[6];
      uVar10 = puVar2[7];
      *(undefined8 *)(lVar16 + 0x20 + lVar18) = *(undefined8 *)(puVar2 + 8);
      puVar2 = (undefined4 *)(lVar16 + 0x10 + lVar18);
      *puVar2 = uVar7;
      puVar2[1] = uVar8;
      puVar2[2] = uVar9;
      puVar2[3] = uVar10;
      puVar2 = (undefined4 *)(lVar16 + lVar18);
      *puVar2 = uVar12;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      FUN_1457db4b4(local_70,iVar13);
    }
    uVar11 = (uint)local_74;
  }
  else if (((*local_70 + (longlong)iVar13 * 0x30 == 0) ||
           (puVar17 = (ushort *)((longlong)iVar13 * 0x30 + *local_70 + 0x20),
           puVar17 == (ushort *)0x0)) || (uVar3 = *puVar17, uVar27 = (uint)uVar3, uVar3 == 0xffff))
  goto LAB_140fc484e;
  local_60 = (ushort)uVar27;
  uVar27 = uVar27 & 0xffff;
  if ((ushort)uVar11 == local_60) {
    if (local_71 != '\0') {
      lVar16 = param_1 + 0x128;
      iVar13 = (uVar27 - *(int *)(param_1 + 0x140)) + 1;
      if (0 < iVar13) {
        uVar12 = FUN_144a54ea4(lVar16,iVar13);
        FUN_1447c6044(lVar16,uVar12,iVar13,0);
      }
      if (*(longlong *)(param_1 + 0x138) != 0) {
        lVar16 = *(longlong *)(param_1 + 0x138);
      }
      puVar1 = (uint *)(lVar16 + (ulonglong)(uVar27 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)uVar27 & 0x1f);
    }
    goto LAB_140fc4cca;
  }
  if ((ushort)uVar11 != 0xffff) {
    uVar26 = uVar11 & 0xffff;
    lVar16 = param_1 + 0x128;
    iVar13 = (uVar26 - *(int *)(param_1 + 0x140)) + 1;
    if (0 < iVar13) {
      uVar12 = FUN_144a54ea4(lVar16,iVar13);
      FUN_1447c6044(lVar16,uVar12,iVar13,0);
    }
    if (*(longlong *)(param_1 + 0x138) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x138);
    }
    puVar1 = (uint *)(lVar16 + (ulonglong)(uVar26 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar26 & 0x1f);
    FUN_14086b58e(param_1 + 0x50,uVar11,&local_5e);
    FUN_140bbeb1c(param_1,&local_5e);
  }
  lVar16 = param_1 + 0x128;
  iVar13 = uVar27 + 1;
  iVar14 = *(int *)(param_1 + 0x140);
  iVar24 = iVar13 - iVar14;
  if (0 < iVar24) {
    if (iVar14 == 0) {
LAB_140fc4cf2:
      if (*(int *)(param_1 + 0x144) <= (int)uVar27) {
        if (uVar27 < 0x80) {
          iVar21 = 0x80;
          iVar13 = iVar14;
        }
        else {
          uVar11 = uVar27 + 0x20 >> 5;
          if (*(int *)(param_1 + 0x144) + 0x1fU < 0xa0) {
            uVar26 = 4;
            if (4 < uVar11) {
              uVar26 = uVar11;
            }
          }
          else {
            uVar26 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
          }
          uVar22 = FUN_144a3809e(uVar26 << 2,0);
          iVar13 = (int)(uVar22 >> 2);
          iVar21 = -0x20;
          if ((int)uVar11 <= iVar13) {
            iVar21 = iVar13 << 5;
          }
          iVar13 = *(int *)(param_1 + 0x140);
        }
        *(int *)(param_1 + 0x144) = iVar21;
        FUN_1446efbd8(lVar16,iVar13);
        iVar13 = *(int *)(param_1 + 0x140) + iVar24;
      }
      iVar21 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar21 = iVar13;
      }
      *(int *)(param_1 + 0x140) = iVar13;
      if (iVar13 % 0x20 != 0) {
        lVar18 = *(longlong *)(param_1 + 0x138);
        if (*(longlong *)(param_1 + 0x138) == 0) {
          lVar18 = lVar16;
        }
        bVar19 = -(char)(iVar13 % 0x20);
        *(uint *)(lVar18 + (longlong)(iVar21 >> 5) * 4) =
             (uint)(*(int *)(lVar18 + (longlong)(iVar21 >> 5) * 4) << (bVar19 & 0x1f)) >>
             (bVar19 & 0x1f);
      }
    }
    else {
      iVar21 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar21 = iVar14 + -1;
      }
      if (uVar27 >> 5 != iVar21 >> 5) goto LAB_140fc4cf2;
      *(int *)(param_1 + 0x140) = iVar13;
    }
    FUN_1447c6044(lVar16,iVar14,iVar24,0);
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    lVar16 = *(longlong *)(param_1 + 0x138);
  }
  puVar1 = (uint *)(lVar16 + (ulonglong)(uVar27 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar27 & 0x1f);
  local_58 = &local_5e;
  puStack_50 = &local_60;
  FUN_140bbf6f4(param_1,local_5c,&local_58,0);
  local_58 = &local_60;
  puStack_50 = &local_5e;
  FUN_140bbf5de(param_1 + 0x50,local_5c,&local_58,0);
  uVar11 = (uint)local_60;
LAB_140fc4cca:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 140fc52d2 FUN_140fc52d2 body=101 status=ok
// SIG undefined FUN_140fc52d2(void)

ushort FUN_140fc52d2(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
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
        puVar1 = (ushort *)(*param_1 + (longlong)iVar2 * 0xc);
        if (*puVar1 == param_2) {
          if (puVar1 == (ushort *)0x0) {
            return 0xffff;
          }
          if (puVar1 + 1 == (ushort *)0x0) {
            return 0xffff;
          }
          return puVar1[1];
        }
        iVar2 = *(int *)(puVar1 + 2);
      } while (iVar2 != -1);
    }
  }
  return 0xffff;
}



// FUNCTION 140fc5338 FUN_140fc5338 body=112 status=ok
// SIG undefined FUN_140fc5338(void)

int FUN_140fc5338(longlong *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        cVar1 = FUN_140fc53a8(lVar3 + (longlong)iVar4 * 0x30,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x28 + (longlong)iVar4 * 0x30);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 140fc53a8 FUN_140fc53a8 body=67 status=ok
// SIG undefined FUN_140fc53a8(void)

undefined4 FUN_140fc53a8(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_140fc53eb();
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10)) {
      return 0;
    }
    if (*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14)) {
      return 0;
    }
    if (*(char *)(param_1 + 0x18) == *(char *)(param_2 + 0x18)) {
      return CONCAT31((int3)((uint)*(int *)(param_1 + 0x1c) >> 8),
                      *(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c));
    }
  }
  return 0;
}



// FUNCTION 140fc53eb FUN_140fc53eb body=95 status=ok
// SIG undefined FUN_140fc53eb(void)

bool FUN_140fc53eb(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  if ((int)param_1[1] == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
    iVar2 = *(int *)((longlong)param_2 + 0xc);
    if (iVar2 == 0 && (int)param_2[1] == 0) {
      lVar1 = *param_2;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      return *param_1 == lVar1;
    }
  }
  else {
    iVar2 = *(int *)((longlong)param_2 + 0xc);
  }
  return *(int *)((longlong)param_1 + 0xc) == iVar2 && (int)param_1[1] == (int)param_2[1];
}



// FUNCTION 140fc544a FUN_140fc544a body=558 status=ok
// SIG undefined FUN_140fc544a(void)

uint FUN_140fc544a(ulonglong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == 0 && uVar3 == 0) {
    uVar3 = ((uint)(*param_1 >> 0x14) & 0xffff ^ (uint)(*param_1 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = uVar3 >> 0x10 ^ uVar3;
  }
  else {
    uVar2 = uVar3 >> 0xd ^ (int)param_1[1] - uVar3;
    uVar4 = uVar2 << 8 ^ (-0x61c88647 - uVar3) - uVar2;
    uVar6 = uVar4 >> 0xd ^ (uVar3 - uVar2) - uVar4;
    uVar2 = uVar6 >> 0xc ^ (uVar2 - uVar4) - uVar6;
    uVar3 = uVar2 << 0x10 ^ (uVar4 - uVar6) - uVar2;
    uVar4 = uVar3 >> 5 ^ (uVar6 - uVar2) - uVar3;
    uVar2 = uVar4 >> 3 ^ (uVar2 - uVar3) - uVar4;
    uVar3 = uVar2 << 10 ^ (uVar3 - uVar4) - uVar2;
    uVar3 = uVar3 >> 0xf ^ uVar4 - (uVar2 + uVar3);
  }
  uVar2 = *(uint *)((longlong)param_1 + 0x1c);
  uVar1 = param_1[2];
  uVar4 = (uint)(uVar1 >> 0x10);
  uVar6 = (uint)uVar1 & 0xffff;
  uVar4 = uVar2 >> 0xd ^
          (int)(uVar1 >> 0x20) + uVar6 + ((uint)uVar1 * 0x10000 - uVar2) +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4);
  uVar6 = uVar4 << 8 ^ (-0x61c88647 - uVar2) - uVar4;
  uVar7 = uVar6 >> 0xd ^ (uVar2 - uVar4) - uVar6;
  uVar2 = uVar7 >> 0xc ^ (uVar4 - uVar6) - uVar7;
  uVar4 = uVar2 << 0x10 ^ (uVar6 - uVar7) - uVar2;
  uVar6 = uVar4 >> 5 ^ (uVar7 - uVar2) - uVar4;
  uVar7 = uVar6 >> 3 ^ (uVar2 - uVar4) - uVar6;
  uVar2 = uVar7 << 10 ^ (uVar4 - uVar6) - uVar7;
  uVar2 = uVar2 >> 0xf ^ uVar6 - (uVar7 + uVar2);
  iVar5 = uVar2 - (byte)param_1[3];
  uVar4 = iVar5 * 0x100 ^ 0x9e3779b9 - uVar2;
  uVar6 = uVar4 >> 0xd ^ ((uint)(byte)param_1[3] - iVar5) - uVar4;
  uVar2 = uVar6 >> 0xc ^ (iVar5 - uVar4) - uVar6;
  uVar4 = uVar2 << 0x10 ^ (uVar4 - uVar6) - uVar2;
  uVar6 = uVar4 >> 5 ^ (uVar6 - uVar2) - uVar4;
  uVar2 = uVar6 >> 3 ^ (uVar2 - uVar4) - uVar6;
  uVar4 = uVar2 << 10 ^ (uVar4 - uVar6) - uVar2;
  return (uVar3 >> 2) + uVar3 * 0x40 + -0x61c88647 + (uVar4 >> 0xf ^ uVar6 - (uVar2 + uVar4)) ^
         uVar3;
}



// FUNCTION 140fc5678 FUN_140fc5678 body=682 status=ok
// SIG undefined FUN_140fc5678(void)

void FUN_140fc5678(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  
  plVar9 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar9,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 == 1) {
    if (*plVar9 != 0) {
      FUN_1446efa72(plVar9,0,0,4);
    }
  }
  else {
    if (uVar14 == 0) {
      return;
    }
    FUN_1446efa72(plVar9,0,uVar14,4);
    if ((int)uVar14 < 1) goto LAB_140fc56de;
  }
  uVar2 = 0;
  do {
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = plVar1;
    }
    *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar14 != uVar2);
LAB_140fc56de:
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar10 = 0;
    uVar15 = 1;
    iVar5 = 0;
    iVar11 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 2);
    }
    uVar14 = *puVar8;
    if (uVar14 == 0) {
      iVar11 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar11 = iVar3 + -1;
      }
      uVar10 = 0;
      uVar15 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar15 = uVar10;
      }
      iVar11 = 0;
      do {
        if (uVar15 == uVar10) {
          return;
        }
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar8[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar10 = 0;
      iVar11 = 0;
    }
    uVar15 = (ulonglong)(-uVar14 & uVar14);
    uVar4 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar5) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 < iVar3) {
    uVar14 = 0xffffffff;
    do {
      lVar12 = *param_1;
      lVar13 = (longlong)iVar5 * 0x30;
      iVar3 = FUN_140fc544a(lVar12 + lVar13);
      uVar4 = (longlong)iVar3 & (longlong)(int)param_1[9] - 1U;
      iVar3 = (int)uVar4;
      *(int *)(lVar12 + 0x2c + lVar13) = iVar3;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      *(undefined4 *)(lVar12 + 0x28 + lVar13) =
           *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar4) * 4);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      *(int *)((longlong)plVar9 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
      uVar14 = ~(uint)uVar15 & uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar5 = (int)uVar10;
      lVar12 = (longlong)iVar5;
      uVar2 = puVar8[lVar12] & uVar14;
      if (uVar2 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar5) {
          iVar7 = iVar5;
        }
        if (iVar6 <= iVar5) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar2 = puVar8[lVar12 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar7 - lVar12 == lVar13) {
            return;
          }
        }
        uVar10 = (ulonglong)(iVar5 + (int)lVar13 + 1);
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar2 & uVar2);
      uVar4 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar3);
  }
  return;
}



// FUNCTION 140fc5922 FUN_140fc5922 body=112 status=ok
// SIG undefined FUN_140fc5922(void)

void FUN_140fc5922(longlong *param_1,undefined8 param_2,undefined4 *param_3,byte param_4)

{
  char cVar1;
  undefined1 auStack_68 [32];
  uint local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0xff;
  local_18 = 0xffffffff;
  local_14 = 0;
  local_48 = param_4 ^ 3;
  cVar1 = (**(code **)(*param_1 + 0x3c0))(param_1,1,param_2,&local_40);
  if (cVar1 != '\0') {
    *param_3 = local_40;
    param_3[1] = uStack_3c;
    param_3[2] = uStack_38;
    param_3[3] = uStack_34;
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fc5994 FUN_140fc5994 body=195 status=ok
// SIG undefined FUN_140fc5994(void)

undefined8 FUN_140fc5994(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  uint *local_78;
  uint local_68 [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0x10000000000;
  puVar4 = local_68;
  local_78 = puVar4;
  FUN_14009e926(param_1,param_2,&local_40,2);
  local_68[0] = local_40;
  local_68[1] = uStack_3c;
  local_68[2] = uStack_38;
  local_68[3] = uStack_34;
  local_58 = local_30;
  uStack_54 = uStack_2c;
  uStack_50 = uStack_28;
  uStack_4c = uStack_24;
  local_48 = (int)local_20;
  local_44 = local_20._4_4_;
  uVar3 = 0xffffffff;
  if (0x1f < (int)local_20 + 0x1fU) {
    lVar5 = 0;
    do {
      uVar1 = *puVar4;
      if (uVar1 != 0) {
        uVar2 = 0;
        if (uVar1 != 0) {
          for (; (uVar1 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
          }
        }
        if ((int)((ulonglong)uVar2 - lVar5) < (int)local_20) {
          uVar3 = (ulonglong)uVar2 - lVar5 & 0xffffffff;
        }
        break;
      }
      lVar5 = lVar5 + -0x20;
      puVar4 = puVar4 + 1;
    } while ((ulonglong)((int)local_20 + 0x1fU & 0xffffffe0) + lVar5 != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar3 >> 8),(int)uVar3 != -1);
}



// FUNCTION 140fc5a58 FUN_140fc5a58 body=204 status=ok
// SIG undefined FUN_140fc5a58(void)

void FUN_140fc5a58(longlong param_1,ulonglong param_2,short param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  
  FUN_1405e0ab4();
  uVar12 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x98) + (param_2 & 0xffff) * 8);
  if ((uVar12 != 0xffff) &&
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar12 * 8), lVar4 != 0)) {
    uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x98) + 2 + (param_2 & 0xffff) * 8);
    if (*(ushort *)(lVar4 + 0xc) != 0) {
      plVar14 = *(longlong **)(lVar4 + 0x28);
      lVar13 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
      do {
        if (*(short *)((longlong)plVar14 + 0x1e) == param_3) goto LAB_140fc5ac1;
        plVar14 = plVar14 + 4;
        lVar13 = lVar13 + -0x20;
      } while (lVar13 != 0);
    }
    plVar14 = (longlong *)0x0;
LAB_140fc5ac1:
    iVar3 = *(int *)(lVar4 + 0x14);
    if (iVar3 == 1) {
      AcquireSRWLockExclusive((PSRWLOCK)(plVar14 + 1));
    }
    LOCK();
    *(int *)(plVar14 + 3) = (int)plVar14[3] + 1;
    UNLOCK();
    lVar4 = *plVar14;
    lVar13 = (ulonglong)*(byte *)((longlong)plVar14 + 0x1c) * (ulonglong)uVar2;
    uVar5 = *param_4;
    uVar6 = param_4[1];
    uVar7 = param_4[2];
    uVar8 = param_4[3];
    uVar9 = param_4[5];
    uVar10 = param_4[6];
    uVar11 = param_4[7];
    puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar13);
    *puVar1 = param_4[4];
    puVar1[1] = uVar9;
    puVar1[2] = uVar10;
    puVar1[3] = uVar11;
    puVar1 = (undefined4 *)(lVar4 + lVar13);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 3) = (int)plVar14[3] + -1;
      UNLOCK();
      if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140fc5b11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(plVar14 + 1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140fc5b24 FUN_140fc5b24 body=114 status=ok
// SIG undefined FUN_140fc5b24(void)

void FUN_140fc5b24(longlong *param_1,undefined8 param_2,undefined4 *param_3,byte param_4)

{
  char cVar1;
  undefined1 auStack_68 [32];
  uint local_48;
  undefined4 local_40 [8];
  undefined1 local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0xff;
  local_18 = 0xffffffff;
  local_14 = 0;
  local_48 = param_4 ^ 3;
  cVar1 = (**(code **)(*param_1 + 0x3c0))(param_1,0,param_2,local_40);
  if (cVar1 != '\0') {
    *param_3 = local_40[0];
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fc5b98 FUN_140fc5b98 body=96 status=ok
// SIG undefined FUN_140fc5b98(void)

void FUN_140fc5b98(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  (**(code **)(*param_1 + 0x2c8))();
  FUN_1405013be(param_1,param_2,param_3,param_4,param_5);
  FUN_140fc5bf8(param_1,param_2,param_3,1);
  return;
}



// FUNCTION 140fc5bf8 FUN_140fc5bf8 body=2130 status=ok
// SIG undefined FUN_140fc5bf8(void)

void FUN_140fc5bf8(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  code ******ppppppcVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  code *******pppppppcVar8;
  int iVar9;
  code *******pppppppcVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  code *****pppppcVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  code ****local_120;
  code ****local_118;
  code *****local_110;
  longlong *local_108;
  code ******local_100;
  code *****local_f8;
  longlong local_f0;
  code ******local_e8;
  code ******local_e0;
  code ******local_d8;
  ushort local_c8;
  byte local_c0;
  code *local_b8;
  code ******ppppppcStack_b0;
  longlong *local_a8;
  undefined4 local_90 [2];
  code ******local_88;
  code ******local_80;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((param_2 != 0) &&
     (pppppcVar14 = *(code ******)(param_2 + 0xa8), local_120 = (code ****)pppppcVar14,
     pppppcVar14 != (code *****)0x0)) {
    uVar5 = FUN_1407725cc();
    plVar6 = (longlong *)(*(code *)(*pppppcVar14)[0x51])(pppppcVar14,uVar5);
    if (plVar6 != (longlong *)0x0) {
      uVar5 = FUN_1407725cc();
      plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
      if (((plVar6 != plVar7) && (plVar7 != (longlong *)0x0)) &&
         (pppppppcVar8 = (code *******)(**(code **)(*plVar7 + 0x10))(plVar7),
         pppppppcVar8 != (code *******)0x0)) {
        if (param_3 == 0) {
          local_b8 = (code *)0x0;
          ppppppcStack_b0 = (code ******)0x0;
          FUN_1401031ac(param_1,0,&local_b8);
          iVar9 = (int)ppppppcStack_b0 + -1;
          if ((int)ppppppcStack_b0 == 0) {
            iVar9 = 0;
          }
          FUN_1446f82e2(&local_128,iVar9,local_b8,1);
          pppppcVar14 = (code *****)local_120;
          if (local_b8 != (code *)0x0) {
            FUN_1400020a8();
            pppppcVar14 = (code *****)local_120;
          }
        }
        else {
          local_128 = *(undefined8 *)(param_3 + 0x18);
        }
        if (param_4 == '\0') {
          if (*(char *)(pppppcVar14 + 0x2f) == '\x03') {
            if (*(char *)(param_1 + 0x88) == '\x01') {
              uVar4 = *(uint *)(param_1 + 0x70);
              if ((ulonglong)uVar4 != 0) {
                uVar13 = 0;
                do {
                  local_100 = *(code *******)(*(longlong *)(param_1 + 0x68) + uVar13 * 8);
                  local_e0 = (code ******)0x0;
                  local_88 = (code ******)&local_100;
                  local_b8 = (code *)&LAB_143cbcae0;
                  ppppppcStack_b0 = (code ******)&local_88;
                  local_80 = (code ******)&local_e0;
                  FUN_1457426f4(pppppppcVar8,&local_b8);
                  if ((code *******)local_e0 != (code *******)0x0) {
                    FUN_140c82872(local_e0,1);
                  }
                  uVar13 = uVar13 + 1;
                } while (uVar4 != uVar13);
              }
            }
            else {
              local_88 = (code ******)&local_e0;
              local_e0 = (code ******)CONCAT71(local_e0._1_7_,1);
              ppppppcStack_b0 = (code ******)&local_88;
              local_b8 = (code *)&LAB_143cbcb7a;
              FUN_1400b7536(pppppppcVar8);
            }
          }
          if (*(char *)(param_1 + 200) == '\x01') {
            FUN_14070cbf4(&local_b8,local_120);
            if ((local_b8 != (code *)0x0) &&
               (lVar15 = FUN_144a34e94(local_b8 + 0x10,0), lVar15 != 0)) {
              FUN_141051c98(lVar15,&local_128);
            }
            ppppppcVar1 = ppppppcStack_b0;
            if ((code *******)ppppppcStack_b0 != (code *******)0x0) {
              LOCK();
              pppppppcVar10 = (code *******)(ppppppcStack_b0 + 1);
              *(int *)pppppppcVar10 = *(int *)pppppppcVar10 + -1;
              UNLOCK();
              if (*(int *)pppppppcVar10 == 0) {
                (*(code *)**ppppppcStack_b0)(ppppppcStack_b0);
                LOCK();
                piVar2 = (int *)((longlong)ppppppcVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (*(code *)(*ppppppcVar1)[2])(ppppppcVar1);
                }
              }
            }
          }
          iVar9 = *(int *)(param_1 + 0xd8);
          if ((longlong)iVar9 != 0) {
            lVar15 = *(longlong *)(param_1 + 0xd0);
            lVar12 = 0;
            do {
              local_100 = *(code *******)(lVar15 + lVar12);
              local_e0 = (code ******)0x0;
              local_88 = (code ******)&local_100;
              local_80 = (code ******)&local_e0;
              local_b8 = (code *)&LAB_143cbcae0;
              ppppppcStack_b0 = (code ******)&local_88;
              FUN_1457426f4(pppppppcVar8,&local_b8);
              if ((code *******)local_e0 != (code *******)0x0) {
                FUN_14056e94c(local_e0 + 0xba,&local_128);
              }
              lVar12 = lVar12 + 0x38;
            } while ((longlong)iVar9 * 0x38 - lVar12 != 0);
          }
        }
        else {
          if (*(char *)(pppppcVar14 + 0x2f) == '\x03') {
            local_b8 = (code *)((ulonglong)local_b8 & 0xffffffffffffff00);
            local_90[0] = 0;
            FUN_1456bb102(&local_b8,pppppcVar14);
            FUN_1447c3578(param_1 + 0x30,&local_88,&local_b8);
            FUN_1448173f8(local_90);
            if (((char)local_b8 == '\x03') && (local_a8 != (longlong *)0x0)) {
              LOCK();
              piVar2 = (int *)((longlong)local_a8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_a8 + 0x10))();
              }
            }
            local_f8 = &local_120;
            local_100 = (code ******)&local_88;
            if (*(char *)(param_1 + 0x88) == '\x01') {
              uVar4 = *(uint *)(param_1 + 0x70);
              if ((ulonglong)uVar4 != 0) {
                uVar13 = 0;
                do {
                  local_e8 = *(code *******)(*(longlong *)(param_1 + 0x68) + uVar13 * 8);
                  local_110 = (code *****)0x0;
                  local_e0 = (code ******)&local_e8;
                  local_d8 = &local_110;
                  ppppppcStack_b0 = (code ******)&local_e0;
                  local_b8 = (code *)&LAB_143cbcae0;
                  FUN_1457426f4(pppppppcVar8,&local_b8);
                  FUN_143cbae28(&local_100,local_110);
                  uVar13 = uVar13 + 1;
                } while (uVar4 != uVar13);
              }
            }
            else {
              local_e0 = (code ******)&local_100;
              ppppppcStack_b0 = (code ******)&local_e0;
              local_b8 = FUN_143cbc44c;
              FUN_1400b7536(pppppppcVar8);
            }
            pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
            if (pcVar3 != (code *)0x0) {
              pppppppcVar10 = &local_88;
              if (0x18 < local_70) {
                pppppppcVar10 = (code *******)local_88;
              }
              (*pcVar3)(pppppppcVar10);
            }
            if (0x18 < local_70) {
              FUN_1400020a8(local_88);
            }
          }
          if (*(char *)(param_1 + 200) == '\x01') {
            FUN_14070cbf4(&local_100,local_120);
            if ((((((code *******)local_100 != (code *******)0x0) &&
                  (*(int *)((longlong)local_100 + 0x14) != 0)) &&
                 (uVar4 = *(uint *)(local_100 + 2), -1 < (int)uVar4)) &&
                (((int)uVar4 < DAT_14c9647dc &&
                 (plVar6 = (longlong *)
                           ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
                 plVar6 != (longlong *)0x0)))) &&
               (((int)plVar6[2] == *(int *)((longlong)local_100 + 0x14) &&
                (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar15 = *plVar6, lVar15 != 0))))))
            {
              local_b8 = (code *)((ulonglong)local_b8 & 0xffffffffffffff00);
              local_90[0] = 0;
              FUN_1456bb102(&local_b8,local_120);
              FUN_1447c3578(param_1 + 0x90,&local_e0,&local_b8);
              if (local_c0 == 3) {
                uVar4 = 3;
                fVar16 = local_e0._0_4_;
              }
              else {
                FUN_1400b56fe(&local_88,&local_e0,3);
                fVar16 = 0.0;
                if (local_68 != 0) {
                  fVar16 = local_88._0_4_;
                }
                pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
                if (pcVar3 != (code *)0x0) {
                  pppppppcVar10 = &local_88;
                  if (0x18 < local_70) {
                    pppppppcVar10 = (code *******)local_88;
                  }
                  (*pcVar3)(pppppppcVar10);
                }
                if (0x18 < local_70) {
                  FUN_1400020a8(local_88);
                }
                uVar4 = (uint)local_c0;
              }
              pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
              if (pcVar3 != (code *)0x0) {
                pppppppcVar10 = &local_e0;
                if (0x18 < local_c8) {
                  pppppppcVar10 = (code *******)local_e0;
                }
                (*pcVar3)(pppppppcVar10);
              }
              if (0x18 < local_c8) {
                FUN_1400020a8(local_e0);
              }
              FUN_1448173f8(local_90);
              if (((char)local_b8 == '\x03') && (local_a8 != (longlong *)0x0)) {
                LOCK();
                piVar2 = (int *)((longlong)local_a8 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_a8 + 0x10))();
                }
              }
              FUN_1406ec1d8(lVar15,&local_128,fVar16 * 0.5);
            }
            pppppcVar14 = local_f8;
            if ((code ******)local_f8 != (code ******)0x0) {
              LOCK();
              ppppppcVar1 = (code ******)(local_f8 + 1);
              *(int *)ppppppcVar1 = *(int *)ppppppcVar1 + -1;
              UNLOCK();
              if (*(int *)ppppppcVar1 == 0) {
                (*(code *)**pppppcVar14)(pppppcVar14);
                LOCK();
                piVar2 = (int *)((longlong)pppppcVar14 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (*(code *)(*pppppcVar14)[2])(pppppcVar14);
                }
              }
            }
          }
          if ((longlong)*(int *)(param_1 + 0xd8) != 0) {
            puVar11 = *(undefined8 **)(param_1 + 0xd0);
            lVar15 = (longlong)*(int *)(param_1 + 0xd8) * 0x38;
            do {
              local_118 = (code ****)*puVar11;
              local_f0 = 0;
              local_110 = &local_118;
              local_108 = &local_f0;
              local_f8 = (code *****)&local_110;
              local_100 = (code ******)&LAB_143cbcae0;
              if (pppppppcVar8[8] != (code ******)0x0) {
                local_d8 = (code ******)&local_100;
                local_80 = (code ******)&local_e0;
                local_88 = (code ******)FUN_143cbca2e;
                local_b8 = FUN_1487df56e;
                local_e8 = (code ******)&local_88;
                local_e0 = (code ******)pppppppcVar8;
                ppppppcStack_b0 = (code ******)&local_e8;
                FUN_1447c5ba2(pppppppcVar8[8],&local_b8);
                if (local_f0 != 0) {
                  FUN_14056efae(local_f0 + 0x5d0,&local_128,puVar11);
                }
              }
              puVar11 = puVar11 + 7;
              lVar15 = lVar15 + -0x38;
            } while (lVar15 != 0);
          }
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fc644c FUN_140fc644c body=297 status=ok
// SIG undefined FUN_140fc644c(void)

undefined8 FUN_140fc644c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140fc656e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140fc656e;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_140fc656e:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140fc6519;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_140fc6519;
    }
  }
  uVar6 = 0;
LAB_140fc6519:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fc6576 FUN_140fc6576 body=301 status=ok
// SIG undefined FUN_140fc6576(void)

void FUN_140fc6576(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x60) == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x68);
  }
  lVar2 = *param_2;
  plVar1 = (longlong *)param_2[1];
  plVar5 = plVar1;
  if (lVar2 == 0) {
    plVar5 = (longlong *)0x0;
  }
  if (((*(longlong *)(param_1 + 0x60) != lVar2) || (plVar4 != plVar5)) ||
     (*(int *)(param_1 + 0x70) != (int)param_2[2])) {
    if (plVar1 != (longlong *)0x0 && lVar2 != 0) {
      if (*(code **)(*plVar1 + 0x20) == (code *)&LAB_144a7e90a) {
        plVar1 = plVar1 + 0x143;
      }
      else {
        plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
      }
      if ((int)plVar1[6] != *(int *)((longlong)plVar1 + 0x5c)) {
        plVar4 = plVar1 + 0xc;
        if ((longlong *)plVar1[0xd] != (longlong *)0x0) {
          plVar4 = (longlong *)plVar1[0xd];
        }
        iVar3 = *(int *)((longlong)plVar4 +
                        (ulonglong)((int)plVar1[0xe] - 1U & *(uint *)(param_2 + 2)) * 4);
        if (iVar3 != -1) {
          do {
            if (*(uint *)(plVar1[5] + (longlong)iVar3 * 0xe0) == *(uint *)(param_2 + 2)) {
              FUN_140fc66a4(param_1);
              goto LAB_140fc65ba;
            }
            iVar3 = *(int *)((longlong)iVar3 * 0xe0 + plVar1[5] + 0xd0);
          } while (iVar3 != -1);
        }
      }
    }
    FUN_140fc69a0(param_1);
  }
LAB_140fc65ba:
  lVar2 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  *(longlong *)(param_1 + 0x60) = lVar2;
  *(longlong *)(param_1 + 0x68) = param_2[1];
  *(int *)(param_1 + 0x70) = (int)param_2[2];
  *(undefined1 *)(param_1 + 0x140) = param_3;
  return;
}



// FUNCTION 140fc66a4 FUN_140fc66a4 body=763 status=ok
// SIG undefined FUN_140fc66a4(void)

void FUN_140fc66a4(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = FUN_14026506e(param_1 + 0x30);
  if (lVar7 != 0) {
    if (DAT_14cba8288 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141864c34;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1464cee30;
      local_58 = &LAB_148bfac22;
      local_60 = &LAB_140f21842;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      plVar8 = (longlong *)(**(code **)(*(longlong *)(lVar7 + 0x3b38) + 0x10))(lVar7 + 0x3b38);
      if ((*plVar8 != 0) &&
         ((*(longlong *)(&DAT_00006850 + *plVar8) != 0 &&
          (lVar7 = *(longlong *)(*(longlong *)(&DAT_00006850 + *plVar8) + 0x44c0), lVar7 != 0)))) {
        *(undefined2 *)(param_1 + 0x1c4) = *(undefined2 *)(lVar7 + 0xbc);
        *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(lVar7 + 0xb8);
        FUN_14093c00e(param_1 + 0x1c8,lVar7 + 0xc0);
        *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(lVar7 + 0xd0);
        uVar4 = *(undefined4 *)(lVar7 + 0xdc);
        uVar5 = *(undefined4 *)(lVar7 + 0xe0);
        uVar6 = *(undefined4 *)(lVar7 + 0xe4);
        *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(lVar7 + 0xd8);
        *(undefined4 *)(param_1 + 0x1e4) = uVar4;
        *(undefined4 *)(param_1 + 0x1e8) = uVar5;
        *(undefined4 *)(param_1 + 0x1ec) = uVar6;
        puVar1 = (undefined8 *)(param_1 + 0x1f0);
        if (puVar1 != (undefined8 *)(lVar7 + 0xe8)) {
          iVar2 = *(int *)(lVar7 + 0xf0);
          pvVar3 = *(void **)(lVar7 + 0xe8);
          *(int *)(param_1 + 0x1f8) = iVar2;
          if (iVar2 == 0 && *(int *)(param_1 + 0x1fc) == 0) {
            *(undefined4 *)(param_1 + 0x1fc) = 0;
          }
          else {
            FUN_1446dd670(puVar1,iVar2);
            if (iVar2 != 0) {
              memcpy((void *)*puVar1,pvVar3,(longlong)iVar2 * 2);
            }
          }
        }
        *(undefined2 *)(param_1 + 0x274) = *(undefined2 *)(lVar7 + 0x16c);
        *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(lVar7 + 0x168);
        FUN_14093c00e(param_1 + 0x278,lVar7 + 0x170);
        *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(lVar7 + 0x180);
        uVar4 = *(undefined4 *)(lVar7 + 0x18c);
        uVar5 = *(undefined4 *)(lVar7 + 400);
        uVar6 = *(undefined4 *)(lVar7 + 0x194);
        *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(lVar7 + 0x188);
        *(undefined4 *)(param_1 + 0x294) = uVar4;
        *(undefined4 *)(param_1 + 0x298) = uVar5;
        *(undefined4 *)(param_1 + 0x29c) = uVar6;
        puVar1 = (undefined8 *)(param_1 + 0x2a0);
        if (puVar1 != (undefined8 *)(lVar7 + 0x198)) {
          iVar2 = *(int *)(lVar7 + 0x1a0);
          pvVar3 = *(void **)(lVar7 + 0x198);
          *(int *)(param_1 + 0x2a8) = iVar2;
          if (iVar2 == 0 && *(int *)(param_1 + 0x2ac) == 0) {
            *(undefined4 *)(param_1 + 0x2ac) = 0;
          }
          else {
            FUN_1446dd670(puVar1,iVar2);
            if (iVar2 != 0) {
              memcpy((void *)*puVar1,pvVar3,(longlong)iVar2 * 2);
            }
          }
        }
        *(undefined4 *)(param_1 + 700) = *(undefined4 *)(lVar7 + 0x20);
        *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(lVar7 + 0x24);
        *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(lVar7 + 0x18);
        *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(lVar7 + 0x1c);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fc69a0 FUN_140fc69a0 body=320 status=ok
// SIG undefined FUN_140fc69a0(void)

void FUN_140fc69a0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *_Src;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1449027d0(param_1,&local_40);
  lVar4 = *(longlong *)(local_40 + 0x50);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x200));
  *(int *)(lVar4 + 0x1f8) = *(int *)(lVar4 + 0x1f8) + 1;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  *(int *)(lVar4 + 0x130) = *(int *)(lVar4 + 0x130) + 1;
  uVar7 = DAT_14c8464e8._4_4_;
  uVar6 = (undefined4)DAT_14c8464e8;
  uVar5 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(lVar4 + 0xb8) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(lVar4 + 0xbc) = uVar5;
  *(undefined4 *)(lVar4 + 0xc0) = uVar6;
  *(undefined4 *)(lVar4 + 0xc4) = uVar7;
  *(undefined8 *)(lVar4 + 200) = DAT_14c8464f0;
  iVar8 = DAT_14cbd6a78;
  _Src = DAT_14cbd6a70;
  puVar3 = (undefined8 *)(lVar4 + 0xd8);
  if ((void **)puVar3 != &DAT_14cbd6a70) {
    lVar9 = (longlong)DAT_14cbd6a78;
    *(int *)(lVar4 + 0xe0) = DAT_14cbd6a78;
    if (iVar8 == 0 && *(int *)(lVar4 + 0xe4) == 0) {
      *(undefined4 *)(lVar4 + 0xe4) = 0;
    }
    else {
      FUN_1446dd670(puVar3,iVar8);
      if (iVar8 != 0) {
        memcpy((void *)*puVar3,_Src,lVar9 * 2);
      }
    }
  }
  *(undefined1 *)(lVar4 + 0x88) = 0;
  *(undefined1 *)(lVar4 + 0xfb) = 0;
  *(undefined1 *)(lVar4 + 0xfe) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x200));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fc6ae8 FUN_140fc6ae8 body=228 status=ok
// SIG undefined FUN_140fc6ae8(void)

longlong FUN_140fc6ae8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9fbd8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418c3448;
    local_38 = &LAB_148b87811;
    local_40 = &LAB_1459c6b2b;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x26c0;
    FUN_14081cfa3(L"/Script/OakGame",L"CarryableObjectDispenser",&DAT_14cb9fbd8,FUN_1465a6d92);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9fbd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fc6bdc FUN_140fc6bdc body=59 status=ok
// SIG undefined FUN_140fc6bdc(void)

undefined8 * FUN_140fc6bdc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b25ef50;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fc6c18 FUN_140fc6c18 body=267 status=ok
// SIG undefined FUN_140fc6c18(void)

void FUN_140fc6c18(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140fc6d24(&local_40);
  lVar1 = local_40;
  if ((longlong)local_38 != 0) {
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar1 + lVar5);
      if ((((lVar3 == 0) || (lVar2 = FUN_140fc6edc(), lVar2 == 0)) ||
          (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)(lVar1 + lVar5);
      }
      plVar4 = *(longlong **)(lVar3 + 0x110);
      if (plVar4 == (longlong *)0x0) {
        FUN_140aa6c08(lVar3);
        plVar4 = *(longlong **)(lVar3 + 0x110);
        if (plVar4 != (longlong *)0x0) goto LAB_140fc6c9c;
      }
      else {
LAB_140fc6c9c:
        lVar3 = FUN_140fc6edc();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
          (**(code **)(*plVar4 + 0x370))(plVar4);
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)local_38 * 8 != lVar5);
  }
  if (local_40 != 0) {
    FUN_1400020a8(local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fc6d24 FUN_140fc6d24 body=438 status=ok
// SIG undefined FUN_140fc6d24(void)

longlong * FUN_140fc6d24(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1457a9e34(&local_38,0x10,1,0);
  uVar6 = (ulonglong)local_28;
  if ((-1 < (int)local_28) && ((int)local_28 < local_30)) {
    do {
      lVar2 = *(longlong *)(local_38 + (uVar6 & 0xffffffff) * 8);
      if (((*(uint *)(lVar2 + 0xd4) & 0x3000001) == 0) &&
         (((lVar4 = FUN_140fc6edc(), lVar4 != 0 &&
           (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)))) {
        plVar5 = *(longlong **)(lVar2 + 0x110);
        if (plVar5 == (longlong *)0x0) {
          FUN_140aa6c08(lVar2);
          plVar5 = *(longlong **)(lVar2 + 0x110);
          if (plVar5 == (longlong *)0x0) goto LAB_140fc6da6;
        }
        lVar4 = FUN_140fc6edc();
        if (((*(int *)(lVar4 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
             == lVar4 + 0x30)) && (cVar3 = (**(code **)(*plVar5 + 0x378))(plVar5), cVar3 != '\0')) {
          if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar2);
          }
          iVar1 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
            FUN_1457dce9e(param_1,iVar1);
          }
          *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
          if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar2);
          }
        }
      }
LAB_140fc6da6:
      uVar6 = (longlong)(int)local_28;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
        local_28 = (uint)uVar6;
        if ((longlong)local_30 <= (longlong)uVar6) break;
      } while (*(longlong *)(local_38 + uVar6 * 8) == 0);
    } while ((-2 < (longlong)uVar7) && ((int)local_28 < local_30));
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140fc6edc FUN_140fc6edc body=228 status=ok
// SIG undefined FUN_140fc6edc(void)

longlong FUN_140fc6edc(void)

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
  if (DAT_14cc1c6c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458b5fb6;
    local_38 = &LAB_1494a85e5;
    local_40 = FUN_1467399ae;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OptimusCore",L"OptimusComputeDataInterface",&DAT_14cc1c6c8,
                  &DAT_1494a85e4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc1c6c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fc6fc6 FUN_140fc6fc6 body=5815 status=ok
// SIG undefined FUN_140fc6fc6(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140fc6fc6(void)

{
  longlong **pplVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  code *pcVar6;
  longlong *plVar7;
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
  void *_Src;
  longlong ****pppplVar19;
  longlong ***ppplVar20;
  int iVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  longlong **pplVar26;
  int iVar27;
  int iVar28;
  code ***pppcVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong *plVar32;
  longlong **pplVar33;
  longlong lVar34;
  longlong lVar35;
  uint uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  int iVar39;
  undefined1 auStack_8a8 [32];
  code **local_888;
  undefined8 local_880;
  undefined4 *local_878;
  undefined1 local_870;
  longlong **local_860;
  ulonglong local_858;
  int local_850;
  uint local_84c;
  ulonglong local_848;
  ulonglong local_840;
  undefined8 local_838;
  undefined8 local_830;
  undefined8 local_828;
  undefined4 local_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined4 uStack_814;
  undefined8 local_810;
  undefined8 local_808;
  undefined8 local_800;
  undefined8 local_7f8;
  undefined8 local_7f0;
  code *local_7e8;
  code *local_7e0;
  undefined8 *local_7d8;
  longlong *local_7d0;
  void *local_7c8;
  ulonglong uStack_7c0;
  code **local_7b8;
  longlong *plStack_7b0;
  longlong *local_7a8 [2];
  undefined8 local_798;
  uint local_790;
  undefined8 local_78c;
  undefined4 local_784;
  longlong local_778;
  undefined4 local_770;
  code *local_768 [2];
  undefined8 local_758;
  undefined **local_748;
  code *local_740;
  undefined8 local_728 [2];
  undefined8 local_718;
  undefined1 local_6e0 [16];
  undefined1 local_6d0;
  undefined4 local_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined1 local_6bc;
  code *local_6b8 [2];
  undefined8 local_6a8;
  undefined **local_698;
  code *local_690;
  undefined1 local_674 [16];
  undefined1 local_664;
  undefined1 local_660 [16];
  undefined1 local_650;
  undefined1 local_64c [16];
  undefined1 local_63c;
  undefined1 local_638 [16];
  undefined1 local_628;
  undefined1 local_624 [16];
  undefined1 local_614;
  undefined1 local_610 [16];
  undefined1 local_600;
  undefined1 local_5fc [16];
  undefined1 local_5ec;
  code *local_5e8 [2];
  undefined8 local_5d8;
  undefined **local_5c8;
  code *local_5c0;
  code *local_5a8 [2];
  undefined8 local_598;
  undefined **local_588;
  undefined1 *local_580;
  undefined1 local_55c [16];
  undefined1 local_54c;
  code *local_548 [2];
  undefined8 local_538;
  undefined **local_528;
  code *local_520;
  code *local_508 [2];
  undefined8 local_4f8;
  undefined **local_4e8;
  undefined1 *local_4e0;
  undefined1 local_4bc [16];
  undefined1 local_4ac;
  code *local_4a8 [2];
  undefined8 local_498;
  undefined **local_488;
  code *local_480;
  code *local_468 [2];
  undefined8 local_458;
  undefined **local_448;
  undefined1 *local_440;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined1 local_418;
  undefined1 local_414 [16];
  undefined1 local_404;
  undefined1 local_400 [16];
  undefined1 local_3f0;
  undefined1 local_3ec [16];
  undefined1 local_3dc;
  code *local_3d8 [2];
  undefined8 local_3c8;
  undefined **local_3b8;
  code *local_3b0;
  code *local_398 [2];
  undefined8 local_388;
  undefined **local_378;
  undefined1 *local_370;
  undefined1 local_34c [16];
  undefined1 local_33c;
  code *local_338 [2];
  undefined8 local_328;
  undefined **local_318;
  code *local_310;
  code *local_2f8 [2];
  undefined8 local_2e8;
  undefined **local_2d8;
  undefined1 *local_2d0;
  undefined1 local_2ac [16];
  undefined1 local_29c;
  longlong ****local_298;
  longlong **local_290;
  undefined8 local_288;
  int local_280;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  uint local_258;
  longlong ****local_248;
  longlong *local_238 [2];
  longlong local_228;
  longlong lStack_220;
  longlong local_218;
  longlong lStack_210;
  void *local_208;
  int local_200;
  undefined4 local_1fc;
  code ****local_1f8;
  longlong ***ppplStack_1f0;
  longlong *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong ****local_1b8;
  code ****local_1b0;
  longlong *local_1a8;
  longlong local_198 [4];
  longlong ****local_178;
  longlong ***ppplStack_170;
  longlong *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  code ***local_138;
  longlong *local_128;
  longlong local_118 [4];
  longlong ****local_f8 [2];
  longlong *local_e8;
  longlong local_d8 [13];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_8a8;
  FUN_140f4f540();
  local_29c = 0;
  FUN_1446f470e(&local_7f0,L"bool",1);
  local_2e8 = 0;
  local_2d8 = &PTR_LAB_14bd1d780;
  local_2d0 = &LAB_14452b42d;
  local_2f8[0] = FUN_1494da8a2;
  local_328 = 0;
  local_318 = &PTR_LAB_14bd1d760;
  local_310 = FUN_14452f420;
  local_338[0] = FUN_1494da836;
  uVar22 = FUN_1457dd0f4(0);
  FUN_140056680(&local_7b8,L"Bool");
  FUN_140233b1a(&local_298,&local_7b8);
  uVar23 = FUN_144a5ab96();
  local_880 = local_7f0;
  local_870 = 0x1b;
  local_888 = local_2f8;
  local_878 = (undefined4 *)local_2ac;
  FUN_1457dd458(uVar23,&local_298,uVar22,local_338);
  if (local_298 != (longlong ****)0x0) {
    (*(code *)(*local_298)[2])();
  }
  if (local_7b8 != (code **)0x0) {
    FUN_1400020a8();
  }
  local_33c = 0;
  FUN_1446f470e(&local_7f8,&DAT_149e97ffe,1);
  local_388 = 0;
  local_378 = &PTR_LAB_14bd1d780;
  local_370 = &LAB_14452b44a;
  local_398[0] = FUN_1494da8a2;
  local_3c8 = 0;
  local_3b8 = &PTR_LAB_14bd1d7a0;
  local_3b0 = FUN_14452f58c;
  local_3d8[0] = FUN_1494da900;
  uVar22 = FUN_1457dd0f4(0x14452b401);
  FUN_140056680(&local_7b8,&DAT_149e0151c);
  FUN_140233b1a(&local_298,&local_7b8);
  uVar23 = FUN_144a7452c();
  local_880 = local_7f8;
  local_870 = 0x3f;
  local_888 = local_398;
  local_878 = (undefined4 *)local_34c;
  FUN_1457dd458(uVar23,&local_298,uVar22,local_3d8);
  if (local_298 != (longlong ****)0x0) {
    (*(code *)(*local_298)[2])();
  }
  if (local_7b8 != (code **)0x0) {
    FUN_1400020a8();
  }
  local_3dc = 0;
  uVar22 = FUN_1413622f8(1,2);
  FUN_140056680(&local_7b8,L"Int Vector 2");
  FUN_140233b1a(&local_298,&local_7b8);
  uVar23 = FUN_1457dd70a();
  local_888 = (code **)CONCAT71(local_888._1_7_,0x1b);
  FUN_140fc9c28(uVar23,&local_298,uVar22,local_3ec);
  if (local_298 != (longlong ****)0x0) {
    (*(code *)(*local_298)[2])();
  }
  if (local_7b8 != (code **)0x0) {
    FUN_1400020a8();
  }
  local_3f0 = 0;
  uVar22 = FUN_1413622f8(1,3);
  FUN_140056680(&local_7b8,L"Int Vector 3");
  FUN_140233b1a(&local_298,&local_7b8);
  uVar23 = FUN_1457dd7ae();
  local_888 = (code **)CONCAT71(local_888._1_7_,0x1b);
  FUN_140fc9c28(uVar23,&local_298,uVar22,local_400);
  if (local_298 != (longlong ****)0x0) {
    (*(code *)(*local_298)[2])();
  }
  if (local_7b8 != (code **)0x0) {
    FUN_1400020a8();
  }
  local_404 = 0;
  uVar22 = FUN_1413622f8(1,4);
  uVar23 = FUN_1457dd852();
  FUN_1457dd302(uVar23,uVar22,local_414,0x1b);
  local_428 = 0x3ce147ae;
  uStack_424 = 0x3f3ba5e3;
  uStack_420 = 0x3f51eb85;
  uStack_41c = 0x3f800000;
  local_418 = 1;
  FUN_1446f470e(&local_800,L"uint",1);
  local_458 = 0;
  local_448 = &PTR_LAB_14bd1d780;
  local_440 = &LAB_14452b466;
  local_468[0] = FUN_1494da8a2;
  local_498 = 0;
  local_488 = &PTR_LAB_14bd1d7c0;
  local_480 = FUN_14452f6e6;
  local_4a8[0] = FUN_1494da984;
  uVar22 = FUN_1457dd0f4(0x14452b402);
  FUN_140056680(&local_7b8,L"UInt");
  FUN_140233b1a(&local_298,&local_7b8);
  uVar23 = FUN_144a8cc30();
  local_880 = local_800;
  local_870 = 0x1b;
  local_888 = local_468;
  local_878 = &local_428;
  FUN_1457dd458(uVar23,&local_298,uVar22,local_4a8);
  if (local_298 != (longlong ****)0x0) {
    (*(code *)(*local_298)[2])();
  }
  if (local_7b8 != (code **)0x0) {
    FUN_1400020a8();
  }
  local_4ac = 0;
  FUN_1446f470e(&local_808,L"real",1);
  local_4f8 = 0;
  local_4e8 = &PTR_LAB_14bd1d780;
  local_4e0 = &LAB_14452b482;
  local_508[0] = FUN_1494da8a2;
  local_538 = 0;
  local_528 = &PTR_LAB_14bd1d7e0;
  local_520 = FUN_14452f83e;
  local_548[0] = FUN_1494da9f0;
  uVar22 = FUN_1457dd0f4(0x14452b403);
  FUN_140056680(&local_7b8,L"Float");
  FUN_140233b1a(&local_298,&local_7b8);
  uVar23 = FUN_144a64e42();
  local_880 = local_808;
  local_870 = 0x3d;
  local_888 = local_508;
  local_878 = (undefined4 *)local_4bc;
  FUN_1457dd458(uVar23,&local_298,uVar22,local_548);
  if (local_298 != (longlong ****)0x0) {
    (*(code *)(*local_298)[2])();
  }
  if (local_7b8 != (code **)0x0) {
    FUN_1400020a8();
  }
  local_54c = 0;
  FUN_1446f470e(&local_810,L"real",1);
  local_598 = 0;
  local_588 = &PTR_LAB_14bd1d780;
  local_580 = &LAB_14452b4a2;
  local_5a8[0] = FUN_1494da8a2;
  local_5d8 = 0;
  local_5c8 = &PTR_LAB_14bd1d800;
  local_5c0 = FUN_14452f998;
  local_5e8[0] = FUN_1494daa74;
  uVar22 = FUN_1457dd0f4(0x14452b403);
  FUN_140056680(&local_7b8,L"Float");
  FUN_140233b1a(&local_298,&local_7b8);
  uVar23 = FUN_144a49fc8();
  local_880 = local_810;
  local_870 = 0x1a;
  local_888 = local_5a8;
  local_878 = (undefined4 *)local_55c;
  FUN_1457dd458(uVar23,&local_298,uVar22,local_5e8);
  if (local_298 != (longlong ****)0x0) {
    (*(code *)(*local_298)[2])();
  }
  if (local_7b8 != (code **)0x0) {
    FUN_1400020a8();
  }
  local_5ec = 0;
  uVar22 = FUN_1413622f8(3,2);
  FUN_140056680(&local_7b8,L"Vector 2");
  FUN_140233b1a(&local_298,&local_7b8);
  uVar23 = FUN_1457aacfc();
  local_888 = (code **)CONCAT71(local_888._1_7_,0x1b);
  FUN_140fc9c28(uVar23,&local_298,uVar22,local_5fc);
  if (local_298 != (longlong ****)0x0) {
    (*(code *)(*local_298)[2])();
  }
  if (local_7b8 != (code **)0x0) {
    FUN_1400020a8();
  }
  local_600 = 0;
  uVar22 = FUN_1413622f8(3,3);
  FUN_140056680(&local_7b8,L"Vector 3");
  FUN_140233b1a(&local_298,&local_7b8);
  uVar23 = FUN_14068e11a();
  local_888 = (code **)CONCAT71(local_888._1_7_,0x3f);
  FUN_140fc9c28(uVar23,&local_298,uVar22,local_610);
  if (local_298 != (longlong ****)0x0) {
    (*(code *)(*local_298)[2])();
  }
  if (local_7b8 != (code **)0x0) {
    FUN_1400020a8();
  }
  local_614 = 0;
  uVar22 = FUN_1413622f8(3,4);
  FUN_140056680(&local_7b8,L"Vector 4");
  FUN_140233b1a(&local_298,&local_7b8);
  uVar23 = FUN_1456aec84();
  local_888 = (code **)CONCAT71(local_888._1_7_,0x1b);
  FUN_140fc9c28(uVar23,&local_298,uVar22,local_624);
  if (local_298 != (longlong ****)0x0) {
    (*(code *)(*local_298)[2])();
  }
  if (local_7b8 != (code **)0x0) {
    FUN_1400020a8();
  }
  local_628 = 0;
  uVar22 = FUN_1413622f8(3,4);
  uVar23 = FUN_140bf8bc4();
  FUN_1457dd302(uVar23,uVar22,local_638,0x1b);
  local_63c = 0;
  uVar22 = FUN_1413622f8(3,4);
  uVar23 = FUN_1456aed04();
  FUN_1457dd302(uVar23,uVar22,local_64c,0x3f);
  local_650 = 0;
  uVar22 = FUN_1457dd274(3,3,3);
  uVar23 = FUN_14016b782();
  FUN_1457dd302(uVar23,uVar22,local_660,0x3b);
  local_664 = 0;
  local_6a8 = 0;
  local_698 = &PTR_LAB_14bd1d780;
  local_690 = FUN_14452fafa;
  local_6b8[0] = FUN_1494da8a2;
  uVar22 = FUN_1457dd274(3,4,4);
  uVar23 = FUN_140ce9674();
  FUN_1457dd966(uVar23,uVar22,local_6b8,local_674);
  local_820 = 0x3f333333;
  uStack_81c = 0x3e99999a;
  uStack_818 = 0x3ecccccd;
  uStack_814 = 0x3f800000;
  FUN_1446ddc76(&local_828,"float3x4",1);
  uVar22 = FUN_1457dd274(3,3,4);
  FUN_140056680(&local_7b8,L"Matrix 3x4");
  FUN_140233b1a(&local_298,&local_7b8);
  FUN_1446f470e(&local_830,L"3x4 float",1);
  local_880 = 0;
  local_888 = (code **)local_828;
  local_870 = 0x19;
  local_878 = &local_820;
  FUN_1415c348a(&DAT_14cc1c7d8,local_830,&local_298,uVar22);
  if (local_298 != (longlong ****)0x0) {
    (*(code *)(*local_298)[2])();
  }
  if (local_7b8 != (code **)0x0) {
    FUN_1400020a8();
  }
  local_6cc = 0x3e99999a;
  uStack_6c8 = 0x3e99999a;
  uStack_6c4 = 0x3ecccccd;
  uStack_6c0 = 0x3f800000;
  local_6bc = 1;
  FUN_1400b22c2(&local_7b8,"Component");
  FUN_140233b1a(&local_298,&local_7b8);
  uVar22 = FUN_1411c55ba();
  FUN_1457dda80(uVar22,&local_298,&local_6cc);
  if (local_298 != (longlong ****)0x0) {
    (*(code *)(*local_298)[2])();
  }
  if (local_7b8 != (code **)0x0) {
    FUN_1400020a8();
  }
  local_6d0 = 0;
  FUN_1446f470e(&local_838,L"name",1);
  local_728[0] = 0;
  local_718 = 0;
  local_758 = 0;
  local_748 = &PTR_LAB_14bd1d820;
  local_740 = FUN_14452fd04;
  local_768[0] = FUN_1494daae0;
  FUN_140056680(&local_7b8,L"Name");
  FUN_140233b1a(&local_298,&local_7b8);
  uVar22 = FUN_144a63fc8();
  local_880 = local_838;
  local_870 = 0x50;
  local_888 = (code **)local_728;
  local_878 = (undefined4 *)local_6e0;
  FUN_1457dd458(uVar22,&local_298,0,local_768);
  if (local_298 != (longlong ****)0x0) {
    (*(code *)(*local_298)[2])();
  }
  if (local_7b8 != (code **)0x0) {
    FUN_1400020a8();
  }
  puVar24 = (undefined8 *)FUN_144a7452c();
  local_7b8 = (code **)*puVar24;
  FUN_1449ad616(&DAT_14cc1c848);
  local_298 = (longlong ****)&local_7b8;
  local_290 = &plStack_7b0;
  FUN_1415d1052(&DAT_14cc1c848,&local_298);
  uVar38 = 0;
  local_798 = 0;
  local_790 = 0;
  local_7b8 = (code **)0x0;
  plStack_7b0 = (longlong *)0x0;
  local_78c = 0xffffffff00000080;
  local_784 = 0;
  local_778 = 0;
  local_770 = 0;
  FUN_1457dd68c(&local_7b8);
  local_298 = (longlong ****)&DAT_100000000;
  local_290 = local_7a8;
  local_288 = (code ***)&DAT_ffffffff;
  local_280 = 0;
  if (local_790 == 0) {
    uVar31 = 1;
    uVar36 = 0xffffffff;
    iVar21 = 0;
    uVar37 = 0;
  }
  else {
    FUN_1449c0562(&local_298);
    uVar37 = (ulonglong)local_298 & 0xffffffff;
    uVar31 = (ulonglong)local_298 >> 0x20;
    uVar38 = (ulonglong)local_790;
    uVar36 = (uint)local_288;
    iVar21 = local_288._4_4_;
  }
  pplVar33 = local_290;
  iVar39 = local_280;
  pplVar26 = local_290;
  uVar3 = uVar38;
  if (iVar21 != (int)uVar38 || local_290 != local_7a8) {
    do {
      local_858 = uVar3;
      local_860 = pplVar26;
      pcVar5 = local_7b8[(longlong)iVar21 * 0x18 + 2];
      if (pcVar5 != (code *)0x0) {
        pcVar6 = local_7b8[(longlong)iVar21 * 0x18 + 3];
        if (pcVar6 != (code *)0x0) {
          LOCK();
          *(int *)(pcVar6 + 8) = *(int *)(pcVar6 + 8) + 1;
          UNLOCK();
        }
        local_84c = uVar36;
        local_840 = uVar37;
        if ((((byte)pcVar5[0x48] & 0x42) != 0) && (iVar21 = FUN_1457dcf50(pcVar5), iVar21 == 0)) {
          FUN_140fc887e(local_f8,*(longlong *)pcVar5);
          local_298 = local_f8[0];
          local_288 = (code ***)0x0;
          if (local_f8[0] != (longlong ****)0x0) {
            plVar32 = local_e8;
            if (local_e8 == (longlong *)0x0) {
              plVar32 = local_d8;
            }
            (**(code **)*plVar32)(plVar32,&local_288);
          }
          local_138 = (code ***)0x0;
          local_128 = (longlong *)0x0;
          local_128 = (longlong *)FUN_14001cc68(0x50,0x10);
          *local_128 = (longlong)&PTR_FUN_14bd1d8e0;
          local_128[2] = (longlong)local_298;
          local_128[4] = (longlong)local_288;
          *(undefined4 *)(local_128 + 8) = local_268;
          *(undefined4 *)((longlong)local_128 + 0x44) = uStack_264;
          *(undefined4 *)(local_128 + 9) = uStack_260;
          *(undefined4 *)((longlong)local_128 + 0x4c) = uStack_25c;
          *(undefined4 *)(local_128 + 6) = (undefined4)local_278;
          *(undefined4 *)((longlong)local_128 + 0x34) = local_278._4_4_;
          *(undefined4 *)(local_128 + 7) = uStack_270;
          *(undefined4 *)((longlong)local_128 + 0x3c) = uStack_26c;
          if (local_128 + 2 != (longlong *)0x0) {
            local_138 = (code ***)FUN_144530d58;
          }
          local_178 = (longlong ****)0x0;
          local_168 = (longlong *)0x0;
          local_7c8 = (void *)0x0;
          uStack_7c0 = 0;
          plVar32 = (longlong *)0x0;
          local_850 = iVar39;
          if (*(longlong *)(pcVar5 + 0x18) == 0) {
LAB_140fc8038:
            local_848 = uVar31;
            pplVar26 = (longlong **)FUN_140fc8b8f();
            local_298 = (longlong ****)(pplVar26 + 2);
            local_290 = pplVar26;
            if (pplVar26 != (longlong **)0x0) {
              LOCK();
              *(int *)(pplVar26 + 1) = *(int *)(pplVar26 + 1) + 1;
              UNLOCK();
            }
            local_288 = local_138;
            local_278 = (code **)0x0;
            if (local_138 != (code ***)0x0) {
              plVar25 = local_128;
              if (local_128 == (longlong *)0x0) {
                plVar25 = local_118;
              }
              (**(code **)*plVar25)(plVar25,&local_278);
            }
            local_248 = local_178;
            local_238[0] = (longlong *)0x0;
            if (local_178 != (longlong ****)0x0) {
              plVar25 = local_168;
              if (local_168 == (longlong *)0x0) {
                plVar25 = &local_158;
              }
              (**(code **)*plVar25)(plVar25,local_238);
            }
            _Src = local_7c8;
            local_208 = (void *)0x0;
            lVar34 = (longlong)(int)uStack_7c0;
            local_200 = (int)uStack_7c0;
            if (lVar34 == 0) {
              local_1fc = 0;
            }
            else {
              FUN_140fc867e(&local_208,uStack_7c0 & 0xffffffff,0);
              memcpy(local_208,_Src,lVar34 << 3);
            }
            pplVar26[2] = *(longlong **)pcVar5;
            plVar25 = *(longlong **)(pcVar5 + 8);
            plVar7 = pplVar26[3];
            if (plVar7 != plVar25) {
              pplVar26[3] = plVar25;
              if (plVar25 != (longlong *)0x0) {
                (**(code **)(*plVar25 + 8))();
              }
              if (plVar7 != (longlong *)0x0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
            *(undefined4 *)(pplVar26 + 4) = *(undefined4 *)(pcVar5 + 0x10);
            uVar8 = *(undefined4 *)(pcVar5 + 0x1c);
            uVar9 = *(undefined4 *)(pcVar5 + 0x20);
            uVar10 = *(undefined4 *)(pcVar5 + 0x24);
            uVar11 = *(undefined4 *)(pcVar5 + 0x28);
            uVar12 = *(undefined4 *)(pcVar5 + 0x2c);
            uVar13 = *(undefined4 *)(pcVar5 + 0x30);
            uVar14 = *(undefined4 *)(pcVar5 + 0x34);
            uVar15 = *(undefined4 *)(pcVar5 + 0x38);
            uVar16 = *(undefined4 *)(pcVar5 + 0x3c);
            uVar17 = *(undefined4 *)(pcVar5 + 0x40);
            uVar18 = *(undefined4 *)(pcVar5 + 0x44);
            *(undefined4 *)(pplVar26 + 5) = *(undefined4 *)(pcVar5 + 0x18);
            *(undefined4 *)((longlong)pplVar26 + 0x2c) = uVar8;
            *(undefined4 *)(pplVar26 + 6) = uVar9;
            *(undefined4 *)((longlong)pplVar26 + 0x34) = uVar10;
            *(undefined4 *)(pplVar26 + 7) = uVar11;
            *(undefined4 *)((longlong)pplVar26 + 0x3c) = uVar12;
            *(undefined4 *)(pplVar26 + 8) = uVar13;
            *(undefined4 *)((longlong)pplVar26 + 0x44) = uVar14;
            *(undefined4 *)(pplVar26 + 9) = uVar15;
            *(undefined4 *)((longlong)pplVar26 + 0x4c) = uVar16;
            *(undefined4 *)(pplVar26 + 10) = uVar17;
            *(undefined4 *)((longlong)pplVar26 + 0x54) = uVar18;
            *(undefined2 *)(pplVar26 + 0xb) = *(undefined2 *)(pcVar5 + 0x48);
            FUN_1457dd16c(&local_1b8,*(longlong *)pcVar5);
            pplVar26[2] = (longlong *)local_1b8;
            uVar22 = FUN_1447a1f4a(pcVar5 + 8);
            FUN_1449b8608(&local_7d8,uVar22,L" Array");
            FUN_140233b1a(&local_1b8,&local_7d8);
            FUN_140008f88(pplVar26 + 3,&local_1b8);
            if (local_1b8 != (longlong ****)0x0) {
              (*(code *)(*local_1b8)[2])();
            }
            uVar38 = local_858;
            if (local_7d8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            pplVar26[5] = plVar32;
            *(byte *)(pplVar26 + 0xb) = *(byte *)(pplVar26 + 0xb) & 0xda;
            *(undefined4 *)(pplVar26 + 6) = 0;
            local_1b8 = (longlong ****)(pplVar26 + 2);
            local_1b0 = (code ****)&local_298;
            FUN_140fc8e70(&DAT_14cc1c7e8,&local_7d8,&local_1b8);
            uVar36 = DAT_14cc1c840;
            lVar34 = (longlong)(int)DAT_14cc1c840;
            DAT_14cc1c840 = DAT_14cc1c840 + 1;
            if (DAT_14cc1c844 < DAT_14cc1c840) {
              FUN_1446f84a2(&DAT_14cc1c838,uVar36);
            }
            *(longlong **)(DAT_14cc1c838 + lVar34 * 8) = pplVar26[2];
            FUN_140fc87bc(&local_298);
            uVar31 = local_848;
            pplVar33 = local_860;
            if (pplVar26 != (longlong **)0x0) {
              LOCK();
              pplVar1 = pplVar26 + 1;
              *(int *)pplVar1 = *(int *)pplVar1 + -1;
              UNLOCK();
              if (*(int *)pplVar1 == 0) {
                (*(code *)**pplVar26)(pplVar26);
                LOCK();
                piVar2 = (int *)((longlong)pplVar26 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (*(code *)(*pplVar26)[2])(pplVar26);
                }
              }
            }
          }
          else {
            if (pcVar6 != (code *)0x0) {
              LOCK();
              *(int *)(pcVar6 + 8) = *(int *)(pcVar6 + 8) + 1;
              UNLOCK();
            }
            local_7e8 = pcVar5;
            local_7e0 = pcVar6;
            FUN_140fc8cd2(&local_7d8,&local_7e8);
            plVar32 = local_7d0;
            puVar24 = local_7d8;
            if (local_7d8 != (undefined8 *)0x0) {
              plVar32 = (longlong *)FUN_1457dd03c(local_7d8 + 3);
              FUN_140fc897e(&DAT_14cc1c7d8,&local_1b8,*puVar24);
              uVar36 = *(uint *)(puVar24 + 4);
              local_298 = (longlong ****)local_138;
              local_288 = (code ***)0x0;
              if (local_138 != (code ***)0x0) {
                plVar25 = local_128;
                if (local_128 == (longlong *)0x0) {
                  plVar25 = local_118;
                }
                (**(code **)*plVar25)(plVar25,&local_288);
              }
              local_258 = uVar36;
              local_248 = local_1b8;
              local_238[0] = (longlong *)0x0;
              if (local_1b8 != (longlong ****)0x0) {
                plVar25 = local_1a8;
                if (local_1a8 == (longlong *)0x0) {
                  plVar25 = local_198;
                }
                (**(code **)*plVar25)(plVar25,local_238);
              }
              local_1f8 = (code ****)0x0;
              local_1e8 = (longlong *)0x0;
              plVar25 = (longlong *)FUN_14001cc68(0xa0,0x10);
              local_1e8 = local_168;
              ppplVar20 = ppplStack_170;
              pppplVar19 = local_178;
              *plVar25 = (longlong)&PTR_FUN_14bd1d910;
              plVar25[2] = (longlong)local_298;
              plVar25[4] = (longlong)local_288;
              local_288 = (code ***)0x0;
              plVar25[8] = CONCAT44(uStack_264,local_268);
              plVar25[9] = CONCAT44(uStack_25c,uStack_260);
              plVar25[6] = (longlong)local_278;
              plVar25[7] = CONCAT44(uStack_26c,uStack_270);
              if (local_298 != (longlong ****)0x0) {
                local_298 = (longlong ****)0x0;
              }
              *(uint *)(plVar25 + 10) = local_258;
              plVar25[0xc] = (longlong)local_248;
              plVar25[0xe] = (longlong)local_238[0];
              local_238[0] = (longlong *)0x0;
              plVar25[0x12] = local_218;
              plVar25[0x13] = lStack_210;
              plVar25[0x10] = local_228;
              plVar25[0x11] = lStack_220;
              if (local_248 != (longlong ****)0x0) {
                local_248 = (longlong ****)0x0;
              }
              if (plVar25 != (longlong *)&DAT_fffffffffffffff0) {
                local_1f8 = (code ****)FUN_14453101a;
              }
              uVar8 = (undefined4)uStack_160;
              uVar9 = uStack_160._4_4_;
              uVar10 = (undefined4)local_158;
              uVar11 = local_158._4_4_;
              uVar12 = (undefined4)uStack_150;
              uVar13 = uStack_150._4_4_;
              uVar14 = (undefined4)local_148;
              uVar15 = local_148._4_4_;
              uVar16 = (undefined4)uStack_140;
              uVar17 = uStack_140._4_4_;
              local_178 = (longlong ****)local_1f8;
              ppplStack_170 = ppplStack_1f0;
              local_168 = plVar25;
              uStack_160 = CONCAT44(uStack_1dc,uStack_1e0);
              local_158 = CONCAT44(uStack_1d4,local_1d8);
              uStack_150 = CONCAT44(uStack_1cc,uStack_1d0);
              local_148 = CONCAT44(uStack_1c4,local_1c8);
              uStack_140 = CONCAT44(uStack_1bc,uStack_1c0);
              local_1f8 = (code ****)pppplVar19;
              ppplStack_1f0 = ppplVar20;
              uStack_1e0 = uVar8;
              uStack_1dc = uVar9;
              local_1d8 = uVar10;
              uStack_1d4 = uVar11;
              uStack_1d0 = uVar12;
              uStack_1cc = uVar13;
              local_1c8 = uVar14;
              uStack_1c4 = uVar15;
              uStack_1c0 = uVar16;
              uStack_1bc = uVar17;
              if (pppplVar19 != (longlong ****)0x0) {
                plVar25 = local_1e8;
                if (local_1e8 == (longlong *)0x0) {
                  plVar25 = (longlong *)&local_1d8;
                }
                (**(code **)(*plVar25 + 0x10))();
                if (local_248 != (longlong ****)0x0) {
                  plVar25 = local_238[0];
                  if (local_238[0] == (longlong *)0x0) {
                    plVar25 = &local_228;
                  }
                  (**(code **)(*plVar25 + 0x10))();
                }
              }
              if (local_298 != (longlong ****)0x0) {
                pppcVar29 = local_288;
                if (local_288 == (code ***)0x0) {
                  pppcVar29 = (code ***)&local_278;
                }
                (*(*pppcVar29)[2])();
              }
              local_298 = (longlong ****)(ulonglong)uVar36;
              ppplStack_1f0 = &local_290;
              local_1f8 = (code ****)&local_298;
              FUN_1457dcfb6(&local_7c8,&local_1f8);
              if (local_1b8 != (longlong ****)0x0) {
                plVar25 = local_1a8;
                if (local_1a8 == (longlong *)0x0) {
                  plVar25 = local_198;
                }
                (**(code **)(*plVar25 + 0x10))();
              }
              plVar25 = local_7d0;
              if (local_7d0 != (longlong *)0x0) {
                LOCK();
                plVar7 = local_7d0 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
                  (**(code **)*local_7d0)(local_7d0);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar25 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar25 + 0x10))(plVar25);
                  }
                }
              }
              goto LAB_140fc8038;
            }
            pplVar33 = local_860;
            uVar38 = local_858;
            if (local_7d0 != (longlong *)0x0) {
              LOCK();
              plVar25 = local_7d0 + 1;
              *(int *)plVar25 = (int)*plVar25 + -1;
              UNLOCK();
              if ((int)*plVar25 == 0) {
                (**(code **)*local_7d0)(local_7d0);
                LOCK();
                piVar2 = (int *)((longlong)plVar32 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                pplVar33 = local_860;
                uVar38 = local_858;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar32 + 0x10))(plVar32);
                  pplVar33 = local_860;
                  uVar38 = local_858;
                }
              }
            }
          }
          if (local_7c8 != (void *)0x0) {
            FUN_1400020a8();
          }
          iVar39 = local_850;
          if (local_178 != (longlong ****)0x0) {
            plVar32 = local_168;
            if (local_168 == (longlong *)0x0) {
              plVar32 = &local_158;
            }
            (**(code **)(*plVar32 + 0x10))();
          }
          if (local_138 != (code ***)0x0) {
            plVar32 = local_128;
            if (local_128 == (longlong *)0x0) {
              plVar32 = local_118;
            }
            (**(code **)(*plVar32 + 0x10))();
          }
          if (local_f8[0] != (longlong ****)0x0) {
            plVar32 = local_e8;
            if (local_e8 == (longlong *)0x0) {
              plVar32 = local_d8;
            }
            (**(code **)(*plVar32 + 0x10))();
          }
        }
        uVar37 = local_840;
        uVar36 = local_84c;
        if (pcVar6 != (code *)0x0) {
          LOCK();
          pcVar5 = pcVar6 + 8;
          *(int *)pcVar5 = *(int *)pcVar5 + -1;
          UNLOCK();
          if (*(int *)pcVar5 == 0) {
            (*(code *)**(undefined8 **)pcVar6)(pcVar6);
            LOCK();
            pcVar5 = pcVar6 + 0xc;
            *(int *)pcVar5 = *(int *)pcVar5 + -1;
            UNLOCK();
            uVar37 = local_840;
            uVar36 = local_84c;
            if (*(int *)pcVar5 == 0) {
              (**(code **)(*(longlong *)pcVar6 + 0x10))(pcVar6);
              uVar37 = local_840;
              uVar36 = local_84c;
            }
          }
        }
      }
      uVar36 = uVar36 & ~(uint)uVar31;
      pplVar26 = (longlong **)pplVar33[2];
      if ((longlong **)pplVar33[2] == (longlong **)0x0) {
        pplVar26 = pplVar33;
      }
      iVar4 = *(int *)(pplVar33 + 3);
      iVar21 = (int)uVar37;
      lVar34 = (longlong)iVar21;
      uVar30 = *(uint *)((longlong)pplVar26 + lVar34 * 4) & uVar36;
      if (uVar30 == 0) {
        iVar27 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar27 = iVar4 + -1;
        }
        iVar27 = iVar27 >> 5;
        iVar39 = iVar39 + 0x20;
        iVar28 = iVar27;
        if (iVar27 < iVar21) {
          iVar28 = iVar21;
        }
        if (iVar21 < iVar27) {
          lVar35 = 0;
          do {
            uVar30 = *(uint *)((longlong)pplVar26 + lVar35 * 4 + lVar34 * 4 + 4);
            if (uVar30 != 0) {
              uVar37 = (ulonglong)(iVar21 + (int)lVar35 + 1);
              uVar36 = 0xffffffff;
              goto LAB_140fc83cf;
            }
            iVar39 = iVar39 + 0x20;
            lVar35 = lVar35 + 1;
          } while (iVar28 - lVar34 != lVar35);
          uVar36 = 0xffffffff;
          iVar21 = iVar28;
        }
        uVar37 = (ulonglong)(iVar21 + 1);
        pplVar33 = local_860;
        uVar38 = local_858;
        iVar21 = iVar4;
      }
      else {
LAB_140fc83cf:
        uVar31 = (ulonglong)(-uVar30 & uVar30);
        uVar3 = uVar31 * 2 + 1;
        lVar34 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar34 == 0; lVar34 = lVar34 + -1) {
          }
        }
        iVar21 = (iVar39 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar21) {
          iVar21 = iVar4;
        }
      }
      pplVar26 = local_860;
      uVar3 = local_858;
    } while (iVar21 != (int)uVar38 || pplVar33 != local_7a8);
  }
  local_770 = 0;
  if (local_778 != 0) {
    FUN_1400020a8();
  }
  FUN_1457dd23c(&local_7b8);
  if ((local_70 ^ (ulonglong)auStack_8a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fc867e FUN_140fc867e body=317 status=ok
// SIG undefined FUN_140fc867e(void)

void FUN_140fc867e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140fc86ec;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
      }
    }
LAB_140fc86ec:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140fc87bc FUN_140fc87bc body=131 status=ok
// SIG undefined FUN_140fc87bc(void)

void FUN_140fc87bc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    plVar3 = (longlong *)(param_1 + 0x70);
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x60);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar3 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x20);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000140fc883b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140fc884c FUN_140fc884c body=31 status=ok
// SIG undefined FUN_140fc884c(void)

undefined8 FUN_140fc884c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fc886c FUN_140fc886c body=17 status=ok
// SIG undefined FUN_140fc886c(void)

void FUN_140fc886c(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140fc8878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 140fc887e FUN_140fc887e body=256 status=ok
// SIG undefined FUN_140fc887e(void)

longlong * FUN_140fc887e(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  
  if (DAT_14cc1c7f0 != DAT_14cc1c81c) {
    uVar4 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    puVar6 = &DAT_14cc1c820;
    if (DAT_14cc1c828 != (undefined4 *)0x0) {
      puVar6 = DAT_14cc1c828;
    }
    iVar2 = puVar6[DAT_14cc1c830 - 1U &
                   (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                   (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar5 >> 4)];
    while (iVar2 != -1) {
      lVar1 = DAT_14cc1c7e8 + (longlong)iVar2 * 0xc0;
      if (*(longlong *)(DAT_14cc1c7e8 + (longlong)iVar2 * 0xc0) == param_2) {
        if ((lVar1 != 0) && (lVar1 != -0x10)) {
          lVar3 = *(longlong *)(lVar1 + 0x20);
          *param_1 = lVar3;
          param_1[2] = 0;
          if (lVar3 == 0) {
            return param_1;
          }
          puVar7 = (undefined8 *)(lVar1 + 0x40);
          if (*(undefined8 **)(lVar1 + 0x30) != (undefined8 *)0x0) {
            puVar7 = *(undefined8 **)(lVar1 + 0x30);
          }
          (**(code **)*puVar7)(puVar7,param_1 + 2);
          return param_1;
        }
        break;
      }
      iVar2 = *(int *)(lVar1 + 0xb0);
    }
  }
  FUN_140033559(".\\../Plugins/Animation/DeformerGraph/Source/OptimusCore/Private/OptimusDataTypeRegistry.cpp"
                ,0x643,L"CreateProperty: Invalid type name.");
  *param_1 = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 140fc897e FUN_140fc897e body=241 status=ok
// SIG undefined FUN_140fc897e(void)

longlong * FUN_140fc897e(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar5 = (uint)param_3 & 0xffff;
    lVar3 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x50);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x10) + (longlong)iVar6 * 0xc0;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar6 * 0xc0) == param_3) {
          if ((lVar3 != 0) && (lVar3 != -0x10)) {
            lVar1 = *(longlong *)(lVar3 + 0x60);
            *param_2 = lVar1;
            param_2[2] = 0;
            if (lVar1 == 0) {
              return param_2;
            }
            puVar4 = (undefined8 *)(lVar3 + 0x80);
            if (*(undefined8 **)(lVar3 + 0x70) != (undefined8 *)0x0) {
              puVar4 = *(undefined8 **)(lVar3 + 0x70);
            }
            (**(code **)*puVar4)(puVar4,param_2 + 2);
            return param_2;
          }
          break;
        }
        iVar6 = *(int *)(lVar3 + 0xb0);
      } while (iVar6 != -1);
    }
  }
  FUN_140033559(".\\../Plugins/Animation/DeformerGraph/Source/OptimusCore/Private/OptimusDataTypeRegistry.cpp"
                ,0x698,L"CreateProperty: Invalid type name.");
  *param_2 = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 140fc8a88 FUN_140fc8a88 body=263 status=ok
// SIG undefined FUN_140fc8a88(void)

undefined8 * FUN_140fc8a88(longlong param_1,undefined8 *param_2,longlong param_3)

{
  void *_Src;
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar1 = (uint)((ulonglong)param_3 >> 0x10);
    uVar4 = (uint)param_3 & 0xffff;
    lVar3 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x50);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar4) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0xc0;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0xc0) == param_3) {
          if ((lVar3 != 0) && (lVar3 != -0x10)) {
            *param_2 = 0;
            iVar2 = *(int *)(lVar3 + 0xa8);
            _Src = *(void **)(lVar3 + 0xa0);
            *(int *)(param_2 + 1) = iVar2;
            if ((longlong)iVar2 == 0) {
              *(undefined4 *)((longlong)param_2 + 0xc) = 0;
              return param_2;
            }
            FUN_140fc867e(param_2,iVar2,0);
            memcpy((void *)*param_2,_Src,(longlong)iVar2 << 3);
            return param_2;
          }
          break;
        }
        iVar2 = *(int *)(lVar3 + 0xb0);
      } while (iVar2 != -1);
    }
  }
  FUN_140033559(".\\../Plugins/Animation/DeformerGraph/Source/OptimusCore/Private/OptimusDataTypeRegistry.cpp"
                ,0x6a5,L"CreateProperty: Invalid type name.");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140fc8b8f FUN_140fc8b8f body=323 status=ok
// SIG undefined FUN_140fc8b8f(void)

undefined8 * FUN_140fc8b8f(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14bd1d840;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
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
  puVar2[3] = DAT_14c844840;
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
  *(undefined4 *)(puVar2 + 4) = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x35) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3d) = 0;
  puVar2[9] = 0;
  puVar2[10] = 0x3f80000000000000;
  *(undefined2 *)(puVar2 + 0xb) = 0;
  return puVar2;
}



// FUNCTION 140fc8cd2 FUN_140fc8cd2 body=411 status=ok
// SIG undefined FUN_140fc8cd2(void)

longlong * FUN_140fc8cd2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = *param_2;
  plVar3 = (longlong *)param_2[1];
  lVar5 = lVar8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar5 = *param_2;
  }
  pcVar4 = *(char **)(lVar5 + 0x18);
  plVar7 = plVar3;
  if (((*pcVar4 == '\x04') || (pcVar4[1] != '\x01')) || (pcVar4[2] != '\x03')) {
LAB_140fc8dd4:
    *param_1 = lVar8;
    param_1[1] = (longlong)plVar7;
  }
  else {
    FUN_140f4f540();
    uVar6 = FUN_1413622f8(**(undefined1 **)(*param_2 + 0x18),4);
    FUN_14452aaf6(&DAT_14cc1c7d8,&local_48,uVar6);
    plVar1 = local_40;
    lVar8 = local_48;
    local_48 = 0;
    if (local_40 == plVar3) {
LAB_140fc8da8:
      plVar3 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_40)(local_40);
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
    else {
      local_40 = (longlong *)0x0;
      plVar7 = plVar1;
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
        goto LAB_140fc8da8;
      }
    }
    if (lVar8 != 0) goto LAB_140fc8dd4;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    if (plVar7 == (longlong *)0x0) goto LAB_140fc8e48;
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
LAB_140fc8e48:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140fc8e70 FUN_140fc8e70 body=1082 status=ok
// SIG undefined FUN_140fc8e70(void)

int * FUN_140fc8e70(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar17 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar17 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar17) {
      FUN_1457dd3c4(param_1,iVar17);
    }
    iVar18 = (int)param_1[5];
    if (iVar18 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar6 = iVar18 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    plVar11 = param_1 + 2;
    iVar10 = iVar18 + 1;
    iVar16 = iVar18 + 0x1f;
    if (-1 < iVar18) {
      iVar16 = iVar18;
    }
    if (iVar16 >> 5 == iVar6) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar18) {
        if (iVar18 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar6 = iVar18;
        }
        else {
          uVar7 = iVar18 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar14 = 4;
            if (4 < uVar7) {
              uVar14 = uVar7;
            }
          }
          else {
            uVar14 = (uVar7 * 3 >> 3) + uVar7 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar14 << 2,0);
          iVar6 = (int)(uVar13 >> 2);
          iVar10 = -0x20;
          if ((int)uVar7 <= iVar6) {
            iVar10 = iVar6 << 5;
          }
          iVar6 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar11,iVar6);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar6 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar6 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar15 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar15 = plVar11;
        }
        bVar9 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar15 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar6 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar8 = (longlong)iVar17;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar18 & 0x1f;
    puVar1 = (uint *)((longlong)plVar11 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar17 = (int)param_1[6];
    lVar8 = (longlong)iVar17;
    iVar18 = *(int *)(*param_1 + 4 + lVar8 * 0xc0);
    *(int *)(param_1 + 6) = iVar18;
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar18 * 0xc0) = 0xffffffff;
    }
  }
  plVar11 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar11 = (longlong *)param_1[4];
  }
  iVar18 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar18 = iVar17;
  }
  puVar1 = (uint *)((longlong)plVar11 + (longlong)(iVar18 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar17 & 0x1f);
  lVar2 = *param_1;
  lVar8 = lVar8 * 0xc0;
  plVar11 = (longlong *)(lVar2 + lVar8);
  puVar3 = (undefined8 *)param_3[1];
  *(undefined8 *)(lVar2 + lVar8) = *(undefined8 *)*param_3;
  *(undefined8 *)(lVar2 + 0x10 + lVar8) = *puVar3;
  lVar4 = puVar3[1];
  *(longlong *)(lVar2 + 0x18 + lVar8) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  lVar8 = puVar3[2];
  plVar11[4] = lVar8;
  plVar11[6] = 0;
  if (lVar8 != 0) {
    puVar12 = puVar3 + 6;
    if ((undefined8 *)puVar3[4] != (undefined8 *)0x0) {
      puVar12 = (undefined8 *)puVar3[4];
    }
    (**(code **)*puVar12)(puVar12,plVar11 + 6);
  }
  lVar8 = puVar3[10];
  plVar11[0xc] = lVar8;
  plVar11[0xe] = 0;
  if (lVar8 != 0) {
    puVar12 = puVar3 + 0xe;
    if ((undefined8 *)puVar3[0xc] != (undefined8 *)0x0) {
      puVar12 = (undefined8 *)puVar3[0xc];
    }
    (**(code **)*puVar12)(puVar12,plVar11 + 0xe);
  }
  plVar11[0x14] = 0;
  iVar18 = *(int *)(puVar3 + 0x13);
  pvVar5 = (void *)puVar3[0x12];
  *(int *)(plVar11 + 0x15) = iVar18;
  if ((longlong)iVar18 == 0) {
    *(undefined4 *)((longlong)plVar11 + 0xac) = 0;
  }
  else {
    FUN_140fc867e(plVar11 + 0x14,iVar18,0);
    memcpy((void *)plVar11[0x14],pvVar5,(longlong)iVar18 << 3);
  }
  *(undefined4 *)(plVar11 + 0x16) = 0xffffffff;
  lVar8 = *plVar11;
  uVar7 = (uint)((ulonglong)lVar8 >> 0x10);
  uVar14 = (uint)lVar8 & 0xffff;
  uVar7 = ((uint)lVar8 << 0x10 | uVar14) + (int)((ulonglong)lVar8 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar14 >> 4);
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar14 != 0) && (uVar14 != 1)) {
    plVar15 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[8];
    }
    iVar18 = *(int *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & uVar7) * 4);
    if (iVar18 != -1) {
      do {
        pvVar5 = (void *)(*param_1 + (longlong)iVar18 * 0xc0);
        if (*(longlong *)(*param_1 + (longlong)iVar18 * 0xc0) == lVar8) {
          FUN_140fc87bc((longlong)pvVar5 + 0x10);
          memmove(pvVar5,plVar11,0xb0);
          FUN_1494dab64(param_1,iVar17);
          goto LAB_140fc910d;
        }
        iVar18 = *(int *)((longlong)pvVar5 + 0xb0);
      } while (iVar18 != -1);
    }
  }
  if (uVar14 < 4) {
    iVar6 = 1;
  }
  else {
    uVar13 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
    lVar8 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar8 & 0x1f);
  }
  iVar18 = iVar17;
  if (((int)uVar14 < 1) || (iVar6 <= (int)param_1[9])) {
    uVar7 = (int)param_1[9] - 1U & uVar7;
    *(uint *)((longlong)plVar11 + 0xb4) = uVar7;
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(undefined4 *)(plVar11 + 0x16) =
         *(undefined4 *)
          ((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         iVar17;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    FUN_140fc975e(param_1);
  }
LAB_140fc910d:
  *param_2 = iVar18;
  return param_2;
}



// FUNCTION 140fc92aa FUN_140fc92aa body=1202 status=ok
// SIG undefined FUN_140fc92aa(void)

ulonglong FUN_140fc92aa(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                       longlong *param_5,longlong *param_6)

{
  int *piVar1;
  void *_Src;
  code *pcVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  size_t _Size;
  ulonglong uVar11;
  undefined1 auStack_138 [40];
  longlong *local_110;
  longlong local_108;
  longlong *local_100;
  longlong **local_f8;
  undefined1 local_ec [4];
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_c8 [2];
  longlong local_b8 [4];
  longlong local_98;
  longlong *local_88 [2];
  longlong local_78 [4];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_108 = param_2;
  if (param_2 == 0) {
LAB_140fc9506:
    uVar11 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
      uVar3 = (uint)((ulonglong)param_2 >> 0x10);
      uVar6 = (uint)param_2 & 0xffff;
      lVar10 = param_1 + 0x48;
      if (*(longlong *)(param_1 + 0x50) != 0) {
        lVar10 = *(longlong *)(param_1 + 0x50);
      }
      iVar7 = *(int *)(lVar10 + (ulonglong)
                                (*(int *)(param_1 + 0x58) - 1U &
                                (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6)
                                + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar7 != -1) {
        lVar10 = *(longlong *)(param_1 + 0x10);
        do {
          if (*(longlong *)(lVar10 + (longlong)iVar7 * 0xc0) == param_2) goto LAB_140fc9506;
          iVar7 = *(int *)((longlong)iVar7 * 0xc0 + lVar10 + 0xb0);
        } while (iVar7 != -1);
      }
    }
    plVar4 = (longlong *)FUN_14001cc68(0x60,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_FUN_14bd1d840;
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    plVar4[5] = 0;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[8] = 0;
    plVar4[9] = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
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
    plVar8 = DAT_14c844840;
    plVar9 = plVar4 + 2;
    plVar4[3] = (longlong)DAT_14c844840;
    if (plVar8 != (longlong *)0x0) {
      if (*(code **)(*plVar8 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*plVar8 + 8))();
      }
    }
    *(undefined4 *)(plVar4 + 4) = 0;
    plVar4[5] = 0;
    plVar4[6] = 0;
    *(undefined8 *)((longlong)plVar4 + 0x35) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x3d) = 0;
    *(undefined4 *)(plVar4 + 9) = 0;
    *(undefined4 *)((longlong)plVar4 + 0x4c) = 0;
    *(undefined4 *)(plVar4 + 10) = 0;
    *(undefined4 *)((longlong)plVar4 + 0x54) = 0x3f800000;
    *(undefined2 *)(plVar4 + 0xb) = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_d8 = *param_4;
    local_c8[0] = (longlong *)0x0;
    local_e8 = plVar9;
    local_e0 = plVar4;
    if (local_d8 != 0) {
      plVar8 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar8 = (longlong *)param_4[2];
      }
      (**(code **)*plVar8)(0,local_c8);
    }
    local_98 = *param_5;
    local_88[0] = (longlong *)0x0;
    local_110 = plVar9;
    if (local_98 != 0) {
      plVar9 = param_5 + 4;
      if ((longlong *)param_5[2] != (longlong *)0x0) {
        plVar9 = (longlong *)param_5[2];
      }
      (**(code **)*plVar9)(plVar9,local_88);
    }
    local_58 = (void *)0x0;
    local_50 = (int)param_6[1];
    lVar10 = (longlong)local_50;
    _Src = (void *)*param_6;
    if (lVar10 == 0) {
      local_4c = 0;
      _Size = 0;
    }
    else {
      FUN_140fc867e(&local_58,local_50,0);
      _Size = lVar10 << 3;
      memcpy(local_58,_Src,_Size);
    }
    pcVar2 = (code *)*param_3;
    plVar9 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_3[2];
    }
    uVar5 = (**(code **)(*plVar9 + 8))();
    (*pcVar2)(uVar5,local_110);
    local_100 = &local_108;
    local_f8 = &local_e8;
    FUN_140fc8e70((longlong *)(param_1 + 0x10),local_ec);
    iVar7 = *(int *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x68) = iVar7 + 1U;
    if (*(uint *)(param_1 + 0x6c) < iVar7 + 1U) {
      FUN_1446f84a2((longlong *)(param_1 + 0x60),iVar7);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar7 * 8) = local_108;
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      plVar9 = local_88[0];
      if (local_88[0] == (longlong *)0x0) {
        plVar9 = local_78;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (local_d8 != 0) {
      plVar9 = local_c8[0];
      if (local_c8[0] == (longlong *)0x0) {
        plVar9 = local_b8;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    plVar9 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_e0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    uVar11 = CONCAT71((int7)(_Size >> 8),1);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar4 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
  if (*param_3 != 0) {
    plVar4 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (*param_4 != 0) {
    plVar4 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (*param_5 != 0) {
    plVar4 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fc975e FUN_140fc975e body=604 status=ok
// SIG undefined FUN_140fc975e(void)

void FUN_140fc975e(longlong *param_1)

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
        lVar13 = (longlong)iVar7 * 0xc0;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0xb4 + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0xb0 + lVar13) =
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
            if (iVar3 - lVar14 == lVar13) goto LAB_140fc9971;
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
LAB_140fc9971:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fc99bc FUN_140fc99bc body=618 status=ok
// SIG undefined FUN_140fc99bc(void)

void FUN_140fc99bc(longlong *param_1,int param_2)

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
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_98 [36];
  int local_74;
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
  local_74 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar10 = 1;
    local_58._4_4_ = 0;
    uVar14 = 0xffffffff;
    iVar15 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar10 = local_68 >> 0x20;
    uVar14 = (uint)local_58;
    iVar15 = (int)local_68;
  }
  plVar6 = local_60;
  iVar8 = local_58._4_4_;
  iVar11 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar13 = *param_1;
      lVar12 = (longlong)iVar8 * 0xc0;
      if (*(longlong *)(lVar13 + 0xa0 + lVar12) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar13 + 0x60 + lVar12) != 0) {
        plVar9 = *(longlong **)(lVar13 + lVar12 + 0x70);
        if (plVar9 == (longlong *)0x0) {
          plVar9 = (longlong *)(lVar13 + lVar12 + 0x80);
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      if (*(longlong *)(lVar13 + 0x20 + lVar12) != 0) {
        plVar9 = *(longlong **)(lVar13 + lVar12 + 0x30);
        if (plVar9 == (longlong *)0x0) {
          plVar9 = (longlong *)(lVar13 + lVar12 + 0x40);
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      plVar9 = *(longlong **)(lVar13 + 0x18 + lVar12);
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
      uVar14 = uVar14 & ~(uint)uVar10;
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
        lVar12 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar7 = *(uint *)((longlong)plVar9 + lVar12 * 4 + lVar13 * 4 + 4);
          if (uVar7 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar5 - lVar13 == lVar12) goto LAB_140fc9b53;
        }
        iVar15 = iVar15 + (int)lVar12 + 1;
        uVar14 = 0xffffffff;
      }
      uVar10 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar10 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar8 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar4);
  }
LAB_140fc9b53:
  iVar15 = local_74;
  if (local_74 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_74);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_74) {
    FUN_1457dd8f6(param_1,local_74);
  }
  param_1[6] = 0xffffffff;
  uVar14 = iVar15 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar14) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar7 = 0x80;
    if (0x80 < (int)uVar14) {
      uVar7 = uVar14;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fc9c28 FUN_140fc9c28 body=2488 status=ok
// SIG undefined FUN_140fc9c28(void)

void FUN_140fc9c28(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  byte param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  bool bVar4;
  ulonglong uVar5;
  code *pcVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  undefined ***pppuVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  longlong lVar23;
  longlong lVar24;
  byte bVar25;
  longlong *plVar26;
  longlong lVar27;
  longlong *plVar28;
  undefined1 auStack_338 [32];
  code **local_318;
  undefined8 *local_310;
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 *local_2e0;
  undefined8 uStack_2d8;
  undefined4 local_2d0;
  int iStack_2cc;
  longlong local_2c8;
  undefined8 uStack_2c0;
  int local_2ac;
  undefined8 local_2a8;
  longlong *local_2a0;
  undefined1 local_291;
  undefined8 local_290;
  code *local_288 [2];
  undefined8 *local_278;
  code *local_248 [2];
  undefined8 local_238 [6];
  code *local_208 [2];
  undefined8 local_1f8 [6];
  code *local_1c8;
  undefined8 uStack_1c0;
  undefined ***local_1b8;
  undefined8 uStack_1b0;
  undefined **local_1a8;
  undefined8 *puStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  int iStack_184;
  int local_180;
  code *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined ***local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined **local_158;
  undefined8 *puStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  code *local_138;
  undefined8 uStack_130;
  undefined ***local_128;
  undefined8 uStack_120;
  undefined **local_118;
  undefined8 *puStack_110;
  int local_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  code *local_f8;
  undefined8 uStack_f0;
  undefined ***local_e8;
  undefined8 uStack_e0;
  undefined **local_d8;
  undefined8 *puStack_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  ulonglong local_70;
  
  bVar25 = param_5;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_291 = 1;
  plVar26 = param_1;
  local_2a0 = param_1;
  local_290 = param_3;
  if (param_1 == (longlong *)0x0) goto LAB_140fca357;
  do {
    lVar27 = plVar26[10];
LAB_140fc9c96:
    if (lVar27 != 0) {
      if ((~*(uint *)(*(longlong *)(lVar27 + 8) + 0x18) & 0x8001) != 0) goto code_r0x000140fc9cab;
LAB_140fc9cee:
      FUN_141907aa8(&DAT_14cc1c7d8,&local_1c8,lVar27);
      plVar28 = uStack_1c0;
      pcVar6 = local_1c8;
      if (uStack_1c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = uStack_1c0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*uStack_1c0)(uStack_1c0);
          LOCK();
          piVar2 = (int *)((longlong)plVar28 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
          }
        }
      }
      if (pcVar6 == (code *)0x0) goto LAB_140fca357;
      plVar28 = (longlong *)(lVar27 + 0x18);
      do {
        for (lVar27 = *plVar28; lVar27 != 0; lVar27 = *(longlong *)(lVar27 + 0x18)) {
          if ((~*(uint *)(*(longlong *)(lVar27 + 8) + 0x18) & 0x8001) == 0) goto LAB_140fc9cee;
        }
        if (*(code **)(*plVar26 + 0x2b0) == (code *)&LAB_1446e8c94) {
          plVar26 = (longlong *)plVar26[8];
        }
        else {
          plVar26 = (longlong *)(**(code **)(*plVar26 + 0x2b0))(plVar26);
        }
        plVar28 = plVar26 + 10;
        param_1 = local_2a0;
        bVar25 = param_5;
      } while (plVar26 != (longlong *)0x0);
      break;
    }
    if (*(code **)(*plVar26 + 0x2b0) == (code *)&LAB_1446e8c94) {
      plVar26 = (longlong *)plVar26[8];
    }
    else {
      plVar26 = (longlong *)(**(code **)(*plVar26 + 0x2b0))(plVar26);
    }
  } while (plVar26 != (longlong *)0x0);
  FUN_146739dc5(&local_2a8,param_1,1);
  local_f8 = (code *)0x0;
  local_e8 = (undefined ***)0x0;
  local_138 = (code *)0x0;
  local_128 = (undefined ***)0x0;
  local_2ac = 0;
  if ((bVar25 & 2) != 0) {
    uVar16 = FUN_14452b4ce(param_1);
    uVar3 = uStack_c0;
    local_148 = local_c8;
    puVar21 = puStack_d0;
    local_158 = local_d8;
    local_168 = local_e8;
    local_178 = local_f8;
    puStack_150 = (undefined8 *)CONCAT71(puStack_150._1_7_,uVar16);
    local_198 = local_c8;
    uStack_190 = uStack_c0;
    local_1a8 = local_d8;
    puStack_1a0 = puStack_d0;
    local_1b8 = local_e8;
    uStack_1b0 = uStack_e0;
    local_1c8 = local_f8;
    uStack_1c0 = uStack_f0;
    local_f8 = FUN_144531568;
    local_e8 = (undefined ***)0x0;
    local_d8 = &PTR_LAB_14bd1d950;
    puStack_d0 = puStack_150;
    local_c8 = param_1;
    uStack_c0 = uStack_140;
    uStack_170 = (undefined4)uStack_f0;
    uStack_16c = uStack_f0._4_4_;
    uStack_140 = uVar3;
    puStack_150 = puVar21;
    uStack_160 = (undefined4)uStack_e0;
    uStack_15c = uStack_e0._4_4_;
    if (local_178 != (code *)0x0) {
      pppuVar20 = local_168;
      if (local_168 == (undefined ***)0x0) {
        pppuVar20 = &local_158;
      }
      (*(code *)(*pppuVar20)[2])();
    }
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_2fc = *(undefined4 *)(param_1[0x17] + 8);
    while (param_1 != (longlong *)0x0) {
      for (lVar27 = param_1[10]; lVar27 != 0; lVar27 = *(longlong *)(lVar27 + 0x18)) {
        if ((~*(uint *)(*(longlong *)(lVar27 + 8) + 0x18) & 0x8001) == 0) goto LAB_140fca068;
      }
      if (*(code **)(*param_1 + 0x2b0) == (code *)&LAB_1446e8c94) {
        param_1 = (longlong *)param_1[8];
      }
      else {
        param_1 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
      }
    }
    goto LAB_140fca39f;
  }
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_208[0] = (code *)0x0;
  local_1f8[0] = 0;
  goto LAB_140fc9e00;
code_r0x000140fc9cab:
  lVar27 = *(longlong *)(lVar27 + 0x18);
  goto LAB_140fc9c96;
LAB_140fca068:
  FUN_141907aa8(&DAT_14cc1c7d8,&local_2e0,lVar27);
  puVar21 = local_2e0;
  if (local_2e0 == (undefined8 *)0x0) {
LAB_140fca1eb:
    bVar4 = true;
  }
  else {
    local_1c8 = (code *)0x0;
    local_1b8 = (undefined ***)0x0;
    FUN_140fc897e(&DAT_14cc1c7d8,&local_178,*local_2e0);
    uVar9 = uStack_190;
    plVar28 = local_198;
    puVar8 = puStack_1a0;
    ppuVar7 = local_1a8;
    pppuVar20 = local_1b8;
    pcVar6 = local_1c8;
    plVar26 = (longlong *)CONCAT44(uStack_16c,uStack_170);
    uVar3 = CONCAT44(uStack_15c,uStack_160);
    local_1c8 = local_178;
    local_1b8 = local_168;
    local_1a8 = local_158;
    puStack_1a0 = puStack_150;
    local_198 = local_148;
    uStack_190 = uStack_140;
    local_178 = pcVar6;
    uStack_170 = (undefined4)uStack_1c0;
    uStack_16c = uStack_1c0._4_4_;
    local_168 = pppuVar20;
    uStack_160 = (undefined4)uStack_1b0;
    uStack_15c = uStack_1b0._4_4_;
    local_158 = ppuVar7;
    puStack_150 = puVar8;
    local_148 = plVar28;
    uStack_140 = uVar9;
    uStack_1c0 = plVar26;
    uStack_1b0 = uVar3;
    if (pcVar6 != (code *)0x0) {
      if (pppuVar20 == (undefined ***)0x0) {
        pppuVar20 = &local_158;
      }
      (*(code *)(*pppuVar20)[2])();
    }
    uVar5 = uStack_2c0;
    if (local_1c8 == (code *)0x0) goto LAB_140fca1eb;
    local_188 = *(undefined4 *)(lVar27 + 0x44);
    iStack_184 = *(int *)(lVar27 + 0x34) * *(int *)(lVar27 + 0x30);
    local_180 = *(int *)(puVar21 + 4);
    local_2ac = local_2ac + *(int *)(puVar21 + 4);
    lVar23 = (longlong)(int)uStack_2c0;
    uVar18 = (int)uStack_2c0 + 1;
    uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar18);
    if (uStack_2c0._4_4_ < uVar18) {
      FUN_1445317ae(&local_2c8,uVar5 & 0xffffffff);
      lVar23 = lVar23 * 0x50;
      lVar24 = local_2c8 + lVar23;
      *(code **)(local_2c8 + lVar23) = local_1c8;
      *(undefined8 *)(local_2c8 + 0x10 + lVar23) = 0;
      if (local_1c8 != (code *)0x0) goto LAB_140fca216;
    }
    else {
      lVar23 = lVar23 * 0x50;
      lVar24 = local_2c8 + lVar23;
      plVar26 = (longlong *)(lVar23 + local_2c8);
      *plVar26 = (longlong)local_1c8;
      plVar26[2] = 0;
LAB_140fca216:
      pppuVar20 = local_1b8;
      if (local_1b8 == (undefined ***)0x0) {
        pppuVar20 = &local_1a8;
      }
      (*(code *)**pppuVar20)();
    }
    *(int *)(lVar24 + 0x48) = local_180;
    *(ulonglong *)(lVar24 + 0x40) = CONCAT44(iStack_184,local_188);
    bVar4 = false;
    if (local_1c8 != (code *)0x0) {
      pppuVar20 = local_1b8;
      if (local_1b8 == (undefined ***)0x0) {
        pppuVar20 = &local_1a8;
      }
      (*(code *)(*pppuVar20)[2])();
    }
  }
  plVar26 = uStack_2d8;
  if (uStack_2d8 != (longlong *)0x0) {
    LOCK();
    plVar28 = uStack_2d8 + 1;
    *(int *)plVar28 = (int)*plVar28 + -1;
    UNLOCK();
    if ((int)*plVar28 == 0) {
      (**(code **)*uStack_2d8)(uStack_2d8);
      LOCK();
      piVar2 = (int *)((longlong)plVar26 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
      }
    }
  }
  if (bVar4) {
    FUN_144531773(local_2c8,uStack_2c0 & 0xffffffff);
    if (local_2c8 != 0) {
      FUN_1400020a8();
    }
    goto LAB_140fca30f;
  }
  plVar26 = (longlong *)(lVar27 + 0x18);
  do {
    for (lVar27 = *plVar26; lVar27 != 0; lVar27 = *(longlong *)(lVar27 + 0x18)) {
      if ((~*(uint *)(*(longlong *)(lVar27 + 8) + 0x18) & 0x8001) == 0) goto LAB_140fca068;
    }
    if (*(code **)(*param_1 + 0x2b0) == (code *)&LAB_1446e8c94) {
      param_1 = (longlong *)param_1[8];
    }
    else {
      param_1 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
    }
    plVar26 = param_1 + 10;
  } while (param_1 != (longlong *)0x0);
LAB_140fca39f:
  uVar5 = uStack_2c0;
  lVar27 = local_2c8;
  local_2e0 = (undefined8 *)0x0;
  uStack_2d8._0_4_ = (int)uStack_2c0;
  uVar22 = 0;
  if ((int)uStack_2c0 == 0) {
    uVar17 = 0;
    iVar19 = 0;
    puVar21 = (undefined8 *)0x0;
  }
  else {
    FUN_1445318b8(&local_2e0,uStack_2c0 & 0xffffffff);
    FUN_144531995(local_2e0,lVar27,uVar5 & 0xffffffff);
    puVar21 = local_2e0;
    iVar19 = (int)uStack_2d8;
    uVar17 = uStack_2d8._4_4_;
  }
  uStack_140 = uStack_100;
  uVar15 = uStack_104;
  iVar14 = local_108;
  puStack_150 = puStack_110;
  local_158 = local_118;
  local_168 = local_128;
  local_178 = local_138;
  local_2d0 = local_2fc;
  iStack_2cc = local_2ac;
  local_2e0 = (undefined8 *)0x0;
  uStack_2d8 = (longlong *)0x0;
  uVar10 = (undefined4)uStack_130;
  uVar11 = uStack_130._4_4_;
  uVar12 = (undefined4)uStack_120;
  uVar13 = uStack_120._4_4_;
  local_198 = (longlong *)CONCAT44(uStack_104,local_108);
  uStack_190 = uStack_100;
  local_1a8 = local_118;
  puStack_1a0 = puStack_110;
  local_1b8 = local_128;
  uStack_1b0 = uStack_120;
  local_1c8 = local_138;
  uStack_1c0 = uStack_130;
  local_108 = iVar19;
  uStack_104 = uVar17;
  uStack_100 = CONCAT44(local_2ac,local_2fc);
  local_118 = &PTR_FUN_14bd1d970;
  puStack_110 = puVar21;
  local_138 = FUN_1445319f8;
  uStack_130 = (longlong *)CONCAT44(uStack_16c,uStack_170);
  local_128 = (undefined ***)0x0;
  uStack_120 = CONCAT44(uStack_15c,uStack_160);
  uStack_170 = uVar10;
  uStack_16c = uVar11;
  local_148 = (longlong *)CONCAT44(uVar15,iVar14);
  uStack_160 = uVar12;
  uStack_15c = uVar13;
  if (local_178 != (code *)0x0) {
    pppuVar20 = &local_158;
    if (local_168 != (undefined ***)0x0) {
      pppuVar20 = local_168;
    }
    (*(code *)(*pppuVar20)[2])();
    uVar22 = (int)uStack_2d8;
  }
  FUN_144531773(local_2e0,uVar22);
  if (local_2e0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144531773(local_2c8,uStack_2c0 & 0xffffffff);
  if (local_2c8 != 0) {
    FUN_1400020a8();
  }
  local_208[0] = local_138;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_1f8[0] = 0;
  if (local_138 != (code *)0x0) {
    pppuVar20 = local_128;
    if (local_128 == (undefined ***)0x0) {
      pppuVar20 = &local_118;
    }
    (*(code *)**pppuVar20)(0,local_1f8);
  }
LAB_140fc9e00:
  local_248[0] = local_f8;
  local_238[0] = 0;
  if (local_f8 != (code *)0x0) {
    pppuVar20 = local_e8;
    if (local_e8 == (undefined ***)0x0) {
      pppuVar20 = &local_d8;
    }
    (*(code *)**pppuVar20)(pppuVar20,local_238);
  }
  local_288[0] = (code *)0x0;
  local_278 = (undefined8 *)FUN_14001cc68(0x48,8);
  *local_278 = &PTR_FUN_14bd1d990;
  local_278[1] = &local_2a8;
  local_278[2] = param_2;
  local_278[3] = &local_290;
  local_278[4] = &local_2ac;
  local_278[5] = &local_2a0;
  local_278[6] = param_4;
  local_278[7] = &param_5;
  local_278[8] = &local_291;
  if (local_278 + 1 != (longlong *)0x0) {
    local_288[0] = FUN_144531bc6;
  }
  local_310 = &local_2f8;
  local_318 = local_208;
  FUN_140fc92aa(&DAT_14cc1c7d8,local_2a8,local_288,local_248);
LAB_140fca30f:
  if (local_138 != (code *)0x0) {
    pppuVar20 = local_128;
    if (local_128 == (undefined ***)0x0) {
      pppuVar20 = &local_118;
    }
    (*(code *)(*pppuVar20)[2])();
  }
  if (local_f8 != (code *)0x0) {
    pppuVar20 = local_e8;
    if (local_e8 == (undefined ***)0x0) {
      pppuVar20 = &local_d8;
    }
    (*(code *)(*pppuVar20)[2])();
  }
LAB_140fca357:
  if (*(char *)(param_4 + 0x10) == '\x01') {
    *(undefined1 *)(param_4 + 0x10) = 0;
  }
  if ((local_70 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fca5e2 FUN_140fca5e2 body=520 status=ok
// SIG undefined FUN_140fca5e2(void)

longlong * FUN_140fca5e2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  uVar8 = DAT_14cc1c7f0;
  uVar6 = (ulonglong)DAT_14cc1c7f0;
  FUN_140fc99bc(param_1,uVar6);
  lVar4 = param_1[1];
  *(uint *)(param_1 + 1) = (int)lVar4 + uVar8;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar8) {
    FUN_1457dd3c4(param_1);
  }
  *(undefined4 *)(param_1 + 6) = DAT_14cc1c818;
  *(undefined4 *)((longlong)param_1 + 0x34) = DAT_14cc1c81c;
  FUN_144a69486(param_1 + 2,&DAT_14cc1c7f8);
  lVar4 = DAT_14cc1c7e8;
  if (0 < (int)uVar8) {
    lVar2 = *param_1;
    lVar7 = 0;
    uVar8 = 0;
    do {
      puVar5 = DAT_14cc1c808;
      if (DAT_14cc1c808 == (undefined *)0x0) {
        puVar5 = &DAT_14cc1c7f8;
      }
      if ((*(uint *)(puVar5 + (ulonglong)(uVar8 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0) {
        *(undefined4 *)(lVar2 + lVar7) = *(undefined4 *)(lVar4 + lVar7);
        *(undefined4 *)(lVar2 + 4 + lVar7) = *(undefined4 *)(lVar4 + 4 + lVar7);
      }
      else {
        *(undefined8 *)(lVar2 + lVar7) = *(undefined8 *)(lVar4 + lVar7);
        *(undefined8 *)(lVar2 + 0x10 + lVar7) = *(undefined8 *)(lVar4 + 0x10 + lVar7);
        lVar3 = *(longlong *)(lVar4 + 0x18 + lVar7);
        *(longlong *)(lVar2 + 0x18 + lVar7) = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        lVar3 = *(longlong *)(lVar4 + 0x20 + lVar7);
        *(longlong *)(lVar2 + 0x20 + lVar7) = lVar3;
        *(undefined8 *)(lVar2 + 0x30 + lVar7) = 0;
        if (lVar3 != 0) {
          puVar9 = *(undefined8 **)(lVar7 + lVar4 + 0x30);
          if (puVar9 == (undefined8 *)0x0) {
            puVar9 = (undefined8 *)(lVar7 + lVar4 + 0x40);
          }
          (**(code **)*puVar9)(puVar9,lVar2 + lVar7 + 0x30);
        }
        lVar3 = *(longlong *)(lVar4 + 0x60 + lVar7);
        *(longlong *)(lVar2 + 0x60 + lVar7) = lVar3;
        *(undefined8 *)(lVar2 + 0x70 + lVar7) = 0;
        if (lVar3 != 0) {
          puVar9 = *(undefined8 **)(lVar7 + lVar4 + 0x70);
          if (puVar9 == (undefined8 *)0x0) {
            puVar9 = (undefined8 *)(lVar7 + lVar4 + 0x80);
          }
          (**(code **)*puVar9)(puVar9,lVar2 + lVar7 + 0x70);
        }
        *(undefined8 *)(lVar2 + 0xa0 + lVar7) = 0;
        iVar1 = *(int *)(lVar4 + 0xa8 + lVar7);
        _Src = *(void **)(lVar4 + 0xa0 + lVar7);
        *(int *)(lVar2 + 0xa8 + lVar7) = iVar1;
        if ((longlong)iVar1 == 0) {
          *(undefined4 *)(lVar2 + 0xac + lVar7) = 0;
        }
        else {
          puVar9 = (undefined8 *)(lVar2 + lVar7 + 0xa0);
          FUN_140fc867e(puVar9,iVar1,0);
          memcpy((void *)*puVar9,_Src,(longlong)iVar1 << 3);
        }
        *(undefined8 *)(lVar2 + 0xb0 + lVar7) = *(undefined8 *)(lVar4 + 0xb0 + lVar7);
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0xc0;
    } while (uVar6 * 0xc0 != lVar7);
  }
  return param_1;
}



// FUNCTION 140fca7ea FUN_140fca7ea body=837 status=ok
// SIG undefined FUN_140fca7ea(void)

void FUN_140fca7ea(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  longlong param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined1 auStack_238 [32];
  longlong *local_218;
  undefined8 *local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1ec;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined1 local_1d2;
  undefined1 local_1d1;
  undefined8 local_1d0;
  code *local_1c8 [2];
  undefined8 *local_1b8;
  code *local_188 [2];
  undefined8 local_178 [6];
  longlong local_148 [2];
  undefined8 local_138 [6];
  longlong local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1d1 = 0x3f;
  local_1d2 = 0;
  local_1e0 = param_1;
  local_1d0 = param_3;
  if (param_1 != 0) {
    FUN_146739dc5(&local_1e8,param_1,1);
    local_c8 = (code *)0x0;
    local_b8 = (longlong *)0x0;
    local_1ec = FUN_145cc73c0(param_3);
    uVar3 = FUN_14452b4ce(param_1);
    local_f8 = local_b8;
    local_108 = (longlong)local_c8;
    uStack_e0 = CONCAT31(uStack_e0._1_3_,uVar3);
    uVar1 = (undefined4)uStack_a0;
    uVar2 = uStack_a0._4_4_;
    local_58 = (undefined4)local_98;
    uStack_54 = local_98._4_4_;
    uStack_50 = uStack_90;
    uStack_4c = uStack_8c;
    local_68 = (undefined4)local_a8;
    uStack_64 = local_a8._4_4_;
    uStack_60 = (undefined4)uStack_a0;
    uStack_5c = uStack_a0._4_4_;
    local_78 = (undefined4)local_b8;
    uStack_74 = local_b8._4_4_;
    uStack_70 = uStack_b0;
    uStack_6c = uStack_ac;
    local_88 = (undefined4)local_c8;
    uStack_84 = local_c8._4_4_;
    uStack_80 = uStack_c0;
    uStack_7c = uStack_bc;
    local_c8 = FUN_144531de8;
    local_b8 = (longlong *)0x0;
    local_a8 = &PTR_LAB_14bd1d9b0;
    uStack_a0 = CONCAT44(uStack_dc,uStack_e0);
    local_98 = param_1;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    uStack_d0 = uStack_90;
    uStack_cc = uStack_8c;
    uStack_e0 = uVar1;
    uStack_dc = uVar2;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    if (local_108 != 0) {
      plVar4 = local_f8;
      if (local_f8 == (longlong *)0x0) {
        plVar4 = &local_e8;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    local_208 = 0;
    uStack_200 = 0;
    local_148[0] = *param_4;
    local_138[0] = 0;
    if (local_148[0] != 0) {
      plVar4 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar4 = (longlong *)param_4[2];
      }
      (**(code **)*plVar4)(0,local_138);
    }
    local_188[0] = local_c8;
    local_178[0] = 0;
    if (local_c8 != (code *)0x0) {
      plVar4 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar4 = &local_a8;
      }
      (**(code **)*plVar4)(plVar4,local_178);
    }
    local_1c8[0] = (code *)0x0;
    local_1b8 = (undefined8 *)FUN_14001cc68(0x48,8);
    *local_1b8 = &PTR_FUN_14bd1d9d0;
    local_1b8[1] = &local_1e8;
    local_1b8[2] = param_2;
    local_1b8[3] = &local_1d0;
    local_1b8[4] = &local_1ec;
    local_1b8[5] = &local_1e0;
    local_1b8[6] = param_5;
    local_1b8[7] = &local_1d1;
    local_1b8[8] = &local_1d2;
    if (local_1b8 + 1 != (longlong *)0x0) {
      local_1c8[0] = FUN_144531ff4;
    }
    local_210 = &local_208;
    local_218 = local_148;
    FUN_140fc92aa(&DAT_14cc1c7d8,local_1e8,local_1c8,local_188);
    if (local_c8 != (code *)0x0) {
      plVar4 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar4 = &local_a8;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if (*param_4 != 0) {
    plVar4 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (*(char *)(param_5 + 0x10) == '\x01') {
    *(undefined1 *)(param_5 + 0x10) = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fcab36 FUN_140fcab36 body=57 status=ok
// SIG undefined FUN_140fcab36(void)

void FUN_140fcab36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23548 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23548 = FUN_140002ddd(FUN_14643e093,uVar1,L"GpsTest_NavNearArc");
  }
  return;
}



// FUNCTION 140fcab70 FUN_140fcab70 body=3837 status=ok
// SIG undefined FUN_140fcab70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fcab70(longlong *param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  short local_d0;
  byte *local_c8;
  longlong local_c0;
  undefined4 *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined2 uStack_7e;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar16 = FUN_14082167c();
  cVar2 = (char)param_1[0xf];
  if ((cVar2 == '\0') || (cVar2 == '\x02')) {
    if (*(int *)((longlong)param_1 + 0x7c) != 0) {
      lVar7 = (longlong)param_1 + 0x7c;
      goto LAB_140fcabb6;
    }
  }
  else if ((cVar2 == '\x01') && (*(int *)((longlong)param_1 + 0xac) != 0)) {
    lVar7 = (longlong)param_1 + 0xac;
LAB_140fcabb6:
    bVar3 = *(byte *)(param_1 + 1);
    uVar16 = FUN_140822484(uVar16,&local_80,param_2);
    local_d8 = param_1 + 2;
    local_d0 = (ushort)bVar3 * 2;
    uVar16 = FUN_1408236ae(uVar16,param_2,&local_80,lVar7);
  }
  lVar5 = FUN_140823ef2(uVar16,param_2,&DAT_14c948618);
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar10 = (undefined4 *)(lVar7 + 0xc7c);
  uVar16 = *puVar10;
  local_c8 = (byte *)(lVar7 + 0xc80);
  bVar3 = *local_c8;
  if ((bVar3 & 1) != 0) {
    *local_c8 = 0;
    *puVar10 = 0xffffffff;
  }
  plVar6 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b41bac0;
  uVar17 = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[2] = (longlong)&PTR_FUN_14affe3c0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  if ((bVar3 & 1) != 0) {
    *puVar10 = uVar16;
    *local_c8 = 1;
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(lVar5 + 0x50);
  *(uint *)(lVar5 + 0x50) = iVar4 + 1U;
  if (*(uint *)(lVar5 + 0x54) < iVar4 + 1U) {
    uVar17 = FUN_140822376((longlong *)(lVar5 + 0x48),iVar4);
  }
  lVar7 = *(longlong *)(lVar5 + 0x48);
  *(longlong **)(lVar7 + (longlong)iVar4 * 0x10) = plVar6 + 2;
  *(longlong **)(lVar7 + 8 + (longlong)iVar4 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      uVar17 = (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar17 = (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  plVar8 = plVar6 + 3;
  cVar2 = (char)param_1[0xf];
  if ((cVar2 == '\x02' & *(byte *)(param_1 + 0x15)) == 1) {
    lVar7 = param_1[0x22];
    plVar15 = (longlong *)param_1[0x23];
    if (plVar15 == (longlong *)0x0) {
      plVar6[6] = lVar7;
      plVar13 = (longlong *)plVar6[7];
      if (plVar13 != (longlong *)0x0) {
        plVar6[7] = 0;
LAB_140fcb82d:
        LOCK();
        plVar15 = plVar13 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar4 = *piVar1;
          UNLOCK();
joined_r0x000140fcb86b:
          if (iVar4 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      LOCK();
      plVar13 = plVar15 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      plVar6[6] = lVar7;
      plVar13 = (longlong *)plVar6[7];
      if (plVar15 == plVar13) {
        LOCK();
        plVar13 = plVar15 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar4 = *piVar1;
          UNLOCK();
          plVar13 = plVar15;
          goto joined_r0x000140fcb86b;
        }
      }
      else {
        plVar6[7] = (longlong)plVar15;
        if (plVar13 != (longlong *)0x0) goto LAB_140fcb82d;
      }
    }
    *(undefined1 *)(plVar6 + 5) = 1;
    iVar4 = (int)plVar6[4];
    *(uint *)(plVar6 + 4) = iVar4 + 1U;
    if (*(uint *)((longlong)plVar6 + 0x24) < iVar4 + 1U) {
      FUN_140823334(plVar8,iVar4);
    }
    puVar9 = (undefined8 *)(*plVar8 + (longlong)iVar4 * 0x28);
    *puVar9 = DAT_14cb86220;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[4] = 0;
    local_90 = CONCAT31(local_90._1_3_,2);
    local_84 = 1;
    uStack_8c = 0;
    uStack_88 = 0;
    local_d8 = (longlong *)((ulonglong)local_d8 & 0xffffffffffffff00);
    FUN_1408234aa((longlong)iVar4 * 5,&local_80,param_2,&DAT_14cb889e0);
    uVar11 = 1;
LAB_140fcadaa:
    uVar17 = FUN_140821fec(puVar9,&local_80,&local_90,uVar11);
    if (local_58 != 0) {
LAB_140fcb5af:
      uVar17 = FUN_1400020a8();
    }
  }
  else {
    if (cVar2 == '\0') {
      local_78 = *(undefined4 *)((longlong)param_1 + 0x84);
      uVar11 = *(undefined8 *)((longlong)param_1 + 0x7c);
      local_80 = (undefined2)uVar11;
      uStack_7e = (undefined2)((ulonglong)uVar11 >> 0x10);
      uStack_7c = (undefined4)((ulonglong)uVar11 >> 0x20);
      FUN_14082216c(lVar5);
      iVar4 = (int)plVar6[4];
      *(uint *)(plVar6 + 4) = iVar4 + 1U;
      if (*(uint *)((longlong)plVar6 + 0x24) < iVar4 + 1U) {
        FUN_140823334(plVar8,iVar4);
      }
      puVar9 = (undefined8 *)(*plVar8 + (longlong)iVar4 * 0x28);
      *puVar9 = DAT_14cb86228;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      local_90 = CONCAT31(local_90._1_3_,1);
      local_84 = 1;
      uStack_8c = (undefined4)DAT_14cb7c588;
      uStack_88 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
      local_d8 = (longlong *)CONCAT71(local_d8._1_7_,2);
      FUN_1408234aa((longlong)iVar4 * 5,&local_80,param_2,&DAT_14cb86eb8);
      uVar11 = 0;
      goto LAB_140fcadaa;
    }
    if (cVar2 != '\x01') {
      if (cVar2 != '\x02') goto LAB_140fcadbd;
      lVar7 = param_1[0x22];
      plVar15 = (longlong *)param_1[0x23];
      local_b8 = puVar10;
      if (plVar15 == (longlong *)0x0) {
        plVar6[6] = lVar7;
        plVar13 = (longlong *)plVar6[7];
        if (plVar13 != (longlong *)0x0) {
          plVar6[7] = 0;
LAB_140fcb6fd:
          LOCK();
          plVar15 = plVar13 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar4 = *piVar1;
            UNLOCK();
joined_r0x000140fcb6e1:
            if (iVar4 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
        LOCK();
        plVar13 = plVar15 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
        plVar6[6] = lVar7;
        plVar13 = (longlong *)plVar6[7];
        if (plVar15 == plVar13) {
          LOCK();
          plVar13 = plVar15 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar4 = *piVar1;
            UNLOCK();
            plVar13 = plVar15;
            goto joined_r0x000140fcb6e1;
          }
        }
        else {
          plVar6[7] = (longlong)plVar15;
          if (plVar13 != (longlong *)0x0) goto LAB_140fcb6fd;
        }
      }
      local_78 = *(undefined4 *)((longlong)param_1 + 0x84);
      uVar11 = *(undefined8 *)((longlong)param_1 + 0x7c);
      local_80 = (undefined2)uVar11;
      uStack_7e = (undefined2)((ulonglong)uVar11 >> 0x10);
      uStack_7c = (undefined4)((ulonglong)uVar11 >> 0x20);
      FUN_140fcbe3e(lVar5);
      lVar7 = param_1[0x12];
      if ((longlong)(int)lVar7 != 0) {
        lVar14 = param_1[0x11];
        lVar12 = 0;
        do {
          local_78 = *(undefined4 *)(lVar14 + 8 + lVar12);
          uVar11 = *(undefined8 *)(lVar14 + lVar12);
          local_80 = (undefined2)uVar11;
          uStack_7e = (undefined2)((ulonglong)uVar11 >> 0x10);
          uStack_7c = (undefined4)((ulonglong)uVar11 >> 0x20);
          FUN_140fcbe3e(lVar5,&local_80);
          lVar12 = lVar12 + 0xc;
        } while ((longlong)(int)lVar7 * 0xc != lVar12);
      }
      lVar7 = param_1[0x14];
      if ((longlong)(int)lVar7 != 0) {
        lVar14 = param_1[0x13];
        lVar12 = 0;
        do {
          local_78 = *(undefined4 *)(lVar14 + 8 + lVar12);
          uVar11 = *(undefined8 *)(lVar14 + lVar12);
          local_80 = (undefined2)uVar11;
          uStack_7e = (undefined2)((ulonglong)uVar11 >> 0x10);
          uStack_7c = (undefined4)((ulonglong)uVar11 >> 0x20);
          FUN_140fcbd40(lVar5,&local_80);
          lVar12 = lVar12 + 0xc;
        } while ((longlong)(int)lVar7 * 0xc != lVar12);
      }
      iVar4 = (int)plVar6[4];
      *(uint *)(plVar6 + 4) = iVar4 + 1U;
      if (*(uint *)((longlong)plVar6 + 0x24) < iVar4 + 1U) {
        FUN_140823334(plVar8,iVar4);
      }
      puVar9 = (undefined8 *)(*plVar8 + (longlong)iVar4 * 0x28);
      *puVar9 = DAT_14cb86220;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      local_90 = CONCAT31(local_90._1_3_,2);
      local_84 = 1;
      uStack_8c = 0;
      uStack_88 = 0;
      local_d8 = (longlong *)((ulonglong)local_d8 & 0xffffffffffffff00);
      FUN_1408234aa((longlong)iVar4 * 5,&local_80,param_2,&DAT_14cb889e0);
      uVar17 = FUN_140821fec(puVar9,&local_80,&local_90,1);
      puVar10 = local_b8;
      if (local_58 == 0) goto LAB_140fcadbd;
      goto LAB_140fcb5af;
    }
    local_78 = *(undefined4 *)((longlong)param_1 + 0xb4);
    uVar11 = *(undefined8 *)((longlong)param_1 + 0xac);
    local_80 = (undefined2)uVar11;
    uStack_7e = (undefined2)((ulonglong)uVar11 >> 0x10);
    uStack_7c = (undefined4)((ulonglong)uVar11 >> 0x20);
    FUN_14082216c(lVar5);
    iVar4 = (int)plVar6[4];
    *(uint *)(plVar6 + 4) = iVar4 + 1U;
    if (*(uint *)((longlong)plVar6 + 0x24) < iVar4 + 1U) {
      FUN_140823334(plVar8,iVar4);
    }
    puVar9 = (undefined8 *)(*plVar8 + (longlong)iVar4 * 0x28);
    *puVar9 = DAT_14cb86220;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[4] = 0;
    local_90 = CONCAT31(local_90._1_3_,1);
    local_84 = 1;
    uStack_8c = (undefined4)DAT_14cb7c588;
    uStack_88 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
    local_d8 = (longlong *)CONCAT71(local_d8._1_7_,2);
    FUN_1408234aa((longlong)iVar4 * 5,&local_80,param_2,&DAT_14cb86eb8);
    FUN_140821fec(puVar9,&local_80,&local_90,0);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    uVar17 = (**(code **)(*param_1 + 0x58))(param_1,lVar5,param_2);
  }
LAB_140fcadbd:
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      uVar17 = (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar17 = (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  lVar5 = FUN_140823ef2(uVar17,param_2,&DAT_14c948618);
  plVar6 = (longlong *)FUN_14001cc68(0x458);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b41dc70;
  memset(plVar6 + 3,0,0x420);
  plVar6[2] = (longlong)&PTR_FUN_14b1787d0;
  plVar6[8] = 0;
  *(undefined2 *)(plVar6 + 0xb) = 0x101;
  *(undefined1 *)(plVar6 + 0x81) = 0;
  plVar6[0xe] = 0;
  plVar6[0xf] = 0;
  plVar6[0x10] = 0;
  plVar6[0x11] = 0;
  plVar6[0x87] = 0;
  plVar6[0x88] = 0;
  plVar6[0x89] = 0;
  plVar6[0x8a] = 0;
  *(undefined8 *)((longlong)plVar6 + 0x5c) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x61) = 0;
  *(char *)(plVar6 + 5) = (char)param_1[0x25];
  lVar7 = param_1[0x27];
  if ((param_1[0x26] != 0) || ((int)lVar7 != 0)) {
    plVar6[6] = param_1[0x26];
    *(int *)(plVar6 + 7) = (int)lVar7;
  }
  *(int *)(plVar6 + 10) = (int)param_1[0x2a];
  plVar6[9] = param_1[0x29];
  lVar7 = FUN_140fcbb85();
  uVar16 = FUN_1403de7ba(plVar6 + 0x87,lVar7 + 0xa0);
  if ((char)param_1[0x2b] == '\x01') {
    uVar16 = FUN_140136f76(param_1 + 0x2c,&local_80);
    lVar7 = CONCAT44(uStack_7c,CONCAT22(uStack_7e,local_80));
    plVar8 = (longlong *)CONCAT44(uStack_74,local_78);
    if (plVar8 == (longlong *)0x0) {
      plVar6[0xe] = lVar7;
      plVar15 = (longlong *)plVar6[0xf];
      if (plVar15 != (longlong *)0x0) {
        plVar6[0xf] = 0;
LAB_140fcb940:
        LOCK();
        plVar8 = plVar15 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          uVar16 = (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar4 = *piVar1;
          UNLOCK();
joined_r0x000140fcb972:
          if (iVar4 == 0) {
            uVar16 = (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      plVar6[0xe] = lVar7;
      plVar15 = (longlong *)plVar6[0xf];
      if (plVar8 == plVar15) {
        LOCK();
        plVar15 = plVar8 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          uVar16 = (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar4 = *piVar1;
          UNLOCK();
          plVar15 = plVar8;
          goto joined_r0x000140fcb972;
        }
      }
      else {
        plVar6[0xf] = (longlong)plVar8;
        if (plVar15 != (longlong *)0x0) goto LAB_140fcb940;
      }
    }
    plVar8 = (longlong *)CONCAT44(uStack_74,local_78);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar8 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        uVar16 = (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          uVar16 = (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if ((char)param_1[0x33] == '\x01') {
    plVar8 = plVar6 + 0x12;
    if (param_1 + 0x34 != plVar8) {
      if ((char)plVar6[0x81] == '\x01') {
        FUN_140315562(plVar8);
      }
      uVar16 = FUN_1457ddc2a(plVar8,param_1 + 0x34);
      *(undefined1 *)(plVar6 + 0x81) = 1;
    }
  }
  if ((char)param_1[0xa3] == '\x01') {
    uVar16 = FUN_14891eef2(plVar6 + 0x82,param_1 + 0xa4);
  }
  if ((char)param_1[0xf] == '\0') {
    *(undefined2 *)(plVar6 + 0xb) = 0x101;
    local_78 = *(undefined4 *)((longlong)param_1 + 0x84);
    uVar11 = *(undefined8 *)((longlong)param_1 + 0x7c);
    local_80 = (undefined2)uVar11;
    uStack_7e = (undefined2)((ulonglong)uVar11 >> 0x10);
    uStack_7c = (undefined4)((ulonglong)uVar11 >> 0x20);
    uVar16 = FUN_14082216c(lVar5);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    iVar4 = *(int *)(lVar5 + 0x50);
    *(uint *)(lVar5 + 0x50) = iVar4 + 1U;
    if (*(uint *)(lVar5 + 0x54) < iVar4 + 1U) {
      uVar16 = FUN_140822376((longlong *)(lVar5 + 0x48),iVar4);
    }
    lVar7 = *(longlong *)(lVar5 + 0x48);
    *(longlong **)(lVar7 + (longlong)iVar4 * 0x10) = plVar6 + 2;
    *(longlong **)(lVar7 + 8 + (longlong)iVar4 * 0x10) = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        uVar16 = (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          uVar16 = (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
LAB_140fcb1d1:
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        uVar16 = (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          uVar16 = (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    if (((char)param_1[0xf] == '\x02') && ((char)param_1[0x15] == '\0')) {
      *(undefined1 *)(plVar6 + 0xb) = 1;
      *(undefined1 *)((longlong)plVar6 + 0x59) = *(undefined1 *)((longlong)param_1 + 0xa9);
      if (*(int *)((longlong)param_1 + 0x7c) != 0) {
        local_78 = *(undefined4 *)((longlong)param_1 + 0x84);
        uVar11 = *(undefined8 *)((longlong)param_1 + 0x7c);
        local_80 = (undefined2)uVar11;
        uStack_7e = (undefined2)((ulonglong)uVar11 >> 0x10);
        uStack_7c = (undefined4)((ulonglong)uVar11 >> 0x20);
        uVar16 = FUN_14082216c(lVar5);
      }
      if ((longlong)(int)param_1[0x12] != 0) {
        lVar7 = param_1[0x11];
        local_c0 = (longlong)(int)param_1[0x12] * 0xc;
        lVar14 = 0;
        do {
          if (*(int *)(lVar7 + lVar14) != 0) {
            puVar9 = (undefined8 *)(lVar7 + lVar14);
            local_78 = *(undefined4 *)(puVar9 + 1);
            uVar11 = *puVar9;
            local_80 = (undefined2)uVar11;
            uStack_7e = (undefined2)((ulonglong)uVar11 >> 0x10);
            uStack_7c = (undefined4)((ulonglong)uVar11 >> 0x20);
            uVar16 = FUN_14082216c(lVar5,&local_80);
          }
          lVar14 = lVar14 + 0xc;
        } while (local_c0 != lVar14);
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      iVar4 = *(int *)(lVar5 + 0x50);
      *(uint *)(lVar5 + 0x50) = iVar4 + 1U;
      if (*(uint *)(lVar5 + 0x54) < iVar4 + 1U) {
        uVar16 = FUN_140822376((longlong *)(lVar5 + 0x48),iVar4);
      }
      lVar7 = *(longlong *)(lVar5 + 0x48);
      *(longlong **)(lVar7 + (longlong)iVar4 * 0x10) = plVar6 + 2;
      *(longlong **)(lVar7 + 8 + (longlong)iVar4 * 0x10) = plVar6;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        plVar8 = plVar6 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          uVar16 = (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            uVar16 = (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (0 < (int)param_1[0x14]) {
        lVar7 = FUN_140823ef2(uVar16,param_2,&DAT_14c948618);
        uVar17 = *puVar10;
        bVar3 = *local_c8;
        if ((bVar3 & 1) != 0) {
          *local_c8 = 0;
          *puVar10 = 0xffffffff;
        }
        plVar8 = (longlong *)FUN_14001cc68(0x68,0x10);
        plVar8[1] = (longlong)&DAT_100000001;
        *plVar8 = (longlong)&PTR_FUN_14b41dfe0;
        uVar16 = 0;
        plVar8[5] = 0;
        plVar8[6] = 0;
        plVar8[9] = 0;
        plVar8[10] = 0;
        plVar8[0xb] = 0;
        plVar8[0xc] = 0;
        plVar8[3] = 0;
        plVar8[4] = 0;
        plVar8[2] = (longlong)&PTR_FUN_14b00be30;
        *(undefined1 *)((longlong)plVar8 + 0x29) = 0;
        *(undefined4 *)(plVar8 + 6) = 0;
        plVar8[7] = 0;
        plVar8[8] = 0;
        *(undefined4 *)(plVar8 + 9) = 0;
        plVar8[10] = 0;
        plVar8[0xb] = 0;
        if ((bVar3 & 1) != 0) {
          *puVar10 = uVar17;
          *local_c8 = 1;
        }
        *(undefined1 *)((longlong)plVar8 + 0x62) = 1;
        *(undefined1 *)(plVar8 + 0xc) = *(undefined1 *)((longlong)param_1 + 0xa9);
        lVar5 = param_1[0x14];
        if ((longlong)(int)lVar5 != 0) {
          lVar14 = param_1[0x13];
          lVar12 = 0;
          do {
            if (*(int *)(lVar14 + lVar12) != 0) {
              puVar9 = (undefined8 *)(lVar12 + lVar14);
              local_78 = *(undefined4 *)(puVar9 + 1);
              uVar11 = *puVar9;
              local_80 = (undefined2)uVar11;
              uStack_7e = (undefined2)((ulonglong)uVar11 >> 0x10);
              uStack_7c = (undefined4)((ulonglong)uVar11 >> 0x20);
              uVar16 = FUN_14082216c(lVar7,&local_80);
            }
            lVar12 = lVar12 + 0xc;
          } while ((longlong)(int)lVar5 * 0xc != lVar12);
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        iVar4 = *(int *)(lVar7 + 0x50);
        *(uint *)(lVar7 + 0x50) = iVar4 + 1U;
        if (*(uint *)(lVar7 + 0x54) < iVar4 + 1U) {
          uVar16 = FUN_140822376((longlong *)(lVar7 + 0x48),iVar4);
        }
        lVar7 = *(longlong *)(lVar7 + 0x48);
        *(longlong **)(lVar7 + (longlong)iVar4 * 0x10) = plVar8 + 2;
        *(longlong **)(lVar7 + 8 + (longlong)iVar4 * 0x10) = plVar8;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          LOCK();
          plVar15 = plVar8 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            uVar16 = (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              uVar16 = (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
          LOCK();
          plVar15 = plVar8 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            uVar16 = (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              uVar16 = (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
    }
    if (plVar6 != (longlong *)0x0) goto LAB_140fcb1d1;
  }
  bVar3 = *(byte *)(param_1 + 0xf);
  if (bVar3 < 2) {
    local_d8 = (longlong *)CONCAT71(local_d8._1_7_,2);
    FUN_1408234aa(uVar16,&local_80,param_2,&DAT_14cb86eb8);
    FUN_14082207e(&local_90,&local_80,0);
    FUN_140822770(param_2 + 0x2c0,&local_90,1);
    FUN_1447cd778(CONCAT44(uStack_8c,local_90),uStack_88);
    if (CONCAT44(uStack_8c,local_90) != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (bVar3 != 2) goto LAB_140fcb258;
    FUN_140fcbf3a(param_2 + 0x2c0,param_1 + 0x19);
  }
  bVar3 = *(byte *)(param_1 + 0xf);
LAB_140fcb258:
  if (((bVar3 & 0xfd) == 0) && (*(int *)((longlong)param_1 + 0x7c) != 0)) {
    lVar7 = FUN_1406b2efc(param_2 + 0x2c0);
    local_90 = CONCAT31(local_90._1_3_,1);
    local_84 = 1;
    uStack_8c = (undefined4)DAT_14cb7c588;
    uStack_88 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
    local_98 = *(undefined4 *)((longlong)param_1 + 0x84);
    local_a0 = *(undefined8 *)((longlong)param_1 + 0x7c);
    local_80 = 0xb;
    uStack_7c = 0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    FUN_144928d62(&local_70,0);
    local_a8 = DAT_14cb7bdd0;
    local_b0 = _DAT_14cb7bdc8;
    FUN_144928d62(&local_70,1);
    local_d8 = (longlong *)((ulonglong)local_d8 & 0xffffffffffffff00);
    FUN_140641812(lVar7 + 0x58,&local_80,&local_90,0);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fcba6e FUN_140fcba6e body=9 status=ok
// SIG undefined FUN_140fcba6e(void)

void FUN_140fcba6e(longlong param_1)

{
  FUN_140fcba78(param_1 + 0x10);
  return;
}



// FUNCTION 140fcba78 FUN_140fcba78 body=269 status=ok
// SIG undefined FUN_140fcba78(void)

void FUN_140fcba78(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b1787d0;
  if (param_1[0x87] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x85] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x84) == '\x01') {
    if (param_1[0x82] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x84) = 0;
  }
  if (*(char *)(param_1 + 0x7f) == '\x01') {
    FUN_140315562(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x7f) = 0;
  }
  plVar3 = (longlong *)param_1[0xf];
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
  plVar3 = (longlong *)param_1[0xd];
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
  *param_1 = &PTR_FUN_14afff080;
  FUN_1403d9eef(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140fcbb85 FUN_140fcbb85 body=442 status=ok
// SIG undefined FUN_140fcbb85(void)

longlong * FUN_140fcbb85(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb86578 == (longlong *)0x0) {
    memset(&DAT_14cb86580,0,0xc0);
    FUN_145c0fcb8(&DAT_14cb86580);
    DAT_14cb86578 = (longlong *)&DAT_14cb86580;
  }
  plVar1 = DAT_14cb86578;
  plVar4 = DAT_14cb86578 + 1;
  cVar2 = (char)DAT_14cb86578[2];
  plVar5 = plVar4;
  if (cVar2 == '\0') {
LAB_140fcbbb9:
    if (*plVar5 == 0) goto LAB_140fcbc92;
    plVar5 = plVar4;
    if (cVar2 == '\0') {
LAB_140fcbbca:
      if (*plVar5 == 0) goto LAB_140fcbc33;
      if ((((int)DAT_14cb86578[3] == *(int *)(*plVar5 + 0x44)) || (DAT_14c9a1ab0 == 0)) ||
         ((*plVar4 == 0 ||
          (plVar4 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar4 + 0x28)),
          plVar4 == (longlong *)0x0)))) goto LAB_140fcbbde;
      cVar2 = (**(code **)(*plVar4 + 0x2a8))(plVar4,plVar1);
    }
    else {
      if (cVar2 == '\x02') {
        plVar5 = (longlong *)(*plVar4 + 0x30);
        goto LAB_140fcbbca;
      }
LAB_140fcbc33:
      if (((DAT_14c9a1ab0 == 0) || (*plVar4 == 0)) ||
         (plVar4 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar4 + 0x28)),
         plVar4 == (longlong *)0x0)) goto LAB_140fcbbde;
      puVar6 = &DAT_14c9485f0;
      if ((undefined4 *)plVar1[1] != (undefined4 *)0x0) {
        puVar6 = (undefined4 *)plVar1[1];
      }
      cVar2 = (**(code **)(*plVar4 + 0x2a0))(plVar4,plVar1,puVar6);
    }
    if (cVar2 == '\0') goto LAB_140fcbbde;
  }
  else {
    if (cVar2 == '\x02') {
      plVar5 = (longlong *)(*plVar4 + 0x30);
      goto LAB_140fcbbb9;
    }
LAB_140fcbc92:
    lVar3 = FUN_140162146();
    if (lVar3 == 0) goto LAB_140fcbbde;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_mission",0);
    FUN_140024ada(&local_48,plVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_140fcbbde:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1;
}



// FUNCTION 140fcbd40 FUN_140fcbd40 body=253 status=ok
// SIG undefined FUN_140fcbd40(void)

void FUN_140fcbd40(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((int)*param_2 != 0) {
    plVar5 = (longlong *)FUN_14001cc68(0x28,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14b4197d0;
    plVar5[4] = 0;
    plVar5[2] = (longlong)&PTR_FUN_14b348fe0;
    *(int *)(plVar5 + 4) = (int)param_2[1];
    plVar5[3] = *param_2;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    iVar3 = *(int *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x44) < iVar3 + 1U) {
      FUN_140822268((longlong *)(param_1 + 0x38),iVar3);
    }
    lVar4 = *(longlong *)(param_1 + 0x38);
    *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
    *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140fcbe3e FUN_140fcbe3e body=251 status=ok
// SIG undefined FUN_140fcbe3e(void)

void FUN_140fcbe3e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((int)*param_2 != 0) {
    plVar5 = (longlong *)FUN_14001cc68(0x28,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14b4197b0;
    plVar5[4] = 0;
    plVar5[2] = (longlong)&PTR_FUN_14b348fc0;
    *(int *)(plVar5 + 4) = (int)param_2[1];
    plVar5[3] = *param_2;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    iVar3 = *(int *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x44) < iVar3 + 1U) {
      FUN_140822268((longlong *)(param_1 + 0x38),iVar3);
    }
    lVar4 = *(longlong *)(param_1 + 0x38);
    *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
    *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140fcbf3a FUN_140fcbf3a body=1226 status=ok
// SIG undefined FUN_140fcbf3a(void)

void FUN_140fcbf3a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  longlong *local_c8;
  longlong local_c0;
  undefined4 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar6 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b41baa0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[0xf] = 0;
  plVar6[2] = (longlong)&PTR_FUN_14b35c3c0;
  *(undefined4 *)((longlong)plVar6 + 0x1c) = 1;
  *(undefined1 *)(plVar6 + 4) = 1;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  *(undefined4 *)(plVar6 + 10) = 0xf00000d0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  *(undefined2 *)(plVar6 + 0xf) = 0x101;
  plVar7 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b41ba80;
  local_b0 = plVar7 + 2;
  plVar7[2] = (longlong)&PTR_FUN_14b3a4a00;
  plVar7[3] = 0;
  plVar7[4] = 0;
  if (plVar7 == (longlong *)0x0) {
    local_a8 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    local_a8 = plVar7;
  }
  if ((local_b0 == (longlong *)0x0) || (lVar8 = (**(code **)(*local_b0 + 8))(), lVar8 == 0)) {
    local_a0._0_4_ = 0;
    iVar5 = 0;
    uVar4 = (uint)local_a0;
  }
  else {
    uVar4 = *(uint *)(lVar8 + 0xc);
    local_a0 = (ulonglong)uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar5 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar5 = *(int *)(lVar8 + 0x10);
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(lVar8 + 0x10) = iVar9;
        iVar5 = 0;
      }
      UNLOCK();
      uVar4 = (uint)local_a0;
      if (bVar10) {
        iVar5 = iVar9;
      }
    }
  }
  local_a0._0_4_ = uVar4;
  local_a0 = CONCAT44(iVar5,(uint)local_a0);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_14029d0b6(plVar6 + 0xc,&local_b0);
  plVar1 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_a8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_144928d62(&local_78,0,&DAT_14cb7bbb0);
  FUN_144928d62(&local_78,1,&DAT_14cb889e0);
  FUN_1409c5062(&local_b0,&local_78);
  FUN_14082207e(&local_c0,&local_b0,0);
  FUN_140822942(plVar6 + 0xc,&local_d0);
  FUN_1408228f2(local_d0 + 8,&local_c0);
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_c8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar2 = (int *)((longlong)local_c8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_c8 + 0x10))(local_c8);
      }
    }
  }
  FUN_1447cd778(local_c0,local_b8);
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  *(char *)(plVar6 + 4) = (char)param_2[1];
  plVar6[3] = *param_2;
  *(char *)(plVar6 + 5) = (char)param_2[2];
  FUN_1401f3db8(plVar6 + 6,param_2 + 3);
  if (plVar6[9] == param_2[6]) {
    iVar5 = (int)param_2[7];
    if ((int)plVar6[10] == iVar5) goto LAB_140fcc1f9;
  }
  else {
    iVar5 = (int)param_2[7];
  }
  plVar6[9] = param_2[6];
  *(int *)(plVar6 + 10) = iVar5;
  plVar6[0xb] = 0;
LAB_140fcc1f9:
  local_b0 = plVar6 + 2;
  local_a8 = plVar6;
  if (plVar6 == (longlong *)0x0) {
    FUN_1408229d0(param_1,&local_b0);
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    FUN_1408229d0(param_1);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fcc406 FUN_140fcc406 body=297 status=ok
// SIG undefined FUN_140fcc406(void)

undefined8 FUN_140fcc406(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140fcc528;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140fcc528;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_140fcc528:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140fcc4d3;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_140fcc4d3;
    }
  }
  uVar6 = 0;
LAB_140fcc4d3:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fcc530 FUN_140fcc530 body=91 status=ok
// SIG undefined FUN_140fcc530(void)

void FUN_140fcc530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_140fcc58c(param_3);
  if (cVar1 != '\0') {
    FUN_140fcd36a(param_1,param_2,param_3);
    return;
  }
  cVar1 = FUN_140fcc600(param_3);
  if (cVar1 != '\0') {
    FUN_140fcc71e(param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 140fcc58c FUN_140fcc58c body=58 status=ok
// SIG undefined FUN_140fcc58c(void)

byte FUN_140fcc58c(byte param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = FUN_140a489cc();
  if (lVar3 != 0) {
    lVar1 = FUN_140fcc63a(lVar3);
    lVar2 = FUN_140fcc5c6();
    param_1 = lVar1 == lVar2;
  }
  return lVar3 != 0 & param_1;
}



// FUNCTION 140fcc5c6 FUN_140fcc5c6 body=58 status=ok
// SIG undefined FUN_140fcc5c6(void)

void FUN_140fcc5c6(void)

{
  if (DAT_14cb79128 == 0) {
    if (DAT_14cb758b8 == 0) {
      DAT_14cb79128 = 0;
    }
    else {
      DAT_14cb79128 = FUN_144837462(DAT_14cb758b8,&DAT_14cb790f8);
    }
  }
  return;
}



// FUNCTION 140fcc600 FUN_140fcc600 body=58 status=ok
// SIG undefined FUN_140fcc600(void)

byte FUN_140fcc600(byte param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = FUN_140a489cc();
  if (lVar3 != 0) {
    lVar1 = FUN_140fcc63a(lVar3);
    lVar2 = FUN_1401e6c61();
    param_1 = lVar1 == lVar2;
  }
  return lVar3 != 0 & param_1;
}



// FUNCTION 140fcc63a FUN_140fcc63a body=136 status=ok
// SIG undefined FUN_140fcc63a(void)

void FUN_140fcc63a(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 == 0) {
    uVar3 = FUN_140b1c3dc();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x20) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x18));
    }
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    return;
  }
  return;
}



// FUNCTION 140fcc6c2 FUN_140fcc6c2 body=91 status=ok
// SIG undefined FUN_140fcc6c2(void)

void FUN_140fcc6c2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_140fcc58c(param_3);
  if (cVar1 != '\0') {
    FUN_140fcd36a(param_1,param_2,param_3);
    return;
  }
  cVar1 = FUN_140fcc600(param_3);
  if (cVar1 != '\0') {
    FUN_140fcc71e(param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 140fcc71e FUN_140fcc71e body=3147 status=ok
// SIG undefined FUN_140fcc71e(void)

void FUN_140fcc71e(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  longlong lVar16;
  undefined2 *puVar17;
  longlong lVar18;
  longlong lVar19;
  byte bVar20;
  ulonglong *puVar21;
  ushort uVar22;
  ushort uVar23;
  ulonglong uVar24;
  longlong lVar25;
  int *piVar26;
  longlong lVar27;
  ulonglong *puVar28;
  undefined1 auStack_158 [36];
  undefined4 local_134;
  longlong local_130;
  int *local_128;
  longlong local_120;
  int local_114;
  longlong local_110;
  longlong local_108;
  PSRWLOCK local_100;
  longlong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  ulonglong *local_d0;
  longlong local_c8;
  int *local_c0;
  longlong local_b8;
  int *local_b0;
  longlong local_a8;
  undefined1 local_a0 [8];
  ulonglong local_98;
  uint local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined6 uStack_78;
  undefined2 uStack_72;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_120 = param_2;
  FUN_1449027d0(param_1,&local_88);
  lVar12 = *(longlong *)(local_88 + 0x2c0);
  local_100 = (PSRWLOCK)(lVar12 + 0x168);
  AcquireSRWLockExclusive(local_100);
  plVar3 = uStack_80;
  *(int *)(lVar12 + 0x160) = *(int *)(lVar12 + 0x160) + 1;
  if (uStack_80 != (longlong *)0x0) {
    LOCK();
    plVar4 = uStack_80 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*uStack_80)(uStack_80);
      LOCK();
      piVar26 = (int *)((longlong)plVar3 + 0xc);
      *piVar26 = *piVar26 + -1;
      UNLOCK();
      if (*piVar26 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  uVar11 = FUN_140a489cc(param_3);
  iVar8 = FUN_140a4890a(local_120,uVar11);
  if (iVar8 == *(int *)(lVar12 + 0x134)) {
    if (*(int *)(lVar12 + 0x138) == 0) {
      iVar9 = 1;
      goto LAB_140fcc7de;
    }
  }
  else {
    iVar9 = *(int *)(lVar12 + 0x138) + 1;
LAB_140fcc7de:
    *(int *)(lVar12 + 0x134) = iVar8;
    *(int *)(lVar12 + 0x138) = iVar9;
  }
  FUN_1410a6380(param_3);
  uVar10 = *(uint *)(lVar12 + 0x38);
  local_130 = param_3;
  if (uVar10 == local_90) {
    if (1 < (int)uVar10) {
      lVar16 = 0;
      while( true ) {
        uVar22 = *(ushort *)(*(longlong *)(lVar12 + 0x30) + lVar16);
        uVar14 = (ulonglong)uVar22;
        uVar23 = *(ushort *)(local_98 + lVar16);
        if (uVar22 != uVar23) break;
        if (uVar22 == 0) goto LAB_140fcd1a9;
LAB_140fcc84a:
        lVar16 = lVar16 + 2;
      }
      if ((uVar23 | uVar22) < 0x80) {
        uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
        uVar13 = (ulonglong)uVar23;
        uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
        if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar13]) goto LAB_140fcc84a;
      }
      if (uVar22 != uVar23) goto LAB_140fcc87a;
    }
  }
  else if (local_90 + uVar10 != 1) {
LAB_140fcc87a:
    lVar16 = *(longlong *)(lVar12 + 0x50);
    *(int *)(lVar12 + 0x60) = *(int *)(lVar12 + 0x60) + 2;
    if ((longlong)*(int *)(lVar12 + 0x58) == 0) {
      uVar10 = 0;
    }
    else {
      local_f8 = (longlong)*(int *)(lVar12 + 0x58) * 0x1e8 + lVar16;
      uVar14 = 0;
      local_b8 = lVar12;
      do {
        uVar10 = *(uint *)(lVar16 + 0x20);
        local_110 = lVar16;
        local_f0 = uVar14;
        if (uVar10 == local_90) {
          uVar14 = (ulonglong)local_90;
          if (1 < (int)uVar10) {
            lVar27 = 0;
            while( true ) {
              uVar22 = *(ushort *)(*(longlong *)(lVar16 + 0x18) + lVar27);
              uVar13 = (ulonglong)uVar22;
              uVar23 = *(ushort *)(local_98 + lVar27);
              uVar14 = local_98;
              if (uVar22 != uVar23) break;
              if (uVar22 == 0) goto LAB_140fcc9df;
LAB_140fcc8f9:
              lVar27 = lVar27 + 2;
            }
            if ((uVar23 | uVar22) < 0x80) {
              uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
              uVar24 = (ulonglong)uVar23;
              uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
              if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar24]) goto LAB_140fcc8f9;
            }
            if (uVar22 != uVar23) goto LAB_140fcc930;
          }
LAB_140fcc9df:
          local_134 = (undefined4)CONCAT71((int7)(uVar14 >> 8),1);
          if ((longlong)*(int *)(local_130 + 0x150) == 0) goto LAB_140fcca77;
          lVar16 = *(longlong *)(local_130 + 0x148);
          lVar27 = (longlong)*(int *)(local_130 + 0x150) * 0x88;
          iVar8 = 0;
          do {
            iVar9 = FUN_1413d64c6(lVar16);
            if (iVar8 < iVar9) {
              iVar8 = iVar9;
            }
            lVar16 = lVar16 + 0x88;
            lVar27 = lVar27 + -0x88;
          } while (lVar27 != 0);
        }
        else {
          uVar14 = (ulonglong)(local_90 + uVar10);
          if (local_90 + uVar10 == 1) goto LAB_140fcc9df;
LAB_140fcc930:
          puVar17 = &DAT_149dfb77a;
          if (uVar10 != 0) {
            puVar17 = *(undefined2 **)(lVar16 + 0x18);
          }
          FUN_1446f470e(local_a0,puVar17,1);
          FUN_1446dcdd4(&local_88,local_a0);
          lVar16 = FUN_140b3986e(&local_88);
          if (CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70)) != 0) {
            FUN_1400020a8();
          }
          if ((lVar16 != 0) && (iVar8 = *(int *)(local_120 + 0xb8), (longlong)iVar8 != 0)) {
            lVar27 = *(longlong *)(local_120 + 0xb0);
            lVar19 = 0;
LAB_140fcc9b0:
            lVar25 = *(longlong *)(lVar27 + lVar19);
            if ((lVar25 == 0) || (lVar18 = FUN_1401cd362(lVar25), lVar18 != lVar16))
            goto LAB_140fcc9c6;
            if ((longlong)*(int *)(lVar25 + 0x150) != 0) {
              lVar16 = *(longlong *)(lVar25 + 0x148);
              lVar27 = (longlong)*(int *)(lVar25 + 0x150) * 0x88;
              iVar8 = 0;
              do {
                iVar9 = FUN_1413d64c6(lVar16);
                if (iVar8 < iVar9) {
                  iVar8 = iVar9;
                }
                lVar16 = lVar16 + 0x88;
                lVar27 = lVar27 + -0x88;
              } while (lVar27 != 0);
              local_134 = 0;
              goto LAB_140fcca79;
            }
          }
LAB_140fcca6f:
          local_134 = 0;
LAB_140fcca77:
          iVar8 = 0;
        }
LAB_140fcca79:
        *(int *)(lVar12 + 0x140) = iVar8;
        if ((longlong)*(int *)(local_110 + 0xf8) == 0) {
          iVar8 = 0;
        }
        else {
          piVar26 = *(int **)(local_110 + 0xf0);
          local_b0 = piVar26 + (longlong)*(int *)(local_110 + 0xf8) * 10;
          iVar8 = 0;
          do {
            lVar12 = local_130;
            iVar9 = local_90 - 1;
            if (local_90 == 0) {
              iVar9 = 0;
            }
            local_114 = iVar8;
            FUN_1446f82e2(&local_88,iVar9,local_98,1);
            bVar20 = 0;
            local_128 = piVar26;
            if (*piVar26 == (int)local_88) {
              bVar20 = 0;
              iVar8 = 0;
              if (piVar26[1] == (int)((ulonglong)local_88 >> 0x20)) {
                if ((longlong)*(int *)(lVar12 + 0x140) != 0) {
                  lVar16 = 0;
                  iVar8 = 0;
                  do {
                    iVar8 = iVar8 + *(int *)(*(longlong *)(lVar12 + 0x138) + 0x94 + lVar16);
                    lVar16 = lVar16 + 0xa8;
                  } while ((longlong)*(int *)(lVar12 + 0x140) * 0xa8 - lVar16 != 0);
                }
                piVar26[6] = iVar8;
                piVar26[7] = 0;
                iVar8 = piVar26[4];
                bVar20 = 1;
                if ((longlong)iVar8 != 0) {
                  lVar16 = *(longlong *)(piVar26 + 2);
                  lVar19 = 0x48;
                  lVar27 = 0;
                  lVar25 = 0;
                  do {
                    if (lVar25 < *(int *)(lVar12 + 0x150)) {
                      lVar18 = *(longlong *)(lVar12 + 0x148);
                      *(undefined8 *)(lVar16 + lVar27) = *(undefined8 *)(lVar18 + lVar19);
                      cVar7 = *(char *)(lVar18 + 0x38 + lVar19);
                      iVar9 = *(int *)(lVar16 + 0x20 + lVar27);
                      if (cVar7 == *(char *)(lVar16 + 0x1c + lVar27)) {
                        if (iVar9 == 0) {
                          iVar9 = 0;
                          goto LAB_140fccba9;
                        }
                      }
                      else {
LAB_140fccba9:
                        *(char *)(lVar16 + 0x1c + lVar27) = cVar7;
                        *(int *)(lVar16 + 0x20 + lVar27) = iVar9 + 1;
                      }
                      lVar18 = *(longlong *)(lVar18 + 8 + lVar19);
                      if ((lVar18 != 0) && (*(longlong *)(lVar18 + 0x18) != 0)) {
                        FUN_140fcde40(lVar18 + 0x18,&local_88);
                        plVar3 = uStack_80;
                        lVar18 = local_88;
                        if (uStack_80 != (longlong *)0x0) {
                          LOCK();
                          plVar4 = uStack_80 + 1;
                          *(int *)plVar4 = (int)*plVar4 + -1;
                          UNLOCK();
                          if ((int)*plVar4 == 0) {
                            (**(code **)*uStack_80)(uStack_80);
                            LOCK();
                            piVar26 = (int *)((longlong)plVar3 + 0xc);
                            *piVar26 = *piVar26 + -1;
                            UNLOCK();
                            if (*piVar26 == 0) {
                              (**(code **)(*plVar3 + 0x10))(plVar3);
                            }
                          }
                        }
                        lVar12 = local_130;
                        if (lVar18 != 0) {
                          local_88 = *(longlong *)(local_130 + 0x20);
                          iVar9 = FUN_140c57d2c(lVar18,lVar18 + 0x18,&local_88);
                          *(int *)(lVar16 + 0x18 + lVar27) = iVar9;
                          local_128[7] = local_128[7] + iVar9;
                        }
                      }
                    }
                    lVar25 = lVar25 + 1;
                    lVar19 = lVar19 + 0x88;
                    lVar27 = lVar27 + 0x28;
                  } while ((longlong)iVar8 * 0x28 != lVar27);
                }
              }
            }
            piVar26 = local_128;
            FUN_1446dcdd4(&local_88,local_128);
            lVar12 = FUN_140b3986e(&local_88);
            if (CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70)) != 0) {
              FUN_1400020a8();
            }
            if (lVar12 != 0) {
              iVar8 = *(int *)(local_120 + 0xb8);
              if ((longlong)iVar8 == 0) {
                lVar16 = 0;
              }
              else {
                lVar27 = *(longlong *)(local_120 + 0xb0);
                lVar19 = 0;
                do {
                  lVar16 = *(longlong *)(lVar27 + lVar19);
                  if ((lVar16 != 0) && (lVar25 = FUN_1401cd362(lVar16), lVar25 == lVar12)) {
                    iVar8 = local_128[9];
                    piVar26 = local_128;
                    if (*(char *)(lVar16 + 0x168) == (char)local_128[8]) {
                      if (iVar8 != 0) goto LAB_140fccd28;
                      iVar8 = 0;
                    }
                    *(char *)(local_128 + 8) = *(char *)(lVar16 + 0x168);
                    local_128[9] = iVar8 + 1;
                    goto LAB_140fccd28;
                  }
                  lVar19 = lVar19 + 8;
                } while ((longlong)iVar8 * 8 != lVar19);
                lVar16 = 0;
                piVar26 = local_128;
              }
LAB_140fccd28:
              if (((bVar20 | (byte)local_134) == 1) && ((longlong)*(int *)(local_130 + 0x140) != 0))
              {
                lVar12 = *(longlong *)(local_130 + 0x138);
                local_a8 = (longlong)*(int *)(local_130 + 0x140) * 0xa8 + lVar12;
                local_c0 = piVar26 + 2;
                do {
                  if ((longlong)piVar26[4] != 0) {
                    lVar19 = *(longlong *)(local_128 + 2);
                    lVar27 = lVar19 + (longlong)piVar26[4] * 0x28;
                    do {
                      if ((longlong)*(int *)(lVar19 + 0x10) != 0) {
                        puVar21 = *(ulonglong **)(lVar19 + 8);
                        puVar28 = puVar21 + (longlong)*(int *)(lVar19 + 0x10) * 0x19;
                        do {
                          if (*(ulonglong **)(lVar12 + 0x50) == (ulonglong *)0x0) {
                            uVar14 = 0;
                            uVar13 = 0;
                          }
                          else {
                            uVar14 = **(ulonglong **)(lVar12 + 0x50);
                            uVar13 = uVar14 & 0xffffffff;
                            uVar14 = uVar14 & 0xffffffff00000000;
                          }
                          if ((*puVar21 == *(ulonglong *)(lVar12 + 0x48)) ||
                             (((uVar13 | uVar14) != 0 && (*puVar21 == (uVar13 | uVar14))))) {
                            *puVar21 = *(ulonglong *)(lVar12 + 0x48);
                            if (*(ulonglong **)(lVar12 + 0x50) == (ulonglong *)0x0) {
                              uVar13 = 0;
                              uVar14 = 0;
                            }
                            else {
                              uVar14 = **(ulonglong **)(lVar12 + 0x50);
                              uVar13 = uVar14 & 0xffffffff00000000;
                            }
                            puVar21[1] = uVar14 & 0xffffffff | uVar13;
                            uVar6 = FUN_1410862f0(lVar12);
                            *(undefined1 *)(puVar21 + 0x12) = uVar6;
                            *(undefined1 *)((longlong)puVar21 + 0x91) =
                                 *(undefined1 *)(lVar12 + 0x91);
                            iVar8 = *(int *)((longlong)puVar21 + 0x8c);
                            if (*(char *)(lVar12 + 0x90) == (char)puVar21[0x11]) {
                              if (iVar8 == 0) {
                                iVar8 = 0;
                                goto LAB_140fcce57;
                              }
                            }
                            else {
LAB_140fcce57:
                              *(char *)(puVar21 + 0x11) = *(char *)(lVar12 + 0x90);
                              *(int *)((longlong)puVar21 + 0x8c) = iVar8 + 1;
                            }
                            *(undefined4 *)((longlong)puVar21 + 0x94) =
                                 *(undefined4 *)(lVar12 + 0x9c);
                            lVar25 = *(longlong *)(lVar12 + 0x50);
                            iVar8 = 0;
                            uVar15 = 0;
                            if (lVar25 != 0) {
                              if (*(char *)(lVar25 + 8) == '\x01') {
                                uVar15 = *(undefined4 *)(lVar25 + 0xc);
                              }
                              else {
                                uVar15 = 0x7fffffff;
                              }
                            }
                            *(undefined4 *)(puVar21 + 0x13) = uVar15;
                            *(undefined4 *)((longlong)puVar21 + 0x9c) =
                                 *(undefined4 *)(lVar12 + 0x94);
                            lVar25 = *(longlong *)(lVar12 + 0x50);
                            if (lVar25 != 0) {
                              if (*(char *)(lVar25 + 8) == '\x01') {
                                iVar8 = *(int *)(lVar25 + 0xc);
                              }
                              else {
                                iVar8 = 0x7fffffff;
                              }
                            }
                            if (*(int *)(lVar12 + 0x98) < iVar8) {
                              iVar8 = *(int *)(lVar12 + 0x98);
                            }
                            *(int *)(puVar21 + 0x14) = iVar8;
                            iVar8 = *(int *)(lVar12 + 0x98);
                            *(int *)((longlong)puVar21 + 0xa4) = iVar8;
                            lVar25 = *(longlong *)(lVar12 + 0x50);
                            if (lVar25 == 0) {
                              iVar9 = 0;
                            }
                            else if (*(char *)(lVar25 + 8) == '\x01') {
                              iVar9 = *(int *)(lVar25 + 0xc);
                            }
                            else {
                              iVar9 = 0x7fffffff;
                            }
                            if (iVar8 < iVar9) {
                              iVar9 = iVar8;
                            }
                            *(int *)(puVar21 + 0x15) = iVar9 + *(int *)(lVar12 + 0x94);
                            if ((((lVar16 != 0) && ((int)puVar21[0x18] == 0)) &&
                                (lVar25 = *(longlong *)(lVar12 + 0x50), lVar25 != 0)) &&
                               (lVar18 = *(longlong *)(lVar25 + 0x30), lVar18 != 0)) {
                              uVar11 = FUN_14185bbfe();
                              cVar7 = FUN_1448093f4(lVar18,uVar11);
                              if (cVar7 != '\0') {
                                local_108 = *(longlong *)(lVar25 + 0x30);
                                plVar3 = *(longlong **)(lVar25 + 0x38);
                                if (plVar3 != (longlong *)0x0) {
                                  LOCK();
                                  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                                  UNLOCK();
                                  LOCK();
                                  plVar4 = plVar3 + 1;
                                  *(int *)plVar4 = (int)*plVar4 + -1;
                                  UNLOCK();
                                  if ((int)*plVar4 == 0) {
                                    (**(code **)*plVar3)();
                                    LOCK();
                                    piVar26 = (int *)((longlong)plVar3 + 0xc);
                                    *piVar26 = *piVar26 + -1;
                                    UNLOCK();
                                    if (*piVar26 == 0) {
                                      (**(code **)(*plVar3 + 0x10))();
                                    }
                                  }
                                }
                                if ((local_108 != 0) && ((longlong)*(int *)(local_108 + 0x10) != 0))
                                {
                                  local_d0 = puVar21 + 0x17;
                                  local_d8 = *(longlong *)(local_108 + 8);
                                  local_e0 = (longlong)puVar21 + 0x24;
                                  local_c8 = (longlong)*(int *)(local_108 + 0x10) << 3;
                                  lVar18 = 0;
                                  lVar25 = local_108;
                                  do {
                                    uStack_80 = (longlong *)0x0;
                                    uStack_78 = 0;
                                    uStack_72 = 0;
                                    uStack_70 = 0;
                                    uStack_6c = 0;
                                    local_88 = *(longlong *)(local_d8 + lVar18);
                                    local_e8 = lVar18;
                                    cVar7 = FUN_14429b6f4(local_c0,local_e0,&local_88);
                                    if (cVar7 != '\0') {
                                      uStack_70 = FUN_14655b214(lVar25,lVar16);
                                      puVar5 = local_d0;
                                      iVar8 = (int)puVar21[0x18];
                                      *(uint *)(puVar21 + 0x18) = iVar8 + 1U;
                                      if (*(uint *)((longlong)puVar21 + 0xc4) < iVar8 + 1U) {
                                        FUN_14664a2cc(local_d0,iVar8);
                                      }
                                      uVar14 = *puVar5;
                                      puVar2 = (undefined8 *)
                                               (uVar14 + 0x10 + (longlong)iVar8 * 0x20);
                                      *puVar2 = CONCAT26(uStack_72,uStack_78);
                                      puVar2[1] = CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70));
                                      puVar1 = (undefined4 *)(uVar14 + (longlong)iVar8 * 0x20);
                                      *puVar1 = (undefined4)local_88;
                                      puVar1[1] = local_88._4_4_;
                                      puVar1[2] = (undefined4)uStack_80;
                                      puVar1[3] = uStack_80._4_4_;
                                      lVar25 = local_108;
                                    }
                                    lVar18 = local_e8 + 8;
                                  } while (local_c8 != lVar18);
                                }
                              }
                            }
                          }
                          puVar21 = puVar21 + 0x19;
                        } while (puVar21 != puVar28);
                      }
                      lVar19 = lVar19 + 0x28;
                    } while (lVar19 != lVar27);
                  }
                  lVar12 = lVar12 + 0xa8;
                  piVar26 = local_128;
                } while (lVar12 != local_a8);
              }
            }
            iVar8 = local_114 + piVar26[6];
            piVar26 = piVar26 + 10;
            lVar12 = local_b8;
          } while (piVar26 != local_b0);
        }
        *(int *)(local_110 + 0x100) = iVar8;
        uVar10 = (int)local_f0 + iVar8;
        uVar14 = (ulonglong)uVar10;
        lVar16 = local_110 + 0x1e8;
      } while (lVar16 != local_f8);
    }
    *(uint *)(lVar12 + 0x13c) = uVar10;
    goto LAB_140fcd317;
  }
LAB_140fcd1a9:
  lVar16 = *(longlong *)(lVar12 + 0x50);
  *(int *)(lVar12 + 0x60) = *(int *)(lVar12 + 0x60) + 2;
  if ((longlong)*(int *)(lVar12 + 0x58) != 0) {
    lVar27 = (longlong)*(int *)(lVar12 + 0x58) * 0x1e8 + lVar16;
    do {
      if ((longlong)*(int *)(local_130 + 0x140) != 0) {
        lVar19 = *(longlong *)(local_130 + 0x138);
        lVar25 = (longlong)*(int *)(local_130 + 0x140) * 0xa8;
        do {
          if ((*(int *)(lVar16 + 0x28) == *(int *)(lVar19 + 0x48)) &&
             (*(int *)(lVar16 + 0x2c) == *(int *)(lVar19 + 0x4c))) {
LAB_140fcd22e:
            *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)(lVar19 + 0x48);
            if (*(ulonglong **)(lVar19 + 0x50) == (ulonglong *)0x0) {
              uVar13 = 0;
              uVar14 = 0;
            }
            else {
              uVar14 = **(ulonglong **)(lVar19 + 0x50);
              uVar13 = uVar14 & 0xffffffff00000000;
            }
            *(ulonglong *)(lVar16 + 0x30) = uVar14 & 0xffffffff | uVar13;
            uVar6 = FUN_1410862f0(lVar19);
            *(undefined1 *)(lVar16 + 0xb8) = uVar6;
            if ((*(char *)(lVar19 + 0x90) != *(char *)(lVar16 + 0xb0)) ||
               (*(int *)(lVar16 + 0xb4) == 0)) {
              *(char *)(lVar16 + 0xb0) = *(char *)(lVar19 + 0x90);
              *(int *)(lVar16 + 0xb4) = *(int *)(lVar16 + 0xb4) + 1;
            }
            cVar7 = FUN_1410862f0(lVar19);
            if (cVar7 != '\0') {
              plVar3 = *(longlong **)(lVar16 + 0x38);
              plVar4 = *(longlong **)(lVar12 + 0x148);
              if (plVar4 != plVar3) {
                *(longlong **)(lVar12 + 0x148) = plVar3;
                if (plVar3 != (longlong *)0x0) {
                  (**(code **)(*plVar3 + 8))();
                }
                if (plVar4 != (longlong *)0x0) {
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                }
              }
              *(undefined4 *)(lVar12 + 0x150) = *(undefined4 *)(lVar16 + 0x40);
            }
          }
          else {
            if (*(undefined8 **)(lVar19 + 0x50) == (undefined8 *)0x0) {
              iVar8 = 0;
              uVar11 = 0;
            }
            else {
              uVar11 = **(undefined8 **)(lVar19 + 0x50);
              iVar8 = (int)((ulonglong)uVar11 >> 0x20);
            }
            if ((*(int *)(lVar16 + 0x28) == (int)uVar11) && (*(int *)(lVar16 + 0x2c) == iVar8))
            goto LAB_140fcd22e;
          }
          lVar19 = lVar19 + 0xa8;
          lVar25 = lVar25 + -0xa8;
        } while (lVar25 != 0);
      }
      lVar16 = lVar16 + 0x1e8;
    } while (lVar16 != lVar27);
  }
LAB_140fcd317:
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive(local_100);
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140fcc9c6:
  lVar19 = lVar19 + 8;
  if ((longlong)iVar8 * 8 == lVar19) goto LAB_140fcca6f;
  goto LAB_140fcc9b0;
}



// FUNCTION 140fcd36a FUN_140fcd36a body=2772 status=ok
// SIG undefined FUN_140fcd36a(void)

void FUN_140fcd36a(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  longlong lVar10;
  char cVar11;
  char cVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong *puVar21;
  PSRWLOCK pRVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong *plVar27;
  longlong lVar28;
  ulonglong *puVar29;
  longlong lVar30;
  bool bVar31;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  ulonglong *local_98;
  PSRWLOCK local_90;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  ulonglong local_68;
  int local_60;
  undefined4 uStack_5c;
  longlong local_58;
  int local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = param_3;
  FUN_1449027d0(param_1,&local_58);
  lVar20 = *(longlong *)(local_58 + 0x2d0);
  pRVar22 = (PSRWLOCK)(lVar20 + 0x230);
  AcquireSRWLockExclusive(pRVar22);
  *(int *)(lVar20 + 0x228) = *(int *)(lVar20 + 0x228) + 1;
  plVar27 = (longlong *)CONCAT44(uStack_4c,local_50);
  if (plVar27 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar27 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar27)(plVar27);
      LOCK();
      piVar3 = (int *)((longlong)plVar27 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
      }
    }
  }
  FUN_1410a6380(local_b8,&local_58);
  local_b0 = lVar20;
  FUN_1400021e4(lVar20 + 0xd0,&local_68);
  lVar28 = local_b0;
  lVar20 = local_b8;
  if (local_60 == local_50) {
    if (local_60 < 2) {
      bVar31 = true;
    }
    else {
      lVar23 = 0;
      while( true ) {
        uVar4 = *(ushort *)(local_68 + lVar23);
        uVar13 = (uint)uVar4;
        uVar5 = *(ushort *)(local_58 + lVar23);
        uVar25 = (uint)uVar5;
        if (uVar4 != uVar5) {
          if ((uVar5 | uVar4) < 0x80) {
            uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar4];
            uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar5];
            if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_140fcd519;
          }
          iVar15 = uVar13 - uVar25;
          goto LAB_140fcd8aa;
        }
        if (uVar4 == 0) break;
LAB_140fcd519:
        lVar23 = lVar23 + 2;
      }
      iVar15 = 0;
LAB_140fcd8aa:
      bVar31 = iVar15 == 0;
    }
  }
  else {
    bVar31 = local_50 + local_60 == 1;
  }
  local_80 = param_2;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (!bVar31) {
    FUN_1400021e4(lVar28 + 0xd8,&local_68);
    lVar20 = local_b8;
    if (local_60 == local_50) {
      if (local_60 < 2) {
        bVar31 = true;
      }
      else {
        lVar23 = 0;
        while( true ) {
          uVar4 = *(ushort *)(local_68 + lVar23);
          uVar13 = (uint)uVar4;
          uVar5 = *(ushort *)(local_58 + lVar23);
          uVar25 = (uint)uVar5;
          if (uVar4 != uVar5) {
            if ((uVar5 | uVar4) < 0x80) {
              uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar4];
              uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar5];
              if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_140fcd4ab;
            }
            iVar15 = uVar13 - uVar25;
            goto LAB_140fcd8b6;
          }
          if (uVar4 == 0) break;
LAB_140fcd4ab:
          lVar23 = lVar23 + 2;
        }
        iVar15 = 0;
LAB_140fcd8b6:
        bVar31 = iVar15 == 0;
      }
    }
    else {
      bVar31 = local_50 + local_60 == 1;
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (!bVar31) goto LAB_140fcddd1;
    local_88 = lVar28 + 0x1d8;
    FUN_14129c8ee(*(undefined8 *)(lVar28 + 0x1d8),*(undefined4 *)(lVar28 + 0x1e0));
    *(undefined4 *)(lVar28 + 0x1e0) = 0;
    if (*(int *)(lVar28 + 0x1e4) != 4) {
      FUN_1457dde40();
    }
    *(int *)(lVar28 + 0x1e8) = *(int *)(lVar28 + 0x1e8) + 1;
    *(int *)(lVar28 + 0x1d0) = *(int *)(lVar28 + 0x1d0) + 1;
    if ((longlong)*(int *)(lVar28 + 0x1c8) == 0) {
      local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
      local_a0 = 0;
      local_90 = pRVar22;
    }
    else {
      lVar23 = *(longlong *)(lVar28 + 0x1c0);
      local_80 = (longlong)*(int *)(lVar28 + 0x1c8) * 0xa8 + lVar23;
      local_a0 = 0;
      local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
      local_90 = pRVar22;
      do {
        *(int *)(lVar23 + 0x88) = *(int *)(lVar23 + 0x88) + 1;
        if ((longlong)*(int *)(lVar23 + 0x80) != 0) {
          puVar29 = *(ulonglong **)(lVar23 + 0x78);
          local_98 = puVar29 + (longlong)*(int *)(lVar23 + 0x80) * 0xc;
          do {
            if ((longlong)*(int *)(lVar20 + 0x140) != 0) {
              lVar28 = *(longlong *)(lVar20 + 0x138);
              lVar30 = (longlong)*(int *)(lVar20 + 0x140) * 0xa8;
              do {
                if (*(ulonglong **)(lVar28 + 0x50) == (ulonglong *)0x0) {
                  uVar19 = 0;
                  uVar16 = 0;
                }
                else {
                  uVar19 = **(ulonglong **)(lVar28 + 0x50);
                  uVar16 = uVar19 & 0xffffffff;
                  uVar19 = uVar19 & 0xffffffff00000000;
                }
                if ((*puVar29 == *(ulonglong *)(lVar28 + 0x48)) ||
                   (((uVar16 | uVar19) != 0 && (*puVar29 == (uVar16 | uVar19))))) {
                  cVar12 = FUN_1410862f0(lVar28);
                  cVar11 = *(char *)(lVar28 + 0x90);
                  if ((cVar11 != *(char *)((longlong)puVar29 + 0xc)) || ((int)puVar29[2] == 0)) {
                    *(char *)((longlong)puVar29 + 0xc) = cVar11;
                    *(int *)(puVar29 + 2) = (int)puVar29[2] + 1;
                  }
                  if ((int)puVar29[3] == 0 || *(char *)((longlong)puVar29 + 0x14) != cVar12) {
                    *(char *)((longlong)puVar29 + 0x14) = cVar12;
                    *(int *)(puVar29 + 3) = (int)puVar29[3] + 1;
                  }
                  iVar15 = -1;
                  if (cVar12 != '\0') {
                    iVar15 = *(int *)(lVar28 + 0x9c);
                  }
                  if ((iVar15 != *(int *)((longlong)puVar29 + 0x1c)) || ((int)puVar29[4] == 0)) {
                    *(int *)((longlong)puVar29 + 0x1c) = iVar15;
                    *(int *)(puVar29 + 4) = (int)puVar29[4] + 1;
                  }
                  if ((cVar11 != '\0') &&
                     (local_a0 = (ulonglong)((int)local_a0 + 1), cVar12 != '\0')) {
                    FUN_1457ddd42(local_88,puVar29);
                    local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 + 1);
                  }
                  lVar10 = *(longlong *)(lVar28 + 0x70);
                  plVar27 = *(longlong **)(lVar28 + 0x78);
                  if (plVar27 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar27 + 1) = (int)plVar27[1] + 1;
                    UNLOCK();
                  }
                  if ((lVar10 != 0) && (lVar10 = *(longlong *)(lVar10 + 0x28), lVar10 != 0)) {
                    FUN_140fcde40(lVar10 + 0x20,&local_68);
                    uVar19 = local_68;
                    plVar9 = (longlong *)CONCAT44(uStack_5c,local_60);
                    if (plVar9 != (longlong *)0x0) {
                      LOCK();
                      plVar2 = plVar9 + 1;
                      *(int *)plVar2 = (int)*plVar2 + -1;
                      UNLOCK();
                      if ((int)*plVar2 == 0) {
                        (**(code **)*plVar9)();
                        LOCK();
                        piVar3 = (int *)((longlong)plVar9 + 0xc);
                        *piVar3 = *piVar3 + -1;
                        UNLOCK();
                        if (*piVar3 == 0) {
                          (**(code **)(*plVar9 + 0x10))();
                        }
                      }
                    }
                    lVar20 = local_b8;
                    if (uVar19 != 0) {
                      local_68 = *(ulonglong *)(local_b8 + 0x20);
                      iVar15 = FUN_140c57d2c(uVar19,uVar19 + 0x18,&local_68);
                      if (*(int *)((longlong)puVar29 + 0x5c) == 0 || iVar15 != (int)puVar29[0xb]) {
                        *(int *)(puVar29 + 0xb) = iVar15;
                        *(int *)((longlong)puVar29 + 0x5c) = *(int *)((longlong)puVar29 + 0x5c) + 1;
                      }
                    }
                  }
                  if (plVar27 != (longlong *)0x0) {
                    LOCK();
                    plVar9 = plVar27 + 1;
                    *(int *)plVar9 = (int)*plVar9 + -1;
                    UNLOCK();
                    if ((int)*plVar9 == 0) {
                      (**(code **)*plVar27)();
                      LOCK();
                      piVar3 = (int *)((longlong)plVar27 + 0xc);
                      *piVar3 = *piVar3 + -1;
                      UNLOCK();
                      lVar20 = local_b8;
                      if (*piVar3 == 0) {
                        (**(code **)(*plVar27 + 0x10))();
                        lVar20 = local_b8;
                      }
                    }
                  }
                }
                lVar28 = lVar28 + 0xa8;
                lVar30 = lVar30 + -0xa8;
              } while (lVar30 != 0);
            }
            puVar29 = puVar29 + 0xc;
          } while (puVar29 != local_98);
        }
        lVar23 = lVar23 + 0xa8;
      } while (lVar23 != local_80);
    }
    if ((int)local_a0 == *(int *)(local_b0 + 0x210)) {
      if (*(int *)(local_b0 + 0x214) == 0) {
        iVar15 = 1;
        goto LAB_140fcdbf6;
      }
    }
    else {
      iVar15 = *(int *)(local_b0 + 0x214) + 1;
LAB_140fcdbf6:
      *(int *)(local_b0 + 0x210) = (int)local_a0;
      *(int *)(local_b0 + 0x214) = iVar15;
    }
    pRVar22 = local_90;
    if ((int)local_a8 == *(int *)(local_b0 + 0x200)) {
      if (*(int *)(local_b0 + 0x204) != 0) goto LAB_140fcddd1;
      iVar15 = 1;
    }
    else {
      iVar15 = *(int *)(local_b0 + 0x204) + 1;
    }
    *(int *)(local_b0 + 0x200) = (int)local_a8;
    *(int *)(local_b0 + 0x204) = iVar15;
    goto LAB_140fcddd1;
  }
  *(int *)(lVar28 + 0x1d0) = *(int *)(lVar28 + 0x1d0) + 1;
  local_68 = 0;
  iVar15 = *(int *)(lVar20 + 0x150);
  uVar17 = *(undefined8 *)(lVar20 + 0x148);
  local_a8 = param_1;
  local_60 = iVar15;
  if (iVar15 == 0) {
    uStack_5c = 0;
    iVar18 = 0;
    lVar20 = local_b0;
    local_90 = pRVar22;
  }
  else {
    local_90 = pRVar22;
    FUN_1457ddccc(&local_68,iVar15,0);
    iVar18 = 0;
    FUN_140fcdfd2(local_68,uVar17,iVar15);
    lVar20 = local_b0;
    if ((longlong)local_60 != 0) {
      local_a0 = (longlong)local_60 * 0x88 + local_68;
      uVar16 = 0;
      uVar19 = local_68;
      do {
        if ((longlong)*(int *)(uVar19 + 0x68) != 0) {
          puVar21 = *(ulonglong **)(uVar19 + 0x60);
          puVar29 = puVar21 + *(int *)(uVar19 + 0x68);
LAB_140fcd5ec:
          if ((longlong)*(int *)(lVar20 + 0x1c8) != 0) {
            uVar7 = *puVar21;
            puVar8 = *(ulonglong **)(uVar7 + 0x50);
            plVar27 = (longlong *)(*(longlong *)(lVar20 + 0x1c0) + 0x90);
            lVar28 = (longlong)*(int *)(lVar20 + 0x1c8) * 0xa8;
            do {
              if (puVar8 == (ulonglong *)0x0) {
                uVar26 = 0;
                uVar24 = 0;
              }
              else {
                uVar24 = *puVar8 & 0xffffffff;
                uVar26 = *puVar8 & 0xffffffff00000000;
              }
              if ((plVar27[-0x12] == *(ulonglong *)(uVar7 + 0x48)) ||
                 (((uVar24 | uVar26) != 0 && (plVar27[-0x12] == (uVar24 | uVar26))))) {
                if (puVar8 == (ulonglong *)0x0) {
                  iVar15 = 0;
                }
                else if ((char)puVar8[1] == '\x01') {
                  iVar15 = *(int *)((longlong)puVar8 + 0xc);
                }
                else {
                  iVar15 = 0x7fffffff;
                }
                iVar18 = *(int *)((longlong)plVar27 + -100);
                if (iVar15 == (int)plVar27[-0xd]) {
                  if (iVar18 == 0) {
                    iVar18 = 0;
                    goto LAB_140fcd746;
                  }
                }
                else {
LAB_140fcd746:
                  *(int *)(plVar27 + -0xd) = iVar15;
                  *(int *)((longlong)plVar27 + -100) = iVar18 + 1;
                }
                iVar15 = *(int *)((longlong)plVar27 + -0x5c);
                if (*(int *)(uVar7 + 0x94) == (int)plVar27[-0xc]) {
                  if (iVar15 == 0) {
                    iVar15 = 0;
                    goto LAB_140fcd759;
                  }
                }
                else {
LAB_140fcd759:
                  *(int *)(plVar27 + -0xc) = *(int *)(uVar7 + 0x94);
                  *(int *)((longlong)plVar27 + -0x5c) = iVar15 + 1;
                }
                iVar15 = *(int *)((longlong)plVar27 + -0x54);
                if (*(char *)(uVar7 + 0x90) == (char)plVar27[-0xb]) {
                  if (iVar15 == 0) {
                    iVar15 = 0;
                    goto LAB_140fcd733;
                  }
                }
                else {
LAB_140fcd733:
                  *(char *)(plVar27 + -0xb) = *(char *)(uVar7 + 0x90);
                  *(int *)((longlong)plVar27 + -0x54) = iVar15 + 1;
                }
                cVar11 = FUN_1410862f0();
                iVar15 = *(int *)((longlong)plVar27 + -0x4c);
                if ((char)plVar27[-10] == cVar11) {
                  if (iVar15 == 0) {
                    iVar15 = 0;
                    goto LAB_140fcd76c;
                  }
                }
                else {
LAB_140fcd76c:
                  *(char *)(plVar27 + -10) = cVar11;
                  *(int *)((longlong)plVar27 + -0x4c) = iVar15 + 1;
                }
                uVar16 = (ulonglong)(uint)((int)uVar16 + (int)plVar27[-0xc]);
                if ((int)plVar27[1] == 0) {
                  lVar28 = *(longlong *)(uVar19 + 0x70);
                  plVar9 = *(longlong **)(uVar19 + 0x78);
                  if (plVar9 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
                    UNLOCK();
                  }
                  local_98 = puVar29;
                  if (((lVar28 == 0) || (lVar28 = *(longlong *)(lVar28 + 0x28), lVar28 == 0)) ||
                     ((longlong)*(int *)(lVar28 + 0x10) == 0)) goto LAB_140fcd709;
                  lVar23 = *(longlong *)(lVar28 + 8);
                  lVar28 = (longlong)*(int *)(lVar28 + 0x10) * 0x18;
                  local_88 = uVar16;
                  goto LAB_140fcd77d;
                }
                break;
              }
              plVar27 = plVar27 + 0x15;
              lVar28 = lVar28 + -0xa8;
            } while (lVar28 != 0);
          }
          goto LAB_140fcd721;
        }
LAB_140fcd821:
        iVar18 = (int)uVar16;
        uVar19 = uVar19 + 0x88;
      } while (uVar19 != local_a0);
    }
  }
  lVar23 = local_80;
  pRVar22 = local_90;
  lVar28 = local_a8;
  if (iVar18 == *(int *)(lVar20 + 0x1b8)) {
    if (*(int *)(lVar20 + 0x1bc) == 0) {
      iVar15 = 1;
      goto LAB_140fcdd28;
    }
  }
  else {
    iVar15 = *(int *)(lVar20 + 0x1bc) + 1;
LAB_140fcdd28:
    *(int *)(lVar20 + 0x1b8) = iVar18;
    *(int *)(lVar20 + 0x1bc) = iVar15;
  }
  uVar17 = FUN_140a489cc(local_b8);
  iVar15 = FUN_140fcdece(lVar23 + 0xf0,uVar17);
  if ((longlong)*(int *)(lVar20 + 0xe8) < 1) {
    iVar18 = 0;
  }
  else {
    iVar6 = *(int *)(lVar20 + 0xf0);
    lVar23 = 0;
    iVar18 = 0;
    do {
      *(int *)(lVar20 + 0xf0) = iVar6 + 1 + (int)lVar23;
      iVar18 = iVar18 + (uint)(*(int *)(*(longlong *)(lVar20 + 0xe0) + lVar23 * 4) <= iVar15);
      lVar23 = lVar23 + 1;
    } while (*(int *)(lVar20 + 0xe8) != lVar23);
  }
  if (iVar18 == *(int *)(lVar20 + 0x208)) {
    if (*(int *)(lVar20 + 0x20c) == 0) {
      iVar15 = 1;
      goto LAB_140fcde1f;
    }
  }
  else {
    iVar15 = *(int *)(lVar20 + 0x20c) + 1;
LAB_140fcde1f:
    *(int *)(lVar20 + 0x208) = iVar18;
    *(int *)(lVar20 + 0x20c) = iVar15;
  }
  *(int *)(lVar28 + 0xb8) = iVar18;
  FUN_140e96423(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
LAB_140fcddd1:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive(pRVar22);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140fcd77d:
  do {
    FUN_140fcde40(lVar23,&local_78);
    plVar2 = local_70;
    lVar20 = local_78;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (lVar20 != 0) {
      local_78 = *(longlong *)(local_b8 + 0x20);
      uVar14 = FUN_140c57d2c(lVar20,lVar20 + 0x18,&local_78);
      iVar15 = (int)plVar27[1];
      *(uint *)(plVar27 + 1) = iVar15 + 1U;
      if (*(uint *)((longlong)plVar27 + 0xc) < iVar15 + 1U) {
        FUN_1446f48e2(plVar27,iVar15);
        *(undefined4 *)(*plVar27 + (longlong)iVar15 * 4) = uVar14;
      }
      else {
        *(undefined4 *)(*plVar27 + (longlong)iVar15 * 4) = uVar14;
        if (iVar15 == -1) goto LAB_140fcd804;
      }
      *(int *)(plVar27 + 2) = (int)plVar27[2] + 1;
    }
LAB_140fcd804:
    lVar23 = lVar23 + 0x18;
    lVar28 = lVar28 + -0x18;
    lVar20 = local_b0;
    uVar16 = local_88;
  } while (lVar28 != 0);
LAB_140fcd709:
  puVar29 = local_98;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar27 = plVar9 + 1;
    *(int *)plVar27 = (int)*plVar27 + -1;
    UNLOCK();
    if ((int)*plVar27 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      lVar20 = local_b0;
      puVar29 = local_98;
      if (*piVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        lVar20 = local_b0;
        puVar29 = local_98;
      }
    }
  }
LAB_140fcd721:
  puVar21 = puVar21 + 1;
  if (puVar21 == puVar29) goto LAB_140fcd821;
  goto LAB_140fcd5ec;
}



// FUNCTION 140fcde40 FUN_140fcde40 body=83 status=ok
// SIG undefined FUN_140fcde40(void)

longlong * FUN_140fcde40(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140fcde94();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140fcde94 FUN_140fcde94 body=57 status=ok
// SIG undefined FUN_140fcde94(void)

void FUN_140fcde94(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68aa8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68aa8 =
         FUN_140002ddd(FUN_14651cfb8,uVar1,L"GbxUnlockConditionData_GroupProgressPointsSpent");
  }
  return;
}



// FUNCTION 140fcdece FUN_140fcdece body=48 status=ok
// SIG undefined FUN_140fcdece(void)

undefined4 FUN_140fcdece(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_140fcdefe();
    uVar2 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x30))) {
      uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar1 * 4);
    }
  }
  return uVar2;
}



// FUNCTION 140fcdefe FUN_140fcdefe body=212 status=ok
// SIG undefined FUN_140fcdefe(void)

ulonglong FUN_140fcdefe(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x18);
      plVar1 = (longlong *)(lVar8 + lVar2);
      lVar5 = *(longlong *)(lVar2 + 8 + lVar8);
      if (lVar5 == 0) {
        uVar6 = FUN_145764ed6();
        lVar5 = FUN_14477b664(uVar6);
        plVar1[1] = lVar5;
      }
      lVar7 = *(longlong *)(lVar2 + 0x10 + lVar8);
      if (((lVar7 == 0) && (lVar7 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
        plVar3 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
          lVar7 = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar7 = FUN_144aff482(uVar6,plVar1);
        }
        *(longlong *)(lVar2 + 0x10 + lVar8) = lVar7;
      }
      if (lVar7 == param_2) {
        return uVar9 & 0xffffffff;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x30;
    } while ((longlong)uVar9 < (longlong)*(int *)(param_1 + 0x20));
  }
  return 0xffffffff;
}



// FUNCTION 140fcdfd2 FUN_140fcdfd2 body=381 status=ok
// SIG undefined FUN_140fcdfd2(void)

void FUN_140fcdfd2(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  void *_Src;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = 0;
    do {
      *(undefined8 *)(param_1 + lVar9) = 0;
      ((undefined8 *)(param_1 + lVar9))[1] = 0;
      *(undefined8 *)(param_1 + 0x10 + lVar9) = 2;
      if (param_2 == param_1) {
        puVar8 = (undefined8 *)(param_1 + 0x18 + lVar9);
        *puVar8 = 0;
        puVar8[1] = 0;
        *(undefined4 *)(param_1 + 0x28 + lVar9) = 2;
        puVar8 = (undefined8 *)(param_1 + 0x2c + lVar9);
        *puVar8 = 0;
        puVar8[1] = 0;
        *(undefined4 *)(param_1 + 0x3c + lVar9) = 0;
        *(undefined8 *)(param_1 + 0x40 + lVar9) = 2;
      }
      else {
        FUN_140fce150(param_1 + lVar9,param_2 + lVar9);
        lVar1 = param_1 + lVar9;
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x28) = 2;
        FUN_140fce150((undefined8 *)(lVar1 + 0x18),param_2 + lVar9 + 0x18);
        lVar1 = param_1 + lVar9;
        *(undefined8 *)(lVar1 + 0x30) = 0;
        *(undefined8 *)(lVar1 + 0x38) = 0;
        *(undefined8 *)(lVar1 + 0x40) = 2;
        FUN_140fce150((undefined8 *)(lVar1 + 0x30),param_2 + lVar9 + 0x30);
      }
      *(undefined8 *)(param_1 + 0x58 + lVar9) = *(undefined8 *)(param_2 + 0x58 + lVar9);
      puVar2 = (undefined4 *)(param_2 + 0x48 + lVar9);
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar3 = (undefined4 *)(param_1 + 0x48 + lVar9);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      *(undefined8 *)(param_1 + 0x60 + lVar9) = 0;
      iVar4 = *(int *)(param_2 + 0x68 + lVar9);
      _Src = *(void **)(param_2 + 0x60 + lVar9);
      *(int *)(param_1 + 0x68 + lVar9) = iVar4;
      if ((longlong)iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x6c + lVar9) = 0;
      }
      else {
        puVar8 = (undefined8 *)(param_1 + lVar9 + 0x60);
        FUN_140fce2d2(puVar8,iVar4,0);
        memcpy((void *)*puVar8,_Src,(longlong)iVar4 << 3);
      }
      *(undefined8 *)(param_1 + 0x70 + lVar9) = *(undefined8 *)(param_2 + 0x70 + lVar9);
      lVar1 = *(longlong *)(param_2 + 0x78 + lVar9);
      *(longlong *)(param_1 + 0x78 + lVar9) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      *(undefined1 *)(param_1 + 0x80 + lVar9) = *(undefined1 *)(param_2 + 0x80 + lVar9);
      lVar9 = lVar9 + 0x88;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140fce150 FUN_140fce150 body=385 status=ok
// SIG undefined FUN_140fce150(void)

/* WARNING: Removing unreachable block (ram,0x000140fce2af) */

void FUN_140fce150(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar5 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1447a71f6(&local_58,uVar5 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  if (&local_58 == param_1) {
    uVar5 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_144760e21(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_58;
    local_58 = 0;
    *(int *)(param_1 + 1) = (int)uStack_50;
    *(uint *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
    uStack_50 = 0;
    uVar5 = 0;
  }
  FUN_144760e21(local_58,uVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fce2d2 FUN_140fce2d2 body=317 status=ok
// SIG undefined FUN_140fce2d2(void)

void FUN_140fce2d2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140fce340;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_140fce340:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140fce416 FUN_140fce416 body=4258 status=ok
// SIG undefined FUN_140fce416(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fce416(longlong *param_1,ulonglong param_2,char param_3)

{
  double dVar1;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  char cVar24;
  byte bVar25;
  int iVar26;
  undefined4 uVar27;
  uint uVar28;
  longlong lVar29;
  double *pdVar30;
  double *pdVar31;
  longlong lVar32;
  undefined1 (*pauVar33) [16];
  longlong *plVar34;
  longlong *plVar35;
  ulonglong uVar36;
  byte bVar37;
  ulonglong uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar48;
  undefined1 auVar47 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  undefined1 auVar60 [16];
  undefined1 auStack_3a8 [47];
  char local_379;
  longlong local_378;
  undefined4 local_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  double local_308 [2];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  longlong local_2a8;
  undefined8 uStack_2a0;
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
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  undefined8 uStack_180;
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
  double dVar2;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  cVar24 = (**(code **)(*param_1 + 0x460))();
  if (cVar24 == '\0') {
    bVar25 = 0;
  }
  else {
    bVar25 = (**(code **)(*param_1 + 0xbd0))(param_1);
  }
  bVar37 = (param_2 & 1) == 0 & (*(byte *)((longlong)param_1 + 0x9c) & 8) >> 3;
  if ((bVar25 | bVar37) == 1) {
    local_2a8 = 0;
    uStack_2a0 = 0;
    if (bVar25 != 0) {
      iVar26 = (int)param_1[0xe5];
      if (iVar26 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar26);
      }
      if (iVar26 != 0) {
        FUN_1401a2688(&local_2a8);
      }
    }
    local_379 = param_3;
    if (0 < (int)param_1[0xe5]) {
      lVar29 = 0;
      uVar36 = 0;
      do {
        pdVar31 = &local_368;
        pdVar30 = pdVar31;
        FUN_1448ac920(pdVar31,param_1[0xe4] + lVar29);
        auVar52 = _DAT_149934d80;
        local_2d8 = ZEXT816(0);
        local_2e8 = ZEXT816(0);
        auVar44 = *(undefined1 (*) [16])(param_1 + 0x50);
        dVar4 = auVar44._0_8_;
        dVar8 = auVar44._8_8_;
        auVar3 = *(undefined1 (*) [16])(param_1 + 0x52);
        dVar5 = auVar3._0_8_;
        dVar6 = local_328._0_8_;
        dVar9 = local_328._8_8_;
        dVar7 = local_318._0_8_;
        dVar10 = local_318._8_8_;
        auVar44 = minpd(local_328,auVar44);
        auVar49 = minpd(local_318,auVar3);
        auVar50._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
        auVar50._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
        iVar26 = movmskpd((int)local_2e8,auVar50);
        auVar44._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
        auVar44._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
        uVar28 = movmskpd((int)pdVar30,auVar44);
        if ((uVar28 & 0x3fffffff) == 0 && iVar26 == 0) {
          dVar20 = (double)param_1[0x48];
          dVar21 = (double)param_1[0x49];
          dVar22 = (double)param_1[0x4a];
          dVar23 = (double)param_1[0x4b];
          dVar53 = (double)param_1[0x4b];
          dVar43 = (double)param_1[0x4b];
          dVar56 = (double)param_1[0x48];
          dVar59 = (double)param_1[0x48];
          dVar1 = (double)param_1[0x49];
          dVar2 = (double)param_1[0x49];
          dVar48 = (double)param_1[0x4a];
          dVar55 = (double)param_1[0x4a];
          local_308[0] = dStack_360 * dVar48 * -1.0 +
                         local_358 * dVar1 + dStack_350 * dVar56 * 1.0 + local_368 * dVar53;
          local_308[1] = local_368 * dVar55 * 1.0 +
                         dStack_350 * dVar2 + local_358 * dVar59 * -1.0 + dStack_360 * dVar43;
          dVar11 = local_348 * dVar4;
          dVar12 = dStack_340 * dVar8;
          dVar15 = local_338 * dVar5;
          dVar16 = dStack_330 * auVar3._8_8_;
          dVar58 = dVar12 * dVar20 - dVar21 * dVar11;
          dVar14 = dVar15 * dVar21 - dVar22 * dVar12;
          dVar54 = dVar11 * dVar22 - dVar20 * dVar15;
          dVar57 = dVar16 * dVar23 - dVar23 * dVar16;
          dVar14 = dVar14 + dVar14;
          dVar54 = dVar54 + dVar54;
          dVar58 = dVar58 + dVar58;
          dVar57 = dVar57 + dVar57;
          dVar12 = (dVar14 * dVar22 - dVar58 * dVar20) + dVar43 * dVar54 + dVar12 +
                   (double)param_1[0x4d];
          dVar57 = (dVar57 * dVar23 - dVar57 * dVar23) + dVar43 * dVar57 + dVar16 +
                   (double)param_1[0x4f];
          local_2f8._8_8_ =
               local_358 * dVar55 * -1.0 +
               ((dVar59 * local_368 * -1.0 + dStack_350 * dVar43) - dStack_360 * dVar2);
          local_2f8._0_8_ =
               dStack_350 * dVar48 * 1.0 +
               ((dVar56 * dStack_360 * 1.0 + local_358 * dVar53) - local_368 * dVar1);
          local_2e8._8_4_ = SUB84(dVar12,0);
          local_2e8._0_8_ =
               (dVar58 * dVar21 - dVar22 * dVar54) + dVar53 * dVar14 + dVar11 +
               (double)param_1[0x4c];
          local_2e8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          local_2d8._8_4_ = SUB84(dVar57,0);
          local_2d8._0_8_ =
               (dVar54 * dVar20 - dVar21 * dVar14) + dVar53 * dVar58 + dVar15 +
               (double)param_1[0x4e];
          local_2d8._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
        }
        else {
          dVar59 = (double)param_1[0x48];
          dVar1 = (double)param_1[0x49];
          dVar2 = (double)param_1[0x4a];
          dVar48 = dVar1 + dVar1;
          dVar55 = dVar2 + dVar2;
          dVar53 = dVar59 * (dVar59 + dVar59);
          local_1a8 = (1.0 - (dVar53 + dVar1 * dVar48)) * dVar5;
          dVar43 = (double)param_1[0x4b];
          dVar57 = dVar55 * dVar43;
          dVar58 = (dVar59 + dVar59) * (double)param_1[0x4b];
          dVar43 = dVar48 * dVar43;
          local_1b8 = (dVar43 + (double)param_1[0x48] * dVar55) * dVar5;
          dVar53 = (DAT_149934d80._8_8_ - (dVar2 * dVar55 + dVar53)) * dVar8;
          dVar56 = (dVar48 * dVar59 + dVar57) * dVar4;
          local_1c8 = (dVar55 * dVar1 + dVar58) * dVar8;
          dStack_1b0 = (dVar55 * dVar1 - dVar58) * dVar5;
          local_1e8 = ((double)param_1[0x48] * dVar55 - dVar43) * dVar4;
          local_1f8._8_4_ = SUB84(dVar56,0);
          local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar2 * dVar55 + dVar1 * dVar48)) * dVar4;
          local_1f8._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
          uStack_1e0 = 0;
          local_1d8._8_4_ = SUB84(dVar53,0);
          local_1d8._0_8_ = (dVar48 * dVar59 - dVar57) * dVar8;
          local_1d8._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = param_1[0x4c];
          lStack_190 = param_1[0x4d];
          local_188 = param_1[0x4e];
          uStack_180 = 0x3ff0000000000000;
          dVar53 = dStack_360 + dStack_360;
          dVar56 = local_358 + local_358;
          dVar43 = local_368 * (local_368 + local_368);
          local_228 = (1.0 - (dVar43 + dStack_360 * dVar53)) * dVar7;
          dVar59 = (local_368 + local_368) * dStack_350;
          local_238 = (dVar53 * dStack_350 + local_368 * dVar56) * dVar7;
          local_258 = (dVar53 * local_368 - dVar56 * dStack_350) * dVar9;
          dStack_230 = (dVar56 * dStack_360 - dVar59) * dVar7;
          local_278 = ((double)DAT_149934d80 - (local_358 * dVar56 + dStack_360 * dVar53)) * dVar6;
          dStack_250 = (DAT_149934d80._8_8_ - (local_358 * dVar56 + dVar43)) * dVar9;
          dStack_270 = (dVar53 * local_368 + dVar56 * dStack_350) * dVar6;
          local_248 = (dVar56 * dStack_360 + dVar59) * dVar9;
          local_268 = (local_368 * dVar56 - dVar53 * dStack_350) * dVar6;
          uStack_260 = 0;
          uStack_240 = 0;
          uStack_220 = 0;
          local_218 = local_348;
          dStack_210 = dStack_340;
          local_208 = local_338;
          uStack_200 = 0x3ff0000000000000;
          FUN_1447fea8d(local_178,&local_278,local_1f8);
          FUN_144a1c686(local_178,0x3e45798ee0000000);
          auVar49._8_8_ = -(ulonglong)(0.0 <= dVar8 * dVar9);
          auVar49._0_8_ = -(ulonglong)(0.0 <= dVar4 * dVar6);
          auVar44 = blendvpd(_DAT_149936790,auVar52,auVar49);
          uVar38 = -(ulonglong)(0.0 <= dVar5 * dVar7);
          dVar43 = (double)(~uVar38 & 0xbff0000000000000 | uVar38 & 0x3ff0000000000000);
          dVar53 = auVar44._0_8_;
          local_178[2] = local_178[2] * dVar53;
          local_178[1] = local_178[1] * dVar53;
          local_178[0] = local_178[0] * dVar53;
          dVar53 = auVar44._8_8_;
          local_148 = local_148 * dVar53;
          local_150 = local_150 * dVar53;
          local_158 = dVar53 * local_158;
          local_128 = local_128 * dVar43;
          local_130 = local_130 * dVar43;
          local_138 = dVar43 * local_138;
          FUN_14481fd10(&local_298,local_178);
          dVar43 = local_288 * local_288 + local_298 * local_298;
          dVar53 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
          auVar46._0_8_ = dVar43 + dVar53;
          auVar46._8_8_ = dVar43 + dVar53;
          auVar39._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar46._8_8_);
          auVar39._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar46._0_8_);
          auVar44 = sqrtpd(auVar46,auVar46);
          auVar44 = divpd(auVar52,auVar44);
          auVar52._0_8_ = auVar44._0_8_ * local_288;
          auVar52._8_8_ = auVar44._8_8_ * dStack_280;
          local_308[0] = (double)((ulonglong)(local_298 * auVar44._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar46._0_8_));
          local_308[1] = (double)((ulonglong)(dStack_290 * auVar44._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar46._8_8_));
          local_2f8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar52,auVar39);
          local_2e8._8_8_ = dStack_110;
          local_2e8._0_8_ = local_118;
          local_2d8._8_8_ = 0;
          local_2d8._0_8_ = local_108;
        }
        dVar10 = dVar10 * auVar3._8_8_;
        local_2c8._8_4_ = SUB84(dVar9 * dVar8,0);
        local_2c8._0_8_ = dVar6 * dVar4;
        local_2c8._12_4_ = (int)((ulonglong)(dVar9 * dVar8) >> 0x20);
        local_2b8._8_4_ = SUB84(dVar10,0);
        local_2b8._0_8_ = dVar7 * dVar5;
        local_2b8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        if (bVar25 != 0) {
          uVar27 = FUN_1448ac920(pdVar31,param_1[0xe4] + lVar29);
          auVar52 = _DAT_149934d80;
          auVar44 = *(undefined1 (*) [16])(param_1 + 0xf0);
          dVar4 = auVar44._0_8_;
          dVar8 = auVar44._8_8_;
          auVar3 = *(undefined1 (*) [16])(param_1 + 0xf2);
          dVar5 = auVar3._0_8_;
          dVar6 = local_328._0_8_;
          dVar9 = local_328._8_8_;
          dVar7 = local_318._0_8_;
          dVar10 = local_318._8_8_;
          auVar44 = minpd(local_328,auVar44);
          auVar50 = minpd(local_318,auVar3);
          auVar45._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
          auVar45._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
          iVar26 = movmskpd(uVar27,auVar45);
          auVar51._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
          auVar51._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
          uVar28 = movmskpd((int)pdVar31,auVar51);
          if ((uVar28 & 0x3fffffff) == 0 && iVar26 == 0) {
            dVar14 = (double)param_1[0xe8];
            dVar54 = (double)param_1[0xe9];
            dVar15 = (double)param_1[0xea];
            dVar16 = (double)param_1[0xeb];
            dVar2 = (double)param_1[0xeb];
            dVar1 = (double)param_1[0xeb];
            dVar43 = (double)param_1[0xe8];
            dVar59 = (double)param_1[0xe8];
            dVar55 = (double)param_1[0xe9];
            dVar48 = (double)param_1[0xe9];
            dVar57 = (double)param_1[0xea];
            dVar58 = (double)param_1[0xea];
            dVar53 = dStack_360 * dVar57 * -1.0 +
                     local_358 * dVar55 + dStack_350 * dVar43 * 1.0 + local_368 * dVar2;
            dVar56 = local_368 * dVar58 * 1.0 +
                     dStack_350 * dVar48 + local_358 * dVar59 * -1.0 + dStack_360 * dVar1;
            auVar60._0_8_ =
                 dStack_350 * dVar57 * 1.0 +
                 ((dVar43 * dStack_360 * 1.0 + local_358 * dVar2) - local_368 * dVar55);
            auVar60._8_8_ =
                 local_358 * dVar58 * -1.0 +
                 ((dVar59 * local_368 * -1.0 + dStack_350 * dVar1) - dStack_360 * dVar48);
            dVar59 = local_348 * dVar4;
            dVar57 = dStack_340 * dVar8;
            dVar58 = local_338 * dVar5;
            dVar11 = dStack_330 * auVar3._8_8_;
            dVar48 = dVar57 * dVar14 - dVar54 * dVar59;
            dVar12 = dVar58 * dVar54 - dVar15 * dVar57;
            dVar55 = dVar59 * dVar15 - dVar14 * dVar58;
            dVar43 = dVar11 * dVar16 - dVar16 * dVar11;
            dVar12 = dVar12 + dVar12;
            dVar55 = dVar55 + dVar55;
            dVar48 = dVar48 + dVar48;
            dVar43 = dVar43 + dVar43;
            dVar43 = (dVar43 * dVar16 - dVar43 * dVar16) + dVar1 * dVar43 + dVar11 +
                     (double)param_1[0xef];
            dVar59 = (dVar48 * dVar54 - dVar15 * dVar55) + dVar2 * dVar12 + dVar59 +
                     (double)param_1[0xec];
            dVar1 = (dVar12 * dVar15 - dVar48 * dVar14) + dVar1 * dVar55 + dVar57 +
                    (double)param_1[0xed];
            dVar2 = (dVar55 * dVar14 - dVar54 * dVar12) + dVar2 * dVar48 + dVar58 +
                    (double)param_1[0xee];
          }
          else {
            dVar59 = (double)param_1[0xe8];
            dVar1 = (double)param_1[0xe9];
            dVar2 = (double)param_1[0xea];
            dVar48 = dVar1 + dVar1;
            dVar55 = dVar2 + dVar2;
            dVar53 = dVar59 * (dVar59 + dVar59);
            local_1a8 = (1.0 - (dVar53 + dVar1 * dVar48)) * dVar5;
            dVar43 = (double)param_1[0xeb];
            dVar57 = dVar55 * dVar43;
            dVar58 = (dVar59 + dVar59) * (double)param_1[0xeb];
            dVar43 = dVar48 * dVar43;
            local_1b8 = (dVar43 + (double)param_1[0xe8] * dVar55) * dVar5;
            dVar53 = (DAT_149934d80._8_8_ - (dVar2 * dVar55 + dVar53)) * dVar8;
            dVar56 = (dVar48 * dVar59 + dVar57) * dVar4;
            local_1c8 = (dVar55 * dVar1 + dVar58) * dVar8;
            dStack_1b0 = (dVar55 * dVar1 - dVar58) * dVar5;
            local_1e8 = ((double)param_1[0xe8] * dVar55 - dVar43) * dVar4;
            local_1f8._8_4_ = SUB84(dVar56,0);
            local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar2 * dVar55 + dVar1 * dVar48)) * dVar4;
            local_1f8._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
            uStack_1e0 = 0;
            local_1d8._8_4_ = SUB84(dVar53,0);
            local_1d8._0_8_ = (dVar48 * dVar59 - dVar57) * dVar8;
            local_1d8._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = param_1[0xec];
            lStack_190 = param_1[0xed];
            local_188 = param_1[0xee];
            uStack_180 = 0x3ff0000000000000;
            dVar53 = dStack_360 + dStack_360;
            dVar56 = local_358 + local_358;
            dVar43 = local_368 * (local_368 + local_368);
            local_228 = (1.0 - (dVar43 + dStack_360 * dVar53)) * dVar7;
            dVar59 = (local_368 + local_368) * dStack_350;
            local_238 = (dVar53 * dStack_350 + local_368 * dVar56) * dVar7;
            local_258 = (dVar53 * local_368 - dVar56 * dStack_350) * dVar9;
            dStack_230 = (dVar56 * dStack_360 - dVar59) * dVar7;
            local_278 = ((double)DAT_149934d80 - (local_358 * dVar56 + dStack_360 * dVar53)) * dVar6
            ;
            dStack_250 = (DAT_149934d80._8_8_ - (local_358 * dVar56 + dVar43)) * dVar9;
            dStack_270 = (dVar53 * local_368 + dVar56 * dStack_350) * dVar6;
            local_248 = (dVar56 * dStack_360 + dVar59) * dVar9;
            local_268 = (local_368 * dVar56 - dVar53 * dStack_350) * dVar6;
            uStack_260 = 0;
            uStack_240 = 0;
            uStack_220 = 0;
            local_218 = local_348;
            dStack_210 = dStack_340;
            local_208 = local_338;
            uStack_200 = 0x3ff0000000000000;
            FUN_1447fea8d(local_178,&local_278,local_1f8);
            FUN_144a1c686(local_178,0x3e45798ee0000000);
            auVar40._8_8_ = -(ulonglong)(0.0 <= dVar8 * dVar9);
            auVar40._0_8_ = -(ulonglong)(0.0 <= dVar4 * dVar6);
            auVar44 = blendvpd(_DAT_149936790,auVar52,auVar40);
            uVar38 = -(ulonglong)(0.0 <= dVar5 * dVar7);
            dVar43 = (double)(~uVar38 & 0xbff0000000000000 | uVar38 & 0x3ff0000000000000);
            dVar53 = auVar44._0_8_;
            local_178[2] = local_178[2] * dVar53;
            local_178[1] = local_178[1] * dVar53;
            local_178[0] = local_178[0] * dVar53;
            dVar53 = auVar44._8_8_;
            local_148 = local_148 * dVar53;
            local_150 = local_150 * dVar53;
            local_158 = dVar53 * local_158;
            local_128 = local_128 * dVar43;
            local_130 = local_130 * dVar43;
            local_138 = dVar43 * local_138;
            FUN_14481fd10(&local_298,local_178);
            dVar43 = local_288 * local_288 + local_298 * local_298;
            dVar53 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar42._0_8_ = dVar43 + dVar53;
            auVar42._8_8_ = dVar43 + dVar53;
            auVar41._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_);
            auVar41._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_);
            auVar44 = sqrtpd(auVar42,auVar42);
            auVar44 = divpd(auVar52,auVar44);
            auVar47._0_8_ = auVar44._0_8_ * local_288;
            auVar47._8_8_ = auVar44._8_8_ * dStack_280;
            dVar53 = (double)((ulonglong)(local_298 * auVar44._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_));
            dVar56 = (double)((ulonglong)(dStack_290 * auVar44._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_));
            auVar60 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar47,auVar41);
            dVar43 = 0.0;
            dVar59 = local_118;
            dVar1 = dStack_110;
            dVar2 = local_108;
          }
          uVar38 = uStack_2a0;
          dVar10 = dVar10 * auVar3._8_8_;
          pdVar30 = local_308;
          pdVar31 = local_178;
          for (lVar32 = 0xc; lVar32 != 0; lVar32 = lVar32 + -1) {
            *pdVar31 = *pdVar30;
            pdVar30 = pdVar30 + 1;
            pdVar31 = pdVar31 + 1;
          }
          iVar26 = (int)uStack_2a0;
          lVar32 = (longlong)(int)uStack_2a0;
          uStack_2a0 = CONCAT44(uStack_2a0._4_4_,(int)uStack_2a0 + 2);
          if ((uint)(uStack_2a0._4_4_ - iVar26) < 2) {
            FUN_144a2c682(&local_2a8,uVar38 & 0xffffffff);
          }
          pauVar33 = (undefined1 (*) [16])(lVar32 * 0x60 + local_2a8);
          auVar17._8_4_ = SUB84(dVar56,0);
          auVar17._0_8_ = dVar53;
          auVar17._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
          *pauVar33 = auVar17;
          pauVar33[1] = auVar60;
          auVar18._8_4_ = SUB84(dVar1,0);
          auVar18._0_8_ = dVar59;
          auVar18._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
          pauVar33[2] = auVar18;
          auVar13._8_4_ = SUB84(dVar43,0);
          auVar13._0_8_ = dVar2;
          auVar13._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
          pauVar33[3] = auVar13;
          auVar3._8_4_ = SUB84(dVar9 * dVar8,0);
          auVar3._0_8_ = dVar6 * dVar4;
          auVar3._12_4_ = (int)((ulonglong)(dVar9 * dVar8) >> 0x20);
          pauVar33[4] = auVar3;
          auVar19._8_4_ = SUB84(dVar10,0);
          auVar19._0_8_ = dVar7 * dVar5;
          auVar19._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          pauVar33[5] = auVar19;
          memcpy(pauVar33 + 6,local_178,0x60);
        }
        if (bVar37 != 0) {
          FUN_14086e618(param_1,uVar36 & 0xffffffff,local_308,local_379 == '\x01');
        }
        uVar36 = uVar36 + 1;
        lVar29 = lVar29 + 0x80;
      } while ((longlong)uVar36 < (longlong)(int)param_1[0xe5]);
    }
    if (bVar25 != 0) {
      local_378 = local_2a8;
      local_370 = (int)uStack_2a0;
      (**(code **)(*param_1 + 0xbc0))(param_1);
    }
    if (local_2a8 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)((longlong)param_1 + 0x95d) != '\x02') {
    *(byte *)((longlong)param_1 + 0x95e) = *(byte *)((longlong)param_1 + 0x95e) | 8;
    FUN_1402d2c26(param_1 + 0x118);
  }
  plVar34 = param_1 + 0x48;
  plVar35 = param_1 + 0xe8;
  for (lVar29 = 0xc; lVar29 != 0; lVar29 = lVar29 + -1) {
    *plVar35 = *plVar34;
    plVar34 = plVar34 + 1;
    plVar35 = plVar35 + 1;
  }
  if ((local_f0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fcf4c8 FUN_140fcf4c8 body=4008 status=ok
// SIG undefined FUN_140fcf4c8(void)

undefined8 FUN_140fcf4c8(longlong *param_1,undefined8 *param_2)

{
  void **ppvVar1;
  byte bVar2;
  undefined2 *puVar3;
  byte *pbVar4;
  void *_Src;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong *plVar17;
  bool bVar18;
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
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  void *local_88;
  int local_80;
  code *local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar8 = (**(code **)(*param_1 + 8))();
  FUN_1402057ac(param_2,param_1,uVar8,0);
  lVar10 = param_1[7];
  if (lVar10 != 0) {
    if ((((*(int *)(lVar10 + 0xc) == 0) || (uVar6 = *(uint *)(lVar10 + 8), (int)uVar6 < 0)) ||
        (DAT_14c9647dc <= (int)uVar6)) ||
       (((plVar13 = (longlong *)
                    ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
         plVar13 == (longlong *)0x0 || ((int)plVar13[2] != *(int *)(lVar10 + 0xc))) ||
        (((*(uint *)(plVar13 + 1) & 0x10200000) != 0 || (lVar9 = *plVar13, lVar9 == 0)))))) {
      if (*(longlong *)(lVar10 + 0x10) != 0) {
        lVar9 = FUN_140007850();
        cVar5 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar9 == 0) || (cVar5 == '\0')) {
          if (lVar9 != 0) {
            uVar6 = *(uint *)(lVar9 + 0xc);
            goto LAB_140fcf640;
          }
          *(undefined8 *)(lVar10 + 8) = 0;
        }
        else {
          uVar6 = *(uint *)(lVar9 + 0xc);
          if ((int)uVar6 < DAT_14c9647dc) {
            lVar12 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
          }
          else {
            lVar12 = 0;
          }
          if ((*(uint *)(lVar12 + 8) & 0x8400000) == 0) {
LAB_140fcf640:
            *(uint *)(lVar10 + 8) = uVar6;
            if ((int)uVar6 < DAT_14c9647dc) {
              lVar12 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
            }
            else {
              lVar12 = 0;
            }
            iVar7 = *(int *)(lVar12 + 0x10);
            if (*(int *)(lVar12 + 0x10) == 0) {
              LOCK();
              iVar7 = DAT_14c964868 + 1;
              UNLOCK();
              iVar16 = DAT_14c964868 + 1;
              bVar18 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar7;
              if (bVar18) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar16);
              }
              LOCK();
              iVar7 = *(int *)(lVar12 + 0x10);
              bVar18 = iVar7 == 0;
              if (bVar18) {
                *(int *)(lVar12 + 0x10) = iVar16;
                iVar7 = 0;
              }
              UNLOCK();
              if (bVar18) {
                iVar7 = iVar16;
              }
            }
            *(int *)(lVar10 + 0xc) = iVar7;
          }
          if ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0) goto LAB_140fcf56f;
        }
      }
LAB_140fcf686:
      uStack_90 = DAT_14cb94740;
      local_98 = DAT_14cb94738;
      FUN_1448075d0(&local_70);
      pbVar4 = (byte *)*param_2;
      if (pbVar4 != (byte *)0x0) {
        if ((*pbVar4 & 2) == 0) {
          plVar13 = &DAT_14c9a1288;
        }
        else {
          plVar13 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
        }
        if ((int)plVar13[2] != *(int *)((longlong)plVar13 + 0x3c)) {
          plVar14 = plVar13 + 8;
          if ((longlong *)plVar13[9] != (longlong *)0x0) {
            plVar14 = (longlong *)plVar13[9];
          }
          iVar7 = *(int *)((longlong)plVar14 +
                          (ulonglong)((int)plVar13[10] - 1U & (uint)local_70) * 4);
          if (iVar7 != -1) {
            do {
              lVar10 = *plVar13 + (longlong)iVar7 * 0x40;
              if (*(uint *)(*plVar13 + (longlong)iVar7 * 0x40) == (uint)local_70) {
                if ((((lVar10 != 0) &&
                     (puVar15 = (undefined8 *)(lVar10 + 0x28), puVar15 != (undefined8 *)0x0)) &&
                    ((byte *)*puVar15 != (byte *)0x0)) && ((*(byte *)*puVar15 & 0x40) == 0))
                goto LAB_140fcf738;
                break;
              }
              iVar7 = *(int *)(lVar10 + 0x38);
            } while (iVar7 != -1);
          }
        }
      }
      puVar15 = &DAT_14c9a1308;
LAB_140fcf738:
      if (CONCAT44(uStack_54,local_58) != 0) {
        FUN_1400020a8();
      }
      if (((byte *)*puVar15 != (byte *)0x0) && ((*(byte *)*puVar15 & 0x6b) == 3)) {
        uStack_90 = DAT_14cb94758;
        local_98 = DAT_14cb94750;
        FUN_1448075d0(&local_70);
        pbVar4 = (byte *)*puVar15;
        if (pbVar4 != (byte *)0x0) {
          if ((*pbVar4 & 2) == 0) {
            plVar13 = &DAT_14c9a1288;
          }
          else {
            plVar13 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
          }
          if ((int)plVar13[2] != *(int *)((longlong)plVar13 + 0x3c)) {
            plVar14 = plVar13 + 8;
            if ((longlong *)plVar13[9] != (longlong *)0x0) {
              plVar14 = (longlong *)plVar13[9];
            }
            iVar7 = *(int *)((longlong)plVar14 +
                            (ulonglong)((int)plVar13[10] - 1U & (uint)local_70) * 4);
            if (iVar7 != -1) {
              do {
                lVar10 = *plVar13 + (longlong)iVar7 * 0x40;
                if (*(uint *)(*plVar13 + (longlong)iVar7 * 0x40) == (uint)local_70) {
                  if (((lVar10 != 0) &&
                      (puVar11 = (undefined8 *)(lVar10 + 0x28), puVar11 != (undefined8 *)0x0)) &&
                     (((byte *)*puVar11 != (byte *)0x0 && ((*(byte *)*puVar11 & 0x40) == 0))))
                  goto LAB_140fcf813;
                  break;
                }
                iVar7 = *(int *)(lVar10 + 0x38);
              } while (iVar7 != -1);
            }
          }
        }
        puVar11 = &DAT_14c9a1308;
LAB_140fcf813:
        if ((byte *)*puVar11 == (byte *)0x0) {
          bVar18 = false;
        }
        else {
          bVar2 = *(byte *)*puVar11;
          bVar18 = (bVar2 & 0x68) == 0 && (bVar2 & 3) != 0;
        }
        if (CONCAT44(uStack_54,local_58) != 0) {
          FUN_1400020a8();
        }
        if (bVar18) {
          uStack_90 = DAT_14cb94758;
          local_98 = DAT_14cb94750;
          FUN_1448075d0(&local_70);
          pbVar4 = (byte *)*puVar15;
          if (pbVar4 != (byte *)0x0) {
            if ((*pbVar4 & 2) == 0) {
              plVar13 = &DAT_14c9a1288;
            }
            else {
              plVar13 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
            }
            if ((int)plVar13[2] != *(int *)((longlong)plVar13 + 0x3c)) {
              plVar14 = plVar13 + 8;
              if ((longlong *)plVar13[9] != (longlong *)0x0) {
                plVar14 = (longlong *)plVar13[9];
              }
              iVar7 = *(int *)((longlong)plVar14 +
                              (ulonglong)((int)plVar13[10] - 1U & (uint)local_70) * 4);
              if (iVar7 != -1) {
                do {
                  lVar10 = *plVar13 + (longlong)iVar7 * 0x40;
                  if (*(uint *)(*plVar13 + (longlong)iVar7 * 0x40) == (uint)local_70) {
                    if ((((lVar10 != 0) &&
                         (puVar15 = (undefined8 *)(lVar10 + 0x28), puVar15 != (undefined8 *)0x0)) &&
                        ((byte *)*puVar15 != (byte *)0x0)) && ((*(byte *)*puVar15 & 0x40) == 0))
                    goto LAB_140fcf8fb;
                    break;
                  }
                  iVar7 = *(int *)(lVar10 + 0x38);
                } while (iVar7 != -1);
              }
            }
          }
          puVar15 = &DAT_14c9a1308;
LAB_140fcf8fb:
          FUN_14006788a(&local_98,*puVar15,0,1);
          _Src = local_88;
          lVar10 = param_1[7];
          *(undefined8 *)(lVar10 + 8) = 0;
          *(undefined4 *)(lVar10 + 0x10) = (undefined4)local_98;
          *(undefined4 *)(lVar10 + 0x14) = local_98._4_4_;
          *(undefined4 *)(lVar10 + 0x18) = uStack_90;
          *(undefined4 *)(lVar10 + 0x1c) = uStack_8c;
          ppvVar1 = (void **)(lVar10 + 0x20);
          if (ppvVar1 != &local_88) {
            *(int *)(lVar10 + 0x28) = local_80;
            if (local_80 == 0 && *(int *)(lVar10 + 0x2c) == 0) {
              *(undefined4 *)(lVar10 + 0x2c) = 0;
            }
            else {
              FUN_1446dd670(ppvVar1,local_80);
              if (local_80 != 0) {
                memcpy(*ppvVar1,_Src,(longlong)local_80 * 2);
              }
            }
          }
          if (local_88 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (CONCAT44(uStack_54,local_58) != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
    else {
LAB_140fcf56f:
      if (DAT_14c949118 == 0) {
        local_78 = FUN_140631fbe;
        if (DAT_14c963f04 == '\0') {
          uVar8 = FUN_140011aa6();
          lVar10 = FUN_140011c0e(uVar8,0x250,8);
        }
        else {
          lVar10 = FUN_14001cc68(0x250,8);
        }
        DAT_14c949118 = lVar10;
        FUN_1446f470e(&local_98,L"Class",1);
        local_b0 = &local_78;
        local_b8 = &LAB_146891e90;
        local_c0 = (code *)&LAB_146273097;
        local_d0 = L"Engine";
        local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,199);
        local_d8 = 0x20;
        local_e0 = 0x10000000;
        local_e8._0_4_ = 8;
        FUN_14574b4b2(lVar10);
        DAT_14c949118 = lVar10;
        if (DAT_14c951858 == 0) {
          local_b0 = (code **)&local_70;
          local_70 = FUN_1449e2820;
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
        lVar12 = DAT_14c951858;
        lVar10 = DAT_14c949118;
        uVar8 = FUN_1449e2fb2();
        local_e8 = L"Class";
        FUN_14574b446(uVar8,lVar10,lVar12,L"/Script/CoreUObject");
      }
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30))
      goto LAB_140fcf686;
      if (DAT_14cb93bd8 == 0) {
        local_b0 = (code **)&local_70;
        local_70 = FUN_1449e2820;
        local_a0 = FUN_14081d0ea;
        local_a8 = FUN_14081d0ea;
        local_b8 = &LAB_148a11b2b;
        local_c0 = FUN_146573d7d;
        local_c8 = L"Engine";
        local_d0 = (wchar_t *)0x0;
        local_d8 = CONCAT44(local_d8._4_4_,0x10000001);
        local_e0 = 8;
        local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,0x38);
        FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponBehavior",&DAT_14cb93bd8,&DAT_148a11b2a);
        if (DAT_14cb93bd8 == 0) goto LAB_140fcf686;
      }
      if ((*(int *)(lVar9 + 0x38) < *(int *)(DAT_14cb93bd8 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cb93bd8 + 0x38) * 8)
          != DAT_14cb93bd8 + 0x30)) goto LAB_140fcf686;
    }
    lVar10 = param_1[7];
    if (lVar10 != 0) {
      if ((((*(int *)(lVar10 + 0xc) == 0) || (uVar6 = *(uint *)(lVar10 + 8), (int)uVar6 < 0)) ||
          ((DAT_14c9647dc <= (int)uVar6 ||
           ((plVar13 = (longlong *)
                       ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
            plVar13 == (longlong *)0x0 || ((int)plVar13[2] != *(int *)(lVar10 + 0xc))))))) ||
         (((*(uint *)(plVar13 + 1) & 0x10200000) != 0 || (lVar9 = *plVar13, lVar9 == 0)))) {
        if (*(longlong *)(lVar10 + 0x10) != 0) {
          lVar9 = FUN_140007850();
          cVar5 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar9 == 0) || (cVar5 == '\0')) {
            if (lVar9 != 0) {
              uVar6 = *(uint *)(lVar9 + 0xc);
              goto LAB_140fcfbd4;
            }
            *(undefined8 *)(lVar10 + 8) = 0;
          }
          else {
            uVar6 = *(uint *)(lVar9 + 0xc);
            if ((int)uVar6 < DAT_14c9647dc) {
              lVar12 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
            }
            else {
              lVar12 = 0;
            }
            if ((*(uint *)(lVar12 + 8) & 0x8400000) == 0) {
LAB_140fcfbd4:
              *(uint *)(lVar10 + 8) = uVar6;
              if ((int)uVar6 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              iVar7 = *(int *)(lVar12 + 0x10);
              if (*(int *)(lVar12 + 0x10) == 0) {
                LOCK();
                iVar7 = DAT_14c964868 + 1;
                UNLOCK();
                iVar16 = DAT_14c964868 + 1;
                bVar18 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar7;
                if (bVar18) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar16);
                }
                LOCK();
                iVar7 = *(int *)(lVar12 + 0x10);
                bVar18 = iVar7 == 0;
                if (bVar18) {
                  *(int *)(lVar12 + 0x10) = iVar16;
                  iVar7 = 0;
                }
                UNLOCK();
                if (bVar18) {
                  iVar7 = iVar16;
                }
              }
              *(int *)(lVar10 + 0xc) = iVar7;
            }
            if ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0) goto LAB_140fcfa14;
          }
        }
      }
      else {
LAB_140fcfa14:
        if (DAT_14c949118 == 0) {
          local_78 = FUN_140631fbe;
          if (DAT_14c963f04 == '\0') {
            uVar8 = FUN_140011aa6();
            lVar10 = FUN_140011c0e(uVar8,0x250,8);
          }
          else {
            lVar10 = FUN_14001cc68(0x250,8);
          }
          DAT_14c949118 = lVar10;
          FUN_1446f470e(&local_98,L"Class",1);
          local_b0 = &local_78;
          local_b8 = &LAB_146891e90;
          local_c0 = (code *)&LAB_146273097;
          local_d0 = L"Engine";
          local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,199);
          local_d8 = 0x20;
          local_e0 = 0x10000000;
          local_e8._0_4_ = 8;
          FUN_14574b4b2(lVar10);
          DAT_14c949118 = lVar10;
          if (DAT_14c951858 == 0) {
            local_b0 = (code **)&local_70;
            local_70 = FUN_1449e2820;
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
          lVar12 = DAT_14c951858;
          lVar10 = DAT_14c949118;
          uVar8 = FUN_1449e2fb2();
          local_e8 = L"Class";
          FUN_14574b446(uVar8,lVar10,lVar12,L"/Script/CoreUObject");
        }
        if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) {
          if (DAT_14cb93bd8 == 0) {
            local_b0 = (code **)&local_70;
            local_70 = FUN_1449e2820;
            local_a0 = FUN_14081d0ea;
            local_a8 = FUN_14081d0ea;
            local_b8 = &LAB_148a11b2b;
            local_c0 = FUN_146573d7d;
            local_c8 = L"Engine";
            local_d0 = (wchar_t *)0x0;
            local_d8 = CONCAT44(local_d8._4_4_,0x10000001);
            local_e0 = 8;
            local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,0x38);
            FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponBehavior",&DAT_14cb93bd8,&DAT_148a11b2a);
            if (DAT_14cb93bd8 == 0) goto LAB_140fcfc1a;
          }
          if ((*(int *)(DAT_14cb93bd8 + 0x38) <= *(int *)(lVar9 + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cb93bd8 + 0x38) * 8) ==
              DAT_14cb93bd8 + 0x30)) {
            lVar10 = DAT_14cb93bd8;
            while( true ) {
              lVar12 = *(longlong *)(lVar9 + 0x40);
              if (lVar10 == 0) {
                local_70 = FUN_1449e2820;
                local_a0 = FUN_14081d0ea;
                local_a8 = FUN_14081d0ea;
                local_b8 = &LAB_148a11b2b;
                local_c0 = FUN_146573d7d;
                local_c8 = L"Engine";
                local_d0 = (wchar_t *)0x0;
                local_d8 = CONCAT44(local_d8._4_4_,0x10000001);
                local_e0 = 8;
                local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,0x38);
                local_b0 = (code **)&local_70;
                FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponBehavior",&DAT_14cb93bd8,&DAT_148a11b2a);
                lVar10 = DAT_14cb93bd8;
              }
              if (lVar12 == lVar10) break;
              lVar9 = *(longlong *)(lVar9 + 0x40);
            }
            if (lVar9 != 0) {
              FUN_1400bbfc4(&local_70,lVar9);
              *(uint *)(param_1 + 0xb) = (uint)local_70;
              *(undefined4 *)((longlong)param_1 + 0x5c) = local_70._4_4_;
              *(undefined4 *)(param_1 + 0xc) = uStack_68;
              *(undefined4 *)((longlong)param_1 + 100) = uStack_64;
              if (param_1 + 0xb == &local_70) {
                if (local_60 != 0) {
                  FUN_1400020a8();
                }
              }
              else {
                if (param_1[0xd] != 0) {
                  FUN_1400020a8();
                }
                param_1[0xd] = local_60;
                local_60 = 0;
                *(undefined4 *)(param_1 + 0xe) = local_58;
                *(undefined4 *)((longlong)param_1 + 0x74) = uStack_54;
              }
              cVar5 = (*(code *)PTR_FUN_14c758760)();
              iVar7 = DAT_14c9647dc;
              uVar6 = *(uint *)(lVar9 + 0xc);
              if (cVar5 != '\0') {
                if ((int)uVar6 < DAT_14c9647dc) {
                  lVar10 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
                }
                else {
                  lVar10 = 0;
                }
                if ((*(uint *)(lVar10 + 8) & 0x8400000) != 0) {
                  param_1[10] = 0;
                  goto LAB_140fcfc4e;
                }
              }
              *(uint *)(param_1 + 10) = uVar6;
              if ((int)uVar6 < iVar7) {
                lVar10 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
              }
              else {
                lVar10 = 0;
              }
              iVar7 = *(int *)(lVar10 + 0x10);
              if (*(int *)(lVar10 + 0x10) == 0) {
                LOCK();
                iVar7 = DAT_14c964868 + 1;
                UNLOCK();
                iVar16 = DAT_14c964868 + 1;
                bVar18 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar7;
                if (bVar18) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar16);
                }
                LOCK();
                iVar7 = *(int *)(lVar10 + 0x10);
                bVar18 = iVar7 == 0;
                if (bVar18) {
                  *(int *)(lVar10 + 0x10) = iVar16;
                  iVar7 = 0;
                }
                UNLOCK();
                if (bVar18) {
                  iVar7 = iVar16;
                }
              }
              *(int *)((longlong)param_1 + 0x54) = iVar7;
              goto LAB_140fcfc4e;
            }
          }
        }
      }
    }
  }
LAB_140fcfc1a:
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) < 0) {
    FUN_1446f8c06(param_1 + 0xd,0);
  }
  puVar3 = (undefined2 *)param_1[0xd];
  if (puVar3 != (undefined2 *)0x0) {
    *puVar3 = 0;
  }
LAB_140fcfc4e:
  lVar10 = param_1[7];
  if (lVar10 != 0) {
    uVar8 = FUN_1418baaa6();
    cVar5 = FUN_1448093f4(lVar10,uVar8);
    if (cVar5 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x35) = 0;
    }
    plVar13 = (longlong *)param_1[7];
    if (plVar13 != (longlong *)0x0) {
      uStack_90 = DAT_14cb94740;
      local_98 = DAT_14cb94738;
      FUN_1448075d0(&local_70);
      pbVar4 = (byte *)*param_2;
      if (pbVar4 != (byte *)0x0) {
        if ((*pbVar4 & 2) == 0) {
          plVar14 = &DAT_14c9a1288;
        }
        else {
          plVar14 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
        }
        if ((int)plVar14[2] != *(int *)((longlong)plVar14 + 0x3c)) {
          plVar17 = plVar14 + 8;
          if ((longlong *)plVar14[9] != (longlong *)0x0) {
            plVar17 = (longlong *)plVar14[9];
          }
          iVar7 = *(int *)((longlong)plVar17 +
                          (ulonglong)((int)plVar14[10] - 1U & (uint)local_70) * 4);
          if (iVar7 != -1) {
            do {
              lVar10 = *plVar14 + (longlong)iVar7 * 0x40;
              if (*(uint *)(*plVar14 + (longlong)iVar7 * 0x40) == (uint)local_70) {
                if ((((lVar10 != 0) &&
                     (puVar15 = (undefined8 *)(lVar10 + 0x28), puVar15 != (undefined8 *)0x0)) &&
                    ((byte *)*puVar15 != (byte *)0x0)) && ((*(byte *)*puVar15 & 0x40) == 0))
                goto LAB_140fcfd32;
                break;
              }
              iVar7 = *(int *)(lVar10 + 0x38);
            } while (iVar7 != -1);
          }
        }
      }
      puVar15 = &DAT_14c9a1308;
LAB_140fcfd32:
      (**(code **)(*plVar13 + 0x20))(plVar13,puVar15);
      if (CONCAT44(uStack_54,local_58) != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140fd0472 FUN_140fd0472 body=1476 status=ok
// SIG undefined FUN_140fd0472(void)

void FUN_140fd0472(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  int local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_1468d96f0;
      local_90 = 0;
      local_98 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar5,param_2,&local_38);
    }
  }
  local_50 = 0;
  local_48 = 0x7012;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_14170fd90;
      local_90 = 0x8000000000000000;
      local_98 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_50);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_50);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_50 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar5,param_2,&local_50);
    }
  }
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  FUN_140be4ae0();
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_68);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&uStack_68);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&uStack_68);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar5 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_68 = (undefined4)uVar5;
      uStack_64 = (undefined4)((ulonglong)uVar5 >> 0x20);
    }
    else {
      (*pcVar2)(uVar5,param_2,&uStack_68);
    }
  }
  local_6c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_14067a048;
      local_90 = 0;
      local_98 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_6c);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_6c);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar5 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_6c = (int)uVar5;
      uStack_68 = (undefined4)((ulonglong)uVar5 >> 0x20);
    }
    else {
      (*pcVar2)(uVar5,param_2,&local_6c);
    }
  }
  iVar4 = local_6c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = CONCAT44(uStack_64,uStack_68);
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e(lVar3);
  }
  else {
    uVar5 = 0;
    if (lVar3 == 0) goto LAB_140fd0725;
  }
  uVar5 = uStack_60;
LAB_140fd0725:
  local_30 = local_50;
  local_28 = local_48;
  local_20 = 0;
  FUN_140fd0a38(local_38,&local_30,uVar5,iVar4 != 0);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fd0a38 FUN_140fd0a38 body=327 status=ok
// SIG undefined FUN_140fd0a38(void)

void FUN_140fd0a38(longlong *param_1,longlong *param_2,longlong *param_3,byte param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((*param_2 != 0) && ((int)param_2[1] - 1U < 0xfffffffe)) {
    if ((param_3 != (longlong *)0x0) && (param_4 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000140fd0a89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x48))(param_3,param_2);
      return;
    }
    if (param_1 != (longlong *)0x0) {
      lVar3 = (**(code **)(*param_1 + 0x180))();
      if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x238))) {
        lVar7 = 0;
        do {
          iVar1 = *(int *)(*(longlong *)(lVar3 + 0x230) + 4 + lVar7 * 8);
          if (((iVar1 != 0) &&
              (uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x230) + lVar7 * 8), -1 < (int)uVar2)) &&
             ((int)uVar2 < DAT_14c9647dc)) {
            plVar6 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == iVar1)) &&
               (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
                (plVar6 = (longlong *)*plVar6, plVar6 != (longlong *)0x0)))) {
              uVar4 = FUN_1410a2c98();
              plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar4);
              if (plVar6 != (longlong *)0x0) {
                uVar4 = FUN_1410a2c98();
                plVar5 = (longlong *)FUN_144718840(plVar6,uVar4);
                if (((plVar6 != plVar5) && (plVar5 != (longlong *)0x0)) &&
                   ((plVar5 == param_3 & param_4) == 0)) {
                  (**(code **)(*plVar5 + 0x48))(plVar5,param_2);
                }
              }
            }
          }
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < *(int *)(lVar3 + 0x238));
      }
    }
  }
  return;
}



// FUNCTION 140fd0b8e FUN_140fd0b8e body=157 status=ok
// SIG undefined FUN_140fd0b8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140fd0b8e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b4677f0;
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fd0c34 FUN_140fd0c34 body=211 status=ok
// SIG undefined FUN_140fd0c34(void)

undefined8 * FUN_140fd0c34(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  *(undefined4 *)(param_1 + 0xf) = 0x1010101;
  *param_1 = &PTR_FUN_14ac3c750;
  *(undefined1 *)(param_1 + 0x10) = 1;
  FUN_140440628(param_1 + 0x11,&DAT_14cb23bb4,0);
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined2 *)(param_1 + 0x1f) = 4;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x20) = 3;
  *(char *)(param_1 + 0x21) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  return param_1;
}



// FUNCTION 140fd0d0c FUN_140fd0d0c body=221 status=ok
// SIG undefined FUN_140fd0d0c(void)

longlong FUN_140fd0d0c(void)

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
  if (DAT_14cc0bf58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1492f064a;
    local_40 = &LAB_14671d458;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/InterchangeCore",L"InterchangeBaseNode",&DAT_14cc0bf58,FUN_14671d436);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0bf58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fd0dea FUN_140fd0dea body=21 status=ok
// SIG undefined FUN_140fd0dea(void)

undefined8 FUN_140fd0dea(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140fd0e00 FUN_140fd0e00 body=950 status=ok
// SIG undefined FUN_140fd0e00(void)

void FUN_140fd0e00(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  iVar1 = *(int *)(param_1 + 200);
  if (iVar1 == 0) {
    uVar14 = 1;
    uVar13 = 0;
    iVar9 = 0;
    iVar8 = 0;
  }
  else {
    puVar3 = *(uint **)(param_1 + 0xc0);
    if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
      puVar3 = (uint *)(param_1 + 0xb0);
    }
    uVar10 = *puVar3;
    if (uVar10 == 0) {
      iVar9 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar9 = iVar1 + -1;
      }
      uVar13 = 0;
      uVar6 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar6 = uVar13;
      }
      iVar9 = 0;
      do {
        if (uVar6 == uVar13) goto LAB_140fd0f1a;
        iVar9 = iVar9 + 0x20;
        uVar10 = puVar3[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar6 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar8) {
      iVar8 = iVar1;
    }
  }
  if (iVar8 != iVar1) {
    uVar10 = 0xffffffff;
    do {
      lVar11 = *(longlong *)(param_1 + 0xa0) + (longlong)iVar8 * 0x30;
      if ((*(int *)(*(longlong *)(param_1 + 0xa0) + 8 + (longlong)iVar8 * 0x30) == 0) &&
         (*(int *)(lVar11 + 0xc) == 0)) {
        (**(code **)(*param_3 + 0x88))(param_3,lVar11,0,0);
      }
      FUN_140792e27(param_3,lVar11 + 0x10);
      uVar10 = uVar10 & ~(uint)uVar14;
      puVar3 = *(uint **)(param_1 + 0xc0);
      if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
        puVar3 = (uint *)(param_1 + 0xb0);
      }
      iVar2 = *(int *)(param_1 + 200);
      iVar8 = (int)uVar13;
      lVar11 = (longlong)iVar8;
      uVar7 = puVar3[lVar11] & uVar10;
      if (uVar7 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar5 = iVar4;
        if (iVar4 < iVar8) {
          iVar5 = iVar8;
        }
        if (iVar8 < iVar4) {
          lVar12 = 0;
          do {
            uVar7 = puVar3[lVar11 + lVar12 + 1];
            if (uVar7 != 0) {
              uVar13 = (ulonglong)(iVar8 + (int)lVar12 + 1);
              uVar10 = 0xffffffff;
              goto LAB_140fd0eeb;
            }
            iVar9 = iVar9 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar5 - lVar11 != lVar12);
          uVar10 = 0xffffffff;
          iVar8 = iVar5;
        }
        uVar13 = (ulonglong)(iVar8 + 1);
        iVar8 = iVar2;
      }
      else {
LAB_140fd0eeb:
        uVar14 = (ulonglong)(-uVar7 & uVar7);
        uVar6 = uVar14 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar8 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar8) {
          iVar8 = iVar2;
        }
      }
    } while (iVar8 != iVar1);
  }
LAB_140fd0f1a:
  iVar1 = *(int *)(param_1 + 0x118);
  if (iVar1 == 0) {
    uVar14 = 1;
    uVar13 = 0;
    iVar9 = 0;
    iVar8 = 0;
  }
  else {
    puVar3 = *(uint **)(param_1 + 0x110);
    if (*(uint **)(param_1 + 0x110) == (uint *)0x0) {
      puVar3 = (uint *)(param_1 + 0x100);
    }
    uVar10 = *puVar3;
    if (uVar10 == 0) {
      iVar9 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar9 = iVar1 + -1;
      }
      uVar13 = 0;
      uVar6 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar6 = uVar13;
      }
      iVar9 = 0;
      do {
        if (uVar6 == uVar13) {
          return;
        }
        iVar9 = iVar9 + 0x20;
        uVar10 = puVar3[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar6 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar8) {
      iVar8 = iVar1;
    }
  }
  if (iVar8 != iVar1) {
    uVar10 = 0xffffffff;
    do {
      lVar11 = *(longlong *)(param_1 + 0xf0) + (longlong)iVar8 * 0x40;
      if ((*(int *)(*(longlong *)(param_1 + 0xf0) + 8 + (longlong)iVar8 * 0x40) == 0) &&
         (*(int *)(lVar11 + 0xc) == 0)) {
        (**(code **)(*param_3 + 0x88))(param_3,lVar11,0,0);
      }
      FUN_140792e27(param_3,lVar11 + 0x10);
      uVar10 = uVar10 & ~(uint)uVar14;
      puVar3 = *(uint **)(param_1 + 0x110);
      if (*(uint **)(param_1 + 0x110) == (uint *)0x0) {
        puVar3 = (uint *)(param_1 + 0x100);
      }
      iVar2 = *(int *)(param_1 + 0x118);
      iVar8 = (int)uVar13;
      lVar11 = (longlong)iVar8;
      uVar7 = puVar3[lVar11] & uVar10;
      if (uVar7 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar5 = iVar4;
        if (iVar4 < iVar8) {
          iVar5 = iVar8;
        }
        if (iVar8 < iVar4) {
          lVar12 = 0;
          do {
            uVar7 = puVar3[lVar11 + lVar12 + 1];
            if (uVar7 != 0) {
              uVar13 = (ulonglong)(iVar8 + (int)lVar12 + 1);
              uVar10 = 0xffffffff;
              goto LAB_140fd0fe9;
            }
            iVar9 = iVar9 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar5 - lVar11 != lVar12);
          uVar10 = 0xffffffff;
          iVar8 = iVar5;
        }
        uVar13 = (ulonglong)(iVar8 + 1);
        iVar8 = iVar2;
      }
      else {
LAB_140fd0fe9:
        uVar14 = (ulonglong)(-uVar7 & uVar7);
        uVar6 = uVar14 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar8 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar8) {
          iVar8 = iVar2;
        }
      }
    } while (iVar8 != iVar1);
  }
  return;
}



// FUNCTION 140fd11b6 FUN_140fd11b6 body=275 status=ok
// SIG undefined FUN_140fd11b6(void)

void FUN_140fd11b6(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xa10);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0x21) {
      uVar4 = 0x20;
    }
    else {
      lVar2 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0xa14)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = lVar2 * 0x50;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar3 < 0x7ff1) {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
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
          uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
        }
      }
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x50)) {
        uVar4 = uVar3 / 0x50 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xa14) = (int)uVar4;
    FUN_140fd12ca(param_1,param_2,uVar4,0x50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 140fd12ca FUN_140fd12ca body=149 status=ok
// SIG undefined FUN_140fd12ca(void)

void FUN_140fd12ca(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xa00);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x50);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xa00,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xa00),param_1,(longlong)param_2 * 0x50);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xa00,param_2,param_3,param_4);
  return;
}



// FUNCTION 140fd136e FUN_140fd136e body=88 status=ok
// SIG undefined FUN_140fd136e(void)

undefined8 * FUN_140fd136e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b471a50;
  FUN_140fd13c6(param_1[0x4d],*(undefined4 *)(param_1 + 0x4e));
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cc81b0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fd13c6 FUN_140fd13c6 body=90 status=ok
// SIG undefined FUN_140fd13c6(void)

void FUN_140fd13c6(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_140d4f835(plVar1[2],(int)plVar1[3]);
      if (plVar1[2] != 0) {
        FUN_1400020a8();
      }
      FUN_140f6e90b(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140fd1420 FUN_140fd1420 body=386 status=ok
// SIG undefined FUN_140fd1420(void)

longlong FUN_140fd1420(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar11 = *(uint *)(param_1 + 1);
  if (0 < (longlong)(int)uVar11) {
    lVar8 = *param_1;
    uVar12 = uVar11 - 1;
    uVar6 = (ulonglong)uVar12;
    lVar5 = uVar6 * 0x10;
    if (*(int *)(lVar8 + 8 + lVar5) + param_2 < 0x8001) {
LAB_140fd145e:
      return lVar8 + lVar5;
    }
    if (uVar11 == 1) {
      uVar11 = 1;
    }
    else {
      lVar5 = (longlong)(int)uVar11 * 0x10;
      uVar4 = *(undefined8 *)(lVar8 + -0x10 + lVar5);
      iVar1 = *(int *)(lVar8 + -8 + lVar5);
      uVar2 = *(undefined4 *)(lVar8 + -4 + lVar5);
      *(uint *)(param_1 + 1) = uVar12;
      uVar10 = 0;
      uVar7 = uVar12;
      do {
        uVar6 = uVar6 >> 1;
        uVar9 = (uint)uVar6 + uVar10;
        if (iVar1 < *(int *)(lVar8 + 8 + (ulonglong)uVar9 * 0x10)) {
          uVar10 = uVar9 + (uVar7 & 1);
        }
        bVar3 = 1 < uVar7;
        uVar7 = (uint)uVar6;
      } while (bVar3);
      *(uint *)(param_1 + 1) = uVar11;
      if (*(uint *)((longlong)param_1 + 0xc) < uVar11) {
        FUN_1457ddee2(param_1,uVar12);
        lVar8 = *param_1;
      }
      lVar5 = (ulonglong)uVar10 * 0x10;
      memmove((void *)(lVar8 + lVar5 + 0x10),(void *)(lVar8 + lVar5),
              (ulonglong)(uVar12 - uVar10) << 4);
      lVar8 = *param_1;
      *(undefined8 *)(lVar8 + lVar5) = uVar4;
      *(int *)(lVar8 + 8 + lVar5) = iVar1;
      *(undefined4 *)(lVar8 + 0xc + lVar5) = uVar2;
      uVar12 = *(uint *)(param_1 + 1);
      uVar11 = uVar10;
      if (uVar10 != uVar12) {
        lVar8 = *param_1;
        lVar5 = (longlong)(int)(uVar12 - 1) * 0x10;
        uVar11 = uVar12;
        if (param_2 + *(int *)(lVar8 + 8 + lVar5) < 0x8001) goto LAB_140fd145e;
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar11 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar11 + 1) {
    FUN_1457ddee2(param_1,uVar11);
  }
  lVar5 = *param_1;
  lVar8 = lVar5 + (longlong)(int)uVar11 * 0x10;
  FUN_140fd15a2(lVar8);
  uVar4 = FUN_14001cc68(0x8000,1);
  *(undefined8 *)(lVar5 + (longlong)(int)uVar11 * 0x10) = uVar4;
  return lVar8;
}



// FUNCTION 140fd15a2 FUN_140fd15a2 body=15 status=ok
// SIG undefined FUN_140fd15a2(void)

void FUN_140fd15a2(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 140fd15b6 FUN_140fd15b6 body=228 status=ok
// SIG undefined FUN_140fd15b6(void)

longlong FUN_140fd15b6(void)

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
  if (DAT_14cb65420 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_14597b4fe;
    local_28 = &LAB_145908fe6;
    local_38 = &LAB_148716793;
    local_40 = FUN_141858373;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillScript",&DAT_14cb65420,FUN_146509248);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb65420;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fd169c FUN_140fd169c body=792 status=ok
// SIG undefined FUN_140fd169c(void)

void FUN_140fd169c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
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
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1403a682c;
      local_40 = 0;
      local_48 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_140fd19b6(local_20,local_28);
  *param_3 = uVar4;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fd19b6 FUN_140fd19b6 body=200 status=ok
// SIG undefined FUN_140fd19b6(void)

undefined1 FUN_140fd19b6(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1401b0f18();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1401b0f18();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar2 == plVar3) {
        return 0;
      }
      if (plVar3 == (longlong *)0x0) {
        return 0;
      }
      lVar4 = (**(code **)(*plVar3 + 0x28))();
      if (param_2 != 0) {
        if ((longlong)*(int *)(lVar4 + 0x80) != 0) {
          lVar5 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar4 + 0x78) + lVar5) == param_2) {
              return 1;
            }
            lVar5 = lVar5 + 8;
          } while ((longlong)*(int *)(lVar4 + 0x80) * 8 != lVar5);
        }
        if ((longlong)*(int *)(lVar4 + 0x90) != 0) {
          lVar5 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar4 + 0x88) + lVar5) == param_2) {
              return 1;
            }
            bVar6 = (longlong)*(int *)(lVar4 + 0x90) * 8 + -8 != lVar5;
            lVar5 = lVar5 + 8;
          } while (bVar6);
          return 0;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140fd1a7e FUN_140fd1a7e body=185 status=ok
// SIG undefined FUN_140fd1a7e(void)

void FUN_140fd1a7e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_140fd1b38(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fd1b38 FUN_140fd1b38 body=267 status=ok
// SIG undefined FUN_140fd1b38(void)

longlong * FUN_140fd1b38(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_1408be2c4(param_2);
    }
    FUN_14062fa62(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_14021219d(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 140fd1c46 FUN_140fd1c46 body=104 status=ok
// SIG undefined FUN_140fd1c46(void)

undefined8 FUN_140fd1c46(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_140fd1cb0(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fd1cb0 FUN_140fd1cb0 body=66 status=ok
// SIG undefined FUN_140fd1cb0(void)

longlong FUN_140fd1cb0(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((DAT_14cb84940 != 0) && (lVar2 = FUN_144837462(DAT_14cb84940,param_1), lVar2 != 0)) {
    uVar3 = FUN_140fd1cf2();
    cVar1 = FUN_1448093f4(lVar2,uVar3);
    if (cVar1 != '\0') {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140fd1cf2 FUN_140fd1cf2 body=57 status=ok
// SIG undefined FUN_140fd1cf2(void)

void FUN_140fd1cf2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a578 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a578 = FUN_140002ddd(FUN_146526638,uVar1,L"InventorySkinDef");
  }
  return;
}



// FUNCTION 140fd1d2c FUN_140fd1d2c body=214 status=ok
// SIG undefined FUN_140fd1d2c(void)

void FUN_140fd1d2c(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_140343d7a();
  lVar3 = FUN_140519fd4(uVar2);
  if (lVar3 != 0) {
    if (*(longlong *)(param_1 + 0xd8) == 0) {
      if ((*(char *)(*(longlong *)(param_1 + 0x48) + 0x88) != '\x01') ||
         (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x80), lVar4 == 0)) {
        FUN_140273082(param_1,&local_48);
        iVar1 = local_40 + -1;
        if (local_40 == 0) {
          iVar1 = 0;
        }
        FUN_1446f82e2(&local_38,iVar1,local_48,1);
        lVar4 = local_38;
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      *(longlong *)(param_1 + 0xd8) = lVar4;
    }
    FUN_140fd1e04(lVar3,(longlong *)(param_1 + 0xd8),1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fd1e04 FUN_140fd1e04 body=229 status=ok
// SIG undefined FUN_140fd1e04(void)

undefined8 FUN_140fd1e04(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0xb4) != 0) {
    uVar2 = *(uint *)(param_1 + 0xb0);
    if ((int)uVar2 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar2) {
      return 0;
    }
    plVar3 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0xb4))) &&
        ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (*plVar3 != 0)) {
      cVar1 = *(char *)(param_1 + 0x378);
      if (param_3 == '\0') {
        FUN_1400bc8c2();
      }
      else {
        FUN_1400bc96c((char *)(param_1 + 0x378));
      }
      if (cVar1 == '\0') {
        return 1;
      }
      if (*(char *)(param_1 + 0x378) != '\0') {
        return 1;
      }
      if (*(char *)(param_1 + 0x350) == '\x01') {
        *(undefined4 *)(param_1 + 0xc0) = 0;
        if (*(int *)(param_1 + 0x84) < 0) {
          *(undefined4 *)(param_1 + 0x80) = 0;
          FUN_147f61d1c(param_1 + 0x78,0);
        }
        else {
          *(undefined4 *)(param_1 + 0x80) = 0;
        }
      }
      FUN_140bf70b8(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140fd1eea FUN_140fd1eea body=31 status=ok
// SIG undefined FUN_140fd1eea(void)

undefined8 FUN_140fd1eea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fd1f09 FUN_140fd1f09 body=62 status=ok
// SIG undefined FUN_140fd1f09(void)

void FUN_140fd1f09(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fd1f48(puVar1,param_1);
  *puVar1 = &PTR_FUN_14acc0550;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  return;
}



// FUNCTION 140fd1f48 FUN_140fd1f48 body=94 status=ok
// SIG undefined FUN_140fd1f48(void)

undefined8 * FUN_140fd1f48(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14acba8a0;
  return param_1;
}



// FUNCTION 140fd1fa6 FUN_140fd1fa6 body=425 status=ok
// SIG undefined FUN_140fd1fa6(void)

void FUN_140fd1fa6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
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
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_140fd2150(local_20);
  *param_3 = uVar4;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fd2150 FUN_140fd2150 body=100 status=ok
// SIG undefined FUN_140fd2150(void)

bool FUN_140fd2150(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140da3b08();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140da3b08();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        return *(char *)(lVar4 + 0x54) == '\x02';
      }
    }
  }
  return false;
}



// FUNCTION 140fd21b4 FUN_140fd21b4 body=2095 status=ok
// SIG undefined FUN_140fd21b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_140fd21b4(longlong *param_1,int *param_2,undefined8 *param_3)

{
  void *_Src;
  void *pvVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  int *piVar18;
  int iVar19;
  ulonglong uVar20;
  undefined1 auStack_258 [40];
  uint *local_230;
  int *local_228;
  undefined8 *local_220;
  undefined1 local_218 [16];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_164;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_228 = param_2;
  local_220 = param_3;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar16) {
      FUN_140fd30aa(param_1,iVar16);
    }
    iVar19 = (int)param_1[5];
    if (iVar19 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar5 = iVar19 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar13 = param_1 + 2;
    iVar6 = iVar19 + 1;
    iVar10 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar10 = iVar19;
    }
    if (iVar10 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar6;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar19) {
        if (iVar19 + 0x20U < 0xa0) {
          iVar6 = 0x80;
          iVar5 = iVar19;
        }
        else {
          uVar15 = iVar19 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar2 = 4;
            if (4 < uVar15) {
              uVar2 = uVar15;
            }
          }
          else {
            uVar2 = (uVar15 * 3 >> 3) + uVar15 + 0x10;
          }
          uVar8 = FUN_144a3809e(uVar2 << 2,0);
          iVar5 = (int)(uVar8 >> 2);
          iVar6 = -0x20;
          if ((int)uVar15 <= iVar5) {
            iVar6 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar6;
        FUN_1446efbd8(plVar13,iVar5);
        iVar6 = (int)param_1[5] + 1;
      }
      iVar5 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar5 = iVar6;
      }
      *(int *)(param_1 + 5) = iVar6;
      if (iVar6 % 0x20 != 0) {
        plVar12 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar12 = plVar13;
        }
        bVar4 = -(char)(iVar6 % 0x20);
        *(uint *)((longlong)plVar12 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar12 + (longlong)(iVar5 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar16;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar19 & 0x1f;
    puVar7 = (uint *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4);
    *puVar7 = *puVar7 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar16 = (int)param_1[6];
    lVar3 = (longlong)iVar16;
    iVar19 = *(int *)(*param_1 + 4 + lVar3 * 0x1d0);
    *(int *)(param_1 + 6) = iVar19;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar19 * 0x1d0) = 0xffffffff;
    }
  }
  local_230 = (uint *)(param_1 + 2);
  puVar7 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar7 = local_230;
  }
  iVar19 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar19 = iVar16;
  }
  puVar7[iVar19 >> 5] = puVar7[iVar19 >> 5] | 1 << ((byte)iVar16 & 0x1f);
  uVar15 = 1;
  lVar17 = *param_1;
  _Src = (void *)(lVar3 * 0x1d0 + lVar17);
  memset(local_218,0,0x1b0);
  local_208 = _DAT_14c846250;
  uStack_200 = DAT_14c846258;
  local_1f8 = _DAT_14c846260;
  uStack_1f0 = _DAT_14c846268;
  local_1e8 = _DAT_14c846270;
  uStack_1e0 = _DAT_14c846278;
  local_1d8 = _DAT_14c846280;
  uStack_1d0 = _DAT_14c846288;
  local_1c8 = _DAT_14c846250;
  uStack_1c0 = DAT_14c846258;
  local_1b8 = _DAT_14c846260;
  uStack_1b0 = _DAT_14c846268;
  local_1a8 = _DAT_14c846270;
  uStack_1a0 = _DAT_14c846278;
  local_198 = _DAT_14c846280;
  uStack_190 = _DAT_14c846288;
  local_188 = ram0x00014c846340;
  uStack_180 = _DAT_14c846348;
  local_178 = ram0x00014c846340;
  uStack_170 = _DAT_14c846348;
  local_164 = DAT_14c846330;
  local_15c = DAT_14c846338;
  local_150 = DAT_14c846338;
  local_158 = DAT_14c846330;
  local_14c = DAT_14c846330;
  local_144 = DAT_14c846338;
  local_13c = DAT_14c9a5298;
  local_134 = DAT_14c9a52a0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  local_f0 = DAT_14c9a52a0;
  local_f8 = DAT_14c9a5298;
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_c0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_b0 = DAT_14c9a52a0;
  local_b8 = DAT_14c9a5298;
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_80 = 0;
  local_90 = 0;
  uStack_88 = 0;
  pvVar1 = (void *)(lVar17 + 0x10 + lVar3 * 0x1d0);
  *(undefined8 *)((longlong)pvVar1 + -0x10) = *(undefined8 *)*local_220;
  memcpy(pvVar1,local_218,0xf0);
  *(undefined8 *)((longlong)pvVar1 + 0xf0) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0xf8) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x100) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x108) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x110) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x118) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x120) = DAT_14c9a5298;
  *(undefined4 *)((longlong)pvVar1 + 0x128) = DAT_14c9a52a0;
  *(undefined8 *)((longlong)pvVar1 + 0x130) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x138) = 0;
  *(undefined4 *)((longlong)pvVar1 + 0x140) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x148) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x150) = 0;
  *(undefined4 *)((longlong)pvVar1 + 0x158) = 0;
  *(undefined4 *)((longlong)pvVar1 + 0x168) = DAT_14c9a52a0;
  *(undefined8 *)((longlong)pvVar1 + 0x160) = DAT_14c9a5298;
  *(undefined4 *)((longlong)pvVar1 + 0x180) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x170) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x178) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x188) = 0;
  *(undefined8 *)((longlong)pvVar1 + 400) = 0;
  *(undefined4 *)((longlong)pvVar1 + 0x198) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x1a0) = local_78;
  *(undefined4 *)((longlong)pvVar1 + 0x1a8) = local_70;
  FUN_140fd29e4(local_218);
  piVar18 = local_228;
  *(undefined4 *)((longlong)pvVar1 + 0x1b0) = 0xffffffff;
  lVar3 = *(longlong *)((longlong)pvVar1 + -0x10);
  uVar2 = (int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3;
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar9 != 0) && (uVar9 != 1)) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar19 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & uVar2) * 4);
    if (iVar19 != -1) {
      do {
        pvVar1 = (void *)(*param_1 + (longlong)iVar19 * 0x1d0);
        if (*(longlong *)(*param_1 + (longlong)iVar19 * 0x1d0) == lVar3) {
          FUN_140fd29e4((longlong)pvVar1 + 0x10);
          memmove(pvVar1,_Src,0x1c0);
          FUN_140c98ef0(param_1,iVar16);
          piVar18 = local_228;
          iVar16 = iVar19;
          goto LAB_140fd25af;
        }
        iVar19 = *(int *)((longlong)pvVar1 + 0x1c0);
      } while (iVar19 != -1);
    }
  }
  if (3 < uVar9) {
    uVar8 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar15 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar9 < 1) || ((int)uVar15 <= (int)param_1[9])) {
    uVar2 = (int)param_1[9] - 1U & uVar2;
    *(uint *)((longlong)_Src + 0x1c4) = uVar2;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x1c0) =
         *(undefined4 *)
          ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4) =
         iVar16;
    goto LAB_140fd25af;
  }
  *(uint *)(param_1 + 9) = uVar15;
  plVar13 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar13,0,0,4);
    uVar15 = *(uint *)(param_1 + 9);
  }
  plVar12 = param_1 + 7;
  if (uVar15 == 1) {
    if (*plVar13 != 0) {
      FUN_1446efa72(plVar13,0,0,4);
    }
LAB_140fd26d3:
    uVar2 = 0;
    do {
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = plVar12;
      }
      *(undefined4 *)((longlong)plVar13 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
           0xffffffff;
      uVar2 = uVar2 + 1;
    } while (uVar15 != uVar2);
  }
  else {
    if (uVar15 == 0) goto LAB_140fd25af;
    FUN_1446efa72(plVar13,0,uVar15,4);
    if (0 < (int)uVar15) goto LAB_140fd26d3;
  }
  iVar19 = (int)param_1[5];
  if (iVar19 == 0) {
    uVar8 = 0;
    uVar14 = 1;
    iVar5 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = local_230;
    }
    uVar15 = *puVar7;
    if (uVar15 == 0) {
      iVar5 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar5 = iVar19 + -1;
      }
      uVar8 = 0;
      uVar14 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar14 = uVar8;
      }
      iVar6 = 0;
      do {
        if (uVar14 == uVar8) goto LAB_140fd25af;
        iVar6 = iVar6 + 0x20;
        uVar15 = puVar7[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar8 = 0;
      iVar6 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar20 = uVar14 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar5 = (iVar6 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar19 <= iVar5) {
      iVar5 = iVar19;
    }
  }
  if (iVar5 < iVar19) {
    uVar15 = 0xffffffff;
    do {
      lVar3 = *param_1;
      lVar17 = (longlong)iVar5 * 0x1d0;
      uVar20 = (longlong)
               ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar17) >> 0x20) * 0x17 +
               (int)*(undefined8 *)(lVar3 + lVar17)) & (longlong)(int)param_1[9] - 1U;
      iVar19 = (int)uVar20;
      *(int *)(lVar3 + 0x1c4 + lVar17) = iVar19;
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = plVar12;
      }
      *(undefined4 *)(lVar3 + 0x1c0 + lVar17) =
           *(undefined4 *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & uVar20) * 4);
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = plVar12;
      }
      *(int *)((longlong)plVar13 + ((longlong)iVar19 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
      uVar15 = ~(uint)uVar14 & uVar15;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = local_230;
      }
      iVar19 = (int)param_1[5];
      iVar5 = (int)uVar8;
      lVar3 = (longlong)iVar5;
      uVar2 = puVar7[lVar3] & uVar15;
      if (uVar2 == 0) {
        iVar10 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar10 = iVar19 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar5) {
          iVar11 = iVar5;
        }
        if (iVar10 <= iVar5) break;
        lVar17 = 0;
        while( true ) {
          iVar6 = iVar6 + 0x20;
          uVar2 = puVar7[lVar3 + lVar17 + 1];
          if (uVar2 != 0) break;
          lVar17 = lVar17 + 1;
          if (iVar11 - lVar3 == lVar17) goto LAB_140fd25af;
        }
        uVar8 = (ulonglong)(iVar5 + (int)lVar17 + 1);
        uVar15 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar2 & uVar2);
      uVar20 = uVar14 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar5 = (iVar6 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar19);
  }
LAB_140fd25af:
  *piVar18 = iVar16;
  if ((local_60 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return piVar18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fd29e4 FUN_140fd29e4 body=1734 status=ok
// SIG undefined FUN_140fd29e4(void)

void FUN_140fd29e4(undefined1 *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = 0;
  lVar4 = *(longlong *)(param_1 + 0xf0);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0xf0) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0xf8);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0xf8) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0x100);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x100) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0x108);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x108) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0x110);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x110) = 0;
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
  FUN_14011fb0c(param_1 + 0x130);
  FUN_14011fb0c(param_1 + 0x148);
  FUN_14011fb0c(param_1 + 0x170);
  FUN_14011fb0c(param_1 + 0x188);
  lVar4 = *(longlong *)(param_1 + 400);
  if (lVar4 != 0) {
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
  lVar4 = *(longlong *)(param_1 + 0x188);
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x178);
  if (lVar4 != 0) {
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
  lVar4 = *(longlong *)(param_1 + 0x170);
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x150);
  if (lVar4 != 0) {
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
  lVar4 = *(longlong *)(param_1 + 0x148);
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x138);
  if (lVar4 != 0) {
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
  lVar4 = *(longlong *)(param_1 + 0x130);
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x118) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x110) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x108) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x100) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xf8) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 8);
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



// FUNCTION 140fd30aa FUN_140fd30aa body=264 status=ok
// SIG undefined FUN_140fd30aa(void)

void FUN_140fd30aa(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = lVar4 * 0x1d0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar7 & (uVar5 + uVar7) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0x10);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x8d3dcb08d3dcb09),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0x1d0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140fd31b2 FUN_140fd31b2 body=297 status=ok
// SIG undefined FUN_140fd31b2(void)

undefined8 FUN_140fd31b2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140fd32d4;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140fd32d4;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_140fd32d4:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140fd327f;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_140fd327f;
    }
  }
  uVar6 = 0;
LAB_140fd327f:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fd32dc FUN_140fd32dc body=3298 status=ok
// SIG undefined FUN_140fd32dc(void)

void FUN_140fd32dc(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  uint uVar32;
  uint uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStack_1d8 [40];
  ulonglong local_1b0;
  double local_1a8;
  PSRWLOCK local_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  undefined8 uStack_180;
  longlong local_178;
  longlong *local_170;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined1 local_f1;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_f1 = 0;
  cVar7 = FUN_140fd4038(param_3);
  if (cVar7 != '\0') {
    if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
      lVar4 = *param_2;
      lVar13 = *(longlong *)(param_1 + 400);
      if (*(longlong *)(param_1 + 400) == 0) {
        lVar13 = param_1 + 0x188;
      }
      iVar20 = *(int *)(lVar13 + (ulonglong)
                                 (*(int *)(param_1 + 0x198) - 1U &
                                 (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
      if (iVar20 != -1) {
        lVar13 = *(longlong *)(param_1 + 0x150);
        iVar19 = iVar20;
        do {
          if (*(longlong *)(lVar13 + (longlong)iVar19 * 0x18) == lVar4) goto LAB_140fd33f9;
          iVar19 = *(int *)(lVar13 + (longlong)iVar19 * 0x18 + 0x10);
        } while (iVar19 != -1);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_1d8);
  }
  if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
    lVar4 = *param_2;
    lVar13 = param_1 + 0x188;
    if (*(longlong *)(param_1 + 400) != 0) {
      lVar13 = *(longlong *)(param_1 + 400);
    }
    iVar20 = *(int *)(lVar13 + (ulonglong)
                               (*(int *)(param_1 + 0x198) - 1U &
                               (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar20 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar20 * 0x18) == lVar4) {
          FUN_1449027d0(param_1,&local_178);
          lVar4 = *(longlong *)(local_178 + 0x240);
          AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0xa0));
          *(int *)(lVar4 + 0x98) = *(int *)(lVar4 + 0x98) + 1;
          if (local_170 != (longlong *)0x0) {
            LOCK();
            plVar16 = local_170 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
              (**(code **)*local_170)(local_170);
              LOCK();
              piVar1 = (int *)((longlong)local_170 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_170 + 0x10))(local_170);
              }
            }
          }
          if (*(int *)(lVar4 + 0x50) == *(int *)(lVar4 + 0x7c)) goto LAB_140fd3dc3;
          lVar13 = *param_2;
          lVar14 = lVar4 + 0x80;
          if (*(longlong *)(lVar4 + 0x88) != 0) {
            lVar14 = *(longlong *)(lVar4 + 0x88);
          }
          iVar20 = *(int *)(lVar14 + (ulonglong)
                                     (*(int *)(lVar4 + 0x90) - 1U &
                                     (int)lVar13 + (int)((ulonglong)lVar13 >> 0x20) * 0x17) * 4);
          if (iVar20 == -1) goto LAB_140fd3dc3;
          lVar14 = *(longlong *)(lVar4 + 0x48);
          iVar19 = iVar20;
          goto LAB_140fd3d94;
        }
        iVar20 = *(int *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar20 * 0x18 + 0x10);
      } while (iVar20 != -1);
    }
  }
  goto LAB_140fd3c0a;
  while (iVar20 = *(int *)(lVar13 + (longlong)iVar20 * 0x18 + 0x10), iVar20 != -1) {
LAB_140fd33f9:
    if (*(longlong *)(lVar13 + (longlong)iVar20 * 0x18) == lVar4) {
      FUN_1449027d0(param_1,&local_178);
      lVar4 = *(longlong *)(local_178 + 0x240);
      local_1a0 = (PSRWLOCK)(lVar4 + 0xa0);
      AcquireSRWLockExclusive(local_1a0);
      if (local_170 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_170 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*local_170)(local_170);
          LOCK();
          piVar1 = (int *)((longlong)local_170 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_170 + 0x10))(local_170);
          }
        }
      }
      if (*(int *)(lVar4 + 0x50) == *(int *)(lVar4 + 0x7c)) goto LAB_140fd3bf5;
      lVar13 = *param_2;
      uVar15 = (int)lVar13 + (int)((ulonglong)lVar13 >> 0x20) * 0x17;
      lVar14 = *(longlong *)(lVar4 + 0x88);
      if (*(longlong *)(lVar4 + 0x88) == 0) {
        lVar14 = lVar4 + 0x80;
      }
      iVar20 = *(int *)(lVar14 + (ulonglong)(*(int *)(lVar4 + 0x90) - 1U & uVar15) * 4);
      if (iVar20 == -1) goto LAB_140fd3bf5;
      goto LAB_140fd34a0;
    }
  }
  goto LAB_140fd3c0a;
  while (iVar20 = *(int *)((longlong)iVar20 * 0x58 + *(longlong *)(lVar4 + 0x48) + 0x50),
        iVar20 != -1) {
LAB_140fd34a0:
    if (*(longlong *)(*(longlong *)(lVar4 + 0x48) + (longlong)iVar20 * 0x58) == lVar13) {
      if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
        lVar14 = param_1 + 0x188;
        if (*(longlong *)(param_1 + 400) != 0) {
          lVar14 = *(longlong *)(param_1 + 400);
        }
        iVar20 = *(int *)(lVar14 + (ulonglong)(*(int *)(param_1 + 0x198) - 1U & uVar15) * 4);
        if (iVar20 != -1) {
          lVar14 = *(longlong *)(param_1 + 0x150);
          iVar19 = iVar20;
          goto LAB_140fd34f3;
        }
      }
      break;
    }
  }
  goto LAB_140fd3bf5;
  while (iVar19 = *(int *)(lVar14 + (longlong)iVar19 * 0x18 + 0x10), iVar19 != -1) {
LAB_140fd34f3:
    if (*(longlong *)(lVar14 + (longlong)iVar19 * 0x18) == lVar13) goto LAB_140fd3504;
  }
  goto LAB_140fd3bf5;
  while (iVar19 = *(int *)((longlong)iVar19 * 0x58 + lVar14 + 0x50), iVar19 != -1) {
LAB_140fd3d94:
    if (*(longlong *)(lVar14 + (longlong)iVar19 * 0x58) == lVar13) goto LAB_140fd3da5;
  }
  goto LAB_140fd3dc3;
  while (iVar20 = *(int *)(lVar17 + 0x50), iVar20 != -1) {
LAB_140fd3da5:
    lVar17 = lVar14 + (longlong)iVar20 * 0x58;
    if (*(longlong *)(lVar14 + (longlong)iVar20 * 0x58) == lVar13) goto LAB_140fd3dba;
  }
  lVar17 = 0;
LAB_140fd3dba:
  *(int *)(lVar17 + 0x48) = *(int *)(lVar17 + 0x48) + 1;
  *(undefined2 *)(lVar17 + 0x11) = 0x100;
LAB_140fd3dc3:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0xa0));
  goto LAB_140fd3c0a;
  while (iVar20 = (int)plVar16[2], iVar20 != -1) {
LAB_140fd3504:
    plVar16 = (longlong *)(lVar14 + (longlong)iVar20 * 0x18);
    if (*plVar16 == lVar13) goto LAB_140fd3518;
  }
  plVar16 = (longlong *)0x0;
LAB_140fd3518:
  uVar12 = plVar16[1];
  local_1b0 = uVar12 >> 0x20;
  if (((local_1b0 != 0) && (uVar15 = (uint)uVar12, -1 < (int)uVar15)) &&
     ((int)uVar15 < DAT_14c9647dc)) {
    uVar6 = uVar15 & 0xffff;
    uVar18 = (ulonglong)((uint)(uVar12 >> 0x10) & 0x7fff);
    puVar10 = (undefined8 *)((ulonglong)(uVar6 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar18 * 8));
    if (((puVar10 != (undefined8 *)0x0) && (*(int *)(puVar10 + 2) == (int)(uVar12 >> 0x20))) &&
       ((*(uint *)(puVar10 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar10 + 1) & 0x10200000) == 0) {
        plVar16 = (longlong *)*puVar10;
      }
      else {
        plVar16 = (longlong *)0x0;
      }
      (**(code **)(*plVar16 + 0x2b0))(plVar16,&local_178);
      local_118 = local_158;
      uStack_114 = uStack_154;
      uStack_110 = uStack_150;
      uStack_10c = uStack_14c;
      uVar34 = (undefined4)local_148;
      uVar35 = (undefined4)((ulonglong)local_148 >> 0x20);
      local_108 = local_148;
      if ((((int)uVar15 < DAT_14c9647dc) &&
          (plVar16 = (longlong *)
                     ((ulonglong)(uVar6 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar18 * 8)),
          plVar16 != (longlong *)0x0)) &&
         (((int)plVar16[2] == (int)local_1b0 && ((*(uint *)(plVar16 + 1) & 0x10200000) == 0)))) {
        lVar13 = *plVar16;
      }
      else {
        lVar13 = 0;
      }
      if ((*(char *)(lVar13 + 0x60) == '\x01') && (*(longlong *)(lVar13 + 0x50) != 0)) {
        if (((int)uVar15 < DAT_14c9647dc) &&
           (((plVar16 = (longlong *)
                        ((ulonglong)(uVar6 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar18 * 8)),
             plVar16 != (longlong *)0x0 && ((int)plVar16[2] == (int)local_1b0)) &&
            ((*(uint *)(plVar16 + 1) & 0x10200000) == 0)))) {
          lVar13 = *plVar16;
        }
        else {
          lVar13 = 0;
        }
        if (*(char *)(lVar13 + 0x60) == '\x01') {
          lVar13 = *(longlong *)(lVar13 + 0x50);
        }
        else {
          lVar13 = 0;
        }
        uVar11 = FUN_140390f40();
        cVar7 = FUN_1448093f4(lVar13,uVar11);
        if ((lVar13 != 0) && (cVar7 != '\0')) {
          if (*(int *)(lVar4 + 0x50) != *(int *)(lVar4 + 0x7c)) {
            lVar14 = *param_2;
            lVar17 = lVar4 + 0x80;
            if (*(longlong *)(lVar4 + 0x88) != 0) {
              lVar17 = *(longlong *)(lVar4 + 0x88);
            }
            iVar20 = *(int *)(lVar17 + (ulonglong)
                                       (*(int *)(lVar4 + 0x90) - 1U &
                                       (int)lVar14 + (int)((ulonglong)lVar14 >> 0x20) * 0x17) * 4);
            if (iVar20 != -1) {
              do {
                lVar17 = *(longlong *)(lVar4 + 0x48) + (longlong)iVar20 * 0x58;
                if (*(longlong *)(*(longlong *)(lVar4 + 0x48) + (longlong)iVar20 * 0x58) == lVar14)
                goto LAB_140fd36fc;
                iVar20 = *(int *)(lVar17 + 0x50);
              } while (iVar20 != -1);
            }
          }
          lVar17 = 0;
LAB_140fd36fc:
          *(int *)(lVar17 + 0x48) = *(int *)(lVar17 + 0x48) + 1;
          lVar14 = DAT_14cbdbb28;
          if ((*(char *)(lVar13 + 0x120) == '\x01') && (*(char *)(param_1 + 0x200) == '\x01')) {
            if (*(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
                == 0x40000002) {
              uVar12 = 0;
            }
            else {
              bVar8 = FUN_144a61b4f();
              uVar12 = (ulonglong)(bVar8 ^ 1);
            }
            if (*(char *)(lVar14 + uVar12) != '\x01') goto LAB_140fd370d;
            FUN_1406a3d4e(param_1,lVar17 + 8,lVar13,&local_118);
            uVar34 = (undefined4)local_108;
            uVar35 = (undefined4)((ulonglong)local_108 >> 0x20);
            local_158 = local_118;
            uStack_154 = uStack_114;
            uStack_150 = uStack_110;
            uStack_14c = uStack_10c;
          }
          else {
LAB_140fd370d:
            uVar21 = FUN_1406a31d4(param_1,&local_118,lVar4 + 0x30,lVar4 + 0x38);
            *(undefined4 *)(lVar17 + 0x34) = uVar21;
          }
          dVar22 = (double)CONCAT44(uStack_154,local_158) - *(double *)(param_1 + 0x80);
          dVar23 = (double)CONCAT44(uStack_14c,uStack_150) - *(double *)(param_1 + 0x88);
          dVar23 = SQRT(dVar23 * dVar23 + dVar22 * dVar22) / 100.0;
          *(float *)(lVar17 + 0x18) =
               (float)(int)((ulonglong)(longlong)ROUND(dVar23 + dVar23 + 0.5) >> 1);
          dVar23 = *(double *)(param_1 + 0x70);
          dVar22 = *(double *)(param_1 + 0x60);
          dVar2 = *(double *)(param_1 + 0x68);
          dVar30 = dVar23 - dVar22 * 0.0;
          dVar31 = dVar22 * 0.0 - dVar2;
          dVar28 = dVar2 * 0.0 + dVar23 * -0.0;
          dVar31 = dVar31 + dVar31;
          dVar30 = dVar30 + dVar30;
          dVar28 = dVar28 + dVar28;
          dVar3 = *(double *)(param_1 + 0x78);
          dVar5 = ((double)CONCAT44(uVar35,uVar34) - *(double *)(param_1 + 0x90)) -
                  ((dVar22 * dVar30 - dVar28 * dVar2) + dVar3 * dVar31 + 0.0);
          dVar24 = ((double)CONCAT44(uStack_14c,uStack_150) - *(double *)(param_1 + 0x88)) -
                   ((dVar23 * dVar28 - dVar31 * dVar22) + dVar3 * dVar30 + 0.0);
          dVar22 = ((double)CONCAT44(uStack_154,local_158) - *(double *)(param_1 + 0x80)) -
                   ((dVar2 * dVar31 - dVar30 * dVar23) + dVar3 * dVar28 + 1.0);
          dVar23 = dVar5 * dVar5 + dVar22 * dVar22 + dVar24 * dVar24;
          if (((dVar23 != 1.0) || (local_188 = dVar5, dVar2 = dVar24, dVar3 = dVar22, NAN(dVar23)))
             && (local_188 = DAT_14c8464f0, dVar2 = DAT_14c8464e8, dVar3 = DAT_14c8464e0,
                9.99999993922529e-09 <= dVar23)) {
            dVar23 = 1.0 / SQRT(dVar23);
            local_188 = dVar5 * dVar23;
            dVar2 = dVar24 * dVar23;
            dVar3 = dVar22 * dVar23;
          }
          uVar32 = ~(uint)(-(ulonglong)(ABS(local_188) < 0.9998999834060669) >> 0x20) & 0x3ff00000;
          uVar33 = 0x3ff00000;
          if (0.9998999834060669 <= ABS(local_188)) {
            uVar33 = 0;
          }
          dVar22 = (double)((ulonglong)uVar32 << 0x20) * dVar2 + dVar3 * -0.0;
          dVar28 = (double)((ulonglong)uVar33 << 0x20) * dVar3 -
                   local_188 * (double)((ulonglong)uVar32 << 0x20);
          dVar24 = local_188 * 0.0 - dVar2 * (double)((ulonglong)uVar33 << 0x20);
          dVar23 = dVar22 * dVar22 + dVar24 * dVar24 + dVar28 * dVar28;
          if (((dVar23 != 1.0) || (dVar5 = dVar22, dVar30 = dVar28, local_1a8 = dVar24, NAN(dVar23))
              ) && (dVar5 = DAT_14c8464f0, dVar30 = DAT_14c8464e8, local_1a8 = DAT_14c8464e0,
                   9.99999993922529e-09 <= dVar23)) {
            dVar23 = 1.0 / SQRT(dVar23);
            dVar5 = dVar22 * dVar23;
            dVar30 = dVar28 * dVar23;
            local_1a8 = dVar24 * dVar23;
          }
          dVar23 = local_1a8 * dVar2;
          dVar28 = local_188 * local_1a8;
          uStack_180 = 0;
          dVar22 = dVar30 * local_188;
          if (((dVar3 != -dVar3) || (NAN(dVar3) || NAN(-dVar3))) || ((dVar2 != 0.0 || (NAN(dVar2))))
             ) {
            dVar24 = atan2(dVar2,dVar3);
            dVar24 = dVar24 * 57.29577951308232;
          }
          else {
            dVar24 = 0.0;
          }
          local_198 = dVar28 - dVar5 * dVar3;
          uStack_190 = 0;
          dVar28 = SQRT(dVar2 * dVar2 + dVar3 * dVar3);
          dVar31 = 0.0;
          if ((((local_188 != 0.0) || (NAN(local_188))) || (dVar28 != 0.0)) || (NAN(dVar28))) {
            dVar31 = atan2(local_188,dVar28);
            dVar31 = dVar31 * 57.29577951308232;
          }
          dVar25 = sin(dVar31 * 0.01745329238474369);
          dVar26 = sin(dVar24 * 0.01745329238474369);
          dVar27 = cos(dVar31 * 0.01745329238474369);
          dVar28 = cos(dVar24 * 0.01745329238474369);
          dVar29 = dVar25 * 0.0 * dVar28 - dVar26;
          dVar28 = dVar25 * 0.0 * dVar26 + dVar28;
          dVar24 = dVar5 * dVar27 * -0.0 + local_1a8 * dVar29 + dVar30 * dVar28;
          dVar23 = (dVar3 * dVar30 - dVar23) * dVar27 * -0.0 +
                   (dVar2 * dVar5 - dVar22) * dVar29 + local_198 * dVar28;
          if (((dVar23 != 0.0) || (NAN(dVar23))) || ((dVar24 != 0.0 || (NAN(dVar24))))) {
            atan2(dVar23,dVar24);
          }
          *(float *)(lVar17 + 0x1c) = (float)dVar31;
          *(longlong *)(lVar17 + 8) = lVar13;
          if ((((int)uVar15 < DAT_14c9647dc) &&
              (plVar16 = (longlong *)
                         ((ulonglong)(uVar6 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar18 * 8)),
              plVar16 != (longlong *)0x0)) &&
             (((int)plVar16[2] == (int)local_1b0 && ((*(uint *)(plVar16 + 1) & 0x10200000) == 0))))
          {
            lVar14 = *plVar16;
          }
          else {
            lVar14 = 0;
          }
          if (*(char *)(lVar14 + 0x60) == '\x01') {
            uVar9 = *(undefined1 *)(lVar14 + 0x58);
          }
          else {
            uVar9 = 0;
          }
          *(undefined1 *)(lVar17 + 0x14) = uVar9;
          *(undefined2 *)(lVar17 + 0x10) = 0x101;
          *(undefined1 *)(lVar17 + 0x12) = 0;
          *(undefined1 *)(lVar17 + 0x13) = local_f1;
          *(undefined4 *)(lVar17 + 0x20) = *(undefined4 *)(lVar13 + 0x188);
          *(undefined8 *)(lVar17 + 0x24) = *(undefined8 *)(lVar13 + 0x40);
          *(int *)(lVar4 + 0x98) = *(int *)(lVar4 + 0x98) + 1;
        }
      }
    }
  }
LAB_140fd3bf5:
  ReleaseSRWLockExclusive(local_1a0);
  FUN_1406a235e(param_1,2);
LAB_140fd3c0a:
  if ((local_f0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fd4038 FUN_140fd4038 body=574 status=ok
// SIG undefined FUN_140fd4038(void)

ulonglong FUN_140fd4038(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 unaff_RSI;
  ulonglong uVar11;
  bool bVar13;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  undefined7 uVar12;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  if ((((param_1 == 0) || (*(char *)(param_1 + 0x60) != '\x01')) ||
      (*(longlong *)(param_1 + 0x50) == 0)) ||
     (*(char *)(*(longlong *)(param_1 + 0x50) + 0x115) != '\0')) {
LAB_140fd417a:
    uVar11 = 0;
  }
  else {
    uVar12 = (undefined7)((ulonglong)unaff_RSI >> 8);
    uVar11 = CONCAT71(uVar12,1);
    if (*(char *)(param_1 + 0x58) != '\0') goto LAB_140fd417c;
    uVar9 = *(uint *)(param_1 + 0x40);
    uVar3 = *(uint *)(param_1 + 0x44);
    uVar10 = uVar3 & 2;
    uVar6 = (undefined1)(uVar10 >> 1);
    if ((uVar9 & 4) == 0) {
      *param_2 = uVar6;
      if ((uVar10 == 0 && ((uVar3 & 0x20) == 0 || (uVar9 & 0x10) != 0)) && (DAT_14cbd60c8 == '\0'))
      goto LAB_140fd417a;
    }
    else {
      *param_2 = uVar6;
    }
    if (DAT_14cba14f0 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_145885dac;
      local_48 = &LAB_148b9e16b;
      local_50 = FUN_140f505de;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x110;
      FUN_14081cfa3(L"/Script/OakGame",L"GbxDiscoveryProviderObject_OakMissionWaypoint",
                    &DAT_14cba14f0,&DAT_148b9e16a);
    }
    if (((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(DAT_14cba14f0 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cba14f0 + 0x38) * 8) != DAT_14cba14f0 + 0x30)) ||
       ((*(char *)(param_1 + 0xd8) != '\0' ||
        (plVar4 = *(longlong **)(param_1 + 0xd0), plVar4 == (longlong *)0x0)))) goto LAB_140fd417c;
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_140fd417c;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar13 = iVar8 == iVar5;
      if (bVar13) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar5 = iVar8;
      }
      iVar8 = iVar5;
      UNLOCK();
    } while (!bVar13);
    if (((*(longlong **)(param_1 + 200) == (longlong *)0x0) ||
        (uVar9 = (**(code **)(**(longlong **)(param_1 + 200) + 0x20))(), (uVar9 >> 9 & 1) != 0)) ||
       (cVar7 = FUN_140fd4278(param_1), cVar7 != '\0')) {
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) goto LAB_140fd417c;
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar8 = *piVar2;
      UNLOCK();
      uVar11 = CONCAT71(uVar12,1);
    }
    else {
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) goto LAB_140fd417a;
      (**(code **)*plVar4)(plVar4);
      uVar11 = 0;
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar8 = *piVar2;
      UNLOCK();
    }
    if (iVar8 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_140fd417c:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fd4278 FUN_140fd4278 body=194 status=ok
// SIG undefined FUN_140fd4278(void)

ulonglong FUN_140fd4278(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 unaff_RDI;
  ulonglong uVar9;
  bool bVar10;
  
  plVar2 = *(longlong **)(param_1 + 0xd0);
  if (plVar2 == (longlong *)0x0) {
LAB_140fd431d:
    uVar9 = 0;
    goto LAB_140fd42c8;
  }
  iVar5 = (int)plVar2[1];
  do {
    if (iVar5 == 0) goto LAB_140fd431d;
    LOCK();
    iVar3 = (int)plVar2[1];
    bVar10 = iVar5 == iVar3;
    if (bVar10) {
      *(int *)(plVar2 + 1) = iVar5 + 1;
      iVar3 = iVar5;
    }
    iVar5 = iVar3;
    UNLOCK();
  } while (!bVar10);
  plVar6 = *(longlong **)(param_1 + 200);
  if (plVar6 == (longlong *)0x0) {
LAB_140fd4319:
    uVar9 = 0;
  }
  else {
    cVar4 = (**(code **)(*plVar6 + 8))(plVar6);
    uVar9 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (cVar4 != '\x01') {
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x30))(plVar6);
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
        lVar8 = FUN_14060edb4();
        if ((((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
            (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
             lVar8 + 0x30)) && ((int)plVar6[6] != 0)) goto LAB_140fd42c2;
      }
      goto LAB_140fd4319;
    }
  }
LAB_140fd42c2:
  LOCK();
  plVar6 = plVar2 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
LAB_140fd42c8:
  return uVar9 & 0xffffffff;
}



// FUNCTION 140fd433a FUN_140fd433a body=2627 status=ok
// SIG undefined FUN_140fd433a(void)

void FUN_140fd433a(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  void *_Src;
  void *_Dst;
  undefined4 *puVar4;
  float *pfVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  char cVar19;
  byte bVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  int iVar29;
  double dVar30;
  uint uVar31;
  undefined4 uVar32;
  undefined1 auStack_208 [40];
  double local_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined1 uStack_1b0;
  undefined1 uStack_1af;
  undefined1 uStack_1ae;
  undefined1 uStack_1ad;
  undefined1 uStack_1ac;
  undefined1 uStack_1ab;
  undefined2 uStack_1aa;
  float local_1a8;
  undefined8 uStack_1a4;
  undefined8 uStack_19c;
  undefined8 uStack_194;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  longlong *local_170;
  double local_158;
  double dStack_150;
  undefined1 local_148 [16];
  undefined1 local_118 [16];
  double local_108;
  undefined1 local_f1;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_f1 = 0;
  uVar21 = FUN_140fd4038(param_3);
  cVar19 = FUN_140fd4d7e(param_1,param_2,param_3,uVar21);
  if (cVar19 == '\0') goto LAB_140fd43f5;
  FUN_1449027d0(param_1,&local_178);
  lVar9 = *(longlong *)(local_178 + 0x240);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0xa0));
  *(int *)(lVar9 + 0x98) = *(int *)(lVar9 + 0x98) + 1;
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_170 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar2 = (int *)((longlong)local_170 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_170 + 0x10))(local_170);
      }
    }
  }
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 0x2b0))(param_3,&local_178);
    dVar14 = local_148._0_8_;
    uVar21 = local_148._8_4_;
    uVar32 = local_148._12_4_;
    local_108 = dVar14;
    if (((char)param_3[0xc] == '\x01') && (lVar26 = param_3[10], lVar26 != 0)) {
      uVar24 = FUN_140390f40();
      cVar19 = FUN_1448093f4(lVar26,uVar24);
      lVar27 = DAT_14cbdbb28;
      if (cVar19 != '\0') {
        local_1b8 = 0;
        uStack_1b0 = 1;
        uStack_1a4 = 0x100000000;
        uStack_1af = 0;
        uStack_1ae = 0;
        uStack_1ad = 0;
        uStack_1ac = 0;
        uStack_1ab = 0;
        uStack_19c = 0;
        uStack_194 = 0;
        uStack_18c = 0;
        local_188 = (undefined4)DAT_14c8463f0;
        uStack_184 = DAT_14c8463f0._4_4_;
        uStack_180 = (undefined4)DAT_14c8463f8;
        uStack_17c = DAT_14c8463f8._4_4_;
        if ((*(char *)(lVar26 + 0x120) == '\x01') && (*(char *)(param_1 + 0x200) == '\x01')) {
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
              == 0x40000002) {
            uVar25 = 0;
          }
          else {
            bVar20 = FUN_144a61b4f();
            uVar25 = (ulonglong)(bVar20 ^ 1);
          }
          if (*(char *)(lVar27 + uVar25) != '\x01') goto LAB_140fd4597;
          FUN_1406a3d4e(param_1,&local_1b8,lVar26,local_118);
        }
        else {
LAB_140fd4597:
          uStack_18c = FUN_1406a31d4(param_1,local_118,lVar9 + 0x30,lVar9 + 0x38);
        }
        local_158 = local_158 - *(double *)(param_1 + 0x80);
        dStack_150 = dStack_150 - *(double *)(param_1 + 0x88);
        dVar11 = SQRT(dStack_150 * dStack_150 + local_158 * local_158) / 100.0;
        local_1a8 = (float)(int)((ulonglong)(longlong)ROUND(dVar11 + dVar11 + 0.5) >> 1);
        dVar11 = *(double *)(param_1 + 0x70);
        dVar6 = *(double *)(param_1 + 0x60);
        dVar7 = *(double *)(param_1 + 0x68);
        dVar16 = dVar11 - dVar6 * 0.0;
        dVar30 = dVar6 * 0.0 - dVar7;
        dVar17 = dVar7 * 0.0 + dVar11 * -0.0;
        dVar30 = dVar30 + dVar30;
        dVar16 = dVar16 + dVar16;
        dVar17 = dVar17 + dVar17;
        dVar8 = *(double *)(param_1 + 0x78);
        uVar28 = 0x3ff00000;
        dVar18 = (dVar14 - *(double *)(param_1 + 0x90)) -
                 ((dVar6 * dVar16 - dVar17 * dVar7) + dVar8 * dVar30 + 0.0);
        dVar6 = dStack_150 - ((dVar11 * dVar17 - dVar30 * dVar6) + dVar8 * dVar16 + 0.0);
        dVar11 = local_158 - ((dVar7 * dVar30 - dVar16 * dVar11) + dVar8 * dVar17 + 1.0);
        dVar14 = dVar18 * dVar18 + dVar11 * dVar11 + dVar6 * dVar6;
        if ((dVar14 != 1.0) || (NAN(dVar14))) {
          if (dVar14 < 9.99999993922529e-09) {
            uVar21 = 0;
            uVar32 = 0;
            dVar18 = DAT_14c8464f0;
            dVar6 = DAT_14c8464e8;
            dVar11 = DAT_14c8464e0;
          }
          else {
            dVar14 = 1.0 / SQRT(dVar14);
            dVar18 = dVar18 * dVar14;
            dVar6 = dVar6 * dVar14;
            dVar11 = dVar11 * dVar14;
          }
        }
        uVar31 = ~(uint)(-(ulonglong)(ABS(dVar18) < 0.9998999834060669) >> 0x20) & 0x3ff00000;
        if (0.9998999834060669 <= ABS(dVar18)) {
          uVar28 = 0;
        }
        dVar7 = (double)((ulonglong)uVar31 << 0x20) * dVar6 + dVar11 * -0.0;
        dVar8 = (double)((ulonglong)uVar28 << 0x20) * dVar11 -
                dVar18 * (double)((ulonglong)uVar31 << 0x20);
        dVar16 = dVar18 * 0.0 - dVar6 * (double)((ulonglong)uVar28 << 0x20);
        dVar14 = dVar7 * dVar7 + dVar16 * dVar16 + dVar8 * dVar8;
        if (((dVar14 != 1.0) || (dVar17 = dVar7, dVar30 = dVar8, local_1e0 = dVar16, NAN(dVar14)))
           && (dVar17 = DAT_14c8464f0, dVar30 = DAT_14c8464e8, local_1e0 = DAT_14c8464e0,
              9.99999993922529e-09 <= dVar14)) {
          dVar14 = 1.0 / SQRT(dVar14);
          dVar17 = dVar7 * dVar14;
          dVar30 = dVar8 * dVar14;
          local_1e0 = dVar16 * dVar14;
        }
        dVar7 = local_1e0 * dVar6;
        dVar14 = dVar18 * local_1e0;
        local_1c8._8_4_ = uVar21;
        local_1c8._0_8_ = dVar18;
        local_1c8._12_4_ = uVar32;
        if (((dVar11 != -dVar11) || (NAN(dVar11) || NAN(-dVar11))) ||
           ((dVar6 != 0.0 || (NAN(dVar6))))) {
          dVar8 = atan2(dVar6,dVar11);
          dVar8 = dVar8 * 57.29577951308232;
        }
        else {
          dVar8 = 0.0;
        }
        local_1d8._8_4_ = uVar21;
        local_1d8._0_8_ = dVar14 - dVar17 * dVar11;
        local_1d8._12_4_ = uVar32;
        dVar16 = SQRT(dVar6 * dVar6 + dVar11 * dVar11);
        dVar14 = 0.0;
        if ((((double)local_1c8._0_8_ != 0.0) || (NAN((double)local_1c8._0_8_))) ||
           ((dVar16 != 0.0 || (NAN(dVar16))))) {
          dVar14 = atan2((double)local_1c8._0_8_,dVar16);
          dVar14 = dVar14 * 57.29577951308232;
        }
        dVar16 = sin(dVar14 * 0.01745329238474369);
        dVar12 = sin(dVar8 * 0.01745329238474369);
        dVar13 = cos(dVar14 * 0.01745329238474369);
        dVar8 = cos(dVar8 * 0.01745329238474369);
        dVar15 = dVar16 * 0.0 * dVar8 - dVar12;
        dVar8 = dVar16 * 0.0 * dVar12 + dVar8;
        dVar16 = dVar17 * dVar13 * -0.0 + local_1e0 * dVar15 + dVar30 * dVar8;
        dVar11 = (dVar11 * dVar30 - dVar7) * dVar13 * -0.0 +
                 (dVar6 * dVar17 - dVar30 * dVar18) * dVar15 + (double)local_1d8._0_8_ * dVar8;
        if ((((dVar11 != 0.0) || (NAN(dVar11))) || (dVar16 != 0.0)) || (NAN(dVar16))) {
          atan2(dVar11,dVar16);
        }
        uStack_1b0 = 1;
        uStack_1af = 1;
        uStack_1ae = 0;
        if ((char)param_3[0xc] == '\x01') {
          uStack_1ac = (undefined1)param_3[0xb];
        }
        else {
          uStack_1ac = 0;
        }
        uStack_1ad = local_f1;
        uStack_1a4 = CONCAT44(*(undefined4 *)(lVar26 + 0x188),(float)dVar14);
        uStack_19c = *(undefined8 *)(lVar26 + 0x40);
        uStack_194 = *(undefined8 *)(lVar26 + 0x118);
        plVar1 = (longlong *)(lVar9 + 0x48);
        local_1b8 = lVar26;
        if (*(int *)(lVar9 + 0x7c) == 0) {
          iVar29 = *(int *)(lVar9 + 0x50);
          *(int *)(lVar9 + 0x50) = iVar29 + 1;
          if (*(int *)(lVar9 + 0x54) == iVar29) {
            FUN_1403e7a24(plVar1,iVar29);
          }
          lVar27 = (longlong)iVar29;
          iVar23 = FUN_144a54ea4(lVar9 + 0x58,1);
          lVar26 = *(longlong *)(lVar9 + 0x68);
          if (*(longlong *)(lVar9 + 0x68) == 0) {
            lVar26 = lVar9 + 0x58;
          }
          iVar22 = iVar23 + 0x1f;
          if (-1 < iVar23) {
            iVar22 = iVar23;
          }
          bVar20 = (byte)iVar23 & 0x1f;
          puVar3 = (uint *)(lVar26 + (longlong)(iVar22 >> 5) * 4);
          *puVar3 = *puVar3 & (-2 << bVar20 | 0xfffffffeU >> 0x20 - bVar20);
        }
        else {
          iVar29 = *(int *)(lVar9 + 0x78);
          lVar27 = (longlong)iVar29;
          iVar23 = *(int *)(*(longlong *)(lVar9 + 0x48) + 4 + lVar27 * 0x58);
          *(int *)(lVar9 + 0x78) = iVar23;
          iVar22 = *(int *)(lVar9 + 0x7c) + -1;
          *(int *)(lVar9 + 0x7c) = iVar22;
          if (iVar22 != 0) {
            *(undefined4 *)(*(longlong *)(lVar9 + 0x48) + (longlong)iVar23 * 0x58) = 0xffffffff;
          }
        }
        iVar23 = 1;
        lVar26 = lVar9 + 0x58;
        if (*(longlong *)(lVar9 + 0x68) != 0) {
          lVar26 = *(longlong *)(lVar9 + 0x68);
        }
        iVar22 = iVar29 + 0x1f;
        if (-1 < iVar29) {
          iVar22 = iVar29;
        }
        puVar3 = (uint *)(lVar26 + (longlong)(iVar22 >> 5) * 4);
        *puVar3 = *puVar3 | 1 << ((byte)iVar29 & 0x1f);
        lVar26 = *(longlong *)(lVar9 + 0x48);
        lVar27 = lVar27 * 0x58;
        _Src = (void *)(lVar26 + lVar27);
        lVar10 = *param_2;
        *(longlong *)(lVar26 + lVar27) = lVar10;
        puVar4 = (undefined4 *)(lVar26 + 8 + lVar27);
        *puVar4 = (undefined4)local_1b8;
        puVar4[1] = local_1b8._4_4_;
        puVar4[2] = CONCAT13(uStack_1ad,CONCAT12(uStack_1ae,CONCAT11(uStack_1af,uStack_1b0)));
        puVar4[3] = CONCAT22(uStack_1aa,CONCAT11(uStack_1ab,uStack_1ac));
        pfVar5 = (float *)(lVar26 + 0x18 + lVar27);
        *pfVar5 = local_1a8;
        pfVar5[1] = (float)uStack_1a4;
        pfVar5[2] = uStack_1a4._4_4_;
        pfVar5[3] = (float)uStack_19c;
        puVar4 = (undefined4 *)(lVar26 + 0x28 + lVar27);
        *puVar4 = uStack_19c._4_4_;
        puVar4[1] = (undefined4)uStack_194;
        puVar4[2] = uStack_194._4_4_;
        puVar4[3] = uStack_18c;
        puVar4 = (undefined4 *)(lVar26 + 0x38 + lVar27);
        *puVar4 = local_188;
        puVar4[1] = uStack_184;
        puVar4[2] = uStack_180;
        puVar4[3] = uStack_17c;
        *(undefined4 *)(lVar26 + 0x48 + lVar27) = 0;
        *(undefined4 *)(lVar26 + 0x50 + lVar27) = 0xffffffff;
        uVar28 = (int)((ulonglong)lVar10 >> 0x20) * 0x17 + (int)lVar10;
        uVar31 = *(int *)(lVar9 + 0x50) - *(int *)(lVar9 + 0x7c);
        if ((uVar31 != 0) && (uVar31 != 1)) {
          lVar26 = lVar9 + 0x80;
          if (*(longlong *)(lVar9 + 0x88) != 0) {
            lVar26 = *(longlong *)(lVar9 + 0x88);
          }
          iVar22 = *(int *)(lVar26 + (ulonglong)(*(int *)(lVar9 + 0x90) - 1U & uVar28) * 4);
          if (iVar22 != -1) {
            do {
              _Dst = (void *)(*plVar1 + (longlong)iVar22 * 0x58);
              if (*(longlong *)(*plVar1 + (longlong)iVar22 * 0x58) == lVar10) {
                memmove(_Dst,_Src,0x50);
                FUN_140fb774c(plVar1,iVar29);
                goto LAB_140fd4bd4;
              }
              iVar22 = *(int *)((longlong)_Dst + 0x50);
            } while (iVar22 != -1);
          }
        }
        if (3 < uVar31) {
          uVar25 = (ulonglong)(uVar31 & 0xfffffffe) + 0xf;
          lVar26 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          iVar23 = 1 << ((byte)lVar26 & 0x1f);
        }
        if (((int)uVar31 < 1) || (iVar23 <= *(int *)(lVar9 + 0x90))) {
          uVar28 = *(int *)(lVar9 + 0x90) - 1U & uVar28;
          *(uint *)((longlong)_Src + 0x54) = uVar28;
          lVar26 = *(longlong *)(lVar9 + 0x88);
          if (*(longlong *)(lVar9 + 0x88) == 0) {
            lVar26 = lVar9 + 0x80;
          }
          *(undefined4 *)((longlong)_Src + 0x50) =
               *(undefined4 *)
                (lVar26 + ((longlong)*(int *)(lVar9 + 0x90) - 1U & (longlong)(int)uVar28) * 4);
          lVar26 = *(longlong *)(lVar9 + 0x88);
          if (*(longlong *)(lVar9 + 0x88) == 0) {
            lVar26 = lVar9 + 0x80;
          }
          *(int *)(lVar26 + ((longlong)*(int *)(lVar9 + 0x90) - 1U & (longlong)(int)uVar28) * 4) =
               iVar29;
        }
        else {
          *(int *)(lVar9 + 0x90) = iVar23;
          FUN_140fd54cc(plVar1);
        }
      }
    }
  }
LAB_140fd4bd4:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0xa0));
LAB_140fd43f5:
  FUN_1406a235e(param_1,2);
  if ((local_f0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fd4d7e FUN_140fd4d7e body=525 status=ok
// SIG undefined FUN_140fd4d7e(void)

undefined8 FUN_140fd4d7e(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x150);
  if (param_4 == '\0') {
    if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
      lVar6 = *param_2;
      lVar5 = param_1 + 0x188;
      if (*(longlong *)(param_1 + 400) != 0) {
        lVar5 = *(longlong *)(param_1 + 400);
      }
      iVar3 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(param_1 + 0x198) - 1U &
                               (int)lVar6 + (int)((ulonglong)lVar6 >> 0x20) * 0x17) * 4);
      if (iVar3 != -1) {
        do {
          if (*(longlong *)(*plVar1 + (longlong)iVar3 * 0x18) == lVar6) {
            FUN_140e0b1f6(plVar1,param_2);
            goto LAB_140fd4e30;
          }
          iVar3 = *(int *)(*plVar1 + (longlong)iVar3 * 0x18 + 0x10);
          uVar2 = 0;
        } while (iVar3 != -1);
        goto LAB_140fd4e32;
      }
    }
LAB_140fd4f2d:
    uVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
      lVar6 = *param_2;
      lVar5 = param_1 + 0x188;
      if (*(longlong *)(param_1 + 400) != 0) {
        lVar5 = *(longlong *)(param_1 + 400);
      }
      iVar3 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(param_1 + 0x198) - 1U &
                               (int)lVar6 + (int)((ulonglong)lVar6 >> 0x20) * 0x17) * 4);
      if (iVar3 != -1) {
        do {
          if (*(longlong *)(*plVar1 + (longlong)iVar3 * 0x18) == lVar6) goto LAB_140fd4f2d;
          iVar3 = *(int *)(*plVar1 + (longlong)iVar3 * 0x18 + 0x10);
        } while (iVar3 != -1);
      }
    }
    local_2c = 0;
    if (param_3 == 0) {
      local_30 = 0;
      iVar3 = 0;
    }
    else {
      local_30 = *(uint *)(param_3 + 0xc);
      if ((int)local_30 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((local_30 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar3 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar4 = DAT_14c964868 + 1;
        bVar7 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar7) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar4);
        }
        LOCK();
        iVar3 = *(int *)(lVar6 + 0x10);
        bVar7 = iVar3 == 0;
        if (bVar7) {
          *(int *)(lVar6 + 0x10) = iVar4;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar7) {
          iVar3 = iVar4;
        }
      }
    }
    local_2c = iVar3;
    FUN_140fd4f8c(plVar1,(int)((ulonglong)*param_2 >> 0x20) * 0x17 + (int)*param_2,param_2);
LAB_140fd4e30:
    uVar2 = 1;
  }
LAB_140fd4e32:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 140fd4f8c FUN_140fd4f8c body=198 status=ok
// SIG undefined FUN_140fd4f8c(void)

longlong * FUN_140fd4f8c(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_140fd500b;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_4;
  FUN_140fd5054(param_1,&local_1c,param_2,&local_30);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_140fd500b:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 140fd5054 FUN_140fd5054 body=307 status=ok
// SIG undefined FUN_140fd5054(void)

undefined4 *
FUN_140fd5054(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140fd521a(param_1,local_58);
  puVar1 = (undefined8 *)param_4[1];
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = *puVar1;
  *(undefined4 *)(local_50 + 2) = 0xffffffff;
  local_68 = param_5;
  cVar2 = FUN_140fd5188(param_1,param_3,local_50,local_58);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar3 < 4) {
      iVar5 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_50 + 0x14) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 2) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140fd5302(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fd5188 FUN_140fd5188 body=146 status=ok
// SIG undefined FUN_140fd5188(void)

void FUN_140fd5188(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  
  uVar5 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar5 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 == -1) {
      uVar5 = 0;
    }
    else {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_140e0b388((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
    }
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 140fd521a FUN_140fd521a body=232 status=ok
// SIG undefined FUN_140fd521a(void)

int * FUN_140fd521a(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 140fd5302 FUN_140fd5302 body=456 status=ok
// SIG undefined FUN_140fd5302(void)

void FUN_140fd5302(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)((int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 140fd54cc FUN_140fd54cc body=456 status=ok
// SIG undefined FUN_140fd54cc(void)

void FUN_140fd54cc(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x58;
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



// FUNCTION 140fd5696 FUN_140fd5696 body=146 status=ok
// SIG undefined FUN_140fd5696(void)

void FUN_140fd5696(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x378);
  if (lVar1 != 0) {
    lVar3 = FUN_140fd5728();
    if ((((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) && ((*(byte *)(lVar1 + 0xc90) & 4) != 0)) &&
       (lVar1 = *(longlong *)(param_1 + 0xd0), lVar1 != 0)) {
      lVar3 = FUN_144a2f878();
      if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
         (plVar2 = *(longlong **)(&DAT_00006850 + lVar1), plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140fd5725. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0xf18))(plVar2,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140fd5728 FUN_140fd5728 body=228 status=ok
// SIG undefined FUN_140fd5728(void)

longlong FUN_140fd5728(void)

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
  if (DAT_14cba91e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a7ef7e;
    local_38 = &LAB_148c02a19;
    local_40 = &LAB_1457e3888;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xc98;
    FUN_14081cfa3(L"/Script/OakGame",L"OakControlledMove",&DAT_14cba91e8,&DAT_148c02a18);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba91e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fd580e FUN_140fd580e body=268 status=ok
// SIG undefined FUN_140fd580e(void)

void FUN_140fd580e(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  memset(param_2 + 2,0,0x138);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b1e5a50;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  lVar1 = FUN_140fd591a();
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[4] = *(undefined8 *)(lVar1 + 0x20);
  uVar2 = FUN_14477b664(*(undefined8 *)(lVar1 + 0x28));
  uVar2 = FUN_14477b664(uVar2);
  param_2[5] = uVar2;
  param_2[6] = *(undefined8 *)(lVar1 + 0x30);
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined8 *)((longlong)param_2 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x9c) = 0;
  param_2[0x15] = 0;
  *(undefined4 *)(param_2 + 0x16) = 0;
  param_2[0x1b] = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  *(undefined8 *)((longlong)param_2 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0xec) = 0;
  param_2[0x1f] = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined2 *)(param_2 + 0x21) = 0;
  param_2[0x28] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  return;
}



// FUNCTION 140fd591a FUN_140fd591a body=594 status=ok
// SIG undefined FUN_140fd591a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140fd591a(void)

{
  ushort uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cb897b8 == (longlong *)0x0) {
    _DAT_14cb897f8 = 0;
    _DAT_14cb89800 = 0;
    _DAT_14cb897e8 = 0;
    _DAT_14cb897f0 = 0;
    _DAT_14cb897d8 = 0;
    _DAT_14cb897e0 = 0;
    DAT_14cb897c8 = 0;
    _DAT_14cb897d0 = 0;
    _DAT_14cb89808 = 0;
    _DAT_14cb897c0 = &PTR_FUN_14a171dc0;
    FUN_144a319ae(&DAT_14cb897c8);
    _DAT_14cb897d8 = CONCAT44(DAT_14cb897d8_4,0xffffffff);
    _DAT_14cb897c0 = &PTR_FUN_14b181d90;
    _DAT_14cb897e0 = 0;
    _DAT_14cb897e8 = 0;
    _DAT_14cb897f0 = 0;
    _DAT_14cb897f8 = 0;
    _DAT_14cb89800 = 0;
    _DAT_14cb89808 = 0;
    DAT_14cb897b8 = (longlong *)&DAT_14cb897c0;
  }
  plVar3 = DAT_14cb897b8;
  plVar2 = DAT_14cb897b8 + 1;
  cVar4 = (char)DAT_14cb897b8[2];
  plVar6 = plVar2;
  if (cVar4 == '\0') {
LAB_140fd5953:
    if (*plVar6 == 0) goto LAB_140fd5aa6;
    plVar6 = plVar2;
    if (cVar4 == '\0') {
LAB_140fd5968:
      if (*plVar6 == 0) goto LAB_140fd5a33;
      if ((((int)DAT_14cb897b8[3] == *(int *)(*plVar6 + 0x44)) || (DAT_14c9a1ab0 == 0)) ||
         (*plVar2 == 0)) goto LAB_140fd5980;
      uVar1 = *(ushort *)(*plVar2 + 0x28);
      if ((((short)uVar1 < 0) || (*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1)) ||
         (plVar2 = *(longlong **)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8),
         plVar2 == (longlong *)0x0)) goto LAB_140fd5980;
      cVar4 = (**(code **)(*plVar2 + 0x2a8))(plVar2,DAT_14cb897b8);
    }
    else {
      if (cVar4 == '\x02') {
        plVar6 = (longlong *)(*plVar2 + 0x30);
        goto LAB_140fd5968;
      }
LAB_140fd5a33:
      if ((DAT_14c9a1ab0 == 0) || (*plVar2 == 0)) goto LAB_140fd5980;
      uVar1 = *(ushort *)(*plVar2 + 0x28);
      if (((short)uVar1 < 0) ||
         ((*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1 ||
          (plVar2 = *(longlong **)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8),
          plVar2 == (longlong *)0x0)))) goto LAB_140fd5980;
      cVar4 = (**(code **)(*plVar2 + 0x2a0))(plVar2,DAT_14cb897b8);
    }
    if (cVar4 == '\0') goto LAB_140fd5980;
  }
  else {
    if (cVar4 == '\x02') {
      plVar6 = (longlong *)(*plVar2 + 0x30);
      goto LAB_140fd5953;
    }
LAB_140fd5aa6:
    lVar5 = FUN_140162146();
    if (lVar5 == 0) goto LAB_140fd5980;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    FUN_1446ddda2(&local_58,"def_globals_progression",0);
    FUN_140024ada(&local_58,plVar3);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar3 + 0x20))(plVar3);
LAB_140fd5980:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 140fd5b74 FUN_140fd5b74 body=57 status=ok
// SIG undefined FUN_140fd5b74(void)

void FUN_140fd5b74(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa9d38 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caa9d38 = FUN_140002ddd(FUN_14632f3c5,uVar1,L"AnimNode_ModifyBone");
  }
  return;
}



// FUNCTION 140fd5bbc FUN_140fd5bbc body=40 status=ok
// SIG undefined FUN_140fd5bbc(void)

undefined8 FUN_140fd5bbc(undefined8 param_1,int param_2)

{
  FUN_140fd5be4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fd5be4 FUN_140fd5be4 body=405 status=ok
// SIG undefined FUN_140fd5be4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fd5be4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b280d90;
  FUN_140fd5d7a(param_1[0x173],*(undefined4 *)(param_1 + 0x174));
  if (param_1[0x173] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x156] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x142] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x140] != 0) {
    FUN_1400020a8();
  }
  param_1[0x18] = &PTR_FUN_14b280240;
  if (param_1[0x13e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12d] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = &PTR_FUN_14b280800;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fd5d79(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b1a53d0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140fd5d39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140fd5d79 FUN_140fd5d79 body=1 status=ok
// SIG undefined FUN_140fd5d79(void)

void FUN_140fd5d79(void)

{
  return;
}



// FUNCTION 140fd5d7a FUN_140fd5d7a body=83 status=ok
// SIG undefined FUN_140fd5d7a(void)

void FUN_140fd5d7a(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b27ff60;
    if (param_1[0x16] != 0) {
      FUN_1400020a8();
    }
    if (param_1[0x11] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x18;
  }
  return;
}



// FUNCTION 140fd5dce FUN_140fd5dce body=12 status=ok
// SIG undefined FUN_140fd5dce(void)

void FUN_140fd5dce(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140fd5dd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140fd5dda FUN_140fd5dda body=31 status=ok
// SIG undefined FUN_140fd5dda(void)

undefined8 FUN_140fd5dda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fd5dfa FUN_140fd5dfa body=29 status=ok
// SIG undefined FUN_140fd5dfa(void)

void FUN_140fd5dfa(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 140fd5e18 FUN_140fd5e18 body=31 status=ok
// SIG undefined FUN_140fd5e18(void)

undefined8 FUN_140fd5e18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fd5e38 FUN_140fd5e38 body=40 status=ok
// SIG undefined FUN_140fd5e38(void)

undefined8 FUN_140fd5e38(undefined8 param_1,int param_2)

{
  FUN_140fd5e60();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fd5e60 FUN_140fd5e60 body=514 status=ok
// SIG undefined FUN_140fd5e60(void)

void FUN_140fd5e60(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2c8d20;
  param_1[6] = &PTR_FUN_14b2c9010;
  plVar1 = param_1 + 0x61;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x65) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 100)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 100)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x59;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x5d) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x5c)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x5c)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_14079c534(param_1[0x47],*(undefined4 *)(param_1 + 0x48));
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  FUN_140fd6062(param_1[0x45],*(undefined4 *)(param_1 + 0x46));
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x35;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x39) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x38)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x38)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x2d;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x31) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x30)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x30)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_14079c534(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1408ee338(param_1);
  return;
}



// FUNCTION 140fd6062 FUN_140fd6062 body=321 status=ok
// SIG undefined FUN_140fd6062(void)

void FUN_140fd6062(longlong param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  if (param_2 != 0) {
    puVar5 = (undefined8 *)(param_1 + 200);
    do {
      plVar1 = puVar5 + 8;
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar5 + 0xc) * 0x120));
      if (pcVar2 != (code *)0x0) {
        plVar4 = plVar1;
        if (0x18 < *(ushort *)(puVar5 + 0xb)) {
          plVar4 = (longlong *)*plVar1;
        }
        (*pcVar2)(plVar4);
      }
      if (0x18 < *(ushort *)(puVar5 + 0xb)) {
        FUN_1400020a8(*plVar1);
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar5 + 4) * 0x120));
      if (pcVar2 != (code *)0x0) {
        puVar3 = puVar5;
        if (0x18 < *(ushort *)(puVar5 + 3)) {
          puVar3 = (undefined8 *)*puVar5;
        }
        (*pcVar2)(puVar3);
      }
      if (0x18 < *(ushort *)(puVar5 + 3)) {
        FUN_1400020a8(*puVar5);
      }
      FUN_14079c534(puVar5[-0x12],*(undefined4 *)(puVar5 + -0x11));
      if (puVar5[-0x12] != 0) {
        FUN_1400020a8();
      }
      plVar1 = puVar5 + -0x18;
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar5 + -0x14) * 0x120));
      if (pcVar2 != (code *)0x0) {
        plVar4 = plVar1;
        if (0x18 < *(ushort *)(puVar5 + -0x15)) {
          plVar4 = (longlong *)*plVar1;
        }
        (*pcVar2)(plVar4);
      }
      if (0x18 < *(ushort *)(puVar5 + -0x15)) {
        FUN_1400020a8(*plVar1);
      }
      puVar5 = puVar5 + 0x31;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140fd61a4 FUN_140fd61a4 body=2287 status=ok
// SIG undefined FUN_140fd61a4(void)

void FUN_140fd61a4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  ulonglong uVar4;
  size_t sVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  char *pcVar13;
  longlong *plVar14;
  char *pcVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_b8 [36];
  undefined8 local_94;
  undefined4 local_8c;
  longlong local_88;
  int local_80;
  int local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  char *local_68;
  int local_60;
  undefined1 local_5c;
  uint local_58;
  undefined4 uStack_54;
  longlong *local_50;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x70) != 0) goto LAB_140fd61cb;
  local_60 = DAT_14cb863d8;
  local_68 = DAT_14cb863d0;
  FUN_1448075d0(&local_58);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar9 = &DAT_14c9a1288;
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
      plVar14 = plVar9 + 8;
      if ((longlong *)plVar9[9] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar9[9];
      }
      iVar8 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar9[10] - 1U & local_58) * 4);
      if (iVar8 != -1) {
        do {
          lVar12 = *plVar9 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar9 + (longlong)iVar8 * 0x40) == local_58) {
            if ((((lVar12 != 0) &&
                 (puVar10 = (undefined8 *)(lVar12 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                ((byte *)*puVar10 != (byte *)0x0)) && ((*(byte *)*puVar10 & 0x40) == 0))
            goto LAB_140fd6290;
            break;
          }
          iVar8 = *(int *)(lVar12 + 0x38);
        } while (iVar8 != -1);
      }
    }
  }
  puVar10 = &DAT_14c9a1308;
LAB_140fd6290:
  pbVar2 = (byte *)*puVar10;
  if (((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) ||
     (pcVar13 = *(char **)(pbVar2 + 8), pcVar13 == (char *)0x0)) {
LAB_140fd629c:
    uVar4 = 0;
    uVar17 = 0;
  }
  else {
    sVar5 = strlen(pcVar13);
    iVar8 = (int)sVar5;
    if (iVar8 == 0) goto LAB_140fd629c;
    lVar12 = (longlong)iVar8;
    pcVar15 = pcVar13 + lVar12 + -1;
    uVar7 = 0;
    if (pcVar15 < pcVar13) {
      lVar19 = 0;
    }
    else {
      do {
        if (9 < (byte)(*pcVar15 - 0x30U)) break;
        uVar7 = uVar7 + 1;
        pcVar15 = pcVar15 + -1;
      } while (pcVar13 <= pcVar15);
      lVar19 = 0;
      if (((uVar7 != 0) && ((int)uVar7 < iVar8)) &&
         ((lVar19 = 0, uVar7 < 0xb &&
          (lVar16 = -(ulonglong)uVar7, pcVar13[lVar16 + lVar12 + -1] == '_')))) {
        if ((uVar7 == 1) || (pcVar13[lVar16 + lVar12] != '0')) {
          lVar18 = 0;
          do {
            lVar19 = (longlong)pcVar13[lVar16 + lVar12] + lVar18 * 10;
            lVar18 = lVar19 + -0x30;
            lVar16 = lVar16 + 1;
          } while (lVar16 != 0);
          if (lVar18 < 0x7fffffff) {
            iVar8 = ~uVar7 + iVar8;
            lVar19 = lVar19 + -0x2f;
            goto LAB_140fd6742;
          }
        }
        lVar19 = 0;
      }
LAB_140fd6742:
      if (iVar8 == 0) goto LAB_140fd629c;
    }
    local_5c = 0;
    local_68 = pcVar13;
    local_60 = iVar8;
    uVar7 = FUN_14001a6c0(&local_68,1);
    uVar17 = lVar19 << 0x20;
    uVar4 = (ulonglong)uVar7;
  }
  local_68 = (char *)(uVar4 | uVar17);
  FUN_1401533ba(&local_74,&local_68,1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_60 = DAT_14cb863f0;
  local_68 = DAT_14cb863e8;
  FUN_1448075d0(&local_58);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar9 = &DAT_14c9a1288;
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
      plVar14 = plVar9 + 8;
      if ((longlong *)plVar9[9] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar9[9];
      }
      iVar8 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar9[10] - 1U & local_58) * 4);
      if (iVar8 != -1) {
        do {
          lVar12 = *plVar9 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar9 + (longlong)iVar8 * 0x40) == local_58) {
            if ((((lVar12 != 0) &&
                 (puVar10 = (undefined8 *)(lVar12 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                ((byte *)*puVar10 != (byte *)0x0)) && ((*(byte *)*puVar10 & 0x40) == 0))
            goto LAB_140fd635d;
            break;
          }
          iVar8 = *(int *)(lVar12 + 0x38);
        } while (iVar8 != -1);
      }
    }
  }
  puVar10 = &DAT_14c9a1308;
LAB_140fd635d:
  pbVar2 = (byte *)*puVar10;
  if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(pbVar2 + 8);
  }
  FUN_1400b22c2(&local_88,uVar6);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_60 = DAT_14cb86408;
  local_68 = DAT_14cb86400;
  FUN_1448075d0(&local_58);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar9 = &DAT_14c9a1288;
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
      plVar14 = plVar9 + 8;
      if ((longlong *)plVar9[9] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar9[9];
      }
      iVar8 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar9[10] - 1U & local_58) * 4);
      if (iVar8 != -1) {
        do {
          lVar12 = *plVar9 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar9 + (longlong)iVar8 * 0x40) == local_58) {
            if (((lVar12 != 0) &&
                (puVar10 = (undefined8 *)(lVar12 + 0x28), puVar10 != (undefined8 *)0x0)) &&
               (((byte *)*puVar10 != (byte *)0x0 && ((*(byte *)*puVar10 & 0x40) == 0))))
            goto LAB_140fd6419;
            break;
          }
          iVar8 = *(int *)(lVar12 + 0x38);
        } while (iVar8 != -1);
      }
    }
  }
  puVar10 = &DAT_14c9a1308;
LAB_140fd6419:
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_60 = DAT_14cb86420;
  local_68 = DAT_14cb86418;
  FUN_1448075d0(&local_58);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar9 = &DAT_14c9a1288;
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
      plVar14 = plVar9 + 8;
      if ((longlong *)plVar9[9] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar9[9];
      }
      iVar8 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar9[10] - 1U & local_58) * 4);
      if (iVar8 != -1) {
        do {
          lVar12 = *plVar9 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar9 + (longlong)iVar8 * 0x40) == local_58) {
            if ((((lVar12 != 0) &&
                 (puVar11 = (undefined8 *)(lVar12 + 0x28), puVar11 != (undefined8 *)0x0)) &&
                ((byte *)*puVar11 != (byte *)0x0)) && ((*(byte *)*puVar11 & 0x40) == 0))
            goto LAB_140fd64bd;
            break;
          }
          iVar8 = *(int *)(lVar12 + 0x38);
        } while (iVar8 != -1);
      }
    }
  }
  puVar11 = &DAT_14c9a1308;
LAB_140fd64bd:
  pbVar2 = (byte *)*puVar11;
  if (((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) ||
     (pcVar13 = *(char **)(pbVar2 + 8), pcVar13 == (char *)0x0)) {
LAB_140fd64c9:
    uVar4 = 0;
    uVar17 = 0;
  }
  else {
    sVar5 = strlen(pcVar13);
    iVar8 = (int)sVar5;
    if (iVar8 == 0) goto LAB_140fd64c9;
    lVar12 = (longlong)iVar8;
    pcVar15 = pcVar13 + lVar12 + -1;
    uVar7 = 0;
    if (pcVar15 < pcVar13) {
      lVar19 = 0;
    }
    else {
      do {
        if (9 < (byte)(*pcVar15 - 0x30U)) break;
        uVar7 = uVar7 + 1;
        pcVar15 = pcVar15 + -1;
      } while (pcVar13 <= pcVar15);
      lVar19 = 0;
      if (((uVar7 != 0) && ((int)uVar7 < iVar8)) &&
         ((lVar19 = 0, uVar7 < 0xb &&
          (lVar16 = -(ulonglong)uVar7, pcVar13[lVar16 + lVar12 + -1] == '_')))) {
        if ((uVar7 == 1) || (pcVar13[lVar16 + lVar12] != '0')) {
          lVar18 = 0;
          do {
            lVar19 = (longlong)pcVar13[lVar16 + lVar12] + lVar18 * 10;
            lVar18 = lVar19 + -0x30;
            lVar16 = lVar16 + 1;
          } while (lVar16 != 0);
          if (lVar18 < 0x7fffffff) {
            iVar8 = ~uVar7 + iVar8;
            lVar19 = lVar19 + -0x2f;
            goto LAB_140fd67ee;
          }
        }
        lVar19 = 0;
      }
LAB_140fd67ee:
      if (iVar8 == 0) goto LAB_140fd64c9;
    }
    local_5c = 0;
    local_68 = pcVar13;
    local_60 = iVar8;
    uVar7 = FUN_14001a6c0(&local_68,1);
    uVar17 = lVar19 << 0x20;
    uVar4 = (ulonglong)uVar7;
  }
  local_68 = (char *)(uVar4 | uVar17);
  FUN_1401533ba(&local_94,&local_68,1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  uVar6 = DAT_14cb86448;
  local_60 = DAT_14cb86438;
  local_68 = DAT_14cb86430;
  FUN_1448075d0(&local_58);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar9 = &DAT_14c9a1288;
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
      plVar14 = plVar9 + 8;
      if ((longlong *)plVar9[9] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar9[9];
      }
      iVar8 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar9[10] - 1U & local_58) * 4);
      if (iVar8 != -1) {
        do {
          lVar12 = *plVar9 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar9 + (longlong)iVar8 * 0x40) == local_58) {
            if ((((lVar12 != 0) &&
                 (puVar11 = (undefined8 *)(lVar12 + 0x28), puVar11 != (undefined8 *)0x0)) &&
                ((byte *)*puVar11 != (byte *)0x0)) && ((*(byte *)*puVar11 & 0x40) == 0))
            goto LAB_140fd6591;
            break;
          }
          iVar8 = *(int *)(lVar12 + 0x38);
        } while (iVar8 != -1);
      }
    }
  }
  puVar11 = &DAT_14c9a1308;
LAB_140fd6591:
  pbVar2 = (byte *)*puVar11;
  if (((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) ||
     (pcVar13 = *(char **)(pbVar2 + 8), pcVar13 == (char *)0x0)) {
    pcVar13 = (char *)0x0;
    sVar5 = 0;
  }
  else {
    sVar5 = strlen(pcVar13);
  }
  cVar3 = FUN_14002b5e0(uVar6,pcVar13,sVar5);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  param_1 = param_1 + 0x70;
  if (cVar3 == '\0') {
    if ((local_74 != 0) || (1 < local_80)) {
      uVar6 = FUN_140f7f268();
      FUN_1457de18e(param_1,uVar6);
      FUN_1457de216(param_1,&local_58);
      lVar12 = CONCAT44(uStack_54,local_58);
      FUN_140bf89dc(lVar12 + 0x18,&local_88,0);
      *(undefined4 *)(lVar12 + 0x10) = local_8c;
      *(undefined8 *)(lVar12 + 8) = local_94;
      *(undefined4 *)(lVar12 + 0x30) = local_6c;
      *(ulonglong *)(lVar12 + 0x28) = CONCAT44(uStack_70,local_74);
      goto LAB_140fd68cb;
    }
  }
  else {
    uVar6 = FUN_146530fd2();
    FUN_1457de18e(param_1,uVar6);
    FUN_1489138a4(param_1,&local_58);
    lVar12 = CONCAT44(uStack_54,local_58);
    FUN_140bf89dc(lVar12 + 0x18,&local_88,0);
    *(undefined4 *)(lVar12 + 0x10) = local_8c;
    *(undefined8 *)(lVar12 + 8) = local_94;
    *(ulonglong *)(lVar12 + 0x34) = CONCAT44(uStack_70,local_74);
    *(undefined4 *)(lVar12 + 0x3c) = local_6c;
    FUN_14099f073(lVar12 + 0x40,puVar10);
    uVar6 = FUN_14099f03a();
    FUN_1402057ac(puVar10,lVar12 + 0x40,uVar6,0);
LAB_140fd68cb:
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_50 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
LAB_140fd61cb:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fd6a94 FUN_140fd6a94 body=40 status=ok
// SIG undefined FUN_140fd6a94(void)

undefined8 FUN_140fd6a94(undefined8 param_1,int param_2)

{
  FUN_140fd6abc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fd6abc FUN_140fd6abc body=72 status=ok
// SIG undefined FUN_140fd6abc(void)

void FUN_140fd6abc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7d7b70;
  *(undefined4 *)(param_1 + 0x81) = 0;
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  FUN_140fd6b04(param_1 + 0x78);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 140fd6b04 FUN_140fd6b04 body=55 status=ok
// SIG undefined FUN_140fd6b04(void)

void FUN_140fd6b04(longlong *param_1)

{
  FUN_140fd6b3c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140fd6b3c FUN_140fd6b3c body=123 status=ok
// SIG undefined FUN_140fd6b3c(void)

void FUN_140fd6b3c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140fd6bb8 FUN_140fd6bb8 body=1110 status=ok
// SIG undefined FUN_140fd6bb8(void)

void FUN_140fd6bb8(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  int *piVar9;
  int *piVar10;
  undefined1 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_c8 [32];
  char local_a8;
  undefined7 uStack_a7;
  uint local_a0;
  int local_98 [6];
  longlong local_80;
  int local_70;
  int local_6c;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1405f1eac();
  FUN_14078a36a(param_1 + 0x518,param_1 + 0x3a0);
  lVar12 = param_1 + 0x3c0;
  FUN_1407bebdc(lVar12,param_1 + 0x390,param_1);
  lVar4 = FUN_1447210f0(param_1);
  if ((((lVar4 != 0) && (lVar4 = FUN_1400f6e0c(lVar4), lVar4 != 0)) && (param_1 != 0)) &&
     ((plVar8 = *(longlong **)(lVar4 + 0xc0), plVar8 != (longlong *)0x0 &&
      (lVar4 = (**(code **)(*plVar8 + 0x180))(plVar8), lVar4 != 0)))) {
    FUN_1406f1bc8(lVar12,&local_a8);
    cVar1 = FUN_1401144ce(&local_a8);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    if (cVar1 != '\0') {
      FUN_1406f1bc8(lVar12,&local_a8);
      if (local_a8 == '\x01') {
        FUN_1447a97f4(&local_70,local_98);
        if (0 < local_6c) {
          lVar12 = 0;
          uVar13 = 0;
          iVar2 = local_6c;
          iVar6 = DAT_14c948000;
          do {
            bVar14 = local_70 != 0;
            bVar15 = local_70 != iVar6;
            piVar9 = &DAT_14c948620;
            piVar10 = (int *)&DAT_14c948618;
            if (bVar15 && bVar14) {
              puVar11 = local_68;
              if (0 < local_4c) {
                puVar11 = local_58;
              }
              if (1 < iVar2) {
                puVar11 = local_58;
              }
              piVar9 = (int *)(puVar11 + lVar12 + 8);
              piVar10 = (int *)(puVar11 + lVar12);
            }
            if ((*piVar10 == DAT_14cb7beb0) && (*piVar9 == DAT_14cb7beb8)) {
LAB_140fd6e73:
              FUN_1402b5374(&local_70,uVar13 & 0xffffffff,0);
              iVar2 = local_6c;
              iVar6 = DAT_14c948000;
            }
            else {
              piVar9 = &DAT_14c948620;
              piVar10 = (int *)&DAT_14c948618;
              if (bVar15 && bVar14) {
                puVar11 = local_68;
                if (0 < local_4c) {
                  puVar11 = local_58;
                }
                if (1 < iVar2) {
                  puVar11 = local_58;
                }
                piVar9 = (int *)(puVar11 + lVar12 + 8);
                piVar10 = (int *)(puVar11 + lVar12);
              }
              if ((*piVar10 == DAT_14cb7bec8) && (*piVar9 == DAT_14cb7bed0)) goto LAB_140fd6e73;
              piVar9 = &DAT_14c948620;
              piVar10 = (int *)&DAT_14c948618;
              if (bVar15 && bVar14) {
                puVar11 = local_68;
                if (0 < local_4c) {
                  puVar11 = local_58;
                }
                if (1 < iVar2) {
                  puVar11 = local_58;
                }
                piVar9 = (int *)(puVar11 + lVar12 + 8);
                piVar10 = (int *)(puVar11 + lVar12);
              }
              if ((*piVar10 == DAT_14cb7bee0) && (*piVar9 == DAT_14cb7bee8)) goto LAB_140fd6e73;
              piVar9 = &DAT_14c948620;
              piVar10 = (int *)&DAT_14c948618;
              if (bVar15 && bVar14) {
                puVar11 = local_68;
                if (0 < local_4c) {
                  puVar11 = local_58;
                }
                if (1 < iVar2) {
                  puVar11 = local_58;
                }
                piVar9 = (int *)(puVar11 + lVar12 + 8);
                piVar10 = (int *)(puVar11 + lVar12);
              }
              if ((*piVar10 == DAT_14cb7bef8) && (*piVar9 == DAT_14cb7bf00)) goto LAB_140fd6e73;
              piVar9 = &DAT_14c948620;
              piVar10 = (int *)&DAT_14c948618;
              if (bVar15 && bVar14) {
                puVar11 = local_68;
                if (0 < local_4c) {
                  puVar11 = local_58;
                }
                if (1 < iVar2) {
                  puVar11 = local_58;
                }
                piVar9 = (int *)(puVar11 + lVar12 + 8);
                piVar10 = (int *)(puVar11 + lVar12);
              }
              if ((*piVar10 == DAT_14cb7bf10) && (*piVar9 == DAT_14cb7bf18)) goto LAB_140fd6e73;
            }
            uVar13 = uVar13 + 1;
            lVar12 = lVar12 + 0xc;
          } while ((longlong)uVar13 < (longlong)iVar2);
        }
        local_98[0] = local_70;
        if (local_58 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
      puVar5 = (uint *)FUN_140fd713a(plVar8 + 7,local_98[0],&local_a8);
      uVar3 = *(uint *)(param_1 + 0xc);
      *puVar5 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      uVar3 = *(uint *)(lVar12 + 0x10);
      if (*(uint *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar12 + 0x10);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(lVar12 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar14) {
          uVar3 = uVar7;
        }
      }
      puVar5[1] = uVar3;
      *(ulonglong *)(puVar5 + 2) = CONCAT71(uStack_a7,local_a8);
      puVar5[4] = local_a0;
      FUN_1447715ec(puVar5 + 6,local_98);
      *(bool *)((longlong)puVar5 + 0x41) = *(char *)(param_1 + 0x178) == '\x03';
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      FUN_140fd7786(plVar8 + 7,plVar8 + 0x1b);
    }
  }
  plVar8 = (longlong *)(param_1 + 0x3b0);
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0x3b0) + 0x10))(plVar8);
  if (cVar1 != '\0') {
    (**(code **)(*plVar8 + 0x20))(plVar8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fd702a FUN_140fd702a body=62 status=ok
// SIG undefined FUN_140fd702a(void)

void FUN_140fd702a(longlong param_1)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x590) = 0;
  lVar1 = FUN_14061177a();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x90) == '\x01')) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    FUN_140fd71ce(param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 140fd7068 FUN_140fd7068 body=208 status=ok
// SIG undefined FUN_140fd7068(void)

longlong FUN_140fd7068(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))();
  lVar2 = param_1[0x184];
  if (lVar2 == 0) {
    lVar2 = FUN_14001cc68(0x598,0x10);
    local_30 = param_1 + -0x76;
    local_28 = param_1;
    if ((local_30 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
      if (local_30 == (longlong *)0x0) {
        local_28 = (longlong *)0x0;
      }
    }
    else {
      FUN_1456cec3c(local_30);
    }
    FUN_140e29478(lVar2);
    puVar1 = (undefined8 *)param_1[0x184];
    param_1[0x184] = lVar2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      lVar2 = param_1[0x184];
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fd713a FUN_140fd713a body=146 status=ok
// SIG undefined FUN_140fd713a(void)

longlong FUN_140fd713a(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_140cba19a();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x1d8;
    if (lVar3 + lVar2 != 0) goto LAB_140fd71a7;
  }
  local_38 = 0;
  local_30 = param_3;
  FUN_140fd7eee(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x1d8;
LAB_140fd71a7:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fd71ce FUN_140fd71ce body=1289 status=ok
// SIG undefined FUN_140fd71ce(void)

void FUN_140fd71ce(uint *param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  longlong *plVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong **)(param_1 + 2) != (longlong *)0x0) && (param_1[1] != 0)) {
    uVar18 = *param_1;
    uVar7 = 0;
    if (((int)uVar18 < 0) || (DAT_14c9647dc <= (int)uVar18)) goto LAB_140fd726c;
    lVar14 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
    if ((((lVar14 != 0) && (*(uint *)(lVar14 + 0x10) == param_1[1])) &&
        ((*(uint *)(lVar14 + 8) & 0x10200000) == 0)) &&
       (lVar14 = (**(code **)(**(longlong **)(param_1 + 2) + 0x18))(), lVar14 != 0)) {
      uVar7 = FUN_1447210f0(lVar14);
      goto LAB_140fd726c;
    }
  }
  uVar7 = 0;
LAB_140fd726c:
  FUN_14027ab42(&local_58,uVar7);
  if (local_50 != (longlong *)0x0) {
    iVar6 = (int)local_50[1];
    do {
      if (iVar6 == 0) {
        plVar16 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar17 = (int)local_50[1];
      bVar19 = iVar6 == iVar17;
      if (bVar19) {
        *(int *)(local_50 + 1) = iVar6 + 1;
        iVar17 = iVar6;
      }
      iVar6 = iVar17;
      UNLOCK();
      plVar16 = local_50;
    } while (!bVar19);
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
    if (plVar16 != (longlong *)0x0) {
      if (((((local_58 != 0) && (*(longlong *)(param_1 + 2) != 0)) &&
           ((param_1[1] != 0 &&
            ((uVar18 = *param_1, -1 < (int)uVar18 && ((int)uVar18 < DAT_14c9647dc)))))) &&
          (lVar14 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8), lVar14 != 0)) &&
         ((*(uint *)(lVar14 + 0x10) == param_1[1] && ((*(uint *)(lVar14 + 8) & 0x10200000) == 0))))
      {
        plVar2 = (longlong *)(local_58 + 0x88);
        if (*(int *)(local_58 + 0xbc) == 0) {
          iVar6 = *(int *)(local_58 + 0x90);
          *(int *)(local_58 + 0x90) = iVar6 + 1;
          if (*(int *)(local_58 + 0x94) == iVar6) {
            FUN_14482b872(plVar2,iVar6);
          }
          iVar17 = *(int *)(local_58 + 0xb0);
          if (iVar17 == 0) {
            iVar10 = -1;
          }
          else {
            iVar10 = iVar17 + 0x1e;
            if (-1 < iVar17 + -1) {
              iVar10 = iVar17 + -1;
            }
            iVar10 = iVar10 >> 5;
          }
          lVar14 = local_58 + 0x98;
          iVar11 = iVar17 + 1;
          iVar15 = iVar17 + 0x1f;
          if (-1 < iVar17) {
            iVar15 = iVar17;
          }
          if (iVar15 >> 5 == iVar10) {
            *(int *)(local_58 + 0xb0) = iVar11;
          }
          else {
            if (*(int *)(local_58 + 0xb4) <= iVar17) {
              if (iVar17 + 0x20U < 0xa0) {
                iVar11 = 0x80;
                iVar10 = iVar17;
              }
              else {
                uVar18 = iVar17 + 0x20U >> 5;
                local_60 = (ulonglong)uVar18;
                if (*(int *)(local_58 + 0xb4) + 0x1fU < 0xa0) {
                  uVar12 = 4;
                  if (4 < uVar18) {
                    uVar12 = uVar18;
                  }
                }
                else {
                  uVar12 = (uVar18 * 3 >> 3) + uVar18 + 0x10;
                }
                uVar13 = FUN_144a3809e(uVar12 << 2,0);
                iVar10 = (int)(uVar13 >> 2);
                iVar11 = -0x20;
                if ((int)local_60 <= iVar10) {
                  iVar11 = iVar10 << 5;
                }
                iVar10 = *(int *)(local_58 + 0xb0);
              }
              *(int *)(local_58 + 0xb4) = iVar11;
              FUN_1446efbd8(lVar14,iVar10);
              iVar11 = *(int *)(local_58 + 0xb0) + 1;
            }
            iVar10 = iVar11 + 0x1f;
            if (-1 < iVar11) {
              iVar10 = iVar11;
            }
            *(int *)(local_58 + 0xb0) = iVar11;
            if (iVar11 % 0x20 != 0) {
              lVar8 = *(longlong *)(local_58 + 0xa8);
              if (*(longlong *)(local_58 + 0xa8) == 0) {
                lVar8 = lVar14;
              }
              bVar9 = -(char)(iVar11 % 0x20);
              *(uint *)(lVar8 + (longlong)(iVar10 >> 5) * 4) =
                   (uint)(*(int *)(lVar8 + (longlong)(iVar10 >> 5) * 4) << (bVar9 & 0x1f)) >>
                   (bVar9 & 0x1f);
            }
          }
          lVar8 = (longlong)iVar6;
          if (*(longlong *)(local_58 + 0xa8) != 0) {
            lVar14 = *(longlong *)(local_58 + 0xa8);
          }
          bVar9 = (byte)iVar17 & 0x1f;
          puVar3 = (uint *)(lVar14 + (longlong)(iVar15 >> 5) * 4);
          *puVar3 = *puVar3 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
        }
        else {
          iVar6 = *(int *)(local_58 + 0xb8);
          lVar8 = (longlong)iVar6;
          iVar17 = *(int *)(*(longlong *)(local_58 + 0x88) + 4 + lVar8 * 0x18);
          *(int *)(local_58 + 0xb8) = iVar17;
          iVar10 = *(int *)(local_58 + 0xbc) + -1;
          *(int *)(local_58 + 0xbc) = iVar10;
          if (iVar10 != 0) {
            *(undefined4 *)(*(longlong *)(local_58 + 0x88) + (longlong)iVar17 * 0x18) = 0xffffffff;
          }
        }
        lVar14 = local_58 + 0x98;
        if (*(longlong *)(local_58 + 0xa8) != 0) {
          lVar14 = *(longlong *)(local_58 + 0xa8);
        }
        iVar17 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar17 = iVar6;
        }
        puVar3 = (uint *)(lVar14 + (longlong)(iVar17 >> 5) * 4);
        *puVar3 = *puVar3 | 1 << ((byte)iVar6 & 0x1f);
        puVar3 = (uint *)(*(longlong *)(local_58 + 0x88) + lVar8 * 0x18);
        uVar18 = param_1[1];
        uVar12 = param_1[2];
        uVar5 = param_1[3];
        *puVar3 = *param_1;
        puVar3[1] = uVar18;
        puVar3[2] = uVar12;
        puVar3[3] = uVar5;
        puVar3[4] = 0xffffffff;
        iVar17 = 1;
        uVar18 = *(int *)(local_58 + 0x90) - *(int *)(local_58 + 0xbc);
        if ((uVar18 != 0) && (uVar18 != 1)) {
          lVar14 = local_58 + 0xc0;
          if (*(longlong *)(local_58 + 200) != 0) {
            lVar14 = *(longlong *)(local_58 + 200);
          }
          uVar12 = *(uint *)(lVar14 + (ulonglong)
                                      (*(int *)(local_58 + 0xd0) - 1U & (puVar3[1] ^ *puVar3)) * 4);
          if (uVar12 != 0xffffffff) {
            do {
              puVar4 = (uint *)(*plVar2 + (longlong)(int)uVar12 * 0x18);
              if (*(longlong *)(puVar4 + 2) == *(longlong *)(puVar3 + 2)) {
                uVar18 = puVar3[1];
                uVar12 = puVar3[2];
                uVar5 = puVar3[3];
                *puVar4 = *puVar3;
                puVar4[1] = uVar18;
                puVar4[2] = uVar12;
                puVar4[3] = uVar5;
                FUN_140cd54ac(plVar2,iVar6);
                goto LAB_140fd74bb;
              }
              uVar12 = puVar4[4];
            } while (uVar12 != 0xffffffff);
          }
        }
        if (3 < uVar18) {
          uVar13 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
          lVar14 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar17 = 1 << ((byte)lVar14 & 0x1f);
        }
        if (((int)uVar18 < 1) || (iVar17 <= *(int *)(local_58 + 0xd0))) {
          uVar18 = *(int *)(local_58 + 0xd0) - 1U & (puVar3[1] ^ *puVar3);
          puVar3[5] = uVar18;
          lVar14 = *(longlong *)(local_58 + 200);
          if (*(longlong *)(local_58 + 200) == 0) {
            lVar14 = local_58 + 0xc0;
          }
          puVar3[4] = *(uint *)(lVar14 + ((longlong)*(int *)(local_58 + 0xd0) - 1U &
                                         (longlong)(int)uVar18) * 4);
          lVar14 = *(longlong *)(local_58 + 200);
          if (*(longlong *)(local_58 + 200) == 0) {
            lVar14 = local_58 + 0xc0;
          }
          *(int *)(lVar14 + ((longlong)*(int *)(local_58 + 0xd0) - 1U & (longlong)(int)uVar18) * 4)
               = iVar6;
        }
        else {
          *(int *)(local_58 + 0xd0) = iVar17;
          FUN_140fd873e(plVar2);
        }
        if (iVar6 != -1) {
LAB_140fd74bb:
          FUN_140fd76d8(local_58 + 0x28,param_1,0);
        }
      }
      LOCK();
      plVar2 = plVar16 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fd76d8 FUN_140fd76d8 body=173 status=ok
// SIG undefined FUN_140fd76d8(void)

void FUN_140fd76d8(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_140fd776f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140fd776f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140fd7786 FUN_140fd7786 body=716 status=ok
// SIG undefined FUN_140fd7786(void)

void FUN_140fd7786(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  
  iVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar16);
  }
  FUN_140fd7d60(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar16) {
    FUN_140fd7da0(param_2,iVar16);
  }
  iVar16 = (int)param_1[5];
  if (iVar16 == 0) {
    uVar22 = 1;
    uVar17 = 0;
    iVar23 = 0;
    iVar18 = 0;
  }
  else {
    puVar14 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar14 = (uint *)(param_1 + 2);
    }
    uVar20 = *puVar14;
    if (uVar20 == 0) {
      iVar18 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar18 = iVar16 + -1;
      }
      uVar17 = 0;
      uVar22 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar22 = uVar17;
      }
      iVar18 = 0;
      do {
        if (uVar22 == uVar17) {
          return;
        }
        iVar18 = iVar18 + 0x20;
        uVar20 = puVar14[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar20 == 0);
    }
    else {
      uVar17 = 0;
      iVar18 = 0;
    }
    uVar22 = (ulonglong)(-uVar20 & uVar20);
    uVar2 = uVar22 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    iVar23 = (iVar18 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
    if (iVar16 <= iVar23) {
      iVar23 = iVar16;
    }
  }
  if (iVar23 < iVar16) {
    uVar20 = 0xffffffff;
    do {
      lVar21 = *param_1;
      iVar16 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar16 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar16 + 1U) {
        FUN_148dd0782(param_2,iVar16);
      }
      lVar19 = (longlong)iVar23 * 0x1d8;
      lVar15 = lVar21 + lVar19;
      lVar3 = *param_2;
      puVar1 = (undefined8 *)(lVar3 + (longlong)iVar16 * 0x198);
      *puVar1 = *(undefined8 *)(lVar15 + 0x38);
      *(undefined2 *)(puVar1 + 1) = 0;
      *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *(undefined4 *)(puVar1 + 5) = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[1] = *(undefined8 *)(lVar15 + 0x40);
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(lVar15 + 0x48);
      lVar15 = lVar21 + lVar19;
      FUN_1447715ec(puVar1 + 3,lVar15 + 0x50);
      *(undefined2 *)(puVar1 + 8) = *(undefined2 *)(lVar15 + 0x78);
      uVar4 = *(undefined4 *)(lVar15 + 0x80);
      uVar5 = *(undefined4 *)(lVar15 + 0x84);
      uVar6 = *(undefined4 *)(lVar15 + 0x88);
      uVar7 = *(undefined4 *)(lVar15 + 0x8c);
      uVar8 = *(undefined4 *)(lVar15 + 0x90);
      uVar9 = *(undefined4 *)(lVar15 + 0x94);
      uVar10 = *(undefined4 *)(lVar15 + 0x98);
      *(undefined4 *)((longlong)puVar1 + 0x54) = *(undefined4 *)(lVar15 + 0x8c);
      *(undefined4 *)(puVar1 + 0xb) = uVar8;
      *(undefined4 *)((longlong)puVar1 + 0x5c) = uVar9;
      *(undefined4 *)(puVar1 + 0xc) = uVar10;
      *(undefined4 *)(puVar1 + 9) = uVar4;
      *(undefined4 *)((longlong)puVar1 + 0x4c) = uVar5;
      *(undefined4 *)(puVar1 + 10) = uVar6;
      *(undefined4 *)((longlong)puVar1 + 0x54) = uVar7;
      lVar15 = lVar3 + 0x68 + (longlong)iVar16 * 0x198;
      lVar21 = lVar21 + lVar19;
      FUN_140fd7a52(lVar15,lVar21 + 0xa0);
      *(undefined1 *)(lVar15 + 0x128) = *(undefined1 *)(lVar21 + 0x1c8);
      *(undefined8 *)(lVar15 + 0x120) = *(undefined8 *)(lVar21 + 0x1c0);
      uVar20 = uVar20 & ~(uint)uVar22;
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = (uint *)(param_1 + 2);
      }
      iVar16 = (int)param_1[5];
      iVar23 = (int)uVar17;
      lVar21 = (longlong)iVar23;
      uVar11 = puVar14[lVar21] & uVar20;
      if (uVar11 == 0) {
        iVar12 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar12 = iVar16 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar23) {
          iVar13 = iVar23;
        }
        if (iVar12 <= iVar23) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar18 = iVar18 + 0x20;
          uVar11 = puVar14[lVar21 + lVar15 + 1];
          if (uVar11 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar13 - lVar21 == lVar15) {
            return;
          }
        }
        uVar17 = (ulonglong)(iVar23 + (int)lVar15 + 1);
        uVar20 = 0xffffffff;
      }
      uVar22 = (ulonglong)(-uVar11 & uVar11);
      uVar2 = uVar22 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      iVar23 = (iVar18 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
    } while (iVar23 < iVar16);
  }
  return;
}



// FUNCTION 140fd7a52 FUN_140fd7a52 body=782 status=ok
// SIG undefined FUN_140fd7a52(void)

undefined8 * FUN_140fd7a52(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  uVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_14053cbf8(param_1 + 1,iVar1,0);
    FUN_14053cba8(param_1[1],uVar2,iVar1);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  uVar2 = param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1402ae8a8(param_1 + 3,iVar1,0);
    FUN_140160884(param_1[3],uVar2,iVar1);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  uVar2 = param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_14053cbf8(param_1 + 5,iVar1,0);
    FUN_14053cba8(param_1[5],uVar2,iVar1);
  }
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  pvVar3 = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_147f18d0a(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],pvVar3,(longlong)iVar1 << 3);
  }
  param_1[9] = &PTR__purecall_14ac8c8c0;
  param_1[10] = param_2[10];
  param_1[9] = &PTR_LAB_14a1e3c98;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  pvVar3 = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1447bda9e(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],pvVar3,(longlong)iVar1 << 2);
  }
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0xf);
  uVar2 = param_2[0xe];
  *(int *)(param_1 + 0xf) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_1456d3af0(param_1 + 0xe,iVar1,0);
    FUN_1456d39db(param_1[0xe],uVar2,iVar1);
  }
  param_1[0x10] = &PTR__purecall_14ac8c8c0;
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = &PTR_LAB_14a1e3c98;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  param_1[0x13] = 0;
  iVar1 = *(int *)(param_2 + 0x14);
  pvVar3 = (void *)param_2[0x13];
  *(int *)(param_1 + 0x14) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  }
  else {
    FUN_1447bda9e(param_1 + 0x13,iVar1,0);
    memcpy((void *)param_1[0x13],pvVar3,(longlong)iVar1 << 2);
  }
  param_1[0x15] = 0;
  iVar1 = *(int *)(param_2 + 0x16);
  uVar2 = param_2[0x15];
  *(int *)(param_1 + 0x16) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  }
  else {
    FUN_1456d3af0(param_1 + 0x15,iVar1,0);
    FUN_1456d39db(param_1[0x15],uVar2,iVar1);
  }
  puVar5 = param_2 + 0x17;
  puVar6 = param_1 + 0x17;
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
  *(undefined2 *)(param_1 + 0x23) = *(undefined2 *)(param_2 + 0x23);
  return param_1;
}



// FUNCTION 140fd7d60 FUN_140fd7d60 body=63 status=ok
// SIG undefined FUN_140fd7d60(void)

void FUN_140fd7d60(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x68;
    do {
      FUN_14494dff0(param_1);
      if (*(longlong *)(param_1 + -0x38) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0x198;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140fd7da0 FUN_140fd7da0 body=333 status=ok
// SIG undefined FUN_140fd7da0(void)

void FUN_140fd7da0(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 0x198;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0x51) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x1fffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140fd7e09;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x1fffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140fd7e09:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 / 0x198)) {
      uVar4 = uVar3 / 0x198 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x198,8);
  }
  return;
}



// FUNCTION 140fd7eee FUN_140fd7eee body=2127 status=ok
// SIG undefined FUN_140fd7eee(void)

undefined4 *
FUN_140fd7eee(longlong *param_1,undefined4 *param_2,uint param_3,longlong *param_4,char *param_5)

{
  uint *puVar1;
  void *_Src;
  longlong lVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined4 uVar21;
  undefined8 *puVar22;
  longlong lVar23;
  undefined1 auStack_248 [40];
  longlong *local_220;
  uint local_214;
  ulonglong local_210;
  undefined4 *local_208;
  undefined1 local_200 [8];
  undefined8 local_1f8;
  undefined1 local_1f0 [40];
  longlong local_1c8;
  undefined2 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined **local_148;
  undefined8 local_140;
  undefined4 local_138;
  void *local_130;
  ulonglong uStack_128;
  undefined8 local_120;
  ulonglong uStack_118;
  undefined **local_110;
  undefined8 local_108;
  undefined4 local_100;
  void *local_f8;
  ulonglong uStack_f0;
  undefined8 local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8 [6];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 local_78;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_220 = param_4;
  local_214 = param_3;
  local_208 = param_2;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar13 = *(uint *)(param_1 + 1);
    uVar16 = (ulonglong)uVar13;
    *(uint *)(param_1 + 1) = uVar13 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) == uVar13) {
      FUN_1457de286(param_1,uVar13);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar7 = iVar8 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    plVar17 = param_1 + 2;
    iVar14 = iVar8 + 1;
    iVar19 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar19 = iVar8;
    }
    if (iVar19 >> 5 == iVar7) {
      *(int *)(param_1 + 5) = iVar14;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        if (iVar8 + 0x20U < 0xa0) {
          iVar14 = 0x80;
          iVar7 = iVar8;
        }
        else {
          uVar9 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar15 = 4;
            if (4 < uVar9) {
              uVar15 = uVar9;
            }
          }
          else {
            uVar15 = (uVar9 * 3 >> 3) + uVar9 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar15 << 2,0);
          iVar7 = (int)(uVar11 >> 2);
          iVar14 = -0x20;
          if ((int)uVar9 <= iVar7) {
            iVar14 = iVar7 << 5;
          }
          iVar7 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar14;
        FUN_1446efbd8(plVar17,iVar7);
        iVar14 = (int)param_1[5] + 1;
      }
      iVar7 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar7 = iVar14;
      }
      *(int *)(param_1 + 5) = iVar14;
      if (iVar14 % 0x20 != 0) {
        plVar18 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar18 = plVar17;
        }
        bVar12 = -(char)(iVar14 % 0x20);
        *(uint *)((longlong)plVar18 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar18 + (longlong)(iVar7 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
    }
    lVar10 = (longlong)(int)uVar13;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar17 = (longlong *)param_1[4];
    }
    bVar12 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar17 + (longlong)(iVar19 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
  }
  else {
    uVar16 = (ulonglong)*(uint *)(param_1 + 6);
    lVar10 = (longlong)(int)*(uint *)(param_1 + 6);
    iVar8 = *(int *)(*param_1 + 4 + lVar10 * 0x1d8);
    *(int *)(param_1 + 6) = iVar8;
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x1d8) = 0xffffffff;
    }
  }
  iVar8 = (int)uVar16;
  plVar17 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar17 = (longlong *)param_1[4];
  }
  iVar7 = iVar8 + 0x1f;
  if (-1 < iVar8) {
    iVar7 = iVar8;
  }
  puVar1 = (uint *)((longlong)plVar17 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar16 & 0x1f);
  lVar23 = *param_1;
  lVar10 = lVar10 * 0x1d8;
  _Src = (void *)(lVar10 + lVar23);
  local_210 = uVar16;
  memset(&local_1f8,0,0x198);
  local_190 = 0x44bb800043fa0000;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  FUN_1446f470e(local_200,L"FGbxTerritoryAreaDataCache::AABBTree",1);
  local_140 = 0;
  local_148 = &PTR_LAB_14a1e3c98;
  local_138 = 0xffffffff;
  local_130 = (void *)0x0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  FUN_1446f470e(local_200,L"FGbxTerritoryAreaDataCache::ExclusionAABBTree",1);
  local_108 = 0;
  local_110 = &PTR_LAB_14a1e3c98;
  local_100 = 0xffffffff;
  local_f8 = (void *)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_a8 = 0;
  local_a0 = (undefined4)DAT_14c8464e0;
  uStack_9c = DAT_14c8464e0._4_4_;
  uStack_98 = (undefined4)DAT_14c8464e8;
  uStack_94 = DAT_14c8464e8._4_4_;
  local_90 = DAT_14c8464f0;
  local_88 = 0x7f7fffff00000000;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  puVar22 = (undefined8 *)*local_220;
  puVar20 = (undefined8 *)(lVar23 + 0x10 + lVar10);
  *(undefined2 *)(puVar20 + -2) = 0;
  *(undefined8 *)((longlong)puVar20 + -0xc) = 0;
  *(undefined4 *)(puVar20 + 2) = 0;
  *puVar20 = 0;
  puVar20[1] = 0;
  puVar20[3] = 0;
  puVar20[4] = 0;
  *(undefined4 *)(puVar20 + -1) = *(undefined4 *)(puVar22 + 1);
  puVar20[-2] = *puVar22;
  FUN_1447715ec(puVar20,puVar22 + 2);
  puVar20[5] = local_1f8;
  lVar2 = lVar10 + lVar23;
  local_220 = (longlong *)lVar23;
  FUN_14014e938(lVar2 + 0x40,local_1f0);
  pvVar3 = local_130;
  *(undefined2 *)(lVar2 + 0x78) = local_1b8;
  *(undefined4 *)(lVar2 + 0x8c) = uStack_1a4;
  *(undefined4 *)(lVar2 + 0x90) = uStack_1a0;
  *(undefined4 *)(lVar2 + 0x94) = uStack_19c;
  *(undefined4 *)(lVar2 + 0x98) = uStack_198;
  *(undefined4 *)(lVar2 + 0x80) = local_1b0;
  *(undefined4 *)(lVar2 + 0x84) = uStack_1ac;
  *(undefined4 *)(lVar2 + 0x88) = uStack_1a8;
  *(undefined4 *)(lVar2 + 0x8c) = uStack_1a4;
  *(undefined8 *)(lVar2 + 0xa0) = local_190;
  *(undefined8 *)(lVar2 + 0xa8) = local_188;
  local_188 = 0;
  *(undefined4 *)(lVar2 + 0xb0) = (undefined4)uStack_180;
  *(undefined4 *)(lVar2 + 0xb4) = uStack_180._4_4_;
  uStack_180 = 0;
  *(undefined8 *)(lVar2 + 0xb8) = local_178;
  local_178 = 0;
  *(undefined4 *)(lVar2 + 0xc0) = (undefined4)uStack_170;
  *(undefined4 *)(lVar2 + 0xc4) = uStack_170._4_4_;
  uStack_170 = 0;
  *(undefined8 *)(lVar2 + 200) = local_168;
  local_168 = 0;
  *(undefined4 *)(lVar2 + 0xd0) = (undefined4)uStack_160;
  *(undefined4 *)(lVar2 + 0xd4) = uStack_160._4_4_;
  uStack_160 = 0;
  *(undefined8 *)(lVar2 + 0xd8) = local_158;
  local_158 = 0;
  *(undefined4 *)(lVar2 + 0xe0) = (undefined4)uStack_150;
  *(undefined4 *)(lVar2 + 0xe4) = uStack_150._4_4_;
  uStack_150 = 0;
  *(undefined8 *)(lVar2 + 0xf0) = local_140;
  *(undefined ***)(lVar2 + 0xe8) = &PTR_LAB_14a1e3c98;
  *(undefined4 *)(lVar2 + 0xf8) = local_138;
  *(undefined8 *)(lVar2 + 0x100) = 0;
  lVar23 = (longlong)(int)uStack_128;
  *(int *)(lVar2 + 0x108) = (int)uStack_128;
  if (lVar23 == 0) {
    *(undefined4 *)((longlong)_Src + 0x10c) = 0;
  }
  else {
    puVar20 = (undefined8 *)((longlong)local_220 + lVar10 + 0x100);
    FUN_1447bda9e(puVar20,uStack_128 & 0xffffffff,0);
    memcpy((void *)*puVar20,pvVar3,lVar23 << 2);
  }
  uVar16 = uStack_118;
  uVar5 = local_120;
  uVar13 = local_214;
  *(undefined8 *)((longlong)_Src + 0x110) = 0;
  *(int *)((longlong)_Src + 0x118) = (int)uStack_118;
  if ((int)uStack_118 == 0) {
    *(undefined4 *)((longlong)_Src + 0x11c) = 0;
  }
  else {
    FUN_1456d3af0((undefined8 *)((longlong)_Src + 0x110),uStack_118 & 0xffffffff,0);
    FUN_1456d39db(*(undefined8 *)((longlong)_Src + 0x110),uVar5,uVar16 & 0xffffffff);
  }
  pvVar3 = local_f8;
  *(undefined8 *)((longlong)_Src + 0x128) = local_108;
  *(undefined ***)((longlong)_Src + 0x120) = &PTR_LAB_14a1e3c98;
  *(undefined4 *)((longlong)_Src + 0x130) = local_100;
  *(undefined8 *)((longlong)_Src + 0x138) = 0;
  lVar10 = (longlong)(int)uStack_f0;
  *(int *)((longlong)_Src + 0x140) = (int)uStack_f0;
  if (lVar10 == 0) {
    *(undefined4 *)((longlong)_Src + 0x144) = 0;
  }
  else {
    FUN_1447bda9e((undefined8 *)((longlong)_Src + 0x138),uStack_f0 & 0xffffffff,0);
    memcpy(*(void **)((longlong)_Src + 0x138),pvVar3,lVar10 << 2);
  }
  uVar16 = uStack_e0;
  uVar5 = local_e8;
  *(undefined8 *)((longlong)_Src + 0x148) = 0;
  *(int *)((longlong)_Src + 0x150) = (int)uStack_e0;
  if ((int)uStack_e0 == 0) {
    *(undefined4 *)((longlong)_Src + 0x154) = 0;
  }
  else {
    FUN_1456d3af0((undefined8 *)((longlong)_Src + 0x148),uStack_e0 & 0xffffffff,0);
    FUN_1456d39db(*(undefined8 *)((longlong)_Src + 0x148),uVar5,uVar16 & 0xffffffff);
  }
  puVar20 = local_d8;
  puVar22 = (undefined8 *)((longlong)_Src + 0x158);
  for (lVar10 = 0xb; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar22 = *puVar20;
    puVar20 = puVar20 + 1;
    puVar22 = puVar22 + 1;
  }
  *(undefined4 *)((longlong)_Src + 0x1b0) = local_80;
  *(undefined2 *)((longlong)_Src + 0x1b8) = local_78;
  *(undefined1 *)((longlong)_Src + 0x1c8) = local_68;
  *(undefined8 *)((longlong)_Src + 0x1c0) = local_70;
  FUN_14494dff0(&local_190);
  if (local_1c8 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)((longlong)_Src + 0x1d0) = 0xffffffff;
  uVar21 = (undefined4)local_210;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar8 = FUN_140cba19a(param_1,uVar13,_Src);
    if (iVar8 != -1) {
      pvVar3 = (void *)(*param_1 + (longlong)iVar8 * 0x1d8);
      lVar10 = *param_1 + (longlong)iVar8 * 0x1d8;
      FUN_14494dff0(lVar10 + 0xa0);
      if (*(longlong *)(lVar10 + 0x68) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)((longlong)pvVar3 + 0x28) != 0) {
        FUN_1400020a8();
      }
      memmove(pvVar3,_Src,0x1d0);
      uVar21 = (undefined4)local_210;
      FUN_148dd0696(param_1,local_210 & 0xffffffff);
      cVar6 = '\x01';
      goto LAB_140fd83ff;
    }
  }
  cVar6 = '\0';
LAB_140fd83ff:
  puVar4 = local_208;
  if (param_5 != (char *)0x0) {
    *param_5 = cVar6;
  }
  if (cVar6 == '\0') {
    uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar9 < 4) {
      iVar8 = 1;
    }
    else {
      uVar16 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar8 <= (int)param_1[9])) {
      uVar13 = (int)param_1[9] - 1U & uVar13;
      *(uint *)((longlong)_Src + 0x1d4) = uVar13;
      plVar17 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar17 = param_1 + 7;
      }
      *(undefined4 *)((longlong)_Src + 0x1d0) =
           *(undefined4 *)
            ((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
      plVar17 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar17 = param_1 + 7;
      }
      *(undefined4 *)
       ((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) = uVar21;
    }
    else {
      *(int *)(param_1 + 9) = iVar8;
      FUN_140fd8960(param_1);
    }
  }
  *puVar4 = uVar21;
  if ((local_60 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fd873e FUN_140fd873e body=544 status=ok
// SIG undefined FUN_140fd873e(void)

void FUN_140fd873e(longlong *param_1)

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
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
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
    iVar11 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar13 = *param_1;
        lVar12 = (longlong)iVar6;
        uVar10 = (longlong)
                 (int)(*(uint *)(lVar13 + 4 + lVar12 * 0x18) ^ *(uint *)(lVar13 + lVar12 * 0x18)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar13 + 0x14 + lVar12 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar13 + 0x10 + lVar12 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar9 = (int)local_50[3];
        lVar13 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar13 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar6 = iVar9 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar12 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar12 * 4 + lVar13 * 4 + 4);
            if (uVar3 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar2 - lVar13 == lVar12) goto LAB_140fd8919;
          }
          iVar4 = iVar4 + (int)lVar12 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar10 = uVar8 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar9);
    }
  }
LAB_140fd8919:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fd8960 FUN_140fd8960 body=1198 status=ok
// SIG undefined FUN_140fd8960(void)

void FUN_140fd8960(longlong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  longlong **pplVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_b8 [32];
  uint local_98;
  int local_94;
  ulonglong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 != 0) {
    plVar3 = param_1 + 7;
    FUN_144a1cbf0(plVar3,0,uVar10,4);
    if (0 < (int)uVar10) {
      uVar2 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar3;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
             0xffffffff;
        uVar2 = uVar2 + 1;
      } while (uVar10 != uVar2);
    }
    local_68 = param_1 + 2;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      uVar16 = 0xffffffff;
      local_60._4_4_ = 0;
      local_90 = 0;
    }
    else {
      FUN_1449c0562(&local_70);
      local_90 = local_70 & 0xffffffff;
      uVar9 = local_70 >> 0x20;
      uVar16 = local_60 & 0xffffffff;
    }
    if (local_60._4_4_ < (int)local_68[3]) {
      iVar17 = local_60._4_4_;
      iVar15 = local_58;
      local_88 = local_68;
      local_80 = plVar3;
      do {
        local_98 = (uint)uVar16;
        local_78 = *param_1 + (longlong)iVar17 * 0x1d8;
        local_94 = iVar15;
        if (*(char *)(*param_1 + (longlong)iVar17 * 0x1d8) == '\x01') {
          FUN_1447a97f4(&local_70,local_78 + 0x10);
          if (0 < local_70._4_4_) {
            lVar14 = 0;
            uVar16 = 0;
            iVar15 = local_70._4_4_;
            iVar4 = DAT_14c948000;
            do {
              bVar18 = (int)local_70 != 0;
              bVar19 = (int)local_70 != iVar4;
              piVar11 = &DAT_14c948620;
              piVar12 = (int *)&DAT_14c948618;
              if (bVar19 && bVar18) {
                pplVar13 = &local_68;
                if (0 < local_4c) {
                  pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                }
                if (1 < iVar15) {
                  pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                }
                piVar11 = (int *)((longlong)pplVar13 + lVar14 + 8);
                piVar12 = (int *)((longlong)pplVar13 + lVar14);
              }
              if ((*piVar12 == DAT_14cb7beb0) && (*piVar11 == DAT_14cb7beb8)) {
LAB_140fd8c4a:
                FUN_1402b5374(&local_70,uVar16 & 0xffffffff,0);
                iVar15 = local_70._4_4_;
                iVar4 = DAT_14c948000;
              }
              else {
                piVar11 = &DAT_14c948620;
                piVar12 = (int *)&DAT_14c948618;
                if (bVar19 && bVar18) {
                  pplVar13 = &local_68;
                  if (0 < local_4c) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar15) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar11 = (int *)((longlong)pplVar13 + lVar14 + 8);
                  piVar12 = (int *)((longlong)pplVar13 + lVar14);
                }
                if ((*piVar12 == DAT_14cb7bec8) && (*piVar11 == DAT_14cb7bed0)) goto LAB_140fd8c4a;
                piVar11 = &DAT_14c948620;
                piVar12 = (int *)&DAT_14c948618;
                if (bVar19 && bVar18) {
                  pplVar13 = &local_68;
                  if (0 < local_4c) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar15) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar11 = (int *)((longlong)pplVar13 + lVar14 + 8);
                  piVar12 = (int *)((longlong)pplVar13 + lVar14);
                }
                if ((*piVar12 == DAT_14cb7bee0) && (*piVar11 == DAT_14cb7bee8)) goto LAB_140fd8c4a;
                piVar11 = &DAT_14c948620;
                piVar12 = (int *)&DAT_14c948618;
                if (bVar19 && bVar18) {
                  pplVar13 = &local_68;
                  if (0 < local_4c) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar15) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar11 = (int *)((longlong)pplVar13 + lVar14 + 8);
                  piVar12 = (int *)((longlong)pplVar13 + lVar14);
                }
                if ((*piVar12 == DAT_14cb7bef8) && (*piVar11 == DAT_14cb7bf00)) goto LAB_140fd8c4a;
                piVar11 = &DAT_14c948620;
                piVar12 = (int *)&DAT_14c948618;
                if (bVar19 && bVar18) {
                  pplVar13 = &local_68;
                  if (0 < local_4c) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar15) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar11 = (int *)((longlong)pplVar13 + lVar14 + 8);
                  piVar12 = (int *)((longlong)pplVar13 + lVar14);
                }
                if ((*piVar12 == DAT_14cb7bf10) && (*piVar11 == DAT_14cb7bf18)) goto LAB_140fd8c4a;
              }
              uVar16 = uVar16 + 1;
              lVar14 = lVar14 + 0xc;
            } while ((longlong)uVar16 < (longlong)iVar15);
          }
          iVar15 = (int)local_70;
          if (CONCAT44(uStack_54,local_58) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          iVar15 = *(int *)(local_78 + 0x10);
        }
        uVar16 = (longlong)iVar15 & (longlong)(int)param_1[9] - 1U;
        iVar15 = (int)uVar16;
        *(int *)(local_78 + 0x1d4) = iVar15;
        plVar3 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar3 = local_80;
        }
        *(undefined4 *)(local_78 + 0x1d0) =
             *(undefined4 *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & uVar16) * 4);
        plVar3 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar3 = local_80;
        }
        *(int *)((longlong)plVar3 + ((longlong)iVar15 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar17;
        uVar10 = local_98 & ~(uint)uVar9;
        uVar16 = (ulonglong)uVar10;
        plVar3 = (longlong *)local_88[2];
        if ((longlong *)local_88[2] == (longlong *)0x0) {
          plVar3 = local_88;
        }
        iVar4 = (int)local_88[3];
        iVar17 = (int)local_90;
        lVar14 = (longlong)iVar17;
        uVar10 = *(uint *)((longlong)plVar3 + lVar14 * 4) & uVar10;
        iVar15 = local_94;
        if (uVar10 == 0) {
          iVar5 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar5 = iVar4 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar6 = iVar5;
          if (iVar5 < iVar17) {
            iVar6 = iVar17;
          }
          if (iVar5 <= iVar17) break;
          lVar8 = 0;
          while( true ) {
            iVar15 = iVar15 + 0x20;
            uVar10 = *(uint *)((longlong)plVar3 + lVar8 * 4 + lVar14 * 4 + 4);
            if (uVar10 != 0) break;
            lVar8 = lVar8 + 1;
            if (iVar6 - lVar14 == lVar8) goto LAB_140fd8dcb;
          }
          local_90 = (ulonglong)(iVar17 + (int)lVar8 + 1);
          uVar16 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar17 = (iVar15 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar17 < iVar4);
    }
  }
LAB_140fd8dcb:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fd8e10 FUN_140fd8e10 body=70 status=ok
// SIG undefined FUN_140fd8e10(void)

void FUN_140fd8e10(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    FUN_14071ae44(param_1);
    lVar1 = 0x8c8;
    do {
      FUN_140fd8e56(param_1,param_1 + lVar1,0);
      lVar1 = lVar1 + 0x10;
    } while (lVar1 != 0x908);
  }
  FUN_140fd9bd0(param_1);
  return;
}



// FUNCTION 140fd8e56 FUN_140fd8e56 body=3449 status=ok
// SIG undefined FUN_140fd8e56(void)

void FUN_140fd8e56(longlong param_1,longlong *param_2,byte param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  int iVar11;
  longlong *plVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  longlong *plVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  longlong lVar28;
  int iVar29;
  undefined1 auStack_1d8 [39];
  byte local_1b1;
  uint *local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  longlong *local_198;
  longlong *local_190;
  ulonglong local_188;
  longlong *local_180;
  longlong local_178;
  longlong *local_170;
  longlong local_168 [2];
  longlong *local_158;
  longlong *plStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined8 local_dc;
  undefined2 local_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  longlong *local_a8;
  undefined1 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if ((longlong)(int)param_2[1] != 0) {
    plVar12 = (longlong *)*param_2;
    local_180 = plVar12 + (longlong)(int)param_2[1] * 2;
    plVar22 = (longlong *)(param_1 + 0x498);
    lVar19 = param_1 + 0x4d0;
    local_198 = (longlong *)(param_1 + 0x4d8);
    local_1b0 = (uint *)(param_1 + 0x4a8);
    param_3 = param_3 ^ 1;
    local_1b1 = param_3;
    local_1a8 = plVar22;
    local_1a0 = lVar19;
    do {
      local_190 = plVar12;
      if ((longlong)(int)plVar12[1] != 0) {
        lVar28 = *plVar12;
        local_178 = (longlong)(int)plVar12[1] * 0x40 + lVar28;
        do {
          puVar15 = local_1b0;
          lVar8 = *(longlong *)(lVar28 + 0x10);
          uVar18 = (uint)((ulonglong)lVar8 >> 0x10);
          uVar27 = (uint)lVar8 & 0xffff;
          uVar18 = ((uint)lVar8 << 0x10 | uVar27) + (int)((ulonglong)lVar8 >> 0x20) +
                   (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar27 >> 4);
          iVar29 = *(int *)(param_1 + 0x4a0);
          iVar20 = *(int *)(param_1 + 0x4cc);
          if (iVar29 != iVar20) {
            lVar26 = *(longlong *)(param_1 + 0x4d8);
            if (*(longlong *)(param_1 + 0x4d8) == 0) {
              lVar26 = lVar19;
            }
            iVar5 = *(int *)(lVar26 + (ulonglong)(*(int *)(param_1 + 0x4e0) - 1U & uVar18) * 4);
            if (iVar5 != -1) {
              do {
                plVar12 = (longlong *)(*plVar22 + (longlong)iVar5 * 0x18);
                if (*plVar12 == lVar8) {
                  if (plVar12 != (longlong *)0x0) goto LAB_140fd919a;
                  break;
                }
                iVar5 = (int)plVar12[2];
              } while (iVar5 != -1);
            }
          }
          if (iVar20 == 0) {
            *(int *)(param_1 + 0x4a0) = iVar29 + 1;
            if (*(int *)(param_1 + 0x4a4) == iVar29) {
              FUN_14482b872(plVar22,iVar29);
            }
            iVar20 = *(int *)(param_1 + 0x4c0);
            if (iVar20 == 0) {
              iVar5 = -1;
            }
            else {
              iVar5 = iVar20 + 0x1e;
              if (-1 < iVar20 + -1) {
                iVar5 = iVar20 + -1;
              }
              iVar5 = iVar5 >> 5;
            }
            iVar11 = iVar20 + 1;
            iVar14 = iVar20 + 0x1f;
            if (-1 < iVar20) {
              iVar14 = iVar20;
            }
            if (iVar14 >> 5 == iVar5) {
              *(int *)(param_1 + 0x4c0) = iVar11;
            }
            else {
              if (*(int *)(param_1 + 0x4c4) <= iVar20) {
                iVar5 = iVar20;
                if (iVar20 + 0x20U < 0xa0) {
                  iVar11 = 0x80;
                }
                else {
                  uVar27 = iVar20 + 0x20U >> 5;
                  uVar9 = (ulonglong)uVar27;
                  if (*(int *)(param_1 + 0x4c4) + 0x1fU < 0xa0) {
                    uVar6 = 4;
                    if (4 < uVar27) {
                      uVar6 = uVar27;
                    }
                  }
                  else {
                    uVar6 = uVar27 + (uVar27 * 3 >> 3) + 0x10;
                  }
                  uVar16 = (ulonglong)(uVar6 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar27 = (uint)(uVar16 + 0xf);
                      if (uVar6 < 0x1ffd) {
                        uVar16 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar16 + 0xf >> 4]];
                      }
                      else {
                        uVar21 = (ulonglong)(uVar27 & 0xfffffff0);
                        puVar15 = local_1b0;
                        if (uVar21 < 0x7ff1) {
                          bVar10 = (&DAT_14c841e00)[uVar27 >> 4];
                          uVar17 = 0x32;
                          if (0x32 < bVar10) {
                            uVar17 = (ulonglong)bVar10;
                          }
                          uVar25 = 0x32 - (ulonglong)bVar10;
                          do {
                            uVar16 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar25 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar25 & 0xffffffff] & 0xf) == 0)
                            goto LAB_140fd98e6;
                            lVar19 = uVar17 + 1 + uVar25;
                            uVar25 = uVar25 - 1;
                          } while (lVar19 != 0x33);
                        }
                        uVar16 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar16 = 0x10;
                        }
                        uVar16 = -uVar16 & (uVar21 + uVar16) - 1;
                      }
                    }
                    else {
                      local_188 = uVar9;
                      uVar16 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar16,0);
                      uVar9 = local_188;
                      iVar5 = *(int *)(param_1 + 0x4c0);
                    }
                  }
LAB_140fd98e6:
                  iVar7 = (int)(uVar16 >> 2);
                  iVar11 = iVar7 << 5;
                  if (iVar7 < (int)uVar9) {
                    iVar11 = -0x20;
                  }
                }
                *(int *)(param_1 + 0x4c4) = iVar11;
                FUN_1446efbd8(puVar15,iVar5);
                iVar11 = *(int *)(param_1 + 0x4c0) + 1;
              }
              iVar5 = iVar11 + 0x1f;
              if (-1 < iVar11) {
                iVar5 = iVar11;
              }
              *(int *)(param_1 + 0x4c0) = iVar11;
              if (iVar11 % 0x20 != 0) {
                puVar13 = *(uint **)(param_1 + 0x4b8);
                if (*(uint **)(param_1 + 0x4b8) == (uint *)0x0) {
                  puVar13 = puVar15;
                }
                bVar10 = -(char)(iVar11 % 0x20);
                puVar13[iVar5 >> 5] = (puVar13[iVar5 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
              }
            }
            lVar8 = (longlong)iVar29;
            puVar13 = *(uint **)(param_1 + 0x4b8);
            if (*(uint **)(param_1 + 0x4b8) == (uint *)0x0) {
              puVar13 = puVar15;
            }
            bVar10 = (byte)iVar20 & 0x1f;
            puVar13[iVar14 >> 5] =
                 puVar13[iVar14 >> 5] & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
          }
          else {
            iVar29 = *(int *)(param_1 + 0x4c8);
            lVar8 = (longlong)iVar29;
            iVar5 = *(int *)(*(longlong *)(param_1 + 0x498) + 4 + lVar8 * 0x18);
            *(int *)(param_1 + 0x4c8) = iVar5;
            *(int *)(param_1 + 0x4cc) = iVar20 + -1;
            if (iVar20 + -1 != 0) {
              *(undefined4 *)(*(longlong *)(param_1 + 0x498) + (longlong)iVar5 * 0x18) = 0xffffffff;
            }
          }
          puVar13 = *(uint **)(param_1 + 0x4b8);
          if (*(uint **)(param_1 + 0x4b8) == (uint *)0x0) {
            puVar13 = puVar15;
          }
          iVar20 = iVar29 + 0x1f;
          if (-1 < iVar29) {
            iVar20 = iVar29;
          }
          puVar13[iVar20 >> 5] = puVar13[iVar20 >> 5] | 1 << ((byte)iVar29 & 0x1f);
          lVar26 = *(longlong *)(param_1 + 0x498);
          local_158 = (longlong *)0x0;
          puVar24 = (undefined8 *)(lVar26 + lVar8 * 0x18);
          *puVar24 = *(undefined8 *)(lVar28 + 0x10);
          FUN_141459786(puVar24 + 1,&local_158);
          plVar22 = local_158;
          if (((local_158 != (longlong *)0x0) &&
              (*(int *)(local_158 + 0x21) = (int)local_158[0x21] + -1, (int)local_158[0x26] < 1)) &&
             (FUN_1400847bc(local_158 + 0x17,0), (int)plVar22[0x21] == 0)) {
            FUN_140087e46(plVar22);
            if (*plVar22 != -1) {
              if (DAT_14cb259f8 == 0) goto LAB_140fd90fa;
              FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar22);
            }
            if (DAT_14cb259f8 != 0) {
              FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar22);
            }
          }
LAB_140fd90fa:
          lVar19 = local_1a0;
          plVar12 = (longlong *)(lVar26 + lVar8 * 0x18);
          *(undefined4 *)(plVar12 + 2) = 0xffffffff;
          uVar6 = *(int *)(param_1 + 0x4a0) - *(int *)(param_1 + 0x4cc);
          uVar27 = 1;
          if (uVar6 != 1) {
            if (*(int *)(param_1 + 0x4a0) != *(int *)(param_1 + 0x4cc)) {
              lVar8 = *(longlong *)(param_1 + 0x4d8);
              if (*(longlong *)(param_1 + 0x4d8) == 0) {
                lVar8 = local_1a0;
              }
              iVar20 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x4e0) - 1U & uVar18) * 4);
              if (iVar20 != -1) {
                do {
                  plVar2 = (longlong *)(*local_1a8 + (longlong)iVar20 * 0x18);
                  if (*plVar2 == *plVar12) {
                    plVar22 = (longlong *)plVar2[1];
                    if (plVar22 != (longlong *)0x0) {
                      *(int *)(plVar22 + 0x21) = (int)plVar22[0x21] + -1;
                      if (((int)plVar22[0x26] < 1) &&
                         (FUN_1400847bc(plVar22 + 0x17,0), (int)plVar22[0x21] == 0)) {
                        FUN_140087e46(plVar22);
                        if (*plVar22 != -1) {
                          if (DAT_14cb259f8 == 0) goto LAB_140fd9a87;
                          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar22);
                        }
                        if (DAT_14cb259f8 != 0) {
                          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar22);
                        }
                      }
LAB_140fd9a87:
                      plVar2[1] = 0;
                    }
                    plVar22 = local_1a8;
                    uVar3 = *(undefined4 *)((longlong)plVar12 + 4);
                    lVar19 = plVar12[1];
                    uVar4 = *(undefined4 *)((longlong)plVar12 + 0xc);
                    *(int *)plVar2 = (int)*plVar12;
                    *(undefined4 *)((longlong)plVar2 + 4) = uVar3;
                    *(int *)(plVar2 + 1) = (int)lVar19;
                    *(undefined4 *)((longlong)plVar2 + 0xc) = uVar4;
                    FUN_148a1caa6(local_1a8,iVar29);
                    lVar19 = local_1a0;
                    goto LAB_140fd9719;
                  }
                  iVar20 = (int)plVar2[2];
                } while (iVar20 != -1);
              }
            }
            if (3 < uVar6) {
              uVar9 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
              lVar8 = 0x3f;
              if (uVar9 != 0) {
                for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
                }
              }
              uVar27 = 1 << ((byte)lVar8 & 0x1f);
            }
          }
          if (((int)uVar6 < 1) || ((int)uVar27 <= *(int *)(param_1 + 0x4e0))) {
            uVar18 = *(int *)(param_1 + 0x4e0) - 1U & uVar18;
            *(uint *)((longlong)plVar12 + 0x14) = uVar18;
            lVar8 = *(longlong *)(param_1 + 0x4d8);
            if (*(longlong *)(param_1 + 0x4d8) == 0) {
              lVar8 = local_1a0;
            }
            *(undefined4 *)(plVar12 + 2) =
                 *(undefined4 *)
                  (lVar8 + ((longlong)*(int *)(param_1 + 0x4e0) - 1U & (longlong)(int)uVar18) * 4);
            lVar8 = *(longlong *)(param_1 + 0x4d8);
            if (*(longlong *)(param_1 + 0x4d8) == 0) {
              lVar8 = local_1a0;
            }
            *(int *)(lVar8 + ((longlong)*(int *)(param_1 + 0x4e0) - 1U & (longlong)(int)uVar18) * 4)
                 = iVar29;
            plVar22 = local_1a8;
          }
          else {
            *(uint *)(param_1 + 0x4e0) = uVar27;
            if (*(longlong *)(param_1 + 0x4d8) != 0) {
              FUN_1446efa72(local_198,0,0,4);
              uVar27 = *(uint *)(param_1 + 0x4e0);
            }
            plVar22 = local_1a8;
            if (uVar27 == 1) {
              if (*local_198 != 0) {
                FUN_1446efa72(local_198,0,0,4);
              }
LAB_140fd943a:
              uVar18 = 0;
              do {
                lVar8 = *(longlong *)(param_1 + 0x4d8);
                if (*(longlong *)(param_1 + 0x4d8) == 0) {
                  lVar8 = lVar19;
                }
                *(undefined4 *)
                 (lVar8 + (ulonglong)(*(int *)(param_1 + 0x4e0) + 0x7fffffffU & uVar18) * 4) =
                     0xffffffff;
                uVar18 = uVar18 + 1;
              } while (uVar27 != uVar18);
            }
            else {
              if (uVar27 == 0) goto LAB_140fd9719;
              FUN_1446efa72(local_198,0,uVar27,4);
              if (0 < (int)uVar27) goto LAB_140fd943a;
            }
            iVar20 = *(int *)(param_1 + 0x4c0);
            if (iVar20 == 0) {
              uVar9 = 0;
              uVar16 = 1;
              iVar5 = 0;
              iVar11 = 0;
            }
            else {
              puVar15 = *(uint **)(param_1 + 0x4b8);
              if (*(uint **)(param_1 + 0x4b8) == (uint *)0x0) {
                puVar15 = local_1b0;
              }
              uVar18 = *puVar15;
              if (uVar18 == 0) {
                iVar5 = iVar20 + 0x1e;
                if (-1 < iVar20 + -1) {
                  iVar5 = iVar20 + -1;
                }
                uVar9 = 0;
                uVar27 = iVar5 >> 5;
                if (iVar5 >> 5 < 1) {
                  uVar27 = 0;
                }
                iVar11 = 0;
                do {
                  if (uVar27 == uVar9) goto LAB_140fd9719;
                  iVar11 = iVar11 + 0x20;
                  uVar18 = puVar15[uVar9 + 1];
                  uVar9 = uVar9 + 1;
                } while (uVar18 == 0);
              }
              else {
                uVar9 = 0;
                iVar11 = 0;
              }
              uVar16 = (ulonglong)(-uVar18 & uVar18);
              uVar21 = uVar16 * 2 + 1;
              lVar8 = 0x3f;
              if (uVar21 != 0) {
                for (; uVar21 >> lVar8 == 0; lVar8 = lVar8 + -1) {
                }
              }
              iVar5 = (iVar11 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
              if (iVar20 <= iVar5) {
                iVar5 = iVar20;
              }
            }
            if (iVar5 < iVar20) {
              uVar18 = 0xffffffff;
              do {
                lVar19 = *(longlong *)(param_1 + 0x498);
                lVar26 = (longlong)iVar5;
                uVar23 = *(undefined8 *)(lVar19 + lVar26 * 0x18);
                uVar27 = (uint)((ulonglong)uVar23 >> 0x10);
                uVar6 = (uint)uVar23 & 0xffff;
                uVar21 = (longlong)
                         (int)(((uint)uVar23 << 0x10 | uVar6) + (int)((ulonglong)uVar23 >> 0x20) +
                               (uVar27 << 0x13 | uVar27 & 0xffff) + (uVar6 >> 4)) &
                         (longlong)*(int *)(param_1 + 0x4e0) - 1U;
                iVar20 = (int)uVar21;
                *(int *)(lVar19 + 0x14 + lVar26 * 0x18) = iVar20;
                lVar8 = *(longlong *)(param_1 + 0x4d8);
                if (*(longlong *)(param_1 + 0x4d8) == 0) {
                  lVar8 = local_1a0;
                }
                *(undefined4 *)(lVar19 + 0x10 + lVar26 * 0x18) =
                     *(undefined4 *)
                      (lVar8 + ((longlong)*(int *)(param_1 + 0x4e0) - 1U & uVar21) * 4);
                lVar19 = *(longlong *)(param_1 + 0x4d8);
                if (*(longlong *)(param_1 + 0x4d8) == 0) {
                  lVar19 = local_1a0;
                }
                *(int *)(lVar19 + ((longlong)iVar20 & (longlong)*(int *)(param_1 + 0x4e0) - 1U) * 4)
                     = iVar5;
                uVar18 = ~(uint)uVar16 & uVar18;
                puVar15 = *(uint **)(param_1 + 0x4b8);
                if (*(uint **)(param_1 + 0x4b8) == (uint *)0x0) {
                  puVar15 = local_1b0;
                }
                iVar20 = *(int *)(param_1 + 0x4c0);
                iVar5 = (int)uVar9;
                lVar8 = (longlong)iVar5;
                uVar27 = puVar15[lVar8] & uVar18;
                plVar22 = local_1a8;
                lVar19 = local_1a0;
                param_3 = local_1b1;
                if (uVar27 == 0) {
                  iVar14 = iVar20 + 0x1e;
                  if (-1 < iVar20 + -1) {
                    iVar14 = iVar20 + -1;
                  }
                  iVar14 = iVar14 >> 5;
                  iVar7 = iVar14;
                  if (iVar14 < iVar5) {
                    iVar7 = iVar5;
                  }
                  if (iVar14 <= iVar5) break;
                  lVar26 = 0;
                  while( true ) {
                    iVar11 = iVar11 + 0x20;
                    uVar27 = puVar15[lVar8 + lVar26 + 1];
                    if (uVar27 != 0) break;
                    lVar26 = lVar26 + 1;
                    if (iVar7 - lVar8 == lVar26) goto LAB_140fd9719;
                  }
                  uVar9 = (ulonglong)(iVar5 + (int)lVar26 + 1);
                  uVar18 = 0xffffffff;
                }
                uVar16 = (ulonglong)(-uVar27 & uVar27);
                uVar21 = uVar16 * 2 + 1;
                lVar8 = 0x3f;
                if (uVar21 != 0) {
                  for (; uVar21 >> lVar8 == 0; lVar8 = lVar8 + -1) {
                  }
                }
                iVar5 = (iVar11 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
              } while (iVar5 < iVar20);
            }
          }
LAB_140fd9719:
          plVar12 = (longlong *)(*plVar22 + (longlong)iVar29 * 0x18);
LAB_140fd919a:
          plVar12 = plVar12 + 1;
          if (*plVar12 == 0) {
            local_168[0] = 0;
            local_168[1] = 0;
            local_148 = 0;
            uStack_140 = 0;
            local_158 = (longlong *)0x0;
            plStack_150 = (longlong *)0x0;
            local_138 = 0;
            uStack_134 = 0;
            uStack_130 = 0;
            uStack_12c = 0x3ff00000;
            local_118 = 0;
            uStack_110 = 0;
            local_128 = 0;
            uStack_120 = 0;
            local_108 = 0x3ff0000000000000;
            uStack_100 = 0x3ff0000000000000;
            local_f8 = 0x3ff0000000000000;
            uStack_f0 = 0;
            local_e8 = 0x3f800000;
            local_e0 = 0;
            local_dc = 0;
            local_c8 = 0;
            local_c0 = 0;
            uStack_b8 = 0;
            local_b0 = 0;
            local_a8 = (longlong *)0x0;
            local_a0 = 1;
            FUN_1403c7a68(param_1,&local_158,local_168);
            plVar2 = local_a8;
            local_170 = local_a8;
            if (local_a8 != (longlong *)0x0) {
              if (((int)local_a8[0x26] < 1) &&
                 (FUN_1400847bc(local_a8 + 0x17,0), (int)plVar2[0x21] == 0)) {
                FUN_140087e46(plVar2);
                if (*plVar2 != -1) {
                  if (DAT_14cb259f8 == 0) goto LAB_140fd926e;
                  FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar2);
                }
                if (DAT_14cb259f8 != 0) {
                  FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar2);
                }
              }
LAB_140fd926e:
              local_a8 = (longlong *)0x0;
            }
            if (local_c0 != 0) {
              FUN_1400020a8();
            }
            FUN_1403c75f4(plVar12,&local_170);
            plVar2 = local_170;
            if (((local_170 != (longlong *)0x0) &&
                (*(int *)(local_170 + 0x21) = (int)local_170[0x21] + -1, (int)local_170[0x26] < 1))
               && (FUN_1400847bc(local_170 + 0x17,0), (int)plVar2[0x21] == 0)) {
              FUN_140087e46(plVar2);
              if (*plVar2 != -1) {
                if (DAT_14cb259f8 == 0) goto LAB_140fd92cf;
                FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar2);
              }
              if (DAT_14cb259f8 != 0) {
                FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar2);
              }
            }
LAB_140fd92cf:
            if (local_168[0] != 0) {
              FUN_1400020a8();
            }
          }
          FUN_140d27362(lVar28 + 0x18,plVar12);
          if (*(longlong *)(lVar28 + 0x18) != 0 && param_3 == 0) {
            if ((*(int *)(param_1 + 0x4ec) == 0) ||
               (uVar18 = *(uint *)(param_1 + 0x4e8), (int)uVar18 < 0)) {
LAB_140fd97b7:
              uVar23 = 0;
            }
            else {
              uVar23 = 0;
              if ((int)uVar18 < DAT_14c9647dc) {
                puVar24 = (undefined8 *)
                          ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8));
                if (((puVar24 == (undefined8 *)0x0) ||
                    (*(int *)(puVar24 + 2) != *(int *)(param_1 + 0x4ec))) ||
                   ((*(uint *)(puVar24 + 1) & 0x10200000) != 0)) goto LAB_140fd97b7;
                uVar23 = *puVar24;
              }
            }
            FUN_1418198c8(*(longlong *)(lVar28 + 0x18),&local_158,uVar23,0);
            plVar2 = plStack_150;
            *(longlong **)(lVar28 + 0x20) = local_158;
            local_158 = (longlong *)0x0;
            plVar12 = *(longlong **)(lVar28 + 0x28);
            if (plStack_150 != plVar12) {
              plStack_150 = (longlong *)0x0;
              *(longlong **)(lVar28 + 0x28) = plVar2;
              if (plVar12 == (longlong *)0x0) goto LAB_140fd9403;
              LOCK();
              plVar2 = plVar12 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
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
            plVar12 = plStack_150;
            if (plStack_150 != (longlong *)0x0) {
              LOCK();
              plVar2 = plStack_150 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plStack_150)(plStack_150);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
            }
          }
LAB_140fd9403:
          lVar28 = lVar28 + 0x40;
        } while (lVar28 != local_178);
      }
      plVar12 = local_190 + 2;
    } while (plVar12 != local_180);
  }
  if ((local_90 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fd9bd0 FUN_140fd9bd0 body=1698 status=ok
// SIG undefined FUN_140fd9bd0(void)

void FUN_140fd9bd0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  code *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x3c) != '\x01') goto LAB_140fda090;
  *(undefined1 *)(param_1 + 0x460) = 1;
  if (((((*(longlong **)(param_1 + 0x20) == (longlong *)0x0) || (*(int *)(param_1 + 0x1c) == 0)) ||
       (uVar17 = *(uint *)(param_1 + 0x18), (int)uVar17 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar17 ||
       (lVar16 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8), lVar16 == 0)))) ||
     ((*(int *)(lVar16 + 0x10) != *(int *)(param_1 + 0x1c) ||
      ((*(uint *)(lVar16 + 8) & 0x10200000) != 0)))) {
LAB_140fd9c60:
    *(undefined4 *)(param_1 + 0x4e8) = 0;
    iVar8 = 0;
  }
  else {
    lVar16 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))();
    if (lVar16 == 0) goto LAB_140fd9c60;
    uVar17 = *(uint *)(lVar16 + 0xc);
    *(uint *)(param_1 + 0x4e8) = uVar17;
    if ((int)uVar17 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar8 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar18) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar8 = *(int *)(lVar16 + 0x10);
      bVar18 = iVar8 == 0;
      if (bVar18) {
        *(int *)(lVar16 + 0x10) = iVar12;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar18) {
        iVar8 = iVar12;
      }
    }
  }
  *(int *)(param_1 + 0x4ec) = iVar8;
  FUN_140fd8e56(param_1,param_1 + 0x3e0,0);
  FUN_140fd8e56(param_1,param_1 + 0x3f0,0);
  FUN_140fd8e56(param_1,param_1 + 0x400,1);
  FUN_140fd8e56(param_1,param_1 + 0x410,0);
  FUN_140fd8e56(param_1,param_1 + 0x420,0);
  FUN_140fd8e56(param_1,param_1 + 0x430,0);
  FUN_140fd8e56(param_1,param_1 + 0x450,0);
  if ((((*(int *)(param_1 + 0x4ec) != 0) && (uVar17 = *(uint *)(param_1 + 0x4e8), -1 < (int)uVar17))
      && (((int)uVar17 < DAT_14c9647dc &&
          (((plVar13 = (longlong *)
                       ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8)),
            plVar13 != (longlong *)0x0 && ((int)plVar13[2] == *(int *)(param_1 + 0x4ec))) &&
           ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)))))) && (lVar16 = *plVar13, lVar16 != 0)) {
    if (DAT_14cb5b388 == 0) {
      local_a0 = &local_58;
      local_58 = FUN_141864c34;
      local_90 = FUN_14081d0ea;
      local_98 = &LAB_146431698;
      local_a8 = &LAB_1486775cb;
      local_b0 = &LAB_1464cee35;
      local_b8 = &DAT_149e063b2;
      local_c0 = 0;
      local_c8 = 0x10000005;
      local_d0 = 0x10;
      local_d8 = CONCAT44(local_d8._4_4_,0x3a20);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) {
      lVar15 = *(longlong *)(lVar16 + 0x35d0);
      plVar13 = *(longlong **)(lVar16 + 0x35d8);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      if (lVar15 != 0) {
        FUN_140ca9024(lVar15 + 0x560,param_1 + 0x770);
        FUN_140a3ab1e(lVar15);
        FUN_1411955f4(lVar15,param_1);
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar13 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    uVar3 = *(undefined1 *)(*(longlong *)(param_1 + 0x4f0) + 0xbd8);
    *(undefined1 *)(param_1 + 0x490) = uVar3;
    FUN_140a9d838(param_1,param_1 + 0x3e0,uVar3,0);
  }
  if ((longlong)*(int *)(param_1 + 0x228) != 0) {
    lVar15 = *(longlong *)(param_1 + 0x220);
    local_70 = (longlong)*(int *)(param_1 + 0x228) * 0x100 + lVar15;
    lVar16 = param_1 + 0x4d0;
    local_68 = lVar16;
    do {
      if ((longlong)*(int *)(lVar15 + 0x38) != 0) {
        plVar13 = *(longlong **)(lVar15 + 0x30);
        plVar14 = plVar13 + *(int *)(lVar15 + 0x38);
        local_88 = (longlong *)(lVar15 + 0xa8);
        local_78 = lVar15 + 0xe0;
        local_60 = lVar15;
LAB_140fd9e00:
        plVar6 = local_88;
        if (*(int *)(param_1 + 0x4a0) != *(int *)(param_1 + 0x4cc)) {
          lVar4 = *plVar13;
          uVar17 = (uint)((ulonglong)lVar4 >> 0x10);
          uVar9 = (uint)lVar4 & 0xffff;
          uVar17 = (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar9) +
                   (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar9 >> 4);
          lVar11 = *(longlong *)(param_1 + 0x4d8);
          if (*(longlong *)(param_1 + 0x4d8) == 0) {
            lVar11 = lVar16;
          }
          iVar8 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0x4e0) - 1U & uVar17) * 4);
          if (iVar8 != -1) {
            do {
              plVar2 = (longlong *)(*(longlong *)(param_1 + 0x498) + (longlong)iVar8 * 0x18);
              if (*plVar2 == lVar4) {
                if (plVar2 + 1 != (longlong *)0x0 && plVar2 != (longlong *)0x0) {
                  puVar5 = (undefined8 *)plVar2[1];
                  if (puVar5 == (undefined8 *)0x0) {
                    local_80 = 0xffffffffffffffff;
                  }
                  else {
                    local_80 = *puVar5;
                  }
                  if (*(int *)(lVar15 + 0xb0) == *(int *)(lVar15 + 0xdc)) goto LAB_140fd9f1b;
                  lVar11 = *(longlong *)(lVar15 + 0xe8);
                  if (*(longlong *)(lVar15 + 0xe8) == 0) {
                    lVar11 = local_78;
                  }
                  iVar8 = *(int *)(lVar11 + (ulonglong)(*(int *)(lVar15 + 0xf0) - 1U & uVar17) * 4);
                  if (iVar8 == -1) goto LAB_140fd9f1b;
                  goto LAB_140fd9ef2;
                }
                break;
              }
              iVar8 = (int)plVar2[2];
            } while (iVar8 != -1);
          }
        }
        goto LAB_140fda056;
      }
LAB_140fda073:
      FUN_14008817c(lVar15);
      lVar15 = lVar15 + 0x100;
    } while (lVar15 != local_70);
  }
LAB_140fda090:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar8 = *(int *)(lVar11 + 0x18), iVar8 != -1) {
LAB_140fd9ef2:
    lVar11 = *local_88 + (longlong)iVar8 * 0x20;
    if (*(longlong *)(*local_88 + (longlong)iVar8 * 0x20) == lVar4) {
      if (lVar11 != 0) goto LAB_140fda04a;
      break;
    }
  }
LAB_140fd9f1b:
  FUN_1438a8840(local_88,&local_58);
  plVar2 = local_50;
  lVar15 = local_60;
  *local_50 = *plVar13;
  local_50[1] = 0;
  local_50[2] = -1;
  *(undefined4 *)(local_50 + 3) = 0xffffffff;
  iVar8 = (int)local_58;
  local_d8 = 0;
  cVar7 = FUN_1438a8af8(plVar6,uVar17,local_50,&local_58);
  if (cVar7 == '\0') {
    uVar9 = *(int *)(lVar15 + 0xb0) - *(int *)(lVar15 + 0xdc);
    iVar12 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar16 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar16 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar12 <= *(int *)(lVar15 + 0xf0))) {
      uVar17 = *(int *)(lVar15 + 0xf0) - 1U & uVar17;
      *(uint *)((longlong)plVar2 + 0x1c) = uVar17;
      lVar16 = *(longlong *)(lVar15 + 0xe8);
      if (*(longlong *)(lVar15 + 0xe8) == 0) {
        lVar16 = local_78;
      }
      *(undefined4 *)(plVar2 + 3) =
           *(undefined4 *)
            (lVar16 + ((longlong)*(int *)(lVar15 + 0xf0) - 1U & (longlong)(int)uVar17) * 4);
      lVar16 = *(longlong *)(lVar15 + 0xe8);
      if (*(longlong *)(lVar15 + 0xe8) == 0) {
        lVar16 = local_78;
      }
      *(int *)(lVar16 + ((longlong)*(int *)(lVar15 + 0xf0) - 1U & (longlong)(int)uVar17) * 4) =
           iVar8;
    }
    else {
      *(int *)(lVar15 + 0xf0) = iVar12;
      FUN_1438a8c2e(local_88);
    }
  }
  lVar11 = *local_88 + (longlong)iVar8 * 0x20;
  lVar16 = local_68;
LAB_140fda04a:
  *(undefined8 **)(lVar11 + 8) = puVar5;
  *(undefined8 *)(lVar11 + 0x10) = local_80;
LAB_140fda056:
  plVar13 = plVar13 + 1;
  if (plVar13 == plVar14) goto LAB_140fda073;
  goto LAB_140fd9e00;
}



// FUNCTION 140fda274 FUN_140fda274 body=508 status=ok
// SIG undefined FUN_140fda274(void)

void FUN_140fda274(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  longlong *plVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_a8 [40];
  int local_80 [2];
  int local_78;
  int local_70;
  int local_6c;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar11 = 0;
  if (((((*(int *)(param_1 + 0x84) == 0) || (uVar1 = *(uint *)(param_1 + 0x80), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(param_1 + 0x84))))) ||
     ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) {
    iVar12 = 0;
  }
  else {
    plVar9 = (longlong *)*plVar9;
    iVar11 = 0;
    iVar12 = 0;
    if (plVar9 != (longlong *)0x0) {
      do {
        if (plVar9[5] != 0) {
          lVar13 = *(longlong *)(plVar9[5] + 0x30);
          if (lVar13 != 0) {
            uVar10 = *(undefined8 *)(lVar13 + 0x360);
            goto LAB_140fda323;
          }
          break;
        }
        plVar9 = (longlong *)(**(code **)(*plVar9 + 0x2f0))(plVar9);
      } while (plVar9 != (longlong *)0x0);
      uVar10 = 0;
LAB_140fda323:
      FUN_140fda471(local_80,uVar10);
      iVar11 = local_80[0];
      iVar12 = local_78;
    }
  }
  iVar6 = *(int *)(param_1 + 0xf0);
  if (0 < iVar6) {
    lVar13 = 0x10;
    lVar14 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0xe8);
      iVar2 = *(int *)(lVar4 + -0x10 + lVar13);
      iVar3 = *(int *)(lVar4 + -8 + lVar13);
      if (((iVar2 == DAT_14cb86258) && (iVar3 == DAT_14cb8625c._4_4_)) ||
         ((iVar2 == DAT_14cb86240 && (iVar3 == DAT_14cb86244._4_4_)))) {
        FUN_14096c63a(lVar4 + lVar13,local_80);
        piVar7 = &DAT_14c948620;
        piVar8 = (int *)&DAT_14c948618;
        if (local_70 != 0) {
          piVar7 = &DAT_14c948620;
          piVar8 = (int *)&DAT_14c948618;
          if (1 < local_6c) {
            piVar7 = &DAT_14c948620;
            piVar8 = (int *)&DAT_14c948618;
            if (local_70 != DAT_14c948000) {
              piVar8 = (int *)(local_58 + 0xc);
              piVar7 = (int *)(local_58 + 0x14);
            }
          }
        }
        iVar6 = *piVar8;
        iVar2 = *piVar7;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        uVar5 = 1;
        if (iVar2 == iVar12 && iVar6 == iVar11) goto LAB_140fda405;
        iVar6 = *(int *)(param_1 + 0xf0);
      }
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 0x48;
    } while (lVar14 < iVar6);
  }
  uVar5 = 0;
LAB_140fda405:
  *(undefined1 *)(param_1 + 0x180) = uVar5;
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fda471 FUN_140fda471 body=86 status=ok
// SIG undefined FUN_140fda471(void)

undefined8 * FUN_140fda471(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_140149a73(param_2,0);
  if ((lVar1 != 0) && (plVar2 = (longlong *)FUN_1401499e8(lVar1), plVar2 != (longlong *)0x0)) {
    lVar1 = (**(code **)(*plVar2 + 0xe0))(plVar2);
    *param_1 = *(undefined8 *)(lVar1 + 0x2c);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar1 + 0x34);
    return param_1;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 140fda4c8 FUN_140fda4c8 body=274 status=ok
// SIG undefined FUN_140fda4c8(void)

double * FUN_140fda4c8(longlong *param_1,double *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((int)param_1[0x13a] < 1) {
    dVar7 = 0.0;
    dVar5 = 0.0;
  }
  else {
    lVar2 = 0;
    uVar3 = 0;
    dVar4 = 0.0;
    dVar6 = 0.0;
    do {
      lVar1 = param_1[0x139];
      FUN_140fda668(param_1,uVar3 & 0xffffffff);
      (**(code **)(*param_1 + 0x6a0))(param_1,&local_88,lVar1 + lVar2,uVar3 & 0xffffffff);
      dVar5 = ABS(local_80);
      if (ABS(local_80) <= dVar4) {
        dVar5 = dVar4;
      }
      dVar7 = ABS(local_88);
      if (ABS(local_88) <= dVar6) {
        dVar7 = dVar6;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x28;
      dVar4 = dVar5;
      dVar6 = dVar7;
    } while ((longlong)uVar3 < (longlong)(int)param_1[0x13a]);
    dVar7 = dVar7 + dVar7;
    dVar5 = dVar5 + dVar5;
  }
  *param_2 = dVar7;
  param_2[1] = dVar5;
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fda5dc FUN_140fda5dc body=139 status=ok
// SIG undefined FUN_140fda5dc(void)

undefined8 FUN_140fda5dc(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_140fda668(param_1,param_4);
  local_28 = *(double *)(lVar1 + 0x48) + *(double *)(param_3 + 0x20);
  local_30 = *(double *)(lVar1 + 0x40) + *(double *)(param_3 + 0x18);
  local_38 = *(double *)(lVar1 + 0x38) + *(double *)(param_3 + 0x10);
  FUN_140fda6de(param_1,param_2,*(undefined8 *)(param_3 + 8));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fda668 FUN_140fda668 body=118 status=ok
// SIG undefined FUN_140fda668(void)

longlong FUN_140fda668(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0xce8) == '\x01') {
    if ((int)param_2 < 0) {
      return 0;
    }
    if (((int)param_2 < *(int *)(param_1 + 0xc30)) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xc28) + (ulonglong)param_2 * 8), lVar1 != 0))
    {
      return lVar1;
    }
  }
  else if ((int)param_2 < 0) {
    return 0;
  }
  if (((int)param_2 < *(int *)(param_1 + 0x9d0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x9c8) + (ulonglong)param_2 * 0x28), lVar1 != 0)
     ) {
    if (*(longlong *)(lVar1 + 0x110) == 0) {
      FUN_140aa6c08(lVar1);
      return *(longlong *)(lVar1 + 0x110);
    }
    return *(longlong *)(lVar1 + 0x110);
  }
  return 0;
}



// FUNCTION 140fda6de FUN_140fda6de body=1171 status=ok
// SIG undefined FUN_140fda6de(void)

double * FUN_140fda6de(longlong param_1,double *param_2,longlong param_3,double *param_4)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  wchar_t *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  code **local_180;
  undefined1 *local_178;
  code *local_170;
  undefined8 local_168 [16];
  code *local_e8;
  double dStack_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  param_2[2] = param_4[2];
  dVar3 = param_4[1];
  *param_2 = *param_4;
  param_2[1] = dVar3;
  if ((param_3 == 0) || (*(longlong *)(param_1 + 0x110) == 0)) goto LAB_140fda9e5;
  lVar6 = FUN_14081cebe();
  plVar9 = *(longlong **)(param_1 + 0x110);
  if ((plVar9 == (longlong *)0x0) || ((lVar6 == 0 || (lVar8 = plVar9[2], lVar8 == 0))))
  goto LAB_140fda9e5;
  iVar1 = *(int *)(lVar8 + 0x38);
  if ((iVar1 < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) goto LAB_140fda9e5;
  if (DAT_14cac7cb8 == 0) {
    local_180 = &local_e8;
    local_e8 = FUN_144a7958c;
    local_170 = FUN_14081d0ea;
    local_178 = &LAB_1417963e0;
    local_188 = &LAB_1478a2d90;
    local_190 = &LAB_146395589;
    local_198 = L"Engine";
    local_1a0 = 0x20000000000;
    local_1a8 = 0x10000005;
    local_1b0 = 0x10;
    local_1b8 = 0xad0;
    FUN_14081cfa3(L"/Script/Engine",L"SkinnedMeshComponent",&DAT_14cac7cb8,FUN_146395562);
    lVar8 = plVar9[2];
    iVar1 = *(int *)(lVar8 + 0x38);
  }
  if ((iVar1 < *(int *)(DAT_14cac7cb8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cac7cb8 + 0x38) * 8) !=
      DAT_14cac7cb8 + 0x30)) goto LAB_140fda9e5;
  plVar11 = (longlong *)plVar9[0xcb];
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)plVar9[0xcc];
    if ((DAT_14c950c29 & plVar11 != (longlong *)0x0) != 0) goto LAB_140fdab3f;
    if (plVar11 == (longlong *)0x0) goto LAB_140fda9e5;
LAB_140fdaa4a:
    plVar11 = (longlong *)plVar9[0xcc];
    if ((DAT_14c950c29 & plVar11 != (longlong *)0x0) != 0) {
LAB_140fdab65:
      FUN_14689c22e(plVar11);
    }
  }
  else if (DAT_14c950c29 != 0) {
LAB_140fdab3f:
    FUN_14689c22e(plVar11);
    plVar11 = (longlong *)plVar9[0xcb];
    if (plVar11 == (longlong *)0x0) goto LAB_140fdaa4a;
    if ((DAT_14c950c29 & 1) == 0) goto LAB_140fda7e4;
    goto LAB_140fdab65;
  }
LAB_140fda7e4:
  (**(code **)(*plVar11 + 0x348))(plVar11,&local_e8,param_3);
  dVar4 = local_78 * (double)plVar9[0x3b];
  dVar5 = local_80 * (double)plVar9[0x3a];
  dVar3 = local_88 * (double)plVar9[0x39];
  puVar10 = &DAT_14c846400;
  puVar12 = local_168;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  lVar6 = (**(code **)(*plVar9 + 0x7b8))(plVar9,0,1,0xffffffff);
  if (lVar6 != 0) {
    puVar7 = (uint *)(**(code **)(*plVar9 + 0x7b8))(plVar9,0,1,0xffffffff);
    if (((((puVar7[1] != 0) && (uVar2 = *puVar7, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
        && ((lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar6 != 0 &&
            (*(uint *)(lVar6 + 0x10) == puVar7[1])))) && ((*(uint *)(lVar6 + 8) & 0x10200000) == 0))
    {
      plVar11 = (longlong *)plVar9[0xcb];
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)plVar9[0xcc];
        if ((DAT_14c950c29 & plVar11 != (longlong *)0x0) != 0) goto LAB_140fdaa7d;
      }
      else if (DAT_14c950c29 == 1) {
LAB_140fdaa7d:
        FUN_14689c22e(plVar11);
      }
      lVar6 = 0;
      puVar7 = (uint *)(**(code **)(*plVar9 + 0x7b8))(plVar9,0,1,0xffffffff);
      if (puVar7[1] != 0) {
        uVar2 = *puVar7;
        lVar6 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          plVar9 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((plVar9 == (longlong *)0x0) ||
             ((*(uint *)(plVar9 + 2) != puVar7[1] || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0))))
          {
            lVar6 = 0;
          }
          else {
            lVar6 = *plVar9;
          }
        }
      }
      (**(code **)(*plVar11 + 0x348))(plVar11,local_168,*(undefined8 *)(lVar6 + 0x28));
    }
  }
  FUN_14007522e(&local_e8,local_168);
  *param_2 = *param_2 + dVar4 * local_a8 + dVar5 * local_c8 + dVar3 * (double)local_e8 + local_88;
  param_2[1] = dVar4 * dStack_a0 + dVar5 * dStack_c0 + dVar3 * dStack_e0 + local_80 + param_2[1];
  param_2[2] = dVar3 * local_d8 + dVar5 * local_b8 + dVar4 * local_98 + local_78 + param_2[2];
LAB_140fda9e5:
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140fdab72 FUN_140fdab72 body=49 status=ok
// SIG undefined FUN_140fdab72(void)

longlong FUN_140fdab72(void)

{
  if (DAT_14cb4a728 == 0) {
    FUN_140f50038(&DAT_14cb4a728,&PTR_s__Script_InteractiveToolsFramewor_14aea54a0);
  }
  return DAT_14cb4a728;
}



// FUNCTION 140fdaba3 FUN_140fdaba3 body=49 status=ok
// SIG undefined FUN_140fdaba3(void)

longlong FUN_140fdaba3(void)

{
  if (DAT_14cc22380 == 0) {
    FUN_140f50038(&DAT_14cc22380,&PTR_s__Script_ChaosCaching_14bdd8d80);
  }
  return DAT_14cc22380;
}



// FUNCTION 140fdabd4 FUN_140fdabd4 body=2678 status=ok
// SIG undefined FUN_140fdabd4(void)

void FUN_140fdabd4(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  code *local_b8;
  int local_b0;
  undefined2 *local_a8;
  int local_a0;
  uint local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined2 *local_70;
  int local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1446ddc76(&local_50,"LevelSequence",1);
  uVar5 = FUN_144a52528();
  plVar6 = (longlong *)FUN_14493e38c(uVar5,local_50);
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *local_60 = &PTR_LAB_14a5a4d50;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_60[2] = lVar9;
  *local_60 = &PTR_FUN_14a5a4ce0;
  local_60[3] = FUN_1418a82d8;
  (**(code **)(*plVar6 + 0x40))(plVar6,&local_a8,&local_60);
  DAT_14cb8a590 = local_a8;
  FUN_1446ddc76(&local_a8,"MovieScene",1);
  puVar10 = local_a8;
  uVar5 = FUN_144a52528();
  uVar5 = FUN_14493e38c(uVar5,puVar10);
  lVar7 = FUN_14038fb82();
  FUN_140056680(&local_70,L"LightingChannels");
  puVar10 = &DAT_149dfb77a;
  if (local_68 != 0) {
    puVar10 = local_70;
  }
  FUN_140002266(&local_a8,L"%s.%s",puVar10,L"bChannel0");
  puVar10 = &DAT_149dfb77a;
  if (local_a0 != 0) {
    puVar10 = local_a8;
  }
  FUN_1446f470e(&local_78,puVar10,1);
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar10 = &DAT_149dfb77a;
  if (local_68 != 0) {
    puVar10 = local_70;
  }
  FUN_140002266(&local_a8,L"%s.%s",puVar10,L"bChannel1");
  puVar10 = &DAT_149dfb77a;
  if (local_a0 != 0) {
    puVar10 = local_a8;
  }
  FUN_1446f470e(&local_80,puVar10,1);
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar10 = &DAT_149dfb77a;
  if (local_68 != 0) {
    puVar10 = local_70;
  }
  FUN_140002266(&local_a8,L"%s.%s",puVar10,L"bChannel2");
  puVar10 = &DAT_149dfb77a;
  if (local_a0 != 0) {
    puVar10 = local_a8;
  }
  FUN_1446f470e(&local_88,puVar10,1);
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_90,L"bResetAfterTeleport",1);
  FUN_1457a9e34(&local_a8,0x10,1,0);
  uVar11 = (ulonglong)local_98;
  if ((-1 < (int)local_98) && ((int)local_98 < local_a0)) {
    lVar9 = lVar7 + 0x118;
    do {
      lVar2 = *(longlong *)(local_a8 + (uVar11 & 0xffffffff) * 4);
      if (DAT_14cac6e60 == 0) {
        local_b8 = FUN_144a7958c;
        local_c0 = FUN_14081d0ea;
        local_c8 = FUN_142b47bc4;
        local_d8 = &LAB_1478989f1;
        local_e0 = &LAB_146391124;
        local_e8 = L"Engine";
        local_f0 = 0x10000000000;
        local_f8 = 0x10000005;
        local_100 = 0x10;
        local_108 = 0x620;
        local_d0 = &local_b8;
        FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
        if (DAT_14cac6e60 != 0) goto LAB_140fdaee1;
      }
      else {
LAB_140fdaee1:
        uVar3 = local_78;
        if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
            DAT_14cac6e60 + 0x30)) {
          if (lVar7 != 0) {
            iVar1 = *(int *)(lVar7 + 0x260);
            lVar13 = (longlong)iVar1;
            *(uint *)(lVar7 + 0x260) = iVar1 + 1U;
            if (*(uint *)(lVar7 + 0x264) < iVar1 + 1U) {
              FUN_1457de31a(lVar9,iVar1);
            }
            uVar4 = local_80;
            lVar8 = *(longlong *)(lVar7 + 600);
            if (*(longlong *)(lVar7 + 600) == 0) {
              lVar8 = lVar9;
            }
            *(longlong *)(lVar8 + lVar13 * 0x28) = lVar2;
            *(undefined8 *)(lVar8 + 8 + lVar13 * 0x28) = uVar3;
            *(undefined2 *)(lVar8 + 0x10 + lVar13 * 0x28) = 0xffff;
            *(undefined1 **)(lVar8 + 0x18 + lVar13 * 0x28) = &LAB_148952336;
            *(undefined1 **)(lVar8 + 0x20 + lVar13 * 0x28) = &LAB_148952356;
            iVar1 = *(int *)(lVar7 + 0x260);
            lVar13 = (longlong)iVar1;
            *(uint *)(lVar7 + 0x260) = iVar1 + 1U;
            if (*(uint *)(lVar7 + 0x264) < iVar1 + 1U) {
              FUN_1457de31a(lVar9,iVar1);
            }
            uVar3 = local_88;
            lVar8 = *(longlong *)(lVar7 + 600);
            if (*(longlong *)(lVar7 + 600) == 0) {
              lVar8 = lVar9;
            }
            *(longlong *)(lVar8 + lVar13 * 0x28) = lVar2;
            *(undefined8 *)(lVar8 + 8 + lVar13 * 0x28) = uVar4;
            *(undefined2 *)(lVar8 + 0x10 + lVar13 * 0x28) = 0xffff;
            *(undefined1 **)(lVar8 + 0x18 + lVar13 * 0x28) = &LAB_14895233f;
            *(undefined1 **)(lVar8 + 0x20 + lVar13 * 0x28) = &LAB_148952377;
            iVar1 = *(int *)(lVar7 + 0x260);
            lVar13 = (longlong)iVar1;
            *(uint *)(lVar7 + 0x260) = iVar1 + 1U;
            if (*(uint *)(lVar7 + 0x264) < iVar1 + 1U) {
              FUN_1457de31a(lVar9,iVar1);
            }
            lVar8 = *(longlong *)(lVar7 + 600);
            if (*(longlong *)(lVar7 + 600) == 0) {
              lVar8 = lVar9;
            }
            *(longlong *)(lVar8 + lVar13 * 0x28) = lVar2;
            *(undefined8 *)(lVar8 + 8 + lVar13 * 0x28) = uVar3;
            *(undefined2 *)(lVar8 + 0x10 + lVar13 * 0x28) = 0xffff;
            *(undefined1 **)(lVar8 + 0x18 + lVar13 * 0x28) = &LAB_14895234a;
            *(undefined1 **)(lVar8 + 0x20 + lVar13 * 0x28) = &LAB_148952390;
          }
          local_b8 = (code *)0x0;
          local_b0 = 0;
          FUN_1446efa72(&local_b8,0,2,0x10);
          local_b0 = 2;
          *(undefined ***)local_b8 = &PTR_LAB_14b424ad0;
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 1;
          lVar13 = DAT_14c758608 + 1;
          if (lVar8 == 0) {
            LOCK();
            UNLOCK();
            lVar8 = DAT_14c758608 + 2;
            lVar13 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar13;
          *(longlong *)(local_b8 + 0x10) = lVar8;
          *(undefined ***)local_b8 = &PTR_FUN_14b424a60;
          *(undefined1 **)(local_b8 + 0x18) = &LAB_1489523ab;
          FUN_140fdb64c(uVar5,lVar2,&local_78,&local_b8);
          if (local_b0 == 0) {
LAB_140fdb217:
            if (local_b8 != (code *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_b8 != (code *)0x0) {
            (*(code *)**(undefined8 **)local_b8)(local_b8,0);
            FUN_1446efa72(&local_b8,0,0,0x10);
            local_b0 = 0;
            goto LAB_140fdb217;
          }
          local_b8 = (code *)0x0;
          local_b0 = 0;
          FUN_1446efa72(&local_b8,0,2,0x10);
          local_b0 = 2;
          *(undefined ***)local_b8 = &PTR_LAB_14b424ad0;
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 1;
          lVar13 = DAT_14c758608 + 1;
          if (lVar8 == 0) {
            LOCK();
            UNLOCK();
            lVar8 = DAT_14c758608 + 2;
            lVar13 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar13;
          *(longlong *)(local_b8 + 0x10) = lVar8;
          *(undefined ***)local_b8 = &PTR_FUN_14b424a60;
          *(undefined1 **)(local_b8 + 0x18) = &LAB_1407feb5f;
          FUN_140fdb64c(uVar5,lVar2,&local_80,&local_b8);
          if (local_b0 == 0) {
LAB_140fdb2a6:
            if (local_b8 != (code *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_b8 != (code *)0x0) {
            (*(code *)**(undefined8 **)local_b8)(local_b8,0);
            FUN_1446efa72(&local_b8,0,0,0x10);
            local_b0 = 0;
            goto LAB_140fdb2a6;
          }
          local_b8 = (code *)0x0;
          local_b0 = 0;
          FUN_1446efa72(&local_b8,0,2,0x10);
          local_b0 = 2;
          *(undefined ***)local_b8 = &PTR_LAB_14b424ad0;
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 1;
          lVar13 = DAT_14c758608 + 1;
          if (lVar8 == 0) {
            LOCK();
            UNLOCK();
            lVar8 = DAT_14c758608 + 2;
            lVar13 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar13;
          *(longlong *)(local_b8 + 0x10) = lVar8;
          *(undefined ***)local_b8 = &PTR_FUN_14b424a60;
          *(undefined1 **)(local_b8 + 0x18) = &LAB_1489523c9;
          FUN_140fdb64c(uVar5,lVar2,&local_88,&local_b8);
          if (local_b0 != 0) {
            if (local_b8 == (code *)0x0) goto LAB_140fdaefd;
            (*(code *)**(undefined8 **)local_b8)(local_b8,0);
            FUN_1446efa72(&local_b8,0,0,0x10);
            local_b0 = 0;
          }
          if (local_b8 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
      }
LAB_140fdaefd:
      if (DAT_14cad2858 == 0) {
        local_b8 = FUN_144a7958c;
        local_c0 = FUN_14081d0ea;
        local_c8 = (code *)&LAB_146395584;
        local_d8 = &LAB_147a0ba80;
        local_e0 = &LAB_14575ccce;
        local_e8 = L"Engine";
        local_f0 = 0x40000000000;
        local_f8 = 0x10000004;
        local_100 = 0x10;
        local_108 = 0x1180;
        local_d0 = &local_b8;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
        if (DAT_14cad2858 != 0) goto LAB_140fdaf0d;
      }
      else {
LAB_140fdaf0d:
        uVar3 = local_90;
        if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
            DAT_14cad2858 + 0x30)) {
          if (lVar7 != 0) {
            iVar1 = *(int *)(lVar7 + 0x260);
            lVar13 = (longlong)iVar1;
            *(uint *)(lVar7 + 0x260) = iVar1 + 1U;
            if (*(uint *)(lVar7 + 0x264) < iVar1 + 1U) {
              FUN_1457de31a(lVar9,iVar1);
            }
            lVar8 = *(longlong *)(lVar7 + 600);
            if (*(longlong *)(lVar7 + 600) == 0) {
              lVar8 = lVar9;
            }
            *(longlong *)(lVar8 + lVar13 * 0x28) = lVar2;
            *(undefined8 *)(lVar8 + 8 + lVar13 * 0x28) = uVar3;
            *(undefined2 *)(lVar8 + 0x10 + lVar13 * 0x28) = 0xffff;
            *(undefined1 **)(lVar8 + 0x18 + lVar13 * 0x28) = &LAB_1489523e4;
            *(undefined1 **)(lVar8 + 0x20 + lVar13 * 0x28) = &LAB_1489523ed;
          }
          local_b8 = (code *)0x0;
          local_b0 = 0;
          FUN_1446efa72(&local_b8,0,2,0x10);
          local_b0 = 2;
          *(undefined ***)local_b8 = &PTR_LAB_14b424ad0;
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 1;
          lVar13 = DAT_14c758608 + 1;
          if (lVar8 == 0) {
            LOCK();
            UNLOCK();
            lVar8 = DAT_14c758608 + 2;
            lVar13 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar13;
          *(longlong *)(local_b8 + 0x10) = lVar8;
          *(undefined ***)local_b8 = &PTR_FUN_14b424a60;
          *(undefined1 **)(local_b8 + 0x18) = &LAB_1407febe7;
          FUN_140fdb64c(uVar5,lVar2,&local_90,&local_b8);
          FUN_1449db362(&local_b8);
        }
      }
      uVar11 = (longlong)(int)local_98;
      do {
        uVar12 = uVar11;
        uVar11 = uVar12 + 1;
        local_98 = (uint)uVar11;
        if ((longlong)local_a0 <= (longlong)uVar11) break;
      } while (*(longlong *)(local_a8 + uVar11 * 4) == 0);
    } while ((-2 < (longlong)uVar12) && ((int)local_98 < local_a0));
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fdb64c FUN_140fdb64c body=1514 status=ok
// SIG undefined FUN_140fdb64c(void)

void FUN_140fdb64c(longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong *plVar20;
  longlong lVar21;
  int iVar22;
  bool bVar23;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == 0) {
    uVar8 = 0;
    uVar17 = 0;
  }
  else {
    uVar8 = *(uint *)(param_2 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar21 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar21 = 0;
    }
    uVar17 = *(uint *)(lVar21 + 0x10);
    if (*(uint *)(lVar21 + 0x10) == 0) {
      LOCK();
      iVar16 = DAT_14c964868 + 1;
      UNLOCK();
      uVar12 = DAT_14c964868 + 1;
      bVar23 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar16;
      if (bVar23) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar12);
      }
      LOCK();
      uVar17 = *(uint *)(lVar21 + 0x10);
      bVar23 = uVar17 == 0;
      if (bVar23) {
        *(uint *)(lVar21 + 0x10) = uVar12;
        uVar17 = 0;
      }
      UNLOCK();
      if (bVar23) {
        uVar17 = uVar12;
      }
    }
  }
  local_70 = (longlong *)(param_1 + 8);
  uVar15 = *param_3;
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar16 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = iVar16 + 1;
    if (*(int *)(param_1 + 0x14) == iVar16) {
      FUN_140549c28(local_70,iVar16);
    }
    iVar6 = *(int *)(param_1 + 0x30);
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
    lVar13 = param_1 + 0x18;
    iVar9 = iVar6 + 1;
    iVar22 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar22 = iVar6;
    }
    if (iVar22 >> 5 == iVar5) {
      *(int *)(param_1 + 0x30) = iVar9;
    }
    else {
      if (*(int *)(param_1 + 0x34) <= iVar6) {
        local_60 = param_4;
        if (iVar6 + 0x20U < 0xa0) {
          iVar9 = 0x80;
          iVar5 = iVar6;
        }
        else {
          uVar12 = iVar6 + 0x20U >> 5;
          local_68 = (ulonglong)uVar12;
          if (*(int *)(param_1 + 0x34) + 0x1fU < 0xa0) {
            uVar18 = 4;
            if (4 < uVar12) {
              uVar18 = uVar12;
            }
          }
          else {
            uVar18 = (uVar12 * 3 >> 3) + uVar12 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar18 << 2,0);
          iVar5 = (int)(uVar11 >> 2);
          iVar9 = -0x20;
          if ((int)local_68 <= iVar5) {
            iVar9 = iVar5 << 5;
          }
          iVar5 = *(int *)(param_1 + 0x30);
        }
        *(int *)(param_1 + 0x34) = iVar9;
        FUN_1446efbd8(lVar13,iVar5);
        iVar9 = *(int *)(param_1 + 0x30) + 1;
        param_4 = local_60;
      }
      iVar5 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar5 = iVar9;
      }
      *(int *)(param_1 + 0x30) = iVar9;
      if (iVar9 % 0x20 != 0) {
        lVar21 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar21 = lVar13;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)(lVar21 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)(lVar21 + (longlong)(iVar5 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar21 = (longlong)iVar16;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x28);
    }
    bVar7 = (byte)iVar6 & 0x1f;
    puVar2 = (uint *)(lVar13 + (longlong)(iVar22 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar16 = *(int *)(param_1 + 0x38);
    lVar21 = (longlong)iVar16;
    iVar6 = *(int *)(*(longlong *)(param_1 + 8) + 4 + lVar21 * 0x28);
    *(int *)(param_1 + 0x38) = iVar6;
    iVar5 = *(int *)(param_1 + 0x3c) + -1;
    *(int *)(param_1 + 0x3c) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar6 * 0x28) = 0xffffffff;
    }
  }
  lVar13 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar13 = *(longlong *)(param_1 + 0x28);
  }
  iVar6 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar6 = iVar16;
  }
  puVar2 = (uint *)(lVar13 + (longlong)(iVar6 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar16 & 0x1f);
  lVar13 = *(longlong *)(param_1 + 8);
  puVar2 = (uint *)(lVar13 + lVar21 * 0x28);
  *puVar2 = uVar8;
  puVar2[1] = uVar17;
  *(undefined8 *)(puVar2 + 2) = uVar15;
  lVar13 = lVar13 + lVar21 * 0x28;
  plVar20 = (longlong *)(lVar13 + 0x10);
  *plVar20 = 0;
  *(undefined4 *)(lVar13 + 0x18) = 0;
  if (plVar20 != param_4) {
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    puVar14 = (undefined8 *)0x0;
    if ((int)param_4[1] == 0) {
      uVar17 = 0;
    }
    else {
      param_4 = (longlong *)*param_4;
      uVar17 = 0;
      puVar14 = (undefined8 *)0x0;
      if (param_4 != (longlong *)0x0) {
        (**(code **)(*param_4 + 0x40))(param_4,&local_58);
        uVar17 = local_50;
        puVar14 = local_58;
        puVar10 = *(undefined8 **)(puVar2 + 4);
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        if (puVar2[6] != 0) {
          if (puVar10 == (undefined8 *)0x0) goto LAB_140fdb807;
          (**(code **)*puVar10)(puVar10,0);
          FUN_1446efa72(plVar20,0,0,0x10);
          puVar2[6] = 0;
          puVar10 = *(undefined8 **)(puVar2 + 4);
        }
        if (puVar10 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
LAB_140fdb807:
    *(undefined8 **)(puVar2 + 4) = puVar14;
    puVar2[6] = uVar17;
    if (local_50 == 0) {
LAB_140fdb81f:
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
      goto LAB_140fdb81f;
    }
    uVar8 = *puVar2;
    uVar17 = puVar2[1];
    uVar15 = *(undefined8 *)(puVar2 + 2);
  }
  plVar20 = local_70;
  puVar2[8] = 0xffffffff;
  uVar8 = uVar17 >> 0xd ^ uVar8 - uVar17;
  uVar12 = uVar8 << 8 ^ (-0x61c88647 - uVar17) - uVar8;
  uVar17 = uVar12 >> 0xd ^ (uVar17 - uVar8) - uVar12;
  uVar18 = uVar17 >> 0xc ^ (uVar8 - uVar12) - uVar17;
  uVar19 = uVar18 << 0x10 ^ (uVar12 - uVar17) - uVar18;
  uVar8 = uVar19 >> 5 ^ (uVar17 - uVar18) - uVar19;
  uVar12 = uVar8 >> 3 ^ (uVar18 - uVar19) - uVar8;
  uVar17 = uVar12 << 10 ^ (uVar19 - uVar8) - uVar12;
  uVar8 = uVar17 >> 0xf ^ uVar8 - (uVar12 + uVar17);
  uVar17 = (uint)((ulonglong)uVar15 >> 0x10);
  uVar12 = (uint)uVar15 & 0xffff;
  uVar8 = (uVar8 >> 2) + 0x9e3779b9 +
          ((uint)uVar15 << 0x10 | uVar12) + (int)((ulonglong)uVar15 >> 0x20) +
          (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar12 >> 4) + uVar8 * 0x40 ^ uVar8;
  if (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c) == 1) {
    uVar17 = 1;
    iVar6 = 1;
  }
  else {
    iVar6 = FUN_140fdbc96(local_70,uVar8,puVar2);
    if (iVar6 != -1) {
      puVar1 = (uint *)(*plVar20 + (longlong)iVar6 * 0x28);
      FUN_1449db362(puVar1 + 4);
      uVar17 = *puVar2;
      uVar8 = puVar2[1];
      uVar12 = puVar2[2];
      uVar18 = puVar2[3];
      uVar19 = puVar2[5];
      uVar3 = puVar2[6];
      uVar4 = puVar2[7];
      puVar1[4] = puVar2[4];
      puVar1[5] = uVar19;
      puVar1[6] = uVar3;
      puVar1[7] = uVar4;
      *puVar1 = uVar17;
      puVar1[1] = uVar8;
      puVar1[2] = uVar12;
      puVar1[3] = uVar18;
      FUN_148952c20(plVar20,iVar16);
      goto LAB_140fdb9a6;
    }
    uVar17 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c);
    iVar6 = 1;
    if (3 < uVar17) {
      uVar11 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
      lVar21 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar21 & 0x1f);
    }
  }
  if (((int)uVar17 < 1) || (iVar6 <= *(int *)(param_1 + 0x50))) {
    uVar8 = *(int *)(param_1 + 0x50) - 1U & uVar8;
    puVar2[9] = uVar8;
    lVar21 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar21 = param_1 + 0x40;
    }
    puVar2[8] = *(uint *)(lVar21 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)(int)uVar8)
                                   * 4);
    lVar21 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar21 = param_1 + 0x40;
    }
    *(int *)(lVar21 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)(int)uVar8) * 4) = iVar16
    ;
  }
  else {
    *(int *)(param_1 + 0x50) = iVar6;
    FUN_140fdbd00(plVar20);
  }
LAB_140fdb9a6:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fdbc38 FUN_140fdbc38 body=93 status=ok
// SIG undefined FUN_140fdbc38(void)

void FUN_140fdbc38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b424ad0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b424a60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 140fdbc96 FUN_140fdbc96 body=106 status=ok
// SIG undefined FUN_140fdbc96(void)

int FUN_140fdbc96(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1;
        if (((*(int *)(lVar2 + lVar4 * 0x28) == *param_3) &&
            (*(int *)(lVar2 + 4 + lVar4 * 0x28) == param_3[1])) &&
           (*(longlong *)(lVar2 + lVar4 * 0x28 + 8) == *(longlong *)(param_3 + 2))) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x20 + lVar4 * 0x28);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140fdbd00 FUN_140fdbd00 body=784 status=ok
// SIG undefined FUN_140fdbd00(void)

void FUN_140fdbd00(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
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
  uVar11 = *(uint *)(param_1 + 9);
  if (uVar11 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar11,4);
    if (0 < (int)uVar11) {
      uVar4 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar11 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar13 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar13 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar11 = (uint)local_58;
    iVar12 = local_58._4_4_;
    iVar10 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar9 = *param_1;
        lVar14 = (longlong)iVar12;
        uVar4 = *(uint *)(lVar9 + 4 + lVar14 * 0x28);
        uVar15 = uVar4 >> 0xd ^ *(int *)(lVar9 + lVar14 * 0x28) - uVar4;
        uVar17 = uVar15 << 8 ^ (-0x61c88647 - uVar4) - uVar15;
        uVar16 = uVar17 >> 0xd ^ (uVar4 - uVar15) - uVar17;
        uVar18 = uVar16 >> 0xc ^ (uVar15 - uVar17) - uVar16;
        uVar4 = uVar18 << 0x10 ^ (uVar17 - uVar16) - uVar18;
        uVar15 = uVar4 >> 5 ^ (uVar16 - uVar18) - uVar4;
        uVar16 = uVar15 >> 3 ^ (uVar18 - uVar4) - uVar15;
        uVar4 = uVar16 << 10 ^ (uVar4 - uVar15) - uVar16;
        uVar16 = uVar4 >> 0xf ^ uVar15 - (uVar16 + uVar4);
        uVar2 = *(undefined8 *)(lVar9 + 8 + lVar14 * 0x28);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar8 = (longlong)
                (int)((uVar16 >> 2) + 0x9e3779b9 +
                      ((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4) + uVar16 * 0x40 ^ uVar16) &
                (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar9 + 0x24 + lVar14 * 0x28) = iVar6;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar9 + 0x20 + lVar14 * 0x28) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        uVar11 = ~(uint)uVar13 & uVar11;
        plVar7 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar7 = local_60;
        }
        iVar6 = (int)local_60[3];
        lVar9 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar7 + lVar9 * 4) & uVar11;
        if (uVar4 == 0) {
          iVar12 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar12 = iVar6 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar3 = iVar12;
          if (iVar12 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar12 <= iVar5) break;
          lVar14 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar4 = *(uint *)((longlong)plVar7 + lVar14 * 4 + lVar9 * 4 + 4);
            if (uVar4 != 0) break;
            lVar14 = lVar14 + 1;
            if (iVar3 - lVar9 == lVar14) goto LAB_140fdbfc6;
          }
          iVar5 = iVar5 + (int)lVar14 + 1;
          uVar11 = 0xffffffff;
        }
        uVar13 = (ulonglong)(-uVar4 & uVar4);
        uVar8 = uVar13 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar12 = (iVar10 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      } while (iVar12 < iVar6);
    }
  }
LAB_140fdbfc6:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fdc012 FUN_140fdc012 body=457 status=ok
// SIG undefined FUN_140fdc012(void)

undefined8 FUN_140fdc012(longlong param_1,int param_2,char param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [40];
  code *local_78 [2];
  longlong *local_68 [2];
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar6 = *(int *)(param_1 + 0x68);
  local_78[0] = *(code **)(param_1 + 0x70);
  local_68[0] = (longlong *)0x0;
  if (local_78[0] != (code *)0x0) {
    puVar3 = (undefined8 *)(param_1 + 0x90);
    if (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x80);
    }
    (**(code **)*puVar3)(puVar3,local_68);
  }
  lVar1 = *(longlong *)(param_1 + 0x50);
  if ((*(char *)(param_1 + 0x5c) != '\0') || (lVar1 == 0)) {
    iVar6 = *(int *)(param_1 + 0xb0);
    FUN_141294ca8(local_78,param_1 + 0xc0);
  }
  if (iVar6 == 0) {
    FUN_140fdc258(param_1);
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
    if ((*(int *)(param_1 + 0x58) < 1) && ((param_3 == '\0' || (DAT_14cb0a468 < 1)))) {
      if (*(char *)(param_1 + 0x5d) == '\x01') {
        *(undefined1 *)(param_1 + 0x5d) = 0;
      }
      else {
        if (iVar6 == param_2) {
          FUN_140fdc258(param_1);
          FUN_140fdc1dc(local_a0,lVar1,param_2);
          pcVar2 = local_78[0];
          plVar4 = local_68[0];
          if (local_68[0] == (longlong *)0x0) {
            plVar4 = local_58;
          }
          uVar5 = (**(code **)(*plVar4 + 8))();
          (*pcVar2)(uVar5,local_a0);
        }
        else {
          uVar5 = 2;
          if (iVar6 == 2) {
            if (*(int *)(param_1 + 0x48) != 0) goto LAB_140fdc120;
            FUN_1403104fe(param_1);
          }
          else if (iVar6 == 1) {
            if ((*(int *)(param_1 + 0x44) != 0) || (DAT_14ca9a438 != '\x01')) goto LAB_140fdc120;
            FUN_14031076c(param_1);
          }
          else {
            if ((iVar6 != 3) || (*(int *)(param_1 + 0x40) != 0)) goto LAB_140fdc120;
            FUN_14371c8b2(param_1);
          }
        }
        uVar5 = 3;
      }
    }
  }
LAB_140fdc120:
  if (local_78[0] != (code *)0x0) {
    plVar4 = local_68[0];
    if (local_68[0] == (longlong *)0x0) {
      plVar4 = local_58;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fdc1dc FUN_140fdc1dc body=124 status=ok
// SIG undefined FUN_140fdc1dc(void)

longlong * FUN_140fdc1dc(longlong *param_1,longlong param_2,undefined4 param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = param_3;
  if ((param_2 != 0) && (lVar2 = FUN_1448463c0(param_2), lVar2 != 0)) {
    plVar3 = (longlong *)FUN_1447b4020(*param_1);
    lVar2 = (**(code **)(*plVar3 + 0x88))(plVar3);
    param_1[1] = lVar2;
    if (lVar2 == 0) {
      return param_1;
    }
    bVar1 = *(byte *)(lVar2 + 0x5b);
    param_1[2] = (ulonglong)*(byte *)(lVar2 + 0x5c) * 8 +
                 *(longlong *)(*(longlong *)(lVar2 + 0x50) + 0x18);
    *(uint *)(param_1 + 3) = (uint)bVar1;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 140fdc258 FUN_140fdc258 body=476 status=ok
// SIG undefined FUN_140fdc258(void)

void FUN_140fdc258(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_1 + 0x68) = 0;
  local_98 = *(longlong *)(param_1 + 0x70);
  uStack_50 = *(undefined8 *)(param_1 + 0x78);
  local_88 = *(longlong **)(param_1 + 0x80);
  uStack_40 = *(undefined8 *)(param_1 + 0x88);
  local_38 = *(undefined8 *)(param_1 + 0x90);
  uStack_30 = *(undefined8 *)(param_1 + 0x98);
  local_28 = *(undefined8 *)(param_1 + 0xa0);
  uStack_20 = *(undefined8 *)(param_1 + 0xa8);
  uVar5 = local_28;
  uVar6 = uStack_20;
  uVar3 = local_38;
  uVar4 = uStack_30;
  local_48 = local_88;
  uVar2 = uStack_40;
  local_58 = local_98;
  uVar1 = uStack_50;
  *(ulonglong *)(param_1 + 0xa0) = CONCAT44(uStack_64,local_68);
  *(ulonglong *)(param_1 + 0xa8) = CONCAT44(uStack_5c,uStack_60);
  *(ulonglong *)(param_1 + 0x90) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(param_1 + 0x98) = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(ulonglong *)(param_1 + 0x88) = CONCAT44(uStack_7c,uStack_80);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(ulonglong *)(param_1 + 0x78) = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  if (local_98 != 0) {
    plVar7 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    uStack_50 = uVar1;
    uStack_40 = uVar2;
    local_38 = uVar3;
    uStack_30 = uVar4;
    local_28 = uVar5;
    uStack_20 = uVar6;
    (**(code **)(*plVar7 + 0x10))();
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  local_98 = *(longlong *)(param_1 + 0xc0);
  uStack_50 = *(undefined8 *)(param_1 + 200);
  local_88 = *(longlong **)(param_1 + 0xd0);
  uStack_40 = *(undefined8 *)(param_1 + 0xd8);
  local_38 = *(undefined8 *)(param_1 + 0xe0);
  uStack_30 = *(undefined8 *)(param_1 + 0xe8);
  local_28 = *(undefined8 *)(param_1 + 0xf0);
  uStack_20 = *(undefined8 *)(param_1 + 0xf8);
  uVar5 = local_28;
  uVar6 = uStack_20;
  uVar3 = local_38;
  uVar4 = uStack_30;
  local_48 = local_88;
  uVar2 = uStack_40;
  local_58 = local_98;
  uVar1 = uStack_50;
  *(ulonglong *)(param_1 + 0xf0) = CONCAT44(uStack_64,local_68);
  *(ulonglong *)(param_1 + 0xf8) = CONCAT44(uStack_5c,uStack_60);
  *(ulonglong *)(param_1 + 0xe0) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(param_1 + 0xe8) = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(ulonglong *)(param_1 + 0xd8) = CONCAT44(uStack_7c,uStack_80);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(ulonglong *)(param_1 + 200) = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_50 = uVar1;
  uStack_40 = uVar2;
  local_38 = uVar3;
  uStack_30 = uVar4;
  local_28 = uVar5;
  uStack_20 = uVar6;
  if (local_98 != 0) {
    plVar7 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fdc436 FUN_140fdc436 body=124 status=ok
// SIG undefined FUN_140fdc436(void)

void FUN_140fdc436(longlong *param_1)

{
  longlong lVar1;
  
  FUN_1405f1eac();
  if (((*(byte *)((longlong)param_1 + 0xb2a) & 1) == 0) &&
     ((*(byte *)((longlong)param_1 + 100) & 4) != 0)) {
    lVar1 = FUN_14074d544();
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 0x638))(param_1,lVar1,0,0,0,0xbf800000,0xbf800000,0);
    }
  }
  if ((*(byte *)((longlong)param_1 + 0xb2a) & 6) == 2) {
    FUN_140fdc4b2(param_1);
    return;
  }
  return;
}



// FUNCTION 140fdc4b2 FUN_140fdc4b2 body=1120 status=ok
// SIG undefined FUN_140fdc4b2(void)

void FUN_140fdc4b2(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  byte *pbVar10;
  
  lVar3 = FUN_1447210f0();
  if (lVar3 == 0) {
LAB_140fdc6fe:
    bVar2 = false;
  }
  else {
    lVar3 = FUN_1447210f0(param_1);
    bVar6 = *(byte *)(lVar3 + 0x152);
    if ((bVar6 != 1) && ((6 < bVar6 || ((0x68U >> (bVar6 & 0x1f) & 1) == 0)))) goto LAB_140fdc6fe;
    bVar2 = true;
    if ((*(byte *)((longlong)param_1 + 0xb2a) & 4) == 0) {
      FUN_140e401f0(param_1 + 0x74);
    }
  }
  pbVar10 = (byte *)((longlong)param_1 + 0xb2a);
  lVar3 = param_1[0x13f];
  if (lVar3 != 0) {
    if (*(char *)((longlong)param_1 + 0xb29) == '\0') {
      if (param_1[0x142] == 0) {
        lVar8 = 0;
      }
      else {
        lVar4 = FUN_1405fc15c();
        lVar3 = param_1[0x142];
        if (lVar3 == 0) {
LAB_140fdc70c:
          lVar8 = 0;
        }
        else {
          lVar8 = 0;
          if ((lVar4 != 0) && (lVar5 = *(longlong *)(lVar3 + 0x10), lVar5 != 0)) {
            if (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38)) goto LAB_140fdc70c;
            lVar8 = 0;
            if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
                lVar4 + 0x30) {
              lVar8 = lVar3;
            }
          }
        }
        lVar3 = param_1[0x13f];
      }
      if (param_1[0x85] == 0) {
LAB_140fdc58f:
        plVar7 = param_1 + 0x84;
      }
      else {
        plVar7 = param_1 + 0x85;
        if ((param_1[0x12e] != 0) &&
           (lVar4 = param_1[0x84], lVar5 = FUN_14060002e(param_1[0x12e] + 0x20), lVar4 != lVar5))
        goto LAB_140fdc58f;
      }
      FUN_140fdca88(lVar3,param_1,lVar8,*(undefined4 *)((longlong)param_1 + 0xa5c),*plVar7);
    }
    else {
      if (param_1[0x142] != 0) {
        lVar3 = FUN_144a7a726();
        plVar7 = (longlong *)param_1[0x142];
        if ((((plVar7 != (longlong *)0x0) && (lVar3 != 0)) && (lVar8 = plVar7[2], lVar8 != 0)) &&
           ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar8 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
             lVar3 + 0x30)))) {
          lVar8 = FUN_140e40dfb();
          lVar3 = lVar8 + 0x68;
          if (*(char *)(param_1[0x166] + 0x8c) != '\0') {
            lVar3 = lVar8 + 0x90;
          }
          lVar3 = FUN_1401ca522(lVar3);
          if (lVar3 != 0) {
            lVar8 = FUN_144b2abfe(lVar3);
            *(float *)(param_1 + 0x14b) = (float)*(double *)(lVar8 + 0x68);
            (**(code **)(*plVar7 + 0xa78))(plVar7,lVar3);
          }
        }
      }
      lVar3 = param_1[0x13f];
      if (param_1[0x85] == 0) {
LAB_140fdc7b9:
        plVar7 = param_1 + 0x84;
      }
      else {
        plVar7 = param_1 + 0x85;
        if ((param_1[0x12e] != 0) &&
           (lVar8 = param_1[0x84], lVar4 = FUN_14060002e(param_1[0x12e] + 0x20), lVar8 != lVar4))
        goto LAB_140fdc7b9;
      }
      lVar8 = *plVar7;
      if (param_1[0x142] == 0) {
LAB_140fdc7d1:
        lVar9 = 0;
      }
      else {
        lVar5 = FUN_14081cebe();
        lVar4 = param_1[0x142];
        if (lVar4 == 0) goto LAB_140fdc7d1;
        lVar9 = 0;
        if ((lVar5 != 0) && (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0)) {
          if (*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38)) goto LAB_140fdc7d1;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            lVar9 = lVar4;
          }
        }
      }
      FUN_1488bd14e(lVar3,param_1,lVar9,lVar8);
    }
    FUN_1449e3cec(param_1[0x142],0,1);
    if (((param_1[0x144] == 0) && ((*pbVar10 & 8) != 0)) &&
       (*(longlong *)(param_1[0x13f] + 0xa8) != 0)) {
      lVar3 = FUN_140fdc912(param_1[0x13f],param_1);
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      param_1[0x144] = lVar3;
    }
    lVar3 = param_1[0x13f];
    if (param_1[0x85] == 0) {
LAB_140fdc61f:
      plVar7 = param_1 + 0x84;
    }
    else {
      plVar7 = param_1 + 0x85;
      if ((param_1[0x12e] != 0) &&
         (lVar8 = param_1[0x84], lVar4 = FUN_14060002e(param_1[0x12e] + 0x20), lVar8 != lVar4))
      goto LAB_140fdc61f;
    }
    FUN_140fdcee0(lVar3,param_1,*plVar7);
  }
  bVar6 = *pbVar10;
  if ((bVar6 & 4) != 0) goto LAB_140fdc68f;
  if (bVar2 && (bVar6 & 8) != 0) {
    if ((char)param_1[0x2f] == '\x03') {
      if (*(float *)(param_1[0x166] + 0x5c) <= 0.0) {
        FUN_1405fe75a(param_1,1);
        goto LAB_140fdc67d;
      }
      FUN_1405fe75a(param_1,0);
      bVar6 = 1;
    }
    else {
      FUN_1405fe75a(param_1,*(undefined1 *)((longlong)param_1 + 0xa7c));
      bVar6 = (*(byte *)((longlong)param_1 + 0xa7c) ^ 1) & *(byte *)((longlong)param_1 + 0xa7c) < 5;
    }
    FUN_1405fdecc(param_1,bVar6);
  }
  else {
    FUN_1405fb3bc(param_1,(int)param_1[0x150],*(undefined4 *)((longlong)param_1 + 0xa84),1);
  }
LAB_140fdc67d:
  FUN_140e400c2(param_1 + 0x74);
  bVar6 = *(byte *)((longlong)param_1 + 0xb2a);
LAB_140fdc68f:
  if (((bVar6 & 8) != 0) && ((char)param_1[0x2f] == '\x03')) {
    (**(code **)(*param_1 + 0x578))(param_1);
    bVar6 = *(byte *)((longlong)param_1 + 0xb2a);
  }
  *pbVar10 = bVar6 | 4;
  return;
}



// FUNCTION 140fdc912 FUN_140fdc912 body=372 status=ok
// SIG undefined FUN_140fdc912(void)

longlong FUN_140fdc912(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  uint *puVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_58 [40];
  longlong local_30 [3];
  
  local_30[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_140995ab9(param_2);
  local_30[1] = 0;
  local_30[0] = lVar2;
  FUN_1405fbe06(param_2,local_30,0,*(undefined8 *)(param_1 + 0xa8));
  *(undefined1 *)(lVar2 + 0x1fb) = 2;
  *(byte *)(lVar2 + 0x1f9) = *(byte *)(lVar2 + 0x1f9) & 0xf7;
  FUN_14045627c(lVar2,1,1);
  uVar1 = *(ulonglong *)(lVar2 + 0x38);
  if (uVar1 < 0xffffffff00000000) {
    plVar6 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar6 = (longlong *)0x0;
    }
    (**(code **)(*plVar6 + 0x58))(plVar6,lVar2,uVar1,6);
  }
  else {
    uVar7 = (uint)uVar1;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
      puVar4 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar4 = DAT_14c998080;
      }
      if ((*(uint *)(puVar4 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
        lVar3 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
        puVar5 = *(uint **)(lVar3 + 0x18);
        if (*(uint **)(lVar3 + 0x18) == (uint *)0x0) {
          puVar5 = (uint *)(lVar3 + 8);
        }
        *puVar5 = *puVar5 | 0x40;
        *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
      }
    }
  }
  *(undefined8 *)(lVar2 + 0x1b0) = 0xc056800000000000;
  *(undefined8 *)(lVar2 + 0x1b8) = 0;
  *(undefined8 *)(lVar2 + 0x1c0) = 0;
  FUN_14057a3b2(lVar2,0,0,1);
  FUN_140486fc4(lVar2,*(undefined8 *)(param_2 + 0x1c8),0);
  FUN_140b506a4(lVar2);
  if ((local_30[2] ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 140fdca88 FUN_140fdca88 body=1110 status=ok
// SIG undefined FUN_140fdca88(void)

void FUN_140fdca88(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 *puVar9;
  float fVar10;
  undefined1 auStack_b8 [40];
  code *local_90;
  longlong *local_88;
  longlong *local_80;
  code *local_78;
  code **local_70;
  longlong local_68;
  undefined1 local_60 [20];
  undefined4 local_4c;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_4c = param_4;
  FUN_1405fbff8(local_60,param_3);
  if (param_5 != 0) {
    puVar9 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_5 + 8) != (undefined4 *)0x0) {
      puVar9 = *(undefined4 **)(param_5 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar2 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar2);
      DAT_14c947fe0 = lVar2;
    }
    FUN_140045924(DAT_14c947fe0,&local_68,puVar9,1);
    if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
      uVar3 = (uint)((ulonglong)local_68 >> 0x10);
      uVar4 = (uint)local_68 & 0xffff;
      uVar4 = (uVar4 >> 4) +
              ((uint)local_68 << 0x10 | uVar4) + (int)((ulonglong)local_68 >> 0x20) +
              (uVar3 << 0x13 | uVar3 & 0xffff) + 0xf9874325 ^ 0x33c5;
      uVar3 = uVar4 << 8 ^ 0x97bebcde - uVar4;
      uVar6 = uVar3 >> 0xd ^ (0x678bcdb - uVar4) - uVar3;
      uVar8 = uVar6 >> 0xc ^ (uVar4 - uVar3) - uVar6;
      uVar4 = uVar8 << 0x10 ^ (uVar3 - uVar6) - uVar8;
      uVar3 = uVar4 >> 5 ^ (uVar6 - uVar8) - uVar4;
      uVar6 = uVar3 >> 3 ^ (uVar8 - uVar4) - uVar3;
      uVar4 = uVar6 << 10 ^ (uVar4 - uVar3) - uVar6;
      lVar2 = param_1 + 0x70;
      if (*(longlong *)(param_1 + 0x78) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x78);
      }
      iVar5 = *(int *)(lVar2 + (ulonglong)
                               (*(int *)(param_1 + 0x80) - 1U &
                               (uVar4 >> 0xf ^ uVar3 - (uVar6 + uVar4))) * 4);
      if (iVar5 != -1) {
        lVar2 = *(longlong *)(param_1 + 0x38);
        do {
          lVar7 = (longlong)iVar5 * 0x60;
          lVar1 = lVar2 + lVar7;
          if ((*(longlong *)(lVar2 + lVar7) == local_68) &&
             (*(int *)(lVar2 + 8 + lVar7) == 0x678bcdb)) {
            if (((longlong *)(lVar1 + 0x18) != (longlong *)0x0 && lVar1 != 0) &&
               (*(longlong *)(lVar1 + 0x18) != 0)) {
              FUN_1405fbe06(param_2,local_60,0);
              if ((*(byte *)(*(longlong *)(param_2 + 0xb30) + 0x8d) & 1) != 0) goto LAB_140fdcd4e;
              goto LAB_140fdcb3d;
            }
            break;
          }
          iVar5 = *(int *)(lVar1 + 0x58);
        } while (iVar5 != -1);
      }
    }
  }
  if ((*(byte *)(*(longlong *)(param_2 + 0xb30) + 0x8d) & 1) == 0) {
    FUN_1405fbe06(param_2,local_60,0,*(undefined8 *)(param_1 + 0x88));
  }
  else {
    FUN_1405fbe06(param_2,local_60,0,*(undefined8 *)(param_1 + 0x90));
LAB_140fdcd4e:
    FUN_1488bd7b6(param_2,param_3);
  }
LAB_140fdcb3d:
  local_90 = FUN_143d9963e;
  local_88 = &local_48;
  local_48 = param_1;
  local_40 = &local_38;
  local_38 = param_2;
  FUN_1405fbd64(param_2,local_60,&local_90);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb81920) && (FUN_144b3d300(&DAT_14cb81920), DAT_14cb81920 == -1)) {
    FUN_1446f470e(&DAT_14cb81918,L"Decal_UVs_RandomOffset",1);
    _Init_thread_footer(&DAT_14cb81920);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb81930) && (FUN_144b3d300(&DAT_14cb81930), DAT_14cb81930 == -1)) {
    FUN_1446f470e(&DAT_14cb81928,L"Decal_U_Tiling",1);
    _Init_thread_footer(&DAT_14cb81930);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb81940) && (FUN_144b3d300(&DAT_14cb81940), DAT_14cb81940 == -1)) {
    FUN_1446f470e(&DAT_14cb81938,L"Decal_V_Tiling",1);
    _Init_thread_footer(&DAT_14cb81940);
  }
  fVar10 = 1.0 / (*(float *)(param_2 + 0xa84) / *(float *)(param_2 + 0xa90));
  local_48 = CONCAT44(local_48._4_4_,fVar10);
  local_38 = CONCAT44(local_38._4_4_,fVar10);
  local_90 = (code *)&local_4c;
  local_78 = FUN_143d991c0;
  local_88 = &local_48;
  local_80 = &local_38;
  local_70 = &local_90;
  FUN_1405fbd64(param_2,local_60);
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fdcee0 FUN_140fdcee0 body=1290 status=ok
// SIG undefined FUN_140fdcee0(void)

void FUN_140fdcee0(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb81958) && (FUN_144b3d300(&DAT_14cb81958), DAT_14cb81958 == -1)) {
    FUN_140056680(&DAT_14cb81948,L"PuddleHazard");
    atexit((_func_5014 *)&LAB_143d92e12);
    _Init_thread_footer(&DAT_14cb81958);
  }
  lVar3 = FUN_1447210f0(param_2);
  bVar1 = *(byte *)(lVar3 + 0x152);
  if ((bVar1 != 1) && ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))) goto LAB_140fdcffe;
  if (param_3 != 0) {
    puVar11 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar11 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar3 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar3);
      DAT_14c947fe0 = lVar3;
    }
    FUN_140045924(DAT_14c947fe0,&local_38,puVar11,1);
    if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
      uVar6 = (uint)((ulonglong)local_38 >> 0x10);
      uVar8 = (uint)local_38 & 0xffff;
      uVar8 = (uVar8 >> 4) +
              ((uint)local_38 << 0x10 | uVar8) + (int)((ulonglong)local_38 >> 0x20) +
              (uVar6 << 0x13 | uVar6 & 0xffff) + 0xf9874325 ^ 0x33c5;
      uVar6 = uVar8 << 8 ^ 0x97bebcde - uVar8;
      uVar13 = uVar6 >> 0xd ^ (0x678bcdb - uVar8) - uVar6;
      uVar14 = uVar13 >> 0xc ^ (uVar8 - uVar6) - uVar13;
      uVar8 = uVar14 << 0x10 ^ (uVar6 - uVar13) - uVar14;
      uVar6 = uVar8 >> 5 ^ (uVar13 - uVar14) - uVar8;
      uVar13 = uVar6 >> 3 ^ (uVar14 - uVar8) - uVar6;
      uVar8 = uVar13 << 10 ^ (uVar8 - uVar6) - uVar13;
      lVar3 = param_1 + 0x70;
      if (*(longlong *)(param_1 + 0x78) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x78);
      }
      iVar9 = *(int *)(lVar3 + (ulonglong)
                               (*(int *)(param_1 + 0x80) - 1U &
                               (uVar8 >> 0xf ^ uVar6 - (uVar13 + uVar8))) * 4);
      if (iVar9 != -1) {
        lVar3 = *(longlong *)(param_1 + 0x38);
        do {
          lVar10 = (longlong)iVar9 * 0x60;
          lVar15 = lVar3 + lVar10;
          if ((*(longlong *)(lVar3 + lVar10) == local_38) &&
             (*(int *)(lVar3 + 8 + lVar10) == 0x678bcdb)) {
            if (lVar15 != 0) {
              lVar15 = lVar15 + 0x18;
              goto LAB_140fdcf8c;
            }
            break;
          }
          iVar9 = *(int *)(lVar15 + 0x58);
        } while (iVar9 != -1);
      }
    }
  }
  lVar15 = 0;
LAB_140fdcf8c:
  plVar12 = (longlong *)(param_2 + 0x398);
  uVar4 = (**(code **)(*(longlong *)(param_2 + 0x398) + 0x10))(plVar12);
  local_48 = &local_30;
  local_40 = uVar4;
  if (lVar15 != 0) {
    lVar3 = *(longlong *)(lVar15 + 0x18);
    if (lVar3 == 0) {
      uVar5 = FUN_140067708();
      lVar3 = FUN_14477b664(uVar5);
      *(longlong *)(lVar15 + 0x18) = lVar3;
    }
    plVar12 = (longlong *)(lVar15 + 0x10);
    if (*(longlong *)(lVar15 + 0x20) == 0) {
      if ((lVar3 == 0) || (*plVar12 == 0)) goto LAB_140fdcffe;
      plVar7 = *(longlong **)(lVar3 + 0xb8);
      if ((plVar7 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar2 == '\0')) {
        *(undefined8 *)(lVar15 + 0x20) = 0;
        goto LAB_140fdcffe;
      }
      uVar5 = (**(code **)(*plVar7 + 0x110))(plVar7);
      lVar3 = FUN_144aff482(uVar5,plVar12);
      *(longlong *)(lVar15 + 0x20) = lVar3;
      if (lVar3 == 0) goto LAB_140fdcffe;
    }
    if ((*(longlong **)(local_30 + 0xa38) == (longlong *)0x0) ||
       (**(longlong **)(local_30 + 0xa38) == -1)) {
      FUN_143d92e24(&local_48);
      if ((*(longlong **)(local_30 + 0xa38) == (longlong *)0x0) ||
         (**(longlong **)(local_30 + 0xa38) == -1)) goto LAB_140fdcffe;
    }
    cVar2 = FUN_1488bbf16(uVar4,plVar12);
    if (cVar2 == '\0') {
      uVar4 = (**(code **)(*(longlong *)(local_30 + 0x398) + 0x10))(local_30 + 0x398);
      FUN_1488bc014(uVar4,plVar12);
    }
    goto LAB_140fdcffe;
  }
  lVar3 = (**(code **)(*plVar12 + 0x10))(plVar12);
  FUN_14072d42a(lVar3 + 0x1e8,0);
  lVar3 = *(longlong *)(param_1 + 0x128);
  if (lVar3 == 0) {
    uVar4 = FUN_140067708();
    lVar3 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x128) = lVar3;
  }
  plVar12 = (longlong *)(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x130) == 0) {
    if ((*plVar12 == 0) || (lVar3 == 0)) goto LAB_140fdcffe;
    plVar7 = *(longlong **)(lVar3 + 0xb8);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar2 == '\0')) {
      *(undefined8 *)(param_1 + 0x130) = 0;
      goto LAB_140fdcffe;
    }
    uVar4 = (**(code **)(*plVar7 + 0x110))(plVar7);
    lVar3 = FUN_144aff482(uVar4,plVar12);
    *(longlong *)(param_1 + 0x130) = lVar3;
    if (lVar3 == 0) goto LAB_140fdcffe;
  }
  cVar2 = FUN_144904448(local_30 + 0xa40);
  if (cVar2 == '\0') {
    plVar7 = *(longlong **)(local_30 + 0xa38);
    if ((plVar7 == (longlong *)0x0) || (*plVar7 == -1)) {
      FUN_143d92e24(&local_48);
      plVar7 = *(longlong **)(local_30 + 0xa38);
      if ((plVar7 == (longlong *)0x0) || (*plVar7 == -1)) goto LAB_140fdcffe;
    }
    local_68 = 0;
    FUN_14071ab80(plVar7,local_60,plVar12);
    lVar3 = local_30;
    FUN_1416659c6(local_30 + 0xa40,local_60);
    *(undefined8 *)(lVar3 + 0xa50) = local_50;
  }
LAB_140fdcffe:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fdd3ec FUN_140fdd3ec body=73 status=ok
// SIG undefined FUN_140fdd3ec(void)

undefined1 FUN_140fdd3ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_140fdd436();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140fdd436 FUN_140fdd436 body=88 status=ok
// SIG undefined FUN_140fdd436(void)

undefined8 * FUN_140fdd436(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140fdd48e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 140fdd48e FUN_140fdd48e body=228 status=ok
// SIG undefined FUN_140fdd48e(void)

void FUN_140fdd48e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,4);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,4);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140fdd572 FUN_140fdd572 body=46 status=ok
// SIG undefined FUN_140fdd572(void)

void FUN_140fdd572(longlong param_1)

{
  FUN_140fdd5a0(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140fdd5a0 FUN_140fdd5a0 body=73 status=ok
// SIG undefined FUN_140fdd5a0(void)

void FUN_140fdd5a0(longlong param_1,int param_2)

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



// FUNCTION 140fdd5f0 FUN_140fdd5f0 body=57 status=ok
// SIG undefined FUN_140fdd5f0(void)

void FUN_140fdd5f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5688 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5688 = FUN_140002ddd(FUN_1465c3410,uVar1,L"MainMenuStationObjectDef");
  }
  return;
}



// FUNCTION 140fdd62a FUN_140fdd62a body=2264 status=ok
// SIG undefined FUN_140fdd62a(void)

void FUN_140fdd62a(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  code ****ppppcVar2;
  byte bVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  byte local_e9;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  code ****local_c8;
  undefined8 uStack_c0;
  code ****local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  int iStack_58;
  undefined4 uStack_54;
  char cStack_50;
  char cStack_4f;
  undefined1 uStack_4e;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar7 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar7 != 2)) {
    if (iVar7 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_140fdd715;
    }
LAB_140fdd68c:
    if ((((*(char *)(param_2 + 0x69) == '\0') && (*(char *)(param_2 + 0x68) == '\0')) &&
        ((*(char *)(param_2 + 0x10) == '\0' &&
         (((*(int *)(param_2 + 0x20) == 0 && (*(int *)(param_2 + 0x30) == 0)) &&
          (*(int *)(param_2 + 0x50) == 0)))))) && (*(int *)(param_2 + 0x60) == 0))
    goto LAB_140fdd6d2;
  }
  else {
LAB_140fdd715:
    uStack_b0 = &local_c8;
    local_b8 = (code ****)FUN_141073f72;
    lVar9 = FUN_144a773aa(&local_b8);
    if (*(char *)(lVar9 + 0x20) == '\x01') goto LAB_140fdd68c;
    if (*(char *)(param_2 + 0x69) == '\x01') {
      FUN_146044b26(param_1 + 0x1350);
      *(undefined1 *)(param_2 + 0x69) = 0;
    }
    if (*(int *)(param_2 + 0x20) != 0) {
      lVar9 = param_1 + 0xeb8;
      cVar4 = FUN_140fde03e(lVar9);
      if (((cVar4 == '\0') && (cVar4 = FUN_140fde03e(param_1 + 0xef8), cVar4 == '\0')) &&
         (cVar4 = FUN_140fde03e(param_1 + 0xf38), cVar4 == '\0')) {
        if ((longlong)*(int *)(param_1 + 0xf80) != 0) {
          lVar12 = 0;
          do {
            if ((*(int *)(*(longlong *)(param_1 + 0xf78) + 8 + lVar12) != 0) &&
               (*(longlong *)(*(longlong *)(param_1 + 0xf78) + lVar12) != 0)) goto LAB_140fddc70;
            lVar12 = lVar12 + 0x10;
          } while ((longlong)*(int *)(param_1 + 0xf80) * 0x10 != lVar12);
        }
      }
      else {
LAB_140fddc70:
        local_c8 = (code ****)0x0;
        uStack_c0 = 0;
        if ((longlong)*(int *)(param_2 + 0x20) != 0) {
          local_e0 = *(ulonglong *)(param_2 + 0x18);
          local_e9 = *(int *)(local_e0 + 0x10) == 0;
          local_d8 = param_1 + 0xef8;
          local_d0 = (longlong)*(int *)(param_2 + 0x20) * 0x18;
          lVar12 = 0;
          do {
            iVar7 = *(int *)(local_e0 + 0x10 + lVar12);
            local_e8 = uStack_c0 & 0xffffffff;
            bVar3 = local_e9;
            if ((iVar7 == 0) != (bool)(local_e9 & 1)) {
              lVar13 = lVar9;
              if ((local_e9 & 1) == 0) {
                lVar13 = local_d8;
              }
              local_b8 = local_c8;
              uStack_b0 = (code *****)CONCAT44(uStack_b0._4_4_,(int)uStack_c0);
              FUN_14700a5b4(lVar13);
              local_e8 = 0;
              bVar14 = (longlong)uStack_c0 < 0;
              uStack_c0 = uStack_c0 & 0xffffffff00000000;
              bVar3 = iVar7 == 0;
              if (bVar14) {
                FUN_146874bc2(&local_c8);
                local_e8 = uStack_c0 & 0xffffffff;
              }
            }
            local_e9 = bVar3;
            ppppcVar2 = *(code *****)(local_e0 + lVar12);
            iVar7 = *(int *)(local_e0 + 8 + lVar12);
            iVar1 = iVar7 + -1;
            if (iVar7 == 0) {
              iVar1 = 0;
            }
            uVar8 = (int)local_e8 + 1;
            uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar8);
            if (uStack_c0._4_4_ < uVar8) {
              FUN_146874c22(&local_c8);
            }
            local_c8[(longlong)(int)local_e8 * 2] = (code ***)ppppcVar2;
            *(int *)(local_c8 + (longlong)(int)local_e8 * 2 + 1) = iVar1;
            lVar12 = lVar12 + 0x18;
          } while (local_d0 != lVar12);
          if ((int)uStack_c0 != 0) {
            lVar12 = local_d8;
            if ((local_e9 & 1) != 0) {
              lVar12 = lVar9;
            }
            local_b8 = local_c8;
            uStack_b0 = (code *****)CONCAT44(uStack_b0._4_4_,(int)uStack_c0);
            FUN_14700a5b4(lVar12);
          }
        }
        cVar4 = FUN_140fde03e(param_1 + 0xf38);
        if (cVar4 == '\0') {
          if ((longlong)*(int *)(param_1 + 0xf80) != 0) {
            lVar9 = 0;
            do {
              if ((*(int *)(*(longlong *)(param_1 + 0xf78) + 8 + lVar9) != 0) &&
                 (*(longlong *)(*(longlong *)(param_1 + 0xf78) + lVar9) != 0)) goto LAB_140fdddb2;
              lVar9 = lVar9 + 0x10;
            } while ((longlong)*(int *)(param_1 + 0xf80) * 0x10 != lVar9);
          }
        }
        else {
LAB_140fdddb2:
          if ((longlong)*(int *)(param_2 + 0x20) != 0) {
            lVar9 = *(longlong *)(param_2 + 0x18);
            lVar12 = (longlong)*(int *)(param_2 + 0x20) * 0x18;
            do {
              if (*(int *)(lVar9 + 0x10) == 1) {
                FUN_1411f311e(param_1 + 0xf78,lVar9);
              }
              else if (*(int *)(lVar9 + 0x10) == 0) {
                FUN_14700a69c(param_1 + 0xf38,lVar9);
              }
              lVar9 = lVar9 + 0x18;
              lVar12 = lVar12 + -0x18;
            } while (lVar12 != 0);
          }
        }
        if ((code *****)local_c8 != (code *****)0x0) {
          FUN_1400020a8();
        }
      }
      FUN_140cb51fa(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x20));
      *(undefined4 *)(param_2 + 0x20) = 0;
      if (*(int *)(param_2 + 0x24) != 0) {
        FUN_1457de4a0(param_2 + 0x18);
      }
    }
    if (*(int *)(param_2 + 0x30) != 0) {
      local_e8 = param_1 + 0xf90;
      cVar4 = FUN_140fde03e();
      if ((((cVar4 == '\0') && (cVar4 = FUN_140fde03e(param_1 + 0xfd0), cVar4 == '\0')) &&
          (cVar4 = FUN_140fde03e(param_1 + 0x1050), cVar4 == '\0')) &&
         (cVar4 = FUN_140fde03e(param_1 + 0x1090), cVar4 == '\0')) {
        lVar9 = 0;
        do {
          cVar4 = FUN_140fde03e(param_1 + 0x10d0 + lVar9);
          if (cVar4 != '\0') goto LAB_140fdd95d;
          lVar9 = lVar9 + 0x40;
        } while (lVar9 != 0x100);
      }
      else {
LAB_140fdd95d:
        uStack_88 = 0;
        local_80 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = (code ****)0x0;
        uStack_b0 = (code *****)0x0;
        lVar9 = *(longlong *)(param_2 + 0x28);
        uStack_c0 = param_1 + 0x10d0;
        local_c8 = (code ****)&local_b8;
        if ((longlong)*(int *)(param_2 + 0x30) != 0) {
          lVar12 = (longlong)*(int *)(param_2 + 0x30) * 0x78;
          iVar7 = *(int *)(lVar9 + 0x70);
          do {
            iVar1 = *(int *)(lVar9 + 0x70);
            lVar13 = (longlong)iVar1;
            if ((iVar7 != 1) == (lVar13 == 1)) {
              FUN_142ad82e6(&local_c8);
            }
            iVar7 = *(int *)(&uStack_b0 + lVar13 * 2);
            *(uint *)(&uStack_b0 + lVar13 * 2) = iVar7 + 1U;
            if (*(uint *)((longlong)&uStack_b0 + lVar13 * 0x10 + 4) < iVar7 + 1U) {
              FUN_14171b750(&local_b8 + lVar13 * 2,iVar7);
            }
            FUN_1400e7d28((&local_b8)[lVar13 * 2] + (longlong)iVar7 * 0xe,lVar9);
            lVar9 = lVar9 + 0x78;
            lVar12 = lVar12 + -0x78;
            iVar7 = iVar1;
          } while (lVar12 != 0);
        }
        FUN_142ad82e6(&local_c8);
        if ((longlong)*(int *)(param_2 + 0x30) != 0) {
          lVar9 = *(longlong *)(param_2 + 0x28);
          local_e0 = param_1 + 0x1090;
          lVar12 = (longlong)*(int *)(param_2 + 0x30) * 0x78;
          do {
            uVar10 = local_e8;
            switch(*(undefined4 *)(lVar9 + 0x70)) {
            case 0:
              break;
            case 1:
              uVar10 = param_1 + 0xfd0;
              break;
            case 2:
              uVar10 = param_1 + 0x1050;
              break;
            case 3:
              uVar10 = local_e0;
              break;
            default:
              goto switchD_140fdda6d_default;
            }
            FUN_14700766a(uVar10,lVar9);
switchD_140fdda6d_default:
            lVar9 = lVar9 + 0x78;
            lVar12 = lVar12 + -0x78;
          } while (lVar12 != 0);
        }
        lVar9 = 0x30;
        do {
          FUN_140195631(*(undefined8 *)((longlong)&local_b8 + lVar9),
                        *(undefined4 *)((longlong)&uStack_b0 + lVar9));
          if (*(longlong *)((longlong)&local_b8 + lVar9) != 0) {
            FUN_1400020a8();
          }
          lVar9 = lVar9 + -0x10;
        } while (lVar9 != -0x10);
      }
      FUN_140cb51d2(*(undefined8 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x30));
      *(undefined4 *)(param_2 + 0x30) = 0;
      if (*(int *)(param_2 + 0x34) != 0) {
        FUN_14700a4cc(param_2 + 0x28);
      }
    }
    if (*(int *)(param_2 + 0x40) != 0) {
      cVar4 = FUN_140fde03e(param_1 + 0x1250);
      if (((cVar4 != '\0') || (cVar4 = FUN_140fde03e(param_1 + 0x1290), cVar4 != '\0')) &&
         (iVar7 = *(int *)(param_2 + 0x40), (longlong)iVar7 != 0)) {
        lVar9 = *(longlong *)(param_2 + 0x38);
        lVar12 = 0;
        do {
          iVar1 = *(int *)(lVar9 + 8 + lVar12);
          lVar13 = param_1 + 0x1250;
          if ((iVar1 == 0) || (lVar13 = param_1 + 0x1290, iVar1 == 1)) {
            FUN_14700a75a(lVar13,*(undefined8 *)(lVar9 + lVar12));
          }
          lVar12 = lVar12 + 0xc;
        } while ((longlong)iVar7 * 0xc != lVar12);
      }
      *(undefined4 *)(param_2 + 0x40) = 0;
      if (*(int *)(param_2 + 0x44) != 0) {
        FUN_14700a818(param_2 + 0x38);
      }
    }
    iVar7 = *(int *)(param_2 + 0x50);
    if ((longlong)iVar7 != 0) {
      lVar9 = *(longlong *)(param_2 + 0x48);
      lVar12 = 0;
      do {
        puVar11 = &DAT_149dfb77a;
        if (*(int *)(lVar9 + 8 + lVar12) != 0) {
          puVar11 = *(undefined2 **)(lVar9 + lVar12);
        }
        local_f8 = 0;
        FUN_1402791b4(0,puVar11,0,0);
        lVar12 = lVar12 + 0x10;
      } while ((longlong)iVar7 * 0x10 != lVar12);
      FUN_1447a1747(*(undefined8 *)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x50));
      *(undefined4 *)(param_2 + 0x50) = 0;
      if (*(int *)(param_2 + 0x54) != 0) {
        FUN_1408be2c4((longlong *)(param_2 + 0x48),0);
      }
    }
    if (*(int *)(param_2 + 0x60) != 0) {
      FUN_14700a848(param_1 + 0xea0,param_2 + 0x58);
      FUN_1447a1747(*(undefined8 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x60));
      *(undefined4 *)(param_2 + 0x60) = 0;
      if (*(int *)(param_2 + 100) != 0) {
        FUN_1408be2c4(param_2 + 0x58,0);
      }
    }
    if ((*(char *)(param_2 + 0x10) == '\x01') &&
       (FUN_14700a8ec(param_1 + 0x1310,param_2), *(char *)(param_2 + 0x10) == '\x01')) {
      *(undefined1 *)(param_2 + 0x10) = 0;
    }
    if (*(char *)(param_2 + 0x68) != '\x01') goto LAB_140fdd6d2;
    if (param_3 != '\0') {
      local_a8 = local_a8 & 0xffffffffffffff00;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      iStack_58 = 0;
      uStack_54 = 0;
      cStack_50 = '\0';
      cStack_4f = '\0';
      uStack_4e = 0;
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1450));
      FUN_145bfdd1a(&local_b8,param_1 + 0x13d0);
      FUN_1457de678(param_1 + 0x13d0);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1450));
      if (((((cStack_4f != '\0') || (cStack_50 != '\0')) || ((char)local_a8 != '\0')) ||
          (((int)uStack_98 != 0 || ((int)uStack_88 != 0)))) ||
         (((int)uStack_68 != 0 || (iStack_58 != 0)))) {
        cStack_50 = '\0';
        FUN_140fdd62a(param_1,&local_b8,0);
      }
      FUN_146044b26(param_1 + 0x12d0);
      FUN_146044b26(param_1 + 0x1390);
      *(undefined1 *)(param_2 + 0x68) = 0;
      *(undefined1 *)(param_2 + 0x6a) = 1;
      FUN_140cb5138(&local_b8);
      goto LAB_140fdd6d2;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1450));
  FUN_1457de4d0(param_1 + 0x13d0,param_2);
  FUN_1457de734(param_1);
  FUN_1457de678(param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1450));
LAB_140fdd6d2:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fddf04 FUN_140fddf04 body=156 status=ok
// SIG undefined FUN_140fddf04(void)

void FUN_140fddf04(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xc78) == '\0') {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    *(undefined1 *)(lVar2 + 0xc78) = 1;
    *(undefined8 *)(lVar2 + 0xc68) = 0;
    *(undefined8 *)(lVar2 + 0xc70) = 0;
    __tlregdtor(FUN_14275bf40);
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar1 = *(int *)(lVar2 + 0xc70);
  *(uint *)(lVar2 + 0xc70) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xc74) < iVar1 + 1U) {
    FUN_140fddfa8((longlong *)(lVar2 + 0xc68),iVar1);
  }
  *(undefined8 *)(*(longlong *)(lVar2 + 0xc68) + (longlong)iVar1 * 8) = param_1;
  return;
}



// FUNCTION 140fddfa0 TlsFree body=7 status=ok
// SIG BOOL TlsFree(DWORD dwTlsIndex)

BOOL __stdcall TlsFree(DWORD dwTlsIndex)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140fddfa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TlsFree(dwTlsIndex);
  return BVar1;
}



// FUNCTION 140fddfa8 FUN_140fddfa8 body=148 status=ok
// SIG undefined FUN_140fddfa8(void)

void FUN_140fddfa8(longlong param_1,int param_2)

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
    uVar4 = lVar3 << 3;
    if (DAT_14c872d28 != (longlong *)0x0) {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 3)) {
      uVar5 = uVar4 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140fde03e FUN_140fde03e body=91 status=ok
// SIG undefined FUN_140fde03e(void)

undefined8 FUN_140fde03e(LPCRITICAL_SECTION param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_1);
  if ((longlong)param_1[1].LockCount == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = 0;
    uVar2 = 0;
    do {
      if ((*(int *)((longlong)&(param_1[1].DebugInfo)->CriticalSection + lVar1) != 0) &&
         (*(longlong *)((longlong)&(param_1[1].DebugInfo)->Type + lVar1) != 0)) {
        uVar2 = 1;
        break;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)param_1[1].LockCount * 0x10 != lVar1);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return uVar2;
}



// FUNCTION 140fde09a FUN_140fde09a body=373 status=ok
// SIG undefined FUN_140fde09a(void)

void FUN_140fde09a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140fde125;
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
LAB_140fde125:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140fde210 FUN_140fde210 body=103 status=ok
// SIG undefined FUN_140fde210(void)

ulonglong FUN_140fde210(longlong param_1)

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
LAB_140fde25a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140fde25a;
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



// FUNCTION 140fde278 FUN_140fde278 body=77 status=ok
// SIG undefined FUN_140fde278(void)

void FUN_140fde278(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if ((*(char *)(param_1 + 0x60) == '\x01') &&
     (lVar2 = (**(code **)(*param_2 + 0xe0))(param_2), lVar2 != *(longlong *)(param_1 + 0x68))) {
    return;
  }
  uVar1 = (**(code **)(*param_2 + 0x100))(param_2);
  FUN_140c836ee(param_1,uVar1);
  return;
}



// FUNCTION 140fde2ce FUN_140fde2ce body=361 status=ok
// SIG undefined FUN_140fde2ce(void)

undefined8 * FUN_140fde2ce(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14a625540;
  plVar1 = param_1 + 0x72;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 2;
  FUN_1446f470e(&local_28,L"GbxOrientedBoxComponent",1);
  uVar2 = FUN_140fde438();
  local_40 = 0;
  local_48 = 1;
  lVar3 = FUN_14048696c(param_1,local_28,uVar2,uVar2);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  *plVar1 = lVar3;
  *(undefined1 *)(lVar3 + 0x1fb) = 0;
  lVar3 = *plVar1;
  if ((char)*(byte *)(lVar3 + 0x9e) < '\0') {
    *(byte *)(lVar3 + 0x9e) = *(byte *)(lVar3 + 0x9e) & 0x7f;
    FUN_140381836(lVar3,0);
    lVar3 = *plVar1;
  }
  FUN_140fde51e(lVar3 + 0x2d8,&local_30,param_1,&LAB_147ad4dc2);
  param_1[0x73] = local_30;
  lVar3 = param_1[0x72];
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *plVar1;
    }
  }
  param_1[0x39] = lVar3;
  FUN_1405bab3a(param_1,0);
  FUN_1403121a6(param_1,0);
  *(byte *)((longlong)param_1 + 0x62) = *(byte *)((longlong)param_1 + 0x62) | 0x10;
  *(undefined1 *)((longlong)param_1 + 0x17a) = 3;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xfd;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fde438 FUN_140fde438 body=228 status=ok
// SIG undefined FUN_140fde438(void)

longlong FUN_140fde438(void)

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
  if (DAT_14cac1570 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_14786f5ff;
    local_40 = &LAB_140eacf0c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2f0;
    FUN_14081cfa3(L"/Script/Engine",L"GbxOrientedBoxComponent",&DAT_14cac1570,FUN_146379898);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac1570;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fde51e FUN_140fde51e body=765 status=ok
// SIG undefined FUN_140fde51e(void)

undefined8 * FUN_140fde51e(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar2 = local_58;
  local_50 = 3;
  *local_58 = (longlong)&PTR_LAB_14a914960;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_58[2] = lVar6;
  *local_58 = (longlong)&PTR_FUN_14a9148f0;
  local_58[3] = 0;
  iVar8 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_58 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar8 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar8 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar4;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar8 = iVar4;
      }
    }
  }
  *(int *)((longlong)plVar2 + 0x1c) = iVar8;
  plVar2[4] = param_4;
  *param_2 = 0;
  if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*local_58 + 0x30))(), cVar3 == '\0')) {
    if (local_50 != 0) {
      if (local_58 == (longlong *)0x0) goto LAB_140fde6ca;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_140fde6b4;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar8 = (int)param_1[1];
      iVar4 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar4;
      if (iVar4 <= iVar8) {
        iVar4 = iVar8;
        if (0 < iVar8) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar4 = (int)param_1[1];
          } while (iVar7 < iVar4);
        }
        iVar7 = 2;
        if (2 < iVar4 * 2) {
          iVar7 = iVar4 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar8) && (*(int *)((longlong)param_1 + 0xc) != iVar4)) {
          FUN_14045812c();
        }
      }
    }
    uVar5 = 0;
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,&local_48);
      uVar5 = local_48;
    }
    *param_2 = uVar5;
    iVar8 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar8 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar8 + 1U) {
      FUN_1447a71f6(param_1,iVar8);
    }
    lVar9 = *param_1;
    lVar6 = (longlong)iVar8 * 0x10;
    *(undefined8 *)(lVar9 + lVar6) = 0;
    *(undefined4 *)(lVar9 + 8 + lVar6) = 0;
    *(longlong **)(lVar9 + lVar6) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar9 + 8 + lVar6) = local_50;
LAB_140fde6b4:
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140fde6ca:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140fde876 FUN_140fde876 body=600 status=ok
// SIG undefined FUN_140fde876(void)

longlong * FUN_140fde876(longlong *param_1)

{
  void *_Src;
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_38,"Windows");
  local_48 = (void *)0x0;
  uStack_40 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_68 = 0;
  cVar2 = FUN_14063337c(&DAT_14c846b20,L"DeviceProfile=",&local_48,1);
  if (cVar2 == '\0') {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    local_68 = 0;
    cVar2 = FUN_14063337c(&DAT_14c846b20,&DAT_14a8b6d6c,&local_48,1);
    if (cVar2 == '\0') {
      local_58 = (void *)0x0;
      local_50 = *(int *)(DAT_14cad6098 + 1);
      lVar4 = (longlong)local_50;
      _Src = (void *)*DAT_14cad6098;
      if (lVar4 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,_Src,lVar4 * 2);
      }
      if (local_48 != (void *)0x0) {
        FUN_1400020a8();
      }
      local_48 = local_58;
      uStack_40 = CONCAT44(local_4c,local_50);
      if (local_50 - 2U < 0x7fffffff) {
        *param_1 = (longlong)local_58;
        *(int *)(param_1 + 1) = local_50;
        *(undefined4 *)((longlong)param_1 + 0xc) = local_4c;
      }
      else {
        plVar3 = (longlong *)FUN_140fdead0();
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x40))(plVar3,&local_58);
          iVar1 = local_50 + -1;
          if (local_50 == 0) {
            iVar1 = 0;
          }
          FUN_1402980a2(&local_38,local_58,iVar1);
          if (local_58 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
        *param_1 = local_38;
        local_38 = 0;
        *(undefined4 *)(param_1 + 1) = (undefined4)local_30;
        *(undefined4 *)((longlong)param_1 + 0xc) = local_30._4_4_;
        local_30 = 0;
        if (local_48 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      goto LAB_140fde9f5;
    }
  }
  *param_1 = (longlong)local_48;
  local_48 = (void *)0x0;
  *(undefined4 *)(param_1 + 1) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_40._4_4_;
LAB_140fde9f5:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fdead0 FUN_140fdead0 body=304 status=ok
// SIG undefined FUN_140fdead0(void)

longlong FUN_140fdead0(void)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  undefined2 *local_28;
  undefined8 uStack_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  local_38 = &DAT_14c872ce8;
  cVar1 = FUN_1449da20c(DAT_14c872ce0,L"DeviceProfileManager",L"DeviceProfileSelectionModule");
  if (cVar1 != '\0') {
    puVar3 = local_28;
    if ((int)uStack_20 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_30,puVar3,1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    lVar2 = FUN_1402c9134(&DAT_14c874628,local_30,local_14,0);
    if (lVar2 != 0) goto LAB_140fdeb89;
  }
  lVar2 = 0;
LAB_140fdeb89:
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 140fdec02 FUN_140fdec02 body=159 status=ok
// SIG undefined FUN_140fdec02(void)

undefined8
FUN_140fdec02(longlong *param_1,longlong param_2,int *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((*param_3 < 2) && (lVar2 = (**(code **)(*param_1 + 0x180))(), lVar2 != 0)) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_14116599c();
    }
    lVar2 = FUN_1400f6f32(lVar2);
    if (lVar2 != 0) {
      if (lVar3 == 0) {
        return 0;
      }
      if (*(longlong *)(lVar2 + 0x68) == 0) {
        return 0;
      }
      uVar1 = FUN_140def96c(*(longlong *)(lVar2 + 0x68),param_2 + 0x18);
      plVar4 = (longlong *)FUN_140d8a54a(lVar3,uVar1);
      if (plVar4 == (longlong *)0x0) {
        return 1;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4,param_4,param_5);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140fdeca8 FUN_140fdeca8 body=212 status=ok
// SIG undefined FUN_140fdeca8(void)

void FUN_140fdeca8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_14009b010(&local_38,3,0);
  if (param_3 != &DAT_14c9a1308) {
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    plVar3 = (longlong *)param_3[1];
    *param_3 = local_38;
    param_3[1] = plStack_30;
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
  }
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140fded7e(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fded7e FUN_140fded7e body=455 status=ok
// SIG undefined FUN_140fded7e(void)

void FUN_140fded7e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  FUN_14009b010(&local_68,2,0);
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar4 = *(longlong *)(param_1 + 8);
    lVar5 = (longlong)*(int *)(param_1 + 0x10) * 0x38;
    do {
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      FUN_14009b010(&local_78,3,0);
      FUN_140fdef46(lVar4,&local_78);
      if (local_68 != 0) {
        local_88 = 0;
        FUN_140141db6(local_68,&local_78,0,0);
      }
      plVar3 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_70 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      lVar4 = lVar4 + 0x38;
      lVar5 = lVar5 + -0x38;
    } while (lVar5 != 0);
  }
  if (*param_3 != 0) {
    local_88 = 0;
    FUN_140516f2a(*param_3,&DAT_14cb971f8,&local_68,0);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    FUN_14009b010(&local_78,3,0);
    FUN_140fdef46(param_1 + 0x18,&local_78);
    if (*param_3 != 0) {
      local_88 = 0;
      FUN_140516f2a(*param_3,&DAT_14cb97200,&local_78,0);
    }
    plVar3 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_70)(plStack_70);
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
  plVar3 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fdef46 FUN_140fdef46 body=1196 status=ok
// SIG undefined FUN_140fdef46(void)

void FUN_140fdef46(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  wchar_t *local_118;
  int local_110;
  longlong local_108;
  longlong *plStack_100;
  longlong local_f8;
  longlong *plStack_f0;
  longlong local_e8;
  longlong *plStack_e0;
  undefined1 local_d8 [128];
  wchar_t *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((byte *)*param_2 != (byte *)0x0) && ((~*(byte *)*param_2 & 3) == 0)) {
    local_e8 = 0;
    plStack_e0 = (longlong *)0x0;
    FUN_14009b010(&local_e8,1,0);
    local_f8 = 0;
    plStack_f0 = (longlong *)0x0;
    FUN_14009b010(&local_f8,1,0);
    local_108 = 0;
    plStack_100 = (longlong *)0x0;
    FUN_14009b010(&local_108,1,0);
    if (*param_1 == 0) {
      pwVar5 = DAT_14cb97220;
      if (DAT_14cb97228 == 0) {
        pwVar5 = L"";
      }
      local_58 = (wchar_t *)0x0;
      if (pwVar5 == (wchar_t *)0x0) {
        local_50 = 0;
        local_48 = 0;
      }
      else {
        sVar4 = wcslen(pwVar5);
        FUN_1449b853c(local_d8,pwVar5,sVar4 & 0xffffffff,1);
      }
      pwVar5 = local_58;
      if ((local_e8 != 0) && ((*(byte *)(local_e8 + 1) & 2) == 0)) {
        FUN_140126aca(local_e8,local_50);
        pwVar5 = local_58;
      }
    }
    else {
      FUN_140b6c526(&local_118);
      pwVar5 = local_118;
      if (local_110 == 0) {
        pwVar5 = L"";
      }
      local_58 = (wchar_t *)0x0;
      if (pwVar5 == (wchar_t *)0x0) {
        local_50 = 0;
        local_48 = 0;
      }
      else {
        sVar4 = wcslen(pwVar5);
        FUN_1449b853c(local_d8,pwVar5,sVar4 & 0xffffffff,1);
      }
      if ((local_e8 != 0) && ((*(byte *)(local_e8 + 1) & 2) == 0)) {
        FUN_140126aca(local_e8,local_50);
      }
      pwVar5 = local_118;
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
        pwVar5 = local_118;
      }
    }
    if (pwVar5 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (param_1[2] == 0) {
      pwVar5 = DAT_14cb97220;
      if (DAT_14cb97228 == 0) {
        pwVar5 = L"";
      }
      local_58 = (wchar_t *)0x0;
      if (pwVar5 == (wchar_t *)0x0) {
        local_50 = 0;
        local_48 = 0;
      }
      else {
        sVar4 = wcslen(pwVar5);
        FUN_1449b853c(local_d8,pwVar5,sVar4 & 0xffffffff,1);
      }
      local_118 = local_58;
      if ((local_f8 != 0) && ((*(byte *)(local_f8 + 1) & 2) == 0)) {
        FUN_140126aca();
        local_118 = local_58;
      }
    }
    else {
      FUN_140b6c526(&local_118);
      pwVar5 = local_118;
      if (local_110 == 0) {
        pwVar5 = L"";
      }
      local_58 = (wchar_t *)0x0;
      if (pwVar5 == (wchar_t *)0x0) {
        local_50 = 0;
        local_48 = 0;
      }
      else {
        sVar4 = wcslen(pwVar5);
        FUN_1449b853c(local_d8,pwVar5,sVar4 & 0xffffffff,1);
      }
      if ((local_f8 != 0) && ((*(byte *)(local_f8 + 1) & 2) == 0)) {
        FUN_140126aca();
      }
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_118 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if ((int)param_1[5] == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)param_1[4];
    }
    local_58 = (wchar_t *)0x0;
    if (pwVar5 == (wchar_t *)0x0) {
      local_50 = 0;
      local_48 = 0;
    }
    else {
      sVar4 = wcslen(pwVar5);
      FUN_1449b853c(local_d8,pwVar5,sVar4 & 0xffffffff,1);
    }
    if ((local_108 != 0) && ((*(byte *)(local_108 + 1) & 2) == 0)) {
      FUN_140126aca(local_108,local_50);
    }
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (*param_2 != 0) {
      local_128 = 0;
      FUN_140516f2a(*param_2,&DAT_14cb97208,&local_e8,0);
      if (*param_2 != 0) {
        local_128 = 0;
        FUN_140516f2a(*param_2,&DAT_14cb97210,&local_f8,0);
        if (*param_2 != 0) {
          local_128 = 0;
          FUN_140516f2a(*param_2,&DAT_14cb97218,&local_108,0);
        }
      }
    }
    plVar3 = plStack_100;
    if (plStack_100 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_100 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_100)(plStack_100);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = plStack_f0;
    if (plStack_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_f0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_f0)(plStack_f0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = plStack_e0;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_e0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_e0)(plStack_e0);
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
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fdf3f4 FUN_140fdf3f4 body=223 status=ok
// SIG undefined FUN_140fdf3f4(void)

void FUN_140fdf3f4(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fdf4e4(param_1,&local_28);
  if (local_28 == (longlong *)0x0) goto LAB_140fdf484;
  if ((*(longlong *)(param_1 + 0x68) == 0) || (*(int *)(param_1 + 100) == 0)) {
LAB_140fdf4b2:
    lVar4 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x60);
    lVar4 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      if ((lVar3 == 0) || (*(int *)(lVar3 + 0x10) != *(int *)(param_1 + 100))) goto LAB_140fdf4b2;
      lVar4 = 0;
      if ((*(uint *)(lVar3 + 8) & 0x10200000) == 0) {
        lVar4 = *(longlong *)(param_1 + 0x68);
      }
    }
  }
  (**(code **)(*local_28 + 0x18))(local_28,lVar4);
LAB_140fdf484:
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fdf4e4 FUN_140fdf4e4 body=195 status=ok
// SIG undefined FUN_140fdf4e4(void)

undefined8 * FUN_140fdf4e4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if ((((*(int *)(param_1 + 0x74) == 0) || (uVar3 = *(uint *)(param_1 + 0x70), (int)uVar3 < 0)) ||
      (DAT_14c9647dc <= (int)uVar3)) ||
     (((plVar6 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(param_1 + 0x74))) ||
      ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
    lVar5 = *plVar6;
  }
  else {
    lVar5 = 0;
  }
  uVar4 = *(undefined8 *)(lVar5 + 0x118);
  plVar6 = *(longlong **)(lVar5 + 0x120);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *param_2 = uVar4;
    param_2[1] = plVar6;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) {
      return param_2;
    }
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 != 0) {
      return param_2;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
    return param_2;
  }
  *param_2 = uVar4;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140fdf5a8 FUN_140fdf5a8 body=7481 status=ok
// SIG undefined FUN_140fdf5a8(void)

void FUN_140fdf5a8(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  code *local_88;
  code *local_80;
  undefined8 *local_78;
  undefined4 local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)(param_1 + -0x30);
  plVar3 = *(longlong **)(param_1 + -0x10);
  if (plVar3 != (longlong *)0x0) {
    if (DAT_14cba8288 == 0) {
      local_90 = &local_58;
      local_58 = FUN_141864c34;
      local_80 = FUN_14081d0ea;
      local_88 = (code *)&LAB_1464cee30;
      local_98 = &LAB_148bfac22;
      local_a0 = (code *)&LAB_140f21842;
      local_a8 = L"Game";
      local_b0 = 0;
      local_b8 = 0x10000004;
      local_c0 = 0x10;
      local_c8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) ==
        DAT_14cba8288 + 0x30)) {
      if (*(longlong *)(param_1 + 0x28) == 0) {
        local_58 = FUN_141438c8c;
        uStack_50 = uStack_50 & 0xffffffff00000000;
        FUN_140fe165c(plVar3 + 0xe37,&local_78,plVar1);
        *(undefined8 **)(param_1 + 0x28) = local_78;
      }
      if (*(longlong *)(param_1 + 0x30) == 0) {
        local_58 = (code *)0x0;
        uStack_50 = uStack_50 & 0xffffffff00000000;
        FUN_1446efa72(&local_58,0,3,0x10);
        pcVar4 = local_58;
        uStack_50 = CONCAT44(uStack_50._4_4_,3);
        *(undefined ***)local_58 = &PTR_LAB_14b966850;
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 1;
        lVar17 = DAT_14c758608 + 1;
        if (lVar12 == 0) {
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 2;
          lVar17 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar17;
        *(longlong *)(local_58 + 0x10) = lVar12;
        *(undefined ***)local_58 = &PTR_FUN_14b9b5a40;
        *(longlong *)(local_58 + 0x18) = 0;
        iVar16 = 0;
        if (plVar1 != (longlong *)0x0) {
          uVar2 = *(uint *)(param_1 + -0x24);
          *(uint *)(local_58 + 0x18) = uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar17 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar17 = 0;
          }
          iVar16 = *(int *)(lVar17 + 0x10);
          if (*(int *)(lVar17 + 0x10) == 0) {
            LOCK();
            iVar16 = DAT_14c964868 + 1;
            UNLOCK();
            iVar7 = DAT_14c964868 + 1;
            bVar18 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar16;
            if (bVar18) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar7);
            }
            LOCK();
            iVar16 = *(int *)(lVar17 + 0x10);
            bVar18 = iVar16 == 0;
            if (bVar18) {
              *(int *)(lVar17 + 0x10) = iVar7;
              iVar16 = 0;
            }
            UNLOCK();
            if (bVar18) {
              iVar16 = iVar7;
            }
          }
        }
        *(int *)(pcVar4 + 0x1c) = iVar16;
        *(code **)(pcVar4 + 0x20) = FUN_1412919d4;
        *(undefined4 *)(pcVar4 + 0x28) = 0;
        if (((int)uStack_50 == 0) || (local_58 == (code *)0x0)) {
LAB_140fe0f14:
          if ((int)uStack_50 == 0) {
            puVar14 = (undefined8 *)0x0;
            goto LAB_140fdf81d;
          }
          if (local_58 != (code *)0x0) {
            puVar14 = (undefined8 *)0x0;
            (*(code *)**(undefined8 **)local_58)(local_58,0);
            FUN_1446efa72(&local_58,0,0,0x10);
            goto LAB_140fdf80a;
          }
          puVar14 = (undefined8 *)0x0;
        }
        else {
          cVar6 = (**(code **)(*(longlong *)local_58 + 0x30))();
          if (cVar6 == '\0') {
            goto LAB_140fe0f14;
          }
          plVar8 = plVar3 + 0xe3f;
          if (*(int *)((longlong)plVar3 + 0x720c) < 1) {
            iVar16 = (int)plVar3[0xe40];
            iVar7 = (int)plVar3[0xe41] + -1;
            *(int *)(plVar3 + 0xe41) = iVar7;
            if (iVar7 <= iVar16) {
              iVar7 = iVar16;
              if (0 < iVar16) {
                iVar15 = 0;
                do {
                  if (((*(int *)(*plVar8 + 8 + (longlong)iVar15 * 0x10) == 0) ||
                      (plVar9 = *(longlong **)(*plVar8 + (longlong)iVar15 * 0x10),
                      plVar9 == (longlong *)0x0)) ||
                     (cVar6 = (**(code **)(*plVar9 + 0x28))(), cVar6 != '\0')) {
                    FUN_14005b288(plVar8,iVar15);
                    FUN_14005b248(plVar8);
                  }
                  else {
                    iVar15 = iVar15 + 1;
                  }
                  iVar7 = (int)plVar3[0xe40];
                } while (iVar15 < iVar7);
              }
              iVar15 = 2;
              if (2 < iVar7 * 2) {
                iVar15 = iVar7 * 2;
              }
              *(int *)(plVar3 + 0xe41) = iVar15;
              if ((iVar15 < iVar16) && (*(int *)((longlong)plVar3 + 0x7204) != iVar7)) {
                FUN_14045812c();
              }
            }
          }
          puVar14 = (undefined8 *)0x0;
          if (((int)uStack_50 != 0) && (local_58 != (code *)0x0)) {
            (**(code **)(*(longlong *)local_58 + 0x38))(local_58,&local_78);
            puVar14 = local_78;
          }
          iVar16 = (int)plVar3[0xe40];
          *(uint *)(plVar3 + 0xe40) = iVar16 + 1U;
          if (*(uint *)((longlong)plVar3 + 0x7204) < iVar16 + 1U) {
            FUN_1447a71f6(plVar8,iVar16);
          }
          lVar17 = *plVar8;
          lVar12 = (longlong)iVar16 * 0x10;
          *(undefined8 *)(lVar17 + lVar12) = 0;
          *(undefined4 *)(lVar17 + 8 + lVar12) = 0;
          *(code **)(lVar17 + lVar12) = local_58;
          local_58 = (code *)0x0;
          *(int *)(lVar17 + 8 + lVar12) = (int)uStack_50;
LAB_140fdf80a:
          uStack_50 = uStack_50 & 0xffffffff00000000;
LAB_140fdf81d:
          if (local_58 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        *(undefined8 **)(param_1 + 0x30) = puVar14;
      }
      if (*(longlong *)(param_1 + 0x48) == 0) {
        local_58 = FUN_1459dafa6;
        uStack_50 = uStack_50 & 0xffffffff00000000;
        FUN_140fe165c(plVar3 + 0xe59,&local_78,plVar1);
        *(undefined8 **)(param_1 + 0x48) = local_78;
      }
      if (*(longlong *)(param_1 + 0x40) == 0) {
        local_58 = (code *)0x0;
        uStack_50 = uStack_50 & 0xffffffff00000000;
        FUN_1446efa72(&local_58,0,3,0x10);
        pcVar4 = local_58;
        uStack_50 = CONCAT44(uStack_50._4_4_,3);
        *(undefined ***)local_58 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 1;
        lVar17 = DAT_14c758608 + 1;
        if (lVar12 == 0) {
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 2;
          lVar17 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar17;
        *(longlong *)(local_58 + 0x10) = lVar12;
        *(undefined ***)local_58 = &PTR_FUN_14b9b5ab0;
        *(longlong *)(local_58 + 0x18) = 0;
        iVar16 = 0;
        if (plVar1 != (longlong *)0x0) {
          uVar2 = *(uint *)(param_1 + -0x24);
          *(uint *)(local_58 + 0x18) = uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar17 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar17 = 0;
          }
          iVar16 = *(int *)(lVar17 + 0x10);
          if (*(int *)(lVar17 + 0x10) == 0) {
            LOCK();
            iVar16 = DAT_14c964868 + 1;
            UNLOCK();
            iVar7 = DAT_14c964868 + 1;
            bVar18 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar16;
            if (bVar18) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar7);
            }
            LOCK();
            iVar16 = *(int *)(lVar17 + 0x10);
            bVar18 = iVar16 == 0;
            if (bVar18) {
              *(int *)(lVar17 + 0x10) = iVar7;
              iVar16 = 0;
            }
            UNLOCK();
            if (bVar18) {
              iVar16 = iVar7;
            }
          }
        }
        *(int *)(pcVar4 + 0x1c) = iVar16;
        *(code **)(pcVar4 + 0x20) = FUN_141161586;
        *(undefined4 *)(pcVar4 + 0x28) = 0;
        FUN_1448b6402(plVar3 + 0x9d0,&local_78,&local_58);
        if ((int)uStack_50 == 0) {
LAB_140fdf970:
          if (local_58 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_58 != (code *)0x0) {
          (*(code *)**(undefined8 **)local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          uStack_50 = uStack_50 & 0xffffffff00000000;
          goto LAB_140fdf970;
        }
        *(undefined8 **)(param_1 + 0x40) = local_78;
      }
      if (*(longlong *)(param_1 + 0x38) == 0) {
        if (DAT_14cb223d8 == 0) {
          local_90 = &local_58;
          local_58 = FUN_1449e2820;
          local_80 = FUN_14081d0ea;
          local_88 = FUN_1427b09ee;
          local_98 = &LAB_147f29feb;
          local_a0 = FUN_1464384fe;
          local_a8 = L"Engine";
          local_b0 = 0;
          local_b8 = 0x10004001;
          local_c0 = 8;
          local_c8 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
        }
        plVar8 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,DAT_14cb223d8);
        if (plVar8 != (longlong *)0x0) {
          if (DAT_14cb223d8 == 0) {
            local_90 = &local_58;
            local_58 = FUN_1449e2820;
            local_80 = FUN_14081d0ea;
            local_88 = FUN_1427b09ee;
            local_98 = &LAB_147f29feb;
            local_a0 = FUN_1464384fe;
            local_a8 = L"Engine";
            local_b0 = 0;
            local_b8 = 0x10004001;
            local_c0 = 8;
            local_c8 = 0x28;
            FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
          }
          plVar9 = (longlong *)FUN_144718840(plVar8,DAT_14cb223d8);
          if (((plVar8 != plVar9) && (plVar9 != (longlong *)0x0)) &&
             (plVar8 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9), plVar8 != (longlong *)0x0)
             ) {
            local_58 = (code *)0x0;
            uStack_50 = uStack_50 & 0xffffffff00000000;
            FUN_1446efa72(&local_58,0,3,0x10);
            pcVar4 = local_58;
            uStack_50 = CONCAT44(uStack_50._4_4_,3);
            *(undefined ***)local_58 = &PTR_LAB_14ac8da20;
            LOCK();
            UNLOCK();
            lVar12 = DAT_14c758608 + 1;
            lVar17 = DAT_14c758608 + 1;
            if (lVar12 == 0) {
              LOCK();
              UNLOCK();
              lVar12 = DAT_14c758608 + 2;
              lVar17 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar17;
            *(longlong *)(local_58 + 0x10) = lVar12;
            *(undefined ***)local_58 = &PTR_FUN_14b9b5b20;
            *(longlong *)(local_58 + 0x18) = 0;
            iVar16 = 0;
            if (plVar1 != (longlong *)0x0) {
              uVar2 = *(uint *)(param_1 + -0x24);
              *(uint *)(local_58 + 0x18) = uVar2;
              if ((int)uVar2 < DAT_14c9647dc) {
                lVar17 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
              }
              else {
                lVar17 = 0;
              }
              iVar16 = *(int *)(lVar17 + 0x10);
              if (*(int *)(lVar17 + 0x10) == 0) {
                LOCK();
                iVar16 = DAT_14c964868 + 1;
                UNLOCK();
                iVar7 = DAT_14c964868 + 1;
                bVar18 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar16;
                if (bVar18) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar7);
                }
                LOCK();
                iVar16 = *(int *)(lVar17 + 0x10);
                bVar18 = iVar16 == 0;
                if (bVar18) {
                  *(int *)(lVar17 + 0x10) = iVar7;
                  iVar16 = 0;
                }
                UNLOCK();
                if (bVar18) {
                  iVar16 = iVar7;
                }
              }
            }
            *(int *)(pcVar4 + 0x1c) = iVar16;
            *(code **)(pcVar4 + 0x20) = FUN_1415a3716;
            *(undefined4 *)(pcVar4 + 0x28) = 0;
            if (((int)uStack_50 == 0) || (local_58 == (code *)0x0)) {
LAB_140fe1073:
              if ((int)uStack_50 == 0) {
                puVar14 = (undefined8 *)0x0;
                goto LAB_140fdfbab;
              }
              if (local_58 != (code *)0x0) {
                puVar14 = (undefined8 *)0x0;
                (*(code *)**(undefined8 **)local_58)(local_58,0);
                FUN_1446efa72(&local_58,0,0,0x10);
                goto LAB_140fdfb98;
              }
              puVar14 = (undefined8 *)0x0;
            }
            else {
              cVar6 = (**(code **)(*(longlong *)local_58 + 0x30))();
              if (cVar6 == '\0') {
                goto LAB_140fe1073;
              }
              if (*(int *)((longlong)plVar8 + 0x14) < 1) {
                iVar16 = (int)plVar8[1];
                iVar7 = (int)plVar8[2] + -1;
                *(int *)(plVar8 + 2) = iVar7;
                if (iVar7 <= iVar16) {
                  iVar7 = iVar16;
                  if (0 < iVar16) {
                    iVar15 = 0;
                    do {
                      if (((*(int *)(*plVar8 + 8 + (longlong)iVar15 * 0x10) == 0) ||
                          (plVar9 = *(longlong **)(*plVar8 + (longlong)iVar15 * 0x10),
                          plVar9 == (longlong *)0x0)) ||
                         (cVar6 = (**(code **)(*plVar9 + 0x28))(), cVar6 != '\0')) {
                        FUN_14005b288(plVar8,iVar15);
                        FUN_14005b248(plVar8);
                      }
                      else {
                        iVar15 = iVar15 + 1;
                      }
                      iVar7 = (int)plVar8[1];
                    } while (iVar15 < iVar7);
                  }
                  iVar15 = 2;
                  if (2 < iVar7 * 2) {
                    iVar15 = iVar7 * 2;
                  }
                  *(int *)(plVar8 + 2) = iVar15;
                  if ((iVar15 < iVar16) && (*(int *)((longlong)plVar8 + 0xc) != iVar7)) {
                    FUN_14045812c();
                  }
                }
              }
              puVar14 = (undefined8 *)0x0;
              if (((int)uStack_50 != 0) && (local_58 != (code *)0x0)) {
                (**(code **)(*(longlong *)local_58 + 0x38))(local_58,&local_78);
                puVar14 = local_78;
              }
              iVar16 = (int)plVar8[1];
              *(uint *)(plVar8 + 1) = iVar16 + 1U;
              if (*(uint *)((longlong)plVar8 + 0xc) < iVar16 + 1U) {
                FUN_1447a71f6(plVar8,iVar16);
              }
              lVar17 = *plVar8;
              lVar12 = (longlong)iVar16 * 0x10;
              *(undefined8 *)(lVar17 + lVar12) = 0;
              *(undefined4 *)(lVar17 + 8 + lVar12) = 0;
              *(code **)(lVar17 + lVar12) = local_58;
              local_58 = (code *)0x0;
              *(int *)(lVar17 + 8 + lVar12) = (int)uStack_50;
LAB_140fdfb98:
              uStack_50 = uStack_50 & 0xffffffff00000000;
LAB_140fdfbab:
              if (local_58 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            *(undefined8 **)(param_1 + 0x38) = puVar14;
          }
        }
      }
      if (*(char *)(param_1 + 0x1c) == '\0') {
        FUN_140fe154e(&local_60);
        local_58 = (code *)0x0;
        uStack_50 = 0;
        uVar5 = local_60;
        if (plVar1 != (longlong *)0x0) {
          uVar2 = *(uint *)(param_1 + -0x24);
          local_58 = (code *)(ulonglong)uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar17 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar17 = 0;
          }
          iVar16 = *(int *)(lVar17 + 0x10);
          if (*(int *)(lVar17 + 0x10) == 0) {
            LOCK();
            iVar16 = DAT_14c964868 + 1;
            UNLOCK();
            iVar7 = DAT_14c964868 + 1;
            bVar18 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar16;
            if (bVar18) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar7);
            }
            LOCK();
            iVar16 = *(int *)(lVar17 + 0x10);
            bVar18 = iVar16 == 0;
            if (bVar18) {
              *(int *)(lVar17 + 0x10) = iVar7;
              iVar16 = 0;
            }
            UNLOCK();
            uVar2 = (uint)local_58;
            if (bVar18) {
              iVar16 = iVar7;
            }
          }
          local_58._0_4_ = uVar2;
          local_58 = (code *)CONCAT44(iVar16,(uint)local_58);
          uStack_50 = local_60;
          uVar5 = uStack_50;
          if ((((((local_60 != 0) && (iVar16 != 0)) && (-1 < (int)(uint)local_58)) &&
               (((int)(uint)local_58 < DAT_14c9647dc &&
                (plVar8 = (longlong *)
                          ((ulonglong)(((uint)local_58 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_58 >> 0x10) * 8)),
                plVar8 != (longlong *)0x0)))) && ((int)plVar8[2] == iVar16)) &&
             (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))) {
            FUN_1400796d0(*(undefined8 *)(*plVar8 + 0x10),local_60,1);
            uVar5 = uStack_50;
          }
        }
        uStack_50 = uVar5;
        FUN_14053c012(plVar3 + 0xe47,&local_58);
        FUN_140fe148e(&local_68);
        local_58 = (code *)0x0;
        uStack_50 = 0;
        uVar5 = local_68;
        if (plVar1 != (longlong *)0x0) {
          uVar2 = *(uint *)(param_1 + -0x24);
          local_58 = (code *)(ulonglong)uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar17 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar17 = 0;
          }
          iVar16 = *(int *)(lVar17 + 0x10);
          if (*(int *)(lVar17 + 0x10) == 0) {
            LOCK();
            iVar16 = DAT_14c964868 + 1;
            UNLOCK();
            iVar7 = DAT_14c964868 + 1;
            bVar18 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar16;
            if (bVar18) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar7);
            }
            LOCK();
            iVar16 = *(int *)(lVar17 + 0x10);
            bVar18 = iVar16 == 0;
            if (bVar18) {
              *(int *)(lVar17 + 0x10) = iVar7;
              iVar16 = 0;
            }
            UNLOCK();
            uVar2 = (uint)local_58;
            if (bVar18) {
              iVar16 = iVar7;
            }
          }
          local_58._0_4_ = uVar2;
          local_58 = (code *)CONCAT44(iVar16,(uint)local_58);
          uStack_50 = local_68;
          uVar5 = uStack_50;
          if ((((local_68 != 0) && (iVar16 != 0)) && (-1 < (int)(uint)local_58)) &&
             ((((int)(uint)local_58 < DAT_14c9647dc &&
               (plVar8 = (longlong *)
                         ((ulonglong)(((uint)local_58 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_58 >> 0x10) * 8)),
               plVar8 != (longlong *)0x0)) &&
              (((int)plVar8[2] == iVar16 &&
               (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))))))) {
            FUN_1400796d0(*(undefined8 *)(*plVar8 + 0x10),local_68,1);
            uVar5 = uStack_50;
          }
        }
        uStack_50 = uVar5;
        FUN_14053c012(plVar3 + 0xe4c,&local_58);
        *(undefined1 *)(param_1 + 0x1c) = 1;
      }
      if (*(longlong *)(param_1 + 0x58) == 0) {
        local_58 = (code *)0x0;
        uStack_50 = uStack_50 & 0xffffffff00000000;
        FUN_1446efa72(&local_58,0,3,0x10);
        pcVar4 = local_58;
        uStack_50 = CONCAT44(uStack_50._4_4_,3);
        *(undefined ***)local_58 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 1;
        lVar17 = DAT_14c758608 + 1;
        if (lVar12 == 0) {
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 2;
          lVar17 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar17;
        *(longlong *)(local_58 + 0x10) = lVar12;
        *(undefined ***)local_58 = &PTR_FUN_14b9b5bc0;
        *(longlong *)(local_58 + 0x18) = 0;
        iVar16 = 0;
        if (plVar1 != (longlong *)0x0) {
          uVar2 = *(uint *)(param_1 + -0x24);
          *(uint *)(local_58 + 0x18) = uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar17 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar17 = 0;
          }
          iVar16 = *(int *)(lVar17 + 0x10);
          if (*(int *)(lVar17 + 0x10) == 0) {
            LOCK();
            iVar16 = DAT_14c964868 + 1;
            UNLOCK();
            iVar7 = DAT_14c964868 + 1;
            bVar18 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar16;
            if (bVar18) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar7);
            }
            LOCK();
            iVar16 = *(int *)(lVar17 + 0x10);
            bVar18 = iVar16 == 0;
            if (bVar18) {
              *(int *)(lVar17 + 0x10) = iVar7;
              iVar16 = 0;
            }
            UNLOCK();
            if (bVar18) {
              iVar16 = iVar7;
            }
          }
        }
        *(int *)(pcVar4 + 0x1c) = iVar16;
        *(code **)(pcVar4 + 0x20) = FUN_14121166a;
        *(undefined4 *)(pcVar4 + 0x28) = 0;
        FUN_1448b6402(plVar3 + 0x7fd,&local_78,&local_58);
        if ((int)uStack_50 == 0) {
LAB_140fdfe9d:
          if (local_58 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_58 != (code *)0x0) {
          (*(code *)**(undefined8 **)local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          uStack_50 = uStack_50 & 0xffffffff00000000;
          goto LAB_140fdfe9d;
        }
        *(undefined8 **)(param_1 + 0x58) = local_78;
      }
      if (*(longlong *)(param_1 + 0x60) == 0) {
        local_58 = (code *)0x0;
        uStack_50 = uStack_50 & 0xffffffff00000000;
        FUN_1446efa72(&local_58,0,3,0x10);
        pcVar4 = local_58;
        uStack_50 = CONCAT44(uStack_50._4_4_,3);
        *(undefined ***)local_58 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 1;
        lVar17 = DAT_14c758608 + 1;
        if (lVar12 == 0) {
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 2;
          lVar17 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar17;
        *(longlong *)(local_58 + 0x10) = lVar12;
        *(undefined ***)local_58 = &PTR_FUN_14b9b5bc0;
        *(longlong *)(local_58 + 0x18) = 0;
        iVar16 = 0;
        if (plVar1 != (longlong *)0x0) {
          uVar2 = *(uint *)(param_1 + -0x24);
          *(uint *)(local_58 + 0x18) = uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar17 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar17 = 0;
          }
          iVar16 = *(int *)(lVar17 + 0x10);
          if (*(int *)(lVar17 + 0x10) == 0) {
            LOCK();
            iVar16 = DAT_14c964868 + 1;
            UNLOCK();
            iVar7 = DAT_14c964868 + 1;
            bVar18 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar16;
            if (bVar18) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar7);
            }
            LOCK();
            iVar16 = *(int *)(lVar17 + 0x10);
            bVar18 = iVar16 == 0;
            if (bVar18) {
              *(int *)(lVar17 + 0x10) = iVar7;
              iVar16 = 0;
            }
            UNLOCK();
            if (bVar18) {
              iVar16 = iVar7;
            }
          }
        }
        *(int *)(pcVar4 + 0x1c) = iVar16;
        *(code **)(pcVar4 + 0x20) = FUN_145840fdc;
        *(undefined4 *)(pcVar4 + 0x28) = 0;
        FUN_1448b6402(plVar3 + 0x800,&local_78,&local_58);
        if ((int)uStack_50 == 0) {
LAB_140fdffbe:
          if (local_58 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_58 != (code *)0x0) {
          (*(code *)**(undefined8 **)local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          uStack_50 = uStack_50 & 0xffffffff00000000;
          goto LAB_140fdffbe;
        }
        *(undefined8 **)(param_1 + 0x60) = local_78;
      }
      if (*(longlong *)(param_1 + 0x68) == 0) {
        local_58 = (code *)0x0;
        uStack_50 = uStack_50 & 0xffffffff00000000;
        FUN_1446efa72(&local_58,0,3,0x10);
        pcVar4 = local_58;
        uStack_50 = CONCAT44(uStack_50._4_4_,3);
        *(undefined ***)local_58 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 1;
        lVar17 = DAT_14c758608 + 1;
        if (lVar12 == 0) {
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 2;
          lVar17 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar17;
        *(longlong *)(local_58 + 0x10) = lVar12;
        *(undefined ***)local_58 = &PTR_FUN_14b9b5bc0;
        *(longlong *)(local_58 + 0x18) = 0;
        iVar16 = 0;
        if (plVar1 != (longlong *)0x0) {
          uVar2 = *(uint *)(param_1 + -0x24);
          *(uint *)(local_58 + 0x18) = uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar17 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar17 = 0;
          }
          iVar16 = *(int *)(lVar17 + 0x10);
          if (*(int *)(lVar17 + 0x10) == 0) {
            LOCK();
            iVar16 = DAT_14c964868 + 1;
            UNLOCK();
            iVar7 = DAT_14c964868 + 1;
            bVar18 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar16;
            if (bVar18) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar7);
            }
            LOCK();
            iVar16 = *(int *)(lVar17 + 0x10);
            bVar18 = iVar16 == 0;
            if (bVar18) {
              *(int *)(lVar17 + 0x10) = iVar7;
              iVar16 = 0;
            }
            UNLOCK();
            if (bVar18) {
              iVar16 = iVar7;
            }
          }
        }
        *(int *)(pcVar4 + 0x1c) = iVar16;
        *(undefined1 **)(pcVar4 + 0x20) = &LAB_148e4f7f6;
        *(undefined4 *)(pcVar4 + 0x28) = 0;
        FUN_1448b6402(plVar3 + 0xffa,&local_78,&local_58);
        if ((int)uStack_50 == 0) {
LAB_140fe00df:
          if (local_58 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_58 != (code *)0x0) {
          (*(code *)**(undefined8 **)local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          uStack_50 = uStack_50 & 0xffffffff00000000;
          goto LAB_140fe00df;
        }
        *(undefined8 **)(param_1 + 0x68) = local_78;
      }
      if (*(longlong *)(param_1 + 0x88) == 0) {
        local_58 = (code *)0x0;
        uStack_50 = uStack_50 & 0xffffffff00000000;
        FUN_1446efa72(&local_58,0,3,0x10);
        pcVar4 = local_58;
        uStack_50 = CONCAT44(uStack_50._4_4_,3);
        *(undefined ***)local_58 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 1;
        lVar17 = DAT_14c758608 + 1;
        if (lVar12 == 0) {
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 2;
          lVar17 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar17;
        *(longlong *)(local_58 + 0x10) = lVar12;
        *(undefined ***)local_58 = &PTR_FUN_14b9b5bc0;
        *(longlong *)(local_58 + 0x18) = 0;
        iVar16 = 0;
        if (plVar1 != (longlong *)0x0) {
          uVar2 = *(uint *)(param_1 + -0x24);
          *(uint *)(local_58 + 0x18) = uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar17 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar17 = 0;
          }
          iVar16 = *(int *)(lVar17 + 0x10);
          if (*(int *)(lVar17 + 0x10) == 0) {
            LOCK();
            iVar16 = DAT_14c964868 + 1;
            UNLOCK();
            iVar7 = DAT_14c964868 + 1;
            bVar18 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar16;
            if (bVar18) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar7);
            }
            LOCK();
            iVar16 = *(int *)(lVar17 + 0x10);
            bVar18 = iVar16 == 0;
            if (bVar18) {
              *(int *)(lVar17 + 0x10) = iVar7;
              iVar16 = 0;
            }
            UNLOCK();
            if (bVar18) {
              iVar16 = iVar7;
            }
          }
        }
        *(int *)(pcVar4 + 0x1c) = iVar16;
        *(code **)(pcVar4 + 0x20) = FUN_141211324;
        *(undefined4 *)(pcVar4 + 0x28) = 0;
        FUN_1448b6402(plVar3 + 0x7fa,&local_78,&local_58);
        if ((int)uStack_50 == 0) {
LAB_140fe0203:
          if (local_58 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_58 != (code *)0x0) {
          (*(code *)**(undefined8 **)local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          uStack_50 = uStack_50 & 0xffffffff00000000;
          goto LAB_140fe0203;
        }
        *(undefined8 **)(param_1 + 0x88) = local_78;
      }
      lVar17 = FUN_140fe12e2(plVar1,plVar3);
      if (lVar17 != 0) {
        local_78 = (undefined8 *)0x0;
        local_70 = 0;
        FUN_1446efa72(&local_78,0,3,0x10);
        puVar14 = local_78;
        local_70 = 3;
        *local_78 = &PTR_LAB_14b4f5500;
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 1;
        lVar12 = DAT_14c758608 + 1;
        if (lVar13 == 0) {
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 2;
          lVar12 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar12;
        local_78[2] = lVar13;
        *local_78 = &PTR_FUN_14b9b5c30;
        local_78[3] = 0;
        FUN_14485c47a(local_78 + 3,plVar1);
        puVar14[4] = plVar1;
        uVar10 = FUN_1447210f0(lVar17);
        uVar11 = FUN_14001cc68(0xd8,0x10);
        local_58 = (code *)local_78;
        local_78 = (undefined8 *)0x0;
        uStack_50 = CONCAT44(uStack_50._4_4_,local_70);
        local_70 = 0;
        FUN_14127c25a(uVar11,uVar10);
        lVar12 = *(longlong *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x20) = uVar11;
        if (lVar12 != 0) {
          FUN_14127b218(lVar12);
          FUN_1400020a8(lVar12);
        }
        FUN_1449db362(&local_78);
        local_58 = (code *)&LAB_14428788a;
        uStack_50 = uStack_50 & 0xffffffff00000000;
        FUN_1457de884(lVar17 + 0x750,&local_78,plVar1);
        *(undefined8 **)(param_1 + 0x98) = local_78;
      }
    }
  }
  lVar17 = (**(code **)(*plVar1 + 0x180))(plVar1);
  if ((lVar17 != 0) && (lVar17 = *(longlong *)(lVar17 + 0x1f0), lVar17 != 0)) {
    uVar10 = (**(code **)(*plVar1 + 0x180))(plVar1);
    lVar17 = FUN_140fe13cc(lVar17,uVar10);
    if ((lVar17 != 0) && (lVar12 = *(longlong *)(lVar17 + 0x430), lVar12 != 0)) {
      if (DAT_14cae9568 == 0) {
        local_90 = &local_58;
        local_58 = FUN_1417de738;
        local_80 = (code *)&LAB_145893408;
        local_88 = (code *)&LAB_1458cbbd2;
        local_98 = &LAB_147ba21f1;
        local_a0 = (code *)&LAB_1463e9233;
        local_a8 = L"Engine";
        local_b0 = 0;
        local_b8 = 0x1000000c;
        local_c0 = 8;
        local_c8 = 0x2b8;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        lVar12 = *(longlong *)(lVar17 + 0x430);
        if (lVar12 == 0) goto LAB_140fe03f2;
      }
      if ((((DAT_14cae9568 != 0) && (lVar17 = *(longlong *)(lVar12 + 0x10), lVar17 != 0)) &&
          (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar17 + 0x38))) &&
         ((*(longlong *)
            (*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
           DAT_14cae9568 + 0x30 && (lVar17 = FUN_1403ca91c(), lVar17 != 0)))) {
        local_58 = (code *)0x0;
        uStack_50 = uStack_50 & 0xffffffff00000000;
        FUN_1446efa72(&local_58,0,3,0x10);
        pcVar4 = local_58;
        uStack_50 = CONCAT44(uStack_50._4_4_,3);
        *(undefined ***)local_58 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 1;
        lVar12 = DAT_14c758608 + 1;
        if (lVar13 == 0) {
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 2;
          lVar12 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar12;
        *(longlong *)(local_58 + 0x10) = lVar13;
        *(undefined ***)local_58 = &PTR_FUN_14b9b5bc0;
        *(longlong *)(local_58 + 0x18) = 0;
        iVar16 = 0;
        if (plVar1 != (longlong *)0x0) {
          uVar2 = *(uint *)(param_1 + -0x24);
          *(uint *)(local_58 + 0x18) = uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar12 = 0;
          }
          iVar16 = *(int *)(lVar12 + 0x10);
          if (*(int *)(lVar12 + 0x10) == 0) {
            LOCK();
            iVar16 = DAT_14c964868 + 1;
            UNLOCK();
            iVar7 = DAT_14c964868 + 1;
            bVar18 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar16;
            if (bVar18) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar7);
            }
            LOCK();
            iVar16 = *(int *)(lVar12 + 0x10);
            bVar18 = iVar16 == 0;
            if (bVar18) {
              *(int *)(lVar12 + 0x10) = iVar7;
              iVar16 = 0;
            }
            UNLOCK();
            if (bVar18) {
              iVar16 = iVar7;
            }
          }
        }
        *(int *)(pcVar4 + 0x1c) = iVar16;
        *(code **)(pcVar4 + 0x20) = FUN_141211324;
        *(undefined4 *)(pcVar4 + 0x28) = 0;
        FUN_1448b6402(lVar17 + 0x60,&local_78,&local_58);
        if ((int)uStack_50 == 0) {
LAB_140fe03d5:
          if (local_58 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_58 != (code *)0x0) {
          (*(code *)**(undefined8 **)local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          uStack_50 = uStack_50 & 0xffffffff00000000;
          goto LAB_140fe03d5;
        }
        *(undefined8 **)(param_1 + 0x90) = local_78;
      }
    }
  }
LAB_140fe03f2:
  if (*(longlong *)(param_1 + 0x50) != 0) goto LAB_140fe05b8;
  local_58 = (code *)0x0;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  FUN_1446efa72(&local_58,0,3,0x10);
  pcVar4 = local_58;
  uStack_50 = CONCAT44(uStack_50._4_4_,3);
  *(undefined ***)local_58 = &PTR_LAB_14b982300;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar17 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar17 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar17;
  *(longlong *)(local_58 + 0x10) = lVar12;
  *(undefined ***)local_58 = &PTR_FUN_14b9b5ca0;
  *(longlong *)(local_58 + 0x18) = 0;
  iVar16 = 0;
  if (plVar1 != (longlong *)0x0) {
    uVar2 = *(uint *)(param_1 + -0x24);
    *(uint *)(local_58 + 0x18) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar16 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar16 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar16;
      if (bVar18) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar16 = *(int *)(lVar17 + 0x10);
      bVar18 = iVar16 == 0;
      if (bVar18) {
        *(int *)(lVar17 + 0x10) = iVar7;
        iVar16 = 0;
      }
      UNLOCK();
      if (bVar18) {
        iVar16 = iVar7;
      }
    }
  }
  *(int *)(pcVar4 + 0x1c) = iVar16;
  *(code **)(pcVar4 + 0x20) = FUN_14615b2e4;
  *(undefined4 *)(pcVar4 + 0x28) = 0;
  if (((int)uStack_50 == 0) || (local_58 == (code *)0x0)) {
LAB_140fe0fdd:
    if ((int)uStack_50 == 0) {
      puVar14 = (undefined8 *)0x0;
      goto LAB_140fe05ab;
    }
    if (local_58 != (code *)0x0) {
      puVar14 = (undefined8 *)0x0;
      (*(code *)**(undefined8 **)local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_140fe0598;
    }
    puVar14 = (undefined8 *)0x0;
  }
  else {
    cVar6 = (**(code **)(*(longlong *)local_58 + 0x30))();
    uVar2 = DAT_14cbd0b98;
    if (cVar6 == '\0') {
      goto LAB_140fe0fdd;
    }
    if ((DAT_14cbd0ba4 < 1) &&
       (DAT_14cbd0ba0 = DAT_14cbd0ba0 + -1, DAT_14cbd0ba0 <= (int)DAT_14cbd0b98)) {
      if (0 < (int)DAT_14cbd0b98) {
        iVar16 = 0;
        do {
          if (((*(int *)(DAT_14cbd0b90 + 8 + (longlong)iVar16 * 0x10) == 0) ||
              (plVar1 = *(longlong **)(DAT_14cbd0b90 + (longlong)iVar16 * 0x10),
              plVar1 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar1 + 0x28))(), cVar6 != '\0')) {
            FUN_14005b288(&DAT_14cbd0b90,iVar16);
            FUN_14005b248(&DAT_14cbd0b90);
          }
          else {
            iVar16 = iVar16 + 1;
          }
        } while (iVar16 < (int)DAT_14cbd0b98);
      }
      DAT_14cbd0ba0 = 2;
      if (2 < (int)(DAT_14cbd0b98 * 2)) {
        DAT_14cbd0ba0 = DAT_14cbd0b98 * 2;
      }
      if ((DAT_14cbd0ba0 < (int)uVar2) && (DAT_14cbd0b9c != DAT_14cbd0b98)) {
        FUN_14045812c();
      }
    }
    puVar14 = (undefined8 *)0x0;
    if (((int)uStack_50 != 0) && (local_58 != (code *)0x0)) {
      (**(code **)(*(longlong *)local_58 + 0x38))(local_58,&local_78);
      puVar14 = local_78;
    }
    uVar2 = DAT_14cbd0b98;
    lVar17 = (longlong)(int)DAT_14cbd0b98;
    DAT_14cbd0b98 = DAT_14cbd0b98 + 1;
    if (DAT_14cbd0b9c < DAT_14cbd0b98) {
      FUN_1447a71f6(&DAT_14cbd0b90,uVar2);
    }
    lVar12 = DAT_14cbd0b90;
    lVar17 = lVar17 * 0x10;
    *(undefined8 *)(DAT_14cbd0b90 + lVar17) = 0;
    *(undefined4 *)(lVar12 + 8 + lVar17) = 0;
    *(code **)(lVar12 + lVar17) = local_58;
    local_58 = (code *)0x0;
    *(int *)(lVar12 + 8 + lVar17) = (int)uStack_50;
LAB_140fe0598:
    uStack_50 = uStack_50 & 0xffffffff00000000;
LAB_140fe05ab:
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined8 **)(param_1 + 0x50) = puVar14;
LAB_140fe05b8:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fe12e2 FUN_140fe12e2 body=77 status=ok
// SIG undefined FUN_140fe12e2(void)

longlong FUN_140fe12e2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1401e6c9b(param_2);
  if (lVar1 == 0) {
    FUN_145841000(param_1);
    if (*(char *)(param_1 + 0x4d) == '\x01') {
      lVar1 = FUN_148d491fc(param_2);
      if (lVar1 != 0) {
        lVar1 = FUN_1401e6c9b(lVar1);
        return lVar1;
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 140fe13cc FUN_140fe13cc body=194 status=ok
// SIG undefined FUN_140fe13cc(void)

longlong * FUN_140fe13cc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360);
    }
    if (lVar4 != param_2) {
      iVar5 = 0;
      if (*(int *)(param_2 + 0x238) < 1) {
        return (longlong *)0x0;
      }
      lVar4 = 0;
      while ((plVar3 = (longlong *)FUN_14479d2ce(*(longlong *)(param_2 + 0x230) + lVar4),
             plVar3 == (longlong *)0x0 ||
             (cVar2 = (**(code **)(*plVar3 + 0x6c8))(plVar3), cVar2 == '\0'))) {
        lVar4 = lVar4 + 8;
        iVar5 = iVar5 + 1;
        if (*(int *)(param_2 + 0x238) <= iVar5) {
          return (longlong *)0x0;
        }
      }
      return plVar3;
    }
  }
  if ((longlong)*(int *)(param_1 + 0x40) == 0) {
    return (longlong *)0x0;
  }
  lVar4 = 0;
  while ((lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar4), lVar1 == 0 ||
         (plVar3 = *(longlong **)(lVar1 + 0x30), plVar3 == (longlong *)0x0))) {
    lVar4 = lVar4 + 8;
    if ((longlong)*(int *)(param_1 + 0x40) * 8 == lVar4) {
      return (longlong *)0x0;
    }
  }
  return plVar3;
}



// FUNCTION 140fe148e FUN_140fe148e body=190 status=ok
// SIG undefined FUN_140fe148e(void)

undefined8 * FUN_140fe148e(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd6d98) {
    FUN_144b3d300(&DAT_14cbd6d98);
    if (DAT_14cbd6d98 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"opped",6);
      builtin_wcsncpy(local_48 + 8,L"evivedSt",8);
      builtin_wcsncpy(local_48,L"OnBeingR",8);
      FUN_1446f470e(&DAT_14cbd6d90,local_48,1);
      _Init_thread_footer(&DAT_14cbd6d98);
    }
  }
  *param_1 = DAT_14cbd6d90;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe154e FUN_140fe154e body=190 status=ok
// SIG undefined FUN_140fe154e(void)

undefined8 * FUN_140fe154e(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd8058) {
    FUN_144b3d300(&DAT_14cbd8058);
    if (DAT_14cbd8058 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"arted",6);
      builtin_wcsncpy(local_48 + 8,L"evivedSt",8);
      builtin_wcsncpy(local_48,L"OnBeingR",8);
      FUN_1446f470e(&DAT_14cbd8050,local_48,1);
      _Init_thread_footer(&DAT_14cbd8058);
    }
  }
  *param_1 = DAT_14cbd8050;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe165c FUN_140fe165c body=772 status=ok
// SIG undefined FUN_140fe165c(void)

undefined8 * FUN_140fe165c(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = param_4[1];
  lVar2 = *param_4;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar3 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14b4edb80;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14b9b59d0;
  local_60[3] = 0;
  iVar10 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_60 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar10 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar10 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar3 + 0x1c) = iVar10;
  plVar3[4] = lVar2;
  *(int *)(plVar3 + 5) = (int)lVar9;
  *param_2 = 0;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_140fe1810;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_140fe17fa;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar10 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar8;
        if ((iVar8 < iVar10) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,&local_50);
      uVar6 = local_50;
    }
    *param_2 = uVar6;
    iVar10 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
      FUN_1447a71f6(param_1,iVar10);
    }
    lVar2 = *param_1;
    lVar9 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar2 + lVar9) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
    *(longlong **)(lVar2 + lVar9) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar9) = local_58;
LAB_140fe17fa:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140fe1810:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140fe19b0 FUN_140fe19b0 body=445 status=ok
// SIG undefined FUN_140fe19b0(void)

void FUN_140fe19b0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == (longlong *)0x0) goto LAB_140fe1a6d;
  if (*(char *)(param_1 + 0x304) == '\x01') {
    if (((((*(int *)(param_1 + 0x30c) != 0) && (uVar2 = *(uint *)(param_1 + 0x308), -1 < (int)uVar2)
          ) && ((int)uVar2 < DAT_14c9647dc)) &&
        ((lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar7 != 0 &&
         (*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x30c))))) &&
       ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) {
      lVar5 = FUN_14479d2ce();
      lVar7 = *(longlong *)(lVar5 + 0x708);
      if (lVar7 == 0) {
        uVar6 = FUN_1405b1a32();
        lVar7 = FUN_14477b664(uVar6);
        *(longlong *)(lVar5 + 0x708) = lVar7;
      }
      if (*(longlong *)(lVar5 + 0x710) != 0) {
LAB_140fe1aae:
        (**(code **)(*param_2 + 0x60))(param_2,0);
        goto LAB_140fe1a37;
      }
      if ((lVar7 != 0) && (*(longlong *)(lVar5 + 0x700) != 0)) {
        plVar3 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
          *(undefined8 *)(lVar5 + 0x710) = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar5 + 0x700));
          *(longlong *)(lVar5 + 0x710) = lVar7;
          if (lVar7 != 0) goto LAB_140fe1aae;
        }
      }
    }
    (**(code **)(*param_2 + 0x68))(param_2);
  }
LAB_140fe1a37:
  local_40 = param_2[1];
  plVar3 = (longlong *)param_2[2];
  if (plVar3 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    FUN_140fe1b6e(param_1 + 0x310);
  }
  else {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    local_38 = plVar3;
    FUN_140fe1b6e(param_1 + 0x310);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_140fe1a6d:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fe1b6e FUN_140fe1b6e body=743 status=ok
// SIG undefined FUN_140fe1b6e(void)

undefined8 FUN_140fe1b6e(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  int *piVar13;
  ulonglong uVar14;
  longlong *plVar15;
  bool bVar16;
  bool bVar17;
  
  uVar7 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar10 = *param_2;
    plVar6 = (longlong *)param_2[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xcU) = *(int *)((longlong)plVar6 + 0xcU) + 1;
      UNLOCK();
      LOCK();
      piVar13 = (int *)((longlong)plVar6 + 0xc);
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (*piVar13 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    uVar4 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    uVar10 = (longlong)(int)(uVar4 >> 0x10 ^ uVar4) & (longlong)(int)param_1[9] - 1U;
    iVar5 = *(int *)((longlong)plVar6 + uVar10 * 4);
    if (iVar5 != -1) {
      puVar11 = (ulonglong *)((longlong)plVar6 + uVar10 * 4);
      do {
        puVar8 = (ulonglong *)((longlong)iVar5 * 0x18 + *param_1);
        uVar10 = *param_2;
        plVar6 = (longlong *)param_2[1];
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar6 + 0xcU) = *(int *)((longlong)plVar6 + 0xcU) + 1;
          UNLOCK();
        }
        uVar14 = *puVar8;
        plVar3 = (longlong *)puVar8[1];
        if (plVar3 == (longlong *)0x0) {
LAB_140fe1d68:
          plVar15 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)((longlong)plVar3 + 0xcU) = *(int *)((longlong)plVar3 + 0xcU) + 1;
          UNLOCK();
          iVar5 = (int)plVar3[1];
          do {
            if (iVar5 == 0) goto LAB_140fe1d68;
            LOCK();
            iVar9 = (int)plVar3[1];
            bVar16 = iVar5 == iVar9;
            if (bVar16) {
              *(int *)(plVar3 + 1) = iVar5 + 1;
              iVar9 = iVar5;
            }
            iVar5 = iVar9;
            UNLOCK();
            plVar15 = plVar3;
          } while (!bVar16);
        }
        bVar16 = true;
        if (plVar6 != (longlong *)0x0) {
          iVar5 = (int)plVar6[1];
          do {
            if (iVar5 == 0) goto LAB_140fe1c78;
            LOCK();
            iVar9 = (int)plVar6[1];
            bVar17 = iVar5 == iVar9;
            if (bVar17) {
              *(int *)(plVar6 + 1) = iVar5 + 1;
              iVar9 = iVar5;
            }
            iVar5 = iVar9;
            UNLOCK();
          } while (!bVar17);
          LOCK();
          plVar1 = plVar6 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar13 = (int *)((longlong)plVar6 + 0xc);
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (*piVar13 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
            bVar16 = false;
          }
          else {
            bVar16 = false;
          }
        }
LAB_140fe1c78:
        if (plVar15 == (longlong *)0x0) {
          uVar14 = 0;
        }
        else {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar13 = (int *)((longlong)plVar15 + 0xc);
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (*piVar13 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar13 = (int *)((longlong)plVar3 + 0xc);
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (*piVar13 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar13 = (int *)((longlong)plVar6 + 0xc);
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (*piVar13 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
        if (bVar16) {
          uVar10 = 0;
        }
        if (uVar14 == uVar10) {
          iVar5 = (int)*puVar11;
          plVar6 = param_1 + 7;
          if ((longlong *)param_1[8] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[8];
          }
          lVar2 = *param_1 + (longlong)iVar5 * 0x18;
          lVar12 = (longlong)*(int *)(lVar2 + 0x14);
          iVar9 = *(int *)((longlong)plVar6 + lVar12 * 4);
          if (iVar9 == iVar5) {
            piVar13 = (int *)((longlong)plVar6 + lVar12 * 4);
          }
          else {
            do {
              piVar13 = (int *)(*param_1 + (longlong)iVar9 * 0x18 + 0x10);
              iVar9 = *piVar13;
            } while (iVar9 != iVar5);
          }
          *piVar13 = *(int *)(lVar2 + 0x10);
          plVar6 = *(longlong **)(*param_1 + 8 + (longlong)iVar5 * 0x18);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            piVar13 = (int *)((longlong)plVar6 + 0xc);
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (*piVar13 == 0) {
              (**(code **)(*plVar6 + 0x10))();
            }
          }
          FUN_140fe1e56(param_1,iVar5);
          uVar7 = 1;
          goto LAB_140fe1d29;
        }
        iVar5 = (int)puVar8[2];
        puVar11 = puVar8 + 2;
      } while (iVar5 != -1);
      uVar7 = 0;
    }
  }
LAB_140fe1d29:
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar13 = (int *)((longlong)plVar6 + 0xc);
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (*piVar13 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  return uVar7;
}



// FUNCTION 140fe1e56 FUN_140fe1e56 body=112 status=ok
// SIG undefined FUN_140fe1e56(void)

void FUN_140fe1e56(longlong *param_1,int param_2)

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
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 140fe1ec6 FUN_140fe1ec6 body=141 status=ok
// SIG undefined FUN_140fe1ec6(void)

void FUN_140fe1ec6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  FUN_140fe1f54();
  plVar1 = (longlong *)(param_2 + 8);
  if (*(int *)(param_2 + 0x10) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) {
      return;
    }
    if (*(code **)*puVar3 == FUN_145715146) {
      *puVar3 = &PTR_FUN_14b478da0;
      plVar4 = (longlong *)puVar3[4];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
    }
    else {
      (**(code **)*puVar3)(puVar3,0);
    }
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140fe1f54 FUN_140fe1f54 body=1529 status=ok
// SIG undefined FUN_140fe1f54(void)

void FUN_140fe1f54(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  longlong lVar15;
  char *pcVar16;
  int iVar17;
  undefined8 uVar18;
  char *pcVar19;
  bool bVar20;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_e7 [7];
  undefined8 local_e0 [2];
  char local_d0 [8];
  undefined8 local_c8 [2];
  longlong local_b8;
  longlong *plStack_b0;
  undefined **local_a8;
  longlong *local_a0;
  longlong *plStack_98;
  undefined2 local_90;
  longlong local_88;
  undefined8 uStack_80;
  char local_78;
  char local_77 [31];
  char local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar11 = (longlong *)(**(code **)(*param_1 + 0x180))();
  iVar10 = (**(code **)*plVar11)(plVar11);
  if (0 < iVar10) {
    pcVar19 = local_58;
    iVar17 = 0;
    do {
      (**(code **)(*plVar11 + 0x10))(plVar11,&local_a8,iVar17);
      plVar2 = local_a0;
      bVar4 = *(byte *)((longlong)local_a8 + 0x39);
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_a0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      if ((bVar4 & 8) != 0) {
        if ((char)param_1[0x41] == '\x01') {
          local_77[0x17] = DAT_14c96b1e1;
          pcVar16 = local_77 + 0x17;
          cVar8 = DAT_14c96b1e1;
        }
        else {
          pcVar16 = &local_78;
          local_78 = DAT_14c96b238;
          pcVar19 = local_77 + 7;
          cVar8 = DAT_14c96b238;
        }
        cVar5 = *(char *)((longlong)param_1 + 0x39);
        pcVar16[1] = '\x01';
        pcVar19[0] = '\0';
        pcVar19[1] = '\0';
        pcVar19[2] = '\0';
        pcVar19[3] = '\0';
        pcVar19[4] = '\0';
        pcVar19[5] = '\0';
        pcVar19[6] = '\0';
        pcVar19[7] = '\0';
        pcVar19[8] = '\0';
        pcVar19[9] = '\0';
        pcVar19[10] = '\0';
        pcVar19[0xb] = '\0';
        pcVar19[0xc] = '\0';
        pcVar19[0xd] = '\0';
        pcVar19[0xe] = '\0';
        pcVar19[0xf] = '\0';
        FUN_140fe254e(param_1);
        if (((((int)param_1[0x44] == 0) ||
             (uVar6 = *(uint *)((longlong)param_1 + 0x21c), (int)uVar6 < 0)) ||
            (DAT_14c9647dc <= (int)uVar6)) ||
           (((lVar15 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar15 == 0 ||
             (*(int *)(lVar15 + 0x10) != (int)param_1[0x44])) ||
            (((*(uint *)(lVar15 + 8) & 0x10200000) != 0 ||
             (cVar9 = FUN_140fe2738(), cVar9 != '\x01' || cVar5 == cVar8)))))) goto LAB_140fe220b;
        local_88 = 0;
        uStack_80 = 0;
        if ((int)param_1[0x44] == 0) {
LAB_140fe248b:
          lVar15 = 0;
        }
        else {
          uVar6 = *(uint *)((longlong)param_1 + 0x21c);
          lVar15 = 0;
          if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
            plVar11 = (longlong *)
                      ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
            if ((plVar11 == (longlong *)0x0) ||
               (((int)plVar11[2] != (int)param_1[0x44] ||
                ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_140fe248b;
            lVar15 = *plVar11;
          }
        }
        if (((*(longlong *)(lVar15 + 0x78) != 0) &&
            (lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x78) + 0x80), lVar15 != 0)) &&
           (lVar15 = *(longlong *)(lVar15 + 0x20), lVar15 != 0)) {
          FUN_140fe2980(lVar15,&local_88);
          FUN_1457dea4c(&local_88);
        }
        local_a8 = &PTR_FUN_14a55eca0;
        local_a0 = (longlong *)0x0;
        plStack_98 = (longlong *)0x0;
        local_90 = 0;
        plVar11 = (longlong *)param_1[2];
        if (plVar11 == (longlong *)0x0) goto LAB_140fe24f7;
        iVar10 = (int)plVar11[1];
        goto LAB_140fe22ff;
      }
      iVar17 = iVar17 + 1;
    } while (iVar10 != iVar17);
  }
  if ((char)param_1[0x41] == '\x01') {
    puVar13 = local_c8;
    local_d0[0] = DAT_14c96b1e1;
    puVar14 = local_e7 + 0x17;
  }
  else {
    puVar13 = (undefined8 *)(local_e7 + 7);
    local_e8 = DAT_14c96b23a;
    puVar14 = &local_e8;
  }
  puVar14[1] = 1;
  *puVar13 = 0;
  puVar13[1] = 0;
  FUN_140fe254e(param_1);
  if ((((((int)param_1[0x44] == 0) || (uVar6 = *(uint *)((longlong)param_1 + 0x21c), (int)uVar6 < 0)
        ) || (DAT_14c9647dc <= (int)uVar6)) ||
      ((lVar15 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar15 == 0 ||
       (*(int *)(lVar15 + 0x10) != (int)param_1[0x44])))) ||
     (((*(uint *)(lVar15 + 8) & 0x10200000) != 0 ||
      ((*(char *)((longlong)param_1 + 0x209) != '\x01' || (cVar8 = FUN_140fe2738(), cVar8 == '\0')))
      ))) goto LAB_140fe220b;
  local_a8 = &PTR_FUN_14a55ecc0;
  local_a0 = (longlong *)((ulonglong)local_a0 & 0xffffffffffffff00);
  iVar10 = (int)param_1[0x44];
  if (iVar10 == 0) {
    uVar18 = 0;
LAB_140fe2484:
    plVar11 = (longlong *)0x0;
  }
  else {
    uVar6 = *(uint *)((longlong)param_1 + 0x21c);
    uVar18 = 0;
    if ((int)uVar6 < 0) goto LAB_140fe2484;
    plVar11 = (longlong *)0x0;
    if ((int)uVar6 < DAT_14c9647dc) {
      puVar13 = (undefined8 *)
                ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if (((puVar13 == (undefined8 *)0x0) || (*(int *)(puVar13 + 2) != iVar10)) ||
         ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)) {
        uVar18 = 0;
      }
      else {
        uVar18 = *puVar13;
      }
      puVar13 = (undefined8 *)
                ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if (((puVar13 == (undefined8 *)0x0) || (*(int *)(puVar13 + 2) != iVar10)) ||
         ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)) goto LAB_140fe2484;
      plVar11 = (longlong *)*puVar13;
    }
  }
  uVar12 = (**(code **)(*plVar11 + 0x180))();
  plVar11 = (longlong *)FUN_140334a94(uVar18,uVar12);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0xcb0))(plVar11,&local_a8);
  }
  goto LAB_140fe220b;
LAB_140fe24f7:
  local_b8 = 0;
  plStack_b0 = (longlong *)0x0;
  FUN_1457de9cc();
  goto LAB_140fe2339;
  while( true ) {
    LOCK();
    iVar17 = (int)plVar11[1];
    bVar20 = iVar10 == iVar17;
    if (bVar20) {
      *(int *)(plVar11 + 1) = iVar10 + 1;
      iVar17 = iVar10;
    }
    iVar10 = iVar17;
    UNLOCK();
    if (bVar20) break;
LAB_140fe22ff:
    if (iVar10 == 0) goto LAB_140fe24f7;
  }
  local_b8 = param_1[1];
  LOCK();
  *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
  UNLOCK();
  plStack_b0 = plVar11;
  FUN_1457de9cc();
  LOCK();
  plVar2 = plVar11 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)*plVar11)();
    LOCK();
    piVar3 = (int *)((longlong)plVar11 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
LAB_140fe2339:
  iVar10 = (int)param_1[0x44];
  if (iVar10 == 0) {
    uVar18 = 0;
LAB_140fe2494:
    plVar11 = (longlong *)0x0;
  }
  else {
    uVar6 = *(uint *)((longlong)param_1 + 0x21c);
    uVar18 = 0;
    if ((int)uVar6 < 0) goto LAB_140fe2494;
    plVar11 = (longlong *)0x0;
    if ((int)uVar6 < DAT_14c9647dc) {
      puVar13 = (undefined8 *)
                ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if (((puVar13 == (undefined8 *)0x0) || (*(int *)(puVar13 + 2) != iVar10)) ||
         ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)) {
        uVar18 = 0;
      }
      else {
        uVar18 = *puVar13;
      }
      puVar13 = (undefined8 *)
                ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if (((puVar13 == (undefined8 *)0x0) || (*(int *)(puVar13 + 2) != iVar10)) ||
         ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)) goto LAB_140fe2494;
      plVar11 = (longlong *)*puVar13;
    }
  }
  (**(code **)(*plVar11 + 0x180))();
  plVar11 = (longlong *)FUN_140334a94(uVar18);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0xcb0))(plVar11);
  }
  plVar11 = plStack_98;
  if ((longlong)(int)uStack_80 != 0) {
    lVar15 = 0;
    do {
      if ((*(longlong *)(local_88 + lVar15) != 0) &&
         (lVar7 = *(longlong *)(*(longlong *)(local_88 + lVar15) + 0x508), lVar7 != 0)) {
        *(undefined1 *)(lVar7 + 0x498) = 0;
      }
      lVar15 = lVar15 + 8;
    } while ((longlong)(int)uStack_80 * 8 != lVar15);
  }
  *(undefined1 *)((longlong)param_1 + 0x209) = 1;
  local_a8 = &PTR_FUN_14a55eca0;
  if (plStack_98 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_98 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_98)(plStack_98);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
LAB_140fe220b:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fe254e FUN_140fe254e body=173 status=ok
// SIG undefined FUN_140fe254e(void)

void FUN_140fe254e(undefined8 param_1,undefined2 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 local_38 [4];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = *param_2;
  plVar1 = (longlong *)(param_2 + 4);
  local_30 = 0;
  local_28 = 0;
  FUN_140fe25fc(&local_30,plVar1);
  FUN_14020e6ca(param_1,local_38);
  if (*(int *)(param_2 + 8) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140fe25ab;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 8) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140fe25ab:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe25fc FUN_140fe25fc body=314 status=ok
// SIG undefined FUN_140fe25fc(void)

void FUN_140fe25fc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140fe2689;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_140fe2662:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140fe2662;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140fe2689;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140fe2689:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fe2738 FUN_140fe2738 body=582 status=ok
// SIG undefined FUN_140fe2738(void)

ulonglong FUN_140fe2738(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 unaff_RBX;
  ulonglong uVar9;
  undefined8 uVar11;
  undefined1 auStack_78 [40];
  int local_50 [2];
  longlong local_48;
  ulonglong local_40;
  undefined7 uVar10;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar10 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar9 = CONCAT71(uVar10,1);
  if (((((*(int *)(param_1 + 0x220) == 0) || (uVar1 = *(uint *)(param_1 + 0x21c), (int)uVar1 < 0))
       || (DAT_14c9647dc <= (int)uVar1)) ||
      ((plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(param_1 + 0x220))))) ||
     ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) goto LAB_140fe2918;
  if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
    lVar5 = *plVar6;
  }
  else {
    lVar5 = 0;
  }
  if ((*(longlong *)(lVar5 + 0x78) == 0) ||
     (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x78) + 0x80), lVar5 == 0)) goto LAB_140fe2918;
  lVar3 = FUN_144a77418();
  if ((lVar3 == 0) || (DAT_14c950c29 == 0)) {
    if (lVar3 != 0) goto LAB_140fe280f;
LAB_140fe2953:
    lVar8 = 0;
  }
  else {
    FUN_1456cec3c(lVar3);
LAB_140fe280f:
    lVar4 = FUN_144a77418();
    if ((lVar4 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) goto LAB_140fe2953;
    lVar8 = 0;
    if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30) {
      lVar8 = lVar3;
    }
  }
  lVar5 = FUN_1448a6f9c(lVar5 + 0x100,lVar8);
  if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 0x30), lVar5 == 0)) goto LAB_140fe2918;
  if (*(int *)(param_1 + 0x220) == 0) {
LAB_140fe2940:
    uVar11 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x21c);
    uVar11 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar7 == (undefined8 *)0x0) ||
         ((*(int *)(puVar7 + 2) != *(int *)(param_1 + 0x220) ||
          ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_140fe2940;
      uVar11 = *puVar7;
    }
  }
  FUN_1404963c2(lVar5,local_50,uVar11);
  iVar2 = *(int *)(lVar5 + 0x40);
  if ((longlong)iVar2 != 0) {
    lVar5 = *(longlong *)(lVar5 + 0x38);
    lVar3 = 0;
    do {
      lVar4 = *(longlong *)(lVar5 + lVar3);
      if (*(int *)(lVar4 + 0xb0) == local_50[0]) {
        if ((local_48 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(local_48);
        }
        if (*(longlong *)(lVar4 + 0xb8) == local_48) {
          if (lVar4 != 0) {
            uVar9 = CONCAT71(uVar10,*(undefined1 *)(lVar4 + 0x171)) ^ 1;
          }
          break;
        }
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar2 * 8 != lVar3);
  }
LAB_140fe2918:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}


