// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14664600e FUN_14664600e body=134 status=ok
// SIG undefined FUN_14664600e(void)

void FUN_14664600e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1408bb964(param_1 + 0x14);
  if (lVar1 != 0) {
    lVar2 = FUN_1459b10c6(lVar1);
    if (lVar2 != 0) {
      uVar3 = FUN_14586d25c(lVar2);
      FUN_140457ffc(uVar3,param_1 + -0x30);
    }
    lVar1 = *(longlong *)(lVar1 + 0x48);
    if (lVar1 != 0) {
      lVar2 = FUN_140b6d0be();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_140457ffc(lVar1 + 0x1e0,param_1 + -0x30);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146646094 FUN_146646094 body=107 status=ok
// SIG undefined FUN_146646094(void)

void FUN_146646094(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400d7050(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (*(int *)(lVar1 + 0xd98) != 0)) &&
       (*(longlong *)(lVar1 + 0xda0) != 0)) {
      FUN_140c125e6(lVar1 + 0xd98,&DAT_14cbd9660);
      return;
    }
  }
  return;
}



// FUNCTION 146646100 FUN_146646100 body=254 status=ok
// SIG undefined FUN_146646100(void)

undefined8
FUN_146646100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b72b0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140c6314c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146646200 FUN_146646200 body=254 status=ok
// SIG undefined FUN_146646200(void)

undefined8
FUN_146646200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b4332c0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b7320;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14572a21a(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146646300 FUN_146646300 body=183 status=ok
// SIG undefined FUN_146646300(void)

void FUN_146646300(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = param_1 + -0x30;
  cVar2 = FUN_144729dda(param_1 + 0x40);
  if (cVar2 != '\0') {
    lVar3 = FUN_14479d2ce(param_1 + 0x40);
    if (lVar3 != 0) {
      FUN_140457ffc(lVar3 + 0xa0,lVar1);
      FUN_140457ffc(lVar3 + 0xb8,lVar1);
    }
  }
  lVar3 = FUN_1400f3ad8(param_1 + 0x14);
  if (lVar3 != 0) {
    uVar4 = FUN_1447210f0(lVar3);
    lVar3 = FUN_1449baec6(uVar4);
    if (lVar3 != 0) {
      lVar5 = FUN_140d976a6();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        FUN_140457ffc(lVar3 + 0x410,lVar1);
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1466463b8 FUN_1466463b8 body=71 status=ok
// SIG undefined FUN_1466463b8(void)

undefined8 FUN_1466463b8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(int *)(param_1 + 0x14) != 0) && (lVar1 = FUN_1400d7050(), lVar1 != 0)) {
    lVar2 = FUN_144a5dd5e();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 146646400 FUN_146646400 body=157 status=ok
// SIG undefined FUN_146646400(void)

void FUN_146646400(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400d7050();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_14480f766(lVar1 + 0x3490);
      }
      if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_14480f766(lVar1 + 0x34a8);
      }
      if (*(longlong *)(param_1 + 0x28) != 0) {
        FUN_14480f766(lVar1 + 0x34c0);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_140457ffc(&DAT_14c9647a0,param_1 + -0x30);
  return;
}



// FUNCTION 14664649e FUN_14664649e body=324 status=ok
// SIG undefined FUN_14664649e(void)

void FUN_14664649e(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_140059518(param_1 + 0x14);
  lVar4 = FUN_1404960a8(uVar3);
  if (lVar4 != 0) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar1 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_40[2] = lVar5;
    *local_40 = &PTR_FUN_14b9b75c0;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1 + -0x30);
    puVar1[4] = FUN_148e562ca;
    *(undefined4 *)(puVar1 + 5) = 0;
    FUN_1446ddc76(&local_48,"FOakUIEvent_ClearPip",1);
    FUN_140391af6(lVar4,&local_30,local_48,&local_40);
    *(undefined8 *)(param_1 + 0x38) = local_30;
    FUN_1449db362(&local_40);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466465e4 FUN_1466465e4 body=124 status=ok
// SIG undefined FUN_1466465e4(void)

void FUN_1466465e4(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_140059518(param_1 + 0x14);
  lVar2 = FUN_1404960a8(uVar1);
  if (lVar2 != 0) {
    FUN_1446ddc76(&local_28,"FOakUIEvent_ClearPip",1);
    FUN_1401cd85c(lVar2,local_28,param_1 + 0x38);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146646662 FUN_146646662 body=196 status=ok
// SIG undefined FUN_146646662(void)

void FUN_146646662(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar2 = FUN_1400d7050();
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_14480f766(lVar2 + 0x24d0);
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
  }
  lVar2 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))((longlong *)(param_1 + -0x30));
  if ((lVar2 != 0) && (lVar3 = *(longlong *)(param_1 + 0x30), lVar3 != 0)) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar2 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar4;
    lVar2 = FUN_144a61814(uVar1,(undefined8 *)(param_1 + 0x30));
    if (lVar2 != 0) {
      FUN_1405a424c(uVar1,lVar3);
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 146646726 FUN_146646726 body=35 status=ok
// SIG undefined FUN_146646726(void)

bool FUN_146646726(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = FUN_141356c7a();
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x14) != 0;
  }
  return bVar2;
}



// FUNCTION 14664674a FUN_14664674a body=91 status=ok
// SIG undefined FUN_14664674a(void)

void FUN_14664674a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_141356c7a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a7b4ca();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (*(longlong *)(param_1 + 0x18) != 0)) {
      FUN_14480f766(lVar1 + 0xed0);
      return;
    }
  }
  return;
}



// FUNCTION 1466467ac FUN_1466467ac body=2570 status=ok
// SIG undefined FUN_1466467ac(void)

void FUN_1466467ac(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = FUN_140495e96();
  lVar5 = FUN_1404960a8(uVar4);
  if (lVar5 != 0) {
    lVar1 = param_1 + -0x30;
    if (*(longlong *)(param_1 + 0x18) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9b7860;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = FUN_145766560;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_50,"FOakUIEvent_Skills_Profile",1);
      FUN_140391af6(lVar5,&local_38,local_50,&local_48);
      *(undefined8 *)(param_1 + 0x18) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x20) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9b7860;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = FUN_148e5699a;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_58,"FOakUIEvent_Specializations_Profile",1);
      FUN_140391af6(lVar5,&local_38,local_58,&local_48);
      *(undefined8 *)(param_1 + 0x20) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x48) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9b7860;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = FUN_14576633c;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_60,"FOakUIEvent_Progression_Point",1);
      FUN_140391af6(lVar5,&local_38,local_60,&local_48);
      *(undefined8 *)(param_1 + 0x48) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x50) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9b7860;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = &LAB_14576635e;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_68,"FOakUIEvent_SkillTree_Activate",1);
      FUN_140391af6(lVar5,&local_38,local_68,&local_48);
      *(undefined8 *)(param_1 + 0x50) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x58) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9b7860;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = &LAB_148e56a64;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_70,"FOakUIEvent_SkillTree_Deactivate",1);
      FUN_140391af6(lVar5,&local_38,local_70,&local_48);
      *(undefined8 *)(param_1 + 0x58) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x60) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9b7860;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = &LAB_148e56a72;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_78,"FOakUIEvent_Specialization_Activate",1);
      FUN_140391af6(lVar5,&local_38,local_78,&local_48);
      *(undefined8 *)(param_1 + 0x60) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x68) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9b7860;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = &LAB_148e56a84;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_80,"FOakUIEvent_SkillTree_ResetSkillTree",1);
      FUN_140391af6(lVar5,&local_38,local_80,&local_48);
      *(undefined8 *)(param_1 + 0x68) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x70) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9b7860;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = &LAB_148e56a90;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_88,"FOakUIEvent_SkillTree_ResetSpecializations",1);
      FUN_140391af6(lVar5,&local_38,local_88,&local_48);
      *(undefined8 *)(param_1 + 0x70) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x78) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9b7860;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = &LAB_148e56a98;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_90,"FOakUIEvent_SkillTree_ResetNode",1);
      FUN_140391af6(lVar5,&local_38,local_90,&local_48);
      *(undefined8 *)(param_1 + 0x78) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x80) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9b7860;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = FUN_1462562c0;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_98,"FOakUIEvent_Progression_CaptureAnalytics",1);
      FUN_140391af6(lVar5,&local_38,local_98,&local_48);
      *(undefined8 *)(param_1 + 0x80) = local_38;
      FUN_1449db362(&local_48);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466471b8 FUN_1466471b8 body=524 status=ok
// SIG undefined FUN_1466471b8(void)

