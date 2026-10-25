// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146630810 FUN_146630810 body=254 status=ok
// SIG undefined FUN_146630810(void)

undefined8
FUN_146630810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b9955b0;
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
  *local_48 = &PTR_FUN_14b994a00;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14140a2fc(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146630910 FUN_146630910 body=349 status=ok
// SIG undefined FUN_146630910(void)

void FUN_146630910(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if (*(longlong *)(param_1 + 0xab8) == 0) {
    return;
  }
  lVar3 = FUN_140cb9f34();
  lVar6 = *(longlong *)(lVar3 + 0x70);
  if (lVar6 == 0) {
    uVar4 = FUN_1407f787c();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(lVar3 + 0x70) = lVar6;
  }
  plVar8 = (longlong *)(lVar3 + 0x68);
  lVar7 = *(longlong *)(lVar3 + 0x78);
  if (lVar7 == 0) {
    if (lVar6 == 0) {
      return;
    }
    if (*plVar8 == 0) {
      return;
    }
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      *(undefined8 *)(lVar3 + 0x78) = 0;
      return;
    }
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar7 = FUN_144aff482(uVar4,plVar8);
    *(longlong *)(lVar3 + 0x78) = lVar7;
    if (lVar7 == 0) {
      return;
    }
    lVar6 = *(longlong *)(lVar3 + 0x70);
  }
  uVar4 = *(undefined8 *)(param_1 + 0xab8);
  if (lVar6 == 0) {
    uVar5 = FUN_1407f787c();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(lVar3 + 0x70) = lVar6;
    lVar7 = *(longlong *)(lVar3 + 0x78);
    if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar8 != 0)) {
      plVar1 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        lVar7 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar7 = FUN_144aff482(uVar5,plVar8);
      }
      *(longlong *)(lVar3 + 0x78) = lVar7;
    }
  }
  FUN_1447997cc(uVar4,lVar7,0,0,0);
  return;
}



// FUNCTION 146630a6e FUN_146630a6e body=232 status=ok
// SIG undefined FUN_146630a6e(void)

