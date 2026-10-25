// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149728fe0 FUN_149728fe0 body=177 status=ok
// SIG undefined FUN_149728fe0(void)

void FUN_149728fe0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_146fdc46c(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149729092 FUN_149729092 body=311 status=ok
// SIG undefined FUN_149729092(void)

longlong FUN_149729092(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_1497291ca(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 0) {
            param_3 = lVar1 + 0x38;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497291ca FUN_1497291ca body=208 status=ok
// SIG undefined FUN_1497291ca(void)

void FUN_1497291ca(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_14972929c(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972929c FUN_14972929c body=189 status=ok
// SIG undefined FUN_14972929c(void)

undefined8 *
FUN_14972929c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *(undefined4 *)(param_1 + 1) = 0;
  local_38._0_4_ = (undefined4)uVar2;
  local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar3;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 2) = local_38._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 3) = uStack_30._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  *param_1 = &PTR_FUN_14be2d810;
  param_1[7] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 8) = iVar1;
  local_38 = uVar2;
  uStack_30 = uVar3;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 << 2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972935a FUN_14972935a body=62 status=ok
// SIG undefined FUN_14972935a(void)

undefined8 * FUN_14972935a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2d810;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 149729398 FUN_149729398 body=101 status=ok
// SIG undefined FUN_149729398(void)

undefined8 * FUN_149729398(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2d820;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497293fe FUN_1497293fe body=34 status=ok
// SIG undefined FUN_1497293fe(void)

undefined8 FUN_1497293fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 149729420 FUN_149729420 body=101 status=ok
// SIG undefined FUN_149729420(void)

undefined8 * FUN_149729420(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2d820;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 149729486 FUN_149729486 body=311 status=ok
// SIG undefined FUN_149729486(void)

longlong FUN_149729486(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_1497295be(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 0) {
            param_3 = lVar1 + 0x38;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497295be FUN_1497295be body=208 status=ok
// SIG undefined FUN_1497295be(void)

void FUN_1497295be(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_149729690(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149729690 FUN_149729690 body=190 status=ok
// SIG undefined FUN_149729690(void)

undefined8 *
FUN_149729690(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *(undefined4 *)(param_1 + 1) = 0;
  local_38._0_4_ = (undefined4)uVar2;
  local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar3;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 2) = local_38._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 3) = uStack_30._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  *param_1 = &PTR_FUN_14be2d830;
  param_1[7] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 8) = iVar1;
  local_38 = uVar2;
  uStack_30 = uVar3;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_140c0b9de(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 * 0xc);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149729750 FUN_149729750 body=62 status=ok
// SIG undefined FUN_149729750(void)

undefined8 * FUN_149729750(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2d830;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14972978e FUN_14972978e body=101 status=ok
// SIG undefined FUN_14972978e(void)

undefined8 * FUN_14972978e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2d840;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497297f4 FUN_1497297f4 body=34 status=ok
// SIG undefined FUN_1497297f4(void)

undefined8 FUN_1497297f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 149729816 FUN_149729816 body=101 status=ok
// SIG undefined FUN_149729816(void)

undefined8 * FUN_149729816(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2d840;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972987c FUN_14972987c body=311 status=ok
// SIG undefined FUN_14972987c(void)

longlong FUN_14972987c(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_1497299b4(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 0) {
            param_3 = lVar1 + 0x38;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497299b4 FUN_1497299b4 body=208 status=ok
// SIG undefined FUN_1497299b4(void)

void FUN_1497299b4(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_149729a86(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149729a86 FUN_149729a86 body=185 status=ok
// SIG undefined FUN_149729a86(void)

undefined8 *
FUN_149729a86(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *(undefined4 *)(param_1 + 1) = 0;
  local_38._0_4_ = (undefined4)uVar2;
  local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar3;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 2) = local_38._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 3) = uStack_30._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  *param_1 = &PTR_FUN_14be2d850;
  param_1[7] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 8) = iVar1;
  local_38 = uVar2;
  uStack_30 = uVar3;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1447cd5fa(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149729b40 FUN_149729b40 body=62 status=ok
// SIG undefined FUN_149729b40(void)

undefined8 * FUN_149729b40(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2d850;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 149729b7e FUN_149729b7e body=101 status=ok
// SIG undefined FUN_149729b7e(void)

undefined8 * FUN_149729b7e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2d860;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 149729be4 FUN_149729be4 body=34 status=ok
// SIG undefined FUN_149729be4(void)

undefined8 FUN_149729be4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 149729c06 FUN_149729c06 body=101 status=ok
// SIG undefined FUN_149729c06(void)

undefined8 * FUN_149729c06(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2d860;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 149729c6c FUN_149729c6c body=177 status=ok
// SIG undefined FUN_149729c6c(void)

void FUN_149729c6c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_149729d1e(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149729d1e FUN_149729d1e body=237 status=ok
// SIG undefined FUN_149729d1e(void)

void FUN_149729d1e(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar3;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar4;
  *(undefined4 *)(local_48 + 3) = uVar5;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be2d870;
  lVar2 = *(longlong *)(param_4 + 4);
  if (lVar2 == 0) {
    uVar3 = param_4[1];
    uVar4 = param_4[2];
    uVar5 = param_4[3];
    *(undefined4 *)(local_48 + 7) = *param_4;
    *(undefined4 *)((longlong)local_48 + 0x3c) = uVar3;
    *(undefined4 *)(local_48 + 8) = uVar4;
    *(undefined4 *)((longlong)local_48 + 0x44) = uVar5;
  }
  local_48[9] = lVar2;
  *(undefined8 *)(param_4 + 4) = 0;
  *(undefined4 *)(local_48 + 10) = param_4[6];
  *(undefined4 *)((longlong)local_48 + 0x54) = param_4[7];
  *(undefined8 *)(param_4 + 6) = 0;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149729e0c FUN_149729e0c body=62 status=ok
// SIG undefined FUN_149729e0c(void)

undefined8 * FUN_149729e0c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2d870;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 149729e4a FUN_149729e4a body=101 status=ok
// SIG undefined FUN_149729e4a(void)

undefined8 * FUN_149729e4a(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2d880;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 149729eb0 FUN_149729eb0 body=34 status=ok
// SIG undefined FUN_149729eb0(void)

undefined8 FUN_149729eb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 149729ed2 FUN_149729ed2 body=101 status=ok
// SIG undefined FUN_149729ed2(void)

undefined8 * FUN_149729ed2(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2d880;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 149729f38 FUN_149729f38 body=177 status=ok
// SIG undefined FUN_149729f38(void)

void FUN_149729f38(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_149729fea(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149729fea FUN_149729fea body=237 status=ok
// SIG undefined FUN_149729fea(void)

void FUN_149729fea(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar3;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar4;
  *(undefined4 *)(local_48 + 3) = uVar5;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be2d890;
  lVar2 = *(longlong *)(param_4 + 4);
  if (lVar2 == 0) {
    uVar3 = param_4[1];
    uVar4 = param_4[2];
    uVar5 = param_4[3];
    *(undefined4 *)(local_48 + 7) = *param_4;
    *(undefined4 *)((longlong)local_48 + 0x3c) = uVar3;
    *(undefined4 *)(local_48 + 8) = uVar4;
    *(undefined4 *)((longlong)local_48 + 0x44) = uVar5;
  }
  local_48[9] = lVar2;
  *(undefined8 *)(param_4 + 4) = 0;
  *(undefined4 *)(local_48 + 10) = param_4[6];
  *(undefined4 *)((longlong)local_48 + 0x54) = param_4[7];
  *(undefined8 *)(param_4 + 6) = 0;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972a0d8 FUN_14972a0d8 body=62 status=ok
// SIG undefined FUN_14972a0d8(void)

undefined8 * FUN_14972a0d8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2d890;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14972a116 FUN_14972a116 body=101 status=ok
// SIG undefined FUN_14972a116(void)

undefined8 * FUN_14972a116(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2d8a0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972a17c FUN_14972a17c body=34 status=ok
// SIG undefined FUN_14972a17c(void)

undefined8 FUN_14972a17c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14972a19e FUN_14972a19e body=101 status=ok
// SIG undefined FUN_14972a19e(void)

undefined8 * FUN_14972a19e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2d8a0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972a204 FUN_14972a204 body=311 status=ok
// SIG undefined FUN_14972a204(void)

longlong FUN_14972a204(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_14972a33c(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 0) {
            param_3 = lVar1 + 0x38;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972a33c FUN_14972a33c body=226 status=ok
// SIG undefined FUN_14972a33c(void)

void FUN_14972a33c(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar3 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(puVar3 + 1) = 0;
  uVar2 = param_5[1];
  *(undefined8 *)((longlong)puVar3 + 0xc) = *param_5;
  *(undefined8 *)((longlong)puVar3 + 0x14) = uVar2;
  puVar3[4] = param_3;
  *(undefined4 *)(puVar3 + 5) = param_6;
  puVar3[6] = uVar1;
  *puVar3 = &PTR_FUN_14be2d8b0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  FUN_144a69486(puVar3 + 7,param_4);
  local_50 = puVar3;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_50);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972a420 FUN_14972a420 body=62 status=ok
// SIG undefined FUN_14972a420(void)

undefined8 * FUN_14972a420(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2d8b0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14972a45e FUN_14972a45e body=101 status=ok
// SIG undefined FUN_14972a45e(void)

undefined8 * FUN_14972a45e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2d8c0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972a4c4 FUN_14972a4c4 body=34 status=ok
// SIG undefined FUN_14972a4c4(void)

undefined8 FUN_14972a4c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14972a4e6 FUN_14972a4e6 body=101 status=ok
// SIG undefined FUN_14972a4e6(void)

undefined8 * FUN_14972a4e6(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2d8c0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972a54c FUN_14972a54c body=311 status=ok
// SIG undefined FUN_14972a54c(void)

longlong FUN_14972a54c(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_149728776(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 0) {
            param_3 = lVar1 + 0x38;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972a684 FUN_14972a684 body=177 status=ok
// SIG undefined FUN_14972a684(void)

void FUN_14972a684(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_14972a736(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972a736 FUN_14972a736 body=223 status=ok
// SIG undefined FUN_14972a736(void)

void FUN_14972a736(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be2d8d0;
  local_48[7] = *param_4;
  *param_4 = 0;
  *(undefined4 *)(local_48 + 8) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)local_48 + 0x44) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972a816 FUN_14972a816 body=62 status=ok
// SIG undefined FUN_14972a816(void)

undefined8 * FUN_14972a816(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2d8d0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14972a854 FUN_14972a854 body=101 status=ok
// SIG undefined FUN_14972a854(void)

undefined8 * FUN_14972a854(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2d8e0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972a8ba FUN_14972a8ba body=34 status=ok
// SIG undefined FUN_14972a8ba(void)

undefined8 FUN_14972a8ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14972a8dc FUN_14972a8dc body=101 status=ok
// SIG undefined FUN_14972a8dc(void)

undefined8 * FUN_14972a8dc(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2d8e0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972a942 FUN_14972a942 body=177 status=ok
// SIG undefined FUN_14972a942(void)

void FUN_14972a942(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_14972a9f4(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972a9f4 FUN_14972a9f4 body=223 status=ok
// SIG undefined FUN_14972a9f4(void)

void FUN_14972a9f4(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be2d8f0;
  local_48[7] = *param_4;
  *param_4 = 0;
  *(undefined4 *)(local_48 + 8) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)local_48 + 0x44) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972aad4 FUN_14972aad4 body=62 status=ok
// SIG undefined FUN_14972aad4(void)

undefined8 * FUN_14972aad4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2d8f0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14972ab12 FUN_14972ab12 body=101 status=ok
// SIG undefined FUN_14972ab12(void)

undefined8 * FUN_14972ab12(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2d900;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972ab78 FUN_14972ab78 body=34 status=ok
// SIG undefined FUN_14972ab78(void)

undefined8 FUN_14972ab78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14972ab9a FUN_14972ab9a body=101 status=ok
// SIG undefined FUN_14972ab9a(void)

undefined8 * FUN_14972ab9a(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2d900;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972ac00 FUN_14972ac00 body=177 status=ok
// SIG undefined FUN_14972ac00(void)

void FUN_14972ac00(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_14972acb2(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972acb2 FUN_14972acb2 body=208 status=ok
// SIG undefined FUN_14972acb2(void)

void FUN_14972acb2(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_14972ad84(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972ad84 FUN_14972ad84 body=189 status=ok
// SIG undefined FUN_14972ad84(void)

undefined8 *
FUN_14972ad84(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *(undefined4 *)(param_1 + 1) = 0;
  local_38._0_4_ = (undefined4)uVar2;
  local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar3;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 2) = local_38._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 3) = uStack_30._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  *param_1 = &PTR_FUN_14be2d910;
  param_1[7] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 8) = iVar1;
  local_38 = uVar2;
  uStack_30 = uVar3;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 << 2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972ae42 FUN_14972ae42 body=62 status=ok
// SIG undefined FUN_14972ae42(void)

undefined8 * FUN_14972ae42(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2d910;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14972ae80 FUN_14972ae80 body=101 status=ok
// SIG undefined FUN_14972ae80(void)

undefined8 * FUN_14972ae80(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2d920;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972aee6 FUN_14972aee6 body=34 status=ok
// SIG undefined FUN_14972aee6(void)

undefined8 FUN_14972aee6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14972af08 FUN_14972af08 body=101 status=ok
// SIG undefined FUN_14972af08(void)

undefined8 * FUN_14972af08(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2d920;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972af6e FUN_14972af6e body=311 status=ok
// SIG undefined FUN_14972af6e(void)

longlong FUN_14972af6e(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_14972b0a6(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 0) {
            param_3 = lVar1 + 0x38;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972b0a6 FUN_14972b0a6 body=226 status=ok
// SIG undefined FUN_14972b0a6(void)

void FUN_14972b0a6(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar3 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(puVar3 + 1) = 0;
  uVar2 = param_5[1];
  *(undefined8 *)((longlong)puVar3 + 0xc) = *param_5;
  *(undefined8 *)((longlong)puVar3 + 0x14) = uVar2;
  puVar3[4] = param_3;
  *(undefined4 *)(puVar3 + 5) = param_6;
  puVar3[6] = uVar1;
  *puVar3 = &PTR_FUN_14be2d930;
  puVar3[9] = 0;
  puVar3[10] = 0;
  FUN_144a69486(puVar3 + 7,param_4);
  local_50 = puVar3;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_50);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972b18a FUN_14972b18a body=62 status=ok
// SIG undefined FUN_14972b18a(void)

undefined8 * FUN_14972b18a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2d930;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14972b1c8 FUN_14972b1c8 body=101 status=ok
// SIG undefined FUN_14972b1c8(void)

undefined8 * FUN_14972b1c8(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2d940;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972b22e FUN_14972b22e body=34 status=ok
// SIG undefined FUN_14972b22e(void)

undefined8 FUN_14972b22e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14972b250 FUN_14972b250 body=101 status=ok
// SIG undefined FUN_14972b250(void)

undefined8 * FUN_14972b250(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2d940;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972b2b6 FUN_14972b2b6 body=177 status=ok
// SIG undefined FUN_14972b2b6(void)

void FUN_14972b2b6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_14972b368(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972b368 FUN_14972b368 body=208 status=ok
// SIG undefined FUN_14972b368(void)

void FUN_14972b368(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_14972b43a(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972b43a FUN_14972b43a body=189 status=ok
// SIG undefined FUN_14972b43a(void)

undefined8 *
FUN_14972b43a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *(undefined4 *)(param_1 + 1) = 0;
  local_38._0_4_ = (undefined4)uVar2;
  local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar3;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 2) = local_38._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 3) = uStack_30._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  *param_1 = &PTR_FUN_14be2d950;
  param_1[7] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 8) = iVar1;
  local_38 = uVar2;
  uStack_30 = uVar3;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 << 2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972b4f8 FUN_14972b4f8 body=62 status=ok
// SIG undefined FUN_14972b4f8(void)

undefined8 * FUN_14972b4f8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2d950;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14972b536 FUN_14972b536 body=101 status=ok
// SIG undefined FUN_14972b536(void)

undefined8 * FUN_14972b536(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2d960;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972b59c FUN_14972b59c body=34 status=ok
// SIG undefined FUN_14972b59c(void)

undefined8 FUN_14972b59c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14972b5be FUN_14972b5be body=101 status=ok
// SIG undefined FUN_14972b5be(void)

undefined8 * FUN_14972b5be(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2d960;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972b624 FUN_14972b624 body=22 status=ok
// SIG undefined FUN_14972b624(void)

undefined8 FUN_14972b624(undefined8 param_1)

{
  FUN_14972b63a();
  return param_1;
}



// FUNCTION 14972b63a FUN_14972b63a body=153 status=ok
// SIG undefined FUN_14972b63a(void)

undefined8 * FUN_14972b63a(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x278,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14971bdc2(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972b6d4 FUN_14972b6d4 body=25 status=ok
// SIG undefined FUN_14972b6d4(void)

undefined8 FUN_14972b6d4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14972b70c FUN_14972b70c body=22 status=ok
// SIG undefined FUN_14972b70c(void)

undefined8 FUN_14972b70c(undefined8 param_1)

{
  FUN_14972b722();
  return param_1;
}



// FUNCTION 14972b722 FUN_14972b722 body=214 status=ok
// SIG undefined FUN_14972b722(void)

undefined8 * FUN_14972b722(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = *(undefined8 *)(param_2 + 6);
  local_68 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a0,0x10);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_146fb38ca(plVar1,&local_70);
  *plVar1 = (longlong)&PTR_FUN_14be1fea0;
  local_40 = plVar1 + 0x33;
  plVar1[0x33] = 0;
  local_60 = 0;
  local_38 = 0xffffffff;
  local_30 = 0;
  FUN_146fb8a66(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972b7fa FUN_14972b7fa body=25 status=ok
// SIG undefined FUN_14972b7fa(void)

undefined8 FUN_14972b7fa(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14972b832 FUN_14972b832 body=22 status=ok
// SIG undefined FUN_14972b832(void)

undefined8 FUN_14972b832(undefined8 param_1)

{
  FUN_14972b848();
  return param_1;
}



// FUNCTION 14972b848 FUN_14972b848 body=153 status=ok
// SIG undefined FUN_14972b848(void)

undefined8 * FUN_14972b848(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14971c794(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972b8e2 FUN_14972b8e2 body=25 status=ok
// SIG undefined FUN_14972b8e2(void)

undefined8 FUN_14972b8e2(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14972b91a FUN_14972b91a body=22 status=ok
// SIG undefined FUN_14972b91a(void)

undefined8 FUN_14972b91a(undefined8 param_1)

{
  FUN_14972b930();
  return param_1;
}



// FUNCTION 14972b930 FUN_14972b930 body=153 status=ok
// SIG undefined FUN_14972b930(void)

undefined8 * FUN_14972b930(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x288,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14971c952(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972b9ca FUN_14972b9ca body=25 status=ok
// SIG undefined FUN_14972b9ca(void)

undefined8 FUN_14972b9ca(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14972ba02 FUN_14972ba02 body=22 status=ok
// SIG undefined FUN_14972ba02(void)

undefined8 FUN_14972ba02(undefined8 param_1)

{
  FUN_14972ba18();
  return param_1;
}



// FUNCTION 14972ba18 FUN_14972ba18 body=153 status=ok
// SIG undefined FUN_14972ba18(void)

undefined8 * FUN_14972ba18(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x280,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14971d0c6(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972bab2 FUN_14972bab2 body=25 status=ok
// SIG undefined FUN_14972bab2(void)

undefined8 FUN_14972bab2(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14972baea FUN_14972baea body=22 status=ok
// SIG undefined FUN_14972baea(void)

undefined8 FUN_14972baea(undefined8 param_1)

{
  FUN_14972bb00();
  return param_1;
}



// FUNCTION 14972bb00 FUN_14972bb00 body=153 status=ok
// SIG undefined FUN_14972bb00(void)

undefined8 * FUN_14972bb00(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x288,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14971d462(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972bb9a FUN_14972bb9a body=25 status=ok
// SIG undefined FUN_14972bb9a(void)

undefined8 FUN_14972bb9a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14972bbd2 FUN_14972bbd2 body=311 status=ok
// SIG undefined FUN_14972bbd2(void)

longlong FUN_14972bbd2(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_14972bd0a(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 0) {
            param_3 = lVar1 + 0x38;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972bd0a FUN_14972bd0a body=208 status=ok
// SIG undefined FUN_14972bd0a(void)

void FUN_14972bd0a(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_14972bddc(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972bddc FUN_14972bddc body=184 status=ok
// SIG undefined FUN_14972bddc(void)

undefined8 *
FUN_14972bddc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  *(undefined4 *)(param_1 + 1) = 0;
  local_38._0_4_ = (undefined4)uVar3;
  local_38._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar4;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 2) = local_38._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 3) = uStack_30._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  *param_1 = &PTR_FUN_14be2da30;
  param_1[7] = 0;
  iVar1 = *(int *)(param_4 + 1);
  uVar2 = *param_4;
  *(int *)(param_1 + 8) = iVar1;
  local_38 = uVar3;
  uStack_30 = uVar4;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_149712a1c(param_1 + 7,iVar1,0);
    FUN_149712a7e(param_1[7],uVar2,iVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972be96 FUN_14972be96 body=62 status=ok
// SIG undefined FUN_14972be96(void)

undefined8 * FUN_14972be96(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2da30;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14972bed4 FUN_14972bed4 body=101 status=ok
// SIG undefined FUN_14972bed4(void)

undefined8 * FUN_14972bed4(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2da40;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972bf3a FUN_14972bf3a body=34 status=ok
// SIG undefined FUN_14972bf3a(void)

undefined8 FUN_14972bf3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14972bf5c FUN_14972bf5c body=101 status=ok
// SIG undefined FUN_14972bf5c(void)

undefined8 * FUN_14972bf5c(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2da40;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972bfc2 FUN_14972bfc2 body=311 status=ok
// SIG undefined FUN_14972bfc2(void)

longlong FUN_14972bfc2(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_14972c0fa(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 0) {
            param_3 = lVar1 + 0x38;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972c0fa FUN_14972c0fa body=208 status=ok
// SIG undefined FUN_14972c0fa(void)

void FUN_14972c0fa(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_14972c1cc(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972c1cc FUN_14972c1cc body=184 status=ok
// SIG undefined FUN_14972c1cc(void)

undefined8 *
FUN_14972c1cc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  *(undefined4 *)(param_1 + 1) = 0;
  local_38._0_4_ = (undefined4)uVar3;
  local_38._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar4;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 2) = local_38._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 3) = uStack_30._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  *param_1 = &PTR_FUN_14be2da50;
  param_1[7] = 0;
  iVar1 = *(int *)(param_4 + 1);
  uVar2 = *param_4;
  *(int *)(param_1 + 8) = iVar1;
  local_38 = uVar3;
  uStack_30 = uVar4;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_140c99534(param_1 + 7,iVar1,0);
    FUN_140c994e3(param_1[7],uVar2,iVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972c286 FUN_14972c286 body=62 status=ok
// SIG undefined FUN_14972c286(void)

undefined8 * FUN_14972c286(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2da50;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14972c2c4 FUN_14972c2c4 body=101 status=ok
// SIG undefined FUN_14972c2c4(void)

undefined8 * FUN_14972c2c4(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2da60;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972c32a FUN_14972c32a body=34 status=ok
// SIG undefined FUN_14972c32a(void)

undefined8 FUN_14972c32a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14972c34c FUN_14972c34c body=101 status=ok
// SIG undefined FUN_14972c34c(void)

undefined8 * FUN_14972c34c(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2da60;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972c3b2 FUN_14972c3b2 body=311 status=ok
// SIG undefined FUN_14972c3b2(void)

longlong FUN_14972c3b2(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_14972c4ea(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 0) {
            param_3 = lVar1 + 0x38;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972c4ea FUN_14972c4ea body=208 status=ok
// SIG undefined FUN_14972c4ea(void)

void FUN_14972c4ea(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_14972c5bc(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972c5bc FUN_14972c5bc body=184 status=ok
// SIG undefined FUN_14972c5bc(void)

undefined8 *
FUN_14972c5bc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  *(undefined4 *)(param_1 + 1) = 0;
  local_38._0_4_ = (undefined4)uVar3;
  local_38._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar4;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 2) = local_38._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 3) = uStack_30._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  *param_1 = &PTR_FUN_14be2da70;
  param_1[7] = 0;
  iVar1 = *(int *)(param_4 + 1);
  uVar2 = *param_4;
  *(int *)(param_1 + 8) = iVar1;
  local_38 = uVar3;
  uStack_30 = uVar4;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1474ba828(param_1 + 7,iVar1,0);
    FUN_1474ba89b(param_1[7],uVar2,iVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972c676 FUN_14972c676 body=74 status=ok
// SIG undefined FUN_14972c676(void)

undefined8 * FUN_14972c676(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2da70;
  FUN_140e285a6(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14972c6c0 FUN_14972c6c0 body=101 status=ok
// SIG undefined FUN_14972c6c0(void)

undefined8 * FUN_14972c6c0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2da80;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972c726 FUN_14972c726 body=34 status=ok
// SIG undefined FUN_14972c726(void)

undefined8 FUN_14972c726(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14972c748 FUN_14972c748 body=101 status=ok
// SIG undefined FUN_14972c748(void)

undefined8 * FUN_14972c748(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2da80;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972c7ae FUN_14972c7ae body=177 status=ok
// SIG undefined FUN_14972c7ae(void)

void FUN_14972c7ae(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_14972bd0a(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972c860 FUN_14972c860 body=177 status=ok
// SIG undefined FUN_14972c860(void)

void FUN_14972c860(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_14972c0fa(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972c912 FUN_14972c912 body=177 status=ok
// SIG undefined FUN_14972c912(void)

void FUN_14972c912(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_14972c4ea(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972c9c4 FUN_14972c9c4 body=177 status=ok
// SIG undefined FUN_14972c9c4(void)

void FUN_14972c9c4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_14972ca76(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972ca76 FUN_14972ca76 body=208 status=ok
// SIG undefined FUN_14972ca76(void)

void FUN_14972ca76(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_14972cb48(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972cb48 FUN_14972cb48 body=190 status=ok
// SIG undefined FUN_14972cb48(void)

undefined8 *
FUN_14972cb48(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *param_1 = &PTR_LAB_14be15148;
  *(undefined4 *)(param_1 + 1) = 3;
  local_28._0_4_ = (undefined4)uVar2;
  local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar3;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_28;
  *(undefined4 *)(param_1 + 2) = local_28._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_20;
  *(undefined4 *)(param_1 + 3) = uStack_20._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  param_1[7] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 8) = 0;
  local_28 = uVar2;
  uStack_20 = uVar3;
  FUN_1405bceb4(param_1 + 7);
  *param_1 = &PTR_FUN_14be2da90;
  param_1[7] = &PTR_FUN_14be2daa0;
  lVar1 = *param_4;
  param_1[9] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972cc08 FUN_14972cc08 body=58 status=ok
// SIG undefined FUN_14972cc08(void)

longlong FUN_14972cc08(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0x38) = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 0x38);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14972cc42 FUN_14972cc42 body=101 status=ok
// SIG undefined FUN_14972cc42(void)

undefined8 * FUN_14972cc42(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2dac0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972cca8 FUN_14972cca8 body=54 status=ok
// SIG undefined FUN_14972cca8(void)

undefined8 * FUN_14972cca8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1 + -7,0x50);
  }
  return param_1 + -7;
}



// FUNCTION 14972ccfc FUN_14972ccfc body=32 status=ok
// SIG undefined FUN_14972ccfc(void)

undefined8 FUN_14972ccfc(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"TContextCacheElementUObject");
  return param_2;
}



// FUNCTION 14972cd1c FUN_14972cd1c body=34 status=ok
// SIG undefined FUN_14972cd1c(void)

undefined8 FUN_14972cd1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14972cd3e FUN_14972cd3e body=101 status=ok
// SIG undefined FUN_14972cd3e(void)

undefined8 * FUN_14972cd3e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2dac0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972cda4 FUN_14972cda4 body=312 status=ok
// SIG undefined FUN_14972cda4(void)

longlong FUN_14972cda4(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_14972cede(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 3) {
            param_3 = lVar1 + 0x48;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972cede FUN_14972cede body=208 status=ok
// SIG undefined FUN_14972cede(void)

void FUN_14972cede(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_14972cfb0(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972cfb0 FUN_14972cfb0 body=190 status=ok
// SIG undefined FUN_14972cfb0(void)

undefined8 *
FUN_14972cfb0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *param_1 = &PTR_LAB_14be15148;
  *(undefined4 *)(param_1 + 1) = 3;
  local_28._0_4_ = (undefined4)uVar2;
  local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar3;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_28;
  *(undefined4 *)(param_1 + 2) = local_28._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_20;
  *(undefined4 *)(param_1 + 3) = uStack_20._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  param_1[7] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 8) = 0;
  local_28 = uVar2;
  uStack_20 = uVar3;
  FUN_1405bceb4(param_1 + 7);
  *param_1 = &PTR_FUN_14be2dad0;
  param_1[7] = &PTR_FUN_14be2dae0;
  lVar1 = *param_4;
  param_1[9] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972d070 FUN_14972d070 body=58 status=ok
// SIG undefined FUN_14972d070(void)

longlong FUN_14972d070(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0x38) = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 0x38);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14972d0aa FUN_14972d0aa body=101 status=ok
// SIG undefined FUN_14972d0aa(void)

undefined8 * FUN_14972d0aa(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2db00;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972d110 FUN_14972d110 body=54 status=ok
// SIG undefined FUN_14972d110(void)

undefined8 * FUN_14972d110(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1 + -7,0x50);
  }
  return param_1 + -7;
}



// FUNCTION 14972d164 FUN_14972d164 body=32 status=ok
// SIG undefined FUN_14972d164(void)

undefined8 FUN_14972d164(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"TContextCacheElementUObject");
  return param_2;
}



// FUNCTION 14972d184 FUN_14972d184 body=34 status=ok
// SIG undefined FUN_14972d184(void)

undefined8 FUN_14972d184(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14972d1a6 FUN_14972d1a6 body=101 status=ok
// SIG undefined FUN_14972d1a6(void)

undefined8 * FUN_14972d1a6(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2db00;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972d20c FUN_14972d20c body=177 status=ok
// SIG undefined FUN_14972d20c(void)

void FUN_14972d20c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_14972d2be(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972d2be FUN_14972d2be body=208 status=ok
// SIG undefined FUN_14972d2be(void)

void FUN_14972d2be(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_14972d390(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972d390 FUN_14972d390 body=184 status=ok
// SIG undefined FUN_14972d390(void)

undefined8 *
FUN_14972d390(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  *(undefined4 *)(param_1 + 1) = 0;
  local_38._0_4_ = (undefined4)uVar3;
  local_38._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar4;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 2) = local_38._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 3) = uStack_30._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  *param_1 = &PTR_FUN_14be2db10;
  param_1[7] = 0;
  iVar1 = *(int *)(param_4 + 1);
  uVar2 = *param_4;
  *(int *)(param_1 + 8) = iVar1;
  local_38 = uVar3;
  uStack_30 = uVar4;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1497134ce(param_1 + 7,iVar1,0);
    FUN_149713540(param_1[7],uVar2,iVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972d44a FUN_14972d44a body=74 status=ok
// SIG undefined FUN_14972d44a(void)

undefined8 * FUN_14972d44a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2db10;
  FUN_145c7a166(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14972d494 FUN_14972d494 body=101 status=ok
// SIG undefined FUN_14972d494(void)

undefined8 * FUN_14972d494(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2db20;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972d4fa FUN_14972d4fa body=34 status=ok
// SIG undefined FUN_14972d4fa(void)

undefined8 FUN_14972d4fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14972d51c FUN_14972d51c body=101 status=ok
// SIG undefined FUN_14972d51c(void)

undefined8 * FUN_14972d51c(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2db20;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972d582 FUN_14972d582 body=311 status=ok
// SIG undefined FUN_14972d582(void)

longlong FUN_14972d582(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_14972d6ba(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 0) {
            param_3 = lVar1 + 0x38;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972d6ba FUN_14972d6ba body=208 status=ok
// SIG undefined FUN_14972d6ba(void)

void FUN_14972d6ba(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_14972d78c(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972d78c FUN_14972d78c body=184 status=ok
// SIG undefined FUN_14972d78c(void)

undefined8 *
FUN_14972d78c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  *(undefined4 *)(param_1 + 1) = 0;
  local_38._0_4_ = (undefined4)uVar3;
  local_38._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar4;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 2) = local_38._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 3) = uStack_30._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  *param_1 = &PTR_FUN_14be2db30;
  param_1[7] = 0;
  iVar1 = *(int *)(param_4 + 1);
  uVar2 = *param_4;
  *(int *)(param_1 + 8) = iVar1;
  local_38 = uVar3;
  uStack_30 = uVar4;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1497134ce(param_1 + 7,iVar1,0);
    FUN_149713540(param_1[7],uVar2,iVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972d846 FUN_14972d846 body=74 status=ok
// SIG undefined FUN_14972d846(void)

undefined8 * FUN_14972d846(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2db30;
  FUN_145c7a166(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14972d890 FUN_14972d890 body=101 status=ok
// SIG undefined FUN_14972d890(void)

undefined8 * FUN_14972d890(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2db40;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972d8f6 FUN_14972d8f6 body=34 status=ok
// SIG undefined FUN_14972d8f6(void)

undefined8 FUN_14972d8f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14972d918 FUN_14972d918 body=101 status=ok
// SIG undefined FUN_14972d918(void)

undefined8 * FUN_14972d918(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2db40;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972d97e FUN_14972d97e body=177 status=ok
// SIG undefined FUN_14972d97e(void)

void FUN_14972d97e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_1496fd0ac(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972da30 FUN_14972da30 body=177 status=ok
// SIG undefined FUN_14972da30(void)

void FUN_14972da30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_14972dae2(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972dae2 FUN_14972dae2 body=223 status=ok
// SIG undefined FUN_14972dae2(void)

void FUN_14972dae2(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be2db50;
  local_48[7] = *param_4;
  *param_4 = 0;
  *(undefined4 *)(local_48 + 8) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)local_48 + 0x44) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972dbc2 FUN_14972dbc2 body=62 status=ok
// SIG undefined FUN_14972dbc2(void)

undefined8 * FUN_14972dbc2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2db50;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14972dc00 FUN_14972dc00 body=101 status=ok
// SIG undefined FUN_14972dc00(void)

undefined8 * FUN_14972dc00(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2db60;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972dc66 FUN_14972dc66 body=34 status=ok
// SIG undefined FUN_14972dc66(void)

undefined8 FUN_14972dc66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14972dc88 FUN_14972dc88 body=101 status=ok
// SIG undefined FUN_14972dc88(void)

undefined8 * FUN_14972dc88(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2db60;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972dcee FUN_14972dcee body=177 status=ok
// SIG undefined FUN_14972dcee(void)

void FUN_14972dcee(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_14972dda0(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972dda0 FUN_14972dda0 body=223 status=ok
// SIG undefined FUN_14972dda0(void)

void FUN_14972dda0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be2db70;
  local_48[7] = *param_4;
  *param_4 = 0;
  *(undefined4 *)(local_48 + 8) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)local_48 + 0x44) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972de80 FUN_14972de80 body=62 status=ok
// SIG undefined FUN_14972de80(void)

undefined8 * FUN_14972de80(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2db70;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14972debe FUN_14972debe body=101 status=ok
// SIG undefined FUN_14972debe(void)

undefined8 * FUN_14972debe(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2db80;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972df24 FUN_14972df24 body=34 status=ok
// SIG undefined FUN_14972df24(void)

undefined8 FUN_14972df24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14972df46 FUN_14972df46 body=101 status=ok
// SIG undefined FUN_14972df46(void)

undefined8 * FUN_14972df46(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2db80;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972dfac FUN_14972dfac body=177 status=ok
// SIG undefined FUN_14972dfac(void)

void FUN_14972dfac(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_14972e05e(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972e05e FUN_14972e05e body=223 status=ok
// SIG undefined FUN_14972e05e(void)

void FUN_14972e05e(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be2db90;
  local_48[7] = *param_4;
  *param_4 = 0;
  *(undefined4 *)(local_48 + 8) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)local_48 + 0x44) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972e13e FUN_14972e13e body=74 status=ok
// SIG undefined FUN_14972e13e(void)

undefined8 * FUN_14972e13e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2db90;
  FUN_140e285a6(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14972e188 FUN_14972e188 body=101 status=ok
// SIG undefined FUN_14972e188(void)

undefined8 * FUN_14972e188(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2dba0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972e1ee FUN_14972e1ee body=34 status=ok
// SIG undefined FUN_14972e1ee(void)

undefined8 FUN_14972e1ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14972e210 FUN_14972e210 body=101 status=ok
// SIG undefined FUN_14972e210(void)

undefined8 * FUN_14972e210(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be2dba0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14972e2a6 FUN_14972e2a6 body=789 status=ok
// SIG undefined FUN_14972e2a6(void)

void FUN_14972e2a6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_3b8 [40];
  undefined8 local_390;
  undefined8 *local_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 local_378;
  undefined8 *local_118;
  undefined8 uStack_110;
  undefined1 local_108 [168];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  puVar1 = (undefined8 *)(param_1 + 0x198);
  puVar7 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3);
  if (puVar7 == puVar1) {
    _uStack_380 = CONCAT44(uStack_37c,0xffffffff);
    local_378 = 0;
    local_388 = puVar1;
    uVar8 = FUN_146fb4872(param_1);
    uVar8 = FUN_1496fcf74(uVar8,param_2,puVar1);
    iVar4 = FUN_1401f66f6(uVar8,DAT_14c9974b0);
    if (iVar4 < 1) {
      _uStack_380 = CONCAT44(uStack_37c,0xffffffff);
      local_378 = 0;
      local_388 = puVar1;
      lVar9 = FUN_146fb78aa(param_1);
      if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_3b8);
      }
    }
    else {
      puVar7 = (undefined8 *)FUN_146eab21e(uVar8);
      if (puVar7 != (undefined8 *)0x0) {
        FUN_14075a44e(local_108,puVar7);
        FUN_141051328(local_108);
        puVar2 = (undefined8 *)(param_1 + 0x248);
        local_118 = (undefined8 *)0x0;
        uStack_110 = 0;
        uStack_380 = 0xffffffff;
        local_378 = 0;
        local_388 = puVar2;
        lVar9 = FUN_146fb4872(param_1);
        local_390 = param_2;
        if (*(longlong *)(lVar9 + 0x48) == 0) {
          uVar5 = FUN_14172d9e4(local_108);
          uVar3 = uStack_110;
          lVar9 = (longlong)(int)uStack_110;
          uVar6 = (int)uStack_110 + 1;
          uStack_110 = CONCAT44(uStack_110._4_4_,uVar6);
          if (uStack_110._4_4_ < uVar6) {
            FUN_1446f48e2(&local_118,uVar3 & 0xffffffff);
          }
          *(undefined4 *)((longlong)local_118 + lVar9 * 4) = uVar5;
        }
        else {
          uStack_380 = 0xffffffff;
          local_378 = 0;
          local_388 = puVar2;
          uVar8 = FUN_146fb4872(param_1);
          uVar8 = FUN_14972af6e(uVar8,param_2,puVar2);
          FUN_146fd58e4(uVar8,&local_388);
          if (local_118 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          local_118 = local_388;
          uStack_110 = CONCAT44(uStack_37c,uStack_380);
          FUN_146ea9b2e(&local_388,puVar7);
          FUN_146eaa24a(&local_388,&local_118,1);
          FUN_146eaa92a(&local_388,&local_118,2);
        }
        puVar2 = local_118;
        lVar9 = (longlong)(int)uStack_110;
        if (lVar9 != 0) {
          lVar10 = 0;
          do {
            uVar5 = *(undefined4 *)((longlong)puVar2 + lVar10);
            local_388 = (undefined8 *)0x0;
            uStack_380 = 0;
            uStack_37c = 0;
            FUN_146ebd262(puVar7,uVar5,1,&local_388);
            FUN_146ebc92a(puVar7,uVar5,&local_388);
            if (local_388 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            lVar10 = lVar10 + 4;
          } while (lVar9 * 4 != lVar10);
        }
        FUN_146ebda4e(puVar7);
        FUN_141051328(local_108);
        _uStack_380 = CONCAT44(uStack_37c,0xffffffff);
        local_378 = 0;
        local_388 = puVar1;
        lVar9 = FUN_146fb78aa(param_1);
        if (lVar9 != 0) {
          FUN_14972d97e(lVar9,puVar7,local_390);
        }
        if (local_118 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        (**(code **)*puVar7)(puVar7,1);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972e5e6 FUN_14972e5e6 body=534 status=ok
// SIG undefined FUN_14972e5e6(void)

void FUN_14972e5e6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_398 [32];
  longlong local_378;
  undefined4 local_370;
  undefined8 local_368;
  longlong local_108;
  int local_100;
  undefined1 local_f8 [168];
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_398;
  lVar6 = param_1 + 0x198;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == lVar6) {
    local_370 = 0xffffffff;
    local_368 = 0;
    local_378 = lVar6;
    uVar3 = FUN_146fb4872(param_1);
    uVar3 = FUN_1496fcf74(uVar3,param_2,lVar6);
    iVar1 = FUN_1401f66f6(uVar3,DAT_14c9974b0);
    if (iVar1 < 1) {
      local_370 = 0xffffffff;
      local_368 = 0;
      local_378 = lVar6;
      lVar6 = FUN_146fb78aa(param_1);
      if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_398);
      }
    }
    else {
      local_370 = 0xffffffff;
      local_368 = 0;
      local_378 = param_1 + 0x248;
      uVar4 = FUN_146fb4872(param_1);
      uVar4 = FUN_14972af6e(uVar4,param_2,param_1 + 0x248);
      puVar5 = (undefined8 *)FUN_146eab21e(uVar3);
      if (puVar5 != (undefined8 *)0x0) {
        FUN_14075a44e(local_f8,puVar5);
        FUN_141051328(local_f8);
        FUN_146fd58e4(uVar4,&local_108);
        FUN_146ea9b2e(&local_378,puVar5);
        FUN_146eaa9a6(&local_378,&local_108,0);
        FUN_146ea9f0e(&local_378,&local_108);
        if (local_100 != 0) {
          FUN_146ebcd7e(puVar5,&local_108);
          FUN_146ebda4e(puVar5);
          FUN_141051328(local_f8);
        }
        local_48 = 0xffffffff;
        local_40 = 0;
        local_50 = lVar6;
        lVar6 = FUN_146fb78aa(param_1);
        if (lVar6 != 0) {
          FUN_14972d97e(lVar6,puVar5,param_2);
        }
        if (local_108 != 0) {
          FUN_1400020a8();
        }
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972e81c FUN_14972e81c body=329 status=ok
// SIG undefined FUN_14972e81c(void)

void FUN_14972e81c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = param_1 + 0x198;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == lVar5) {
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = lVar5;
    uVar2 = FUN_146fb4872(param_1,&local_60);
    uVar2 = FUN_1496fcf74(uVar2,param_2,lVar5);
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = param_1 + 0x248;
    uVar3 = FUN_146fb4872(param_1,&local_60);
    uVar3 = FUN_14972af6e(uVar3,param_2,param_1 + 0x248);
    puVar4 = (undefined8 *)FUN_146eab21e(uVar2);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_146fd58e4(uVar3,local_70);
      FUN_149705cda(puVar4,local_70);
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = lVar5;
      lVar5 = FUN_146fb78aa(param_1);
      if (lVar5 != 0) {
        FUN_14972d97e(lVar5,puVar4,param_2);
      }
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972e966 FUN_14972e966 body=812 status=ok
// SIG undefined FUN_14972e966(void)

void FUN_14972e966(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  float *pfVar9;
  undefined1 *puVar10;
  undefined1 auStack_198 [32];
  uint local_178;
  undefined1 local_170;
  undefined1 local_168;
  undefined1 local_15a;
  undefined1 local_159;
  longlong local_158;
  undefined4 local_150;
  longlong local_148;
  undefined8 uStack_140;
  longlong local_130;
  undefined4 local_128;
  longlong local_120;
  undefined4 local_118;
  undefined8 local_110;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar8 = param_1 + 0x198;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar4 == lVar8) {
    local_118 = 0xffffffff;
    local_110 = 0;
    local_120 = lVar8;
    uVar5 = FUN_146fb4872(param_1,&local_120);
    uVar5 = FUN_1496fcf74(uVar5,param_2,lVar8);
    local_118 = 0xffffffff;
    local_110 = 0;
    local_120 = param_1 + 0x248;
    uVar6 = FUN_146fb4872(param_1,&local_120);
    uVar6 = FUN_14972af6e(uVar6,param_2,param_1 + 0x248);
    iVar3 = FUN_146fd5e5c(uVar6);
    if (iVar3 != 0) {
      puVar7 = (undefined8 *)FUN_146eab21e(uVar5);
      if (puVar7 != (undefined8 *)0x0) {
        FUN_14075a44e(&local_120,puVar7);
        FUN_141051328(&local_120);
        local_70 = 0xffffffff;
        local_68 = 0;
        local_78 = param_1 + 0x26c;
        uVar5 = FUN_146fb4872(param_1,&local_78);
        pfVar9 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x26c);
        dVar2 = (double)*pfVar9;
        local_70 = 0xffffffff;
        local_68 = 0;
        local_78 = param_1 + 0x270;
        uVar5 = FUN_146fb4872(param_1,&local_78);
        puVar10 = (undefined1 *)FUN_146fca358(uVar5,param_2,param_1 + 0x270);
        local_159 = *puVar10;
        local_70 = 0xffffffff;
        local_68 = 0;
        local_78 = param_1 + 0x271;
        uVar5 = FUN_146fb4872(param_1,&local_78);
        puVar10 = (undefined1 *)FUN_146fca358(uVar5,param_2,param_1 + 0x271);
        local_15a = *puVar10;
        cVar1 = *(char *)(param_1 + 0x268);
        FUN_146fd58e4(uVar6,&local_130);
        local_148 = 0;
        uStack_140 = 0;
        local_78 = 0;
        local_70 = 0;
        local_178 = CONCAT31(local_178._1_3_,1);
        FUN_1484969b2(puVar7,&local_78,&local_148,0x3ff0000000000000);
        local_78 = local_130;
        local_70 = local_128;
        local_158 = local_148;
        local_150 = (undefined4)uStack_140;
        local_168 = local_15a;
        local_170 = local_159;
        local_178 = (uint)(cVar1 != '\0');
        FUN_148496d56(puVar7,&local_158,dVar2 * dVar2 * dVar2,&local_78);
        local_70 = 0xffffffff;
        local_68 = 0;
        local_78 = lVar8;
        lVar8 = FUN_146fb78aa(param_1,&local_78);
        if (lVar8 != 0) {
          FUN_14972d97e(lVar8,puVar7,param_2);
        }
        if (local_148 != 0) {
          FUN_1400020a8();
        }
        if (local_130 != 0) {
          FUN_1400020a8();
        }
        (**(code **)*puVar7)(puVar7,1);
        goto LAB_14972e9af;
      }
    }
    local_118 = 0xffffffff;
    local_110 = 0;
    local_120 = lVar8;
    lVar8 = FUN_146fb78aa(param_1);
    if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_198);
    }
  }
LAB_14972e9af:
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972ecbc FUN_14972ecbc body=368 status=ok
// SIG undefined FUN_14972ecbc(void)

void FUN_14972ecbc(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_138 [32];
  longlong local_118 [2];
  longlong local_108;
  undefined4 local_100;
  undefined8 local_f8;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar5 = param_1 + 0x198;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == lVar5) {
    local_100 = 0xffffffff;
    local_f8 = 0;
    local_108 = lVar5;
    uVar2 = FUN_146fb4872(param_1,&local_108);
    uVar2 = FUN_1496fcf74(uVar2,param_2,lVar5);
    local_100 = 0xffffffff;
    local_f8 = 0;
    local_108 = param_1 + 0x248;
    uVar3 = FUN_146fb4872(param_1,&local_108);
    uVar3 = FUN_14972af6e(uVar3,param_2,param_1 + 0x248);
    puVar4 = (undefined8 *)FUN_146eab21e(uVar2);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_14075a44e(&local_108,puVar4);
      FUN_141051328(&local_108);
      FUN_146fd58e4(uVar3,local_118);
      FUN_149705dd4(puVar4,local_118);
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = lVar5;
      lVar5 = FUN_146fb78aa(param_1);
      if (lVar5 != 0) {
        FUN_14972d97e(lVar5,puVar4,param_2);
      }
      if (local_118[0] != 0) {
        FUN_1400020a8();
      }
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972ee2e FUN_14972ee2e body=311 status=ok
// SIG undefined FUN_14972ee2e(void)

void FUN_14972ee2e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_1 + 0x198;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == lVar4) {
    local_40 = 0xffffffff;
    local_38 = 0;
    local_48 = lVar4;
    uVar3 = FUN_146fb4872(param_1);
    uVar3 = FUN_1496fcf74(uVar3,param_2,lVar4);
    iVar1 = FUN_1401f66f6(uVar3,DAT_14c9974a8);
    if (iVar1 == 1) {
      lVar2 = FUN_146eab21e(uVar3);
      if (lVar2 != 0) {
        FUN_146ebba8c(lVar2,0,1);
        local_40 = 0xffffffff;
        local_38 = 0;
        local_48 = lVar4;
        lVar4 = FUN_146fb78aa(param_1);
        if (lVar4 != 0) {
          FUN_14972d97e(lVar4,lVar2,param_2);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
    local_40 = 0xffffffff;
    local_38 = 0;
    local_48 = lVar4;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972ef98 FUN_14972ef98 body=558 status=ok
// SIG undefined FUN_14972ef98(void)

void FUN_14972ef98(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90 [2];
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = param_1 + 0x198;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == lVar5) {
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = lVar5;
    uVar3 = FUN_146fb4872(param_1);
    uVar3 = FUN_1496fcf74(uVar3,param_2,lVar5);
    puVar4 = (undefined8 *)FUN_146eab21e(uVar3);
    if (puVar4 != (undefined8 *)0x0) {
      local_78 = 0xffffffff;
      local_70 = 0;
      local_98 = uVar3;
      local_80 = param_1 + 0x248;
      uVar3 = FUN_146fb4872(param_1,&local_80);
      uVar3 = FUN_14972af6e(uVar3,param_2,param_1 + 0x248);
      local_58 = 0;
      uStack_50 = 0;
      FUN_144a69486(&local_68,uVar3);
      local_78 = 0xffffffff;
      local_70 = 0;
      local_80 = param_1 + 0x268;
      uVar3 = FUN_146fb4872(param_1,&local_80);
      piVar6 = (int *)FUN_146fca67a(uVar3,param_2,param_1 + 0x268);
      iVar7 = 1;
      if (1 < *piVar6) {
        iVar7 = *piVar6;
      }
      FUN_146fd58e4(&local_68,local_90);
      cVar1 = FUN_14970606e(puVar4,local_90,iVar7);
      if (cVar1 != '\0') {
        local_78 = 0xffffffff;
        local_70 = 0;
        local_80 = lVar5;
        lVar5 = FUN_146fb78aa(param_1);
        if (lVar5 != 0) {
          FUN_14972d97e(lVar5,puVar4,param_2);
        }
        if (local_90[0] != 0) {
          FUN_1400020a8();
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        (**(code **)*puVar4)(puVar4,1);
        goto LAB_14972efd2;
      }
      if (local_90[0] != 0) {
        FUN_1400020a8();
      }
      uVar3 = local_98;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      (**(code **)*puVar4)(puVar4,1);
    }
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = lVar5;
    lVar5 = FUN_146fb78aa(param_1);
    if (lVar5 != 0) {
      FUN_14972d97e(lVar5,uVar3,param_2);
    }
  }
LAB_14972efd2:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972f1e0 FUN_14972f1e0 body=265 status=ok
// SIG undefined FUN_14972f1e0(void)

void FUN_14972f1e0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_68 [2];
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1b0) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    puVar3 = (undefined8 *)FUN_14979981c(uVar2,param_2,param_1 + 0x198);
    local_78 = puVar3[2];
    FUN_140002266(local_68,L"X=%3.3f Y=%3.3f Z=%3.3f",*puVar3,puVar3[1]);
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x1b0;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1496fde88(lVar1,local_68,param_2);
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972f2ea FUN_14972f2ea body=244 status=ok
// SIG undefined FUN_14972f2ea(void)

void FUN_14972f2ea(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1a0) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    FUN_140002266(local_68,&DAT_149e02016,(double)*pfVar3);
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x1a0;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1496fde88(lVar1,local_68,param_2);
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972f3e0 FUN_14972f3e0 body=238 status=ok
// SIG undefined FUN_14972f3e0(void)

void FUN_14972f3e0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1a0) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    puVar3 = (undefined4 *)FUN_146fca67a(uVar2,param_2,param_1 + 0x198);
    FUN_140002266(local_68,&DAT_149e063bc,*puVar3);
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x1a0;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1496fde88(lVar1,local_68,param_2);
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972f4d0 FUN_14972f4d0 body=256 status=ok
// SIG undefined FUN_14972f4d0(void)

void FUN_14972f4d0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char *pcVar3;
  wchar_t *pwVar4;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1a0) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    pcVar3 = (char *)FUN_146fca358(uVar2,param_2,param_1 + 0x198);
    pwVar4 = L"false";
    if (*pcVar3 != '\0') {
      pwVar4 = L"true";
    }
    FUN_140002266(local_68,&DAT_149e0625e,pwVar4);
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x1a0;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1496fde88(lVar1,local_68,param_2);
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972f5d2 FUN_14972f5d2 body=213 status=ok
// SIG undefined FUN_14972f5d2(void)

void FUN_14972f5d2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined1 auStack_88 [44];
  float local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    piVar3 = (int *)FUN_146fca67a(uVar2,param_2,param_1 + 0x198);
    local_5c = (float)*piVar3;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1496fe392(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972f6a8 FUN_14972f6a8 body=213 status=ok
// SIG undefined FUN_14972f6a8(void)

void FUN_14972f6a8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined1 auStack_88 [40];
  double local_60;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1a0) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    piVar3 = (int *)FUN_146fca67a(uVar2,param_2,param_1 + 0x198);
    local_60 = (double)*piVar3;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x1a0;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_149799954(lVar1,&local_60,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972f77e FUN_14972f77e body=213 status=ok
// SIG undefined FUN_14972f77e(void)

void FUN_14972f77e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 auStack_88 [40];
  double local_60;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1a0) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    local_60 = (double)*pfVar3;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x1a0;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_149799954(lVar1,&local_60,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972f854 FUN_14972f854 body=310 status=ok
// SIG undefined FUN_14972f854(void)

void FUN_14972f854(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_68 [36];
  int local_44;
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 != param_1 + 0x1a0) goto LAB_14972f887;
  local_38 = 0xffffffff;
  local_30 = 0;
  local_40 = param_1 + 0x19c;
  uVar2 = FUN_146fb4872(param_1);
  pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x19c);
  if (3 < *(byte *)(param_1 + 0x198)) goto LAB_14972f887;
  fVar4 = *pfVar3;
  switch(*(byte *)(param_1 + 0x198)) {
  case 0:
    fVar4 = fVar4 + fVar4 + -0.5;
    goto LAB_14972f917;
  case 1:
    local_44 = -((int)ROUND(-0.5 - (fVar4 + fVar4)) >> 1);
    break;
  case 2:
    fVar4 = fVar4 + fVar4 + 0.5;
LAB_14972f917:
    local_44 = (int)ROUND(fVar4) >> 1;
    break;
  case 3:
    auVar5 = roundps(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4),3);
    local_44 = (int)auVar5._0_4_;
  }
  local_38 = 0xffffffff;
  local_30 = 0;
  local_40 = param_1 + 0x1a0;
  lVar1 = FUN_146fb78aa(param_1);
  if (lVar1 != 0) {
    FUN_149700500(lVar1,&local_44,param_2);
  }
LAB_14972f887:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972f98c FUN_14972f98c body=211 status=ok
// SIG undefined FUN_14972f98c(void)

void FUN_14972f98c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    piVar3 = (int *)FUN_146fca67a(uVar2,param_2,param_1 + 0x198);
    local_59 = *piVar3 != 0;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_149799bdc(lVar1,&local_59,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972fa60 FUN_14972fa60 body=210 status=ok
// SIG undefined FUN_14972fa60(void)

void FUN_14972fa60(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined1 auStack_88 [44];
  uint local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    pbVar3 = (byte *)FUN_146fca358(uVar2,param_2,param_1 + 0x198);
    local_5c = (uint)*pbVar3;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1497006ec(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972fb3c FUN_14972fb3c body=491 status=ok
// SIG undefined FUN_14972fb3c(void)

void FUN_14972fb3c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_2c8 [32];
  undefined1 local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  longlong local_290;
  undefined4 local_288;
  longlong local_280;
  undefined4 local_278;
  undefined8 local_270;
  longlong local_268;
  undefined4 local_260;
  undefined8 local_258;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x268) {
    local_260 = 0xffffffff;
    local_258 = 0;
    local_268 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_268);
    local_2a0 = FUN_1496fcf74(uVar2,param_2,param_1 + 0x198);
    lVar1 = param_1 + 0x248;
    local_260 = 0xffffffff;
    local_258 = 0;
    local_268 = lVar1;
    lVar3 = FUN_146fb4872(param_1,&local_268);
    lVar3 = *(longlong *)(lVar3 + 0x48);
    lVar4 = 0;
    uVar5 = 0;
    if (lVar3 != 0) {
      local_260 = 0xffffffff;
      local_258 = 0;
      local_268 = lVar1;
      uVar2 = FUN_146fb4872(param_1);
      uVar2 = FUN_14972af6e(uVar2,param_2,lVar1);
      FUN_146fd58e4(uVar2,&local_268);
      lVar4 = local_268;
      uVar5 = local_260;
    }
    local_2a8 = 0;
    FUN_1411b354a(&local_268,0,0,0);
    local_290 = lVar4;
    local_288 = uVar5;
    FUN_149706552(local_2a0,&local_268,CONCAT71(0xffffff,lVar3 != 0));
    lVar1 = FUN_1484b7d1a(DAT_14c951640);
    local_298 = lVar1;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    FUN_1484b1fb6(lVar1,&local_268);
    local_278 = 0xffffffff;
    local_270 = 0;
    local_280 = param_1 + 0x268;
    lVar1 = FUN_146fb78aa(param_1);
    if (lVar1 != 0) {
      FUN_14979ab44(lVar1,&local_298,param_2);
    }
    FUN_141082778(&local_268);
    if (lVar4 != 0) {
      FUN_1400020a8(lVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972fd28 FUN_14972fd28 body=1444 status=ok
// SIG undefined FUN_14972fd28(void)

void FUN_14972fd28(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_978 [32];
  undefined8 *local_958;
  undefined1 local_950;
  undefined8 local_948;
  longlong local_940;
  undefined4 local_938;
  undefined4 uStack_934;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  undefined8 local_928;
  undefined **local_920;
  undefined1 local_918 [152];
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 local_850;
  undefined8 local_848;
  undefined8 local_840;
  undefined8 local_838;
  int local_830;
  int local_82c;
  int local_828;
  undefined2 local_824;
  float local_820;
  undefined4 uStack_81c;
  longlong local_818;
  int local_810;
  longlong local_808;
  undefined1 *local_7f8;
  longlong local_7f0;
  undefined1 *local_7e8 [2];
  undefined8 local_7d8;
  undefined **local_7c8;
  undefined4 local_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined8 local_7b0;
  undefined8 local_7a8 [2];
  undefined8 local_798;
  longlong local_768;
  undefined4 local_760;
  undefined8 local_758;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_528;
  undefined4 local_520;
  undefined8 local_51c;
  undefined4 local_514;
  undefined8 local_508;
  undefined4 local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined8 local_4cc;
  undefined4 local_4c4;
  undefined8 local_4b8;
  undefined4 local_4b0;
  undefined2 local_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_480;
  undefined4 local_478;
  undefined8 local_474;
  undefined4 local_46c;
  undefined8 local_460;
  undefined4 local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_430;
  undefined4 local_428;
  undefined8 local_424;
  undefined4 local_41c;
  undefined8 local_410;
  undefined4 local_408;
  undefined2 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined8 local_3cc;
  undefined4 local_3c4;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_37c;
  undefined4 local_374;
  undefined8 local_368;
  undefined4 local_360;
  undefined1 local_358;
  undefined1 local_357;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_330;
  undefined4 local_328;
  undefined8 local_324;
  undefined4 local_31c;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d4;
  undefined4 local_2cc;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined2 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_280 [544];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_978;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == param_1 + 0x1c0) {
    local_940 = param_1 + 0x1c0;
    lVar2 = FUN_1484b7d1a(DAT_14c951640);
    local_7f0 = lVar2;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    FUN_1484b81a6(lVar2);
    local_958 = (undefined8 *)((ulonglong)local_958 & 0xffffffffffffff00);
    FUN_1411b354a(local_280,0,0,0);
    local_528 = 0;
    local_520 = 0;
    local_548 = 0;
    uStack_540 = 0;
    local_51c = 0xffffffff00000080;
    local_514 = 0;
    local_508 = 0;
    local_500 = 0;
    local_4d8 = 0;
    local_4d0 = 0;
    local_4f8 = 0;
    uStack_4f0 = 0;
    local_4cc = 0xffffffff00000080;
    local_4c4 = 0;
    local_4b8 = 0;
    local_4b0 = 0;
    local_4a8 = 0x101;
    local_480 = 0;
    local_478 = 0;
    local_4a0 = 0;
    uStack_498 = 0;
    local_474 = 0xffffffff00000080;
    local_46c = 0;
    local_460 = 0;
    local_458 = 0;
    local_430 = 0;
    local_428 = 0;
    local_450 = 0;
    uStack_448 = 0;
    local_424 = 0xffffffff00000080;
    local_41c = 0;
    local_410 = 0;
    local_408 = 0;
    local_400 = 0x101;
    local_3d8 = 0;
    local_3d0 = 0;
    local_3f8 = 0;
    uStack_3f0 = 0;
    local_3cc = 0xffffffff00000080;
    local_3c4 = 0;
    local_3b8 = 0;
    local_3b0 = 0;
    local_388 = 0;
    local_380 = 0;
    local_3a8 = 0;
    uStack_3a0 = 0;
    local_37c = 0xffffffff00000080;
    local_374 = 0;
    local_368 = 0;
    local_360 = 0;
    local_357 = 1;
    local_358 = 1;
    local_330 = 0;
    local_328 = 0;
    local_350 = 0;
    uStack_348 = 0;
    local_324 = 0xffffffff00000080;
    local_31c = 0;
    local_310 = 0;
    local_308 = 0;
    local_2e0 = 0;
    local_2d8 = 0;
    local_300 = 0;
    uStack_2f8 = 0;
    local_2d4 = 0xffffffff00000080;
    local_2cc = 0;
    local_2c0 = 0;
    local_2b8 = 0;
    local_2b0 = 0x101;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_298 = 0;
    uStack_290 = 0;
    local_760 = 0xffffffff;
    local_758 = 0;
    local_7f8 = local_280;
    local_768 = param_1 + 0x198;
    uVar3 = FUN_146fb4872(param_1);
    local_948 = param_2;
    FUN_149799e60(uVar3,param_2,param_1 + 0x198);
    FUN_14975f788(&local_818);
    if (0 < local_810) {
      lVar2 = 0;
      lVar4 = 0;
      do {
        memset(local_918,0,0x91);
        local_880 = DAT_14c8464e0;
        uStack_878 = DAT_14c8464e8;
        local_870 = DAT_14c8464f0;
        local_858 = 0;
        local_868 = 0;
        uStack_860 = 0;
        local_850 = 0x3ff0000000000000;
        local_848 = 0x3ff0000000000000;
        local_840 = 0x3ff0000000000000;
        local_838 = 0x3ff0000000000000;
        local_824 = 1;
        local_920 = &PTR_FUN_14ae75170;
        local_830 = *(int *)(param_1 + 0x1b8);
        if (local_830 < 3) {
          local_830 = 2;
        }
        _local_820 = CONCAT44(1,(float)*(double *)(local_808 + lVar4 * 8));
        local_928 = *(undefined8 *)(local_818 + 0x10 + lVar2);
        puVar1 = (undefined4 *)(local_818 + lVar2);
        local_938 = *puVar1;
        uStack_934 = puVar1[1];
        uStack_930 = puVar1[2];
        uStack_92c = puVar1[3];
        local_82c = local_830;
        local_828 = local_830;
        uVar3 = FUN_148397678(&local_920);
        FUN_146c00d92(&local_768,uVar3);
        local_7a8[0] = 0;
        local_798 = 0;
        local_7d8 = 0;
        local_7c8 = &PTR_LAB_14be6c1c0;
        local_7b0 = local_928;
        local_7c0 = local_938;
        uStack_7bc = uStack_934;
        uStack_7b8 = uStack_930;
        uStack_7b4 = uStack_92c;
        local_7e8[0] = &LAB_144613300;
        local_958 = local_7a8;
        local_950 = 0;
        FUN_146bcbbdc(&local_7f8,&local_768,&local_548,local_7e8);
        FUN_146bccf46(&local_548);
        FUN_141082778(&local_768);
        FUN_146bd8050(&local_920);
        lVar4 = lVar4 + 1;
        lVar2 = lVar2 + 0x18;
      } while (lVar4 < local_810);
    }
    FUN_1484b1fb6(local_7f0,local_280);
    local_768 = local_940;
    local_760 = 0xffffffff;
    local_758 = 0;
    lVar2 = FUN_146fb78aa(param_1);
    if (lVar2 != 0) {
      FUN_14979ab44(lVar2,&local_7f0,local_948);
    }
    if (local_808 != 0) {
      FUN_1400020a8();
    }
    if (local_818 != 0) {
      FUN_1400020a8();
    }
    FUN_146bfdcfe(&local_548);
    FUN_141082778(local_280);
  }
  if ((local_60 ^ (ulonglong)auStack_978) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497302ce FUN_1497302ce body=797 status=ok
// SIG undefined FUN_1497302ce(void)

void FUN_1497302ce(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  char *pcVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_88;
  longlong local_80;
  longlong local_78 [3];
  longlong local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar4 == param_1 + 0x1a8) {
    local_58 = -1;
    local_50 = 0;
    local_80 = param_1 + 0x1a8;
    local_60 = param_1 + 0x198;
    uVar5 = FUN_146fb4872(param_1);
    local_88 = param_2;
    plVar6 = (longlong *)FUN_14979af18(uVar5,param_2,param_1 + 0x198);
    lVar4 = *(longlong *)(*plVar6 + 0x98);
    local_78[0] = 0;
    local_78[1] = 0;
    FUN_1446f8bcc(local_78,*(int *)(lVar4 + 0x170) * 0x18 +
                           (*(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24)) * 0x28);
    if (0 < *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24)) {
      uVar11 = 0;
      do {
        puVar9 = &DAT_14c8464e0;
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar11 >> 9) * 8) +
                               (ulonglong)(uVar11 & 0x1ff) * 2) - 1U) < 0xfffe) {
          puVar9 = (undefined8 *)
                   ((ulonglong)((uVar11 & 0x1ff) * 0x18) +
                   *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar11 >> 9) * 8));
        }
        local_98 = puVar9[2];
        FUN_140002266(&local_60,L"v %f %f %f\n",*puVar9,puVar9[1]);
        iVar8 = local_58 + -1;
        if (local_58 == 0) {
          iVar8 = 0;
        }
        FUN_1400020e8(local_78,local_60,iVar8);
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24));
    }
    local_58 = -1;
    local_50 = 0;
    local_60 = param_1 + 0x1a0;
    uVar5 = FUN_146fb4872(param_1);
    pcVar7 = (char *)FUN_146fca358(uVar5,local_88,param_1 + 0x1a0);
    iVar8 = *(int *)(lVar4 + 0x140);
    iVar10 = *(int *)(lVar4 + 0x144);
    if (0 < iVar8 * 0x200 + iVar10) {
      cVar1 = *pcVar7;
      uVar11 = 0;
      do {
        uVar12 = (ulonglong)(uVar11 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar4 + 0x148) + (ulonglong)(uVar11 >> 9) * 8) +
                               uVar12 * 2) - 1U) < 0xfffe) {
          lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x130) + (ulonglong)(uVar11 >> 9) * 8);
          iVar8 = *(int *)(lVar2 + 4 + uVar12 * 0xc);
          iVar10 = *(int *)(lVar2 + 8 + uVar12 * 0xc);
          iVar3 = iVar8;
          if (cVar1 != '\0') {
            iVar3 = iVar10;
            iVar10 = iVar8;
          }
          local_98 = CONCAT44(local_98._4_4_,iVar3 + 1);
          FUN_140002266(&local_60,L"f %d %d %d\n",*(int *)(lVar2 + uVar12 * 0xc) + 1,iVar10 + 1);
          iVar8 = local_58 + -1;
          if (local_58 == 0) {
            iVar8 = 0;
          }
          FUN_1400020e8(local_78,local_60,iVar8);
          if (local_60 != 0) {
            FUN_1400020a8();
          }
          iVar8 = *(int *)(lVar4 + 0x140);
          iVar10 = *(int *)(lVar4 + 0x144);
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < iVar8 * 0x200 + iVar10);
    }
    local_60 = local_80;
    local_58 = 0xffffffff;
    local_50 = 0;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_14979b374(lVar4,local_78,local_88);
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497305ec FUN_1497305ec body=2227 status=ok
// SIG undefined FUN_1497305ec(void)

void FUN_1497305ec(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined1 local_160;
  longlong *local_158;
  longlong *local_150;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong local_108 [4];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar11 = param_1 + 0x218;
  lVar6 = (**(code **)(*param_3 + 0x20))(param_3);
  if ((((lVar6 == lVar11) ||
       (lVar6 = (**(code **)(*param_3 + 0x20))(param_3), lVar6 == param_1 + 0x228)) ||
      (lVar6 = (**(code **)(*param_3 + 0x20))(param_3), lVar6 == param_1 + 0x238)) ||
     (lVar6 = (**(code **)(*param_3 + 0x20))(param_3), lVar6 == param_1 + 600)) {
    uStack_c0._0_4_ = 0xffffffff;
    local_b8 = 0;
    local_c8 = param_1 + 0x198;
    uVar7 = FUN_146fb4872(param_1,&local_c8);
    local_138 = FUN_149729486(uVar7,param_2,param_1 + 0x198);
    lVar6 = param_1 + 0x1a8;
    uStack_c0._0_4_ = 0xffffffff;
    local_b8 = 0;
    local_148 = lVar6;
    local_c8 = lVar6;
    uVar7 = FUN_146fb4872(param_1,&local_c8);
    local_128 = FUN_14972a204(uVar7,param_2,lVar6);
    uStack_c0._0_4_ = 0xffffffff;
    local_b8 = 0;
    local_c8 = param_1 + 0x1c8;
    uVar7 = FUN_146fb4872(param_1,&local_c8);
    local_130 = FUN_14979ee4a(uVar7,param_2,param_1 + 0x1c8);
    uStack_c0._0_4_ = 0xffffffff;
    local_b8 = 0;
    local_c8 = param_1 + 0x1e8;
    uVar7 = FUN_146fb4872(param_1,&local_c8);
    lVar8 = FUN_14979981c(uVar7,param_2,param_1 + 0x1e8);
    uStack_c0._0_4_ = 0xffffffff;
    local_b8 = 0;
    local_c8 = param_1 + 0x200;
    uVar7 = FUN_146fb4872(param_1,&local_c8);
    puVar9 = (undefined4 *)FUN_14972a54c(uVar7,param_2,param_1 + 0x200);
    uVar1 = *puVar9;
    uStack_c0._0_4_ = 0xffffffff;
    local_b8 = 0;
    local_c8 = param_1 + 0x204;
    uVar7 = FUN_146fb4872(param_1,&local_c8);
    puVar9 = (undefined4 *)FUN_14972a54c(uVar7,param_2,param_1 + 0x204);
    uVar2 = *puVar9;
    uStack_c0._0_4_ = 0xffffffff;
    local_b8 = 0;
    local_c8 = param_1 + 0x208;
    uVar7 = FUN_146fb4872(param_1,&local_c8);
    puVar9 = (undefined4 *)FUN_14972a54c(uVar7,param_2,param_1 + 0x208);
    uVar3 = *puVar9;
    uStack_c0._0_4_ = 0xffffffff;
    local_b8 = 0;
    local_c8 = param_1 + 0x20c;
    uVar7 = FUN_146fb4872(param_1,&local_c8);
    local_140 = param_2;
    puVar9 = (undefined4 *)FUN_14972a54c(uVar7,param_2,param_1 + 0x20c);
    uVar4 = *puVar9;
    local_c8 = local_148;
    uStack_c0 = CONCAT44(uStack_c0._4_4_,0xffffffff);
    local_b8 = 0;
    lVar10 = FUN_146fb4872(param_1,&local_c8);
    uVar7 = local_130;
    lVar6 = local_138;
    iVar5 = *(int *)(local_138 + 8);
    if (*(longlong *)(lVar10 + 0x48) == 0) {
      local_b8 = 0;
      uStack_b0 = 0x8000000000;
      FUN_146fd579c(&local_c8,iVar5,0);
      local_108[2] = 0;
      local_108[3] = 0;
      local_e8 = (ulonglong)local_e8._4_4_ << 0x20;
      FUN_1448158c6(local_108 + 2,&local_e8,iVar5);
      local_160 = *(undefined1 *)(param_1 + 0x210);
      local_178 = uVar2;
      local_170 = uVar3;
      local_168 = uVar4;
      local_158 = &local_c8;
      local_150 = local_108 + 2;
      FUN_1446073f4(lVar6,local_130,lVar8,uVar1);
      uStack_e0 = CONCAT44(uStack_e0._4_4_,0xffffffff);
      local_d8 = 0;
      local_e8 = lVar11;
      lVar11 = FUN_146fb78aa(param_1,&local_e8);
      uVar7 = local_140;
      if (lVar11 != 0) {
        FUN_14972a684(lVar11,local_108 + 2,local_140);
      }
      local_e8 = param_1 + 0x228;
      local_108[0] = 0;
      local_108[1] = 0;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,0xffffffff);
      local_d8 = 0;
      lVar11 = FUN_146fb78aa(param_1);
      if ((lVar11 != 0) && (FUN_1496f8d2a(lVar11,local_108,uVar7), local_108[0] != 0)) {
        FUN_1400020a8();
      }
      local_e8 = param_1 + 0x238;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,0xffffffff);
      local_d8 = 0;
      lVar11 = FUN_146fb78aa(param_1);
      if (lVar11 != 0) {
        FUN_149729f38(lVar11,&local_c8,uVar7);
      }
      local_e8 = param_1 + 600;
      local_108[0] = CONCAT44(local_108[0]._4_4_,*(undefined4 *)(lVar6 + 8));
      uStack_e0 = CONCAT44(uStack_e0._4_4_,0xffffffff);
      local_d8 = 0;
      lVar11 = FUN_146fb78aa(param_1);
      if (lVar11 != 0) {
        FUN_149700500(lVar11,local_108,uVar7);
      }
      lVar11 = local_b8;
      if (local_108[2] != 0) {
        FUN_1400020a8();
        lVar11 = local_b8;
      }
    }
    else {
      local_148 = lVar8;
      if (iVar5 != *(int *)(local_128 + 0x18)) {
        local_e8 = 0;
        uStack_e0 = 0;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,0xffffffff);
        local_b8 = 0;
        local_c8 = lVar11;
        lVar11 = FUN_146fb78aa(param_1);
        uVar7 = local_140;
        if ((lVar11 != 0) && (FUN_14972a684(lVar11,&local_e8,local_140), local_e8 != 0)) {
          FUN_1400020a8();
        }
        local_c8 = param_1 + 0x228;
        local_e8 = 0;
        uStack_e0 = 0;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,0xffffffff);
        local_b8 = 0;
        lVar11 = FUN_146fb78aa(param_1);
        if ((lVar11 != 0) && (FUN_1496f8d2a(lVar11,&local_e8,uVar7), local_e8 != 0)) {
          FUN_1400020a8();
        }
        local_e8 = param_1 + 0x238;
        local_b8 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        uStack_b0 = 0x8000000000;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,0xffffffff);
        local_d8 = 0;
        lVar11 = FUN_146fb78aa(param_1);
        if ((lVar11 != 0) && (FUN_149729f38(lVar11,&local_c8,uVar7), local_b8 != 0)) {
          FUN_1400020a8();
        }
        local_c8 = param_1 + 600;
        local_e8 = local_e8 & 0xffffffff00000000;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,0xffffffff);
        local_b8 = 0;
        lVar11 = FUN_146fb78aa(param_1);
        if (lVar11 != 0) {
          FUN_149700500(lVar11,&local_e8,uVar7);
        }
        goto LAB_1497306a1;
      }
      local_108[2] = 0;
      local_108[3] = 0;
      local_108[0] = 0;
      local_108[1] = 0;
      FUN_144607631(local_138,local_128,local_108 + 2);
      lVar6 = local_108[3];
      local_b8 = 0;
      uStack_b0 = 0x8000000000;
      FUN_146fd579c(&local_c8,local_108[3] & 0xffffffff,0);
      local_118[0] = 0;
      local_118[1] = 0;
      local_e8 = (ulonglong)local_e8._4_4_ << 0x20;
      FUN_1448158c6(local_118,&local_e8,lVar6 & 0xffffffff);
      local_160 = *(undefined1 *)(param_1 + 0x210);
      local_178 = uVar2;
      local_170 = uVar3;
      local_168 = uVar4;
      local_158 = &local_c8;
      local_150 = local_118;
      FUN_1446073f4(local_108 + 2,uVar7,local_148,uVar1);
      uStack_e0 = CONCAT44(uStack_e0._4_4_,0xffffffff);
      local_d8 = 0;
      local_e8 = lVar11;
      lVar11 = FUN_146fb78aa(param_1,&local_e8);
      uVar7 = local_140;
      if (lVar11 != 0) {
        FUN_14972a684(lVar11,local_118,local_140);
      }
      local_e8 = param_1 + 0x228;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,0xffffffff);
      local_d8 = 0;
      lVar11 = FUN_146fb78aa(param_1);
      if (lVar11 != 0) {
        FUN_1496f8d2a(lVar11,local_108,uVar7);
      }
      local_e8 = param_1 + 0x238;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,0xffffffff);
      local_d8 = 0;
      lVar6 = FUN_146fb78aa(param_1);
      lVar11 = local_138;
      if (lVar6 != 0) {
        FUN_149729f38(lVar6,&local_c8,uVar7);
      }
      local_e8 = param_1 + 600;
      local_11c = *(undefined4 *)(lVar11 + 8);
      uStack_e0 = CONCAT44(uStack_e0._4_4_,0xffffffff);
      local_d8 = 0;
      lVar11 = FUN_146fb78aa(param_1);
      if (lVar11 != 0) {
        FUN_149700500(lVar11,&local_11c,uVar7);
      }
      if (local_118[0] != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      lVar11 = local_108[2];
      if (local_108[0] != 0) {
        FUN_1400020a8();
        lVar11 = local_108[2];
      }
    }
    if (lVar11 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1497306a1:
  if ((local_a0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149730ea0 FUN_149730ea0 body=2227 status=ok
// SIG undefined FUN_149730ea0(void)

void FUN_149730ea0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined1 local_160;
  longlong *local_158;
  longlong *local_150;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong local_108 [4];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar11 = param_1 + 0x278;
  lVar6 = (**(code **)(*param_3 + 0x20))(param_3);
  if ((((lVar6 == lVar11) ||
       (lVar6 = (**(code **)(*param_3 + 0x20))(param_3), lVar6 == param_1 + 0x288)) ||
      (lVar6 = (**(code **)(*param_3 + 0x20))(param_3), lVar6 == param_1 + 0x298)) ||
     (lVar6 = (**(code **)(*param_3 + 0x20))(param_3), lVar6 == param_1 + 0x2b8)) {
    uStack_c0._0_4_ = 0xffffffff;
    local_b8 = 0;
    local_c8 = param_1 + 0x198;
    uVar7 = FUN_146fb4872(param_1,&local_c8);
    local_138 = FUN_149729486(uVar7,param_2,param_1 + 0x198);
    lVar6 = param_1 + 0x1a8;
    uStack_c0._0_4_ = 0xffffffff;
    local_b8 = 0;
    local_148 = lVar6;
    local_c8 = lVar6;
    uVar7 = FUN_146fb4872(param_1,&local_c8);
    local_128 = FUN_14972a204(uVar7,param_2,lVar6);
    uStack_c0._0_4_ = 0xffffffff;
    local_b8 = 0;
    local_c8 = param_1 + 0x1c8;
    uVar7 = FUN_146fb4872(param_1,&local_c8);
    local_130 = FUN_14979f15e(uVar7,param_2,param_1 + 0x1c8);
    uStack_c0._0_4_ = 0xffffffff;
    local_b8 = 0;
    local_c8 = param_1 + 0x200;
    uVar7 = FUN_146fb4872(param_1,&local_c8);
    lVar8 = FUN_14979f482(uVar7,param_2,param_1 + 0x200);
    uStack_c0._0_4_ = 0xffffffff;
    local_b8 = 0;
    local_c8 = param_1 + 0x260;
    uVar7 = FUN_146fb4872(param_1,&local_c8);
    puVar9 = (undefined4 *)FUN_14972a54c(uVar7,param_2,param_1 + 0x260);
    uVar1 = *puVar9;
    uStack_c0._0_4_ = 0xffffffff;
    local_b8 = 0;
    local_c8 = param_1 + 0x264;
    uVar7 = FUN_146fb4872(param_1,&local_c8);
    puVar9 = (undefined4 *)FUN_14972a54c(uVar7,param_2,param_1 + 0x264);
    uVar2 = *puVar9;
    uStack_c0._0_4_ = 0xffffffff;
    local_b8 = 0;
    local_c8 = param_1 + 0x268;
    uVar7 = FUN_146fb4872(param_1,&local_c8);
    puVar9 = (undefined4 *)FUN_14972a54c(uVar7,param_2,param_1 + 0x268);
    uVar3 = *puVar9;
    uStack_c0._0_4_ = 0xffffffff;
    local_b8 = 0;
    local_c8 = param_1 + 0x26c;
    uVar7 = FUN_146fb4872(param_1,&local_c8);
    local_140 = param_2;
    puVar9 = (undefined4 *)FUN_14972a54c(uVar7,param_2,param_1 + 0x26c);
    uVar4 = *puVar9;
    local_c8 = local_148;
    uStack_c0 = CONCAT44(uStack_c0._4_4_,0xffffffff);
    local_b8 = 0;
    lVar10 = FUN_146fb4872(param_1,&local_c8);
    uVar7 = local_130;
    lVar6 = local_138;
    iVar5 = *(int *)(local_138 + 8);
    if (*(longlong *)(lVar10 + 0x48) == 0) {
      local_b8 = 0;
      uStack_b0 = 0x8000000000;
      FUN_146fd579c(&local_c8,iVar5,0);
      local_108[2] = 0;
      local_108[3] = 0;
      local_e8 = (ulonglong)local_e8._4_4_ << 0x20;
      FUN_1448158c6(local_108 + 2,&local_e8,iVar5);
      local_160 = *(undefined1 *)(param_1 + 0x270);
      local_178 = uVar2;
      local_170 = uVar3;
      local_168 = uVar4;
      local_158 = &local_c8;
      local_150 = local_108 + 2;
      FUN_144607778(lVar6,local_130,lVar8,uVar1);
      uStack_e0 = CONCAT44(uStack_e0._4_4_,0xffffffff);
      local_d8 = 0;
      local_e8 = lVar11;
      lVar11 = FUN_146fb78aa(param_1,&local_e8);
      uVar7 = local_140;
      if (lVar11 != 0) {
        FUN_14972a684(lVar11,local_108 + 2,local_140);
      }
      local_e8 = param_1 + 0x288;
      local_108[0] = 0;
      local_108[1] = 0;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,0xffffffff);
      local_d8 = 0;
      lVar11 = FUN_146fb78aa(param_1);
      if ((lVar11 != 0) && (FUN_1496f8d2a(lVar11,local_108,uVar7), local_108[0] != 0)) {
        FUN_1400020a8();
      }
      local_e8 = param_1 + 0x298;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,0xffffffff);
      local_d8 = 0;
      lVar11 = FUN_146fb78aa(param_1);
      if (lVar11 != 0) {
        FUN_149729f38(lVar11,&local_c8,uVar7);
      }
      local_e8 = param_1 + 0x2b8;
      local_108[0] = CONCAT44(local_108[0]._4_4_,*(undefined4 *)(lVar6 + 8));
      uStack_e0 = CONCAT44(uStack_e0._4_4_,0xffffffff);
      local_d8 = 0;
      lVar11 = FUN_146fb78aa(param_1);
      if (lVar11 != 0) {
        FUN_149700500(lVar11,local_108,uVar7);
      }
      lVar11 = local_b8;
      if (local_108[2] != 0) {
        FUN_1400020a8();
        lVar11 = local_b8;
      }
    }
    else {
      local_148 = lVar8;
      if (iVar5 != *(int *)(local_128 + 0x18)) {
        local_e8 = 0;
        uStack_e0 = 0;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,0xffffffff);
        local_b8 = 0;
        local_c8 = lVar11;
        lVar11 = FUN_146fb78aa(param_1);
        uVar7 = local_140;
        if ((lVar11 != 0) && (FUN_14972a684(lVar11,&local_e8,local_140), local_e8 != 0)) {
          FUN_1400020a8();
        }
        local_c8 = param_1 + 0x288;
        local_e8 = 0;
        uStack_e0 = 0;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,0xffffffff);
        local_b8 = 0;
        lVar11 = FUN_146fb78aa(param_1);
        if ((lVar11 != 0) && (FUN_1496f8d2a(lVar11,&local_e8,uVar7), local_e8 != 0)) {
          FUN_1400020a8();
        }
        local_e8 = param_1 + 0x298;
        local_b8 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        uStack_b0 = 0x8000000000;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,0xffffffff);
        local_d8 = 0;
        lVar11 = FUN_146fb78aa(param_1);
        if ((lVar11 != 0) && (FUN_149729f38(lVar11,&local_c8,uVar7), local_b8 != 0)) {
          FUN_1400020a8();
        }
        local_c8 = param_1 + 0x2b8;
        local_e8 = local_e8 & 0xffffffff00000000;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,0xffffffff);
        local_b8 = 0;
        lVar11 = FUN_146fb78aa(param_1);
        if (lVar11 != 0) {
          FUN_149700500(lVar11,&local_e8,uVar7);
        }
        goto LAB_149730f55;
      }
      local_108[2] = 0;
      local_108[3] = 0;
      local_108[0] = 0;
      local_108[1] = 0;
      FUN_144607631(local_138,local_128,local_108 + 2);
      lVar6 = local_108[3];
      local_b8 = 0;
      uStack_b0 = 0x8000000000;
      FUN_146fd579c(&local_c8,local_108[3] & 0xffffffff,0);
      local_118[0] = 0;
      local_118[1] = 0;
      local_e8 = (ulonglong)local_e8._4_4_ << 0x20;
      FUN_1448158c6(local_118,&local_e8,lVar6 & 0xffffffff);
      local_160 = *(undefined1 *)(param_1 + 0x270);
      local_178 = uVar2;
      local_170 = uVar3;
      local_168 = uVar4;
      local_158 = &local_c8;
      local_150 = local_118;
      FUN_144607778(local_108 + 2,uVar7,local_148,uVar1);
      uStack_e0 = CONCAT44(uStack_e0._4_4_,0xffffffff);
      local_d8 = 0;
      local_e8 = lVar11;
      lVar11 = FUN_146fb78aa(param_1,&local_e8);
      uVar7 = local_140;
      if (lVar11 != 0) {
        FUN_14972a684(lVar11,local_118,local_140);
      }
      local_e8 = param_1 + 0x288;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,0xffffffff);
      local_d8 = 0;
      lVar11 = FUN_146fb78aa(param_1);
      if (lVar11 != 0) {
        FUN_1496f8d2a(lVar11,local_108,uVar7);
      }
      local_e8 = param_1 + 0x298;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,0xffffffff);
      local_d8 = 0;
      lVar6 = FUN_146fb78aa(param_1);
      lVar11 = local_138;
      if (lVar6 != 0) {
        FUN_149729f38(lVar6,&local_c8,uVar7);
      }
      local_e8 = param_1 + 0x2b8;
      local_11c = *(undefined4 *)(lVar11 + 8);
      uStack_e0 = CONCAT44(uStack_e0._4_4_,0xffffffff);
      local_d8 = 0;
      lVar11 = FUN_146fb78aa(param_1);
      if (lVar11 != 0) {
        FUN_149700500(lVar11,&local_11c,uVar7);
      }
      if (local_118[0] != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      lVar11 = local_108[2];
      if (local_108[0] != 0) {
        FUN_1400020a8();
        lVar11 = local_108[2];
      }
    }
    if (lVar11 != 0) {
      FUN_1400020a8();
    }
  }
LAB_149730f55:
  if ((local_a0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149731754 FUN_149731754 body=2404 status=ok
// SIG undefined FUN_149731754(void)

void FUN_149731754(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_180;
  longlong *local_178;
  longlong *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  undefined4 local_12c;
  longlong local_128 [2];
  longlong local_118 [4];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar11 = param_1 + 0x230;
  lVar7 = (**(code **)(*param_3 + 0x20))(param_3);
  if ((((lVar7 == lVar11) ||
       (lVar7 = (**(code **)(*param_3 + 0x20))(param_3), lVar7 == param_1 + 0x240)) ||
      (lVar7 = (**(code **)(*param_3 + 0x20))(param_3), lVar7 == param_1 + 0x250)) ||
     (lVar7 = (**(code **)(*param_3 + 0x20))(param_3), lVar7 == param_1 + 0x270)) {
    uStack_d0._0_4_ = 0xffffffff;
    local_c8 = 0;
    local_d8 = param_1 + 0x198;
    uVar8 = FUN_146fb4872(param_1,&local_d8);
    local_148 = FUN_149729486(uVar8,param_2,param_1 + 0x198);
    lVar7 = param_1 + 0x1a8;
    uStack_d0._0_4_ = 0xffffffff;
    local_c8 = 0;
    local_138 = lVar7;
    local_d8 = lVar7;
    uVar8 = FUN_146fb4872(param_1,&local_d8);
    local_140 = FUN_14972a204(uVar8,param_2,lVar7);
    uStack_d0._0_4_ = 0xffffffff;
    local_c8 = 0;
    local_d8 = param_1 + 0x1c8;
    uVar8 = FUN_146fb4872(param_1,&local_d8);
    local_158 = FUN_14979981c(uVar8,param_2,param_1 + 0x1c8);
    uStack_d0._0_4_ = 0xffffffff;
    local_c8 = 0;
    local_d8 = param_1 + 0x1e0;
    uVar8 = FUN_146fb4872(param_1,&local_d8);
    local_150 = FUN_14979981c(uVar8,param_2,param_1 + 0x1e0);
    uStack_d0._0_4_ = 0xffffffff;
    local_c8 = 0;
    local_d8 = param_1 + 0x1f8;
    uVar8 = FUN_146fb4872(param_1,&local_d8);
    puVar9 = (undefined4 *)FUN_14972a54c(uVar8,param_2,param_1 + 0x1f8);
    uVar1 = *puVar9;
    uStack_d0._0_4_ = 0xffffffff;
    local_c8 = 0;
    local_d8 = param_1 + 0x200;
    uVar8 = FUN_146fb4872(param_1,&local_d8);
    local_160 = FUN_14979981c(uVar8,param_2,param_1 + 0x200);
    uStack_d0._0_4_ = 0xffffffff;
    local_c8 = 0;
    local_d8 = param_1 + 0x218;
    uVar8 = FUN_146fb4872(param_1,&local_d8);
    puVar9 = (undefined4 *)FUN_14972a54c(uVar8,param_2,param_1 + 0x218);
    uVar2 = *puVar9;
    uStack_d0._0_4_ = 0xffffffff;
    local_c8 = 0;
    local_d8 = param_1 + 0x21c;
    uVar8 = FUN_146fb4872(param_1,&local_d8);
    puVar9 = (undefined4 *)FUN_14972a54c(uVar8,param_2,param_1 + 0x21c);
    uVar3 = *puVar9;
    uStack_d0._0_4_ = 0xffffffff;
    local_c8 = 0;
    local_d8 = param_1 + 0x220;
    uVar8 = FUN_146fb4872(param_1,&local_d8);
    puVar9 = (undefined4 *)FUN_14972a54c(uVar8,param_2,param_1 + 0x220);
    uVar4 = *puVar9;
    uStack_d0._0_4_ = 0xffffffff;
    local_c8 = 0;
    local_d8 = param_1 + 0x224;
    uVar8 = FUN_146fb4872(param_1,&local_d8);
    lVar7 = local_148;
    local_168 = param_2;
    puVar9 = (undefined4 *)FUN_14972a54c(uVar8,param_2,param_1 + 0x224);
    uVar5 = *puVar9;
    local_d8 = local_138;
    uStack_d0 = CONCAT44(uStack_d0._4_4_,0xffffffff);
    local_c8 = 0;
    lVar10 = FUN_146fb4872(param_1,&local_d8);
    uVar8 = local_150;
    iVar6 = *(int *)(lVar7 + 8);
    if (*(longlong *)(lVar10 + 0x48) == 0) {
      local_c8 = 0;
      uStack_c0 = 0x8000000000;
      FUN_146fd579c(&local_d8,iVar6,0);
      local_118[2] = 0;
      local_118[3] = 0;
      local_f8 = (ulonglong)local_f8._4_4_ << 0x20;
      FUN_1448158c6(local_118 + 2,&local_f8,iVar6);
      local_180 = *(undefined1 *)(param_1 + 0x228);
      local_188 = local_150;
      local_190 = local_160;
      local_198 = local_158;
      local_1a8 = uVar5;
      local_1a0 = uVar1;
      local_178 = &local_d8;
      local_170 = local_118 + 2;
      FUN_1446079fc(lVar7,uVar2,uVar3,uVar4);
      uStack_f0 = CONCAT44(uStack_f0._4_4_,0xffffffff);
      local_e8 = 0;
      local_f8 = lVar11;
      lVar11 = FUN_146fb78aa(param_1,&local_f8);
      uVar8 = local_168;
      if (lVar11 != 0) {
        FUN_14972a684(lVar11,local_118 + 2,local_168);
      }
      local_f8 = param_1 + 0x240;
      local_118[0] = 0;
      local_118[1] = 0;
      uStack_f0 = CONCAT44(uStack_f0._4_4_,0xffffffff);
      local_e8 = 0;
      lVar11 = FUN_146fb78aa(param_1);
      if ((lVar11 != 0) && (FUN_1496f8d2a(lVar11,local_118,uVar8), local_118[0] != 0)) {
        FUN_1400020a8();
      }
      local_f8 = param_1 + 0x250;
      uStack_f0 = CONCAT44(uStack_f0._4_4_,0xffffffff);
      local_e8 = 0;
      lVar11 = FUN_146fb78aa(param_1);
      if (lVar11 != 0) {
        FUN_149729f38(lVar11,&local_d8,uVar8);
      }
      local_f8 = param_1 + 0x270;
      local_118[0] = CONCAT44(local_118[0]._4_4_,*(undefined4 *)(lVar7 + 8));
      uStack_f0 = CONCAT44(uStack_f0._4_4_,0xffffffff);
      local_e8 = 0;
      lVar11 = FUN_146fb78aa(param_1);
      if (lVar11 != 0) {
        FUN_149700500(lVar11,local_118,uVar8);
      }
      lVar11 = local_c8;
      if (local_118[2] != 0) {
        FUN_1400020a8();
        lVar11 = local_c8;
      }
    }
    else {
      if (iVar6 != *(int *)(local_140 + 0x18)) {
        local_f8 = 0;
        uStack_f0 = 0;
        uStack_d0 = CONCAT44(uStack_d0._4_4_,0xffffffff);
        local_c8 = 0;
        local_d8 = lVar11;
        lVar11 = FUN_146fb78aa(param_1);
        uVar8 = local_168;
        if ((lVar11 != 0) && (FUN_14972a684(lVar11,&local_f8,local_168), local_f8 != 0)) {
          FUN_1400020a8();
        }
        local_d8 = param_1 + 0x240;
        local_f8 = 0;
        uStack_f0 = 0;
        uStack_d0 = CONCAT44(uStack_d0._4_4_,0xffffffff);
        local_c8 = 0;
        lVar11 = FUN_146fb78aa(param_1);
        if ((lVar11 != 0) && (FUN_1496f8d2a(lVar11,&local_f8,uVar8), local_f8 != 0)) {
          FUN_1400020a8();
        }
        local_f8 = param_1 + 0x250;
        local_c8 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        uStack_c0 = 0x8000000000;
        uStack_f0 = CONCAT44(uStack_f0._4_4_,0xffffffff);
        local_e8 = 0;
        lVar11 = FUN_146fb78aa(param_1);
        if ((lVar11 != 0) && (FUN_149729f38(lVar11,&local_d8,uVar8), local_c8 != 0)) {
          FUN_1400020a8();
        }
        local_d8 = param_1 + 0x270;
        local_f8 = local_f8 & 0xffffffff00000000;
        uStack_d0 = CONCAT44(uStack_d0._4_4_,0xffffffff);
        local_c8 = 0;
        lVar11 = FUN_146fb78aa(param_1);
        if (lVar11 != 0) {
          FUN_149700500(lVar11,&local_f8,uVar8);
        }
        goto LAB_149731812;
      }
      local_118[2] = 0;
      local_118[3] = 0;
      local_118[0] = 0;
      local_118[1] = 0;
      FUN_144607631(lVar7,local_140,local_118 + 2);
      lVar7 = local_118[3];
      local_c8 = 0;
      uStack_c0 = 0x8000000000;
      FUN_146fd579c(&local_d8,local_118[3] & 0xffffffff,0);
      local_128[0] = 0;
      local_128[1] = 0;
      local_f8 = (ulonglong)local_f8._4_4_ << 0x20;
      FUN_1448158c6(local_128,&local_f8,lVar7 & 0xffffffff);
      local_180 = *(undefined1 *)(param_1 + 0x228);
      local_188 = uVar8;
      local_190 = local_160;
      local_198 = local_158;
      local_1a8 = uVar5;
      local_1a0 = uVar1;
      local_178 = &local_d8;
      local_170 = local_128;
      FUN_1446079fc(local_118 + 2,uVar2,uVar3,uVar4);
      uStack_f0 = CONCAT44(uStack_f0._4_4_,0xffffffff);
      local_e8 = 0;
      local_f8 = lVar11;
      lVar11 = FUN_146fb78aa(param_1,&local_f8);
      uVar8 = local_168;
      if (lVar11 != 0) {
        FUN_14972a684(lVar11,local_128,local_168);
      }
      local_f8 = param_1 + 0x240;
      uStack_f0 = CONCAT44(uStack_f0._4_4_,0xffffffff);
      local_e8 = 0;
      lVar11 = FUN_146fb78aa(param_1);
      if (lVar11 != 0) {
        FUN_1496f8d2a(lVar11,local_118,uVar8);
      }
      local_f8 = param_1 + 0x250;
      uStack_f0 = CONCAT44(uStack_f0._4_4_,0xffffffff);
      local_e8 = 0;
      lVar7 = FUN_146fb78aa(param_1);
      lVar11 = local_148;
      if (lVar7 != 0) {
        FUN_149729f38(lVar7,&local_d8,uVar8);
      }
      local_f8 = param_1 + 0x270;
      local_12c = *(undefined4 *)(lVar11 + 8);
      uStack_f0 = CONCAT44(uStack_f0._4_4_,0xffffffff);
      local_e8 = 0;
      lVar11 = FUN_146fb78aa(param_1);
      if (lVar11 != 0) {
        FUN_149700500(lVar11,&local_12c,uVar8);
      }
      if (local_128[0] != 0) {
        FUN_1400020a8();
      }
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      lVar11 = local_118[2];
      if (local_118[0] != 0) {
        FUN_1400020a8();
        lVar11 = local_118[2];
      }
    }
    if (lVar11 != 0) {
      FUN_1400020a8();
    }
  }
LAB_149731812:
  if ((local_b0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497320ba FUN_1497320ba body=1664 status=ok
// SIG undefined FUN_1497320ba(void)

void FUN_1497320ba(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined1 local_188;
  ulonglong *local_180;
  undefined8 local_170;
  undefined4 *local_168;
  longlong local_160;
  longlong local_158;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong local_108 [2];
  longlong local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar7 = param_1 + 0x210;
  lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar3 != lVar7) {
    lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar3 != param_1 + 0x220) {
      lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar3 != param_1 + 0x230) goto LAB_14973212f;
    }
  }
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = param_1 + 0x198;
  uVar4 = FUN_146fb4872(param_1,&local_78);
  local_160 = FUN_149729486(uVar4,param_2,param_1 + 0x198);
  lVar3 = param_1 + 0x1a8;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = lVar3;
  uVar4 = FUN_146fb4872(param_1,&local_78);
  local_158 = FUN_14972a204(uVar4,param_2,lVar3);
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = param_1 + 0x1c8;
  uVar4 = FUN_146fb4872(param_1,&local_78);
  local_168 = (undefined4 *)FUN_14979ee4a(uVar4,param_2,param_1 + 0x1c8);
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = param_1 + 0x1e8;
  uVar4 = FUN_146fb4872(param_1,&local_78);
  puVar5 = (undefined4 *)FUN_14979981c(uVar4,param_2,param_1 + 0x1e8);
  local_98 = *puVar5;
  uStack_94 = puVar5[1];
  uStack_90 = puVar5[2];
  uStack_8c = puVar5[3];
  local_88 = *(undefined8 *)(puVar5 + 4);
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = param_1 + 0x200;
  uVar4 = FUN_146fb4872(param_1,&local_78);
  puVar5 = (undefined4 *)FUN_146fca67a(uVar4,param_2,param_1 + 0x200);
  uVar1 = *puVar5;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = param_1 + 0x204;
  uVar4 = FUN_146fb4872(param_1,&local_78);
  local_170 = param_2;
  puVar5 = (undefined4 *)FUN_146fca67a(uVar4,param_2,param_1 + 0x204);
  uVar2 = *puVar5;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = lVar3;
  lVar6 = FUN_146fb4872(param_1,&local_78);
  lVar3 = local_160;
  puVar5 = local_168;
  if (*(longlong *)(lVar6 + 0x48) == 0) {
    local_180 = local_a8;
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_188 = *(undefined1 *)(param_1 + 0x208);
    local_b8 = local_88;
    local_c8 = CONCAT44(uStack_94,local_98);
    uStack_c0 = CONCAT44(uStack_8c,uStack_90);
    local_e8 = *local_168;
    uStack_e4 = local_168[1];
    uStack_e0 = local_168[2];
    uStack_dc = local_168[3];
    local_d8 = *(undefined8 *)(local_168 + 4);
    local_198 = uVar1;
    local_190 = uVar2;
    FUN_144607cbe(local_160,(float)*(double *)(local_168 + 6));
    local_70 = 0xffffffff;
    local_68 = 0;
    local_78 = lVar7;
    lVar7 = FUN_146fb78aa(param_1);
    uVar4 = local_170;
    if (lVar7 != 0) {
      FUN_1496f8d2a(lVar7,local_a8,local_170);
    }
    local_78 = param_1 + 0x220;
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_70 = 0xffffffff;
    local_68 = 0;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_1496f8d2a(lVar7,local_f8,uVar4);
      if (local_f8[0] != 0) {
        FUN_1400020a8();
      }
    }
    local_78 = param_1 + 0x230;
    local_f8[0] = CONCAT44(local_f8[0]._4_4_,*(undefined4 *)(lVar3 + 8));
    local_70 = 0xffffffff;
    local_68 = 0;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_149700500(lVar7,local_f8,uVar4);
    }
  }
  else {
    if (*(int *)(local_160 + 8) != *(int *)(local_158 + 0x18)) {
      local_a8[0] = 0;
      local_a8[1] = 0;
      local_70 = 0xffffffff;
      local_68 = 0;
      local_78 = lVar7;
      lVar7 = FUN_146fb78aa(param_1);
      uVar4 = local_170;
      if (lVar7 != 0) {
        FUN_1496f8d2a(lVar7,local_a8,local_170);
        if (local_a8[0] != 0) {
          FUN_1400020a8();
        }
      }
      local_78 = param_1 + 0x220;
      local_a8[0] = 0;
      local_a8[1] = 0;
      local_70 = 0xffffffff;
      local_68 = 0;
      lVar7 = FUN_146fb78aa(param_1);
      if (lVar7 != 0) {
        FUN_1496f8d2a(lVar7,local_a8,uVar4);
        if (local_a8[0] != 0) {
          FUN_1400020a8();
        }
      }
      local_78 = param_1 + 0x230;
      local_a8[0] = local_a8[0] & 0xffffffff00000000;
      local_70 = 0xffffffff;
      local_68 = 0;
      lVar7 = FUN_146fb78aa(param_1);
      if (lVar7 != 0) {
        FUN_149700500(lVar7,local_a8,uVar4);
      }
      goto LAB_14973212f;
    }
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_f8[0] = 0;
    local_f8[1] = 0;
    FUN_144607631(local_160,local_158,local_a8);
    local_180 = local_108;
    local_108[0] = 0;
    local_108[1] = 0;
    local_188 = *(undefined1 *)(param_1 + 0x208);
    local_118 = local_88;
    local_128 = CONCAT44(uStack_94,local_98);
    uStack_120 = CONCAT44(uStack_8c,uStack_90);
    local_148 = *puVar5;
    uStack_144 = puVar5[1];
    uStack_140 = puVar5[2];
    uStack_13c = puVar5[3];
    local_138 = *(undefined8 *)(puVar5 + 4);
    local_198 = uVar1;
    local_190 = uVar2;
    FUN_144607cbe(local_a8,(float)*(double *)(puVar5 + 6));
    local_70 = 0xffffffff;
    local_68 = 0;
    local_78 = lVar7;
    lVar7 = FUN_146fb78aa(param_1);
    uVar4 = local_170;
    if (lVar7 != 0) {
      FUN_1496f8d2a(lVar7,local_108,local_170);
    }
    local_78 = param_1 + 0x220;
    local_70 = 0xffffffff;
    local_68 = 0;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_1496f8d2a(lVar7,local_f8,uVar4);
    }
    local_78 = param_1 + 0x230;
    local_14c = *(undefined4 *)(lVar3 + 8);
    local_70 = 0xffffffff;
    local_68 = 0;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_149700500(lVar7,&local_14c,uVar4);
    }
    if (local_108[0] != 0) {
      FUN_1400020a8();
    }
    if (local_f8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
LAB_14973212f:
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973273c FUN_14973273c body=1213 status=ok
// SIG undefined FUN_14973273c(void)

void FUN_14973273c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined4 local_bc;
  longlong local_b8 [2];
  longlong local_a8 [5];
  undefined4 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar6 = param_1 + 0x1d0;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 != lVar6) {
    lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar2 != param_1 + 0x1e0) {
      lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar2 != param_1 + 0x1f0) goto LAB_1497327b9;
    }
  }
  local_80 = 0xffffffff;
  local_78 = 0;
  local_a8[4] = param_1 + 0x198;
  uVar3 = FUN_146fb4872(param_1,local_a8 + 4);
  local_d0 = FUN_149729486(uVar3,param_2,param_1 + 0x198);
  lVar2 = param_1 + 0x1a8;
  local_80 = 0xffffffff;
  local_78 = 0;
  local_a8[4] = lVar2;
  uVar3 = FUN_146fb4872(param_1,local_a8 + 4);
  local_c8 = FUN_14972a204(uVar3,param_2,lVar2);
  local_80 = 0xffffffff;
  local_78 = 0;
  local_a8[4] = param_1 + 0x1c8;
  uVar3 = FUN_146fb4872(param_1,local_a8 + 4);
  local_d8 = param_2;
  puVar4 = (undefined4 *)FUN_14972a54c(uVar3,param_2,param_1 + 0x1c8);
  uVar1 = *puVar4;
  local_80 = 0xffffffff;
  local_78 = 0;
  local_a8[4] = lVar2;
  lVar5 = FUN_146fb4872(param_1,local_a8 + 4);
  lVar2 = local_d0;
  if (*(longlong *)(lVar5 + 0x48) == 0) {
    local_a8[2] = 0;
    local_a8[3] = 0;
    FUN_144608090(local_d0,uVar1);
    local_80 = 0xffffffff;
    local_78 = 0;
    local_a8[4] = lVar6;
    lVar6 = FUN_146fb78aa(param_1);
    uVar3 = local_d8;
    if (lVar6 != 0) {
      FUN_14972a684(lVar6,local_a8 + 2,local_d8);
    }
    local_a8[4] = param_1 + 0x1e0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_80 = 0xffffffff;
    local_78 = 0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_1496f8d2a(lVar6,local_a8,uVar3);
      if (local_a8[0] != 0) {
        FUN_1400020a8();
      }
    }
    local_a8[4] = param_1 + 0x1f0;
    local_a8[0] = CONCAT44(local_a8[0]._4_4_,*(undefined4 *)(lVar2 + 8));
    local_80 = 0xffffffff;
    local_78 = 0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_149700500(lVar6,local_a8,uVar3);
    }
  }
  else {
    if (*(int *)(local_d0 + 8) != *(int *)(local_c8 + 0x18)) {
      local_a8[2] = 0;
      local_a8[3] = 0;
      local_80 = 0xffffffff;
      local_78 = 0;
      local_a8[4] = lVar6;
      lVar6 = FUN_146fb78aa(param_1);
      uVar3 = local_d8;
      if (lVar6 != 0) {
        FUN_14972a684(lVar6,local_a8 + 2,local_d8);
        if (local_a8[2] != 0) {
          FUN_1400020a8();
        }
      }
      local_a8[4] = param_1 + 0x1e0;
      local_a8[2] = 0;
      local_a8[3] = 0;
      local_80 = 0xffffffff;
      local_78 = 0;
      lVar6 = FUN_146fb78aa(param_1);
      if (lVar6 != 0) {
        FUN_1496f8d2a(lVar6,local_a8 + 2,uVar3);
        if (local_a8[2] != 0) {
          FUN_1400020a8();
        }
      }
      local_a8[4] = param_1 + 0x1f0;
      local_a8[2] = local_a8[2] & 0xffffffff00000000;
      local_80 = 0xffffffff;
      local_78 = 0;
      lVar6 = FUN_146fb78aa(param_1);
      if (lVar6 != 0) {
        FUN_149700500(lVar6,local_a8 + 2,uVar3);
      }
      goto LAB_1497327b9;
    }
    local_a8[2] = 0;
    local_a8[3] = 0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    FUN_144607631(local_d0,local_c8,local_a8 + 2);
    local_b8[0] = 0;
    local_b8[1] = 0;
    FUN_144608090(local_a8 + 2,uVar1);
    local_80 = 0xffffffff;
    local_78 = 0;
    local_a8[4] = lVar6;
    lVar6 = FUN_146fb78aa(param_1);
    uVar3 = local_d8;
    if (lVar6 != 0) {
      FUN_14972a684(lVar6,local_b8,local_d8);
    }
    local_a8[4] = param_1 + 0x1e0;
    local_80 = 0xffffffff;
    local_78 = 0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_1496f8d2a(lVar6,local_a8,uVar3);
    }
    local_a8[4] = param_1 + 0x1f0;
    local_bc = *(undefined4 *)(lVar2 + 8);
    local_80 = 0xffffffff;
    local_78 = 0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_149700500(lVar6,&local_bc,uVar3);
    }
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_a8[2] != 0) {
    FUN_1400020a8();
  }
LAB_1497327b9:
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149732bfa FUN_149732bfa body=1426 status=ok
// SIG undefined FUN_149732bfa(void)

void FUN_149732bfa(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong local_130;
  longlong local_128;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  longlong local_f8 [2];
  longlong local_e8 [2];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  ulonglong local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong local_88;
  undefined4 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar6 = param_1 + 0x1e8;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 != lVar6) {
    lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar2 != param_1 + 0x1f8) {
      lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar2 != param_1 + 0x208) goto LAB_149732c77;
    }
  }
  local_80 = 0xffffffff;
  local_78 = 0;
  local_88 = param_1 + 0x198;
  uVar3 = FUN_146fb4872(param_1,&local_88);
  local_130 = FUN_149729486(uVar3,param_2,param_1 + 0x198);
  lVar2 = param_1 + 0x1a8;
  local_80 = 0xffffffff;
  local_78 = 0;
  local_88 = lVar2;
  uVar3 = FUN_146fb4872(param_1,&local_88);
  local_128 = FUN_14972a204(uVar3,param_2,lVar2);
  local_80 = 0xffffffff;
  local_78 = 0;
  local_88 = param_1 + 0x1c8;
  uVar3 = FUN_146fb4872(param_1,&local_88);
  puVar4 = (undefined4 *)FUN_14972a54c(uVar3,param_2,param_1 + 0x1c8);
  uVar1 = *puVar4;
  local_80 = 0xffffffff;
  local_78 = 0;
  local_88 = param_1 + 0x1d0;
  uVar3 = FUN_146fb4872(param_1,&local_88);
  local_138 = param_2;
  puVar4 = (undefined4 *)FUN_14979981c(uVar3,param_2,param_1 + 0x1d0);
  local_a8 = *puVar4;
  uStack_a4 = puVar4[1];
  uStack_a0 = puVar4[2];
  uStack_9c = puVar4[3];
  local_98 = *(undefined8 *)(puVar4 + 4);
  local_80 = 0xffffffff;
  local_78 = 0;
  local_88 = lVar2;
  lVar5 = FUN_146fb4872(param_1,&local_88);
  lVar2 = local_130;
  if (*(longlong *)(lVar5 + 0x48) == 0) {
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_d8 = local_a8;
    uStack_d4 = uStack_a4;
    uStack_d0 = uStack_a0;
    uStack_cc = uStack_9c;
    local_c8 = local_98;
    FUN_1446083b6(local_130,uVar1);
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = lVar6;
    lVar6 = FUN_146fb78aa(param_1);
    uVar3 = local_138;
    if (lVar6 != 0) {
      FUN_14972a942(lVar6,local_b8,local_138);
    }
    local_88 = param_1 + 0x1f8;
    local_e8[0] = 0;
    local_e8[1] = 0;
    local_80 = 0xffffffff;
    local_78 = 0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_1496f8d2a(lVar6,local_e8,uVar3);
      if (local_e8[0] != 0) {
        FUN_1400020a8();
      }
    }
    local_88 = param_1 + 0x208;
    local_e8[0] = CONCAT44(local_e8[0]._4_4_,*(undefined4 *)(lVar2 + 8));
    local_80 = 0xffffffff;
    local_78 = 0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_149700500(lVar6,local_e8,uVar3);
    }
  }
  else {
    if (*(int *)(local_130 + 8) != *(int *)(local_128 + 0x18)) {
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_80 = 0xffffffff;
      local_78 = 0;
      local_88 = lVar6;
      lVar6 = FUN_146fb78aa(param_1);
      uVar3 = local_138;
      if (lVar6 != 0) {
        FUN_14972a942(lVar6,local_b8,local_138);
        if (local_b8[0] != 0) {
          FUN_1400020a8();
        }
      }
      local_88 = param_1 + 0x1f8;
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_80 = 0xffffffff;
      local_78 = 0;
      lVar6 = FUN_146fb78aa(param_1);
      if (lVar6 != 0) {
        FUN_1496f8d2a(lVar6,local_b8,uVar3);
        if (local_b8[0] != 0) {
          FUN_1400020a8();
        }
      }
      local_88 = param_1 + 0x208;
      local_b8[0] = local_b8[0] & 0xffffffff00000000;
      local_80 = 0xffffffff;
      local_78 = 0;
      lVar6 = FUN_146fb78aa(param_1);
      if (lVar6 != 0) {
        FUN_149700500(lVar6,local_b8,uVar3);
      }
      goto LAB_149732c77;
    }
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_e8[0] = 0;
    local_e8[1] = 0;
    FUN_144607631(local_130,local_128,local_b8);
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_118 = local_a8;
    uStack_114 = uStack_a4;
    uStack_110 = uStack_a0;
    uStack_10c = uStack_9c;
    local_108 = local_98;
    FUN_1446083b6(local_b8,uVar1);
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = lVar6;
    lVar6 = FUN_146fb78aa(param_1);
    uVar3 = local_138;
    if (lVar6 != 0) {
      FUN_14972a942(lVar6,local_f8,local_138);
    }
    local_88 = param_1 + 0x1f8;
    local_80 = 0xffffffff;
    local_78 = 0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_1496f8d2a(lVar6,local_e8,uVar3);
    }
    local_88 = param_1 + 0x208;
    local_11c = *(undefined4 *)(lVar2 + 8);
    local_80 = 0xffffffff;
    local_78 = 0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_149700500(lVar6,&local_11c,uVar3);
    }
    if (local_f8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_e8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
LAB_149732c77:
  if ((local_70 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973318e FUN_14973318e body=1426 status=ok
// SIG undefined FUN_14973318e(void)

void FUN_14973318e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong local_130;
  longlong local_128;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  longlong local_f8 [2];
  longlong local_e8 [2];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  ulonglong local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong local_88;
  undefined4 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar6 = param_1 + 0x1e8;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 != lVar6) {
    lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar2 != param_1 + 0x1f8) {
      lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar2 != param_1 + 0x208) goto LAB_14973320b;
    }
  }
  local_80 = 0xffffffff;
  local_78 = 0;
  local_88 = param_1 + 0x198;
  uVar3 = FUN_146fb4872(param_1,&local_88);
  local_130 = FUN_149729486(uVar3,param_2,param_1 + 0x198);
  lVar2 = param_1 + 0x1a8;
  local_80 = 0xffffffff;
  local_78 = 0;
  local_88 = lVar2;
  uVar3 = FUN_146fb4872(param_1,&local_88);
  local_128 = FUN_14972a204(uVar3,param_2,lVar2);
  local_80 = 0xffffffff;
  local_78 = 0;
  local_88 = param_1 + 0x1c8;
  uVar3 = FUN_146fb4872(param_1,&local_88);
  puVar4 = (undefined4 *)FUN_14972a54c(uVar3,param_2,param_1 + 0x1c8);
  uVar1 = *puVar4;
  local_80 = 0xffffffff;
  local_78 = 0;
  local_88 = param_1 + 0x1d0;
  uVar3 = FUN_146fb4872(param_1,&local_88);
  local_138 = param_2;
  puVar4 = (undefined4 *)FUN_14979981c(uVar3,param_2,param_1 + 0x1d0);
  local_a8 = *puVar4;
  uStack_a4 = puVar4[1];
  uStack_a0 = puVar4[2];
  uStack_9c = puVar4[3];
  local_98 = *(undefined8 *)(puVar4 + 4);
  local_80 = 0xffffffff;
  local_78 = 0;
  local_88 = lVar2;
  lVar5 = FUN_146fb4872(param_1,&local_88);
  lVar2 = local_130;
  if (*(longlong *)(lVar5 + 0x48) == 0) {
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_d8 = local_a8;
    uStack_d4 = uStack_a4;
    uStack_d0 = uStack_a0;
    uStack_cc = uStack_9c;
    local_c8 = local_98;
    FUN_1446087c4(local_130,uVar1);
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = lVar6;
    lVar6 = FUN_146fb78aa(param_1);
    uVar3 = local_138;
    if (lVar6 != 0) {
      FUN_14972a942(lVar6,local_b8,local_138);
    }
    local_88 = param_1 + 0x1f8;
    local_e8[0] = 0;
    local_e8[1] = 0;
    local_80 = 0xffffffff;
    local_78 = 0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_1496f8d2a(lVar6,local_e8,uVar3);
      if (local_e8[0] != 0) {
        FUN_1400020a8();
      }
    }
    local_88 = param_1 + 0x208;
    local_e8[0] = CONCAT44(local_e8[0]._4_4_,*(undefined4 *)(lVar2 + 8));
    local_80 = 0xffffffff;
    local_78 = 0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_149700500(lVar6,local_e8,uVar3);
    }
  }
  else {
    if (*(int *)(local_130 + 8) != *(int *)(local_128 + 0x18)) {
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_80 = 0xffffffff;
      local_78 = 0;
      local_88 = lVar6;
      lVar6 = FUN_146fb78aa(param_1);
      uVar3 = local_138;
      if (lVar6 != 0) {
        FUN_14972a942(lVar6,local_b8,local_138);
        if (local_b8[0] != 0) {
          FUN_1400020a8();
        }
      }
      local_88 = param_1 + 0x1f8;
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_80 = 0xffffffff;
      local_78 = 0;
      lVar6 = FUN_146fb78aa(param_1);
      if (lVar6 != 0) {
        FUN_1496f8d2a(lVar6,local_b8,uVar3);
        if (local_b8[0] != 0) {
          FUN_1400020a8();
        }
      }
      local_88 = param_1 + 0x208;
      local_b8[0] = local_b8[0] & 0xffffffff00000000;
      local_80 = 0xffffffff;
      local_78 = 0;
      lVar6 = FUN_146fb78aa(param_1);
      if (lVar6 != 0) {
        FUN_149700500(lVar6,local_b8,uVar3);
      }
      goto LAB_14973320b;
    }
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_e8[0] = 0;
    local_e8[1] = 0;
    FUN_144607631(local_130,local_128,local_b8);
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_118 = local_a8;
    uStack_114 = uStack_a4;
    uStack_110 = uStack_a0;
    uStack_10c = uStack_9c;
    local_108 = local_98;
    FUN_1446087c4(local_b8,uVar1);
    local_80 = 0xffffffff;
    local_78 = 0;
    local_88 = lVar6;
    lVar6 = FUN_146fb78aa(param_1);
    uVar3 = local_138;
    if (lVar6 != 0) {
      FUN_14972a942(lVar6,local_f8,local_138);
    }
    local_88 = param_1 + 0x1f8;
    local_80 = 0xffffffff;
    local_78 = 0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_1496f8d2a(lVar6,local_e8,uVar3);
    }
    local_88 = param_1 + 0x208;
    local_11c = *(undefined4 *)(lVar2 + 8);
    local_80 = 0xffffffff;
    local_78 = 0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_149700500(lVar6,&local_11c,uVar3);
    }
    if (local_f8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_e8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
LAB_14973320b:
  if ((local_70 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149733722 FUN_149733722 body=1213 status=ok
// SIG undefined FUN_149733722(void)

void FUN_149733722(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined4 local_bc;
  longlong local_b8 [2];
  longlong local_a8 [5];
  undefined4 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar6 = param_1 + 0x1d0;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 != lVar6) {
    lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar2 != param_1 + 0x1e0) {
      lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar2 != param_1 + 0x1f0) goto LAB_14973379f;
    }
  }
  local_80 = 0xffffffff;
  local_78 = 0;
  local_a8[4] = param_1 + 0x198;
  uVar3 = FUN_146fb4872(param_1,local_a8 + 4);
  local_d0 = FUN_149729486(uVar3,param_2,param_1 + 0x198);
  lVar2 = param_1 + 0x1a8;
  local_80 = 0xffffffff;
  local_78 = 0;
  local_a8[4] = lVar2;
  uVar3 = FUN_146fb4872(param_1,local_a8 + 4);
  local_c8 = FUN_14972a204(uVar3,param_2,lVar2);
  local_80 = 0xffffffff;
  local_78 = 0;
  local_a8[4] = param_1 + 0x1c8;
  uVar3 = FUN_146fb4872(param_1,local_a8 + 4);
  local_d8 = param_2;
  puVar4 = (undefined4 *)FUN_14972a54c(uVar3,param_2,param_1 + 0x1c8);
  uVar1 = *puVar4;
  local_80 = 0xffffffff;
  local_78 = 0;
  local_a8[4] = lVar2;
  lVar5 = FUN_146fb4872(param_1,local_a8 + 4);
  lVar2 = local_d0;
  if (*(longlong *)(lVar5 + 0x48) == 0) {
    local_a8[2] = 0;
    local_a8[3] = 0;
    FUN_144608bd2(local_d0,uVar1);
    local_80 = 0xffffffff;
    local_78 = 0;
    local_a8[4] = lVar6;
    lVar6 = FUN_146fb78aa(param_1);
    uVar3 = local_d8;
    if (lVar6 != 0) {
      FUN_14972a942(lVar6,local_a8 + 2,local_d8);
    }
    local_a8[4] = param_1 + 0x1e0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_80 = 0xffffffff;
    local_78 = 0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_1496f8d2a(lVar6,local_a8,uVar3);
      if (local_a8[0] != 0) {
        FUN_1400020a8();
      }
    }
    local_a8[4] = param_1 + 0x1f0;
    local_a8[0] = CONCAT44(local_a8[0]._4_4_,*(undefined4 *)(lVar2 + 8));
    local_80 = 0xffffffff;
    local_78 = 0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_149700500(lVar6,local_a8,uVar3);
    }
  }
  else {
    if (*(int *)(local_d0 + 8) != *(int *)(local_c8 + 0x18)) {
      local_a8[2] = 0;
      local_a8[3] = 0;
      local_80 = 0xffffffff;
      local_78 = 0;
      local_a8[4] = lVar6;
      lVar6 = FUN_146fb78aa(param_1);
      uVar3 = local_d8;
      if (lVar6 != 0) {
        FUN_14972a942(lVar6,local_a8 + 2,local_d8);
        if (local_a8[2] != 0) {
          FUN_1400020a8();
        }
      }
      local_a8[4] = param_1 + 0x1e0;
      local_a8[2] = 0;
      local_a8[3] = 0;
      local_80 = 0xffffffff;
      local_78 = 0;
      lVar6 = FUN_146fb78aa(param_1);
      if (lVar6 != 0) {
        FUN_1496f8d2a(lVar6,local_a8 + 2,uVar3);
        if (local_a8[2] != 0) {
          FUN_1400020a8();
        }
      }
      local_a8[4] = param_1 + 0x1f0;
      local_a8[2] = local_a8[2] & 0xffffffff00000000;
      local_80 = 0xffffffff;
      local_78 = 0;
      lVar6 = FUN_146fb78aa(param_1);
      if (lVar6 != 0) {
        FUN_149700500(lVar6,local_a8 + 2,uVar3);
      }
      goto LAB_14973379f;
    }
    local_a8[2] = 0;
    local_a8[3] = 0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    FUN_144607631(local_d0,local_c8,local_a8 + 2);
    local_b8[0] = 0;
    local_b8[1] = 0;
    FUN_144608bd2(local_a8 + 2,uVar1);
    local_80 = 0xffffffff;
    local_78 = 0;
    local_a8[4] = lVar6;
    lVar6 = FUN_146fb78aa(param_1);
    uVar3 = local_d8;
    if (lVar6 != 0) {
      FUN_14972a942(lVar6,local_b8,local_d8);
    }
    local_a8[4] = param_1 + 0x1e0;
    local_80 = 0xffffffff;
    local_78 = 0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_1496f8d2a(lVar6,local_a8,uVar3);
    }
    local_a8[4] = param_1 + 0x1f0;
    local_bc = *(undefined4 *)(lVar2 + 8);
    local_80 = 0xffffffff;
    local_78 = 0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_149700500(lVar6,&local_bc,uVar3);
    }
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_a8[2] != 0) {
    FUN_1400020a8();
  }
LAB_14973379f:
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149733be0 FUN_149733be0 body=1367 status=ok
// SIG undefined FUN_149733be0(void)

void FUN_149733be0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_168 [32];
  longlong *local_148;
  longlong local_140;
  longlong local_138;
  undefined4 local_12c;
  longlong local_128 [2];
  longlong local_118 [5];
  undefined4 local_f0;
  undefined8 local_e8;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar7 = param_1 + 0x230;
  lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar3 != lVar7) {
    lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar3 != param_1 + 0x240) {
      lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar3 != param_1 + 0x250) goto LAB_149733c66;
    }
  }
  local_f0 = 0xffffffff;
  local_e8 = 0;
  local_118[4] = param_1 + 0x198;
  uVar4 = FUN_146fb4872(param_1,local_118 + 4);
  local_140 = FUN_149729486(uVar4,param_2,param_1 + 0x198);
  lVar3 = param_1 + 0x1a8;
  local_f0 = 0xffffffff;
  local_e8 = 0;
  local_118[4] = lVar3;
  uVar4 = FUN_146fb4872(param_1,local_118 + 4);
  local_138 = FUN_14972a204(uVar4,param_2,lVar3);
  local_f0 = 0xffffffff;
  local_e8 = 0;
  local_118[4] = param_1 + 0x1c8;
  uVar4 = FUN_146fb4872(param_1,local_118 + 4);
  puVar5 = (undefined4 *)FUN_14972a54c(uVar4,param_2,param_1 + 0x1c8);
  uVar1 = *puVar5;
  local_f0 = 0xffffffff;
  local_e8 = 0;
  local_118[4] = param_1 + 0x1cc;
  uVar4 = FUN_146fb4872(param_1,local_118 + 4);
  puVar5 = (undefined4 *)FUN_14972a54c(uVar4,param_2,param_1 + 0x1cc);
  uVar2 = *puVar5;
  local_f0 = 0xffffffff;
  local_e8 = 0;
  local_118[4] = param_1 + 0x1d0;
  uVar4 = FUN_146fb4872(param_1,local_118 + 4);
  plVar6 = (longlong *)FUN_14979f482(uVar4,param_2,param_1 + 0x1d0);
  plVar9 = local_118 + 4;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *plVar9 = *plVar6;
    plVar6 = plVar6 + 1;
    plVar9 = plVar9 + 1;
  }
  local_90 = 0xffffffff;
  local_88 = 0;
  local_98 = lVar3;
  lVar8 = FUN_146fb4872(param_1);
  lVar3 = local_140;
  if (*(longlong *)(lVar8 + 0x48) == 0) {
    local_148 = local_118 + 2;
    local_118[2] = 0;
    local_118[3] = 0;
    FUN_144608fc0(local_140,uVar1,uVar2,local_118 + 4);
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = lVar7;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_14972a684(lVar7,local_118 + 2,param_2);
    }
    local_98 = param_1 + 0x240;
    local_118[0] = 0;
    local_118[1] = 0;
    local_90 = 0xffffffff;
    local_88 = 0;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_1496f8d2a(lVar7,local_118,param_2);
      if (local_118[0] != 0) {
        FUN_1400020a8();
      }
    }
    local_98 = param_1 + 0x250;
    local_118[0] = CONCAT44(local_118[0]._4_4_,*(undefined4 *)(lVar3 + 8));
    local_90 = 0xffffffff;
    local_88 = 0;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_149700500(lVar7,local_118,param_2);
    }
  }
  else {
    if (*(int *)(local_140 + 8) != *(int *)(local_138 + 0x18)) {
      local_118[2] = 0;
      local_118[3] = 0;
      local_90 = 0xffffffff;
      local_88 = 0;
      local_98 = lVar7;
      lVar7 = FUN_146fb78aa(param_1);
      if (lVar7 != 0) {
        FUN_14972a684(lVar7,local_118 + 2,param_2);
        if (local_118[2] != 0) {
          FUN_1400020a8();
        }
      }
      local_98 = param_1 + 0x240;
      local_118[2] = 0;
      local_118[3] = 0;
      local_90 = 0xffffffff;
      local_88 = 0;
      lVar7 = FUN_146fb78aa(param_1);
      if (lVar7 != 0) {
        FUN_1496f8d2a(lVar7,local_118 + 2,param_2);
        if (local_118[2] != 0) {
          FUN_1400020a8();
        }
      }
      local_98 = param_1 + 0x250;
      local_118[2] = local_118[2] & 0xffffffff00000000;
      local_90 = 0xffffffff;
      local_88 = 0;
      lVar7 = FUN_146fb78aa(param_1);
      if (lVar7 != 0) {
        FUN_149700500(lVar7,local_118 + 2,param_2);
      }
      goto LAB_149733c66;
    }
    local_118[2] = 0;
    local_118[3] = 0;
    local_118[0] = 0;
    local_118[1] = 0;
    FUN_144607631(local_140,local_138,local_118 + 2);
    local_148 = local_128;
    local_128[0] = 0;
    local_128[1] = 0;
    FUN_144608fc0(local_118 + 2,uVar1,uVar2,local_118 + 4);
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = lVar7;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_14972a684(lVar7,local_128,param_2);
    }
    local_98 = param_1 + 0x240;
    local_90 = 0xffffffff;
    local_88 = 0;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_1496f8d2a(lVar7,local_118,param_2);
    }
    local_98 = param_1 + 0x250;
    local_12c = *(undefined4 *)(lVar3 + 8);
    local_90 = 0xffffffff;
    local_88 = 0;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_149700500(lVar7,&local_12c,param_2);
    }
    if (local_128[0] != 0) {
      FUN_1400020a8();
    }
    if (local_118[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_118[2] != 0) {
    FUN_1400020a8();
  }
LAB_149733c66:
  if ((local_80 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149734138 FUN_149734138 body=1196 status=ok
// SIG undefined FUN_149734138(void)

void FUN_149734138(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined4 local_ac;
  longlong local_a8 [2];
  longlong local_98 [5];
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar6 = param_1 + 0x1d0;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 != lVar6) {
    lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar2 != param_1 + 0x1e0) {
      lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar2 != param_1 + 0x1f0) goto LAB_1497341ad;
    }
  }
  local_70 = 0xffffffff;
  local_68 = 0;
  local_98[4] = param_1 + 0x198;
  uVar3 = FUN_146fb4872(param_1,local_98 + 4);
  local_c0 = FUN_149729486(uVar3,param_2,param_1 + 0x198);
  lVar2 = param_1 + 0x1a8;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_98[4] = lVar2;
  uVar3 = FUN_146fb4872(param_1,local_98 + 4);
  local_b8 = FUN_14972a204(uVar3,param_2,lVar2);
  local_70 = 0xffffffff;
  local_68 = 0;
  local_98[4] = param_1 + 0x1c8;
  uVar3 = FUN_146fb4872(param_1,local_98 + 4);
  local_c8 = param_2;
  puVar4 = (undefined4 *)FUN_146fca67a(uVar3,param_2,param_1 + 0x1c8);
  uVar1 = *puVar4;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_98[4] = lVar2;
  lVar5 = FUN_146fb4872(param_1,local_98 + 4);
  lVar2 = local_c0;
  if (*(longlong *)(lVar5 + 0x48) == 0) {
    local_98[2] = 0;
    local_98[3] = 0;
    FUN_144609331(local_c0,uVar1);
    local_70 = 0xffffffff;
    local_68 = 0;
    local_98[4] = lVar6;
    lVar6 = FUN_146fb78aa(param_1);
    uVar3 = local_c8;
    if (lVar6 != 0) {
      FUN_1496f8d2a(lVar6,local_98 + 2,local_c8);
    }
    local_98[4] = param_1 + 0x1e0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_70 = 0xffffffff;
    local_68 = 0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_1496f8d2a(lVar6,local_98,uVar3);
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
    }
    local_98[4] = param_1 + 0x1f0;
    local_98[0] = CONCAT44(local_98[0]._4_4_,*(undefined4 *)(lVar2 + 8));
    local_70 = 0xffffffff;
    local_68 = 0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_149700500(lVar6,local_98,uVar3);
    }
  }
  else {
    if (*(int *)(local_c0 + 8) != *(int *)(local_b8 + 0x18)) {
      local_98[2] = 0;
      local_98[3] = 0;
      local_70 = 0xffffffff;
      local_68 = 0;
      local_98[4] = lVar6;
      lVar6 = FUN_146fb78aa(param_1);
      uVar3 = local_c8;
      if (lVar6 != 0) {
        FUN_1496f8d2a(lVar6,local_98 + 2,local_c8);
        if (local_98[2] != 0) {
          FUN_1400020a8();
        }
      }
      local_98[4] = param_1 + 0x1e0;
      local_98[2] = 0;
      local_98[3] = 0;
      local_70 = 0xffffffff;
      local_68 = 0;
      lVar6 = FUN_146fb78aa(param_1);
      if (lVar6 != 0) {
        FUN_1496f8d2a(lVar6,local_98 + 2,uVar3);
        if (local_98[2] != 0) {
          FUN_1400020a8();
        }
      }
      local_98[4] = param_1 + 0x1f0;
      local_98[2] = local_98[2] & 0xffffffff00000000;
      local_70 = 0xffffffff;
      local_68 = 0;
      lVar6 = FUN_146fb78aa(param_1);
      if (lVar6 != 0) {
        FUN_149700500(lVar6,local_98 + 2,uVar3);
      }
      goto LAB_1497341ad;
    }
    local_98[2] = 0;
    local_98[3] = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    FUN_144607631(local_c0,local_b8,local_98 + 2);
    local_a8[0] = 0;
    local_a8[1] = 0;
    FUN_144609331(local_98 + 2,uVar1);
    local_70 = 0xffffffff;
    local_68 = 0;
    local_98[4] = lVar6;
    lVar6 = FUN_146fb78aa(param_1);
    uVar3 = local_c8;
    if (lVar6 != 0) {
      FUN_1496f8d2a(lVar6,local_a8,local_c8);
    }
    local_98[4] = param_1 + 0x1e0;
    local_70 = 0xffffffff;
    local_68 = 0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_1496f8d2a(lVar6,local_98,uVar3);
    }
    local_98[4] = param_1 + 0x1f0;
    local_ac = *(undefined4 *)(lVar2 + 8);
    local_70 = 0xffffffff;
    local_68 = 0;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_149700500(lVar6,&local_ac,uVar3);
    }
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_98[2] != 0) {
    FUN_1400020a8();
  }
LAB_1497341ad:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497345e6 FUN_1497345e6 body=1832 status=ok
// SIG undefined FUN_1497345e6(void)

void FUN_1497345e6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined1 local_1d8;
  undefined1 local_1d0;
  ulonglong *local_1c8;
  undefined8 local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  ulonglong local_158 [2];
  longlong local_148 [2];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar8 = param_1 + 0x210;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar4 != lVar8) {
    lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar4 != param_1 + 0x220) {
      lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar4 != param_1 + 0x230) goto LAB_149734675;
    }
  }
  local_a0 = 0xffffffff;
  local_98 = 0;
  local_a8 = param_1 + 0x198;
  uVar5 = FUN_146fb4872(param_1,&local_a8);
  local_1b0 = FUN_149729486(uVar5,param_2,param_1 + 0x198);
  lVar4 = param_1 + 0x1a8;
  local_a0 = 0xffffffff;
  local_98 = 0;
  local_a8 = lVar4;
  uVar5 = FUN_146fb4872(param_1,&local_a8);
  local_1a8 = FUN_14972a204(uVar5,param_2,lVar4);
  local_a0 = 0xffffffff;
  local_98 = 0;
  local_a8 = param_1 + 0x1c8;
  uVar5 = FUN_146fb4872(param_1,&local_a8);
  puVar6 = (undefined4 *)FUN_14972a54c(uVar5,param_2,param_1 + 0x1c8);
  uVar1 = *puVar6;
  local_a0 = 0xffffffff;
  local_98 = 0;
  local_a8 = param_1 + 0x1d0;
  uVar5 = FUN_146fb4872(param_1,&local_a8);
  puVar6 = (undefined4 *)FUN_14979981c(uVar5,param_2,param_1 + 0x1d0);
  local_c8 = *puVar6;
  uStack_c4 = puVar6[1];
  uStack_c0 = puVar6[2];
  uStack_bc = puVar6[3];
  local_b8 = *(undefined8 *)(puVar6 + 4);
  local_a0 = 0xffffffff;
  local_98 = 0;
  local_a8 = param_1 + 0x1e8;
  uVar5 = FUN_146fb4872(param_1,&local_a8);
  puVar6 = (undefined4 *)FUN_14979981c(uVar5,param_2,param_1 + 0x1e8);
  local_e8 = *puVar6;
  uStack_e4 = puVar6[1];
  uStack_e0 = puVar6[2];
  uStack_dc = puVar6[3];
  local_d8 = *(undefined8 *)(puVar6 + 4);
  local_a0 = 0xffffffff;
  local_98 = 0;
  local_a8 = param_1 + 0x200;
  uVar5 = FUN_146fb4872(param_1,&local_a8);
  puVar6 = (undefined4 *)FUN_14972a54c(uVar5,param_2,param_1 + 0x200);
  uVar2 = *puVar6;
  local_a0 = 0xffffffff;
  local_98 = 0;
  local_a8 = param_1 + 0x204;
  uVar5 = FUN_146fb4872(param_1,&local_a8);
  local_1b8 = param_2;
  puVar6 = (undefined4 *)FUN_14972a54c(uVar5,param_2,param_1 + 0x204);
  uVar3 = *puVar6;
  local_a0 = 0xffffffff;
  local_98 = 0;
  local_a8 = lVar4;
  lVar7 = FUN_146fb4872(param_1,&local_a8);
  lVar4 = local_1b0;
  if (*(longlong *)(lVar7 + 0x48) == 0) {
    local_1c8 = local_f8;
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_1d8 = *(undefined1 *)(param_1 + 0x208);
    local_1d0 = *(undefined1 *)(param_1 + 0x209);
    local_108 = local_d8;
    local_118 = CONCAT44(uStack_e4,local_e8);
    uStack_110 = CONCAT44(uStack_dc,uStack_e0);
    local_138 = local_c8;
    uStack_134 = uStack_c4;
    uStack_130 = uStack_c0;
    uStack_12c = uStack_bc;
    local_128 = local_b8;
    local_1e8 = uVar2;
    local_1e0 = uVar3;
    FUN_144609653(local_1b0,uVar1);
    local_a0 = 0xffffffff;
    local_98 = 0;
    local_a8 = lVar8;
    lVar8 = FUN_146fb78aa(param_1);
    uVar5 = local_1b8;
    if (lVar8 != 0) {
      FUN_14972a684(lVar8,local_f8,local_1b8);
    }
    local_a8 = param_1 + 0x220;
    local_148[0] = 0;
    local_148[1] = 0;
    local_a0 = 0xffffffff;
    local_98 = 0;
    lVar8 = FUN_146fb78aa(param_1);
    if (lVar8 != 0) {
      FUN_1496f8d2a(lVar8,local_148,uVar5);
      if (local_148[0] != 0) {
        FUN_1400020a8();
      }
    }
    local_a8 = param_1 + 0x230;
    local_148[0] = CONCAT44(local_148[0]._4_4_,*(undefined4 *)(lVar4 + 8));
    local_a0 = 0xffffffff;
    local_98 = 0;
    lVar8 = FUN_146fb78aa(param_1);
    if (lVar8 != 0) {
      FUN_149700500(lVar8,local_148,uVar5);
    }
  }
  else {
    if (*(int *)(local_1b0 + 8) != *(int *)(local_1a8 + 0x18)) {
      local_f8[0] = 0;
      local_f8[1] = 0;
      local_a0 = 0xffffffff;
      local_98 = 0;
      local_a8 = lVar8;
      lVar8 = FUN_146fb78aa(param_1);
      uVar5 = local_1b8;
      if (lVar8 != 0) {
        FUN_14972a684(lVar8,local_f8,local_1b8);
        if (local_f8[0] != 0) {
          FUN_1400020a8();
        }
      }
      local_a8 = param_1 + 0x220;
      local_f8[0] = 0;
      local_f8[1] = 0;
      local_a0 = 0xffffffff;
      local_98 = 0;
      lVar8 = FUN_146fb78aa(param_1);
      if (lVar8 != 0) {
        FUN_1496f8d2a(lVar8,local_f8,uVar5);
        if (local_f8[0] != 0) {
          FUN_1400020a8();
        }
      }
      local_a8 = param_1 + 0x230;
      local_f8[0] = local_f8[0] & 0xffffffff00000000;
      local_a0 = 0xffffffff;
      local_98 = 0;
      lVar8 = FUN_146fb78aa(param_1);
      if (lVar8 != 0) {
        FUN_149700500(lVar8,local_f8,uVar5);
      }
      goto LAB_149734675;
    }
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_148[0] = 0;
    local_148[1] = 0;
    FUN_144607631(local_1b0,local_1a8,local_f8);
    local_1c8 = local_158;
    local_158[0] = 0;
    local_158[1] = 0;
    local_1d8 = *(undefined1 *)(param_1 + 0x208);
    local_1d0 = *(undefined1 *)(param_1 + 0x209);
    local_168 = local_d8;
    local_178 = CONCAT44(uStack_e4,local_e8);
    uStack_170 = CONCAT44(uStack_dc,uStack_e0);
    local_198 = local_c8;
    uStack_194 = uStack_c4;
    uStack_190 = uStack_c0;
    uStack_18c = uStack_bc;
    local_188 = local_b8;
    local_1e8 = uVar2;
    local_1e0 = uVar3;
    FUN_144609653(local_f8,uVar1);
    local_a0 = 0xffffffff;
    local_98 = 0;
    local_a8 = lVar8;
    lVar8 = FUN_146fb78aa(param_1);
    uVar5 = local_1b8;
    if (lVar8 != 0) {
      FUN_14972a684(lVar8,local_158,local_1b8);
    }
    local_a8 = param_1 + 0x220;
    local_a0 = 0xffffffff;
    local_98 = 0;
    lVar8 = FUN_146fb78aa(param_1);
    if (lVar8 != 0) {
      FUN_1496f8d2a(lVar8,local_148,uVar5);
    }
    local_a8 = param_1 + 0x230;
    local_19c = *(undefined4 *)(lVar4 + 8);
    local_a0 = 0xffffffff;
    local_98 = 0;
    lVar8 = FUN_146fb78aa(param_1);
    if (lVar8 != 0) {
      FUN_149700500(lVar8,&local_19c,uVar5);
    }
    if (local_158[0] != 0) {
      FUN_1400020a8();
    }
    if (local_148[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
LAB_149734675:
  if ((local_90 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149734d10 FUN_149734d10 body=1603 status=ok
// SIG undefined FUN_149734d10(void)

void FUN_149734d10(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  uint local_dc;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  uint local_c0;
  uint local_bc;
  longlong local_b8 [8];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if ((lVar4 != param_1 + 0x1e0) &&
     (lVar4 = (**(code **)(*param_3 + 0x20))(param_3), lVar4 != param_1 + 0x1f0))
  goto LAB_149734d70;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_d8 = param_1 + 0x1e0;
  local_78 = param_1 + 0x198;
  uVar5 = FUN_146fb4872(param_1,&local_78);
  plVar6 = (longlong *)FUN_14972668e(uVar5,param_2,param_1 + 0x198);
  lVar4 = param_1 + 0x1a8;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_c8 = lVar4;
  local_78 = lVar4;
  uVar5 = FUN_146fb4872(param_1,&local_78);
  plVar7 = (longlong *)FUN_149729092(uVar5,param_2,lVar4);
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = param_1 + 0x1b8;
  uVar5 = FUN_146fb4872(param_1,&local_78);
  plVar8 = (longlong *)FUN_14972668e(uVar5,param_2,param_1 + 0x1b8);
  lVar4 = param_1 + 0x1c8;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = lVar4;
  uVar5 = FUN_146fb4872(param_1,&local_78);
  local_d0 = param_2;
  plVar9 = (longlong *)FUN_149729092(uVar5,param_2,lVar4);
  uVar1 = *(uint *)(plVar6 + 1);
  local_bc = *(uint *)(plVar7 + 1);
  local_dc = *(uint *)(plVar8 + 1);
  local_c0 = *(uint *)(plVar9 + 1);
  local_78 = local_c8;
  local_70 = 0xffffffff;
  local_68 = 0;
  lVar10 = FUN_146fb4872(param_1,&local_78);
  local_c8 = *(longlong *)(lVar10 + 0x48);
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = lVar4;
  lVar4 = FUN_146fb4872(param_1,&local_78);
  local_b8[6] = 0;
  local_b8[7] = 0;
  if ((local_c8 == 0) || (*(longlong *)(lVar4 + 0x48) == 0)) {
    if (uVar1 != local_dc) goto LAB_14973526e;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    FUN_1448158c6(local_b8 + 6,&local_78,uVar1);
    local_e8 = *(undefined1 *)(param_1 + 0x1dd);
    local_f0 = *(undefined4 *)(param_1 + 0x1d8);
    local_f8 = *(undefined1 *)(param_1 + 0x1dc);
    FUN_144609a6d(plVar6,plVar8,local_b8 + 6,uVar1);
    local_78 = local_d8;
    local_70 = 0xffffffff;
    local_68 = 0;
    lVar4 = FUN_146fb78aa(param_1,&local_78);
    uVar5 = local_d0;
    if (lVar4 != 0) {
      FUN_14972a684(lVar4,local_b8 + 6,local_d0);
    }
LAB_1497352dc:
    local_b8[5] = 0;
    local_b8[4] = 0;
    local_78 = param_1 + 0x1f0;
    local_70 = 0xffffffff;
    local_68 = 0;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_1496f8d2a(lVar4,local_b8 + 4,uVar5);
      goto LAB_1497351a1;
    }
  }
  else {
    if ((uVar1 != local_bc) || (local_dc != local_c0)) {
LAB_14973526e:
      local_b8[4] = 0;
      local_b8[5] = 0;
      local_78 = local_d8;
      local_70 = 0xffffffff;
      local_68 = 0;
      lVar4 = FUN_146fb78aa(param_1);
      uVar5 = local_d0;
      if ((lVar4 != 0) && (FUN_14972a684(lVar4,local_b8 + 4,local_d0), local_b8[4] != 0)) {
        FUN_1400020a8();
      }
      goto LAB_1497352dc;
    }
    uVar3 = local_dc;
    if ((int)local_dc <= (int)uVar1) {
      uVar3 = uVar1;
    }
    iVar12 = 0;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    FUN_1448158c6(local_b8 + 6,&local_78,uVar3);
    local_b8[4] = 0;
    local_b8[5] = 0;
    local_78 = local_78 & 0xffffffff00000000;
    FUN_1448156a8(local_b8 + 4,&local_78,uVar3);
    local_b8[2] = 0;
    local_b8[3] = 0;
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_78 = local_78 & 0xffffffff00000000;
    FUN_1448158c6(local_b8 + 2,&local_78,uVar3);
    local_78 = local_78 & 0xffffffff00000000;
    FUN_1448158c6(local_b8,&local_78,uVar3);
    if (0 < (int)uVar1) {
      uVar11 = 0;
      iVar12 = 0;
LAB_149735000:
      if ((longlong)(int)plVar9[1] != 0) {
        iVar2 = *(int *)(*plVar7 + uVar11 * 4);
        lVar4 = (longlong)(int)plVar9[1] * 4;
        lVar10 = 0;
        do {
          if (*(int *)(*plVar9 + lVar10) == iVar2) {
            lVar10 = 0;
            goto LAB_14973502e;
          }
          lVar10 = lVar10 + 4;
        } while (lVar4 != lVar10);
      }
      goto LAB_14973507b;
    }
LAB_149735087:
    FUN_144a1a59e(local_b8 + 4,iVar12,1);
    FUN_144a84024(local_b8 + 2,iVar12,1);
    FUN_144a84024(local_b8,iVar12,1);
    FUN_144a84024(local_b8 + 6,iVar12,1);
    local_e8 = *(undefined1 *)(param_1 + 0x1dd);
    local_f0 = *(undefined4 *)(param_1 + 0x1d8);
    local_f8 = *(undefined1 *)(param_1 + 0x1dc);
    FUN_144609a6d(local_b8 + 2,local_b8,local_b8 + 6,iVar12);
    local_78 = local_d8;
    local_70 = 0xffffffff;
    local_68 = 0;
    lVar4 = FUN_146fb78aa(param_1);
    uVar5 = local_d0;
    if (lVar4 != 0) {
      FUN_14972a684(lVar4,local_b8 + 6,local_d0);
    }
    local_78 = param_1 + 0x1f0;
    local_70 = 0xffffffff;
    local_68 = 0;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_1496f8d2a(lVar4,local_b8 + 4,uVar5);
    }
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_b8[2] != 0) {
      FUN_1400020a8();
    }
LAB_1497351a1:
    if (local_b8[4] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_b8[6] != 0) {
    FUN_1400020a8();
  }
LAB_149734d70:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    lVar10 = lVar10 + 1;
    lVar4 = lVar4 + -4;
    if (lVar4 == 0) break;
LAB_14973502e:
    if (*(int *)(*plVar9 + lVar10 * 4) == iVar2) goto LAB_149735044;
  }
  lVar10 = -1;
LAB_149735044:
  lVar4 = (longlong)iVar12;
  *(int *)(local_b8[4] + lVar4 * 4) = iVar2;
  *(undefined4 *)(local_b8[2] + lVar4 * 4) = *(undefined4 *)(*plVar6 + uVar11 * 4);
  *(undefined4 *)(local_b8[0] + lVar4 * 4) = *(undefined4 *)(*plVar8 + (longlong)(int)lVar10 * 4);
  iVar12 = iVar12 + 1;
LAB_14973507b:
  uVar11 = uVar11 + 1;
  if (uVar11 == uVar1) goto LAB_149735087;
  goto LAB_149735000;
}



// FUNCTION 149735354 FUN_149735354 body=4846 status=ok
// SIG undefined FUN_149735354(void)

void FUN_149735354(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined1 auStack_198 [32];
  uint local_178;
  undefined1 local_170;
  undefined4 local_168;
  undefined1 local_160;
  uint local_154;
  longlong local_150;
  longlong local_148;
  undefined8 local_140;
  longlong *local_138;
  uint local_12c;
  uint local_128;
  uint local_124;
  longlong *local_120;
  ulonglong local_118;
  longlong local_110;
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  ulonglong local_c8 [11];
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar10 = (**(code **)(*param_3 + 0x20))(param_3);
  if ((lVar10 != param_1 + 0x200) &&
     (lVar10 = (**(code **)(*param_3 + 0x20))(param_3), lVar10 != param_1 + 0x210))
  goto LAB_1497353b4;
  lVar10 = param_1 + 0x198;
  uStack_70._0_4_ = 0xffffffff;
  local_68 = 0;
  local_148 = param_1 + 0x200;
  local_f8 = lVar10;
  local_c8[10] = lVar10;
  uVar11 = FUN_146fb4872(param_1,local_c8 + 10);
  local_138 = (longlong *)FUN_14972668e(uVar11,param_2,lVar10);
  lVar10 = param_1 + 0x1a8;
  uStack_70._0_4_ = 0xffffffff;
  local_68 = 0;
  local_108 = lVar10;
  local_c8[10] = lVar10;
  uVar11 = FUN_146fb4872(param_1,local_c8 + 10);
  local_100 = (longlong *)FUN_149729092(uVar11,param_2,lVar10);
  lVar10 = param_1 + 0x1b8;
  uStack_70._0_4_ = 0xffffffff;
  local_68 = 0;
  local_110 = lVar10;
  local_c8[10] = lVar10;
  uVar11 = FUN_146fb4872(param_1,local_c8 + 10);
  plVar12 = (longlong *)FUN_149728954(uVar11,param_2,lVar10);
  lVar10 = param_1 + 0x1c8;
  uStack_70._0_4_ = 0xffffffff;
  local_68 = 0;
  local_150 = lVar10;
  local_c8[10] = lVar10;
  uVar11 = FUN_146fb4872(param_1,local_c8 + 10);
  plVar13 = (longlong *)FUN_149729092(uVar11,param_2,lVar10);
  lVar10 = param_1 + 0x1d8;
  uStack_70._0_4_ = 0xffffffff;
  local_68 = 0;
  local_d0 = lVar10;
  local_c8[10] = lVar10;
  uVar11 = FUN_146fb4872(param_1,local_c8 + 10);
  plVar14 = (longlong *)FUN_149728954(uVar11,param_2,lVar10);
  lVar10 = param_1 + 0x1e8;
  uStack_70._0_4_ = 0xffffffff;
  local_68 = 0;
  local_d8 = lVar10;
  local_c8[10] = lVar10;
  uVar11 = FUN_146fb4872(param_1,local_c8 + 10);
  local_140 = param_2;
  plVar15 = (longlong *)FUN_149729092(uVar11,param_2,lVar10);
  uVar18 = *(uint *)(local_138 + 1);
  uVar23 = (ulonglong)uVar18;
  local_124 = *(uint *)(local_100 + 1);
  local_118 = (ulonglong)*(uint *)(plVar12 + 1);
  local_128 = *(uint *)(plVar13 + 1);
  local_154 = *(uint *)(plVar14 + 1);
  local_12c = *(uint *)(plVar15 + 1);
  local_c8[10] = local_f8;
  uStack_70._0_4_ = 0xffffffff;
  local_68 = 0;
  local_120 = plVar12;
  local_f0 = plVar14;
  lVar10 = FUN_146fb4872(param_1,local_c8 + 10);
  local_e0 = *(longlong *)(lVar10 + 0x48);
  local_f8 = CONCAT71(local_f8._1_7_,local_e0 == 0);
  local_c8[10] = local_108;
  uStack_70._0_4_ = 0xffffffff;
  local_68 = 0;
  lVar10 = FUN_146fb4872(param_1,local_c8 + 10);
  local_108 = *(longlong *)(lVar10 + 0x48);
  local_c8[10] = local_110;
  uStack_70._0_4_ = 0xffffffff;
  local_68 = 0;
  lVar10 = FUN_146fb4872(param_1,local_c8 + 10);
  local_e8 = *(longlong *)(lVar10 + 0x48);
  bVar24 = local_e8 != 0;
  local_c8[10] = local_150;
  uStack_70._0_4_ = 0xffffffff;
  local_68 = 0;
  lVar10 = FUN_146fb4872(param_1,local_c8 + 10);
  local_110 = *(longlong *)(lVar10 + 0x48);
  local_c8[10] = local_d0;
  uStack_70._0_4_ = 0xffffffff;
  local_68 = 0;
  lVar10 = FUN_146fb4872(param_1,local_c8 + 10);
  lVar10 = *(longlong *)(lVar10 + 0x48);
  local_c8[10] = local_d8;
  uStack_70._0_4_ = 0xffffffff;
  local_68 = 0;
  local_150 = param_1;
  lVar16 = FUN_146fb4872(param_1,local_c8 + 10);
  plVar12 = local_f0;
  uVar17 = local_118;
  lVar19 = local_150;
  lVar16 = *(longlong *)(lVar16 + 0x48);
  local_c8[8] = 0;
  local_c8[9] = 0;
  uVar20 = (uint)local_118;
  if (lVar10 == 0 && (bVar24 && (char)local_f8 == '\0')) {
    if (local_108 == 0 || local_110 == 0) {
      if (uVar18 != (uint)local_118) goto LAB_149735c09;
      local_c8[10] = 0;
      uStack_70 = 0;
      local_68 = 0;
      FUN_1447a8a24(local_c8 + 8,local_c8 + 10,uVar23);
      local_160 = *(undefined1 *)(local_150 + 0x1fd);
      local_168 = *(undefined4 *)(local_150 + 0x1f8);
      local_170 = *(undefined1 *)(local_150 + 0x1fc);
      plVar12 = (longlong *)0x0;
      plVar13 = local_138;
      plVar14 = local_120;
      local_178 = uVar18;
LAB_1497358a7:
      lVar19 = local_150;
      FUN_144609cc7(plVar13,plVar14,plVar12,local_c8 + 8);
      local_c8[10] = local_148;
      uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
      local_68 = 0;
      lVar10 = FUN_146fb78aa(lVar19,local_c8 + 10);
      uVar11 = local_140;
      if (lVar10 != 0) {
        FUN_14972a942(lVar10,local_c8 + 8,local_140);
      }
      goto LAB_149735c99;
    }
    if ((uVar18 != local_124) || ((uint)local_118 != local_128)) goto LAB_149735c09;
    uVar17 = local_118 & 0xffffffff;
    if ((int)(uint)local_118 <= (int)uVar18) {
      uVar17 = uVar23;
    }
    local_c8[10] = 0;
    uStack_70 = 0;
    uVar20 = 0;
    local_68 = 0;
    FUN_1447a8a24(local_c8 + 8,local_c8 + 10,uVar17);
    local_c8[6] = 0;
    local_c8[7] = 0;
    local_c8[10] = local_c8[10] & 0xffffffff00000000;
    FUN_1448156a8(local_c8 + 6,local_c8 + 10,uVar17);
    local_c8[4] = 0;
    local_c8[5] = 0;
    local_c8[2] = 0;
    local_c8[3] = 0;
    local_c8[10] = local_c8[10] & 0xffffffff00000000;
    FUN_1448158c6(local_c8 + 4,local_c8 + 10,uVar17);
    local_68 = 0;
    local_c8[10] = 0;
    uStack_70 = 0;
    FUN_1447a8a24(local_c8 + 2,local_c8 + 10,uVar17);
    if (0 < (int)uVar18) {
      uVar17 = 0;
      uVar20 = 0;
LAB_1497359f0:
      if ((longlong)(int)plVar13[1] != 0) {
        iVar5 = *(int *)(*local_100 + uVar17 * 4);
        lVar10 = (longlong)(int)plVar13[1] * 4;
        lVar16 = 0;
        do {
          if (*(int *)(*plVar13 + lVar16) == iVar5) {
            lVar16 = 0;
            goto LAB_149735a22;
          }
          lVar16 = lVar16 + 4;
        } while (lVar10 != lVar16);
      }
      goto LAB_149735a86;
    }
LAB_149735a92:
    FUN_144a1a59e(local_c8 + 6,uVar20,1);
    FUN_144a84024(local_c8 + 4,uVar20,1);
    FUN_14051b394(local_c8 + 2,uVar20,1);
    FUN_14051b394(local_c8 + 8,uVar20,1);
    lVar10 = local_150;
    local_160 = *(undefined1 *)(local_150 + 0x1fd);
    local_168 = *(undefined4 *)(local_150 + 0x1f8);
    local_170 = *(undefined1 *)(local_150 + 0x1fc);
    local_178 = uVar20;
    FUN_144609cc7(local_c8 + 4,local_c8 + 2,0,local_c8 + 8);
    local_c8[10] = local_148;
LAB_149735b32:
    uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
    local_68 = 0;
    lVar16 = FUN_146fb78aa(lVar10);
    uVar11 = local_140;
    if (lVar16 != 0) {
      FUN_14972a942(lVar16,local_c8 + 8,local_140);
    }
    local_c8[10] = lVar10 + 0x210;
    uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
    local_68 = 0;
    lVar10 = FUN_146fb78aa(lVar10);
    if (lVar10 != 0) {
LAB_149736624:
      FUN_1496f8d2a(lVar10,local_c8 + 6,uVar11);
    }
LAB_149735b98:
    if (local_c8[2] != 0) {
      FUN_1400020a8();
    }
    if (local_c8[4] != 0) {
      FUN_1400020a8();
    }
LAB_149735bc4:
    if (local_c8[6] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (((local_e8 == 0) && (local_e0 != 0)) && (lVar10 != 0)) {
      if (local_108 == 0 || lVar16 == 0) {
        if (uVar18 == local_154) {
          local_c8[10] = 0;
          uStack_70 = 0;
          local_68 = 0;
          FUN_1447a8a24(local_c8 + 8,local_c8 + 10,uVar23);
          local_160 = *(undefined1 *)(local_150 + 0x1fd);
          local_168 = *(undefined4 *)(local_150 + 0x1f8);
          local_170 = *(undefined1 *)(local_150 + 0x1fc);
          plVar13 = local_138;
          plVar14 = (longlong *)0x0;
          local_178 = uVar18;
          goto LAB_1497358a7;
        }
      }
      else if ((uVar18 == local_124) && (local_154 == local_12c)) {
        uVar20 = local_154;
        if ((int)local_154 <= (int)uVar18) {
          uVar20 = uVar18;
        }
        local_c8[10] = 0;
        uStack_70 = 0;
        uVar21 = 0;
        local_68 = 0;
        FUN_1447a8a24(local_c8 + 8,local_c8 + 10,uVar20);
        local_c8[6] = 0;
        local_c8[7] = 0;
        local_c8[10] = local_c8[10] & 0xffffffff00000000;
        FUN_1448156a8(local_c8 + 6,local_c8 + 10,uVar20);
        local_c8[4] = 0;
        local_c8[5] = 0;
        local_c8[2] = 0;
        local_c8[3] = 0;
        local_c8[10] = local_c8[10] & 0xffffffff00000000;
        FUN_1448158c6(local_c8 + 4,local_c8 + 10,uVar20);
        local_68 = 0;
        local_c8[10] = 0;
        uStack_70 = 0;
        FUN_1447a8a24(local_c8 + 2,local_c8 + 10,uVar20);
        lVar16 = local_148;
        if (0 < (int)uVar18) {
          uVar17 = 0;
          uVar21 = 0;
LAB_149735d95:
          if ((longlong)(int)plVar15[1] != 0) {
            iVar5 = *(int *)(*local_100 + uVar17 * 4);
            lVar10 = (longlong)(int)plVar15[1] * 4;
            lVar19 = 0;
            do {
              if (*(int *)(*plVar15 + lVar19) == iVar5) {
                lVar19 = 0;
                goto LAB_149735dc6;
              }
              lVar19 = lVar19 + 4;
            } while (lVar10 != lVar19);
          }
          goto LAB_149735e2d;
        }
LAB_149735e39:
        FUN_144a1a59e(local_c8 + 6,uVar21,1);
        FUN_144a84024(local_c8 + 4,uVar21,1);
        FUN_14051b394(local_c8 + 2,uVar21,1);
        FUN_14051b394(local_c8 + 8,uVar21,1);
        lVar10 = local_150;
        local_160 = *(undefined1 *)(local_150 + 0x1fd);
        local_168 = *(undefined4 *)(local_150 + 0x1f8);
        local_170 = *(undefined1 *)(local_150 + 0x1fc);
        local_178 = uVar21;
        FUN_144609cc7(local_c8 + 4,0,local_c8 + 2,local_c8 + 8);
        local_c8[10] = lVar16;
        goto LAB_149735b32;
      }
    }
    else if ((local_e0 == 0 && local_e8 != 0) && lVar10 != 0) {
      if (local_110 == 0 || lVar16 == 0) {
        if ((uint)local_118 == local_154) {
          local_c8[10] = 0;
          uStack_70 = 0;
          local_68 = 0;
          FUN_1447a8a24(local_c8 + 8,local_c8 + 10,local_118 & 0xffffffff);
          local_160 = *(undefined1 *)(local_150 + 0x1fd);
          local_168 = *(undefined4 *)(local_150 + 0x1f8);
          local_170 = *(undefined1 *)(local_150 + 0x1fc);
          local_178 = uVar20;
          plVar13 = (longlong *)0x0;
          plVar14 = local_120;
          goto LAB_1497358a7;
        }
      }
      else if (((uint)local_118 == local_128) && (local_154 == local_12c)) {
        uVar23 = (ulonglong)local_154;
        if ((int)local_154 <= (int)(uint)local_118) {
          uVar23 = local_118 & 0xffffffff;
        }
        local_c8[10] = 0;
        uStack_70 = 0;
        uVar18 = 0;
        local_68 = 0;
        FUN_1447a8a24(local_c8 + 8,local_c8 + 10,uVar23);
        local_c8[6] = 0;
        local_c8[7] = 0;
        local_c8[10] = local_c8[10] & 0xffffffff00000000;
        FUN_1448156a8(local_c8 + 6,local_c8 + 10,uVar23);
        local_c8[4] = 0;
        local_c8[5] = 0;
        local_c8[2] = 0;
        local_c8[3] = 0;
        local_68 = 0;
        local_c8[10] = 0;
        uStack_70 = 0;
        FUN_1447a8a24(local_c8 + 4,local_c8 + 10,uVar23);
        local_68 = 0;
        local_c8[10] = 0;
        uStack_70 = 0;
        FUN_1447a8a24(local_c8 + 4,local_c8 + 10);
        uVar11 = local_140;
        lVar10 = local_150;
        if (0 < (int)uVar20) {
          uVar23 = 0;
          uVar18 = 0;
LAB_1497360d3:
          if ((longlong)(int)plVar15[1] != 0) {
            iVar5 = *(int *)(*plVar13 + uVar23 * 4);
            lVar16 = (longlong)(int)plVar15[1] * 4;
            lVar19 = 0;
            do {
              if (*(int *)(*plVar15 + lVar19) == iVar5) {
                lVar19 = 0;
                goto LAB_149736105;
              }
              lVar19 = lVar19 + 4;
            } while (lVar16 != lVar19);
          }
          goto LAB_14973617e;
        }
LAB_14973618a:
        FUN_144a1a59e(local_c8 + 6,uVar18,1);
        FUN_14051b394(local_c8 + 4,uVar18,1);
        FUN_14051b394(local_c8 + 2,uVar18,1);
        FUN_14051b394(local_c8 + 8,uVar18,1);
        local_160 = *(undefined1 *)(lVar10 + 0x1fd);
        local_168 = *(undefined4 *)(lVar10 + 0x1f8);
        local_170 = *(undefined1 *)(lVar10 + 0x1fc);
        local_178 = uVar18;
        FUN_144609cc7(0,local_c8 + 4,local_c8 + 2,local_c8 + 8);
        local_c8[10] = local_148;
        uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
        local_68 = 0;
        lVar16 = FUN_146fb78aa(lVar10);
        if (lVar16 != 0) {
          FUN_14972a942(lVar16,local_c8 + 8,uVar11);
        }
        local_c8[10] = lVar10 + 0x210;
        uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
        local_68 = 0;
        lVar10 = FUN_146fb78aa(lVar10);
        if (lVar10 == 0) goto LAB_149735b98;
        goto LAB_149736624;
      }
    }
    else if ((bVar24 && (char)local_f8 == '\0') && lVar10 != 0) {
      if ((local_108 == 0 || local_110 == 0) || lVar16 == 0) {
        if ((uVar18 == (uint)local_118) && (uVar18 == local_154)) {
          local_c8[10] = 0;
          uStack_70 = 0;
          local_68 = 0;
          FUN_1447a8a24(local_c8 + 8,local_c8 + 10,uVar23);
          local_160 = *(undefined1 *)(local_150 + 0x1fd);
          local_168 = *(undefined4 *)(local_150 + 0x1f8);
          local_170 = *(undefined1 *)(local_150 + 0x1fc);
          plVar13 = local_138;
          plVar14 = local_120;
          local_178 = uVar18;
          goto LAB_1497358a7;
        }
      }
      else if (((uVar18 == local_124) && ((uint)local_118 == local_128)) && (local_154 == local_12c)
              ) {
        if ((int)(uint)local_118 <= (int)uVar18) {
          uVar20 = uVar18;
        }
        if ((int)uVar20 < (int)local_154) {
          uVar20 = local_154;
        }
        local_c8[10] = 0;
        uStack_70 = 0;
        local_68 = 0;
        FUN_1447a8a24(local_c8 + 8,local_c8 + 10,uVar20);
        local_c8[6] = 0;
        local_c8[7] = 0;
        local_c8[10] = local_c8[10] & 0xffffffff00000000;
        FUN_1448156a8(local_c8 + 6,local_c8 + 10,uVar20);
        local_c8[4] = 0;
        local_c8[5] = 0;
        local_c8[2] = 0;
        local_c8[3] = 0;
        local_c8[0] = 0;
        local_c8[1] = 0;
        local_c8[10] = local_c8[10] & 0xffffffff00000000;
        FUN_1448158c6(local_c8 + 4,local_c8 + 10,uVar20);
        local_68 = 0;
        local_c8[10] = 0;
        uStack_70 = 0;
        FUN_1447a8a24(local_c8 + 2,local_c8 + 10,uVar20);
        local_68 = 0;
        local_c8[10] = 0;
        uStack_70 = 0;
        uVar20 = 0;
        FUN_1447a8a24(local_c8,local_c8 + 10);
        if (0 < (int)uVar18) {
          uVar17 = 0;
          uVar20 = 0;
LAB_1497363c7:
          if ((longlong)(int)plVar13[1] != 0) {
            iVar5 = *(int *)(*local_100 + uVar17 * 4);
            lVar10 = (longlong)(int)plVar13[1] * 4;
            lVar16 = 0;
            do {
              if (*(int *)(*plVar13 + lVar16) == iVar5) {
                if ((longlong)(int)plVar15[1] != 0) {
                  lVar16 = (longlong)(int)plVar15[1] * 4;
                  lVar19 = 0;
                  goto LAB_149736418;
                }
                break;
              }
              lVar16 = lVar16 + 4;
            } while (lVar10 != lVar16);
          }
          goto LAB_1497363f8;
        }
LAB_1497364de:
        FUN_144a1a59e(local_c8 + 6,uVar20,1);
        FUN_144a84024(local_c8 + 4,uVar20,1);
        FUN_14051b394(local_c8 + 2,uVar20,1);
        FUN_14051b394(local_c8,uVar20,1);
        FUN_14051b394(local_c8 + 8,uVar20,1);
        lVar10 = local_150;
        local_160 = *(undefined1 *)(local_150 + 0x1fd);
        local_168 = *(undefined4 *)(local_150 + 0x1f8);
        local_170 = *(undefined1 *)(local_150 + 0x1fc);
        local_178 = uVar20;
        FUN_144609cc7(local_c8 + 4,local_c8 + 2,local_c8,local_c8 + 8);
        local_c8[10] = local_148;
        uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
        local_68 = 0;
        lVar16 = FUN_146fb78aa(lVar10);
        uVar11 = local_140;
        if (lVar16 != 0) {
          FUN_14972a942(lVar16,local_c8 + 8,local_140);
        }
        local_c8[10] = lVar10 + 0x210;
        uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
        local_68 = 0;
        lVar10 = FUN_146fb78aa(lVar10);
        if (lVar10 != 0) {
          FUN_1496f8d2a(lVar10,local_c8 + 6,uVar11);
        }
        if (local_c8[0] != 0) {
          FUN_1400020a8();
        }
        goto LAB_149735b98;
      }
    }
LAB_149735c09:
    local_c8[6] = 0;
    local_c8[7] = 0;
    local_c8[10] = local_148;
    uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
    local_68 = 0;
    lVar10 = FUN_146fb78aa(local_150);
    uVar11 = local_140;
    if ((lVar10 != 0) && (FUN_14972a942(lVar10,local_c8 + 6,local_140), local_c8[6] != 0)) {
      FUN_1400020a8();
    }
LAB_149735c99:
    local_c8[10] = lVar19 + 0x210;
    local_68 = 0;
    uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
    local_c8[7] = 0;
    local_c8[6] = 0;
    lVar10 = FUN_146fb78aa(lVar19);
    if (lVar10 != 0) {
      FUN_1496f8d2a(lVar10,local_c8 + 6,uVar11);
      goto LAB_149735bc4;
    }
  }
  if (local_c8[8] != 0) {
    FUN_1400020a8();
  }
LAB_1497353b4:
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    lVar16 = lVar16 + 1;
    lVar10 = lVar10 + -4;
    if (lVar10 == 0) break;
LAB_149735a22:
    if (*(int *)(*plVar13 + lVar16 * 4) == iVar5) goto LAB_149735a38;
  }
  lVar16 = -1;
LAB_149735a38:
  lVar19 = (longlong)(int)uVar20;
  *(int *)(local_c8[6] + lVar19 * 4) = iVar5;
  *(undefined4 *)(local_c8[4] + lVar19 * 4) = *(undefined4 *)(*local_138 + uVar17 * 4);
  lVar10 = *local_120;
  *(undefined8 *)(local_c8[2] + 0x10 + lVar19 * 0x18) =
       *(undefined8 *)(lVar10 + 0x10 + (longlong)(int)lVar16 * 0x18);
  puVar1 = (undefined4 *)(lVar10 + (longlong)(int)lVar16 * 0x18);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (undefined4 *)(local_c8[2] + lVar19 * 0x18);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  uVar20 = uVar20 + 1;
LAB_149735a86:
  uVar17 = uVar17 + 1;
  if (uVar17 == uVar23) goto LAB_149735a92;
  goto LAB_1497359f0;
  while( true ) {
    lVar19 = lVar19 + 1;
    lVar16 = lVar16 + -4;
    if (lVar16 == 0) break;
LAB_149736105:
    if (*(int *)(*plVar15 + lVar19 * 4) == iVar5) goto LAB_14973611b;
  }
  lVar19 = -1;
LAB_14973611b:
  lVar22 = (longlong)(int)uVar18;
  *(int *)(local_c8[6] + lVar22 * 4) = iVar5;
  lVar16 = *local_120;
  *(undefined8 *)(local_c8[4] + 0x10 + lVar22 * 0x18) =
       *(undefined8 *)(lVar16 + 0x10 + uVar23 * 0x18);
  puVar4 = (undefined8 *)(lVar16 + uVar23 * 0x18);
  uVar9 = puVar4[1];
  puVar3 = (undefined8 *)(local_c8[4] + lVar22 * 0x18);
  *puVar3 = *puVar4;
  puVar3[1] = uVar9;
  lVar16 = *local_f0;
  *(undefined8 *)(lVar22 * 0x18 + 0x10) =
       *(undefined8 *)(lVar16 + 0x10 + (longlong)(int)lVar19 * 0x18);
  puVar1 = (undefined4 *)(lVar16 + (longlong)(int)lVar19 * 0x18);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (undefined4 *)(lVar22 * 0x18);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  uVar18 = uVar18 + 1;
LAB_14973617e:
  uVar23 = uVar23 + 1;
  if (uVar23 == uVar17) goto LAB_14973618a;
  goto LAB_1497360d3;
  while (lVar19 = lVar19 + 4, lVar16 != lVar19) {
LAB_149736418:
    if (*(int *)(*plVar15 + lVar19) == iVar5) {
      lVar19 = 0;
      goto LAB_14973642c;
    }
  }
  goto LAB_1497363f8;
  while( true ) {
    lVar19 = lVar19 + 1;
    lVar10 = lVar10 + -4;
    if (lVar10 == 0) break;
LAB_14973642c:
    if (*(int *)(*plVar13 + lVar19 * 4) == iVar5) goto LAB_149736442;
  }
  lVar19 = -1;
LAB_149736442:
  lVar10 = 0;
  do {
    if (*(int *)(*plVar15 + lVar10 * 4) == iVar5) goto LAB_14973645a;
    lVar10 = lVar10 + 1;
    lVar16 = lVar16 + -4;
  } while (lVar16 != 0);
  lVar10 = -1;
LAB_14973645a:
  lVar22 = (longlong)(int)uVar20;
  *(int *)(local_c8[6] + lVar22 * 4) = iVar5;
  *(undefined4 *)(local_c8[4] + lVar22 * 4) = *(undefined4 *)(*local_138 + uVar17 * 4);
  lVar16 = *local_120;
  lVar22 = lVar22 * 0x18;
  *(undefined8 *)(local_c8[2] + 0x10 + lVar22) =
       *(undefined8 *)(lVar16 + 0x10 + (longlong)(int)lVar19 * 0x18);
  puVar4 = (undefined8 *)(lVar16 + (longlong)(int)lVar19 * 0x18);
  uVar11 = puVar4[1];
  *(undefined8 *)(local_c8[2] + lVar22) = *puVar4;
  ((undefined8 *)(local_c8[2] + lVar22))[1] = uVar11;
  lVar16 = *plVar12;
  *(undefined8 *)(local_c8[0] + 0x10 + lVar22) =
       *(undefined8 *)(lVar16 + 0x10 + (longlong)(int)lVar10 * 0x18);
  puVar1 = (undefined4 *)(lVar16 + (longlong)(int)lVar10 * 0x18);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (undefined4 *)(local_c8[0] + lVar22);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  uVar20 = uVar20 + 1;
LAB_1497363f8:
  uVar17 = uVar17 + 1;
  if (uVar17 == uVar23) goto LAB_1497364de;
  goto LAB_1497363c7;
  while( true ) {
    lVar19 = lVar19 + 1;
    lVar10 = lVar10 + -4;
    if (lVar10 == 0) break;
LAB_149735dc6:
    if (*(int *)(*plVar15 + lVar19 * 4) == iVar5) goto LAB_149735ddc;
  }
  lVar19 = -1;
LAB_149735ddc:
  lVar22 = (longlong)(int)uVar21;
  *(int *)(local_c8[6] + lVar22 * 4) = iVar5;
  *(undefined4 *)(local_c8[4] + lVar22 * 4) = *(undefined4 *)(*local_138 + uVar17 * 4);
  lVar10 = *plVar12;
  *(undefined8 *)(local_c8[2] + 0x10 + lVar22 * 0x18) =
       *(undefined8 *)(lVar10 + 0x10 + (longlong)(int)lVar19 * 0x18);
  puVar1 = (undefined4 *)(lVar10 + (longlong)(int)lVar19 * 0x18);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (undefined4 *)(local_c8[2] + lVar22 * 0x18);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  uVar21 = uVar21 + 1;
LAB_149735e2d:
  uVar17 = uVar17 + 1;
  if (uVar17 == uVar23) goto LAB_149735e39;
  goto LAB_149735d95;
}



// FUNCTION 149736644 FUN_149736644 body=523 status=ok
// SIG undefined FUN_149736644(void)

void FUN_149736644(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int *piVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar9 = param_1 + 0x1c0;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar4 == lVar9) {
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = param_1 + 0x198;
    uVar5 = FUN_146fb4872(param_1,&local_60);
    plVar6 = (longlong *)FUN_14972668e(uVar5,param_2,param_1 + 0x198);
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = param_1 + 0x1a8;
    uVar5 = FUN_146fb4872(param_1,&local_60);
    plVar7 = (longlong *)FUN_149729092(uVar5,param_2,param_1 + 0x1a8);
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = param_1 + 0x1b8;
    uVar5 = FUN_146fb4872(param_1,&local_60);
    piVar8 = (int *)FUN_146fca67a(uVar5,param_2,param_1 + 0x1b8);
    iVar1 = *piVar8;
    if (iVar1 < 1 || (int)plVar6[1] != (int)plVar7[1]) {
      local_78[0] = 0;
      local_78[1] = 0;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = lVar9;
      lVar9 = FUN_146fb78aa(param_1);
      if (lVar9 == 0) goto LAB_14973667e;
      FUN_14972a684(lVar9,local_78,param_2);
    }
    else {
      local_78[0] = 0;
      local_78[1] = 0;
      FUN_1448158c6(local_78,param_1 + 0x1bc,iVar1);
      iVar3 = (int)plVar7[1];
      if (0 < iVar3) {
        lVar4 = 0;
        do {
          iVar2 = *(int *)(*plVar7 + lVar4 * 4);
          if (iVar2 < iVar1) {
            *(undefined4 *)(local_78[0] + (longlong)iVar2 * 4) =
                 *(undefined4 *)(*plVar6 + lVar4 * 4);
            iVar3 = (int)plVar7[1];
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < iVar3);
      }
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = lVar9;
      lVar9 = FUN_146fb78aa(param_1);
      if (lVar9 != 0) {
        FUN_14972a684(lVar9,local_78,param_2);
      }
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_14973667e:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497368c8 FUN_1497368c8 body=1011 status=ok
// SIG undefined FUN_1497368c8(void)

void FUN_1497368c8(longlong param_1,undefined8 param_2,longlong *param_3)

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
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 uVar14;
  double *pdVar15;
  float *pfVar16;
  int *piVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar18 = param_1 + 0x1e0;
  lVar13 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar13 == lVar18) {
    local_d0 = 0xffffffff;
    local_c8 = 0;
    local_d8 = param_1 + 0x1a8;
    uVar14 = FUN_146fb4872(param_1);
    pdVar15 = (double *)FUN_14979f15e(uVar14,param_2,param_1 + 0x1a8);
    if ((pdVar15[5] - pdVar15[2]) * (pdVar15[4] - pdVar15[1]) * (pdVar15[3] - *pdVar15) <= 0.0) {
      local_e8 = 0;
      uStack_e0 = 0;
      local_d0 = 0xffffffff;
      local_c8 = 0;
      local_d8 = lVar18;
      lVar18 = FUN_146fb78aa(param_1);
      if (lVar18 == 0) goto LAB_149736942;
      FUN_14972a942(lVar18,&local_e8,param_2);
    }
    else {
      local_d0 = 0xffffffff;
      iVar20 = 0;
      local_c8 = 0;
      local_d8 = param_1 + 0x1a0;
      uVar14 = FUN_146fb4872(param_1,&local_d8);
      pfVar16 = (float *)FUN_14972a54c(uVar14,param_2,param_1 + 0x1a0);
      uVar19 = (uint)*pfVar16;
      dVar1 = pdVar15[5];
      dVar2 = pdVar15[2];
      dVar3 = pdVar15[3];
      dVar4 = pdVar15[4];
      dVar5 = pdVar15[1];
      dVar6 = *pdVar15;
      local_d0 = 0xffffffff;
      local_c8 = 0;
      local_d8 = param_1 + 0x19c;
      uVar14 = FUN_146fb4872(param_1,&local_d8);
      piVar17 = (int *)FUN_146fca67a(uVar14,param_2,param_1 + 0x19c);
      iVar21 = *piVar17;
      local_d0 = 0xffffffff;
      local_c8 = 0;
      local_d8 = param_1 + 0x198;
      uVar14 = FUN_146fb4872(param_1,&local_d8);
      local_f0 = param_2;
      piVar17 = (int *)FUN_146fca67a(uVar14,param_2,param_1 + 0x198);
      iVar21 = iVar21 - *piVar17;
      if (-1 < iVar21) {
        uVar19 = uVar19 * 0xbb38435 + 0x3619636b;
        iVar20 = (int)((float)(iVar21 + 1) * ((float)(uVar19 >> 9 | 0x3f800000) + -1.0));
      }
      iVar20 = iVar20 + *piVar17;
      local_e8 = 0;
      uStack_e0 = 0;
      if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar20);
      }
      if (iVar20 != 0) {
        FUN_1447a8aa0(&local_e8,iVar20);
        do {
          uVar10 = uStack_e0;
          iVar21 = uVar19 * 0xbb38435;
          iVar11 = uVar19 * -0x4b9b4d07;
          uVar19 = uVar19 * 0x1c3c718d + 0xf50d3da5;
          dVar7 = pdVar15[2];
          dVar8 = pdVar15[1];
          dVar9 = *pdVar15;
          lVar13 = (longlong)(int)uStack_e0;
          uVar12 = (int)uStack_e0 + 1;
          uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar12);
          if (uStack_e0._4_4_ < uVar12) {
            FUN_1403e3958(&local_e8,uVar10 & 0xffffffff);
          }
          *(double *)(local_e8 + lVar13 * 0x18) =
               (double)((float)(uVar19 >> 9 | 0x3f800000) + -1.0) * (dVar3 - dVar6) + dVar9;
          *(double *)(local_e8 + 8 + lVar13 * 0x18) =
               (double)((float)(iVar11 + 0x9d6f2492U >> 9 | 0x3f800000) + -1.0) * (dVar4 - dVar5) +
               dVar8;
          *(double *)(local_e8 + 0x10 + lVar13 * 0x18) =
               (double)((float)(iVar21 + 0x3619636bU >> 9 | 0x3f800000) + -1.0) * (dVar1 - dVar2) +
               dVar7;
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
      }
      local_d0 = 0xffffffff;
      local_c8 = 0;
      local_d8 = lVar18;
      lVar18 = FUN_146fb78aa(param_1);
      if (lVar18 != 0) {
        FUN_14972a942(lVar18,&local_e8,local_f0);
      }
    }
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
  }
LAB_149736942:
  if ((local_c0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149736cbe FUN_149736cbe body=1009 status=ok
// SIG undefined FUN_149736cbe(void)

void FUN_149736cbe(longlong param_1,undefined8 param_2,longlong *param_3)

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
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 uVar14;
  double *pdVar15;
  uint *puVar16;
  int *piVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar18 = param_1 + 0x1e0;
  lVar13 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar13 == lVar18) {
    local_d0 = 0xffffffff;
    local_c8 = 0;
    local_d8 = param_1 + 0x1a8;
    uVar14 = FUN_146fb4872(param_1);
    pdVar15 = (double *)FUN_14979f15e(uVar14,param_2,param_1 + 0x1a8);
    if ((pdVar15[5] - pdVar15[2]) * (pdVar15[4] - pdVar15[1]) * (pdVar15[3] - *pdVar15) <= 0.0) {
      local_e8 = 0;
      uStack_e0 = 0;
      local_d0 = 0xffffffff;
      local_c8 = 0;
      local_d8 = lVar18;
      lVar18 = FUN_146fb78aa(param_1);
      if (lVar18 == 0) goto LAB_149736d38;
      FUN_14972a942(lVar18,&local_e8,param_2);
    }
    else {
      local_d0 = 0xffffffff;
      iVar20 = 0;
      local_c8 = 0;
      local_d8 = param_1 + 0x1a0;
      uVar14 = FUN_146fb4872(param_1,&local_d8);
      puVar16 = (uint *)FUN_146fca67a(uVar14,param_2,param_1 + 0x1a0);
      uVar19 = *puVar16;
      dVar1 = pdVar15[5];
      dVar2 = pdVar15[2];
      dVar3 = pdVar15[3];
      dVar4 = pdVar15[4];
      dVar5 = pdVar15[1];
      dVar6 = *pdVar15;
      local_d0 = 0xffffffff;
      local_c8 = 0;
      local_d8 = param_1 + 0x19c;
      uVar14 = FUN_146fb4872(param_1,&local_d8);
      piVar17 = (int *)FUN_146fca67a(uVar14,param_2,param_1 + 0x19c);
      iVar21 = *piVar17;
      local_d0 = 0xffffffff;
      local_c8 = 0;
      local_d8 = param_1 + 0x198;
      uVar14 = FUN_146fb4872(param_1,&local_d8);
      local_f0 = param_2;
      piVar17 = (int *)FUN_146fca67a(uVar14,param_2,param_1 + 0x198);
      iVar21 = iVar21 - *piVar17;
      if (-1 < iVar21) {
        uVar19 = uVar19 * 0xbb38435 + 0x3619636b;
        iVar20 = (int)((float)(iVar21 + 1) * ((float)(uVar19 >> 9 | 0x3f800000) + -1.0));
      }
      iVar20 = iVar20 + *piVar17;
      local_e8 = 0;
      uStack_e0 = 0;
      if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar20);
      }
      if (iVar20 != 0) {
        FUN_1447a8aa0(&local_e8,iVar20);
        do {
          uVar10 = uStack_e0;
          iVar21 = uVar19 * 0xbb38435;
          iVar11 = uVar19 * -0x4b9b4d07;
          uVar19 = uVar19 * 0x1c3c718d + 0xf50d3da5;
          dVar7 = pdVar15[2];
          dVar8 = pdVar15[1];
          dVar9 = *pdVar15;
          lVar13 = (longlong)(int)uStack_e0;
          uVar12 = (int)uStack_e0 + 1;
          uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar12);
          if (uStack_e0._4_4_ < uVar12) {
            FUN_1403e3958(&local_e8,uVar10 & 0xffffffff);
          }
          *(double *)(local_e8 + lVar13 * 0x18) =
               (double)((float)(uVar19 >> 9 | 0x3f800000) + -1.0) * (dVar3 - dVar6) + dVar9;
          *(double *)(local_e8 + 8 + lVar13 * 0x18) =
               (double)((float)(iVar11 + 0x9d6f2492U >> 9 | 0x3f800000) + -1.0) * (dVar4 - dVar5) +
               dVar8;
          *(double *)(local_e8 + 0x10 + lVar13 * 0x18) =
               (double)((float)(iVar21 + 0x3619636bU >> 9 | 0x3f800000) + -1.0) * (dVar1 - dVar2) +
               dVar7;
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
      }
      local_d0 = 0xffffffff;
      local_c8 = 0;
      local_d8 = lVar18;
      lVar18 = FUN_146fb78aa(param_1);
      if (lVar18 != 0) {
        FUN_14972a942(lVar18,&local_e8,local_f0);
      }
    }
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
  }
LAB_149736d38:
  if ((local_c0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497370b2 FUN_1497370b2 body=1602 status=ok
// SIG undefined FUN_1497370b2(void)

void FUN_1497370b2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  double _X;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ulonglong uVar15;
  uint uVar16;
  int *piVar17;
  undefined8 uVar18;
  float *pfVar19;
  int *piVar20;
  double *pdVar21;
  int iVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_1b8 [44];
  int local_18c;
  int *local_188;
  int *local_180;
  int *local_178;
  double local_170;
  longlong local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  uint local_110;
  uint local_10c;
  int *local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  piVar17 = (int *)(**(code **)(*param_3 + 0x20))(param_3);
  if (piVar17 == (int *)(param_1 + 0x1e0)) {
    local_100 = 0xffffffff;
    local_f8 = 0.0;
    local_180 = (int *)(param_1 + 0x1e0);
    local_108 = (int *)(param_1 + 0x1c8);
    uVar18 = FUN_146fb4872(param_1,&local_108);
    pfVar19 = (float *)FUN_14972a54c(uVar18,param_2,(int *)(param_1 + 0x1c8));
    fVar1 = *pfVar19;
    piVar17 = (int *)(param_1 + 0x1d0);
    local_100 = 0xffffffff;
    local_f8 = 0.0;
    local_108 = piVar17;
    uVar18 = FUN_146fb4872(param_1,&local_108);
    local_188 = piVar17;
    piVar17 = (int *)FUN_146fca67a(uVar18,param_2,piVar17);
    iVar22 = *piVar17;
    piVar17 = (int *)(param_1 + 0x1cc);
    local_100 = 0xffffffff;
    local_f8 = 0.0;
    local_108 = piVar17;
    uVar18 = FUN_146fb4872(param_1,&local_108);
    piVar20 = (int *)FUN_146fca67a(uVar18,param_2,piVar17);
    iVar5 = *piVar20;
    local_100 = 0xffffffff;
    local_f8 = 0.0;
    local_108 = (int *)(param_1 + 0x1dc);
    uVar18 = FUN_146fb4872(param_1,&local_108);
    pfVar19 = (float *)FUN_14972a54c(uVar18,param_2,(int *)(param_1 + 0x1dc));
    local_110 = (uint)*pfVar19;
    local_100 = 0xffffffff;
    local_f8 = 0.0;
    local_10c = local_110;
    local_108 = (int *)(param_1 + 0x1b0);
    uVar18 = FUN_146fb4872(param_1,&local_108);
    pdVar21 = (double *)FUN_14979981c(uVar18,param_2,(int *)(param_1 + 0x1b0));
    local_128 = *pdVar21;
    dStack_120 = pdVar21[1];
    local_118 = pdVar21[2];
    dVar26 = local_118 * local_118 + local_128 * local_128 + dStack_120 * dStack_120;
    if (9.99999993922529e-09 < dVar26) {
      dVar26 = 1.0 / SQRT(dVar26);
      local_128 = local_128 * dVar26;
      dStack_120 = dStack_120 * dVar26;
      local_118 = local_118 * dVar26;
    }
    FUN_1467fc32a(&local_128,&local_140,&local_158);
    piVar20 = local_188;
    local_168 = 0;
    uStack_160 = 0;
    local_108 = local_188;
    local_100 = 0xffffffff;
    local_f8 = 0.0;
    uVar18 = FUN_146fb4872(param_1);
    piVar20 = (int *)FUN_146fca67a(uVar18,param_2,piVar20);
    if (0 < *piVar20) {
      local_170 = (double)(fVar1 / (float)iVar22);
      local_178 = (int *)(param_1 + 0x1d4);
      dVar26 = local_170 * 0.5;
      iVar22 = 0;
      do {
        piVar20 = local_178;
        local_108 = local_178;
        local_100 = 0xffffffff;
        local_f8 = 0.0;
        local_18c = iVar22;
        uVar18 = FUN_146fb4872(param_1,&local_108);
        pfVar19 = (float *)FUN_14972a54c(uVar18,param_2,piVar20);
        if (0 < *(int *)(param_1 + 0x1cc)) {
          _X = (double)(*pfVar19 * 0.017453292);
          iVar22 = 0;
          do {
            dVar24 = cos(_X);
            dVar8 = local_130 * dVar24;
            dVar10 = local_138 * dVar24;
            dVar24 = dVar24 * local_140;
            dVar25 = sin(_X);
            dVar12 = local_148 * dVar25;
            dVar13 = local_150 * dVar25;
            dVar25 = dVar25 * local_158;
            local_100 = 0xffffffff;
            local_f8 = 0.0;
            local_108 = (int *)(param_1 + 0x198);
            uVar18 = FUN_146fb4872(param_1,&local_108);
            pdVar21 = (double *)FUN_14979981c(uVar18,param_2,(int *)(param_1 + 0x198));
            dVar2 = pdVar21[2];
            dVar3 = pdVar21[1];
            dVar4 = *pdVar21;
            FUN_1477ee866(&local_110,&local_108);
            uVar15 = uStack_160;
            local_10c = local_10c * 0xbb38435 + 0x3619636b;
            dVar6 = (double)((float)(local_10c >> 9 | 0x3f800000) + -1.0);
            dVar9 = local_f8 * dVar6;
            dVar14 = (double)CONCAT44(uStack_fc,local_100);
            dVar7 = dVar6 * (double)local_108;
            dVar11 = (double)*(float *)(param_1 + 0x1d8);
            lVar23 = (longlong)(int)uStack_160;
            uVar16 = (int)uStack_160 + 1;
            uStack_160 = CONCAT44(uStack_160._4_4_,uVar16);
            if (uStack_160._4_4_ < uVar16) {
              FUN_1403e3958(&local_168,uVar15 & 0xffffffff);
            }
            *(double *)(local_168 + lVar23 * 0x18) =
                 (dVar25 + dVar24) * dVar26 + dVar4 + dVar7 * dVar11;
            *(double *)(local_168 + 8 + lVar23 * 0x18) =
                 (dVar13 + dVar10) * dVar26 + dVar3 + dVar14 * dVar6 * dVar11;
            *(double *)(local_168 + 0x10 + lVar23 * 0x18) =
                 (dVar12 + dVar8) * dVar26 + dVar2 + dVar9 * dVar11;
            iVar22 = iVar22 + 1;
            _X = _X + (double)(6.2831855 / (float)iVar5);
          } while (iVar22 < *piVar17);
        }
        piVar20 = local_188;
        iVar22 = local_18c + 1;
        dVar26 = dVar26 + local_170;
        local_108 = local_188;
        local_100 = 0xffffffff;
        local_f8 = 0.0;
        uVar18 = FUN_146fb4872(param_1,&local_108);
        piVar20 = (int *)FUN_146fca67a(uVar18,param_2,piVar20);
      } while (iVar22 < *piVar20);
    }
    local_108 = local_180;
    local_100 = 0xffffffff;
    local_f8 = 0.0;
    lVar23 = FUN_146fb78aa(param_1);
    if (lVar23 != 0) {
      FUN_14972a942(lVar23,&local_168,param_2);
    }
    if (local_168 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497376f6 FUN_1497376f6 body=2883 status=ok
// SIG undefined FUN_1497376f6(void)

void FUN_1497376f6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float _Y;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 uVar17;
  double *pdVar18;
  uint *puVar19;
  float *pfVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  uint uVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined4 uVar32;
  uint uVar33;
  undefined1 auStack_238 [32];
  ulonglong local_218;
  double local_210;
  float local_204;
  undefined8 local_200;
  longlong local_1f8;
  longlong local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined1 local_1b8 [16];
  longlong local_1a8;
  ulonglong uStack_1a0;
  longlong local_198 [2];
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  longlong local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  longlong local_108;
  undefined4 local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar16 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar16 == param_1 + 0x230) {
    local_100 = 0xffffffff;
    local_f8 = 0;
    local_1f8 = param_1 + 0x230;
    local_108 = param_1 + 0x198;
    uVar17 = FUN_146fb4872(param_1,&local_108);
    pdVar18 = (double *)FUN_14979f15e(uVar17,param_2,param_1 + 0x198);
    dVar31 = *pdVar18;
    dVar28 = pdVar18[1];
    dVar29 = pdVar18[2];
    dVar7 = pdVar18[5];
    dVar8 = pdVar18[4];
    dVar9 = pdVar18[3];
    local_100 = 0xffffffff;
    local_f8 = 0;
    local_108 = param_1 + 0x1d0;
    uVar17 = FUN_146fb4872(param_1,&local_108);
    pdVar18 = (double *)FUN_14979981c(uVar17,param_2,param_1 + 0x1d0);
    local_1d0 = (dVar29 + dVar7) * 0.5 + pdVar18[2];
    local_1c8 = (dVar28 + dVar8) * 0.5 + pdVar18[1];
    local_1c0 = (dVar31 + dVar9) * 0.5 + *pdVar18;
    local_100 = 0xffffffff;
    local_f8 = 0;
    local_108 = param_1 + 0x1e8;
    uVar17 = FUN_146fb4872(param_1,&local_108);
    pdVar18 = (double *)FUN_14979981c(uVar17,param_2,param_1 + 0x1e8);
    local_128 = *pdVar18;
    dStack_120 = pdVar18[1];
    local_118 = pdVar18[2];
    local_100 = 0xffffffff;
    local_f8 = 0;
    local_108 = param_1 + 0x200;
    uVar17 = FUN_146fb4872(param_1,&local_108);
    puVar19 = (uint *)FUN_146fca67a(uVar17,param_2,param_1 + 0x200);
    uVar26 = *puVar19;
    local_100 = 0xffffffff;
    local_f8 = 0;
    local_108 = param_1 + 0x204;
    uVar17 = FUN_146fb4872(param_1,&local_108);
    puVar19 = (uint *)FUN_146fca67a(uVar17,param_2,param_1 + 0x204);
    uVar10 = *puVar19;
    uVar23 = (ulonglong)uVar10;
    local_100 = 0xffffffff;
    local_f8 = 0;
    local_108 = param_1 + 0x208;
    uVar17 = FUN_146fb4872(param_1,&local_108);
    pfVar20 = (float *)FUN_14972a54c(uVar17,param_2,param_1 + 0x208);
    fVar2 = *pfVar20;
    local_100 = 0xffffffff;
    local_f8 = 0;
    local_108 = param_1 + 0x20c;
    uVar17 = FUN_146fb4872(param_1,&local_108);
    pfVar20 = (float *)FUN_14972a54c(uVar17,param_2,param_1 + 0x20c);
    fVar27 = *pfVar20;
    local_100 = 0xffffffff;
    local_f8 = 0;
    local_108 = param_1 + 0x210;
    uVar17 = FUN_146fb4872(param_1,&local_108);
    pfVar20 = (float *)FUN_14972a54c(uVar17,param_2,param_1 + 0x210);
    fVar3 = *pfVar20;
    local_100 = 0xffffffff;
    local_f8 = 0;
    local_108 = param_1 + 0x214;
    uVar17 = FUN_146fb4872(param_1,&local_108);
    puVar19 = (uint *)FUN_146fca67a(uVar17,param_2,param_1 + 0x214);
    local_218 = (ulonglong)*puVar19;
    local_100 = 0xffffffff;
    local_f8 = 0;
    local_108 = param_1 + 0x218;
    uVar17 = FUN_146fb4872(param_1,&local_108);
    pfVar20 = (float *)FUN_14972a54c(uVar17,param_2,param_1 + 0x218);
    _Y = *pfVar20;
    local_100 = 0xffffffff;
    local_f8 = 0;
    local_108 = param_1 + 0x21c;
    uVar17 = FUN_146fb4872(param_1,&local_108);
    pfVar20 = (float *)FUN_14972a54c(uVar17,param_2,param_1 + 0x21c);
    fVar4 = *pfVar20;
    local_100 = 0xffffffff;
    local_f8 = 0;
    local_108 = param_1 + 0x220;
    uVar17 = FUN_146fb4872(param_1,&local_108);
    pfVar20 = (float *)FUN_14972a54c(uVar17,param_2,param_1 + 0x220);
    fVar5 = *pfVar20;
    local_100 = 0xffffffff;
    local_f8 = 0;
    local_108 = param_1 + 0x224;
    uVar17 = FUN_146fb4872(param_1,&local_108);
    pfVar20 = (float *)FUN_14972a54c(uVar17,param_2,param_1 + 0x224);
    fVar6 = *pfVar20;
    local_100 = 0xffffffff;
    local_f8 = 0;
    local_108 = param_1 + 0x228;
    uVar17 = FUN_146fb4872(param_1,&local_108);
    pfVar20 = (float *)FUN_14972a54c(uVar17,param_2,param_1 + 0x228);
    local_204 = *pfVar20;
    local_100 = 0xffffffff;
    local_f8 = 0;
    local_108 = param_1 + 0x22c;
    uVar17 = FUN_146fb4872(param_1,&local_108);
    puVar21 = (undefined4 *)FUN_14972a54c(uVar17,param_2,param_1 + 0x22c);
    local_210 = (double)CONCAT44(local_210._4_4_,*puVar21);
    local_138 = 0;
    uStack_130 = 0;
    local_158 = local_128;
    dStack_150 = dStack_120;
    local_148 = local_118;
    dVar31 = local_118 * local_118 + local_128 * local_128 + dStack_120 * dStack_120;
    if (9.99999993922529e-09 < dVar31) {
      local_148 = 1.0 / SQRT(dVar31);
      local_158 = local_128 * local_148;
      dStack_150 = dStack_120 * local_148;
      local_148 = local_118 * local_148;
    }
    FUN_1467fc32a(&local_158,&local_170,&local_188);
    local_198[0] = 0;
    local_198[1] = 0;
    FUN_146bad8b2(local_198,uVar23,1);
    uVar24 = local_218;
    if (0 < (int)uVar10) {
      uVar22 = 0;
      do {
        uVar26 = uVar26 * 0xbb38435 + 0x3619636b;
        dVar31 = (double)((float)(uVar26 >> 9 | 0x3f800000) + -1.0);
        *(double *)(local_198[0] + uVar22 * 8) =
             (dVar31 + dVar31 + -1.0) * (double)fVar27 * 0.017453292519943295;
        uVar22 = uVar22 + 1;
      } while (uVar23 != uVar22);
    }
    local_1a8 = 0;
    uStack_1a0 = 0;
    iVar25 = (int)local_218;
    FUN_146bad8b2(&local_1a8,local_218 & 0xffffffff,1);
    if (0 < iVar25) {
      uVar32 = 0;
      uVar33 = 0;
      uVar22 = 0;
      do {
        uVar1 = uVar22 + 1;
        fVar27 = powf((float)(int)uVar1,_Y);
        dVar31 = (double)fVar27 + (double)CONCAT44(uVar33,uVar32);
        dVar28 = dVar31 * 0.5;
        if (uVar22 == 0) {
          uVar33 = (uint)((ulonglong)dVar28 >> 0x20) ^ 0x80000000;
          uVar32 = SUB84(dVar28,0);
          dVar31 = dVar28;
        }
        *(double *)(local_1a8 + uVar22 * 8) = dVar31;
        uVar22 = uVar1;
      } while (uVar24 != uVar1);
    }
    if ((int)uStack_1a0 != 0) {
      dVar31 = *(double *)(local_1a8 + (longlong)((int)uStack_1a0 + -1) * 8);
      lVar16 = 0;
      do {
        *(double *)(local_1a8 + lVar16) = *(double *)(local_1a8 + lVar16) * ((double)fVar3 / dVar31)
        ;
        lVar16 = lVar16 + 8;
      } while ((longlong)(int)uStack_1a0 * 8 != lVar16);
    }
    local_200 = param_2;
    local_1f0 = param_1;
    if (iVar25 < 1) {
      FUN_1484a8a8c(local_1a8,uStack_1a0 & 0xffffffff);
    }
    else {
      local_1d8 = (double)(6.2831855 / (float)(int)uVar10);
      dVar31 = (double)fVar5;
      uVar22 = 0;
      do {
        dVar28 = *(double *)(local_1a8 + uVar22 * 8);
        dVar29 = dVar28;
        if (dVar31 <= dVar28) {
          dVar29 = dVar31;
        }
        uVar26 = uVar26 * 0xbb38435 + 0x3619636b;
        *(double *)(local_1a8 + uVar22 * 8) =
             ((double)((float)(uVar26 >> 9 | 0x3f800000) + -1.0) * (dVar29 + dVar31) - dVar29) +
             dVar28;
        uVar22 = uVar22 + 1;
      } while (uVar24 != uVar22);
      FUN_1484a8a8c(local_1a8,uStack_1a0 & 0xffffffff,dVar29,&local_108);
      dVar31 = 0.0;
      uVar22 = 0;
      do {
        dVar28 = (double)fVar4 * 0.5;
        if (uVar22 != 0) {
          dVar28 = (double)fVar4;
        }
        dVar29 = *(double *)(local_1a8 + uVar22 * 8);
        if (dVar29 - dVar31 < dVar28) {
          *(double *)(local_1a8 + uVar22 * 8) = dVar31 + dVar28;
          dVar29 = *(double *)(local_1a8 + uVar22 * 8);
        }
        dVar31 = dVar29;
        uVar22 = uVar22 + 1;
      } while (uVar24 != uVar22);
      fVar27 = (float)(-(uint)(1.0 < fVar3) & 0x38d1b717);
      if (fVar27 <= fVar6) {
        fVar27 = fVar6;
      }
      local_1b8 = ZEXT416((uint)fVar27);
      local_1e8 = (double)(fVar2 * 0.017453292);
      local_1e0 = (double)local_210._0_4_;
      uVar24 = 0;
      do {
        if (0 < (int)uVar10) {
          local_210 = *(double *)(local_1a8 + uVar24 * 8);
          uVar22 = 0;
          uVar33 = uVar26;
          dVar31 = local_1e8;
          do {
            dVar29 = (double)(((float)(uVar33 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) + -1.0) *
                              local_204 * 0.017453292) +
                     *(double *)(local_198[0] + uVar22 * 8) + dVar31;
            dVar28 = cos(dVar29);
            dVar7 = local_160 * dVar28;
            dVar8 = local_168 * dVar28;
            dVar28 = dVar28 * local_170;
            dVar29 = sin(dVar29);
            uVar1 = uStack_130;
            dVar11 = local_178 * dVar29;
            dVar13 = local_180 * dVar29;
            dVar29 = dVar29 * local_188;
            uVar26 = uVar33 * 0x1c3c718d + 0xf50d3da5;
            dVar9 = (double)((float)(uVar26 >> 9 | 0x3f800000) + -1.0);
            dVar12 = (dVar9 + dVar9 + -1.0) * local_1e0;
            dVar9 = local_148 * dVar12;
            dVar14 = dStack_150 * dVar12;
            dVar12 = dVar12 * local_158;
            lVar16 = (longlong)(int)uStack_130;
            uVar15 = (int)uStack_130 + 1;
            uStack_130 = CONCAT44(uStack_130._4_4_,uVar15);
            if (uStack_130._4_4_ < uVar15) {
              FUN_1403e3958(&local_138,uVar1 & 0xffffffff);
            }
            dVar30 = (double)(((float)(uVar33 * -0x4b9b4d07 + 0x9d6f2492 >> 9 | 0x3f800000) + -1.0)
                             * (float)local_1b8._0_4_) + local_210;
            *(double *)(local_138 + lVar16 * 0x18) = (dVar28 + dVar29) * dVar30 + local_1c0 + dVar12
            ;
            *(double *)(local_138 + 8 + lVar16 * 0x18) =
                 (dVar8 + dVar13) * dVar30 + local_1c8 + dVar14;
            *(double *)(local_138 + 0x10 + lVar16 * 0x18) =
                 (dVar7 + dVar11) * dVar30 + local_1d0 + dVar9;
            uVar22 = uVar22 + 1;
            dVar31 = dVar31 + local_1d8;
            uVar33 = uVar26;
          } while (uVar23 != uVar22);
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 != local_218);
    }
    local_108 = local_1f8;
    local_100 = 0xffffffff;
    local_f8 = 0;
    lVar16 = FUN_146fb78aa(local_1f0);
    if (lVar16 != 0) {
      FUN_14972a942(lVar16,&local_138,local_200);
    }
    if (local_1a8 != 0) {
      FUN_1400020a8();
    }
    if (local_198[0] != 0) {
      FUN_1400020a8();
    }
    if (local_138 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14973823a FUN_14973823a body=1711 status=ok
// SIG undefined FUN_14973823a(void)

void FUN_14973823a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  int *piVar12;
  uint *puVar13;
  undefined8 uVar14;
  float *pfVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_1a8 [32];
  float local_188;
  int local_184;
  int local_180;
  float local_17c;
  int local_178;
  int local_174;
  float local_170;
  int local_16c;
  undefined8 local_168;
  longlong local_160;
  longlong local_158;
  double local_150;
  double local_148;
  double local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  double *local_120;
  longlong local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined4 local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar18 = param_1 + 0x1f0;
  lVar10 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar10 != lVar18) goto LAB_1497382da;
  local_100 = 0xffffffff;
  local_f8 = 0;
  local_108 = param_1 + 0x1b8;
  uVar11 = FUN_146fb4872(param_1);
  local_120 = (double *)FUN_14979f15e(uVar11,param_2,param_1 + 0x1b8);
  dVar3 = local_120[3];
  dVar4 = *local_120;
  dVar5 = local_120[4];
  dVar19 = local_120[1];
  dVar20 = local_120[5];
  dVar21 = local_120[2];
  if ((dVar3 - dVar4) * (dVar5 - dVar19) * (dVar20 - dVar21) <= 0.0) {
LAB_14973887d:
    local_118 = 0;
    uStack_110 = 0;
    local_100 = 0xffffffff;
    local_f8 = 0;
    local_108 = lVar18;
    lVar18 = FUN_146fb78aa(param_1);
    if (lVar18 == 0) goto LAB_1497382da;
    FUN_14972a942(lVar18,&local_118,param_2);
  }
  else {
    local_100 = 0xffffffff;
    local_f8 = 0;
    local_108 = param_1 + 0x198;
    uVar11 = FUN_146fb4872(param_1,&local_108);
    piVar12 = (int *)FUN_146fca67a(uVar11,param_2,param_1 + 0x198);
    iVar8 = *piVar12;
    local_100 = 0xffffffff;
    local_f8 = 0;
    local_108 = param_1 + 0x19c;
    uVar11 = FUN_146fb4872(param_1,&local_108);
    piVar12 = (int *)FUN_146fca67a(uVar11,param_2,param_1 + 0x19c);
    iVar16 = *piVar12;
    local_100 = 0xffffffff;
    local_f8 = 0;
    local_108 = param_1 + 0x1a0;
    uVar11 = FUN_146fb4872(param_1,&local_108);
    piVar12 = (int *)FUN_146fca67a(uVar11,param_2,param_1 + 0x1a0);
    iVar9 = *piVar12;
    if (iVar9 < 2 || (iVar16 < 2 || iVar8 < 2)) goto LAB_14973887d;
    fVar22 = (float)((dVar3 - dVar4) / (double)iVar8);
    fVar23 = (float)((dVar5 - dVar19) / (double)iVar16);
    fVar24 = (float)((dVar20 - dVar21) / (double)iVar9);
    local_100 = 0xffffffff;
    local_f8 = 0;
    local_16c = iVar9;
    local_158 = lVar18;
    local_108 = param_1 + 0x1a4;
    uVar11 = FUN_146fb4872(param_1);
    local_168 = param_2;
    puVar13 = (uint *)FUN_146fca67a(uVar11,param_2,param_1 + 0x1a4);
    uVar17 = *puVar13;
    local_118 = 0;
    uStack_110 = 0;
    FUN_1447a8aa0(&local_118,iVar16 * iVar8 * iVar9);
    local_128 = param_1 + 0x1b0;
    local_130 = param_1 + 0x1ac;
    local_138 = param_1 + 0x1a8;
    local_140 = (double)(fVar24 * 0.5);
    local_148 = (double)(fVar23 * 0.5);
    local_150 = (double)(fVar22 * 0.5);
    iVar9 = 0;
    local_188 = fVar22;
    local_184 = iVar8;
    local_17c = fVar23;
    local_178 = iVar16;
    local_170 = fVar24;
    local_160 = param_1;
    do {
      fVar22 = (float)iVar9 * local_188;
      iVar8 = 0;
      local_180 = iVar9;
      do {
        fVar23 = (float)iVar8 * local_17c;
        iVar16 = 0;
        local_174 = iVar8;
        do {
          lVar10 = local_128;
          lVar18 = local_160;
          local_108 = local_128;
          local_100 = 0xffffffff;
          local_f8 = 0;
          uVar14 = FUN_146fb4872(local_160,&local_108);
          uVar11 = local_168;
          pfVar15 = (float *)FUN_14972a54c(uVar14,local_168,lVar10);
          lVar10 = local_130;
          fVar24 = *pfVar15;
          local_108 = local_130;
          local_100 = 0xffffffff;
          local_f8 = 0;
          uVar14 = FUN_146fb4872(lVar18,&local_108);
          pfVar15 = (float *)FUN_14972a54c(uVar14,uVar11,lVar10);
          lVar10 = local_138;
          fVar1 = *pfVar15;
          local_108 = local_138;
          local_100 = 0xffffffff;
          local_f8 = 0;
          uVar14 = FUN_146fb4872(lVar18,&local_108);
          pfVar15 = (float *)FUN_14972a54c(uVar14,uVar11,lVar10);
          uVar6 = uStack_110;
          fVar2 = *pfVar15;
          dVar3 = local_120[2] + local_140;
          dVar4 = local_120[1] + local_148;
          dVar5 = *local_120 + local_150;
          lVar18 = (longlong)(int)uStack_110;
          uVar7 = (int)uStack_110 + 1;
          uStack_110 = CONCAT44(uStack_110._4_4_,uVar7);
          if (uStack_110._4_4_ < uVar7) {
            FUN_1403e3958(&local_118,uVar6 & 0xffffffff);
          }
          dVar19 = (double)((float)(uVar17 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) + -1.0);
          dVar20 = (double)((float)(uVar17 * -0x4b9b4d07 + 0x9d6f2492 >> 9 | 0x3f800000) + -1.0);
          uVar17 = uVar17 * 0x1c3c718d + 0xf50d3da5;
          dVar21 = (double)((float)(uVar17 >> 9 | 0x3f800000) + -1.0);
          *(double *)(local_118 + lVar18 * 0x18) =
               dVar5 + (double)fVar22 + (dVar21 + dVar21 + -1.0) * (double)fVar2;
          *(double *)(local_118 + 8 + lVar18 * 0x18) =
               dVar4 + (double)fVar23 + (dVar20 + dVar20 + -1.0) * (double)fVar1;
          *(double *)(local_118 + 0x10 + lVar18 * 0x18) =
               dVar3 + (double)((float)iVar16 * local_170) +
               (dVar19 + dVar19 + -1.0) * (double)fVar24;
          iVar16 = iVar16 + 1;
        } while (local_16c != iVar16);
        iVar8 = local_174 + 1;
      } while (iVar8 != local_178);
      iVar9 = local_180 + 1;
    } while (iVar9 != local_184);
    local_108 = local_158;
    local_100 = 0xffffffff;
    local_f8 = 0;
    lVar18 = FUN_146fb78aa(local_160);
    if (lVar18 != 0) {
      FUN_14972a942(lVar18,&local_118,local_168);
    }
  }
  if (local_118 != 0) {
    FUN_1400020a8();
  }
LAB_1497382da:
  if ((local_f0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497388ea FUN_1497388ea body=1519 status=ok
// SIG undefined FUN_1497388ea(void)

void FUN_1497388ea(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *_Src;
  char cVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  float *pfVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined1 auStack_258 [32];
  int local_238;
  undefined4 local_230;
  undefined1 local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined4 local_210;
  undefined4 local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined1 local_1e8;
  undefined4 local_1e0;
  undefined1 local_1d1;
  int local_1d0;
  undefined4 local_1cc;
  void *local_1c8;
  int local_1c0;
  undefined4 local_1bc;
  longlong local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0 [16];
  undefined8 local_190;
  undefined8 uStack_188;
  longlong local_180;
  undefined4 local_178;
  undefined8 local_170;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  lVar16 = param_1 + 0x198;
  lVar10 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar10 == lVar16) {
    lVar10 = param_1 + 600;
    local_178 = 0xffffffff;
    local_170 = 0;
    local_180 = lVar10;
    uVar11 = FUN_146fb4872(param_1,&local_180);
    uVar11 = FUN_14972af6e(uVar11,param_2,lVar10);
    local_178 = 0xffffffff;
    local_170 = 0;
    local_180 = lVar10;
    lVar10 = FUN_146fb4872(param_1,&local_180);
    if (*(longlong *)(lVar10 + 0x48) != 0) {
      cVar9 = FUN_146fd5e68(uVar11);
      if (cVar9 != '\0') {
        local_178 = 0xffffffff;
        local_170 = 0;
        local_180 = lVar16;
        uVar12 = FUN_146fb4872(param_1);
        uVar12 = FUN_1496fcf74(uVar12,param_2,lVar16);
        FUN_146ecd042(&local_180,uVar12);
        local_1b0 = 0xffffffff;
        local_1a8 = 0;
        local_1b8 = param_1 + 0x2a4;
        uVar12 = FUN_146fb4872(param_1,&local_1b8);
        puVar13 = (undefined4 *)FUN_14972a54c(uVar12,param_2,param_1 + 0x2a4);
        uVar1 = *puVar13;
        local_1d1 = *(undefined1 *)(param_1 + 0x2a0);
        local_1b0 = 0xffffffff;
        local_1a8 = 0;
        local_1b8 = param_1 + 0x29c;
        uVar12 = FUN_146fb4872(param_1,&local_1b8);
        puVar13 = (undefined4 *)FUN_14972a54c(uVar12,param_2,param_1 + 0x29c);
        uVar2 = *puVar13;
        local_1b0 = 0xffffffff;
        local_1a8 = 0;
        local_1b8 = param_1 + 0x298;
        uVar12 = FUN_146fb4872(param_1,&local_1b8);
        puVar13 = (undefined4 *)FUN_146fca67a(uVar12,param_2,param_1 + 0x298);
        local_1cc = *puVar13;
        local_1b0 = 0xffffffff;
        local_1a8 = 0;
        local_1b8 = param_1 + 0x294;
        uVar12 = FUN_146fb4872(param_1,&local_1b8);
        puVar13 = (undefined4 *)FUN_14972a54c(uVar12,param_2,param_1 + 0x294);
        uVar3 = *puVar13;
        local_1b0 = 0xffffffff;
        local_1a8 = 0;
        local_1b8 = param_1 + 0x290;
        uVar12 = FUN_146fb4872(param_1,&local_1b8);
        puVar13 = (undefined4 *)FUN_14972a54c(uVar12,param_2,param_1 + 0x290);
        uVar4 = *puVar13;
        local_1b0 = 0xffffffff;
        local_1a8 = 0;
        local_1b8 = param_1 + 0x28c;
        uVar12 = FUN_146fb4872(param_1,&local_1b8);
        puVar13 = (undefined4 *)FUN_14972a54c(uVar12,param_2,param_1 + 0x28c);
        uVar5 = *puVar13;
        local_1b0 = 0xffffffff;
        local_1a8 = 0;
        local_1b8 = param_1 + 0x288;
        uVar12 = FUN_146fb4872(param_1,&local_1b8);
        puVar13 = (undefined4 *)FUN_14972a54c(uVar12,param_2,param_1 + 0x288);
        uVar6 = *puVar13;
        local_1b0 = 0xffffffff;
        local_1a8 = 0;
        local_1b8 = param_1 + 0x284;
        uVar12 = FUN_146fb4872(param_1,&local_1b8);
        puVar13 = (undefined4 *)FUN_14972a54c(uVar12,param_2,param_1 + 0x284);
        uVar7 = *puVar13;
        local_1b0 = 0xffffffff;
        local_1a8 = 0;
        local_1b8 = param_1 + 0x27c;
        uVar12 = FUN_146fb4872(param_1,&local_1b8);
        puVar13 = (undefined4 *)FUN_14972a54c(uVar12,param_2,param_1 + 0x27c);
        uVar8 = *puVar13;
        local_1b0 = 0xffffffff;
        local_1a8 = 0;
        local_1b8 = param_1 + 0x278;
        uVar12 = FUN_146fb4872(param_1,&local_1b8);
        pfVar14 = (float *)FUN_14972a54c(uVar12,param_2,param_1 + 0x278);
        local_1d0 = (int)*pfVar14;
        local_1b0 = 0xffffffff;
        local_1a8 = 0;
        local_1b8 = param_1 + 0x248;
        uVar12 = FUN_146fb4872(param_1,&local_1b8);
        puVar15 = (undefined8 *)FUN_149728954(uVar12,param_2,param_1 + 0x248);
        local_1c8 = (void *)0x0;
        local_1c0 = *(int *)(puVar15 + 1);
        lVar10 = (longlong)local_1c0;
        _Src = (void *)*puVar15;
        if (lVar10 == 0) {
          local_1bc = 0;
        }
        else {
          FUN_1405b70fe(&local_1c8,local_1c0,0);
          memcpy(local_1c8,_Src,lVar10 * 0x18);
        }
        local_190 = 0;
        uStack_188 = 0;
        FUN_144a69486(local_1a0,uVar11);
        local_1e8 = local_1d1;
        local_1f8 = local_1cc;
        local_238 = local_1d0;
        local_228 = 1;
        local_230 = uVar8;
        local_220 = uVar7;
        local_218 = uVar6;
        local_210 = uVar5;
        local_208 = uVar4;
        local_200 = uVar3;
        local_1f0 = uVar2;
        local_1e0 = uVar1;
        FUN_1497087e0(&local_180,local_1a0,&local_1c8,&DAT_14c846480);
        local_1b0 = 0xffffffff;
        local_1a8 = 0;
        local_1b8 = lVar16;
        lVar16 = FUN_146fb78aa(param_1);
        if (lVar16 != 0) {
          FUN_1496fd2a8(lVar16,&local_180,param_2);
        }
        FUN_14054b30a(&local_180);
        goto LAB_149738970;
      }
    }
    local_178 = 0xffffffff;
    local_170 = 0;
    local_180 = lVar16;
    uVar11 = FUN_146fb4872(param_1,&local_180);
    FUN_1496fcf74(uVar11,param_2,lVar16);
    local_178 = 0xffffffff;
    local_170 = 0;
    local_180 = lVar16;
    lVar16 = FUN_146fb78aa(param_1,&local_180);
    if (lVar16 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_258);
    }
  }
LAB_149738970:
  if ((local_d0 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149738f42 FUN_149738f42 body=2511 status=ok
// SIG undefined FUN_149738f42(void)

void FUN_149738f42(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *_Src;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  longlong *plVar21;
  undefined1 *puVar22;
  undefined1 auStack_498 [32];
  undefined4 local_478;
  undefined4 local_470;
  undefined1 local_468;
  undefined4 local_460;
  undefined4 local_458;
  undefined4 local_450;
  undefined4 local_448;
  undefined4 local_440;
  undefined4 local_438;
  undefined4 local_430;
  undefined1 local_428;
  undefined4 local_420;
  undefined1 local_411;
  undefined4 local_410;
  undefined4 local_40c;
  longlong local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  void *local_3f0;
  int local_3e8;
  undefined4 local_3e4;
  longlong local_3e0;
  undefined4 local_3d8;
  undefined8 local_3d0;
  longlong local_3c8 [2];
  longlong *local_3b8;
  undefined8 local_3b0;
  undefined1 local_3a8 [16];
  undefined8 local_398;
  undefined8 uStack_390;
  longlong local_388;
  undefined4 local_380;
  longlong *local_378;
  undefined8 local_370;
  longlong local_368;
  undefined8 uStack_360;
  longlong local_358;
  undefined8 uStack_350;
  undefined1 local_f0 [16];
  undefined1 *local_e0;
  undefined8 uStack_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_498;
  lVar19 = param_1 + 0x198;
  lVar13 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar13 != lVar19) {
    lVar13 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar13 != param_1 + 600) {
      lVar13 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar13 != param_1 + 0x310) goto LAB_149738ffd;
    }
  }
  lVar13 = param_1 + 600;
  uStack_360._0_4_ = 0xffffffff;
  local_358 = 0;
  local_368 = lVar13;
  uVar14 = FUN_146fb4872(param_1,&local_368);
  uVar14 = FUN_14972af6e(uVar14,param_2,lVar13);
  local_e0 = (undefined1 *)0x0;
  uStack_d8 = 0;
  FUN_144a69486(local_f0,uVar14);
  uStack_360._0_4_ = 0xffffffff;
  local_358 = 0;
  local_408 = lVar13;
  local_368 = lVar13;
  lVar13 = FUN_146fb4872(param_1,&local_368);
  if (*(longlong *)(lVar13 + 0x48) == 0) {
    uStack_360._0_4_ = 0xffffffff;
    local_358 = 0;
    local_368 = lVar19;
    uVar14 = FUN_146fb4872(param_1);
    uVar14 = FUN_1496fcf74(uVar14,param_2,lVar19);
    FUN_146ea9b2e(&local_368,uVar14);
    FUN_146eaac2a(&local_368,local_3c8);
    local_378 = (longlong *)0x0;
    local_370 = 0x8000000000;
    uVar10 = FUN_1401f66f6(uVar14,DAT_14c9974a8);
    FUN_146fd579c(&local_388,uVar10,0);
    FUN_146fd594e(&local_388,local_3c8);
    FUN_144a69486(local_f0,&local_388);
    if (local_378 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_3c8[0] != 0) {
      FUN_1400020a8();
    }
  }
  cVar9 = FUN_146fd5e68(local_f0);
  if (cVar9 == '\0') {
    uStack_360._0_4_ = 0xffffffff;
    local_358 = 0;
    local_368 = lVar19;
    FUN_14971c3b4(param_1,param_2,&local_368,lVar19);
    local_368 = local_408;
    uStack_360 = CONCAT44(uStack_360._4_4_,0xffffffff);
    local_358 = 0;
    lVar19 = FUN_146fb78aa(param_1,&local_368);
    if (lVar19 != 0) {
      FUN_1497a32da(lVar19,local_f0,param_2);
    }
    local_388 = param_1 + 0x310;
    local_358 = 0;
    local_368 = 0;
    uStack_360 = 0;
    uStack_350 = 0x8000000000;
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    lVar19 = FUN_146fb78aa(param_1);
    if (lVar19 != 0) {
      FUN_1497a3594(lVar19,&local_368,param_2);
      if (local_358 != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    uStack_360 = CONCAT44(uStack_360._4_4_,0xffffffff);
    local_358 = 0;
    local_368 = lVar19;
    uVar14 = FUN_146fb4872(param_1);
    uVar14 = FUN_1496fcf74(uVar14,param_2,lVar19);
    FUN_146ecd042(&local_368,uVar14);
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_388 = param_1 + 0x30c;
    uVar14 = FUN_146fb4872(param_1,&local_388);
    puVar15 = (undefined4 *)FUN_14972a54c(uVar14,param_2,param_1 + 0x30c);
    uVar10 = *puVar15;
    local_410 = CONCAT31(local_410._1_3_,*(undefined1 *)(param_1 + 0x308));
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_388 = param_1 + 0x304;
    uVar14 = FUN_146fb4872(param_1,&local_388);
    puVar15 = (undefined4 *)FUN_14972a54c(uVar14,param_2,param_1 + 0x304);
    uVar2 = *puVar15;
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_388 = param_1 + 0x300;
    uVar14 = FUN_146fb4872(param_1,&local_388);
    puVar15 = (undefined4 *)FUN_146fca67a(uVar14,param_2,param_1 + 0x300);
    local_40c = *puVar15;
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_388 = param_1 + 0x2fc;
    uVar14 = FUN_146fb4872(param_1,&local_388);
    puVar15 = (undefined4 *)FUN_14972a54c(uVar14,param_2,param_1 + 0x2fc);
    uVar3 = *puVar15;
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_388 = param_1 + 0x2f8;
    uVar14 = FUN_146fb4872(param_1,&local_388);
    puVar15 = (undefined4 *)FUN_14972a54c(uVar14,param_2,param_1 + 0x2f8);
    uVar4 = *puVar15;
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_388 = param_1 + 0x2f4;
    uVar14 = FUN_146fb4872(param_1,&local_388);
    puVar15 = (undefined4 *)FUN_14972a54c(uVar14,param_2,param_1 + 0x2f4);
    uVar5 = *puVar15;
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_388 = param_1 + 0x2f0;
    uVar14 = FUN_146fb4872(param_1,&local_388);
    puVar15 = (undefined4 *)FUN_14972a54c(uVar14,param_2,param_1 + 0x2f0);
    uVar6 = *puVar15;
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_388 = param_1 + 0x2ec;
    uVar14 = FUN_146fb4872(param_1,&local_388);
    puVar15 = (undefined4 *)FUN_14972a54c(uVar14,param_2,param_1 + 0x2ec);
    uVar7 = *puVar15;
    local_411 = *(undefined1 *)(param_1 + 0x2e8);
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_388 = param_1 + 0x2e4;
    uVar14 = FUN_146fb4872(param_1,&local_388);
    puVar15 = (undefined4 *)FUN_14972a54c(uVar14,param_2,param_1 + 0x2e4);
    uVar8 = *puVar15;
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_388 = param_1 + 0x280;
    uVar14 = FUN_146fb4872(param_1,&local_388);
    uVar14 = FUN_14979f482(uVar14,param_2,param_1 + 0x280);
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_388 = param_1 + 0x248;
    uVar16 = FUN_146fb4872(param_1,&local_388);
    puVar17 = (undefined8 *)FUN_149728954(uVar16,param_2,param_1 + 0x248);
    local_3f0 = (void *)0x0;
    local_3e8 = *(int *)(puVar17 + 1);
    lVar13 = (longlong)local_3e8;
    _Src = (void *)*puVar17;
    if (lVar13 == 0) {
      local_3e4 = 0;
    }
    else {
      FUN_1405b70fe(&local_3f0,local_3e8,0);
      memcpy(local_3f0,_Src,lVar13 * 0x18);
    }
    local_398 = 0;
    uStack_390 = 0;
    FUN_144a69486(local_3a8,local_f0);
    local_428 = (undefined1)local_410;
    local_438 = local_40c;
    local_468 = local_411;
    local_478 = 0;
    local_470 = uVar8;
    local_460 = uVar7;
    local_458 = uVar6;
    local_450 = uVar5;
    local_448 = uVar4;
    local_440 = uVar3;
    local_430 = uVar2;
    local_420 = uVar10;
    iVar11 = FUN_1497087e0(&local_368,local_3a8,&local_3f0,uVar14);
    uVar14 = DAT_14c996af0;
    local_378 = (longlong *)0x0;
    local_370 = 0x8000000000;
    local_3b8 = (longlong *)0x0;
    local_3b0 = 0x8000000000;
    if (iVar11 != -1) {
      FUN_1446ddc76(&local_3f8,"TransformIndex",1);
      cVar9 = FUN_140498cd4(&local_368,local_3f8,uVar14);
      uVar14 = DAT_14c996af0;
      if (cVar9 != '\0') {
        FUN_1446ddc76(&local_400,"TransformIndex",1);
        plVar18 = (longlong *)FUN_140619ac2(&local_368,local_400,uVar14);
        local_410 = FUN_1401f66f6(&local_368,DAT_14c9974a8);
        FUN_146fd579c(&local_388,local_410,0);
        FUN_146fd579c(local_3c8,local_410,0);
        iVar12 = (**(code **)(*plVar18 + 0x60))();
        if (iVar11 < iVar12) {
          lVar13 = (longlong)iVar11;
          do {
            iVar11 = *(int *)(plVar18[2] + lVar13 * 4);
            plVar21 = local_378;
            if (local_378 == (longlong *)0x0) {
              plVar21 = &local_388;
            }
            iVar12 = iVar11 + 0x1f;
            if (-1 < iVar11) {
              iVar12 = iVar11;
            }
            puVar1 = (uint *)((longlong)plVar21 + (longlong)(iVar12 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
            lVar13 = lVar13 + 1;
            iVar11 = (**(code **)(*plVar18 + 0x60))();
          } while (lVar13 < iVar11);
        }
        if (0 < (int)uStack_d8) {
          uVar20 = 0;
          iVar11 = (int)uStack_d8;
          do {
            puVar22 = local_e0;
            if (local_e0 == (undefined1 *)0x0) {
              puVar22 = local_f0;
            }
            if ((*(uint *)(puVar22 + (ulonglong)(uVar20 >> 5) * 4) >> (uVar20 & 0x1f) & 1) != 0) {
              plVar18 = local_3b8;
              if (local_3b8 == (longlong *)0x0) {
                plVar18 = local_3c8;
              }
              puVar1 = (uint *)((longlong)plVar18 + (ulonglong)(uVar20 >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)uVar20 & 0x1f);
              iVar11 = (int)uStack_d8;
            }
            uVar20 = uVar20 + 1;
          } while ((int)uVar20 < iVar11);
        }
      }
    }
    local_3d8 = 0xffffffff;
    local_3d0 = 0;
    local_3e0 = lVar19;
    lVar19 = FUN_146fb78aa(param_1);
    if (lVar19 != 0) {
      FUN_1496fd2a8(lVar19,&local_368,param_2);
    }
    local_3e0 = local_408;
    local_3d8 = 0xffffffff;
    local_3d0 = 0;
    lVar19 = FUN_146fb78aa(param_1);
    if (lVar19 != 0) {
      FUN_1497a32da(lVar19,local_3c8,param_2);
    }
    local_3e0 = param_1 + 0x310;
    local_3d8 = 0xffffffff;
    local_3d0 = 0;
    lVar19 = FUN_146fb78aa(param_1);
    if (lVar19 != 0) {
      FUN_1497a32da(lVar19,&local_388,param_2);
    }
    if (local_3b8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_378 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_14054b30a(&local_368);
  }
  if (local_e0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_149738ffd:
  if ((local_d0 ^ (ulonglong)auStack_498) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149739912 FUN_149739912 body=1448 status=ok
// SIG undefined FUN_149739912(void)

void FUN_149739912(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  char cVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  float *pfVar16;
  longlong lVar17;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  int local_220;
  undefined4 local_218;
  undefined1 local_210;
  undefined4 local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1b5;
  undefined4 local_1b4;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined1 local_190 [16];
  undefined8 local_180;
  undefined8 uStack_178;
  longlong local_170;
  undefined4 local_168;
  undefined8 local_160;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar17 = param_1 + 0x198;
  lVar11 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar11 == lVar17) {
    lVar11 = param_1 + 0x280;
    local_168 = 0xffffffff;
    local_160 = 0;
    local_170 = lVar11;
    uVar12 = FUN_146fb4872(param_1,&local_170);
    uVar12 = FUN_14972af6e(uVar12,param_2,lVar11);
    local_168 = 0xffffffff;
    local_160 = 0;
    local_170 = lVar11;
    lVar11 = FUN_146fb4872(param_1,&local_170);
    if (*(longlong *)(lVar11 + 0x48) != 0) {
      cVar10 = FUN_146fd5e68(uVar12);
      if (cVar10 != '\0') {
        local_168 = 0xffffffff;
        local_160 = 0;
        local_170 = lVar17;
        uVar13 = FUN_146fb4872(param_1);
        uVar13 = FUN_1496fcf74(uVar13,param_2,lVar17);
        FUN_146ecd042(&local_170,uVar13);
        local_1a0 = 0xffffffff;
        local_198 = 0;
        local_1b0 = uVar12;
        local_1a8 = param_1 + 0x2c8;
        uVar12 = FUN_146fb4872(param_1,&local_1a8);
        puVar14 = (undefined4 *)FUN_14972a54c(uVar12,param_2,param_1 + 0x2c8);
        uVar1 = *puVar14;
        local_1a0 = 0xffffffff;
        local_198 = 0;
        local_1a8 = param_1 + 0x2c4;
        uVar12 = FUN_146fb4872(param_1,&local_1a8);
        puVar15 = (undefined1 *)FUN_146fca358(uVar12,param_2,param_1 + 0x2c4);
        local_1b5 = *puVar15;
        local_1a0 = 0xffffffff;
        local_198 = 0;
        local_1a8 = param_1 + 0x2c0;
        uVar12 = FUN_146fb4872(param_1,&local_1a8);
        puVar14 = (undefined4 *)FUN_14972a54c(uVar12,param_2,param_1 + 0x2c0);
        uVar2 = *puVar14;
        local_1a0 = 0xffffffff;
        local_198 = 0;
        local_1a8 = param_1 + 700;
        uVar12 = FUN_146fb4872(param_1,&local_1a8);
        puVar14 = (undefined4 *)FUN_146fca67a(uVar12,param_2,param_1 + 700);
        local_1b4 = *puVar14;
        local_1a0 = 0xffffffff;
        local_198 = 0;
        local_1a8 = param_1 + 0x2b8;
        uVar12 = FUN_146fb4872(param_1,&local_1a8);
        puVar14 = (undefined4 *)FUN_14972a54c(uVar12,param_2,param_1 + 0x2b8);
        uVar3 = *puVar14;
        local_1a0 = 0xffffffff;
        local_198 = 0;
        local_1a8 = param_1 + 0x2b4;
        uVar12 = FUN_146fb4872(param_1,&local_1a8);
        puVar14 = (undefined4 *)FUN_14972a54c(uVar12,param_2,param_1 + 0x2b4);
        uVar4 = *puVar14;
        local_1a0 = 0xffffffff;
        local_198 = 0;
        local_1a8 = param_1 + 0x2b0;
        uVar12 = FUN_146fb4872(param_1,&local_1a8);
        puVar14 = (undefined4 *)FUN_14972a54c(uVar12,param_2,param_1 + 0x2b0);
        uVar5 = *puVar14;
        local_1a0 = 0xffffffff;
        local_198 = 0;
        local_1a8 = param_1 + 0x2ac;
        uVar12 = FUN_146fb4872(param_1,&local_1a8);
        puVar14 = (undefined4 *)FUN_14972a54c(uVar12,param_2,param_1 + 0x2ac);
        uVar6 = *puVar14;
        local_1a0 = 0xffffffff;
        local_198 = 0;
        local_1a8 = param_1 + 0x2a8;
        uVar12 = FUN_146fb4872(param_1,&local_1a8);
        puVar14 = (undefined4 *)FUN_14972a54c(uVar12,param_2,param_1 + 0x2a8);
        uVar7 = *puVar14;
        local_1a0 = 0xffffffff;
        local_198 = 0;
        local_1a8 = param_1 + 0x2a4;
        uVar12 = FUN_146fb4872(param_1,&local_1a8);
        pfVar16 = (float *)FUN_14972a54c(uVar12,param_2,param_1 + 0x2a4);
        fVar8 = *pfVar16;
        uVar9 = *(undefined4 *)(param_1 + 0x2a0);
        local_1a0 = 0xffffffff;
        local_198 = 0;
        local_1a8 = param_1 + 0x248;
        uVar12 = FUN_146fb4872(param_1,&local_1a8);
        uVar12 = FUN_14979f15e(uVar12,param_2,param_1 + 0x248);
        local_180 = 0;
        uStack_178 = 0;
        FUN_144a69486(local_190,local_1b0);
        local_1d0 = local_1b5;
        local_1e0 = local_1b4;
        local_210 = 1;
        local_218 = 0x3f800000;
        local_228 = uVar9;
        local_220 = (int)fVar8;
        local_208 = uVar7;
        local_200 = uVar6;
        local_1f8 = uVar5;
        local_1f0 = uVar4;
        local_1e8 = uVar3;
        local_1d8 = uVar2;
        local_1c8 = uVar1;
        FUN_149709118(&local_170,local_190,uVar12,&DAT_14c846480);
        local_1a0 = 0xffffffff;
        local_198 = 0;
        local_1a8 = lVar17;
        lVar17 = FUN_146fb78aa(param_1,&local_1a8);
        if (lVar17 != 0) {
          FUN_1496fd2a8(lVar17,&local_170,param_2);
        }
        FUN_14054b30a(&local_170);
        goto LAB_14973998f;
      }
    }
    local_168 = 0xffffffff;
    local_160 = 0;
    local_170 = lVar17;
    uVar12 = FUN_146fb4872(param_1,&local_170);
    FUN_1496fcf74(uVar12,param_2,lVar17);
    local_168 = 0xffffffff;
    local_160 = 0;
    local_170 = lVar17;
    lVar17 = FUN_146fb78aa(param_1,&local_170);
    if (lVar17 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_248);
    }
  }
LAB_14973998f:
  if ((local_c0 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149739f1a FUN_149739f1a body=2612 status=ok
// SIG undefined FUN_149739f1a(void)

void FUN_149739f1a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong lVar18;
  uint uVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  undefined1 auStack_498 [32];
  undefined4 local_478;
  undefined4 local_470;
  undefined4 local_468;
  undefined1 local_460;
  undefined4 local_458;
  undefined4 local_450;
  undefined4 local_448;
  undefined4 local_440;
  undefined4 local_438;
  undefined4 local_430;
  undefined4 local_428;
  undefined1 local_420;
  undefined4 local_418;
  undefined1 local_406;
  undefined1 local_405;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  longlong local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  longlong local_3e0;
  undefined4 local_3d8;
  undefined8 local_3d0;
  longlong local_3c8 [2];
  longlong *local_3b8;
  undefined8 local_3b0;
  undefined1 local_3a8 [16];
  undefined8 local_398;
  undefined8 uStack_390;
  longlong local_388;
  undefined4 local_380;
  longlong *local_378;
  undefined8 local_370;
  longlong local_368;
  undefined8 uStack_360;
  longlong local_358;
  undefined8 uStack_350;
  undefined1 local_f0 [16];
  undefined1 *local_e0;
  undefined8 uStack_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_498;
  lVar18 = param_1 + 0x198;
  lVar13 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar13 != lVar18) {
    lVar13 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar13 != param_1 + 0x280) {
      lVar13 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar13 != param_1 + 0x338) goto LAB_149739fd5;
    }
  }
  lVar13 = param_1 + 0x280;
  uStack_360._0_4_ = 0xffffffff;
  local_358 = 0;
  local_368 = lVar13;
  uVar14 = FUN_146fb4872(param_1,&local_368);
  uVar14 = FUN_14972af6e(uVar14,param_2,lVar13);
  local_e0 = (undefined1 *)0x0;
  uStack_d8 = 0;
  FUN_144a69486(local_f0,uVar14);
  uStack_360._0_4_ = 0xffffffff;
  local_358 = 0;
  local_3f8 = lVar13;
  local_368 = lVar13;
  lVar13 = FUN_146fb4872(param_1,&local_368);
  if (*(longlong *)(lVar13 + 0x48) == 0) {
    uStack_360._0_4_ = 0xffffffff;
    local_358 = 0;
    local_368 = lVar18;
    uVar14 = FUN_146fb4872(param_1);
    uVar14 = FUN_1496fcf74(uVar14,param_2,lVar18);
    FUN_146ea9b2e(&local_368,uVar14);
    FUN_146eaac2a(&local_368,local_3c8);
    local_378 = (longlong *)0x0;
    local_370 = 0x8000000000;
    uVar10 = FUN_1401f66f6(uVar14,DAT_14c9974a8);
    FUN_146fd579c(&local_388,uVar10,0);
    FUN_146fd594e(&local_388,local_3c8);
    FUN_144a69486(local_f0,&local_388);
    if (local_378 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_3c8[0] != 0) {
      FUN_1400020a8();
    }
  }
  cVar9 = FUN_146fd5e68(local_f0);
  if (cVar9 == '\0') {
    uStack_360._0_4_ = 0xffffffff;
    local_358 = 0;
    local_368 = lVar18;
    FUN_14971c3b4(param_1,param_2,&local_368,lVar18);
    local_368 = local_3f8;
    uStack_360 = CONCAT44(uStack_360._4_4_,0xffffffff);
    local_358 = 0;
    lVar18 = FUN_146fb78aa(param_1,&local_368);
    if (lVar18 != 0) {
      FUN_1497a32da(lVar18,local_f0,param_2);
    }
    local_388 = param_1 + 0x338;
    local_358 = 0;
    local_368 = 0;
    uStack_360 = 0;
    uStack_350 = 0x8000000000;
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    lVar18 = FUN_146fb78aa(param_1);
    if (lVar18 != 0) {
      FUN_1497a3594(lVar18,&local_368,param_2);
      if (local_358 != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    uStack_360 = CONCAT44(uStack_360._4_4_,0xffffffff);
    local_358 = 0;
    local_368 = lVar18;
    uVar14 = FUN_146fb4872(param_1);
    uVar14 = FUN_1496fcf74(uVar14,param_2,lVar18);
    FUN_146ecd042(&local_368,uVar14);
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_388 = param_1 + 0x330;
    uVar14 = FUN_146fb4872(param_1,&local_388);
    puVar15 = (undefined4 *)FUN_14972a54c(uVar14,param_2,param_1 + 0x330);
    uVar10 = *puVar15;
    local_405 = *(undefined1 *)(param_1 + 0x32c);
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_388 = param_1 + 0x328;
    uVar14 = FUN_146fb4872(param_1,&local_388);
    puVar15 = (undefined4 *)FUN_14972a54c(uVar14,param_2,param_1 + 0x328);
    uVar2 = *puVar15;
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_388 = param_1 + 0x324;
    uVar14 = FUN_146fb4872(param_1,&local_388);
    puVar15 = (undefined4 *)FUN_146fca67a(uVar14,param_2,param_1 + 0x324);
    local_3fc = *puVar15;
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_388 = param_1 + 800;
    uVar14 = FUN_146fb4872(param_1,&local_388);
    puVar15 = (undefined4 *)FUN_14972a54c(uVar14,param_2,param_1 + 800);
    uVar3 = *puVar15;
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_388 = param_1 + 0x31c;
    uVar14 = FUN_146fb4872(param_1,&local_388);
    puVar15 = (undefined4 *)FUN_14972a54c(uVar14,param_2,param_1 + 0x31c);
    uVar4 = *puVar15;
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_388 = param_1 + 0x318;
    uVar14 = FUN_146fb4872(param_1,&local_388);
    puVar15 = (undefined4 *)FUN_14972a54c(uVar14,param_2,param_1 + 0x318);
    uVar5 = *puVar15;
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_388 = param_1 + 0x314;
    uVar14 = FUN_146fb4872(param_1,&local_388);
    puVar15 = (undefined4 *)FUN_14972a54c(uVar14,param_2,param_1 + 0x314);
    uVar6 = *puVar15;
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_388 = param_1 + 0x310;
    uVar14 = FUN_146fb4872(param_1,&local_388);
    puVar15 = (undefined4 *)FUN_14972a54c(uVar14,param_2,param_1 + 0x310);
    uVar7 = *puVar15;
    local_406 = *(undefined1 *)(param_1 + 0x30c);
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_388 = param_1 + 0x308;
    uVar14 = FUN_146fb4872(param_1,&local_388);
    puVar15 = (undefined4 *)FUN_14972a54c(uVar14,param_2,param_1 + 0x308);
    uVar8 = *puVar15;
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_388 = param_1 + 0x304;
    uVar14 = FUN_146fb4872(param_1,&local_388);
    puVar15 = (undefined4 *)FUN_146fca67a(uVar14,param_2,param_1 + 0x304);
    local_400 = *puVar15;
    local_404 = *(undefined4 *)(param_1 + 0x300);
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_388 = param_1 + 0x2a0;
    uVar14 = FUN_146fb4872(param_1,&local_388);
    uVar14 = FUN_14979f482(uVar14,param_2,param_1 + 0x2a0);
    local_380 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_388 = param_1 + 0x248;
    uVar16 = FUN_146fb4872(param_1,&local_388);
    uVar16 = FUN_14979f15e(uVar16,param_2,param_1 + 0x248);
    local_398 = 0;
    uStack_390 = 0;
    FUN_144a69486(local_3a8,local_f0);
    local_420 = local_405;
    local_430 = local_3fc;
    local_460 = local_406;
    local_470 = local_400;
    local_478 = local_404;
    local_468 = uVar8;
    local_458 = uVar7;
    local_450 = uVar6;
    local_448 = uVar5;
    local_440 = uVar4;
    local_438 = uVar3;
    local_428 = uVar2;
    local_418 = uVar10;
    iVar11 = FUN_149709118(&local_368,local_3a8,uVar16,uVar14);
    uVar14 = DAT_14c996af0;
    local_378 = (longlong *)0x0;
    local_370 = 0x8000000000;
    local_3b8 = (longlong *)0x0;
    local_3b0 = 0x8000000000;
    if (iVar11 != -1) {
      FUN_1446ddc76(&local_3e8,"TransformIndex",1);
      cVar9 = FUN_140498cd4(&local_368,local_3e8,uVar14);
      uVar14 = DAT_14c996af0;
      if (cVar9 != '\0') {
        FUN_1446ddc76(&local_3f0,"TransformIndex",1);
        plVar17 = (longlong *)FUN_140619ac2(&local_368,local_3f0,uVar14);
        uVar10 = (**(code **)(*plVar17 + 0x60))(plVar17);
        FUN_146fd579c(&local_388,uVar10,0);
        uVar10 = (**(code **)(*plVar17 + 0x60))(plVar17);
        FUN_146fd579c(local_3c8,uVar10,0);
        iVar12 = (**(code **)(*plVar17 + 0x60))();
        if (iVar11 < iVar12) {
          lVar13 = (longlong)iVar11;
          do {
            iVar11 = *(int *)(plVar17[2] + lVar13 * 4);
            plVar20 = local_378;
            if (local_378 == (longlong *)0x0) {
              plVar20 = &local_388;
            }
            iVar12 = iVar11 + 0x1f;
            if (-1 < iVar11) {
              iVar12 = iVar11;
            }
            puVar1 = (uint *)((longlong)plVar20 + (longlong)(iVar12 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
            lVar13 = lVar13 + 1;
            iVar11 = (**(code **)(*plVar17 + 0x60))();
          } while (lVar13 < iVar11);
        }
        if (0 < (int)uStack_d8) {
          uVar19 = 0;
          iVar11 = (int)uStack_d8;
          do {
            puVar21 = local_e0;
            if (local_e0 == (undefined1 *)0x0) {
              puVar21 = local_f0;
            }
            if ((*(uint *)(puVar21 + (ulonglong)(uVar19 >> 5) * 4) >> (uVar19 & 0x1f) & 1) != 0) {
              plVar17 = local_3b8;
              if (local_3b8 == (longlong *)0x0) {
                plVar17 = local_3c8;
              }
              puVar1 = (uint *)((longlong)plVar17 + (ulonglong)(uVar19 >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)uVar19 & 0x1f);
              iVar11 = (int)uStack_d8;
            }
            uVar19 = uVar19 + 1;
          } while ((int)uVar19 < iVar11);
        }
      }
    }
    local_3d8 = 0xffffffff;
    local_3d0 = 0;
    local_3e0 = lVar18;
    lVar18 = FUN_146fb78aa(param_1);
    if (lVar18 != 0) {
      FUN_1496fd2a8(lVar18,&local_368,param_2);
    }
    local_3e0 = local_3f8;
    local_3d8 = 0xffffffff;
    local_3d0 = 0;
    lVar18 = FUN_146fb78aa(param_1);
    if (lVar18 != 0) {
      FUN_1497a32da(lVar18,local_3c8,param_2);
    }
    local_3e0 = param_1 + 0x338;
    local_3d8 = 0xffffffff;
    local_3d0 = 0;
    lVar18 = FUN_146fb78aa(param_1);
    if (lVar18 != 0) {
      FUN_1497a32da(lVar18,&local_388,param_2);
    }
    if (local_3b8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_378 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_14054b30a(&local_368);
  }
  if (local_e0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_149739fd5:
  if ((local_d0 ^ (ulonglong)auStack_498) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973a950 FUN_14973a950 body=371 status=ok
// SIG undefined FUN_14973a950(void)

void FUN_14973a950(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined4 local_120;
  undefined8 local_118;
  longlong local_110;
  undefined4 local_108;
  undefined8 local_100;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar5 = param_1 + 0x198;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == lVar5) {
    local_108 = 0xffffffff;
    local_100 = 0;
    local_110 = lVar5;
    uVar3 = FUN_146fb4872(param_1);
    uVar3 = FUN_1496fcf74(uVar3,param_2,lVar5);
    FUN_146ecd042(&local_110,uVar3);
    local_120 = 0xffffffff;
    local_118 = 0;
    local_128 = param_1 + 0x248;
    uVar3 = FUN_146fb4872(param_1,&local_128);
    puVar4 = (undefined4 *)FUN_14972a54c(uVar3,param_2,param_1 + 0x248);
    uVar1 = *puVar4;
    local_120 = 0xffffffff;
    local_118 = 0;
    local_128 = param_1 + 0x250;
    uVar3 = FUN_146fb4872(param_1,&local_128);
    uVar3 = FUN_14979981c(uVar3,param_2,param_1 + 0x250);
    FUN_1497081b8(&local_110,uVar3,uVar1);
    local_120 = 0xffffffff;
    local_118 = 0;
    local_128 = lVar5;
    lVar5 = FUN_146fb78aa(param_1,&local_128);
    if (lVar5 != 0) {
      FUN_1496fd2a8(lVar5,&local_110,param_2);
    }
    FUN_14054b30a(&local_110);
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973aac4 FUN_14973aac4 body=2937 status=ok
// SIG undefined FUN_14973aac4(void)

void FUN_14973aac4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint *puVar1;
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
  char cVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  longlong *plVar19;
  longlong lVar20;
  uint uVar21;
  longlong *plVar22;
  undefined1 *puVar23;
  undefined1 auStack_4d8 [32];
  undefined4 local_4b8;
  undefined4 local_4b0;
  undefined4 local_4a8;
  undefined4 local_4a0;
  undefined4 local_498;
  undefined4 local_490;
  undefined1 local_488;
  undefined4 local_480;
  undefined4 local_478;
  undefined4 local_470;
  undefined4 local_468;
  undefined4 local_460;
  undefined4 local_458;
  undefined4 local_450;
  undefined1 local_448;
  undefined4 local_440;
  undefined1 local_42a;
  undefined1 local_429;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  longlong local_418;
  undefined8 local_410;
  undefined8 local_408;
  longlong local_400;
  undefined4 local_3f8;
  undefined8 local_3f0;
  longlong local_3e8 [2];
  longlong *local_3d8;
  undefined8 local_3d0;
  undefined1 local_3c8 [16];
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  longlong local_3a8;
  undefined4 local_3a0;
  longlong *local_398;
  undefined8 local_390;
  longlong local_388;
  undefined8 uStack_380;
  longlong local_378;
  undefined8 uStack_370;
  undefined1 local_110 [16];
  undefined1 *local_100;
  undefined8 uStack_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  lVar20 = param_1 + 0x198;
  lVar16 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar16 != lVar20) {
    lVar16 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar16 != param_1 + 0x280) {
      lVar16 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar16 != param_1 + 0x2e8) goto LAB_14973ab95;
    }
  }
  lVar16 = param_1 + 0x280;
  uStack_380._0_4_ = 0xffffffff;
  local_378 = 0;
  local_388 = lVar16;
  uVar17 = FUN_146fb4872(param_1,&local_388);
  uVar17 = FUN_14972af6e(uVar17,param_2,lVar16);
  local_100 = (undefined1 *)0x0;
  uStack_f8 = 0;
  FUN_144a69486(local_110,uVar17);
  uStack_380._0_4_ = 0xffffffff;
  local_378 = 0;
  local_418 = lVar16;
  local_388 = lVar16;
  lVar16 = FUN_146fb4872(param_1,&local_388);
  if (*(longlong *)(lVar16 + 0x48) == 0) {
    uStack_380._0_4_ = 0xffffffff;
    local_378 = 0;
    local_388 = lVar20;
    uVar17 = FUN_146fb4872(param_1);
    uVar17 = FUN_1496fcf74(uVar17,param_2,lVar20);
    FUN_146ea9b2e(&local_388,uVar17);
    FUN_146eaac2a(&local_388,local_3e8);
    local_398 = (longlong *)0x0;
    local_390 = 0x8000000000;
    uVar13 = FUN_1401f66f6(uVar17,DAT_14c9974a8);
    FUN_146fd579c(&local_3a8,uVar13,0);
    FUN_146fd594e(&local_3a8,local_3e8);
    FUN_144a69486(local_110,&local_3a8);
    if (local_398 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_3e8[0] != 0) {
      FUN_1400020a8();
    }
  }
  cVar12 = FUN_146fd5e68(local_110);
  if (cVar12 == '\0') {
    uStack_380._0_4_ = 0xffffffff;
    local_378 = 0;
    local_388 = lVar20;
    FUN_14971c3b4(param_1,param_2,&local_388,lVar20);
    local_388 = local_418;
    uStack_380 = CONCAT44(uStack_380._4_4_,0xffffffff);
    local_378 = 0;
    lVar20 = FUN_146fb78aa(param_1,&local_388);
    if (lVar20 != 0) {
      FUN_1497a32da(lVar20,local_110,param_2);
    }
    local_3a8 = param_1 + 0x2e8;
    local_378 = 0;
    local_388 = 0;
    uStack_380 = 0;
    uStack_370 = 0x8000000000;
    local_3a0 = 0xffffffff;
    local_398 = (longlong *)0x0;
    lVar20 = FUN_146fb78aa(param_1);
    if (lVar20 != 0) {
      FUN_1497a3594(lVar20,&local_388,param_2);
      if (local_378 != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    uStack_380 = CONCAT44(uStack_380._4_4_,0xffffffff);
    local_378 = 0;
    local_388 = lVar20;
    uVar17 = FUN_146fb4872(param_1);
    uVar17 = FUN_1496fcf74(uVar17,param_2,lVar20);
    FUN_146ecd042(&local_388,uVar17);
    local_3a0 = 0xffffffff;
    local_398 = (longlong *)0x0;
    local_3a8 = param_1 + 0x2e0;
    uVar17 = FUN_146fb4872(param_1,&local_3a8);
    puVar18 = (undefined4 *)FUN_14972a54c(uVar17,param_2,param_1 + 0x2e0);
    uVar13 = *puVar18;
    local_429 = *(undefined1 *)(param_1 + 0x2dc);
    local_3a0 = 0xffffffff;
    local_398 = (longlong *)0x0;
    local_3a8 = param_1 + 0x2d8;
    uVar17 = FUN_146fb4872(param_1,&local_3a8);
    puVar18 = (undefined4 *)FUN_14972a54c(uVar17,param_2,param_1 + 0x2d8);
    uVar2 = *puVar18;
    local_3a0 = 0xffffffff;
    local_398 = (longlong *)0x0;
    local_3a8 = param_1 + 0x2d4;
    uVar17 = FUN_146fb4872(param_1,&local_3a8);
    puVar18 = (undefined4 *)FUN_146fca67a(uVar17,param_2,param_1 + 0x2d4);
    local_41c = *puVar18;
    local_3a0 = 0xffffffff;
    local_398 = (longlong *)0x0;
    local_3a8 = param_1 + 0x2d0;
    uVar17 = FUN_146fb4872(param_1,&local_3a8);
    puVar18 = (undefined4 *)FUN_14972a54c(uVar17,param_2,param_1 + 0x2d0);
    uVar3 = *puVar18;
    local_3a0 = 0xffffffff;
    local_398 = (longlong *)0x0;
    local_3a8 = param_1 + 0x2cc;
    uVar17 = FUN_146fb4872(param_1,&local_3a8);
    puVar18 = (undefined4 *)FUN_14972a54c(uVar17,param_2,param_1 + 0x2cc);
    uVar4 = *puVar18;
    local_3a0 = 0xffffffff;
    local_398 = (longlong *)0x0;
    local_3a8 = param_1 + 0x2c8;
    uVar17 = FUN_146fb4872(param_1,&local_3a8);
    puVar18 = (undefined4 *)FUN_14972a54c(uVar17,param_2,param_1 + 0x2c8);
    uVar5 = *puVar18;
    local_3a0 = 0xffffffff;
    local_398 = (longlong *)0x0;
    local_3a8 = param_1 + 0x2c4;
    uVar17 = FUN_146fb4872(param_1,&local_3a8);
    puVar18 = (undefined4 *)FUN_14972a54c(uVar17,param_2,param_1 + 0x2c4);
    uVar6 = *puVar18;
    local_3a0 = 0xffffffff;
    local_398 = (longlong *)0x0;
    local_3a8 = param_1 + 0x2c0;
    uVar17 = FUN_146fb4872(param_1,&local_3a8);
    puVar18 = (undefined4 *)FUN_14972a54c(uVar17,param_2,param_1 + 0x2c0);
    uVar7 = *puVar18;
    local_42a = *(undefined1 *)(param_1 + 700);
    local_3a0 = 0xffffffff;
    local_398 = (longlong *)0x0;
    local_3a8 = param_1 + 0x2b8;
    uVar17 = FUN_146fb4872(param_1,&local_3a8);
    puVar18 = (undefined4 *)FUN_14972a54c(uVar17,param_2,param_1 + 0x2b8);
    uVar8 = *puVar18;
    local_3a0 = 0xffffffff;
    local_398 = (longlong *)0x0;
    local_3a8 = param_1 + 0x2b4;
    uVar17 = FUN_146fb4872(param_1,&local_3a8);
    puVar18 = (undefined4 *)FUN_146fca67a(uVar17,param_2,param_1 + 0x2b4);
    local_420 = *puVar18;
    local_3a0 = 0xffffffff;
    local_398 = (longlong *)0x0;
    local_3a8 = param_1 + 0x2b0;
    uVar17 = FUN_146fb4872(param_1,&local_3a8);
    puVar18 = (undefined4 *)FUN_14972a54c(uVar17,param_2,param_1 + 0x2b0);
    uVar9 = *puVar18;
    local_3a0 = 0xffffffff;
    local_398 = (longlong *)0x0;
    local_3a8 = param_1 + 0x2ac;
    uVar17 = FUN_146fb4872(param_1,&local_3a8);
    puVar18 = (undefined4 *)FUN_14972a54c(uVar17,param_2,param_1 + 0x2ac);
    uVar10 = *puVar18;
    local_3a0 = 0xffffffff;
    local_398 = (longlong *)0x0;
    local_3a8 = param_1 + 0x2a8;
    uVar17 = FUN_146fb4872(param_1,&local_3a8);
    puVar18 = (undefined4 *)FUN_146fca67a(uVar17,param_2,param_1 + 0x2a8);
    local_424 = *puVar18;
    local_3a0 = 0xffffffff;
    local_398 = (longlong *)0x0;
    local_3a8 = param_1 + 0x2a4;
    uVar17 = FUN_146fb4872(param_1,&local_3a8);
    puVar18 = (undefined4 *)FUN_146fca67a(uVar17,param_2,param_1 + 0x2a4);
    local_428 = *puVar18;
    local_3a0 = 0xffffffff;
    local_398 = (longlong *)0x0;
    local_3a8 = param_1 + 0x2a0;
    uVar17 = FUN_146fb4872(param_1,&local_3a8);
    puVar18 = (undefined4 *)FUN_146fca67a(uVar17,param_2,param_1 + 0x2a0);
    uVar11 = *puVar18;
    local_3a0 = 0xffffffff;
    local_398 = (longlong *)0x0;
    local_3a8 = param_1 + 0x248;
    uVar17 = FUN_146fb4872(param_1,&local_3a8);
    uVar17 = FUN_14979f15e(uVar17,param_2,param_1 + 0x248);
    local_3b8 = 0;
    uStack_3b0 = 0;
    FUN_144a69486(local_3c8,local_110);
    local_448 = local_429;
    local_458 = local_41c;
    local_488 = local_42a;
    local_498 = local_420;
    local_4b0 = local_424;
    local_4b8 = local_428;
    local_4a8 = uVar10;
    local_4a0 = uVar9;
    local_490 = uVar8;
    local_480 = uVar7;
    local_478 = uVar6;
    local_470 = uVar5;
    local_468 = uVar4;
    local_460 = uVar3;
    local_450 = uVar2;
    local_440 = uVar13;
    iVar14 = FUN_14970a6d4(&local_388,local_3c8,uVar17,uVar11);
    uVar17 = DAT_14c996af0;
    local_398 = (longlong *)0x0;
    local_390 = 0x8000000000;
    local_3d8 = (longlong *)0x0;
    local_3d0 = 0x8000000000;
    if (iVar14 != -1) {
      FUN_1446ddc76(&local_408,"TransformIndex",1);
      cVar12 = FUN_140498cd4(&local_388,local_408,uVar17);
      uVar17 = DAT_14c996af0;
      if (cVar12 != '\0') {
        FUN_1446ddc76(&local_410,"TransformIndex",1);
        plVar19 = (longlong *)FUN_140619ac2(&local_388,local_410,uVar17);
        uVar13 = (**(code **)(*plVar19 + 0x60))(plVar19);
        FUN_146fd579c(&local_3a8,uVar13,0);
        uVar13 = (**(code **)(*plVar19 + 0x60))(plVar19);
        FUN_146fd579c(local_3e8,uVar13,0);
        iVar15 = (**(code **)(*plVar19 + 0x60))();
        if (iVar14 < iVar15) {
          lVar16 = (longlong)iVar14;
          do {
            iVar14 = *(int *)(plVar19[2] + lVar16 * 4);
            plVar22 = local_398;
            if (local_398 == (longlong *)0x0) {
              plVar22 = &local_3a8;
            }
            iVar15 = iVar14 + 0x1f;
            if (-1 < iVar14) {
              iVar15 = iVar14;
            }
            puVar1 = (uint *)((longlong)plVar22 + (longlong)(iVar15 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)iVar14 & 0x1f);
            lVar16 = lVar16 + 1;
            iVar14 = (**(code **)(*plVar19 + 0x60))();
          } while (lVar16 < iVar14);
        }
        if (0 < (int)uStack_f8) {
          uVar21 = 0;
          iVar14 = (int)uStack_f8;
          do {
            puVar23 = local_100;
            if (local_100 == (undefined1 *)0x0) {
              puVar23 = local_110;
            }
            if ((*(uint *)(puVar23 + (ulonglong)(uVar21 >> 5) * 4) >> (uVar21 & 0x1f) & 1) != 0) {
              plVar19 = local_3d8;
              if (local_3d8 == (longlong *)0x0) {
                plVar19 = local_3e8;
              }
              puVar1 = (uint *)((longlong)plVar19 + (ulonglong)(uVar21 >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)uVar21 & 0x1f);
              iVar14 = (int)uStack_f8;
            }
            uVar21 = uVar21 + 1;
          } while ((int)uVar21 < iVar14);
        }
      }
    }
    local_3f8 = 0xffffffff;
    local_3f0 = 0;
    local_400 = lVar20;
    lVar20 = FUN_146fb78aa(param_1);
    if (lVar20 != 0) {
      FUN_1496fd2a8(lVar20,&local_388,param_2);
    }
    local_400 = local_418;
    local_3f8 = 0xffffffff;
    local_3f0 = 0;
    lVar20 = FUN_146fb78aa(param_1);
    if (lVar20 != 0) {
      FUN_1497a32da(lVar20,local_3e8,param_2);
    }
    local_400 = param_1 + 0x2e8;
    local_3f8 = 0xffffffff;
    local_3f0 = 0;
    lVar20 = FUN_146fb78aa(param_1);
    if (lVar20 != 0) {
      FUN_1497a32da(lVar20,&local_3a8,param_2);
    }
    if (local_3d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_398 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_14054b30a(&local_388);
  }
  if (local_100 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_14973ab95:
  if ((local_f0 ^ (ulonglong)auStack_4d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973b63e FUN_14973b63e body=3035 status=ok
// SIG undefined FUN_14973b63e(void)

void FUN_14973b63e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  char cVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  longlong *plVar19;
  undefined1 *puVar20;
  longlong lVar21;
  uint uVar22;
  longlong *plVar23;
  undefined1 auStack_508 [32];
  undefined1 local_4e8;
  undefined4 local_4e0;
  undefined4 local_4d8;
  undefined4 local_4d0;
  undefined4 local_4c8;
  undefined4 local_4c0;
  undefined1 local_4b8;
  undefined4 local_4b0;
  undefined4 local_4a8;
  undefined4 local_4a0;
  undefined4 local_498;
  undefined4 local_490;
  undefined4 local_488;
  undefined4 local_480;
  undefined1 local_478;
  undefined4 local_470;
  undefined1 local_466;
  undefined1 local_465;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  longlong local_458;
  undefined8 local_450;
  undefined8 local_448;
  longlong local_440;
  undefined4 local_438;
  undefined8 local_430;
  undefined1 local_428 [16];
  undefined1 *local_418;
  undefined8 local_410;
  longlong local_408;
  undefined4 local_400;
  longlong *local_3f8;
  undefined8 local_3f0;
  undefined1 local_3e8 [16];
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  longlong local_3b8;
  undefined8 uStack_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  longlong local_388;
  undefined8 uStack_380;
  longlong local_378;
  undefined8 uStack_370;
  undefined1 local_110 [16];
  undefined1 *local_100;
  undefined8 uStack_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_508;
  lVar21 = param_1 + 0x198;
  lVar16 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar16 != lVar21) {
    lVar16 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar16 != param_1 + 0x280) {
      lVar16 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar16 != param_1 + 0x340) goto LAB_14973b70f;
    }
  }
  lVar16 = param_1 + 0x280;
  uStack_380._0_4_ = 0xffffffff;
  local_378 = 0;
  local_388 = lVar16;
  uVar17 = FUN_146fb4872(param_1,&local_388);
  uVar17 = FUN_14972af6e(uVar17,param_2,lVar16);
  local_100 = (undefined1 *)0x0;
  uStack_f8 = 0;
  FUN_144a69486(local_110,uVar17);
  uStack_380._0_4_ = 0xffffffff;
  local_378 = 0;
  local_458 = lVar16;
  local_388 = lVar16;
  lVar16 = FUN_146fb4872(param_1,&local_388);
  if (*(longlong *)(lVar16 + 0x48) == 0) {
    uStack_380._0_4_ = 0xffffffff;
    local_378 = 0;
    local_388 = lVar21;
    uVar17 = FUN_146fb4872(param_1);
    uVar17 = FUN_1496fcf74(uVar17,param_2,lVar21);
    FUN_146ea9b2e(&local_388,uVar17);
    FUN_146eaac2a(&local_388,&local_408);
    local_3b8 = 0;
    uStack_3b0 = 0x8000000000;
    uVar13 = FUN_1401f66f6(uVar17,DAT_14c9974a8);
    FUN_146fd579c(&local_3c8,uVar13,0);
    FUN_146fd594e(&local_3c8,&local_408);
    FUN_144a69486(local_110,&local_3c8);
    if (local_3b8 != 0) {
      FUN_1400020a8();
    }
    if (local_408 != 0) {
      FUN_1400020a8();
    }
  }
  lVar16 = param_1 + 0x248;
  uStack_380._0_4_ = 0xffffffff;
  local_378 = 0;
  local_388 = lVar16;
  uVar17 = FUN_146fb4872(param_1,&local_388);
  puVar18 = (undefined4 *)FUN_14979f15e(uVar17,param_2,lVar16);
  local_3c8 = *puVar18;
  uStack_3c4 = puVar18[1];
  uStack_3c0 = puVar18[2];
  uStack_3bc = puVar18[3];
  local_3b8 = *(longlong *)(puVar18 + 4);
  uStack_3b0 = *(undefined8 *)(puVar18 + 6);
  local_3a8 = puVar18[8];
  uStack_3a4 = puVar18[9];
  uStack_3a0 = puVar18[10];
  uStack_39c = puVar18[0xb];
  local_398 = *(undefined8 *)(puVar18 + 0xc);
  uStack_380._0_4_ = 0xffffffff;
  local_378 = 0;
  local_388 = lVar16;
  lVar16 = FUN_146fb4872(param_1,&local_388);
  if (*(longlong *)(lVar16 + 0x48) == 0) {
    uStack_380._0_4_ = 0xffffffff;
    local_378 = 0;
    local_388 = lVar21;
    uVar17 = FUN_146fb4872(param_1);
    uVar17 = FUN_1496fcf74(uVar17,param_2,lVar21);
    FUN_146e99c1c(&local_388,uVar17);
    FUN_146e9a09c(&local_388,&local_3c8);
  }
  cVar12 = FUN_146fd5e68(local_110);
  if (cVar12 == '\0') {
    uStack_380._0_4_ = 0xffffffff;
    local_378 = 0;
    local_388 = lVar21;
    FUN_14971c3b4(param_1,param_2,&local_388,lVar21);
    local_388 = local_458;
    uStack_380 = CONCAT44(uStack_380._4_4_,0xffffffff);
    local_378 = 0;
    lVar21 = FUN_146fb78aa(param_1,&local_388);
    if (lVar21 != 0) {
      FUN_1497a32da(lVar21,local_110,param_2);
    }
    local_408 = param_1 + 0x340;
    local_378 = 0;
    local_388 = 0;
    uStack_380 = 0;
    uStack_370 = 0x8000000000;
    local_400 = 0xffffffff;
    local_3f8 = (longlong *)0x0;
    lVar21 = FUN_146fb78aa(param_1);
    if (lVar21 != 0) {
      FUN_1497a3594(lVar21,&local_388,param_2);
      if (local_378 != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    uStack_380 = CONCAT44(uStack_380._4_4_,0xffffffff);
    local_378 = 0;
    local_388 = lVar21;
    uVar17 = FUN_146fb4872(param_1);
    uVar17 = FUN_1496fcf74(uVar17,param_2,lVar21);
    FUN_146ecd042(&local_388,uVar17);
    local_400 = 0xffffffff;
    local_3f8 = (longlong *)0x0;
    local_408 = param_1 + 0x33c;
    uVar17 = FUN_146fb4872(param_1,&local_408);
    puVar18 = (undefined4 *)FUN_14972a54c(uVar17,param_2,param_1 + 0x33c);
    local_45c = *puVar18;
    local_465 = *(undefined1 *)(param_1 + 0x338);
    local_400 = 0xffffffff;
    local_3f8 = (longlong *)0x0;
    local_408 = param_1 + 0x334;
    uVar17 = FUN_146fb4872(param_1,&local_408);
    puVar18 = (undefined4 *)FUN_14972a54c(uVar17,param_2,param_1 + 0x334);
    uVar13 = *puVar18;
    local_400 = 0xffffffff;
    local_3f8 = (longlong *)0x0;
    local_408 = param_1 + 0x330;
    uVar17 = FUN_146fb4872(param_1,&local_408);
    puVar18 = (undefined4 *)FUN_146fca67a(uVar17,param_2,param_1 + 0x330);
    local_460 = *puVar18;
    local_400 = 0xffffffff;
    local_3f8 = (longlong *)0x0;
    local_408 = param_1 + 0x32c;
    uVar17 = FUN_146fb4872(param_1,&local_408);
    puVar18 = (undefined4 *)FUN_14972a54c(uVar17,param_2,param_1 + 0x32c);
    uVar2 = *puVar18;
    local_400 = 0xffffffff;
    local_3f8 = (longlong *)0x0;
    local_408 = param_1 + 0x328;
    uVar17 = FUN_146fb4872(param_1,&local_408);
    puVar18 = (undefined4 *)FUN_14972a54c(uVar17,param_2,param_1 + 0x328);
    uVar3 = *puVar18;
    local_400 = 0xffffffff;
    local_3f8 = (longlong *)0x0;
    local_408 = param_1 + 0x324;
    uVar17 = FUN_146fb4872(param_1,&local_408);
    puVar18 = (undefined4 *)FUN_14972a54c(uVar17,param_2,param_1 + 0x324);
    uVar4 = *puVar18;
    local_400 = 0xffffffff;
    local_3f8 = (longlong *)0x0;
    local_408 = param_1 + 800;
    uVar17 = FUN_146fb4872(param_1,&local_408);
    puVar18 = (undefined4 *)FUN_14972a54c(uVar17,param_2,param_1 + 800);
    uVar5 = *puVar18;
    local_400 = 0xffffffff;
    local_3f8 = (longlong *)0x0;
    local_408 = param_1 + 0x31c;
    uVar17 = FUN_146fb4872(param_1,&local_408);
    puVar18 = (undefined4 *)FUN_14972a54c(uVar17,param_2,param_1 + 0x31c);
    uVar6 = *puVar18;
    local_466 = *(undefined1 *)(param_1 + 0x318);
    local_400 = 0xffffffff;
    local_3f8 = (longlong *)0x0;
    local_408 = param_1 + 0x314;
    uVar17 = FUN_146fb4872(param_1,&local_408);
    puVar18 = (undefined4 *)FUN_14972a54c(uVar17,param_2,param_1 + 0x314);
    uVar7 = *puVar18;
    local_400 = 0xffffffff;
    local_3f8 = (longlong *)0x0;
    local_408 = param_1 + 0x310;
    uVar17 = FUN_146fb4872(param_1,&local_408);
    puVar18 = (undefined4 *)FUN_146fca67a(uVar17,param_2,param_1 + 0x310);
    local_464 = *puVar18;
    local_400 = 0xffffffff;
    local_3f8 = (longlong *)0x0;
    local_408 = param_1 + 0x30c;
    uVar17 = FUN_146fb4872(param_1,&local_408);
    puVar18 = (undefined4 *)FUN_14972a54c(uVar17,param_2,param_1 + 0x30c);
    uVar8 = *puVar18;
    local_400 = 0xffffffff;
    local_3f8 = (longlong *)0x0;
    local_408 = param_1 + 0x308;
    uVar17 = FUN_146fb4872(param_1,&local_408);
    puVar18 = (undefined4 *)FUN_14972a54c(uVar17,param_2,param_1 + 0x308);
    uVar9 = *puVar18;
    local_400 = 0xffffffff;
    local_3f8 = (longlong *)0x0;
    local_408 = param_1 + 0x304;
    uVar17 = FUN_146fb4872(param_1,&local_408);
    puVar18 = (undefined4 *)FUN_14972a54c(uVar17,param_2,param_1 + 0x304);
    uVar10 = *puVar18;
    uVar11 = *(undefined1 *)(param_1 + 0x300);
    local_400 = 0xffffffff;
    local_3f8 = (longlong *)0x0;
    local_408 = param_1 + 0x2a0;
    uVar17 = FUN_146fb4872(param_1,&local_408);
    uVar17 = FUN_14979f482(uVar17,param_2,param_1 + 0x2a0);
    local_3d8 = 0;
    uStack_3d0 = 0;
    FUN_144a69486(local_3e8,local_110);
    local_470 = local_45c;
    local_478 = local_465;
    local_488 = local_460;
    local_4b8 = local_466;
    local_4c8 = local_464;
    local_4e8 = uVar11;
    local_4e0 = uVar10;
    local_4d8 = uVar9;
    local_4d0 = uVar8;
    local_4c0 = uVar7;
    local_4b0 = uVar6;
    local_4a8 = uVar5;
    local_4a0 = uVar4;
    local_498 = uVar3;
    local_490 = uVar2;
    local_480 = uVar13;
    iVar14 = FUN_14970c136(&local_388,local_3e8,&local_3c8,uVar17);
    uVar17 = DAT_14c996af0;
    local_3f8 = (longlong *)0x0;
    local_3f0 = 0x8000000000;
    local_418 = (undefined1 *)0x0;
    local_410 = 0x8000000000;
    if (iVar14 != -1) {
      FUN_1446ddc76(&local_448,"TransformIndex",1);
      cVar12 = FUN_140498cd4(&local_388,local_448,uVar17);
      uVar17 = DAT_14c996af0;
      if (cVar12 != '\0') {
        FUN_1446ddc76(&local_450,"TransformIndex",1);
        plVar19 = (longlong *)FUN_140619ac2(&local_388,local_450,uVar17);
        uVar13 = (**(code **)(*plVar19 + 0x60))(plVar19);
        FUN_146fd579c(&local_408,uVar13,0);
        uVar13 = (**(code **)(*plVar19 + 0x60))(plVar19);
        FUN_146fd579c(local_428,uVar13,0);
        iVar15 = (**(code **)(*plVar19 + 0x60))();
        if (iVar14 < iVar15) {
          lVar16 = (longlong)iVar14;
          do {
            iVar14 = *(int *)(plVar19[2] + lVar16 * 4);
            plVar23 = local_3f8;
            if (local_3f8 == (longlong *)0x0) {
              plVar23 = &local_408;
            }
            iVar15 = iVar14 + 0x1f;
            if (-1 < iVar14) {
              iVar15 = iVar14;
            }
            puVar1 = (uint *)((longlong)plVar23 + (longlong)(iVar15 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)iVar14 & 0x1f);
            lVar16 = lVar16 + 1;
            iVar14 = (**(code **)(*plVar19 + 0x60))();
          } while (lVar16 < iVar14);
        }
        if (0 < (int)uStack_f8) {
          uVar22 = 0;
          iVar14 = (int)uStack_f8;
          do {
            puVar20 = local_100;
            if (local_100 == (undefined1 *)0x0) {
              puVar20 = local_110;
            }
            if ((*(uint *)(puVar20 + (ulonglong)(uVar22 >> 5) * 4) >> (uVar22 & 0x1f) & 1) != 0) {
              puVar20 = local_418;
              if (local_418 == (undefined1 *)0x0) {
                puVar20 = local_428;
              }
              *(uint *)(puVar20 + (ulonglong)(uVar22 >> 5) * 4) =
                   *(uint *)(puVar20 + (ulonglong)(uVar22 >> 5) * 4) | 1 << ((byte)uVar22 & 0x1f);
              iVar14 = (int)uStack_f8;
            }
            uVar22 = uVar22 + 1;
          } while ((int)uVar22 < iVar14);
        }
      }
    }
    local_438 = 0xffffffff;
    local_430 = 0;
    local_440 = lVar21;
    lVar21 = FUN_146fb78aa(param_1);
    if (lVar21 != 0) {
      FUN_1496fd2a8(lVar21,&local_388,param_2);
    }
    local_440 = local_458;
    local_438 = 0xffffffff;
    local_430 = 0;
    lVar21 = FUN_146fb78aa(param_1);
    if (lVar21 != 0) {
      FUN_1497a32da(lVar21,local_428,param_2);
    }
    local_440 = param_1 + 0x340;
    local_438 = 0xffffffff;
    local_430 = 0;
    lVar21 = FUN_146fb78aa(param_1);
    if (lVar21 != 0) {
      FUN_1497a32da(lVar21,&local_408,param_2);
    }
    if (local_418 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_3f8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_14054b30a(&local_388);
  }
  if (local_100 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_14973b70f:
  if ((local_f0 ^ (ulonglong)auStack_508) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973c21a FUN_14973c21a body=81 status=ok
// SIG undefined FUN_14973c21a(void)

void FUN_14973c21a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 != param_1 + 0x198) {
    lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar1 != param_1 + 0x280) {
                    /* WARNING: Could not recover jumptable at 0x00014973c25e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x20))(param_3);
      return;
    }
  }
  return;
}



// FUNCTION 14973c27c FUN_14973c27c body=138 status=ok
// SIG undefined FUN_14973c27c(void)

void FUN_14973c27c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1a8) {
    local_30 = 0xffffffff;
    local_28 = 0;
    local_38 = param_1 + 0x1a8;
    lVar1 = FUN_146fb78aa(param_1);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973c31c FUN_14973c31c body=138 status=ok
// SIG undefined FUN_14973c31c(void)

void FUN_14973c31c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1a8) {
    local_30 = 0xffffffff;
    local_28 = 0;
    local_38 = param_1 + 0x1a8;
    lVar1 = FUN_146fb78aa(param_1);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973c3bc FUN_14973c3bc body=609 status=ok
// SIG undefined FUN_14973c3bc(void)

void FUN_14973c3bc(longlong param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined1 auStack_f8 [32];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  undefined1 local_a8;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar4 == param_1 + 0x200) {
    if (*(char *)(param_1 + 0x198) == '\x01') {
      dStack_d0._0_4_ = 0xffffffff;
      local_c8 = 0.0;
      local_d8 = (double)(param_1 + 0x1d0);
      uVar5 = FUN_146fb4872(param_1,&local_d8);
      pdVar6 = (double *)FUN_14979981c(uVar5,param_2,param_1 + 0x1d0);
      dVar1 = *pdVar6;
      dVar2 = pdVar6[1];
      dVar3 = pdVar6[2];
      dStack_d0 = (double)CONCAT44(dStack_d0._4_4_,0xffffffff);
      local_c8 = 0.0;
      local_d8 = (double)(param_1 + 0x1e8);
      uVar5 = FUN_146fb4872(param_1,&local_d8);
      pdVar6 = (double *)FUN_14979981c(uVar5,param_2,param_1 + 0x1e8);
      local_b0 = dVar3 + pdVar6[2] * 0.5;
      dStack_b8 = dVar2 + pdVar6[1] * 0.5;
      local_c0 = dVar1 + *pdVar6 * 0.5;
      local_c8 = dVar3 - pdVar6[2] * 0.5;
      dStack_d0 = dVar2 - pdVar6[1] * 0.5;
      local_d8 = dVar1 - *pdVar6 * 0.5;
    }
    else {
      if (*(char *)(param_1 + 0x198) != '\0') goto LAB_14973c415;
      dStack_d0 = (double)CONCAT44(dStack_d0._4_4_,0xffffffff);
      local_c8 = 0.0;
      local_d8 = (double)(param_1 + 0x1a0);
      uVar5 = FUN_146fb4872(param_1,&local_d8);
      pdVar6 = (double *)FUN_14979981c(uVar5,param_2,param_1 + 0x1a0);
      local_c8 = pdVar6[2];
      local_d8 = *pdVar6;
      dStack_d0 = pdVar6[1];
      local_90 = 0xffffffff;
      local_88 = 0;
      local_98 = param_1 + 0x1b8;
      uVar5 = FUN_146fb4872(param_1,&local_98);
      pdVar6 = (double *)FUN_14979981c(uVar5,param_2,param_1 + 0x1b8);
      local_c0 = *pdVar6;
      dStack_b8 = pdVar6[1];
      local_b0 = pdVar6[2];
    }
    local_88 = 0;
    local_90 = 0xffffffff;
    local_a8 = 1;
    local_98 = param_1 + 0x200;
    lVar4 = FUN_146fb78aa(param_1,&local_98);
    if (lVar4 != 0) {
      FUN_1497a4d46(lVar4,&local_d8,param_2);
    }
  }
LAB_14973c415:
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973c61e FUN_14973c61e body=280 status=ok
// SIG undefined FUN_14973c61e(void)

void FUN_14973c61e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  float *pfVar4;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  double local_70;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1b8) {
    uStack_80 = 0xffffffff;
    local_78 = 0;
    local_88 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_88);
    plVar3 = (longlong *)FUN_14979981c(uVar2,param_2,param_1 + 0x198);
    local_78 = plVar3[2];
    local_88 = *plVar3;
    uStack_80 = (undefined4)plVar3[1];
    uStack_7c = *(undefined4 *)((longlong)plVar3 + 0xc);
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = param_1 + 0x1b0;
    uVar2 = FUN_146fb4872(param_1,&local_60);
    pfVar4 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x1b0);
    local_70 = (double)*pfVar4;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = param_1 + 0x1b8;
    lVar1 = FUN_146fb78aa(param_1,&local_60);
    if (lVar1 != 0) {
      FUN_1497a4fe4(lVar1,&local_88,param_2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973c738 FUN_14973c738 body=138 status=ok
// SIG undefined FUN_14973c738(void)

void FUN_14973c738(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_30 = 0xffffffff;
    local_28 = 0;
    local_38 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973c7d8 FUN_14973c7d8 body=138 status=ok
// SIG undefined FUN_14973c7d8(void)

void FUN_14973c7d8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_30 = 0xffffffff;
    local_28 = 0;
    local_38 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973c878 FUN_14973c878 body=138 status=ok
// SIG undefined FUN_14973c878(void)

void FUN_14973c878(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x199) {
    local_30 = 0xffffffff;
    local_28 = 0;
    local_38 = param_1 + 0x199;
    lVar1 = FUN_146fb78aa(param_1);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973c918 FUN_14973c918 body=361 status=ok
// SIG undefined FUN_14973c918(void)

void FUN_14973c918(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined8 uVar4;
  float *pfVar5;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  double local_80;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar3 == param_1 + 0x1a8) {
    local_70 = 0xffffffff;
    local_68 = 0;
    local_78 = param_1 + 0x1a0;
    uVar4 = FUN_146fb4872(param_1,&local_78);
    pfVar5 = (float *)FUN_14972a54c(uVar4,param_2,param_1 + 0x1a0);
    fVar1 = *pfVar5;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_78 = param_1 + 0x19c;
    uVar4 = FUN_146fb4872(param_1,&local_78);
    pfVar5 = (float *)FUN_14972a54c(uVar4,param_2,param_1 + 0x19c);
    fVar2 = *pfVar5;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_78 = param_1 + 0x198;
    uVar4 = FUN_146fb4872(param_1,&local_78);
    pfVar5 = (float *)FUN_14972a54c(uVar4,param_2,param_1 + 0x198);
    local_90 = (double)*pfVar5;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_88 = (double)fVar2;
    local_80 = (double)fVar1;
    local_78 = param_1 + 0x1a8;
    lVar3 = FUN_146fb78aa(param_1,&local_78);
    if (lVar3 != 0) {
      FUN_149728d4a(lVar3,&local_90,param_2);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973ca82 FUN_14973ca82 body=421 status=ok
// SIG undefined FUN_14973ca82(void)

void FUN_14973ca82(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1e0) {
    uStack_c0._0_4_ = 0xffffffff;
    local_b8 = 0;
    local_c8 = param_1 + 0x1c8;
    uVar2 = FUN_146fb4872(param_1,&local_c8);
    puVar3 = (undefined4 *)FUN_14979981c(uVar2,param_2,param_1 + 0x1c8);
    uStack_c0._0_4_ = 0xffffffff;
    local_b8 = 0;
    local_c8 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_c8);
    puVar4 = (undefined4 *)FUN_14979981c(uVar2,param_2,param_1 + 0x198);
    uStack_c0 = CONCAT44(uStack_c0._4_4_,0xffffffff);
    local_b8 = 0;
    local_c8 = param_1 + 0x1b0;
    uVar2 = FUN_146fb4872(param_1,&local_c8);
    uVar2 = FUN_14979981c(uVar2,param_2,param_1 + 0x1b0);
    FUN_144afe3ce(&local_e8,uVar2);
    local_c8 = local_e8;
    uStack_c0 = uStack_e0;
    local_b8 = local_d8;
    uStack_b0 = uStack_d0;
    local_a8 = *puVar4;
    uStack_a4 = puVar4[1];
    uStack_a0 = (undefined4)*(undefined8 *)(puVar4 + 2);
    uStack_9c = (undefined4)((ulonglong)*(undefined8 *)(puVar4 + 2) >> 0x20);
    local_98 = *(undefined8 *)(puVar4 + 4);
    uStack_90 = 0;
    local_88 = *puVar3;
    uStack_84 = puVar3[1];
    uStack_80 = (undefined4)*(undefined8 *)(puVar3 + 2);
    uStack_7c = (undefined4)((ulonglong)*(undefined8 *)(puVar3 + 2) >> 0x20);
    local_78 = *(undefined8 *)(puVar3 + 4);
    uStack_70 = 0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = param_1 + 0x1e0;
    lVar1 = FUN_146fb78aa(param_1);
    if (lVar1 != 0) {
      FUN_1497a53d6(lVar1,&local_c8,param_2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973cc28 FUN_14973cc28 body=436 status=ok
// SIG undefined FUN_14973cc28(void)

void FUN_14973cc28(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  float *pfVar6;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  longlong local_88;
  undefined4 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar4 == param_1 + 0x1b0) {
    local_a0._0_4_ = 0xffffffff;
    local_98 = 0.0;
    local_a8 = (double)(param_1 + 0x1a4);
    uVar5 = FUN_146fb4872(param_1,&local_a8);
    pfVar6 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x1a4);
    fVar1 = *pfVar6;
    local_a0._0_4_ = 0xffffffff;
    local_98 = 0.0;
    local_a8 = (double)(param_1 + 0x1a0);
    uVar5 = FUN_146fb4872(param_1,&local_a8);
    pfVar6 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x1a0);
    fVar2 = *pfVar6;
    local_a0._0_4_ = 0xffffffff;
    local_98 = 0.0;
    local_a8 = (double)(param_1 + 0x19c);
    uVar5 = FUN_146fb4872(param_1,&local_a8);
    pfVar6 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x19c);
    fVar3 = *pfVar6;
    local_a0 = (double)CONCAT44(local_a0._4_4_,0xffffffff);
    local_98 = 0.0;
    local_a8 = (double)(param_1 + 0x198);
    uVar5 = FUN_146fb4872(param_1,&local_a8);
    pfVar6 = (float *)FUN_14972a54c(uVar5,param_2,param_1 + 0x198);
    local_a8 = (double)*pfVar6;
    local_80 = 0xffffffff;
    local_78 = 0;
    local_a0 = (double)fVar3;
    local_98 = (double)fVar2;
    local_90 = (double)fVar1;
    local_88 = param_1 + 0x1b0;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_1497a5660(lVar4,&local_a8,param_2);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973cdde FUN_14973cdde body=306 status=ok
// SIG undefined FUN_14973cdde(void)

void FUN_14973cdde(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined4 local_64;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == param_1 + 0x1a0) {
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = param_1 + 0x198;
    uVar3 = FUN_146fb4872(param_1,&local_60);
    puVar4 = (undefined4 *)FUN_146fca67a(uVar3,param_2,param_1 + 0x198);
    uVar1 = *puVar4;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = param_1 + 0x19c;
    uVar3 = FUN_146fb4872(param_1,&local_60);
    puVar4 = (undefined4 *)FUN_14972a54c(uVar3,param_2,param_1 + 0x19c);
    local_64 = *puVar4;
    local_78[0] = 0;
    local_78[1] = 0;
    FUN_1448158c6(local_78,&local_64,uVar1);
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = param_1 + 0x1a0;
    lVar2 = FUN_146fb78aa(param_1,&local_60);
    if (lVar2 != 0) {
      FUN_14972ac00(lVar2,local_78,param_2);
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973cf12 FUN_14973cf12 body=1236 status=ok
// SIG undefined FUN_14973cf12(void)

void FUN_14973cf12(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_178 [40];
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_120;
  uint local_118;
  uint local_114;
  longlong local_110;
  undefined4 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar11 = param_1 + 0x198;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if ((lVar4 == lVar11) ||
     (lVar4 = (**(code **)(*param_3 + 0x20))(param_3), lVar4 == param_1 + 0x268)) {
    local_f0 = 0xffffffff;
    local_e8 = 0;
    local_f8 = lVar11;
    uVar5 = FUN_146fb4872(param_1);
    uVar5 = FUN_1496fcf74(uVar5,param_2,lVar11);
    FUN_146ecd042(&local_f8,uVar5);
    lVar4 = param_1 + 0x268;
    local_108 = 0xffffffff;
    local_100 = 0;
    local_110 = lVar4;
    uVar5 = FUN_146fb4872(param_1);
    local_140 = lVar4;
    puVar6 = (undefined8 *)FUN_14972bbd2(uVar5,param_2,lVar4);
    local_120 = 0;
    uVar1 = *(uint *)(puVar6 + 1);
    uVar5 = *puVar6;
    local_118 = uVar1;
    if (uVar1 == 0) {
      local_114 = 0;
    }
    else {
      FUN_149712a1c(&local_120,uVar1,0);
      FUN_149712a7e(local_120,uVar5,uVar1);
    }
    local_108 = 0xffffffff;
    local_100 = 0;
    local_110 = param_1 + 0x248;
    uVar5 = FUN_146fb4872(param_1,&local_110);
    lVar7 = FUN_14979bc16(uVar5,param_2,param_1 + 0x248);
    local_108 = 0xffffffff;
    local_100 = 0;
    local_110 = param_1 + 0x278;
    uVar5 = FUN_146fb4872(param_1,&local_110);
    plVar8 = (longlong *)FUN_1497a6650(uVar5,param_2,param_1 + 0x278);
    lVar4 = *plVar8;
    if ((lVar4 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar4);
    }
    local_108 = 0xffffffff;
    local_100 = 0;
    local_110 = param_1 + 0x280;
    uVar5 = FUN_146fb4872(param_1);
    plVar8 = (longlong *)FUN_1497a6650(uVar5,param_2,param_1 + 0x280);
    local_148 = *plVar8;
    if ((local_148 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(local_148);
    }
    uVar5 = DAT_14c996ae8;
    FUN_1446ddc76(&local_128,"Internal",1);
    cVar2 = FUN_140498cd4(&local_f8,local_128,uVar5);
    uVar5 = DAT_14c996ae8;
    if ((cVar2 != '\0') &&
       ((*(char *)(param_1 + 0x288) != '\0' || (*(char *)(param_1 + 0x289) == '\x01')))) {
      FUN_1446ddc76(&local_130,"MaterialID",1);
      lVar9 = FUN_140b1fc18(&local_f8,local_130,uVar5);
      uVar5 = DAT_14c996ae8;
      FUN_1446ddc76(&local_138,"Internal",1);
      lVar10 = FUN_146eb1f4e(&local_f8,local_138,uVar5);
      uVar1 = local_118;
      if (*(char *)(param_1 + 0x288) == '\x01') {
        lVar13 = (longlong)(int)local_118;
        local_118 = local_118 + 1;
        if (local_114 < local_118) {
          local_150 = lVar13;
          FUN_1474ba930(&local_120,uVar1);
          lVar13 = local_150;
        }
        *(longlong *)(local_120 + lVar13 * 8) = lVar4;
        if ((lVar4 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        iVar3 = *(int *)(lVar7 + 0x18);
        if (0 < iVar3) {
          uVar12 = 0;
          do {
            lVar4 = *(longlong *)(lVar10 + 0x20);
            if (*(longlong *)(lVar10 + 0x20) == 0) {
              lVar4 = lVar10 + 0x10;
            }
            uVar14 = uVar12 >> 5 & 0x7ffffff;
            if ((*(uint *)(lVar4 + uVar14 * 4) >> ((uint)uVar12 & 0x1f) & 1) == 0) {
              lVar4 = *(longlong *)(lVar7 + 0x10);
              if (*(longlong *)(lVar7 + 0x10) == 0) {
                lVar4 = lVar7;
              }
              if ((*(uint *)(lVar4 + uVar14 * 4) & 1 << ((byte)uVar12 & 0x1f)) != 0) {
                *(uint *)(*(longlong *)(lVar9 + 0x10) + uVar12 * 4) = uVar1;
                iVar3 = *(int *)(lVar7 + 0x18);
              }
            }
            uVar12 = uVar12 + 1;
          } while ((longlong)uVar12 < (longlong)iVar3);
        }
      }
      uVar1 = local_118;
      if (*(char *)(param_1 + 0x289) == '\x01') {
        lVar4 = (longlong)(int)local_118;
        local_118 = local_118 + 1;
        if (local_114 < local_118) {
          FUN_1474ba930(&local_120,uVar1);
        }
        *(longlong *)(local_120 + lVar4 * 8) = local_148;
        if ((local_148 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        iVar3 = *(int *)(lVar7 + 0x18);
        if (0 < iVar3) {
          uVar12 = 0;
          do {
            lVar4 = *(longlong *)(lVar10 + 0x20);
            if (*(longlong *)(lVar10 + 0x20) == 0) {
              lVar4 = lVar10 + 0x10;
            }
            uVar14 = uVar12 >> 5 & 0x7ffffff;
            if ((*(uint *)(lVar4 + uVar14 * 4) >> ((uint)uVar12 & 0x1f) & 1) != 0) {
              lVar4 = *(longlong *)(lVar7 + 0x10);
              if (*(longlong *)(lVar7 + 0x10) == 0) {
                lVar4 = lVar7;
              }
              if ((*(uint *)(lVar4 + uVar14 * 4) & 1 << ((byte)uVar12 & 0x1f)) != 0) {
                *(uint *)(*(longlong *)(lVar9 + 0x10) + uVar12 * 4) = uVar1;
                iVar3 = *(int *)(lVar7 + 0x18);
              }
            }
            uVar12 = uVar12 + 1;
          } while ((longlong)uVar12 < (longlong)iVar3);
        }
      }
    }
    local_110 = local_140;
    local_108 = 0xffffffff;
    local_100 = 0;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_14972da30(lVar4,&local_120,param_2);
    }
    local_108 = 0xffffffff;
    local_100 = 0;
    local_110 = lVar11;
    lVar11 = FUN_146fb78aa(param_1);
    if (lVar11 != 0) {
      FUN_1496fd2a8(lVar11,&local_f8,param_2);
    }
    if (local_120 != 0) {
      FUN_1400020a8();
    }
    FUN_14054b30a(&local_f8);
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14973d3e8 FUN_14973d3e8 body=971 status=ok
// SIG undefined FUN_14973d3e8(void)

void FUN_14973d3e8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  undefined4 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar8 = param_1 + 0x198;
  lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar3 == lVar8) {
    local_f0 = 0xffffffff;
    local_e8 = 0;
    local_f8 = lVar8;
    uVar4 = FUN_146fb4872(param_1);
    uVar4 = FUN_1496fcf74(uVar4,param_2,lVar8);
    FUN_146ecd042(&local_f8,uVar4);
    local_108 = 0xffffffff;
    local_100 = 0;
    local_110 = param_1 + 0x248;
    uVar4 = FUN_146fb4872(param_1,&local_110);
    lVar5 = FUN_14979bc16(uVar4,param_2,param_1 + 0x248);
    lVar3 = param_1 + 0x268;
    local_108 = 0xffffffff;
    local_100 = 0;
    local_110 = lVar3;
    uVar4 = FUN_146fb4872(param_1,&local_110);
    local_130 = lVar3;
    lVar3 = FUN_14972bbd2(uVar4,param_2,lVar3);
    local_108 = 0xffffffff;
    local_100 = 0;
    local_110 = param_1 + 0x278;
    uVar4 = FUN_146fb4872(param_1,&local_110);
    piVar6 = (int *)FUN_146fca67a(uVar4,param_2,param_1 + 0x278);
    iVar12 = *piVar6;
    local_108 = 0xffffffff;
    local_100 = 0;
    local_110 = param_1 + 0x27c;
    uVar4 = FUN_146fb4872(param_1,&local_110);
    piVar6 = (int *)FUN_146fca67a(uVar4,param_2,param_1 + 0x27c);
    uVar4 = DAT_14c996ae8;
    local_138 = lVar3;
    if (0 < *(int *)(lVar3 + 8)) {
      iVar1 = *piVar6;
      FUN_1446ddc76(&local_118,"Internal",1);
      cVar2 = FUN_140498cd4(&local_f8,local_118,uVar4);
      uVar4 = DAT_14c996ae8;
      if ((cVar2 != '\0') &&
         ((*(char *)(param_1 + 0x280) != '\0' || (*(char *)(param_1 + 0x281) == '\x01')))) {
        FUN_1446ddc76(&local_120,"MaterialID",1);
        lVar3 = FUN_140b1fc18(&local_f8,local_120,uVar4);
        uVar4 = DAT_14c996ae8;
        FUN_1446ddc76(&local_128,"Internal",1);
        lVar7 = FUN_146eb1f4e(&local_f8,local_128,uVar4);
        iVar9 = *(int *)(local_138 + 8);
        if ((*(char *)(param_1 + 0x280) == '\x01') && ((-1 < iVar12 && (iVar12 < iVar9)))) {
          iVar11 = *(int *)(lVar5 + 0x18);
          if (0 < iVar11) {
            uVar10 = 0;
            do {
              lVar14 = *(longlong *)(lVar7 + 0x20);
              if (*(longlong *)(lVar7 + 0x20) == 0) {
                lVar14 = lVar7 + 0x10;
              }
              uVar13 = uVar10 >> 5 & 0x7ffffff;
              if ((*(uint *)(lVar14 + uVar13 * 4) >> ((uint)uVar10 & 0x1f) & 1) == 0) {
                lVar14 = *(longlong *)(lVar5 + 0x10);
                if (*(longlong *)(lVar5 + 0x10) == 0) {
                  lVar14 = lVar5;
                }
                if ((*(uint *)(lVar14 + uVar13 * 4) & 1 << ((byte)uVar10 & 0x1f)) != 0) {
                  *(int *)(*(longlong *)(lVar3 + 0x10) + uVar10 * 4) = iVar12;
                  iVar11 = *(int *)(lVar5 + 0x18);
                }
              }
              uVar10 = uVar10 + 1;
            } while ((longlong)uVar10 < (longlong)iVar11);
            iVar9 = *(int *)(local_138 + 8);
          }
        }
        if (((*(char *)(param_1 + 0x281) == '\x01') && (-1 < iVar1)) && (iVar1 < iVar9)) {
          iVar12 = *(int *)(lVar5 + 0x18);
          if (0 < iVar12) {
            uVar10 = 0;
            do {
              lVar14 = *(longlong *)(lVar7 + 0x20);
              if (*(longlong *)(lVar7 + 0x20) == 0) {
                lVar14 = lVar7 + 0x10;
              }
              uVar13 = uVar10 >> 5 & 0x7ffffff;
              if ((*(uint *)(lVar14 + uVar13 * 4) >> ((uint)uVar10 & 0x1f) & 1) != 0) {
                lVar14 = *(longlong *)(lVar5 + 0x10);
                if (*(longlong *)(lVar5 + 0x10) == 0) {
                  lVar14 = lVar5;
                }
                if ((*(uint *)(lVar14 + uVar13 * 4) & 1 << ((byte)uVar10 & 0x1f)) != 0) {
                  *(int *)(*(longlong *)(lVar3 + 0x10) + uVar10 * 4) = iVar1;
                  iVar12 = *(int *)(lVar5 + 0x18);
                }
              }
              uVar10 = uVar10 + 1;
            } while ((longlong)uVar10 < (longlong)iVar12);
          }
        }
      }
    }
    local_108 = 0xffffffff;
    local_100 = 0;
    local_110 = lVar8;
    lVar8 = FUN_146fb78aa(param_1);
    if (lVar8 != 0) {
      FUN_1496fd2a8(lVar8,&local_f8,param_2);
    }
    local_110 = local_130;
    local_108 = 0xffffffff;
    local_100 = 0;
    lVar8 = FUN_146fb78aa(param_1);
    if (lVar8 != 0) {
      FUN_14972c7ae(lVar8,local_138,param_2);
    }
    FUN_14054b30a(&local_f8);
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973d7b4 FUN_14973d7b4 body=423 status=ok
// SIG undefined FUN_14973d7b4(void)

void FUN_14973d7b4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  longlong local_78 [3];
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1a8) {
    local_58 = 0xffffffff;
    local_50 = 0;
    local_80 = param_1 + 0x1a8;
    local_60 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1);
    local_88 = param_2;
    plVar3 = (longlong *)FUN_14972bbd2(uVar2,param_2,param_1 + 0x198);
    local_78[0] = 0;
    local_78[1] = 0;
    FUN_1407c8b48(local_78,L"\n----------------------------------------\n");
    FUN_1407c8b48(local_78,L"Number of Materials: %d\n",(int)plVar3[1]);
    if ((longlong)(int)plVar3[1] != 0) {
      lVar1 = *plVar3;
      lVar5 = (longlong)(int)plVar3[1] << 3;
      lVar4 = 0;
      do {
        FUN_144750a86(*(undefined8 *)(lVar1 + lVar4 * 8),&local_60,0,0);
        FUN_1407c8b48(local_78,L"%4d: %s\n");
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    FUN_1407c8b48(local_78,L"----------------------------------------\n");
    local_60 = local_80;
    local_58 = 0xffffffff;
    local_50 = 0;
    lVar1 = FUN_146fb78aa(param_1);
    if (lVar1 != 0) {
      FUN_1496fde88(lVar1,local_78,local_88);
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973d95c FUN_14973d95c body=348 status=ok
// SIG undefined FUN_14973d95c(void)

void FUN_14973d95c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = param_1 + 0x1a8;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == lVar4) {
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_60);
    lVar1 = FUN_14972bbd2(uVar2,param_2,param_1 + 0x198);
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = param_1 + 0x1b0;
    uVar2 = FUN_146fb4872(param_1,&local_60);
    piVar3 = (int *)FUN_146fca67a(uVar2,param_2,param_1 + 0x1b0);
    local_60 = lVar4;
    if (((*(int *)(lVar1 + 8) < 1) || (*piVar3 < 0)) || (*(int *)(lVar1 + 8) <= *piVar3)) {
      local_68 = 0;
      local_58 = 0xffffffff;
      local_50 = 0;
      lVar4 = FUN_146fb78aa(param_1);
      if (lVar4 != 0) {
        FUN_1497a6b5e(lVar4,&local_68,param_2);
      }
    }
    else {
      local_58 = 0xffffffff;
      local_50 = 0;
      lVar4 = FUN_146fb78aa(param_1);
      if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973dad8 FUN_14973dad8 body=514 status=ok
// SIG undefined FUN_14973dad8(void)

void FUN_14973dad8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  uint local_58;
  uint local_54;
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = param_1 + 0x198;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == lVar7) {
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = lVar7;
    uVar3 = FUN_146fb4872(param_1);
    puVar4 = (undefined8 *)FUN_14972bbd2(uVar3,param_2,lVar7);
    local_60 = 0;
    uVar1 = *(uint *)(puVar4 + 1);
    uVar3 = *puVar4;
    local_58 = uVar1;
    if (uVar1 == 0) {
      local_54 = 0;
    }
    else {
      FUN_149712a1c(&local_60,uVar1,0);
      FUN_149712a7e(local_60,uVar3,uVar1);
    }
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = param_1 + 0x1a8;
    uVar3 = FUN_146fb4872(param_1);
    plVar5 = (longlong *)FUN_1497a6650(uVar3,param_2,param_1 + 0x1a8);
    lVar2 = *plVar5;
    local_68 = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = param_1 + 0x1b4;
    uVar3 = FUN_146fb4872(param_1);
    piVar6 = (int *)FUN_146fca67a(uVar3,param_2,param_1 + 0x1b4);
    uVar1 = local_58;
    if (*(char *)(param_1 + 0x1b0) == '\0') {
      lVar8 = (longlong)(int)local_58;
      local_58 = local_58 + 1;
      if (local_54 < local_58) {
        FUN_1474ba930(&local_60,uVar1);
      }
      *(longlong *)(local_60 + lVar8 * 8) = lVar2;
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar2);
      }
    }
    else if ((-1 < *piVar6) && (*piVar6 < (int)local_58)) {
      FUN_14973dcdc(&local_60,&local_68);
    }
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = lVar7;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_14972da30(lVar7,&local_60,param_2);
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973dcdc FUN_14973dcdc body=129 status=ok
// SIG undefined FUN_14973dcdc(void)

uint FUN_14973dcdc(longlong *param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1474ba930(param_1,iVar1);
  }
  uVar3 = (ulonglong)param_3;
  memmove((void *)(*param_1 + uVar3 * 8 + 8),(void *)(*param_1 + uVar3 * 8),
          (ulonglong)(iVar1 - param_3) << 3);
  lVar2 = *param_2;
  *(longlong *)(*param_1 + uVar3 * 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_3;
}



// FUNCTION 14973dd5e FUN_14973dd5e body=138 status=ok
// SIG undefined FUN_14973dd5e(void)

void FUN_14973dd5e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1a0) {
    local_30 = 0xffffffff;
    local_28 = 0;
    local_38 = param_1 + 0x1a0;
    lVar1 = FUN_146fb78aa(param_1);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973ddfe FUN_14973ddfe body=157 status=ok
// SIG undefined FUN_14973ddfe(void)

void FUN_14973ddfe(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x198) {
    local_48[0] = 0;
    local_48[1] = 0;
    local_30 = 0xffffffff;
    local_28 = 0;
    local_48[2] = param_1 + 0x198;
    lVar1 = FUN_146fb78aa(param_1);
    if (lVar1 != 0) {
      FUN_14972da30(lVar1,local_48,param_2);
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973dec4 FUN_14973dec4 body=275 status=ok
// SIG undefined FUN_14973dec4(void)

void FUN_14973dec4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  float *pfVar4;
  undefined1 auStack_98 [44];
  float local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == param_1 + 0x1a0) {
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x198;
    uVar3 = FUN_146fb4872(param_1,&local_68);
    pfVar4 = (float *)FUN_14972a54c(uVar3,param_2,param_1 + 0x198);
    fVar1 = *pfVar4;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x19c;
    uVar3 = FUN_146fb4872(param_1,&local_68);
    pfVar4 = (float *)FUN_14972a54c(uVar3,param_2,param_1 + 0x19c);
    local_6c = fVar1 + *pfVar4;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x1a0;
    lVar2 = FUN_146fb78aa(param_1,&local_68);
    if (lVar2 != 0) {
      FUN_1497286c4(lVar2,&local_6c,param_2);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973dfd8 FUN_14973dfd8 body=275 status=ok
// SIG undefined FUN_14973dfd8(void)

void FUN_14973dfd8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  float *pfVar4;
  undefined1 auStack_98 [44];
  float local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == param_1 + 0x1a0) {
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x198;
    uVar3 = FUN_146fb4872(param_1,&local_68);
    pfVar4 = (float *)FUN_14972a54c(uVar3,param_2,param_1 + 0x198);
    fVar1 = *pfVar4;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x19c;
    uVar3 = FUN_146fb4872(param_1,&local_68);
    pfVar4 = (float *)FUN_14972a54c(uVar3,param_2,param_1 + 0x19c);
    local_6c = fVar1 - *pfVar4;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x1a0;
    lVar2 = FUN_146fb78aa(param_1,&local_68);
    if (lVar2 != 0) {
      FUN_1497286c4(lVar2,&local_6c,param_2);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973e0ec FUN_14973e0ec body=275 status=ok
// SIG undefined FUN_14973e0ec(void)

void FUN_14973e0ec(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  float *pfVar4;
  undefined1 auStack_98 [44];
  float local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == param_1 + 0x1a0) {
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x198;
    uVar3 = FUN_146fb4872(param_1,&local_68);
    pfVar4 = (float *)FUN_14972a54c(uVar3,param_2,param_1 + 0x198);
    fVar1 = *pfVar4;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x19c;
    uVar3 = FUN_146fb4872(param_1,&local_68);
    pfVar4 = (float *)FUN_14972a54c(uVar3,param_2,param_1 + 0x19c);
    local_6c = fVar1 * *pfVar4;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x1a0;
    lVar2 = FUN_146fb78aa(param_1,&local_68);
    if (lVar2 != 0) {
      FUN_1497286c4(lVar2,&local_6c,param_2);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973e200 FUN_14973e200 body=290 status=ok
// SIG undefined FUN_14973e200(void)

void FUN_14973e200(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  float *pfVar4;
  undefined1 auStack_98 [44];
  uint local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == param_1 + 0x1a0) {
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x198;
    uVar3 = FUN_146fb4872(param_1,&local_68);
    pfVar4 = (float *)FUN_14972a54c(uVar3,param_2,param_1 + 0x198);
    fVar1 = *pfVar4;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x19c;
    uVar3 = FUN_146fb4872(param_1,&local_68);
    pfVar4 = (float *)FUN_14972a54c(uVar3,param_2,param_1 + 0x19c);
    local_6c = -(uint)(*pfVar4 != 0.0) & (uint)(fVar1 / *pfVar4);
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x1a0;
    lVar2 = FUN_146fb78aa(param_1,&local_68);
    if (lVar2 != 0) {
      FUN_1496fe392(lVar2,&local_6c,param_2);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973e324 FUN_14973e324 body=412 status=ok
// SIG undefined FUN_14973e324(void)

void FUN_14973e324(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined8 uVar4;
  float *pfVar5;
  float fVar6;
  undefined1 auStack_98 [40];
  int local_70;
  float local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar3 != param_1 + 0x1a0) {
    lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar3 != param_1 + 0x1a4) goto LAB_14973e379;
  }
  local_60 = 0xffffffff;
  local_58 = 0;
  local_68 = param_1 + 0x198;
  uVar4 = FUN_146fb4872(param_1,&local_68);
  pfVar5 = (float *)FUN_14972a54c(uVar4,param_2,param_1 + 0x198);
  fVar1 = *pfVar5;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_68 = param_1 + 0x19c;
  uVar4 = FUN_146fb4872(param_1,&local_68);
  pfVar5 = (float *)FUN_14972a54c(uVar4,param_2,param_1 + 0x19c);
  fVar2 = *pfVar5;
  local_6c = 0.0;
  local_70 = 0;
  if ((fVar2 != 0.0) || (NAN(fVar2))) {
    fVar6 = fVar1 / fVar2;
    local_70 = (int)fVar6;
    local_6c = fVar1 - (float)(int)fVar6 * fVar2;
  }
  local_60 = 0xffffffff;
  local_58 = 0;
  local_68 = param_1 + 0x1a0;
  lVar3 = FUN_146fb78aa(param_1);
  if (lVar3 != 0) {
    FUN_1496fe392(lVar3,&local_6c,param_2);
  }
  local_68 = param_1 + 0x1a4;
  local_60 = 0xffffffff;
  local_58 = 0;
  lVar3 = FUN_146fb78aa(param_1);
  if (lVar3 != 0) {
    FUN_1497006ec(lVar3,&local_70,param_2);
  }
LAB_14973e379:
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973e4c2 FUN_14973e4c2 body=234 status=ok
// SIG undefined FUN_14973e4c2(void)

void FUN_14973e4c2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 auStack_88 [44];
  uint local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    local_5c = -(uint)(*pfVar3 != 0.0) & (uint)(1.0 / *pfVar3);
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1496fe392(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973e5ae FUN_14973e5ae body=217 status=ok
// SIG undefined FUN_14973e5ae(void)

void FUN_14973e5ae(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 auStack_88 [44];
  float local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    local_5c = *pfVar3 * *pfVar3;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1497286c4(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973e688 FUN_14973e688 body=236 status=ok
// SIG undefined FUN_14973e688(void)

void FUN_14973e688(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float _X;
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 auStack_68 [36];
  float local_44;
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_38 = 0xffffffff;
    local_30 = 0;
    local_40 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    _X = *pfVar3;
    local_44 = 0.0;
    if (0.0 < _X) {
      if (_X < 0.0) {
        local_44 = sqrtf(_X);
      }
      else {
        local_44 = SQRT(_X);
      }
    }
    local_38 = 0xffffffff;
    local_30 = 0;
    local_40 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1);
    if (lVar1 != 0) {
      FUN_1496fe392(lVar1,&local_44,param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14973e776 FUN_14973e776 body=238 status=ok
// SIG undefined FUN_14973e776(void)

void FUN_14973e776(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 auStack_88 [44];
  uint local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    local_5c = -(uint)(0.0 < *pfVar3) & (uint)(1.0 / SQRT(*pfVar3));
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1496fe392(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973e866 FUN_14973e866 body=224 status=ok
// SIG undefined FUN_14973e866(void)

void FUN_14973e866(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 auStack_88 [44];
  float local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    local_5c = *pfVar3;
    local_5c = local_5c * local_5c * local_5c;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1497286c4(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973e948 FUN_14973e948 body=220 status=ok
// SIG undefined FUN_14973e948(void)

void FUN_14973e948(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined1 auStack_88 [44];
  uint local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    puVar3 = (uint *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    local_5c = *puVar3 ^ 0x80000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1497286c4(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973ea26 FUN_14973ea26 body=220 status=ok
// SIG undefined FUN_14973ea26(void)

void FUN_14973ea26(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined1 auStack_88 [44];
  uint local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    puVar3 = (uint *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    local_5c = *puVar3 & 0x7fffffff;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1497286c4(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973eb04 FUN_14973eb04 body=219 status=ok
// SIG undefined FUN_14973eb04(void)

void FUN_14973eb04(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    puVar3 = (uint *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    auVar4 = roundps(ZEXT416(*puVar3),ZEXT416(*puVar3),1);
    local_5c = auVar4._0_4_;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1497286c4(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973ebe0 FUN_14973ebe0 body=219 status=ok
// SIG undefined FUN_14973ebe0(void)

void FUN_14973ebe0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    puVar3 = (uint *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    auVar4 = roundps(ZEXT416(*puVar3),ZEXT416(*puVar3),2);
    local_5c = auVar4._0_4_;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1496fe392(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973ecbc FUN_14973ecbc body=232 status=ok
// SIG undefined FUN_14973ecbc(void)

void FUN_14973ecbc(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    auVar4 = roundps(ZEXT416((uint)(*pfVar3 + 0.5)),ZEXT416((uint)(*pfVar3 + 0.5)),1);
    local_5c = auVar4._0_4_;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1496fe392(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973eda6 FUN_14973eda6 body=219 status=ok
// SIG undefined FUN_14973eda6(void)

void FUN_14973eda6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    puVar3 = (uint *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    auVar4 = roundps(ZEXT416(*puVar3),ZEXT416(*puVar3),3);
    local_5c = auVar4._0_4_;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1497286c4(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973ee82 FUN_14973ee82 body=223 status=ok
// SIG undefined FUN_14973ee82(void)

void FUN_14973ee82(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 in_XMM1 [16];
  undefined1 auVar4 [16];
  undefined1 auStack_88 [44];
  float local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19c) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x198;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    pfVar3 = (float *)FUN_14972a54c(uVar2,param_2,param_1 + 0x198);
    auVar4 = roundss(in_XMM1,ZEXT416((uint)*pfVar3),9);
    local_5c = *pfVar3 - auVar4._0_4_;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19c;
    lVar1 = FUN_146fb78aa(param_1,&local_58);
    if (lVar1 != 0) {
      FUN_1497286c4(lVar1,&local_5c,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14973ef62 FUN_14973ef62 body=275 status=ok
// SIG undefined FUN_14973ef62(void)

void FUN_14973ef62(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  float *pfVar4;
  undefined1 auStack_98 [44];
  float local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == param_1 + 0x1a0) {
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x198;
    uVar3 = FUN_146fb4872(param_1,&local_68);
    pfVar4 = (float *)FUN_14972a54c(uVar3,param_2,param_1 + 0x198);
    fVar1 = *pfVar4;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x19c;
    uVar3 = FUN_146fb4872(param_1,&local_68);
    pfVar4 = (float *)FUN_14972a54c(uVar3,param_2,param_1 + 0x19c);
    local_6c = fVar1;
    if (*pfVar4 <= fVar1) {
      local_6c = *pfVar4;
    }
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x1a0;
    lVar2 = FUN_146fb78aa(param_1,&local_68);
    if (lVar2 != 0) {
      FUN_1497286c4(lVar2,&local_6c,param_2);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


