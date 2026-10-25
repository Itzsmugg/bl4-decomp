// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1487c53f0 FUN_1487c53f0 body=71 status=ok
// SIG undefined FUN_1487c53f0(void)

void FUN_1487c53f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147ca29ec();
  if (param_2 != 0) {
    lVar1 = FUN_1449f3324();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_14583e6c2(param_2,0);
      return;
    }
  }
  return;
}



// FUNCTION 1487c5438 FUN_1487c5438 body=66 status=ok
// SIG undefined FUN_1487c5438(void)

void FUN_1487c5438(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x3b8);
  if (lVar1 == 0) {
    return;
  }
  FUN_1487caa48(&DAT_14cb71688,lVar1);
  FUN_1447f69b6(lVar1 + 0x398);
  return;
}



// FUNCTION 1487c547a FUN_1487c547a body=31 status=ok
// SIG undefined FUN_1487c547a(void)

void FUN_1487c547a(longlong *param_1)

{
  FUN_140a01d60();
                    /* WARNING: Could not recover jumptable at 0x0001487c5492. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x638))(param_1);
  return;
}



// FUNCTION 1487c549a FUN_1487c549a body=184 status=ok
// SIG undefined FUN_1487c549a(void)

void FUN_1487c549a(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1487c5552();
  lVar2 = FUN_14479d2ce(param_1 + 0x3b8);
  if ((lVar2 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    lVar3 = FUN_1447210f0(param_1);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x178) != 0)) {
      lVar4 = FUN_140cbc144();
      plVar1 = *(longlong **)(lVar3 + 0x178);
      if ((((plVar1 != (longlong *)0x0) && (lVar4 != 0)) && (lVar3 = plVar1[2], lVar3 != 0)) &&
         ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)))) {
        (**(code **)(*plVar1 + 0x730))(plVar1,lVar2);
      }
    }
    FUN_140aeefbc(lVar2,0,1);
  }
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 1487c5552 FUN_1487c5552 body=66 status=ok
// SIG undefined FUN_1487c5552(void)

void FUN_1487c5552(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x3b8);
  if (lVar1 == 0) {
    return;
  }
  FUN_1487caa48(&DAT_14cb716a0,lVar1);
  FUN_1447f69b6(lVar1 + 0x3b0);
  return;
}



// FUNCTION 1487c5594 FUN_1487c5594 body=250 status=ok
// SIG undefined FUN_1487c5594(void)

undefined8 FUN_1487c5594(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined2 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    cVar3 = (**(code **)(*param_1 + 0x650))();
    if ((cVar3 == '\0') && (*(longlong *)(param_2 + 0x398) != 0)) {
      lVar4 = FUN_140082f10();
      lVar1 = *(longlong *)(param_2 + 0x398);
      if (lVar1 != 0) {
        uVar6 = 0;
        if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1487c5609;
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          FUN_14485c47a(param_2 + 0xc08,param_1);
          local_38 = param_1[0x79];
          local_30 = 0xffff;
          local_28 = 0;
          FUN_1487c4e72(param_2);
          plVar5 = (longlong *)FUN_14479d2ce(param_1 + 0x77);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x638))(plVar5,lVar1);
          }
          FUN_1487c5690(param_1,lVar1);
          uVar6 = 1;
          goto LAB_1487c5609;
        }
      }
    }
  }
  uVar6 = 0;
LAB_1487c5609:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c5690 FUN_1487c5690 body=78 status=ok
// SIG undefined FUN_1487c5690(void)

void FUN_1487c5690(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x3b8);
  if (lVar1 == 0) {
    return;
  }
  FUN_1487caaec(&DAT_14cb71658,lVar1,param_2);
  FUN_1413d8be4(lVar1 + 0x3c8,param_2);
  return;
}



// FUNCTION 1487c56de FUN_1487c56de body=245 status=ok
// SIG undefined FUN_1487c56de(void)

undefined8 FUN_1487c56de(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x398) != 0)) {
    lVar3 = FUN_140082f10();
    lVar1 = *(longlong *)(param_2 + 0x398);
    if (lVar1 != 0) {
      uVar5 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1487c5746;
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        *(undefined8 *)(param_2 + 0xc08) = 0;
        lVar3 = FUN_14492b4b4(param_2);
        if (lVar3 != 0) {
          local_38 = 0;
          uStack_30 = 0xffff;
          local_28 = 0;
          FUN_140365ba6(lVar3,&local_38,1);
        }
        plVar4 = (longlong *)FUN_14479d2ce(param_1 + 0x3b8);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x640))(plVar4,lVar1);
        }
        FUN_1487c57d4(param_1,lVar1);
        uVar5 = 1;
        goto LAB_1487c5746;
      }
    }
  }
  uVar5 = 0;
LAB_1487c5746:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c57d4 FUN_1487c57d4 body=78 status=ok
// SIG undefined FUN_1487c57d4(void)

void FUN_1487c57d4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x3b8);
  if (lVar1 == 0) {
    return;
  }
  FUN_1487caaec(&DAT_14cb71670,lVar1,param_2);
  FUN_1413d8be4(lVar1 + 0x3e0,param_2);
  return;
}



// FUNCTION 1487c5822 FUN_1487c5822 body=72 status=ok
// SIG undefined FUN_1487c5822(void)

bool FUN_1487c5822(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_1 + 0x3c0) != 0) &&
     (plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0x3b8), plVar3 != (longlong *)0x0)) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x3c0) + 0x18);
    iVar2 = (**(code **)(*plVar3 + 0x648))(plVar3);
    return iVar1 <= iVar2;
  }
  return false;
}



// FUNCTION 1487c587e FUN_1487c587e body=45 status=ok
// SIG undefined FUN_1487c587e(void)

undefined8 FUN_1487c587e(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x3b8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487c589d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x648))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1487c58ac FUN_1487c58ac body=115 status=ok
// SIG undefined FUN_1487c58ac(void)

undefined8 * FUN_1487c58ac(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x3b8);
  if (lVar2 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    iVar1 = *(int *)(lVar2 + 0x418);
    _Src = *(void **)(lVar2 + 0x410);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1486e150e(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 << 3);
    }
  }
  return param_2;
}



// FUNCTION 1487c5920 FUN_1487c5920 body=429 status=ok
// SIG undefined FUN_1487c5920(void)

ulonglong FUN_1487c5920(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined8 unaff_RDI;
  ulonglong uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar5 = FUN_1478c167e();
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (cVar5 == '\0') {
    uVar4 = local_68;
    if (*(longlong *)(param_1 + 0xa90) != 0) {
      iVar8 = 0;
      uVar9 = 0;
      if (*(char *)(*(longlong *)(param_1 + 0xa90) + 0x2f8) != '\x01') goto LAB_1487c594a;
      plVar1 = (longlong *)(param_1 + 0x240);
      lVar2 = param_1 + 0x250;
      local_58 = 0x100000000;
      local_48 = 0xffffffff;
      local_40 = 0;
      local_50 = lVar2;
      if (*(int *)(param_1 + 0x268) != 0) {
        FUN_1449c0562(&local_58);
        iVar8 = *(int *)(param_1 + 0x268);
      }
      local_68 = local_48;
      uVar4 = local_68;
      local_60 = local_40;
      local_5c = local_3c;
      local_78 = local_58;
      local_70 = local_50;
      local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
      local_80 = plVar1;
      if ((local_68._4_4_ != iVar8) || (local_50 != lVar2)) {
        iVar6 = local_68._4_4_;
        local_68 = uVar4;
        do {
          plVar3 = *(longlong **)(*local_80 + (longlong)iVar6 * 0x10);
          if (plVar3 != (longlong *)0x0) {
            cVar5 = (**(code **)(*plVar3 + 0x468))(plVar3);
            uVar9 = 1;
            if (cVar5 != '\0') goto LAB_1487c594a;
            lVar7 = FUN_144a7a726();
            if ((((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                  lVar7 + 0x30)) && ((*(byte *)((longlong)plVar3 + 0x2d2) & 1) != 0)) &&
               (*(char *)((longlong)plVar3 + 0x1fb) == '\x02')) goto LAB_1487c594a;
          }
          local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
          FUN_1449c0562(&local_78);
          iVar6 = local_68._4_4_;
          uVar4 = local_68;
        } while (local_80 != plVar1 || (local_70 != lVar2 || local_68._4_4_ != iVar8));
      }
    }
    local_68 = uVar4;
    uVar9 = 0;
  }
LAB_1487c594a:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1487c5ace FUN_1487c5ace body=439 status=ok
// SIG undefined FUN_1487c5ace(void)

longlong * FUN_1487c5ace(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_b8 [40];
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
  FUN_1478c17a2();
  uVar5 = local_78;
  if ((*(longlong *)(param_1 + 0xa90) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xa90) + 0x2f8) == '\x01')) {
    plVar1 = (longlong *)(param_1 + 0x240);
    lVar2 = param_1 + 0x250;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = lVar2;
    if (*(int *)(param_1 + 0x268) == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar9 = *(int *)(param_1 + 0x268);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar5 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar9) || (uStack_60 != lVar2)) {
      iVar7 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        plVar4 = *(longlong **)(lVar3 + (longlong)iVar7 * 0x10);
        if (plVar4 != (longlong *)0x0) {
          cVar6 = (**(code **)(*plVar4 + 0x468))(plVar4);
          if (cVar6 == '\0') {
            lVar8 = FUN_144a7a726();
            if ((((*(int *)(plVar4[2] + 0x38) < *(int *)(lVar8 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
                  lVar8 + 0x30)) || ((*(byte *)((longlong)plVar4 + 0x2d2) & 1) == 0)) ||
               (*(char *)((longlong)plVar4 + 0x1fb) != '\x02')) goto LAB_1487c5c07;
          }
          uVar5 = *(undefined8 *)(lVar3 + (longlong)iVar7 * 0x10);
          iVar7 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
            FUN_1406ca8e4(param_2,iVar7);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar7 * 8) = uVar5;
        }
LAB_1487c5c07:
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar7 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar9));
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1487c5c86 FUN_1487c5c86 body=117 status=ok
// SIG undefined FUN_1487c5c86(void)

bool FUN_1487c5c86(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x5e0);
  param_2[2] = 0;
  if ((*param_2 == 0) || (param_2[1] == 0)) {
    lVar5 = 0;
    goto LAB_1487c5ce9;
  }
  plVar2 = *(longlong **)(param_2[1] + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_1487c5cf7:
    lVar5 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_1487c5cf7;
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,param_2);
  }
  param_2[2] = lVar5;
LAB_1487c5ce9:
  return lVar1 == lVar5;
}



// FUNCTION 1487c5cfc FUN_1487c5cfc body=263 status=ok
// SIG undefined FUN_1487c5cfc(void)

void FUN_1487c5cfc(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar5 = (longlong *)param_2[2];
  if (plVar5 == (longlong *)0x0) {
    if ((*param_2 == 0) || (param_2[1] == 0)) goto LAB_1487c5de5;
    plVar5 = *(longlong **)(param_2[1] + 0xb8);
    if ((plVar5 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar1 == '\0')) {
      param_2[2] = 0;
      goto LAB_1487c5de5;
    }
    uVar4 = (**(code **)(*plVar5 + 0x110))(plVar5);
    plVar5 = (longlong *)FUN_144aff482(uVar4,param_2);
    param_2[2] = (longlong)plVar5;
    if (plVar5 == (longlong *)0x0) goto LAB_1487c5de5;
  }
  lVar2 = (**(code **)(*plVar5 + 8))(plVar5);
  lVar3 = FUN_140927942();
  if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    local_28 = plVar5;
    FUN_1417ff120(param_1 + 0x4d8,plVar5);
    (**(code **)(*(longlong *)(param_1 + -0xb0) + 0x48))(param_1 + -0xb0,&local_28);
  }
LAB_1487c5de5:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487c5e0a FUN_1487c5e0a body=53 status=ok
// SIG undefined FUN_1487c5e0a(void)

undefined8 * FUN_1487c5e0a(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*(longlong *)(lVar1 + 0x50) + 0x18))(lVar1 + 0x50,param_2);
  }
  return param_2;
}



// FUNCTION 1487c5e4c FUN_1487c5e4c body=93 status=ok
// SIG undefined FUN_1487c5e4c(void)

void FUN_1487c5e4c(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined2 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = *(undefined2 *)(param_2 + 1);
  local_10 = param_2[2];
  FUN_140365ba6(param_1 + 0x16e0,&local_20,CONCAT71((uint7)(byte)((ushort)local_18 >> 8),1));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c5eaa FUN_1487c5eaa body=79 status=ok
// SIG undefined FUN_1487c5eaa(void)

longlong FUN_1487c5eaa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x8d8);
  if (lVar1 == 0) {
    lVar1 = FUN_14895adb6(param_1 + -0x420);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x8d8) = lVar1;
  }
  return lVar1;
}



// FUNCTION 1487c5f3a FUN_1487c5f3a body=122 status=ok
// SIG undefined FUN_1487c5f3a(void)

undefined8 * FUN_1487c5f3a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_2 = *(undefined8 *)(param_1 + 0x98);
  uVar2 = *(undefined4 *)(param_1 + 0xa4);
  uVar3 = *(undefined4 *)(param_1 + 0xa8);
  uVar4 = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
  *(undefined4 *)(param_2 + 2) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
  param_2[3] = 0;
  iVar1 = *(int *)(param_1 + 0xb8);
  _Src = *(void **)(param_1 + 0xb0);
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



// FUNCTION 1487c5fb4 FUN_1487c5fb4 body=22 status=ok
// SIG undefined FUN_1487c5fb4(void)

undefined8 FUN_1487c5fb4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3a0);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x6f1));
  }
  return 0;
}



// FUNCTION 1487c5fca FUN_1487c5fca body=81 status=ok
// SIG undefined FUN_1487c5fca(void)

void FUN_1487c5fca(longlong param_1)

{
  undefined1 auStack_38 [44];
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(longlong *)(param_1 + 0x3a0) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x3a0) + 0x8e0) == '\0')) {
    local_c = 0;
    FUN_14146fdb6();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c601c FUN_1487c601c body=69 status=ok
// SIG undefined FUN_1487c601c(void)

void FUN_1487c601c(longlong param_1)

{
  undefined1 auStack_38 [44];
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x8e0) == '\0') {
    local_c = 0;
    FUN_14146fdb6();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c6062 FUN_1487c6062 body=17 status=ok
// SIG undefined FUN_1487c6062(void)

longlong FUN_1487c6062(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong in_RAX;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong *plStack_38;
  longlong *plStack_30;
  ulonglong uStack_28;
  
  lVar3 = *(longlong *)(param_1 + 0x3a0);
  if (lVar3 == 0) {
    return in_RAX;
  }
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar6 = *(longlong *)(lVar3 + 0xb0);
    if (lVar6 == 0) {
      lVar6 = FUN_1448abda6(lVar3);
    }
    FUN_140937dea(&plStack_38,lVar6);
    if (plStack_30 != (longlong *)0x0) {
      iVar5 = (int)plStack_30[1];
      do {
        if (iVar5 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)plStack_30[1];
        bVar8 = iVar5 == iVar4;
        if (bVar8) {
          *(int *)(plStack_30 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
        plVar7 = plStack_30;
      } while (!bVar8);
      LOCK();
      piVar1 = (int *)((longlong)plStack_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_30 + 0x10))();
      }
      if (plVar7 != (longlong *)0x0) {
        if (plStack_38 != (longlong *)0x0) {
          param_2 = (**(code **)(*plStack_38 + 0x38))(plStack_38,lVar3,param_2);
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
        if (plStack_38 != (longlong *)0x0) goto LAB_14577090f;
      }
    }
  }
  param_2 = 0;
LAB_14577090f:
  if ((uStack_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1487c6074 FUN_1487c6074 body=19 status=ok
// SIG undefined FUN_1487c6074(void)

undefined8 FUN_1487c6074(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x3a0);
  if (lVar3 == 0) {
    return 0;
  }
  FUN_140cc68fa();
  lVar4 = *(longlong *)(lVar3 + 0x6a8);
  plVar5 = *(longlong **)(lVar3 + 0x6b0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    uVar6 = FUN_14479d2ce(lVar4 + 0x60);
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
    return uVar6;
  }
  uVar6 = FUN_14479d2ce(lVar4 + 0x60);
  return uVar6;
}



// FUNCTION 1487c6088 FUN_1487c6088 body=103 status=ok
// SIG undefined FUN_1487c6088(void)

undefined8 FUN_1487c6088(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  FUN_140cc68fa();
  lVar3 = *(longlong *)(param_1 + 0x6a8);
  plVar4 = *(longlong **)(param_1 + 0x6b0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    uVar5 = FUN_14479d2ce(lVar3 + 0x60);
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
    return uVar5;
  }
  uVar5 = FUN_14479d2ce(lVar3 + 0x60);
  return uVar5;
}



// FUNCTION 1487c60f0 FUN_1487c60f0 body=114 status=ok
// SIG undefined FUN_1487c60f0(void)

void FUN_1487c60f0(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = *(longlong *)(param_2 + 4);
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1487c6164(*(undefined8 *)(param_1 + 0x3a0),&local_38,param_3);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c6164 FUN_1487c6164 body=306 status=ok
// SIG undefined FUN_1487c6164(void)

void FUN_1487c6164(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == 0) {
    *param_3 = 0;
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = *(longlong *)(param_2 + 4);
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_143ca0fe4(&local_48);
  }
  else {
    FUN_140cc68fa();
    lVar3 = *(longlong *)(param_1 + 0x6a8);
    plVar4 = *(longlong **)(param_1 + 0x6b0);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    lVar5 = FUN_14479d2ce(lVar3 + 0x60);
    *param_3 = lVar5;
    if (lVar5 == 0) {
      local_70 = param_3;
      FUN_1487c6d20(lVar3 + 0x30,local_78,param_2);
    }
    else {
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      local_58 = *(longlong *)(param_2 + 4);
      if ((local_58 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_143ca0fe4(&local_68);
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
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c62aa FUN_1487c62aa body=189 status=ok
// SIG undefined FUN_1487c62aa(void)

void FUN_1487c62aa(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_1);
  }
  FUN_140937dea(&local_28,lVar5);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + 0x28))(local_28,param_1);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487c637a FUN_1487c637a body=189 status=ok
// SIG undefined FUN_1487c637a(void)

void FUN_1487c637a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_1);
  }
  FUN_140937dea(&local_28,lVar5);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + 0x30))(local_28,param_1);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487c6438 FUN_1487c6438 body=74 status=ok
// SIG undefined FUN_1487c6438(void)

void FUN_1487c6438(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong *plStack_28;
  longlong *plStack_20;
  ulonglong uStack_18;
  
  lVar3 = *(longlong *)(param_1 + 0x3a0);
  if (lVar3 != 0) {
    if ((*(longlong *)(lVar3 + 0x6f8) != *param_2) || (*(int *)(lVar3 + 0x700) != (int)param_2[1]))
    {
      *(longlong *)(lVar3 + 0x6f8) = *param_2;
      *(int *)(lVar3 + 0x700) = (int)param_2[1];
      *(undefined8 *)(lVar3 + 0x708) = 0;
    }
    if (param_3 != '\0') {
      uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
      lVar6 = *(longlong *)(lVar3 + 0xb0);
      if (lVar6 == 0) {
        lVar6 = FUN_1448abda6(lVar3);
      }
      FUN_140937dea(&plStack_28,lVar6);
      if (plStack_20 != (longlong *)0x0) {
        iVar5 = (int)plStack_20[1];
        do {
          if (iVar5 == 0) {
            plVar7 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar4 = (int)plStack_20[1];
          bVar8 = iVar5 == iVar4;
          if (bVar8) {
            *(int *)(plStack_20 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
          plVar7 = plStack_20;
        } while (!bVar8);
        LOCK();
        piVar1 = (int *)((longlong)plStack_20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plStack_20 + 0x10))();
        }
        if (plVar7 != (longlong *)0x0) {
          if (plStack_28 != (longlong *)0x0) {
            (**(code **)(*plStack_28 + 0x28))(plStack_28,lVar3);
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
      if ((uStack_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
  return;
}



// FUNCTION 1487c6482 FUN_1487c6482 body=62 status=ok
// SIG undefined FUN_1487c6482(void)

void FUN_1487c6482(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong *plStack_28;
  longlong *plStack_20;
  ulonglong uStack_18;
  
  if ((*(longlong *)(param_1 + 0x6f8) != *param_2) || (*(int *)(param_1 + 0x700) != (int)param_2[1])
     ) {
    *(longlong *)(param_1 + 0x6f8) = *param_2;
    *(int *)(param_1 + 0x700) = (int)param_2[1];
    *(undefined8 *)(param_1 + 0x708) = 0;
  }
  if (param_3 == '\0') {
    return;
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_1);
  }
  FUN_140937dea(&plStack_28,lVar5);
  if (plStack_20 != (longlong *)0x0) {
    iVar4 = (int)plStack_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)plStack_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(plStack_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = plStack_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)plStack_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (plStack_28 != (longlong *)0x0) {
        (**(code **)(*plStack_28 + 0x28))(plStack_28,param_1);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if ((uStack_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487c64c0 FUN_1487c64c0 body=60 status=ok
// SIG undefined FUN_1487c64c0(void)

void FUN_1487c64c0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_140cd0e64();
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x60);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487c64f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x5c8))(plVar1,0,*(code **)(*plVar1 + 0x5c8));
    return;
  }
  return;
}



// FUNCTION 1487c64fc FUN_1487c64fc body=433 status=ok
// SIG undefined FUN_1487c64fc(void)

void FUN_1487c64fc(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_144983130(param_1 + 0xd50,param_1 + 0xfe0);
  *(undefined1 *)(param_1 + 0xe00) = *(undefined1 *)(param_1 + 0xfd8);
  *(undefined8 *)(param_1 + 0xdf8) = *(undefined8 *)(param_1 + 0x1018);
  FUN_144983130(param_1 + 0xe28,param_1 + 0x1020);
  *(undefined1 *)(param_1 + 0xeda) = *(undefined1 *)(param_1 + 0xfd9);
  FUN_144983130(param_1 + 0xe60,param_1 + 0x1058);
  *(undefined1 *)(param_1 + 0xedb) = *(undefined1 *)(param_1 + 0xfda);
  FUN_144983130(param_1 + 0xea0,param_1 + 0x1090);
  *(undefined1 *)(param_1 + 0xed8) = *(undefined1 *)(param_1 + 0xfdb);
  *(undefined8 *)(param_1 + 0xe98) = *(undefined8 *)(param_1 + 0x10c8);
  plVar1 = (longlong *)FUN_14048be4a();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      return;
    }
  }
  FUN_144983130(param_1 + 0xfe0,lVar2 + 0xfe0);
  *(undefined1 *)(param_1 + 0xfd8) = *(undefined1 *)(lVar2 + 0xfd8);
  *(undefined4 *)(param_1 + 0x1018) = *(undefined4 *)(lVar2 + 0x1018);
  *(undefined4 *)(param_1 + 0x101c) = *(undefined4 *)(lVar2 + 0x101c);
  FUN_144983130(param_1 + 0x1020,lVar2 + 0x1020);
  *(undefined1 *)(param_1 + 0xfd9) = *(undefined1 *)(lVar2 + 0xfd9);
  FUN_144983130(param_1 + 0x1058,lVar2 + 0x1058);
  *(undefined1 *)(param_1 + 0xfda) = *(undefined1 *)(lVar2 + 0xfda);
  FUN_144983130(param_1 + 0x1090,lVar2 + 0x1090);
  *(undefined1 *)(param_1 + 0xfdb) = *(undefined1 *)(lVar2 + 0xfdb);
  *(undefined4 *)(param_1 + 0x10c8) = *(undefined4 *)(lVar2 + 0x10c8);
  *(undefined4 *)(param_1 + 0x10cc) = *(undefined4 *)(lVar2 + 0x10cc);
  return;
}



// FUNCTION 1487c66ae FUN_1487c66ae body=323 status=ok
// SIG undefined FUN_1487c66ae(void)

void FUN_1487c66ae(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)FUN_14048be4a();
  lVar4 = plVar3[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar4 = plVar3[0x22];
    if (lVar4 == 0) {
      return;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0xd24);
  if ((lVar1 == DAT_14cb24240) || (lVar1 == DAT_14cb24248)) {
    cVar2 = FUN_144a43716(lVar4 + 0xe30,param_1 + 0xe30);
    if ((cVar2 != '\0') && (cVar2 = FUN_144a43716(lVar4 + 0xe68,param_1 + 0xe68), cVar2 != '\0')) {
      if ((*(float *)(lVar4 + 0xe98) == *(float *)(param_1 + 0xe98)) &&
         (!NAN(*(float *)(lVar4 + 0xe98)) && !NAN(*(float *)(param_1 + 0xe98)))) {
        if ((*(float *)(lVar4 + 0xe9c) == *(float *)(param_1 + 0xe9c)) &&
           (!NAN(*(float *)(lVar4 + 0xe9c)) && !NAN(*(float *)(param_1 + 0xe9c)))) {
          return;
        }
      }
    }
    *(undefined1 *)(param_1 + 0xe08) = 0;
  }
  else if (lVar1 == DAT_14cb24238) {
    cVar2 = FUN_144a43716(lVar4 + 0xd58,param_1 + 0xd58);
    if (((cVar2 != '\0') && (cVar2 = FUN_144a43716(lVar4 + 0xd90,param_1 + 0xd90), cVar2 != '\0'))
       && (cVar2 = FUN_144a43716(lVar4 + 0xdc8,param_1 + 0xdc8), cVar2 != '\0')) {
      if ((*(float *)(lVar4 + 0xdf8) == *(float *)(param_1 + 0xdf8)) &&
         (!NAN(*(float *)(lVar4 + 0xdf8)) && !NAN(*(float *)(param_1 + 0xdf8)))) {
        if ((*(float *)(lVar4 + 0xdfc) == *(float *)(param_1 + 0xdfc)) &&
           (!NAN(*(float *)(lVar4 + 0xdfc)) && !NAN(*(float *)(param_1 + 0xdfc)))) {
          return;
        }
      }
    }
    *(undefined1 *)(param_1 + 0xd30) = 0;
  }
  return;
}



// FUNCTION 1487c67f2 FUN_1487c67f2 body=119 status=ok
// SIG undefined FUN_1487c67f2(void)

void FUN_1487c67f2(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0x338) = 0xffffffff;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0xb0);
    if ((lVar1 != 0) || (lVar1 = FUN_1448abda6(param_1), lVar1 != 0)) {
      FUN_1487cd14e(param_1 + 0x758,lVar1);
      FUN_1487cd14e(param_1 + 0x790,lVar1);
      FUN_1487cd14e(param_1 + 0x7c8,lVar1);
      FUN_140930bae(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1487c687e FUN_1487c687e body=18 status=ok
// SIG undefined FUN_1487c687e(void)

undefined8 FUN_1487c687e(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x918) >> 8),
                  *(longlong *)(param_1 + 0x918) == DAT_14cb24230);
}



// FUNCTION 1487c6890 FUN_1487c6890 body=197 status=ok
// SIG undefined FUN_1487c6890(void)

longlong FUN_1487c6890(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
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
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_140b5495e();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 1487c6956 FUN_1487c6956 body=78 status=ok
// SIG undefined FUN_1487c6956(void)

void FUN_1487c6956(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = *(char *)(param_1 + 0xb40);
  *(char *)(param_1 + 0xb40) = param_2;
  if (cVar1 == '\x01' && param_2 == '\0') {
    if (*(char *)(param_1 + 0xa9b) == '\x01') {
      lVar2 = FUN_145a30f1c(param_1 + 0xaa0);
      if (lVar2 != 0) {
        FUN_145bef474(lVar2);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xb44) = 0;
    }
  }
  return;
}



// FUNCTION 1487c69a4 FUN_1487c69a4 body=890 status=ok
// SIG undefined FUN_1487c69a4(void)

undefined8 * FUN_1487c69a4(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  double *pdVar11;
  uint uVar12;
  double dVar13;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)((longlong)param_1 + 0xf9a) == '\x01') {
    if (*(char *)((longlong)param_1 + 0xf99) == '\x01') {
      dVar13 = (double)param_1[0x15];
      if (dVar13 != 0.0) {
        lVar10 = *(longlong *)((longlong)dVar13 + 0x1c8);
        if (lVar10 == 0) {
          local_a8 = DAT_14c846508;
          local_b8 = (undefined4)DAT_14c8464f8;
          uStack_b4 = DAT_14c8464f8._4_4_;
          uStack_b0 = (undefined4)DAT_14c846500;
          uStack_ac = DAT_14c846500._4_4_;
        }
        else {
          dVar4 = *(double *)(lVar10 + 0x240);
          dVar5 = *(double *)(lVar10 + 0x248);
          dVar6 = *(double *)(lVar10 + 0x250);
          dVar7 = *(double *)(lVar10 + 600);
          pdVar11 = *(double **)(lVar10 + 0x228);
          local_88 = dVar4;
          uStack_80 = dVar5;
          local_78 = dVar6;
          dStack_70 = dVar7;
          if (pdVar11 == (double *)0x0) {
            param_1 = (longlong *)&DAT_00000040;
            pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
            dVar13 = DAT_14c8463d8;
            *pdVar11 = DAT_14c8463d0;
            pdVar11[1] = dVar13;
            dVar13 = DAT_14c8463e8;
            pdVar11[2] = DAT_14c8463e0;
            pdVar11[3] = dVar13;
            dVar13 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
            pdVar11[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
            pdVar11[5] = dVar13;
            dVar13 = DAT_14c846508;
            pdVar11[6] = DAT_14c846508;
            *(double **)(lVar10 + 0x228) = pdVar11;
          }
          auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar11[1]);
          auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar11);
          auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar11[1]) >> 0x20);
          iVar9 = movmskpd(SUB84(dVar13,0),auVar2);
          auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar11[3]);
          auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar11[2]);
          auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar11[3]) >> 0x20);
          uVar12 = movmskpd((int)param_1,auVar3);
          if ((uVar12 & 0x3fffffff) != 0 || iVar9 != 0) {
            pdVar11[2] = local_78;
            pdVar11[3] = dStack_70;
            *(undefined4 *)pdVar11 = (undefined4)local_88;
            *(undefined4 *)((longlong)pdVar11 + 4) = local_88._4_4_;
            *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_80;
            *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_80._4_4_;
            FUN_1448052ee(&local_88,&local_68);
            pdVar11[6] = local_58;
            pdVar11[4] = local_68;
            pdVar11[5] = dStack_60;
          }
          local_a8 = pdVar11[6];
          local_b8 = *(undefined4 *)(pdVar11 + 4);
          uStack_b4 = *(undefined4 *)((longlong)pdVar11 + 0x24);
          uStack_b0 = *(undefined4 *)(pdVar11 + 5);
          uStack_ac = *(undefined4 *)((longlong)pdVar11 + 0x2c);
        }
        *param_2 = 0;
        *(undefined2 *)(param_2 + 4) = 0x18;
        *(undefined4 *)(param_2 + 1) = local_b8;
        *(undefined4 *)((longlong)param_2 + 0xc) = uStack_b4;
        *(undefined4 *)(param_2 + 2) = uStack_b0;
        *(undefined4 *)((longlong)param_2 + 0x14) = uStack_ac;
        param_2[3] = local_a8;
LAB_1487c6b79:
        bVar1 = DAT_14c9a8ab4 & 0x20;
        *(undefined1 *)(param_2 + 5) = 5;
        cVar8 = (bVar1 == 0) * '\x05';
        goto LAB_1487c6ba0;
      }
    }
    else if ((*(char *)((longlong)param_1 + 0xf99) == '\0') &&
            (lVar10 = (**(code **)(*param_1 + 0x9f8))(param_1), lVar10 != 0)) {
      if ((1.9999999494757503e-05 <= ABS((double)param_1[0x4c] - *(double *)(lVar10 + 0x260))) ||
         ((1.9999999494757503e-05 <= ABS((double)param_1[0x4d] - *(double *)(lVar10 + 0x268)) ||
          (1.9999999494757503e-05 <= ABS((double)param_1[0x4e] - *(double *)(lVar10 + 0x270)))))) {
        uStack_80 = *(double *)(lVar10 + 0x268) - (double)param_1[0x4d];
        local_78 = *(double *)(lVar10 + 0x270) - (double)param_1[0x4e];
        local_88 = *(double *)(lVar10 + 0x260) - (double)param_1[0x4c];
        dVar13 = local_78 * local_78 + local_88 * local_88 + uStack_80 * uStack_80;
        if ((dVar13 != 1.0) || (NAN(dVar13))) {
          if (9.99999993922529e-09 <= dVar13) {
            dVar13 = 1.0 / SQRT(dVar13);
            local_78 = local_78 * dVar13;
            uStack_80 = uStack_80 * dVar13;
            local_88 = local_88 * dVar13;
          }
          else {
            local_78 = DAT_14c8464f0;
            local_88 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            uStack_80 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
        }
        FUN_144a79a9c(&local_88,&local_a0);
        *param_2 = 0;
        *(undefined4 *)(param_2 + 1) = local_a0;
        *(undefined4 *)((longlong)param_2 + 0xc) = uStack_9c;
        *(undefined4 *)(param_2 + 2) = uStack_98;
        *(undefined4 *)((longlong)param_2 + 0x14) = uStack_94;
        param_2[3] = local_90;
        *(undefined2 *)(param_2 + 4) = 0x18;
        goto LAB_1487c6b79;
      }
    }
  }
  *param_2 = 0;
  *(undefined2 *)(param_2 + 4) = 0;
  cVar8 = '\0';
  *(undefined1 *)(param_2 + 5) = 0;
LAB_1487c6ba0:
  *(char *)(param_2 + 6) = cVar8;
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1487c6d20 FUN_1487c6d20 body=189 status=ok
// SIG undefined FUN_1487c6d20(void)

undefined8
FUN_1487c6d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,4,0x10);
  puVar1 = local_48;
  local_40 = 4;
  FUN_1487cb5c6(local_48,param_3,param_4);
  *puVar1 = &PTR_FUN_14b3e97b0;
  puVar1[6] = FUN_143ca1038;
  FUN_1457a3c50(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c6dde FUN_1487c6dde body=118 status=ok
// SIG undefined FUN_1487c6dde(void)

void FUN_1487c6dde(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1487cb952(param_2,iVar1);
  }
  *(undefined1 *)(*param_2 + (longlong)iVar1) = 2;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1487cb952(param_2,iVar1);
  }
  *(undefined1 *)(*param_2 + (longlong)iVar1) = 1;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1487cb952(param_2,iVar1);
  }
  *(undefined1 *)(*param_2 + (longlong)iVar1) = 3;
  return;
}



// FUNCTION 1487c6e54 FUN_1487c6e54 body=118 status=ok
// SIG undefined FUN_1487c6e54(void)

void FUN_1487c6e54(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1487cb9d0(param_2,iVar1);
  }
  *(undefined1 *)(*param_2 + (longlong)iVar1) = 0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1487cb9d0(param_2,iVar1);
  }
  *(undefined1 *)(*param_2 + (longlong)iVar1) = 2;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1487cb9d0(param_2,iVar1);
  }
  *(undefined1 *)(*param_2 + (longlong)iVar1) = 3;
  return;
}



// FUNCTION 1487c6eca FUN_1487c6eca body=225 status=ok
// SIG undefined FUN_1487c6eca(void)

undefined8 FUN_1487c6eca(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb71630) {
    FUN_144b3d300();
    if (DAT_14cb71630 == -1) {
      FUN_1446f470e(&DAT_14cb71610,L"GbxActorDef",1);
      FUN_1446f470e(&DAT_14cb71618,L"SpawnedActorGroupName",1);
      FUN_1446f470e(&DAT_14cb71620,L"SpawnedActorRegistryName",1);
      FUN_1446f470e(&DAT_14cb71628,L"ActorPartSelections",1);
      _Init_thread_footer();
    }
  }
  lVar2 = *param_2;
  lVar3 = 0;
  do {
    plVar1 = (longlong *)((longlong)&DAT_14cb71610 + lVar3);
    if (lVar2 == *plVar1) break;
    bVar4 = lVar3 != 0x18;
    lVar3 = lVar3 + 8;
  } while (bVar4);
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar2 == *plVar1);
}



// FUNCTION 1487c6fac FUN_1487c6fac body=266 status=ok
// SIG undefined FUN_1487c6fac(void)

void FUN_1487c6fac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x6f8);
  if ((*(int *)(param_1 + 0x700) != *(int *)(param_2 + 0x700) ||
       *(longlong *)(param_1 + 0x6f8) != lVar1) &&
     (*(longlong *)(param_1 + 0x6f8) != lVar1 ||
      *(int *)(param_1 + 0x700) != *(int *)(param_2 + 0x700))) {
    *(longlong *)(param_1 + 0x6f8) = lVar1;
    *(undefined4 *)(param_1 + 0x700) = *(undefined4 *)(param_2 + 0x700);
    *(undefined8 *)(param_1 + 0x708) = 0;
  }
  cVar2 = FUN_144a8940a((undefined8 *)(param_1 + 0x8e4),(undefined8 *)(param_2 + 0x8e4));
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0x8ec) = *(undefined4 *)(param_2 + 0x8ec);
    *(undefined8 *)(param_1 + 0x8e4) = *(undefined8 *)(param_2 + 0x8e4);
  }
  cVar2 = FUN_144a8940a((undefined8 *)(param_1 + 0x8f0),(undefined8 *)(param_2 + 0x8f0));
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0x8f8) = *(undefined4 *)(param_2 + 0x8f8);
    *(undefined8 *)(param_1 + 0x8f0) = *(undefined8 *)(param_2 + 0x8f0);
  }
  if (*(int *)(param_1 + 0xfd0) == *(int *)(param_2 + 0xfd0)) {
    cVar2 = FUN_1487cba4d(*(undefined8 *)(param_1 + 0xfc8),*(undefined8 *)(param_2 + 0xfc8));
    if (cVar2 != '\0') {
      return;
    }
  }
  FUN_14099a466((undefined8 *)(param_1 + 0xfc8),(undefined8 *)(param_2 + 0xfc8));
  return;
}



// FUNCTION 1487c70b6 FUN_1487c70b6 body=175 status=ok
// SIG undefined FUN_1487c70b6(void)

void FUN_1487c70b6(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  cVar1 = FUN_1418823d4(param_1 + 0xd2);
  plVar2 = (longlong *)FUN_14048bbc8(param_1 + 0xeb);
  plVar3 = (longlong *)FUN_14048bbc8(param_1 + 0xeb);
  if ((plVar3 == (longlong *)0x0) || (lVar4 = (**(code **)(*plVar3 + 0xa00))(plVar3), lVar4 == 0)) {
    plVar3 = (longlong *)0x0;
  }
  do {
    if (plVar2 == (longlong *)0x0) {
      return;
    }
    if (cVar1 != '\0') {
      *(undefined8 *)((longlong)plVar2 + 0x8e4) = 0;
      *(undefined8 *)((longlong)plVar2 + 0x8ec) = 0;
      *(undefined8 *)((longlong)plVar2 + 0x8f4) = 0;
    }
    if (plVar2 != param_1) {
      (**(code **)(*param_1 + 0xa28))(param_1,plVar2);
    }
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x9f8))(plVar2);
  } while (plVar2 != plVar3);
  return;
}



// FUNCTION 1487c7166 FUN_1487c7166 body=266 status=ok
// SIG undefined FUN_1487c7166(void)

void FUN_1487c7166(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x6f8);
  if ((*(int *)(param_2 + 0x700) != *(int *)(param_1 + 0x700) ||
       *(longlong *)(param_2 + 0x6f8) != lVar1) &&
     (*(longlong *)(param_2 + 0x6f8) != lVar1 ||
      *(int *)(param_2 + 0x700) != *(int *)(param_1 + 0x700))) {
    *(longlong *)(param_2 + 0x6f8) = lVar1;
    *(undefined4 *)(param_2 + 0x700) = *(undefined4 *)(param_1 + 0x700);
    *(undefined8 *)(param_2 + 0x708) = 0;
  }
  cVar2 = FUN_144a8940a((undefined8 *)(param_2 + 0x8e4),(undefined8 *)(param_1 + 0x8e4));
  if (cVar2 != '\0') {
    *(undefined4 *)(param_2 + 0x8ec) = *(undefined4 *)(param_1 + 0x8ec);
    *(undefined8 *)(param_2 + 0x8e4) = *(undefined8 *)(param_1 + 0x8e4);
  }
  cVar2 = FUN_144a8940a((undefined8 *)(param_2 + 0x8f0),(undefined8 *)(param_1 + 0x8f0));
  if (cVar2 != '\0') {
    *(undefined4 *)(param_2 + 0x8f8) = *(undefined4 *)(param_1 + 0x8f8);
    *(undefined8 *)(param_2 + 0x8f0) = *(undefined8 *)(param_1 + 0x8f0);
  }
  if (*(int *)(param_2 + 0xfd0) == *(int *)(param_1 + 0xfd0)) {
    cVar2 = FUN_1487cba4d(*(undefined8 *)(param_2 + 0xfc8),*(undefined8 *)(param_1 + 0xfc8));
    if (cVar2 != '\0') {
      return;
    }
  }
  FUN_14099a466((undefined8 *)(param_2 + 0xfc8),(undefined8 *)(param_1 + 0xfc8));
  return;
}



// FUNCTION 1487c7270 FUN_1487c7270 body=343 status=ok
// SIG undefined FUN_1487c7270(void)

ulonglong FUN_1487c7270(ulonglong param_1)

{
  int *piVar1;
  longlong *plVar2;
  double *pdVar3;
  float *pfVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  double *pdVar11;
  longlong *plVar12;
  undefined7 uVar13;
  bool bVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar10 = *(longlong *)(param_1 + 0xb0);
  if (lVar10 == 0) {
    lVar10 = FUN_1448abda6(param_1);
  }
  FUN_1403679b6(&local_28,lVar10);
  uVar13 = (undefined7)(param_1 >> 8);
  if (local_20 != (longlong *)0x0) {
    iVar9 = (int)local_20[1];
    do {
      if (iVar9 == 0) {
        plVar12 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar8 = (int)local_20[1];
      bVar14 = iVar9 == iVar8;
      if (bVar14) {
        *(int *)(local_20 + 1) = iVar9 + 1;
        iVar8 = iVar9;
      }
      iVar9 = iVar8;
      UNLOCK();
      plVar12 = local_20;
    } while (!bVar14);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar12 != (longlong *)0x0) {
      if (local_28 == 0) {
        param_1 = CONCAT71(uVar13,1);
      }
      else if ((longlong)*(int *)(local_28 + 0x1b8) == 0) {
        param_1 = 0;
      }
      else {
        pdVar3 = (double *)(param_1 + 0x270);
        pfVar4 = (float *)(param_1 + 4000);
        pdVar11 = *(double **)(local_28 + 0x1b0);
        pdVar7 = pdVar11 + (longlong)*(int *)(local_28 + 0x1b8) * 3;
        pdVar5 = (double *)(param_1 + 0x260);
        pdVar6 = (double *)(param_1 + 0x268);
        do {
          dVar15 = *pdVar11 - *pdVar5;
          dVar17 = pdVar11[1] - *pdVar6;
          dVar16 = pdVar11[2] - *pdVar3;
          bVar14 = (float)(dVar16 * dVar16 + dVar17 * dVar17 + dVar15 * dVar15) <= *pfVar4 * *pfVar4
          ;
          param_1 = CONCAT71((int7)(param_1 >> 8),bVar14);
          if (bVar14) break;
          pdVar11 = pdVar11 + 3;
        } while (pdVar11 != pdVar7);
      }
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
      goto LAB_1487c7382;
    }
  }
  param_1 = CONCAT71(uVar13,1);
LAB_1487c7382:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1 & 0xffffffff;
}



// FUNCTION 1487c73c8 FUN_1487c73c8 body=399 status=ok
// SIG undefined FUN_1487c73c8(void)

void FUN_1487c73c8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  float fVar11;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar5 = FUN_1487c7270();
  if (cVar5 != '\0') {
    lVar7 = *(longlong *)(param_1 + 0xb0);
    if ((lVar7 != 0) || (lVar7 = FUN_1448abda6(param_1), lVar7 != 0)) {
      if (*(longlong *)(lVar7 + 0x1f0) == 0) {
        puVar8 = (undefined8 *)(lVar7 + 0x458);
      }
      else {
        puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
      }
      uVar3 = *puVar8;
      puVar8 = (undefined8 *)(param_1 + 0x6e8);
      lVar7 = FUN_144a61814(uVar3,puVar8);
      if (lVar7 != 0) {
        FUN_1405a424c(uVar3,*puVar8);
      }
      *puVar8 = 0;
    }
    lVar7 = *(longlong *)(param_1 + 0xb0);
    if (*(char *)(param_1 + 0x6f1) == '\0') {
      *(undefined1 *)(param_1 + 0x6f1) = 1;
      if ((lVar7 == 0) && (lVar7 = FUN_1448abda6(param_1), lVar7 == 0)) {
        fVar11 = 0.0;
      }
      else {
        fVar11 = (float)*(double *)(lVar7 + 0x6d0);
      }
      *(float *)(param_1 + 0x6f4) = fVar11;
      lVar7 = *(longlong *)(param_1 + 0xb0);
    }
    if (lVar7 == 0) {
      lVar7 = FUN_1448abda6(param_1);
    }
    FUN_140937dea(&local_30,lVar7);
    if (local_28 != (longlong *)0x0) {
      iVar6 = (int)local_28[1];
      do {
        if (iVar6 == 0) {
          plVar9 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)local_28[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(local_28 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
        plVar9 = local_28;
      } while (!bVar10);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      if (plVar9 != (longlong *)0x0) {
        if (local_30 != (longlong *)0x0) {
          (**(code **)(*local_30 + 0x20))(local_30,param_1);
        }
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487c7558 FUN_1487c7558 body=151 status=ok
// SIG undefined FUN_1487c7558(void)

void FUN_1487c7558(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if (*param_2 != 0) {
    plVar2 = (longlong *)FUN_14048bbc8(param_1 + 0x758);
    plVar3 = (longlong *)FUN_14048bbc8(param_1 + 0x758);
    if ((plVar3 == (longlong *)0x0) || (lVar4 = (**(code **)(*plVar3 + 0xa00))(plVar3), lVar4 == 0))
    {
      plVar3 = (longlong *)0x0;
    }
    if (plVar2 != (longlong *)0x0) {
      do {
        pcVar1 = (code *)*param_2;
        plVar6 = (longlong *)param_2[2];
        if ((longlong *)param_2[2] == (longlong *)0x0) {
          plVar6 = param_2 + 4;
        }
        uVar5 = (**(code **)(*plVar6 + 8))();
        (*pcVar1)(uVar5,plVar2);
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x9f8))(plVar2);
      } while ((plVar2 != plVar3) && (plVar2 != (longlong *)0x0));
    }
    return;
  }
  return;
}



// FUNCTION 1487c75f0 FUN_1487c75f0 body=139 status=ok
// SIG undefined FUN_1487c75f0(void)

void FUN_1487c75f0(longlong param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)FUN_1400d690e(param_1 + 0xd8);
  if (plVar8 != (longlong *)0x0) {
    cVar7 = (**(code **)(*plVar8 + 0x90))(plVar8);
    if ((param_3 == 1) && (cVar7 != '\0')) {
      uVar5 = *(undefined8 *)(param_1 + -0x3c0);
      uVar6 = *(undefined8 *)(param_1 + -0x3b8);
      uVar2 = *(undefined8 *)(param_1 + -0x3b0);
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1403e3958(param_2,iVar3);
      }
      lVar4 = *param_2;
      puVar1 = (undefined8 *)(lVar4 + (longlong)iVar3 * 0x18);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = uVar2;
    }
  }
  return;
}



// FUNCTION 1487c767c FUN_1487c767c body=439 status=ok
// SIG undefined FUN_1487c767c(void)

void FUN_1487c767c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  undefined4 local_f8 [2];
  undefined8 local_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  undefined1 local_d7;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined4 local_a0;
  undefined5 uStack_9c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(char *)(param_1 + 0xb40) == '\0') {
    if (*(char *)(param_1 + 0xa9b) == '\x01') {
      lVar1 = FUN_145a30f1c(param_1 + 0xaa0);
      if (lVar1 != 0) {
        FUN_143ca10a8(param_1);
        if (*(char *)(param_1 + 0xad0) == '\x01') {
          FUN_1489507be(lVar1,0);
        }
        else {
          FUN_1489507ae(lVar1,0);
        }
        *(undefined1 *)(param_1 + 0xb40) = 1;
      }
    }
    else {
      local_f8[0] = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      uStack_e7 = 0;
      uStack_e0 = 0;
      uStack_df = 0;
      local_d7 = 1;
      local_d4 = 0x3f800000;
      local_d0 = 0;
      local_c8 = 0;
      local_c4 = 2;
      local_c0 = 0;
      local_b8 = 0xc3769d17;
      local_88 = 0;
      uStack_80 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      uStack_a7 = 0;
      local_a0 = 0;
      uStack_9c = 0;
      local_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0x3ff00000;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_44 = 0x3ff00000;
      uStack_40 = 0;
      uStack_3c = 0x3ff00000;
      local_38 = 0x3ff0000000000000;
      uStack_30 = 0;
      FUN_143ca165e(param_1,0,local_f8);
      FUN_1489506c4(local_f8,param_1 + 0x240);
      local_100 = 0;
      lVar1 = FUN_148951dca(param_2,local_f8);
      if (lVar1 != 0) {
        FUN_140ef5ee2(lVar1);
        FUN_14485c47a(param_1 + 0xb44,lVar1);
        *(undefined1 *)(param_1 + 0xb40) = 1;
      }
      FUN_140e457df(CONCAT71(uStack_a7,uStack_a8),local_a0);
      if (CONCAT71(uStack_a7,uStack_a8) != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c7834 FUN_1487c7834 body=145 status=ok
// SIG undefined FUN_1487c7834(void)

ulonglong FUN_1487c7834(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(char *)((longlong)param_1 + 0xa99) == '\0') {
    lVar1 = (**(code **)(*param_1 + 0x9f8))(param_1);
    if (lVar1 == 0) {
      if (*(char *)((longlong)param_1 + 0xd23) == '\x01') {
        return 1;
      }
    }
    else if (*(char *)(lVar1 + 0x6f1) != '\0') {
      return 1;
    }
  }
  if (*(char *)((longlong)param_1 + 0xa9b) == '\x01') {
    lVar1 = FUN_145a30f1c(param_1 + 0x154);
    if (lVar1 != 0) {
      uVar2 = FUN_14598a0a0(lVar1);
      return uVar2;
    }
  }
  else {
    lVar1 = FUN_14479d2ce((longlong)param_1 + 0xb44);
    if (lVar1 != 0) {
      uVar2 = FUN_1432dd8b8(lVar1);
      return uVar2 ^ 1;
    }
  }
  return 0;
}



// FUNCTION 1487c78c6 FUN_1487c78c6 body=141 status=ok
// SIG undefined FUN_1487c78c6(void)

undefined8 * FUN_1487c78c6(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0xa9b) == '\x01') {
    lVar2 = FUN_145a30f1c(param_1 + 0xaa0);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x3d8) != 0)) {
      lVar3 = FUN_140861c56();
      lVar2 = *(longlong *)(lVar2 + 0x3d8);
      if (((lVar2 != 0) &&
          (((lVar3 != 0 && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
           (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) goto LAB_1487c78e4;
    }
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0xac8);
    if (lVar2 != 0) {
LAB_1487c78e4:
      FUN_14895122e(lVar2,param_2);
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1487c7954 FUN_1487c7954 body=381 status=ok
// SIG undefined FUN_1487c7954(void)

void FUN_1487c7954(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  code **local_98;
  undefined1 local_90 [8];
  longlong local_88;
  longlong *local_80;
  code *local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1487c7ad2();
  lVar3 = FUN_1407ca824(param_2);
  if (lVar3 != 0) {
    lVar4 = FUN_140963804(param_1 + 0xb50,param_2);
    if (lVar4 != 0) {
      local_98 = &local_78;
      local_58 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = (code *)0x0;
      uStack_70 = 0;
      uStack_50 = 0x8000000000;
      local_48 = 0xffffffff;
      FUN_14122243a(lVar3,&local_88,lVar4,0);
      uStack_30 = uStack_30 & 0xffffffff00000000;
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(&local_78);
      plVar1 = local_80;
      if (local_88 != 0) {
        *(longlong *)(param_1 + 0xb70) = local_88;
        plVar5 = *(longlong **)(param_1 + 0xb78);
        if (plVar5 != local_80) {
          if (local_80 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_80 + 0xc) = *(int *)((longlong)local_80 + 0xc) + 1;
            UNLOCK();
            plVar5 = *(longlong **)(param_1 + 0xb78);
          }
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))();
            }
          }
          *(longlong **)(param_1 + 0xb78) = plVar1;
        }
        local_78 = FUN_1487c7c66;
        uStack_70 = uStack_70 & 0xffffffff00000000;
        FUN_1487c7b66(local_88 + 0x18,local_90,param_1);
      }
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_80 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)local_80 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_80 + 0x10))(local_80);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c7ad2 FUN_1487c7ad2 body=147 status=ok
// SIG undefined FUN_1487c7ad2(void)

void FUN_1487c7ad2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = (longlong *)(param_1 + 0xb70);
  plVar4 = *(longlong **)(param_1 + 0xb78);
  if (plVar4 == (longlong *)0x0) {
    *plVar3 = 0;
    *(undefined8 *)(param_1 + 0xb78) = 0;
  }
  else {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_1487c7b31;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    if (*plVar3 != 0) {
      FUN_140457ffc(*plVar3 + 0x18,param_1);
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
LAB_1487c7b31:
    plVar4 = *(longlong **)(param_1 + 0xb78);
    *plVar3 = 0;
    *(undefined8 *)(param_1 + 0xb78) = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001487c7b53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1487c7b66 FUN_1487c7b66 body=254 status=ok
// SIG undefined FUN_1487c7b66(void)

undefined8
FUN_1487c7b66(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b3e9c20;
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
  *local_48 = &PTR_FUN_14b3e9970;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140ebcfd8(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c7c66 FUN_1487c7c66 body=187 status=ok
// SIG undefined FUN_1487c7c66(void)

void FUN_1487c7c66(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar3 = (longlong *)param_1[0x16f];
  if (plVar3 == (longlong *)0x0) {
LAB_1487c7c7c:
    FUN_1487c7ad2(param_1);
    return;
  }
  iVar6 = (int)plVar3[1];
  do {
    if (iVar6 == 0) goto LAB_1487c7c7c;
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
  if (param_1[0x16e] == 0) {
    FUN_1487c7ad2(param_1);
  }
  else {
    lVar4 = *(longlong *)(param_1[0x16e] + 0x38);
    FUN_1487c7ad2(param_1);
    if (lVar4 != 0) {
      lVar7 = (**(code **)(*param_1 + 0x9f8))(param_1);
      if (lVar7 == 0) {
        if (*(char *)((longlong)param_1 + 0xd23) == '\x01') goto LAB_1487c7cb0;
      }
      else if (*(char *)(lVar7 + 0x6f1) != '\0') goto LAB_1487c7cb0;
      FUN_1487c7954(param_1,lVar4);
    }
  }
LAB_1487c7cb0:
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
                    /* WARNING: Could not recover jumptable at 0x0001487c7cd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 1487c7d26 FUN_1487c7d26 body=38 status=ok
// SIG undefined FUN_1487c7d26(void)

undefined8 FUN_1487c7d26(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487c7d52 FUN_1487c7d52 body=38 status=ok
// SIG undefined FUN_1487c7d52(void)

undefined8 FUN_1487c7d52(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487c7d7e FUN_1487c7d7e body=38 status=ok
// SIG undefined FUN_1487c7d7e(void)

undefined8 FUN_1487c7d7e(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487c7daa FUN_1487c7daa body=38 status=ok
// SIG undefined FUN_1487c7daa(void)

undefined8 FUN_1487c7daa(undefined8 param_1,int param_2)

{
  FUN_140cd0d0c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487c7dd0 FUN_1487c7dd0 body=31 status=ok
// SIG undefined FUN_1487c7dd0(void)

undefined8 FUN_1487c7dd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487c7e08 FUN_1487c7e08 body=93 status=ok
// SIG undefined FUN_1487c7e08(void)

void FUN_1487c7e08(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e8be0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487c7e66 FUN_1487c7e66 body=126 status=ok
// SIG undefined FUN_1487c7e66(void)

void FUN_1487c7e66(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e8be0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487c7ed5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487c7ee4 FUN_1487c7ee4 body=21 status=ok
// SIG undefined FUN_1487c7ee4(void)

undefined8 FUN_1487c7ee4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1487c7efa FUN_1487c7efa body=326 status=ok
// SIG undefined FUN_1487c7efa(void)

void FUN_1487c7efa(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
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



// FUNCTION 1487c8042 FUN_1487c8042 body=297 status=ok
// SIG undefined FUN_1487c8042(void)

void FUN_1487c8042(longlong *param_1)

{
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)
                [*(byte *)(*local_68 + (longlong)iStack_4c * 0x60 + 0x50)])();
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c8170 FUN_1487c8170 body=81 status=ok
// SIG undefined FUN_1487c8170(void)

undefined8 FUN_1487c8170(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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



// FUNCTION 1487c81c8 FUN_1487c81c8 body=118 status=ok
// SIG undefined FUN_1487c81c8(void)

void FUN_1487c81c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab18ff0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e8c50;
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



// FUNCTION 1487c823e FUN_1487c823e body=118 status=ok
// SIG undefined FUN_1487c823e(void)

void FUN_1487c823e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab18ff0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e8c50;
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



// FUNCTION 1487c82b4 FUN_1487c82b4 body=156 status=ok
// SIG undefined FUN_1487c82b4(void)

void FUN_1487c82b4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ab18ff0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e8c50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487c8340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487c8350 FUN_1487c8350 body=104 status=ok
// SIG undefined FUN_1487c8350(void)

void FUN_1487c8350(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001487c839d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001487c83ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1487c83b8 FUN_1487c83b8 body=48 status=ok
// SIG undefined FUN_1487c83b8(void)

void FUN_1487c83b8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1487c83e8 FUN_1487c83e8 body=132 status=ok
// SIG undefined FUN_1487c83e8(void)

void FUN_1487c83e8(longlong param_1,int param_2)

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



// FUNCTION 1487c846e FUN_1487c846e body=79 status=ok
// SIG undefined FUN_1487c846e(void)

undefined8 * FUN_1487c846e(undefined8 *param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 7) == '\x01') {
    *param_1 = &PTR_FUN_14affcd20;
    FUN_14096d529(param_1[5],*(undefined4 *)(param_1 + 6));
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1487c84be(param_1,param_2);
  *(undefined1 *)(param_1 + 7) = 1;
  return param_1;
}



// FUNCTION 1487c84be FUN_1487c84be body=119 status=ok
// SIG undefined FUN_1487c84be(void)

undefined8 * FUN_1487c84be(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14affcd20;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  FUN_1487c8536(param_1 + 2,param_2 + 0x10);
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_148621ba4(param_1 + 5,iVar1,0);
    FUN_148621c17(param_1[5],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1487c8536 FUN_1487c8536 body=71 status=ok
// SIG undefined FUN_1487c8536(void)

undefined8 * FUN_1487c8536(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1487c8580 FUN_1487c8580 body=31 status=ok
// SIG undefined FUN_1487c8580(void)

undefined8 FUN_1487c8580(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487c85ba FUN_1487c85ba body=101 status=ok
// SIG undefined FUN_1487c85ba(void)

void FUN_1487c85ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e7b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e8d50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487c8620 FUN_1487c8620 body=101 status=ok
// SIG undefined FUN_1487c8620(void)

void FUN_1487c8620(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e7b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e8d50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487c8686 FUN_1487c8686 body=134 status=ok
// SIG undefined FUN_1487c8686(void)

void FUN_1487c8686(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e7b60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e8d50;
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
                    /* WARNING: Could not recover jumptable at 0x0001487c86fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487c870c FUN_1487c870c body=62 status=ok
// SIG undefined FUN_1487c870c(void)

void FUN_1487c870c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487c8747. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1487c8750 FUN_1487c8750 body=29 status=ok
// SIG undefined FUN_1487c8750(void)

bool FUN_1487c8750(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1487c876e FUN_1487c876e body=26 status=ok
// SIG undefined FUN_1487c876e(void)

bool FUN_1487c876e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1487c8788 FUN_1487c8788 body=101 status=ok
// SIG undefined FUN_1487c8788(void)

void FUN_1487c8788(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e8dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487c87ee FUN_1487c87ee body=134 status=ok
// SIG undefined FUN_1487c87ee(void)

void FUN_1487c87ee(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e8dc0;
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
                    /* WARNING: Could not recover jumptable at 0x0001487c8865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487c8874 FUN_1487c8874 body=146 status=ok
// SIG undefined FUN_1487c8874(void)

bool FUN_1487c8874(longlong param_1)

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



// FUNCTION 1487c8907 FUN_1487c8907 body=168 status=ok
// SIG undefined FUN_1487c8907(void)

void FUN_1487c8907(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0xffffffff;
  local_48 = 0x20;
  puVar4 = param_1 + 1;
  local_50 = param_3;
  if (puVar4 != param_2 && param_1 != param_2) {
    lVar3 = 1;
    do {
      lVar2 = FUN_14051345a(&local_50,lVar3 + 1);
      if (lVar3 != lVar2) {
        uVar1 = *puVar4;
        *puVar4 = param_1[lVar2];
        param_1[lVar2] = uVar1;
      }
      puVar4 = puVar4 + 1;
      lVar3 = lVar3 + 1;
    } while (puVar4 != param_2);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c89c4 FUN_1487c89c4 body=29 status=ok
// SIG undefined FUN_1487c89c4(void)

bool FUN_1487c89c4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1487c89e2 FUN_1487c89e2 body=26 status=ok
// SIG undefined FUN_1487c89e2(void)

bool FUN_1487c89e2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1487c89fc FUN_1487c89fc body=101 status=ok
// SIG undefined FUN_1487c89fc(void)

void FUN_1487c89fc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e8f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487c8a62 FUN_1487c8a62 body=134 status=ok
// SIG undefined FUN_1487c8a62(void)

void FUN_1487c8a62(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e8f80;
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
                    /* WARNING: Could not recover jumptable at 0x0001487c8ad9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487c8ae8 FUN_1487c8ae8 body=146 status=ok
// SIG undefined FUN_1487c8ae8(void)

bool FUN_1487c8ae8(longlong param_1)

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



// FUNCTION 1487c8b7c FUN_1487c8b7c body=31 status=ok
// SIG undefined FUN_1487c8b7c(void)

undefined8 FUN_1487c8b7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487c8bb6 FUN_1487c8bb6 body=29 status=ok
// SIG undefined FUN_1487c8bb6(void)

bool FUN_1487c8bb6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1487c8bd4 FUN_1487c8bd4 body=26 status=ok
// SIG undefined FUN_1487c8bd4(void)

bool FUN_1487c8bd4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1487c8bee FUN_1487c8bee body=101 status=ok
// SIG undefined FUN_1487c8bee(void)

void FUN_1487c8bee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e8ff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487c8c54 FUN_1487c8c54 body=101 status=ok
// SIG undefined FUN_1487c8c54(void)

void FUN_1487c8c54(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e8ff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487c8cba FUN_1487c8cba body=134 status=ok
// SIG undefined FUN_1487c8cba(void)

void FUN_1487c8cba(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8b4c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e8ff0;
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
                    /* WARNING: Could not recover jumptable at 0x0001487c8d31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487c8d40 FUN_1487c8d40 body=44 status=ok
// SIG undefined FUN_1487c8d40(void)

void FUN_1487c8d40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487c8d69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1487c8d86 FUN_1487c8d86 body=101 status=ok
// SIG undefined FUN_1487c8d86(void)

void FUN_1487c8d86(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e9060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487c8dec FUN_1487c8dec body=101 status=ok
// SIG undefined FUN_1487c8dec(void)

void FUN_1487c8dec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e9060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487c8e52 FUN_1487c8e52 body=134 status=ok
// SIG undefined FUN_1487c8e52(void)

void FUN_1487c8e52(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e9060;
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
                    /* WARNING: Could not recover jumptable at 0x0001487c8ec9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487c8ed8 FUN_1487c8ed8 body=44 status=ok
// SIG undefined FUN_1487c8ed8(void)

void FUN_1487c8ed8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487c8f01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1487c8f20 FUN_1487c8f20 body=101 status=ok
// SIG undefined FUN_1487c8f20(void)

void FUN_1487c8f20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e90d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487c8f86 FUN_1487c8f86 body=101 status=ok
// SIG undefined FUN_1487c8f86(void)

void FUN_1487c8f86(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e90d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487c8fec FUN_1487c8fec body=134 status=ok
// SIG undefined FUN_1487c8fec(void)

void FUN_1487c8fec(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e90d0;
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
                    /* WARNING: Could not recover jumptable at 0x0001487c9063. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487c9072 FUN_1487c9072 body=44 status=ok
// SIG undefined FUN_1487c9072(void)

void FUN_1487c9072(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487c909b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1487c909e FUN_1487c909e body=31 status=ok
// SIG undefined FUN_1487c909e(void)

undefined8 FUN_1487c909e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487c90d8 FUN_1487c90d8 body=29 status=ok
// SIG undefined FUN_1487c90d8(void)

bool FUN_1487c90d8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1487c90f6 FUN_1487c90f6 body=26 status=ok
// SIG undefined FUN_1487c90f6(void)

bool FUN_1487c90f6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1487c9110 FUN_1487c9110 body=101 status=ok
// SIG undefined FUN_1487c9110(void)

void FUN_1487c9110(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac89870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e9140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487c9176 FUN_1487c9176 body=101 status=ok
// SIG undefined FUN_1487c9176(void)

void FUN_1487c9176(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac89870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e9140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487c91dc FUN_1487c91dc body=134 status=ok
// SIG undefined FUN_1487c91dc(void)

void FUN_1487c91dc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac89870;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e9140;
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
                    /* WARNING: Could not recover jumptable at 0x0001487c9253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487c9262 FUN_1487c9262 body=62 status=ok
// SIG undefined FUN_1487c9262(void)

void FUN_1487c9262(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487c929d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1487c92a0 FUN_1487c92a0 body=177 status=ok
// SIG undefined FUN_1487c92a0(void)

bool FUN_1487c92a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 1487c9352 FUN_1487c9352 body=61 status=ok
// SIG undefined FUN_1487c9352(void)

longlong FUN_1487c9352(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    lVar2 = FUN_1412308c8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1487c938f FUN_1487c938f body=15 status=ok
// SIG undefined FUN_1487c938f(void)

void FUN_1487c938f(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 1487c939e FUN_1487c939e body=147 status=ok
// SIG undefined FUN_1487c939e(void)

void FUN_1487c939e(longlong param_1,int param_2)

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



// FUNCTION 1487c9432 FUN_1487c9432 body=62 status=ok
// SIG undefined FUN_1487c9432(void)

void FUN_1487c9432(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1487c9470(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1487c9470 FUN_1487c9470 body=112 status=ok
// SIG undefined FUN_1487c9470(void)

ulonglong FUN_1487c9470(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1487c94aa;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_1487c94aa:
  return param_2 & 0xffffffff;
}



// FUNCTION 1487c94e0 FUN_1487c94e0 body=100 status=ok
// SIG undefined FUN_1487c94e0(void)

void FUN_1487c94e0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 4;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x14;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 2;
  return;
}



// FUNCTION 1487c9544 FUN_1487c9544 body=147 status=ok
// SIG undefined FUN_1487c9544(void)

void FUN_1487c9544(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x120,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x120)) {
      uVar5 = uVar4 / 0x120 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x120,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487c95d8 FUN_1487c95d8 body=48 status=ok
// SIG undefined FUN_1487c95d8(void)

void FUN_1487c95d8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1487c9608 FUN_1487c9608 body=62 status=ok
// SIG undefined FUN_1487c9608(void)

void FUN_1487c9608(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1487c9646(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x120,0x10);
  }
  return;
}



// FUNCTION 1487c9646 FUN_1487c9646 body=112 status=ok
// SIG undefined FUN_1487c9646(void)

ulonglong FUN_1487c9646(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x120) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1487c9680;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x120,0x10);
      param_2 = param_2 / 0x120;
    }
  }
LAB_1487c9680:
  return param_2 & 0xffffffff;
}



// FUNCTION 1487c96b6 FUN_1487c96b6 body=614 status=ok
// SIG undefined FUN_1487c96b6(void)

void FUN_1487c96b6(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_140612240(param_3,iVar2);
        }
        *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1487c96b6(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487c991e FUN_1487c991e body=308 status=ok
// SIG undefined FUN_1487c991e(void)

void FUN_1487c991e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_140612240(param_3,iVar3);
        }
        *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c9a54 FUN_1487c9a54 body=739 status=ok
// SIG undefined FUN_1487c9a54(void)

void FUN_1487c9a54(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar12 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar12;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar11 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar11) || (uStack_130 != lVar12)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1487c9b78:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_1487c9b8c;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_1487c9b78;
LAB_1487c9b8c:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_140612240(param_3,iVar2);
          }
          *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        }
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar8 != 0)) {
          lVar7 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar7 * 8) = lVar8;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar12 || iStack_144 != iVar11));
    lVar12 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar12 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar10 + lVar8);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1487c9a54(uVar4,&local_168,param_3);
        lVar8 = lVar8 + 8;
      } while (lVar12 * 8 != lVar8);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487c9d38 FUN_1487c9d38 body=31 status=ok
// SIG undefined FUN_1487c9d38(void)

undefined8 FUN_1487c9d38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487c9d72 FUN_1487c9d72 body=26 status=ok
// SIG undefined FUN_1487c9d72(void)

bool FUN_1487c9d72(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1487c9d8c FUN_1487c9d8c body=101 status=ok
// SIG undefined FUN_1487c9d8c(void)

void FUN_1487c9d8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6bc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e91b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487c9df2 FUN_1487c9df2 body=101 status=ok
// SIG undefined FUN_1487c9df2(void)

void FUN_1487c9df2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6bc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e91b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487c9e58 FUN_1487c9e58 body=134 status=ok
// SIG undefined FUN_1487c9e58(void)

void FUN_1487c9e58(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ae6bc70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e91b0;
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
                    /* WARNING: Could not recover jumptable at 0x0001487c9ecf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487c9ede FUN_1487c9ede body=42 status=ok
// SIG undefined FUN_1487c9ede(void)

void FUN_1487c9ede(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487c9f05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1487c9f08 FUN_1487c9f08 body=44 status=ok
// SIG undefined FUN_1487c9f08(void)

void FUN_1487c9f08(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 4) = 0x461c40003f800000;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x43b40000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 1487c9f34 FUN_1487c9f34 body=197 status=ok
// SIG undefined FUN_1487c9f34(void)

void FUN_1487c9f34(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cb71560;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14cb7156c = DAT_14cb7156c + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cb71558 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cb71558 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cb7156c = DAT_14cb7156c + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_1487c9fce;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14cb7156c = DAT_14cb7156c + -1;
LAB_1487c9fce:
  FUN_14474d06a(&DAT_14cb71558,0);
  return;
}



// FUNCTION 1487c9ffa FUN_1487c9ffa body=157 status=ok
// SIG undefined FUN_1487c9ffa(void)

void FUN_1487c9ffa(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1c)) {
      uVar5 = uVar4 / 0x1c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487ca098 FUN_1487ca098 body=116 status=ok
// SIG undefined FUN_1487ca098(void)

void FUN_1487ca098(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x4c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x4c) = (int)uVar4;
    FUN_1487ca10e(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1487ca10e FUN_1487ca10e body=133 status=ok
// SIG undefined FUN_1487ca10e(void)

void FUN_1487ca10e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 1487ca194 FUN_1487ca194 body=101 status=ok
// SIG undefined FUN_1487ca194(void)

void FUN_1487ca194(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
    if (4 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 4)) {
        uVar2 = uVar1 >> 4 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = (int)uVar2;
    FUN_1487ca10e(param_1,*(undefined4 *)(param_1 + 0x48),uVar2,0x10);
    return;
  }
  return;
}



// FUNCTION 1487ca1fa FUN_1487ca1fa body=31 status=ok
// SIG undefined FUN_1487ca1fa(void)

undefined8 FUN_1487ca1fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487ca22e FUN_1487ca22e body=85 status=ok
// SIG undefined FUN_1487ca22e(void)

void FUN_1487ca22e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e9a90;
  return;
}



// FUNCTION 1487ca284 FUN_1487ca284 body=118 status=ok
// SIG undefined FUN_1487ca284(void)

void FUN_1487ca284(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e9a90;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487ca2eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487ca2fa FUN_1487ca2fa body=105 status=ok
// SIG undefined FUN_1487ca2fa(void)

undefined8 FUN_1487ca2fa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145d0c4d2(param_1 + 0x18,local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ca364 FUN_1487ca364 body=24 status=ok
// SIG undefined FUN_1487ca364(void)

void FUN_1487ca364(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487ca378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1487ca37c FUN_1487ca37c body=29 status=ok
// SIG undefined FUN_1487ca37c(void)

undefined8 FUN_1487ca37c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487ca3b4 FUN_1487ca3b4 body=29 status=ok
// SIG undefined FUN_1487ca3b4(void)

bool FUN_1487ca3b4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1487ca3d2 FUN_1487ca3d2 body=26 status=ok
// SIG undefined FUN_1487ca3d2(void)

bool FUN_1487ca3d2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1487ca3ec FUN_1487ca3ec body=24 status=ok
// SIG undefined FUN_1487ca3ec(void)

bool FUN_1487ca3ec(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1487ca404 FUN_1487ca404 body=101 status=ok
// SIG undefined FUN_1487ca404(void)

void FUN_1487ca404(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e9290;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487ca46a FUN_1487ca46a body=101 status=ok
// SIG undefined FUN_1487ca46a(void)

void FUN_1487ca46a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e9290;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487ca4d0 FUN_1487ca4d0 body=134 status=ok
// SIG undefined FUN_1487ca4d0(void)

void FUN_1487ca4d0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e9290;
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
                    /* WARNING: Could not recover jumptable at 0x0001487ca547. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487ca556 FUN_1487ca556 body=52 status=ok
// SIG undefined FUN_1487ca556(void)

void FUN_1487ca556(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487ca587. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return;
}



// FUNCTION 1487ca58a FUN_1487ca58a body=162 status=ok
// SIG undefined FUN_1487ca58a(void)

bool FUN_1487ca58a(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
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
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ca62e FUN_1487ca62e body=31 status=ok
// SIG undefined FUN_1487ca62e(void)

undefined8 FUN_1487ca62e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487ca668 FUN_1487ca668 body=101 status=ok
// SIG undefined FUN_1487ca668(void)

void FUN_1487ca668(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9d10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e9300;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487ca6ce FUN_1487ca6ce body=101 status=ok
// SIG undefined FUN_1487ca6ce(void)

void FUN_1487ca6ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9d10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e9300;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487ca734 FUN_1487ca734 body=134 status=ok
// SIG undefined FUN_1487ca734(void)

void FUN_1487ca734(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9d10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e9300;
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
                    /* WARNING: Could not recover jumptable at 0x0001487ca7ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487ca7ba FUN_1487ca7ba body=44 status=ok
// SIG undefined FUN_1487ca7ba(void)

void FUN_1487ca7ba(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487ca7e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1487ca7e8 FUN_1487ca7e8 body=197 status=ok
// SIG undefined FUN_1487ca7e8(void)

void FUN_1487ca7e8(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cb71588;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14cb71594 = DAT_14cb71594 + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cb71580 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cb71580 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cb71594 = DAT_14cb71594 + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_1487ca882;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14cb71594 = DAT_14cb71594 + -1;
LAB_1487ca882:
  FUN_14474d06a(&DAT_14cb71580,0);
  return;
}



// FUNCTION 1487ca8ae FUN_1487ca8ae body=316 status=ok
// SIG undefined FUN_1487ca8ae(void)

void FUN_1487ca8ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_148 [40];
  undefined1 *local_120;
  code *local_118;
  undefined1 **local_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_48 = (undefined1 *)0x0;
  local_40 = 0x1000000000;
  local_110 = &local_120;
  local_118 = FUN_1487ca9ec;
  puVar1 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  local_120 = local_108;
  uVar4 = FUN_140094010();
  if (puVar1 != puVar2) {
    do {
      puVar8 = puVar1 + 1;
      cVar3 = FUN_14686d482(uVar4,*puVar1,&local_118,0);
      if (cVar3 == '\0') break;
      puVar1 = puVar8;
    } while (puVar8 != puVar2);
  }
  FUN_1447a993c(param_1,local_40 & 0xffffffff);
  if (0 < (int)local_40) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      puVar7 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar7 = local_108;
      }
      FUN_140093fc6(param_1,uVar6 & 0xffffffff,puVar7 + lVar5);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while ((longlong)uVar6 < (longlong)(int)local_40);
  }
  FUN_14009404e(param_1);
  FUN_141238f06(param_1,*(undefined4 *)(param_1 + 4));
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ca9ec FUN_1487ca9ec body=91 status=ok
// SIG undefined FUN_1487ca9ec(void)

undefined8 FUN_1487ca9ec(longlong *param_1,undefined8 *param_2)

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



// FUNCTION 1487caa48 FUN_1487caa48 body=164 status=ok
// SIG undefined FUN_1487caa48(void)

void FUN_1487caa48(longlong *param_1,undefined8 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1487caac8;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1487caac8:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1487caaec FUN_1487caaec body=175 status=ok
// SIG undefined FUN_1487caaec(void)

void FUN_1487caaec(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_1487cab75;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1487cab75:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1487caca4 FUN_1487caca4 body=123 status=ok
// SIG undefined FUN_1487caca4(void)

void FUN_1487caca4(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x20;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x1c + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x18 + lVar6 * 0x20);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x20 + 0x18);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x18);
  FUN_1449db362(*param_1 + lVar2 + 8);
  FUN_1487cad20(param_1,param_2);
  return;
}



// FUNCTION 1487cad20 FUN_1487cad20 body=114 status=ok
// SIG undefined FUN_1487cad20(void)

void FUN_1487cad20(longlong *param_1,int param_2)

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



// FUNCTION 1487cad92 FUN_1487cad92 body=107 status=ok
// SIG undefined FUN_1487cad92(void)

/* WARNING: Removing unreachable block (ram,0x0001487cadc4) */
/* WARNING: Removing unreachable block (ram,0x0001487cada0) */
/* WARNING: Removing unreachable block (ram,0x0001487cadb6) */
/* WARNING: Removing unreachable block (ram,0x0001487cadcf) */
/* WARNING: Removing unreachable block (ram,0x0001487cadb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487cad92(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb716b8;
  LOCK();
  UNLOCK();
  DAT_14cb716b8 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb716c0 = _DAT_14cb716c0 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb716c0 = _DAT_14cb716c0 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1487cae06 FUN_1487cae06 body=29 status=ok
// SIG undefined FUN_1487cae06(void)

bool FUN_1487cae06(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1487cae24 FUN_1487cae24 body=26 status=ok
// SIG undefined FUN_1487cae24(void)

bool FUN_1487cae24(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1487cae3e FUN_1487cae3e body=101 status=ok
// SIG undefined FUN_1487cae3e(void)

void FUN_1487cae3e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e9590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487caea4 FUN_1487caea4 body=134 status=ok
// SIG undefined FUN_1487caea4(void)

void FUN_1487caea4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e9590;
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
                    /* WARNING: Could not recover jumptable at 0x0001487caf1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487caf2a FUN_1487caf2a body=146 status=ok
// SIG undefined FUN_1487caf2a(void)

bool FUN_1487caf2a(longlong param_1)

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



// FUNCTION 1487cafbe FUN_1487cafbe body=98 status=ok
// SIG undefined FUN_1487cafbe(void)

void FUN_1487cafbe(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1[2] == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    uVar1 = FUN_1488da6c0(local_40);
    param_1[2] = uVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487cb03c FUN_1487cb03c body=29 status=ok
// SIG undefined FUN_1487cb03c(void)

bool FUN_1487cb03c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1487cb05a FUN_1487cb05a body=101 status=ok
// SIG undefined FUN_1487cb05a(void)

void FUN_1487cb05a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8da20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e9620;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487cb0c0 FUN_1487cb0c0 body=134 status=ok
// SIG undefined FUN_1487cb0c0(void)

void FUN_1487cb0c0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8da20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e9620;
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
                    /* WARNING: Could not recover jumptable at 0x0001487cb137. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487cb146 FUN_1487cb146 body=44 status=ok
// SIG undefined FUN_1487cb146(void)

void FUN_1487cb146(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487cb16f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1487cb172 FUN_1487cb172 body=156 status=ok
// SIG undefined FUN_1487cb172(void)

bool FUN_1487cb172(longlong param_1,undefined8 param_2)

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



// FUNCTION 1487cb210 FUN_1487cb210 body=114 status=ok
// SIG undefined FUN_1487cb210(void)

void FUN_1487cb210(longlong *param_1,int param_2)

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



// FUNCTION 1487cb298 FUN_1487cb298 body=93 status=ok
// SIG undefined FUN_1487cb298(void)

void FUN_1487cb298(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9700;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b3e9690;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1487cb2f6 FUN_1487cb2f6 body=126 status=ok
// SIG undefined FUN_1487cb2f6(void)

void FUN_1487cb2f6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9700;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)&p_Var1->CriticalSection = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)&p_Var1->CriticalSection + 4) = uVar2;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = uVar3;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Flink + 4) = uVar4;
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e9690;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487cb365. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487cb374 FUN_1487cb374 body=21 status=ok
// SIG undefined FUN_1487cb374(void)

undefined8 FUN_1487cb374(longlong param_1)

{
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 1487cb38c FUN_1487cb38c body=31 status=ok
// SIG undefined FUN_1487cb38c(void)

undefined8 FUN_1487cb38c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487cb3c0 FUN_1487cb3c0 body=85 status=ok
// SIG undefined FUN_1487cb3c0(void)

void FUN_1487cb3c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e9d90;
  return;
}



// FUNCTION 1487cb416 FUN_1487cb416 body=118 status=ok
// SIG undefined FUN_1487cb416(void)

void FUN_1487cb416(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e9d90;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487cb47d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487cb48c FUN_1487cb48c body=105 status=ok
// SIG undefined FUN_1487cb48c(void)

undefined8 FUN_1487cb48c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145d4c96e(param_1 + 0x18,local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487cb4f6 FUN_1487cb4f6 body=45 status=ok
// SIG undefined FUN_1487cb4f6(void)

longlong FUN_1487cb4f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_145a21680(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487cb524 FUN_1487cb524 body=54 status=ok
// SIG undefined FUN_1487cb524(void)

longlong FUN_1487cb524(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 1487cb55a FUN_1487cb55a body=107 status=ok
// SIG undefined FUN_1487cb55a(void)

/* WARNING: Removing unreachable block (ram,0x0001487cb58c) */
/* WARNING: Removing unreachable block (ram,0x0001487cb568) */
/* WARNING: Removing unreachable block (ram,0x0001487cb57e) */
/* WARNING: Removing unreachable block (ram,0x0001487cb597) */
/* WARNING: Removing unreachable block (ram,0x0001487cb580) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487cb55a(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb715f0;
  LOCK();
  UNLOCK();
  DAT_14cb715f0 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb715f8 = _DAT_14cb715f8 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb715f8 = _DAT_14cb715f8 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1487cb5c6 FUN_1487cb5c6 body=122 status=ok
// SIG undefined FUN_1487cb5c6(void)

undefined8 * FUN_1487cb5c6(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  *param_1 = &PTR_LAB_14b3e9820;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  lVar1 = *(longlong *)(param_2 + 4);
  param_1[3] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[4] = *param_3;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  param_1[5] = lVar5;
  return param_1;
}



// FUNCTION 1487cb640 FUN_1487cb640 body=29 status=ok
// SIG undefined FUN_1487cb640(void)

undefined8 FUN_1487cb640(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487cb680 FUN_1487cb680 body=140 status=ok
// SIG undefined FUN_1487cb680(void)

void FUN_1487cb680(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9820;
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar3;
  *(undefined4 *)(puVar1 + 2) = uVar4;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uVar5;
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar1[3] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  *puVar1 = &PTR_FUN_14b3e97b0;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1487cb70c FUN_1487cb70c body=140 status=ok
// SIG undefined FUN_1487cb70c(void)

void FUN_1487cb70c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9820;
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar3;
  *(undefined4 *)(puVar1 + 2) = uVar4;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uVar5;
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar1[3] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  *puVar1 = &PTR_FUN_14b3e97b0;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1487cb798 FUN_1487cb798 body=178 status=ok
// SIG undefined FUN_1487cb798(void)

void FUN_1487cb798(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9820;
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)&p_Var1->CriticalSection = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)&p_Var1->CriticalSection + 4) = uVar4;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = uVar5;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Flink + 4) = uVar6;
  p_Var2 = *(_LIST_ENTRY **)(param_1 + 0x18);
  (p_Var1->ProcessLocksList).Blink = p_Var2;
  if ((p_Var2 != (_LIST_ENTRY *)0x0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar3;
  p_Var1->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e97b0;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487cb833. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487cb84a FUN_1487cb84a body=128 status=ok
// SIG undefined FUN_1487cb84a(void)

void FUN_1487cb84a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar1 = *(code **)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_48 = *(undefined4 *)(param_1 + 8);
  uStack_44 = *(undefined4 *)(param_1 + 0xc);
  uStack_40 = *(undefined4 *)(param_1 + 0x10);
  uStack_3c = *(undefined4 *)(param_1 + 0x14);
  local_38 = *(longlong *)(param_1 + 0x18);
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  (*pcVar1)(param_2,param_3,&local_48,uVar2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487cb8cc FUN_1487cb8cc body=130 status=ok
// SIG undefined FUN_1487cb8cc(void)

undefined8 FUN_1487cb8cc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar1 = *(code **)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_48 = *(undefined4 *)(param_1 + 8);
  uStack_44 = *(undefined4 *)(param_1 + 0xc);
  uStack_40 = *(undefined4 *)(param_1 + 0x10);
  uStack_3c = *(undefined4 *)(param_1 + 0x14);
  local_38 = *(longlong *)(param_1 + 0x18);
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  (*pcVar1)(param_2,param_3,&local_48,uVar2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487cb952 FUN_1487cb952 body=124 status=ok
// SIG undefined FUN_1487cb952(void)

void FUN_1487cb952(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
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
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487cb9d0 FUN_1487cb9d0 body=124 status=ok
// SIG undefined FUN_1487cb9d0(void)

void FUN_1487cb9d0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
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
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487cba4d FUN_1487cba4d body=68 status=ok
// SIG undefined FUN_1487cba4d(void)

char FUN_1487cba4d(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  if (param_3 == 0) {
    cVar1 = '\x01';
  }
  else {
    do {
      param_3 = param_3 + -1;
      cVar1 = FUN_1487bb882(param_1,param_2);
      if (cVar1 == '\0') {
        return '\0';
      }
      param_1 = param_1 + 0x28;
      param_2 = param_2 + 0x28;
    } while (param_3 != 0);
  }
  return cVar1;
}



// FUNCTION 1487cba92 FUN_1487cba92 body=29 status=ok
// SIG undefined FUN_1487cba92(void)

undefined8 FUN_1487cba92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487cbaca FUN_1487cbaca body=29 status=ok
// SIG undefined FUN_1487cbaca(void)

bool FUN_1487cbaca(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1487cbae8 FUN_1487cbae8 body=26 status=ok
// SIG undefined FUN_1487cbae8(void)

bool FUN_1487cbae8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1487cbb02 FUN_1487cbb02 body=24 status=ok
// SIG undefined FUN_1487cbb02(void)

bool FUN_1487cbb02(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1487cbb1a FUN_1487cbb1a body=101 status=ok
// SIG undefined FUN_1487cbb1a(void)

void FUN_1487cbb1a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e9890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487cbb80 FUN_1487cbb80 body=101 status=ok
// SIG undefined FUN_1487cbb80(void)

void FUN_1487cbb80(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e9890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487cbbe6 FUN_1487cbbe6 body=134 status=ok
// SIG undefined FUN_1487cbbe6(void)

void FUN_1487cbbe6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e9890;
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
                    /* WARNING: Could not recover jumptable at 0x0001487cbc5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487cbc6c FUN_1487cbc6c body=39 status=ok
// SIG undefined FUN_1487cbc6c(void)

void FUN_1487cbc6c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487cbc8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1487cbc94 FUN_1487cbc94 body=146 status=ok
// SIG undefined FUN_1487cbc94(void)

bool FUN_1487cbc94(longlong param_1)

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



// FUNCTION 1487cbd28 FUN_1487cbd28 body=147 status=ok
// SIG undefined FUN_1487cbd28(void)

void FUN_1487cbd28(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487cbdbc FUN_1487cbdbc body=29 status=ok
// SIG undefined FUN_1487cbdbc(void)

undefined8 FUN_1487cbdbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487cbdf4 FUN_1487cbdf4 body=29 status=ok
// SIG undefined FUN_1487cbdf4(void)

bool FUN_1487cbdf4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1487cbe12 FUN_1487cbe12 body=26 status=ok
// SIG undefined FUN_1487cbe12(void)

bool FUN_1487cbe12(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1487cbe2c FUN_1487cbe2c body=24 status=ok
// SIG undefined FUN_1487cbe2c(void)

bool FUN_1487cbe2c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1487cbe44 FUN_1487cbe44 body=101 status=ok
// SIG undefined FUN_1487cbe44(void)

void FUN_1487cbe44(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e9970;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487cbeaa FUN_1487cbeaa body=101 status=ok
// SIG undefined FUN_1487cbeaa(void)

void FUN_1487cbeaa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e9970;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487cbf10 FUN_1487cbf10 body=134 status=ok
// SIG undefined FUN_1487cbf10(void)

void FUN_1487cbf10(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e9970;
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
                    /* WARNING: Could not recover jumptable at 0x0001487cbf87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487cbf96 FUN_1487cbf96 body=42 status=ok
// SIG undefined FUN_1487cbf96(void)

void FUN_1487cbf96(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487cbfbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1487cbfc0 FUN_1487cbfc0 body=154 status=ok
// SIG undefined FUN_1487cbfc0(void)

bool FUN_1487cbfc0(longlong param_1,undefined4 param_2)

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



// FUNCTION 1487cc0b2 FUN_1487cc0b2 body=154 status=ok
// SIG undefined FUN_1487cc0b2(void)

bool FUN_1487cc0b2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  fVar3 = *(float *)(param_1 + 0x28);
  fVar4 = *(float *)(param_2 + 8);
  if (fVar4 <= fVar3) {
    lVar7 = FUN_14479d2ce(param_2);
    if (lVar7 != 0) {
      FUN_140cc68fa(lVar7);
      uVar5 = *(undefined8 *)(lVar7 + 0x6a8);
      plVar6 = *(longlong **)(lVar7 + 0x6b0);
      if (plVar6 == (longlong *)0x0) {
        FUN_1411363be(uVar5,lVar7,0);
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        FUN_1411363be(uVar5,lVar7,0);
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
    }
  }
  return fVar4 <= fVar3;
}



// FUNCTION 1487cc14c FUN_1487cc14c body=108 status=ok
// SIG undefined FUN_1487cc14c(void)

void FUN_1487cc14c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  FUN_140cc68fa(param_2);
  uVar3 = *(undefined8 *)(param_2 + 0x6a8);
  plVar4 = *(longlong **)(param_2 + 0x6b0);
  if (plVar4 == (longlong *)0x0) {
    FUN_1487c64c0(uVar3);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    FUN_1487c64c0(uVar3);
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
                    /* WARNING: Could not recover jumptable at 0x0001487cc1b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  return;
}



// FUNCTION 1487cc1b8 FUN_1487cc1b8 body=96 status=ok
// SIG undefined FUN_1487cc1b8(void)

void FUN_1487cc1b8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  FUN_140cc68fa(param_2);
  uVar3 = *(undefined8 *)(param_2 + 0x6a8);
  plVar4 = *(longlong **)(param_2 + 0x6b0);
  if (plVar4 == (longlong *)0x0) {
    FUN_1487c64c0(uVar3);
    return;
  }
  LOCK();
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  UNLOCK();
  FUN_1487c64c0(uVar3);
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
                    /* WARNING: Could not recover jumptable at 0x0001487cc203. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 1487cc218 FUN_1487cc218 body=160 status=ok
// SIG undefined FUN_1487cc218(void)

undefined8 FUN_1487cc218(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28);
  local_20 = local_28;
  iVar1 = FUN_1409a82f2((longlong *)(param_1 + 0x58),
                        (uint)((ulonglong)local_28 >> 0x20) ^ (uint)local_28);
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x90 + *(longlong *)(param_1 + 0x58);
    if (((char *)(lVar3 + 8) != (char *)0x0 && lVar3 != 0) && (*(char *)(lVar3 + 8) == '\0')) {
      uVar2 = FUN_14479d2ce(lVar3 + 0x2c);
      goto LAB_1487cc290;
    }
  }
  uVar2 = 0;
LAB_1487cc290:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487cc2ba FUN_1487cc2ba body=645 status=ok
// SIG undefined FUN_1487cc2ba(void)

void FUN_1487cc2ba(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  undefined8 ****ppppuVar11;
  undefined1 auStack_d8 [32];
  undefined8 ***local_b8 [3];
  ushort local_a0;
  byte local_98;
  undefined1 local_90 [40];
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar4 = FUN_14479d2ce(param_1 + 0x34);
  local_90[0] = 0;
  local_68 = 0;
  FUN_1456bb102(local_90,uVar4);
  plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x50) + 8))();
  if (plVar5 != (longlong *)0x0) {
    uVar4 = FUN_140b066c4();
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar4);
    if (plVar5 != (longlong *)0x0) {
      uVar4 = FUN_140b066c4();
      plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
      if (plVar6 != (longlong *)0x0 && plVar5 != plVar6) {
        FUN_1447c3578(param_2,local_b8,local_90);
        lVar7 = FUN_14030a32e(local_b8);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar11 = local_b8;
          if (0x18 < local_a0) {
            ppppuVar11 = (undefined8 ****)local_b8[0];
          }
          (*pcVar3)(ppppuVar11);
        }
        if (0x18 < local_a0) {
          FUN_1400020a8(local_b8[0]);
        }
        if (lVar7 != 0) {
          plVar5 = (longlong *)FUN_14479d2ce(param_1 + 0x3c);
          if (plVar5 == (longlong *)0x0) {
            plVar5 = (longlong *)FUN_147f4b57c(lVar7);
            FUN_14010ee68(lVar7,plVar5);
            FUN_140486fc4(plVar5,*(undefined8 *)(lVar7 + 0x1c8),0);
            FUN_140b506a4(plVar5);
            FUN_147f586ba(plVar5,1);
            FUN_14485c47a(param_1 + 0x3c,plVar5);
          }
          else if (plVar5[0x15] != lVar7) {
            FUN_1401bf202(plVar5);
            (**(code **)(*plVar5 + 0x420))(plVar5,0);
          }
          plVar8 = *(longlong **)(param_3 + 0xa8);
          if (plVar8 != (longlong *)0x0) {
            uVar4 = FUN_1449a018c();
            plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar4);
            if (plVar8 != (longlong *)0x0) {
              uVar4 = FUN_1449a018c();
              plVar9 = (longlong *)FUN_144718840(plVar8,uVar4);
              if (plVar9 != (longlong *)0x0 && plVar8 != plVar9) {
                lVar7 = (**(code **)(*plVar9 + 0x10))(plVar9);
                if (lVar7 != 0) {
                  puVar10 = (undefined4 *)FUN_14142e3dc(lVar7,0);
                  uVar1 = *puVar10;
                  puVar10 = (undefined4 *)FUN_14142e3dc(lVar7,2);
                  uVar2 = *puVar10;
                  puVar10 = (undefined4 *)FUN_14142e3dc(lVar7,1);
                  FUN_147f586a0(plVar5,uVar1,uVar2,*puVar10);
                }
              }
            }
          }
          (**(code **)(*plVar6 + 0x10))(plVar6,plVar5);
          *(undefined1 *)(param_1 + 6) = 1;
        }
      }
    }
  }
  FUN_144a5ac3a(local_90);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487cc540 FUN_1487cc540 body=521 status=ok
// SIG undefined FUN_1487cc540(void)

void FUN_1487cc540(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 != 0 && param_2 != 0) {
    local_60 = 0;
    FUN_14485c47a(&local_60);
    local_58 = local_60;
    iVar4 = FUN_1409a82f2((longlong *)(param_1 + 0x58),
                          (uint)((ulonglong)local_60 >> 0x20) ^ (uint)local_60);
    if (iVar4 != -1) {
      lVar10 = *(longlong *)(param_1 + 0x58);
      if (((lVar10 + (longlong)iVar4 * 0x90 + 8U & 0xfffffffffffffff7) != 0) &&
         (lVar10 = lVar10 + (longlong)iVar4 * 0x90, *(longlong *)(lVar10 + 0x58) != 0)) {
        cVar3 = FUN_144729dda(lVar10 + 0x50);
        if (cVar3 != '\0') {
          plVar5 = (longlong *)(**(code **)(**(longlong **)(lVar10 + 0x58) + 8))();
          if (plVar5 != (longlong *)0x0) {
            uVar6 = FUN_140b066c4();
            plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar6);
            if (plVar5 != (longlong *)0x0) {
              uVar6 = FUN_140b066c4();
              plVar7 = (longlong *)FUN_144718840(plVar5,uVar6);
              if ((plVar7 != (longlong *)0x0 && plVar5 != plVar7) &&
                 (*(char *)(lVar10 + 0xe) == '\x01')) {
                lVar10 = lVar10 + 0x44;
                cVar3 = FUN_144729dda(lVar10);
                if (cVar3 != '\0') {
                  plVar5 = (longlong *)FUN_14479d2ce(lVar10);
                  if (plVar5 != (longlong *)0x0) {
                    lVar8 = FUN_147f4b57c(param_3);
                    if (lVar8 != 0) {
                      FUN_14010ee68(param_3,lVar8);
                      FUN_140486fc4(lVar8,*(undefined8 *)(param_3 + 0x1c8),0);
                      FUN_140b506a4(lVar8);
                      FUN_147f586ba(lVar8,1);
                      puVar9 = (undefined4 *)FUN_14142e3dc(plVar5,0);
                      uVar1 = *puVar9;
                      puVar9 = (undefined4 *)FUN_14142e3dc(plVar5,2);
                      uVar2 = *puVar9;
                      puVar9 = (undefined4 *)FUN_14142e3dc(plVar5,1);
                      FUN_147f586a0(lVar8,uVar1,uVar2,*puVar9);
                      FUN_14485c47a(lVar10,lVar8);
                      (**(code **)(*plVar7 + 0x10))(plVar7,lVar8);
                      FUN_1401bf202(plVar5);
                      (**(code **)(*plVar5 + 0x420))(plVar5,0);
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
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487cc74a FUN_1487cc74a body=344 status=ok
// SIG undefined FUN_1487cc74a(void)

longlong * FUN_1487cc74a(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  bool bVar13;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar10 = *(longlong **)(param_2 + 0x18);
  bVar9 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_1487cc7c7:
    uVar12 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_1487cc7c7;
      LOCK();
      iVar6 = (int)plVar10[1];
      bVar13 = iVar8 == iVar6;
      if (bVar13) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar13);
    uVar12 = *(undefined8 *)(param_2 + 0x10);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  *puVar5 = &PTR_LAB_14b3ec400;
  puVar5[1] = *param_4;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar5[2] = lVar11;
  *puVar5 = &PTR_FUN_14b3ec390;
  puVar5[3] = uVar12;
  puVar5[4] = plVar10;
  if (bVar9) {
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1487cc8a2 FUN_1487cc8a2 body=220 status=ok
// SIG undefined FUN_1487cc8a2(void)

undefined4 FUN_1487cc8a2(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_14479d2ce(param_1 + 8);
  if (lVar5 != 0) {
    lVar5 = FUN_14011c706(lVar5);
    if (lVar5 != 0) {
      local_48 = (undefined4 *)0x0;
      uStack_40 = 1;
      FUN_1406d2ac8(&local_48,0);
      puVar3 = local_48;
      FUN_1406d2a2a(local_48);
      *(undefined1 *)((longlong)puVar3 + 0x31) = 1;
      uVar4 = param_2[1];
      uVar1 = param_2[2];
      uVar2 = param_2[3];
      *puVar3 = *param_2;
      puVar3[1] = uVar4;
      puVar3[2] = uVar1;
      puVar3[3] = uVar2;
      *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined1 *)(puVar3 + 7) = 0;
      puVar3[6] = 0x42c80000;
      *(undefined1 *)(puVar3 + 0xc) = 0;
      uVar4 = FUN_1406d2c3e(lVar5,2,&local_48,0);
      FUN_1406d33ae(local_48,uStack_40 & 0xffffffff);
      if (local_48 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1487cc95b;
    }
  }
  uVar4 = 0;
LAB_1487cc95b:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487cc980 FUN_1487cc980 body=331 status=ok
// SIG undefined FUN_1487cc980(void)

undefined8 FUN_1487cc980(char *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*param_1 == '\x01') {
    lVar5 = *(longlong *)(param_1 + 0x10);
    if (lVar5 == 0) {
      uVar4 = FUN_1409fd3f6();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x10) = lVar5;
    }
    plVar1 = (longlong *)(param_1 + 8);
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (lVar6 != 0) {
LAB_1487cc9bf:
      if (lVar5 == 0) {
        uVar4 = FUN_1409fd3f6();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x10) = lVar5;
        lVar6 = *(longlong *)(param_1 + 0x18);
        if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if (plVar2 == (longlong *)0x0) {
LAB_1487ccac7:
            lVar6 = 0;
          }
          else {
            cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
            if (cVar3 == '\0') goto LAB_1487ccac7;
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar4,plVar1);
          }
          *(longlong *)(param_1 + 0x18) = lVar6;
        }
      }
      param_1 = (char *)(lVar6 + 0x18);
      goto LAB_1487ccab2;
    }
    if ((lVar5 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if (plVar2 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 != '\0') {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar4,plVar1);
          *(longlong *)(param_1 + 0x18) = lVar6;
          if (lVar6 != 0) {
            lVar5 = *(longlong *)(param_1 + 0x10);
            goto LAB_1487cc9bf;
          }
          goto LAB_1487ccaab;
        }
      }
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
    }
  }
LAB_1487ccaab:
  param_1 = param_1 + 0x20;
LAB_1487ccab2:
  FUN_14034cca6(param_2,param_1);
  return param_2;
}



// FUNCTION 1487ccacc FUN_1487ccacc body=331 status=ok
// SIG undefined FUN_1487ccacc(void)

undefined8 FUN_1487ccacc(char *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*param_1 == '\x01') {
    lVar5 = *(longlong *)(param_1 + 0x10);
    if (lVar5 == 0) {
      uVar4 = FUN_1409fd3f6();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x10) = lVar5;
    }
    plVar1 = (longlong *)(param_1 + 8);
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (lVar6 != 0) {
LAB_1487ccb0b:
      if (lVar5 == 0) {
        uVar4 = FUN_1409fd3f6();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x10) = lVar5;
        lVar6 = *(longlong *)(param_1 + 0x18);
        if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if (plVar2 == (longlong *)0x0) {
LAB_1487ccc13:
            lVar6 = 0;
          }
          else {
            cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
            if (cVar3 == '\0') goto LAB_1487ccc13;
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar4,plVar1);
          }
          *(longlong *)(param_1 + 0x18) = lVar6;
        }
      }
      param_1 = (char *)(lVar6 + 0x50);
      goto LAB_1487ccbfe;
    }
    if ((lVar5 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if (plVar2 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 != '\0') {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar4,plVar1);
          *(longlong *)(param_1 + 0x18) = lVar6;
          if (lVar6 != 0) {
            lVar5 = *(longlong *)(param_1 + 0x10);
            goto LAB_1487ccb0b;
          }
          goto LAB_1487ccbf7;
        }
      }
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
    }
  }
LAB_1487ccbf7:
  param_1 = param_1 + 0x58;
LAB_1487ccbfe:
  FUN_14034cca6(param_2,param_1);
  return param_2;
}



// FUNCTION 1487ccc18 FUN_1487ccc18 body=337 status=ok
// SIG undefined FUN_1487ccc18(void)

undefined8 FUN_1487ccc18(char *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*param_1 == '\x01') {
    lVar5 = *(longlong *)(param_1 + 0x10);
    if (lVar5 == 0) {
      uVar4 = FUN_1409fd3f6();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x10) = lVar5;
    }
    plVar1 = (longlong *)(param_1 + 8);
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (lVar6 != 0) {
LAB_1487ccc57:
      if (lVar5 == 0) {
        uVar4 = FUN_1409fd3f6();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x10) = lVar5;
        lVar6 = *(longlong *)(param_1 + 0x18);
        if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if (plVar2 == (longlong *)0x0) {
LAB_1487ccd65:
            lVar6 = 0;
          }
          else {
            cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
            if (cVar3 == '\0') goto LAB_1487ccd65;
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar4,plVar1);
          }
          *(longlong *)(param_1 + 0x18) = lVar6;
        }
      }
      param_1 = (char *)(lVar6 + 0x88);
      goto LAB_1487ccd50;
    }
    if ((lVar5 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if (plVar2 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 != '\0') {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar4,plVar1);
          *(longlong *)(param_1 + 0x18) = lVar6;
          if (lVar6 != 0) {
            lVar5 = *(longlong *)(param_1 + 0x10);
            goto LAB_1487ccc57;
          }
          goto LAB_1487ccd46;
        }
      }
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
    }
  }
LAB_1487ccd46:
  param_1 = param_1 + 0x90;
LAB_1487ccd50:
  FUN_14034cca6(param_2,param_1);
  return param_2;
}



// FUNCTION 1487ccd6a FUN_1487ccd6a body=331 status=ok
// SIG undefined FUN_1487ccd6a(void)

undefined8 FUN_1487ccd6a(char *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*param_1 == '\x01') {
    lVar5 = *(longlong *)(param_1 + 0x10);
    if (lVar5 == 0) {
      uVar4 = FUN_1409fd3bc();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x10) = lVar5;
    }
    plVar1 = (longlong *)(param_1 + 8);
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (lVar6 != 0) {
LAB_1487ccda9:
      if (lVar5 == 0) {
        uVar4 = FUN_1409fd3bc();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x10) = lVar5;
        lVar6 = *(longlong *)(param_1 + 0x18);
        if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if (plVar2 == (longlong *)0x0) {
LAB_1487cceb1:
            lVar6 = 0;
          }
          else {
            cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
            if (cVar3 == '\0') goto LAB_1487cceb1;
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar4,plVar1);
          }
          *(longlong *)(param_1 + 0x18) = lVar6;
        }
      }
      param_1 = (char *)(lVar6 + 0x18);
      goto LAB_1487cce9c;
    }
    if ((lVar5 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if (plVar2 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 != '\0') {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar4,plVar1);
          *(longlong *)(param_1 + 0x18) = lVar6;
          if (lVar6 != 0) {
            lVar5 = *(longlong *)(param_1 + 0x10);
            goto LAB_1487ccda9;
          }
          goto LAB_1487cce95;
        }
      }
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
    }
  }
LAB_1487cce95:
  param_1 = param_1 + 0x20;
LAB_1487cce9c:
  FUN_14034cca6(param_2,param_1);
  return param_2;
}



// FUNCTION 1487cceb6 FUN_1487cceb6 body=331 status=ok
// SIG undefined FUN_1487cceb6(void)

undefined8 FUN_1487cceb6(char *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*param_1 == '\x01') {
    lVar5 = *(longlong *)(param_1 + 0x10);
    if (lVar5 == 0) {
      uVar4 = FUN_1409fd3bc();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x10) = lVar5;
    }
    plVar1 = (longlong *)(param_1 + 8);
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (lVar6 != 0) {
LAB_1487ccef5:
      if (lVar5 == 0) {
        uVar4 = FUN_1409fd3bc();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x10) = lVar5;
        lVar6 = *(longlong *)(param_1 + 0x18);
        if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if (plVar2 == (longlong *)0x0) {
LAB_1487ccffd:
            lVar6 = 0;
          }
          else {
            cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
            if (cVar3 == '\0') goto LAB_1487ccffd;
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar4,plVar1);
          }
          *(longlong *)(param_1 + 0x18) = lVar6;
        }
      }
      param_1 = (char *)(lVar6 + 0x50);
      goto LAB_1487ccfe8;
    }
    if ((lVar5 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if (plVar2 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 != '\0') {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar4,plVar1);
          *(longlong *)(param_1 + 0x18) = lVar6;
          if (lVar6 != 0) {
            lVar5 = *(longlong *)(param_1 + 0x10);
            goto LAB_1487ccef5;
          }
          goto LAB_1487ccfe1;
        }
      }
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
    }
  }
LAB_1487ccfe1:
  param_1 = param_1 + 0x58;
LAB_1487ccfe8:
  FUN_14034cca6(param_2,param_1);
  return param_2;
}



// FUNCTION 1487cd002 FUN_1487cd002 body=331 status=ok
// SIG undefined FUN_1487cd002(void)

undefined8 FUN_1487cd002(char *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*param_1 == '\x01') {
    lVar5 = *(longlong *)(param_1 + 0x10);
    if (lVar5 == 0) {
      uVar4 = FUN_1409fd3bc();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x10) = lVar5;
    }
    plVar1 = (longlong *)(param_1 + 8);
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (lVar6 != 0) {
LAB_1487cd041:
      if (lVar5 == 0) {
        uVar4 = FUN_1409fd3bc();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x10) = lVar5;
        lVar6 = *(longlong *)(param_1 + 0x18);
        if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if (plVar2 == (longlong *)0x0) {
LAB_1487cd149:
            lVar6 = 0;
          }
          else {
            cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
            if (cVar3 == '\0') goto LAB_1487cd149;
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar4,plVar1);
          }
          *(longlong *)(param_1 + 0x18) = lVar6;
        }
      }
      param_1 = (char *)(lVar6 + 0x18);
      goto LAB_1487cd134;
    }
    if ((lVar5 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if (plVar2 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 != '\0') {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar4,plVar1);
          *(longlong *)(param_1 + 0x18) = lVar6;
          if (lVar6 != 0) {
            lVar5 = *(longlong *)(param_1 + 0x10);
            goto LAB_1487cd041;
          }
          goto LAB_1487cd12d;
        }
      }
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
    }
  }
LAB_1487cd12d:
  param_1 = param_1 + 0x20;
LAB_1487cd134:
  FUN_14034cca6(param_2,param_1);
  return param_2;
}



// FUNCTION 1487cd14e FUN_1487cd14e body=71 status=ok
// SIG undefined FUN_1487cd14e(void)

void FUN_1487cd14e(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14048bbc8();
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(lVar1);
    }
    if (lVar2 != param_2) {
      param_1[6] = 0;
      *param_1 = 0;
      param_1[1] = 0;
    }
  }
  return;
}



// FUNCTION 1487cd196 FUN_1487cd196 body=219 status=ok
// SIG undefined FUN_1487cd196(void)

undefined8
FUN_1487cd196(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined1 local_70;
  longlong local_60 [2];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = FUN_1464c57bc();
  if (lVar2 != 0) {
    lVar1 = *param_2;
    local_50 = *(undefined8 *)(lVar2 + 0x18);
    FUN_1400021e4(&local_50,local_60);
    local_80 = param_5;
    local_70 = 0;
    local_88 = param_3;
    local_78 = local_60;
    lVar2 = FUN_14115911a(lVar2,*param_2,param_1,param_4);
    *param_2 = lVar2;
    if (local_60[0] != 0) {
      FUN_1400020a8();
      lVar2 = *param_2;
    }
    if (lVar2 != lVar1) {
      uVar3 = FUN_14048be0a(*param_1);
      FUN_140a18dcc(param_1,uVar3,param_4);
      uVar3 = 1;
      goto LAB_1487cd24a;
    }
  }
  uVar3 = 0;
LAB_1487cd24a:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487cd272 FUN_1487cd272 body=169 status=ok
// SIG undefined FUN_1487cd272(void)

undefined8 FUN_1487cd272(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_34,10);
  if (uVar1 == local_34) {
    local_34 = *(uint *)(param_2 + 8);
    cVar2 = FUN_1468ec2ac(&local_34,DAT_14cb719f8);
    if (cVar2 != '\0') {
      uVar3 = FUN_1464c58e6();
      uVar4 = FUN_1464c58e6();
      local_48 = 0;
      uStack_40 = 0;
      FUN_14496b17c(uVar3,param_3,param_1,uVar4);
      uVar3 = 1;
      goto LAB_1487cd2f9;
    }
  }
  uVar3 = 0;
LAB_1487cd2f9:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487cd31c FUN_1487cd31c body=169 status=ok
// SIG undefined FUN_1487cd31c(void)

undefined8 FUN_1487cd31c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_34,10);
  if (uVar1 == local_34) {
    local_34 = *(uint *)(param_2 + 8);
    cVar2 = FUN_1468ec2ac(&local_34,DAT_14cb71a00);
    if (cVar2 != '\0') {
      uVar3 = FUN_1464c597c();
      uVar4 = FUN_1464c597c();
      local_48 = 0;
      uStack_40 = 0;
      FUN_14496b17c(uVar3,param_3,param_1,uVar4);
      uVar3 = 1;
      goto LAB_1487cd3a3;
    }
  }
  uVar3 = 0;
LAB_1487cd3a3:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487cd3c6 FUN_1487cd3c6 body=169 status=ok
// SIG undefined FUN_1487cd3c6(void)

undefined8 FUN_1487cd3c6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_34,10);
  if (uVar1 == local_34) {
    local_34 = *(uint *)(param_2 + 8);
    cVar2 = FUN_1468ec2ac(&local_34,DAT_14cb71a08);
    if (cVar2 != '\0') {
      uVar3 = FUN_1464c5a14();
      uVar4 = FUN_1464c5a14();
      local_48 = 0;
      uStack_40 = 0;
      FUN_14496b17c(uVar3,param_3,param_1,uVar4);
      uVar3 = 1;
      goto LAB_1487cd44d;
    }
  }
  uVar3 = 0;
LAB_1487cd44d:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487cd470 FUN_1487cd470 body=169 status=ok
// SIG undefined FUN_1487cd470(void)

undefined8 FUN_1487cd470(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_34,10);
  if (uVar1 == local_34) {
    local_34 = *(uint *)(param_2 + 8);
    cVar2 = FUN_1468ec2ac(&local_34,DAT_14cb71a10);
    if (cVar2 != '\0') {
      uVar3 = FUN_1464c5aaa();
      uVar4 = FUN_1464c5aaa();
      local_48 = 0;
      uStack_40 = 0;
      FUN_14496b17c(uVar3,param_3,param_1,uVar4);
      uVar3 = 1;
      goto LAB_1487cd4f7;
    }
  }
  uVar3 = 0;
LAB_1487cd4f7:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487cd51a FUN_1487cd51a body=515 status=ok
// SIG undefined FUN_1487cd51a(void)

uint FUN_1487cd51a(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  double *pdVar6;
  double *pdVar7;
  undefined8 ***pppuVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [40];
  undefined4 local_b0;
  undefined1 local_a8 [40];
  undefined4 local_80;
  undefined8 **local_78 [3];
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1 != 0) {
    uVar2 = FUN_1487cd9ee();
    if ((char)uVar2 != '\0') goto LAB_1487cd54c;
    if (param_2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*param_2 + 0xa00))(param_2);
      uVar2 = 0;
      if (lVar3 == 0) goto LAB_1487cd54c;
      lVar4 = FUN_1409fd42f();
      local_d8[0] = 0;
      local_b0 = 0;
      FUN_1456bb102(local_d8,param_1);
      local_a8[0] = 0;
      local_80 = 0;
      uVar5 = FUN_144873cc0(lVar4 + 0x20);
      FUN_144750e81(local_78,uVar5,local_d8);
      lVar4 = FUN_14030a32e(local_78);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar1 != (code *)0x0) {
        pppuVar8 = local_78;
        if (0x18 < local_60) {
          pppuVar8 = (undefined8 ***)local_78[0];
        }
        (*pcVar1)(pppuVar8);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(local_78[0]);
      }
      FUN_144a5ac3a(local_a8);
      FUN_144a5ac3a(local_d8);
      if (lVar4 != 0) {
        pdVar7 = (double *)(*(longlong *)(param_1 + 0x1c8) + 0x260);
        if (*(longlong *)(param_1 + 0x1c8) == 0) {
          pdVar7 = (double *)&DAT_14c8464e0;
        }
        pdVar6 = (double *)(*(longlong *)(lVar4 + 0x1c8) + 0x260);
        if (*(longlong *)(lVar4 + 0x1c8) == 0) {
          pdVar6 = (double *)&DAT_14c8464e0;
        }
        dVar12 = *(double *)(lVar3 + 0x260) - *pdVar7;
        dVar13 = *(double *)(lVar3 + 0x268) - pdVar7[1];
        dVar10 = *(double *)(lVar3 + 0x260) - *pdVar6;
        dVar11 = *(double *)(lVar3 + 0x268) - pdVar6[1];
        fVar14 = (float)SQRT(dVar12 * dVar12 + dVar13 * dVar13) -
                 (float)SQRT(dVar10 * dVar10 + dVar11 * dVar11);
        fVar9 = (float)FUN_1487cdb02(param_2 + 0x1a6);
        uVar2 = 1;
        if (fVar14 <= fVar9) {
          fVar9 = (float)FUN_1487cdc44(param_2 + 0x1a6);
          uVar2 = fVar9 < fVar14 ^ 3;
        }
        goto LAB_1487cd54c;
      }
    }
  }
  uVar2 = 0;
LAB_1487cd54c:
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487cd71e FUN_1487cd71e body=719 status=ok
// SIG undefined FUN_1487cd71e(void)

ulonglong FUN_1487cd71e(longlong param_1,longlong param_2,char param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  double *pdVar5;
  double *pdVar6;
  undefined8 ****ppppuVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [40];
  undefined4 local_c0;
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined8 ***local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1 == 0) {
    uVar2 = 0;
    goto LAB_1487cd758;
  }
  uVar2 = FUN_1487cd9ee();
  if ((char)uVar2 != '\0') goto LAB_1487cd758;
  if (param_3 == '\0') {
    if (*(char *)(param_2 + 0xed8) == '\x01') {
      lVar3 = param_2 + 0xea0;
      goto LAB_1487cd7d4;
    }
LAB_1487cd876:
    lVar3 = FUN_1409fd42f();
    local_e8[0] = 0;
    local_c0 = 0;
    FUN_1456bb102(local_e8,param_1);
    local_b8[0] = 0;
    local_90 = 0;
    uVar4 = FUN_144873cc0(lVar3 + 0x20);
    FUN_144750e81(local_88,uVar4,local_e8);
    lVar3 = FUN_14030a32e(local_88);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar1 != (code *)0x0) {
      ppppuVar7 = local_88;
      if (0x18 < local_70) {
        ppppuVar7 = (undefined8 ****)local_88[0];
      }
      (*pcVar1)(ppppuVar7);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    FUN_144a5ac3a(local_b8);
    FUN_144a5ac3a(local_e8);
  }
  else {
    if (*(char *)(param_2 + 0xc88) != '\x01') goto LAB_1487cd876;
    lVar3 = param_2 + 0xc50;
LAB_1487cd7d4:
    local_e8[0] = 0;
    local_c0 = 0;
    FUN_1456bb102(local_e8,param_1);
    FUN_1447c3578(lVar3,local_88,local_e8);
    lVar3 = FUN_14030a32e(local_88);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar1 != (code *)0x0) {
      ppppuVar7 = local_88;
      if (0x18 < local_70) {
        ppppuVar7 = (undefined8 ****)local_88[0];
      }
      (*pcVar1)(ppppuVar7);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    FUN_144a5ac3a(local_e8);
    if (lVar3 == 0) goto LAB_1487cd876;
  }
  uVar2 = 0;
  if ((param_2 != 0) && (lVar3 != 0)) {
    pdVar6 = (double *)(*(longlong *)(param_1 + 0x1c8) + 0x260);
    if (*(longlong *)(param_1 + 0x1c8) == 0) {
      pdVar6 = (double *)&DAT_14c8464e0;
    }
    pdVar5 = (double *)(*(longlong *)(lVar3 + 0x1c8) + 0x260);
    if (*(longlong *)(lVar3 + 0x1c8) == 0) {
      pdVar5 = (double *)&DAT_14c8464e0;
    }
    fVar10 = (float)SQRT((*pdVar5 - *pdVar6) * (*pdVar5 - *pdVar6) +
                         (pdVar5[1] - pdVar6[1]) * (pdVar5[1] - pdVar6[1]));
    if (param_3 == '\0') {
      fVar8 = (float)FUN_1487cdec6(param_2 + 0xe08);
      fVar9 = (float)FUN_1487ce148(param_2 + 0xe08);
    }
    else {
      fVar8 = (float)FUN_1487cdd86(param_2 + 0xbf0);
      fVar9 = (float)FUN_1487ce008(param_2 + 0xbf0);
    }
    uVar2 = 1;
    if (fVar8 <= fVar10) {
      uVar2 = (ulonglong)(fVar10 < fVar9 ^ 3);
    }
  }
LAB_1487cd758:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1487cd9ee FUN_1487cd9ee body=275 status=ok
// SIG undefined FUN_1487cd9ee(void)

ulonglong FUN_1487cd9ee(longlong *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_140b040c0();
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar2);
  if (plVar3 != (longlong *)0x0) {
    uVar2 = FUN_140b040c0();
    plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
    if ((plVar4 != (longlong *)0x0 && plVar3 != plVar4) &&
       (lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4), lVar5 != 0)) {
      uVar2 = FUN_1464cd558();
      FUN_147f56792(lVar5,&local_30,uVar2);
      plVar3 = &local_30;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
        plVar3 = local_28;
        if (local_28 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_28 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_28)(local_28);
            LOCK();
            piVar1 = (int *)((longlong)local_28 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_28 + 0x10))(local_28);
            }
          }
        }
      }
      if (local_30 != 0) {
        plVar3 = (longlong *)
                 CONCAT71((int7)((ulonglong)plVar3 >> 8),*(undefined1 *)(local_30 + 0x40));
      }
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_28 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar1 = (int *)((longlong)local_28 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_28 + 0x10))(local_28);
          }
        }
      }
      if (local_30 != 0) goto LAB_1487cda46;
    }
  }
  plVar3 = (longlong *)0x0;
LAB_1487cda46:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar3 & 0xffffffff;
}



// FUNCTION 1487cdb02 FUN_1487cdb02 body=322 status=ok
// SIG undefined FUN_1487cdb02(void)

undefined4 FUN_1487cdb02(char *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*param_1 == '\x01') {
    lVar5 = *(longlong *)(param_1 + 0x10);
    if (lVar5 == 0) {
      uVar4 = FUN_1409fd3f6();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x10) = lVar5;
    }
    plVar1 = (longlong *)(param_1 + 8);
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (lVar6 != 0) {
LAB_1487cdb3f:
      if (lVar5 == 0) {
        uVar4 = FUN_1409fd3f6();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x10) = lVar5;
        lVar6 = *(longlong *)(param_1 + 0x18);
        if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if (plVar2 == (longlong *)0x0) {
LAB_1487cdc40:
            lVar6 = 0;
          }
          else {
            cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
            if (cVar3 == '\0') goto LAB_1487cdc40;
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar4,plVar1);
          }
          *(longlong *)(param_1 + 0x18) = lVar6;
        }
      }
      param_1 = (char *)(lVar6 + 0xc0);
      goto LAB_1487cdc34;
    }
    if ((lVar5 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if (plVar2 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 != '\0') {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar4,plVar1);
          *(longlong *)(param_1 + 0x18) = lVar6;
          if (lVar6 != 0) {
            lVar5 = *(longlong *)(param_1 + 0x10);
            goto LAB_1487cdb3f;
          }
          goto LAB_1487cdc2a;
        }
      }
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
    }
  }
LAB_1487cdc2a:
  param_1 = param_1 + 200;
LAB_1487cdc34:
  return *(undefined4 *)param_1;
}



// FUNCTION 1487cdc44 FUN_1487cdc44 body=322 status=ok
// SIG undefined FUN_1487cdc44(void)

undefined4 FUN_1487cdc44(char *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*param_1 == '\x01') {
    lVar5 = *(longlong *)(param_1 + 0x10);
    if (lVar5 == 0) {
      uVar4 = FUN_1409fd3f6();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x10) = lVar5;
    }
    plVar1 = (longlong *)(param_1 + 8);
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (lVar6 != 0) {
LAB_1487cdc81:
      if (lVar5 == 0) {
        uVar4 = FUN_1409fd3f6();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x10) = lVar5;
        lVar6 = *(longlong *)(param_1 + 0x18);
        if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if (plVar2 == (longlong *)0x0) {
LAB_1487cdd82:
            lVar6 = 0;
          }
          else {
            cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
            if (cVar3 == '\0') goto LAB_1487cdd82;
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar4,plVar1);
          }
          *(longlong *)(param_1 + 0x18) = lVar6;
        }
      }
      param_1 = (char *)(lVar6 + 0xc4);
      goto LAB_1487cdd76;
    }
    if ((lVar5 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if (plVar2 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 != '\0') {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar4,plVar1);
          *(longlong *)(param_1 + 0x18) = lVar6;
          if (lVar6 != 0) {
            lVar5 = *(longlong *)(param_1 + 0x10);
            goto LAB_1487cdc81;
          }
          goto LAB_1487cdd6c;
        }
      }
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
    }
  }
LAB_1487cdd6c:
  param_1 = param_1 + 0xcc;
LAB_1487cdd76:
  return *(undefined4 *)param_1;
}



// FUNCTION 1487cdd86 FUN_1487cdd86 body=319 status=ok
// SIG undefined FUN_1487cdd86(void)

undefined4 FUN_1487cdd86(char *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*param_1 == '\x01') {
    lVar5 = *(longlong *)(param_1 + 0x10);
    if (lVar5 == 0) {
      uVar4 = FUN_1409fd3bc();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x10) = lVar5;
    }
    plVar1 = (longlong *)(param_1 + 8);
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (lVar6 != 0) {
LAB_1487cddc3:
      if (lVar5 == 0) {
        uVar4 = FUN_1409fd3bc();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x10) = lVar5;
        lVar6 = *(longlong *)(param_1 + 0x18);
        if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if (plVar2 == (longlong *)0x0) {
LAB_1487cdec1:
            lVar6 = 0;
          }
          else {
            cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
            if (cVar3 == '\0') goto LAB_1487cdec1;
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar4,plVar1);
          }
          *(longlong *)(param_1 + 0x18) = lVar6;
        }
      }
      param_1 = (char *)(lVar6 + 0x88);
      goto LAB_1487cdeb5;
    }
    if ((lVar5 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if (plVar2 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 != '\0') {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar4,plVar1);
          *(longlong *)(param_1 + 0x18) = lVar6;
          if (lVar6 != 0) {
            lVar5 = *(longlong *)(param_1 + 0x10);
            goto LAB_1487cddc3;
          }
          goto LAB_1487cdeae;
        }
      }
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
    }
  }
LAB_1487cdeae:
  param_1 = param_1 + 0x58;
LAB_1487cdeb5:
  return *(undefined4 *)param_1;
}



// FUNCTION 1487cdec6 FUN_1487cdec6 body=322 status=ok
// SIG undefined FUN_1487cdec6(void)

undefined4 FUN_1487cdec6(char *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*param_1 == '\x01') {
    lVar5 = *(longlong *)(param_1 + 0x10);
    if (lVar5 == 0) {
      uVar4 = FUN_1409fd3bc();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x10) = lVar5;
    }
    plVar1 = (longlong *)(param_1 + 8);
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (lVar6 != 0) {
LAB_1487cdf03:
      if (lVar5 == 0) {
        uVar4 = FUN_1409fd3bc();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x10) = lVar5;
        lVar6 = *(longlong *)(param_1 + 0x18);
        if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if (plVar2 == (longlong *)0x0) {
LAB_1487ce004:
            lVar6 = 0;
          }
          else {
            cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
            if (cVar3 == '\0') goto LAB_1487ce004;
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar4,plVar1);
          }
          *(longlong *)(param_1 + 0x18) = lVar6;
        }
      }
      param_1 = (char *)(lVar6 + 0x88);
      goto LAB_1487cdff8;
    }
    if ((lVar5 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if (plVar2 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 != '\0') {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar4,plVar1);
          *(longlong *)(param_1 + 0x18) = lVar6;
          if (lVar6 != 0) {
            lVar5 = *(longlong *)(param_1 + 0x10);
            goto LAB_1487cdf03;
          }
          goto LAB_1487cdfee;
        }
      }
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
    }
  }
LAB_1487cdfee:
  param_1 = param_1 + 0x90;
LAB_1487cdff8:
  return *(undefined4 *)param_1;
}



// FUNCTION 1487ce008 FUN_1487ce008 body=319 status=ok
// SIG undefined FUN_1487ce008(void)

undefined4 FUN_1487ce008(char *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*param_1 == '\x01') {
    lVar5 = *(longlong *)(param_1 + 0x10);
    if (lVar5 == 0) {
      uVar4 = FUN_1409fd3bc();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x10) = lVar5;
    }
    plVar1 = (longlong *)(param_1 + 8);
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (lVar6 != 0) {
LAB_1487ce045:
      if (lVar5 == 0) {
        uVar4 = FUN_1409fd3bc();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x10) = lVar5;
        lVar6 = *(longlong *)(param_1 + 0x18);
        if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if (plVar2 == (longlong *)0x0) {
LAB_1487ce143:
            lVar6 = 0;
          }
          else {
            cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
            if (cVar3 == '\0') goto LAB_1487ce143;
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar4,plVar1);
          }
          *(longlong *)(param_1 + 0x18) = lVar6;
        }
      }
      param_1 = (char *)(lVar6 + 0x8c);
      goto LAB_1487ce137;
    }
    if ((lVar5 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if (plVar2 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 != '\0') {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar4,plVar1);
          *(longlong *)(param_1 + 0x18) = lVar6;
          if (lVar6 != 0) {
            lVar5 = *(longlong *)(param_1 + 0x10);
            goto LAB_1487ce045;
          }
          goto LAB_1487ce130;
        }
      }
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
    }
  }
LAB_1487ce130:
  param_1 = param_1 + 0x5c;
LAB_1487ce137:
  return *(undefined4 *)param_1;
}



// FUNCTION 1487ce148 FUN_1487ce148 body=322 status=ok
// SIG undefined FUN_1487ce148(void)

undefined4 FUN_1487ce148(char *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*param_1 == '\x01') {
    lVar5 = *(longlong *)(param_1 + 0x10);
    if (lVar5 == 0) {
      uVar4 = FUN_1409fd3bc();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x10) = lVar5;
    }
    plVar1 = (longlong *)(param_1 + 8);
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (lVar6 != 0) {
LAB_1487ce185:
      if (lVar5 == 0) {
        uVar4 = FUN_1409fd3bc();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x10) = lVar5;
        lVar6 = *(longlong *)(param_1 + 0x18);
        if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if (plVar2 == (longlong *)0x0) {
LAB_1487ce286:
            lVar6 = 0;
          }
          else {
            cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
            if (cVar3 == '\0') goto LAB_1487ce286;
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar4,plVar1);
          }
          *(longlong *)(param_1 + 0x18) = lVar6;
        }
      }
      param_1 = (char *)(lVar6 + 0x8c);
      goto LAB_1487ce27a;
    }
    if ((lVar5 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if (plVar2 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 != '\0') {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar4,plVar1);
          *(longlong *)(param_1 + 0x18) = lVar6;
          if (lVar6 != 0) {
            lVar5 = *(longlong *)(param_1 + 0x10);
            goto LAB_1487ce185;
          }
          goto LAB_1487ce270;
        }
      }
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
    }
  }
LAB_1487ce270:
  param_1 = param_1 + 0x94;
LAB_1487ce27a:
  return *(undefined4 *)param_1;
}



// FUNCTION 1487ce28a FUN_1487ce28a body=137 status=ok
// SIG undefined FUN_1487ce28a(void)

void FUN_1487ce28a(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar4 = param_1 + 8;
  cVar2 = FUN_144729dda(lVar4);
  if (cVar2 != '\0') {
    lVar3 = FUN_14479d2ce(lVar4);
    if ((*(byte *)(lVar3 + 0x155) & 0x20) == 0) {
      lVar4 = FUN_14479d2ce(lVar4);
      if (*(longlong *)(lVar4 + 0x1f0) == 0) {
        puVar5 = (undefined8 *)(lVar4 + 0x458);
      }
      else {
        puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
      }
      uVar1 = *puVar5;
      lVar4 = FUN_144a61814(uVar1,(undefined8 *)(param_1 + 0xb8));
      if (lVar4 != 0) {
        FUN_1405a424c(uVar1,*(undefined8 *)(param_1 + 0xb8));
      }
    }
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  return;
}