void FUN_146630a6e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  code *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x508) != 0) {
    lVar3 = FUN_140dd10c4();
    plVar1 = *(longlong **)(param_1 + 0x508);
    if ((((plVar1 != (longlong *)0x0) && (lVar3 != 0)) && (lVar2 = plVar1[2], lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      (**(code **)(*plVar1 + 0x308))(plVar1,&DAT_14cbc9e00);
      if (param_2 != 0) {
        lVar3 = FUN_140ebc504();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          local_30 = FUN_146630b58;
          local_28 = 0;
          FUN_141201fe2(param_2 + 0x2648,local_20,param_1);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146630b58 FUN_146630b58 body=105 status=ok
// SIG undefined FUN_146630b58(void)

void FUN_146630b58(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x508) != 0) {
    lVar3 = FUN_140dd10c4();
    plVar1 = *(longlong **)(param_1 + 0x508);
    if ((((plVar1 != (longlong *)0x0) && (lVar3 != 0)) && (lVar2 = plVar1[2], lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
                    /* WARNING: Could not recover jumptable at 0x000146630bb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x318))(plVar1,&DAT_14cbc9e00);
      return;
    }
  }
  return;
}



// FUNCTION 146630bc2 FUN_146630bc2 body=37 status=ok
// SIG undefined FUN_146630bc2(void)

void FUN_146630bc2(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1403ca102();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146630bda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x498))(plVar1);
    return;
  }
  return;
}



// FUNCTION 146630c0a FUN_146630c0a body=106 status=ok
// SIG undefined FUN_146630c0a(void)

void FUN_146630c0a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x2378) != 0) {
    plVar1 = (longlong *)(param_1 + 0x2370);
    plVar2 = (longlong *)*plVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_1 + -0xe48);
      if ((*(int *)(param_1 + 0x2378) != 0) &&
         (puVar3 = (undefined8 *)*plVar1, puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)(puVar3,0);
        FUN_1446efa72(plVar1,0,0,0x10);
        *(undefined4 *)(param_1 + 0x2378) = 0;
      }
    }
  }
  return;
}



// FUNCTION 146630c74 FUN_146630c74 body=67 status=ok
// SIG undefined FUN_146630c74(void)

bool FUN_146630c74(longlong param_1)

{
  int iVar1;
  bool bVar2;
  
  if (((*(longlong *)(param_1 + 0xf0) == 0) ||
      (*(char *)(*(longlong *)(param_1 + 0xf0) + 0x5d30) != '\0')) ||
     (*(longlong *)(param_1 + -0x448) != *(longlong *)(param_1 + -0xa80))) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_140161e9a(param_1 + 0x2dd8);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}



// FUNCTION 146630cb8 FUN_146630cb8 body=58 status=ok
// SIG undefined FUN_146630cb8(void)

void FUN_146630cb8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14027284a(param_1 + 0x3910);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x3d0) == lVar1)) {
    FUN_1458ae910(lVar1,4,0);
    return;
  }
  return;
}



// FUNCTION 146630cf2 FUN_146630cf2 body=177 status=ok
// SIG undefined FUN_146630cf2(void)

undefined8 FUN_146630cf2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
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



// FUNCTION 146630da4 FUN_146630da4 body=122 status=ok
// SIG undefined FUN_146630da4(void)

void FUN_146630da4(char *param_1,undefined8 param_2,int *param_3,char param_4,char param_5)

{
  char cVar1;
  
  cVar1 = *param_1;
  FUN_1400bc96c();
  if ((*param_3 != 0) && (*(longlong *)(param_3 + 2) != 0)) {
    if (param_5 == '\0') {
      FUN_140c125e6(param_3,&DAT_14cbd92f8);
    }
    else {
      FUN_1403ca8ec();
    }
    if (cVar1 == '\0') {
      FUN_1403ca8ec(param_3,&DAT_14cbd92d8);
    }
    if (param_4 != '\0') {
      FUN_1403ca8ec(param_3,&DAT_14cbd92e0);
      return;
    }
  }
  return;
}



// FUNCTION 146630e1e FUN_146630e1e body=159 status=ok
// SIG undefined FUN_146630e1e(void)

void FUN_146630e1e(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar4 = FUN_140896684();
  if ((cVar4 != '\0') && (*(longlong *)(param_1 + 0x3200) != 0)) {
    iVar3 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      iVar3 = 0;
    }
    FUN_1446f82e2(local_30,iVar3,*param_2,1);
    uVar2 = *(undefined8 *)(param_1 + 0x3200);
    uVar1 = *param_3;
    uVar5 = FUN_1403363fe(uVar2,local_30);
    local_38 = 0;
    FUN_140d18af6(uVar2,param_1,uVar5,uVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146630ebe FUN_146630ebe body=58 status=ok
// SIG undefined FUN_146630ebe(void)

void FUN_146630ebe(longlong param_1)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0x178) == '\x03') && (*(longlong *)(param_1 + 0xf48) != 0)) {
    lVar1 = FUN_1407afa82();
    if (lVar1 == 0) {
      FUN_148db94ee(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 146630ef8 FUN_146630ef8 body=374 status=ok
// SIG undefined FUN_146630ef8(void)

undefined8 FUN_146630ef8(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_140 = 0;
  if ((longlong)(int)param_2[1] == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = *param_2;
    lVar4 = (longlong)(int)param_2[1] << 4;
    do {
      local_d8 = 0;
      local_d0 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_cc = 0xffffffff00000080;
      local_c4 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_88 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_80 = 0xf;
      local_78 = 1;
      local_74 = 0;
      uStack_6c = 0;
      cVar1 = FUN_14088c870(&local_138,lVar3);
      if (cVar1 == '\0') {
LAB_146631061:
        FUN_140368b56(&local_138);
        uVar2 = 1;
        break;
      }
      cVar1 = FUN_140bac064(&local_138,&local_140);
      if (cVar1 != '\0') {
        cVar1 = FUN_14125be1e(param_1 + -0x9a8,local_140);
        if (cVar1 == '\0') goto LAB_146631061;
      }
      FUN_140368b56(&local_138);
      lVar3 = lVar3 + 0x10;
      uVar2 = 0;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146631070 FUN_146631070 body=84 status=ok
// SIG undefined FUN_146631070(void)

void FUN_146631070(longlong param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  
  bVar1 = FUN_14088b7a4(param_1 + 0x2780);
  if ((bVar1 & param_3) == 1) {
    *(undefined8 *)(param_1 + 0x2780) = 0;
  }
  else if (param_3 == 0) {
    FUN_14485c47a(param_1 + 0x2780,param_2);
    return;
  }
  return;
}



// FUNCTION 1466310c4 FUN_1466310c4 body=137 status=ok
// SIG undefined FUN_1466310c4(void)

void FUN_1466310c4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x2500) != 0) {
    local_18 = 0x7202;
    local_10 = 0;
    local_30 = 0x7201;
    local_28 = 0;
    local_40 = param_6;
    local_48 = param_5;
    local_38 = param_2;
    local_20 = param_3;
    FUN_14129a79a(*(longlong *)(param_1 + 0x2500),&local_38,&local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14663115a FUN_14663115a body=177 status=ok
// SIG undefined FUN_14663115a(void)

undefined8 FUN_14663115a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
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



// FUNCTION 14663120c FUN_14663120c body=177 status=ok
// SIG undefined FUN_14663120c(void)

undefined8 FUN_14663120c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
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



// FUNCTION 1466312be FUN_1466312be body=177 status=ok
// SIG undefined FUN_1466312be(void)

undefined8 FUN_1466312be(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
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



// FUNCTION 146631376 FUN_146631376 body=109 status=ok
// SIG undefined FUN_146631376(void)

void FUN_146631376(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  local_30 = FUN_14477b664(uVar1);
  local_28 = param_2[2];
  FUN_14570615e(param_1,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466313e4 FUN_1466313e4 body=109 status=ok
// SIG undefined FUN_1466313e4(void)

void FUN_1466313e4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  local_30 = FUN_14477b664(uVar1);
  local_28 = param_2[2];
  FUN_145979580(param_1,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14663145e FUN_14663145e body=190 status=ok
// SIG undefined FUN_14663145e(void)

undefined8 FUN_14663145e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x398) != 0) {
    lVar3 = FUN_144a7b4ca();
    lVar1 = *(longlong *)(param_1 + 0x398);
    if (lVar1 != 0) {
      uVar5 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1466314fb;
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        plVar4 = (longlong *)FUN_14042ada0(lVar1);
        if (plVar4 != (longlong *)0x0) {
          lVar3 = (**(code **)(*plVar4 + 0x3a0))(plVar4);
          if (lVar3 != 0) {
            local_1c = FUN_141068a6c(lVar1);
            uVar5 = FUN_140d17acc(lVar3);
            goto LAB_1466314fb;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_1466314fb:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14663154e FUN_14663154e body=29 status=ok
// SIG undefined FUN_14663154e(void)

undefined8 FUN_14663154e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663156c FUN_14663156c body=38 status=ok
// SIG undefined FUN_14663156c(void)

undefined8 FUN_14663156c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_OnCharacterSelected",1);
  return param_2;
}



// FUNCTION 146631592 FUN_146631592 body=93 status=ok
// SIG undefined FUN_146631592(void)

void FUN_146631592(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b993e90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1466315f0 FUN_1466315f0 body=29 status=ok
// SIG undefined FUN_1466315f0(void)

undefined8 FUN_1466315f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663160e FUN_14663160e body=38 status=ok
// SIG undefined FUN_14663160e(void)

undefined8 FUN_14663160e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_PrepareForCutscene",1);
  return param_2;
}



// FUNCTION 146631634 FUN_146631634 body=29 status=ok
// SIG undefined FUN_146631634(void)

undefined8 FUN_146631634(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146631652 FUN_146631652 body=38 status=ok
// SIG undefined FUN_146631652(void)

undefined8 FUN_146631652(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_UpdateWaitingOnOthersIndicatorVisibility",1);
  return param_2;
}



// FUNCTION 146631678 FUN_146631678 body=29 status=ok
// SIG undefined FUN_146631678(void)

undefined8 FUN_146631678(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146631696 FUN_146631696 body=38 status=ok
// SIG undefined FUN_146631696(void)

undefined8 FUN_146631696(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGbxUIEvent_CSP_SetWidgetActive",1);
  return param_2;
}



// FUNCTION 1466316bc FUN_1466316bc body=56 status=ok
// SIG undefined FUN_1466316bc(void)

longlong FUN_1466316bc(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x30);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466316f4 FUN_1466316f4 body=38 status=ok
// SIG undefined FUN_1466316f4(void)

undefined8 FUN_1466316f4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_14a491dee,1);
  return param_2;
}



// FUNCTION 14663171a FUN_14663171a body=29 status=ok
// SIG undefined FUN_14663171a(void)

bool FUN_14663171a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146631738 FUN_146631738 body=26 status=ok
// SIG undefined FUN_146631738(void)

bool FUN_146631738(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146631752 FUN_146631752 body=24 status=ok
// SIG undefined FUN_146631752(void)

bool FUN_146631752(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663176a FUN_14663176a body=24 status=ok
// SIG undefined FUN_14663176a(void)

bool FUN_14663176a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146631782 FUN_146631782 body=24 status=ok
// SIG undefined FUN_146631782(void)

bool FUN_146631782(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663179a FUN_14663179a body=29 status=ok
// SIG undefined FUN_14663179a(void)

undefined8 FUN_14663179a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466317b8 FUN_1466317b8 body=85 status=ok
// SIG undefined FUN_1466317b8(void)

void FUN_1466317b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994790;
  return;
}



// FUNCTION 14663180e FUN_14663180e body=29 status=ok
// SIG undefined FUN_14663180e(void)

undefined8 FUN_14663180e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663182c FUN_14663182c body=29 status=ok
// SIG undefined FUN_14663182c(void)

undefined8 FUN_14663182c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663184a FUN_14663184a body=206 status=ok
// SIG undefined FUN_14663184a(void)

undefined8 * FUN_14663184a(undefined8 *param_1)

{
  FUN_1409e1656();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b994860;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 0xbf800000bf800000;
  param_1[0xe] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0x100;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0x42c8000042c80000;
  return param_1;
}



// FUNCTION 146631918 FUN_146631918 body=29 status=ok
// SIG undefined FUN_146631918(void)

undefined8 FUN_146631918(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146631936 FUN_146631936 body=29 status=ok
// SIG undefined FUN_146631936(void)

bool FUN_146631936(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146631954 FUN_146631954 body=26 status=ok
// SIG undefined FUN_146631954(void)

bool FUN_146631954(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14663196e FUN_14663196e body=24 status=ok
// SIG undefined FUN_14663196e(void)

bool FUN_14663196e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146631986 FUN_146631986 body=29 status=ok
// SIG undefined FUN_146631986(void)

bool FUN_146631986(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1466319a4 FUN_1466319a4 body=26 status=ok
// SIG undefined FUN_1466319a4(void)

bool FUN_1466319a4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1466319be FUN_1466319be body=29 status=ok
// SIG undefined FUN_1466319be(void)

bool FUN_1466319be(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1466319dc FUN_1466319dc body=29 status=ok
// SIG undefined FUN_1466319dc(void)

bool FUN_1466319dc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1466319fa FUN_1466319fa body=29 status=ok
// SIG undefined FUN_1466319fa(void)

bool FUN_1466319fa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146631a18 FUN_146631a18 body=26 status=ok
// SIG undefined FUN_146631a18(void)

bool FUN_146631a18(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146631a32 FUN_146631a32 body=24 status=ok
// SIG undefined FUN_146631a32(void)

bool FUN_146631a32(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146631a4a FUN_146631a4a body=24 status=ok
// SIG undefined FUN_146631a4a(void)

bool FUN_146631a4a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146631a62 FUN_146631a62 body=158 status=ok
// SIG undefined FUN_146631a62(void)

bool FUN_146631a62(longlong param_1,undefined8 param_2)

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



// FUNCTION 146631b02 FUN_146631b02 body=24 status=ok
// SIG undefined FUN_146631b02(void)

bool FUN_146631b02(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146631b1a FUN_146631b1a body=29 status=ok
// SIG undefined FUN_146631b1a(void)

bool FUN_146631b1a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146631b38 FUN_146631b38 body=24 status=ok
// SIG undefined FUN_146631b38(void)

bool FUN_146631b38(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146631b50 FUN_146631b50 body=24 status=ok
// SIG undefined FUN_146631b50(void)

bool FUN_146631b50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146631b68 FUN_146631b68 body=101 status=ok
// SIG undefined FUN_146631b68(void)

void FUN_146631b68(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b995020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146631bd2 FUN_146631bd2 body=24 status=ok
// SIG undefined FUN_146631bd2(void)

bool FUN_146631bd2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146631bea FUN_146631bea body=141 status=ok
// SIG undefined FUN_146631bea(void)

void FUN_146631bea(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = (ulonglong)uVar1;
      }
    }
    else {
      uVar2 = (uVar2 * 3 >> 3) + uVar2 + 0x10;
    }
    uVar2 = FUN_144a3809e(uVar2 * 0x28,8);
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 / 0x28)) {
      uVar3 = uVar2 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,0,uVar3,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar2);
}



// FUNCTION 146631c78 FUN_146631c78 body=141 status=ok
// SIG undefined FUN_146631c78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146631c78(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446ddc76(&local_18,"Encounter",1);
  FUN_14147d486(&DAT_14cbcfdb8,local_18,3);
  _DAT_14cbcfdb8 = &PTR_FUN_14b9964f8;
  FUN_140834d1a(&DAT_14cbcfdb8,L"Events relevant combat encounters.");
  DAT_14cbcfe15 = 1;
  _DAT_14cbcfe18 = 4;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146631d06 FUN_146631d06 body=181 status=ok
// SIG undefined FUN_146631d06(void)

void FUN_146631d06(longlong param_1,longlong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == 0) && (uVar3 = (ulonglong)*(int *)(param_1 + 0x38), 0 < (longlong)uVar3)) {
    lVar4 = uVar3 * 0x150;
    do {
      lVar4 = lVar4 + -0x150;
      if ((longlong)uVar3 <= (longlong)*(int *)(param_1 + 0x38)) {
        local_38 = 0;
        uVar2 = FUN_14479d2ce(*(longlong *)(param_1 + 0x30) + lVar4);
        FUN_145c34e64(param_1,uVar2,1,&local_38);
      }
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  FUN_141245f18(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146631dc2 FUN_146631dc2 body=76 status=ok
// SIG undefined FUN_146631dc2(void)

undefined8 FUN_146631dc2(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_14597feea(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000146631e03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 146631e0e FUN_146631e0e body=44 status=ok
// SIG undefined FUN_146631e0e(void)

void FUN_146631e0e(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  FUN_1446e7478(param_3,param_2,uVar1,0);
  return;
}



// FUNCTION 146631e3a FUN_146631e3a body=254 status=ok
// SIG undefined FUN_146631e3a(void)

undefined8
FUN_146631e3a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b3ecf50;
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
  *local_48 = &PTR_FUN_14b9968e0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1412a3750(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146631f3a FUN_146631f3a body=125 status=ok
// SIG undefined FUN_146631f3a(void)

void FUN_146631f3a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_38 = (undefined4)local_48;
  uStack_34 = local_48._4_4_;
  uStack_30 = (undefined4)uStack_40;
  uStack_2c = uStack_40._4_4_;
  FUN_1403350f6(param_1);
  FUN_144a7b126(param_1,&local_21,1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146631fb8 FUN_146631fb8 body=176 status=ok
// SIG undefined FUN_146631fb8(void)

undefined8 * FUN_146631fb8(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd0a18) {
    FUN_144b3d300(&DAT_14cbd0a18);
    if (DAT_14cbd0a18 == -1) {
      builtin_wcsncpy(local_38 + 8,L"nSet",5);
      builtin_wcsncpy(local_38,L"OnOakPaw",8);
      FUN_1446f470e(&DAT_14cbd0a10,local_38,1);
      _Init_thread_footer(&DAT_14cbd0a18);
    }
  }
  *param_1 = DAT_14cbd0a10;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14663206a FUN_14663206a body=254 status=ok
// SIG undefined FUN_14663206a(void)

undefined8
FUN_14663206a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14a1c8700;
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
  *local_48 = &PTR_FUN_14b996970;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140c67310(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14663217a FUN_14663217a body=28 status=ok
// SIG undefined FUN_14663217a(void)

undefined8 FUN_14663217a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1403b0700();
  return CONCAT71((int7)((ulonglong)*(longlong *)(lVar1 + 0x38) >> 8),
                  *(longlong *)(lVar1 + 0x38) == DAT_14cb71810);
}



// FUNCTION 146632196 FUN_146632196 body=235 status=ok
// SIG undefined FUN_146632196(void)

byte FUN_146632196(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [44];
  short local_1c [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_1447210f0();
  if (((((lVar2 == 0) || (lVar2 = FUN_1400f6f32(lVar2), lVar2 == 0)) ||
       (*(longlong *)(lVar2 + 0x68) == 0)) ||
      ((FUN_14042af24(*(longlong *)(lVar2 + 0x68),local_1c,param_1), local_1c[0] < 0 ||
       (DAT_14cb8d3c0 == 0)))) ||
     ((lVar2 = FUN_1407d7c9c(DAT_14cb8d3c0,&DAT_14cbca7e8), lVar2 == 0 ||
      ((DAT_14cb8d3c0 == 0 || (lVar3 = FUN_1409503e6(DAT_14cb8d3c0,lVar2), lVar3 == 0)))))) {
    bVar1 = 0;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x7e0))(param_1,lVar3 + 0x1c);
    bVar1 = (byte)param_1;
    if (lVar3 != 0) {
      bVar1 = FUN_14095026a(lVar3,lVar2);
    }
    bVar1 = lVar3 != 0 & bVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar1;
}



// FUNCTION 146632282 FUN_146632282 body=128 status=ok
// SIG undefined FUN_146632282(void)

byte FUN_146632282(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((((DAT_14cb8d3c0 != 0) && (lVar2 = FUN_1407d7c9c(DAT_14cb8d3c0,&DAT_14cbca810), lVar2 != 0))
      && (DAT_14cb8d3c0 != 0)) && (lVar3 = FUN_1409503e6(DAT_14cb8d3c0,lVar2), lVar3 != 0)) {
    lVar3 = (**(code **)(*param_1 + 0x7e0))(param_1,lVar3 + 0x1c);
    bVar1 = (byte)param_1;
    if (lVar3 != 0) {
      bVar1 = FUN_14095026a(lVar3,lVar2);
    }
    return lVar3 != 0 & bVar1;
  }
  return 0;
}



// FUNCTION 146632302 FUN_146632302 body=58 status=ok
// SIG undefined FUN_146632302(void)

void FUN_146632302(longlong param_1)

{
  FUN_14474dad8(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  FUN_148949f3e(param_1 + 8,0);
  return;
}



// FUNCTION 14663233c FUN_14663233c body=189 status=ok
// SIG undefined FUN_14663233c(void)

void FUN_14663233c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*param_1 + 0x6b8))();
  if (lVar1 != 0) {
    lVar2 = FUN_14099530a();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      plVar3 = (longlong *)param_1[0x7a];
      if (plVar3 == (longlong *)0x0) {
        local_38 = 0;
        local_34 = 1;
        local_30 = 0x40000000;
        lVar1 = *param_1;
        plVar3 = param_1;
      }
      else {
        local_28 = 0;
        local_24 = 1;
        local_20 = 0x40000000;
        lVar1 = *param_1;
      }
      (**(code **)(lVar1 + 0xe38))(param_1,plVar3);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466323fa FUN_1466323fa body=146 status=ok
// SIG undefined FUN_1466323fa(void)

void FUN_1466323fa(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 0x150,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0xc30c30c30c30c31),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x150,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14663248c FUN_14663248c body=329 status=ok
// SIG undefined FUN_14663248c(void)

void FUN_14663248c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    plVar1 = (longlong *)(param_1 + 8);
    (**(code **)(*param_3 + 0x28))(param_3);
    lVar2 = param_1 + 0x18;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = lVar2;
    if (*(int *)(param_1 + 0x30) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar6 = *(int *)(param_1 + 0x30);
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    uVar4 = local_70;
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar5 = local_70._4_4_;
    local_88 = plVar1;
    if ((local_70._4_4_ != iVar6) || (local_70 = uVar4, uStack_58 != lVar2)) {
      do {
        local_70 = uVar4;
        lVar3 = *local_88 + (longlong)iVar5 * 0x14;
        (**(code **)(*param_3 + 0x18))(param_3,param_2);
        (**(code **)(*param_3 + 0x70))(param_3,lVar3,*(undefined4 *)(lVar3 + 8));
        (**(code **)(*param_3 + 0x20))(param_3);
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_88 != plVar1 ||
               (CONCAT44(uStack_74,uStack_78) != lVar2 || local_70._4_4_ != iVar6));
    }
    (**(code **)(*param_3 + 0x30))(param_3);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466325d6 FUN_1466325d6 body=29 status=ok
// SIG undefined FUN_1466325d6(void)

undefined8 FUN_1466325d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466325f4 FUN_1466325f4 body=24 status=ok
// SIG undefined FUN_1466325f4(void)

bool FUN_1466325f4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663260c FUN_14663260c body=24 status=ok
// SIG undefined FUN_14663260c(void)

bool FUN_14663260c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146632624 FUN_146632624 body=24 status=ok
// SIG undefined FUN_146632624(void)

bool FUN_146632624(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663263c FUN_14663263c body=101 status=ok
// SIG undefined FUN_14663263c(void)

void FUN_14663263c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996ab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1466326a2 FUN_1466326a2 body=101 status=ok
// SIG undefined FUN_1466326a2(void)

void FUN_1466326a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996b90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146632708 FUN_146632708 body=24 status=ok
// SIG undefined FUN_146632708(void)

bool FUN_146632708(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146632720 FUN_146632720 body=101 status=ok
// SIG undefined FUN_146632720(void)

void FUN_146632720(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b996c70;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b996c00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14663279a FUN_14663279a body=101 status=ok
// SIG undefined FUN_14663279a(void)

void FUN_14663279a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b996eb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146632800 FUN_146632800 body=446 status=ok
// SIG undefined FUN_146632800(void)

undefined8 * FUN_146632800(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_108 [40];
  longlong local_e0;
  int local_d8;
  undefined2 *local_d0;
  undefined2 *local_c8;
  ulonglong *local_c0;
  char local_b8;
  undefined2 local_b0 [64];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    local_d0 = local_b0;
    local_b8 = '\0';
    local_c0 = &local_30;
    local_c8 = local_d0;
    FUN_1400021e4(param_2,&local_e0);
    iVar1 = local_d8 + -1;
    if (local_d8 == 0) {
      iVar1 = 0;
    }
    FUN_1449668a2(&local_d0,local_e0,iVar1);
    if (local_e0 != 0) {
      FUN_1400020a8();
    }
    if (local_c0 <= local_c8 + 1) {
      FUN_140213274(&local_d0,1);
    }
    *local_c8 = 0x5f;
    local_c8 = local_c8 + 1;
    FUN_140212e80(&local_d0,&DAT_14aaec3c4,
                  (int)(char)((char)param_3 + (char)((int)param_3 / 0x1a) * -0x1a + 'a'));
    if (0x19 < (int)param_3) {
      do {
        uVar4 = param_3 & 0xffffffff;
        uVar3 = (uint)param_3;
        param_3 = uVar4 / 0x1a;
        uVar2 = (int)(uVar4 / 0x1a) - 1;
        FUN_140212e80(&local_d0,&DAT_14aaec3c4,
                      ((int)(uVar4 / 0x1a) - ((uVar2 / 0x1a) * 0x19 + uVar2 / 0x1a)) + 0x60);
      } while (0x2a3 < uVar3);
    }
    *local_c8 = 0;
    FUN_1446f470e(param_1,local_d0,1);
    if (local_b8 == '\x01') {
      FUN_1400020a8(local_d0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1466329c0 FUN_1466329c0 body=39 status=ok
// SIG undefined FUN_1466329c0(void)

void FUN_1466329c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145723659();
  FUN_1409f75d4(param_2,&DAT_14cbd0da0,uVar1,0);
  return;
}



// FUNCTION 1466329e8 FUN_1466329e8 body=141 status=ok
// SIG undefined FUN_1466329e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1466329e8(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446ddc76(&local_18,"PoA_State",1);
  FUN_14147d486(&DAT_14cbd0df0,local_18,3);
  _DAT_14cbd0df0 = &PTR_FUN_14b999618;
  FUN_140834d1a(&DAT_14cbd0df0,L"Tracks state of PoAs.");
  _DAT_14cbd0e50 = 1;
  DAT_14cbd0e4d = 1;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146632a76 FUN_146632a76 body=26 status=ok
// SIG undefined FUN_146632a76(void)

void FUN_146632a76(undefined8 param_1)

{
  FUN_141499196();
  FUN_1457e2ef2(param_1);
  return;
}



// FUNCTION 146632a90 FUN_146632a90 body=929 status=ok
// SIG undefined FUN_146632a90(void)

void FUN_146632a90(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_e8 [40];
  void *local_c0;
  int local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar5 = (longlong *)FUN_145a8ada2();
  lVar10 = plVar5[0x22];
  if (lVar10 == 0) {
    (**(code **)(*plVar5 + 1000))(plVar5);
    lVar10 = plVar5[0x22];
    if (lVar10 == 0) goto LAB_146632c2c;
  }
  local_98 = 0;
  lStack_90 = 0;
  local_88 = 0;
  cVar4 = *(char *)(param_1 + 8);
  uVar6 = FUN_140927942();
  FUN_14477b664(uVar6);
  if (cVar4 == '\x01') {
    puVar9 = (undefined8 *)(lVar10 + 0x50);
    lVar8 = *(longlong *)(lVar10 + 0x58);
    lVar11 = 0x60;
  }
  else {
    puVar9 = (undefined8 *)(lVar10 + 0x38);
    lVar8 = *(longlong *)(lVar10 + 0x40);
    lVar11 = 0x48;
  }
  if (lVar8 == 0) {
    lVar8 = FUN_1458f96d4();
  }
  uVar6 = *puVar9;
  uVar7 = FUN_14477b664(lVar8);
  uVar2 = *(undefined8 *)(lVar10 + lVar11);
  local_80 = uVar6;
  uVar6 = FUN_14477b664(uVar7);
  local_78 = FUN_14477b664(uVar6);
  uStack_70 = uVar2;
  FUN_14604893f(&local_b0,param_3);
  if (local_a8 == 0) {
    uVar6 = FUN_140355b7c();
    local_a8 = FUN_14477b664(uVar6);
  }
  if (local_a0 == 0) {
    if ((local_a8 != 0) && (local_b0 != 0)) {
      plVar5 = *(longlong **)(local_a8 + 0xb8);
      if ((plVar5 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar4 == '\0')) {
        local_a0 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar5 + 0x110))(plVar5);
        local_a0 = FUN_144aff482(uVar6,&local_b0);
        if (local_a0 != 0) goto LAB_146632b74;
      }
    }
    plVar5 = (longlong *)thunk_FUN_14050fd64();
    puVar9 = (undefined8 *)(**(code **)(*plVar5 + 0x570))(plVar5);
    local_c0 = (void *)0x0;
    local_b8 = *(int *)(puVar9 + 1);
    lVar10 = (longlong)local_b8;
    pvVar3 = (void *)*puVar9;
    if (lVar10 != 0) {
      FUN_1401b309e(&local_c0,local_b8,0);
      memcpy(local_c0,pvVar3,lVar10 << 3);
      pvVar3 = local_c0;
      lVar10 = (longlong)local_b8;
      if (lVar10 != 0) {
        lVar8 = 0;
        do {
          lVar11 = *(longlong *)((longlong)pvVar3 + lVar8);
          if (local_98 != lVar11) {
            local_88 = 0;
          }
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          local_98 = lVar11;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_1458fe376(param_2,iVar1);
          }
          lVar11 = *param_2;
          FUN_14151bf7c((longlong)iVar1 * 0x30 + lVar11,&local_98);
          FUN_14151bf7c((longlong)iVar1 * 0x30 + lVar11 + 0x18,&local_80);
          local_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          lVar8 = lVar8 + 8;
        } while (lVar10 * 8 != lVar8);
      }
      if (local_c0 != (void *)0x0) {
        FUN_1400020a8(local_c0);
      }
    }
  }
  else {
LAB_146632b74:
    if (lStack_90 == 0) {
      uVar6 = FUN_140927942();
      lStack_90 = FUN_14477b664(uVar6);
    }
    lVar10 = local_a8;
    if (local_a8 == 0) {
      lVar10 = FUN_140355b7c();
    }
    lVar8 = FUN_14477b664(lVar10);
    lVar10 = local_a0;
    if (local_98 != local_b0) {
      local_88 = 0;
    }
    local_98 = local_b0;
    if (lStack_90 != lVar8) {
      local_88 = 0;
    }
    uVar6 = FUN_14477b664(lVar8);
    lStack_90 = FUN_14477b664(uVar6);
    local_88 = lVar10;
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1458fe376(param_2,iVar1);
    }
    lVar10 = *param_2;
    FUN_14151bf7c(lVar10 + (longlong)iVar1 * 0x30,&local_98);
    FUN_14151bf7c(lVar10 + (longlong)iVar1 * 0x30 + 0x18,&local_80);
  }
LAB_146632c2c:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146632e3a FUN_146632e3a body=322 status=ok
// SIG undefined FUN_146632e3a(void)

longlong FUN_146632e3a(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)FUN_145a8ada2();
  lVar5 = plVar2[0x22];
  if (lVar5 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar5 = plVar2[0x22];
    if (lVar5 == 0) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    lVar4 = *(longlong *)(lVar5 + 0x58);
    if (lVar4 == 0) {
      uVar3 = FUN_1458f96d4();
      lVar4 = FUN_14477b664(uVar3);
      *(longlong *)(lVar5 + 0x58) = lVar4;
    }
    if (*(longlong *)(lVar5 + 0x60) != 0) {
      return *(longlong *)(lVar5 + 0x60);
    }
    if (lVar4 == 0) {
      return 0;
    }
    if (*(longlong *)(lVar5 + 0x50) != 0) {
      plVar2 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar1 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar1 == '\0')) {
        lVar4 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(lVar5 + 0x50));
      }
      *(longlong *)(lVar5 + 0x60) = lVar4;
      return lVar4;
    }
    return 0;
  }
  lVar4 = *(longlong *)(lVar5 + 0x40);
  if (lVar4 == 0) {
    uVar3 = FUN_1458f96d4();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(lVar5 + 0x40) = lVar4;
  }
  if (*(longlong *)(lVar5 + 0x48) != 0) {
    return *(longlong *)(lVar5 + 0x48);
  }
  if (lVar4 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar5 + 0x38) != 0) {
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar1 == '\0')) {
      lVar4 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar4 = FUN_144aff482(uVar3,(longlong *)(lVar5 + 0x38));
    }
    *(longlong *)(lVar5 + 0x48) = lVar4;
    return lVar4;
  }
  return 0;
}



// FUNCTION 146632f7c FUN_146632f7c body=40 status=ok
// SIG undefined FUN_146632f7c(void)

undefined8 FUN_146632f7c(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_144a2383e();
  if (lVar1 != 0) {
    uVar2 = FUN_145cc8dbe(lVar1,&DAT_14cbca8a0);
    return uVar2;
  }
  return 0;
}



// FUNCTION 146632fa4 FUN_146632fa4 body=140 status=ok
// SIG undefined FUN_146632fa4(void)

void FUN_146632fa4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c2c4ea();
  FUN_1446f470e(&local_38,L"Sliders",1);
  uVar1 = FUN_14593f59c();
  FUN_14593f59c();
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



// FUNCTION 146633038 FUN_146633038 body=33 status=ok
// SIG undefined FUN_146633038(void)

void FUN_146633038(longlong param_1)

{
  FUN_140115e24();
  FUN_1404d4e8e(param_1 + 0x3c0,param_1);
  return;
}



// FUNCTION 14663305a FUN_14663305a body=719 status=ok
// SIG undefined FUN_14663305a(void)

undefined8 * FUN_14663305a(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar8 = (longlong *)FUN_14001cc68(0x198);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b99a2c0;
  plVar1 = plVar8 + 2;
  memset(plVar1,0,0x188);
  FUN_145c42fa8(plVar1);
  plVar8[2] = (longlong)&PTR_FUN_14b627210;
  plVar8[0x2f] = 0;
  plVar8[0x30] = 0;
  plVar8[0x31] = 0;
  plVar8[0x32] = 0;
  lVar5 = param_3[3];
  plVar6 = (longlong *)param_3[4];
  if (plVar6 == (longlong *)0x0) {
    plVar8[0x2f] = lVar5;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    plVar9 = (longlong *)plVar8[0x30];
    plVar8[0x2f] = lVar5;
    if (plVar6 == plVar9) {
      LOCK();
      plVar9 = plVar6 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
        plVar9 = plVar6;
joined_r0x00014663321e:
        if (iVar4 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    else {
      plVar8[0x30] = (longlong)plVar6;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar3 = (int *)((longlong)plVar9 + 0xc);
          *piVar3 = *piVar3 + -1;
          iVar4 = *piVar3;
          UNLOCK();
          goto joined_r0x00014663321e;
        }
      }
    }
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  cVar7 = (**(code **)(*(longlong *)*param_3 + 0x50))();
  if (cVar7 == '\0') goto LAB_1466331ad;
  FUN_145c43050(param_1 + 0x1c0,&local_50,param_3);
  plVar6 = local_48;
  if (local_48 == (longlong *)0x0) {
    plVar8[0x31] = local_50;
    plVar9 = (longlong *)plVar8[0x32];
    if (plVar9 != (longlong *)0x0) {
      plVar8[0x32] = 0;
LAB_14663329a:
      LOCK();
      plVar6 = plVar9 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar3 = (int *)((longlong)plVar9 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
joined_r0x0001466332d5:
        if (iVar4 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    plVar8[0x31] = local_50;
    plVar9 = (longlong *)plVar8[0x32];
    if (local_48 == plVar9) {
      LOCK();
      plVar9 = local_48 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
        plVar9 = plVar6;
        goto joined_r0x0001466332d5;
      }
    }
    else {
      plVar8[0x32] = (longlong)local_48;
      if (plVar9 != (longlong *)0x0) goto LAB_14663329a;
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_48 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar3 = (int *)((longlong)local_48 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
LAB_1466331ad:
  *param_2 = plVar1;
  param_2[1] = plVar8;
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
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14663332a FUN_14663332a body=127 status=ok
// SIG undefined FUN_14663332a(void)

bool FUN_14663332a(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  lVar2 = DAT_14cbd2940;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (lVar1 == DAT_14cbd2940) {
    local_38 = *param_3;
    local_30 = param_3[1];
    FUN_1403350f6(param_1 + 0x250);
    FUN_144a7b126(param_1 + 0x250,&local_21,1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1 == lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466333aa FUN_1466333aa body=386 status=ok
// SIG undefined FUN_1466333aa(void)

undefined8 * FUN_1466333aa(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 ***pppuVar6;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [40];
  undefined4 local_68;
  undefined8 **local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar5 = (longlong *)FUN_14001cc68(0x188);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b99a940;
  plVar1 = plVar5 + 2;
  memset(plVar1,0,0x178);
  FUN_145c42fa8(plVar1);
  plVar5[0x2f] = 0;
  plVar5[2] = (longlong)&PTR_FUN_14b633a20;
  *(undefined4 *)(plVar5 + 0x30) = 0;
  local_90[0] = 0;
  local_68 = 0;
  FUN_14575a19a(local_90,0);
  FUN_1448729ea(param_1 + 400,local_60,local_90);
  uVar4 = FUN_14005fbd2(local_60,10);
  *(undefined4 *)(plVar5 + 0x30) = uVar4;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar6 = local_60;
    if (0x18 < local_48) {
      pppuVar6 = (undefined8 ***)local_60[0];
    }
    (*pcVar3)(pppuVar6);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  FUN_144a5ac3a(local_90);
  *param_2 = plVar1;
  param_2[1] = plVar5;
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
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14663352e FUN_14663352e body=160 status=ok
// SIG undefined FUN_14663352e(void)

undefined8 * FUN_14663352e(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x180);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b99a960;
  plVar1 = plVar3 + 2;
  memset(plVar1,0,0x170);
  FUN_145c42fa8(plVar1);
  plVar3[0x2f] = 0;
  plVar3[2] = (longlong)&PTR_FUN_14b633c30;
  *param_2 = plVar1;
  param_2[1] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 1466335ce FUN_1466335ce body=459 status=ok
// SIG undefined FUN_1466335ce(void)

void FUN_1466335ce(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != 3) {
    FUN_1446efa72(param_1,0,3,0x10);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  puVar4 = (undefined8 *)*param_1;
  FUN_141085fe4(param_2,&local_38);
  plVar2 = local_30;
  if (local_30 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b99aaf0;
    puVar4[3] = local_38;
    puVar4[4] = 0;
    puVar4[5] = param_3;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b99aaf0;
    puVar4[3] = local_38;
    puVar4[4] = local_30;
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = param_3;
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)local_30 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466337ae FUN_1466337ae body=29 status=ok
// SIG undefined FUN_1466337ae(void)

undefined8 FUN_1466337ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466337cc FUN_1466337cc body=66 status=ok
// SIG undefined FUN_1466337cc(void)

undefined8 * FUN_1466337cc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9997c0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663380e FUN_14663380e body=362 status=ok
// SIG undefined FUN_14663380e(void)

undefined8 * FUN_14663380e(undefined8 *param_1)

{
  FUN_1412cbb62();
  *param_1 = &PTR_FUN_14b3e63f0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0xff7fffff00000000;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  param_1[0x45] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined2 *)(param_1 + 0x3b) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  return param_1;
}



// FUNCTION 146633978 FUN_146633978 body=29 status=ok
// SIG undefined FUN_146633978(void)

undefined8 FUN_146633978(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146633996 FUN_146633996 body=29 status=ok
// SIG undefined FUN_146633996(void)

undefined8 FUN_146633996(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466339b4 FUN_1466339b4 body=118 status=ok
// SIG undefined FUN_1466339b4(void)

void FUN_1466339b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a7c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99a300;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146633a2a FUN_146633a2a body=118 status=ok
// SIG undefined FUN_146633a2a(void)

void FUN_146633a2a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a7c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99a7f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146633aa0 FUN_146633aa0 body=300 status=ok
// SIG undefined FUN_146633aa0(void)

longlong * FUN_146633aa0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

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
    *puVar5 = &PTR_LAB_14b3f7890;
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
    *puVar5 = &PTR_FUN_14b99a860;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b3f7890;
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
    *puVar5 = &PTR_FUN_14b99a860;
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



// FUNCTION 146633bcc FUN_146633bcc body=9 status=ok
// SIG undefined FUN_146633bcc(void)

void FUN_146633bcc(longlong param_1)

{
  FUN_145a38fa8(param_1 + 0x10);
  return;
}



// FUNCTION 146633bd6 FUN_146633bd6 body=29 status=ok
// SIG undefined FUN_146633bd6(void)

undefined8 FUN_146633bd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146633bf4 FUN_146633bf4 body=9 status=ok
// SIG undefined FUN_146633bf4(void)

void FUN_146633bf4(longlong param_1)

{
  FUN_145a38fa8(param_1 + 0x10);
  return;
}



// FUNCTION 146633bfe FUN_146633bfe body=29 status=ok
// SIG undefined FUN_146633bfe(void)

undefined8 FUN_146633bfe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146633c1c FUN_146633c1c body=29 status=ok
// SIG undefined FUN_146633c1c(void)

undefined8 FUN_146633c1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146633c3a FUN_146633c3a body=118 status=ok
// SIG undefined FUN_146633c3a(void)

void FUN_146633c3a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99ab80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146633cb0 FUN_146633cb0 body=68 status=ok
// SIG undefined FUN_146633cb0(void)

undefined8 * FUN_146633cb0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99abf0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146633cf4 FUN_146633cf4 body=655 status=ok
// SIG undefined FUN_146633cf4(void)

void FUN_146633cf4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar7 = *(longlong *)(param_1 + 0x198);
  if (lVar7 == 0) {
    uVar3 = FUN_1458b6df2();
    lVar7 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x198) = lVar7;
  }
  lVar4 = *(longlong *)(param_1 + 0x1a0);
  if (((lVar4 != 0) || (lVar4 = 0, lVar7 == 0)) || (*(longlong *)(param_1 + 400) == 0))
  goto LAB_146633d8b;
  plVar11 = *(longlong **)(lVar7 + 0xb8);
  if (plVar11 == (longlong *)0x0) {
LAB_146633f2f:
    lVar4 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar11 + 0x108))(plVar11);
    if (cVar2 == '\0') goto LAB_146633f2f;
    uVar3 = (**(code **)(*plVar11 + 0x110))(plVar11);
    lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 400));
  }
  *(longlong *)(param_1 + 0x1a0) = lVar4;
LAB_146633d8b:
  (**(code **)(*param_2 + 0x10))(param_2,lVar4);
  plVar11 = (longlong *)(param_1 + 0x1a8);
  lVar7 = param_1 + 0x1b8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar7;
  if (*(int *)(param_1 + 0x1d0) == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar10 = *(int *)(param_1 + 0x1d0);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar11;
  if ((iStack_54 != iVar10) || (uStack_60 != lVar7)) {
    do {
      lVar4 = *local_90;
      lVar9 = (longlong)iStack_74 * 0x38;
      lVar6 = *(longlong *)(lVar4 + 0x20 + lVar9);
      if (lVar6 == 0) {
        uVar3 = FUN_1458b6df2();
        lVar6 = FUN_14477b664(uVar3);
        *(longlong *)(lVar9 + 0x20 + lVar4) = lVar6;
      }
      lVar5 = *(longlong *)(lVar4 + 0x28 + lVar9);
      if (((lVar5 == 0) && (lVar5 = 0, lVar6 != 0)) &&
         (plVar8 = (longlong *)(lVar9 + 0x18 + lVar4), *plVar8 != 0)) {
        plVar1 = *(longlong **)(lVar6 + 0xb8);
        local_98 = plVar11;
        if (plVar1 == (longlong *)0x0) {
LAB_146633f36:
          lVar5 = 0;
        }
        else {
          cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
          if (cVar2 == '\0') goto LAB_146633f36;
          uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar3,plVar8);
        }
        *(longlong *)(lVar9 + 0x28 + lVar4) = lVar5;
        plVar11 = local_98;
      }
      (**(code **)(*param_2 + 0x10))(param_2,lVar5);
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (((iStack_74 != iVar10) || (CONCAT44(uStack_7c,uStack_80) != lVar7)) ||
            (local_90 != plVar11));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146633f84 FUN_146633f84 body=149 status=ok
// SIG undefined FUN_146633f84(void)

undefined8 * FUN_146633f84(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x178);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b99bc30;
  plVar1 = plVar3 + 2;
  memset(plVar1,0,0x168);
  FUN_145c42fa8(plVar1);
  plVar3[2] = (longlong)&PTR_FUN_14b6352d0;
  *param_2 = plVar1;
  param_2[1] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 14663401a FUN_14663401a body=127 status=ok
// SIG undefined FUN_14663401a(void)

undefined8 * FUN_14663401a(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  lVar5 = FUN_1403ca43f();
  *param_2 = *(undefined8 *)(lVar5 + 0x180);
  uVar2 = *(undefined4 *)(lVar5 + 0x18c);
  uVar3 = *(undefined4 *)(lVar5 + 400);
  uVar4 = *(undefined4 *)(lVar5 + 0x194);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar5 + 0x188);
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
  *(undefined4 *)(param_2 + 2) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
  param_2[3] = 0;
  iVar1 = *(int *)(lVar5 + 0x1a0);
  _Src = *(void **)(lVar5 + 0x198);
  *(int *)(param_2 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 3,iVar1,0);
    memcpy((void *)param_2[3],_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 14663409a FUN_14663409a body=71 status=ok
// SIG undefined FUN_14663409a(void)

void FUN_14663409a(longlong param_1)

{
  longlong lVar1;
  
  if ((((*(byte *)(param_1 + 0x30) & 2) != 0) && (*(longlong *)(param_1 + 400) != 0)) &&
     (*(longlong *)(param_1 + 0x180) != 0)) {
    lVar1 = FUN_1403ca30c(param_1);
    if (lVar1 != 0) {
      FUN_1458a0064(*(undefined8 *)(param_1 + 400));
      return;
    }
  }
  return;
}



// FUNCTION 1466340fa FUN_1466340fa body=50 status=ok
// SIG undefined FUN_1466340fa(void)

void FUN_1466340fa(longlong param_1)

{
  FUN_145c71034();
  if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  *(longlong *)(param_1 + 0x240) = param_1;
  return;
}



// FUNCTION 14663412c FUN_14663412c body=131 status=ok
// SIG undefined FUN_14663412c(void)

void FUN_14663412c(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_2 + 0x20) == DAT_14cbd2cb0) {
    local_28 = *param_3;
    local_20 = param_3[1];
    FUN_1403350f6(param_1 + 0x70);
    FUN_144a7b126(param_1 + 0x70,&local_11,1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_143e2f022(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466341b8 FUN_1466341b8 body=56 status=ok
// SIG undefined FUN_1466341b8(void)

void FUN_1466341b8(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_1403ae288(param_1 + 0xc0);
  if (cVar2 == '\0') {
    return;
  }
  uVar1 = FUN_14008e0ae(param_1 + 0xc0);
  FUN_148856710(uVar1,1);
  return;
}



// FUNCTION 1466341f0 FUN_1466341f0 body=68 status=ok
// SIG undefined FUN_1466341f0(void)

void FUN_1466341f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if ((*(byte *)(lVar3 + 0x40) & 1) == 0) {
        *(byte *)(lVar3 + 0x40) = *(byte *)(lVar3 + 0x40) | 1;
        FUN_140834d9a(lVar3 + 0x28);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 146634234 FUN_146634234 body=175 status=ok
// SIG undefined FUN_146634234(void)

undefined8 FUN_146634234(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (lVar1 == DAT_14cbd2e70) {
    param_1 = param_1 + 0x458;
  }
  else if (lVar1 == DAT_14cbd2e78) {
    param_1 = param_1 + 0x478;
  }
  else {
    if (lVar1 != DAT_14cbd2e88) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    param_1 = param_1 + 0x488;
  }
  local_38 = *param_3;
  local_30 = param_3[1];
  FUN_1403350f6(param_1);
  FUN_144a7b126(param_1,&local_21,1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466342fa FUN_1466342fa body=528 status=ok
// SIG undefined FUN_1466342fa(void)

longlong * FUN_1466342fa(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  undefined1 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = (**(code **)(*(longlong *)*param_3 + 0x20))();
  if (lVar3 == 0) {
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    FUN_1407ae1a6(lVar3,&local_48,&DAT_14cb8c3a8);
    lVar3 = local_48;
    if (local_48 != 0) {
      FUN_1446ddc76(&local_78,"Offhand",1);
      local_80[0] = FUN_1413030ec(lVar3,&local_78);
      local_68 = param_3[1];
      local_60 = (longlong *)param_3[2];
      if (local_60 == (longlong *)0x0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
        plVar4 = local_60;
      }
      local_50 = (longlong *)FUN_1458d6c53(&local_68,local_80);
      local_58 = local_50 + 2;
      FUN_1458d6d6a();
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
      lVar3 = local_48;
      local_78 = &LAB_140911d30;
      local_70 = 0;
      FUN_1458d6e0c(&local_68,&local_58);
      FUN_1446ddc76(&local_78,"Offhand",1);
      FUN_14109b102(lVar3,local_80,&local_78,&local_68);
      FUN_1449db362(&local_68);
      plVar4 = local_50;
      *param_2 = (longlong)local_58;
      param_2[1] = (longlong)local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
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
      goto LAB_14663445f;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14663445f:
  plVar4 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146634512 FUN_146634512 body=32 status=ok
// SIG undefined FUN_146634512(void)

undefined8 FUN_146634512(undefined8 param_1,undefined8 param_2)

{
  FUN_1447a97f4(param_2,&DAT_14cbd31b0);
  return param_2;
}



// FUNCTION 146634532 FUN_146634532 body=32 status=ok
// SIG undefined FUN_146634532(void)

undefined8 FUN_146634532(undefined8 param_1,undefined8 param_2)

{
  FUN_1447a97f4(param_2,&DAT_14cbd31d8);
  return param_2;
}



// FUNCTION 146634552 FUN_146634552 body=32 status=ok
// SIG undefined FUN_146634552(void)

undefined8 FUN_146634552(undefined8 param_1,undefined8 param_2)

{
  FUN_1447a97f4(param_2,&DAT_14cbd3228);
  return param_2;
}



// FUNCTION 146634572 FUN_146634572 body=91 status=ok
// SIG undefined FUN_146634572(void)

void FUN_146634572(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1405b657a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = FUN_140cf8aa6(lVar1);
      FUN_14485c47a(param_1 + 0x38,uVar3);
      return;
    }
  }
  return;
}



// FUNCTION 1466345ee FUN_1466345ee body=9 status=ok
// SIG undefined FUN_1466345ee(void)

void FUN_1466345ee(longlong param_1)

{
  FUN_145c6f15a(param_1 + 0x10);
  return;
}



// FUNCTION 1466345f8 FUN_1466345f8 body=29 status=ok
// SIG undefined FUN_1466345f8(void)

undefined8 FUN_1466345f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663462e FUN_14663462e body=66 status=ok
// SIG undefined FUN_14663462e(void)

undefined8 * FUN_14663462e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99b7f0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146634670 FUN_146634670 body=29 status=ok
// SIG undefined FUN_146634670(void)

undefined8 FUN_146634670(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663468e FUN_14663468e body=68 status=ok
// SIG undefined FUN_14663468e(void)

undefined8 * FUN_14663468e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99b8f0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466346d2 FUN_1466346d2 body=29 status=ok
// SIG undefined FUN_1466346d2(void)

undefined8 FUN_1466346d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466346f0 FUN_1466346f0 body=29 status=ok
// SIG undefined FUN_1466346f0(void)

undefined8 FUN_1466346f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663470e FUN_14663470e body=29 status=ok
// SIG undefined FUN_14663470e(void)

undefined8 FUN_14663470e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663472c FUN_14663472c body=29 status=ok
// SIG undefined FUN_14663472c(void)

undefined8 FUN_14663472c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663474a FUN_14663474a body=9 status=ok
// SIG undefined FUN_14663474a(void)

void FUN_14663474a(longlong param_1)

{
  FUN_145a38fa8(param_1 + 0x10);
  return;
}



// FUNCTION 146634754 FUN_146634754 body=29 status=ok
// SIG undefined FUN_146634754(void)

undefined8 FUN_146634754(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146634772 FUN_146634772 body=29 status=ok
// SIG undefined FUN_146634772(void)

undefined8 FUN_146634772(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146634790 FUN_146634790 body=66 status=ok
// SIG undefined FUN_146634790(void)

undefined8 * FUN_146634790(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99c010;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466347d2 FUN_1466347d2 body=29 status=ok
// SIG undefined FUN_1466347d2(void)

undefined8 FUN_1466347d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466347f0 FUN_1466347f0 body=29 status=ok
// SIG undefined FUN_1466347f0(void)

undefined8 FUN_1466347f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663480e FUN_14663480e body=29 status=ok
// SIG undefined FUN_14663480e(void)

undefined8 FUN_14663480e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663482c FUN_14663482c body=29 status=ok
// SIG undefined FUN_14663482c(void)

undefined8 FUN_14663482c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663484a FUN_14663484a body=231 status=ok
// SIG undefined FUN_14663484a(void)

longlong * FUN_14663484a(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  *puVar3 = &PTR_LAB_14b99c430;
  puVar3[1] = *param_3;
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
  *puVar3 = &PTR_FUN_14b99c3c0;
  puVar3[3] = uVar4;
  puVar3[4] = plVar5;
  if (plVar5 == (longlong *)0x0) {
    puVar3[5] = FUN_1489857e8;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_1489857e8;
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
  return param_1;
}



// FUNCTION 146634932 FUN_146634932 body=29 status=ok
// SIG undefined FUN_146634932(void)

undefined8 FUN_146634932(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146634950 FUN_146634950 body=29 status=ok
// SIG undefined FUN_146634950(void)

undefined8 FUN_146634950(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663496e FUN_14663496e body=23 status=ok
// SIG undefined FUN_14663496e(void)

undefined1 FUN_14663496e(longlong param_1)

{
  FUN_14053c012(param_1 + 0x98);
  return 1;
}



// FUNCTION 146634986 FUN_146634986 body=29 status=ok
// SIG undefined FUN_146634986(void)

undefined8 FUN_146634986(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466349a4 FUN_1466349a4 body=23 status=ok
// SIG undefined FUN_1466349a4(void)

undefined1 FUN_1466349a4(longlong param_1)

{
  FUN_14053c012(param_1 + 0x98);
  return 1;
}



// FUNCTION 1466349bc FUN_1466349bc body=29 status=ok
// SIG undefined FUN_1466349bc(void)

undefined8 FUN_1466349bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466349da FUN_1466349da body=23 status=ok
// SIG undefined FUN_1466349da(void)

undefined1 FUN_1466349da(longlong param_1)

{
  FUN_14053c012(param_1 + 0x98);
  return 1;
}



// FUNCTION 1466349f2 FUN_1466349f2 body=29 status=ok
// SIG undefined FUN_1466349f2(void)

undefined8 FUN_1466349f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146634a10 FUN_146634a10 body=23 status=ok
// SIG undefined FUN_146634a10(void)

undefined1 FUN_146634a10(longlong param_1)

{
  FUN_14053c012(param_1 + 0x98);
  return 1;
}



// FUNCTION 146634a28 FUN_146634a28 body=87 status=ok
// SIG undefined FUN_146634a28(void)

undefined8 FUN_146634a28(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a2f878();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) && (*param_3 != 0)) {
      uVar2 = FUN_14480f766(param_2 + 0x3fa8);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 146634a80 FUN_146634a80 body=29 status=ok
// SIG undefined FUN_146634a80(void)

undefined8 FUN_146634a80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146634a9e FUN_146634a9e body=23 status=ok
// SIG undefined FUN_146634a9e(void)

undefined1 FUN_146634a9e(longlong param_1)

{
  FUN_14053c012(param_1 + 0x98);
  return 1;
}



// FUNCTION 146634ab6 FUN_146634ab6 body=87 status=ok
// SIG undefined FUN_146634ab6(void)

undefined8 FUN_146634ab6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a2f878();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) && (*param_3 != 0)) {
      uVar2 = FUN_14480f766(param_2 + 0x6e58);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 146634b0e FUN_146634b0e body=29 status=ok
// SIG undefined FUN_146634b0e(void)

undefined8 FUN_146634b0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146634b2c FUN_146634b2c body=23 status=ok
// SIG undefined FUN_146634b2c(void)

undefined1 FUN_146634b2c(longlong param_1)

{
  FUN_14053c012(param_1 + 0x98);
  return 1;
}



// FUNCTION 146634b44 FUN_146634b44 body=95 status=ok
// SIG undefined FUN_146634b44(void)

ulonglong FUN_146634b44(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  byte bVar2;
  longlong in_RAX;
  byte bVar3;
  undefined7 uVar4;
  
  if (param_2 != 0) {
    in_RAX = FUN_144a2f878();
    piVar1 = (int *)(in_RAX + 0x38);
    if ((*piVar1 <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (in_RAX = in_RAX + 0x30,
       *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*piVar1 * 8) ==
       in_RAX)) {
      uVar4 = (undefined7)((ulonglong)param_3 >> 8);
      bVar3 = 1;
      if (*param_3 == 0) {
        bVar2 = 0;
      }
      else {
        bVar2 = FUN_14480f766(param_2 + 0x6970);
      }
      goto LAB_146634b8f;
    }
  }
  bVar2 = (byte)in_RAX;
  bVar3 = 0;
  uVar4 = 0;
LAB_146634b8f:
  return CONCAT71(uVar4,bVar3 & bVar2) & 0xffffffff;
}



// FUNCTION 146634ba4 FUN_146634ba4 body=29 status=ok
// SIG undefined FUN_146634ba4(void)

undefined8 FUN_146634ba4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146634bc2 FUN_146634bc2 body=23 status=ok
// SIG undefined FUN_146634bc2(void)

undefined1 FUN_146634bc2(longlong param_1)

{
  FUN_14053c012(param_1 + 0x98);
  return 1;
}



// FUNCTION 146634bda FUN_146634bda body=95 status=ok
// SIG undefined FUN_146634bda(void)

ulonglong FUN_146634bda(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  byte bVar2;
  longlong in_RAX;
  byte bVar3;
  undefined7 uVar4;
  
  if (param_2 != 0) {
    in_RAX = FUN_144a2f878();
    piVar1 = (int *)(in_RAX + 0x38);
    if ((*piVar1 <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (in_RAX = in_RAX + 0x30,
       *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*piVar1 * 8) ==
       in_RAX)) {
      uVar4 = (undefined7)((ulonglong)param_3 >> 8);
      bVar3 = 1;
      if (*param_3 == 0) {
        bVar2 = 0;
      }
      else {
        bVar2 = FUN_14480f766(param_2 + 0x6e88);
      }
      goto LAB_146634c25;
    }
  }
  bVar2 = (byte)in_RAX;
  bVar3 = 0;
  uVar4 = 0;
LAB_146634c25:
  return CONCAT71(uVar4,bVar3 & bVar2) & 0xffffffff;
}



// FUNCTION 146634c3a FUN_146634c3a body=29 status=ok
// SIG undefined FUN_146634c3a(void)

undefined8 FUN_146634c3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146634c58 FUN_146634c58 body=23 status=ok
// SIG undefined FUN_146634c58(void)

undefined1 FUN_146634c58(longlong param_1)

{
  FUN_14053c012(param_1 + 0x98);
  return 1;
}



// FUNCTION 146634c70 FUN_146634c70 body=87 status=ok
// SIG undefined FUN_146634c70(void)

undefined8 FUN_146634c70(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a2f878();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) && (*param_3 != 0)) {
      uVar2 = FUN_14480f766(param_2 + 0x6048);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 146634cc8 FUN_146634cc8 body=29 status=ok
// SIG undefined FUN_146634cc8(void)

undefined8 FUN_146634cc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146634ce6 FUN_146634ce6 body=23 status=ok
// SIG undefined FUN_146634ce6(void)

undefined1 FUN_146634ce6(longlong param_1)

{
  FUN_14053c012(param_1 + 0x98);
  return 1;
}



// FUNCTION 146634cfe FUN_146634cfe body=158 status=ok
// SIG undefined FUN_146634cfe(void)

undefined8 FUN_146634cfe(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined7 uVar7;
  byte bVar8;
  
  lVar3 = (**(code **)(*param_2 + 0x5d8))(param_2);
  if (lVar3 != 0) {
    lVar4 = FUN_144a5dd5e();
    param_2 = *(longlong **)(lVar3 + 0x10);
    if ((*(int *)(lVar4 + 0x38) <= (int)param_2[7]) &&
       (param_2 = (longlong *)param_2[6], param_2[*(int *)(lVar4 + 0x38)] == lVar4 + 0x30)) {
      cVar1 = *(char *)(*(longlong *)(param_1 + 0xa8) + 8);
      if (cVar1 == '\0') {
        lVar4 = *param_3;
        lVar5 = 0x3490;
      }
      else if (cVar1 == '\x01') {
        lVar4 = *param_3;
        lVar5 = 0x34a8;
      }
      else {
        if (cVar1 != '\x02') goto LAB_146634d98;
        lVar4 = *param_3;
        lVar5 = 0x34c0;
      }
      if (lVar4 == 0) {
        uVar7 = (undefined7)((ulonglong)lVar5 >> 8);
        bVar2 = 1;
        bVar8 = 0;
      }
      else {
        uVar6 = FUN_14480f766(lVar3 + lVar5);
        bVar8 = (byte)uVar6;
        uVar7 = (undefined7)((ulonglong)uVar6 >> 8);
        bVar2 = 1;
      }
      goto LAB_146634d6a;
    }
  }
LAB_146634d98:
  bVar8 = (byte)param_2;
  bVar2 = 0;
  uVar7 = 0;
LAB_146634d6a:
  return CONCAT71(uVar7,bVar2 & bVar8);
}



// FUNCTION 146634d9c FUN_146634d9c body=29 status=ok
// SIG undefined FUN_146634d9c(void)

undefined8 FUN_146634d9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146634dba FUN_146634dba body=23 status=ok
// SIG undefined FUN_146634dba(void)

undefined1 FUN_146634dba(longlong param_1)

{
  FUN_14053c012(param_1 + 0x98);
  return 1;
}



// FUNCTION 146634dd2 FUN_146634dd2 body=29 status=ok
// SIG undefined FUN_146634dd2(void)

undefined8 FUN_146634dd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146634df0 FUN_146634df0 body=23 status=ok
// SIG undefined FUN_146634df0(void)

undefined1 FUN_146634df0(longlong param_1)

{
  FUN_14053c012(param_1 + 0x98);
  return 1;
}



// FUNCTION 146634e08 FUN_146634e08 body=87 status=ok
// SIG undefined FUN_146634e08(void)

undefined8 FUN_146634e08(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a2f878();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) && (*param_3 != 0)) {
      uVar2 = FUN_14480f766(param_2 + 0x6170);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 146634e60 FUN_146634e60 body=29 status=ok
// SIG undefined FUN_146634e60(void)

undefined8 FUN_146634e60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146634e7e FUN_146634e7e body=29 status=ok
// SIG undefined FUN_146634e7e(void)

undefined8 FUN_146634e7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146634e9c FUN_146634e9c body=23 status=ok
// SIG undefined FUN_146634e9c(void)

undefined1 FUN_146634e9c(longlong param_1)

{
  FUN_14053c012(param_1 + 0x98);
  return 1;
}



// FUNCTION 146634eb4 FUN_146634eb4 body=87 status=ok
// SIG undefined FUN_146634eb4(void)

undefined8 FUN_146634eb4(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a2f878();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) && (*param_3 != 0)) {
      uVar2 = FUN_14480f766(param_2 + 0x6150);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 146634f0c FUN_146634f0c body=29 status=ok
// SIG undefined FUN_146634f0c(void)

undefined8 FUN_146634f0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146634f2a FUN_146634f2a body=29 status=ok
// SIG undefined FUN_146634f2a(void)

undefined8 FUN_146634f2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146634f48 FUN_146634f48 body=140 status=ok
// SIG undefined FUN_146634f48(void)

ulonglong FUN_146634f48(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 unaff_RDI;
  ulonglong uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_2 + 0x20) == DAT_14cbd2e38) {
    param_1 = param_1 + 0x80;
  }
  else {
    if (*(longlong *)(param_2 + 0x20) != DAT_14cbd2e40) {
      uVar1 = 0;
      goto LAB_146634fb1;
    }
    param_1 = param_1 + 0x90;
  }
  local_30 = *param_3;
  local_28 = param_3[1];
  FUN_1403350f6(param_1);
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  FUN_144a7b126(param_1,&local_19,1);
LAB_146634fb1:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146634fd6 FUN_146634fd6 body=90 status=ok
// SIG undefined FUN_146634fd6(void)

void FUN_146634fd6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1410dec34();
  if (lVar1 != 0) {
    lVar2 = FUN_14119cfbe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_140b4b2ee(lVar1,*(undefined4 *)(param_1 + 0x78));
      *(undefined1 *)(param_1 + 0x7c) = 0;
      FUN_140e673e8(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 146635030 FUN_146635030 body=29 status=ok
// SIG undefined FUN_146635030(void)

undefined8 FUN_146635030(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663504e FUN_14663504e body=29 status=ok
// SIG undefined FUN_14663504e(void)

undefined8 FUN_14663504e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663506c FUN_14663506c body=29 status=ok
// SIG undefined FUN_14663506c(void)

undefined8 FUN_14663506c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663508a FUN_14663508a body=66 status=ok
// SIG undefined FUN_14663508a(void)

undefined8 * FUN_14663508a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99eda0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466350cc FUN_1466350cc body=29 status=ok
// SIG undefined FUN_1466350cc(void)

undefined8 FUN_1466350cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466350ea FUN_1466350ea body=68 status=ok
// SIG undefined FUN_1466350ea(void)

undefined8 * FUN_1466350ea(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99ef20;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663512e FUN_14663512e body=29 status=ok
// SIG undefined FUN_14663512e(void)

undefined8 FUN_14663512e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663514c FUN_14663514c body=68 status=ok
// SIG undefined FUN_14663514c(void)

undefined8 * FUN_14663514c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99f110;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146635190 FUN_146635190 body=29 status=ok
// SIG undefined FUN_146635190(void)

undefined8 FUN_146635190(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466351ae FUN_1466351ae body=66 status=ok
// SIG undefined FUN_1466351ae(void)

undefined8 * FUN_1466351ae(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99f250;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466351f0 FUN_1466351f0 body=66 status=ok
// SIG undefined FUN_1466351f0(void)

undefined8 * FUN_1466351f0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99f470;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146635232 FUN_146635232 body=118 status=ok
// SIG undefined FUN_146635232(void)

void FUN_146635232(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99f4e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1466352a8 FUN_1466352a8 body=29 status=ok
// SIG undefined FUN_1466352a8(void)

undefined8 FUN_1466352a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466352c6 FUN_1466352c6 body=66 status=ok
// SIG undefined FUN_1466352c6(void)

undefined8 * FUN_1466352c6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99f670;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146635308 FUN_146635308 body=29 status=ok
// SIG undefined FUN_146635308(void)

undefined8 FUN_146635308(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146635326 FUN_146635326 body=66 status=ok
// SIG undefined FUN_146635326(void)

undefined8 * FUN_146635326(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99f740;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146635368 FUN_146635368 body=29 status=ok
// SIG undefined FUN_146635368(void)

undefined8 FUN_146635368(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146635386 FUN_146635386 body=29 status=ok
// SIG undefined FUN_146635386(void)

undefined8 FUN_146635386(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466353a4 FUN_1466353a4 body=29 status=ok
// SIG undefined FUN_1466353a4(void)

undefined8 FUN_1466353a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466353c2 FUN_1466353c2 body=29 status=ok
// SIG undefined FUN_1466353c2(void)

undefined8 FUN_1466353c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466353e0 FUN_1466353e0 body=118 status=ok
// SIG undefined FUN_1466353e0(void)

void FUN_1466353e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a8e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99fb60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146635456 FUN_146635456 body=29 status=ok
// SIG undefined FUN_146635456(void)

undefined8 FUN_146635456(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146635474 FUN_146635474 body=66 status=ok
// SIG undefined FUN_146635474(void)

undefined8 * FUN_146635474(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99fc10;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466354b6 FUN_1466354b6 body=29 status=ok
// SIG undefined FUN_1466354b6(void)

undefined8 FUN_1466354b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466354d4 FUN_1466354d4 body=29 status=ok
// SIG undefined FUN_1466354d4(void)

undefined8 FUN_1466354d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466354f2 FUN_1466354f2 body=68 status=ok
// SIG undefined FUN_1466354f2(void)

undefined8 * FUN_1466354f2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99fd90;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146635536 FUN_146635536 body=93 status=ok
// SIG undefined FUN_146635536(void)

void FUN_146635536(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a950;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99ff20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146635594 FUN_146635594 body=422 status=ok
// SIG undefined FUN_146635594(void)

longlong * FUN_146635594(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_14663566a:
    *puVar3 = &PTR_LAB_14b3e9ef0;
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
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b9a00f0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_1410b001c;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_14663566a;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b3e9ef0;
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
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b9a00f0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_1410b001c;
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



// FUNCTION 14663573a FUN_14663573a body=29 status=ok
// SIG undefined FUN_14663573a(void)

undefined8 FUN_14663573a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146635758 FUN_146635758 body=85 status=ok
// SIG undefined FUN_146635758(void)

void FUN_146635758(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a0190;
  return;
}



// FUNCTION 1466357ae FUN_1466357ae body=29 status=ok
// SIG undefined FUN_1466357ae(void)

undefined8 FUN_1466357ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466357cc FUN_1466357cc body=57 status=ok
// SIG undefined FUN_1466357cc(void)

void FUN_1466357cc(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b9a03d0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_14480f766(&DAT_14cbca7d0);
  }
  FUN_1459008ee(param_1 + 0x10);
  return;
}



// FUNCTION 146635806 FUN_146635806 body=29 status=ok
// SIG undefined FUN_146635806(void)

undefined8 FUN_146635806(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146635824 FUN_146635824 body=29 status=ok
// SIG undefined FUN_146635824(void)

undefined8 FUN_146635824(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146635842 FUN_146635842 body=66 status=ok
// SIG undefined FUN_146635842(void)

undefined8 * FUN_146635842(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9a0530;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663588e FUN_14663588e body=29 status=ok
// SIG undefined FUN_14663588e(void)

undefined8 FUN_14663588e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466358ac FUN_1466358ac body=29 status=ok
// SIG undefined FUN_1466358ac(void)

undefined8 FUN_1466358ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466358ca FUN_1466358ca body=23 status=ok
// SIG undefined FUN_1466358ca(void)

undefined1 FUN_1466358ca(longlong param_1)

{
  FUN_14053c012(param_1 + 0x98);
  return 1;
}



// FUNCTION 1466358e2 FUN_1466358e2 body=29 status=ok
// SIG undefined FUN_1466358e2(void)

undefined8 FUN_1466358e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146635900 FUN_146635900 body=52 status=ok
// SIG undefined FUN_146635900(void)

void FUN_146635900(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b99b6a0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_1458748de(param_1 + 0x10);
  return;
}



// FUNCTION 146635934 FUN_146635934 body=29 status=ok
// SIG undefined FUN_146635934(void)

undefined8 FUN_146635934(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146635952 FUN_146635952 body=9 status=ok
// SIG undefined FUN_146635952(void)

void FUN_146635952(longlong param_1)

{
  FUN_1458748de(param_1 + 0x10);
  return;
}



// FUNCTION 14663595c FUN_14663595c body=29 status=ok
// SIG undefined FUN_14663595c(void)

undefined8 FUN_14663595c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663597a FUN_14663597a body=132 status=ok
// SIG undefined FUN_14663597a(void)

void FUN_14663597a(longlong param_1,int param_2)

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



// FUNCTION 146635a00 FUN_146635a00 body=52 status=ok
// SIG undefined FUN_146635a00(void)

undefined8 * FUN_146635a00(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x448) == 0) {
    FUN_1418acd70(param_1,param_2);
  }
  else {
    lVar1 = FUN_1406d51c0();
    *param_2 = *(undefined8 *)(lVar1 + 0x1d0);
  }
  return param_2;
}



// FUNCTION 146635a34 FUN_146635a34 body=439 status=ok
// SIG undefined FUN_146635a34(void)

void FUN_146635a34(void)

{
  longlong lVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar1 = DAT_14caa8580;
  FUN_140056680(local_30,L"OakStanceTags");
  FUN_1446f470e(&local_40,L"Stance.Charge",1);
  FUN_1413e432a(lVar1,local_38,local_40,local_30);
  FUN_1446f470e(&local_48,L"Stance.Enraged",1);
  FUN_1413e432a(lVar1,local_38,local_48,local_30);
  FUN_1446f470e(&local_50,L"Stance.Puppet.Default",1);
  FUN_1413e432a(lVar1,local_38,local_50,local_30);
  FUN_1446f470e(&local_58,L"Stance.Puppet.Aim",1);
  FUN_1413e432a(lVar1,local_38,local_58,local_30);
  FUN_1446f470e(&local_60,L"Stance.Puppet.Sprint",1);
  FUN_1413e432a(lVar1,local_38,local_60,local_30);
  FUN_1446f470e(&local_68,L"Stance.Exchange.Give",1);
  FUN_1413e432a(lVar1,local_38,local_68,local_30);
  FUN_1446f470e(&local_70,L"Stance.Exchange.Take",1);
  FUN_1413e432a(lVar1,local_38,local_70,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146635bec FUN_146635bec body=203 status=ok
// SIG undefined FUN_146635bec(void)

void FUN_146635bec(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x68);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x420))(plVar1,0);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1c8);
    if (lVar2 == 0) {
      local_28 = DAT_14c8464f0;
      local_38 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_30 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_38 = *(undefined8 *)(lVar2 + 0x260);
      uStack_30 = *(undefined8 *)(lVar2 + 0x268);
      local_28 = *(undefined8 *)(lVar2 + 0x270);
    }
    FUN_1404e0f62(*(longlong *)(param_1 + 0x70),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x68),&local_38);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146635cca FUN_146635cca body=190 status=ok
// SIG undefined FUN_146635cca(void)

undefined8 * FUN_146635cca(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd4050) {
    FUN_144b3d300(&DAT_14cbd4050);
    if (DAT_14cbd4050 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"amage",6);
      builtin_wcsncpy(local_48 + 8,L"ezeFallD",8);
      builtin_wcsncpy(local_48,L"ApplyFre",8);
      FUN_1446f470e(&DAT_14cbd4048,local_48,1);
      _Init_thread_footer(&DAT_14cbd4050);
    }
  }
  *param_1 = DAT_14cbd4048;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146635d8a FUN_146635d8a body=97 status=ok
// SIG undefined FUN_146635d8a(void)

void FUN_146635d8a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong *)(*param_2 + 8) != 0) &&
     (plVar1 = *(longlong **)(*param_2 + 0x10), plVar1 != (longlong *)0x0)) {
    lVar2 = (**(code **)(*plVar1 + 8))();
    if (lVar2 != 0) {
      lVar3 = FUN_144a2f878();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        FUN_140fbc10c(lVar2 + 0x6890);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146635dec FUN_146635dec body=97 status=ok
// SIG undefined FUN_146635dec(void)

void FUN_146635dec(longlong *param_1)

{
  (**(code **)(*param_1 + 0x728))(param_1,DAT_14cad0f30,1);
  (**(code **)(*param_1 + 0x720))(param_1,1);
  (**(code **)(*param_1 + 0x938))(param_1,0x13,2);
  (**(code **)(*param_1 + 0x730))(param_1,0x13);
  FUN_1448aa298(param_1);
  return;
}



// FUNCTION 146635e4e FUN_146635e4e body=82 status=ok
// SIG undefined FUN_146635e4e(void)

void FUN_146635e4e(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_1406c9b58();
  lVar2 = FUN_1447210f0(param_1);
  if ((lVar2 != 0) &&
     ((bVar1 = *(byte *)(lVar2 + 0x152), bVar1 == 1 ||
      ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))))) {
    (**(code **)(*param_1 + 0x688))(param_1);
  }
  FUN_1405e47c6(param_1,1);
  return;
}



// FUNCTION 146635ec4 FUN_146635ec4 body=113 status=ok
// SIG undefined FUN_146635ec4(void)

void FUN_146635ec4(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1415da018();
  if ((*(longlong *)(param_1 + 0x2980) != 0) && (*(int *)(param_1 + 0x2988) - 1U < 0xfffffffe)) {
    lVar2 = FUN_140fb84c8(param_1 + 0x2980);
    if (lVar2 != 0) {
      *(undefined4 *)(param_1 + 0x2998) = *(undefined4 *)(lVar2 + 0xa0);
      *(undefined1 *)(param_1 + 0x299c) = *(undefined1 *)(lVar2 + 0x40);
      uVar1 = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)(param_1 + 0x29a0) = *(undefined8 *)(lVar2 + 0x18);
      *(undefined8 *)(param_1 + 0x29a8) = uVar1;
      *(undefined8 *)(param_1 + 0x29b0) = *(undefined8 *)(lVar2 + 0x28);
      uVar1 = *(undefined8 *)(lVar2 + 0x38);
      *(undefined8 *)(param_1 + 0x29b8) = *(undefined8 *)(lVar2 + 0x30);
      *(undefined8 *)(param_1 + 0x29c0) = uVar1;
    }
  }
  return;
}



// FUNCTION 146635f54 FUN_146635f54 body=36 status=ok
// SIG undefined FUN_146635f54(void)

void FUN_146635f54(longlong *param_1)

{
  FUN_1410c7f42();
                    /* WARNING: Could not recover jumptable at 0x000146635f75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x690))(param_1,1);
  return;
}



// FUNCTION 146635f78 FUN_146635f78 body=36 status=ok
// SIG undefined FUN_146635f78(void)

void FUN_146635f78(longlong *param_1)

{
  FUN_1410b7f58();
                    /* WARNING: Could not recover jumptable at 0x000146635f99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x690))(param_1,0);
  return;
}



// FUNCTION 146635f9c FUN_146635f9c body=75 status=ok
// SIG undefined FUN_146635f9c(void)

void FUN_146635f9c(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x2970) != 0) {
    FUN_14480f766(&DAT_14cb7df98);
  }
  if (*(longlong *)(param_1 + 0x2978) != 0) {
    FUN_14480f766(&DAT_14cb7df50);
  }
  FUN_140e02c44(param_1,param_2);
  return;
}



// FUNCTION 146635fe8 FUN_146635fe8 body=77 status=ok
// SIG undefined FUN_146635fe8(void)

void FUN_146635fe8(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_1406c9b58();
  lVar2 = FUN_1447210f0(param_1);
  if (lVar2 != 0) {
    bVar1 = *(byte *)(lVar2 + 0x152);
    if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x000146636019. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x688))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 146636042 FUN_146636042 body=131 status=ok
// SIG undefined FUN_146636042(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146636042(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446ddc76(&local_18,"OakTravel",1);
  FUN_14147d486(&DAT_14cbd3e08,local_18,3);
  _DAT_14cbd3e08 = &PTR_FUN_14b9a1c88;
  FUN_140834d1a(&DAT_14cbd3e08,L"Events relevant to travel.");
  DAT_14cbd3e65 = 1;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466360c6 FUN_1466360c6 body=328 status=ok
// SIG undefined FUN_1466360c6(void)

void FUN_1466360c6(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [4];
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_60 [40];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*param_2 != *(longlong *)(param_1 + 0x100)) || ((int)param_2[1] != *(int *)(param_1 + 0x108))
     ) {
    uVar1 = FUN_14479d2ce(param_1 + 8);
    lVar2 = FUN_140149a73(uVar1,0);
    if ((lVar2 != 0) && (lVar2 = FUN_1403a147e(lVar2), lVar2 != 0)) {
      FUN_144928b90(local_60,4);
      local_70 = DAT_14cbd3db8;
      local_68 = DAT_14cbd3dc0;
      FUN_1411efe9e(local_60);
      local_80[0] = 0;
      local_7c = 0;
      local_74 = 0;
      FUN_144976b9c(local_80,*param_2);
      lVar2 = FUN_140149a73(uVar1,0);
      if (lVar2 != 0) {
        FUN_140bc53f1(local_60,local_80,lVar2,0);
      }
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    if ((*(longlong *)(param_1 + 0x100) != *param_2) ||
       (*(int *)(param_1 + 0x108) != (int)param_2[1])) {
      *(longlong *)(param_1 + 0x100) = *param_2;
      *(int *)(param_1 + 0x108) = (int)param_2[1];
      *(undefined8 *)(param_1 + 0x110) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146636210 FUN_146636210 body=232 status=ok
// SIG undefined FUN_146636210(void)

undefined8 FUN_146636210(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  local_38 = 3;
  *local_40 = &PTR_LAB_14aa6ea50;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_40[2] = lVar4;
  *local_40 = &PTR_FUN_14b9a3580;
  local_40[3] = param_2;
  local_40[4] = uVar2;
  *(undefined4 *)(local_40 + 5) = uVar1;
  FUN_1412b4546(&DAT_14cb10968,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466362fa FUN_1466362fa body=118 status=ok
// SIG undefined FUN_1466362fa(void)

ulonglong FUN_1466362fa(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146636392 FUN_146636392 body=40 status=ok
// SIG undefined FUN_146636392(void)

undefined8 FUN_146636392(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466363ba FUN_1466363ba body=40 status=ok
// SIG undefined FUN_1466363ba(void)

undefined8 FUN_1466363ba(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466363e2 FUN_1466363e2 body=40 status=ok
// SIG undefined FUN_1466363e2(void)

undefined8 FUN_1466363e2(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663640a FUN_14663640a body=72 status=ok
// SIG undefined FUN_14663640a(void)

undefined8 * FUN_14663640a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5ecae0;
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  FUN_14075380c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146636452 FUN_146636452 body=40 status=ok
// SIG undefined FUN_146636452(void)

undefined8 FUN_146636452(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