void FUN_1466471b8(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = FUN_140495e96();
  lVar2 = FUN_1404960a8(uVar1);
  if (lVar2 != 0) {
    FUN_1446ddc76(&local_30,"FOakUIEvent_Skills_Profile",1);
    FUN_1401cd85c(lVar2,local_30,param_1 + 0x18);
    FUN_1446ddc76(&local_38,"FOakUIEvent_Specializations_Profile",1);
    FUN_1401cd85c(lVar2,local_38,param_1 + 0x20);
    FUN_1446ddc76(&local_40,"FOakUIEvent_Progression_Point",1);
    FUN_1401cd85c(lVar2,local_40,param_1 + 0x48);
    FUN_1446ddc76(&local_48,"FOakUIEvent_SkillTree_Activate",1);
    FUN_1401cd85c(lVar2,local_48,param_1 + 0x50);
    FUN_1446ddc76(&local_50,"FOakUIEvent_SkillTree_Deactivate",1);
    FUN_1401cd85c(lVar2,local_50,param_1 + 0x58);
    FUN_1446ddc76(&local_58,"FOakUIEvent_Specialization_Activate",1);
    FUN_1401cd85c(lVar2,local_58,param_1 + 0x60);
    FUN_1446ddc76(&local_60,"FOakUIEvent_SkillTree_ResetSkillTree",1);
    FUN_1401cd85c(lVar2,local_60,param_1 + 0x68);
    FUN_1446ddc76(&local_68,"FOakUIEvent_SkillTree_ResetSpecializations",1);
    FUN_1401cd85c(lVar2,local_68,param_1 + 0x70);
    FUN_1446ddc76(&local_70,"FOakUIEvent_SkillTree_ResetNode",1);
    FUN_1401cd85c(lVar2,local_70,param_1 + 0x78);
    FUN_1446ddc76(&local_78,"FOakUIEvent_Progression_CaptureAnalytics",1);
    FUN_1401cd85c(lVar2,local_78,param_1 + 0x80);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466473c6 FUN_1466473c6 body=517 status=ok
// SIG undefined FUN_1466473c6(void)

void FUN_1466473c6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float *pfVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auStack_58 [32];
  char local_38;
  undefined7 uStack_37;
  longlong *local_30;
  ulonglong local_28;
  undefined1 auVar8 [16];
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1 + -0x30,&local_38);
  pfVar3 = *(float **)(CONCAT71(uStack_37,local_38) + 0x130);
  AcquireSRWLockExclusive((PSRWLOCK)(pfVar3 + 0x18));
  pfVar3[0x16] = (float)((int)pfVar3[0x16] + 1);
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
  param_1 = param_1 + 0x18;
  cVar4 = FUN_1403ae288(param_1);
  if (cVar4 == '\0') {
    if (pfVar3[1] == 0.0 || *pfVar3 != 0.0) {
      *pfVar3 = 0.0;
      pfVar3[1] = (float)((int)pfVar3[1] + 1);
    }
    if (pfVar3[5] == 0.0 || pfVar3[4] != 0.0) {
      pfVar3[4] = 0.0;
      pfVar3[5] = (float)((int)pfVar3[5] + 1);
    }
    if (pfVar3[0xb] == 0.0 || *(char *)(pfVar3 + 10) != '\x04') {
      *(undefined1 *)(pfVar3 + 10) = 4;
      pfVar3[0xb] = (float)((int)pfVar3[0xb] + 1);
    }
  }
  else {
    lVar5 = FUN_140280ec4(param_1);
    if (pfVar3[1] == 0.0 || *(float *)(lVar5 + 200) != *pfVar3) {
      *pfVar3 = *(float *)(lVar5 + 200);
      pfVar3[1] = (float)((int)pfVar3[1] + 1);
    }
    lVar5 = FUN_140280ec4(param_1);
    if ((*(longlong *)(lVar5 + 0x18) == 0) ||
       (*(char *)(*(longlong *)(lVar5 + 0x18) + 0x18) != '\x01')) {
      fVar7 = *(float *)(lVar5 + 0x30);
    }
    else {
      auVar8 = roundps(ZEXT416(*(uint *)(lVar5 + 0x30)),ZEXT416(*(uint *)(lVar5 + 0x30)),3);
      fVar7 = auVar8._0_4_;
    }
    if (((fVar7 != pfVar3[4]) || (NAN(fVar7) || NAN(pfVar3[4]))) || (pfVar3[5] == 0.0)) {
      pfVar3[4] = fVar7;
      pfVar3[5] = (float)((int)pfVar3[5] + 1);
    }
    local_38 = '\x04';
    uVar6 = FUN_140280ec4(param_1);
    cVar4 = FUN_140280f4a(uVar6,&local_38);
    if (cVar4 != '\0') {
      if (pfVar3[0xb] == 0.0 || local_38 != *(char *)(pfVar3 + 10)) {
        *(char *)(pfVar3 + 10) = local_38;
        pfVar3[0xb] = (float)((int)pfVar3[0xb] + 1);
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(pfVar3 + 0x18));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466475cc FUN_1466475cc body=211 status=ok
// SIG undefined FUN_1466475cc(void)

void FUN_1466475cc(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_1 + -0x30);
  lVar2 = FUN_1400d6ef8(plVar1);
  if (lVar2 != 0) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_14480f766(lVar2 + 0x30);
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_14480f766(lVar2 + 0x48);
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_14480f766(lVar2 + 0x60);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  lVar2 = (**(code **)(*plVar1 + 0x180))(plVar1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
    lVar2 = FUN_1400d6ce6();
    if (lVar2 != 0) {
      FUN_140457ffc(lVar2 + 400,plVar1);
      FUN_140457ffc(lVar2 + 0x160,plVar1);
      FUN_140457ffc(lVar2 + 0x178,plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1466476a0 FUN_1466476a0 body=68 status=ok
// SIG undefined FUN_1466476a0(void)

bool FUN_1466476a0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1400f3ad8(param_1 + 0x14);
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = FUN_140059518(param_1 + 0x14);
    lVar2 = FUN_1404960a8(uVar3);
    bVar1 = lVar2 != 0 && *(int *)(param_1 + 0x24) != 0;
  }
  return bVar1;
}



// FUNCTION 1466476e4 FUN_1466476e4 body=254 status=ok
// SIG undefined FUN_1466476e4(void)

undefined8
FUN_1466476e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b7d60;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466477e4 FUN_1466477e4 body=254 status=ok
// SIG undefined FUN_1466477e4(void)

undefined8
FUN_1466477e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b4332c0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b7f20;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14572a21a(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466478e4 FUN_1466478e4 body=254 status=ok
// SIG undefined FUN_1466478e4(void)

undefined8
FUN_1466478e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3fdf50;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b7f90;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145a0b054(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466479e4 FUN_1466479e4 body=254 status=ok
// SIG undefined FUN_1466479e4(void)

undefined8
FUN_1466479e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b991aa0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b8150;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14586ed62(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146647ae4 FUN_146647ae4 body=254 status=ok
// SIG undefined FUN_146647ae4(void)

undefined8
FUN_146647ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9b5d60;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b81c0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14586efa2(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146647be4 FUN_146647be4 body=254 status=ok
// SIG undefined FUN_146647be4(void)

undefined8
FUN_146647be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e35290;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b82a0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140feff30(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146647ce4 FUN_146647ce4 body=254 status=ok
// SIG undefined FUN_146647ce4(void)

undefined8
FUN_146647ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b8310;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140c6314c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146647de4 FUN_146647de4 body=248 status=ok
// SIG undefined FUN_146647de4(void)

undefined8 FUN_146647de4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1ca5b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b9b83f0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14123f6f0(&DAT_14cb10980,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146647ede FUN_146647ede body=248 status=ok
// SIG undefined FUN_146647ede(void)

undefined8 FUN_146647ede(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b972d50;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b9b8460;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145ac3b52(&DAT_14cbd0b00,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146647fd8 FUN_146647fd8 body=254 status=ok
// SIG undefined FUN_146647fd8(void)

undefined8
FUN_146647fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14a1e1a40;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b84d0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_141211c46(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466480d8 FUN_1466480d8 body=26 status=ok
// SIG undefined FUN_1466480d8(void)

void FUN_1466480d8(undefined8 param_1)

{
  FUN_1458e1450();
  FUN_1458ff706(param_1);
  return;
}



// FUNCTION 1466480f2 FUN_1466480f2 body=1199 status=ok
// SIG undefined FUN_1466480f2(void)

void FUN_1466480f2(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar1 = FUN_140059518(param_1 + 0x14);
  lVar2 = FUN_1404960a8(uVar1);
  if (lVar2 != 0) {
    FUN_1446ddc76(&local_30,"ExitGameSplitScreen",1);
    FUN_1401cd85c(lVar2,local_30,param_1 + 0x38);
    FUN_1446ddc76(&local_38,"ShowMaxSaveGamesDialog",1);
    FUN_1401cd85c(lVar2,local_38,param_1 + 0x50);
    FUN_1446ddc76(&local_40,"SplitScreenMenuStatusChanged",1);
    FUN_1401cd85c(lVar2,local_40,param_1 + 0x40);
    FUN_1446ddc76(&local_48,"SetCanAddSplitscreenPlayer",1);
    FUN_1401cd85c(lVar2,local_48,param_1 + 0xa0);
    FUN_1446ddc76(&local_50,"SwitchProfile",1);
    FUN_1401cd85c(lVar2,local_50,param_1 + 0x98);
    FUN_1446ddc76(&local_58,"OakMainMenuActive",1);
    FUN_1401cd85c(lVar2,local_58,param_1 + 0xa8);
    FUN_1446ddc76(&local_60,"GameSettingsMenuActive",1);
    FUN_1401cd85c(lVar2,local_60,param_1 + 200);
    FUN_1446ddc76(&local_68,"SetGameSettings",1);
    FUN_1401cd85c(lVar2,local_68,param_1 + 0xd0);
    FUN_1446ddc76(&local_70,"SetMatchmakingGameSettings",1);
    FUN_1401cd85c(lVar2,local_70,param_1 + 0xe0);
    FUN_1446ddc76(&local_78,"SetGameSetting_TrueMode",1);
    FUN_1401cd85c(lVar2,local_78,param_1 + 0xd8);
    FUN_1446ddc76(&local_80,"OpenMatchmakingMenu",1);
    FUN_1401cd85c(lVar2,local_80,param_1 + 0x120);
    FUN_1446ddc76(&local_88,"OpenLanMenu",1);
    FUN_1401cd85c(lVar2,local_88,param_1 + 0xf8);
    FUN_1446ddc76(&local_90,"CloseLanMenu",1);
    FUN_1401cd85c(lVar2,local_90,param_1 + 0x100);
    FUN_1446ddc76(&local_98,"RefreshLanMenu",1);
    FUN_1401cd85c(lVar2,local_98,param_1 + 0xf0);
    FUN_1446ddc76(&local_a0,"JoinLanSession",1);
    FUN_1401cd85c(lVar2,local_a0,param_1 + 0x108);
    FUN_1446ddc76(&local_a8,"CycleLanSortCriteria",1);
    FUN_1401cd85c(lVar2,local_a8,param_1 + 0x110);
    FUN_1446ddc76(&local_b0,"SetLanSortCriteria",1);
    FUN_1401cd85c(lVar2,local_b0,param_1 + 0x118);
    FUN_1446ddc76(&local_b8,"OpenLoadCharacter",1);
    FUN_1401cd85c(lVar2,local_b8,param_1 + 0x128);
    FUN_1446ddc76(&local_c0,"SplitscreenTransferInput",1);
    FUN_1401cd85c(lVar2,local_c0,param_1 + 0xc0);
    FUN_1446ddc76(&local_c8,"PauseGame_Start",1);
    FUN_1401cd85c(lVar2,local_c8,param_1 + 0x180);
    FUN_1446ddc76(&local_d0,"CrossSaveRegistrationUpdated",1);
    FUN_1401cd85c(lVar2,local_d0,param_1 + 0x1d8);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_141237e7c(param_1);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466485a2 FUN_1466485a2 body=104 status=ok
// SIG undefined FUN_1466485a2(void)

ulonglong FUN_1466485a2(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  longlong in_RAX;
  byte bVar4;
  undefined8 unaff_RSI;
  undefined7 uVar5;
  
  if (param_2 != (longlong *)0x0) {
    in_RAX = FUN_144a5dd5e();
    piVar1 = (int *)(in_RAX + 0x38);
    if ((*piVar1 <= *(int *)(param_2[2] + 0x38)) &&
       (in_RAX = in_RAX + 0x30,
       *(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*piVar1 * 8) == in_RAX)) {
      uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
      bVar4 = 1;
      if ((*(byte *)(param_2 + 0x84) & 2) != 0) {
        cVar2 = (**(code **)(*param_2 + 0x6c8))(param_2);
        if (cVar2 != '\0') {
          bVar3 = FUN_140128af0(param_2);
          bVar3 = bVar3 ^ 1;
          goto LAB_1466485f6;
        }
      }
      bVar3 = 0;
      goto LAB_1466485f6;
    }
  }
  bVar3 = (byte)in_RAX;
  bVar4 = 0;
  uVar5 = 0;
LAB_1466485f6:
  return CONCAT71(uVar5,bVar4 & bVar3) & 0xffffffff;
}



// FUNCTION 14664860a FUN_14664860a body=79 status=ok
// SIG undefined FUN_14664860a(void)

void FUN_14664860a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(param_1 + -0x30);
  if (lVar1 != 0) {
    lVar1 = FUN_1400f6e0c(lVar1);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xb8) != 0)) {
      FUN_1458b9b6e(param_1 + -0x30,*(longlong *)(lVar1 + 0xb8) + 0x58);
      return;
    }
  }
  return;
}



// FUNCTION 14664865a FUN_14664865a body=135 status=ok
// SIG undefined FUN_14664865a(void)

void FUN_14664865a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1400d7050();
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && (*(longlong *)(lVar2 + 0x398) != 0)) {
      lVar3 = FUN_144a7b4ca();
      lVar2 = *(longlong *)(lVar2 + 0x398);
      if (((lVar2 != 0) && (lVar3 != 0)) &&
         ((lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0 &&
          ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)))))) {
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar2 + 0x394);
      }
    }
  }
  return;
}



// FUNCTION 1466486e2 FUN_1466486e2 body=1064 status=ok
// SIG undefined FUN_1466486e2(void)

void FUN_1466486e2(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = FUN_140495e96();
  lVar5 = FUN_1404960a8(uVar4);
  if (lVar5 != 0) {
    lVar1 = param_1 + -0x30;
    if (*(longlong *)(param_1 + 0x18) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9b8d10;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = FUN_14606094c;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_50,"TitleLogin",1);
      FUN_140391af6(lVar5,&local_38,local_50,&local_48);
      *(undefined8 *)(param_1 + 0x18) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x20) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9b8d10;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = &LAB_1458cfbfe;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_58,"TitleReset",1);
      FUN_140391af6(lVar5,&local_38,local_58,&local_48);
      *(undefined8 *)(param_1 + 0x20) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x28) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9b8d10;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = FUN_1412fd76a;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_60,"TitleMessage",1);
      FUN_140391af6(lVar5,&local_38,local_60,&local_48);
      *(undefined8 *)(param_1 + 0x28) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x30) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9b8d10;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = FUN_1458cfc08;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_68,"TitleScreenStatusChanged",1);
      FUN_140391af6(lVar5,&local_38,local_68,&local_48);
      *(undefined8 *)(param_1 + 0x30) = local_38;
      FUN_1449db362(&local_48);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146648b0c FUN_146648b0c body=271 status=ok
// SIG undefined FUN_146648b0c(void)

void FUN_146648b0c(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_140495e96();
  lVar2 = FUN_1404960a8(uVar1);
  if (lVar2 != 0) {
    FUN_1446ddc76(&local_30,"TitleLogin",1);
    FUN_1401cd85c(lVar2,local_30,param_1 + 0x18);
    FUN_1446ddc76(&local_38,"TitleReset",1);
    FUN_1401cd85c(lVar2,local_38,param_1 + 0x20);
    FUN_1446ddc76(&local_40,"TitleMessage",1);
    FUN_1401cd85c(lVar2,local_40,param_1 + 0x28);
    FUN_1446ddc76(&local_48,"TitleScreenStatusChanged",1);
    FUN_1401cd85c(lVar2,local_48,param_1 + 0x30);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146648c1c FUN_146648c1c body=253 status=ok
// SIG undefined FUN_146648c1c(void)

void FUN_146648c1c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_1400d7050();
  if (lVar3 == 0) goto LAB_146648ce0;
  lVar4 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) goto LAB_146648ce0;
  FUN_1449027d0(param_1 + -0x30,&local_38);
  lVar4 = *(longlong *)(local_38 + 0x380);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x6e0));
  *(int *)(lVar4 + 0x6d8) = *(int *)(lVar4 + 0x6d8) + 1;
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
  if (*(char *)(lVar3 + 0x23b8) == *(char *)(lVar4 + 0x78)) {
    iVar5 = 1;
    if (*(int *)(lVar4 + 0x7c) == 0) goto LAB_146648ccf;
  }
  else {
    iVar5 = *(int *)(lVar4 + 0x7c) + 1;
LAB_146648ccf:
    *(char *)(lVar4 + 0x78) = *(char *)(lVar3 + 0x23b8);
    *(int *)(lVar4 + 0x7c) = iVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x6e0));
