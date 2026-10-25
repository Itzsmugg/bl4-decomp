// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14622dfd0 FUN_14622dfd0 body=105 status=ok
// SIG undefined FUN_14622dfd0(void)

ulonglong FUN_14622dfd0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x18) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if ((param_1 == 0) || (0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 14622e03a FUN_14622e03a body=26 status=ok
// SIG undefined FUN_14622e03a(void)

void FUN_14622e03a(undefined8 param_1)

{
  switchD_143c3d4dc::caseD_1f();
  FUN_14622e054(param_1);
  return;
}



// FUNCTION 14622e054 FUN_14622e054 body=1164 status=ok
// SIG undefined FUN_14622e054(void)

void FUN_14622e054(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong **pplVar4;
  longlong *plVar5;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined1 *local_140;
  uint local_138;
  int iStack_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128 [2];
  undefined1 local_118 [16];
  undefined8 local_108;
  int local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  longlong local_d8 [2];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  int local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined1 *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  longlong *local_60;
  longlong *local_58;
  undefined2 local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_b8 = 0;
  local_b0 = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_108 = 0;
  local_100 = 0;
  local_128[0] = 0;
  local_128[1] = 0;
  local_fc = 0xffffffff00000080;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  plVar3 = (longlong *)(param_1 + 0x80);
  pplVar4 = &local_88;
  for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pplVar4 = (longlong *)*plVar3;
    plVar3 = plVar3 + 1;
    pplVar4 = pplVar4 + 1;
  }
  plVar3 = local_d8;
  plVar5 = (longlong *)(param_1 + 0x80);
  for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar5 = *plVar3;
    plVar3 = plVar3 + 1;
    plVar5 = plVar5 + 1;
  }
  pplVar4 = &local_88;
  plVar3 = local_d8;
  for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar3 = (longlong)*pplVar4;
    pplVar4 = pplVar4 + 1;
    plVar3 = plVar3 + 1;
  }
  plVar3 = (longlong *)(param_1 + 0xd0);
  pplVar4 = &local_88;
  for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pplVar4 = (longlong *)*plVar3;
    plVar3 = plVar3 + 1;
    pplVar4 = pplVar4 + 1;
  }
  plVar3 = local_128;
  plVar5 = (longlong *)(param_1 + 0xd0);
  for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar5 = *plVar3;
    plVar3 = plVar3 + 1;
    plVar5 = plVar5 + 1;
  }
  pplVar4 = &local_88;
  plVar3 = local_128;
  for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar3 = (longlong)*pplVar4;
    pplVar4 = pplVar4 + 1;
    plVar3 = plVar3 + 1;
  }
  local_140 = local_c8;
  local_148 = 0x100000000;
  local_138 = 0xffffffff;
  iStack_134 = 0;
  local_130 = 0;
  if (local_b0 != 0) {
    FUN_1449c0562(&local_148);
  }
  local_70 = local_138;
  iStack_6c = iStack_134;
  local_68 = local_130;
  local_64 = local_12c;
  local_80 = local_148;
  local_78 = local_140;
  local_50 = 0;
  local_88 = local_d8;
  local_60 = local_d8;
  local_58 = local_d8;
  if (iStack_134 < *(int *)(local_140 + 0x18)) {
    do {
      lVar2 = *(longlong *)(*local_88 + 0x10 + (longlong)iStack_6c * 0x20);
      if (lVar2 != 0) {
        FUN_1436555a0(lVar2);
        FUN_1400020a8(lVar2);
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(local_78 + 0x18));
    if (((local_50 & 1) != 0) && (local_50._1_1_ == '\x01')) {
      FUN_147baa2da(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34));
    }
  }
  local_140 = local_118;
  local_148 = 0x100000000;
  local_138 = 0xffffffff;
  iStack_134 = 0;
  local_130 = 0;
  if (local_100 != 0) {
    FUN_1449c0562(&local_148);
  }
  local_70 = local_138;
  iStack_6c = iStack_134;
  local_68 = local_130;
  local_64 = local_12c;
  local_80 = local_148;
  local_78 = local_140;
  local_50 = 0;
  local_88 = local_128;
  local_60 = local_128;
  local_58 = local_128;
  if (iStack_134 < *(int *)(local_140 + 0x18)) {
    do {
      puVar1 = *(undefined8 **)(*local_88 + 0x10 + (longlong)iStack_6c * 0x20);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(local_78 + 0x18));
    if (((local_50 & 1) != 0) && (local_50._1_1_ == '\x01')) {
      FUN_147baa8ce(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34));
    }
  }
  if (*(int *)(param_1 + 0xd8) == *(int *)(param_1 + 0x104)) {
    lVar2 = *(longlong *)(param_1 + 0x230);
    if (lVar2 != 0) {
      FUN_1478ae8d4(*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x60));
      if (*(longlong *)(lVar2 + 0x58) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar2);
    }
    *(undefined8 *)(param_1 + 0x230) = 0;
  }
  FUN_145caae96(*(undefined8 *)(param_1 + 0x218),*(undefined4 *)(param_1 + 0x220));
  *(undefined4 *)(param_1 + 0x220) = 0;
  if (*(int *)(param_1 + 0x224) != 0) {
    FUN_147bac9d2(param_1 + 0x218,0);
  }
  local_e0 = 0;
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  FUN_145caaebe(local_128);
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_145caaef6(local_d8);
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622e4e2 FUN_14622e4e2 body=158 status=ok
// SIG undefined FUN_14622e4e2(void)

bool FUN_14622e4e2(longlong param_1,undefined8 param_2)

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



// FUNCTION 14622e582 FUN_14622e582 body=438 status=ok
// SIG undefined FUN_14622e582(void)

void FUN_14622e582(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  byte local_58 [40];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != (longlong *)0x0) {
    FUN_1410e2b8a(local_58,param_2 + 0x22);
    uVar3 = FUN_140059518(param_1 + 0x44);
    lVar4 = FUN_1404960a8(uVar3);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      lVar1 = param_2[0xe];
      *puVar5 = &PTR_FUN_14b9b3360;
      puVar5[1] = lVar1;
      *(byte *)(puVar5 + 2) = local_58[0] >> 1 & 1;
      *(byte *)((longlong)puVar5 + 0x11) = local_58[0] & 1;
      FUN_14039144e(lVar4,puVar5);
    }
    if (param_2[0xe] == DAT_14cbd7ba8) {
      lVar4 = FUN_1410e4a74();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_2);
        }
        uVar3 = FUN_140059518(param_1 + 0x44);
        lVar4 = FUN_1404960a8(uVar3);
        if (lVar4 != 0) {
          puVar5 = (undefined8 *)FUN_14001cc68(0x28,0x10);
          lVar1 = param_2[0xe];
          *puVar5 = &PTR_FUN_14b9b33a0;
          puVar5[1] = lVar1;
          puVar5[3] = 0;
          puVar5[4] = 0;
          uVar2 = (**(code **)(*param_2 + 800))(param_2);
          *(undefined4 *)(puVar5 + 2) = uVar2;
          uVar2 = (**(code **)(*param_2 + 0x328))(param_2);
          *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
          (**(code **)(*param_2 + 0x330))(param_2,&local_68);
          FUN_140a6ab98(puVar5 + 3,&local_68);
          FUN_1401b9920(local_68,local_60);
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          FUN_14039144e(lVar4,puVar5);
        }
      }
    }
    FUN_1410e2b42(local_58);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622e73a FUN_14622e73a body=52 status=ok
// SIG undefined FUN_14622e73a(void)

void FUN_14622e73a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14577bfea();
  FUN_141671ffe(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14622e76e FUN_14622e76e body=310 status=ok
// SIG undefined FUN_14622e76e(void)

void FUN_14622e76e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
  local_60 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_58 = (undefined4)uStack_20;
  uStack_54 = uStack_20._4_4_;
  uStack_50 = (undefined4)local_18;
  uStack_4c = local_18._4_4_;
  FUN_14622e8a6(&local_60,&local_48);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622e8a6 FUN_14622e8a6 body=124 status=ok
// SIG undefined FUN_14622e8a6(void)

void FUN_14622e8a6(undefined8 param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14622e934(param_1,&local_28);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(local_28 + 0x200) = *param_2;
  *(undefined4 *)(local_28 + 0x204) = uVar2;
  *(undefined4 *)(local_28 + 0x208) = uVar3;
  *(undefined4 *)(local_28 + 0x20c) = uVar4;
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



// FUNCTION 14622e934 FUN_14622e934 body=144 status=ok
// SIG undefined FUN_14622e934(void)

undefined8 * FUN_14622e934(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140df5234(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622e9c8 FUN_14622e9c8 body=38 status=ok
// SIG undefined FUN_14622e9c8(void)

undefined8 FUN_14622e9c8(undefined8 param_1,int param_2)

{
  FUN_141672220();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14622e9ee FUN_14622e9ee body=38 status=ok
// SIG undefined FUN_14622e9ee(void)

undefined8 FUN_14622e9ee(undefined8 param_1,int param_2)

{
  FUN_1416726ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14622ea14 FUN_14622ea14 body=268 status=ok
// SIG undefined FUN_14622ea14(void)

void FUN_14622ea14(longlong *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar4 = (**(code **)(*param_1 + 0x180))();
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(lVar4 + 0x1f0) == 0) {
    return;
  }
  lVar4 = FUN_14583d3ae();
  if (lVar4 == 0) {
    return;
  }
  lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  uVar6 = 1;
  if (((lVar5 == 0) || (iVar2 = FUN_14490d72a(lVar5), iVar2 != 3)) ||
     (lVar5 = FUN_14586ea88(param_1), lVar5 != param_2)) goto LAB_14622ea7d;
  if (param_2 == 0) {
LAB_14622eb11:
    param_2 = 0;
  }
  else {
    lVar5 = FUN_144a7b4ca();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
         ) != lVar5 + 0x30)) goto LAB_14622eb11;
  }
  uVar3 = FUN_141672b38(param_2);
  FUN_141672b84(lVar4,0,param_3,uVar3);
  uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar5 = FUN_1411db1ae(uVar6);
  if ((lVar5 == 0) || (cVar1 = FUN_1414875dc(lVar5), cVar1 == '\0')) {
    return;
  }
  uVar6 = 3;
LAB_14622ea7d:
  FUN_141672b84(lVar4,uVar6,param_3,0);
  return;
}



// FUNCTION 14622eb28 FUN_14622eb28 body=352 status=ok
// SIG undefined FUN_14622eb28(void)

void FUN_14622eb28(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0xf00000d0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar3 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14622ec8a(puVar3,local_40,local_44);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622ec8a FUN_14622ec8a body=250 status=ok
// SIG undefined FUN_14622ec8a(void)

undefined4 FUN_14622ec8a(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [40];
  undefined4 local_88;
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0[0] = 0;
  local_88 = 0;
  FUN_1456bb102(local_b0);
  local_80[0] = 0;
  local_58 = 0;
  uVar3 = FUN_144873cc0(param_1);
  FUN_144750e81(local_50,uVar3,local_b0);
  uVar2 = FUN_14005fbd2(local_50,param_3);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar4 = local_50;
    if (0x18 < local_38) {
      pppuVar4 = (undefined8 ***)local_50[0];
    }
    (*pcVar1)(pppuVar4);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_144a5ac3a(local_80);
  FUN_144a5ac3a(local_b0);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622ed86 FUN_14622ed86 body=118 status=ok
// SIG undefined FUN_14622ed86(void)

void FUN_14622ed86(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140ca2e50();
  FUN_14622edfe(local_20,param_1);
  cVar1 = FUN_144729dda(param_1 + 200);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 200);
    FUN_14622eeee(lVar2 + 0x750,local_20,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622edfe FUN_14622edfe body=239 status=ok
// SIG undefined FUN_14622edfe(void)

undefined8 FUN_14622edfe(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14b968eb0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b967cd0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_148d111cc;
  FUN_14586eb8c(&DAT_14cb717f8,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622eeee FUN_14622eeee body=244 status=ok
// SIG undefined FUN_14622eeee(void)

undefined8 FUN_14622eeee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b967d40;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_148d1133e;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622efe4 FUN_14622efe4 body=582 status=ok
// SIG undefined FUN_14622efe4(void)

void FUN_14622efe4(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1412923e0();
  *(undefined1 *)(param_1 + 0x1d8) = 0;
  lVar2 = FUN_141292688();
  if (DAT_14cb9ad28 != 0) {
    if ((longlong)*(int *)(lVar2 + 200) != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar2 + 0xc0) + lVar3) == DAT_14cb9ad28) goto LAB_14622f06d;
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(lVar2 + 200) * 8 != lVar3);
    }
    if ((longlong)*(int *)(lVar2 + 0xd8) != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar2 + 0xd0) + lVar3) == DAT_14cb9ad28) goto LAB_14622f06d;
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(lVar2 + 0xd8) * 8 != lVar3);
    }
  }
LAB_14622f092:
  lVar2 = FUN_141292688();
  if (DAT_14cb9ad38 != 0) {
    if ((longlong)*(int *)(lVar2 + 200) != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar2 + 0xc0) + lVar3) == DAT_14cb9ad38) goto LAB_14622f21b;
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(lVar2 + 200) * 8 != lVar3);
    }
    if ((longlong)*(int *)(lVar2 + 0xd8) != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar2 + 0xd0) + lVar3) == DAT_14cb9ad38) goto LAB_14622f21b;
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(lVar2 + 0xd8) * 8 != lVar3);
    }
  }
LAB_14622f0fd:
  lVar2 = FUN_141292688();
  if (DAT_14cb9acf0 != 0) {
    if ((longlong)*(int *)(lVar2 + 200) != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar2 + 0xc0) + lVar3) == DAT_14cb9acf0) goto LAB_14622f166;
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(lVar2 + 200) * 8 != lVar3);
    }
    if ((longlong)*(int *)(lVar2 + 0xd8) != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar2 + 0xd0) + lVar3) == DAT_14cb9acf0) goto LAB_14622f166;
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(lVar2 + 0xd8) * 8 != lVar3);
    }
  }
LAB_14622f192:
  lVar2 = FUN_141292688();
  if (DAT_14cbe5ee8 != 0) {
    if ((longlong)*(int *)(lVar2 + 200) != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar2 + 0xc0) + lVar3) == DAT_14cbe5ee8) goto LAB_14622f227;
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(lVar2 + 200) * 8 != lVar3);
    }
    if ((longlong)*(int *)(lVar2 + 0xd8) != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar2 + 0xd0) + lVar3) == DAT_14cbe5ee8) goto LAB_14622f227;
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(lVar2 + 0xd8) * 8 != lVar3);
    }
  }
  uVar1 = 0;
LAB_14622f1f7:
  *(undefined1 *)(param_1 + 0x300) = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14622f06d:
  FUN_14020fad6(param_1 + 0x2b8,L"unset");
  FUN_14020fad6(param_1 + 0x2a8,L"unset");
  goto LAB_14622f092;
LAB_14622f21b:
  *(undefined1 *)(param_1 + 0x2c8) = 0;
  goto LAB_14622f0fd;
LAB_14622f166:
  FUN_1446f470e(local_20,&DAT_14aa815f0,1);
  FUN_141673a98(param_1,DAT_14cbe5708);
  goto LAB_14622f192;
LAB_14622f227:
  uVar1 = 1;
  goto LAB_14622f1f7;
}



// FUNCTION 14622f22c FUN_14622f22c body=39 status=ok
// SIG undefined FUN_14622f22c(void)

void FUN_14622f22c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x500,0x10);
  FUN_141673d0a(uVar1,param_1);
  return;
}



// FUNCTION 14622f254 FUN_14622f254 body=356 status=ok
// SIG undefined FUN_14622f254(void)

void FUN_14622f254(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_a8 [36];
  uint local_84;
  longlong local_80;
  undefined1 local_78 [40];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = param_1 + 200;
  lVar5 = *(longlong *)(param_1 + 0x230);
  if (*(longlong *)(param_1 + 0x230) == 0) {
    lVar5 = lVar1;
  }
  local_84 = param_3;
  if ((longlong)*(int *)(param_1 + 0x238) != 0) {
    local_80 = (longlong)*(int *)(param_1 + 0x238) * 0x48;
    lVar8 = 0;
    do {
      local_78[0] = 0;
      local_50 = 0;
      FUN_1456bb102(local_78,param_2);
      cVar4 = FUN_140308e2a(lVar8 + lVar5,local_78);
      FUN_144a5ac3a(local_78);
      if (cVar4 != '\0') {
        uVar7 = (lVar8 >> 3) * -0x71c71c71c71c71c7;
        uVar6 = (uint)uVar7;
        if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(param_1 + 0x238))) {
          lVar5 = *(longlong *)(param_1 + 0x230);
          if (*(longlong *)(param_1 + 0x230) == 0) {
            lVar5 = lVar1;
          }
          lVar8 = (ulonglong)(uVar6 & 0x7fffffff) * 0x48;
          puVar2 = (uint *)(lVar5 + 0x40 + lVar8);
          *puVar2 = *puVar2 & ~local_84;
          lVar5 = *(longlong *)(param_1 + 0x230);
          if (*(longlong *)(param_1 + 0x230) == 0) {
            lVar5 = lVar1;
          }
          if (*(int *)(lVar5 + 0x40 + lVar8) == 0) {
            plVar3 = *(longlong **)(lVar5 + lVar8 + 0x30);
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x20))();
              FUN_14053d96a(lVar5 + lVar8 + 0x30);
            }
            FUN_14576c1f8(lVar1,uVar7 & 0xffffffff);
            FUN_14576c1b4(lVar1);
          }
        }
        break;
      }
      lVar8 = lVar8 + 0x48;
    } while (local_80 != lVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14622f3ba FUN_14622f3ba body=4915 status=ok
// SIG undefined FUN_14622f3ba(void)

void FUN_14622f3ba(void)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  size_t sVar5;
  longlong lVar6;
  undefined1 auStack_1b8 [40];
  undefined8 local_190;
  undefined4 local_188;
  void *local_180;
  int local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168;
  void *local_160;
  int local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_148;
  void *local_140;
  int local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  void *local_120;
  int local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_108;
  void *local_100;
  int local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  void *local_e0;
  int local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  ulonglong local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_146230852();
  lVar2 = FUN_145a91e90();
  lVar6 = *(longlong *)(lVar2 + 0x110);
  if (lVar6 == 0) {
    FUN_140aa6c08(lVar2);
    lVar6 = *(longlong *)(lVar2 + 0x110);
  }
  FUN_140120ed2(&local_80,&DAT_14cb41b58);
  *(undefined4 *)(lVar6 + 0xd8) = local_78;
  *(undefined8 *)(lVar6 + 0xd0) = local_80;
  if ((undefined8 *)(lVar6 + 0xd0) != &local_80) {
    if (*(longlong *)(lVar6 + 0xe0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar6 + 0xe0) = local_70;
    local_70 = 0;
    *(undefined4 *)(lVar6 + 0xe8) = (undefined4)local_68;
    *(undefined4 *)(lVar6 + 0xec) = local_68._4_4_;
    local_68 = 0;
  }
  *(undefined4 *)(lVar6 + 0x100) = local_50;
  *(undefined4 *)(lVar6 + 0xf0) = local_60;
  *(undefined4 *)(lVar6 + 0xf4) = uStack_5c;
  *(undefined4 *)(lVar6 + 0xf8) = uStack_58;
  *(undefined4 *)(lVar6 + 0xfc) = uStack_54;
  *(undefined1 *)(lVar6 + 0x104) = local_4c;
  *(undefined1 *)(lVar6 + 0x105) = local_4b;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  FUN_140120ed2(&local_80,&DAT_14cb41d98);
  *(undefined4 *)(lVar6 + 0x148) = local_78;
  *(undefined8 *)(lVar6 + 0x140) = local_80;
  if ((undefined8 *)(lVar6 + 0x140) != &local_80) {
    if (*(longlong *)(lVar6 + 0x150) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar6 + 0x150) = local_70;
    local_70 = 0;
    *(undefined4 *)(lVar6 + 0x158) = (undefined4)local_68;
    *(undefined4 *)(lVar6 + 0x15c) = local_68._4_4_;
    local_68 = 0;
  }
  *(undefined4 *)(lVar6 + 0x170) = local_50;
  *(undefined4 *)(lVar6 + 0x160) = local_60;
  *(undefined4 *)(lVar6 + 0x164) = uStack_5c;
  *(undefined4 *)(lVar6 + 0x168) = uStack_58;
  *(undefined4 *)(lVar6 + 0x16c) = uStack_54;
  *(undefined1 *)(lVar6 + 0x174) = local_4c;
  *(undefined1 *)(lVar6 + 0x175) = local_4b;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  FUN_140120ed2(&local_80,&DAT_14cb413f8);
  *(undefined4 *)(lVar6 + 0x228) = local_78;
  *(undefined8 *)(lVar6 + 0x220) = local_80;
  if ((undefined8 *)(lVar6 + 0x220) != &local_80) {
    if (*(longlong *)(lVar6 + 0x230) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar6 + 0x230) = local_70;
    local_70 = 0;
    *(undefined4 *)(lVar6 + 0x238) = (undefined4)local_68;
    *(undefined4 *)(lVar6 + 0x23c) = local_68._4_4_;
    local_68 = 0;
  }
  *(undefined4 *)(lVar6 + 0x250) = local_50;
  *(undefined4 *)(lVar6 + 0x240) = local_60;
  *(undefined4 *)(lVar6 + 0x244) = uStack_5c;
  *(undefined4 *)(lVar6 + 0x248) = uStack_58;
  *(undefined4 *)(lVar6 + 0x24c) = uStack_54;
  *(undefined1 *)(lVar6 + 0x254) = local_4c;
  *(undefined1 *)(lVar6 + 0x255) = local_4b;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  pvVar1 = DAT_14cbf7390;
  local_8c = 0;
  local_84 = 0;
  local_b0 = DAT_14cbf7380;
  local_a8 = DAT_14cbf7388;
  local_a0 = (void *)0x0;
  sVar5 = (size_t)DAT_14cbf7398;
  local_98 = DAT_14cbf7398;
  if (sVar5 == 0) {
    local_94 = 0;
  }
  else {
    FUN_1447a127e(&local_a0,DAT_14cbf7398,0);
    memcpy(local_a0,pvVar1,sVar5);
  }
  FUN_146230743(&local_80,&local_b0,&local_8c);
  *(undefined4 *)(lVar6 + 0x110) = local_78;
  *(undefined8 *)(lVar6 + 0x108) = local_80;
  if ((undefined8 *)(lVar6 + 0x108) != &local_80) {
    if (*(longlong *)(lVar6 + 0x118) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar6 + 0x118) = local_70;
    local_70 = 0;
    *(undefined4 *)(lVar6 + 0x120) = (undefined4)local_68;
    *(undefined4 *)(lVar6 + 0x124) = local_68._4_4_;
    local_68 = 0;
  }
  *(undefined4 *)(lVar6 + 0x138) = local_50;
  *(undefined4 *)(lVar6 + 0x128) = local_60;
  *(undefined4 *)(lVar6 + 300) = uStack_5c;
  *(undefined4 *)(lVar6 + 0x130) = uStack_58;
  *(undefined4 *)(lVar6 + 0x134) = uStack_54;
  *(undefined1 *)(lVar6 + 0x13c) = local_4c;
  *(undefined1 *)(lVar6 + 0x13d) = local_4b;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  pvVar1 = DAT_14cbf73b0;
  local_8c = local_8c & 0xffffffff00000000;
  local_d0 = DAT_14cbf73a0;
  local_c8 = DAT_14cbf73a8;
  local_c0 = (void *)0x0;
  sVar5 = (size_t)DAT_14cbf73b8;
  local_b8 = DAT_14cbf73b8;
  if (sVar5 == 0) {
    local_b4 = 0;
  }
  else {
    FUN_1447a127e(&local_c0,DAT_14cbf73b8,0);
    memcpy(local_c0,pvVar1,sVar5);
  }
  FUN_14623079d(&local_80,&local_d0,&local_8c);
  *(undefined4 *)(lVar6 + 0x180) = local_78;
  *(undefined8 *)(lVar6 + 0x178) = local_80;
  if ((undefined8 *)(lVar6 + 0x178) != &local_80) {
    if (*(longlong *)(lVar6 + 0x188) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar6 + 0x188) = local_70;
    local_70 = 0;
    *(undefined4 *)(lVar6 + 400) = (undefined4)local_68;
    *(undefined4 *)(lVar6 + 0x194) = local_68._4_4_;
    local_68 = 0;
  }
  *(undefined4 *)(lVar6 + 0x1a8) = local_50;
  *(undefined4 *)(lVar6 + 0x198) = local_60;
  *(undefined4 *)(lVar6 + 0x19c) = uStack_5c;
  *(undefined4 *)(lVar6 + 0x1a0) = uStack_58;
  *(undefined4 *)(lVar6 + 0x1a4) = uStack_54;
  *(undefined1 *)(lVar6 + 0x1ac) = local_4c;
  *(undefined1 *)(lVar6 + 0x1ad) = local_4b;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  pvVar1 = DAT_14cbf73d0;
  local_8c = local_8c & 0xffffffffffffff00;
  local_f0 = DAT_14cbf73c0;
  local_e8 = DAT_14cbf73c8;
  local_e0 = (void *)0x0;
  sVar5 = (size_t)DAT_14cbf73d8;
  local_d8 = DAT_14cbf73d8;
  if (sVar5 == 0) {
    local_d4 = 0;
  }
  else {
    FUN_1447a127e(&local_e0,DAT_14cbf73d8,0);
    memcpy(local_e0,pvVar1,sVar5);
  }
  FUN_1462306ee(&local_80,&local_f0,&local_8c);
  *(undefined4 *)(lVar6 + 0x1b8) = local_78;
  *(undefined8 *)(lVar6 + 0x1b0) = local_80;
  if ((undefined8 *)(lVar6 + 0x1b0) != &local_80) {
    if (*(longlong *)(lVar6 + 0x1c0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar6 + 0x1c0) = local_70;
    local_70 = 0;
    *(undefined4 *)(lVar6 + 0x1c8) = (undefined4)local_68;
    *(undefined4 *)(lVar6 + 0x1cc) = local_68._4_4_;
    local_68 = 0;
  }
  *(undefined4 *)(lVar6 + 0x1e0) = local_50;
  *(undefined4 *)(lVar6 + 0x1d0) = local_60;
  *(undefined4 *)(lVar6 + 0x1d4) = uStack_5c;
  *(undefined4 *)(lVar6 + 0x1d8) = uStack_58;
  *(undefined4 *)(lVar6 + 0x1dc) = uStack_54;
  *(undefined1 *)(lVar6 + 0x1e4) = local_4c;
  *(undefined1 *)(lVar6 + 0x1e5) = local_4b;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  pvVar1 = DAT_14cbf73f0;
  local_8c = local_8c & 0xffffffff00000000;
  local_110 = DAT_14cbf73e0;
  local_108 = DAT_14cbf73e8;
  local_100 = (void *)0x0;
  sVar5 = (size_t)DAT_14cbf73f8;
  local_f8 = DAT_14cbf73f8;
  if (sVar5 == 0) {
    local_f4 = 0;
  }
  else {
    FUN_1447a127e(&local_100,DAT_14cbf73f8,0);
    memcpy(local_100,pvVar1,sVar5);
  }
  FUN_1462307f7(&local_80,&local_110,&local_8c);
  *(undefined4 *)(lVar6 + 0x1f0) = local_78;
  *(undefined8 *)(lVar6 + 0x1e8) = local_80;
  if ((undefined8 *)(lVar6 + 0x1e8) != &local_80) {
    if (*(longlong *)(lVar6 + 0x1f8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar6 + 0x1f8) = local_70;
    local_70 = 0;
    *(undefined4 *)(lVar6 + 0x200) = (undefined4)local_68;
    *(undefined4 *)(lVar6 + 0x204) = local_68._4_4_;
    local_68 = 0;
  }
  *(undefined4 *)(lVar6 + 0x218) = local_50;
  *(undefined4 *)(lVar6 + 0x208) = local_60;
  *(undefined4 *)(lVar6 + 0x20c) = uStack_5c;
  *(undefined4 *)(lVar6 + 0x210) = uStack_58;
  *(undefined4 *)(lVar6 + 0x214) = uStack_54;
  *(undefined1 *)(lVar6 + 0x21c) = local_4c;
  *(undefined1 *)(lVar6 + 0x21d) = local_4b;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((longlong)DAT_14cbf7378 != 0) {
    lVar2 = (longlong)DAT_14cbf7378 << 3;
    lVar6 = DAT_14cbf7370;
    do {
      lVar3 = FUN_14479d2ce(lVar6);
      if (lVar3 != 0) {
        lVar3 = FUN_14479d2ce(lVar6);
        if ((*(longlong *)(lVar3 + 0xfc) == 0) ||
           (plVar4 = (longlong *)FUN_144741050(lVar3 + 0xf8), *plVar4 == 0)) {
          FUN_140120ed2(&local_80,&DAT_14cb41b58);
          lVar3 = FUN_14479d2ce(lVar6);
          *(undefined8 *)(lVar3 + 0xd0) = local_80;
          *(undefined4 *)(lVar3 + 0xd8) = local_78;
          if ((undefined8 *)(lVar3 + 0xd0) != &local_80) {
            if (*(longlong *)(lVar3 + 0xe0) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar3 + 0xe0) = local_70;
            local_70 = 0;
            *(undefined4 *)(lVar3 + 0xe8) = (undefined4)local_68;
            *(undefined4 *)(lVar3 + 0xec) = local_68._4_4_;
            local_68 = 0;
          }
          *(undefined4 *)(lVar3 + 0x100) = local_50;
          *(undefined4 *)(lVar3 + 0xf0) = local_60;
          *(undefined4 *)(lVar3 + 0xf4) = uStack_5c;
          *(undefined4 *)(lVar3 + 0xf8) = uStack_58;
          *(undefined4 *)(lVar3 + 0xfc) = uStack_54;
          *(undefined1 *)(lVar3 + 0x104) = local_4c;
          *(undefined1 *)(lVar3 + 0x105) = local_4b;
          if (local_70 != 0) {
            FUN_1400020a8();
          }
        }
        lVar3 = FUN_14479d2ce(lVar6);
        if ((*(longlong *)(lVar3 + 0x16c) == 0) ||
           (plVar4 = (longlong *)FUN_144741050(lVar3 + 0x168), *plVar4 == 0)) {
          FUN_140120ed2(&local_80,&DAT_14cb41d98);
          lVar3 = FUN_14479d2ce(lVar6);
          *(undefined8 *)(lVar3 + 0x140) = local_80;
          *(undefined4 *)(lVar3 + 0x148) = local_78;
          if ((undefined8 *)(lVar3 + 0x140) != &local_80) {
            if (*(longlong *)(lVar3 + 0x150) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar3 + 0x150) = local_70;
            local_70 = 0;
            *(undefined4 *)(lVar3 + 0x158) = (undefined4)local_68;
            *(undefined4 *)(lVar3 + 0x15c) = local_68._4_4_;
            local_68 = 0;
          }
          *(undefined4 *)(lVar3 + 0x170) = local_50;
          *(undefined4 *)(lVar3 + 0x160) = local_60;
          *(undefined4 *)(lVar3 + 0x164) = uStack_5c;
          *(undefined4 *)(lVar3 + 0x168) = uStack_58;
          *(undefined4 *)(lVar3 + 0x16c) = uStack_54;
          *(undefined1 *)(lVar3 + 0x174) = local_4c;
          *(undefined1 *)(lVar3 + 0x175) = local_4b;
          if (local_70 != 0) {
            FUN_1400020a8();
          }
        }
        lVar3 = FUN_14479d2ce(lVar6);
        if ((*(longlong *)(lVar3 + 0x24c) == 0) ||
           (plVar4 = (longlong *)FUN_144741050(lVar3 + 0x248), *plVar4 == 0)) {
          FUN_140120ed2(&local_80,&DAT_14cb413f8);
          lVar3 = FUN_14479d2ce(lVar6);
          *(undefined8 *)(lVar3 + 0x220) = local_80;
          *(undefined4 *)(lVar3 + 0x228) = local_78;
          if ((undefined8 *)(lVar3 + 0x220) != &local_80) {
            if (*(longlong *)(lVar3 + 0x230) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar3 + 0x230) = local_70;
            local_70 = 0;
            *(undefined4 *)(lVar3 + 0x238) = (undefined4)local_68;
            *(undefined4 *)(lVar3 + 0x23c) = local_68._4_4_;
            local_68 = 0;
          }
          *(undefined4 *)(lVar3 + 0x250) = local_50;
          *(undefined4 *)(lVar3 + 0x240) = local_60;
          *(undefined4 *)(lVar3 + 0x244) = uStack_5c;
          *(undefined4 *)(lVar3 + 0x248) = uStack_58;
          *(undefined4 *)(lVar3 + 0x24c) = uStack_54;
          *(undefined1 *)(lVar3 + 0x254) = local_4c;
          *(undefined1 *)(lVar3 + 0x255) = local_4b;
          if (local_70 != 0) {
            FUN_1400020a8();
          }
        }
        lVar3 = FUN_14479d2ce(lVar6);
        if ((*(longlong *)(lVar3 + 0x134) == 0) ||
           (plVar4 = (longlong *)FUN_144741050(lVar3 + 0x130), *plVar4 == 0)) {
          pvVar1 = DAT_14cbf7390;
          local_8c = 0;
          local_84 = 0;
          local_130 = DAT_14cbf7380;
          local_128 = DAT_14cbf7388;
          local_120 = (void *)0x0;
          sVar5 = (size_t)DAT_14cbf7398;
          local_118 = DAT_14cbf7398;
          if (sVar5 == 0) {
            local_114 = 0;
          }
          else {
            FUN_1447a127e(&local_120,DAT_14cbf7398,0);
            memcpy(local_120,pvVar1,sVar5);
          }
          FUN_146230743(&local_80,&local_130);
          lVar3 = FUN_14479d2ce(lVar6);
          *(undefined8 *)(lVar3 + 0x108) = local_80;
          *(undefined4 *)(lVar3 + 0x110) = local_78;
          if ((undefined8 *)(lVar3 + 0x108) != &local_80) {
            if (*(longlong *)(lVar3 + 0x118) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar3 + 0x118) = local_70;
            local_70 = 0;
            *(undefined4 *)(lVar3 + 0x120) = (undefined4)local_68;
            *(undefined4 *)(lVar3 + 0x124) = local_68._4_4_;
            local_68 = 0;
          }
          *(undefined4 *)(lVar3 + 0x138) = local_50;
          *(undefined4 *)(lVar3 + 0x128) = local_60;
          *(undefined4 *)(lVar3 + 300) = uStack_5c;
          *(undefined4 *)(lVar3 + 0x130) = uStack_58;
          *(undefined4 *)(lVar3 + 0x134) = uStack_54;
          *(undefined1 *)(lVar3 + 0x13c) = local_4c;
          *(undefined1 *)(lVar3 + 0x13d) = local_4b;
          if (local_70 != 0) {
            FUN_1400020a8();
          }
        }
        lVar3 = FUN_14479d2ce(lVar6);
        if ((*(longlong *)(lVar3 + 0x1a4) == 0) ||
           (plVar4 = (longlong *)FUN_144741050(lVar3 + 0x1a0), *plVar4 == 0)) {
          pvVar1 = DAT_14cbf73b0;
          local_8c = local_8c & 0xffffffff00000000;
          local_150 = DAT_14cbf73a0;
          local_148 = DAT_14cbf73a8;
          local_140 = (void *)0x0;
          sVar5 = (size_t)DAT_14cbf73b8;
          local_138 = DAT_14cbf73b8;
          if (sVar5 == 0) {
            local_134 = 0;
          }
          else {
            FUN_1447a127e(&local_140,DAT_14cbf73b8,0);
            memcpy(local_140,pvVar1,sVar5);
          }
          FUN_14623079d(&local_80,&local_150);
          lVar3 = FUN_14479d2ce(lVar6);
          *(undefined8 *)(lVar3 + 0x178) = local_80;
          *(undefined4 *)(lVar3 + 0x180) = local_78;
          if ((undefined8 *)(lVar3 + 0x178) != &local_80) {
            if (*(longlong *)(lVar3 + 0x188) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar3 + 0x188) = local_70;
            local_70 = 0;
            *(undefined4 *)(lVar3 + 400) = (undefined4)local_68;
            *(undefined4 *)(lVar3 + 0x194) = local_68._4_4_;
            local_68 = 0;
          }
          *(undefined4 *)(lVar3 + 0x1a8) = local_50;
          *(undefined4 *)(lVar3 + 0x198) = local_60;
          *(undefined4 *)(lVar3 + 0x19c) = uStack_5c;
          *(undefined4 *)(lVar3 + 0x1a0) = uStack_58;
          *(undefined4 *)(lVar3 + 0x1a4) = uStack_54;
          *(undefined1 *)(lVar3 + 0x1ac) = local_4c;
          *(undefined1 *)(lVar3 + 0x1ad) = local_4b;
          if (local_70 != 0) {
            FUN_1400020a8();
          }
        }
        lVar3 = FUN_14479d2ce(lVar6);
        if ((*(longlong *)(lVar3 + 0x1dc) == 0) ||
           (plVar4 = (longlong *)FUN_144741050(lVar3 + 0x1d8), *plVar4 == 0)) {
          pvVar1 = DAT_14cbf73d0;
          local_8c = local_8c & 0xffffffffffffff00;
          local_170 = DAT_14cbf73c0;
          local_168 = DAT_14cbf73c8;
          local_160 = (void *)0x0;
          sVar5 = (size_t)DAT_14cbf73d8;
          local_158 = DAT_14cbf73d8;
          if (sVar5 == 0) {
            local_154 = 0;
          }
          else {
            FUN_1447a127e(&local_160,DAT_14cbf73d8,0);
            memcpy(local_160,pvVar1,sVar5);
          }
          FUN_1462306ee(&local_80,&local_170);
          lVar3 = FUN_14479d2ce(lVar6);
          *(undefined8 *)(lVar3 + 0x1b0) = local_80;
          *(undefined4 *)(lVar3 + 0x1b8) = local_78;
          if ((undefined8 *)(lVar3 + 0x1b0) != &local_80) {
            if (*(longlong *)(lVar3 + 0x1c0) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar3 + 0x1c0) = local_70;
            local_70 = 0;
            *(undefined4 *)(lVar3 + 0x1c8) = (undefined4)local_68;
            *(undefined4 *)(lVar3 + 0x1cc) = local_68._4_4_;
            local_68 = 0;
          }
          *(undefined4 *)(lVar3 + 0x1e0) = local_50;
          *(undefined4 *)(lVar3 + 0x1d0) = local_60;
          *(undefined4 *)(lVar3 + 0x1d4) = uStack_5c;
          *(undefined4 *)(lVar3 + 0x1d8) = uStack_58;
          *(undefined4 *)(lVar3 + 0x1dc) = uStack_54;
          *(undefined1 *)(lVar3 + 0x1e4) = local_4c;
          *(undefined1 *)(lVar3 + 0x1e5) = local_4b;
          if (local_70 != 0) {
            FUN_1400020a8();
          }
        }
        lVar3 = FUN_14479d2ce(lVar6);
        if ((*(longlong *)(lVar3 + 0x214) == 0) ||
           (plVar4 = (longlong *)FUN_144741050(lVar3 + 0x210), *plVar4 == 0)) {
          pvVar1 = DAT_14cbf73f0;
          local_8c = local_8c & 0xffffffff00000000;
          local_190 = DAT_14cbf73e0;
          local_188 = DAT_14cbf73e8;
          local_180 = (void *)0x0;
          sVar5 = (size_t)DAT_14cbf73f8;
          local_178 = DAT_14cbf73f8;
          if (sVar5 == 0) {
            local_174 = 0;
          }
          else {
            FUN_1447a127e(&local_180,DAT_14cbf73f8,0);
            memcpy(local_180,pvVar1,sVar5);
          }
          FUN_1462307f7(&local_80,&local_190);
          lVar3 = FUN_14479d2ce(lVar6);
          *(undefined8 *)(lVar3 + 0x1e8) = local_80;
          *(undefined4 *)(lVar3 + 0x1f0) = local_78;
          if ((undefined8 *)(lVar3 + 0x1e8) != &local_80) {
            if (*(longlong *)(lVar3 + 0x1f8) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar3 + 0x1f8) = local_70;
            local_70 = 0;
            *(undefined4 *)(lVar3 + 0x200) = (undefined4)local_68;
            *(undefined4 *)(lVar3 + 0x204) = local_68._4_4_;
            local_68 = 0;
          }
          *(undefined4 *)(lVar3 + 0x218) = local_50;
          *(undefined4 *)(lVar3 + 0x208) = local_60;
          *(undefined4 *)(lVar3 + 0x20c) = uStack_5c;
          *(undefined4 *)(lVar3 + 0x210) = uStack_58;
          *(undefined4 *)(lVar3 + 0x214) = uStack_54;
          *(undefined1 *)(lVar3 + 0x21c) = local_4c;
          *(undefined1 *)(lVar3 + 0x21d) = local_4b;
          if (local_70 != 0) {
            FUN_1400020a8();
          }
        }
      }
      lVar6 = lVar6 + 8;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1462306ee FUN_1462306ee body=85 status=ok
// SIG undefined FUN_1462306ee(void)

undefined8 FUN_1462306ee(undefined8 param_1,longlong param_2,byte *param_3)

{
  FUN_140121138(param_2);
  **(int **)(param_2 + 0x10) = -(uint)*param_3;
  FUN_140120f5c(param_1);
  FUN_140120fb8(param_1,param_2,param_2,0);
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146230743 FUN_146230743 body=90 status=ok
// SIG undefined FUN_146230743(void)

undefined8 FUN_146230743(undefined8 param_1,longlong param_2,void *param_3)

{
  FUN_140121138(param_2);
  memcpy(*(void **)(param_2 + 0x10),param_3,(longlong)*(int *)(param_2 + 0x18));
  FUN_140120f5c(param_1);
  FUN_140120fb8(param_1,param_2,param_2,0);
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 14623079d FUN_14623079d body=90 status=ok
// SIG undefined FUN_14623079d(void)

undefined8 FUN_14623079d(undefined8 param_1,longlong param_2,void *param_3)

{
  FUN_140121138(param_2);
  memcpy(*(void **)(param_2 + 0x10),param_3,(longlong)*(int *)(param_2 + 0x18));
  FUN_140120f5c(param_1);
  FUN_140120fb8(param_1,param_2,param_2,0);
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1462307f7 FUN_1462307f7 body=90 status=ok
// SIG undefined FUN_1462307f7(void)

undefined8 FUN_1462307f7(undefined8 param_1,longlong param_2,void *param_3)

{
  FUN_140121138(param_2);
  memcpy(*(void **)(param_2 + 0x10),param_3,(longlong)*(int *)(param_2 + 0x18));
  FUN_140120f5c(param_1);
  FUN_140120fb8(param_1,param_2,param_2,0);
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146230852 FUN_146230852 body=780 status=ok
// SIG undefined FUN_146230852(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146230852(void)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined4 local_28 [2];
  longlong local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cbf7380 == 0) || (plVar1 = (longlong *)FUN_144741050(&DAT_14cbf7388), *plVar1 == 0)) {
    FUN_1446f470e(&local_38,L"Particles.GeoCacheRotation",1);
    local_30 = local_38;
    DAT_14cbf7388 = FUN_144830b78(local_28);
    local_20 = 0;
    uStack_18 = 0;
    DAT_14cbf7380 = local_30;
    local_28[0] = DAT_14cbf7388;
    if (DAT_14cbf7390 == 0) {
      _DAT_14cbf739c = 0;
      DAT_14cbf7398 = 0;
      DAT_14cbf7390 = local_20;
    }
    else {
      FUN_1400020a8();
      DAT_14cbf7390 = local_20;
      DAT_14cbf7398 = (undefined4)uStack_18;
      _DAT_14cbf739c = uStack_18._4_4_;
    }
  }
  if ((DAT_14cbf73a0 == 0) || (plVar1 = (longlong *)FUN_144741050(&DAT_14cbf73a8), *plVar1 == 0)) {
    FUN_1446f470e(&local_38,L"Particles.Age",1);
    local_30 = local_38;
    DAT_14cbf73a8 = FUN_144830b78(local_28);
    local_20 = 0;
    uStack_18 = 0;
    DAT_14cbf73a0 = local_30;
    local_28[0] = DAT_14cbf73a8;
    if (DAT_14cbf73b0 == 0) {
      _DAT_14cbf73bc = 0;
      DAT_14cbf73b8 = 0;
      DAT_14cbf73b0 = local_20;
    }
    else {
      FUN_1400020a8();
      DAT_14cbf73b0 = local_20;
      DAT_14cbf73b8 = (undefined4)uStack_18;
      _DAT_14cbf73bc = uStack_18._4_4_;
    }
  }
  if ((DAT_14cbf73c0 == 0) || (plVar1 = (longlong *)FUN_144741050(&DAT_14cbf73c8), *plVar1 == 0)) {
    FUN_1446f470e(&local_38,L"Particles.GeoCacheIsEnabled",1);
    local_30 = local_38;
    DAT_14cbf73c8 = FUN_144830b78(local_28);
    local_20 = 0;
    uStack_18 = 0;
    DAT_14cbf73c0 = local_30;
    local_28[0] = DAT_14cbf73c8;
    if (DAT_14cbf73d0 == 0) {
      _DAT_14cbf73dc = 0;
      DAT_14cbf73d8 = 0;
      DAT_14cbf73d0 = local_20;
    }
    else {
      FUN_1400020a8();
      DAT_14cbf73d0 = local_20;
      DAT_14cbf73d8 = (undefined4)uStack_18;
      _DAT_14cbf73dc = uStack_18._4_4_;
    }
  }
  if ((DAT_14cbf73e0 == 0) || (plVar1 = (longlong *)FUN_144741050(&DAT_14cbf73e8), *plVar1 == 0)) {
    FUN_1446f470e(&local_38,L"Particles.GeoCacheArrayIndex",1);
    local_30 = local_38;
    DAT_14cbf73e8 = FUN_144830b78(local_28);
    local_20 = 0;
    uStack_18 = 0;
    DAT_14cbf73e0 = local_30;
    local_28[0] = DAT_14cbf73e8;
    if (DAT_14cbf73f0 == 0) {
      _DAT_14cbf73fc = 0;
      DAT_14cbf73f8 = 0;
      DAT_14cbf73f0 = local_20;
    }
    else {
      FUN_1400020a8();
      DAT_14cbf73f0 = local_20;
      DAT_14cbf73f8 = (undefined4)uStack_18;
      _DAT_14cbf73fc = uStack_18._4_4_;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146230b60 FUN_146230b60 body=169 status=ok
// SIG undefined FUN_146230b60(void)

void FUN_146230b60(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_18 = DAT_14c8464f0;
  local_28 = DAT_14c8464e0;
  uStack_20 = DAT_14c8464e8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_146230c0a();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146230c0a FUN_146230c0a body=132 status=ok
// SIG undefined FUN_146230c0a(void)

void FUN_146230c0a(void)

{
  undefined2 *puVar1;
  undefined1 auStack_38 [32];
  undefined2 *local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1400b22c2(&local_18,"Slide_Stop");
  if (((DAT_14cc2d220 == '\x01') && ((DAT_14cc2d201 & 1) != 0)) && (DAT_14cc2d221 == '\x01')) {
    puVar1 = local_18;
    if (local_10 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (*DAT_14cc2d210)(puVar1);
  }
  if (local_18 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146230c90 FUN_146230c90 body=202 status=ok
// SIG undefined FUN_146230c90(void)

void FUN_146230c90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined2 local_70;
  undefined2 local_68;
  longlong local_60;
  undefined1 local_58;
  undefined2 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  byte local_3c;
  undefined1 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(param_1 + 0x68) != 0) || (*(char *)(param_1 + 0x84) == '\x01')) {
    lVar1 = FUN_14009d2a0();
    lVar2 = FUN_14038fb82();
    local_68 = *(undefined2 *)(lVar1 + 0x7e);
    local_70 = *(undefined2 *)(lVar1 + 0x126);
    local_3c = *(byte *)(param_1 + 0x128) & 1;
    local_50 = *(undefined2 *)(lVar2 + 0xfe);
    local_58 = 1;
    local_38 = 1;
    local_4c = *(undefined4 *)(param_1 + 0x118);
    uStack_48 = *(undefined4 *)(param_1 + 0x11c);
    uStack_44 = *(undefined4 *)(param_1 + 0x120);
    uStack_40 = *(undefined4 *)(param_1 + 0x124);
    local_30 = 0;
    local_78 = &PTR_FUN_14a4c7580;
    local_60 = param_1 + 8;
    FUN_146230d5c(param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146230d5c FUN_146230d5c body=256 status=ok
// SIG undefined FUN_146230d5c(void)

void FUN_146230d5c(longlong param_1)

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
  FUN_146230e5e(puVar5);
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



// FUNCTION 146230e5e FUN_146230e5e body=151 status=ok
// SIG undefined FUN_146230e5e(void)

void FUN_146230e5e(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,8);
  *param_1 = puVar4;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar4;
  }
  *param_1 = &PTR_FUN_14a4c4550;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 0x10);
  cVar2 = *(char *)(param_2 + 0x20);
  *(char *)(param_1 + 4) = cVar2;
  if (cVar2 == '\x01') {
    param_1[3] = *(undefined8 *)(param_2 + 0x18);
  }
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 0x28);
  cVar2 = *(char *)(param_2 + 0x40);
  *(char *)(param_1 + 8) = cVar2;
  if (cVar2 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    uVar3 = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)((longlong)param_1 + 0x34) = uVar3;
  }
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0x48);
  *param_1 = &PTR_FUN_14a4c7580;
  return;
}



// FUNCTION 146230ef6 FUN_146230ef6 body=218 status=ok
// SIG undefined FUN_146230ef6(void)

void FUN_146230ef6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar6 = FUN_141218c3a();
  uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar8 = FUN_1406f612e(uVar7);
  if ((((*(uint *)(param_1 + 1) & 0x10) == 0) && (lVar1 = param_1[4], lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0x398) != 0)) {
    lVar9 = FUN_144a7b4ca();
    lVar2 = *(longlong *)(lVar1 + 0x398);
    if (((((lVar2 != 0) && (lVar9 != 0)) &&
         ((lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0 &&
          ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar3 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)))))) && (lVar6 != 0)) && (lVar8 != 0)) {
      uVar7 = FUN_145a1089c(param_1);
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        lVar9 = param_1[4];
      }
      else {
        lVar9 = 0;
      }
      uVar4 = FUN_14125be1e(lVar9,uVar7);
      uVar5 = FUN_1408966e4(lVar1);
      FUN_141674e64(lVar2,uVar5,lVar8,lVar6,uVar4);
    }
  }
  return;
}



// FUNCTION 146230fd0 FUN_146230fd0 body=343 status=ok
// SIG undefined FUN_146230fd0(void)

void FUN_146230fd0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [36];
  int local_34;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar2 = local_2c;
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar1 = local_30;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_146231128(param_1,iVar2 != 0,iVar1 != 0,local_34 != 0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146231128 FUN_146231128 body=884 status=ok
// SIG undefined FUN_146231128(void)

void FUN_146231128(longlong param_1,undefined8 param_2,byte param_3,byte param_4)

{
  ulonglong *puVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *****pppppuVar16;
  float fVar17;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 uStack_a0;
  undefined4 local_80;
  undefined8 ****local_78 [3];
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((param_3 & param_4) == 1) &&
     (plVar8 = (longlong *)FUN_14026506e(param_1 + 0x30), plVar8 != (longlong *)0x0)) {
    lVar9 = FUN_144a2f878();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar8[2] + 0x38)) &&
       ((*(longlong *)(*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
         lVar9 + 0x30 && (lVar9 = plVar8[0xe7b], lVar9 != 0)))) {
      lVar11 = *(longlong *)(lVar9 + 0x150);
      if (lVar11 == 0) {
        uVar10 = FUN_140dddfde();
        lVar11 = FUN_14477b664(uVar10);
        *(longlong *)(lVar9 + 0x150) = lVar11;
      }
      puVar1 = (ulonglong *)(lVar9 + 0x148);
      if (*(longlong *)(lVar9 + 0x158) == 0) {
        if ((lVar11 == 0) || (*puVar1 == 0)) goto LAB_1462313f8;
        plVar12 = *(longlong **)(lVar11 + 0xb8);
        if ((plVar12 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar6 == '\0')) {
          *(undefined8 *)(lVar9 + 0x158) = 0;
          goto LAB_1462313f8;
        }
        uVar10 = (**(code **)(*plVar12 + 0x110))(plVar12);
        lVar11 = FUN_144aff482(uVar10,puVar1);
        *(longlong *)(lVar9 + 0x158) = lVar11;
        if (lVar11 == 0) goto LAB_1462313f8;
      }
      uVar10 = FUN_140ac4d32();
      plVar12 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar10);
      if (plVar12 != (longlong *)0x0) {
        uVar10 = FUN_140ac4d32();
        plVar13 = (longlong *)FUN_144718840(plVar12,uVar10);
        if ((plVar12 != plVar13) && (plVar13 != (longlong *)0x0)) {
          local_a8 = local_a8 & 0xffffffffffffff00;
          local_80 = 0;
          FUN_1456bb102(&local_a8,plVar8);
          FUN_1448729ea(lVar9 + 0xf8,local_78,&local_a8);
          fVar17 = (float)FUN_144a7b41a(local_78,0);
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
          if (pcVar3 != (code *)0x0) {
            pppppuVar16 = local_78;
            if (0x18 < local_60) {
              pppppuVar16 = (undefined8 *****)local_78[0];
            }
            (*pcVar3)(pppppuVar16);
          }
          if (0x18 < local_60) {
            FUN_1400020a8(local_78[0]);
          }
          FUN_144a5ac3a(&local_a8);
          if (0.0 < fVar17) {
            local_a8 = *puVar1;
            FUN_1401533ba(local_78,&local_a8,1);
            FUN_1408226d0(local_78,&local_a8,0);
            uVar14 = local_a8;
            iVar4 = (int)uStack_a0;
            uVar7 = (int)uStack_a0 - 1;
            if ((int)uStack_a0 == 0) {
              uVar7 = 0;
            }
            if (0 < (int)uVar7) {
              uVar15 = 0;
              do {
                uVar2 = *(ushort *)(local_a8 + uVar15 * 2);
                *(ushort *)(local_a8 + uVar15 * 2) = (ushort)(uVar2 - 0x41 < 0x1a) * 0x20 + uVar2;
                uVar15 = uVar15 + 1;
              } while (uVar7 != uVar15);
            }
            uVar5 = uStack_a0._4_4_;
            local_a8 = 0;
            uStack_a0 = 0;
            if (*(longlong *)(param_1 + 0x60) == 0) {
              *(ulonglong *)(param_1 + 0x60) = uVar14;
              *(int *)(param_1 + 0x68) = iVar4;
              *(undefined4 *)(param_1 + 0x6c) = uVar5;
            }
            else {
              FUN_1400020a8();
              *(ulonglong *)(param_1 + 0x60) = uVar14;
              *(int *)(param_1 + 0x68) = iVar4;
              *(undefined4 *)(param_1 + 0x6c) = uVar5;
              if (local_a8 != 0) {
                FUN_1400020a8();
              }
            }
            uVar14 = (**(code **)(*plVar13 + 0x18))(plVar13,local_78);
            uVar15 = (ulonglong)(fVar17 * (float)uVar14);
            *(ulonglong *)(param_1 + 0x58) =
                 (longlong)(fVar17 * (float)uVar14 - 9.223372e+18) & (longlong)uVar15 >> 0x3f |
                 uVar15;
          }
        }
      }
    }
  }
LAB_1462313f8:
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14623149e FUN_14623149e body=186 status=ok
// SIG undefined FUN_14623149e(void)

undefined8 * FUN_14623149e(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_48 = FUN_14140a4e4;
      local_40 = 0;
      FUN_14623155a(local_38,param_1);
      FUN_140e137de(param_3 + 0x6970,param_2,local_38);
      FUN_1449db362(local_38);
      goto LAB_14623152c;
    }
  }
  *param_2 = 0;
LAB_14623152c:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14623155a FUN_14623155a body=428 status=ok
// SIG undefined FUN_14623155a(void)

longlong * FUN_14623155a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x48);
  if (plVar6 == (longlong *)0x0) {
LAB_14623163a:
    *puVar5 = &PTR_LAB_14b430ca0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b99d3f0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14623163a;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b430ca0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b99d3f0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146231706 FUN_146231706 body=186 status=ok
// SIG undefined FUN_146231706(void)

undefined8 * FUN_146231706(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_48 = FUN_14587556c;
      local_40 = 0;
      FUN_1462317c2(local_38,param_1);
      FUN_14100c9d8(param_3 + 0x6170,param_2,local_38);
      FUN_1449db362(local_38);
      goto LAB_146231794;
    }
  }
  *param_2 = 0;
LAB_146231794:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462317c2 FUN_1462317c2 body=428 status=ok
// SIG undefined FUN_1462317c2(void)

longlong * FUN_1462317c2(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x48);
  if (plVar6 == (longlong *)0x0) {
LAB_1462318a2:
    *puVar5 = &PTR_LAB_14b4aa9f0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b99e460;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1462318a2;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4aa9f0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b99e460;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14623196e FUN_14623196e body=37 status=ok
// SIG undefined FUN_14623196e(void)

void FUN_14623196e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x298);
  FUN_146231994(param_2);
  return;
}



// FUNCTION 146231994 FUN_146231994 body=271 status=ok
// SIG undefined FUN_146231994(void)

undefined8 * FUN_146231994(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b42ad00;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  param_1[4] = local_48._0_8_;
  *(uchar (*) [8])(param_1 + 5) = local_48.Data4;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 10;
  memset(param_1 + 0x12,0,0x100);
  *param_1 = &PTR_FUN_14b626d50;
  memset(param_1 + 0x39,0,0x81);
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146231aac FUN_146231aac body=1229 status=ok
// SIG undefined FUN_146231aac(void)

undefined8 * FUN_146231aac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_145ad3c5c();
  *param_1 = &PTR_FUN_14bd8af90;
  param_1[5] = &PTR_FUN_14bd8b3e0;
  param_1[0x13] = &PTR_FUN_14bd8b400;
  param_1[0x15] = &PTR_FUN_14bd8b430;
  param_1[0x16] = &PTR_FUN_14bd8b470;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0x3ff0000000000000;
  param_1[0x40] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x3e] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x3f] = uVar1;
  uVar1 = DAT_14c846518;
  param_1[0x41] = DAT_14c846510;
  param_1[0x42] = uVar1;
  param_1[0x43] = DAT_14c846520;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0x3ff0000000000000;
  param_1[0x4a] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x48] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x49] = uVar1;
  uVar1 = DAT_14c846518;
  param_1[0x4b] = DAT_14c846510;
  param_1[0x4c] = uVar1;
  param_1[0x4d] = DAT_14c846520;
  param_1[0x4e] = 0;
  param_1[0x52] = 0;
  param_1[0x54] = 0;
  param_1[0x5a] = 0;
  param_1[0x5c] = 0;
  param_1[100] = 0;
  param_1[0x66] = 0;
  param_1[0x6c] = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0;
  param_1[0x76] = 0;
  param_1[0x78] = 0;
  param_1[0x7e] = 0;
  param_1[0x80] = 0;
  param_1[0x88] = 0;
  param_1[0x8a] = 0;
  param_1[0x90] = 0;
  param_1[0x92] = 0;
  param_1[0x9a] = 0;
  param_1[0x9c] = 0;
  param_1[0xa2] = 0;
  param_1[0xa4] = 0;
  param_1[0xac] = 0;
  param_1[0xae] = 0;
  param_1[0xb4] = 0;
  param_1[0xb6] = 0;
  param_1[0xbe] = 0;
  param_1[0xc0] = 0;
  param_1[0xc6] = 0;
  param_1[200] = 0;
  param_1[0xd0] = 0;
  param_1[0xd2] = 0;
  param_1[0xd8] = 0;
  param_1[0xda] = 0;
  param_1[0xe2] = 0;
  param_1[0xe4] = 0;
  param_1[0xea] = 0;
  param_1[0xec] = 0;
  param_1[0xf4] = 0;
  param_1[0xf6] = 0;
  param_1[0xfc] = 0;
  param_1[0xfe] = 0;
  param_1[0x108] = 0;
  param_1[0x10a] = 0;
  param_1[0x110] = 0;
  param_1[0x112] = 0;
  param_1[0x11c] = 0;
  param_1[0x11e] = 0;
  param_1[0x124] = 0;
  param_1[0x126] = 0;
  param_1[300] = 0x7fefffffffffffff;
  param_1[0x12d] = 0xffefffffffffffff;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x136] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x134] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x135] = uVar1;
  param_1[0x139] = 0;
  param_1[0x137] = 0;
  param_1[0x138] = 0;
  param_1[0x13a] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x150) = 0xffffffff;
  param_1[0x163] = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  *(undefined8 *)((longlong)param_1 + 0xaac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xab4) = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  *(undefined8 *)((longlong)param_1 + 0xae4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xaec) = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb24) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb2c) = 0;
  param_1[0x167] = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  *(undefined4 *)((longlong)param_1 + 0xb64) = 0x3f800000;
  param_1[0x170] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x16e) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0xb74) = uVar2;
  *(undefined4 *)(param_1 + 0x16f) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xb7c) = uVar4;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  param_1[0x173] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined2 *)((longlong)param_1 + 0xba4) = 0x1010;
  FUN_1411b354a(param_1 + 0x175,0,0,0,0);
  FUN_1457e37e0(param_1 + 0x1ba);
  param_1[0x1d4] = 0;
  param_1[0x1d5] = 0;
  *(undefined8 *)((longlong)param_1 + 0xea9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xeb1) = 0;
  param_1[0x1d8] = 0xbff0000000000000;
  param_1[0x1d9] = 0;
  param_1[0x1da] = 0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x1db] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x1dc] = uVar1;
  param_1[0x1dd] = DAT_14c8464f0;
  param_1[0x1de] = 0;
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0x3ff0000000000000;
  param_1[0x1eb] = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  param_1[0x1e2] = 0;
  param_1[0x1e3] = 0;
  param_1[0x1e4] = 0;
  param_1[0x1e5] = 0;
  param_1[0x1e7] = 0;
  param_1[0x1e8] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf64) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf6c) = 0;
  param_1[0x1ef] = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  param_1[0x1f5] = 0;
  *(undefined4 *)(param_1 + 0x1f6) = 0;
  param_1[0x1f1] = 0;
  param_1[0x1f2] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfbc) = 0;
  param_1[0x1f9] = 0;
  *(undefined4 *)(param_1 + 0x1fa) = 0;
  param_1[0x1fb] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1fd] = 0x100000000;
  *(undefined4 *)(param_1 + 0x200) = 0;
  param_1[0x1fe] = 0;
  param_1[0x1ff] = 0;
  param_1[0x201] = 0;
  param_1[0x202] = 0;
  *(undefined1 *)(param_1 + 0x12f) = 1;
  return param_1;
}



// FUNCTION 146231f7a FUN_146231f7a body=80 status=ok
// SIG undefined FUN_146231f7a(void)

ulonglong FUN_146231f7a(longlong *param_1,undefined4 param_2)

{
  byte bVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x10))();
  if (plVar2 == (longlong *)0x0) {
    bVar1 = 0;
  }
  else {
    param_1 = plVar2;
    bVar1 = FUN_141674ebe(plVar2,param_2,0,0,0,0,0);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),plVar2 != (longlong *)0x0 & bVar1) & 0xffffffff;
}



// FUNCTION 146231fca FUN_146231fca body=594 status=ok
// SIG undefined FUN_146231fca(void)

void FUN_146231fca(longlong *param_1,longlong *param_2)

{
  void *_Src;
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14623221e(param_1 + 0x16,&local_68);
  lVar4 = local_68;
  lVar3 = (longlong)(int)uStack_60;
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar2) != 0) {
        local_e8 = 0;
        lStack_e0 = 0;
        (**(code **)(*param_1 + 0xf0))(param_1,*(longlong *)(lVar4 + lVar2) + 0x78,&local_e8);
        FUN_1449db362(&local_e8);
      }
      lVar2 = lVar2 + 8;
    } while (lVar3 * 8 != lVar2);
  }
  plVar1 = (longlong *)FUN_141535576(*(undefined8 *)(param_1[3] + 0x10));
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x18))(plVar1,param_1 + 4);
  if (param_1[0x58] != 0) {
    FUN_14480f766(plVar1 + 7);
    param_1[0x58] = 0;
  }
  (**(code **)(*plVar1 + 0x128))(plVar1);
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_78 = (void *)0x0;
  local_70 = (int)param_1[7];
  lVar4 = (longlong)local_70;
  _Src = (void *)param_1[6];
  if (lVar4 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,_Src,lVar4 * 2);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  lStack_e0 = 0;
  FUN_145960ee8(param_1 + 4,&local_e8);
  FUN_140d5fbf2(&local_e8);
  local_e8 = local_e8 & 0xffffffff00000000;
  lStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = uStack_d0 & 0xffffffff00000000;
  local_c8 = 0;
  uStack_c0 = 0;
  if ((((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) &&
     ((**(code **)(*param_2 + 0x60))(param_2,&local_78,&local_e8), local_c8 != 0)) {
    FUN_1400020a8();
  }
  if (lStack_e0 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14623221e FUN_14623221e body=337 status=ok
// SIG undefined FUN_14623221e(void)

void FUN_14623221e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
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
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
    FUN_148aeeb7c(param_2);
  }
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      iVar2 = iStack_5c;
      lVar1 = *local_78;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_148aeebdc(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) =
           *(undefined8 *)((longlong)iVar2 * 0x20 + lVar1 + 0x10);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146232370 FUN_146232370 body=21 status=ok
// SIG undefined FUN_146232370(void)

void FUN_146232370(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1409f0ca6();
  FUN_141674fa4(uVar1);
  return;
}



// FUNCTION 146232386 FUN_146232386 body=99 status=ok
// SIG undefined FUN_146232386(void)

undefined4 FUN_146232386(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x80);
  if (plVar3 == (longlong *)0x0) {
LAB_1462323da:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1462323da;
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
    if (*(longlong *)(param_1 + 0x78) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_1462323ea();
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
  return uVar6;
}



// FUNCTION 1462323ea FUN_1462323ea body=214 status=ok
// SIG undefined FUN_1462323ea(void)

longlong FUN_1462323ea(longlong param_1,undefined8 *param_2,float param_3)

{
  double *pdVar1;
  bool bVar2;
  longlong lVar3;
  double *pdVar4;
  longlong lVar5;
  double *pdVar6;
  double dVar7;
  
  if ((0 < *(int *)(param_1 + 0xf0)) &&
     (lVar3 = FUN_14479d2ce(*(undefined8 *)(param_1 + 0xe8)), lVar3 != 0)) {
    lVar3 = *(longlong *)(lVar3 + 0x1c8);
    if (lVar3 == 0) {
      pdVar4 = (double *)&DAT_14c8464e0;
      dVar7 = DAT_14c8464f0;
    }
    else {
      pdVar4 = (double *)(lVar3 + 0x260);
      dVar7 = *(double *)(lVar3 + 0x270);
    }
    lVar3 = (longlong)*(int *)(param_2 + 1);
    if (lVar3 != 0) {
      pdVar6 = (double *)*param_2;
      lVar5 = lVar3 * 3;
      pdVar1 = pdVar6 + lVar3 * 3;
      do {
        bVar2 = (dVar7 - pdVar6[2]) * (dVar7 - pdVar6[2]) +
                (pdVar4[1] - pdVar6[1]) * (pdVar4[1] - pdVar6[1]) +
                (*pdVar4 - *pdVar6) * (*pdVar4 - *pdVar6) <= (double)(param_3 * param_3);
        lVar5 = CONCAT71((int7)((ulonglong)lVar5 >> 8),bVar2);
        if (bVar2) {
          return lVar5;
        }
        pdVar6 = pdVar6 + 3;
      } while (pdVar6 != pdVar1);
      return lVar5;
    }
  }
  return 0;
}



// FUNCTION 1462324c0 FUN_1462324c0 body=324 status=ok
// SIG undefined FUN_1462324c0(void)

void FUN_1462324c0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146232606(*(undefined1 *)(param_1 + 0x298));
  *(undefined1 *)(param_1 + 0x298) = 0;
  plVar3 = (longlong *)(param_1 + 0x2a0);
  if (*(int *)(param_1 + 0x2a8) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(*plVar3 + (longlong)(*(int *)(param_1 + 0x2a8) + -1) * 0x10) + 0x30;
  }
  plVar6 = (longlong *)FUN_14001cc68(0xd0,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14a178ff0;
  plVar1 = plVar6 + 2;
  FUN_1416761c4(plVar1,param_2,lVar7);
  local_48 = plVar1;
  local_40 = plVar6;
  FUN_146232848(&local_48,plVar1);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x2a8);
  *(uint *)(param_1 + 0x2a8) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x2ac) < iVar4 + 1U) {
    FUN_1462327c4(plVar3,iVar4);
  }
  plVar5 = local_40;
  lVar7 = *plVar3;
  *(longlong **)(lVar7 + (longlong)iVar4 * 0x10) = plVar1;
  *(longlong **)(lVar7 + 8 + (longlong)iVar4 * 0x10) = plVar6;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_14167555c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146232606 FUN_146232606 body=84 status=ok
// SIG undefined FUN_146232606(void)

void FUN_146232606(undefined4 param_1)

{
  if (*DAT_14c9a1070 == '\x01') {
    if ((char)param_1 == '\0') {
      if (DAT_14c9a10e0 == '\x01') {
        FUN_141675470(&DAT_14c9a1098);
        DAT_14c9a10e0 = '\0';
      }
    }
    else {
      FUN_14623265a(&DAT_14c9a1098);
    }
    FUN_1462326a6(param_1);
    LOCK();
    UNLOCK();
    DAT_14c9a1090 = (char)param_1;
  }
  return;
}



// FUNCTION 14623265a FUN_14623265a body=76 status=ok
// SIG undefined FUN_14623265a(void)

undefined8 * FUN_14623265a(undefined8 *param_1)

{
  if (*(char *)(param_1 + 9) == '\x01') {
    FUN_141675470(param_1);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 4),4000);
  *(undefined1 *)(param_1 + 9) = 1;
  return param_1;
}



// FUNCTION 1462326a6 FUN_1462326a6 body=176 status=ok
// SIG undefined FUN_1462326a6(void)

char * FUN_1462326a6(ulonglong param_1)

{
  DWORD DVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  char cVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  uVar2 = FUN_146232756();
  puVar6 = DAT_14c9a13b8;
  pcVar4 = (char *)(CONCAT71((int7)((ulonglong)uVar2 >> 8),DAT_14c9a13c0) & 0xffffffffffffff01);
  cVar5 = (char)(param_1 & 0xffffffff);
  if (((char)pcVar4 != cVar5) && (pcVar4 = DAT_14c9a13b0, *DAT_14c9a13b0 == '\x01')) {
    LOCK();
    pcVar4 = (char *)CONCAT71((int7)((param_1 & 0xffffffff) >> 8),DAT_14c9a13c0);
    UNLOCK();
    DAT_14c9a13c0 = cVar5;
    if (cVar5 == '\0') {
      if (DAT_14c9a13b8 != (undefined8 *)0x0) {
        DAT_14c9a13b8 = (undefined8 *)0x0;
        goto LAB_14623273f;
      }
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x48,0x10);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar3 + 4));
      DVar1 = SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar3 + 4),4000);
      pcVar4 = (char *)(ulonglong)DVar1;
      bVar7 = DAT_14c9a13b8 != (undefined8 *)0x0;
      puVar6 = DAT_14c9a13b8;
      DAT_14c9a13b8 = puVar3;
      if (bVar7) {
LAB_14623273f:
        FUN_1416754e6(puVar6);
        pcVar4 = (char *)FUN_1400020a8(puVar6);
        return pcVar4;
      }
    }
  }
  return pcVar4;
}



// FUNCTION 146232756 FUN_146232756 body=109 status=ok
// SIG undefined FUN_146232756(void)

void FUN_146232756(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a13c8) {
    FUN_144b3d300(&DAT_14c9a13c8);
    if (DAT_14c9a13c8 == -1) {
      DAT_14c9a13b8 = 0;
      DAT_14c9a13c0 = 0;
      atexit(FUN_142b20b2f);
      _Init_thread_footer(&DAT_14c9a13c8);
      return;
    }
  }
  return;
}



// FUNCTION 1462327c4 FUN_1462327c4 body=132 status=ok
// SIG undefined FUN_1462327c4(void)

void FUN_1462327c4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146232848 FUN_146232848 body=159 status=ok
// SIG undefined FUN_146232848(void)

void FUN_146232848(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_146232885;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_146232885;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_146232885:
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
                    /* WARNING: Could not recover jumptable at 0x0001462328e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1462328e8 FUN_1462328e8 body=969 status=ok
// SIG undefined FUN_1462328e8(void)

void FUN_1462328e8(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined8 local_190 [12];
  undefined8 local_130 [9];
  undefined1 local_e1;
  undefined8 local_e0;
  int local_d8;
  int local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined2 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_88[0] = 0;
  local_88._4_8_ = 0;
  local_78 = 0;
  local_70 = DAT_14c8464f8;
  uStack_68 = DAT_14c846500;
  local_60 = DAT_14c846508;
  local_58 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = (undefined4)DAT_14c8464e0;
  uStack_3c = DAT_14c8464e0._4_4_;
  uStack_38 = (undefined4)DAT_14c8464e8;
  uStack_34 = DAT_14c8464e8._4_4_;
  local_30 = DAT_14c8464f0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_d0._0_4_ = 0;
  local_d0._4_1_ = 0;
  local_c8 = 0xbf80000000000000;
  local_c0 = 0xc4750000;
  local_bc = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  local_d4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d4);
  }
  iVar2 = local_d4;
  local_d8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  iVar1 = local_d8;
  local_e0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  local_e1 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e1);
  }
  local_1a0 = local_e0;
  local_198 = local_e1;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = &local_d0;
  puVar5 = local_130;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined8 *)local_88;
  puVar5 = local_190;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_1a8 = iVar1 != 0;
  FUN_141678b52(local_28,local_190,local_130,iVar2 != 0);
  if ((local_20 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146232cbe FUN_146232cbe body=144 status=ok
// SIG undefined FUN_146232cbe(void)

bool FUN_146232cbe(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146232d50 FUN_146232d50 body=249 status=ok
// SIG undefined FUN_146232d50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_146232d50(double *param_1,double *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  undefined4 in_EAX;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  dVar1 = (double)DAT_1499387d0;
  dVar2 = DAT_1499387d0._8_8_;
  auVar11._8_8_ = param_1[1] - param_2[1];
  auVar11._0_8_ = *param_1 - *param_2;
  auVar12 = divpd(auVar11,_DAT_1499387d0);
  auVar5._0_8_ = (param_1[2] - param_2[2]) / 360.0;
  auVar5._8_8_ = 0;
  auVar13 = roundpd(auVar12,auVar12,3);
  auVar12 = roundpd(auVar5,auVar5,3);
  auVar19._0_8_ = (param_1[2] - param_2[2]) - auVar12._0_8_ * dVar1;
  auVar19._8_8_ = 0.0 - auVar12._8_8_ * dVar2;
  dVar17 = (*param_1 - *param_2) - auVar13._0_8_ * dVar1;
  dVar18 = (param_1[1] - param_2[1]) - auVar13._8_8_ * dVar2;
  auVar16._0_8_ = dVar17 + dVar1;
  auVar16._8_8_ = dVar18 + dVar2;
  auVar15._0_8_ = dVar1 + auVar19._0_8_;
  auVar15._8_8_ = dVar2 + auVar19._8_8_;
  auVar6._8_8_ = -(ulonglong)(0.0 <= dVar18);
  auVar6._0_8_ = -(ulonglong)(0.0 <= dVar17);
  auVar12._8_8_ = dVar18;
  auVar12._0_8_ = dVar17;
  auVar13 = blendvpd(auVar16,auVar12,auVar6);
  auVar7._8_8_ = -(ulonglong)(0.0 <= auVar19._8_8_);
  auVar7._0_8_ = -(ulonglong)(0.0 <= auVar19._0_8_);
  auVar12 = blendvpd(auVar15,auVar19,auVar7);
  auVar20._0_8_ = auVar13._0_8_ + -360.0;
  auVar20._8_8_ = auVar13._8_8_ + -360.0;
  auVar8._8_8_ = -(ulonglong)(180.0 < auVar13._8_8_);
  auVar8._0_8_ = -(ulonglong)(180.0 < auVar13._0_8_);
  auVar5 = blendvpd(auVar13,auVar20,auVar8);
  auVar9._8_8_ = -(ulonglong)(180.0 < auVar12._8_8_);
  auVar9._0_8_ = -(ulonglong)(180.0 < auVar12._0_8_);
  auVar13._8_8_ = auVar12._8_8_ + -360.0;
  auVar13._0_8_ = auVar12._0_8_ + -360.0;
  auVar12 = blendvpd(auVar12,auVar13,auVar9);
  auVar14._8_8_ = -(ulonglong)(param_3 < ABS(auVar5._8_8_));
  auVar14._0_8_ = -(ulonglong)(param_3 < ABS(auVar5._0_8_));
  iVar3 = movmskpd(in_EAX,auVar14);
  auVar10._8_8_ = -(ulonglong)(param_3 < ABS(auVar12._8_8_));
  auVar10._0_8_ = -(ulonglong)(param_3 < ABS(auVar12._0_8_));
  uVar4 = movmskpd((int)param_1,auVar10);
  return CONCAT31((int3)((uint)iVar3 >> 8),(uVar4 & 0x3fffffff) == 0 && iVar3 == 0);
}



// FUNCTION 146232e4a FUN_146232e4a body=307 status=ok
// SIG undefined FUN_146232e4a(void)

void FUN_146232e4a(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x30) != 0) goto LAB_146232ef4;
  uVar3 = FUN_1400b465c();
  plVar4 = (longlong *)FUN_14001cc68(0x7f0,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b989580;
  plVar5 = plVar4 + 2;
  FUN_146233020(plVar5,uVar3);
  local_38 = plVar5;
  local_30 = plVar4;
  FUN_146232f7e(&local_38,plVar5);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x38);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
LAB_146232f2a:
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000146232f55:
        if (iVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x30) = plVar5;
    plVar5 = *(longlong **)(param_1 + 0x38);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar5 = plVar4;
        goto joined_r0x000146232f55;
      }
    }
    else {
      *(longlong **)(param_1 + 0x38) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_146232f2a;
    }
  }
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_146232ef4:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146232f7e FUN_146232f7e body=162 status=ok
// SIG undefined FUN_146232f7e(void)

void FUN_146232f7e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146232fbd;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146232fbd;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_146232fbd:
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
                    /* WARNING: Could not recover jumptable at 0x00014623301c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146233020 FUN_146233020 body=289 status=ok
// SIG undefined FUN_146233020(void)

undefined8 * FUN_146233020(undefined8 *param_1,undefined8 param_2)

{
  FUN_146233142(param_1,param_2,DAT_14cb977f0);
  *param_1 = &PTR_FUN_14b9837a0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(undefined4 *)(param_1 + 0xcf) = 2;
  param_1[0xd4] = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x67c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x684) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6b4) = 0;
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  param_1[0xda] = 0;
  *(undefined1 *)(param_1 + 0xdb) = 0;
  param_1[0xe1] = 0;
  *(undefined4 *)(param_1 + 0xe2) = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  *(undefined8 *)((longlong)param_1 + 0x714) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x71c) = 0;
  param_1[0xe5] = 0;
  *(undefined4 *)(param_1 + 0xe6) = 0;
  param_1[0xeb] = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x764) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x76c) = 0;
  param_1[0xef] = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  param_1[0xf5] = 0;
  *(undefined4 *)(param_1 + 0xf6) = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7bc) = 0;
  param_1[0xf9] = 0;
  *(undefined4 *)(param_1 + 0xfa) = 0;
  param_1[0xfb] = 0;
  return param_1;
}



// FUNCTION 146233142 FUN_146233142 body=3072 status=ok
// SIG undefined FUN_146233142(void)

undefined8 * FUN_146233142(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined ***pppuVar11;
  code *pcVar12;
  longlong lVar13;
  ushort uVar14;
  ulonglong uVar15;
  ushort uVar16;
  ulonglong uVar17;
  undefined1 auStack_e8 [32];
  code **local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  code *local_a8;
  longlong *plStack_a0;
  undefined ***local_98;
  undefined **local_88;
  undefined8 *local_80;
  longlong local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_14b4df960;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x14] = 2;
  param_1[0x15] = 0;
  puVar4 = param_1 + 0x15;
  FUN_14485c47a(puVar4);
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x404) = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x454) = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x49c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  *(undefined8 *)((longlong)param_1 + 0x509) = 0;
  *(undefined8 *)((longlong)param_1 + 0x511) = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0xa8] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa9] = param_3;
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  *(undefined8 *)((longlong)param_1 + 0x58c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x594) = 0;
  param_1[0xb4] = 0;
  *(undefined4 *)(param_1 + 0xb5) = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5fc) = 0;
  param_1[0xc1] = 0;
  *(undefined4 *)(param_1 + 0xc2) = 0;
  param_1[199] = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x64c) = 0;
  param_1[0xcb] = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  lVar7 = FUN_140a68038(1);
  if (lVar7 != 0) {
    uVar8 = FUN_1401cb356();
    local_c8 = &local_a8;
    local_98 = (undefined ***)0x0;
    local_88 = &PTR_LAB_14b4e26a0;
    local_a8 = FUN_143f1be24;
    local_80 = param_1;
    local_78 = lVar7;
    FUN_1401cbba4(uVar8,&local_b8,L"GbxFriendsSessionTicker",0);
    if ((undefined8 **)(param_1 + 0xaa) != &local_b8) {
      param_1[0xaa] = local_b8;
      local_b8 = (undefined8 *)0x0;
      plVar9 = (longlong *)param_1[0xab];
      param_1[0xab] = local_b0;
      local_b0 = (longlong *)0x0;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar3 = (int *)((longlong)plVar9 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
    }
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      piVar3 = (int *)((longlong)local_b0 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_b0 + 0x10))();
      }
    }
    if (local_a8 != (code *)0x0) {
      pppuVar11 = local_98;
      if (local_98 == (undefined ***)0x0) {
        pppuVar11 = &local_88;
      }
      (*(code *)(*pppuVar11)[2])();
    }
  }
  FUN_140b708a0(param_1);
  local_b8 = (undefined8 *)0x0;
  plVar9 = (longlong *)FUN_1401e3228();
  if (plVar9 == (longlong *)0x0) {
    local_a8 = (code *)0x0;
    plStack_a0 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar9 + 0x28))(plVar9,&local_a8);
    pcVar12 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_b8 = (undefined8 *)0x0;
      local_b0 = (longlong *)((ulonglong)local_b0 & 0xffffffff00000000);
      FUN_1446efa72(&local_b8,0,2,0x10);
      local_b0._0_4_ = 2;
      *local_b8 = &PTR_LAB_14b4e27a0;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      local_b8[2] = lVar10;
      *local_b8 = &PTR_FUN_14b4e2730;
      local_b8[3] = param_1;
      (**(code **)(*(longlong *)pcVar12 + 0x68))(pcVar12,&local_c0,&local_b8);
      param_1[0x9a] = local_c0;
      FUN_1449db362(&local_b8);
      pcVar12 = local_a8;
      local_b8 = (undefined8 *)0x0;
      local_b0._0_4_ = 0;
      FUN_1446efa72(&local_b8,0,2,0x10);
      local_b0 = (longlong *)CONCAT44(local_b0._4_4_,2);
      *local_b8 = &PTR_LAB_14b4e27a0;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      local_b8[2] = lVar10;
      *local_b8 = &PTR_FUN_14b4e2810;
      local_b8[3] = param_1;
      (**(code **)(*(longlong *)pcVar12 + 200))(pcVar12,&local_c0,&local_b8);
      param_1[0x9b] = local_c0;
      FUN_1449db362(&local_b8);
    }
  }
  plVar9 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  plVar9 = (longlong *)FUN_140a68038(1);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,&local_a8);
    pcVar12 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_b8 = (undefined8 *)0x0;
      local_b0 = (longlong *)((ulonglong)local_b0 & 0xffffffff00000000);
      FUN_1446efa72(&local_b8,0,2,0x10);
      local_b0._0_4_ = 2;
      *local_b8 = &PTR_LAB_14b4e27a0;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      local_b8[2] = lVar10;
      *local_b8 = &PTR_FUN_14b4e2880;
      local_b8[3] = param_1;
      (**(code **)(*(longlong *)pcVar12 + 0x68))(pcVar12,&local_c0,&local_b8);
      param_1[0x9d] = local_c0;
      FUN_1449db362(&local_b8);
      pcVar12 = local_a8;
      local_b8 = (undefined8 *)0x0;
      local_b0._0_4_ = 0;
      FUN_1446efa72(&local_b8,0,2,0x10);
      local_b0 = (longlong *)CONCAT44(local_b0._4_4_,2);
      *local_b8 = &PTR_LAB_14b4e27a0;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      local_b8[2] = lVar10;
      *local_b8 = &PTR_FUN_14b4e28f0;
      local_b8[3] = param_1;
      (**(code **)(*(longlong *)pcVar12 + 200))(pcVar12,&local_c0,&local_b8);
      param_1[0x9e] = local_c0;
      FUN_1449db362(&local_b8);
    }
    plVar1 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_a0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_a0)(plStack_a0);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    local_a8 = (code *)0x0;
    plStack_a0 = (longlong *)0x0;
    local_c8 = (code **)&DAT_14c872ce8;
    FUN_14105aa76(DAT_14c872ce0,L"GbxFriends",L"PlatformsToPoll",&local_a8);
    (**(code **)(*plVar9 + 0x10))(plVar9,&local_c0);
    FUN_1400021e4(&local_c0,&local_b8);
    bVar5 = true;
    if ((longlong)(int)plStack_a0 != 0) {
      pcVar12 = local_a8;
LAB_146233985:
      if (*(int *)(pcVar12 + 8) == (int)local_b0) {
        if (1 < (int)local_b0) {
          lVar7 = 0;
          do {
            uVar14 = *(ushort *)(*(longlong *)pcVar12 + lVar7);
            uVar15 = (ulonglong)uVar14;
            uVar16 = *(ushort *)((longlong)local_b8 + lVar7);
            if (uVar14 == uVar16) {
              if (uVar14 == 0) break;
            }
            else {
              if (0x7f < (uVar16 | uVar14)) goto LAB_146233cd9;
              uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
              uVar17 = (ulonglong)uVar16;
              uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
              if ((&DAT_149e05da0)[uVar15] != (&DAT_149e05da0)[uVar17]) goto LAB_146233cd9;
            }
            lVar7 = lVar7 + 2;
          } while( true );
        }
        goto LAB_146233ce5;
      }
      if (*(int *)(pcVar12 + 8) + (int)local_b0 == 1) goto LAB_146233ce5;
      goto LAB_14623399f;
    }
LAB_1462339a8:
    if (local_b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (!bVar5) {
      *(undefined1 *)(param_1 + 0xa3) = 1;
      local_c8 = (code **)&DAT_14c872ce8;
      cVar6 = FUN_14153841e(DAT_14c872ce0,L"GbxFriends",L"PlatformFriendsPollingSeconds",
                            param_1 + 0xa6);
      if (cVar6 == '\0') {
        *(undefined4 *)(param_1 + 0xa6) = 0x41f00000;
      }
    }
    FUN_1447a1747(local_a8,(ulonglong)plStack_a0 & 0xffffffff);
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  cVar6 = FUN_144729dda(puVar4);
  if (cVar6 != '\0') {
    lVar7 = FUN_14479d2ce(puVar4);
    lVar7 = *(longlong *)(lVar7 + 0x48);
    if (lVar7 != 0) {
      lVar10 = FUN_140b7066c();
      if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
        local_a8 = (code *)0x0;
        plStack_a0 = (longlong *)((ulonglong)plStack_a0 & 0xffffffff00000000);
        FUN_1446efa72(&local_a8,0,2,0x10);
        plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,2);
        *(undefined ***)local_a8 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar13 == 0) {
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        *(longlong *)(local_a8 + 0x10) = lVar13;
        *(undefined ***)local_a8 = &PTR_FUN_14b4e2960;
        *(undefined8 **)(local_a8 + 0x18) = param_1;
        FUN_1448b6402(lVar7 + 0x2d0,&local_b8,&local_a8);
        FUN_1449db362(&local_a8);
        param_1[0x9f] = local_b8;
      }
    }
  }
  local_a8 = (code *)0x0;
  plStack_a0 = (longlong *)((ulonglong)plStack_a0 & 0xffffffff00000000);
  FUN_1446efa72(&local_a8,0,2,0x10);
  plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,2);
  *(undefined ***)local_a8 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  *(longlong *)(local_a8 + 0x10) = lVar10;
  *(undefined ***)local_a8 = &PTR_FUN_14b4e29d0;
  *(undefined8 **)(local_a8 + 0x18) = param_1;
  FUN_1448b6402(&DAT_14c872c10,&local_b8,&local_a8);
  FUN_1449db362(&local_a8);
  param_1[0xa0] = local_b8;
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_146233cd9:
  if (uVar14 == uVar16) {
LAB_146233ce5:
    bVar5 = false;
    goto LAB_1462339a8;
  }
LAB_14623399f:
  pcVar12 = pcVar12 + 0x10;
  if (pcVar12 == local_a8 + (longlong)(int)plStack_a0 * 0x10) goto LAB_1462339a8;
  goto LAB_146233985;
}



// FUNCTION 146233d44 FUN_146233d44 body=72 status=ok
// SIG undefined FUN_146233d44(void)

void FUN_146233d44(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x2b0))();
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_1403a12cc(lVar1);
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146233d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x48))(plVar2,param_4,*(code **)(*plVar2 + 0x48));
        return;
      }
    }
  }
  return;
}



// FUNCTION 146233d8c FUN_146233d8c body=44 status=ok
// SIG undefined FUN_146233d8c(void)

void FUN_146233d8c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1457f66cc(param_2);
  if (lVar1 != 0) {
    FUN_146233db8(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 146233db8 FUN_146233db8 body=595 status=ok
// SIG undefined FUN_146233db8(void)

void FUN_146233db8(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  byte bVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_b8 [38];
  byte local_92;
  byte local_91;
  int local_90;
  int local_8c;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_64;
  int local_5c;
  ulonglong local_58;
  int local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar2 = FUN_144a8940a(param_1 + 0x28,param_2 + 0x10);
  if (cVar2 == '\0') {
    local_68 = *(undefined4 *)(param_2 + 0x24);
    local_70 = *(undefined8 *)(param_2 + 0x1c);
    local_64 = *(ulonglong *)(param_2 + 0x28);
    local_5c = *(int *)(param_2 + 0x30);
    local_58 = *(ulonglong *)(param_2 + 0x34);
    local_50 = *(int *)(param_2 + 0x3c);
    local_4c = 0;
    uVar5 = *(uint *)(param_2 + 0x1c);
    if (*(int *)(param_2 + 0x24) != 0) {
      uVar5 = FUN_144a78877(uVar5);
    }
    uVar6 = (uint)local_64;
    if (local_5c != 0) {
      uVar6 = FUN_144a78877(local_64 & 0xffffffff);
    }
    uVar7 = (uint)local_58;
    if (local_50 != 0) {
      uVar7 = FUN_144a78877(local_58 & 0xffffffff);
    }
    iVar4 = FUN_140d7f9b6((longlong *)(param_1 + 0x98),uVar6 ^ uVar5 ^ uVar7,&local_70);
    if (iVar4 != -1) {
      lVar11 = *(longlong *)(param_1 + 0x98);
      if ((lVar11 + (longlong)iVar4 * 0x40 != 0) &&
         (puVar10 = (undefined8 *)(lVar11 + (longlong)iVar4 * 0x40 + 0x28),
         puVar10 != (undefined8 *)0x0)) {
        FUN_14117fc02(*puVar10);
        FUN_1457a4a7c(param_1,puVar10);
      }
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0xf0);
    lVar11 = (longlong)iVar4;
    if (lVar11 != 0) {
      lVar8 = *(longlong *)(param_1 + 0xe8);
      local_92 = FUN_140ac16b0(lVar8 + 0x1c,param_2 + 0x1c);
      local_78 = lVar8 + 0x84;
      local_90 = 0;
      iVar9 = 0;
      local_88 = lVar8;
      do {
        lVar8 = (longlong)iVar9;
        iVar13 = iVar9 + 1;
        if (iVar9 + 1 < iVar4) {
          iVar13 = iVar4;
        }
        local_80 = lVar8 * 0x68;
        lVar14 = local_78 + local_80;
        local_91 = local_92;
        bVar12 = local_92 & 1;
        local_92 = local_92 ^ 1;
        local_8c = iVar9;
        do {
          lVar8 = lVar8 + 1;
          iVar1 = iVar13;
          if (lVar11 <= lVar8) break;
          bVar3 = FUN_140ac16b0(lVar14,param_2 + 0x1c);
          iVar9 = iVar9 + 1;
          lVar14 = lVar14 + 0x68;
          iVar1 = iVar9;
        } while (bVar12 == bVar3);
        iVar9 = iVar1;
        iVar13 = iVar9 - local_8c;
        if ((local_91 & 1) == 0) {
          if (local_90 != local_8c) {
            memmove((void *)((longlong)local_90 * 0x68 + local_88),(void *)(local_80 + local_88),
                    (longlong)iVar13 * 0x68);
          }
          local_90 = local_90 + iVar13;
        }
        else {
          FUN_145a50286(local_80 + local_88,iVar13);
        }
      } while (lVar8 < lVar11);
      *(int *)(param_1 + 0xf0) = local_90;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14623400c FUN_14623400c body=68 status=ok
// SIG undefined FUN_14623400c(void)

void FUN_14623400c(int *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  FUN_14167ae96(param_2 + 0x30,param_3,param_4,param_5);
  (**(code **)(**(longlong **)(param_1 + 2) + 0x10))();
  *param_1 = *param_1 + -1;
  if (*param_1 == 0) {
    FUN_14018802a(*(undefined8 *)(param_1 + 2));
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



// FUNCTION 146234050 FUN_146234050 body=195 status=ok
// SIG undefined FUN_146234050(void)

void FUN_146234050(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar5 = (**(code **)(*param_1 + 8))();
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1447210f0(lVar5);
  }
  FUN_140cfc686(&local_28,uVar6);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_20;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (local_28 != 0) {
        FUN_146234114(local_28,param_1);
      }
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146234114 FUN_146234114 body=317 status=ok
// SIG undefined FUN_146234114(void)

void FUN_146234114(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 *local_58;
  int local_4c;
  undefined8 *local_48 [2];
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = (**(code **)(*param_2 + 8))(param_2);
  if (lVar4 != 0) {
    FUN_140cfc4c2(local_48,param_2);
    local_38 = 0;
    iVar3 = FUN_140e5c0b0(param_1 + 0xc58,local_48);
    *(undefined1 *)(*(longlong *)(param_1 + 0xc58) + 0x10 + (longlong)iVar3 * 0x18) = 1;
    plVar1 = (longlong *)(param_1 + 0xc78);
    local_58 = (undefined8 *)0x0;
    FUN_14485c47a(&local_58,lVar4);
    local_48[0] = local_58;
    iVar3 = FUN_140cfc7be(plVar1,(uint)((ulonglong)local_58 >> 0x20) ^ (uint)local_58,local_48);
    if (iVar3 == -1) {
      cVar2 = FUN_144729dda(param_1 + 8);
      if (cVar2 != '\0') {
        lVar5 = FUN_14479d2ce(param_1 + 8);
        lVar5 = *(longlong *)(lVar5 + 0x38);
        if (lVar5 != 0) {
          local_60 = 0;
          FUN_14485c47a(&local_60,lVar4);
          local_48[0] = &local_60;
          FUN_14623436a(plVar1,&local_4c);
          FUN_146234252(*plVar1 + (longlong)local_4c * 0x20 + 8,lVar4,lVar5);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146234252 FUN_146234252 body=278 status=ok
// SIG undefined FUN_146234252(void)

void FUN_146234252(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  uStack_60 = 0;
  iVar1 = *(int *)(param_3 + 0x100);
  uVar3 = uStack_60;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_3 + 0xf8);
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar6) != 0) {
        lVar5 = FUN_143e34816(param_2);
        if (lVar5 != 0) {
          local_58 = 0;
          FUN_14485c47a(&local_58,lVar5);
          uVar3 = uStack_60;
          lVar5 = (longlong)(int)uStack_60;
          uVar4 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar4);
          if (uStack_60._4_4_ < uVar4) {
            FUN_14898ca2c(&local_68,uVar3 & 0xffffffff);
          }
          *(longlong *)(local_68 + lVar5 * 8) = local_58;
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
    uVar3 = uStack_60;
    if (0 < (int)uStack_60) {
      iStack_50 = (int)uStack_60;
      uStack_4c = uStack_60._4_4_;
      local_58 = local_68;
      lVar2 = *param_1;
      uVar3 = param_1[1];
      *(undefined4 *)param_1 = (undefined4)local_68;
      *(undefined4 *)((longlong)param_1 + 4) = local_68._4_4_;
      *(int *)(param_1 + 1) = (int)uStack_60;
      *(uint *)((longlong)param_1 + 0xc) = uStack_60._4_4_;
      local_68 = lVar2;
    }
  }
  uStack_60 = uVar3;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14623436a FUN_14623436a body=292 status=ok
// SIG undefined FUN_14623436a(void)

undefined4 * FUN_14623436a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146234534(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  cVar3 = FUN_146234490(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14623461a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146234490 FUN_146234490 body=163 status=ok
// SIG undefined FUN_146234490(void)

undefined8 FUN_146234490(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    iVar6 = FUN_140cfc7be();
    if (iVar6 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *(undefined4 *)param_3;
      uVar3 = *(undefined4 *)((longlong)param_3 + 4);
      uVar4 = *(undefined4 *)(param_3 + 1);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined8 *)(puVar1 + 4) = param_3[2];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_14898c764(param_1,*param_4);
      *param_4 = iVar6;
      uVar7 = 1;
      goto LAB_1462344b6;
    }
  }
  uVar7 = 0;
LAB_1462344b6:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146234534 FUN_146234534 body=230 status=ok
// SIG undefined FUN_146234534(void)

int * FUN_146234534(longlong *param_1,int *param_2)

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



// FUNCTION 14623461a FUN_14623461a body=448 status=ok
// SIG undefined FUN_14623461a(void)

void FUN_14623461a(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 1462347dc FUN_1462347dc body=293 status=ok
// SIG undefined FUN_1462347dc(void)

void FUN_1462347dc(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 == 0) {
    return;
  }
  if (*(char *)(lVar1 + 0x2f0) == '\x01') {
    *(undefined1 *)(lVar1 + 0x2f0) = 0;
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
    FUN_14129c41e(param_1,&DAT_14cbd93f0,1);
    return;
  }
  lVar5 = FUN_14479d2ce(param_1 + 0x30);
  cVar3 = FUN_140426394(lVar5 + 0x3c0,&DAT_14cbd9378);
  if ((cVar3 != '\0') && (*(char *)(param_1 + 0x2e8) == '\0')) {
    FUN_148ec5702(param_1);
    return;
  }
  cVar3 = FUN_140f9c09a(param_1);
  if (cVar3 == '\0') {
    *(undefined1 *)(lVar1 + 0x2f0) = 0;
    FUN_146234902(param_1);
    return;
  }
  plVar6 = (longlong *)FUN_140f9a2c8(param_1);
  lVar1 = *plVar6;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
  *(int *)(lVar1 + 0x98) = *(int *)(lVar1 + 0x98) + 1;
  if (*(char *)(lVar1 + 8) == '\0') {
    iVar4 = *(int *)(lVar1 + 0xc) + 1;
LAB_1462348ca:
    *(undefined1 *)(lVar1 + 8) = 1;
    *(int *)(lVar1 + 0xc) = iVar4;
  }
  else if (*(int *)(lVar1 + 0xc) == 0) {
    iVar4 = 1;
    goto LAB_1462348ca;
  }
  if (*(int *)(lVar1 + 0x60) == -1) {
    if (*(int *)(lVar1 + 100) != 0) goto LAB_1462348e6;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(lVar1 + 100) + 1;
  }
  *(undefined4 *)(lVar1 + 0x60) = 0xffffffff;
  *(int *)(lVar1 + 100) = iVar4;
LAB_1462348e6:
                    /* WARNING: Could not recover jumptable at 0x0001462348ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
  return;
}



// FUNCTION 146234902 FUN_146234902 body=199 status=ok
// SIG undefined FUN_146234902(void)

void FUN_146234902(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x53) & 1) != 0) {
    (**(code **)(*param_1 + 0x130))(param_1);
  }
  FUN_1462349ca(param_1);
  FUN_14129c41e(param_1,&DAT_14cbd9378,1);
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  lVar1 = param_1[6];
  *puVar2 = &PTR_FUN_14b9c13a0;
  FUN_1446ddc76(&local_38,"ClearStructureredInteractable",1);
  FUN_14039176c(puVar2,lVar1,local_38,1);
  *puVar2 = &PTR_FUN_14b9c13a0;
  FUN_140391314(param_1,puVar2);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462349ca FUN_1462349ca body=153 status=ok
// SIG undefined FUN_1462349ca(void)

void FUN_1462349ca(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar1 = &PTR_FUN_14b9c6e30;
  FUN_1446ddc76(&local_30,"DeinitStandIn",1);
  FUN_14039176c(puVar1,*(undefined8 *)(param_1 + 0x30),local_30,1);
  *puVar1 = &PTR_FUN_14b9c6e30;
  puVar1[7] = *(undefined8 *)(param_1 + 0x18);
  FUN_140391314(param_1,puVar1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146234a64 FUN_146234a64 body=148 status=ok
// SIG undefined FUN_146234a64(void)

bool FUN_146234a64(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146234afa FUN_146234afa body=174 status=ok
// SIG undefined FUN_146234afa(void)

void FUN_146234afa(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_30);
  lVar3 = *(longlong *)(local_30 + 0x400);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x58));
  *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + 1;
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
  if (*(int *)(lVar3 + 0x44) == 1) {
    iVar4 = 1;
    if (*(int *)(lVar3 + 0x48) != 0) goto LAB_146234b62;
  }
  else {
    iVar4 = *(int *)(lVar3 + 0x48) + 1;
  }
  *(undefined4 *)(lVar3 + 0x44) = 1;
  *(int *)(lVar3 + 0x48) = iVar4;
LAB_146234b62:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000146234b7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x58));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146234baa FUN_146234baa body=263 status=ok
// SIG undefined FUN_146234baa(void)

void FUN_146234baa(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x78) = param_2;
  cVar4 = *(char *)(param_1 + 0x80) + '\x01';
  if (cVar4 == '\0') {
    cVar4 = *(char *)(param_1 + 0x80) + '\x02';
  }
  *(char *)(param_1 + 0x80) = cVar4;
  iVar2 = *(int *)(param_1 + 0xe0);
  *(uint *)(param_1 + 0xe0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xe4) < iVar2 + 1U) {
    FUN_140116b62(param_1 + 0xd8,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0xd8);
  lVar5 = (longlong)iVar2 * 0x68;
  *(undefined1 *)(lVar3 + lVar5) = 1;
  *(undefined8 *)(lVar3 + 4 + lVar5) = 0xffffffffffffffff;
  *(undefined4 *)(lVar3 + 0xc + lVar5) = 0xbf800000;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + 0x50 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x58 + lVar5) = param_2;
  *(char *)(lVar3 + 0x60 + lVar5) = cVar4;
  *(undefined2 *)(lVar3 + 0x61 + lVar5) = 0;
  lVar3 = *(longlong *)(param_1 + 0x28);
  local_30 = param_1;
  if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  FUN_1405f6d44(lVar3 + 0x16c8,&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146234cb2 FUN_146234cb2 body=562 status=ok
// SIG undefined FUN_146234cb2(void)

void FUN_146234cb2(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ushort *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined ***pppuVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined1 *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x2f0) == 0) {
    puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *puVar6 = &PTR_FUN_14b9c71b0;
    FUN_1446ddc76(local_78,"ClearItem",1);
    FUN_14039176c(puVar6,uVar3,local_78[0],1);
    *puVar6 = &PTR_FUN_14b9c71b0;
    *(undefined4 *)(puVar6 + 7) = 1;
    FUN_140391314(param_1,puVar6);
    plVar7 = (longlong *)FUN_14134fce6(param_1);
    lVar4 = *plVar7;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0xb0));
    *(int *)(lVar4 + 0xa8) = *(int *)(lVar4 + 0xa8) + 1;
    FUN_146234ee6(lVar4);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0xb0));
    FUN_140de1078(param_1,&DAT_14cbde0c8,0,0);
    lVar4 = *(longlong *)(param_1 + 0x288);
    if (lVar4 != 0) {
      if ((longlong)*(int *)(lVar4 + 0x408) != 0) {
        lVar9 = (longlong)*(int *)(lVar4 + 0x408) * 0x268;
        lVar10 = *(longlong *)(lVar4 + 0x400) + 0x148;
        do {
          FUN_14020fad6(lVar10,&DAT_149dfb77a);
          lVar10 = lVar10 + 0x268;
          lVar9 = lVar9 + -0x268;
        } while (lVar9 != 0);
      }
      FUN_141354436(param_1);
      iVar2 = *(int *)(lVar4 + 0xb68);
      if ((longlong)iVar2 != 0) {
        lVar10 = *(longlong *)(lVar4 + 0xb60);
        lVar9 = 0;
        do {
          pbVar1 = (byte *)(lVar10 + 0x9f + lVar9);
          *pbVar1 = *pbVar1 & 0xfe;
          lVar9 = lVar9 + 0x280;
        } while ((longlong)iVar2 * 0x280 != lVar9);
      }
      local_68 = (undefined ***)0x0;
      local_58 = &PTR_LAB_14b9c7360;
      local_50 = &LAB_1442ecc66;
      local_78[0] = &LAB_148e9a540;
      FUN_1462350d0(lVar4,local_78);
      if (local_78[0] != (undefined1 *)0x0) {
        pppuVar8 = local_68;
        if (local_68 == (undefined ***)0x0) {
          pppuVar8 = &local_58;
        }
        (*(code *)(*pppuVar8)[2])();
      }
      FUN_146234f2c(lVar4,0xffffffff);
      *(byte *)(lVar4 + 0x8f8) = *(byte *)(lVar4 + 0x8f8) & 0x7f;
      puVar5 = *(ushort **)(lVar4 + 0x80);
      if (puVar5 != (ushort *)0x0) {
        *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146234ee6 FUN_146234ee6 body=69 status=ok
// SIG undefined FUN_146234ee6(void)

void FUN_146234ee6(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x60) == -1) {
    iVar1 = 1;
    if (*(int *)(param_1 + 100) != 0) goto LAB_146234f02;
  }
  else {
    iVar1 = *(int *)(param_1 + 100) + 1;
  }
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(int *)(param_1 + 100) = iVar1;
LAB_146234f02:
  if (*(int *)(param_1 + 0x68) == 0) {
    iVar1 = 1;
    if (*(int *)(param_1 + 0x6c) != 0) {
      return;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x6c) + 1;
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(int *)(param_1 + 0x6c) = iVar1;
  return;
}



// FUNCTION 146234f2c FUN_146234f2c body=419 status=ok
// SIG undefined FUN_146234f2c(void)

void FUN_146234f2c(longlong param_1,uint param_2)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x3f8);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x3f0);
    lVar4 = 0;
    do {
      pbVar1 = (byte *)(lVar3 + 0x9f + lVar4);
      *pbVar1 = *pbVar1 & 0xfe;
      lVar4 = lVar4 + 0x268;
    } while ((longlong)iVar2 * 0x268 - lVar4 != 0);
  }
  iVar2 = *(int *)(param_1 + 0x408);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x400);
    lVar4 = 0;
    do {
      pbVar1 = (byte *)(lVar3 + 0x9f + lVar4);
      *pbVar1 = *pbVar1 & 0xfe;
      lVar4 = lVar4 + 0x268;
    } while ((longlong)iVar2 * 0x268 - lVar4 != 0);
  }
  iVar2 = *(int *)(param_1 + 0xb68);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xb60);
    lVar4 = 0;
    do {
      pbVar1 = (byte *)(lVar3 + 0x9f + lVar4);
      *pbVar1 = *pbVar1 & 0xfe;
      lVar4 = lVar4 + 0x280;
    } while ((longlong)iVar2 * 0x280 != lVar4);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xb68))) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0xb60) + 0x254 + (ulonglong)param_2 * 0x280);
    if ((iVar2 != -1) && ((longlong)*(int *)(param_1 + 0x3f8) != 0)) {
      lVar3 = *(longlong *)(param_1 + 0x3f0);
      lVar4 = (longlong)*(int *)(param_1 + 0x3f8) * 0x268;
      do {
        if (*(int *)(lVar3 + 0x254) == iVar2) {
          if (lVar3 != 0) {
            *(byte *)(lVar3 + 0x9f) = *(byte *)(lVar3 + 0x9f) | 1;
            *(byte *)(param_1 + 0x8f8) = *(byte *)(param_1 + 0x8f8) | 0x80;
            iVar2 = *(int *)(param_1 + 0x408);
            if ((longlong)iVar2 != 0) {
              lVar4 = *(longlong *)(param_1 + 0x400);
              lVar5 = 0;
              do {
                *(byte *)(lVar4 + 0x9f + lVar5) =
                     *(byte *)(lVar4 + 0x9f + lVar5) & 0xfe |
                     *(int *)(lVar3 + 0x254) == *(int *)(lVar4 + 0x254 + lVar5);
                lVar5 = lVar5 + 0x268;
              } while ((longlong)iVar2 * 0x268 - lVar5 != 0);
            }
            if ((int)param_2 < *(int *)(param_1 + 0xb68)) {
              pbVar1 = (byte *)(*(longlong *)(param_1 + 0xb60) + 0x9f + (ulonglong)param_2 * 0x280);
              *pbVar1 = *pbVar1 | 1;
            }
            *(undefined1 *)(param_1 + 0x928) = 0;
            return;
          }
          break;
        }
        lVar3 = lVar3 + 0x268;
        lVar4 = lVar4 + -0x268;
      } while (lVar4 != 0);
    }
  }
  *(byte *)(param_1 + 0x8f8) = *(byte *)(param_1 + 0x8f8) & 0x7f;
  return;
}



// FUNCTION 1462350d0 FUN_1462350d0 body=253 status=ok
// SIG undefined FUN_1462350d0(void)

void FUN_1462350d0(longlong param_1,undefined8 *param_2)

{
  ushort *puVar1;
  code *pcVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 0x408) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x400);
    lVar7 = (longlong)*(int *)(param_1 + 0x408) * 0x268 + lVar6;
    do {
      pcVar2 = (code *)*param_2;
      plVar5 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar5 = param_2 + 4;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      bVar3 = (*pcVar2)(uVar4,lVar6);
      *(byte *)(lVar6 + 0x9e) = *(byte *)(lVar6 + 0x9e) & 0xfe | bVar3;
      lVar6 = lVar6 + 0x268;
    } while (lVar6 != lVar7);
  }
  if ((longlong)*(int *)(param_1 + 0x3f8) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x3f0);
    lVar7 = (longlong)*(int *)(param_1 + 0x3f8) * 0x268 + lVar6;
    do {
      pcVar2 = (code *)*param_2;
      plVar5 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar5 = param_2 + 4;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      bVar3 = (*pcVar2)(uVar4,lVar6);
      *(byte *)(lVar6 + 0x9e) = *(byte *)(lVar6 + 0x9e) & 0xfe | bVar3;
      lVar6 = lVar6 + 0x268;
    } while (lVar6 != lVar7);
  }
  puVar1 = *(ushort **)(param_1 + 0x80);
  if (puVar1 != (ushort *)0x0) {
    *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  return;
}



// FUNCTION 1462351ce FUN_1462351ce body=983 status=ok
// SIG undefined FUN_1462351ce(void)

void FUN_1462351ce(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  double *pdVar14;
  uint uVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  double dStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 *local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar11 = FUN_14479d2ce(param_1 + 0xb0);
  if (lVar11 != 0) {
    FUN_140457ffc(lVar11 + 0x6b8,param_1);
    if (*(char *)(param_1 + 0xb8) == '\0') {
      plVar12 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
      if (plVar12 != (longlong *)0x0) {
        puVar13 = &local_c8;
        FUN_14070cbf4(puVar13,plVar12);
        plVar17 = uStack_c0;
        uVar18 = SUB84(puVar13,0);
        if (local_c8 == (undefined8 *)0x0) {
          lVar2 = plVar12[0x39];
          if (lVar2 == 0) {
            puVar13 = &DAT_14c8464e0;
            uVar20 = (undefined4)DAT_14c8464f0;
            uVar21 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          }
          else {
            uVar20 = (undefined4)*(undefined8 *)(lVar2 + 0x270);
            uVar21 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
            puVar13 = (undefined8 *)(lVar2 + 0x260);
          }
          uVar22 = *(undefined4 *)puVar13;
          uVar23 = *(undefined4 *)((longlong)puVar13 + 4);
          uVar24 = *(undefined4 *)(puVar13 + 1);
          uVar25 = *(undefined4 *)((longlong)puVar13 + 0xc);
          local_e8 = *(double *)(lVar11 + 0x260);
          dStack_e0 = *(double *)(lVar11 + 0x268);
          local_d8 = *(double *)(lVar11 + 0x270);
        }
        else {
          uVar22 = *(undefined4 *)(local_c8 + 0xb1);
          uVar23 = *(undefined4 *)((longlong)local_c8 + 0x58c);
          uVar24 = *(undefined4 *)(local_c8 + 0xb2);
          uVar25 = *(undefined4 *)((longlong)local_c8 + 0x594);
          uVar20 = (undefined4)local_c8[0xb3];
          uVar21 = (undefined4)((ulonglong)local_c8[0xb3] >> 0x20);
          local_e8 = *(double *)(lVar11 + 0x260);
          dStack_e0 = *(double *)(lVar11 + 0x268);
          local_d8 = (double)*(float *)((longlong)local_c8 + 0x5d4) + *(double *)(lVar11 + 0x270);
          puVar13 = local_c8;
        }
        if (uStack_c0 != (longlong *)0x0) {
          LOCK();
          plVar16 = uStack_c0 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            plVar16 = uStack_c0;
            puVar13 = (undefined8 *)(**(code **)*uStack_c0)();
            uVar18 = SUB84(plVar16,0);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              puVar13 = (undefined8 *)(**(code **)(*plVar17 + 0x10))();
              uVar18 = SUB84(plVar17,0);
            }
          }
        }
        dVar9 = local_e8;
        if (((1.9999999494757503e-05 <= ABS((double)CONCAT44(uVar23,uVar22) - local_e8)) ||
            (1.9999999494757503e-05 <= ABS((double)CONCAT44(uVar25,uVar24) - dStack_e0))) ||
           (1.9999999494757503e-05 <= ABS((double)CONCAT44(uVar21,uVar20) - local_d8))) {
          lVar11 = plVar12[0x39];
          if (lVar11 == 0) {
            local_98 = DAT_14c846508;
            local_a8 = (undefined4)DAT_14c8464f8;
            uStack_a4 = DAT_14c8464f8._4_4_;
            uVar18 = (undefined4)DAT_14c846500;
            uVar19 = DAT_14c846500._4_4_;
          }
          else {
            puVar5 = *(undefined8 **)(lVar11 + 0x240);
            plVar17 = *(longlong **)(lVar11 + 0x248);
            dVar6 = *(double *)(lVar11 + 0x250);
            dVar7 = *(double *)(lVar11 + 600);
            pdVar14 = *(double **)(lVar11 + 0x228);
            local_c8 = puVar5;
            uStack_c0 = plVar17;
            local_b8 = dVar6;
            dStack_b0 = dVar7;
            if (pdVar14 == (double *)0x0) {
              uVar18 = 0x40;
              pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
              dVar8 = DAT_14c8463d8;
              *pdVar14 = DAT_14c8463d0;
              pdVar14[1] = dVar8;
              dVar8 = DAT_14c8463e8;
              pdVar14[2] = DAT_14c8463e0;
              pdVar14[3] = dVar8;
              dVar8 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
              pdVar14[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
              pdVar14[5] = dVar8;
              puVar13 = DAT_14c846508;
              pdVar14[6] = (double)DAT_14c846508;
              *(double **)(lVar11 + 0x228) = pdVar14;
            }
            auVar3._8_4_ = (int)-(ulonglong)((double)plVar17 != pdVar14[1]);
            auVar3._0_8_ = -(ulonglong)((double)puVar5 != *pdVar14);
            auVar3._12_4_ = (int)(-(ulonglong)((double)plVar17 != pdVar14[1]) >> 0x20);
            iVar10 = movmskpd((int)puVar13,auVar3);
            auVar4._8_4_ = (int)-(ulonglong)(dVar7 != pdVar14[3]);
            auVar4._0_8_ = -(ulonglong)(dVar6 != pdVar14[2]);
            auVar4._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar14[3]) >> 0x20);
            uVar15 = movmskpd(uVar18,auVar4);
            if ((uVar15 & 0x3fffffff) != 0 || iVar10 != 0) {
              pdVar14[2] = local_b8;
              pdVar14[3] = dStack_b0;
              *(undefined4 *)pdVar14 = (undefined4)local_c8;
              *(undefined4 *)((longlong)pdVar14 + 4) = local_c8._4_4_;
              *(undefined4 *)(pdVar14 + 1) = (undefined4)uStack_c0;
              *(undefined4 *)((longlong)pdVar14 + 0xc) = uStack_c0._4_4_;
              FUN_1448052ee(&local_c8,&local_a8);
              pdVar14[6] = (double)local_98;
              pdVar14[4] = (double)CONCAT44(uStack_a4,local_a8);
              pdVar14[5] = (double)uStack_a0;
            }
            local_98 = (undefined8 *)pdVar14[6];
            local_a8 = *(undefined4 *)(pdVar14 + 4);
            uStack_a4 = *(undefined4 *)((longlong)pdVar14 + 0x24);
            uVar18 = *(undefined4 *)(pdVar14 + 5);
            uVar19 = *(undefined4 *)((longlong)pdVar14 + 0x2c);
          }
          uStack_a0 = (longlong *)CONCAT44(uVar19,uVar18);
          local_f0 = local_d8 - (double)CONCAT44(uVar21,uVar20);
          local_f8 = dStack_e0 - (double)CONCAT44(uVar25,uVar24);
          local_100 = dVar9 - (double)CONCAT44(uVar23,uVar22);
          FUN_144a79a9c(&local_100,&local_c8);
          uStack_a0 = uStack_c0;
          local_108 = 0;
          (**(code **)(*plVar12 + 0x4d0))(plVar12,&local_e8,&local_a8,0);
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN_141543068(param_1 + 0x70);
  *(undefined1 *)(param_1 + 0xb8) = 0;
  FUN_14167b620(param_1);
  if ((local_90 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462355ae FUN_1462355ae body=1306 status=ok
// SIG undefined FUN_1462355ae(void)

undefined8 * FUN_1462355ae(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [32];
  longlong local_98 [3];
  longlong local_80;
  int local_78;
  undefined8 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14ba66690;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 2;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 2;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  memset(param_1 + 0x2a,0,0xb9);
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  local_70 = (undefined8 *)0x0;
  local_68._0_4_ = 0;
  FUN_1446efa72(&local_70,0,3,0x10);
  puVar4 = local_70;
  local_68._0_4_ = 3;
  *local_70 = &PTR_LAB_14ba690f0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_70[2] = lVar2;
  *local_70 = &PTR_FUN_14ba69080;
  local_70[3] = 0;
  FUN_14485c47a(local_70 + 3,param_1);
  puVar4[4] = FUN_1443e6a0e;
  FUN_144a450dc(param_1 + 7,&local_70);
  FUN_1449db362(&local_70);
  local_70 = (undefined8 *)0x0;
  local_68._0_4_ = 0;
  FUN_1446efa72(&local_70,0,3,0x10);
  puVar4 = local_70;
  local_68._0_4_ = 3;
  *local_70 = &PTR_LAB_14ba691d0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_70[2] = lVar2;
  *local_70 = &PTR_FUN_14ba69160;
  local_70[3] = 0;
  FUN_14485c47a(local_70 + 3,param_1);
  puVar4[4] = FUN_1490140b2;
  FUN_144a450dc(param_1 + 9,&local_70);
  FUN_1449db362(&local_70);
  local_70 = (undefined8 *)0x0;
  local_68._0_4_ = 0;
  FUN_1446efa72(&local_70,0,3,0x10);
  puVar4 = local_70;
  local_68 = CONCAT44(local_68._4_4_,3);
  *local_70 = &PTR_LAB_14ba690f0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_70[2] = lVar2;
  *local_70 = &PTR_FUN_14ba69080;
  local_70[3] = 0;
  FUN_14485c47a(local_70 + 3,param_1);
  puVar4[4] = FUN_1443e6e30;
  FUN_144a450dc(param_1 + 0xb,&local_70);
  FUN_1449db362(&local_70);
  local_98[0] = 0;
  local_98[1] = 0;
  sVar3 = wcslen(&DAT_14c764000);
  FUN_1412cfe60(&local_80,local_98,((int)sVar3 + 2) - (uint)((int)sVar3 == -1));
  FUN_1401aebe8(&local_80,&DAT_14c764000,sVar3 & 0xffffffff);
  FUN_1412cfe60(&local_70,&local_80,(local_78 == 0) + '\b');
  FUN_1401aebe8(&local_70,L"Content",7);
  if ((undefined8 **)(param_1 + 0x3c) == &local_70) {
    if (local_70 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if ((undefined8 *)param_1[0x3c] != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    param_1[0x3c] = local_70;
    local_70 = (undefined8 *)0x0;
    *(undefined4 *)(param_1 + 0x3d) = (undefined4)local_68;
    *(undefined4 *)((longlong)param_1 + 0x1ec) = local_68._4_4_;
    local_68 = 0;
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  lVar1 = param_1[2];
  puVar4 = *(undefined8 **)(lVar1 + 0x110);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_140aa6c08(lVar1);
    puVar4 = *(undefined8 **)(lVar1 + 0x110);
  }
  if (puVar4 != param_1) {
    if (DAT_14c951760 == '\0') {
      uVar5 = FUN_140c61bfa();
      FUN_1490141d6(uVar5,&local_70,param_1);
    }
    FUN_1490143a8(&local_70,param_1);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146235aca FUN_146235aca body=211 status=ok
// SIG undefined FUN_146235aca(void)

void FUN_146235aca(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if ((((char)param_2[2] == '\0') && (*param_2 != 0)) && ((longlong *)param_2[1] != (longlong *)0x0)
     ) {
    lVar1 = (**(code **)(*(longlong *)param_2[1] + 0x18))();
    if (lVar1 != 0) {
      lVar2 = FUN_14490fee6();
      if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
         (plVar4 = *(longlong **)(lVar1 + 0x3d0), plVar4 != (longlong *)0x0)) {
        uVar3 = FUN_140338614();
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar3);
        if (plVar4 != (longlong *)0x0) {
          uVar3 = FUN_140338614();
          plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
          if ((plVar4 != plVar5) && (plVar5 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000146235b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar5 + 0x30))(plVar5,param_1 + 0x2240,*(code **)(*plVar5 + 0x30));
            return;
          }
        }
      }
    }
  }
  FUN_145d73658(param_1,param_2);
  return;
}



// FUNCTION 146235ba8 FUN_146235ba8 body=1306 status=ok
// SIG undefined FUN_146235ba8(void)

undefined8 * FUN_146235ba8(undefined8 *param_1)

{
  FUN_140f2184e();
  *param_1 = &PTR_FUN_14b7decc0;
  param_1[0x72] = &PTR_FUN_14b7df890;
  param_1[0xe9] = &PTR_FUN_14b7df8f0;
  param_1[0xea] = &PTR_FUN_14b7df908;
  param_1[0x10c] = &PTR_FUN_14b7df920;
  param_1[0x10d] = &PTR_FUN_14b7df940;
  param_1[0x10e] = &PTR_FUN_14b7df980;
  param_1[0x10f] = &PTR_FUN_14b7df9a0;
  param_1[0x214] = &PTR_FUN_14b7df9c0;
  param_1[0x215] = &PTR_FUN_14b7dfa80;
  param_1[0x216] = &PTR_FUN_14b7dfab0;
  param_1[0x217] = &PTR_FUN_14b7dfb20;
  param_1[0x218] = &PTR_FUN_14b7dfb50;
  param_1[0x219] = &PTR_FUN_14b7dfbd0;
  param_1[0x21a] = &PTR_FUN_14b7dfc40;
  param_1[0x21b] = &PTR_FUN_14b7dfc70;
  param_1[0x21c] = &PTR_FUN_14b7dfca0;
  param_1[0x21d] = &PTR_FUN_14b7dfd10;
  param_1[0x21e] = &PTR_FUN_14b7dfd30;
  param_1[0x21f] = &PTR_FUN_14b7dfd50;
  param_1[0x220] = &PTR_FUN_14b7dfd80;
  param_1[0x221] = &PTR_FUN_14b7dfdc0;
  param_1[0x222] = &PTR_FUN_14b7dfde0;
  param_1[0x223] = &PTR_FUN_14b7dfe00;
  param_1[0x224] = &PTR_FUN_14b7dfe30;
  param_1[0x225] = &PTR_FUN_14b7dfe70;
  param_1[0x226] = &PTR_FUN_14b7dfe90;
  param_1[0x227] = &PTR_FUN_14b7dfeb0;
  param_1[0x228] = &PTR_FUN_14b7dff50;
  param_1[0x229] = &PTR_FUN_14b7dff80;
  param_1[0x22a] = &PTR_FUN_14b7dffa0;
  param_1[0x22b] = &PTR_FUN_14b7dffe0;
  param_1[0x22c] = &PTR_FUN_14b7e0010;
  param_1[0x22d] = &PTR_FUN_14b7e0030;
  param_1[0x22e] = &PTR_FUN_14b7e0060;
  param_1[0x22f] = &PTR_FUN_14b7e00b0;
  param_1[0x230] = &PTR_FUN_14b7e00e0;
  param_1[0x231] = &PTR_FUN_14b7e0130;
  param_1[0x232] = &PTR_FUN_14b7e0160;
  param_1[0x233] = &PTR_FUN_14b7e0180;
  param_1[0x236] = &PTR_FUN_14b7e01c0;
  param_1[0x744] = &PTR_FUN_14b7e01e0;
  param_1[0x745] = &PTR_FUN_14b7e0200;
  param_1[0x746] = &PTR_FUN_14b7e0230;
  param_1[0x747] = &PTR_FUN_14b7e0310;
  param_1[0x748] = &PTR_FUN_14b7e0330;
  param_1[0x749] = &PTR_FUN_14b7e0348;
  param_1[0x750] = &PTR_FUN_14b7e0360;
  param_1[0x751] = &PTR_FUN_14b7e0380;
  param_1[0x752] = &PTR_FUN_14b7e03c0;
  param_1[0x759] = &PTR_FUN_14b7e0470;
  param_1[0x75a] = &PTR_FUN_14b7e04b0;
  param_1[0x75b] = &PTR_FUN_14b7e04e0;
  param_1[0x75c] = &PTR_FUN_14b7e0510;
  param_1[0x75d] = &PTR_FUN_14b7e0550;
  param_1[0x761] = &PTR_FUN_14b7e0570;
  param_1[0x764] = &PTR_FUN_14b7e0580;
  param_1[0x765] = &PTR_FUN_14b7e05c0;
  param_1[0x766] = &PTR_FUN_14b7e06d0;
  param_1[0x767] = &PTR_FUN_14b7e06f0;
  param_1[0x768] = &PTR_FUN_14b7e0710;
  param_1[0x769] = &PTR_FUN_14b7e07b0;
  param_1[0x76a] = &PTR_FUN_14b7e0850;
  param_1[0x76b] = &PTR_FUN_14b7e0890;
  param_1[0x76c] = &PTR_FUN_14b7e08c0;
  param_1[0x76d] = &PTR_FUN_14b7e0950;
  param_1[0x76e] = &PTR_FUN_14b7e09c0;
  param_1[0x773] = &PTR_FUN_14b7e09f0;
  param_1[0x774] = &PTR_FUN_14b7e0a30;
  param_1[0x775] = &PTR_FUN_14b7e0a60;
  param_1[0x776] = &PTR_FUN_14b7e0a78;
  param_1[0x777] = &PTR_FUN_14b7e0a90;
  param_1[0x778] = &PTR_FUN_14b7e0ac0;
  param_1[0x779] = &PTR_FUN_14b7e0af0;
  param_1[0x77c] = &PTR_FUN_14b7e0b30;
  param_1[0x77d] = &PTR_FUN_14b7e0b50;
  param_1[0x77e] = &PTR_FUN_14b7e0c20;
  param_1[0x77f] = &PTR_FUN_14b7e0c40;
  param_1[0x780] = &PTR_FUN_14b7e0c60;
  param_1[0x781] = &PTR_FUN_14b7e0c90;
  param_1[0x782] = &PTR_FUN_14b7e0cb0;
  param_1[0x783] = &PTR_FUN_14b7e0cd0;
  param_1[0x784] = &PTR_FUN_14b7e0d00;
  param_1[0x785] = &PTR_FUN_14b7e0d30;
  param_1[0x786] = &PTR_FUN_14b7e0d50;
  param_1[0x787] = &PTR_FUN_14b7e0d70;
  param_1[0x788] = &PTR_FUN_14b7e0da0;
  param_1[0x789] = &PTR_FUN_14b7e0dc0;
  param_1[0x78a] = &PTR_FUN_14b7e0de0;
  param_1[0x78b] = &PTR_FUN_14b7e0e30;
  param_1[0x78c] = &PTR_FUN_14b7e0e70;
  param_1[0x78d] = &PTR_FUN_14b7e0ed0;
  return param_1;
}



// FUNCTION 1462360c2 FUN_1462360c2 body=158 status=ok
// SIG undefined FUN_1462360c2(void)

bool FUN_1462360c2(longlong param_1,undefined8 param_2)

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



// FUNCTION 146236162 FUN_146236162 body=190 status=ok
// SIG undefined FUN_146236162(void)

void FUN_146236162(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x470);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x98));
  *(int *)(lVar3 + 0x90) = *(int *)(lVar3 + 0x90) + 1;
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
  if (*(char *)(param_2 + 8) == *(char *)(lVar3 + 0x68)) {
    iVar4 = 1;
    if (*(int *)(lVar3 + 0x6c) != 0) goto LAB_1462361d8;
  }
  else {
    iVar4 = *(int *)(lVar3 + 0x6c) + 1;
  }
  *(char *)(lVar3 + 0x68) = *(char *)(param_2 + 8);
  *(int *)(lVar3 + 0x6c) = iVar4;
LAB_1462361d8:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x98));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146236222 FUN_146236222 body=372 status=ok
// SIG undefined FUN_146236222(void)

undefined8 FUN_146236222(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  wchar_t *pwVar4;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined2 *local_70;
  undefined2 *local_68;
  int local_60;
  wchar_t *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x38))(*(longlong **)(param_1 + 0x30),&local_48);
  local_78 = &DAT_149dfb77a;
  local_70 = &DAT_149dfb77a;
  if (local_40 != 0) {
    local_70 = local_48;
  }
  if ((ulonglong)*(uint *)(param_1 + 8) < 5) {
    local_78 = (undefined2 *)
               (&DAT_14ba47108 + *(int *)(&DAT_14ba47108 + (ulonglong)*(uint *)(param_1 + 8) * 4));
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 == (longlong *)0x0) {
    pwVar4 = L"INVALID";
  }
  else {
    (**(code **)(*plVar1 + 0x80))(plVar1,&local_58,1);
    pwVar4 = local_58;
    if (local_50 == 0) {
      pwVar4 = L"";
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
    FUN_140002266(param_2,L"HostIP: %s SteamP2P: %s Type: %s SessionId: %s",L"INVALID",pwVar4);
  }
  else {
    (**(code **)(*plVar2 + 0x80))(plVar2,&local_68,1);
    puVar3 = local_68;
    if (local_60 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_140002266(param_2,L"HostIP: %s SteamP2P: %s Type: %s SessionId: %s",puVar3,pwVar4);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((plVar1 != (longlong *)0x0) && (local_58 != (wchar_t *)0x0)) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146236398 FUN_146236398 body=74 status=ok
// SIG undefined FUN_146236398(void)

undefined8 FUN_146236398(longlong param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\0') {
    FUN_140002266(param_2,L"%lld",*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18));
  }
  else {
    FUN_140002266(param_2,L"%lld:%d",*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18),
                  *(undefined4 *)(param_1 + 0x18));
  }
  return param_2;
}



// FUNCTION 1462363e2 FUN_1462363e2 body=54 status=ok
// SIG undefined FUN_1462363e2(void)

void FUN_1462363e2(void)

{
  FUN_146236418();
  if (DAT_14cbd5648 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cbd5628 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146236418 FUN_146236418 body=373 status=ok
// SIG undefined FUN_146236418(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146236418(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined4 *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0x100000000;
  local_30 = &DAT_14cbd5638;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (DAT_14cbd5650 != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = &DAT_14cbd5628;
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  if (iStack_24 < (int)local_30[6]) {
    do {
      plVar3 = *(longlong **)(*local_60 + 0x10 + (longlong)iStack_44 * 0x20);
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
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[6]);
  }
  DAT_14cbd5630 = 0;
  if (DAT_14cbd5634 != 0) {
    FUN_1446f4a44(&DAT_14cbd5628,0);
  }
  _DAT_14cbd5658 = 0xffffffff;
  DAT_14cbd5650 = 0;
  if (0x80 < DAT_14cbd5654) {
    DAT_14cbd5654 = 0x80;
    FUN_1446efbd8(&DAT_14cbd5638,0);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14623658e FUN_14623658e body=9 status=ok
// SIG undefined FUN_14623658e(void)

void FUN_14623658e(longlong param_1)

{
  FUN_14167c450(param_1 + 0x10);
  return;
}



// FUNCTION 146236598 FUN_146236598 body=435 status=ok
// SIG undefined FUN_146236598(void)

undefined4 FUN_146236598(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_70;
  undefined2 *local_68;
  int local_60;
  undefined8 *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  uVar1 = DAT_14c872ce0;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_140056680(&local_68,L"PacketHandlerProfileConfig");
  local_88 = 0x400;
  cVar2 = FUN_14167d4d0(uVar1,&DAT_14c872ce8,&local_68,&local_58);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar5 = uStack_50 & 0xffffffff;
  uVar4 = 0;
  if (cVar2 != '\0') {
    if ((int)uStack_50 == 0) {
      uVar5 = 0;
    }
    else {
      lVar9 = (longlong)(int)uStack_50 * 0x10;
      puVar7 = local_58;
      do {
        lVar9 = lVar9 + -0x10;
        local_80 = 0xffffffff;
        local_88 = 0;
        iVar3 = FUN_1447ee042(puVar7,&DAT_149e001d8,1,1);
        puVar6 = &DAT_149dfb77a;
        iVar8 = *(int *)(puVar7 + 1) + -1;
        if (*(int *)(puVar7 + 1) == 0) {
          iVar8 = 0;
        }
        else {
          puVar6 = (undefined2 *)*puVar7;
        }
        if (iVar3 < iVar8) {
          iVar8 = iVar3;
        }
        if (iVar8 < 1) {
          iVar8 = 0;
        }
        FUN_14006620a(&local_68,puVar6,iVar8);
        puVar6 = &DAT_149dfb77a;
        if (local_60 != 0) {
          puVar6 = local_68;
        }
        FUN_1446f470e(&local_70,puVar6,1);
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        uVar4 = FUN_147079c2c(local_70,param_1);
      } while (((char)uVar4 == '\0') && (puVar7 = puVar7 + 2, lVar9 != 0));
      uVar5 = uStack_50 & 0xffffffff;
    }
  }
  FUN_1447a1747(local_58,uVar5);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14623674c FUN_14623674c body=603 status=ok
// SIG undefined FUN_14623674c(void)

void FUN_14623674c(undefined8 param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  code **ppcVar6;
  undefined8 *puVar7;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  code *local_98;
  undefined4 local_90;
  code *local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) goto LAB_146236817;
  uVar3 = FUN_144a7b040();
  plVar4 = (longlong *)FUN_144718840(param_2,uVar3);
  if (plVar4 == (longlong *)0x0) {
LAB_146236793:
    lVar5 = FUN_140929c72();
    iVar1 = *(int *)(lVar5 + 0x38);
    if (((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < iVar1) ||
        (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
         lVar5 + 0x30)) || (lVar5 = *(longlong *)(param_2 + 0x410), lVar5 == 0)) goto LAB_146236817;
    cVar2 = FUN_1401c00e8(lVar5,CONCAT71((int7)(int3)((uint)iVar1 >> 8),2));
    if (cVar2 == '\0') {
      local_98 = (code *)&LAB_1461ca014;
      local_90 = 0;
      ppcVar6 = &local_88;
      FUN_146236ad8(ppcVar6,param_1);
      FUN_1462369d6(lVar5 + 0x990,&local_98,ppcVar6);
    }
    else {
      lVar5 = FUN_1410d0064(param_1);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
      }
      if (*(longlong *)(lVar5 + 0x1f0) == 0) {
        puVar7 = (undefined8 *)(lVar5 + 0x458);
      }
      else {
        puVar7 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
      }
      uVar3 = *puVar7;
      local_88 = (code *)&LAB_1488f7ffa;
LAB_1462368f0:
      local_80 = 0;
      ppcVar6 = &local_98;
      FUN_1488f7d32(ppcVar6,param_1,&local_88);
      local_88 = (code *)0x0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,ppcVar6);
      local_48 = 1;
      FUN_14016fdb0(uVar3,local_a0,&local_88);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    }
  }
  else {
    lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4);
    if (lVar5 == 0) goto LAB_146236793;
    if (*(char *)(lVar5 + 0x470) < '\0') {
      lVar5 = FUN_1410d0064(param_1);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
      }
      if (*(longlong *)(lVar5 + 0x1f0) == 0) {
        puVar7 = (undefined8 *)(lVar5 + 0x458);
      }
      else {
        puVar7 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
      }
      uVar3 = *puVar7;
      local_88 = (code *)&LAB_1488f7eb4;
      goto LAB_1462368f0;
    }
    local_98 = FUN_1488f7c10;
    local_90 = 0;
    ppcVar6 = &local_88;
    FUN_148902372(ppcVar6,param_1);
    FUN_1403524de(lVar5 + 400,&local_98,ppcVar6);
  }
  FUN_1449db362(ppcVar6);
LAB_146236817:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462369d6 FUN_1462369d6 body=216 status=ok
// SIG undefined FUN_1462369d6(void)

undefined8 * FUN_1462369d6(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146236ad8 FUN_146236ad8 body=428 status=ok
// SIG undefined FUN_146236ad8(void)

longlong * FUN_146236ad8(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146236bb8:
    *puVar5 = &PTR_LAB_14b4184f0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b418480;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146236bb8;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4184f0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b418480;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146236c84 FUN_146236c84 body=45 status=ok
// SIG undefined FUN_146236c84(void)

void FUN_146236c84(longlong *param_1)

{
  FUN_14167d852();
  if ((*(uint *)(param_1 + 1) & 0x30) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146236ca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xaf8))(param_1);
    return;
  }
  return;
}



// FUNCTION 146236cb2 FUN_146236cb2 body=1120 status=ok
// SIG undefined FUN_146236cb2(void)

void FUN_146236cb2(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  void *pvVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong *plVar18;
  bool bVar19;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined1 local_110;
  undefined1 local_108;
  undefined1 *local_100;
  ulonglong local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined1 local_b9;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined8 **local_a8;
  ulonglong *local_a0;
  longlong *local_98;
  uint local_90;
  undefined8 *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar6 = FUN_146237114();
  if (lVar6 == 0) goto LAB_146236efe;
  uVar7 = (ulonglong)*(byte *)(param_1 + 0xe3);
  puVar2 = (undefined8 *)(lVar6 + 0x40 + uVar7 * 0x28);
  local_88 = (undefined8 *)*puVar2;
  uStack_80 = *(undefined4 *)(puVar2 + 1);
  uStack_7c = *(undefined4 *)((longlong)puVar2 + 0xc);
  local_78 = (void *)0x0;
  local_70 = *(int *)(lVar6 + 0x58 + uVar7 * 0x28);
  lVar11 = (longlong)local_70;
  pvVar3 = *(void **)(lVar6 + 0x50 + uVar7 * 0x28);
  if (lVar11 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar3,lVar11 * 2);
  }
  local_68 = *(undefined4 *)(lVar6 + 0x178);
  uStack_64 = *(undefined4 *)(lVar6 + 0x17c);
  uStack_60 = *(undefined4 *)(lVar6 + 0x180);
  uStack_5c = *(undefined4 *)(lVar6 + 0x184);
  local_58 = (void *)0x0;
  local_50 = *(int *)(lVar6 + 400);
  lVar11 = (longlong)local_50;
  pvVar3 = *(void **)(lVar6 + 0x188);
  if (lVar11 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar3,lVar11 * 2);
  }
  local_a8 = &local_88;
  local_a0 = &local_48;
  FUN_140a1e2b2(&local_98);
  lVar6 = 0x40;
  do {
    if (*(longlong *)((longlong)&local_98 + lVar6) != 0) {
      FUN_1400020a8();
    }
    plVar14 = local_98;
    lVar6 = lVar6 + -0x20;
  } while (lVar6 != 0);
  lVar6 = (longlong)(int)local_90;
  if (lVar6 == 0) {
LAB_146236ecb:
    (**(code **)(*param_1 + 0xb00))(param_1);
  }
  else {
    bVar19 = true;
    local_c8 = param_1;
    if (*local_98 != 0) {
      lVar11 = FUN_140007850(local_98);
      bVar19 = lVar11 != 0;
    }
    local_d0 = -lVar6;
    local_d8 = plVar14 + 4;
    uVar7 = 0;
    uVar15 = 0;
    uVar5 = uVar7;
    local_e8 = plVar14;
LAB_146236e14:
    do {
      local_f0 = uVar5;
      if ((int)(uVar15 + 1) < (int)local_90) {
        lVar13 = (longlong)(int)uVar15;
        lVar11 = local_d0 + lVar13 + 1;
        plVar18 = local_d8 + lVar13 * 4;
        bVar4 = true;
        lVar12 = 0;
        do {
          iVar10 = (int)lVar12;
          if (*plVar18 == 0) {
            if (!bVar19) {
              uVar16 = iVar10 + uVar15 + 1;
              iVar10 = iVar10 + 1;
              goto LAB_146236fdb;
            }
          }
          else {
            local_e0 = lVar11;
            lVar8 = FUN_140007850(plVar18);
            lVar11 = local_e0;
            if ((lVar8 != 0) != bVar19) {
              plVar14 = local_e8;
              uVar7 = local_f0;
              uVar16 = uVar15 + 1 + iVar10;
              break;
            }
          }
          bVar4 = lVar13 + lVar12 + 2 < lVar6;
          lVar12 = lVar12 + 1;
          plVar18 = plVar18 + 4;
          plVar14 = local_e8;
          uVar7 = local_f0;
          uVar16 = local_90;
        } while (lVar11 + lVar12 != 0);
      }
      else {
        bVar4 = false;
        uVar16 = uVar15 + 1;
      }
      uVar17 = (uint)uVar7;
      iVar10 = uVar16 - uVar15;
      if (bVar19 != false) {
        FUN_140861e20(plVar14 + (longlong)(int)uVar15 * 4,iVar10);
        bVar19 = false;
        uVar15 = uVar16;
        uVar5 = local_f0;
        if (!bVar4) break;
        goto LAB_146236e14;
      }
LAB_146236fdb:
      if ((uint)local_f0 != uVar15) {
        memmove(local_e8 + (longlong)(int)(uint)local_f0 * 4,local_e8 + (longlong)(int)uVar15 * 4,
                (longlong)iVar10 << 5);
      }
      uVar17 = (int)local_f0 + iVar10;
      uVar7 = (ulonglong)uVar17;
      bVar19 = true;
      plVar14 = local_e8;
      uVar15 = uVar16;
      uVar5 = uVar7;
    } while (bVar4);
    plVar14 = local_c8;
    param_1 = local_c8;
    local_90 = uVar17;
    if (uVar17 == 0) goto LAB_146236ecb;
    FUN_14050fd64();
    lVar6 = FUN_14050fd64();
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    FUN_1446efa72(&local_88,0,3,0x10);
    puVar2 = local_88;
    uStack_80 = 3;
    *local_88 = &PTR_LAB_149e020b0;
    uVar9 = FUN_144a3f946();
    puVar2[2] = uVar9;
    *puVar2 = &PTR_FUN_14ba72160;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,plVar14);
    *(undefined4 *)(puVar2 + 5) = 0;
    puVar2[4] = &LAB_14905e8bc;
    local_100 = &local_b9;
    local_108 = 0;
    local_110 = 0;
    local_118 = 0;
    FUN_1457028c8(lVar6 + 0x1e8,local_b8,&local_98,&local_88);
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_b0 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_b0 + 0x10))(local_b0);
        }
      }
    }
    FUN_1449db362(&local_88);
  }
  FUN_140861e20(local_98,local_90);
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_146236efe:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146237114 FUN_146237114 body=63 status=ok
// SIG undefined FUN_146237114(void)

undefined8 FUN_146237114(void)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_145a9181c();
  if (*(longlong *)(lVar2 + 0x110) != 0) {
    uVar3 = FUN_145a9181c();
    cVar1 = FUN_144a7ca96((undefined8 *)(lVar2 + 0x110),uVar3);
    if (cVar1 != '\0') {
      return *(undefined8 *)(lVar2 + 0x110);
    }
  }
  return 0;
}



// FUNCTION 146237154 FUN_146237154 body=390 status=ok
// SIG undefined FUN_146237154(void)

void FUN_146237154(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = FUN_146237114();
  if (lVar5 != 0) {
    if (*(longlong *)(lVar5 + 0x40 + (ulonglong)*(byte *)(param_1 + 0xe3) * 0x28) != 0) {
      lVar6 = FUN_1401ca522(lVar5 + (ulonglong)*(byte *)(param_1 + 0xe3) * 0x28 + 0x38);
      if (lVar6 != 0) {
        (**(code **)(*param_1 + 0xa78))(param_1,lVar6);
      }
    }
    lVar5 = FUN_14090368a(lVar5 + 0x178);
    if (lVar5 != 0) {
      uVar7 = FUN_145a91730();
      cVar4 = FUN_144a7ff9e(lVar5,uVar7);
      if (cVar4 != '\0') {
        uVar1 = *(undefined4 *)((longlong)param_1 + 0x74c);
        lVar3 = param_1[0xe9];
        local_58 = param_1[0xe8];
        local_68 = param_1[0xe6];
        lStack_60 = param_1[0xe7];
        local_78 = (undefined4)param_1[0xe4];
        uStack_74 = *(undefined4 *)((longlong)param_1 + 0x724);
        uStack_70 = (undefined4)param_1[0xe5];
        uStack_6c = *(undefined4 *)((longlong)param_1 + 0x72c);
        uVar2 = *(undefined4 *)((longlong)param_1 + 0x71c);
        lVar6 = *(longlong *)(lVar5 + 0x110);
        if (lVar6 == 0) {
          FUN_140aa6c08(lVar5);
          lVar6 = *(longlong *)(lVar5 + 0x110);
        }
        local_98 = &local_68;
        local_90 = (int)lVar3;
        local_88 = uVar1;
        FUN_14905e4d6(lVar6,param_1,uVar2,&local_78);
      }
    }
    FUN_140136708(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_b8);
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146237302 FUN_146237302 body=73 status=ok
// SIG undefined FUN_146237302(void)

undefined8
FUN_146237302(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14167d860();
  if (cVar1 != '\0') {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000146237348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(longlong *)(DAT_14cb0d2b0 + 0x28) + 8))
                    (DAT_14cb0d2b0 + 0x28,param_2,param_3,param_4);
  return uVar2;
}



// FUNCTION 14623734b FUN_14623734b body=270 status=ok
// SIG undefined FUN_14623734b(void)

void FUN_14623734b(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar1 = FUN_14167dc04();
  if (cVar1 == '\0') {
    local_d0 = 0x40e9de6000000000;
    local_c8 = 0xc0d17f8000000000;
    local_c0 = 0xc0ce658000000000;
    local_e8 = 0;
    local_e0 = 0xc062c00000000000;
    local_d8 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_78 = 0;
    local_68 = (longlong *)0x0;
    local_88 = 0x800000101;
    uVar2 = FUN_145b90f90();
    local_f8 = &local_b8;
    FUN_141137228(param_1,uVar2,&local_d0,&local_e8);
    if (local_78 != 0) {
      plVar3 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar3 = local_58;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14623745a FUN_14623745a body=246 status=ok
// SIG undefined FUN_14623745a(void)

undefined8 *
FUN_14623745a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b47b0e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063ee94(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_146237552(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146237552 FUN_146237552 body=423 status=ok
// SIG undefined FUN_146237552(void)

void FUN_146237552(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146237628:
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9c6610;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146237628;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9c6610;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
                    /* WARNING: Could not recover jumptable at 0x0001462376e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1462376fa FUN_1462376fa body=53 status=ok
// SIG undefined FUN_1462376fa(void)

void FUN_1462376fa(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_14121727a(uVar1);
  if (lVar2 != 0) {
    FUN_146237730(lVar2,param_4);
    return;
  }
  return;
}



// FUNCTION 146237730 FUN_146237730 body=1632 status=ok
// SIG undefined FUN_146237730(void)

void FUN_146237730(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  wchar_t *_Str;
  longlong lVar11;
  longlong lVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  double dVar16;
  undefined1 auStack_2a8 [40];
  undefined8 *local_280;
  uint local_278;
  undefined8 uStack_274;
  undefined4 uStack_26c;
  longlong local_268;
  int local_260;
  longlong local_258;
  int local_250;
  undefined8 *local_248;
  undefined8 uStack_240;
  longlong local_230;
  undefined8 *local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined2 local_210;
  undefined2 uStack_20e;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  uint uStack_204;
  undefined8 *local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  longlong local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  ulonglong local_1b8;
  int local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  uint local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  float fStack_190;
  undefined2 local_18c;
  uint local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined4 local_168;
  longlong local_d8;
  undefined8 local_d0;
  undefined2 local_b8;
  undefined2 uStack_b6;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if (*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x20)) {
    local_1b8 = 0;
    local_1b0 = 0;
    local_1d8._0_2_ = 0;
    local_1d8._2_2_ = 0;
    local_1d8._4_4_ = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    uStack_1ac = 0x80;
    uStack_1a8 = 0xffffffff;
    uStack_1a4 = 0;
    uStack_198 = 0;
    uStack_194 = 0;
    fStack_190 = 0.0;
    FUN_148856b8c(&local_1d8,param_1 + 0x18);
    local_188 = (uint)*(undefined8 *)(param_1 + 0x68);
    uStack_184 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
    local_228 = &local_1c8;
    local_230 = 0x100000000;
    local_220 = 0xffffffff;
    local_218 = 0;
    iVar10 = 0;
    if (local_1b0 != 0) {
      FUN_1449c0562(&local_230);
      iVar10 = local_1b0;
    }
    uStack_1f8 = local_220;
    uVar8 = uStack_1f8;
    local_1f0 = local_218;
    local_1ec = local_214;
    uStack_208 = (undefined4)local_230;
    uStack_204 = (uint)((ulonglong)local_230 >> 0x20);
    local_200 = local_228;
    local_210 = SUB82(&local_1d8,0);
    uStack_20e = (undefined2)((ulonglong)&local_1d8 >> 0x10);
    uStack_20c = (undefined4)((ulonglong)&local_1d8 >> 0x20);
    uStack_1f8._4_4_ = (int)((ulonglong)local_220 >> 0x20);
    if ((uStack_1f8._4_4_ != iVar10) || (local_228 != &local_1c8)) {
      plVar7 = &local_1d8;
      iVar6 = uStack_1f8._4_4_;
      uStack_1f8 = uVar8;
      do {
        lVar12 = *plVar7 + (longlong)iVar6 * 0x90;
        uVar8 = *(undefined8 *)(lVar12 + 0x70);
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        uStack_88 = 0;
        uStack_b0 = *(undefined4 *)(lVar12 + 0x18);
        uVar3 = *(undefined8 *)(lVar12 + 0x10);
        local_b8 = (undefined2)uVar3;
        uStack_b6 = (undefined2)((ulonglong)uVar3 >> 0x10);
        uStack_b4 = (undefined4)((ulonglong)uVar3 >> 0x20);
        FUN_1447715ec(&local_a8);
        FUN_148854992(param_1,&local_b8,uVar8);
        uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(uint)uStack_1f8 & ~uStack_204);
        FUN_1449c0562(&uStack_208);
        plVar7 = (longlong *)CONCAT44(uStack_20c,CONCAT22(uStack_20e,local_210));
        iVar6 = uStack_1f8._4_4_;
        uVar8 = uStack_1f8;
      } while (plVar7 != &local_1d8 || (local_200 != &local_1c8 || uStack_1f8._4_4_ != iVar10));
    }
    uStack_1f8 = uVar8;
    fStack_190 = 0.0;
    if (CONCAT44(uStack_194,uStack_198) != 0) {
      FUN_1400020a8();
    }
    FUN_14575b834(&local_1d8);
  }
  if ((((byte *)*param_2 != (byte *)0x0) && ((*(byte *)*param_2 & 3) != 0)) &&
     (cVar4 = FUN_142b159be(param_2), cVar4 != '\0')) {
    bVar5 = FUN_145a0e3da(param_1);
    *(byte *)(param_1 + 0xe0) = bVar5 ^ 1;
    plVar7 = (longlong *)FUN_1407cbaec(param_2);
    if ((longlong)(int)plVar7[2] != 0) {
      lVar12 = *plVar7;
      lVar15 = (longlong)(int)plVar7[2] * 0x10 + lVar12;
      do {
        cVar4 = FUN_144a8ab0e(lVar12);
        if (cVar4 != '\0') {
          uVar8 = FUN_144a7cdd6(lVar12,0);
          FUN_144a81018(&local_1d8,uVar8);
          FUN_140056680(&local_230,local_d0);
          if (local_d8 != 0) {
            FUN_1400020a8();
          }
          local_248 = (undefined8 *)0x0;
          uStack_240 = 0;
          FUN_1403de9f2(&local_230,&local_248,&DAT_149e001d8,1);
          if ((int)uStack_240 == 5) {
            puVar13 = &DAT_149dfb77a;
            if (*(int *)(local_248 + 1) != 0) {
              puVar13 = (undefined2 *)*local_248;
            }
            FUN_140002266(&local_258,L"registry.%ls",puVar13);
            local_210 = 0;
            uStack_20c = 0;
            uStack_208 = 0;
            local_1f0 = 0;
            local_200 = (undefined8 *)0x0;
            uStack_1f8 = 0;
            local_1e8 = 0;
            uStack_1e0 = 0;
            local_268 = local_258;
            local_260 = local_250 + -1;
            if (local_250 == 0) {
              local_260 = 0;
            }
            FUN_140b7c6f1(&local_268,&local_210);
            cVar4 = FUN_1401144ce(&local_210);
            if (cVar4 != '\0') {
              iVar10 = *(int *)(local_248 + 3) + -1;
              if (*(int *)(local_248 + 3) == 0) {
                iVar10 = 0;
              }
              FUN_1446f82e2(&local_1d8,iVar10,local_248[2],1);
              uVar8 = CONCAT44(local_1d8._4_4_,CONCAT22(local_1d8._2_2_,(undefined2)local_1d8));
              iVar10 = *(int *)(local_248 + 5) + -1;
              if (*(int *)(local_248 + 5) == 0) {
                iVar10 = 0;
              }
              FUN_1446f82e2(&local_1d8,iVar10,local_248[4],1);
              _Str = L"";
              if (*(int *)(local_248 + 7) != 0) {
                _Str = (wchar_t *)local_248[6];
              }
              uVar3 = CONCAT44(local_1d8._4_4_,CONCAT22(local_1d8._2_2_,(undefined2)local_1d8));
              dVar16 = _wtof(_Str);
              if (0.0 < (float)dVar16) {
                local_280 = local_248;
                local_1d8._0_2_ = 0;
                local_1d8._4_4_ = 0;
                uStack_1d0 = 0;
                local_1c8 = 0;
                uStack_1c0 = 0;
                local_1b8 = local_1b8 & 0xffffffff00000000;
                uStack_19c = 0;
                uStack_198 = 0;
                uStack_194 = 0;
                fStack_190 = -1.0;
                local_1b0 = 0;
                uStack_1ac = 0;
                uStack_1a8 = 0;
                uStack_1a4 = 0;
                local_1a0 = local_1a0 & 0xffffff00;
                local_18c = 0;
                local_188 = local_188 & 0xffffff00;
                uStack_184 = 0;
                uStack_180 = 0;
                uStack_17c = 0;
                uStack_178 = 0;
                uStack_174 = 0;
                uStack_170 = 0;
                local_168 = 0xbf800000;
                FUN_1411b8130(&local_1d8,&local_210);
                local_278 = local_278 & 0xffffff00;
                uStack_274 = 0;
                uStack_26c = 0;
                FUN_144976b9c(&local_278,uVar8);
                local_188 = local_278;
                uStack_184 = (undefined4)uStack_274;
                uStack_180 = uStack_274._4_4_;
                uStack_17c = uStack_26c;
                local_278 = local_278 & 0xffffff00;
                uStack_274 = 0;
                uStack_26c = 0;
                FUN_144976b9c(&local_278,uVar3);
                local_1a0 = local_278;
                uStack_19c = (undefined4)uStack_274;
                uStack_198 = uStack_274._4_4_;
                uStack_194 = uStack_26c;
                puVar13 = &DAT_149dfb77a;
                if (*(int *)(local_280 + 9) != 0) {
                  puVar13 = (undefined2 *)local_280[8];
                }
                lVar11 = 0;
                while( true ) {
                  uVar1 = *(ushort *)((longlong)puVar13 + lVar11);
                  uVar9 = (uint)uVar1;
                  uVar2 = *(ushort *)((longlong)L"object" + lVar11);
                  uVar14 = (ulonglong)uVar2;
                  if (uVar1 != uVar2) {
                    if ((uVar2 | uVar1) < 0x80) {
                      uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                      uVar14 = (ulonglong)(byte)(&DAT_149e05da0)[uVar2];
                      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_146237d19;
                    }
                    iVar10 = uVar9 - (int)uVar14;
                    goto LAB_146237d48;
                  }
                  if (uVar1 == 0) break;
LAB_146237d19:
                  lVar11 = lVar11 + 2;
                }
                iVar10 = 0;
LAB_146237d48:
                local_18c = CONCAT11(1,iVar10 == 0);
                fStack_190 = (float)dVar16;
                FUN_1488536c8(param_1,&local_1d8,CONCAT71((int7)(uVar14 >> 8),1));
                if (CONCAT44(uStack_1ac,local_1b0) != 0) {
                  FUN_1400020a8();
                }
              }
            }
            if (local_1e8 != 0) {
              FUN_1400020a8();
            }
            if (local_258 != 0) {
              FUN_1400020a8();
            }
          }
          FUN_1447a1747(local_248);
          if (local_248 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          if (local_230 != 0) {
            FUN_1400020a8();
          }
        }
        lVar12 = lVar12 + 0x10;
      } while (lVar12 != lVar15);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146237d92 FUN_146237d92 body=463 status=ok
// SIG undefined FUN_146237d92(void)

void FUN_146237d92(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined1 local_68 [12];
  undefined4 local_5c [2];
  int local_54;
  undefined4 local_50 [2];
  int local_48;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar2 = FUN_1401144ce(param_2);
  if (((cVar2 != '\0') && (param_3 != 0)) && (*(int *)(param_1 + 0x2c) != 0)) {
    lVar4 = param_2 + 0x10;
    FUN_144a659ac(lVar4,local_50,2);
    FUN_144a659ac(lVar4,local_5c,3);
    if (local_48 != 0) {
      local_50[0] = FUN_144a78877(local_50[0],local_48);
    }
    uVar3 = FUN_140726908(param_1 + 0x78,local_50[0],local_50);
    if (local_54 != 0) {
      local_5c[0] = FUN_144a78877(local_5c[0],local_54);
    }
    uVar3 = FUN_140726d02(uVar3,local_5c[0],local_5c);
    FUN_144a659ac(lVar4,local_68,4);
    lVar4 = FUN_14072739f(local_68,uVar3,&local_41);
    local_78 = param_1 + 0x1b0;
    local_80 = param_1 + 0x118;
    local_88 = param_1 + 200;
    FUN_14167dc44(param_3,local_50,local_5c,lVar4);
    if (0 < *(int *)(lVar4 + 0x68)) {
      iVar1 = *(int *)(param_1 + 0x1a8);
      *(uint *)(param_1 + 0x1a8) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x1ac) < iVar1 + 1U) {
        FUN_1408e8c18((longlong *)(param_1 + 0x1a0),iVar1);
      }
      FUN_140ac173c((longlong)iVar1 * 0x24 + *(longlong *)(param_1 + 0x1a0),param_2);
    }
    cVar2 = FUN_144729dda(param_1 + 8);
    if (cVar2 != '\0') {
      uVar3 = FUN_14479d2ce(param_1 + 8);
      FUN_1405f658a(uVar3);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146237f62 FUN_146237f62 body=829 status=ok
// SIG undefined FUN_146237f62(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_146237f62(undefined8 param_1,longlong param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  int *piVar11;
  size_t _Size;
  longlong lVar12;
  undefined1 *_Dst;
  bool bVar13;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)&stack0xffffffffffffffc8;
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar2 = *(longlong *)(param_2 + 0x30);
  if (lVar2 == 0) {
LAB_1462381ba:
    piVar11 = &local_48;
    *(undefined1 *)(param_2 + 0xa0) = 1;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    lVar12 = *(longlong *)(lVar2 + 8);
    lVar9 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar9 + 8) == 0) {
      bVar13 = lVar12 != 0;
      if (lVar12 != lVar9 && bVar13) {
        do {
          lVar12 = *(longlong *)(lVar12 + 0x30);
          bVar13 = lVar12 != 0;
          if (lVar12 == lVar9) break;
        } while (lVar12 != 0);
      }
      if (!bVar13) goto LAB_1462381ba;
    }
    else if ((*(ulonglong *)(lVar12 + 0x18) & *(ulonglong *)(lVar9 + 8)) == 0) goto LAB_1462381ba;
    local_44 = 0;
    FUN_144a7452c();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      FUN_144a5ded6(param_2);
    }
    else {
      FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
    }
    piVar11 = &local_48;
    plVar4 = *(longlong **)(lVar2 + 0x78);
    _Size = (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34);
    if ((int)_Size == 0) {
      _Dst = (undefined1 *)0x0;
    }
    else {
      lVar12 = -(_Size + 0x1e & 0xfffffffffffffff0);
      piVar11 = (int *)((longlong)&local_48 + lVar12);
      _Dst = (undefined1 *)((longlong)&local_48 + lVar12);
    }
    if ((*(byte *)((longlong)plVar4 + 0x39) & 2) == 0) {
      pcVar5 = *(code **)(*plVar4 + 0x160);
      *(undefined8 *)((longlong)piVar11 + -0x28) = 0x14623807b;
      (*pcVar5)(plVar4,_Dst);
    }
    else {
      *(undefined8 *)((longlong)piVar11 + -0x28) = 0x146238203;
      memset(_Dst,0,_Size);
    }
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)((longlong)piVar11 + -0x28) = 0x146238090;
    FUN_1446ddbd2();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      *(undefined8 *)((longlong)piVar11 + -0x28) = 0x146238229;
      FUN_144a5ded6(param_2,_Dst);
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)((longlong)piVar11 + -0x28) = 0x1462380b2;
      FUN_14470e992(param_2,uVar6,_Dst);
    }
    local_48 = 0;
    *(undefined8 *)((longlong)piVar11 + -0x28) = 0x1462380c6;
    FUN_144a5ab96();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      *(undefined8 *)((longlong)piVar11 + -0x28) = 0x146238250;
      FUN_144a5ded6(param_2,&local_48);
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)((longlong)piVar11 + -0x28) = 0x1462380e9;
      FUN_14470e992(param_2,uVar6,&local_48);
    }
    iVar7 = local_48;
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    if ((*(byte *)(lVar2 + 0x38) & 0x20) != 0) {
      pcVar5 = *(code **)(**(longlong **)(param_2 + 0x18) + 0x280);
      *(undefined8 *)((longlong)piVar11 + -0x28) = 0x146238266;
      uVar10 = (*pcVar5)();
      uVar1 = *(undefined2 *)(lVar2 + 0x40);
      uVar6 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)((longlong)piVar11 + -0x28) = 0x14623827f;
      FUN_144a62f0c(uVar6,uVar10,uVar1);
    }
    uVar8 = local_44;
    *(bool *)((longlong)piVar11 + -0x10) = iVar7 != 0;
    *(undefined8 *)((longlong)piVar11 + -0x38) = 0x146238129;
    FUN_1462382a4(uVar3,lVar2,uVar8,_Dst);
    if ((*(byte *)((longlong)plVar4 + 0x3c) & 0x10) == 0) {
      pcVar5 = *(code **)(*plVar4 + 0x148);
      *(undefined8 *)((longlong)piVar11 + -0x28) = 0x14623829b;
      (*pcVar5)(plVar4,_Dst);
    }
  }
  if ((local_40 ^ (ulonglong)&stack0xffffffffffffffc8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)piVar11 + -0x28) = &UNK_14623815f;
  FUN_144d8e3a0();
}



// FUNCTION 1462382a4 FUN_1462382a4 body=521 status=ok
// SIG undefined FUN_1462382a4(void)

void FUN_1462382a4(ulonglong *param_1,longlong param_2,uint param_3,undefined8 param_4,char param_5)

{
  byte bVar1;
  longlong *plVar2;
  int iVar3;
  undefined2 *puVar4;
  wchar_t *pwVar5;
  undefined7 uVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong *local_58;
  ulonglong *local_50;
  int local_48;
  undefined4 local_44;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 == (ulonglong *)0x0) goto LAB_14623835f;
  bVar1 = *(byte *)(param_2 + 0x70);
  local_44 = (**(code **)(**(longlong **)(param_2 + 0x78) + 0x178))();
  plVar2 = *(longlong **)(param_2 + 0x78);
  local_48 = *(int *)((longlong)plVar2 + 0x34);
  iVar3 = (int)param_1[1];
  local_58 = plVar2;
  local_50 = param_1;
  local_40 = bVar1;
  if ((int)param_3 < 0) {
LAB_1462383fd:
    uVar8 = DAT_14cae5330;
    iVar7 = 0;
    if (0 < iVar3) {
      iVar7 = iVar3 + -1;
    }
    FUN_1400021e4(param_2 + 0x20,&local_78);
    puVar4 = &DAT_149dfb77a;
    if (local_70 != 0) {
      puVar4 = local_78;
    }
    pwVar5 = L"Attempted to set an invalid index on array %s [%d/%d]!";
    local_88 = iVar7;
    FUN_140002266(&local_68,L"Attempted to set an invalid index on array %s [%d/%d]!",puVar4,
                  (ulonglong)param_3);
    puVar4 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar4 = local_68;
    }
    uVar6 = (undefined7)((ulonglong)pwVar5 >> 8);
  }
  else {
    if ((param_5 == '\x01' && param_3 != 0x7fffffff) && iVar3 <= (int)param_3) {
      FUN_140d50566(&local_58,param_3);
      iVar3 = (int)local_50[1];
    }
    uVar8 = DAT_14cae7098;
    if ((int)param_3 < iVar3) {
      if ((local_40 & 1) == 0) {
        uVar9 = *local_50;
      }
      else {
        uVar9 = *local_50;
        if ((uVar9 & 1) != 0) {
          uVar9 = (longlong)local_50 + ((longlong)uVar9 >> 0x18);
        }
      }
      (**(code **)(*plVar2 + 0x110))(plVar2,(longlong)local_48 * (ulonglong)param_3 + uVar9,param_4)
      ;
      goto LAB_14623835f;
    }
    if (param_3 != 0x7fffffff) goto LAB_1462383fd;
    FUN_1400021e4(param_2 + 0x20,&local_78);
    puVar4 = &DAT_149dfb77a;
    if (local_70 != 0) {
      puVar4 = local_78;
    }
    pwVar5 = L"Attempted to set an index on array %s beyond its maximum supported capacity!";
    FUN_140002266(&local_68,
                  L"Attempted to set an index on array %s beyond its maximum supported capacity!",
                  puVar4);
    puVar4 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar4 = local_68;
    }
    uVar6 = (undefined7)((ulonglong)pwVar5 >> 8);
  }
  FUN_1415b7ec4(puVar4,CONCAT71(uVar6,3),uVar8);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_14623835f:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1462384ae FUN_1462384ae body=249 status=ok
// SIG undefined FUN_1462384ae(void)

undefined8 * FUN_1462384ae(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = (**(code **)(*param_3 + 0x5d8))(param_3);
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      cVar1 = *(char *)(*(longlong *)(param_1 + 0xa8) + 8);
      if (cVar1 == '\0') {
        lVar2 = lVar2 + 0x3490;
      }
      else if (cVar1 == '\x01') {
        lVar2 = lVar2 + 0x34a8;
      }
      else {
        if (cVar1 != '\x02') goto LAB_14623859f;
        lVar2 = lVar2 + 0x34c0;
      }
      local_48 = FUN_148df0a8a;
      local_40 = 0;
      FUN_1462385a8(local_38,param_1);
      FUN_14598db50(lVar2,param_2,local_38);
      FUN_1449db362(local_38);
      goto LAB_14623855f;
    }
  }
LAB_14623859f:
  *param_2 = 0;
LAB_14623855f:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462385a8 FUN_1462385a8 body=428 status=ok
// SIG undefined FUN_1462385a8(void)

longlong * FUN_1462385a8(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x48);
  if (plVar6 == (longlong *)0x0) {
LAB_146238688:
    *puVar5 = &PTR_LAB_14b968270;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b99db40;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146238688;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b968270;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b99db40;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146238754 FUN_146238754 body=926 status=ok
// SIG undefined FUN_146238754(void)

void FUN_146238754(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 *local_50;
  undefined8 *local_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = *(longlong **)(param_1 + 8);
  if (DAT_14ca84ef4 == '\x01') {
    local_48 = (undefined8 *)((ulonglong)local_48 & 0xffffffff00000000);
    local_50 = (undefined1 *)0x0;
    iVar3 = (**(code **)(*plVar1 + 0x68))(plVar1,0x1b,&local_50,0xc);
    if ((-1 < iVar3) && (10 < (int)local_48)) {
      DAT_14ca84ef7 = '\x01';
    }
  }
  if (DAT_14ca84ef7 == '\x01') {
    local_50 = &DAT_100000068;
    uVar4 = 1;
    if (DAT_14ca81480 == 0) {
      uVar4 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    }
    local_40 = (ulonglong)uVar4;
    local_48 = &local_38;
    uStack_30 = 0;
    local_38 = 9;
    plVar2 = *(longlong **)(param_1 + 0x4d8);
    if (plVar2 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x4d8) = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    local_a8 = (undefined8 *)(param_1 + 0x4d8);
    iVar3 = (**(code **)(*plVar1 + 0x148))(plVar1,&local_50,0,&DAT_14a349288);
    if (iVar3 < 0) {
      local_a0 = &local_68;
      local_68 = 0;
      uStack_60 = 0;
      local_a8 = (undefined8 *)0x0;
      FUN_145763094(iVar3,
                    "Device->CreateCommandSignature(&SignatureDesc, nullptr, IID_PPV_ARGS(DispatchRaysIndirectCommandSignature.GetInitReference()))"
                    ,".\\Runtime/D3D12RHI/Private/Windows/WindowsD3D12Device.cpp",0xa01);
    }
  }
  local_50 = &DAT_10000000c;
  uVar4 = 1;
  if (DAT_14ca81480 == 0) {
    uVar4 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  }
  local_40 = (ulonglong)uVar4;
  local_48 = &local_38;
  uStack_30 = 0;
  local_38 = 2;
  plVar2 = *(longlong **)(param_1 + 0x4c0);
  if (plVar2 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x4c0) = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  local_a8 = (undefined8 *)(param_1 + 0x4c0);
  iVar3 = (**(code **)(*plVar1 + 0x148))(plVar1,&local_50,0,&DAT_14a349288);
  if (iVar3 < 0) {
    local_a0 = &local_78;
    local_78 = 0;
    uStack_70 = 0;
    local_a8 = (undefined8 *)0x0;
    FUN_145763094(iVar3,
                  "Device->CreateCommandSignature(&CommandSignatureDesc, nullptr, IID_PPV_ARGS(DispatchIndirectGraphicsCommandSignature.GetInitReference()))"
                  ,".\\Runtime/D3D12RHI/Private/Windows/WindowsD3D12Device.cpp",0xa12);
  }
  plVar2 = *(longlong **)(param_1 + 0x4c8);
  if (plVar2 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x4c8) = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  local_a8 = (undefined8 *)(param_1 + 0x4c8);
  iVar3 = (**(code **)(*plVar1 + 0x148))(plVar1,&local_50,0,&DAT_14a349288);
  if (iVar3 < 0) {
    local_a0 = &local_88;
    local_88 = 0;
    uStack_80 = 0;
    local_a8 = (undefined8 *)0x0;
    FUN_145763094(iVar3,
                  "Device->CreateCommandSignature(&CommandSignatureDesc, nullptr, IID_PPV_ARGS(DispatchIndirectComputeCommandSignature.GetInitReference()))"
                  ,".\\Runtime/D3D12RHI/Private/Windows/WindowsD3D12Device.cpp",0xa15);
  }
  if (DAT_14ca84f63 == '\x01') {
    local_38 = CONCAT44(local_38._4_4_,10);
    local_50 = (undefined1 *)CONCAT44(local_50._4_4_,0xc);
    plVar2 = *(longlong **)(param_1 + 0x4d0);
    if (plVar2 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x4d0) = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    local_a8 = (undefined8 *)(param_1 + 0x4d0);
    iVar3 = (**(code **)(*plVar1 + 0x148))(plVar1,&local_50,0,&DAT_14a349288);
    if (iVar3 < 0) {
      local_a0 = &local_98;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = (undefined8 *)0x0;
      FUN_145763094(iVar3,
                    "Device->CreateCommandSignature(&CommandSignatureDesc, nullptr, IID_PPV_ARGS(DispatchIndirectMeshCommandSignature.GetInitReference()))"
                    ,".\\Runtime/D3D12RHI/Private/Windows/WindowsD3D12Device.cpp",0xa1c);
    }
  }
  FUN_146238af4(param_1);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146238af4 FUN_146238af4 body=437 status=ok
// SIG undefined FUN_146238af4(void)

void FUN_146238af4(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 *local_50;
  undefined8 *local_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = *(longlong **)(param_1 + 8);
  uVar4 = 1;
  if (DAT_14ca81480 == 0) {
    uVar4 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  }
  local_40 = (ulonglong)uVar4;
  local_50 = &DAT_100000010;
  local_48 = &local_38;
  local_38 = 0;
  uStack_30 = 0;
  plVar2 = *(longlong **)(param_1 + 0x4b0);
  if (plVar2 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x4b0) = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  local_88 = (undefined8 *)(param_1 + 0x4b0);
  iVar3 = (**(code **)(*plVar1 + 0x148))(plVar1,&local_50,0,&DAT_14a349288);
  if (iVar3 < 0) {
    local_80 = &local_68;
    local_68 = 0;
    uStack_60 = 0;
    local_88 = (undefined8 *)0x0;
    FUN_145763094(iVar3,
                  "Device->CreateCommandSignature(&commandSignatureDesc, nullptr, IID_PPV_ARGS(DrawIndirectCommandSignature.GetInitReference()))"
                  ,".\\Runtime/D3D12RHI/Private/D3D12Adapter.cpp",0x594);
  }
  local_38 = CONCAT44(local_38._4_4_,1);
  local_50 = (undefined1 *)CONCAT44(local_50._4_4_,0x14);
  plVar2 = *(longlong **)(param_1 + 0x4b8);
  if (plVar2 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x4b8) = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  local_88 = (undefined8 *)(param_1 + 0x4b8);
  iVar3 = (**(code **)(*plVar1 + 0x148))(plVar1,&local_50,0,&DAT_14a349288);
  if (iVar3 < 0) {
    local_80 = &local_78;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = (undefined8 *)0x0;
    FUN_145763094(iVar3,
                  "Device->CreateCommandSignature(&commandSignatureDesc, nullptr, IID_PPV_ARGS(DrawIndexedIndirectCommandSignature.GetInitReference()))"
                  ,".\\Runtime/D3D12RHI/Private/D3D12Adapter.cpp",0x598);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146238caa FUN_146238caa body=663 status=ok
// SIG undefined FUN_146238caa(void)

undefined8 * FUN_146238caa(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  code *local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = (**(code **)(*(longlong *)*param_3 + 8))();
  if (lVar5 == 0) {
LAB_146238e9d:
    *param_2 = 0;
    param_2[1] = 0;
    if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  lVar6 = FUN_144a2f878();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) goto LAB_146238e9d;
  lVar6 = FUN_1404281d6(lVar5);
  if (lVar6 == 0) {
LAB_146238eba:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_144a7a5f4();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) goto LAB_146238eba;
    bVar3 = *(byte *)(lVar6 + 0xbd8);
    if ((bVar3 != 0) && ((int)(uint)bVar3 < *(int *)(lVar6 + 0xbf0))) {
      plVar8 = *(longlong **)
                (*(longlong *)(lVar6 + 0xbe8) + 0x10 +
                (ulonglong)bVar3 * 0x80 + (ulonglong)(uint)bVar3 * 8);
      if (plVar8 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar8 + 0x2f8))();
        goto LAB_146238d59;
      }
    }
  }
  uVar4 = 0;
LAB_146238d59:
  local_68 = (code *)CONCAT71(local_68._1_7_,uVar4);
  local_58 = param_3[1];
  local_50 = (longlong *)param_3[2];
  if (local_50 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    plVar8 = local_50;
  }
  local_70 = (longlong *)FUN_146238f42(&local_58,&local_68);
  local_78 = local_70 + 2;
  FUN_14623905c();
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
  plVar8 = local_78;
  FUN_14485c47a(local_78 + 8,lVar6);
  local_68 = FUN_145813b16;
  local_60 = 0;
  FUN_1462390fe(&local_58,&local_78);
  FUN_14100c9d8(lVar5 + 0x6170,&local_68,&local_58);
  FUN_1449db362(&local_58);
  local_68 = FUN_148de1914;
  local_60 = 0;
  FUN_14623922a(&local_58,&local_78,&local_68);
  FUN_1411aefd8(lVar5 + 0x6150,&local_68,&local_58);
  FUN_1449db362(&local_58);
  plVar1 = local_70;
  *param_2 = plVar8;
  param_2[1] = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_70 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 146238f42 FUN_146238f42 body=149 status=ok
// SIG undefined FUN_146238f42(void)

undefined8 * FUN_146238f42(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b99f9c0;
  uVar1 = *param_2;
  local_30 = *param_1;
  local_28 = param_1[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_146238fd8(puVar2 + 2,&local_30,uVar1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146238fd8 FUN_146238fd8 body=132 status=ok
// SIG undefined FUN_146238fd8(void)

undefined8 * FUN_146238fd8(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xf0 | param_3 * '\x02';
  *param_1 = &PTR_FUN_14b99fa00;
  param_1[6] = *param_2;
  lVar3 = param_2[1];
  param_1[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *param_1 = &PTR_FUN_14b99f9e0;
  param_1[8] = 0;
  param_1[9] = 0;
  plVar4 = (longlong *)param_2[1];
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



// FUNCTION 14623905c FUN_14623905c body=162 status=ok
// SIG undefined FUN_14623905c(void)

void FUN_14623905c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14623909b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14623909b;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14623909b:
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
                    /* WARNING: Could not recover jumptable at 0x0001462390fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1462390fe FUN_1462390fe body=300 status=ok
// SIG undefined FUN_1462390fe(void)

longlong * FUN_1462390fe(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14b4aa9f0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99fa20;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4aa9f0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99fa20;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14623922a FUN_14623922a body=300 status=ok
// SIG undefined FUN_14623922a(void)

longlong * FUN_14623922a(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14b9667e0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99fa90;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b9667e0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99fa90;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146239356 FUN_146239356 body=236 status=ok
// SIG undefined FUN_146239356(void)

undefined8 FUN_146239356(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 8) != 0) goto LAB_1462393c2;
  plVar3 = (longlong *)FUN_14001cc68(0x98,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ab41b00;
  FUN_14167e7b0(plVar3 + 2);
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = 0x10;
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == (longlong *)0x0) goto LAB_1462393c2;
    *(undefined8 *)(param_1 + 0x10) = 0;
LAB_1462393e3:
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
    if (plVar3 == (longlong *)0x0) goto LAB_1462393c2;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 8) = plVar3 + 2;
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x10) = plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_1462393e3;
    }
  }
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_1462393c2:
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 14623944a FUN_14623944a body=1361 status=ok
// SIG undefined FUN_14623944a(void)

undefined8 * FUN_14623944a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1461e88a8(param_1,uVar1);
  *param_1 = &PTR_FUN_14b62a510;
  param_1[0x72] = &PTR_FUN_14b62b0f0;
  param_1[0xe9] = &PTR_FUN_14b62b150;
  param_1[0xea] = &PTR_FUN_14b62b168;
  param_1[0x10c] = &PTR_FUN_14b62b180;
  param_1[0x10d] = &PTR_FUN_14b62b1a0;
  param_1[0x10e] = &PTR_FUN_14b62b1e0;
  param_1[0x10f] = &PTR_FUN_14b62b200;
  param_1[0x214] = &PTR_FUN_14b62b220;
  param_1[0x215] = &PTR_FUN_14b62b2e0;
  param_1[0x216] = &PTR_FUN_14b62b310;
  param_1[0x217] = &PTR_FUN_14b62b380;
  param_1[0x218] = &PTR_FUN_14b62b3b0;
  param_1[0x219] = &PTR_FUN_14b62b430;
  param_1[0x21a] = &PTR_FUN_14b62b4a0;
  param_1[0x21b] = &PTR_FUN_14b62b4d0;
  param_1[0x21c] = &PTR_FUN_14b62b500;
  param_1[0x21d] = &PTR_FUN_14b62b570;
  param_1[0x21e] = &PTR_FUN_14b62b590;
  param_1[0x21f] = &PTR_FUN_14b62b5b0;
  param_1[0x220] = &PTR_FUN_14b62b5e0;
  param_1[0x221] = &PTR_FUN_14b62b620;
  param_1[0x222] = &PTR_FUN_14b62b640;
  param_1[0x223] = &PTR_FUN_14b62b660;
  param_1[0x224] = &PTR_FUN_14b62b690;
  param_1[0x225] = &PTR_FUN_14b62b6d0;
  param_1[0x226] = &PTR_FUN_14b62b6f0;
  param_1[0x227] = &PTR_FUN_14b62b710;
  param_1[0x228] = &PTR_FUN_14b62b7b0;
  param_1[0x229] = &PTR_FUN_14b62b7e0;
  param_1[0x22a] = &PTR_FUN_14b62b800;
  param_1[0x22b] = &PTR_FUN_14b62b840;
  param_1[0x22c] = &PTR_FUN_14b62b870;
  param_1[0x22d] = &PTR_FUN_14b62b890;
  param_1[0x22e] = &PTR_FUN_14b62b8c0;
  param_1[0x22f] = &PTR_FUN_14b62b910;
  param_1[0x230] = &PTR_FUN_14b62b940;
  param_1[0x231] = &PTR_FUN_14b62b990;
  param_1[0x232] = &PTR_FUN_14b62b9c0;
  param_1[0x233] = &PTR_FUN_14b62b9e0;
  param_1[0x236] = &PTR_FUN_14b62ba20;
  param_1[0x744] = &PTR_FUN_14b62ba40;
  param_1[0x745] = &PTR_FUN_14b62ba60;
  param_1[0x746] = &PTR_FUN_14b62ba90;
  param_1[0x747] = &PTR_FUN_14b62bb70;
  param_1[0x748] = &PTR_FUN_14b62bb90;
  param_1[0x749] = &PTR_FUN_14b62bba8;
  param_1[0x750] = &PTR_FUN_14b62bbc0;
  param_1[0x751] = &PTR_FUN_14b62bbe0;
  param_1[0x752] = &PTR_FUN_14b62bc20;
  param_1[0x759] = &PTR_FUN_14b62bcd0;
  param_1[0x75a] = &PTR_FUN_14b62bd10;
  param_1[0x75b] = &PTR_FUN_14b62bd40;
  param_1[0x75c] = &PTR_FUN_14b62bd70;
  param_1[0x75d] = &PTR_FUN_14b62bdb0;
  param_1[0x761] = &PTR_FUN_14b62bdd0;
  param_1[0x764] = &PTR_FUN_14b62bde0;
  param_1[0x765] = &PTR_FUN_14b62be20;
  param_1[0x766] = &PTR_FUN_14b62bf30;
  param_1[0x767] = &PTR_FUN_14b62bf50;
  param_1[0x768] = &PTR_FUN_14b62bf70;
  param_1[0x769] = &PTR_FUN_14b62c010;
  param_1[0x76a] = &PTR_FUN_14b62c0b0;
  param_1[0x76b] = &PTR_FUN_14b62c0f0;
  param_1[0x76c] = &PTR_FUN_14b62c120;
  param_1[0x76d] = &PTR_FUN_14b62c1b0;
  param_1[0x76e] = &PTR_FUN_14b62c220;
  param_1[0x773] = &PTR_FUN_14b62c250;
  param_1[0x774] = &PTR_FUN_14b62c290;
  param_1[0x775] = &PTR_FUN_14b62c2c0;
  param_1[0x776] = &PTR_FUN_14b62c2d8;
  param_1[0x777] = &PTR_FUN_14b62c2f0;
  param_1[0x778] = &PTR_FUN_14b62c320;
  param_1[0x779] = &PTR_FUN_14b62c350;
  param_1[0x77c] = &PTR_FUN_14b62c390;
  param_1[0x77d] = &PTR_FUN_14b62c3b0;
  param_1[0x77e] = &PTR_FUN_14b62c480;
  param_1[0x77f] = &PTR_FUN_14b62c4a0;
  param_1[0x780] = &PTR_FUN_14b62c4c0;
  param_1[0x781] = &PTR_FUN_14b62c4f0;
  param_1[0x782] = &PTR_FUN_14b62c510;
  param_1[0x783] = &PTR_FUN_14b62c530;
  param_1[0x784] = &PTR_FUN_14b62c560;
  param_1[0x785] = &PTR_FUN_14b62c590;
  param_1[0x786] = &PTR_FUN_14b62c5b0;
  param_1[0x787] = &PTR_FUN_14b62c5d0;
  param_1[0x788] = &PTR_FUN_14b62c600;
  param_1[0x789] = &PTR_FUN_14b62c620;
  param_1[0x78a] = &PTR_FUN_14b62c640;
  param_1[0x78b] = &PTR_FUN_14b62c690;
  param_1[0x78c] = &PTR_FUN_14b62c6d0;
  param_1[0x78d] = &PTR_FUN_14b62c730;
  *(undefined1 *)(param_1 + 0x139a) = 0;
  param_1[0x139b] = 0;
  *(undefined2 *)(param_1 + 0x139c) = 0;
  *(undefined1 *)(param_1 + 0x139f) = 0;
  param_1[0x139d] = 0;
  param_1[0x139e] = 0;
  return param_1;
}



// FUNCTION 14623999c FUN_14623999c body=380 status=ok
// SIG undefined FUN_14623999c(void)

undefined4 FUN_14623999c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined8 uStack_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1412cbf9c(&local_50);
  if (local_50 == 0) {
    uVar4 = 0;
    goto LAB_1462399d5;
  }
  uVar3 = *param_3;
  uVar5 = FUN_1412cbf12(*(longlong *)(param_1 + 0xa8) + 8);
  local_60 = 0;
  uStack_58 = 0;
  uVar6 = FUN_1406eea5e();
  lVar7 = FUN_14477b664(uVar6);
  lVar8 = FUN_1406eea5e();
  uVar6 = FUN_1406eea5e();
  FUN_1402d1bfa(&local_40,uVar6,uVar5);
  if (local_40 != 0) {
    uStack_58 = 0;
  }
  local_68 = local_40;
  lVar9 = FUN_1406eea5e();
  if (lVar8 == 0) {
LAB_146239a9d:
    lVar9 = lVar8;
  }
  else if (lVar9 == 0) {
    lVar9 = 0;
  }
  else if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30)) goto LAB_146239a9d;
  if (lVar7 != lVar9) {
    uStack_58 = 0;
  }
  uVar6 = FUN_14477b664(lVar9);
  local_60 = FUN_14477b664(uVar6);
  if ((local_40 != 0) && (local_60 != 0)) {
    uStack_58 = uVar5;
  }
  uVar4 = FUN_146239b1a(local_50,&local_68,uVar3);
LAB_1462399d5:
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
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146239b1a FUN_146239b1a body=308 status=ok
// SIG undefined FUN_146239b1a(void)

ulonglong FUN_146239b1a(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong unaff_RBP;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = param_2[1];
  if (lVar5 == 0) {
    uVar4 = FUN_1406eea5e();
    lVar5 = FUN_14477b664(uVar4);
    param_2[1] = lVar5;
  }
  if (param_2[2] != 0) {
LAB_146239b50:
    FUN_1406eed88(param_1,&local_40,param_2,1);
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),local_40 != 0);
    if ((local_40 != 0) && (param_3 != 0)) {
      FUN_14480f766(local_40 + 0x38,param_3);
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_38 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
    goto LAB_146239b97;
  }
  unaff_RBP = 0;
  if ((lVar5 == 0) || (*param_2 == 0)) goto LAB_146239b97;
  plVar2 = *(longlong **)(lVar5 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_146239c45:
    param_2[2] = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_146239c45;
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,param_2);
    param_2[2] = lVar5;
    if (lVar5 != 0) goto LAB_146239b50;
  }
  unaff_RBP = 0;
LAB_146239b97:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return unaff_RBP & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146239c50 FUN_146239c50 body=235 status=ok
// SIG undefined FUN_146239c50(void)

undefined8 FUN_146239c50(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_48;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(uVar4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x80) = 0;
  FUN_140b576f0();
  lVar3 = *(longlong *)(param_1 + 0x68);
  while ((*(byte *)(lVar3 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(lVar3 + 0x70) + 0x20))(*(longlong **)(lVar3 + 0x70),0xffffffff,0);
  }
  local_78 = *(undefined8 *)(lVar3 + 0x80);
  local_58 = 0;
  local_48 = 0;
  local_70 = param_1;
  FUN_14167e81a(local_68,0);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146239d3c FUN_146239d3c body=96 status=ok
// SIG undefined FUN_146239d3c(void)

ulonglong FUN_146239d3c(longlong param_1)

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
LAB_146239d7f:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146239d7f;
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



// FUNCTION 146239d9c FUN_146239d9c body=258 status=ok
// SIG undefined FUN_146239d9c(void)

void FUN_146239d9c(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 400) == '\x01') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = FUN_1403ca142();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        bVar1 = (**(code **)(*plVar2 + 0x498))(plVar2);
        if (6 < bVar1) {
          lVar3 = FUN_14119d4d6(plVar2);
          if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x30) != 0)) {
            lVar4 = FUN_144a5dd5e();
            plVar2 = *(longlong **)(lVar3 + 0x30);
            if (((plVar2 != (longlong *)0x0) &&
                (((lVar4 != 0 && (lVar3 = plVar2[2], lVar3 != 0)) &&
                 (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))))) &&
               (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
                lVar4 + 0x30)) {
              local_28 = 0;
              uStack_20 = 0;
              bVar1 = (**(code **)(*plVar2 + 0xb20))(plVar2,0);
              *(byte *)(param_1 + 400) = bVar1 ^ 1;
            }
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146239ea0 FUN_146239ea0 body=343 status=ok
// SIG undefined FUN_146239ea0(void)

void FUN_146239ea0(longlong param_1)

{
  byte bVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_1403ca142();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)) && (lVar4 = plVar3[9], lVar4 != 0)) {
      lVar5 = FUN_140b6d0be();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        bVar1 = (**(code **)(*plVar3 + 0x498))(plVar3);
        if (6 < bVar1) {
          FUN_14127bdbc(lVar4,&local_38);
          if (local_38 != 0) {
            FUN_1400020a8();
          }
          if (local_30 == 0) {
            lVar4 = FUN_14119d4d6(plVar3);
            if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x30) != 0)) {
              lVar5 = FUN_144a5dd5e();
              plVar3 = *(longlong **)(lVar4 + 0x30);
              if (((plVar3 != (longlong *)0x0) &&
                  (((lVar5 != 0 && (lVar4 = plVar3[2], lVar4 != 0)) &&
                   (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))))) &&
                 (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
                  == lVar5 + 0x30)) {
                local_48 = 0;
                uStack_40 = 0;
                uVar2 = (**(code **)(*plVar3 + 0xb20))
                                  (plVar3,CONCAT71((int7)((ulonglong)*(longlong *)(lVar4 + 0x30) >>
                                                         8),1));
                *(undefined1 *)(param_1 + 400) = uVar2;
              }
            }
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146239ff8 FUN_146239ff8 body=158 status=ok
// SIG undefined FUN_146239ff8(void)

bool FUN_146239ff8(longlong param_1,undefined8 param_2)

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



// FUNCTION 14623a098 FUN_14623a098 body=191 status=ok
// SIG undefined FUN_14623a098(void)

void FUN_14623a098(longlong *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    lVar4 = (**(code **)(*param_1 + 0x2b8))();
    if (lVar4 != 0) {
      lVar5 = FUN_144a2f878();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        uVar3 = FUN_14042831e(lVar4);
        if (uVar3 != *(byte *)(param_2 + 8)) {
          cVar2 = FUN_1458df38a(lVar4 + 0x60e8,0);
          if (cVar2 != '\0') {
            bVar1 = *(byte *)(param_2 + 8);
            if (((((int)(uint)bVar1 < *(int *)(lVar4 + 0x78f0)) &&
                 (lVar5 = (ulonglong)(((uint)bVar1 + (uint)bVar1 * 8) * 8) +
                          *(longlong *)(lVar4 + 0x78e8), lVar5 != 0)) &&
                (*(longlong *)(lVar5 + 0x20) != 0)) &&
               ((*(longlong *)(lVar5 + 0x28) != 0 && (*(char *)(lVar5 + 0x10) == '\0')))) {
              FUN_14130b0ce(lVar4,bVar1,0,0);
            }
            FUN_140f64a3c(param_1);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14623a158 FUN_14623a158 body=165 status=ok
// SIG undefined FUN_14623a158(void)

void FUN_14623a158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined4 *param_5)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_3a;
  char local_39;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = *(char *)(param_5 + 6);
  if (local_20 == '\x01') {
    local_28 = *(undefined8 *)(param_5 + 4);
    local_38 = *param_5;
    uStack_34 = param_5[1];
    uStack_30 = param_5[2];
    uStack_2c = param_5[3];
  }
  local_39 = param_4[1];
  if (local_39 == '\x01') {
    local_3a = *param_4;
  }
  local_48 = param_1;
  FUN_14167f218(param_2,param_3,&local_3a,&local_38);
  if (param_4[1] == '\x01') {
    param_4[1] = 0;
  }
  if (*(char *)(param_5 + 6) == '\x01') {
    *(undefined1 *)(param_5 + 6) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14623a1fe FUN_14623a1fe body=756 status=ok
// SIG undefined FUN_14623a1fe(void)

undefined8 * FUN_14623a1fe(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  code *local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = (**(code **)(*(longlong *)*param_3 + 8))();
  if (lVar7 == 0) {
LAB_14623a46b:
    *param_2 = 0;
    param_2[1] = 0;
    if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  lVar8 = FUN_144a2f878();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
      lVar8 + 0x30)) goto LAB_14623a46b;
  lVar8 = FUN_1404281d6(lVar7);
  if (lVar8 == 0) {
LAB_14623a45f:
    bVar4 = true;
    plVar9 = (longlong *)0x0;
  }
  else {
    bVar3 = *(byte *)(lVar8 + 0xbd8);
    if (*(int *)(lVar8 + 0xbf0) <= (int)(uint)bVar3) goto LAB_14623a45f;
    plVar9 = *(longlong **)
              (*(longlong *)(lVar8 + 0xbe8) + 0x10 + (ulonglong)bVar3 * 0x80 + (ulonglong)bVar3 * 8)
    ;
    if (plVar9 == (longlong *)0x0) goto LAB_14623a45f;
    if (*(char *)(param_1 + 0x10) == '\0') {
      uVar5 = (**(code **)(*plVar9 + 0x330))(plVar9);
LAB_14623a2be:
      bVar4 = false;
      goto LAB_14623a2c0;
    }
    if (*(char *)(param_1 + 0x10) == '\x01') {
      iVar6 = (**(code **)(*plVar9 + 0x2e8))(plVar9);
      uVar5 = iVar6 == 0;
      goto LAB_14623a2be;
    }
    bVar4 = false;
  }
  uVar5 = 0;
LAB_14623a2c0:
  local_68 = (code *)CONCAT71(local_68._1_7_,uVar5);
  local_58 = param_3[1];
  local_50 = (longlong *)param_3[2];
  if (local_50 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    plVar10 = local_50;
  }
  local_70 = (longlong *)FUN_14623a4f3(&local_58,&local_68);
  local_78 = local_70 + 2;
  FUN_14623a60e();
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (!bVar4) {
    FUN_14485c47a(local_78 + 9,plVar9);
    local_68 = FUN_140c71d5c;
    local_60 = 0;
    FUN_14623a6b0(&local_58,&local_78);
    FUN_1448b6402(plVar9 + 8,&local_68,&local_58);
    FUN_1449db362(&local_58);
    local_78[8] = (longlong)local_68;
  }
  plVar9 = local_78;
  local_68 = FUN_1458f7560;
  local_60 = 0;
  FUN_14623a7dc(&local_58,&local_78);
  FUN_14100c9d8(lVar7 + 0x6170,&local_68,&local_58);
  FUN_1449db362(&local_58);
  local_68 = FUN_1442231a0;
  local_60 = 0;
  FUN_141682db0(&local_58,&local_78,&local_68);
  FUN_1411aefd8(lVar7 + 0x6150,&local_68,&local_58);
  FUN_1449db362(&local_58);
  plVar10 = local_70;
  *param_2 = plVar9;
  param_2[1] = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_70 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 14623a4f3 FUN_14623a4f3 body=149 status=ok
// SIG undefined FUN_14623a4f3(void)

undefined8 * FUN_14623a4f3(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b99f7b0;
  uVar1 = *param_2;
  local_30 = *param_1;
  local_28 = param_1[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_14623a58a(puVar2 + 2,&local_30,uVar1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14623a58a FUN_14623a58a body=132 status=ok
// SIG undefined FUN_14623a58a(void)

undefined8 * FUN_14623a58a(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xf0 | param_3 * '\x02';
  *param_1 = &PTR_FUN_14b99f7f0;
  param_1[6] = *param_2;
  lVar3 = param_2[1];
  param_1[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *param_1 = &PTR_FUN_14b99f7d0;
  param_1[8] = 0;
  param_1[9] = 0;
  plVar4 = (longlong *)param_2[1];
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



// FUNCTION 14623a60e FUN_14623a60e body=162 status=ok
// SIG undefined FUN_14623a60e(void)

void FUN_14623a60e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14623a64d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14623a64d;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14623a64d:
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
                    /* WARNING: Could not recover jumptable at 0x00014623a6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14623a6b0 FUN_14623a6b0 body=300 status=ok
// SIG undefined FUN_14623a6b0(void)

longlong * FUN_14623a6b0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99b880;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99b880;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14623a7dc FUN_14623a7dc body=300 status=ok
// SIG undefined FUN_14623a7dc(void)

longlong * FUN_14623a7dc(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14b4aa9f0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99f810;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4aa9f0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99f810;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14623a918 FUN_14623a918 body=2097 status=ok
// SIG undefined FUN_14623a918(void)

ulonglong FUN_14623a918(undefined1 *param_1,longlong *param_2,longlong *param_3,undefined1 *param_4)

{
  ushort *puVar1;
  ulonglong *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  byte bVar11;
  byte bVar12;
  undefined8 unaff_RBP;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_58;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4a = 0;
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      bVar5 = 0;
    }
    else {
      bVar5 = (*(longlong *)(param_1 + 0x18) != 0) << 2;
    }
    if (*(longlong *)(param_1 + 0x30) == 0) {
      bVar11 = 0;
    }
    else {
      bVar11 = (*(longlong *)(param_1 + 0x38) != 0) << 4;
    }
    if (*(longlong *)(param_1 + 0x20) == 0) {
      bVar7 = 0;
    }
    else {
      bVar7 = (*(longlong *)(param_1 + 0x28) != 0) << 7;
    }
    if (*(longlong *)(param_1 + 0x40) == 0) {
      bVar6 = 0;
    }
    else {
      bVar6 = (*(longlong *)(param_1 + 0x48) != 0) * '\x02';
    }
    if (*(longlong *)(param_1 + 0x50) == 0) {
LAB_14623ad84:
      bVar12 = 0;
    }
    else {
      bVar12 = 4;
      if ((longlong)*(int *)(param_1 + 0x68) != 0) {
        lVar14 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar14) == 0) goto LAB_14623ad84;
          lVar14 = lVar14 + 8;
        } while ((longlong)*(int *)(param_1 + 0x68) * 8 != lVar14);
      }
    }
    local_4a = CONCAT11((*(int *)(param_1 + 0x138) != DAT_14c9485f0) << 7 |
                        (*(int *)(param_1 + 0x168) != 0) << 4 |
                        (*(int *)(param_1 + 0x164) != 0) << 3 |
                        bVar6 | *(longlong *)(param_1 + 0x130) != 0 | bVar12 |
                        (*(int *)(param_1 + 0x16c) != 0) << 5 |
                        (*(int *)(param_1 + 0x170) != 0) << 6,
                        (*(int *)(param_1 + 8) != -1) << 5 |
                        (*(longlong *)(param_1 + 0x128) != 0) << 3 |
                        (param_1[0x160] != -1) * '\x02' | *(int *)(param_1 + 4) != -1 | bVar5 |
                        bVar11 | (param_1[0x161] != -1) << 6 | bVar7);
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (ushort *)*puVar2 + 1;
  if ((ushort *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_4a,2);
    }
    else {
      thunk_FUN_1457251a8(param_2,&local_4a);
    }
  }
  else {
    local_4a = *(ushort *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1,1);
  }
  else {
    *param_1 = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  bVar5 = (byte)local_4a;
  if ((local_4a & 1) != 0) {
    FUN_1458ba6b4(param_2,param_1 + 4);
    bVar5 = (byte)local_4a;
  }
  if ((bVar5 & 2) != 0) {
    puVar3 = *(undefined1 **)param_2[1];
    if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x160,1);
      bVar5 = (byte)local_4a;
    }
    else {
      param_1[0x160] = *puVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
  }
  if ((bVar5 & 4) == 0) {
    uVar13 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  }
  else {
    local_58 = *(longlong *)(param_1 + 0x10);
    uVar10 = FUN_1446f8646();
    local_68 = 0;
    uVar8 = (**(code **)(*param_3 + 0x2a8))(param_3,param_2,uVar10,&local_58);
    lVar14 = local_58;
    uVar13 = (ulonglong)uVar8;
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      if ((local_58 == 0) || (DAT_14c950c29 == '\0')) {
        if (local_58 != 0) goto LAB_14623ab53;
        uVar10 = 0;
      }
      else {
        FUN_1456cec3c(local_58);
LAB_14623ab53:
        uVar10 = FUN_14119f41e();
        uVar10 = FUN_144718840(lVar14,uVar10);
        if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar14);
        }
      }
      *(longlong *)(param_1 + 0x10) = lVar14;
      *(undefined8 *)(param_1 + 0x18) = uVar10;
    }
    bVar5 = (byte)local_4a;
  }
  if ((bVar5 & 8) != 0) {
    (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x128);
    bVar5 = (byte)local_4a;
  }
  if ((bVar5 & 0x10) != 0) {
    local_58 = *(longlong *)(param_1 + 0x30);
    uVar10 = FUN_1446f8646();
    local_68 = 0;
    bVar5 = (**(code **)(*param_3 + 0x2a8))(param_3,param_2,uVar10,&local_58);
    lVar14 = local_58;
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      if ((local_58 == 0) || (DAT_14c950c29 == '\0')) {
        if (local_58 != 0) goto LAB_14623acfe;
        uVar10 = 0;
      }
      else {
        FUN_1456cec3c(local_58);
LAB_14623acfe:
        uVar10 = FUN_14131a30e();
        uVar10 = FUN_144718840(lVar14,uVar10);
        if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar14);
        }
      }
      *(longlong *)(param_1 + 0x30) = lVar14;
      *(undefined8 *)(param_1 + 0x38) = uVar10;
    }
    uVar13 = CONCAT71((int7)(uVar13 >> 8),(byte)uVar13 & bVar5);
    bVar5 = (byte)local_4a;
  }
  if ((bVar5 & 0x20) != 0) {
    FUN_1458ba6b4(param_2,param_1 + 8);
    bVar5 = (byte)local_4a;
  }
  if ((bVar5 & 0x40) != 0) {
    puVar3 = *(undefined1 **)param_2[1];
    if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x161,1);
      bVar5 = (byte)local_4a;
    }
    else {
      param_1[0x161] = *puVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
  }
  if ((char)bVar5 < '\0') {
    local_58 = *(longlong *)(param_1 + 0x20);
    uVar10 = FUN_1446f8646();
    local_68 = 0;
    bVar5 = (**(code **)(*param_3 + 0x2a8))(param_3,param_2,uVar10,&local_58);
    lVar14 = local_58;
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      if ((local_58 == 0) || (DAT_14c950c29 == '\0')) {
        if (local_58 != 0) goto LAB_14623ae6e;
        uVar10 = 0;
      }
      else {
        FUN_1456cec3c(local_58);
LAB_14623ae6e:
        uVar10 = FUN_14119f41e();
        uVar10 = FUN_144718840(lVar14,uVar10);
        if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar14);
        }
      }
      *(longlong *)(param_1 + 0x20) = lVar14;
      *(undefined8 *)(param_1 + 0x28) = uVar10;
    }
    uVar13 = CONCAT71((int7)(uVar13 >> 8),(byte)uVar13 & bVar5);
  }
  if ((local_4a & 0x100) != 0) {
    (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x130);
  }
  bVar5 = local_4a._1_1_;
  if ((local_4a._1_1_ & 2) == 0) goto LAB_14623abd3;
  local_58 = *(longlong *)(param_1 + 0x40);
  uVar10 = FUN_1446f8646();
  local_68 = 0;
  uVar9 = (**(code **)(*param_3 + 0x2a8))(param_3,param_2,uVar10,&local_58);
  lVar14 = local_58;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    if ((local_58 == 0) || (DAT_14c950c29 == '\0')) {
      if (local_58 != 0) goto LAB_14623af24;
      uVar10 = 0;
    }
    else {
      FUN_1456cec3c(local_58);
LAB_14623af24:
      uVar10 = FUN_14131a30e();
      uVar10 = FUN_144718840(lVar14,uVar10);
      if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar14);
      }
    }
    *(longlong *)(param_1 + 0x40) = lVar14;
    *(undefined8 *)(param_1 + 0x48) = uVar10;
  }
  uVar13 = (ulonglong)CONCAT31((int3)((uint)uVar9 >> 8),(byte)uVar9 & (char)uVar13 != '\0');
  bVar5 = local_4a._1_1_;
LAB_14623abd3:
  if ((bVar5 & 4) != 0) {
    FUN_1418947b9(param_2,param_1 + 0x50);
    bVar5 = local_4a._1_1_;
  }
  if ((bVar5 & 8) != 0) {
    puVar4 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x164,4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x164) = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if ((local_4a & 0x1000) != 0) {
    puVar4 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x168,4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x168) = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if ((local_4a & 0x2000) != 0) {
    puVar4 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x16c,4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x16c) = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if ((local_4a & 0x4000) != 0) {
    puVar4 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x170,4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x170) = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if ((char)local_4a._1_1_ < '\0') {
    FUN_14075f7c0(param_2,param_1 + 0x138);
  }
  *param_4 = 1;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar13 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14623b14a FUN_14623b14a body=40 status=ok
// SIG undefined FUN_14623b14a(void)

undefined8 FUN_14623b14a(undefined8 param_1,int param_2)

{
  FUN_14623b172();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14623b172 FUN_14623b172 body=1368 status=ok
// SIG undefined FUN_14623b172(void)

void FUN_14623b172(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6acb10;
  param_1[0x72] = &PTR_FUN_14b6ad6e0;
  param_1[0xe9] = &PTR_FUN_14b6ad740;
  param_1[0xea] = &PTR_FUN_14b6ad758;
  param_1[0x10c] = &PTR_FUN_14b6ad770;
  param_1[0x10d] = &PTR_FUN_14b6ad790;
  param_1[0x10e] = &PTR_FUN_14b6ad7d0;
  param_1[0x10f] = &PTR_FUN_14b6ad7f0;
  param_1[0x214] = &PTR_FUN_14b6ad810;
  param_1[0x215] = &PTR_FUN_14b6ad8d0;
  param_1[0x216] = &PTR_FUN_14b6ad900;
  param_1[0x217] = &PTR_FUN_14b6ad970;
  param_1[0x218] = &PTR_FUN_14b6ad9a0;
  param_1[0x219] = &PTR_FUN_14b6ada20;
  param_1[0x21a] = &PTR_FUN_14b6ada90;
  param_1[0x21b] = &PTR_FUN_14b6adac0;
  param_1[0x21c] = &PTR_FUN_14b6adaf0;
  param_1[0x21d] = &PTR_FUN_14b6adb60;
  param_1[0x21e] = &PTR_FUN_14b6adb80;
  param_1[0x21f] = &PTR_FUN_14b6adba0;
  param_1[0x220] = &PTR_FUN_14b6adbd0;
  param_1[0x221] = &PTR_FUN_14b6adc10;
  param_1[0x222] = &PTR_FUN_14b6adc30;
  param_1[0x223] = &PTR_FUN_14b6adc50;
  param_1[0x224] = &PTR_FUN_14b6adc80;
  param_1[0x225] = &PTR_FUN_14b6adcc0;
  param_1[0x226] = &PTR_FUN_14b6adce0;
  param_1[0x227] = &PTR_FUN_14b6add00;
  param_1[0x228] = &PTR_FUN_14b6adda0;
  param_1[0x229] = &PTR_FUN_14b6addd0;
  param_1[0x22a] = &PTR_FUN_14b6addf0;
  param_1[0x22b] = &PTR_FUN_14b6ade30;
  param_1[0x22c] = &PTR_FUN_14b6ade60;
  param_1[0x22d] = &PTR_FUN_14b6ade80;
  param_1[0x22e] = &PTR_FUN_14b6adeb0;
  param_1[0x22f] = &PTR_FUN_14b6adf00;
  param_1[0x230] = &PTR_FUN_14b6adf30;
  param_1[0x231] = &PTR_FUN_14b6adf80;
  param_1[0x232] = &PTR_FUN_14b6adfb0;
  param_1[0x233] = &PTR_FUN_14b6adfd0;
  param_1[0x236] = &PTR_FUN_14b6ae010;
  param_1[0x744] = &PTR_FUN_14b6ae030;
  param_1[0x745] = &PTR_FUN_14b6ae050;
  param_1[0x746] = &PTR_FUN_14b6ae080;
  param_1[0x747] = &PTR_FUN_14b6ae160;
  param_1[0x748] = &PTR_FUN_14b6ae180;
  param_1[0x749] = &PTR_FUN_14b6ae198;
  param_1[0x750] = &PTR_FUN_14b6ae1b0;
  param_1[0x751] = &PTR_FUN_14b6ae1d0;
  param_1[0x752] = &PTR_FUN_14b6ae210;
  param_1[0x759] = &PTR_FUN_14b6ae2c0;
  param_1[0x75a] = &PTR_FUN_14b6ae300;
  param_1[0x75b] = &PTR_FUN_14b6ae330;
  param_1[0x75c] = &PTR_FUN_14b6ae360;
  param_1[0x75d] = &PTR_FUN_14b6ae3a0;
  param_1[0x761] = &PTR_FUN_14b6ae3c0;
  param_1[0x764] = &PTR_FUN_14b6ae3d0;
  param_1[0x765] = &PTR_FUN_14b6ae410;
  param_1[0x766] = &PTR_FUN_14b6ae520;
  param_1[0x767] = &PTR_FUN_14b6ae540;
  param_1[0x768] = &PTR_FUN_14b6ae560;
  param_1[0x769] = &PTR_FUN_14b6ae600;
  param_1[0x76a] = &PTR_FUN_14b6ae6a0;
  param_1[0x76b] = &PTR_FUN_14b6ae6e0;
  param_1[0x76c] = &PTR_FUN_14b6ae710;
  param_1[0x76d] = &PTR_FUN_14b6ae7a0;
  param_1[0x76e] = &PTR_FUN_14b6ae810;
  param_1[0x773] = &PTR_FUN_14b6ae840;
  param_1[0x774] = &PTR_FUN_14b6ae880;
  param_1[0x775] = &PTR_FUN_14b6ae8b0;
  param_1[0x776] = &PTR_FUN_14b6ae8c8;
  param_1[0x777] = &PTR_FUN_14b6ae8e0;
  param_1[0x778] = &PTR_FUN_14b6ae910;
  param_1[0x779] = &PTR_FUN_14b6ae940;
  param_1[0x77c] = &PTR_FUN_14b6ae980;
  param_1[0x77d] = &PTR_FUN_14b6ae9a0;
  param_1[0x77e] = &PTR_FUN_14b6aea70;
  param_1[0x77f] = &PTR_FUN_14b6aea90;
  param_1[0x780] = &PTR_FUN_14b6aeab0;
  param_1[0x781] = &PTR_FUN_14b6aeae0;
  param_1[0x782] = &PTR_FUN_14b6aeb00;
  param_1[0x783] = &PTR_FUN_14b6aeb20;
  param_1[0x784] = &PTR_FUN_14b6aeb50;
  param_1[0x785] = &PTR_FUN_14b6aeb80;
  param_1[0x786] = &PTR_FUN_14b6aeba0;
  param_1[0x787] = &PTR_FUN_14b6aebc0;
  param_1[0x788] = &PTR_FUN_14b6aebf0;
  param_1[0x789] = &PTR_FUN_14b6aec10;
  param_1[0x78a] = &PTR_FUN_14b6aec30;
  param_1[0x78b] = &PTR_FUN_14b6aec80;
  param_1[0x78c] = &PTR_FUN_14b6aecc0;
  param_1[0x78d] = &PTR_FUN_14b6aed20;
  param_1[0x139a] = &PTR_FUN_14b6aed40;
  FUN_140255aed(param_1[0x13b7],*(undefined4 *)(param_1 + 0x13b8));
  if (param_1[0x13b7] != 0) {
    FUN_1400020a8();
  }
  FUN_140368b56(param_1 + 0x139c);
  FUN_14145c7a0(param_1);
  return;
}



// FUNCTION 14623b6ca FUN_14623b6ca body=380 status=ok
// SIG undefined FUN_14623b6ca(void)

longlong * FUN_14623b6ca(longlong *param_1,undefined4 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_14001cc68(0x448,0x10);
  local_40 = *param_3;
  local_38 = param_3[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_141683454(lVar2,param_2,&local_40);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f01c10;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if ((lVar2 == 0) ||
     (((*(longlong *)(lVar2 + 8) != 0 && (*(longlong *)(lVar2 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))))) goto LAB_14623b796;
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(lVar2 + 8) = lVar2;
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) goto LAB_14623b796;
LAB_14623b7ec:
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    *(longlong **)(lVar2 + 0x10) = plVar3;
    if (plVar3 == (longlong *)0x0) goto LAB_14623b796;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(lVar2 + 8) = lVar2;
    if (*(longlong **)(lVar2 + 0x10) != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(lVar2 + 0x10);
      if (plVar4 != (longlong *)0x0) goto LAB_14623b7ec;
      *(longlong **)(lVar2 + 0x10) = plVar3;
    }
  }
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
LAB_14623b796:
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14623b84c FUN_14623b84c body=135 status=ok
// SIG undefined FUN_14623b84c(void)

longlong FUN_14623b84c(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1461c51ce();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_14623b899;
  }
  local_30 = param_3;
  FUN_14623b8d4(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_14623b899:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + lVar2 * 0x28 + 0x10;
}



// FUNCTION 14623b8d4 FUN_14623b8d4 body=298 status=ok
// SIG undefined FUN_14623b8d4(void)

undefined4 * FUN_14623b8d4(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14623ba00(param_1,local_40);
  puVar1 = (undefined8 *)*param_4;
  *local_38 = *puVar1;
  lVar6 = puVar1[1];
  local_38[1] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_145e06910(0,0);
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  cVar2 = FUN_14623bae8(param_1,param_3,local_38);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
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
      *(uint *)((longlong)local_38 + 0x24) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_40[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14623bbda(param_1);
    }
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14623ba00 FUN_14623ba00 body=231 status=ok
// SIG undefined FUN_14623ba00(void)

int * FUN_14623ba00(longlong *param_1,int *param_2)

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
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 14623bae8 FUN_14623bae8 body=240 status=ok
// SIG undefined FUN_14623bae8(void)

undefined8 FUN_14623bae8(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_38 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar12 = FUN_1461c51ce(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar12 = FUN_1461c51ce(param_1);
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
    }
    if (iVar12 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
      FUN_1461e1494(puVar3);
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar10 = *(undefined4 *)(param_3 + 3);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar3[4] = *(undefined4 *)(param_3 + 2);
      puVar3[5] = uVar9;
      puVar3[6] = uVar10;
      puVar3[7] = uVar11;
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_1461e14ea(param_1,*param_4);
      *param_4 = iVar12;
      uVar13 = 1;
      goto LAB_14623bb0e;
    }
  }
  uVar13 = 0;
LAB_14623bb0e:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14623bbda FUN_14623bbda body=501 status=ok
// SIG undefined FUN_14623bbda(void)

void FUN_14623bbda(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
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
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
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
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar12 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar4 = *local_80;
        lVar9 = (longlong)iVar12;
        plVar10 = *(longlong **)(lVar4 + lVar9 * 0x28);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar9 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        lVar4 = lVar4 + lVar9 * 0x28;
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar4 + 0x24) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar12 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14623bdd6 FUN_14623bdd6 body=144 status=ok
// SIG undefined FUN_14623bdd6(void)

bool FUN_14623bdd6(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14623be68 FUN_14623be68 body=63 status=ok
// SIG undefined FUN_14623be68(void)

void FUN_14623be68(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x111) = 1;
  if (*(char *)(param_1 + 0x110) == '\0') {
    FUN_14623bea8();
    *(undefined1 *)(param_1 + 0x110) = 1;
    FUN_1447f69b6(param_1 + 0x118);
    return;
  }
  return;
}



// FUNCTION 14623bea8 FUN_14623bea8 body=2619 status=ok
// SIG undefined FUN_14623bea8(void)

void FUN_14623bea8(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  wchar_t *pwVar24;
  float fVar25;
  undefined1 auStack_3d8 [32];
  longlong *local_3b8;
  ulonglong local_3b0;
  int local_3a4;
  longlong *local_3a0;
  longlong *local_398;
  longlong *local_390;
  longlong local_388;
  undefined8 uStack_380;
  wchar_t *local_370;
  int local_368;
  wchar_t *local_360;
  int local_358;
  undefined8 local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  plVar12 = (longlong *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x10c) < 0) {
    FUN_14785283a(plVar12);
  }
  lVar17 = param_1 + 0x50;
  lVar23 = 0xc0;
  do {
    if (*(int *)(lVar17 + 0xc) < 0) {
      *(undefined4 *)(lVar17 + 8) = 0;
      FUN_14785283a(lVar17);
    }
    else {
      *(undefined4 *)(lVar17 + 8) = 0;
    }
    lVar17 = lVar17 + 0x20;
    lVar23 = lVar23 + -0x20;
  } while (lVar23 != 0);
  local_388 = 0;
  uStack_380 = 0;
  uVar9 = FUN_1458854ca();
  FUN_140aa7b7e(uVar9,&local_388,1);
  if (0 < (longlong)(int)uStack_380) {
    uVar22 = (longlong)(int)uStack_380 + 1;
    do {
      plVar19 = *(longlong **)(local_388 + -0x10 + uVar22 * 8);
      if ((*(byte *)((longlong)plVar19 + 0xd4) & 1) == 0) {
        plVar18 = (longlong *)plVar19[0x22];
        if (plVar18 == (longlong *)0x0) {
          (**(code **)(*plVar19 + 1000))(plVar19);
          plVar18 = (longlong *)plVar19[0x22];
          if (plVar18 == (longlong *)0x0) goto LAB_14623bf73;
          plVar19 = *(longlong **)(local_388 + -0x10 + uVar22 * 8);
        }
        plVar10 = (longlong *)FUN_1459c7b56();
        if (plVar19 != plVar10) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(plVar18);
          }
          iVar5 = *(int *)(param_1 + 0x108);
          uVar6 = iVar5 + 1;
          *(uint *)(param_1 + 0x108) = uVar6;
          if (*(uint *)(param_1 + 0x10c) < uVar6) {
            FUN_14785286a(plVar12);
          }
          *(longlong **)(*plVar12 + (longlong)iVar5 * 8) = plVar18;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(plVar18);
          }
          if ((*(byte *)((longlong)plVar18 + 0x52) & 1) != 0) {
            uVar6 = (**(code **)(*plVar18 + 0x2c8))(plVar18);
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(plVar18);
            }
            lVar17 = (ulonglong)((uVar6 & 0xff) << 5) + param_1 + 0x40;
            iVar5 = *(int *)(lVar17 + 0x18);
            uVar6 = iVar5 + 1;
            *(uint *)(lVar17 + 0x18) = uVar6;
            if (*(uint *)(lVar17 + 0x1c) < uVar6) {
              FUN_14785286a((longlong *)(lVar17 + 0x10));
            }
            *(longlong **)(*(longlong *)(lVar17 + 0x10) + (longlong)iVar5 * 8) = plVar18;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(plVar18);
            }
          }
        }
      }
LAB_14623bf73:
      uVar22 = uVar22 - 1;
    } while (1 < uVar22);
  }
  iVar5 = *(int *)(param_1 + 0x108);
  if (1 < (longlong)iVar5) {
    lVar17 = *plVar12;
    memset(local_338,0,0x2f0);
    local_340 = lVar17 + (longlong)iVar5 * 8 + -8;
    local_348 = lVar17;
    fVar25 = logf((float)iVar5);
    local_338[0] = (undefined4)(longlong)(fVar25 + fVar25);
    local_3a0 = &local_348;
    do {
      plVar12 = (longlong *)*local_3a0;
      local_3b8 = (longlong *)local_3a0[1];
      local_3a4 = (int)local_3a0[2];
      iVar5 = (int)((ulonglong)((longlong)local_3b8 - (longlong)plVar12) >> 3);
      local_3b0 = (ulonglong)(iVar5 + 1);
      plVar18 = plVar12;
      plVar19 = local_3b8;
      if (local_3a4 != 0) {
LAB_14623c150:
        local_390 = plVar19;
        local_398 = plVar18;
        plVar18 = plVar12;
        if (8 < (int)local_3b0) {
          lVar17 = plVar18[local_3b0 >> 1];
          plVar18[local_3b0 >> 1] = *plVar18;
          *plVar18 = lVar17;
          plVar10 = local_3b8 + 1;
          plVar12 = plVar18;
          do {
            plVar19 = plVar12 + 1;
            plVar3 = plVar12 + 1;
            do {
              plVar12 = plVar3;
              plVar11 = plVar19;
              if (local_3b8 < plVar12) break;
              lVar17 = *plVar12;
              local_370 = *(wchar_t **)(*plVar18 + 0x18);
              FUN_1400021e4(&local_370,&local_360);
              local_350 = *(undefined8 *)(lVar17 + 0x18);
              FUN_1400021e4(&local_350,&local_370);
              pwVar24 = local_360;
              pwVar2 = local_370;
              pwVar14 = local_370;
              if (local_368 == 0) {
                pwVar14 = L"";
              }
              pwVar13 = local_360;
              if (local_358 == 0) {
                pwVar13 = L"";
              }
              iVar5 = wcscmp(pwVar13,pwVar14);
              if (pwVar2 != (wchar_t *)0x0) {
                FUN_1400020a8(pwVar2);
                pwVar24 = local_360;
              }
              if (pwVar24 != (wchar_t *)0x0) {
                FUN_1400020a8(pwVar24);
              }
              plVar19 = plVar11 + 1;
              plVar3 = plVar12 + 1;
            } while (-1 < iVar5);
            plVar3 = plVar10 + -2;
            do {
              plVar4 = plVar10;
              plVar19 = plVar3;
              plVar10 = plVar4 + -1;
              if (plVar10 <= plVar18) break;
              lVar17 = *plVar18;
              local_370 = *(wchar_t **)(*plVar10 + 0x18);
              FUN_1400021e4(&local_370,&local_360);
              local_350 = *(undefined8 *)(lVar17 + 0x18);
              FUN_1400021e4(&local_350,&local_370);
              pwVar24 = local_360;
              pwVar2 = local_370;
              pwVar14 = local_370;
              if (local_368 == 0) {
                pwVar14 = L"";
              }
              pwVar13 = local_360;
              if (local_358 == 0) {
                pwVar13 = L"";
              }
              iVar5 = wcscmp(pwVar13,pwVar14);
              if (pwVar2 != (wchar_t *)0x0) {
                FUN_1400020a8(pwVar2);
                pwVar24 = local_360;
              }
              if (pwVar24 != (wchar_t *)0x0) {
                FUN_1400020a8(pwVar24);
              }
              plVar3 = plVar19 + -1;
            } while (-1 < iVar5);
            if (plVar10 < plVar12) goto LAB_14623c311;
            lVar17 = *plVar12;
            *plVar12 = *plVar10;
            *plVar10 = lVar17;
          } while( true );
        }
        if (plVar18 < local_3b8) {
          do {
            plVar12 = plVar18;
            plVar19 = plVar18;
            plVar10 = plVar18 + 1;
            if (plVar18 + 1 <= local_3b8) {
              do {
                lVar17 = *plVar10;
                local_370 = *(wchar_t **)(*plVar19 + 0x18);
                FUN_1400021e4(&local_370,&local_360);
                local_350 = *(undefined8 *)(lVar17 + 0x18);
                FUN_1400021e4(&local_350,&local_370);
                pwVar24 = local_360;
                pwVar2 = local_370;
                pwVar14 = local_370;
                if (local_368 == 0) {
                  pwVar14 = L"";
                }
                pwVar13 = local_360;
                if (local_358 == 0) {
                  pwVar13 = L"";
                }
                iVar5 = wcscmp(pwVar13,pwVar14);
                if (pwVar2 != (wchar_t *)0x0) {
                  FUN_1400020a8(pwVar2);
                  pwVar24 = local_360;
                }
                if (pwVar24 != (wchar_t *)0x0) {
                  FUN_1400020a8(pwVar24);
                }
                plVar12 = plVar10;
                if (-1 < iVar5) {
                  plVar12 = plVar19;
                }
                plVar10 = plVar10 + 1;
                plVar19 = plVar12;
              } while (plVar10 <= local_3b8);
            }
            lVar17 = *plVar12;
            *plVar12 = *local_3b8;
            *local_3b8 = lVar17;
            local_3b8 = local_3b8 + -1;
          } while (plVar18 < local_3b8);
        }
        goto LAB_14623c879;
      }
LAB_14623c3df:
      if ((int)local_3b0 != 0) {
        uVar6 = (iVar5 - (iVar5 + -1 >> 0x1f)) + -1 >> 1;
        do {
          local_3b8 = (longlong *)(ulonglong)uVar6;
          uVar21 = uVar6 * 2 + 1;
          plVar19 = local_3b8;
          if ((int)uVar21 < (int)local_3b0) {
            do {
              uVar15 = uVar6 * 2 + 2;
              uVar6 = uVar21;
              if ((int)uVar15 < (int)local_3b0) {
                lVar17 = plVar12[(int)uVar21];
                local_370 = *(wchar_t **)(plVar12[(int)uVar15] + 0x18);
                FUN_1400021e4(&local_370,&local_360);
                local_350 = *(undefined8 *)(lVar17 + 0x18);
                FUN_1400021e4(&local_350,&local_370);
                pwVar24 = local_360;
                pwVar2 = local_370;
                pwVar14 = local_370;
                if (local_368 == 0) {
                  pwVar14 = L"";
                }
                pwVar13 = local_360;
                if (local_358 == 0) {
                  pwVar13 = L"";
                }
                iVar5 = wcscmp(pwVar13,pwVar14);
                if (pwVar2 != (wchar_t *)0x0) {
                  FUN_1400020a8(pwVar2);
                  pwVar24 = local_360;
                }
                if (pwVar24 != (wchar_t *)0x0) {
                  FUN_1400020a8(pwVar24);
                }
                uVar6 = uVar15;
                if (iVar5 < 0) {
                  uVar6 = uVar21;
                }
              }
              iVar5 = (int)plVar19;
              lVar17 = plVar12[(int)uVar6];
              local_370 = *(wchar_t **)(plVar12[iVar5] + 0x18);
              FUN_1400021e4(&local_370,&local_360);
              local_350 = *(undefined8 *)(lVar17 + 0x18);
              FUN_1400021e4(&local_350,&local_370);
              pwVar24 = local_360;
              pwVar2 = local_370;
              pwVar14 = local_370;
              if (local_368 == 0) {
                pwVar14 = L"";
              }
              pwVar13 = local_360;
              if (local_358 == 0) {
                pwVar13 = L"";
              }
              iVar7 = wcscmp(pwVar13,pwVar14);
              if (pwVar2 != (wchar_t *)0x0) {
                FUN_1400020a8(pwVar2);
                pwVar24 = local_360;
              }
              if (pwVar24 != (wchar_t *)0x0) {
                FUN_1400020a8(pwVar24);
              }
              if (-1 < iVar7) break;
              lVar17 = plVar12[iVar5];
              plVar12[iVar5] = plVar12[(int)uVar6];
              plVar12[(int)uVar6] = lVar17;
              uVar21 = uVar6 * 2 + 1;
              plVar19 = (longlong *)(ulonglong)uVar6;
            } while ((int)uVar21 < (int)local_3b0);
          }
          uVar6 = (int)local_3b8 - 1;
        } while ((int)local_3b8 != 0);
        local_3b8 = (longlong *)&DAT_ffffffff;
        if (1 < (int)local_3b0) {
          local_3b8 = (longlong *)(local_3b0 & 0xffffffff);
          lVar17 = *plVar12;
          *plVar12 = plVar12[(longlong)((longlong)local_3b8 + -1)];
          plVar12[(longlong)((longlong)local_3b8 + -1)] = lVar17;
          if ((int)local_3b0 != 2) {
            local_3b8 = (longlong *)((longlong)local_3b8 + -1);
            do {
              iVar5 = 0;
              iVar16 = 1;
              iVar7 = 0;
              do {
                iVar5 = iVar5 + 2;
                iVar20 = iVar16;
                if ((longlong)iVar5 < (longlong)local_3b8) {
                  lVar17 = plVar12[iVar16];
                  local_370 = *(wchar_t **)(plVar12[iVar5] + 0x18);
                  FUN_1400021e4(&local_370,&local_360);
                  local_350 = *(undefined8 *)(lVar17 + 0x18);
                  FUN_1400021e4(&local_350,&local_370);
                  pwVar24 = local_360;
                  pwVar2 = local_370;
                  pwVar14 = local_370;
                  if (local_368 == 0) {
                    pwVar14 = L"";
                  }
                  pwVar13 = local_360;
                  if (local_358 == 0) {
                    pwVar13 = L"";
                  }
                  iVar8 = wcscmp(pwVar13,pwVar14);
                  if (pwVar2 != (wchar_t *)0x0) {
                    FUN_1400020a8(pwVar2);
                    pwVar24 = local_360;
                  }
                  if (pwVar24 != (wchar_t *)0x0) {
                    FUN_1400020a8(pwVar24);
                  }
                  iVar20 = iVar5;
                  if (iVar8 < 0) {
                    iVar20 = iVar16;
                  }
                }
                lVar17 = plVar12[iVar20];
                local_370 = *(wchar_t **)(plVar12[iVar7] + 0x18);
                FUN_1400021e4(&local_370,&local_360);
                local_350 = *(undefined8 *)(lVar17 + 0x18);
                FUN_1400021e4(&local_350,&local_370);
                pwVar24 = local_360;
                pwVar2 = local_370;
                pwVar14 = local_370;
                if (local_368 == 0) {
                  pwVar14 = L"";
                }
                pwVar13 = local_360;
                if (local_358 == 0) {
                  pwVar13 = L"";
                }
                iVar5 = wcscmp(pwVar13,pwVar14);
                if (pwVar2 != (wchar_t *)0x0) {
                  FUN_1400020a8(pwVar2);
                  pwVar24 = local_360;
                }
                if (pwVar24 != (wchar_t *)0x0) {
                  FUN_1400020a8(pwVar24);
                }
                if (-1 < iVar5) break;
                lVar17 = plVar12[iVar7];
                plVar12[iVar7] = plVar12[iVar20];
                plVar12[iVar20] = lVar17;
                iVar5 = iVar20 * 2;
                iVar16 = iVar20 * 2 + 1;
                iVar7 = iVar20;
              } while ((longlong)iVar16 < (longlong)local_3b8);
              lVar17 = *plVar12;
              *plVar12 = plVar12[(longlong)((longlong)local_3b8 + -1)];
              plVar12[(longlong)((longlong)local_3b8 + -1)] = lVar17;
              plVar19 = (longlong *)((longlong)local_3b8 + -1);
              bVar1 = (longlong *)0x2 < local_3b8;
              local_3b8 = plVar19;
            } while (bVar1);
          }
        }
      }
LAB_14623c879:
      local_3a0 = local_3a0 + -3;
    } while (&local_348 <= local_3a0);
  }
  if (local_388 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14623c311:
  lVar17 = *plVar18;
  *plVar18 = *plVar10;
  *plVar10 = lVar17;
  local_3a4 = local_3a4 + -1;
  plVar4 = plVar4 + -2;
  if ((longlong)plVar19 - (longlong)local_398 < (longlong)local_390 - (longlong)plVar11) {
    if (plVar12 < local_3b8) {
      *local_3a0 = (longlong)plVar12;
      local_3a0[1] = (longlong)local_3b8;
      *(int *)(local_3a0 + 2) = local_3a4;
      local_3a0 = local_3a0 + 3;
    }
    plVar12 = plVar18;
    if (plVar10 <= plVar18 + 1) goto LAB_14623c879;
  }
  else {
    if (plVar18 + 1 < plVar10) {
      *local_3a0 = (longlong)plVar18;
      local_3a0[1] = (longlong)plVar4;
      *(int *)(local_3a0 + 2) = local_3a4;
      local_3a0 = local_3a0 + 3;
    }
    plVar19 = local_3b8;
    plVar18 = plVar11;
    plVar4 = local_3b8;
    if (local_3b8 <= plVar12) goto LAB_14623c879;
  }
  local_3b8 = plVar4;
  iVar5 = (int)((ulonglong)((longlong)plVar19 - (longlong)plVar18) >> 3);
  local_3b0 = (ulonglong)(iVar5 + 1);
  local_398 = plVar18;
  local_390 = plVar19;
  if (local_3a4 == 0) goto LAB_14623c3df;
  goto LAB_14623c150;
}



// FUNCTION 14623c8e4 FUN_14623c8e4 body=415 status=ok
// SIG undefined FUN_14623c8e4(void)

void FUN_14623c8e4(undefined8 *param_1,longlong *param_2,float param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar7 = (longlong *)*param_2;
  if ((((plVar7 != (longlong *)0x0) && (*plVar7 != -1)) && (param_3 < 1.0)) && (0.0 <= param_3)) {
    plVar6 = (longlong *)param_1[1];
    if (plVar6 == (longlong *)0x0) {
LAB_14623ca28:
      plVar6 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar6[1];
      do {
        if (iVar5 == 0) goto LAB_14623ca28;
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar8 = iVar5 == iVar3;
        if (bVar8) {
          *(int *)(plVar6 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar8);
    }
    local_60 = 0;
    if (plVar6 != (longlong *)0x0) {
      local_60 = *param_1;
    }
    local_58 = plVar6;
    FUN_1461baff6(plVar7 + 4);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    lVar2 = *param_2;
    plVar7 = (longlong *)param_1[1];
    if (plVar7 == (longlong *)0x0) {
LAB_14623ca30:
      plVar7 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar7[1];
      do {
        if (iVar5 == 0) goto LAB_14623ca30;
        LOCK();
        iVar3 = (int)plVar7[1];
        bVar8 = iVar5 == iVar3;
        if (bVar8) {
          *(int *)(plVar7 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar8);
    }
    local_60 = 0;
    if (plVar7 != (longlong *)0x0) {
      local_60 = *param_1;
    }
    local_58 = plVar7;
    FUN_14623ca84(lVar2 + 0x40);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    cVar4 = FUN_140942c40(*param_2,param_4,param_3,0);
    if (cVar4 != '\0') {
      *(float *)(param_1 + 0x21) = 1.0 - param_3;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14623ca84 FUN_14623ca84 body=292 status=ok
// SIG undefined FUN_14623ca84(void)

void FUN_14623ca84(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != 3) {
    FUN_1446efa72(param_1,0,3,0x10);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    *puVar3 = &PTR_LAB_14acb8e20;
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
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14acb8db0;
    puVar3[3] = uVar4;
    puVar3[4] = 0;
    puVar3[5] = &LAB_140bb90fc;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14acb8e20;
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
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14acb8db0;
    puVar3[3] = uVar4;
    puVar3[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_140bb90fc;
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
                    /* WARNING: Could not recover jumptable at 0x00014623cb93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14623cba8 FUN_14623cba8 body=672 status=ok
// SIG undefined FUN_14623cba8(void)

void FUN_14623cba8(longlong param_1)

{
  undefined4 uVar1;
  ushort *puVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  wchar_t *_Str;
  size_t sVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 *local_1c8;
  char local_1c0;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar5 = *(longlong *)(param_1 + 0x288);
  if (lVar5 != 0) {
    iVar4 = *(int *)(param_1 + 0x2cc) + -1;
    iVar7 = iVar4 % 3;
    iVar4 = *(int *)(param_1 + 0x2cc) + 2 + (iVar4 / 3) * -3;
    if (-1 < iVar7) {
      iVar4 = iVar7;
    }
    *(int *)(param_1 + 0x2cc) = iVar4;
    *(int *)(lVar5 + 0x2b8) = iVar4;
    FUN_140f9b5a6(param_1,&local_1d8);
    if ((undefined8 *)(lVar5 + 0x2c0) == &local_1d8) {
      if (local_1d8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar5 + 0x2c0) != 0) {
        FUN_1400020a8();
      }
      *(undefined1 **)(lVar5 + 0x2c0) = local_1d8;
      local_1d8 = (undefined1 *)0x0;
      *(undefined4 *)(lVar5 + 0x2c8) = (undefined4)local_1d0;
      *(undefined4 *)(lVar5 + 0x2cc) = local_1d0._4_4_;
    }
    uVar3 = FUN_140f9a51a(param_1);
    *(undefined1 *)(lVar5 + 0x2f2) = uVar3;
    puVar2 = *(ushort **)(lVar5 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
    }
    FUN_14623ce4a(param_1);
    if (*(char *)(lVar5 + 0x1d8) == '\x04') {
      iVar4 = *(int *)(param_1 + 0x2cc);
      local_1d8 = (undefined1 *)CONCAT44(iVar4,((iVar4 + 2) / 3) * -3 + iVar4 + 2);
      local_1d0 = (undefined1 *)CONCAT44(local_1d0._4_4_,iVar4 + ((iVar4 + 1) / 3) * -3 + 1);
      uVar1 = *(undefined4 *)((longlong)&local_1d8 + (longlong)*(int *)(param_1 + 0x2c8) * 4);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x2cc);
    }
    FUN_140f9b7a8(param_1,uVar1);
    lVar5 = FUN_14479d2ce(param_1 + 0x30);
    if (lVar5 != 0) {
      local_1d8 = local_1b8;
      local_1c0 = '\0';
      local_1c8 = local_b8;
      puVar8 = DAT_14cbe20f8;
      if (DAT_14cbe2100 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      local_1d0 = local_1d8;
      _Str = (wchar_t *)FUN_140c7f682(param_1,puVar8,&local_1d8);
      local_38 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_30 = 0;
        local_28 = 0;
      }
      else {
        sVar6 = wcslen(_Str);
        FUN_1446fe5a4(local_b8,_Str,sVar6 & 0xffffffff,1);
      }
      FUN_1412a486e(lVar5,local_30);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      if (local_1c0 == '\x01') {
        FUN_1400020a8(local_1d8);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14623ce4a FUN_14623ce4a body=35 status=ok
// SIG undefined FUN_14623ce4a(void)

void FUN_14623ce4a(longlong param_1)

{
  if ((ulonglong)*(uint *)(param_1 + 0x2cc) < 3) {
    FUN_140de1078(param_1,(&PTR_DAT_14b9d4410)[*(uint *)(param_1 + 0x2cc)],0,0);
    return;
  }
  return;
}



// FUNCTION 14623ce6e FUN_14623ce6e body=385 status=ok
// SIG undefined FUN_14623ce6e(void)

void FUN_14623ce6e(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88 [3];
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(param_1 + 0x91) = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_70[0] = 0xffff;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar4 = 0;
  }
  FUN_140fe4ff6(uVar4,param_1,local_88);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0xffff;
  lVar3 = FUN_140b9fe48(local_88[0],local_70);
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0x8e) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x80);
  if (0 < iVar2) {
    lVar3 = 0x60;
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(local_88[0] + 0x1b0);
      if (plVar1 != (longlong *)0x0) {
        local_98 = 0;
        uStack_90 = 0;
        (**(code **)(*plVar1 + 0x4b0))
                  (plVar1,*(longlong *)(param_1 + 0x78) + lVar3 + -0x50,
                   *(longlong *)(param_1 + 0x78) + lVar3,&local_98);
        iVar2 = *(int *)(param_1 + 0x80);
      }
      lVar5 = lVar5 + 1;
      lVar3 = lVar3 + 0x70;
    } while (lVar5 < iVar2);
  }
  FUN_141683dd2(local_88[0],local_88,param_1,*(undefined4 *)(param_1 + 0x94));
  if (*(char *)(param_1 + 0x92) != '\0') {
    *(undefined1 *)(param_1 + 0x92) = 0;
    local_b8 = &local_a8;
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_1457cd3ba(local_88[0],&local_68,local_70,0);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14623cff0 FUN_14623cff0 body=407 status=ok
// SIG undefined FUN_14623cff0(void)

void FUN_14623cff0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
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
  FUN_141684770(&local_40,local_20,local_28,local_29);
  if (&local_40 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_40;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14623d188 FUN_14623d188 body=349 status=ok
// SIG undefined FUN_14623d188(void)

undefined4 FUN_14623d188(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [16];
  void *local_70;
  int local_68;
  undefined4 local_64;
  longlong local_60 [2];
  undefined8 local_50;
  longlong local_48 [2];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_2 != 0) && (lVar4 = *(longlong *)(param_2 + 0x1b0), lVar4 != 0)) {
    FUN_140902b70(lVar4,&local_38);
    if (local_38 != 0) {
      lVar2 = *(longlong *)(lVar4 + 0x80);
      if (*(longlong *)(lVar4 + 0x80) == 0) {
        lVar2 = lVar4;
      }
      FUN_14623d36e(lVar2,local_48);
      puVar3 = &DAT_14c9485f0;
      if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
        puVar3 = *(undefined4 **)(param_2 + 8);
      }
      FUN_1447325ac(puVar3,&local_50,1);
      FUN_14623d2e6(local_60,local_50);
      local_70 = (void *)0x0;
      local_68 = *(int *)(param_3 + 1);
      lVar4 = (longlong)local_68;
      _Src = (void *)*param_3;
      if (lVar4 == 0) {
        local_64 = 0;
      }
      else {
        FUN_1446dd670(&local_70,local_68,0);
        memcpy(local_70,_Src,lVar4 * 2);
      }
      FUN_140474144(local_80,local_48,local_60);
      uVar1 = FUN_1416848a2(param_1,local_80,&local_70);
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_14623d2b0;
    }
  }
  uVar1 = 0;
LAB_14623d2b0:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14623d2e6 FUN_14623d2e6 body=134 status=ok
// SIG undefined FUN_14623d2e6(void)

undefined8 FUN_14623d2e6(undefined8 param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_2;
  FUN_1400021e4(&local_20,&local_30);
  puVar1 = local_30;
  if (local_28 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_1,L"?%ls=%ls",L"travelstation",puVar1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14623d36e FUN_14623d36e body=318 status=ok
// SIG undefined FUN_14623d36e(void)

undefined8 * FUN_14623d36e(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  int local_80;
  longlong local_78 [5];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    if (*(longlong *)(param_1 + 0x24) == 0) {
      *param_2 = 0;
      param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
    }
    cVar1 = FUN_140902d42();
    if (cVar1 == '\0') {
      FUN_1400021e4(param_1 + 0x24,&local_88);
      local_78[0] = 0;
      local_78[1] = 0;
      local_78[2] = 0;
      local_78[3] = 0;
      local_50 = local_88;
      local_48 = local_80 + -1;
      if (local_80 == 0) {
        local_48 = 0;
      }
      FUN_14475bf92(local_78,&local_50);
      local_50 = local_78[0];
      if (local_78[0] == 0) {
        *param_2 = 0;
        param_2[1] = 0;
      }
      else {
        FUN_1400021e4(&local_50,param_2);
      }
      if (local_78[2] != 0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_1400021e4(param_1 + 0x24,local_78);
      FUN_141638cfa(param_2,local_78);
      local_88 = local_78[0];
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_78[0] = *(longlong *)(param_1 + 0x38);
    FUN_1400021e4(local_78,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14623d4af FUN_14623d4af body=532 status=ok
// SIG undefined FUN_14623d4af(void)

void FUN_14623d4af(void)

{
  uint uVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_1416849af(local_98);
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  iVar5 = 0;
  local_b0 = local_88;
  if (local_70 != 0) {
    FUN_1449c0562(&local_b8);
    iVar5 = local_70;
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = local_98;
  if ((iStack_a4 != iVar5) || (local_b0 != local_88)) {
    do {
      puVar4 = (undefined8 *)((longlong)iStack_c4 * 0x28 + *local_e0);
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      puVar3 = &DAT_149dfb77a;
      if (*(int *)(puVar4 + 1) != 0) {
        puVar3 = (undefined2 *)*puVar4;
      }
      plVar2 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar3,1);
      if ((plVar2 != (longlong *)0x0) &&
         (uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2), (uVar1 >> 0xd & 1) != 0)) {
        puVar3 = &DAT_149dfb77a;
        if (*(int *)(puVar4 + 3) != 0) {
          puVar3 = (undefined2 *)puVar4[2];
        }
        (**(code **)(*plVar2 + 0x98))(plVar2,puVar3,0xa000000,0);
      }
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (((iStack_c4 != iVar5) || (local_d0 != local_88)) || (local_e0 != local_98));
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_98);
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14623d6c4 FUN_14623d6c4 body=96 status=ok
// SIG undefined FUN_14623d6c4(void)

ulonglong FUN_14623d6c4(longlong param_1)

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
LAB_14623d707:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14623d707;
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



// FUNCTION 14623d724 FUN_14623d724 body=1167 status=ok
// SIG undefined FUN_14623d724(void)

void FUN_14623d724(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1407cbc56();
  plVar9 = &DAT_14c9a1308;
  if (*(longlong *)(param_1 + 0x160) == 0) {
    puVar2 = &DAT_14c9a1308;
    puVar1 = &DAT_14c9a1308;
LAB_14623dadb:
    puVar4 = &DAT_14c9a1308;
    puVar3 = &DAT_14c9a1308;
  }
  else {
    puVar1 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe2ab8);
    if (*(longlong *)(param_1 + 0x160) == 0) {
      puVar2 = &DAT_14c9a1308;
      goto LAB_14623dadb;
    }
    puVar2 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe2ac0);
    if (*(longlong *)(param_1 + 0x160) == 0) goto LAB_14623dadb;
    puVar3 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe2ac8);
    if (*(longlong *)(param_1 + 0x160) == 0) {
      puVar4 = &DAT_14c9a1308;
    }
    else {
      puVar4 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe2ad0);
      if (*(longlong *)(param_1 + 0x160) != 0) {
        puVar5 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe2ad8);
        if (*(longlong *)(param_1 + 0x160) == 0) {
          puVar6 = &DAT_14c9a1308;
        }
        else {
          puVar6 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe2ae8);
          if (*(longlong *)(param_1 + 0x160) != 0) {
            plVar9 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe2af0);
          }
        }
        goto LAB_14623d827;
      }
    }
  }
  puVar6 = &DAT_14c9a1308;
  puVar5 = &DAT_14c9a1308;
LAB_14623d827:
  uVar7 = FUN_144a7cdd6(puVar1,0);
  FUN_1400b22c2(&local_58,uVar7);
  if ((longlong *)(param_1 + 0x2d0) == &local_58) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x2d0) = local_58;
    local_58 = 0;
    *(undefined4 *)(param_1 + 0x2d8) = local_50;
    *(undefined4 *)(param_1 + 0x2dc) = local_4c;
  }
  uVar7 = FUN_144a7cdd6(puVar2,0);
  FUN_1400b22c2(&local_58,uVar7);
  if ((longlong *)(param_1 + 0x2e0) == &local_58) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x2e0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x2e0) = local_58;
    local_58 = 0;
    *(undefined4 *)(param_1 + 0x2e8) = local_50;
    *(undefined4 *)(param_1 + 0x2ec) = local_4c;
  }
  uVar7 = FUN_144a7cdd6(puVar3,0);
  FUN_1400b22c2(&local_58,uVar7);
  if ((longlong *)(param_1 + 0x2f0) == &local_58) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x2f0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x2f0) = local_58;
    local_58 = 0;
    *(undefined4 *)(param_1 + 0x2f8) = local_50;
    *(undefined4 *)(param_1 + 0x2fc) = local_4c;
  }
  uVar7 = FUN_144a7cdd6(puVar4,0);
  FUN_1400b22c2(&local_58,uVar7);
  if ((longlong *)(param_1 + 0x300) == &local_58) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x300) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x300) = local_58;
    local_58 = 0;
    *(undefined4 *)(param_1 + 0x308) = local_50;
    *(undefined4 *)(param_1 + 0x30c) = local_4c;
  }
  uVar7 = FUN_144a7cdd6(puVar5,0);
  FUN_1400b22c2(&local_58,uVar7);
  if ((longlong *)(param_1 + 0x310) == &local_58) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x310) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x310) = local_58;
    local_58 = 0;
    *(undefined4 *)(param_1 + 0x318) = local_50;
    *(undefined4 *)(param_1 + 0x31c) = local_4c;
  }
  uVar7 = FUN_144a7cdd6(puVar6,0);
  FUN_1400b22c2(&local_58,uVar7);
  if ((longlong *)(param_1 + 0x328) == &local_58) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x328) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x328) = local_58;
    local_58 = 0;
    *(undefined4 *)(param_1 + 0x330) = local_50;
    *(undefined4 *)(param_1 + 0x334) = local_4c;
  }
  if (*plVar9 == 0) {
    puVar8 = &DAT_14c9a12e0;
  }
  else {
    puVar8 = (undefined4 *)FUN_140625092(*plVar9,&DAT_14c9a12e0);
  }
  FUN_1447325ac(puVar8,&local_58,1);
  *(longlong *)(param_1 + 800) = local_58;
  FUN_14623dbb4(param_1);
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14623dbb4 FUN_14623dbb4 body=285 status=ok
// SIG undefined FUN_14623dbb4(void)

void FUN_14623dbb4(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  char local_1c0;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    local_1d8 = local_1b8;
    local_1c0 = '\0';
    local_1c8 = local_b8;
    local_1d0 = local_1d8;
    _Str = (wchar_t *)FUN_140c7f682(param_1,L"UpdateSplitscreenView",&local_1d8);
    local_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1446fe5a4(local_b8,_Str,sVar3 & 0xffffffff,1);
    }
    FUN_1412a486e(uVar2,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_1c0 == '\x01') {
      FUN_1400020a8(local_1d8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14623dcd2 FUN_14623dcd2 body=54 status=ok
// SIG undefined FUN_14623dcd2(void)

void FUN_14623dcd2(void)

{
  longlong lVar1;
  
  if (DAT_14cb1b408 == 0) {
    lVar1 = FUN_14001cc68(0x18,0x10);
    FUN_141685114(lVar1);
    DAT_14cb1b408 = lVar1;
  }
  return;
}



// FUNCTION 14623dd08 FUN_14623dd08 body=158 status=ok
// SIG undefined FUN_14623dd08(void)

void FUN_14623dd08(longlong param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)FUN_140a2fa8e();
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_140f5697c();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = FUN_140f5697c();
      plVar3 = (longlong *)FUN_144718840(plVar1,uVar2);
      if ((plVar1 != plVar3) && (plVar3 != (longlong *)0x0)) {
        if (*param_3 != 1) {
          uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
          FUN_14168568e(uVar2,*(undefined4 *)(param_1 + 0x100),param_4);
        }
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        *(undefined1 *)(lVar4 + 0x12a + (longlong)*(int *)(param_1 + 0x100)) = 1;
      }
    }
  }
  return;
}



// FUNCTION 14623dda6 FUN_14623dda6 body=1248 status=ok
// SIG undefined FUN_14623dda6(void)

void FUN_14623dda6(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  longlong *plVar19;
  bool bVar20;
  float fVar21;
  undefined1 auStack_398 [32];
  undefined8 *local_378;
  undefined8 *local_370;
  undefined8 *local_368;
  undefined8 *local_360;
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  iVar13 = *(int *)(param_1 + 0x300);
  if (1 < (longlong)iVar13) {
    lVar2 = *(longlong *)(param_1 + 0x2f8);
    memset(local_348,0,0x2f0);
    local_350 = (longlong)iVar13 * 0x10 + lVar2 + -0x10;
    local_358 = lVar2;
    fVar21 = logf((float)iVar13);
    local_348[0] = (int)(longlong)(fVar21 + fVar21);
    plVar19 = &local_358;
    do {
      puVar11 = (undefined8 *)*plVar19;
      puVar14 = (undefined8 *)plVar19[1];
      iVar13 = (int)plVar19[2];
      iVar12 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar11) >> 4);
      uVar18 = iVar12 + 1;
      puVar16 = puVar11;
      puVar17 = puVar14;
      if (iVar13 != 0) {
LAB_14623de7e:
        if (8 < (int)uVar18) {
          uVar3 = puVar16[(ulonglong)(uVar18 >> 1) * 2];
          uVar4 = (puVar16 + (ulonglong)(uVar18 >> 1) * 2)[1];
          uVar5 = puVar16[1];
          puVar16[(ulonglong)(uVar18 >> 1) * 2] = *puVar16;
          (puVar16 + (ulonglong)(uVar18 >> 1) * 2)[1] = uVar5;
          local_58._0_4_ = (undefined4)uVar3;
          local_58._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar4;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          *(undefined4 *)puVar16 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar16 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_50._4_4_;
          local_370 = puVar17 + 2;
          local_378 = puVar16;
          local_58 = uVar3;
          uStack_50 = uVar4;
          do {
            puVar7 = local_378 + 2;
            puVar8 = puVar7;
            do {
              local_378 = puVar8;
              local_360 = puVar7;
              if (puVar17 < puVar8) break;
              cVar6 = FUN_1416862be(puVar16,puVar8);
              puVar8 = puVar8 + 2;
              puVar7 = local_360 + 2;
            } while (cVar6 == '\0');
            puVar7 = local_370 + -4;
            puVar8 = local_370;
            do {
              puVar8 = puVar8 + -2;
              local_370 = puVar8;
              local_368 = puVar7;
              if (puVar8 <= puVar16) break;
              cVar6 = FUN_1416862be(puVar8,puVar16);
              puVar7 = local_368 + -2;
            } while (cVar6 == '\0');
            if (local_370 < local_378) goto LAB_14623e1c1;
            uVar3 = *local_378;
            uVar4 = local_378[1];
            uVar5 = local_370[1];
            *local_378 = *local_370;
            local_378[1] = uVar5;
            local_58._0_4_ = (undefined4)uVar3;
            local_58._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar4;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            *(undefined4 *)local_370 = (undefined4)local_58;
            *(undefined4 *)((longlong)local_370 + 4) = local_58._4_4_;
            *(undefined4 *)(local_370 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)local_370 + 0xc) = uStack_50._4_4_;
            local_58 = uVar3;
            uStack_50 = uVar4;
          } while( true );
        }
        for (; puVar14 = puVar16, puVar11 = puVar16, puVar16 < puVar17; puVar17 = puVar17 + -2) {
          while (puVar8 = puVar14, puVar11 = puVar11 + 2, puVar11 <= puVar17) {
            cVar6 = FUN_1416862be(puVar8,puVar11);
            puVar14 = puVar11;
            if (cVar6 == '\0') {
              puVar14 = puVar8;
            }
          }
          local_58 = *puVar8;
          uStack_50 = puVar8[1];
          uVar4 = local_58;
          uVar5 = uStack_50;
          uVar3 = puVar17[1];
          *puVar8 = *puVar17;
          puVar8[1] = uVar3;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)puVar17 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar17 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_50._4_4_;
          local_58 = uVar4;
          uStack_50 = uVar5;
        }
        goto LAB_14623deed;
      }
LAB_14623df04:
      local_378 = puVar16;
      if (uVar18 != 0) {
        iVar13 = (iVar12 - (iVar12 + -1 >> 0x1f)) + -1 >> 1;
        iVar12 = iVar13;
joined_r0x00014623df21:
        do {
          iVar10 = iVar13 * 2 + 1;
          if (iVar10 < (int)uVar18) {
            iVar9 = iVar13 * 2 + 2;
            if ((iVar9 < (int)uVar18) &&
               (cVar6 = FUN_1416862be(local_378 + (longlong)iVar9 * 2,
                                      local_378 + (longlong)iVar10 * 2), cVar6 == '\0')) {
              iVar10 = iVar9;
            }
            puVar11 = local_378 + (longlong)iVar13 * 2;
            puVar17 = local_378 + (longlong)iVar10 * 2;
            cVar6 = FUN_1416862be(puVar11,puVar17);
            if (cVar6 != '\0') {
              local_58 = *puVar11;
              uStack_50 = puVar11[1];
              uVar4 = local_58;
              uVar5 = uStack_50;
              uVar3 = puVar17[1];
              *puVar11 = *puVar17;
              puVar11[1] = uVar3;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              *(undefined4 *)puVar17 = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar17 + 4) = local_58._4_4_;
              *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_50._4_4_;
              iVar13 = iVar10;
              local_58 = uVar4;
              uStack_50 = uVar5;
              goto joined_r0x00014623df21;
            }
          }
          bVar20 = iVar12 != 0;
          iVar13 = iVar12 + -1;
          iVar12 = iVar13;
        } while (bVar20);
        if (1 < (int)uVar18) {
          uVar15 = (ulonglong)uVar18 - 1;
          local_58 = *local_378;
          uStack_50 = local_378[1];
          uVar4 = local_58;
          uVar5 = uStack_50;
          uVar3 = (local_378 + uVar15 * 2)[1];
          *local_378 = local_378[uVar15 * 2];
          local_378[1] = uVar3;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          puVar17 = local_378 + uVar15 * 2;
          *(undefined4 *)puVar17 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar17 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_50._4_4_;
          local_58 = uVar4;
          uStack_50 = uVar5;
          if (uVar18 != 2) {
            do {
              iVar13 = 0;
              iVar10 = 1;
              iVar12 = 0;
              do {
                iVar13 = iVar13 + 2;
                iVar9 = iVar10;
                if (((longlong)iVar13 < (longlong)uVar15) &&
                   (cVar6 = FUN_1416862be(local_378 + (longlong)iVar13 * 2,
                                          local_378 + (longlong)iVar10 * 2), cVar6 == '\0')) {
                  iVar9 = iVar13;
                }
                puVar11 = local_378 + (longlong)iVar12 * 2;
                puVar17 = local_378 + (longlong)iVar9 * 2;
                cVar6 = FUN_1416862be(puVar11,puVar17);
                if (cVar6 == '\0') break;
                uVar3 = *puVar11;
                uVar4 = puVar11[1];
                uVar5 = puVar17[1];
                *puVar11 = *puVar17;
                puVar11[1] = uVar5;
                local_58._0_4_ = (undefined4)uVar3;
                local_58._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
                uStack_50._0_4_ = (undefined4)uVar4;
                uStack_50._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
                *(undefined4 *)puVar17 = (undefined4)local_58;
                *(undefined4 *)((longlong)puVar17 + 4) = local_58._4_4_;
                *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_50;
                *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_50._4_4_;
                iVar13 = iVar9 * 2;
                iVar10 = iVar9 * 2 + 1;
                iVar12 = iVar9;
                local_58 = uVar3;
                uStack_50 = uVar4;
              } while ((longlong)iVar10 < (longlong)uVar15);
              uVar1 = uVar15 - 1;
              local_58 = *local_378;
              uStack_50 = local_378[1];
              uVar4 = local_58;
              uVar5 = uStack_50;
              uVar3 = (local_378 + uVar1 * 2)[1];
              *local_378 = local_378[uVar1 * 2];
              local_378[1] = uVar3;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              puVar17 = local_378 + uVar1 * 2;
              *(undefined4 *)puVar17 = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar17 + 4) = local_58._4_4_;
              *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_50._4_4_;
              bVar20 = 2 < uVar15;
              uVar15 = uVar1;
              local_58 = uVar4;
              uStack_50 = uVar5;
            } while (bVar20);
          }
        }
      }
LAB_14623deed:
      plVar19 = plVar19 + -3;
    } while (&local_358 <= plVar19);
  }
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14623e1c1:
  local_58 = *puVar16;
  uStack_50 = puVar16[1];
  uVar4 = local_58;
  uVar5 = uStack_50;
  uVar3 = local_370[1];
  *puVar16 = *local_370;
  puVar16[1] = uVar3;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)local_370 = (undefined4)local_58;
  *(undefined4 *)((longlong)local_370 + 4) = local_58._4_4_;
  *(undefined4 *)(local_370 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)local_370 + 0xc) = uStack_50._4_4_;
  iVar13 = iVar13 + -1;
  puVar8 = local_370 + -2;
  local_58 = uVar4;
  uStack_50 = uVar5;
  if ((longlong)local_368 - (longlong)puVar11 < (longlong)puVar14 - (longlong)local_360) {
    if (local_378 < puVar17) {
      *plVar19 = (longlong)local_378;
      plVar19[1] = (longlong)puVar17;
      *(int *)(plVar19 + 2) = iVar13;
      plVar19 = plVar19 + 3;
    }
    puVar17 = local_368;
    puVar11 = puVar16;
    if (local_370 <= puVar16 + 2) goto LAB_14623deed;
  }
  else {
    if (puVar16 + 2 < local_370) {
      *plVar19 = (longlong)puVar16;
      plVar19[1] = (longlong)puVar8;
      *(int *)(plVar19 + 2) = iVar13;
      plVar19 = plVar19 + 3;
    }
    puVar8 = puVar17;
    puVar16 = local_378;
    puVar11 = local_360;
    if (puVar17 <= local_378) goto LAB_14623deed;
  }
  local_360 = puVar11;
  local_368 = puVar17;
  local_378 = puVar16;
  iVar12 = (int)((ulonglong)((longlong)local_368 - (longlong)local_360) >> 4);
  uVar18 = iVar12 + 1;
  puVar11 = local_360;
  puVar14 = local_368;
  puVar16 = local_378;
  puVar17 = puVar8;
  if (iVar13 == 0) goto LAB_14623df04;
  goto LAB_14623de7e;
}



// FUNCTION 14623e287 FUN_14623e287 body=85 status=ok
// SIG undefined FUN_14623e287(void)

void FUN_14623e287(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca965cc) {
    FUN_144b3d300(&DAT_14ca965cc);
    if (DAT_14ca965cc == -1) {
      FUN_141686391();
      _Init_thread_footer(&DAT_14ca965cc);
      return;
    }
  }
  return;
}



// FUNCTION 14623e2dc FUN_14623e2dc body=2567 status=ok
// SIG undefined FUN_14623e2dc(void)

void FUN_14623e2dc(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int *piVar1;
  byte *pbVar2;
  longlong *plVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  longlong lVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  longlong local_108;
  undefined4 *local_100;
  longlong *local_f8;
  undefined1 local_ec [4];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  int local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [8];
  undefined2 *local_98;
  int local_90;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *(undefined4 *)(param_1 + 0x30) = DAT_14c948620;
  *(undefined8 *)(param_1 + 0x28) = DAT_14c948618;
  if (*(int *)(param_1 + 0x34) == 0) goto LAB_14623eae2;
  FUN_140002266(&local_98,L"EntryPoint_%d",*param_2);
  puVar13 = local_98;
  if (local_90 == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  FUN_1446f470e(local_a0,puVar13,1);
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_100 = param_2;
  FUN_1400021e4(local_a0,&local_c0);
  puVar13 = &DAT_149dfb77a;
  if (local_b8 != 0) {
    puVar13 = (undefined2 *)CONCAT44(uStack_bc,local_c0);
  }
  puVar12 = &DAT_14c9485f0;
  if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
    puVar12 = *(undefined4 **)(param_3 + 8);
  }
  FUN_144a7660c(puVar12,&local_e0,1);
  FUN_1408226d0(&local_e0,&local_d0,1);
  puVar14 = &DAT_149dfb77a;
  if (local_c8 != 0) {
    puVar14 = (undefined2 *)CONCAT44(uStack_cc,local_d0);
  }
  FUN_140002266(&local_98,L"_%s_%s_pickup",puVar14,puVar13);
  uStack_a8 = 0;
  uStack_a4 = 0;
  puVar13 = &DAT_149dfb77a;
  if (local_90 != 0) {
    puVar13 = local_98;
  }
  FUN_1405f0d29(&local_ac,puVar13,0);
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_cc,local_d0) != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_bc,local_c0) != 0) {
    FUN_1400020a8();
  }
  FUN_1408226d0(&local_ac,&local_c0,1);
  puVar13 = &DAT_149dfb77a;
  if (local_b8 != 0) {
    puVar13 = (undefined2 *)CONCAT44(uStack_bc,local_c0);
  }
  plVar10 = (longlong *)(param_1 + 0x28);
  FUN_140002266(&local_98,L"__Alias_%s",puVar13);
  uStack_cc = 0;
  local_c8 = 0;
  puVar13 = &DAT_149dfb77a;
  if (local_90 != 0) {
    puVar13 = local_98;
  }
  FUN_1405f0d29(&local_d0,puVar13,0);
  *(int *)(param_1 + 0x30) = local_c8;
  *plVar10 = CONCAT44(uStack_cc,local_d0);
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_bc,local_c0) != 0) {
    FUN_1400020a8();
  }
  local_108 = param_3 + 0x1d0;
  lVar7 = FUN_140d22434();
  *(longlong *)(lVar7 + 8) = *plVar10;
  *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x34);
  *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined8 *)(lVar7 + 0x18) = uVar5;
  *(ulonglong *)(lVar7 + 0x24) = CONCAT44(uStack_a8,local_ac);
  *(undefined4 *)(lVar7 + 0x2c) = uStack_a4;
  local_d8 = *(undefined4 *)(param_1 + 0x3c);
  local_e0 = *(undefined8 *)(param_1 + 0x34);
  FUN_1400021e4(local_a0,&local_d0);
  puVar14 = &DAT_149dfb77a;
  puVar13 = &DAT_149dfb77a;
  if (local_c8 != 0) {
    puVar13 = (undefined2 *)CONCAT44(uStack_cc,local_d0);
  }
  FUN_140002266(&local_c0,L"%s_ShouldSpawnPickup",puVar13);
  local_e8 = 0;
  if (local_b8 != 0) {
    puVar14 = (undefined2 *)CONCAT44(uStack_bc,local_c0);
  }
  uVar17 = FUN_1405f0d29(local_ec,puVar14,0);
  FUN_14623ece4(uVar17,&local_98,local_ec,2);
  if (CONCAT44(uStack_bc,local_c0) != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_cc,local_d0) != 0) {
    FUN_1400020a8();
  }
  local_118 = param_3;
  lVar8 = FUN_140b9c2d2(local_108,&DAT_14c948618);
  FUN_14082216c(lVar8,&local_e0);
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar12 = (undefined4 *)(lVar7 + 0xc7c);
  uVar17 = *puVar12;
  pbVar2 = (byte *)(lVar7 + 0xc80);
  bVar4 = *pbVar2;
  if ((bVar4 & 1) != 0) {
    *pbVar2 = 0;
    *puVar12 = 0xffffffff;
  }
  plVar9 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14b41bac0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  plVar9[5] = 0;
  plVar9[2] = (longlong)&PTR_FUN_14affe3c0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  if ((bVar4 & 1) != 0) {
    *puVar12 = uVar17;
    *pbVar2 = 1;
  }
  *(undefined4 *)(plVar9 + 4) = 1;
  local_f8 = plVar10;
  FUN_140823334(plVar9 + 3,0);
  puVar6 = (undefined8 *)plVar9[3];
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = DAT_14cb861f8;
  local_c0 = CONCAT31(local_c0._1_3_,1);
  uStack_b4 = 1;
  uStack_bc = (undefined4)DAT_14cb7c588;
  local_b8 = (int)((ulonglong)DAT_14cb7c588 >> 0x20);
  FUN_140821fec(puVar6,&local_98,&local_c0,0);
  FUN_1406b35dc(puVar6 + 3,param_1 + 0x78);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  iVar11 = *(int *)(lVar8 + 0x50);
  *(uint *)(lVar8 + 0x50) = iVar11 + 1U;
  if (*(uint *)(lVar8 + 0x54) < iVar11 + 1U) {
    FUN_140822376((longlong *)(lVar8 + 0x48),iVar11);
  }
  lVar7 = *(longlong *)(lVar8 + 0x48);
  *(longlong **)(lVar7 + (longlong)iVar11 * 0x10) = plVar9 + 2;
  *(longlong **)(lVar7 + 8 + (longlong)iVar11 * 0x10) = plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
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
  lVar7 = local_118;
  local_110 = local_118 + 0x1f8;
  FUN_140d22200(local_110,lVar8 + 0x18);
  local_118 = lVar7 + 0x220;
  FUN_140d89482(local_118,lVar8 + 0x18);
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
  lVar7 = FUN_140b9c2d2(local_108,&DAT_14c948618);
  FUN_140fcbe3e(lVar7,&local_e0);
  uVar17 = *puVar12;
  bVar4 = *pbVar2;
  if ((bVar4 & 1) != 0) {
    *pbVar2 = 0;
    *puVar12 = 0xffffffff;
  }
  plVar9 = (longlong *)FUN_14001cc68(0x170);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14b41bb50;
  plVar10 = plVar9 + 2;
  memset(plVar10,0,0x160);
  FUN_141210884(plVar10);
  plVar9[2] = (longlong)&PTR_FUN_14b00bf00;
  *(undefined1 *)(plVar9 + 0x2d) = 0;
  if ((bVar4 & 1) != 0) {
    *puVar12 = uVar17;
    *pbVar2 = 1;
  }
  *(undefined1 *)(plVar9 + 5) = *(undefined1 *)(param_1 + 0x40);
  if (plVar9[6] == *(longlong *)(param_1 + 0x48)) {
    iVar11 = *(int *)(param_1 + 0x50);
    if ((int)plVar9[7] != iVar11) goto LAB_14623e86a;
  }
  else {
    iVar11 = *(int *)(param_1 + 0x50);
LAB_14623e86a:
    plVar9[6] = *(longlong *)(param_1 + 0x48);
    *(int *)(plVar9 + 7) = iVar11;
    plVar9[8] = 0;
  }
  *(undefined4 *)(plVar9 + 10) = *(undefined4 *)(param_1 + 0x68);
  plVar9[9] = *(longlong *)(param_1 + 0x60);
  plVar3 = plVar9 + 0x1c;
  FUN_14082207e(&local_c0,&local_98,0);
  iVar11 = (int)plVar9[0x1d];
  *(uint *)(plVar9 + 0x1d) = iVar11 + 1U;
  if (*(uint *)((longlong)plVar9 + 0xec) < iVar11 + 1U) {
    FUN_1410f5714(plVar3,iVar11);
  }
  lVar8 = *plVar3;
  lVar15 = (longlong)iVar11 * 0x10;
  *(undefined8 *)(lVar8 + lVar15) = 0;
  *(ulonglong *)(lVar8 + lVar15) = CONCAT44(uStack_bc,local_c0);
  local_c0 = 0;
  uStack_bc = 0;
  *(int *)(lVar8 + 8 + lVar15) = local_b8;
  *(undefined4 *)(lVar8 + 0xc + lVar15) = uStack_b4;
  local_b8 = 0;
  uStack_b4 = 0;
  FUN_1447cd778(0,0);
  if (CONCAT44(uStack_bc,local_c0) != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar11 = (int)plVar9[0x1d];
    *(uint *)(plVar9 + 0x1d) = iVar11 + 1U;
    if (*(uint *)((longlong)plVar9 + 0xec) < iVar11 + 1U) {
      FUN_1410f5714(plVar3,iVar11);
    }
    FUN_14055304a((longlong)iVar11 * 0x10 + *plVar3,param_1 + 0x18);
  }
  plVar3 = local_f8;
  *(int *)(plVar9 + 0x21) = (int)local_f8[1];
  plVar9[0x20] = *local_f8;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  iVar11 = *(int *)(lVar7 + 0x50);
  *(uint *)(lVar7 + 0x50) = iVar11 + 1U;
  if (*(uint *)(lVar7 + 0x54) < iVar11 + 1U) {
    FUN_140822376((longlong *)(lVar7 + 0x48),iVar11);
  }
  puVar16 = local_100;
  lVar8 = *(longlong *)(lVar7 + 0x48);
  *(longlong **)(lVar8 + (longlong)iVar11 * 0x10) = plVar10;
  *(longlong **)(lVar8 + 8 + (longlong)iVar11 * 0x10) = plVar9;
  if (plVar9 == (longlong *)0x0) {
    FUN_140d22200(local_110,lVar7 + 0x18);
    FUN_140d89482(local_118,lVar7 + 0x18);
    puVar16 = local_100;
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
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
    FUN_140d22200(local_110,lVar7 + 0x18);
    FUN_140d89482(local_118,lVar7 + 0x18);
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
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  lVar8 = FUN_140b9c2d2(local_108,plVar3);
  lVar7 = local_118;
  if ((*pbVar2 & 1) == 0) {
    plVar10 = (longlong *)FUN_14001cc68(0x58,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_FUN_14b41b540;
    plVar10[3] = 0;
    plVar10[4] = 0;
    plVar10[5] = 0;
    plVar10[6] = 0;
    plVar10[7] = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    plVar10[2] = (longlong)&PTR_FUN_14b006460;
  }
  else {
    uVar17 = *puVar12;
    *pbVar2 = 0;
    *puVar12 = 0xffffffff;
    plVar10 = (longlong *)FUN_14001cc68(0x58,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_FUN_14b41b540;
    plVar10[3] = 0;
    plVar10[4] = 0;
    plVar10[5] = 0;
    plVar10[6] = 0;
    plVar10[7] = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    plVar10[2] = (longlong)&PTR_FUN_14b006460;
    *puVar12 = uVar17;
    *pbVar2 = 1;
  }
  *(undefined4 *)(plVar10 + 10) = *puVar16;
  plVar10[5] = *local_f8;
  *(int *)(plVar10 + 6) = (int)local_f8[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  iVar11 = *(int *)(lVar8 + 0x50);
  *(uint *)(lVar8 + 0x50) = iVar11 + 1U;
  if (*(uint *)(lVar8 + 0x54) < iVar11 + 1U) {
    FUN_140822376((longlong *)(lVar8 + 0x48),iVar11);
  }
  lVar15 = *(longlong *)(lVar8 + 0x48);
  *(longlong **)(lVar15 + (longlong)iVar11 * 0x10) = plVar10 + 2;
  *(longlong **)(lVar15 + 8 + (longlong)iVar11 * 0x10) = plVar10;
  if (plVar10 == (longlong *)0x0) {
    FUN_140d22200(local_110,lVar8 + 0x18);
    FUN_140d89482(lVar7,lVar8 + 0x18);
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar10 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    FUN_140d22200(local_110,lVar8 + 0x18);
    FUN_140d89482(lVar7,lVar8 + 0x18);
    LOCK();
    plVar9 = plVar10 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_14623eae2:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14623ece4 FUN_14623ece4 body=367 status=ok
// SIG undefined FUN_14623ece4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_14623ece4(undefined8 param_1,undefined2 *param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_80 [40];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_144928d62(&local_58,0,&DAT_14cb7bd98);
  if (param_4 == '\0') {
    uVar1 = 1;
  }
  else {
    local_90 = 0;
    local_88 = 0;
    if (param_4 == '\x02') {
      local_88 = DAT_14cb7bdb8;
      local_90 = _DAT_14cb7bdb0;
    }
    else if (param_4 == '\x03') {
      local_88 = DAT_14cb7bc18;
      local_90 = _DAT_14cb7bc10;
    }
    else if (param_4 == '\x01') {
      local_88 = DAT_14cb7bc00;
      local_90 = _DAT_14cb7bbf8;
    }
    FUN_144928d62(&local_58,1,&local_90);
    uVar1 = 2;
  }
  FUN_144928d62(&local_58,uVar1,param_3);
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  FUN_1447a97f4(local_80,&local_58);
  FUN_14071d490(local_80,param_2);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14623ee54 FUN_14623ee54 body=949 status=ok
// SIG undefined FUN_14623ee54(void)

longlong * FUN_14623ee54(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar7 = (longlong *)FUN_14623f20f();
  lVar4 = *(longlong *)(param_1 + 400);
  plVar5 = *(longlong **)(param_1 + 0x198);
  if (plVar5 == (longlong *)0x0) {
    plVar7[0x34] = lVar4;
    plVar8 = (longlong *)plVar7[0x35];
    if (plVar8 != (longlong *)0x0) {
      plVar7[0x35] = 0;
LAB_14623f034:
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      if (plVar5 != (longlong *)0x0) goto LAB_14623eed9;
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar5 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar7[0x34] = lVar4;
    plVar8 = (longlong *)plVar7[0x35];
    if (plVar5 == plVar8) {
      LOCK();
      plVar8 = plVar5 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    else {
      plVar7[0x35] = (longlong)plVar5;
      if (plVar8 != (longlong *)0x0) goto LAB_14623f034;
    }
LAB_14623eed9:
    LOCK();
    plVar8 = plVar5 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  lVar4 = param_3[3];
  plVar5 = (longlong *)param_3[4];
  if (plVar5 == (longlong *)0x0) {
    plVar7[0x32] = lVar4;
    plVar8 = (longlong *)plVar7[0x33];
    if (plVar8 != (longlong *)0x0) {
      plVar7[0x33] = 0;
LAB_14623f0a8:
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      if (plVar5 != (longlong *)0x0) goto LAB_14623ef26;
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar7[0x32] = lVar4;
    plVar8 = (longlong *)plVar7[0x33];
    if (plVar5 == plVar8) {
      LOCK();
      plVar8 = plVar5 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    else {
      plVar7[0x33] = (longlong)plVar5;
      if (plVar8 != (longlong *)0x0) goto LAB_14623f0a8;
    }
LAB_14623ef26:
    LOCK();
    plVar8 = plVar5 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  cVar6 = (**(code **)(*(longlong *)*param_3 + 0x50))();
  if (cVar6 == '\0') goto LAB_14623ef42;
  FUN_145c43050(param_1 + 0x1a8,&local_48,param_3);
  plVar5 = local_40;
  if (local_40 == (longlong *)0x0) {
    plVar7[0x37] = local_48;
    plVar8 = (longlong *)plVar7[0x38];
    if (plVar8 != (longlong *)0x0) {
      plVar7[0x38] = 0;
LAB_14623f1c2:
      LOCK();
      plVar5 = plVar8 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x00014623f1fb:
        if (iVar3 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar7[0x37] = local_48;
    plVar8 = (longlong *)plVar7[0x38];
    if (local_40 == plVar8) {
      LOCK();
      plVar8 = local_40 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar8 = plVar5;
        goto joined_r0x00014623f1fb;
      }
    }
    else {
      plVar7[0x38] = (longlong)local_40;
      if (plVar8 != (longlong *)0x0) goto LAB_14623f1c2;
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
LAB_14623ef42:
  *param_2 = (longlong)(plVar7 + 2);
  param_2[1] = (longlong)plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14623f20f FUN_14623f20f body=146 status=ok
// SIG undefined FUN_14623f20f(void)

undefined8 * FUN_14623f20f(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x1c8);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b99c130;
  memset(puVar1 + 2,0,0x1b8);
  FUN_145c42fa8(puVar1 + 2);
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[2] = &PTR_FUN_14b63f090;
  *(undefined1 *)((longlong)puVar1 + 0x1b4) = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  return puVar1;
}



// FUNCTION 14623f2a2 FUN_14623f2a2 body=147 status=ok
// SIG undefined FUN_14623f2a2(void)

void FUN_14623f2a2(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = &local_2c;
  local_2c = param_5;
  local_28 = 3;
  local_24 = 1;
  local_20 = 0x467a0000;
  local_1c = 0;
  local_1b = param_7;
  local_18 = param_6;
  local_14 = 0;
  local_40 = *param_3;
  local_38 = param_3[1];
  FUN_1416868f6(param_1,param_2,&local_40);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14623f336 FUN_14623f336 body=1099 status=ok
// SIG undefined FUN_14623f336(void)

void FUN_14623f336(float *param_1,undefined1 param_2,float *param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_58 [36];
  undefined8 local_34;
  float local_2c;
  undefined4 local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switch(param_2) {
  case 0:
  case 5:
  case 6:
  case 7:
  case 8:
  case 0x17:
  case 0x18:
  case 0x1e:
  case 0x1f:
  case 0x24:
  case 0x27:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x3b:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x45:
  case 0x46:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5d:
    *param_4 = 0;
    goto switchD_14623f36b_default;
  case 1:
    *param_3 = param_1[3];
    param_3[1] = param_1[2];
    param_3[2] = param_1[1];
    param_3[3] = *param_1;
    goto LAB_14623f544;
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  case 3:
  case 0x19:
  case 0x1b:
  case 0x3a:
  case 0x47:
    fVar4 = *param_1;
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    uVar1 = (undefined1)(int)(fVar4 * 255.0);
    goto LAB_14623f6fd;
  case 4:
    fVar4 = *param_1;
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    uVar2 = (undefined2)(int)(fVar4 * 65535.0);
    goto LAB_14623f46c;
  case 9:
  case 0x1a:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  case 10:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  case 0xb:
  case 0xd:
  case 0x14:
    *param_3 = *param_1;
    break;
  case 0xc:
  case 0x15:
  case 0x16:
    fVar4 = ABS(*param_1);
    if ((uint)fVar4 < 0x47800000) {
      if ((uint)fVar4 < 0x38800000) {
        fVar6 = fVar4 + 0.5;
      }
      else {
        fVar4 = (float)((int)fVar4 + 0x8000fff + (uint)(((uint)fVar4 >> 0xd & 1) != 0) >> 0xd);
        fVar6 = fVar4;
      }
    }
    else {
      fVar6 = (float)((0x7f800000 < (uint)fVar4 | 0x3e) << 9);
    }
    iVar5 = movmskps(fVar4,ZEXT416((uint)*param_1));
    *(ushort *)param_3 = (ushort)(iVar5 << 0xf) | SUB42(fVar6,0);
    break;
  case 0xe:
    fVar4 = param_1[1];
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    fVar6 = 0.0;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    fVar7 = 65535.0;
    goto LAB_14623f65e;
  case 0xf:
  case 0x10:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  case 0x11:
    *param_3 = param_1[1];
    param_3[1] = *param_1;
    goto LAB_14623f5e8;
  case 0x12:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  case 0x13:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  case 0x1c:
    *param_3 = (float)(longlong)*param_1;
    break;
  case 0x1d:
    *param_3 = (float)(int)*param_1;
    break;
  case 0x20:
  case 0x21:
    uVar2 = (undefined2)(int)*param_1;
LAB_14623f46c:
    *(undefined2 *)param_3 = uVar2;
    break;
  case 0x22:
  case 0x23:
    *(short *)param_3 = (short)(int)*param_1;
    *(short *)((longlong)param_3 + 2) = (short)(int)param_1[1];
    *(short *)(param_3 + 1) = (short)(int)param_1[2];
    *(short *)((longlong)param_3 + 6) = (short)(int)param_1[3];
    goto LAB_14623f5e8;
  case 0x25:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  case 0x26:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  case 0x28:
    fVar4 = *param_1;
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(char *)param_3 = (char)(int)(fVar4 * 255.0);
    fVar4 = param_1[1];
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    uVar1 = (undefined1)(int)(fVar4 * 255.0);
    goto LAB_14623f691;
  case 0x30:
    *param_3 = (float)(longlong)*param_1;
    param_3[1] = (float)(longlong)param_1[1];
    param_3[2] = (float)(longlong)param_1[2];
    param_3[3] = (float)(longlong)param_1[3];
LAB_14623f544:
    *param_4 = 0x10;
    goto switchD_14623f36b_default;
  case 0x31:
  case 0x5c:
    *(short *)param_3 = (short)(int)*param_1;
    uVar2 = (undefined2)(int)param_1[1];
    goto LAB_14623f67d;
  case 0x39:
  case 0x53:
    uVar1 = (undefined1)(int)*param_1;
LAB_14623f6fd:
    *(undefined1 *)param_3 = uVar1;
    break;
  case 0x3c:
    *(char *)param_3 = (char)(int)*param_1;
    *(char *)((longlong)param_3 + 1) = (char)(int)param_1[1];
    *(char *)((longlong)param_3 + 2) = (char)(int)param_1[2];
    *(char *)((longlong)param_3 + 3) = (char)(int)param_1[3];
    break;
  case 0x3d:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  case 0x3e:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  case 0x3f:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  case 0x44:
    *param_3 = (float)(longlong)*param_1;
    param_3[1] = (float)(longlong)param_1[1];
LAB_14623f5e8:
    *param_4 = 8;
    goto switchD_14623f36b_default;
  case 0x48:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  case 0x4e:
    fVar4 = param_1[1];
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    fVar6 = -1.0;
    if (fVar4 <= -1.0) {
      fVar4 = -1.0;
    }
    fVar7 = 32767.0;
LAB_14623f65e:
    *(short *)param_3 = (short)(int)(fVar4 * fVar7);
    fVar4 = *param_1;
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= fVar6) {
      fVar4 = fVar6;
    }
    uVar2 = (undefined2)(int)(fVar4 * fVar7);
LAB_14623f67d:
    *(undefined2 *)((longlong)param_3 + 2) = uVar2;
    break;
  case 0x4f:
    *(char *)param_3 = (char)(int)*param_1;
    uVar1 = (undefined1)(int)param_1[1];
LAB_14623f691:
    *(undefined1 *)((longlong)param_3 + 1) = uVar1;
    *param_4 = 2;
    goto switchD_14623f36b_default;
  case 0x50:
    *param_3 = (float)(longlong)*param_1;
    param_3[1] = (float)(longlong)param_1[1];
    param_3[2] = (float)(longlong)param_1[2];
    goto LAB_14623f6ee;
  case 0x51:
    *param_3 = (float)(int)*param_1;
    param_3[1] = (float)(int)param_1[1];
    param_3[2] = (float)(int)param_1[2];
    goto LAB_14623f6ee;
  case 0x52:
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
LAB_14623f6ee:
    *param_4 = 0xc;
    goto switchD_14623f36b_default;
  case 0x54:
    uVar3 = (ulonglong)*param_1;
    *(ulonglong *)param_3 = (longlong)(*param_1 - 9.223372e+18) & (longlong)uVar3 >> 0x3f | uVar3;
    break;
  case 0x55:
    local_2c = param_1[2];
    local_34 = *(undefined8 *)param_1;
    local_28 = 0x3f800000;
    FUN_1473284cc(&local_24);
    *param_4 = 4;
    *param_3 = local_24;
  default:
    goto switchD_14623f36b_default;
  }
  *param_4 = 4;
switchD_14623f36b_default:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14623f902 FUN_14623f902 body=1471 status=ok
// SIG undefined FUN_14623f902(void)

undefined8 * FUN_14623f902(undefined8 *param_1)

{
  FUN_140f2184e();
  *param_1 = &PTR_FUN_14b6acb10;
  param_1[0x72] = &PTR_FUN_14b6ad6e0;
  param_1[0xe9] = &PTR_FUN_14b6ad740;
  param_1[0xea] = &PTR_FUN_14b6ad758;
  param_1[0x10c] = &PTR_FUN_14b6ad770;
  param_1[0x10d] = &PTR_FUN_14b6ad790;
  param_1[0x10e] = &PTR_FUN_14b6ad7d0;
  param_1[0x10f] = &PTR_FUN_14b6ad7f0;
  param_1[0x214] = &PTR_FUN_14b6ad810;
  param_1[0x215] = &PTR_FUN_14b6ad8d0;
  param_1[0x216] = &PTR_FUN_14b6ad900;
  param_1[0x217] = &PTR_FUN_14b6ad970;
  param_1[0x218] = &PTR_FUN_14b6ad9a0;
  param_1[0x219] = &PTR_FUN_14b6ada20;
  param_1[0x21a] = &PTR_FUN_14b6ada90;
  param_1[0x21b] = &PTR_FUN_14b6adac0;
  param_1[0x21c] = &PTR_FUN_14b6adaf0;
  param_1[0x21d] = &PTR_FUN_14b6adb60;
  param_1[0x21e] = &PTR_FUN_14b6adb80;
  param_1[0x21f] = &PTR_FUN_14b6adba0;
  param_1[0x220] = &PTR_FUN_14b6adbd0;
  param_1[0x221] = &PTR_FUN_14b6adc10;
  param_1[0x222] = &PTR_FUN_14b6adc30;
  param_1[0x223] = &PTR_FUN_14b6adc50;
  param_1[0x224] = &PTR_FUN_14b6adc80;
  param_1[0x225] = &PTR_FUN_14b6adcc0;
  param_1[0x226] = &PTR_FUN_14b6adce0;
  param_1[0x227] = &PTR_FUN_14b6add00;
  param_1[0x228] = &PTR_FUN_14b6adda0;
  param_1[0x229] = &PTR_FUN_14b6addd0;
  param_1[0x22a] = &PTR_FUN_14b6addf0;
  param_1[0x22b] = &PTR_FUN_14b6ade30;
  param_1[0x22c] = &PTR_FUN_14b6ade60;
  param_1[0x22d] = &PTR_FUN_14b6ade80;
  param_1[0x22e] = &PTR_FUN_14b6adeb0;
  param_1[0x22f] = &PTR_FUN_14b6adf00;
  param_1[0x230] = &PTR_FUN_14b6adf30;
  param_1[0x231] = &PTR_FUN_14b6adf80;
  param_1[0x232] = &PTR_FUN_14b6adfb0;
  param_1[0x233] = &PTR_FUN_14b6adfd0;
  param_1[0x236] = &PTR_FUN_14b6ae010;
  param_1[0x744] = &PTR_FUN_14b6ae030;
  param_1[0x745] = &PTR_FUN_14b6ae050;
  param_1[0x746] = &PTR_FUN_14b6ae080;
  param_1[0x747] = &PTR_FUN_14b6ae160;
  param_1[0x748] = &PTR_FUN_14b6ae180;
  param_1[0x749] = &PTR_FUN_14b6ae198;
  param_1[0x750] = &PTR_FUN_14b6ae1b0;
  param_1[0x751] = &PTR_FUN_14b6ae1d0;
  param_1[0x752] = &PTR_FUN_14b6ae210;
  param_1[0x759] = &PTR_FUN_14b6ae2c0;
  param_1[0x75a] = &PTR_FUN_14b6ae300;
  param_1[0x75b] = &PTR_FUN_14b6ae330;
  param_1[0x75c] = &PTR_FUN_14b6ae360;
  param_1[0x75d] = &PTR_FUN_14b6ae3a0;
  param_1[0x761] = &PTR_FUN_14b6ae3c0;
  param_1[0x764] = &PTR_FUN_14b6ae3d0;
  param_1[0x765] = &PTR_FUN_14b6ae410;
  param_1[0x766] = &PTR_FUN_14b6ae520;
  param_1[0x767] = &PTR_FUN_14b6ae540;
  param_1[0x768] = &PTR_FUN_14b6ae560;
  param_1[0x769] = &PTR_FUN_14b6ae600;
  param_1[0x76a] = &PTR_FUN_14b6ae6a0;
  param_1[0x76b] = &PTR_FUN_14b6ae6e0;
  param_1[0x76c] = &PTR_FUN_14b6ae710;
  param_1[0x76d] = &PTR_FUN_14b6ae7a0;
  param_1[0x76e] = &PTR_FUN_14b6ae810;
  param_1[0x773] = &PTR_FUN_14b6ae840;
  param_1[0x774] = &PTR_FUN_14b6ae880;
  param_1[0x775] = &PTR_FUN_14b6ae8b0;
  param_1[0x776] = &PTR_FUN_14b6ae8c8;
  param_1[0x777] = &PTR_FUN_14b6ae8e0;
  param_1[0x778] = &PTR_FUN_14b6ae910;
  param_1[0x779] = &PTR_FUN_14b6ae940;
  param_1[0x77c] = &PTR_FUN_14b6ae980;
  param_1[0x77d] = &PTR_FUN_14b6ae9a0;
  param_1[0x77e] = &PTR_FUN_14b6aea70;
  param_1[0x77f] = &PTR_FUN_14b6aea90;
  param_1[0x780] = &PTR_FUN_14b6aeab0;
  param_1[0x781] = &PTR_FUN_14b6aeae0;
  param_1[0x782] = &PTR_FUN_14b6aeb00;
  param_1[0x783] = &PTR_FUN_14b6aeb20;
  param_1[0x784] = &PTR_FUN_14b6aeb50;
  param_1[0x785] = &PTR_FUN_14b6aeb80;
  param_1[0x786] = &PTR_FUN_14b6aeba0;
  param_1[0x787] = &PTR_FUN_14b6aebc0;
  param_1[0x788] = &PTR_FUN_14b6aebf0;
  param_1[0x789] = &PTR_FUN_14b6aec10;
  param_1[0x78a] = &PTR_FUN_14b6aec30;
  param_1[0x78b] = &PTR_FUN_14b6aec80;
  param_1[0x78c] = &PTR_FUN_14b6aecc0;
  param_1[0x78d] = &PTR_FUN_14b6aed20;
  param_1[0x139a] = &PTR_FUN_14b6aed40;
  param_1[0x13a8] = 0;
  *(undefined4 *)(param_1 + 0x13a9) = 0;
  param_1[0x13a4] = 0;
  param_1[0x13a5] = 0;
  param_1[0x13a2] = 0;
  param_1[0x13a3] = 0;
  param_1[0x13a0] = 0;
  param_1[0x13a1] = 0;
  param_1[0x139e] = 0;
  param_1[0x139f] = 0;
  param_1[0x139c] = 0;
  param_1[0x139d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9d4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9d54) = 0;
  param_1[0x13ac] = 0;
  *(undefined4 *)(param_1 + 0x13ad) = 0;
  param_1[0x13b2] = 0;
  param_1[0x13b0] = 0;
  param_1[0x13b1] = 0;
  param_1[0x13ae] = 0;
  param_1[0x13af] = 0;
  param_1[0x13b3] = 0xf;
  *(undefined2 *)(param_1 + 0x13b4) = 1;
  *(undefined8 *)((longlong)param_1 + 0x9da4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9dac) = 0;
  param_1[0x13b7] = 0;
  param_1[0x13b8] = 0;
  *(byte *)(param_1 + 0x13b9) = *(byte *)(param_1 + 0x13b9) & 0xfc;
  return param_1;
}



// FUNCTION 14623fec2 FUN_14623fec2 body=147 status=ok
// SIG undefined FUN_14623fec2(void)

void FUN_14623fec2(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_14623ff56();
  (**(code **)(*param_1 + 0x180))(param_1);
  lVar4 = param_1[7];
  uVar2 = 0;
  if ((longlong)(int)param_1[8] != 0) {
    lVar3 = (longlong)(int)param_1[8] * 0x18;
    lVar4 = lVar4 + 8;
    do {
      if (param_1[6] != 0) {
        FUN_140993b54(param_1[6],lVar4);
      }
      lVar4 = lVar4 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
    uVar2 = (undefined4)param_1[8];
    lVar4 = param_1[7];
  }
  iVar1 = *(int *)((longlong)param_1 + 0x44);
  FUN_14117d0df(lVar4,uVar2);
  *(undefined4 *)(param_1 + 8) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x44) != 0)) {
    FUN_14883663a(param_1 + 7,0);
    return;
  }
  return;
}



// FUNCTION 14623ff56 FUN_14623ff56 body=329 status=ok
// SIG undefined FUN_14623ff56(void)

void FUN_14623ff56(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = (**(code **)(*param_1 + 0x180))();
  FUN_14027ab42(&local_58,uVar6);
  if (local_50 != (longlong *)0x0) {
    iVar5 = (int)local_50[1];
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_50[1];
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(local_50 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
      plVar7 = local_50;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (local_58 != (undefined8 *)0x0) {
        FUN_140457ffc(local_58 + 8,param_1);
        if ((longlong)(int)param_1[0xf] != 0) {
          lVar9 = param_1[0xe];
          lVar8 = (longlong)(int)param_1[0xf] << 3;
          do {
            cVar4 = FUN_144729dda(lVar9);
            if (cVar4 != '\0') {
              uVar6 = FUN_14479d2ce(lVar9);
              local_48 = 0;
              FUN_14485c47a(&local_48,uVar6);
              local_58 = &local_48;
              FUN_1462400a0(param_1 + 0xe,&local_58);
              *(undefined1 *)(param_1 + 0x12) = 1;
            }
            lVar9 = lVar9 + 8;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
      }
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1462400a0 FUN_1462400a0 body=269 status=ok
// SIG undefined FUN_1462400a0(void)

void FUN_1462400a0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar5 = FUN_1458efc46(lVar2,*param_2);
    lVar9 = lVar2 + 8;
    iVar7 = 0;
    iVar11 = 0;
    do {
      lVar12 = (longlong)iVar11;
      iVar3 = iVar11 + 1;
      if (iVar11 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      lVar8 = lVar9 + lVar12 * 8;
      lVar10 = lVar12;
      iVar14 = iVar11;
      do {
        lVar10 = lVar10 + 1;
        iVar4 = iVar3;
        if (lVar13 <= lVar10) break;
        bVar6 = FUN_1458efc46(lVar8,*param_2,iVar14,lVar10,lVar9,iVar14,lVar8);
        iVar11 = iVar11 + 1;
        lVar8 = lVar8 + 8;
        iVar4 = iVar11;
      } while ((bVar5 & 1) == bVar6);
      iVar11 = iVar4;
      if ((bVar5 & 1) == 0) {
        if (iVar7 != iVar14) {
          memmove((void *)(lVar2 + (longlong)iVar7 * 8),(void *)(lVar2 + lVar12 * 8),
                  (longlong)(iVar11 - iVar14) << 3);
        }
        iVar7 = iVar7 + (iVar11 - iVar14);
      }
      bVar5 = bVar5 ^ 1;
    } while (lVar10 < lVar13);
    *(int *)(param_1 + 1) = iVar7;
  }
  return;
}



// FUNCTION 1462401ae FUN_1462401ae body=836 status=ok
// SIG undefined FUN_1462401ae(void)

void FUN_1462401ae(longlong param_1,longlong param_2,double *param_3,double param_4,double param_5)

{
  longlong *plVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_158 [32];
  double local_138 [17];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((param_2 != 0) && (0.0 < param_4)) {
    plVar1 = (longlong *)(param_1 + 0x90);
    FUN_1462404f4(plVar1);
    *(longlong *)(param_1 + 0xa0) = param_2;
    dVar7 = (param_3[1] + param_3[3]) * 0.5;
    dVar10 = (*param_3 + param_3[2]) * 0.5;
    dVar9 = (param_3[3] - param_3[1]) * 0.5 + param_4;
    dVar12 = (param_3[2] - *param_3) * 0.5 + param_4;
    *(double *)(param_1 + 0xb0) = dVar10 - dVar12;
    *(double *)(param_1 + 0xb8) = dVar7 - dVar9;
    *(double *)(param_1 + 0xc0) = param_5 + -1.0;
    *(double *)(param_1 + 200) = dVar10 + dVar12;
    *(double *)(param_1 + 0xd0) = dVar7 + dVar9;
    *(double *)(param_1 + 0xd8) = param_5 + 1.0;
    *(undefined1 *)(param_1 + 0xe0) = 1;
    dVar7 = *param_3;
    dVar9 = param_3[1];
    dVar10 = param_3[3];
    dVar12 = param_3[2];
    dVar8 = dVar10 - dVar9;
    dVar11 = dVar12 - dVar7;
    local_138[0] = -1.0;
    local_138[1] = 1.0;
    lVar4 = 0;
    local_138[2] = 0.0;
    local_138[3] = 1.0;
    local_138[4] = 1.0;
    local_138[5] = 1.0;
    local_138[6] = 1.0;
    local_138[7] = 0.0;
    local_138[8] = 1.0;
    local_138[9] = -1.0;
    local_138[10] = 0.0;
    local_138[0xb] = -1.0;
    local_138[0xc] = -1.0;
    local_138[0xd] = -1.0;
    local_138[0xe] = -1.0;
    local_138[0xf] = 0.0;
    do {
      dVar2 = *(double *)((longlong)local_138 + lVar4 + 8);
      uVar5 = -(ulonglong)(*(double *)((longlong)local_138 + lVar4) == 0.0);
      uVar6 = -(ulonglong)(dVar2 == 0.0);
      lVar3 = *plVar1;
      *(double *)(lVar3 + lVar4 * 2) =
           (param_4 * 0.5 + dVar11 * 0.5) * *(double *)((longlong)local_138 + lVar4) +
           (dVar7 + dVar12) * 0.5;
      *(double *)(lVar3 + 8 + lVar4 * 2) =
           (dVar8 * 0.5 + param_4 * 0.5) * dVar2 + (dVar9 + dVar10) * 0.5;
      *(double *)(lVar3 + 0x10 + lVar4 * 2) = param_5;
      lVar3 = *plVar1;
      *(float *)(lVar3 + 0x18 + lVar4 * 2) =
           (float)(double)(~uVar5 & (ulonglong)param_4 | uVar5 & (ulonglong)dVar11);
      *(float *)(lVar3 + 0x1c + lVar4 * 2) =
           (float)(double)(~uVar6 & (ulonglong)param_4 | uVar6 & (ulonglong)dVar8);
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 0x80);
  }
  if ((local_b0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462404f4 FUN_1462404f4 body=152 status=ok
// SIG undefined FUN_1462404f4(void)

void FUN_1462404f4(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 8) {
    *(undefined4 *)(param_1 + 1) = 8;
    uVar3 = 8 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_14624058c(param_1,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x20 + *param_1);
    do {
      puVar4[2] = DAT_14c8464f0;
      uVar2 = DAT_14c8464e8;
      *puVar4 = DAT_14c8464e0;
      puVar4[1] = uVar2;
      puVar4[3] = &DAT_3f8000003f800000;
      puVar4 = puVar4 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    return;
  }
  if (iVar1 == 8) {
    return;
  }
  *(undefined4 *)(param_1 + 1) = 8;
  FUN_148405702(param_1);
  return;
}



// FUNCTION 14624058c FUN_14624058c body=132 status=ok
// SIG undefined FUN_14624058c(void)

void FUN_14624058c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146240610 FUN_146240610 body=422 status=ok
// SIG undefined FUN_146240610(void)

void FUN_146240610(undefined8 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined1 local_50 [8];
  undefined8 *local_48;
  undefined4 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_1;
  FUN_141687270();
  uVar3 = FUN_141686e21(0);
  local_58 = (undefined8 *)0x0;
  FUN_1462407ca(&local_31,uVar3,&DAT_14c872ce8,0);
  *(char *)((longlong)param_1 + 9) = (char)param_2;
  uVar3 = FUN_141686e21(param_2);
  local_58 = (undefined8 *)0x0;
  FUN_1462407ca(param_1 + 1,uVar3,&DAT_14c872ce8,0);
  FUN_140e450a2();
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = DAT_14c8407a8;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14aacf480;
  local_48[3] = param_1;
  local_48[4] = &LAB_1406f5276;
  *(undefined4 *)(local_48 + 5) = 0;
  (**(code **)(*plVar1 + 0x58))(plVar1,local_50,&local_48);
  FUN_1449db362(&local_48);
  local_48 = (undefined8 *)CONCAT44(local_48._4_4_,7);
  local_58 = &DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"TextureStreaming",L"MinTextureResidentMipCount",&local_48);
  FUN_1462407b8((ulonglong)local_48 & 0xffffffff);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462407b8 FUN_1462407b8 body=18 status=ok
// SIG undefined FUN_1462407b8(void)

void FUN_1462407b8(int param_1)

{
  DAT_14c761df0 = 1;
  if (1 < param_1) {
    DAT_14c761df0 = param_1;
  }
  return;
}



// FUNCTION 1462407ca FUN_1462407ca body=388 status=ok
// SIG undefined FUN_1462407ca(void)

void FUN_1462407ca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  local_58 = param_3;
  cVar2 = FUN_1449da20c(DAT_14c872ce0,param_2,L"BasedOn");
  if (cVar2 != '\0') {
    puVar4 = local_38;
    if ((int)uStack_30 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    local_58 = param_5;
    FUN_1462407ca(param_1,puVar4,param_3,0);
  }
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  local_40 = param_3;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = &PTR_LAB_14aacf400;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar3;
  *local_50 = &PTR_FUN_14aacf390;
  local_50[3] = &local_40;
  local_50[4] = FUN_140d284c4;
  FUN_141686fc8(DAT_14c872ce0,&local_50,param_2,param_3);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0x50))();
  FUN_1449db362(&local_50);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146240950 FUN_146240950 body=791 status=ok
// SIG undefined FUN_146240950(void)

void FUN_146240950(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 auStack_d8 [36];
  int local_b4;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(char *)(param_1 + 0x20) == '\x01') && (*(longlong *)(param_1 + 0x18) != 0)) {
    plVar1 = (longlong *)(param_1 + 0x28);
    plVar12 = (longlong *)(param_1 + 0x38);
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = plVar12;
    if (*(int *)(param_1 + 0x50) == 0) {
      iVar11 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar11 = *(int *)(param_1 + 0x50);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar6 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar9 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar11) || (local_78 = uVar6, uStack_60 != plVar12)) {
      do {
        local_b4 = iVar11;
        local_78 = uVar6;
        lVar10 = *local_90;
        uVar4 = *(undefined4 *)(lVar10 + (longlong)iVar9 * 0x70);
        local_68 = *(undefined8 *)*param_2;
        plVar5 = (longlong *)((undefined8 *)*param_2)[1];
        if (plVar5 == (longlong *)0x0) {
          uStack_60 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          uStack_60 = plVar5;
        }
        local_a8 = plVar12;
        cVar7 = FUN_145daf7a6(param_1,uVar4,&local_68);
        cVar8 = '\x01';
        if (cVar7 == '\0') {
          local_a0 = *(undefined8 *)*param_2;
          local_98 = (longlong *)((undefined8 *)*param_2)[1];
          if (local_98 == (longlong *)0x0) {
            cVar8 = FUN_140b6d71a(param_1,uVar4,&local_a0);
          }
          else {
            LOCK();
            *(int *)(local_98 + 1) = (int)local_98[1] + 1;
            UNLOCK();
            local_b0 = local_98;
            cVar8 = FUN_140b6d71a(param_1,uVar4);
            plVar12 = local_b0;
            if (local_b0 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_b0 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_b0)(local_b0);
                LOCK();
                piVar3 = (int *)((longlong)local_b0 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
            }
          }
        }
        plVar12 = uStack_60;
        if (uStack_60 != (longlong *)0x0) {
          LOCK();
          plVar2 = uStack_60 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*uStack_60)(uStack_60);
            LOCK();
            piVar3 = (int *)((longlong)plVar12 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar5 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        if (cVar8 != '\0') {
          lVar10 = lVar10 + (longlong)iVar9 * 0x70 + 8;
          local_68 = *(undefined8 *)*param_2;
          plVar12 = (longlong *)((undefined8 *)*param_2)[1];
          uStack_60 = plVar12;
          if (plVar12 == (longlong *)0x0) {
            FUN_14168999c(lVar10,&local_68);
          }
          else {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
            FUN_14168999c(lVar10);
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              plVar5 = plVar12 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar3 = (int *)((longlong)plVar12 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        plVar12 = local_a8;
        iVar9 = local_78._4_4_;
        uVar6 = local_78;
        iVar11 = local_b4;
      } while (((local_78._4_4_ != local_b4) ||
               ((longlong *)CONCAT44(uStack_7c,uStack_80) != local_a8)) || (local_90 != plVar1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146240c6e FUN_146240c6e body=1494 status=ok
// SIG undefined FUN_146240c6e(void)

void FUN_146240c6e(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  longlong *local_68;
  longlong *plStack_60;
  uint local_54;
  uint *local_50;
  undefined1 *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_54 = param_2;
  if (*(int *)(param_1 + 0x790) != *(int *)(param_1 + 0x7bc)) {
    lVar9 = param_1 + 0x7c0;
    if (*(longlong *)(param_1 + 0x7c8) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x7c8);
    }
    iVar7 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 2000) - 1U & param_2) * 4);
    if (iVar7 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x788);
      do {
        if (*(uint *)(lVar9 + (longlong)iVar7 * 0x18) == param_2) goto LAB_146240e0b;
        iVar7 = *(int *)(lVar9 + (longlong)iVar7 * 0x18 + 0x10);
      } while (iVar7 != -1);
    }
  }
  plVar8 = (longlong *)FUN_140a68038(1);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,&local_68);
    uVar5 = local_54;
    plVar8 = local_68;
    if (local_68 != (longlong *)0x0) {
      local_50 = (uint *)0x0;
      local_48 = (undefined1 *)((ulonglong)local_48 & 0xffffffff00000000);
      FUN_1446efa72(&local_50,0,4,0x10);
      local_48 = (undefined1 *)CONCAT44(local_48._4_4_,4);
      plVar3 = *(longlong **)(param_1 + 0x10);
      if (plVar3 == (longlong *)0x0) {
LAB_146240fb6:
        *(undefined ***)local_50 = &PTR_LAB_14b439390;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar9 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar9 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar9;
        *(longlong *)(local_50 + 4) = lVar10;
        *(undefined ***)local_50 = &PTR_FUN_14b9894a0;
        local_50[6] = 0;
        local_50[7] = 0;
        local_50[8] = 0;
        local_50[9] = 0;
        *(longlong *)(local_50 + 10) = param_1;
        local_50[0xc] = uVar5;
      }
      else {
        iVar7 = (int)plVar3[1];
        do {
          if (iVar7 == 0) goto LAB_146240fb6;
          LOCK();
          iVar6 = (int)plVar3[1];
          bVar11 = iVar7 == iVar6;
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
        } while (!bVar11);
        uVar4 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        *(undefined ***)local_50 = &PTR_LAB_14b439390;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar9 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar9 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar9;
        *(longlong *)(local_50 + 4) = lVar10;
        *(undefined ***)local_50 = &PTR_FUN_14b9894a0;
        *(undefined8 *)(local_50 + 6) = uVar4;
        *(longlong **)(local_50 + 8) = plVar3;
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        *(longlong *)(local_50 + 10) = param_1;
        local_50[0xc] = uVar5;
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
      (**(code **)(*plVar8 + 0x210))(plVar8,local_70,&local_50);
      FUN_1449db362(&local_50);
      local_50 = &local_54;
      local_48 = local_70;
      FUN_14580a48e((longlong *)(param_1 + 0x788),local_3c,&local_50,0);
    }
    plVar8 = plStack_60;
    param_2 = local_54;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_60 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        param_2 = local_54;
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          param_2 = local_54;
        }
      }
    }
  }
LAB_146240e0b:
  if (*(int *)(param_1 + 0x740) != *(int *)(param_1 + 0x76c)) {
    lVar9 = param_1 + 0x770;
    if (*(longlong *)(param_1 + 0x778) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x778);
    }
    iVar7 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x780) - 1U & param_2) * 4);
    if (iVar7 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x738);
      do {
        if (*(uint *)(lVar9 + (longlong)iVar7 * 0x18) == param_2) goto LAB_146240f92;
        iVar7 = *(int *)(lVar9 + (longlong)iVar7 * 0x18 + 0x10);
      } while (iVar7 != -1);
    }
  }
  FUN_140b708a0(param_1);
  local_50 = (uint *)0x0;
  plVar8 = (longlong *)FUN_1401e3228();
  if (plVar8 == (longlong *)0x0) {
    local_68 = (longlong *)0x0;
    plStack_60 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar8 + 0x28))(plVar8,&local_68);
    uVar5 = local_54;
    plVar8 = local_68;
    if (local_68 != (longlong *)0x0) {
      local_50 = (uint *)0x0;
      local_48 = (undefined1 *)((ulonglong)local_48 & 0xffffffff00000000);
      FUN_1446efa72(&local_50,0,4,0x10);
      local_48 = (undefined1 *)CONCAT44(local_48._4_4_,4);
      plVar3 = *(longlong **)(param_1 + 0x10);
      if (plVar3 == (longlong *)0x0) {
LAB_146240ffd:
        *(undefined ***)local_50 = &PTR_LAB_14b439390;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar9 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar9 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar9;
        *(longlong *)(local_50 + 4) = lVar10;
        *(undefined ***)local_50 = &PTR_FUN_14b989510;
        local_50[6] = 0;
        local_50[7] = 0;
        local_50[8] = 0;
        local_50[9] = 0;
        *(longlong *)(local_50 + 10) = param_1;
        local_50[0xc] = uVar5;
      }
      else {
        iVar7 = (int)plVar3[1];
        do {
          if (iVar7 == 0) goto LAB_146240ffd;
          LOCK();
          iVar6 = (int)plVar3[1];
          bVar11 = iVar7 == iVar6;
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
        } while (!bVar11);
        uVar4 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        *(undefined ***)local_50 = &PTR_LAB_14b439390;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar9 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar9 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar9;
        *(longlong *)(local_50 + 4) = lVar10;
        *(undefined ***)local_50 = &PTR_FUN_14b989510;
        *(undefined8 *)(local_50 + 6) = uVar4;
        *(longlong **)(local_50 + 8) = plVar3;
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        *(longlong *)(local_50 + 10) = param_1;
        local_50[0xc] = uVar5;
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
      (**(code **)(*plVar8 + 0x210))(plVar8,local_70,&local_50);
      FUN_1449db362(&local_50);
      local_50 = &local_54;
      local_48 = local_70;
      FUN_14580a48e((longlong *)(param_1 + 0x738),local_3c,&local_50,0);
    }
  }
  plVar8 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_146240f92:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146241246 FUN_146241246 body=366 status=ok
// SIG undefined FUN_146241246(void)

void FUN_146241246(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  int local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_40 = 0;
  local_38 = 0x3001;
  local_30 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_40;
  local_58 = local_38;
  local_50 = 0;
  uVar1 = FUN_1462413b6(local_28,&local_60,local_44 != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462413b6 FUN_1462413b6 body=165 status=ok
// SIG undefined FUN_1462413b6(void)

undefined4 FUN_1462413b6(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    uVar3 = FUN_144a7b040();
    plVar4 = (longlong *)FUN_144718840(param_1,uVar3);
    if ((plVar4 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4), lVar5 != 0))
    {
      local_2c = 0xffffffff;
      uVar3 = FUN_1409d448e(param_2);
      local_38 = &local_2c;
      cVar1 = FUN_141689ae8(lVar5,uVar3,param_3,0);
      uVar2 = local_2c;
      if (cVar1 != '\0') goto LAB_146241435;
    }
  }
  uVar2 = 0xffffffff;
LAB_146241435:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14624145c FUN_14624145c body=2049 status=ok
// SIG undefined FUN_14624145c(void)

void FUN_14624145c(longlong param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 uVar12;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined1 *local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined1 *local_120;
  longlong *local_118;
  undefined1 local_10c [8];
  undefined1 local_104 [4];
  undefined1 *local_100;
  longlong *local_f8;
  undefined4 local_f0;
  undefined2 local_e0;
  undefined1 local_d8;
  char local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined4 local_bf;
  undefined1 local_bb;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined2 local_78;
  undefined1 local_70;
  char local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1414d706e();
  uVar6 = DAT_14cbcab70;
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = DAT_14c8464e0;
  uStack_b0 = DAT_14c8464e8;
  local_a8 = DAT_14c8464f0;
  local_a0 = 0;
  local_9e = 0;
  local_90 = (undefined4)DAT_14c8464f8;
  uStack_8c = DAT_14c8464f8._4_4_;
  uStack_88 = (undefined4)DAT_14c846500;
  uStack_84 = DAT_14c846500._4_4_;
  local_80 = DAT_14c846508;
  local_98 = 0;
  local_78 = 0x18;
  local_70 = 5;
  local_68 = ((DAT_14c9a8ab4 & 0x20) == 0) * '\x05';
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_bb = 0;
  local_bf = 0;
  local_5f = 1;
  uVar4 = FUN_141115664();
  lVar5 = FUN_140c48046(param_1 + 0x80,uVar4,uVar6,0);
  if (lVar5 == 0) goto LAB_146241b51;
  local_100 = (undefined1 *)0x0;
  uVar6 = FUN_1411157a2();
  lVar7 = FUN_140c47e50(lVar5,uVar6,&local_100);
  if (lVar7 == 0) {
    plVar11 = (longlong *)0x0;
LAB_146241bbc:
    uVar12 = 0;
  }
  else {
    FUN_14054d68c(lVar7 + 0x80,param_1 + 0x3c8);
    FUN_1446ddc76(local_10c,"SearchRange",1);
    local_100 = local_10c;
    local_f8 = (longlong *)(param_1 + 0x1d0);
    FUN_140ffad64(lVar7 + 0x88,local_104,&local_100,0);
    *(undefined1 *)(lVar7 + 0x331) = 0;
    FUN_14111569e(lVar7,&local_100);
    plVar11 = local_f8;
    puVar2 = local_100;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_f8 + 0xc) = *(int *)((longlong)local_f8 + 0xc) + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)((longlong)local_f8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_f8 + 0x10))(local_f8);
      }
    }
    lVar9 = param_1 + 0x198;
    if (*(char *)(param_1 + 0x1c0) != '\0') {
      if (*(char *)(param_1 + 0x1c0) == '\x11') {
        FUN_144983130(lVar7 + 0x2f8,lVar9);
        FUN_144983130(lVar7 + 0x38,lVar9);
        *(undefined1 *)(lVar7 + 0x70) = 1;
        goto LAB_146241bbc;
      }
      if (*(char *)(param_1 + 0x1c8) != '\0') {
        local_128 = 0;
        local_120 = puVar2;
        local_118 = plVar11;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
          UNLOCK();
        }
        FUN_141115702(&local_100,&local_128);
        cVar3 = FUN_144a43716(param_1 + 0x1a0,&local_f8);
        FUN_144a2da94(&local_100);
        if (cVar3 == '\0') {
          *(undefined1 *)(lVar7 + 0x1c) = 0;
          goto LAB_146241bbc;
        }
      }
    }
    local_140 = 0;
    local_138 = puVar2;
    local_130 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
    }
    FUN_141115702(&local_100,&local_140);
    FUN_1403719a4(lVar9,&local_100);
    FUN_144a2da94(&local_100);
    uVar12 = 1;
  }
  local_100 = (undefined1 *)0x0;
  uVar6 = FUN_1408d77ac();
  plVar8 = (longlong *)FUN_140c47e50(lVar5,uVar6,&local_100);
  if (plVar8 != (longlong *)0x0) {
    *(undefined1 *)(plVar8 + 0x53) = 1;
    *(undefined1 *)(plVar8 + 0x52) = 1;
    FUN_140440628(&local_100,&DAT_14cbcab98,0);
    FUN_1403719a4(plVar8 + 0x43,&local_100);
    FUN_144a2da94(&local_100);
    *(undefined4 *)(plVar8 + 0x4a) = 1;
    FUN_144983130(plVar8 + 0x4b,param_1 + 0x198);
    (**(code **)(*plVar8 + 0x90))(plVar8);
  }
  local_100 = (undefined1 *)0x0;
  uVar6 = FUN_146241c5e();
  lVar7 = FUN_140c47e50(lVar5,uVar6,&local_100);
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0xf8) = 1;
    local_f0 = DAT_14cbcabb0;
    local_f8 = DAT_14cbcaba8;
    local_100 = (undefined1 *)0x0;
    local_e0 = 0xc;
    local_d8 = 0x14;
    local_d0 = '\x14';
    if ((DAT_14c9a9b94 & 0x20) != 0) {
      local_d0 = '\0';
    }
    FUN_1403719a4(lVar7 + 0x80,&local_100);
    FUN_144a2da94(&local_100);
    FUN_144983130(lVar7 + 0x100,param_1 + 0x198);
    *(undefined4 *)(lVar7 + 0x17c) = 1;
  }
  if ((*(char *)(param_1 + 0x38a) == '\x01') && (*(char *)(param_1 + 0x3b8) == '\0')) {
    FUN_144983130(param_1 + 0x390,param_1 + 0x198);
  }
  if (*(char *)(param_1 + 0x308) == '\x01') {
    local_100 = (undefined1 *)0x0;
    uVar6 = FUN_140ffb1b2();
    lVar7 = FUN_140c47e50(lVar5,uVar6,&local_100);
    if (lVar7 != 0) {
      FUN_141689bc8(lVar7 + 0x80,param_1 + 0x310);
      *(undefined1 *)(lVar7 + 0x138) = uVar12;
    }
  }
  local_100 = (undefined1 *)0x0;
  uVar6 = FUN_140c4800c();
  lVar7 = FUN_140c47e50(lVar5,uVar6,&local_100);
  if (lVar7 != 0) {
    FUN_144983130(lVar7 + 0x80,param_1 + 0x198);
    *(undefined1 *)(lVar7 + 0x261) = 1;
    FUN_141584160(lVar7,2);
  }
  uVar6 = FUN_140a48832();
  lVar7 = FUN_140c483dc(lVar5,uVar6,&DAT_14cbcab80,0);
  if (lVar7 != 0) {
    local_100 = (undefined1 *)0x0;
    uVar6 = FUN_140ffaec8();
    plVar8 = (longlong *)FUN_140c47e50(lVar7,uVar6,&local_100);
    if (plVar8 != (longlong *)0x0) {
      FUN_144983130(plVar8 + 0x18,param_1 + 0x198);
      *(undefined1 *)(plVar8 + 0x10) = 0;
      *(undefined1 *)(plVar8 + 0x41) = 1;
      *(undefined1 *)(plVar8 + 0x40) = 1;
      FUN_144983130(plVar8 + 0x28,param_1 + 0x208);
      *(undefined1 *)((longlong)plVar8 + 0x202) = 1;
      FUN_144983130(plVar8 + 0x38,param_1 + 0x240);
      *(undefined1 *)(plVar8 + 0x3f) = 1;
      (**(code **)(*plVar8 + 0x90))(plVar8);
    }
    local_100 = (undefined1 *)0x0;
    uVar6 = FUN_140c483a2();
    lVar9 = FUN_140c47e50(lVar7,uVar6,&local_100);
    if (lVar9 != 0) {
      FUN_144983130(lVar9 + 0x80,param_1 + 0x198);
      local_100 = (undefined1 *)0x0;
      local_e0 = 4;
      local_f8 = (longlong *)CONCAT44(local_f8._4_4_,0x41f00000);
      local_d8 = 3;
      local_d0 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
      FUN_1403719a4(lVar9 + 0xc0,&local_100);
      FUN_144a2da94(&local_100);
    }
    local_100 = (undefined1 *)0x0;
    uVar6 = FUN_140c48260();
    lVar9 = FUN_140c47e50(lVar7,uVar6,&local_100);
    if (lVar9 != 0) {
      *(undefined1 *)(lVar9 + 0x1c) = *(undefined1 *)(param_1 + 0x278);
      *(undefined1 *)(lVar9 + 0x79) = 0;
      lVar10 = *(longlong *)(param_1 + 0x280);
      if (DAT_14c950c29 == '\x01') {
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar10 = *(longlong *)(param_1 + 0x280);
        }
      }
      *(longlong *)(lVar9 + 0x80) = lVar10;
      *(undefined8 *)(lVar9 + 0x88) = *(undefined8 *)(param_1 + 0x288);
      *(undefined4 *)(lVar9 + 0x90) = *(undefined4 *)(param_1 + 0x290);
      FUN_144983130(lVar9 + 0x98,param_1 + 0x298);
      FUN_144983130(lVar9 + 0xd0,param_1 + 0x2d0);
      *(undefined1 *)(lVar9 + 0x10c) = 1;
    }
    local_100 = (undefined1 *)0x0;
    uVar6 = FUN_146241c96();
    lVar7 = FUN_140c47e50(lVar7,uVar6,&local_100);
    if (lVar7 != 0) {
      FUN_144983130(lVar7 + 0x80,param_1 + 0x198);
      *(undefined1 *)(lVar7 + 0x7c) = 0;
    }
  }
  uVar6 = FUN_140a48832();
  lVar5 = FUN_140c483dc(lVar5,uVar6,&DAT_14cbcab78,0);
  if (lVar5 != 0) {
    local_100 = (undefined1 *)0x0;
    uVar6 = FUN_140c48226();
    lVar5 = FUN_140c47e50(lVar5,uVar6,&local_100);
    if (lVar5 != 0) {
      FUN_144983130(lVar5 + 0x1e8,param_1 + 0x198);
      FUN_144955a78(lVar5 + 0x98,&local_c8);
      *(undefined1 *)(lVar5 + 0xa1) = 1;
      *(undefined1 *)(lVar5 + 0xa3) = 1;
      *(undefined1 *)(lVar5 + 0xa5) = 1;
      *(undefined1 *)(lVar5 + 0x158) = 1;
      FUN_144983130(lVar5 + 0x120,param_1 + 0x208);
      *(undefined4 *)(lVar5 + 0x19c) = 0;
      *(undefined1 *)(lVar5 + 0x1e0) = 0;
      *(undefined2 *)(lVar5 + 0x79) = 0;
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
LAB_146241b51:
  FUN_144a2da94(&local_98);
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146241c5e FUN_146241c5e body=55 status=ok
// SIG undefined FUN_146241c5e(void)

void FUN_146241c5e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21880 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21880 = FUN_140002ddd(FUN_1464343d3,uVar1,L"GbxBrainAspectSettings_SetParam");
  }
  return;
}



// FUNCTION 146241c96 FUN_146241c96 body=55 status=ok
// SIG undefined FUN_146241c96(void)

void FUN_146241c96(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0db8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0db8 = FUN_140002ddd(FUN_1465ac5a5,uVar1,L"GbxBrainAspectSettings_Revive");
  }
  return;
}



// FUNCTION 146241cce FUN_146241cce body=572 status=ok
// SIG undefined FUN_146241cce(void)

void FUN_146241cce(undefined8 param_1,longlong param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_278 [40];
  undefined **local_250;
  undefined8 local_248;
  undefined4 local_240;
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
  undefined1 local_1e8;
  undefined8 local_1e4;
  undefined8 uStack_1dc;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined8 uStack_18f;
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e4;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined **local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_250 = &PTR_FUN_14b322ee0;
  local_248 = 0;
  local_240 = 0x34002;
  local_170 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  local_1e4 = 0;
  uStack_1dc = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  uStack_197 = 0;
  uStack_190 = 0;
  uStack_18f = 0;
  local_184 = 0;
  uStack_17c = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0x3002;
  local_140 = 0;
  local_108 = 0;
  local_100 = 0x200000000;
  local_f8 = 0;
  local_f0 = 0x3f800000;
  local_e8 = 0;
  local_e4 = 0;
  local_d8 = 0;
  local_d0 = 0xf00000d0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_7c = 0xbf800000;
  FUN_1405c5fa2();
  local_70 = &DAT_14cb769e8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = &PTR_FUN_14b0394b0;
  local_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_250);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_250);
  }
  pppuVar1 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar1 = &local_250;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_146241f0c(pppuVar1);
  FUN_140df0e32(&local_250);
  if ((local_30 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146241f0c FUN_146241f0c body=71 status=ok
// SIG undefined FUN_146241f0c(void)

void FUN_146241f0c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1412af7d2(param_1 + 8);
  if ((lVar1 != 0) &&
     ((lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0 ||
      ((*(byte *)(param_1 + 0xe0) & 0x80) != 0)))) {
    if (lVar1 == 0) {
      lVar1 = *(longlong *)(param_1 + 0xf0);
    }
    FUN_146241f54(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 146241f54 FUN_146241f54 body=117 status=ok
// SIG undefined FUN_146241f54(void)

void FUN_146241f54(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x180))();
    if (lVar2 != 0) {
      iVar1 = FUN_14490d72a(lVar2);
      if (iVar1 != 3) {
        lVar2 = FUN_1412af310(lVar2);
        if (lVar2 != 0) {
          FUN_1412af85e(lVar2,local_20,param_2);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146241fca FUN_146241fca body=70 status=ok
// SIG undefined FUN_146241fca(void)

void FUN_146241fca(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146242010();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1405357e8(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146242010 FUN_146242010 body=310 status=ok
// SIG undefined FUN_146242010(void)

void FUN_146242010(longlong *param_1)

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
        do {
          local_60 = uVar2;
          *(undefined4 *)
           ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
               0xffffffff;
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
          FUN_1449c0562(&local_70);
          iVar4 = local_60._4_4_;
          uVar2 = local_60;
        } while (local_60._4_4_ != iVar6);
      } while (((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1) || (local_78 != param_1));
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



// FUNCTION 146242148 FUN_146242148 body=100 status=ok
// SIG undefined FUN_146242148(void)

void FUN_146242148(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = FUN_14578bab6(lVar1);
      if (lVar1 != 0) {
        FUN_1462421ac(lVar1,param_1 + 0x38,param_1 + 0x40);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1462421ac FUN_1462421ac body=663 status=ok
// SIG undefined FUN_1462421ac(void)

void FUN_1462421ac(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined1 auStack_138 [40];
  longlong local_110;
  longlong local_108;
  longlong *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8 [12];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  cVar4 = FUN_144729dda(param_1 + 0x10);
  if (cVar4 != '\0') {
    cVar4 = FUN_144729dda(param_1 + 0x18);
    if ((cVar4 != '\0') && (*(longlong *)(param_1 + 0xd8) != 0)) {
      uVar6 = FUN_14479d2ce(param_1 + 0x18);
      uVar6 = FUN_1447210f0(uVar6);
      FUN_14132b09a(&local_108,uVar6);
      if (local_100 != (longlong *)0x0) {
        iVar5 = (int)local_100[1];
        do {
          if (iVar5 == 0) {
            plVar10 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar3 = (int)local_100[1];
          bVar14 = iVar5 == iVar3;
          if (bVar14) {
            *(int *)(local_100 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
          plVar10 = local_100;
        } while (!bVar14);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_100 + 0x10))();
        }
        lVar2 = local_108;
        if (plVar10 != (longlong *)0x0) {
          if (local_108 != 0) {
            lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0xd8) + 0x30);
            if (lVar8 != 0) {
              local_110 = *(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x28);
              puVar11 = (undefined8 *)(local_110 + 0x10);
              lVar9 = 0;
              do {
                if (puVar11[0xc] == *param_2) {
                  local_110 = local_110 - lVar9;
                  if (local_110 != 0) {
                    local_108 = DAT_14caa8578;
                    local_100 = (longlong *)0x0;
                    uStack_f8 = 0;
                    local_f0 = 0;
                    puVar12 = &DAT_14c846480;
                    puVar13 = local_e8;
                    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
                      *puVar13 = *puVar12;
                      puVar12 = puVar12 + 1;
                      puVar13 = puVar13 + 1;
                    }
                    local_88 = 0;
                    uStack_80 = 0;
                    local_78 = 0;
                    local_70 = 0;
                    uStack_68 = 0;
                    uStack_64 = 0;
                    uStack_60 = 0;
                    uStack_5c = 0;
                    if (*(char *)(param_3 + 0xc0) == '\x01') {
                      FUN_1488ae372(&local_108,param_3);
                      local_108 = *param_2;
                      lVar8 = puVar11[0xe];
                      if (lVar8 == 0) {
                        uVar6 = FUN_1458f96d4();
                        lVar8 = FUN_14477b664(uVar6);
                        puVar11[0xe] = lVar8;
                      }
                      plVar7 = (longlong *)puVar11[0xf];
                      if (((plVar7 == (longlong *)0x0) && (plVar7 = (longlong *)0x0, lVar8 != 0)) &&
                         (puVar11[0xd] != 0)) {
                        plVar7 = *(longlong **)(lVar8 + 0xb8);
                        if ((plVar7 == (longlong *)0x0) ||
                           (cVar4 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar4 == '\0')) {
                          plVar7 = (longlong *)0x0;
                        }
                        else {
                          lVar8 = local_110 + 0x78;
                          uVar6 = (**(code **)(*plVar7 + 0x110))(plVar7);
                          plVar7 = (longlong *)FUN_144aff482(uVar6,lVar8);
                        }
                        puVar11[0xf] = plVar7;
                      }
                      puVar12 = local_e8;
                      for (lVar8 = 0xc; local_100 = plVar7, lVar8 != 0; lVar8 = lVar8 + -1) {
                        *puVar12 = *puVar11;
                        puVar11 = puVar11 + 1;
                        puVar12 = puVar12 + 1;
                      }
                    }
                    else {
                      lVar8 = FUN_14479d2ce(param_1 + 0x10);
                      FUN_146207f10(local_110,*(undefined8 *)(lVar8 + 0x398),&local_108);
                    }
                    FUN_145a14736(lVar2,&local_108);
                    FUN_145a1457c(&local_108);
                  }
                  break;
                }
                lVar9 = lVar9 + -0xc0;
                puVar11 = puVar11 + 0x18;
              } while (-lVar9 != lVar8 * 0xc0);
            }
          }
          LOCK();
          plVar7 = plVar10 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
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
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146242444 FUN_146242444 body=510 status=ok
// SIG undefined FUN_146242444(void)

undefined8 FUN_146242444(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  char local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_70;
  int local_68 [6];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_70 = param_3;
  plVar4 = (longlong *)FUN_144a8232a(&DAT_14cb8dd48);
  iVar1 = *(int *)(param_1 + 0x1f8);
  if ((longlong)iVar1 != 0) {
    lVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x1f0) + lVar5) == *plVar4) {
        uVar7 = (int)(lVar5 >> 4) * -0x33333333;
        uVar6 = 0;
        if (((int)uVar7 < 0) || (iVar1 <= (int)uVar7)) goto LAB_1462425a2;
        if ((byte)(*(char *)(*(longlong *)(param_1 + 0x1f0) + 8 +
                            (ulonglong)(uVar7 & 0x7fffffff) * 0x50) - 1U) < 2) {
          local_98 = 0;
          uStack_90 = 0;
          local_88 = 0;
          local_80 = 0xffff;
          lVar5 = FUN_140b9fe48(param_1,param_2);
          if ((lVar5 != 0) && (*(char *)(lVar5 + 0x91) == '\0')) {
            if (param_4 == '\0') {
              lVar2 = *(longlong *)(lVar5 + 0x78);
              FUN_1446dcdd4(local_68,&local_70);
              iVar1 = *(int *)(lVar2 + 0x10 + (ulonglong)(uVar7 & 0x7fffffff) * 0x70);
              if (local_50 != 0) {
                FUN_1400020a8();
              }
              uVar6 = 1;
              if (iVar1 == local_68[0]) goto LAB_1462425a2;
            }
            if (param_3 == 0) {
              uVar6 = FUN_144a8232a(&DAT_14cb8dd48);
              cVar3 = FUN_143e5c798(lVar5,&local_98,uVar6);
            }
            else {
              FUN_1446dcdd4(local_68,&local_70);
              uVar6 = FUN_144a8232a(&DAT_14cb8dd48);
              local_a8 = 1;
              local_a0 = param_4;
              cVar3 = FUN_141689c3a(lVar5,&local_98,uVar6,local_68);
              if (local_50 != 0) {
                FUN_1400020a8();
              }
            }
            uVar6 = 1;
            if (cVar3 != '\0') goto LAB_1462425a2;
          }
        }
        break;
      }
      lVar5 = lVar5 + 0x50;
    } while ((longlong)iVar1 * 0x50 != lVar5);
  }
  uVar6 = 0;
LAB_1462425a2:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14624264a FUN_14624264a body=214 status=ok
// SIG undefined FUN_14624264a(void)

undefined8 FUN_14624264a(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,2,0x10);
  local_20 = 2;
  *local_28 = &PTR_LAB_14a46d330;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar2;
  *local_28 = &PTR_FUN_14a7df850;
  local_28[3] = FUN_14793c858;
  FUN_145d6e1de(&DAT_14c964770,param_1,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146242722 FUN_146242722 body=220 status=ok
// SIG undefined FUN_146242722(void)

longlong * FUN_146242722(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0xb8);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b418940;
  plVar1 = plVar4 + 2;
  memset(plVar4 + 3,0,0xa0);
  plVar4[2] = (longlong)&PTR_LAB_14b418960;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_146242802(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146242802 FUN_146242802 body=162 status=ok
// SIG undefined FUN_146242802(void)

void FUN_146242802(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146242841;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146242841;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_146242841:
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
                    /* WARNING: Could not recover jumptable at 0x0001462428a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1462428a4 FUN_1462428a4 body=220 status=ok
// SIG undefined FUN_1462428a4(void)

longlong * FUN_1462428a4(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)FUN_14001cc68(0x158,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b9a59b0;
  plVar1 = plVar4 + 2;
  FUN_14573f0c8(plVar1,param_1,param_3);
  local_40 = plVar1;
  local_38 = plVar4;
  FUN_146242984(&local_40,plVar1);
  plVar3 = local_38;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146242984 FUN_146242984 body=162 status=ok
// SIG undefined FUN_146242984(void)

void FUN_146242984(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1462429c3;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1462429c3;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1462429c3:
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
                    /* WARNING: Could not recover jumptable at 0x000146242a22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146242a26 FUN_146242a26 body=185 status=ok
// SIG undefined FUN_146242a26(void)

bool FUN_146242a26(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar3 = local_48;
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
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146242ae0 FUN_146242ae0 body=115 status=ok
// SIG undefined FUN_146242ae0(void)

void FUN_146242ae0(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined1 auStack_6a8 [32];
  undefined1 local_688 [1648];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_6a8;
  FUN_1407779ba(local_688,param_2,param_3,0);
  FUN_14168ada4(DAT_14ca712d8,local_688,param_3 & 0xffffffff);
  FUN_140779360(local_688);
  FUN_140778010(local_688);
  if ((local_18 ^ (ulonglong)auStack_6a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146242b54 FUN_146242b54 body=481 status=ok
// SIG undefined FUN_146242b54(void)

undefined8 FUN_146242b54(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_e8 [32];
  longlong local_c8 [2];
  longlong local_b8 [2];
  longlong local_a8 [2];
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a83b10(local_48,(int)param_1[7]);
  (**(code **)(*param_1 + 0x70))(param_1,local_78);
  (**(code **)(*param_1 + 0x60))(param_1,local_a8);
  (**(code **)(*param_1 + 0x50))(param_1,local_c8);
  FUN_144a882a8(local_b8,local_c8,L"?lang=");
  FUN_1401c7f3e(local_98,local_b8,local_a8);
  FUN_144a882a8(local_88,local_98,L"&view=");
  FUN_1401c7f3e(local_68,local_88,local_78);
  FUN_144a882a8(local_58,local_68,L"&localuser=");
  FUN_1401c7f3e(param_2,local_58,local_48);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[2] ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146242d36 FUN_146242d36 body=32 status=ok
// SIG undefined FUN_146242d36(void)

undefined8 FUN_146242d36(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"coui://UX/dashboard.html");
  return param_2;
}



// FUNCTION 146242d56 FUN_146242d56 body=57 status=ok
// SIG undefined FUN_146242d56(void)

undefined8 FUN_146242d56(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  wchar_t *pwVar2;
  
  bVar1 = *(char *)(param_1 + 0x21) - 1;
  if (bVar1 < 10) {
    pwVar2 = (wchar_t *)(&PTR_u_rewards_14b5074a8)[bVar1];
  }
  else {
    pwVar2 = L"news";
  }
  FUN_140056680(param_2,pwVar2);
  return param_2;
}



// FUNCTION 146242d90 FUN_146242d90 body=1752 status=ok
// SIG undefined FUN_146242d90(void)

undefined8 * FUN_146242d90(undefined8 param_1,undefined8 *param_2)

{
  wchar_t *pwVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  undefined8 local_48;
  undefined2 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14593427e(&local_40);
  FUN_14593413b(&local_50);
  puVar7 = local_40;
  if ((int)local_38 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  lVar8 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar7 + lVar8);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)&DAT_14b47462c + lVar8);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) goto LAB_146242eef;
LAB_146242e01:
    lVar8 = lVar8 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar2 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar2]) goto LAB_146242e01;
  }
  if (uVar4 != uVar5) {
    lVar8 = 0;
    goto LAB_146242e33;
  }
LAB_146242eef:
  puVar7 = local_50;
  if ((int)local_48 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  lVar8 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar7 + lVar8);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"zh-Hans-CN" + lVar8);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) goto LAB_1462431b5;
LAB_146242f25:
    lVar8 = lVar8 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar2 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar2]) goto LAB_146242f25;
  }
  if (uVar4 != uVar5) {
    lVar8 = 0;
    goto LAB_146242f57;
  }
LAB_1462431b5:
  pwVar1 = L"zh-Hans";
  goto LAB_1462431bc;
LAB_146242e33:
  uVar4 = *(ushort *)((longlong)puVar7 + lVar8);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)&DAT_14b50718c + lVar8);
  puVar6 = &DAT_149dfb77a;
  if (uVar4 != uVar5) {
    if ((uVar5 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      uVar2 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
      if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar2]) goto LAB_146242e4a;
    }
    if ((int)local_48 != 0) {
      puVar6 = local_50;
    }
    if (uVar4 == uVar5) goto LAB_146243212;
    lVar8 = 0;
    goto LAB_146242e8d;
  }
  if (uVar4 == 0) goto LAB_146243206;
LAB_146242e4a:
  lVar8 = lVar8 + 2;
  goto LAB_146242e33;
LAB_146242e8d:
  uVar4 = *(ushort *)((longlong)puVar6 + lVar8);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)&DAT_14b5071d0 + lVar8);
  if (uVar4 == uVar5) {
    if (uVar4 == 0) goto LAB_146243440;
LAB_146242ea4:
    lVar8 = lVar8 + 2;
    goto LAB_146242e8d;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar2 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar2]) goto LAB_146242ea4;
  }
  if (uVar4 != uVar5) goto LAB_146242ed1;
LAB_146243440:
  *param_2 = local_50;
  local_50 = (undefined2 *)0x0;
  *(int *)(param_2 + 1) = (int)local_48;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_48._4_4_;
  local_48 = 0;
  goto LAB_1462431c4;
LAB_146243206:
  if ((int)local_48 != 0) {
    puVar6 = local_50;
  }
LAB_146243212:
  lVar8 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar6 + lVar8);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)&DAT_14b50718c + lVar8);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) goto LAB_146243434;
LAB_14624322e:
    lVar8 = lVar8 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar2 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar2]) goto LAB_14624322e;
  }
  if (uVar4 != uVar5) {
    lVar8 = 0;
    goto LAB_146243264;
  }
LAB_146243434:
  pwVar1 = L"es-ES";
  goto LAB_1462431bc;
LAB_146243264:
  uVar4 = *(ushort *)((longlong)puVar6 + lVar8);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)&DAT_149e18b72 + lVar8);
  if (uVar4 != uVar5) {
    if ((uVar5 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      uVar2 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
      if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar2]) goto LAB_14624327d;
    }
    if (uVar4 != uVar5) {
      lVar8 = 0;
      goto LAB_1462432b3;
    }
    goto LAB_146243434;
  }
  if (uVar4 == 0) goto LAB_146243434;
LAB_14624327d:
  lVar8 = lVar8 + 2;
  goto LAB_146243264;
LAB_1462432b3:
  uVar4 = *(ushort *)((longlong)puVar6 + lVar8);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)&DAT_14b507192 + lVar8);
  if (uVar4 != uVar5) {
    if ((uVar5 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      uVar2 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
      if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar2]) goto LAB_1462432cc;
    }
    if (uVar4 != uVar5) {
      lVar8 = 0;
      goto LAB_146243302;
    }
    goto LAB_146243428;
  }
  if (uVar4 == 0) goto LAB_146243428;
LAB_1462432cc:
  lVar8 = lVar8 + 2;
  goto LAB_1462432b3;
LAB_146243302:
  uVar4 = *(ushort *)((longlong)puVar6 + lVar8);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)&DAT_14b5071a0 + lVar8);
  if (uVar4 != uVar5) {
    if ((uVar5 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      uVar2 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
      if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar2]) goto LAB_14624331b;
    }
    if (uVar4 != uVar5) {
      lVar8 = 0;
      goto LAB_146243351;
    }
    goto LAB_146243428;
  }
  if (uVar4 == 0) goto LAB_146243428;
LAB_14624331b:
  lVar8 = lVar8 + 2;
  goto LAB_146243302;
LAB_146243351:
  uVar4 = *(ushort *)((longlong)puVar6 + lVar8);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)&DAT_14b5071ac + lVar8);
  if (uVar4 != uVar5) {
    if ((uVar5 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      uVar2 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
      if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar2]) goto LAB_14624336a;
    }
    if (uVar4 != uVar5) {
      lVar8 = 0;
      goto LAB_1462433a0;
    }
    goto LAB_146243428;
  }
  if (uVar4 == 0) goto LAB_146243428;
LAB_14624336a:
  lVar8 = lVar8 + 2;
  goto LAB_146243351;
LAB_1462433a0:
  uVar4 = *(ushort *)((longlong)puVar6 + lVar8);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)&DAT_14b5071b8 + lVar8);
  if (uVar4 != uVar5) {
    if ((uVar5 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      uVar2 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
      if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar2]) goto LAB_1462433b5;
    }
    if (uVar4 != uVar5) {
      lVar8 = 0;
      goto LAB_1462433e7;
    }
    goto LAB_146243428;
  }
  if (uVar4 == 0) goto LAB_146243428;
LAB_1462433b5:
  lVar8 = lVar8 + 2;
  goto LAB_1462433a0;
LAB_1462433e7:
  uVar4 = *(ushort *)((longlong)puVar6 + lVar8);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)&DAT_14b5071c4 + lVar8);
  if (uVar4 == uVar5) {
    if (uVar4 == 0) goto LAB_146243428;
LAB_1462433fc:
    lVar8 = lVar8 + 2;
    goto LAB_1462433e7;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar2 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar2]) goto LAB_1462433fc;
  }
  if (uVar4 != uVar5) goto LAB_146242ed1;
LAB_146243428:
  pwVar1 = L"es-419";
  goto LAB_1462431bc;
LAB_146242f57:
  uVar4 = *(ushort *)((longlong)puVar7 + lVar8);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)L"zh-Hans" + lVar8);
  if (uVar4 != uVar5) {
    if ((uVar5 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      uVar2 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
      if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar2]) goto LAB_146242f6e;
    }
    if (uVar4 != uVar5) {
      lVar8 = 0;
      goto LAB_146242f99;
    }
    goto LAB_1462431b5;
  }
  if (uVar4 == 0) goto LAB_1462431b5;
LAB_146242f6e:
  lVar8 = lVar8 + 2;
  goto LAB_146242f57;
LAB_146242f99:
  uVar4 = *(ushort *)((longlong)puVar7 + lVar8);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)&DAT_14b47462c + lVar8);
  if (uVar4 != uVar5) {
    if ((uVar5 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      uVar2 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
      if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar2]) goto LAB_146242fb2;
    }
    if (uVar4 != uVar5) {
      lVar8 = 0;
      goto LAB_146242fe8;
    }
    goto LAB_1462431b5;
  }
  if (uVar4 == 0) goto LAB_1462431b5;
LAB_146242fb2:
  lVar8 = lVar8 + 2;
  goto LAB_146242f99;
LAB_146242fe8:
  uVar4 = *(ushort *)((longlong)puVar7 + lVar8);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)&DAT_14b50715c + lVar8);
  if (uVar4 != uVar5) {
    if ((uVar5 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      uVar2 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
      if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar2]) goto LAB_146243001;
    }
    if (uVar4 != uVar5) {
      lVar8 = 0;
      goto LAB_146243037;
    }
    goto LAB_1462431b5;
  }
  if (uVar4 == 0) goto LAB_1462431b5;
LAB_146243001:
  lVar8 = lVar8 + 2;
  goto LAB_146242fe8;
LAB_146243037:
  uVar4 = *(ushort *)((longlong)puVar7 + lVar8);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)&DAT_14b507168 + lVar8);
  if (uVar4 != uVar5) {
    if ((uVar5 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      uVar2 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
      if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar2]) goto LAB_146243050;
    }
    if (uVar4 != uVar5) {
      lVar8 = 0;
      goto LAB_146243086;
    }
    goto LAB_1462431b5;
  }
  if (uVar4 == 0) goto LAB_1462431b5;
LAB_146243050:
  lVar8 = lVar8 + 2;
  goto LAB_146243037;
LAB_146243086:
  uVar4 = *(ushort *)((longlong)puVar7 + lVar8);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)L"zh-Hant-TW" + lVar8);
  if (uVar4 != uVar5) {
    if ((uVar5 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      uVar2 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
      if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar2]) goto LAB_14624309f;
    }
    if (uVar4 != uVar5) {
      lVar8 = 0;
      goto LAB_1462430d5;
    }
    goto LAB_1462431ac;
  }
  if (uVar4 == 0) goto LAB_1462431ac;
LAB_14624309f:
  lVar8 = lVar8 + 2;
  goto LAB_146243086;
LAB_1462430d5:
  uVar4 = *(ushort *)((longlong)puVar7 + lVar8);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)L"zh-Hant" + lVar8);
  if (uVar4 != uVar5) {
    if ((uVar5 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      uVar2 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
      if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar2]) goto LAB_1462430ee;
    }
    if (uVar4 != uVar5) {
      lVar8 = 0;
      goto LAB_146243124;
    }
    goto LAB_1462431ac;
  }
  if (uVar4 == 0) goto LAB_1462431ac;
LAB_1462430ee:
  lVar8 = lVar8 + 2;
  goto LAB_1462430d5;
LAB_146243124:
  uVar4 = *(ushort *)((longlong)puVar7 + lVar8);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)&DAT_14b507174 + lVar8);
  if (uVar4 != uVar5) {
    if ((uVar5 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      uVar2 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
      if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar2]) goto LAB_146243139;
    }
    if (uVar4 != uVar5) {
      lVar8 = 0;
      goto LAB_14624316b;
    }
    goto LAB_1462431ac;
  }
  if (uVar4 == 0) goto LAB_1462431ac;
LAB_146243139:
  lVar8 = lVar8 + 2;
  goto LAB_146243124;
LAB_146242ed1:
  *param_2 = local_40;
  local_40 = (undefined2 *)0x0;
  *(int *)(param_2 + 1) = (int)local_38;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_38._4_4_;
  local_38 = 0;
  goto LAB_1462431c4;
LAB_14624316b:
  uVar4 = *(ushort *)((longlong)puVar7 + lVar8);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)&DAT_14b507180 + lVar8);
  if (uVar4 == uVar5) {
    if (uVar4 == 0) goto LAB_1462431ac;
LAB_146243180:
    lVar8 = lVar8 + 2;
    goto LAB_14624316b;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar2 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar2]) goto LAB_146243180;
  }
  if (uVar4 != uVar5) goto LAB_146242ed1;
LAB_1462431ac:
  pwVar1 = L"zh-Hant";
LAB_1462431bc:
  FUN_140056680(param_2,pwVar1);
LAB_1462431c4:
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14624346a FUN_14624346a body=174 status=ok
// SIG undefined FUN_14624346a(void)

bool FUN_14624346a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar3 = local_48;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624351a FUN_14624351a body=63 status=ok
// SIG undefined FUN_14624351a(void)

void FUN_14624351a(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145ae934c(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_145890708(param_1);
    return;
  }
  FUN_14624355a(param_1);
  FUN_145ae934c(param_1);
  return;
}



// FUNCTION 14624355a FUN_14624355a body=325 status=ok
// SIG undefined FUN_14624355a(void)

void FUN_14624355a(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 1462436a0 FUN_1462436a0 body=63 status=ok
// SIG undefined FUN_1462436a0(void)

void FUN_1462436a0(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1462436e0(param_1);
    FUN_145c3481a(param_1);
    return;
  }
  FUN_145c3481a(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1459bca14(param_1);
  return;
}



// FUNCTION 1462436e0 FUN_1462436e0 body=325 status=ok
// SIG undefined FUN_1462436e0(void)

void FUN_1462436e0(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 146243826 FUN_146243826 body=2641 status=ok
// SIG undefined FUN_146243826(void)

void FUN_146243826(longlong param_1)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  int iVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  undefined8 *puVar28;
  bool bVar29;
  float fVar30;
  undefined1 auStack_408 [47];
  undefined1 local_3d9;
  longlong local_3d8;
  longlong *local_3d0;
  longlong local_3c8 [4];
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined8 local_39c;
  undefined4 local_394;
  longlong local_388;
  undefined4 local_380;
  longlong local_378;
  longlong local_370;
  undefined4 local_368 [188];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_408;
  local_3d8 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x548);
  local_3a8 = 0;
  local_3a0 = 0;
  local_3c8[0] = 0;
  local_3c8[1] = 0;
  local_39c = 0xffffffff00000080;
  local_394 = 0;
  local_388 = 0;
  local_380 = 0;
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar27 = *(longlong *)(param_1 + 0x68);
    lVar18 = lVar27 + (longlong)*(int *)(param_1 + 0x70) * 0x18;
    do {
      local_370 = lVar27 + 0x10;
      local_378 = lVar27;
      FUN_14624443e(local_3c8,&local_78,&local_378);
      lVar27 = lVar27 + 0x18;
    } while (lVar27 != lVar18);
  }
  local_3d0 = (longlong *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) < 0) {
    FUN_1476b8e08(local_3d0);
  }
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    puVar17 = *(ulonglong **)(param_1 + 0x40);
    lVar18 = (longlong)*(int *)(param_1 + 0x48) << 4;
    do {
      uVar23 = *puVar17;
      if (DAT_14c950c29 == '\x01') {
        if (uVar23 == 0) {
          uVar23 = 0;
        }
        else {
          FUN_1456cec3c(uVar23);
          uVar23 = *puVar17;
        }
      }
      uVar9 = puVar17[1];
      uVar2 = *(undefined2 *)((longlong)puVar17 + 10);
      local_3d9 = *(undefined1 *)((longlong)puVar17 + 0xc);
      uVar10 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) * -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      iVar11 = FUN_146244306(local_3c8,
                             (uint)(ushort)puVar17[1] + (uVar10 >> 0x10 ^ uVar10) * 0x133 +
                             0x288252e3,puVar17);
      lVar27 = (longlong)iVar11 * 0x20 + local_3c8[0];
      if (lVar27 == 0 || iVar11 == -1) {
        lVar12 = (ulonglong)(ushort)puVar17[1] * 0x128;
        lVar27 = *(longlong *)(*(longlong *)(local_3d8 + 8) + 0x100 + lVar12);
        plVar14 = *(longlong **)(*(longlong *)(local_3d8 + 8) + 0x108 + lVar12);
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          LOCK();
          plVar13 = plVar14 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
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
        plVar13 = (longlong *)FUN_14479d2ce(lVar27 + 0x18);
        fVar30 = 0.0;
        if ((plVar13 != (longlong *)0x0) &&
           (lVar27 = (**(code **)(*plVar13 + 0x180))(plVar13), lVar27 != 0)) {
          fVar30 = (float)*(double *)(lVar27 + 0x6d0);
        }
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar14 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
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
      }
      else {
        fVar30 = *(float *)(lVar27 + 0x10);
      }
      iVar11 = *(int *)(param_1 + 0x70);
      *(uint *)(param_1 + 0x70) = iVar11 + 1U;
      if (*(uint *)(param_1 + 0x74) < iVar11 + 1U) {
        FUN_1462443aa(local_3d0);
      }
      lVar27 = *local_3d0;
      *(ulonglong *)(lVar27 + (longlong)iVar11 * 0x18) = uVar23;
      if ((uVar23 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(uVar23);
      }
      lVar27 = (longlong)iVar11 * 0x18 + lVar27;
      *(short *)(lVar27 + 8) = (short)uVar9;
      *(undefined2 *)(lVar27 + 10) = uVar2;
      *(undefined1 *)(lVar27 + 0xc) = local_3d9;
      *(float *)(lVar27 + 0x10) = fVar30;
      puVar17 = puVar17 + 2;
      lVar18 = lVar18 + -0x10;
    } while (lVar18 != 0);
  }
  iVar11 = *(int *)(param_1 + 0x70);
  if (1 < (longlong)iVar11) {
    lVar18 = *local_3d0;
    memset(local_368,0,0x2f0);
    local_370 = lVar18 + (longlong)iVar11 * 0x18 + -0x18;
    local_378 = lVar18;
    fVar30 = logf((float)iVar11);
    local_368[0] = (int)(longlong)(fVar30 + fVar30);
    plVar14 = &local_378;
    do {
      puVar16 = (undefined8 *)*plVar14;
      puVar24 = (undefined8 *)plVar14[1];
      iVar11 = (int)plVar14[2];
      iVar21 = (int)((ulonglong)((longlong)puVar24 - (longlong)puVar16) >> 3) * -0x55555555;
      uVar10 = iVar21 + 1;
      if (iVar11 != 0) {
LAB_146243b8e:
        if (8 < (int)uVar10) {
          uVar23 = (ulonglong)(uVar10 >> 1);
          uVar5 = puVar16[uVar23 * 3 + 2];
          uVar6 = puVar16[uVar23 * 3];
          uVar7 = (puVar16 + uVar23 * 3)[1];
          puVar16[uVar23 * 3 + 2] = puVar16[2];
          uVar8 = puVar16[1];
          puVar16[uVar23 * 3] = *puVar16;
          (puVar16 + uVar23 * 3)[1] = uVar8;
          puVar16[2] = uVar5;
          *puVar16 = uVar6;
          puVar16[1] = uVar7;
          puVar19 = puVar24 + 3;
          puVar15 = puVar16;
          do {
            puVar15 = puVar15 + 3;
            if (puVar15 <= puVar24) {
              iVar21 = *(int *)(*(longlong *)(local_3d8 + 8) + 0xe0 +
                               (ulonglong)*(ushort *)(puVar16 + 1) * 0x128);
              while (iVar26 = *(int *)(*(longlong *)(local_3d8 + 8) + 0xe0 +
                                      (ulonglong)*(ushort *)(puVar15 + 1) * 0x128), iVar21 <= iVar26
                    ) {
                if (((iVar26 <= iVar21) &&
                    (*(float *)(puVar15 + 2) <= *(float *)(puVar16 + 2) &&
                     *(float *)(puVar16 + 2) != *(float *)(puVar15 + 2))) ||
                   (puVar15 = puVar15 + 3, puVar24 < puVar15)) break;
              }
            }
            puVar28 = puVar19 + -3;
            puVar20 = puVar19;
            if (puVar16 < puVar28) {
              iVar21 = *(int *)(*(longlong *)(local_3d8 + 8) + 0xe0 +
                               (ulonglong)*(ushort *)(puVar16 + 1) * 0x128);
              do {
                puVar22 = puVar28;
                puVar20 = puVar19;
                iVar26 = *(int *)(*(longlong *)(local_3d8 + 8) + 0xe0 +
                                 (ulonglong)*(ushort *)(puVar20 + -2) * 0x128);
                puVar28 = puVar22;
                if (iVar21 < iVar26) goto LAB_146243cc1;
                if ((iVar21 <= iVar26) &&
                   (*(float *)(puVar16 + 2) <= *(float *)(puVar20 + -1) &&
                    *(float *)(puVar20 + -1) != *(float *)(puVar16 + 2))) {
                  puVar28 = puVar20 + -3;
                  goto LAB_146243cc1;
                }
                puVar19 = puVar20 + -3;
                puVar28 = puVar22 + -3;
              } while (puVar16 < puVar20 + -6);
              puVar28 = puVar20 + -6;
              puVar20 = puVar22;
            }
LAB_146243cc1:
            puVar19 = puVar28;
            if (puVar19 < puVar15) goto LAB_146243d10;
            uVar5 = puVar15[2];
            uVar6 = *puVar15;
            uVar7 = puVar15[1];
            puVar15[2] = puVar19[2];
            uVar8 = puVar19[1];
            *puVar15 = *puVar19;
            puVar15[1] = uVar8;
            puVar19[2] = uVar5;
            *puVar19 = uVar6;
            puVar19[1] = uVar7;
          } while( true );
        }
        if (puVar16 < puVar24) {
          do {
            puVar19 = puVar16;
            if (puVar16 + 3 <= puVar24) {
              puVar15 = puVar16 + 3;
              do {
                iVar11 = *(int *)(*(longlong *)(local_3d8 + 8) + 0xe0 +
                                 (ulonglong)*(ushort *)(puVar15 + 1) * 0x128);
                iVar21 = *(int *)(*(longlong *)(local_3d8 + 8) + 0xe0 +
                                 (ulonglong)*(ushort *)(puVar19 + 1) * 0x128);
                if ((iVar11 < iVar21) ||
                   ((iVar11 <= iVar21 &&
                    (*(float *)(puVar15 + 2) <= *(float *)(puVar19 + 2) &&
                     *(float *)(puVar19 + 2) != *(float *)(puVar15 + 2))))) {
                  puVar19 = puVar15;
                }
                puVar15 = puVar15 + 3;
              } while (puVar15 <= puVar24);
            }
            local_68 = puVar19[2];
            local_78 = *puVar19;
            uStack_70 = puVar19[1];
            uVar6 = local_78;
            uVar7 = uStack_70;
            puVar19[2] = puVar24[2];
            uVar5 = puVar24[1];
            *puVar19 = *puVar24;
            puVar19[1] = uVar5;
            puVar24[2] = local_68;
            local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
            uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
            *(undefined4 *)puVar24 = (undefined4)local_78;
            *(undefined4 *)((longlong)puVar24 + 4) = local_78._4_4_;
            *(undefined4 *)(puVar24 + 1) = (undefined4)uStack_70;
            *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_70._4_4_;
            puVar24 = puVar24 + -3;
            local_78 = uVar6;
            uStack_70 = uVar7;
          } while (puVar16 < puVar24);
        }
        goto LAB_1462441e0;
      }
LAB_146243dd2:
      if (uVar10 != 0) {
        iVar11 = (iVar21 - (iVar21 + -1 >> 0x1f)) + -1 >> 1;
        iVar21 = iVar11;
joined_r0x000146243df8:
        do {
          iVar26 = iVar11 * 2 + 1;
          if (iVar26 < (int)uVar10) {
            iVar25 = iVar11 * 2 + 2;
            lVar18 = *(longlong *)(local_3d8 + 8);
            if (iVar25 < (int)uVar10) {
              lVar27 = (longlong)iVar25;
              iVar3 = *(int *)(lVar18 + 0xe0 +
                              (ulonglong)*(ushort *)(puVar16 + (longlong)iVar26 * 3 + 1) * 0x128);
              iVar4 = *(int *)(lVar18 + 0xe0 +
                              (ulonglong)*(ushort *)(puVar16 + lVar27 * 3 + 1) * 0x128);
              if ((iVar3 < iVar4) ||
                 ((iVar3 <= iVar4 &&
                  (*(float *)(puVar16 + (longlong)iVar26 * 3 + 2) <=
                   *(float *)(puVar16 + lVar27 * 3 + 2) &&
                   *(float *)(puVar16 + lVar27 * 3 + 2) !=
                   *(float *)(puVar16 + (longlong)iVar26 * 3 + 2))))) goto LAB_146243e60;
            }
            else {
LAB_146243e60:
              lVar27 = (longlong)iVar26;
              iVar25 = iVar26;
            }
            puVar24 = puVar16 + (longlong)iVar11 * 3;
            puVar19 = puVar16 + lVar27 * 3;
            iVar11 = *(int *)(lVar18 + 0xe0 + (ulonglong)*(ushort *)(puVar19 + 1) * 0x128);
            iVar26 = *(int *)(lVar18 + 0xe0 + (ulonglong)*(ushort *)(puVar24 + 1) * 0x128);
            if ((iVar11 < iVar26) ||
               ((iVar11 <= iVar26 &&
                (*(float *)(puVar19 + 2) <= *(float *)(puVar24 + 2) &&
                 *(float *)(puVar24 + 2) != *(float *)(puVar19 + 2))))) {
              local_68 = puVar24[2];
              local_78 = *puVar24;
              uStack_70 = puVar24[1];
              uVar6 = local_78;
              uVar7 = uStack_70;
              puVar24[2] = puVar19[2];
              uVar5 = puVar19[1];
              *puVar24 = *puVar19;
              puVar24[1] = uVar5;
              puVar19[2] = local_68;
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
              *(undefined4 *)puVar19 = (undefined4)local_78;
              *(undefined4 *)((longlong)puVar19 + 4) = local_78._4_4_;
              *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_70._4_4_;
              iVar11 = iVar25;
              local_78 = uVar6;
              uStack_70 = uVar7;
              goto joined_r0x000146243df8;
            }
          }
          bVar29 = iVar21 != 0;
          iVar11 = iVar21 + -1;
          iVar21 = iVar11;
        } while (bVar29);
        if (1 < (int)uVar10) {
          uVar23 = (ulonglong)uVar10 - 1;
          local_68 = puVar16[2];
          local_78 = *puVar16;
          uStack_70 = puVar16[1];
          uVar6 = local_78;
          uVar7 = uStack_70;
          puVar16[2] = puVar16[uVar23 * 3 + 2];
          uVar5 = (puVar16 + uVar23 * 3)[1];
          *puVar16 = puVar16[uVar23 * 3];
          puVar16[1] = uVar5;
          puVar16[uVar23 * 3 + 2] = local_68;
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          puVar24 = puVar16 + uVar23 * 3;
          *(undefined4 *)puVar24 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar24 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar24 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_70._4_4_;
          local_78 = uVar6;
          uStack_70 = uVar7;
          if (uVar10 != 2) {
            do {
              iVar21 = 0;
              iVar11 = 1;
              iVar26 = 0;
              do {
                iVar25 = iVar21 + 2;
                lVar27 = (longlong)iVar25;
                lVar18 = *(longlong *)(local_3d8 + 8);
                if (lVar27 < (longlong)uVar23) {
                  iVar21 = *(int *)(lVar18 + 0xe0 +
                                   (ulonglong)*(ushort *)(puVar16 + (longlong)iVar11 * 3 + 1) *
                                   0x128);
                  iVar3 = *(int *)(lVar18 + 0xe0 +
                                  (ulonglong)*(ushort *)(puVar16 + lVar27 * 3 + 1) * 0x128);
                  if ((iVar21 < iVar3) ||
                     ((iVar21 <= iVar3 &&
                      (*(float *)(puVar16 + (longlong)iVar11 * 3 + 2) <=
                       *(float *)(puVar16 + lVar27 * 3 + 2) &&
                       *(float *)(puVar16 + lVar27 * 3 + 2) !=
                       *(float *)(puVar16 + (longlong)iVar11 * 3 + 2))))) goto LAB_146243ffa;
                }
                else {
LAB_146243ffa:
                  lVar27 = (longlong)iVar11;
                  iVar25 = iVar11;
                }
                puVar24 = puVar16 + (longlong)iVar26 * 3;
                puVar19 = puVar16 + lVar27 * 3;
                iVar11 = *(int *)(lVar18 + 0xe0 + (ulonglong)*(ushort *)(puVar19 + 1) * 0x128);
                iVar21 = *(int *)(lVar18 + 0xe0 + (ulonglong)*(ushort *)(puVar24 + 1) * 0x128);
                if ((iVar21 <= iVar11) &&
                   ((iVar21 < iVar11 ||
                    (*(float *)(puVar24 + 2) < *(float *)(puVar19 + 2) ||
                     *(float *)(puVar24 + 2) == *(float *)(puVar19 + 2))))) break;
                uVar5 = puVar24[2];
                uVar6 = *puVar24;
                uVar7 = puVar24[1];
                puVar24[2] = puVar19[2];
                uVar8 = puVar19[1];
                *puVar24 = *puVar19;
                puVar24[1] = uVar8;
                puVar19[2] = uVar5;
                *puVar19 = uVar6;
                puVar19[1] = uVar7;
                iVar21 = iVar25 * 2;
                iVar11 = iVar25 * 2 + 1;
                iVar26 = iVar25;
              } while ((longlong)iVar11 < (longlong)uVar23);
              uVar9 = uVar23 - 1;
              local_68 = puVar16[2];
              local_78 = *puVar16;
              uStack_70 = puVar16[1];
              uVar6 = local_78;
              uVar7 = uStack_70;
              puVar16[2] = puVar16[uVar9 * 3 + 2];
              uVar5 = (puVar16 + uVar9 * 3)[1];
              *puVar16 = puVar16[uVar9 * 3];
              puVar16[1] = uVar5;
              puVar16[uVar9 * 3 + 2] = local_68;
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
              puVar24 = puVar16 + uVar9 * 3;
              *(undefined4 *)puVar24 = (undefined4)local_78;
              *(undefined4 *)((longlong)puVar24 + 4) = local_78._4_4_;
              *(undefined4 *)(puVar24 + 1) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_70._4_4_;
              bVar29 = 2 < uVar23;
              uVar23 = uVar9;
              local_78 = uVar6;
              uStack_70 = uVar7;
            } while (bVar29);
          }
        }
      }
LAB_1462441e0:
      plVar14 = plVar14 + -3;
    } while (&local_378 <= plVar14);
  }
  local_380 = 0;
  if (local_388 != 0) {
    FUN_1400020a8();
  }
  FUN_146244278(local_3c8);
  if ((local_60 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146243d10:
  local_68 = puVar16[2];
  local_78 = *puVar16;
  uStack_70 = puVar16[1];
  uVar6 = local_78;
  uVar7 = uStack_70;
  puVar16[2] = puVar19[2];
  uVar5 = puVar19[1];
  *puVar16 = *puVar19;
  puVar16[1] = uVar5;
  puVar19[2] = local_68;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  *(undefined4 *)puVar19 = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar19 + 4) = local_78._4_4_;
  *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_70._4_4_;
  iVar11 = iVar11 + -1;
  puVar20 = puVar20 + -6;
  local_78 = uVar6;
  uStack_70 = uVar7;
  if ((longlong)puVar20 - (longlong)puVar16 < (longlong)puVar24 - (longlong)puVar15) {
    if (puVar15 < puVar24) {
      *plVar14 = (longlong)puVar15;
      plVar14[1] = (longlong)puVar24;
      *(int *)(plVar14 + 2) = iVar11;
      plVar14 = plVar14 + 3;
    }
    if (puVar19 <= puVar16 + 3) goto LAB_1462441e0;
  }
  else {
    if (puVar16 + 3 < puVar19) {
      *plVar14 = (longlong)puVar16;
      plVar14[1] = (longlong)puVar20;
      *(int *)(plVar14 + 2) = iVar11;
      plVar14 = plVar14 + 3;
    }
    puVar20 = puVar24;
    puVar16 = puVar15;
    if (puVar24 <= puVar15) goto LAB_1462441e0;
  }
  iVar21 = (int)((ulonglong)((longlong)puVar20 - (longlong)puVar16) >> 3) * -0x55555555;
  uVar10 = iVar21 + 1;
  puVar24 = puVar20;
  if (iVar11 == 0) goto LAB_146243dd2;
  goto LAB_146243b8e;
}



// FUNCTION 146244278 FUN_146244278 body=53 status=ok
// SIG undefined FUN_146244278(void)

void FUN_146244278(longlong *param_1)

{
  FUN_1462442ae();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1462442ae FUN_1462442ae body=88 status=ok
// SIG undefined FUN_1462442ae(void)

void FUN_1462442ae(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 146244306 FUN_146244306 body=163 status=ok
// SIG undefined FUN_146244306(void)

int FUN_146244306(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar4 = *param_1;
      bVar2 = DAT_14c950c29;
      do {
        lVar1 = *param_3;
        if ((lVar1 != 0 & bVar2) == 1) {
          FUN_1456cec3c(lVar1);
          bVar2 = DAT_14c950c29;
        }
        plVar5 = (longlong *)(lVar4 + (longlong)iVar3 * 0x20);
        if (((*plVar5 == lVar1) && ((int)plVar5[1] == (int)param_3[1])) &&
           (*(char *)((longlong)plVar5 + 0xc) == *(char *)((longlong)param_3 + 0xc))) {
          return iVar3;
        }
        lVar4 = *param_1;
        iVar3 = *(int *)(lVar4 + 0x18 + (longlong)iVar3 * 0x20);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 1462443aa FUN_1462443aa body=147 status=ok
// SIG undefined FUN_1462443aa(void)

void FUN_1462443aa(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14624443e FUN_14624443e body=393 status=ok
// SIG undefined FUN_14624443e(void)

undefined4 * FUN_14624443e(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146244626(param_1,local_48);
  puVar1 = (ulonglong *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  uVar7 = *puVar1;
  *local_40 = uVar7;
  if ((uVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    uVar7 = *local_40;
  }
  *(undefined1 *)((longlong)local_40 + 0xc) = *(undefined1 *)((longlong)puVar1 + 0xc);
  *(int *)(local_40 + 1) = (int)puVar1[1];
  *(undefined4 *)(local_40 + 2) = *puVar2;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = (uint)(ushort)local_40[1] + (uVar5 >> 0x10 ^ uVar5) * 0x133 + 0x288252e3;
  cVar4 = FUN_1462445c8(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x1c) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_14624470c(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462445c8 FUN_1462445c8 body=93 status=ok
// SIG undefined FUN_1462445c8(void)

undefined8 FUN_1462445c8(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_146244306(), iVar7 != -1)) {
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
    FUN_1476b8d96(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 146244626 FUN_146244626 body=230 status=ok
// SIG undefined FUN_146244626(void)

int * FUN_146244626(longlong *param_1,int *param_2)

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



// FUNCTION 14624470c FUN_14624470c body=509 status=ok
// SIG undefined FUN_14624470c(void)

void FUN_14624470c(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)
                 (int)((uVar8 >> 0x10 ^ uVar8) * 0x133 + (uint)*(ushort *)(lVar2 + 8 + lVar6) +
                      0x288252e3) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 14624490a FUN_14624490a body=161 status=ok
// SIG undefined FUN_14624490a(void)

void FUN_14624490a(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x28);
  lVar4 = FUN_14009d2a0();
  iVar2 = *(int *)(lVar4 + 0xfc);
  lVar4 = FUN_14009d2a0();
  uVar1 = *(ushort *)(lVar4 + 0xfa);
  FUN_1462449ac(lVar3 + 0x148,local_38);
  *(byte *)(local_30 + 8) = *(byte *)(local_30 + 8) & 0xfc | 2;
  FUN_140fa5276(local_30);
  *(byte *)(local_30 + 8) = *(byte *)(local_30 + 8) | 3;
  *local_30 = &PTR_FUN_14a47d2c0;
  *(uint *)(local_30 + 1) = iVar2 << 0x10 | (uint)uVar1;
  local_30[2] = param_1;
  *(undefined4 *)(param_1 + 0xe8) = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462449ac FUN_1462449ac body=231 status=ok
// SIG undefined FUN_1462449ac(void)

int * FUN_1462449ac(longlong *param_1,int *param_2)

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
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x48) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 146244a94 FUN_146244a94 body=344 status=ok
// SIG undefined FUN_146244a94(void)

longlong * FUN_146244a94(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb12c28 != (longlong *)0x0) goto LAB_146244b51;
  plVar3 = (longlong *)FUN_14001cc68(0x198,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ab41250;
  plVar4 = plVar3 + 2;
  FUN_146244c90(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_146244bee(&local_30,plVar4);
  plVar3 = local_28;
  plVar4 = DAT_14cb12c30;
  DAT_14cb12c28 = local_30;
  if (local_28 == (longlong *)0x0) {
    if (DAT_14cb12c30 != (longlong *)0x0) {
      DAT_14cb12c30 = (longlong *)0x0;
LAB_146244b8e:
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000146244bb9:
        if (iVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    plVar4 = DAT_14cb12c30;
    UNLOCK();
    if (local_28 == DAT_14cb12c30) {
      LOCK();
      plVar4 = local_28 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar4 = plVar3;
        goto joined_r0x000146244bb9;
      }
    }
    else {
      DAT_14cb12c30 = local_28;
      if (plVar4 != (longlong *)0x0) goto LAB_146244b8e;
    }
  }
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_146244b51:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return DAT_14cb12c28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146244bee FUN_146244bee body=162 status=ok
// SIG undefined FUN_146244bee(void)

void FUN_146244bee(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146244c2d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146244c2d;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_146244c2d:
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
                    /* WARNING: Could not recover jumptable at 0x000146244c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146244c90 FUN_146244c90 body=285 status=ok
// SIG undefined FUN_146244c90(void)

undefined8 * FUN_146244c90(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14ab40f90;
  param_1[3] = &PTR_FUN_14ab40fb0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 4),4000);
  param_1[9] = 0;
  param_1[10] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xb),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x10),4000);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfa) = 0;
  *(undefined8 *)((longlong)param_1 + 0x102) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  return param_1;
}



// FUNCTION 146244dae FUN_146244dae body=348 status=ok
// SIG undefined FUN_146244dae(void)

undefined4 * FUN_146244dae(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146244f8e(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  uVar2 = *puVar1;
  local_40[1] = 0;
  FUN_14485c47a(local_40 + 1,uVar2);
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = *local_40;
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_146244f0c(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146245076(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146244f0c FUN_146244f0c body=130 status=ok
// SIG undefined FUN_146244f0c(void)

undefined8 FUN_146244f0c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1488a6868((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146244f8e FUN_146244f8e body=231 status=ok
// SIG undefined FUN_146244f8e(void)

int * FUN_146244f8e(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 146245076 FUN_146245076 body=482 status=ok
// SIG undefined FUN_146245076(void)

void FUN_146245076(longlong *param_1)

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
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
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



// FUNCTION 14624525a FUN_14624525a body=397 status=ok
// SIG undefined FUN_14624525a(void)

void FUN_14624525a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[3] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 3);
  }
  local_38[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_38[2];
  if ((local_38[2] != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_1462453e8(local_38[3],&local_40,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462453e8 FUN_1462453e8 body=266 status=ok
// SIG undefined FUN_1462453e8(void)

void FUN_1462453e8(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (param_1 != (longlong *)0x0) {
    uVar6 = FUN_140d4a144();
    plVar7 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar6);
    if (plVar7 != (longlong *)0x0) {
      uVar6 = FUN_140d4a144();
      plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
      if ((plVar7 != plVar8) && (plVar8 != (longlong *)0x0)) {
        lVar9 = (**(code **)(*plVar8 + 0x20))(plVar8);
        iVar1 = *(int *)(lVar9 + 0x38);
        if ((longlong)iVar1 != 0) {
          lVar9 = *(longlong *)(lVar9 + 0x30);
          lVar12 = 0;
          do {
            lVar2 = *(longlong *)(lVar9 + lVar12);
            if ((lVar2 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0)) {
              lVar11 = *param_2;
              if (lVar11 == 0) {
LAB_1462454ee:
                lVar11 = 0;
              }
              else {
                lVar10 = FUN_144a8d392();
                if (((lVar10 == 0) || (*(int *)(lVar11 + 0x38) < *(int *)(lVar10 + 0x38))) ||
                   (*(longlong *)
                     (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
                    lVar10 + 0x30)) goto LAB_1462454ee;
                lVar11 = *param_2;
              }
              cVar4 = FUN_144a7ff9e(lVar3,lVar11);
              if (cVar4 != '\0') {
                lVar3 = param_3[1];
                uVar5 = (int)lVar3 + 1;
                *(uint *)(param_3 + 1) = uVar5;
                if (*(uint *)((longlong)param_3 + 0xc) < uVar5) {
                  FUN_1462454f2(param_3);
                }
                *(longlong *)(*param_3 + (longlong)(int)lVar3 * 8) = lVar2;
              }
            }
            lVar12 = lVar12 + 8;
          } while ((longlong)iVar1 * 8 != lVar12);
        }
      }
    }
  }
  return;
}



// FUNCTION 1462454f2 FUN_1462454f2 body=132 status=ok
// SIG undefined FUN_1462454f2(void)

void FUN_1462454f2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146245576 FUN_146245576 body=234 status=ok
// SIG undefined FUN_146245576(void)

longlong * FUN_146245576(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b418560;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b418580;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_146245664(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146245664 FUN_146245664 body=162 status=ok
// SIG undefined FUN_146245664(void)

void FUN_146245664(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1462456a3;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1462456a3;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1462456a3:
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
                    /* WARNING: Could not recover jumptable at 0x000146245702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146245706 FUN_146245706 body=234 status=ok
// SIG undefined FUN_146245706(void)

longlong * FUN_146245706(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b97cbd0;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b97cbf0;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1462457f4(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462457f4 FUN_1462457f4 body=162 status=ok
// SIG undefined FUN_1462457f4(void)

void FUN_1462457f4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146245833;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146245833;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_146245833:
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
                    /* WARNING: Could not recover jumptable at 0x000146245892. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146245896 FUN_146245896 body=154 status=ok
// SIG undefined FUN_146245896(void)

void FUN_146245896(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14060e84c();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = FUN_14497e828(lVar1);
      if (lVar1 == 0) goto LAB_146245913;
      lVar1 = FUN_140fb8258(lVar1);
      if (lVar1 != 0) {
        FUN_146245932(lVar1 + 0x278,local_20,param_1);
      }
    }
  }
  FUN_14168a038(param_1);
LAB_146245913:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146245932 FUN_146245932 body=244 status=ok
// SIG undefined FUN_146245932(void)

undefined8 FUN_146245932(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b9684f0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_148d11832;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146245a28 FUN_146245a28 body=68 status=ok
// SIG undefined FUN_146245a28(void)

void FUN_146245a28(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  uVar1 = (**(code **)(param_1 + 8))();
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x128))(plVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000146245a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x18))(param_2);
    return;
  }
  return;
}



// FUNCTION 146245a6c FUN_146245a6c body=53 status=ok
// SIG undefined FUN_146245a6c(void)

void FUN_146245a6c(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  if (param_2 != 0) {
    uVar1 = FUN_145733170();
    cVar2 = FUN_1448093f4(param_2,uVar1);
    if (cVar2 != '\0') {
      FUN_14168b9ee(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 146245aa2 FUN_146245aa2 body=86 status=ok
// SIG undefined FUN_146245aa2(void)

void FUN_146245aa2(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_146245af8();
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_14b9c5018;
  puVar1[4] = *(undefined8 *)(param_1 + 0x170);
  *(undefined1 *)(puVar1 + 5) = 1;
  FUN_140391314(param_1,puVar1);
  return;
}



// FUNCTION 146245af8 FUN_146245af8 body=716 status=ok
// SIG undefined FUN_146245af8(void)

void FUN_146245af8(longlong *param_1)

{
  PSRWLOCK SRWLock;
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [8];
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14588cd9e();
  cVar1 = FUN_144729dda(param_1 + 6);
  if (cVar1 != '\0') {
    puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_14b9d19a8;
    FUN_140391314(param_1,puVar2);
    plVar3 = (longlong *)FUN_140f9a2c8(param_1);
    lVar5 = *plVar3;
    SRWLock = (PSRWLOCK)(lVar5 + 0xa0);
    AcquireSRWLockShared(SRWLock);
    lVar5 = *(longlong *)(lVar5 + 0x30);
    local_a0 = lVar5;
    ReleaseSRWLockShared(SRWLock);
    if (lVar5 == 0) {
      (**(code **)(*param_1 + 400))(param_1);
      puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      *puVar2 = &PTR_FUN_14b9c6e00;
      FUN_1446ddc76(&local_98,"MenuOpened",1);
      FUN_14039176c(puVar2,param_1[6],local_98,1);
      *puVar2 = &PTR_FUN_14b9c6e00;
      puVar2[7] = param_1[3];
      FUN_140391314(param_1,puVar2);
    }
    else {
      uVar4 = FUN_14001cc68(0xa0,0x10);
      local_78 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      uStack_70 = 0x8000000000;
      local_68 = 0xffffffff;
      FUN_1446ddc76(local_a8,"overlay_menu",1);
      local_b0 = 0;
      local_b8 = &local_98;
      FUN_145e14f3c(uVar4,param_1[6],local_a8,&local_a0);
      FUN_140391314(param_1,uVar4);
      uStack_50 = uStack_50 & 0xffffffff00000000;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_14064e7da(&local_98);
      uVar4 = FUN_14001cc68(0xa0,0x10);
      local_78 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      uStack_70 = 0x8000000000;
      local_68 = 0xffffffff;
      lVar5 = FUN_14479d2ce(param_1 + 6);
      local_b0 = 0;
      local_b8 = &local_98;
      FUN_145e14f3c(uVar4,param_1[6],lVar5 + 0x3a0,&local_a0);
      FUN_140391314(param_1,uVar4);
      uStack_50 = uStack_50 & 0xffffffff00000000;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_14064e7da(&local_98);
      plVar3 = (longlong *)FUN_140f9a2c8(param_1);
      lVar5 = *plVar3;
      AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0xa0));
      *(int *)(lVar5 + 0x98) = *(int *)(lVar5 + 0x98) + 1;
      FUN_1414cfa40(lVar5 + 0x30,&DAT_149eda618);
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0xa0));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146245dc6 FUN_146245dc6 body=247 status=ok
// SIG undefined FUN_146245dc6(void)

void FUN_146245dc6(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_146245ebe(param_1,iVar1 != 0,local_28 != 0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146245ebe FUN_146245ebe body=556 status=ok
// SIG undefined FUN_146245ebe(void)

void FUN_146245ebe(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined1 auStack_178 [40];
  undefined1 local_150 [8];
  undefined1 local_148 [4];
  undefined8 local_144;
  undefined1 local_13c;
  longlong *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  longlong *local_128;
  undefined4 local_120;
  undefined1 local_e0 [16];
  undefined4 local_d0;
  undefined1 local_cc;
  undefined1 local_a0;
  undefined1 local_78 [16];
  longlong local_68;
  undefined1 local_2f;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar5 = (**(code **)(*param_1 + 0x180))();
  if (lVar5 != 0) {
    lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x1f0), lVar5 != 0)) {
      lVar6 = FUN_1403ca142();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        uVar7 = FUN_140d27a2a(lVar5);
        cVar4 = FUN_14577a842(uVar7);
        if (cVar4 == '\0') {
          pcVar8 = "respawn_message";
        }
        else {
          pcVar8 = "respawn_message_intro";
        }
        FUN_1446ddc76(local_150,pcVar8,1);
        FUN_1446dcdd4(local_148,local_150);
        lVar5 = FUN_1412095fe(local_148);
        if (CONCAT44(uStack_12c,local_130) != 0) {
          FUN_1400020a8();
        }
        if (lVar5 != 0) {
          FUN_1412099d2(param_1,&DAT_14cbd63c0);
          FUN_14125b7f0(local_148);
          plVar3 = local_138;
          local_144 = *(undefined8 *)(lVar5 + 100);
          plVar1 = *(longlong **)(lVar5 + 0x28);
          if (local_138 != plVar1) {
            local_138 = plVar1;
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
          plVar3 = local_128;
          local_130 = *(undefined4 *)(lVar5 + 0x30);
          plVar1 = *(longlong **)(lVar5 + 0x18);
          if (local_128 != plVar1) {
            local_128 = plVar1;
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
          local_120 = *(undefined4 *)(lVar5 + 0x20);
          local_cc = *(undefined1 *)(lVar5 + 0xd8);
          local_d0 = *(undefined4 *)(lVar5 + 0xdc);
          local_13c = *(undefined1 *)(lVar5 + 0x60);
          iVar2 = (int)param_1[0xd] + -1;
          if ((int)param_1[0xd] == 0) {
            iVar2 = 0;
          }
          FUN_1402980a2(local_78,param_1[0xc],iVar2);
          local_68 = param_1[0xb];
          FUN_144a787a6(local_e0,lVar5 + 200);
          local_a0 = 0;
          local_2f = 1;
          FUN_14120969a(param_1,local_150,local_148);
          FUN_140989dc4(local_148);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462460ec FUN_1462460ec body=297 status=ok
// SIG undefined FUN_1462460ec(void)

void FUN_1462460ec(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (param_1[0x79] == (ulonglong)DAT_14c893048) {
    lVar1 = FUN_1447210f0(param_1);
    if (0.25 < *(double *)(lVar1 + 0x6d0) - (double)*(float *)((longlong)param_1 + 0x4bc)) {
      (**(code **)(*param_1 + 0x680))(param_1,&local_80);
      (**(code **)(*param_1 + 0xe60))(param_1,&local_98);
      local_58 = local_88;
      local_68 = local_98;
      uStack_60 = uStack_90;
      local_50 = local_80;
      uStack_4c = uStack_7c;
      uStack_48 = uStack_78;
      uStack_44 = uStack_74;
      local_40 = local_70;
      uVar2 = FUN_14477b072(param_1,DAT_14caf9b30);
      (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_68);
      *(float *)((longlong)param_1 + 0x4bc) = (float)*(double *)(lVar1 + 0x6d0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146246216 FUN_146246216 body=267 status=ok
// SIG undefined FUN_146246216(void)

undefined8 FUN_146246216(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  int local_60;
  longlong *local_58 [2];
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14624635c(param_1 + 4,&local_48);
  puVar5 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar5 = local_48;
  }
  uVar1 = *(undefined1 *)(param_1 + 3);
  uVar2 = FUN_146246322();
  FUN_1406f1d90(uVar2,local_58,uVar1);
  puVar3 = (undefined8 *)FUN_1447a1f4a(local_58);
  puVar6 = &DAT_149dfb77a;
  if (*(int *)(puVar3 + 1) != 0) {
    puVar6 = (undefined2 *)*puVar3;
  }
  local_70 = *param_1;
  FUN_1400021e4(&local_70,&local_68);
  puVar4 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar4 = local_68;
  }
  local_78 = puVar5;
  FUN_140002266(param_2,L"%ls  %ls  %ls",puVar4,puVar6);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146246322 FUN_146246322 body=57 status=ok
// SIG undefined FUN_146246322(void)

void FUN_146246322(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2d18 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2d18 = FUN_14171c317(FUN_1462a4346,uVar1,L"EGbxAttributeModifierType");
  }
  return;
}



// FUNCTION 14624635c FUN_14624635c body=416 status=ok
// SIG undefined FUN_14624635c(void)

longlong * FUN_14624635c(float *param_1,longlong *param_2)

{
  float fVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(longlong *)(param_1 + 0xc) == 0) || (0xfffffffd < (int)param_1[0xe] - 1U)) {
    cVar2 = FUN_1459b61e8(param_1 + 2);
    if (cVar2 == '\0') {
      FUN_1462464fe(param_1 + 2,&local_38);
    }
    else {
      FUN_140002266(&local_38,&DAT_149e14292,(double)*param_1);
    }
  }
  else {
    local_40 = *(longlong *)(param_1 + 0xc);
    FUN_1400021e4(&local_40,&local_38);
  }
  if (&local_38 == param_2) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_2 + 1) = local_30;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_2c;
  }
  fVar1 = param_1[0x12];
  if ((fVar1 != 1.0) || (NAN(fVar1))) {
    if ((int)param_2[1] == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    FUN_140002266(&local_38,L"(%g * %s)",(double)fVar1,puVar3);
    if (&local_38 == param_2) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_38;
      *(undefined4 *)(param_2 + 1) = local_30;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_2c;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