LAB_146648ce0:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146648d1a FUN_146648d1a body=93 status=ok
// SIG undefined FUN_146648d1a(void)

void FUN_146648d1a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400d7050();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (*(longlong *)(param_1 + 0x18) != 0)) {
      FUN_14480f766(lVar1 + 0x2350);
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 146648d7e FUN_146648d7e body=89 status=ok
// SIG undefined FUN_146648d7e(void)

byte FUN_146648d7e(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  
  lVar2 = FUN_1400d7050();
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    piVar1 = (int *)(lVar3 + 0x38);
    if ((*piVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (lVar3 = lVar3 + 0x30,
       *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*piVar1 * 8) ==
       lVar3)) {
      lVar2 = FUN_141356c7a(param_1);
      lVar3 = 0;
      if (lVar2 != 0) {
        bVar5 = *(int *)(param_1 + 0x14) != 0;
        bVar4 = 1;
        goto LAB_146648dca;
      }
    }
  }
  bVar5 = (byte)lVar3;
  bVar4 = 0;
LAB_146648dca:
  return bVar5 & bVar4;
}



// FUNCTION 146648f46 FUN_146648f46 body=139 status=ok
// SIG undefined FUN_146648f46(void)

undefined8 FUN_146648f46(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = FUN_14143e882();
  if (((cVar1 != '\0') && (DAT_14c872bf2 == '\0')) && (cVar1 = FUN_140b3f358(), cVar1 == '\0')) {
    plVar2 = (longlong *)FUN_145923320();
    lVar4 = plVar2[0x22];
    if (lVar4 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar4 = plVar2[0x22];
      if (lVar4 == 0) {
        return 1;
      }
    }
    if (((param_2 == (longlong *)0x0) ||
        (lVar3 = (**(code **)(*param_2 + 0x180))(param_2), lVar3 == 0)) ||
       ((cVar1 = FUN_144a80e00(lVar3), cVar1 == '\0' || (*(char *)(lVar4 + 0x38) == '\x01')))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 146648fe2 FUN_146648fe2 body=254 status=ok
// SIG undefined FUN_146648fe2(void)

undefined8
FUN_146648fe2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b9250;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466490e2 FUN_1466490e2 body=254 status=ok
// SIG undefined FUN_1466490e2(void)

undefined8
FUN_1466490e2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9a7080;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b92c0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14127eb6a(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466491e2 FUN_1466491e2 body=254 status=ok
// SIG undefined FUN_1466491e2(void)

undefined8
FUN_1466491e2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b4332c0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b9640;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14572a21a(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466492e2 FUN_1466492e2 body=396 status=ok
// SIG undefined FUN_1466492e2(void)

void FUN_1466492e2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    plVar6 = (longlong *)FUN_1400d7050(param_1 + 0x30);
    if (plVar6 != (longlong *)0x0) {
      lVar7 = FUN_144a5dd5e();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30)) {
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x14d0))(plVar6);
        if (plVar6 != (longlong *)0x0) {
          plVar1 = (longlong *)(param_1 + 0x48);
          lVar7 = param_1 + 0x58;
          local_58 = 0x100000000;
          local_48 = 0xffffffff;
          uStack_40 = 0;
          uStack_50 = lVar7;
          if (*(int *)(param_1 + 0x70) == 0) {
            iVar8 = 0;
          }
          else {
            FUN_1449c0562(&local_58);
            iVar8 = *(int *)(param_1 + 0x70);
          }
          uStack_60 = CONCAT44(uStack_3c,uStack_40);
          local_68 = local_48;
          uVar4 = local_68;
          local_78 = (undefined4)local_58;
          uStack_74 = local_58._4_4_;
          uStack_70 = (undefined4)uStack_50;
          uStack_6c = uStack_50._4_4_;
          local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
          iVar5 = local_68._4_4_;
          local_80 = plVar1;
          if ((local_68._4_4_ != iVar8) || (local_68 = uVar4, uStack_50 != lVar7)) {
            do {
              local_68 = uVar4;
              lVar3 = *(longlong *)(*local_80 + (longlong)iVar5 * 0x18);
              if (lVar3 != 0) {
                lVar2 = *local_80 + (longlong)iVar5 * 0x18;
                (**(code **)(*plVar6 + 0x30))(plVar6,lVar3 + 0x90,*(undefined8 *)(lVar2 + 8));
                *(undefined8 *)(lVar2 + 8) = 0;
              }
              local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
              FUN_1449c0562(&local_78);
              iVar5 = local_68._4_4_;
              uVar4 = local_68;
            } while (local_80 != plVar1 ||
                     (CONCAT44(uStack_6c,uStack_70) != lVar7 || local_68._4_4_ != iVar8));
          }
          FUN_145cc7936(plVar1,0);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146649470 FUN_146649470 body=310 status=ok
// SIG undefined FUN_146649470(void)

void FUN_146649470(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_140495e96();
  lVar2 = FUN_1404960a8(uVar1);
  if (lVar2 != 0) {
    FUN_1446ddc76(&local_30,"FOakUIEvent_RefreshXp",1);
    FUN_1401cd85c(lVar2,local_30,param_1 + 0x68);
    FUN_1446ddc76(&local_38,"FOakUIEvent_VaultCards_Purchase",1);
    FUN_1401cd85c(lVar2,local_38,param_1 + 0x70);
    FUN_1446ddc76(&local_40,"FOakUIEvent_VaultCards_PurchaseInventory",1);
    FUN_1401cd85c(lVar2,local_40,param_1 + 0x80);
    FUN_1446ddc76(&local_48,"FOakUIEvent_VaultCards_PurchaseCosmetic",1);
    FUN_1401cd85c(lVar2,local_48,param_1 + 0x78);
    FUN_1446ddc76(&local_50,"FOakUIEvent_VaultCards_Activate",1);
    FUN_1401cd85c(lVar2,local_50,param_1 + 0x88);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466495a8 FUN_1466495a8 body=204 status=ok
// SIG undefined FUN_1466495a8(void)

void FUN_1466495a8(longlong param_1,undefined8 *param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_140495e96(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar1 = FUN_140cee904(lVar1);
    if (lVar1 != 0) {
      if (param_4 == '\0') {
        FUN_1410290ea(lVar1,param_2,param_3,0);
      }
      else {
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        local_40 = 0;
        uStack_38 = 0;
        FUN_1404e49fa(&local_58,param_3);
        local_68 = *param_2;
        local_60 = *(undefined4 *)(param_2 + 1);
        FUN_140ceeaa0(lVar1,&local_68,&local_58,0);
      }
    }
  }
  if (*(longlong *)(param_3 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146649676 FUN_146649676 body=93 status=ok
// SIG undefined FUN_146649676(void)

undefined8 FUN_146649676(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1400d7050(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (*(longlong *)(lVar1 + 0x3db8) != 0)) {
      uVar3 = FUN_14576020c(*(longlong *)(lVar1 + 0x3db8),param_2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1466496d4 FUN_1466496d4 body=50 status=ok
// SIG undefined FUN_1466496d4(void)

longlong FUN_1466496d4(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    uVar3 = FUN_14597e57e();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    lVar4 = 0;
    if (cVar2 != '\0') {
      lVar4 = lVar1;
    }
  }
  return lVar4;
}



// FUNCTION 146649706 FUN_146649706 body=170 status=ok
// SIG undefined FUN_146649706(void)

void FUN_146649706(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1408bb964(param_1 + 0x14);
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = FUN_140fb8258(lVar1);
      if (lVar1 != 0) {
        if (*(longlong *)(param_1 + 0x28) != 0) {
          FUN_14480f766(lVar1 + 0x50);
        }
        if (*(longlong *)(param_1 + 0x30) != 0) {
          FUN_14480f766(lVar1 + 0x80);
        }
        if (*(longlong *)(param_1 + 0x38) != 0) {
          FUN_14480f766(lVar1 + 0x38);
        }
        if (*(longlong *)(param_1 + 0x40) != 0) {
          FUN_14480f766(lVar1 + 0x68);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1466497b0 FUN_1466497b0 body=98 status=ok
// SIG undefined FUN_1466497b0(void)

void FUN_1466497b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400d7050();
  if (lVar1 == 0) {
    return;
  }
  lVar1 = *(longlong *)(lVar1 + 0x3d0);
  if (lVar1 != 0) {
    lVar2 = FUN_1402095ca();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_1466497d8;
  }
  lVar1 = 0;
LAB_1466497d8:
  FUN_145966090(param_1 + -0x30,lVar1);
  return;
}



// FUNCTION 146649812 FUN_146649812 body=145 status=ok
// SIG undefined FUN_146649812(void)

void FUN_146649812(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_1400d7050();
  if (lVar1 != 0) {
    FUN_141361000(&local_40);
    local_38 = 0;
    FUN_14485c47a(&local_38,param_1 + -0x30);
    local_30 = local_40;
    FUN_14113f0c0(&local_38);
    FUN_14053c012(lVar1 + 0x3b8,&local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466498a4 FUN_1466498a4 body=122 status=ok
// SIG undefined FUN_1466498a4(void)

void FUN_1466498a4(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1400d7050();
  if (lVar1 != 0) {
    FUN_141361000(&local_30);
    FUN_1409ca370(lVar1 + 0x3b8,param_1 + -0x30,local_30);
    FUN_144a7b126(lVar1 + 0x3b8,&local_21,1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146649920 FUN_146649920 body=297 status=ok
// SIG undefined FUN_146649920(void)

void FUN_146649920(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = param_1 + -0x30;
  lVar3 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(lVar1);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar3 = FUN_1400d6ce6();
    if (lVar3 != 0) {
      FUN_140457ffc(lVar3 + 400,lVar1);
      FUN_140457ffc(lVar3 + 0x160,lVar1);
      FUN_140457ffc(lVar3 + 0x178,lVar1);
    }
  }
  param_1 = param_1 + 0x18;
  cVar2 = FUN_144729dda(param_1);
  if (cVar2 == '\0') {
    return;
  }
  lVar3 = FUN_14479d2ce(param_1);
  FUN_140457ffc(lVar3 + 0x2aa8,lVar1);
  lVar3 = FUN_14479d2ce(param_1);
  FUN_140457ffc(lVar3 + 0x2a18,lVar1);
  lVar3 = FUN_14479d2ce(param_1);
  FUN_140457ffc(lVar3 + 0x2a30,lVar1);
  lVar3 = FUN_14479d2ce(param_1);
  FUN_140457ffc(lVar3 + 0x2a48,lVar1);
  lVar3 = FUN_14479d2ce(param_1);
  FUN_140457ffc(&DAT_00002a60 + lVar3,lVar1);
  lVar3 = FUN_14479d2ce(param_1);
  FUN_140457ffc(&DAT_00002a78 + lVar3,lVar1);
  lVar3 = FUN_14479d2ce(param_1);
  FUN_140457ffc(lVar3 + 0x2a90,lVar1);
  return;
}



// FUNCTION 146649a4a FUN_146649a4a body=210 status=ok
// SIG undefined FUN_146649a4a(void)

void FUN_146649a4a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + -0x30;
  lVar1 = FUN_14047210e(lVar3);
  if (lVar1 != 0) {
    FUN_1412a866a(lVar3,lVar1);
  }
  lVar1 = *(longlong *)(param_1 + -0x10);
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1458d757c(lVar1 + 0x3d4,lVar3);
      if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_14480f766(lVar1 + 0x6170);
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      if (*(longlong *)(param_1 + 0x98) == 0) {
        lVar3 = (**(code **)(*(longlong *)(lVar1 + 0x3c20) + 0x18))(lVar1 + 0x3c20);
        if ((lVar3 != 0) && (*(longlong *)(param_1 + 0x98) != 0)) {
          FUN_14480f766(lVar3);
        }
        *(undefined8 *)(param_1 + 0x98) = 0;
      }
    }
  }
  FUN_1410843e4(param_1);
  return;
}



// FUNCTION 146649b1c FUN_146649b1c body=102 status=ok
// SIG undefined FUN_146649b1c(void)

undefined8 FUN_146649b1c(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(local_28,&DAT_149e62dd2);
  FUN_140775538(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146649b84 FUN_146649b84 body=29 status=ok
// SIG undefined FUN_146649b84(void)

undefined8 FUN_146649b84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146649ba2 FUN_146649ba2 body=38 status=ok
// SIG undefined FUN_146649ba2(void)

undefined8 FUN_146649ba2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"TitleLoginStarted",1);
  return param_2;
}



// FUNCTION 146649bc8 FUN_146649bc8 body=24 status=ok
// SIG undefined FUN_146649bc8(void)

bool FUN_146649bc8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146649be0 FUN_146649be0 body=24 status=ok
// SIG undefined FUN_146649be0(void)

bool FUN_146649be0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146649bf8 FUN_146649bf8 body=254 status=ok
// SIG undefined FUN_146649bf8(void)

undefined8
FUN_146649bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3f76f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b6e30;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14104d758(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146649cf8 FUN_146649cf8 body=254 status=ok
// SIG undefined FUN_146649cf8(void)

undefined8
FUN_146649cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3f7900;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b6ea0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140e2bd22(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146649df8 FUN_146649df8 body=24 status=ok
// SIG undefined FUN_146649df8(void)

bool FUN_146649df8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146649e10 FUN_146649e10 body=26 status=ok
// SIG undefined FUN_146649e10(void)

bool FUN_146649e10(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146649e2a FUN_146649e2a body=24 status=ok
// SIG undefined FUN_146649e2a(void)

bool FUN_146649e2a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146649e42 FUN_146649e42 body=29 status=ok
// SIG undefined FUN_146649e42(void)

bool FUN_146649e42(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146649e60 FUN_146649e60 body=26 status=ok
// SIG undefined FUN_146649e60(void)

bool FUN_146649e60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146649e7a FUN_146649e7a body=24 status=ok
// SIG undefined FUN_146649e7a(void)

bool FUN_146649e7a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146649e92 FUN_146649e92 body=29 status=ok
// SIG undefined FUN_146649e92(void)

bool FUN_146649e92(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146649eb0 FUN_146649eb0 body=26 status=ok
// SIG undefined FUN_146649eb0(void)

bool FUN_146649eb0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146649eca FUN_146649eca body=24 status=ok
// SIG undefined FUN_146649eca(void)

bool FUN_146649eca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146649ee2 FUN_146649ee2 body=29 status=ok
// SIG undefined FUN_146649ee2(void)

bool FUN_146649ee2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146649f00 FUN_146649f00 body=24 status=ok
// SIG undefined FUN_146649f00(void)

bool FUN_146649f00(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146649f18 FUN_146649f18 body=29 status=ok
// SIG undefined FUN_146649f18(void)

bool FUN_146649f18(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146649f36 FUN_146649f36 body=26 status=ok
// SIG undefined FUN_146649f36(void)

bool FUN_146649f36(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146649f50 FUN_146649f50 body=24 status=ok
// SIG undefined FUN_146649f50(void)

bool FUN_146649f50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146649f68 FUN_146649f68 body=29 status=ok
// SIG undefined FUN_146649f68(void)

bool FUN_146649f68(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146649f86 FUN_146649f86 body=26 status=ok
// SIG undefined FUN_146649f86(void)

bool FUN_146649f86(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146649fa0 FUN_146649fa0 body=24 status=ok
// SIG undefined FUN_146649fa0(void)

bool FUN_146649fa0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146649fb8 FUN_146649fb8 body=24 status=ok
// SIG undefined FUN_146649fb8(void)

bool FUN_146649fb8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146649fd0 FUN_146649fd0 body=24 status=ok
// SIG undefined FUN_146649fd0(void)

bool FUN_146649fd0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146649ff2 FUN_146649ff2 body=101 status=ok
// SIG undefined FUN_146649ff2(void)

void FUN_146649ff2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b76a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14664a058 FUN_14664a058 body=24 status=ok
// SIG undefined FUN_14664a058(void)

bool FUN_14664a058(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664a070 FUN_14664a070 body=24 status=ok
// SIG undefined FUN_14664a070(void)

bool FUN_14664a070(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664a088 FUN_14664a088 body=101 status=ok
// SIG undefined FUN_14664a088(void)

void FUN_14664a088(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9ba770;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b78d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14664a0ee FUN_14664a0ee body=101 status=ok
// SIG undefined FUN_14664a0ee(void)

void FUN_14664a0ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b421670;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b7940;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14664a154 FUN_14664a154 body=147 status=ok
// SIG undefined FUN_14664a154(void)

void FUN_14664a154(longlong param_1,int param_2)

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



// FUNCTION 14664a1e8 FUN_14664a1e8 body=79 status=ok
// SIG undefined FUN_14664a1e8(void)

undefined8 FUN_14664a1e8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 2) != 0) {
    iVar1 = *(int *)(param_1 + 1);
    if ((iVar1 == *(int *)(param_2 + 1)) &&
       ((iVar1 == 0 ||
        (iVar1 = memcmp((void *)*param_1,(void *)*param_2,(longlong)iVar1 << 2), iVar1 == 0)))) {
      return 0;
    }
  }
  FUN_14054c6c4(param_1,param_2);
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
  return 1;
}



// FUNCTION 14664a238 FUN_14664a238 body=147 status=ok
// SIG undefined FUN_14664a238(void)

void FUN_14664a238(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14664a2cc FUN_14664a2cc body=132 status=ok
// SIG undefined FUN_14664a2cc(void)

void FUN_14664a2cc(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14664a350 FUN_14664a350 body=29 status=ok
// SIG undefined FUN_14664a350(void)

bool FUN_14664a350(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14664a36e FUN_14664a36e body=26 status=ok
// SIG undefined FUN_14664a36e(void)

bool FUN_14664a36e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664a388 FUN_14664a388 body=26 status=ok
// SIG undefined FUN_14664a388(void)

bool FUN_14664a388(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664a3a2 FUN_14664a3a2 body=24 status=ok
// SIG undefined FUN_14664a3a2(void)

bool FUN_14664a3a2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664a3ba FUN_14664a3ba body=24 status=ok
// SIG undefined FUN_14664a3ba(void)

bool FUN_14664a3ba(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664a3d2 FUN_14664a3d2 body=29 status=ok
// SIG undefined FUN_14664a3d2(void)

bool FUN_14664a3d2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14664a3f0 FUN_14664a3f0 body=24 status=ok
// SIG undefined FUN_14664a3f0(void)

bool FUN_14664a3f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664a408 FUN_14664a408 body=29 status=ok
// SIG undefined FUN_14664a408(void)

bool FUN_14664a408(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14664a426 FUN_14664a426 body=29 status=ok
// SIG undefined FUN_14664a426(void)

bool FUN_14664a426(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14664a444 FUN_14664a444 body=26 status=ok
// SIG undefined FUN_14664a444(void)

bool FUN_14664a444(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664a45e FUN_14664a45e body=24 status=ok
// SIG undefined FUN_14664a45e(void)

bool FUN_14664a45e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664a476 FUN_14664a476 body=26 status=ok
// SIG undefined FUN_14664a476(void)

bool FUN_14664a476(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664a490 FUN_14664a490 body=24 status=ok
// SIG undefined FUN_14664a490(void)

bool FUN_14664a490(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664a4a8 FUN_14664a4a8 body=24 status=ok
// SIG undefined FUN_14664a4a8(void)

bool FUN_14664a4a8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664a4c0 FUN_14664a4c0 body=29 status=ok
// SIG undefined FUN_14664a4c0(void)

bool FUN_14664a4c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14664a4de FUN_14664a4de body=26 status=ok
// SIG undefined FUN_14664a4de(void)

bool FUN_14664a4de(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664a4f8 FUN_14664a4f8 body=24 status=ok
// SIG undefined FUN_14664a4f8(void)

bool FUN_14664a4f8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664a510 FUN_14664a510 body=158 status=ok
// SIG undefined FUN_14664a510(void)

bool FUN_14664a510(longlong param_1,undefined8 param_2)

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



// FUNCTION 14664a5b0 FUN_14664a5b0 body=26 status=ok
// SIG undefined FUN_14664a5b0(void)

bool FUN_14664a5b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664a5ca FUN_14664a5ca body=24 status=ok
// SIG undefined FUN_14664a5ca(void)

bool FUN_14664a5ca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664a5e2 FUN_14664a5e2 body=26 status=ok
// SIG undefined FUN_14664a5e2(void)

bool FUN_14664a5e2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664a5fc FUN_14664a5fc body=24 status=ok
// SIG undefined FUN_14664a5fc(void)

bool FUN_14664a5fc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664a614 FUN_14664a614 body=24 status=ok
// SIG undefined FUN_14664a614(void)

bool FUN_14664a614(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664a62c FUN_14664a62c body=29 status=ok
// SIG undefined FUN_14664a62c(void)

bool FUN_14664a62c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14664a64a FUN_14664a64a body=26 status=ok
// SIG undefined FUN_14664a64a(void)

bool FUN_14664a64a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664a664 FUN_14664a664 body=24 status=ok
// SIG undefined FUN_14664a664(void)

bool FUN_14664a664(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664a67c FUN_14664a67c body=227 status=ok
// SIG undefined FUN_14664a67c(void)

LPCRITICAL_SECTION FUN_14664a67c(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 *param_3)

{
  DWORD DVar1;
  undefined8 uVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  longlong lVar4;
  _LIST_ENTRY *p_Var5;
  
  DVar1 = *(DWORD *)(param_3 + 1);
  uVar2 = *param_3;
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var3 = param_1[1].DebugInfo;
  *(undefined ***)p_Var3 = &PTR_LAB_14a3cb240;
  LOCK();
  UNLOCK();
  p_Var5 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar4 = DAT_14c758608 + 1;
  if (p_Var5 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var5 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  (p_Var3->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var3 = &PTR_FUN_14b9b8380;
  (p_Var3->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  FUN_14485c47a(&(p_Var3->ProcessLocksList).Blink,param_2);
  p_Var3->Flags = DVar1;
  p_Var3->EntryCount = (int)uVar2;
  p_Var3->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 14664a760 FUN_14664a760 body=29 status=ok
// SIG undefined FUN_14664a760(void)

bool FUN_14664a760(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14664a77e FUN_14664a77e body=26 status=ok
// SIG undefined FUN_14664a77e(void)

bool FUN_14664a77e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664a798 FUN_14664a798 body=24 status=ok
// SIG undefined FUN_14664a798(void)

bool FUN_14664a798(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664a7b0 FUN_14664a7b0 body=26 status=ok
// SIG undefined FUN_14664a7b0(void)

bool FUN_14664a7b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664a7ca FUN_14664a7ca body=24 status=ok
// SIG undefined FUN_14664a7ca(void)

bool FUN_14664a7ca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664a7e2 FUN_14664a7e2 body=29 status=ok
// SIG undefined FUN_14664a7e2(void)

bool FUN_14664a7e2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14664a800 FUN_14664a800 body=26 status=ok
// SIG undefined FUN_14664a800(void)

bool FUN_14664a800(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664a81a FUN_14664a81a body=24 status=ok
// SIG undefined FUN_14664a81a(void)

bool FUN_14664a81a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664a832 FUN_14664a832 body=24 status=ok
// SIG undefined FUN_14664a832(void)

bool FUN_14664a832(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664a84a FUN_14664a84a body=26 status=ok
// SIG undefined FUN_14664a84a(void)

bool FUN_14664a84a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664a864 FUN_14664a864 body=24 status=ok
// SIG undefined FUN_14664a864(void)

bool FUN_14664a864(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664a87c FUN_14664a87c body=101 status=ok
// SIG undefined FUN_14664a87c(void)

void FUN_14664a87c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98d0c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b8690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14664a8e2 FUN_14664a8e2 body=29 status=ok
// SIG undefined FUN_14664a8e2(void)

bool FUN_14664a8e2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14664a900 FUN_14664a900 body=29 status=ok
// SIG undefined FUN_14664a900(void)

bool FUN_14664a900(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14664a91e FUN_14664a91e body=29 status=ok
// SIG undefined FUN_14664a91e(void)

bool FUN_14664a91e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14664a93c FUN_14664a93c body=24 status=ok
// SIG undefined FUN_14664a93c(void)

bool FUN_14664a93c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664a954 FUN_14664a954 body=29 status=ok
// SIG undefined FUN_14664a954(void)

bool FUN_14664a954(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14664a972 FUN_14664a972 body=24 status=ok
// SIG undefined FUN_14664a972(void)

bool FUN_14664a972(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664a98a FUN_14664a98a body=29 status=ok
// SIG undefined FUN_14664a98a(void)

bool FUN_14664a98a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14664a9a8 FUN_14664a9a8 body=26 status=ok
// SIG undefined FUN_14664a9a8(void)

bool FUN_14664a9a8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664a9c2 FUN_14664a9c2 body=24 status=ok
// SIG undefined FUN_14664a9c2(void)

bool FUN_14664a9c2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664a9da FUN_14664a9da body=29 status=ok
// SIG undefined FUN_14664a9da(void)

bool FUN_14664a9da(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14664a9f8 FUN_14664a9f8 body=24 status=ok
// SIG undefined FUN_14664a9f8(void)

bool FUN_14664a9f8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664aa10 FUN_14664aa10 body=24 status=ok
// SIG undefined FUN_14664aa10(void)

bool FUN_14664aa10(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664aa28 FUN_14664aa28 body=29 status=ok
// SIG undefined FUN_14664aa28(void)

bool FUN_14664aa28(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14664aa46 FUN_14664aa46 body=29 status=ok
// SIG undefined FUN_14664aa46(void)

bool FUN_14664aa46(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14664aa64 FUN_14664aa64 body=26 status=ok
// SIG undefined FUN_14664aa64(void)

bool FUN_14664aa64(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664aa7e FUN_14664aa7e body=29 status=ok
// SIG undefined FUN_14664aa7e(void)

bool FUN_14664aa7e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14664aa9c FUN_14664aa9c body=26 status=ok
// SIG undefined FUN_14664aa9c(void)

bool FUN_14664aa9c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664aab6 FUN_14664aab6 body=24 status=ok
// SIG undefined FUN_14664aab6(void)

bool FUN_14664aab6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664aace FUN_14664aace body=95 status=ok
// SIG undefined FUN_14664aace(void)

void FUN_14664aace(longlong param_1,uint param_2)

{
  int extraout_var;
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_144a3809e((ulonglong)param_2 << 8,8);
    iVar1 = 0x7fffffff;
    if ((int)param_2 <= extraout_var) {
      iVar1 = extraout_var;
    }
  }
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x100,8);
  }
  return;
}



// FUNCTION 14664ab2e FUN_14664ab2e body=132 status=ok
// SIG undefined FUN_14664ab2e(void)

void FUN_14664ab2e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int extraout_var;
  longlong lVar3;
  int iVar4;
  
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
      lVar3 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    FUN_144a3809e(lVar3 << 8,8);
    iVar4 = 0x7fffffff;
    if ((int)uVar1 <= extraout_var) {
      iVar4 = extraout_var;
    }
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,param_2,iVar4,0x100,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14664abc6 FUN_14664abc6 body=101 status=ok
// SIG undefined FUN_14664abc6(void)

void FUN_14664abc6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9b9800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14664ac2c FUN_14664ac2c body=24 status=ok
// SIG undefined FUN_14664ac2c(void)

bool FUN_14664ac2c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664ac44 FUN_14664ac44 body=26 status=ok
// SIG undefined FUN_14664ac44(void)

bool FUN_14664ac44(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664ac5e FUN_14664ac5e body=24 status=ok
// SIG undefined FUN_14664ac5e(void)

bool FUN_14664ac5e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664ac76 FUN_14664ac76 body=24 status=ok
// SIG undefined FUN_14664ac76(void)

bool FUN_14664ac76(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664ac8e FUN_14664ac8e body=24 status=ok
// SIG undefined FUN_14664ac8e(void)

bool FUN_14664ac8e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664aca6 FUN_14664aca6 body=24 status=ok
// SIG undefined FUN_14664aca6(void)

bool FUN_14664aca6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664acbe FUN_14664acbe body=24 status=ok
// SIG undefined FUN_14664acbe(void)

bool FUN_14664acbe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664acd6 FUN_14664acd6 body=101 status=ok
// SIG undefined FUN_14664acd6(void)

void FUN_14664acd6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9b9d40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14664ad3c FUN_14664ad3c body=24 status=ok
// SIG undefined FUN_14664ad3c(void)

bool FUN_14664ad3c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664ad54 FUN_14664ad54 body=26 status=ok
// SIG undefined FUN_14664ad54(void)

bool FUN_14664ad54(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664ad6e FUN_14664ad6e body=24 status=ok
// SIG undefined FUN_14664ad6e(void)

bool FUN_14664ad6e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664ad86 FUN_14664ad86 body=26 status=ok
// SIG undefined FUN_14664ad86(void)

bool FUN_14664ad86(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664ada0 FUN_14664ada0 body=24 status=ok
// SIG undefined FUN_14664ada0(void)

bool FUN_14664ada0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664adb8 FUN_14664adb8 body=26 status=ok
// SIG undefined FUN_14664adb8(void)

bool FUN_14664adb8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664add2 FUN_14664add2 body=26 status=ok
// SIG undefined FUN_14664add2(void)

bool FUN_14664add2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664adec FUN_14664adec body=26 status=ok
// SIG undefined FUN_14664adec(void)

bool FUN_14664adec(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664ae10 FUN_14664ae10 body=26 status=ok
// SIG undefined FUN_14664ae10(void)

bool FUN_14664ae10(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664ae2a FUN_14664ae2a body=24 status=ok
// SIG undefined FUN_14664ae2a(void)

bool FUN_14664ae2a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664ae42 FUN_14664ae42 body=26 status=ok
// SIG undefined FUN_14664ae42(void)

bool FUN_14664ae42(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14664ae5c FUN_14664ae5c body=24 status=ok
// SIG undefined FUN_14664ae5c(void)

bool FUN_14664ae5c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664ae74 FUN_14664ae74 body=159 status=ok
// SIG undefined FUN_14664ae74(void)

void FUN_14664ae74(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_14480f766(&DAT_14cbd0b78);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_14480f766(&DAT_14cbd0a38);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_14480f766(&DAT_14cbd0a50);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14480f766(&DAT_14cbd0a20);
  }
  lVar1 = FUN_140495e96(param_1);
  if (lVar1 != 0) {
    lVar1 = FUN_1403ca91c(lVar1);
    if (lVar1 != 0) {
      FUN_140457ffc(lVar1 + 0x78,param_1 + -0x30);
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 14664af14 FUN_14664af14 body=224 status=ok
// SIG undefined FUN_14664af14(void)

void FUN_14664af14(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14017001e();
  uVar1 = FUN_140495e96(param_1);
  lVar2 = FUN_1404960a8(uVar1);
  if (lVar2 != 0) {
    FUN_1446ddc76(&local_30,"FOakUIEvent_Skills_MenuActivate",1);
    FUN_1401cd85c(lVar2,local_30,param_1 + 0x18);
    FUN_1446ddc76(&local_38,"FOakUIEvent_Specializations_MenuActivate",1);
    FUN_1401cd85c(lVar2,local_38,param_1 + 0x20);
    FUN_1446ddc76(&local_40,"FOakUIEvent_RefreshXp",1);
    FUN_1401cd85c(lVar2,local_40,param_1 + 0x28);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14664aff6 FUN_14664aff6 body=76 status=ok
// SIG undefined FUN_14664aff6(void)

undefined8 FUN_14664aff6(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_145b26eb6(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00014664b037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14664b042 FUN_14664b042 body=22 status=ok
// SIG undefined FUN_14664b042(void)

ulonglong FUN_14664b042(uint *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  plVar3 = DAT_14cbd8f00;
  if (DAT_14cbd8f00 == (longlong *)0x0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*DAT_14cbd8f00 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbd8f00 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)DAT_14cbd8f00 + 0x1fc) < (int)DAT_14cbd8f00[0x3a])) goto LAB_144815de0;
LAB_144815f6c:
    iVar6 = (int)plVar3[0x59];
    uVar14 = *param_1;
    if ((longlong)iVar6 == -1) {
      if (((uVar14 != 0) && (param_1[1] != 0)) && (uVar14 != DAT_14c948000)) {
        puVar7 = &DAT_14c948028;
        goto LAB_144815fa4;
      }
LAB_1448160f1:
      puVar7 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      uVar14 = (uint)DAT_14c948618;
    }
    else {
      if (((uVar14 == 0) || (uVar5 = param_1[1], uVar5 == 0)) || (uVar14 == DAT_14c948000))
      goto LAB_1448160f1;
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < (int)uVar5) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (uVar5 == 1 && 0 < iVar6) {
        puVar8 = (uint *)&DAT_14c948618;
        if (*(int *)((longlong)plVar3 + 0x2cc) == 1) {
          puVar8 = puVar10;
        }
        uVar14 = *puVar8;
        puVar7 = (ulonglong *)(puVar8 + 1);
      }
      else {
        if ((int)uVar5 <= iVar6) goto LAB_1448160f1;
        puVar7 = (ulonglong *)(puVar10 + (longlong)iVar6 * 3 + 1);
        uVar14 = puVar10[(longlong)iVar6 * 3];
      }
    }
LAB_144815fa4:
    uVar2 = *puVar7;
    uVar15 = uVar2 >> 0x20;
    uVar5 = uVar14;
    if (uVar15 != 0) {
      uVar5 = FUN_144a78877(uVar14,uVar15);
    }
    if ((int)plVar3[0x50] != *(int *)((longlong)plVar3 + 0x2ac)) {
      plVar11 = plVar3 + 0x56;
      if ((longlong *)plVar3[0x57] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x57];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x58] - 1U & uVar5) * 4);
      if (iVar6 != -1) {
        plVar11 = plVar3 + 0x4f;
        lVar9 = *plVar11;
        uVar15 = 0;
LAB_144815ffc:
        lVar18 = (longlong)iVar6 * 0x20;
        if ((*(uint *)(lVar9 + lVar18) != uVar14) ||
           (lVar1 = lVar9 + lVar18, *(int *)(lVar1 + 8) != (int)(uVar2 >> 0x20)))
        goto LAB_144816008;
        uVar15 = 0;
        if ((lVar1 != 0) && ((longlong *)(lVar1 + 0x10) != (longlong *)0x0)) {
          lVar9 = *(longlong *)(lVar1 + 0x10);
          if (lVar9 != 0) {
            lVar18 = *(longlong *)(lVar9 + 0x60);
            if (lVar18 != 0) {
              do {
                FUN_144a62e5c(&uStack_40,lVar18 + 0x18,(int)plVar3[0x59],
                              *(undefined4 *)((longlong)plVar3 + 0x2cc));
                if (iStack_38 != 0) {
                  FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
                }
                iVar6 = FUN_144b0847a(plVar11);
                if (iVar6 == -1) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = (longlong)iVar6 * 0x20 + *plVar11;
                }
                plVar12 = (longlong *)(lVar9 + 0x10);
                if (lVar9 == 0) {
                  plVar12 = (longlong *)0x0;
                }
                lVar9 = *plVar12;
                lVar18 = *(longlong *)(lVar9 + 0x60);
              } while (lVar18 != 0);
            }
            uVar15 = *(ulonglong *)(lVar9 + 0x30);
            uStack_40 = uVar15;
            if (uVar15 != 0) goto LAB_144815ea3;
            FUN_140e43bf0(plVar3,&uStack_40,lVar9);
            uVar15 = uStack_40;
            if (uStack_40 != 0) {
              *(ulonglong *)(lVar9 + 0x30) = uStack_40;
              if (lVar9 != 0) {
                FUN_1407d81de(uStack_40 + 8,lVar9);
              }
              goto LAB_144815ea3;
            }
          }
          goto LAB_144816103;
        }
        goto LAB_144815ea3;
      }
    }
  }
  else {
    cVar4 = (**(code **)(*DAT_14cbd8f00 + 0x300))(DAT_14cbd8f00);
    if (cVar4 == '\0') goto LAB_144815f6c;
LAB_144815de0:
    puVar10 = (uint *)&DAT_14c948618;
    if (((*param_1 != 0) && (0 < (int)param_1[1])) && (*param_1 != DAT_14c948000)) {
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < param_1[1]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
    }
    uVar14 = *puVar10;
    uVar5 = puVar10[2];
    uVar13 = uVar14;
    if (uVar5 != 0) {
      uVar13 = uVar5 >> 0xd ^ uVar14 - uVar5;
      uVar16 = uVar13 << 8 ^ (-0x61c88647 - uVar5) - uVar13;
      uVar17 = uVar16 >> 0xd ^ (uVar5 - uVar13) - uVar16;
      uVar13 = uVar17 >> 0xc ^ (uVar13 - uVar16) - uVar17;
      uVar19 = uVar13 << 0x10 ^ (uVar16 - uVar17) - uVar13;
      uVar16 = uVar19 >> 5 ^ (uVar17 - uVar13) - uVar19;
      uVar17 = uVar16 >> 3 ^ (uVar13 - uVar19) - uVar16;
      uVar13 = uVar17 << 10 ^ (uVar19 - uVar16) - uVar17;
      uVar13 = uVar13 >> 0xf ^ uVar16 - (uVar17 + uVar13);
    }
    if ((int)plVar3[0x3a] != *(int *)((longlong)plVar3 + 0x1fc)) {
      plVar11 = plVar3 + 0x40;
      if ((longlong *)plVar3[0x41] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x41];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x42] - 1U & uVar13) * 4);
      if (iVar6 != -1) {
        lVar9 = plVar3[0x39];
        uVar15 = 0;
        do {
          lVar18 = (longlong)iVar6 * 0x20;
          if ((*(uint *)(lVar9 + lVar18) == uVar14) &&
             (lVar1 = lVar9 + lVar18, *(uint *)(lVar1 + 8) == uVar5)) {
            uVar15 = 0;
            if ((lVar1 != 0) && ((ulonglong *)(lVar1 + 0x10) != (ulonglong *)0x0)) {
              uVar15 = *(ulonglong *)(lVar1 + 0x10);
            }
            break;
          }
          iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
        } while (iVar6 != -1);
        goto LAB_144815ea3;
      }
    }
  }
LAB_144816103:
  uVar15 = 0;
LAB_144815ea3:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144816008:
  iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
  if (iVar6 == -1) goto LAB_144815ea3;
  goto LAB_144815ffc;
}



// FUNCTION 14664b058 FUN_14664b058 body=182 status=ok
// SIG undefined FUN_14664b058(void)

void FUN_14664b058(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 0x68) = 0;
  FUN_14020fad6(param_1,&DAT_149dfb77a);
  FUN_14020fad6(param_1 + 0x10,&DAT_149dfb77a);
  FUN_14020fad6(param_1 + 0x30,&DAT_149dfb77a);
  FUN_1400b22c2(&local_28,"item_card_compare_none");
  if ((longlong *)(param_1 + 0x40) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x40) = local_28;
    *(undefined4 *)(param_1 + 0x48) = local_20;
    *(undefined4 *)(param_1 + 0x4c) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14664b110 FUN_14664b110 body=177 status=ok
// SIG undefined FUN_14664b110(void)

undefined8 * FUN_14664b110(undefined8 *param_1)

{
  FUN_1408f3f9e();
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xbf800000;
  *param_1 = &PTR_FUN_14b8b7dc0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 1;
  *(undefined4 *)(param_1 + 0x1b) = 1;
  FUN_144a787a6(param_1 + 0x1c,&DAT_14cbd9108);
  FUN_144a787a6(param_1 + 0x1e,&DAT_14cbd9108);
  FUN_144a787a6(param_1 + 0x20,&DAT_14cbd9108);
  return param_1;
}



// FUNCTION 14664b1c2 FUN_14664b1c2 body=24 status=ok
// SIG undefined FUN_14664b1c2(void)

bool FUN_14664b1c2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664b1da FUN_14664b1da body=24 status=ok
// SIG undefined FUN_14664b1da(void)

bool FUN_14664b1da(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664b1f2 FUN_14664b1f2 body=24 status=ok
// SIG undefined FUN_14664b1f2(void)

bool FUN_14664b1f2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14664b20a FUN_14664b20a body=101 status=ok
// SIG undefined FUN_14664b20a(void)

void FUN_14664b20a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9ba770;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9bcd70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14664b270 FUN_14664b270 body=101 status=ok
// SIG undefined FUN_14664b270(void)

void FUN_14664b270(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b421670;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9bcde0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14664b2d6 FUN_14664b2d6 body=59 status=ok
// SIG undefined FUN_14664b2d6(void)

void FUN_14664b2d6(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    cVar1 = FUN_140426394(param_1 + 0x28,param_1 + 0x38);
    if (cVar1 != '\0') {
      return;
    }
  }
  FUN_1403ca8ec(param_1 + 0x28,param_1 + 0x38);
  return;
}



// FUNCTION 14664b320 FUN_14664b320 body=77 status=ok
// SIG undefined FUN_14664b320(void)

void FUN_14664b320(void)

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
      FUN_1410ef130(lVar1 + 0xe50);
      return;
    }
  }
  return;
}



// FUNCTION 14664b36e FUN_14664b36e body=260 status=ok
// SIG undefined FUN_14664b36e(void)

void FUN_14664b36e(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined ***pppuVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = FUN_14126888e();
  if (uVar4 != 0) {
    uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    local_68[0] = (undefined1 *)CONCAT44(local_68[0]._4_4_,uVar3 >> 0x10 ^ uVar3);
    FUN_1448d5e3c(&local_78,local_68);
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14b9c03a0;
    local_68[0] = &LAB_1442bb3a0;
    local_40 = param_1;
    FUN_14126881c(*(undefined8 *)(local_78 + 0xe0),local_68);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar5 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar5 = &local_48;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14664b474 FUN_14664b474 body=66 status=ok
// SIG undefined FUN_14664b474(void)

undefined8 * FUN_14664b474(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x298);
  memset(_Dst,0,0x298);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9be7e0;
  return _Dst;
}



// FUNCTION 14664b4b6 FUN_14664b4b6 body=87 status=ok
// SIG undefined FUN_14664b4b6(void)

undefined8 * FUN_14664b4b6(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a8);
  memset(_Dst,0,0x2a8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9be8e0;
  _Dst[0x53] = 5;
  *(undefined4 *)(_Dst + 0x54) = 0;
  return _Dst;
}



// FUNCTION 14664b50e FUN_14664b50e body=87 status=ok
// SIG undefined FUN_14664b50e(void)

undefined8 * FUN_14664b50e(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a8);
  memset(_Dst,0,0x2a8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9be8e0;
  _Dst[0x53] = 5;
  *(undefined4 *)(_Dst + 0x54) = 0;
  return _Dst;
}



// FUNCTION 14664b566 FUN_14664b566 body=94 status=ok
// SIG undefined FUN_14664b566(void)

undefined8 * FUN_14664b566(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2c0);
  memset(_Dst,0,0x2c0);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9be9e0;
  _Dst[0x53] = 0;
  _Dst[0x54] = 0;
  _Dst[0x55] = 0;
  _Dst[0x56] = 0;
  *(undefined8 *)((longlong)_Dst + 0x2b5) = 0;
  return _Dst;
}



// FUNCTION 14664b5c4 FUN_14664b5c4 body=94 status=ok
// SIG undefined FUN_14664b5c4(void)

undefined8 * FUN_14664b5c4(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2c0);
  memset(_Dst,0,0x2c0);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9be9e0;
  _Dst[0x53] = 0;
  _Dst[0x54] = 0;
  _Dst[0x55] = 0;
  _Dst[0x56] = 0;
  *(undefined8 *)((longlong)_Dst + 0x2b5) = 0;
  return _Dst;
}



// FUNCTION 14664b62e FUN_14664b62e body=66 status=ok
// SIG undefined FUN_14664b62e(void)

undefined8 * FUN_14664b62e(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x298);
  memset(_Dst,0,0x298);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9beae0;
  return _Dst;
}



// FUNCTION 14664b670 FUN_14664b670 body=66 status=ok
// SIG undefined FUN_14664b670(void)

undefined8 * FUN_14664b670(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x298);
  memset(_Dst,0,0x298);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9beae0;
  return _Dst;
}



// FUNCTION 14664b6b2 FUN_14664b6b2 body=136 status=ok
// SIG undefined FUN_14664b6b2(void)

undefined8 * FUN_14664b6b2(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2c8);
  memset(_Dst,0,0x2c8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bebe0;
  *(undefined1 *)(_Dst + 0x53) = 0;
  *(undefined1 *)((longlong)_Dst + 0x29c) = 1;
  _Dst[0x54] = 0x3f80000000000000;
  _Dst[0x55] = 0xffffffffffffffff;
  *(undefined4 *)(_Dst + 0x56) = 0xffffffff;
  *(undefined4 *)(_Dst + 0x58) = 0;
  *(undefined1 *)((longlong)_Dst + 700) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2b4) = 0;
  return _Dst;
}



// FUNCTION 14664b73a FUN_14664b73a body=136 status=ok
// SIG undefined FUN_14664b73a(void)

undefined8 * FUN_14664b73a(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2c8);
  memset(_Dst,0,0x2c8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bebe0;
  *(undefined1 *)(_Dst + 0x53) = 0;
  *(undefined1 *)((longlong)_Dst + 0x29c) = 1;
  _Dst[0x54] = 0x3f80000000000000;
  _Dst[0x55] = 0xffffffffffffffff;
  *(undefined4 *)(_Dst + 0x56) = 0xffffffff;
  *(undefined4 *)(_Dst + 0x58) = 0;
  *(undefined1 *)((longlong)_Dst + 700) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2b4) = 0;
  return _Dst;
}



// FUNCTION 14664b7ce FUN_14664b7ce body=79 status=ok
// SIG undefined FUN_14664b7ce(void)

void FUN_14664b7ce(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db1448();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c09c0;
  puVar1[2] = FUN_148e72fd0;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"PlayNextMessage",puVar1);
  return;
}



// FUNCTION 14664b81e FUN_14664b81e body=52 status=ok
// SIG undefined FUN_14664b81e(void)

void FUN_14664b81e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x3a8);
  memset(_Dst,0,0x3a8);
  FUN_145de571a(_Dst);
  return;
}



// FUNCTION 14664b852 FUN_14664b852 body=174 status=ok
// SIG undefined FUN_14664b852(void)

void FUN_14664b852(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1401cd71c();
  lVar1 = FUN_140391552(param_1);
  if (lVar1 != 0) {
    FUN_1446ddc76(&local_30,"FOakUIEvent_CrosshairFeedbackTriggered",1);
    FUN_1401cd85c(lVar1,local_30,param_1 + 0x298);
    FUN_1446ddc76(&local_38,"FOakUIEvent_CrosshairActionSkillUpdate",1);
    FUN_1401cd85c(lVar1,local_38,param_1 + 0x2a0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14664b902 FUN_14664b902 body=77 status=ok
// SIG undefined FUN_14664b902(void)

undefined8 * FUN_14664b902(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a0);
  memset(_Dst,0,0x2a0);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bee10;
  _Dst[0x53] = 0;
  return _Dst;
}



// FUNCTION 14664b950 FUN_14664b950 body=77 status=ok
// SIG undefined FUN_14664b950(void)

undefined8 * FUN_14664b950(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a0);
  memset(_Dst,0,0x2a0);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bee10;
  _Dst[0x53] = 0;
  return _Dst;
}



// FUNCTION 14664b9a4 FUN_14664b9a4 body=92 status=ok
// SIG undefined FUN_14664b9a4(void)

undefined8 * FUN_14664b9a4(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b0);
  memset(_Dst,0,0x2b0);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bef10;
  FUN_1400b22c2(_Dst + 0x53,&DAT_149e62dd2);
  *(undefined1 *)(_Dst + 0x55) = 0;
  return _Dst;
}



// FUNCTION 14664ba00 FUN_14664ba00 body=92 status=ok
// SIG undefined FUN_14664ba00(void)

undefined8 * FUN_14664ba00(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b0);
  memset(_Dst,0,0x2b0);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bef10;
  FUN_1400b22c2(_Dst + 0x53,&DAT_149e62dd2);
  *(undefined1 *)(_Dst + 0x55) = 0;
  return _Dst;
}



// FUNCTION 14664ba5c FUN_14664ba5c body=110 status=ok
// SIG undefined FUN_14664ba5c(void)

undefined8 * FUN_14664ba5c(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2c8);
  memset(_Dst,0,0x2c8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bf010;
  *(undefined4 *)(_Dst + 0x53) = 0xffffffff;
  *(undefined1 *)((longlong)_Dst + 0x29c) = 0;
  _Dst[0x54] = 0;
  _Dst[0x55] = 0;
  _Dst[0x56] = 0;
  _Dst[0x57] = 0;
  *(undefined4 *)(_Dst + 0x58) = 0;
  return _Dst;
}



// FUNCTION 14664baca FUN_14664baca body=110 status=ok
// SIG undefined FUN_14664baca(void)

undefined8 * FUN_14664baca(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2c8);
  memset(_Dst,0,0x2c8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bf010;
  *(undefined4 *)(_Dst + 0x53) = 0xffffffff;
  *(undefined1 *)((longlong)_Dst + 0x29c) = 0;
  _Dst[0x54] = 0;
  _Dst[0x55] = 0;
  _Dst[0x56] = 0;
  _Dst[0x57] = 0;
  *(undefined4 *)(_Dst + 0x58) = 0;
  return _Dst;
}



// FUNCTION 14664bb38 FUN_14664bb38 body=586 status=ok
// SIG undefined FUN_14664bb38(void)

void FUN_14664bb38(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1407cbe30();
  if (*(int *)(param_1 + 0x208) == 0) goto LAB_14664bd07;
  FUN_1448d5e3c(&local_50,param_1 + 0x208);
  pfVar4 = *(float **)(local_50 + 0x260);
  AcquireSRWLockExclusive((PSRWLOCK)(pfVar4 + 0x24));
  pfVar4[0x22] = (float)((int)pfVar4[0x22] + 1);
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
  lVar3 = param_1 + 0x160;
  uVar6 = FUN_144a7cdc2(lVar3,&DAT_14cbdae28);
  fVar7 = (float)FUN_140b963dc(uVar6,0);
  fVar7 = fVar7 * 100.0 * fVar7 * 100.0;
  if ((fVar7 != *pfVar4) || (NAN(fVar7) || NAN(*pfVar4))) {
    fVar5 = (float)((int)pfVar4[1] + 1);
LAB_14664bbfc:
    *pfVar4 = fVar7;
    pfVar4[1] = fVar5;
  }
  else if (pfVar4[1] == 0.0) {
    fVar5 = 1.4013e-45;
    goto LAB_14664bbfc;
  }
  uVar6 = FUN_144a7cdc2(lVar3,&DAT_14cbdae38);
  fVar7 = (float)FUN_140b963dc(uVar6,0);
  if (pfVar4[2] == (float)(int)(fVar7 * 100.0)) {
    if (pfVar4[3] == 0.0) {
      fVar5 = 1.4013e-45;
      goto LAB_14664bc3b;
    }
  }
  else {
    fVar5 = (float)((int)pfVar4[3] + 1);
LAB_14664bc3b:
    pfVar4[2] = (float)(int)(fVar7 * 100.0);
    pfVar4[3] = fVar5;
  }
  uVar6 = FUN_144a7cdc2(lVar3,&DAT_14cbdae40);
  fVar7 = (float)FUN_140b963dc(uVar6,0);
  if ((fVar7 != pfVar4[4]) || (NAN(fVar7) || NAN(pfVar4[4]))) {
    fVar5 = (float)((int)pfVar4[5] + 1);
LAB_14664bc70:
    pfVar4[4] = fVar7;
    pfVar4[5] = fVar5;
  }
  else if (pfVar4[5] == 0.0) {
    fVar5 = 1.4013e-45;
    goto LAB_14664bc70;
  }
  uVar6 = FUN_144a7cdc2(lVar3,&DAT_14cbdae20);
  fVar7 = (float)FUN_140b963dc(uVar6,0);
  *(float *)(param_1 + 0x2a4) = fVar7 * 100.0 * fVar7 * 100.0;
  uVar6 = FUN_144a7cdc2(lVar3,&DAT_14cbdae18);
  fVar7 = (float)FUN_140b963dc(uVar6,0);
  *(float *)(param_1 + 0x2a0) = fVar7 * 100.0 * fVar7 * 100.0;
  uVar6 = FUN_144a7cdc2(lVar3,&DAT_14cbdae30);
  uVar8 = FUN_140b963dc(uVar6,0);
  *(undefined4 *)(param_1 + 0x2a8) = uVar8;
  ReleaseSRWLockExclusive((PSRWLOCK)(pfVar4 + 0x24));
LAB_14664bd07:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14664bd84 FUN_14664bd84 body=244 status=ok
// SIG undefined FUN_14664bd84(void)

void FUN_14664bd84(longlong param_1)

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
  FUN_1448d5e3c(&local_38,param_1 + 0x208);
  lVar3 = *(longlong *)(local_38 + 0x260);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x90));
  *(int *)(lVar3 + 0x88) = *(int *)(lVar3 + 0x88) + 1;
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
  if (*(char *)(lVar3 + 0x28) == '\0') {
    if (*(int *)(lVar3 + 0x2c) == 0) {
      iVar4 = 1;
      goto LAB_14664be62;
    }
  }
  else {
    iVar4 = *(int *)(lVar3 + 0x2c) + 1;
LAB_14664be62:
    *(undefined1 *)(lVar3 + 0x28) = 0;
    *(int *)(lVar3 + 0x2c) = iVar4;
  }
  if (*(char *)(lVar3 + 0x20) == '\0') {
    if (*(int *)(lVar3 + 0x24) != 0) goto LAB_14664bdfd;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(lVar3 + 0x24) + 1;
  }
  *(undefined1 *)(lVar3 + 0x20) = 0;
  *(int *)(lVar3 + 0x24) = iVar4;
LAB_14664bdfd:
  FUN_145d44c72(lVar3 + 0x30);
  FUN_141497d7e(param_1);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x90));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14664be7a FUN_14664be7a body=94 status=ok
// SIG undefined FUN_14664be7a(void)

undefined8 * FUN_14664be7a(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b8);
  memset(_Dst,0,0x2b8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bf110;
  _Dst[0x56] = 0;
  _Dst[0x53] = 0;
  _Dst[0x54] = 0;
  *(undefined8 *)((longlong)_Dst + 0x2a6) = 0;
  return _Dst;
}



// FUNCTION 14664bed8 FUN_14664bed8 body=94 status=ok
// SIG undefined FUN_14664bed8(void)

undefined8 * FUN_14664bed8(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b8);
  memset(_Dst,0,0x2b8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bf110;
  _Dst[0x56] = 0;
  _Dst[0x53] = 0;
  _Dst[0x54] = 0;
  *(undefined8 *)((longlong)_Dst + 0x2a6) = 0;
  return _Dst;
}



// FUNCTION 14664bf36 FUN_14664bf36 body=66 status=ok
// SIG undefined FUN_14664bf36(void)

undefined8 * FUN_14664bf36(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x298);
  memset(_Dst,0,0x298);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bf210;
  return _Dst;
}



// FUNCTION 14664bf78 FUN_14664bf78 body=66 status=ok
// SIG undefined FUN_14664bf78(void)

undefined8 * FUN_14664bf78(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x298);
  memset(_Dst,0,0x298);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bf210;
  return _Dst;
}



// FUNCTION 14664bfba FUN_14664bfba body=103 status=ok
// SIG undefined FUN_14664bfba(void)

undefined8 * FUN_14664bfba(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2c8);
  memset(_Dst,0,0x2c8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bf310;
  _Dst[0x53] = 0;
  _Dst[0x54] = 0;
  *(undefined2 *)(_Dst + 0x55) = 0;
  _Dst[0x56] = 0;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  return _Dst;
}



// FUNCTION 14664c022 FUN_14664c022 body=103 status=ok
// SIG undefined FUN_14664c022(void)

undefined8 * FUN_14664c022(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2c8);
  memset(_Dst,0,0x2c8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bf310;
  _Dst[0x53] = 0;
  _Dst[0x54] = 0;
  *(undefined2 *)(_Dst + 0x55) = 0;
  _Dst[0x56] = 0;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  return _Dst;
}



// FUNCTION 14664c08a FUN_14664c08a body=26 status=ok
// SIG undefined FUN_14664c08a(void)

void FUN_14664c08a(longlong param_1)

{
  FUN_1410c2540();
  *(undefined1 *)(param_1 + 0x2a9) = 0;
  return;
}



// FUNCTION 14664c0a4 FUN_14664c0a4 body=813 status=ok
// SIG undefined FUN_14664c0a4(void)

void FUN_14664c0a4(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140db1448();
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9c0bb0;
  puVar2[2] = FUN_1412ff704;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnHudSkillActivated",puVar2);
  lVar1 = param_1 + 0x38;
  FUN_1446ddc76(local_50,"OnHudSkillActivated",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9c0bd0;
  puVar2[2] = FUN_1413211b2;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnHudSkillReady",puVar2);
  FUN_1446ddc76(local_50,"OnHudSkillReady",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9c0bf0;
  puVar2[2] = FUN_1412402f6;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnHudSkillThreeSecondsCooldown",puVar2);
  FUN_1446ddc76(local_50,"OnHudSkillThreeSecondsCooldown",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9c0bb0;
  puVar2[2] = FUN_1458d183e;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnHudSkillCannotUse",puVar2);
  FUN_1446ddc76(local_50,"OnHudSkillCannotUse",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9c0bb0;
  puVar2[2] = FUN_1458d19ea;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnHudSkillGainCharge",puVar2);
  FUN_1446ddc76(local_50,"OnHudSkillGainCharge",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14664c3d2 FUN_14664c3d2 body=52 status=ok
// SIG undefined FUN_14664c3d2(void)

void FUN_14664c3d2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x398);
  memset(_Dst,0,0x398);
  FUN_1458da1f2(_Dst);
  return;
}



// FUNCTION 14664c406 FUN_14664c406 body=111 status=ok
// SIG undefined FUN_14664c406(void)

undefined8 * FUN_14664c406(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x3f8);
  memset(_Dst,0,0x3f8);
  FUN_1458da1f2(_Dst);
  *_Dst = &PTR_FUN_14b9bf580;
  _Dst[0x73] = 0;
  _Dst[0x74] = 0;
  _Dst[0x75] = 0;
  _Dst[0x76] = 0;
  _Dst[0x77] = 0;
  _Dst[0x78] = 0;
  _Dst[0x79] = 0;
  _Dst[0x7a] = 0;
  _Dst[0x7b] = 0;
  _Dst[0x7c] = 0;
  _Dst[0x7d] = 0;
  _Dst[0x7e] = 0;
  return _Dst;
}



// FUNCTION 14664c476 FUN_14664c476 body=111 status=ok
// SIG undefined FUN_14664c476(void)

undefined8 * FUN_14664c476(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x3f8);
  memset(_Dst,0,0x3f8);
  FUN_1458da1f2(_Dst);
  *_Dst = &PTR_FUN_14b9bf580;
  _Dst[0x73] = 0;
  _Dst[0x74] = 0;
  _Dst[0x75] = 0;
  _Dst[0x76] = 0;
  _Dst[0x77] = 0;
  _Dst[0x78] = 0;
  _Dst[0x79] = 0;
  _Dst[0x7a] = 0;
  _Dst[0x7b] = 0;
  _Dst[0x7c] = 0;
  _Dst[0x7d] = 0;
  _Dst[0x7e] = 0;
  return _Dst;
}



// FUNCTION 14664c4e6 FUN_14664c4e6 body=52 status=ok
// SIG undefined FUN_14664c4e6(void)

void FUN_14664c4e6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x350);
  memset(_Dst,0,0x350);
  FUN_145c2fc1c(_Dst);
  return;
}



// FUNCTION 14664c51a FUN_14664c51a body=79 status=ok
// SIG undefined FUN_14664c51a(void)

void FUN_14664c51a(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db1448();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c10c0;
  puVar1[2] = &LAB_140fb3f60;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"HideLootFeed",puVar1);
  return;
}



// FUNCTION 14664c56a FUN_14664c56a body=581 status=ok
// SIG undefined FUN_14664c56a(void)

void FUN_14664c56a(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 uStack_70;
  undefined2 *local_60;
  undefined4 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1410c2540();
  lVar4 = FUN_141227b26();
  if (lVar4 != 0) {
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    FUN_14584a3de(lVar4,&local_78);
    if ((longlong)(int)uStack_70 != 0) {
      plVar1 = local_78 + (int)uStack_70;
      local_88 = param_1 + 0x2f0;
      plVar8 = local_78;
      local_90 = param_1;
LAB_14664c5f4:
      lVar4 = *plVar8;
      FUN_140baf24c(lVar4);
      puVar5 = local_60;
      if ((int)local_58 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      lVar6 = 0;
      do {
        uVar3 = puVar5[lVar6];
        bVar2 = (&DAT_14b9b0308)[lVar6];
        iVar9 = (uint)uVar3 - (uint)bVar2;
        if (iVar9 == 0) {
          iVar9 = 0;
          if (uVar3 == 0) goto LAB_14664c657;
        }
        else {
          if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_14664c657;
          if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto code_r0x00014664c654;
        }
        lVar6 = lVar6 + 1;
      } while( true );
    }
LAB_14664c77b:
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014664c654:
  iVar9 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_14664c657:
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (iVar9 == 0) {
    *(longlong *)(local_90 + 0x2e8) = lVar4;
  }
  FUN_140baf24c(lVar4);
  puVar5 = local_60;
  if ((int)local_58 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  lVar6 = 0;
  do {
    uVar3 = puVar5[lVar6];
    bVar2 = "MONEY"[lVar6];
    iVar9 = (uint)uVar3 - (uint)bVar2;
    if (iVar9 == 0) {
      iVar9 = 0;
      if (uVar3 == 0) goto LAB_14664c6c6;
    }
    else {
      if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_14664c6c6;
      if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) break;
    }
    lVar6 = lVar6 + 1;
  } while( true );
  iVar9 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_14664c6c6:
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (iVar9 == 0) {
    puVar7 = *(undefined4 **)(lVar4 + 8);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = &DAT_14c9485f0;
    }
    FUN_1447715ec(local_88,puVar7);
  }
  if (*(longlong *)(lVar4 + 0x1c) != 0) {
    local_7c = *(undefined4 *)(lVar4 + 0x144);
    local_60 = (undefined2 *)(lVar4 + 0x1c);
    local_58 = &local_7c;
    FUN_140d12ea6(param_1 + 0x298,local_4c,&local_60,0);
  }
  plVar8 = plVar8 + 1;
  if (plVar8 == plVar1) goto LAB_14664c77b;
  goto LAB_14664c5f4;
}



// FUNCTION 14664c7b0 FUN_14664c7b0 body=52 status=ok
// SIG undefined FUN_14664c7b0(void)

void FUN_14664c7b0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x310);
  memset(_Dst,0,0x310);
  FUN_14598af2e(_Dst);
  return;
}



// FUNCTION 14664c7e4 FUN_14664c7e4 body=76 status=ok
// SIG undefined FUN_14664c7e4(void)

undefined8 * FUN_14664c7e4(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b0);
  memset(_Dst,0,0x2b0);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bf970;
  *(undefined4 *)(_Dst + 0x55) = 0;
  return _Dst;
}



// FUNCTION 14664c830 FUN_14664c830 body=76 status=ok
// SIG undefined FUN_14664c830(void)

undefined8 * FUN_14664c830(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b0);
  memset(_Dst,0,0x2b0);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bf970;
  *(undefined4 *)(_Dst + 0x55) = 0;
  return _Dst;
}



// FUNCTION 14664c87c FUN_14664c87c body=98 status=ok
// SIG undefined FUN_14664c87c(void)

void FUN_14664c87c(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  FUN_1410c3574();
  if (*(int *)(param_1 + 0x17c) != 0) {
    uVar1 = FUN_14479d2ce(param_1 + 0x30);
    lVar2 = FUN_140391a3c(uVar1);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar3 = &PTR_FUN_14b9bfa70;
      FUN_14039144e(lVar2,puVar3);
      return;
    }
  }
  return;
}



// FUNCTION 14664c8de FUN_14664c8de body=152 status=ok
// SIG undefined FUN_14664c8de(void)

void FUN_14664c8de(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_140db1448();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c1280;
  puVar1[2] = FUN_148e7569a;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_TempMissionViewed",puVar1);
  *(undefined8 *)(param_1 + 0x298) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c12a0;
  puVar1[2] = FUN_14610afa2;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_TriggerAudio",puVar1);
  *(undefined8 *)(param_1 + 0x2a0) = uVar2;
  return;
}



// FUNCTION 14664c976 FUN_14664c976 body=80 status=ok
// SIG undefined FUN_14664c976(void)

undefined8 * FUN_14664c976(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a8);
  memset(_Dst,0,0x2a8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bfa90;
  _Dst[0x53] = 0;
  _Dst[0x54] = 0x500000000;
  return _Dst;
}



// FUNCTION 14664c9c6 FUN_14664c9c6 body=80 status=ok
// SIG undefined FUN_14664c9c6(void)

undefined8 * FUN_14664c9c6(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a8);
  memset(_Dst,0,0x2a8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bfa90;
  _Dst[0x53] = 0;
  _Dst[0x54] = 0x500000000;
  return _Dst;
}



// FUNCTION 14664ca16 FUN_14664ca16 body=26 status=ok
// SIG undefined FUN_14664ca16(void)

void FUN_14664ca16(longlong param_1)

{
  FUN_1410c2540();
  *(byte *)(param_1 + 0x8d) = *(byte *)(param_1 + 0x8d) | 0x40;
  return;
}



// FUNCTION 14664ca30 FUN_14664ca30 body=103 status=ok
// SIG undefined FUN_14664ca30(void)

void FUN_14664ca30(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  FUN_1410c3574();
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0xbc);
    FUN_1456e6a3a(*(undefined8 *)(lVar2 + 0xb0),*(undefined4 *)(lVar2 + 0xb8));
    *(undefined4 *)(lVar2 + 0xb8) = 0;
    if ((iVar1 < 0) && (*(int *)(lVar2 + 0xbc) != 0)) {
      FUN_1456e693a(lVar2 + 0xb0,0);
      return;
    }
  }
  return;
}



// FUNCTION 14664ca98 FUN_14664ca98 body=83 status=ok
// SIG undefined FUN_14664ca98(void)

undefined8 * FUN_14664ca98(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a0);
  memset(_Dst,0,0x2a0);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bfc90;
  _Dst[0x53] = 0xa00000000;
  return _Dst;
}



// FUNCTION 14664caec FUN_14664caec body=83 status=ok
// SIG undefined FUN_14664caec(void)

undefined8 * FUN_14664caec(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a0);
  memset(_Dst,0,0x2a0);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bfc90;
  _Dst[0x53] = 0xa00000000;
  return _Dst;
}



// FUNCTION 14664cb40 FUN_14664cb40 body=50 status=ok
// SIG undefined FUN_14664cb40(void)

undefined8 * FUN_14664cb40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x298,0x10);
  FUN_140e8cffc(puVar1);
  *puVar1 = &PTR_FUN_14b9be560;
  return puVar1;
}



// FUNCTION 14664cb72 FUN_14664cb72 body=77 status=ok
// SIG undefined FUN_14664cb72(void)

undefined8 * FUN_14664cb72(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a0);
  memset(_Dst,0,0x2a0);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bfd90;
  _Dst[0x53] = 0;
  return _Dst;
}



// FUNCTION 14664cbc0 FUN_14664cbc0 body=84 status=ok
// SIG undefined FUN_14664cbc0(void)

undefined8 * FUN_14664cbc0(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a8);
  memset(_Dst,0,0x2a8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bfe90;
  *(undefined1 *)(_Dst + 0x53) = 4;
  *(undefined8 *)((longlong)_Dst + 0x29c) = 0;
  return _Dst;
}



// FUNCTION 14664cc14 FUN_14664cc14 body=84 status=ok
// SIG undefined FUN_14664cc14(void)

undefined8 * FUN_14664cc14(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a8);
  memset(_Dst,0,0x2a8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bfe90;
  *(undefined1 *)(_Dst + 0x53) = 4;
  *(undefined8 *)((longlong)_Dst + 0x29c) = 0;
  return _Dst;
}



// FUNCTION 14664cc68 FUN_14664cc68 body=309 status=ok
// SIG undefined FUN_14664cc68(void)

void FUN_14664cc68(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1407cbe30();
  lVar3 = param_1 + 0x160;
  uVar6 = FUN_144a7cdc2(lVar3,&DAT_14cbdbaf0);
  uVar7 = FUN_140b963dc(uVar6,0);
  *(undefined4 *)(param_1 + 0x29c) = uVar7;
  uVar6 = FUN_144a7cdc2(lVar3,&DAT_14cbdbae8);
  uVar7 = FUN_140b963dc(uVar6,0);
  *(undefined4 *)(param_1 + 0x2a0) = uVar7;
  if (*(int *)(param_1 + 0x208) == 0) goto LAB_14664cd59;
  FUN_1448d5e3c(&local_38,param_1 + 0x208);
  lVar4 = *(longlong *)(local_38 + 0x130);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x60));
  *(int *)(lVar4 + 0x58) = *(int *)(lVar4 + 0x58) + 1;
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
  uVar6 = FUN_144a7cdc2(lVar3,&DAT_14cbdbae0);
  fVar8 = (float)FUN_140b963dc(uVar6,0);
  if ((fVar8 != *(float *)(lVar4 + 0x40)) || (NAN(fVar8) || NAN(*(float *)(lVar4 + 0x40)))) {
    iVar5 = *(int *)(lVar4 + 0x44) + 1;
LAB_14664cd46:
    *(float *)(lVar4 + 0x40) = fVar8;
    *(int *)(lVar4 + 0x44) = iVar5;
  }
  else if (*(int *)(lVar4 + 0x44) == 0) {
    iVar5 = 1;
    goto LAB_14664cd46;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x60));
LAB_14664cd59:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14664cd9e FUN_14664cd9e body=87 status=ok
// SIG undefined FUN_14664cd9e(void)

undefined8 * FUN_14664cd9e(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a8);
  memset(_Dst,0,0x2a8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bff90;
  _Dst[0x53] = 0;
  *(undefined4 *)(_Dst + 0x54) = 0;
  return _Dst;
}



// FUNCTION 14664cdf6 FUN_14664cdf6 body=87 status=ok
// SIG undefined FUN_14664cdf6(void)

undefined8 * FUN_14664cdf6(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a8);
  memset(_Dst,0,0x2a8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bff90;
  _Dst[0x53] = 0;
  *(undefined4 *)(_Dst + 0x54) = 0;
  return _Dst;
}



// FUNCTION 14664ce4e FUN_14664ce4e body=26 status=ok
// SIG undefined FUN_14664ce4e(void)

void FUN_14664ce4e(longlong param_1)

{
  FUN_1410c2540();
  *(byte *)(param_1 + 0x8d) = *(byte *)(param_1 + 0x8d) | 0x40;
  return;
}



// FUNCTION 14664ce68 FUN_14664ce68 body=38 status=ok
// SIG undefined FUN_14664ce68(void)

undefined8 FUN_14664ce68(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664ce8e FUN_14664ce8e body=38 status=ok
// SIG undefined FUN_14664ce8e(void)

undefined8 FUN_14664ce8e(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664ceb4 FUN_14664ceb4 body=38 status=ok
// SIG undefined FUN_14664ceb4(void)

undefined8 FUN_14664ceb4(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664ceda FUN_14664ceda body=116 status=ok
// SIG undefined FUN_14664ceda(void)

void FUN_14664ceda(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xd0);
  memset(_Dst,0,0xd0);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8977c0;
  *(undefined1 *)(_Dst + 0x16) = 0;
  *(undefined4 *)((longlong)_Dst + 0xb4) = 0;
  *(undefined1 *)(_Dst + 0x17) = 0;
  *(undefined8 *)((longlong)_Dst + 0xbc) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc4) = 0;
  *(undefined4 *)((longlong)_Dst + 0xcc) = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 14664cf4e FUN_14664cf4e body=38 status=ok
// SIG undefined FUN_14664cf4e(void)

undefined8 FUN_14664cf4e(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664cf74 FUN_14664cf74 body=109 status=ok
// SIG undefined FUN_14664cf74(void)

void FUN_14664cf74(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xd0);
  memset(_Dst,0,0xd0);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b89fa10;
  _Dst[0x19] = 0;
  _Dst[0x16] = 0;
  _Dst[0x17] = 0;
  *(undefined4 *)(_Dst + 0x18) = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 14664cfe2 FUN_14664cfe2 body=38 status=ok
// SIG undefined FUN_14664cfe2(void)

undefined8 FUN_14664cfe2(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664d008 FUN_14664d008 body=38 status=ok
// SIG undefined FUN_14664d008(void)

undefined8 FUN_14664d008(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664d02e FUN_14664d02e body=70 status=ok
// SIG undefined FUN_14664d02e(void)

undefined8 * FUN_14664d02e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9bece0;
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664d074 FUN_14664d074 body=38 status=ok
// SIG undefined FUN_14664d074(void)

undefined8 FUN_14664d074(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664d09a FUN_14664d09a body=68 status=ok
// SIG undefined FUN_14664d09a(void)

undefined8 * FUN_14664d09a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9bef10;
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664d0de FUN_14664d0de body=38 status=ok
// SIG undefined FUN_14664d0de(void)

undefined8 FUN_14664d0de(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664d104 FUN_14664d104 body=166 status=ok
// SIG undefined FUN_14664d104(void)

void FUN_14664d104(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8a2890;
  *(undefined1 *)(_Dst + 0x16) = 0;
  *(undefined4 *)((longlong)_Dst + 0xb4) = 0;
  *(undefined1 *)(_Dst + 0x17) = 0;
  *(undefined4 *)((longlong)_Dst + 0xbc) = 0;
  *(undefined1 *)(_Dst + 0x18) = 0;
  *(undefined4 *)((longlong)_Dst + 0xec) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc4) = 0;
  *(undefined8 *)((longlong)_Dst + 0xcc) = 0;
  *(undefined8 *)((longlong)_Dst + 0xd4) = 0;
  *(undefined8 *)((longlong)_Dst + 0xdc) = 0;
  *(undefined8 *)((longlong)_Dst + 0xe1) = 0;
  *(undefined1 *)(_Dst + 0x1e) = 1;
  *(undefined8 *)((longlong)_Dst + 0xf4) = 0;
  *(undefined8 *)((longlong)_Dst + 0xfc) = 0;
  *(undefined4 *)((longlong)_Dst + 0x104) = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 14664d1aa FUN_14664d1aa body=70 status=ok
// SIG undefined FUN_14664d1aa(void)

undefined8 * FUN_14664d1aa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9bf110;
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664d1f0 FUN_14664d1f0 body=38 status=ok
// SIG undefined FUN_14664d1f0(void)

undefined8 FUN_14664d1f0(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14664d216 FUN_14664d216 body=118 status=ok
// SIG undefined FUN_14664d216(void)

void FUN_14664d216(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xd0);
  memset(_Dst,0,0xd0);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b819040;
  *(undefined4 *)(_Dst + 0x16) = 0;
  *(undefined2 *)((longlong)_Dst + 0xb4) = 0;
  _Dst[0x17] = 0;
  _Dst[0x18] = 0;
  _Dst[0x19] = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}


