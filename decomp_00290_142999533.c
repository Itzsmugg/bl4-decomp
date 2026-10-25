// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142999533 FUN_142999533 body=557 status=ok
// SIG undefined FUN_142999533(void)

void FUN_142999533(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
    break;
  case 1:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_1429996ad:
    FUN_146d1720e(uVar2,uVar3,param_1);
    goto LAB_142999595;
  case 2:
  case 5:
  case 6:
  case 7:
switchD_142999570_caseD_2:
    local_98 = param_3[3];
    FUN_146d16d28(*param_3,param_3[1],param_1);
    if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 3:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_142999673:
    FUN_146d17708(uVar2,uVar3,param_1);
    goto LAB_142999595;
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_142999533(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
    goto LAB_142999595;
  case 8:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_1429996ca:
    FUN_146d17be8(uVar2,uVar3,param_1);
    goto LAB_142999595;
  default:
    switch(uVar1) {
    case 0x40:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      break;
    case 0x41:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_1429996ad;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_142999570_caseD_2;
    case 0x43:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_142999673;
    case 0x48:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_1429996ca;
    default:
      switch(uVar1) {
      case 0x80:
        local_98 = param_3[3];
        FUN_146d180ce(*param_3,param_3[1],param_1);
        break;
      case 0x81:
        local_98 = param_3[3];
        FUN_146d185b4(*param_3,param_3[1],param_1);
        break;
      default:
        goto switchD_142999570_caseD_2;
      case 0x83:
        local_98 = param_3[3];
        FUN_146d18a9a(*param_3,param_3[1],param_1);
        break;
      case 0x88:
        local_98 = param_3[3];
        FUN_146d18f80(*param_3,param_3[1],param_1);
      }
      goto LAB_142999595;
    }
  }
  FUN_146d16d28(uVar2,uVar3,param_1);
LAB_142999595:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
}



// FUNCTION 142999761 FUN_142999761 body=609 status=ok
// SIG undefined FUN_142999761(void)

void FUN_142999761(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
    break;
  case 1:
    local_90 = param_3[3];
    local_98 = *(undefined8 *)param_3[2];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_1429997fd:
    FUN_140ca4bb6(uVar2,uVar3,param_1);
    goto LAB_1429998ba;
  case 2:
  case 5:
  case 6:
  case 7:
switchD_1429997a6_caseD_42:
    local_98 = param_3[3];
    FUN_146d1a7fe(*param_3,param_3[1],param_1);
    if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 3:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_142999914:
    FUN_146d1b11e(uVar2,uVar3,param_1);
    goto LAB_1429998ba;
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_142999761(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
    goto LAB_1429998ba;
  case 8:
    local_90 = param_3[3];
    local_98 = *(undefined8 *)param_3[2];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_1429998b5:
    FUN_140266236(uVar2,uVar3,param_1);
    goto LAB_1429998ba;
  default:
    switch(uVar1) {
    case 0x40:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      break;
    case 0x41:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_90 = param_3[3];
      local_98 = *(undefined8 *)param_3[2];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_1429997fd;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_1429997a6_caseD_42;
    case 0x43:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_142999914;
    case 0x48:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_90 = param_3[3];
      local_98 = *(undefined8 *)param_3[2];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_1429998b5;
    default:
      switch(uVar1) {
      case 0x80:
        local_98 = param_3[3];
        FUN_146d1ba36(*param_3,param_3[1],param_1);
        break;
      case 0x81:
        local_98 = param_3[3];
        FUN_146d1bf1c(*param_3,param_3[1],param_1);
        break;
      default:
        goto switchD_1429997a6_caseD_42;
      case 0x83:
        local_98 = param_3[3];
        FUN_146d1c402(*param_3,param_3[1],param_1);
        break;
      case 0x88:
        local_90 = param_3[3];
        local_98 = *(undefined8 *)param_3[2];
        FUN_1409cb16e(*param_3,param_3[1],param_1);
      }
      goto LAB_1429998ba;
    }
  }
  FUN_146d1a7fe(uVar2,uVar3,param_1);
LAB_1429998ba:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1429999c3 FUN_1429999c3 body=557 status=ok
// SIG undefined FUN_1429999c3(void)

void FUN_1429999c3(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
    break;
  case 1:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_142999b3d:
    FUN_146d1e4f4(uVar2,uVar3,param_1);
    goto LAB_142999a25;
  case 2:
  case 5:
  case 6:
  case 7:
switchD_142999a00_caseD_2:
    local_98 = param_3[3];
    FUN_146d1e00e(*param_3,param_3[1],param_1);
    if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 3:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_142999b03:
    FUN_146d1e9da(uVar2,uVar3,param_1);
    goto LAB_142999a25;
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_1429999c3(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
    goto LAB_142999a25;
  case 8:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_142999b5a:
    FUN_146d1eec0(uVar2,uVar3,param_1);
    goto LAB_142999a25;
  default:
    switch(uVar1) {
    case 0x40:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      break;
    case 0x41:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_142999b3d;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_142999a00_caseD_2;
    case 0x43:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_142999b03;
    case 0x48:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_142999b5a;
    default:
      switch(uVar1) {
      case 0x80:
        local_98 = param_3[3];
        FUN_146d1f3a6(*param_3,param_3[1],param_1);
        break;
      case 0x81:
        local_98 = param_3[3];
        FUN_146d1f886(*param_3,param_3[1],param_1);
        break;
      default:
        goto switchD_142999a00_caseD_2;
      case 0x83:
        local_98 = param_3[3];
        FUN_146d1fd6c(*param_3,param_3[1],param_1);
        break;
      case 0x88:
        local_98 = param_3[3];
        FUN_146d20252(*param_3,param_3[1],param_1);
      }
      goto LAB_142999a25;
    }
  }
  FUN_146d1e00e(uVar2,uVar3,param_1);
LAB_142999a25:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
}



// FUNCTION 142999bf1 FUN_142999bf1 body=557 status=ok
// SIG undefined FUN_142999bf1(void)

void FUN_142999bf1(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
    break;
  case 1:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_142999d6b:
    FUN_146d21fb6(uVar2,uVar3,param_1);
    goto LAB_142999c53;
  case 2:
  case 5:
  case 6:
  case 7:
switchD_142999c2e_caseD_2:
    local_98 = param_3[3];
    FUN_146d21ad0(*param_3,param_3[1],param_1);
    if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 3:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_142999d31:
    FUN_146d2249c(uVar2,uVar3,param_1);
    goto LAB_142999c53;
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_142999bf1(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
    goto LAB_142999c53;
  case 8:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_142999d88:
    FUN_146d22982(uVar2,uVar3,param_1);
    goto LAB_142999c53;
  default:
    switch(uVar1) {
    case 0x40:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      break;
    case 0x41:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_142999d6b;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_142999c2e_caseD_2;
    case 0x43:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_142999d31;
    case 0x48:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_142999d88;
    default:
      switch(uVar1) {
      case 0x80:
        local_98 = param_3[3];
        FUN_146d22e68(*param_3,param_3[1],param_1);
        break;
      case 0x81:
        local_98 = param_3[3];
        FUN_146d2334e(*param_3,param_3[1],param_1);
        break;
      default:
        goto switchD_142999c2e_caseD_2;
      case 0x83:
        local_98 = param_3[3];
        FUN_146d2382e(*param_3,param_3[1],param_1);
        break;
      case 0x88:
        local_98 = param_3[3];
        FUN_146d23d14(*param_3,param_3[1],param_1);
      }
      goto LAB_142999c53;
    }
  }
  FUN_146d21ad0(uVar2,uVar3,param_1);
LAB_142999c53:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
}



// FUNCTION 142999e1f FUN_142999e1f body=557 status=ok
// SIG undefined FUN_142999e1f(void)

void FUN_142999e1f(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
    break;
  case 1:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_142999f99:
    FUN_146d25a78(uVar2,uVar3,param_1);
    goto LAB_142999e81;
  case 2:
  case 5:
  case 6:
  case 7:
switchD_142999e5c_caseD_2:
    local_98 = param_3[3];
    FUN_146d25592(*param_3,param_3[1],param_1);
    if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 3:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_142999f5f:
    FUN_146d25f5e(uVar2,uVar3,param_1);
    goto LAB_142999e81;
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_142999e1f(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
    goto LAB_142999e81;
  case 8:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_142999fb6:
    FUN_146d26444(uVar2,uVar3,param_1);
    goto LAB_142999e81;
  default:
    switch(uVar1) {
    case 0x40:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      break;
    case 0x41:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_142999f99;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_142999e5c_caseD_2;
    case 0x43:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_142999f5f;
    case 0x48:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_142999fb6;
    default:
      switch(uVar1) {
      case 0x80:
        local_98 = param_3[3];
        FUN_146d2692a(*param_3,param_3[1],param_1);
        break;
      case 0x81:
        local_98 = param_3[3];
        FUN_146d26e10(*param_3,param_3[1],param_1);
        break;
      default:
        goto switchD_142999e5c_caseD_2;
      case 0x83:
        local_98 = param_3[3];
        FUN_146d272f6(*param_3,param_3[1],param_1);
        break;
      case 0x88:
        local_98 = param_3[3];
        FUN_146d277d6(*param_3,param_3[1],param_1);
      }
      goto LAB_142999e81;
    }
  }
  FUN_146d25592(uVar2,uVar3,param_1);
LAB_142999e81:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
}



// FUNCTION 14299a04d FUN_14299a04d body=609 status=ok
// SIG undefined FUN_14299a04d(void)

void FUN_14299a04d(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
    break;
  case 1:
    local_90 = param_3[3];
    local_98 = *(undefined8 *)param_3[2];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_14299a0e9:
    FUN_14121cc46(uVar2,uVar3,param_1);
    goto LAB_14299a1a6;
  case 2:
  case 5:
  case 6:
  case 7:
switchD_14299a092_caseD_42:
    local_98 = param_3[3];
    FUN_146d29054(*param_3,param_3[1],param_1);
    if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 3:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_14299a200:
    FUN_146d29974(uVar2,uVar3,param_1);
    goto LAB_14299a1a6;
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_14299a04d(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
    goto LAB_14299a1a6;
  case 8:
    local_90 = param_3[3];
    local_98 = *(undefined8 *)param_3[2];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_14299a1a1:
    FUN_1414d100a(uVar2,uVar3,param_1);
    goto LAB_14299a1a6;
  default:
    switch(uVar1) {
    case 0x40:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      break;
    case 0x41:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_90 = param_3[3];
      local_98 = *(undefined8 *)param_3[2];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_14299a0e9;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_14299a092_caseD_42;
    case 0x43:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_14299a200;
    case 0x48:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_90 = param_3[3];
      local_98 = *(undefined8 *)param_3[2];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_14299a1a1;
    default:
      switch(uVar1) {
      case 0x80:
        local_98 = param_3[3];
        FUN_146d2a294(*param_3,param_3[1],param_1);
        break;
      case 0x81:
        local_98 = param_3[3];
        FUN_146d2a77a(*param_3,param_3[1],param_1);
        break;
      default:
        goto switchD_14299a092_caseD_42;
      case 0x83:
        local_98 = param_3[3];
        FUN_146d2ac60(*param_3,param_3[1],param_1);
        break;
      case 0x88:
        local_90 = param_3[3];
        local_98 = *(undefined8 *)param_3[2];
        FUN_140ea1dc4(*param_3,param_3[1],param_1);
      }
      goto LAB_14299a1a6;
    }
  }
  FUN_146d29054(uVar2,uVar3,param_1);
LAB_14299a1a6:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
}



// FUNCTION 14299a2af FUN_14299a2af body=557 status=ok
// SIG undefined FUN_14299a2af(void)

void FUN_14299a2af(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
    break;
  case 1:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_14299a429:
    FUN_146d2cd4a(uVar2,uVar3,param_1);
    goto LAB_14299a311;
  case 2:
  case 5:
  case 6:
  case 7:
switchD_14299a2ec_caseD_2:
    local_98 = param_3[3];
    FUN_146d2c864(*param_3,param_3[1],param_1);
    if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 3:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_14299a3ef:
    FUN_146d2d230(uVar2,uVar3,param_1);
    goto LAB_14299a311;
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_14299a2af(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
    goto LAB_14299a311;
  case 8:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_14299a446:
    FUN_146d2d716(uVar2,uVar3,param_1);
    goto LAB_14299a311;
  default:
    switch(uVar1) {
    case 0x40:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      break;
    case 0x41:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_14299a429;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_14299a2ec_caseD_2;
    case 0x43:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_14299a3ef;
    case 0x48:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_14299a446;
    default:
      switch(uVar1) {
      case 0x80:
        local_98 = param_3[3];
        FUN_146d2dbfc(*param_3,param_3[1],param_1);
        break;
      case 0x81:
        local_98 = param_3[3];
        FUN_146d2e0e2(*param_3,param_3[1],param_1);
        break;
      default:
        goto switchD_14299a2ec_caseD_2;
      case 0x83:
        local_98 = param_3[3];
        FUN_146d2e5c8(*param_3,param_3[1],param_1);
        break;
      case 0x88:
        local_98 = param_3[3];
        FUN_146d2eaae(*param_3,param_3[1],param_1);
      }
      goto LAB_14299a311;
    }
  }
  FUN_146d2c864(uVar2,uVar3,param_1);
LAB_14299a311:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
}



// FUNCTION 14299a4dd FUN_14299a4dd body=557 status=ok
// SIG undefined FUN_14299a4dd(void)

void FUN_14299a4dd(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
    break;
  case 1:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_14299a657:
    FUN_146d3080c(uVar2,uVar3,param_1);
    goto LAB_14299a53f;
  case 2:
  case 5:
  case 6:
  case 7:
switchD_14299a51a_caseD_2:
    local_98 = param_3[3];
    FUN_146d30326(*param_3,param_3[1],param_1);
    if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 3:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_14299a61d:
    FUN_146d30cf2(uVar2,uVar3,param_1);
    goto LAB_14299a53f;
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_14299a4dd(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
    goto LAB_14299a53f;
  case 8:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_14299a674:
    FUN_146d311d8(uVar2,uVar3,param_1);
    goto LAB_14299a53f;
  default:
    switch(uVar1) {
    case 0x40:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      break;
    case 0x41:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_14299a657;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_14299a51a_caseD_2;
    case 0x43:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_14299a61d;
    case 0x48:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_14299a674;
    default:
      switch(uVar1) {
      case 0x80:
        local_98 = param_3[3];
        FUN_146d316be(*param_3,param_3[1],param_1);
        break;
      case 0x81:
        local_98 = param_3[3];
        FUN_146d31ba4(*param_3,param_3[1],param_1);
        break;
      default:
        goto switchD_14299a51a_caseD_2;
      case 0x83:
        local_98 = param_3[3];
        FUN_146d3208a(*param_3,param_3[1],param_1);
        break;
      case 0x88:
        local_98 = param_3[3];
        FUN_146d32570(*param_3,param_3[1],param_1);
      }
      goto LAB_14299a53f;
    }
  }
  FUN_146d30326(uVar2,uVar3,param_1);
LAB_14299a53f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
}



// FUNCTION 14299a70b FUN_14299a70b body=557 status=ok
// SIG undefined FUN_14299a70b(void)

void FUN_14299a70b(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
    break;
  case 1:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_14299a885:
    FUN_146d342ce(uVar2,uVar3,param_1);
    goto LAB_14299a76d;
  case 2:
  case 5:
  case 6:
  case 7:
switchD_14299a748_caseD_2:
    local_98 = param_3[3];
    FUN_146d33de8(*param_3,param_3[1],param_1);
    if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 3:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_14299a84b:
    FUN_146d347b4(uVar2,uVar3,param_1);
    goto LAB_14299a76d;
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_14299a70b(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
    goto LAB_14299a76d;
  case 8:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_14299a8a2:
    FUN_146d34c9a(uVar2,uVar3,param_1);
    goto LAB_14299a76d;
  default:
    switch(uVar1) {
    case 0x40:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      break;
    case 0x41:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_14299a885;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_14299a748_caseD_2;
    case 0x43:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_14299a84b;
    case 0x48:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_14299a8a2;
    default:
      switch(uVar1) {
      case 0x80:
        local_98 = param_3[3];
        FUN_146d35180(*param_3,param_3[1],param_1);
        break;
      case 0x81:
        local_98 = param_3[3];
        FUN_146d35666(*param_3,param_3[1],param_1);
        break;
      default:
        goto switchD_14299a748_caseD_2;
      case 0x83:
        local_98 = param_3[3];
        FUN_146d35b4c(*param_3,param_3[1],param_1);
        break;
      case 0x88:
        local_98 = param_3[3];
        FUN_146d36032(*param_3,param_3[1],param_1);
      }
      goto LAB_14299a76d;
    }
  }
  FUN_146d33de8(uVar2,uVar3,param_1);
LAB_14299a76d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
}



// FUNCTION 14299a939 FUN_14299a939 body=618 status=ok
// SIG undefined FUN_14299a939(void)

void FUN_14299a939(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
    break;
  case 1:
    local_90 = param_3[3];
    local_98 = *(undefined8 *)param_3[2];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_14299aa1c:
    FUN_1404c6fd4(uVar2,uVar3,param_1);
    goto LAB_14299aa46;
  case 2:
  case 5:
  case 6:
  case 7:
switchD_14299a98a_caseD_82:
    local_98 = param_3[3];
    FUN_146d378aa(*param_3,param_3[1],param_1);
    if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 3:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_14299aae1:
    FUN_146d381ca(uVar2,uVar3,param_1);
    goto LAB_14299aa46;
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_14299a939(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
    goto LAB_14299aa46;
  case 8:
    local_90 = param_3[3];
    local_98 = *(undefined8 *)param_3[2];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_14299ab0d:
    FUN_145718a88(uVar2,uVar3,param_1);
    goto LAB_14299aa46;
  default:
    switch(uVar1) {
    case 0x40:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      break;
    case 0x41:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_90 = param_3[3];
      local_98 = *(undefined8 *)param_3[2];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_14299aa1c;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_14299a98a_caseD_82;
    case 0x43:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_14299aae1;
    case 0x48:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_90 = param_3[3];
      local_98 = *(undefined8 *)param_3[2];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_14299ab0d;
    default:
      switch(uVar1) {
      case 0x80:
        local_98 = param_3[3];
        FUN_146d38aea(*param_3,param_3[1],param_1);
        break;
      case 0x81:
        local_98 = param_3[3];
        FUN_146d38fd0(*param_3,param_3[1],param_1);
        break;
      default:
        goto switchD_14299a98a_caseD_82;
      case 0x83:
        local_98 = param_3[3];
        FUN_146d394b6(*param_3,param_3[1],param_1);
        break;
      case 0x88:
        local_90 = param_3[3];
        local_98 = *(undefined8 *)param_3[2];
        FUN_1404c5362(*param_3,param_3[1],param_1);
      }
      goto LAB_14299aa46;
    }
  }
  FUN_146d378aa(uVar2,uVar3,param_1);
LAB_14299aa46:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
}



// FUNCTION 14299aba4 FUN_14299aba4 body=273 status=ok
// SIG undefined FUN_14299aba4(void)

void FUN_14299aba4(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar1 = *(byte *)(param_1 + 0x1c);
  if (bVar1 < 0x48) {
    if (bVar1 == 4) {
      FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
      FUN_14299aba4(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
LAB_14299ac59:
      if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    if (bVar1 != 8) goto LAB_14299ac59;
    local_90 = param_3[3];
    local_98 = *(undefined8 *)param_3[2];
    uVar2 = *param_3;
    uVar3 = param_3[1];
  }
  else {
    if (bVar1 != 0x48) {
      if (bVar1 != 0x88) goto LAB_14299ac59;
      local_90 = param_3[3];
      local_98 = *(undefined8 *)param_3[2];
      FUN_1404a9b70(*param_3,param_3[1],param_1);
      goto LAB_14299ac9a;
    }
    param_1 = *(longlong *)(param_1 + 0x28);
    local_90 = param_3[3];
    local_98 = *(undefined8 *)param_3[2];
    uVar2 = *param_3;
    uVar3 = param_3[1];
  }
  FUN_1404aaa64(uVar2,uVar3,param_1);
LAB_14299ac9a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
}



// FUNCTION 14299acb6 FUN_14299acb6 body=170 status=ok
// SIG undefined FUN_14299acb6(void)

void FUN_14299acb6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_a8 [32];
  longlong local_88;
  double local_80;
  undefined1 local_70 [88];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
    local_88 = param_6;
    FUN_146d0a564(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  local_80 = (double)*(float *)(param_6 + 300);
  local_88 = param_4;
  FUN_146d4a2c3(local_70,param_1,param_2,param_3);
  FUN_146d0d32b(param_6,local_70);
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14299ad61 FUN_14299ad61 body=170 status=ok
// SIG undefined FUN_14299ad61(void)

void FUN_14299ad61(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_a8 [32];
  longlong local_88;
  double local_80;
  undefined1 local_70 [88];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
    local_88 = param_6;
    FUN_146d0a564(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  local_80 = (double)*(float *)(param_6 + 300);
  local_88 = param_4;
  FUN_146d4a6c3(local_70,param_1,param_2,param_3);
  FUN_146d0d32b(param_6,local_70);
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14299ae0c FUN_14299ae0c body=495 status=ok
// SIG undefined FUN_14299ae0c(void)

void FUN_14299ae0c(void)

{
  FUN_141471170(&DAT_14c992ef8,L"p.Chaos.CCD.UseGenericSweptConvexConstraints",&DAT_14c75f084,
                L"Use generic convex convex swept constraint generation for convex shape pairs which don\'t have specialized implementations."
                ,0);
  atexit(FUN_142996acc);
  FUN_141471170(&DAT_14c992f10,L"p.Chaos.CCD.OnlyConsiderDynamicStatic",&DAT_14c992f08,
                L"Only enable CCD for dynamic-static pairs.",0);
  atexit(FUN_142996b11);
  FUN_141471170(&DAT_14c992f28,L"p.Chaos.Constraints.DetailedStats",&DAT_14c992f20,
                L"When set to 1, will enable more detailed stats.",0);
  atexit(FUN_142996b56);
  FUN_14153156c(&DAT_14c992f38,L"p.Chaos.Collision.AllowLevelsetManifolds",&DAT_14c75f088,
                L"Use incremental manifolds for levelset-levelset collision. This does not work well atm - too much rotation in the small pieces"
                ,0);
  atexit(FUN_142996b9b);
  FUN_14153156c(&DAT_14c992f48,L"p.Chaos.CCD.NoCullAllShapePairs",&DAT_14c75f089,
                L"Whether to cull contacts early based on phi for sweeps for all shape pairs (not just convex convex)."
                ,0);
  atexit(FUN_142996be0);
  FUN_14153156c(&DAT_14c992f58,L"p.Chaos.Collision.SphereBoundsCheck",&DAT_14c75f08a,&DAT_149dfb77a,
                0);
  atexit(FUN_142996c25);
  FUN_14153156c(&DAT_14c992f68,L"p.Chaos.Collision.AABBBoundsCheck",&DAT_14c75f08b,&DAT_149dfb77a,0)
  ;
  atexit(FUN_142996c6a);
  FUN_14153156c(&DAT_14c992f78,L"p.Chaos.Collision.ShapesArrayMode",&DAT_14c75f08c,&DAT_149dfb77a,0)
  ;
  atexit(FUN_142996caf);
  FUN_141471170(&DAT_14c992f90,L"p.NormalAveraging2",&DAT_14c992f88,&DAT_149dfb77a,0);
  atexit(FUN_142997a17);
  FUN_141471170(&DAT_14c992fa0,L"p.SampleMinParticlesForAcceleration",&DAT_14c75f090,
                L"The minimum number of particles needed before using an acceleration structure when sampling"
                ,0);
  atexit(FUN_142997a5c);
  return;
}



// FUNCTION 14299affc FUN_14299affc body=225 status=ok
// SIG undefined FUN_14299affc(void)

longlong FUN_14299affc(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  if (param_4 == 0 || *(char *)(param_4 + 0x1c) != -0x75) {
    if (*(char *)(param_4 + 0x1c) == '\v' && param_4 != 0) {
      FUN_146d48a5c(param_1);
    }
    else {
      *(undefined8 *)(param_1 + 0x48) = 0x7fefffffffffffff;
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x54) = 0;
    }
  }
  else {
    FUN_146d48e44(param_1);
  }
  return param_1;
}



// FUNCTION 14299b0dd FUN_14299b0dd body=225 status=ok
// SIG undefined FUN_14299b0dd(void)

longlong FUN_14299b0dd(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  if (param_4 == 0 || *(char *)(param_4 + 0x1c) != -0x75) {
    if (*(char *)(param_4 + 0x1c) == '\v' && param_4 != 0) {
      FUN_146d48a5c(param_1);
    }
    else {
      *(undefined8 *)(param_1 + 0x48) = 0x7fefffffffffffff;
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x54) = 0;
    }
  }
  else {
    FUN_146d48e44(param_1);
  }
  return param_1;
}



// FUNCTION 14299b1be FUN_14299b1be body=225 status=ok
// SIG undefined FUN_14299b1be(void)

longlong FUN_14299b1be(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  if (param_4 == 0 || *(char *)(param_4 + 0x1c) != -0x75) {
    if (*(char *)(param_4 + 0x1c) == '\v' && param_4 != 0) {
      FUN_146d48a5c(param_1);
    }
    else {
      *(undefined8 *)(param_1 + 0x48) = 0x7fefffffffffffff;
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x54) = 0;
    }
  }
  else {
    FUN_141260973(param_1);
  }
  return param_1;
}



// FUNCTION 14299b29f FUN_14299b29f body=225 status=ok
// SIG undefined FUN_14299b29f(void)

longlong FUN_14299b29f(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  if (param_4 == 0 || *(char *)(param_4 + 0x1c) != -0x75) {
    if (*(char *)(param_4 + 0x1c) == '\v' && param_4 != 0) {
      FUN_146d48a5c(param_1);
    }
    else {
      *(undefined8 *)(param_1 + 0x48) = 0x7fefffffffffffff;
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x54) = 0;
    }
  }
  else {
    FUN_141260973(param_1);
  }
  return param_1;
}



// FUNCTION 14299b380 FUN_14299b380 body=168 status=ok
// SIG undefined FUN_14299b380(void)

undefined8
FUN_14299b380(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  
  cVar1 = *(char *)(param_4 + 0x1c);
  if (param_4 == 0 || cVar1 != -0x75) {
    if (cVar1 == 'K' && param_4 != 0) {
      FUN_146d5e6bb(param_1);
    }
    else {
      if (cVar1 != '\v' || param_4 == 0) {
        param_4 = 0;
      }
      FUN_146d5eaed(param_1,param_2,param_3,param_4,param_5,param_6);
    }
  }
  else {
    FUN_146d5e02b(param_1);
  }
  return param_1;
}



// FUNCTION 14299b428 FUN_14299b428 body=69 status=ok
// SIG undefined FUN_14299b428(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14299b428(void)

{
  _DAT_14c992fb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014299b46a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992fb8,1);
  return;
}



// FUNCTION 14299b46d FUN_14299b46d body=69 status=ok
// SIG undefined FUN_14299b46d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14299b46d(void)

{
  _DAT_14c992fc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014299b4af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992fc8,1);
  return;
}



// FUNCTION 14299b4b2 FUN_14299b4b2 body=69 status=ok
// SIG undefined FUN_14299b4b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14299b4b2(void)

{
  _DAT_14c992fd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014299b4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992fd8,1);
  return;
}



// FUNCTION 14299b4f7 FUN_14299b4f7 body=69 status=ok
// SIG undefined FUN_14299b4f7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14299b4f7(void)

{
  _DAT_14c992fe0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014299b539. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992fe8,1);
  return;
}



// FUNCTION 14299b53c FUN_14299b53c body=69 status=ok
// SIG undefined FUN_14299b53c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14299b53c(void)

{
  _DAT_14c992ff0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014299b57e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992ff8,1);
  return;
}



// FUNCTION 14299b583 FUN_14299b583 body=1135 status=ok
// SIG undefined FUN_14299b583(void)

void FUN_14299b583(int *param_1,int *param_2,ulonglong param_3,longlong *param_4)

{
  int *piVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  int *piVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int *piVar16;
  bool bVar17;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_70;
  int *local_68;
  ulonglong local_60;
  int *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar13 = (longlong)param_2 - (longlong)param_1;
  do {
    if ((longlong)uVar13 < 0x81) {
      piVar8 = param_1;
      if (param_1 != param_2) {
        while (piVar5 = piVar8 + 1, piVar5 != param_2) {
          iVar10 = piVar8[1];
          lVar14 = *param_4;
          lVar6 = (longlong)iVar10 * 0x58;
          dVar4 = *(double *)(lVar14 + 0x48 + lVar6);
          if (*(double *)(lVar14 + 0x48 + (longlong)*param_1 * 0x58) <= dVar4) {
            lVar11 = (longlong)piVar5[-1];
            piVar8 = piVar5;
            if (dVar4 < *(double *)(lVar14 + 0x48 + lVar11 * 0x58)) {
              do {
                *piVar8 = (int)lVar11;
                lVar11 = (longlong)piVar8[-2];
                dVar4 = *(double *)(*param_4 + 0x48 + lVar11 * 0x58);
                piVar8 = piVar8 + -1;
                pdVar2 = (double *)(*param_4 + 0x48 + lVar6);
              } while (*pdVar2 <= dVar4 && dVar4 != *pdVar2);
            }
          }
          else {
            memmove((void *)((longlong)piVar8 + (8 - ((longlong)piVar5 - (longlong)param_1))),
                    param_1,(longlong)piVar5 - (longlong)param_1);
            piVar8 = param_1;
          }
          *piVar8 = iVar10;
          piVar8 = piVar5;
        }
      }
LAB_14299b9cb:
      if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if ((longlong)param_3 < 1) {
      uVar12 = uVar13 >> 3;
      do {
        uVar15 = uVar12 - 1;
        local_4c = param_1[uVar15];
        local_78 = param_4;
        FUN_14299b9f3(param_1,uVar15,uVar13 >> 2,&local_4c);
        bVar17 = 1 < uVar12;
        uVar12 = uVar15;
      } while (bVar17);
      lVar14 = (longlong)param_2 - (longlong)param_1;
      if (4 < lVar14) {
        do {
          param_2 = param_2 + -1;
          local_4c = *param_2;
          *param_2 = *param_1;
          lVar14 = lVar14 + -4;
          local_78 = param_4;
          FUN_14299b9f3(param_1,0,lVar14 >> 2,&local_4c);
        } while (4 < lVar14);
      }
      goto LAB_14299b9cb;
    }
    piVar5 = param_1 + (uVar13 >> 3);
    piVar8 = param_2 + -1;
    lVar14 = (longlong)piVar8 - (longlong)param_1 >> 2;
    piVar7 = param_1;
    local_58 = param_2;
    if (0x28 < lVar14) {
      uVar15 = lVar14 + 1;
      uVar12 = uVar15 & 0xfffffffffffffff8;
      uVar15 = uVar15 >> 3;
      local_68 = param_1 + uVar15;
      local_70 = uVar15 * 4;
      local_60 = param_3;
      FUN_14299babd(param_1,local_68,(longlong)param_1 + uVar12,param_4);
      FUN_14299babd((longlong)piVar5 - local_70,piVar5,piVar5 + uVar15,param_4);
      param_3 = local_60;
      piVar16 = (int *)((longlong)piVar8 - local_70);
      FUN_14299babd((longlong)piVar8 - uVar12,piVar16,piVar8,param_4);
      piVar7 = local_68;
      piVar8 = piVar16;
    }
    FUN_14299babd(piVar7,piVar5,piVar8,param_4);
    do {
      piVar8 = piVar5;
      if (piVar8 <= param_1) break;
      piVar5 = piVar8 + -1;
    } while (*(double *)(*param_4 + 0x48 + (longlong)piVar8[-1] * 0x58) ==
             *(double *)(*param_4 + 0x48 + (longlong)*piVar8 * 0x58));
    piVar5 = param_1 + (uVar13 >> 3);
    do {
      piVar5 = piVar5 + 1;
      piVar7 = piVar8;
      piVar16 = piVar5;
      if (param_2 <= piVar5) break;
    } while (*(double *)(*param_4 + 0x48 + (longlong)*piVar5 * 0x58) ==
             *(double *)(*param_4 + 0x48 + (longlong)*piVar8 * 0x58));
LAB_14299b6e9:
    piVar9 = piVar8;
    if (piVar5 < param_2) {
      dVar4 = *(double *)(*param_4 + 0x48 + (longlong)*piVar7 * 0x58);
      dVar3 = *(double *)(*param_4 + 0x48 + (longlong)*piVar5 * 0x58);
      if (dVar3 <= dVar4) {
        if (dVar3 < dVar4) goto joined_r0x00014299b734;
        if (piVar5 != piVar16) {
          iVar10 = *piVar16;
          *piVar16 = *piVar5;
          *piVar5 = iVar10;
        }
        piVar16 = piVar16 + 1;
      }
      piVar5 = piVar5 + 1;
      goto LAB_14299b6e9;
    }
joined_r0x00014299b734:
    while (piVar8 = piVar9, param_1 < piVar8) {
      piVar9 = piVar8 + -1;
      dVar4 = *(double *)(*param_4 + 0x48 + (longlong)piVar8[-1] * 0x58);
      dVar3 = *(double *)(*param_4 + 0x48 + (longlong)*piVar7 * 0x58);
      if (dVar3 <= dVar4) {
        if (dVar3 < dVar4) break;
        piVar1 = piVar7 + -1;
        bVar17 = piVar8 != piVar7;
        piVar7 = piVar1;
        if (bVar17) {
          iVar10 = *piVar1;
          *piVar1 = piVar8[-1];
          *piVar9 = iVar10;
        }
      }
    }
    if ((piVar5 != param_2) || (piVar8 != param_1)) {
      if (piVar8 == param_1) {
        iVar10 = *piVar7;
        if (piVar16 != piVar5) {
          *piVar7 = *piVar16;
          *piVar16 = iVar10;
          iVar10 = *piVar7;
        }
        *piVar7 = *piVar5;
        *piVar5 = iVar10;
        piVar5 = piVar5 + 1;
        piVar7 = piVar7 + 1;
        piVar16 = piVar16 + 1;
      }
      else {
        piVar9 = piVar8 + -1;
        if (piVar5 == param_2) {
          piVar1 = piVar7 + -1;
          iVar10 = piVar7[-1];
          if (piVar8 != piVar7) {
            iVar10 = *piVar9;
            *piVar9 = piVar7[-1];
            *piVar1 = iVar10;
          }
          *piVar1 = piVar16[-1];
          piVar16[-1] = iVar10;
          piVar8 = piVar9;
          piVar7 = piVar1;
          piVar16 = piVar16 + -1;
        }
        else {
          iVar10 = *piVar5;
          *piVar5 = *piVar9;
          *piVar9 = iVar10;
          piVar5 = piVar5 + 1;
          piVar8 = piVar9;
        }
      }
      goto LAB_14299b6e9;
    }
    param_3 = (param_3 >> 2) + (param_3 >> 1);
    if ((longlong)piVar7 - (longlong)param_1 < (longlong)local_58 - (longlong)piVar16) {
      FUN_14299b583(param_1,piVar7,param_3,param_4);
      piVar7 = param_2;
      param_1 = piVar16;
    }
    else {
      FUN_14299b583(piVar16,param_2,param_3,param_4);
    }
    uVar13 = (longlong)piVar7 - (longlong)param_1;
    param_2 = piVar7;
  } while( true );
}



// FUNCTION 14299b9f3 FUN_14299b9f3 body=202 status=ok
// SIG undefined FUN_14299b9f3(void)

void FUN_14299b9f3(longlong param_1,longlong param_2,ulonglong param_3,int *param_4,
                  longlong *param_5)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = (longlong)(param_3 - 1) >> 1;
  lVar4 = param_2;
  while (lVar4 < lVar5) {
    dVar2 = *(double *)(*param_5 + 0x48 + (longlong)*(int *)(param_1 + 4 + lVar4 * 8) * 0x58);
    pdVar1 = (double *)(*param_5 + 0x48 + (longlong)*(int *)(param_1 + 8 + lVar4 * 8) * 0x58);
    if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) {
      lVar6 = lVar4 * 2 + 1;
    }
    else {
      lVar6 = lVar4 * 2 + 2;
    }
    *(undefined4 *)(param_1 + lVar4 * 4) = *(undefined4 *)(param_1 + lVar6 * 4);
    lVar4 = lVar6;
  }
  if (((param_3 & 1) == 0) && (lVar4 == lVar5)) {
    *(undefined4 *)(param_1 + lVar5 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    lVar4 = param_3 - 1;
  }
  while (param_2 < lVar4) {
    lVar5 = lVar4 + -1 >> 1;
    iVar3 = *(int *)(param_1 + lVar5 * 4);
    dVar2 = *(double *)(*param_5 + 0x48 + (longlong)*param_4 * 0x58);
    pdVar1 = (double *)(*param_5 + 0x48 + (longlong)iVar3 * 0x58);
    if (dVar2 < *pdVar1 || dVar2 == *pdVar1) break;
    *(int *)(param_1 + lVar4 * 4) = iVar3;
    lVar4 = lVar5;
  }
  *(int *)(param_1 + lVar4 * 4) = *param_4;
  return;
}



// FUNCTION 14299babd FUN_14299babd body=118 status=ok
// SIG undefined FUN_14299babd(void)

void FUN_14299babd(int *param_1,int *param_2,int *param_3,longlong *param_4)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  
  iVar3 = *param_2;
  lVar4 = *param_4;
  dVar5 = *(double *)(lVar4 + 0x48 + (longlong)iVar3 * 0x58);
  if (dVar5 < *(double *)(lVar4 + 0x48 + (longlong)*param_1 * 0x58)) {
    *param_2 = *param_1;
    *param_1 = iVar3;
    lVar4 = *param_4;
    iVar3 = *param_2;
    dVar5 = *(double *)(lVar4 + 0x48 + (longlong)iVar3 * 0x58);
  }
  iVar2 = *param_3;
  pdVar1 = (double *)(lVar4 + 0x48 + (longlong)iVar2 * 0x58);
  if (*pdVar1 <= dVar5 && dVar5 != *pdVar1) {
    *param_3 = iVar3;
    *param_2 = iVar2;
    dVar5 = *(double *)(*param_4 + 0x48 + (longlong)*param_1 * 0x58);
    pdVar1 = (double *)(*param_4 + 0x48 + (longlong)iVar2 * 0x58);
    if (*pdVar1 <= dVar5 && dVar5 != *pdVar1) {
      *param_2 = *param_1;
      *param_1 = iVar2;
    }
  }
  return;
}



// FUNCTION 14299bb33 FUN_14299bb33 body=1627 status=ok
// SIG undefined FUN_14299bb33(void)

void FUN_14299bb33(double *param_1,double *param_2,ulonglong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  double *pdVar5;
  ulonglong uVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  longlong lVar10;
  ulonglong uVar11;
  double *pdVar12;
  double *pdVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar6 = (longlong)param_2 - (longlong)param_1;
  do {
    if ((longlong)uVar6 < 0x201) {
      pdVar5 = param_1;
      if (param_1 != param_2) {
        while (pdVar7 = pdVar5 + 2, pdVar7 != param_2) {
          dVar1 = pdVar5[2];
          dVar3 = pdVar5[3];
          if (*param_1 <= dVar1) {
            dVar2 = pdVar7[-2];
            pdVar5 = pdVar7;
            while (dVar1 < dVar2) {
              *pdVar5 = pdVar5[-2];
              pdVar5[1] = pdVar5[-1];
              dVar2 = pdVar5[-4];
              pdVar5 = pdVar5 + -2;
            }
          }
          else {
            memmove((void *)((longlong)pdVar5 + (0x20 - ((longlong)pdVar7 - (longlong)param_1))),
                    param_1,(longlong)pdVar7 - (longlong)param_1);
            pdVar5 = param_1;
          }
          *pdVar5 = dVar1;
          pdVar5[1] = dVar3;
          pdVar5 = pdVar7;
        }
      }
LAB_14299c165:
      if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    if ((longlong)param_3 < 1) {
      uVar11 = (uVar6 >> 5) + 1;
      pdVar5 = param_1 + (uVar6 >> 5) * 2;
      do {
        local_68 = pdVar5[-2];
        uStack_60 = pdVar5[-1];
        FUN_14299c18f(param_1,uVar11 - 2,uVar6 >> 4,&local_68);
        uVar11 = uVar11 - 1;
        pdVar5 = pdVar5 + -2;
      } while (1 < uVar11);
      lVar10 = (longlong)param_2 - (longlong)param_1;
      if (0x10 < lVar10) {
        do {
          pdVar5 = param_2 + -2;
          local_68 = *pdVar5;
          uStack_60 = param_2[-1];
          uVar14 = *(undefined4 *)((longlong)param_1 + 4);
          uVar15 = *(undefined4 *)(param_1 + 1);
          uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
          *(undefined4 *)pdVar5 = *(undefined4 *)param_1;
          *(undefined4 *)((longlong)param_2 + -0xc) = uVar14;
          *(undefined4 *)(param_2 + -1) = uVar15;
          *(undefined4 *)((longlong)param_2 + -4) = uVar4;
          lVar10 = lVar10 + -0x10;
          FUN_14299c18f(param_1,0,lVar10 >> 4,&local_68);
          param_2 = pdVar5;
        } while (0x10 < lVar10);
      }
      goto LAB_14299c165;
    }
    pdVar7 = param_1 + (uVar6 >> 5) * 2;
    pdVar5 = param_2 + -2;
    lVar10 = (longlong)pdVar5 - (longlong)param_1 >> 4;
    if (lVar10 < 0x29) {
      dVar1 = *pdVar7;
      uVar14 = SUB84(dVar1,0);
      uVar15 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (dVar1 < *param_1) {
        local_68 = *pdVar7;
        uStack_60 = pdVar7[1];
        dVar1 = param_1[1];
        *pdVar7 = *param_1;
        pdVar7[1] = dVar1;
        *param_1 = local_68;
        param_1[1] = uStack_60;
        uVar14 = SUB84(*pdVar7,0);
        uVar15 = (undefined4)((ulonglong)*pdVar7 >> 0x20);
      }
      if (*pdVar5 <= (double)CONCAT44(uVar15,uVar14) && (double)CONCAT44(uVar15,uVar14) != *pdVar5)
      {
        local_68 = *pdVar5;
        uStack_60 = param_2[-1];
        dVar1 = pdVar7[1];
        *pdVar5 = *pdVar7;
        param_2[-1] = dVar1;
        *pdVar7 = local_68;
        pdVar7[1] = uStack_60;
        if (*pdVar7 <= *param_1 && *param_1 != *pdVar7) {
          dVar1 = *pdVar7;
          dVar3 = pdVar7[1];
          dVar2 = param_1[1];
          *pdVar7 = *param_1;
          pdVar7[1] = dVar2;
          local_68._0_4_ = SUB84(dVar1,0);
          local_68._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
          uStack_60._0_4_ = SUB84(dVar3,0);
          uStack_60._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
          *(undefined4 *)param_1 = (undefined4)local_68;
          *(undefined4 *)((longlong)param_1 + 4) = local_68._4_4_;
          *(undefined4 *)(param_1 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)param_1 + 0xc) = uStack_60._4_4_;
          local_68 = dVar1;
          uStack_60 = dVar3;
        }
      }
    }
    else {
      uVar11 = lVar10 + 1U >> 3;
      pdVar9 = param_1 + uVar11 * 2;
      dVar1 = param_1[uVar11 * 2];
      uVar14 = SUB84(dVar1,0);
      uVar15 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (dVar1 < *param_1) {
        local_68 = *pdVar9;
        uStack_60 = pdVar9[1];
        dVar1 = param_1[1];
        *pdVar9 = *param_1;
        pdVar9[1] = dVar1;
        *param_1 = local_68;
        param_1[1] = uStack_60;
        uVar14 = SUB84(*pdVar9,0);
        uVar15 = (undefined4)((ulonglong)*pdVar9 >> 0x20);
      }
      pdVar13 = param_1 + uVar11 * 4;
      if (*pdVar13 <= (double)CONCAT44(uVar15,uVar14) && (double)CONCAT44(uVar15,uVar14) != *pdVar13
         ) {
        local_68 = *pdVar13;
        uStack_60 = pdVar13[1];
        dVar1 = pdVar9[1];
        *pdVar13 = *pdVar9;
        pdVar13[1] = dVar1;
        *pdVar9 = local_68;
        pdVar9[1] = uStack_60;
        if (*pdVar9 <= *param_1 && *param_1 != *pdVar9) {
          local_68 = *pdVar9;
          uStack_60 = pdVar9[1];
          dVar1 = param_1[1];
          *pdVar9 = *param_1;
          pdVar9[1] = dVar1;
          *param_1 = local_68;
          param_1[1] = uStack_60;
        }
      }
      pdVar13 = pdVar7 + uVar11 * -2;
      dVar1 = *pdVar7;
      uVar14 = SUB84(dVar1,0);
      uVar15 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (dVar1 < *pdVar13) {
        local_68 = *pdVar7;
        uStack_60 = pdVar7[1];
        dVar1 = pdVar13[1];
        *pdVar7 = *pdVar13;
        pdVar7[1] = dVar1;
        *pdVar13 = local_68;
        pdVar13[1] = uStack_60;
        uVar14 = SUB84(*pdVar7,0);
        uVar15 = (undefined4)((ulonglong)*pdVar7 >> 0x20);
      }
      pdVar12 = pdVar7 + uVar11 * 2;
      if (*pdVar12 <= (double)CONCAT44(uVar15,uVar14) && (double)CONCAT44(uVar15,uVar14) != *pdVar12
         ) {
        local_68 = *pdVar12;
        uStack_60 = pdVar12[1];
        dVar1 = pdVar7[1];
        *pdVar12 = *pdVar7;
        pdVar12[1] = dVar1;
        *pdVar7 = local_68;
        pdVar7[1] = uStack_60;
        if (*pdVar7 <= *pdVar13 && *pdVar13 != *pdVar7) {
          local_68 = *pdVar7;
          uStack_60 = pdVar7[1];
          dVar1 = pdVar13[1];
          *pdVar7 = *pdVar13;
          pdVar7[1] = dVar1;
          *pdVar13 = local_68;
          pdVar13[1] = uStack_60;
        }
      }
      pdVar13 = pdVar5 + uVar11 * -2;
      pdVar12 = pdVar5 + uVar11 * -4;
      dVar1 = pdVar5[uVar11 * -2];
      uVar14 = SUB84(dVar1,0);
      uVar15 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (dVar1 < pdVar5[uVar11 * -4]) {
        local_68 = *pdVar13;
        uStack_60 = pdVar13[1];
        dVar1 = pdVar12[1];
        *pdVar13 = *pdVar12;
        pdVar13[1] = dVar1;
        *pdVar12 = local_68;
        pdVar12[1] = uStack_60;
        uVar14 = SUB84(*pdVar13,0);
        uVar15 = (undefined4)((ulonglong)*pdVar13 >> 0x20);
      }
      if (*pdVar5 <= (double)CONCAT44(uVar15,uVar14) && (double)CONCAT44(uVar15,uVar14) != *pdVar5)
      {
        local_68 = *pdVar5;
        uStack_60 = param_2[-1];
        dVar1 = pdVar13[1];
        *pdVar5 = *pdVar13;
        param_2[-1] = dVar1;
        *pdVar13 = local_68;
        pdVar13[1] = uStack_60;
        if (*pdVar13 <= *pdVar12 && *pdVar12 != *pdVar13) {
          local_68 = *pdVar13;
          uStack_60 = pdVar13[1];
          dVar1 = pdVar12[1];
          *pdVar13 = *pdVar12;
          pdVar13[1] = dVar1;
          *pdVar12 = local_68;
          pdVar12[1] = uStack_60;
        }
      }
      dVar1 = *pdVar7;
      uVar14 = SUB84(dVar1,0);
      uVar15 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (dVar1 < *pdVar9) {
        local_68 = *pdVar7;
        uStack_60 = pdVar7[1];
        dVar1 = pdVar9[1];
        *pdVar7 = *pdVar9;
        pdVar7[1] = dVar1;
        *pdVar9 = local_68;
        pdVar9[1] = uStack_60;
        uVar14 = SUB84(*pdVar7,0);
        uVar15 = (undefined4)((ulonglong)*pdVar7 >> 0x20);
      }
      if (*pdVar13 <= (double)CONCAT44(uVar15,uVar14) && (double)CONCAT44(uVar15,uVar14) != *pdVar13
         ) {
        local_68 = *pdVar13;
        uStack_60 = pdVar13[1];
        dVar1 = pdVar7[1];
        *pdVar13 = *pdVar7;
        pdVar13[1] = dVar1;
        *pdVar7 = local_68;
        pdVar7[1] = uStack_60;
        if (*pdVar7 <= *pdVar9 && *pdVar9 != *pdVar7) {
          dVar1 = *pdVar7;
          dVar3 = pdVar7[1];
          dVar2 = pdVar9[1];
          *pdVar7 = *pdVar9;
          pdVar7[1] = dVar2;
          local_68._0_4_ = SUB84(dVar1,0);
          local_68._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
          uStack_60._0_4_ = SUB84(dVar3,0);
          uStack_60._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
          *(undefined4 *)pdVar9 = (undefined4)local_68;
          *(undefined4 *)((longlong)pdVar9 + 4) = local_68._4_4_;
          *(undefined4 *)(pdVar9 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)pdVar9 + 0xc) = uStack_60._4_4_;
          local_68 = dVar1;
          uStack_60 = dVar3;
        }
      }
    }
    do {
      pdVar5 = pdVar7;
      if (pdVar5 <= param_1) break;
      pdVar7 = pdVar5 + -2;
    } while (pdVar5[-2] == *pdVar5);
    pdVar7 = param_1 + (uVar6 >> 5) * 2;
    do {
      pdVar7 = pdVar7 + 2;
      pdVar9 = pdVar5;
      pdVar13 = pdVar7;
      if (param_2 <= pdVar7) break;
    } while (*pdVar7 == *pdVar5);
LAB_14299be65:
    pdVar12 = pdVar5;
    if (pdVar7 < param_2) {
      if (*pdVar7 <= *pdVar9) {
        if (*pdVar7 < *pdVar9) goto joined_r0x00014299beab;
        if (pdVar7 != pdVar13) {
          dVar1 = *pdVar13;
          dVar3 = pdVar13[1];
          dVar2 = pdVar7[1];
          *pdVar13 = *pdVar7;
          pdVar13[1] = dVar2;
          local_68._0_4_ = SUB84(dVar1,0);
          local_68._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
          uStack_60._0_4_ = SUB84(dVar3,0);
          uStack_60._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
          *(undefined4 *)pdVar7 = (undefined4)local_68;
          *(undefined4 *)((longlong)pdVar7 + 4) = local_68._4_4_;
          *(undefined4 *)(pdVar7 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)pdVar7 + 0xc) = uStack_60._4_4_;
          local_68 = dVar1;
          uStack_60 = dVar3;
        }
        pdVar13 = pdVar13 + 2;
      }
      pdVar7 = pdVar7 + 2;
      goto LAB_14299be65;
    }
joined_r0x00014299beab:
    while (pdVar8 = pdVar9, pdVar5 = pdVar12, pdVar9 = pdVar8, param_1 < pdVar5) {
      pdVar12 = pdVar5 + -2;
      if (*pdVar8 <= pdVar5[-2]) {
        if (*pdVar8 < pdVar5[-2]) break;
        pdVar9 = pdVar8 + -2;
        if (pdVar5 != pdVar8) {
          dVar1 = *pdVar9;
          dVar3 = pdVar8[-1];
          dVar2 = pdVar5[-1];
          *pdVar9 = *pdVar12;
          pdVar8[-1] = dVar2;
          local_68._0_4_ = SUB84(dVar1,0);
          local_68._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
          uStack_60._0_4_ = SUB84(dVar3,0);
          uStack_60._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
          *(undefined4 *)pdVar12 = (undefined4)local_68;
          *(undefined4 *)((longlong)pdVar5 + -0xc) = local_68._4_4_;
          *(undefined4 *)(pdVar5 + -1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)pdVar5 + -4) = uStack_60._4_4_;
          local_68 = dVar1;
          uStack_60 = dVar3;
        }
      }
    }
    if ((pdVar7 != param_2) || (pdVar5 != param_1)) {
      if (pdVar5 == param_1) {
        if (pdVar13 != pdVar7) {
          dVar1 = *pdVar8;
          dVar3 = pdVar8[1];
          dVar2 = pdVar13[1];
          *pdVar8 = *pdVar13;
          pdVar8[1] = dVar2;
          *pdVar13 = dVar1;
          pdVar13[1] = dVar3;
        }
        dVar1 = *pdVar8;
        dVar3 = pdVar8[1];
        dVar2 = pdVar7[1];
        *pdVar8 = *pdVar7;
        pdVar8[1] = dVar2;
        local_68._0_4_ = SUB84(dVar1,0);
        local_68._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
        uStack_60._0_4_ = SUB84(dVar3,0);
        uStack_60._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
        *(undefined4 *)pdVar7 = (undefined4)local_68;
        *(undefined4 *)((longlong)pdVar7 + 4) = local_68._4_4_;
        *(undefined4 *)(pdVar7 + 1) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)pdVar7 + 0xc) = uStack_60._4_4_;
        pdVar7 = pdVar7 + 2;
        pdVar9 = pdVar8 + 2;
        pdVar13 = pdVar13 + 2;
        local_68 = dVar1;
        uStack_60 = dVar3;
      }
      else {
        pdVar12 = pdVar5 + -2;
        if (pdVar7 == param_2) {
          pdVar9 = pdVar8 + -2;
          if (pdVar5 != pdVar8) {
            dVar1 = *pdVar12;
            dVar3 = pdVar5[-1];
            dVar2 = pdVar8[-1];
            *pdVar12 = *pdVar9;
            pdVar5[-1] = dVar2;
            *pdVar9 = dVar1;
            pdVar8[-1] = dVar3;
          }
          dVar1 = *pdVar9;
          dVar3 = pdVar8[-1];
          dVar2 = pdVar13[-1];
          *pdVar9 = pdVar13[-2];
          pdVar8[-1] = dVar2;
          local_68._0_4_ = SUB84(dVar1,0);
          local_68._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
          uStack_60._0_4_ = SUB84(dVar3,0);
          uStack_60._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
          *(undefined4 *)(pdVar13 + -2) = (undefined4)local_68;
          *(undefined4 *)((longlong)pdVar13 + -0xc) = local_68._4_4_;
          *(undefined4 *)(pdVar13 + -1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)pdVar13 + -4) = uStack_60._4_4_;
          pdVar5 = pdVar12;
          pdVar13 = pdVar13 + -2;
          local_68 = dVar1;
          uStack_60 = dVar3;
        }
        else {
          dVar1 = *pdVar7;
          dVar3 = pdVar7[1];
          dVar2 = pdVar5[-1];
          *pdVar7 = *pdVar12;
          pdVar7[1] = dVar2;
          local_68._0_4_ = SUB84(dVar1,0);
          local_68._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
          uStack_60._0_4_ = SUB84(dVar3,0);
          uStack_60._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
          *(undefined4 *)pdVar12 = (undefined4)local_68;
          *(undefined4 *)((longlong)pdVar5 + -0xc) = local_68._4_4_;
          *(undefined4 *)(pdVar5 + -1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)pdVar5 + -4) = uStack_60._4_4_;
          pdVar7 = pdVar7 + 2;
          pdVar5 = pdVar12;
          local_68 = dVar1;
          uStack_60 = dVar3;
        }
      }
      goto LAB_14299be65;
    }
    param_3 = (param_3 >> 2) + (param_3 >> 1);
    if ((longlong)pdVar8 - (longlong)param_1 < (longlong)param_2 - (longlong)pdVar13) {
      FUN_14299bb33(param_1,pdVar8,param_3);
      pdVar8 = param_2;
      param_1 = pdVar13;
    }
    else {
      FUN_14299bb33(pdVar13,param_2,param_3);
    }
    uVar6 = (longlong)pdVar8 - (longlong)param_1;
    param_2 = pdVar8;
  } while( true );
}



// FUNCTION 14299c18f FUN_14299c18f body=218 status=ok
// SIG undefined FUN_14299c18f(void)

void FUN_14299c18f(longlong param_1,longlong param_2,ulonglong param_3,double *param_4)

{
  double *pdVar1;
  undefined8 *puVar2;
  longlong lVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  lVar8 = param_3 - 1;
  lVar10 = lVar8 >> 1;
  lVar6 = param_2;
  while (lVar6 < lVar10) {
    lVar3 = lVar6 * 2 + 2;
    lVar7 = lVar6 * 2 + 1;
    dVar4 = *(double *)(param_1 + lVar7 * 0x10);
    pdVar1 = (double *)(param_1 + lVar3 * 0x10);
    if (dVar4 < *pdVar1 || dVar4 == *pdVar1) {
      lVar7 = lVar3;
    }
    puVar2 = (undefined8 *)(param_1 + lVar7 * 0x10);
    uVar5 = puVar2[1];
    puVar9 = (undefined8 *)(param_1 + lVar6 * 0x10);
    *puVar9 = *puVar2;
    puVar9[1] = uVar5;
    lVar6 = lVar7;
  }
  if (((param_3 & 1) == 0) && (lVar6 == lVar10)) {
    puVar2 = (undefined8 *)(param_1 + lVar8 * 0x10);
    uVar5 = puVar2[1];
    puVar9 = (undefined8 *)(param_1 + lVar10 * 0x10);
    *puVar9 = *puVar2;
    puVar9[1] = uVar5;
    lVar6 = lVar8;
  }
  while (param_2 < lVar6) {
    lVar8 = lVar6 + -1 >> 1;
    lVar10 = lVar8 * 0x10;
    pdVar1 = (double *)(param_1 + lVar10);
    if (*param_4 < *pdVar1 || *param_4 == *pdVar1) break;
    puVar9 = (undefined8 *)(lVar10 + param_1);
    uVar5 = puVar9[1];
    puVar2 = (undefined8 *)(param_1 + lVar6 * 0x10);
    *puVar2 = *puVar9;
    puVar2[1] = uVar5;
    lVar6 = lVar8;
  }
  dVar4 = param_4[1];
  pdVar1 = (double *)(param_1 + lVar6 * 0x10);
  *pdVar1 = *param_4;
  pdVar1[1] = dVar4;
  return;
}



// FUNCTION 14299c269 FUN_14299c269 body=1790 status=ok
// SIG undefined FUN_14299c269(void)

void FUN_14299c269(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  double dVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStack_108 [40];
  undefined8 *local_e0;
  longlong local_d8;
  undefined8 *local_d0;
  ulonglong local_c8;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined8 local_b8 [11];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar8 = (longlong)param_2 - (longlong)param_1;
  if (0xb57 < (longlong)uVar8) {
    puVar7 = param_2;
    do {
      if ((longlong)param_3 < 1) {
        uVar15 = uVar8 / 0xb0 + 1;
        puVar10 = param_1 + (uVar8 / 0xb0) * 0xb;
        do {
          puVar10 = puVar10 + -0xb;
          puVar6 = puVar10;
          puVar9 = local_b8;
          for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar9 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar9 = puVar9 + 1;
          }
          FUN_14299c968(param_1,uVar15 - 2,uVar8 / 0x58,local_b8);
          uVar15 = uVar15 - 1;
        } while (1 < uVar15);
        lVar11 = (longlong)puVar7 - (longlong)param_1;
        if (0x58 < lVar11) {
          do {
            puVar7 = puVar7 + -0xb;
            puVar10 = puVar7;
            puVar6 = local_b8;
            for (lVar12 = 0xb; lVar12 != 0; lVar12 = lVar12 + -1) {
              *puVar6 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar6 = puVar6 + 1;
            }
            puVar10 = param_1;
            puVar6 = puVar7;
            for (lVar12 = 0xb; lVar12 != 0; lVar12 = lVar12 + -1) {
              *puVar6 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar6 = puVar6 + 1;
            }
            lVar11 = lVar11 + -0x58;
            FUN_14299c968(param_1,0,(lVar11 >> 3) * 0x2e8ba2e8ba2e8ba3,local_b8);
          } while (0x58 < lVar11);
        }
        goto LAB_14299c932;
      }
      lVar11 = (uVar8 / 0xb0) * 0x58;
      puVar6 = param_1 + (uVar8 / 0xb0) * 0xb;
      puVar10 = puVar7 + -0xb;
      puVar9 = param_1;
      local_d0 = puVar7;
      local_c8 = param_3;
      if (0xdc0 < (longlong)puVar10 - (longlong)param_1) {
        uVar8 = ((ulonglong)((longlong)puVar10 - (longlong)param_1) >> 3) * 0x2e8ba2e8ba2e8ba3 + 1
                >> 3;
        local_e0 = param_1 + uVar8 * 0xb;
        local_d8 = lVar11;
        FUN_14299ca88(param_1,local_e0,param_1 + uVar8 * 0x16);
        FUN_14299ca88(puVar6 + uVar8 * -0xb,puVar6,puVar6 + uVar8 * 0xb);
        lVar11 = local_d8;
        FUN_14299ca88(puVar10 + uVar8 * -0x16,puVar10 + uVar8 * -0xb,puVar10);
        puVar9 = local_e0;
        puVar10 = puVar10 + uVar8 * -0xb;
      }
      FUN_14299ca88(puVar9,puVar6,puVar10);
      do {
        puVar10 = puVar6;
        if (puVar10 <= param_1) break;
        cVar3 = *(char *)((longlong)puVar10 + -4);
        cVar2 = *(char *)((longlong)puVar10 + 0x54);
        bVar16 = cVar3 < cVar2;
        if (cVar3 == cVar2) {
          bVar16 = (double)puVar10[-2] < (double)puVar10[9];
        }
        if (bVar16) break;
        bVar16 = cVar2 < cVar3;
        if (cVar2 == cVar3) {
          bVar16 = (double)puVar10[9] < (double)puVar10[-2];
        }
        puVar6 = puVar10 + -0xb;
      } while (!bVar16);
      puVar6 = (undefined8 *)((longlong)param_1 + lVar11);
      do {
        puVar5 = puVar6 + 0xb;
        puVar9 = puVar10;
        puVar14 = puVar5;
        if (puVar7 <= puVar5) break;
        cVar3 = *(char *)((longlong)puVar6 + 0xac);
        cVar2 = *(char *)((longlong)puVar10 + 0x54);
        bVar16 = cVar3 < cVar2;
        if (cVar3 == cVar2) {
          bVar16 = (double)puVar6[0x14] < (double)puVar10[9];
        }
        if (bVar16) break;
        bVar16 = cVar2 < cVar3;
        if (cVar2 == cVar3) {
          bVar16 = (double)puVar10[9] < (double)puVar6[0x14];
        }
        puVar6 = puVar5;
      } while (!bVar16);
LAB_14299c455:
      param_2 = puVar10;
      if (puVar5 < puVar7) {
        cVar3 = *(char *)((longlong)puVar10 + 0x54);
        cVar2 = *(char *)((longlong)puVar5 + 0x54);
        bVar16 = cVar3 < cVar2;
        if (cVar3 == cVar2) {
          bVar16 = (double)puVar10[9] < (double)puVar5[9];
        }
        if (!bVar16) {
          bVar16 = cVar2 < cVar3;
          if (cVar2 == cVar3) {
            bVar16 = (double)puVar5[9] < (double)puVar10[9];
          }
          if (bVar16) goto joined_r0x00014299c4ea;
          if (puVar5 != puVar14) {
            puVar6 = puVar14;
            puVar13 = local_b8;
            for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
              *puVar13 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar13 = puVar13 + 1;
            }
            puVar6 = puVar5;
            puVar13 = puVar14;
            for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
              *puVar13 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar13 = puVar13 + 1;
            }
            puVar6 = local_b8;
            puVar13 = puVar5;
            for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
              *puVar13 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar13 = puVar13 + 1;
            }
          }
          puVar14 = puVar14 + 0xb;
        }
        puVar5 = puVar5 + 0xb;
        goto LAB_14299c455;
      }
joined_r0x00014299c4ea:
      while (puVar6 = puVar9, param_1 < puVar6) {
        puVar9 = puVar6 + -0xb;
        cVar3 = *(char *)((longlong)puVar6 + -4);
        cVar2 = *(char *)((longlong)param_2 + 0x54);
        bVar16 = cVar3 < cVar2;
        if (cVar3 == cVar2) {
          bVar16 = (double)puVar6[-2] < (double)param_2[9];
        }
        if (!bVar16) {
          bVar16 = cVar2 < cVar3;
          if (cVar2 == cVar3) {
            bVar16 = (double)param_2[9] < (double)puVar6[-2];
          }
          if (bVar16) break;
          puVar10 = param_2 + -0xb;
          bVar16 = puVar6 != param_2;
          param_2 = puVar10;
          if (bVar16) {
            puVar6 = puVar10;
            puVar13 = local_b8;
            for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
              *puVar13 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar13 = puVar13 + 1;
            }
            puVar6 = puVar9;
            for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
              *puVar10 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar10 = puVar10 + 1;
            }
            puVar10 = local_b8;
            puVar6 = puVar9;
            for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
              *puVar6 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar6 = puVar6 + 1;
            }
          }
        }
      }
      if ((puVar5 != puVar7) || (puVar6 != param_1)) {
        if (puVar6 == param_1) {
          if (puVar14 != puVar5) {
            puVar10 = param_2;
            puVar9 = local_b8;
            for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
              *puVar9 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar9 = puVar9 + 1;
            }
            puVar10 = puVar14;
            puVar9 = param_2;
            for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
              *puVar9 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar9 = puVar9 + 1;
            }
            puVar10 = local_b8;
            puVar9 = puVar14;
            for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
              *puVar9 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar9 = puVar9 + 1;
            }
          }
          puVar10 = param_2;
          puVar9 = local_b8;
          for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar9 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar10 = puVar5;
          puVar9 = param_2;
          for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar9 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar10 = local_b8;
          puVar9 = puVar5;
          for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar9 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar10 = param_2 + 0xb;
          puVar5 = puVar5 + 0xb;
          puVar9 = puVar6;
          puVar14 = puVar14 + 0xb;
        }
        else {
          puVar9 = puVar6 + -0xb;
          if (puVar5 == puVar7) {
            puVar10 = param_2 + -0xb;
            if (puVar6 != param_2) {
              puVar6 = puVar9;
              puVar13 = local_b8;
              for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
                *puVar13 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar13 = puVar13 + 1;
              }
              puVar6 = puVar10;
              puVar13 = puVar9;
              for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
                *puVar13 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar13 = puVar13 + 1;
              }
              puVar6 = local_b8;
              puVar13 = puVar10;
              for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
                *puVar13 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar13 = puVar13 + 1;
              }
            }
            puVar14 = puVar14 + -0xb;
            puVar6 = puVar10;
            puVar13 = local_b8;
            for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
              *puVar13 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar13 = puVar13 + 1;
            }
            puVar6 = puVar14;
            puVar13 = puVar10;
            for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
              *puVar13 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar13 = puVar13 + 1;
            }
            puVar6 = local_b8;
            puVar13 = puVar14;
            for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
              *puVar13 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar13 = puVar13 + 1;
            }
          }
          else {
            puVar10 = puVar5;
            puVar6 = local_b8;
            for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
              *puVar6 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar6 = puVar6 + 1;
            }
            puVar10 = puVar9;
            puVar6 = puVar5;
            for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
              *puVar6 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar6 = puVar6 + 1;
            }
            puVar10 = local_b8;
            puVar6 = puVar9;
            for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
              *puVar6 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar6 = puVar6 + 1;
            }
            puVar5 = puVar5 + 0xb;
            puVar10 = param_2;
          }
        }
        goto LAB_14299c455;
      }
      param_3 = (local_c8 >> 2) + (local_c8 >> 1);
      if ((longlong)param_2 - (longlong)param_1 < (longlong)local_d0 - (longlong)puVar14) {
        FUN_14299c269(param_1,param_2,param_3);
        param_2 = puVar7;
        param_1 = puVar14;
      }
      else {
        FUN_14299c269(puVar14,puVar7,param_3);
      }
      uVar8 = (longlong)param_2 - (longlong)param_1;
      puVar7 = param_2;
    } while (0xb57 < (longlong)uVar8);
  }
  if ((param_1 != param_2) && (param_1 + 0xb != param_2)) {
    puVar7 = param_1;
    puVar10 = param_1 + 0xb;
    do {
      puVar6 = puVar10;
      puVar9 = local_b8;
      for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar9 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      }
      dVar1 = (double)puVar7[0x14];
      uVar4 = *(undefined4 *)(puVar7 + 0x15);
      cVar3 = *(char *)((longlong)puVar7 + 0xac);
      local_ba = *(undefined1 *)((longlong)puVar7 + 0xaf);
      local_bc = *(undefined2 *)((longlong)puVar7 + 0xad);
      bVar16 = dVar1 < (double)param_1[9];
      if (cVar3 != *(char *)((longlong)param_1 + 0x54)) {
        bVar16 = cVar3 < *(char *)((longlong)param_1 + 0x54);
      }
      if (bVar16) {
        memmove((void *)((longlong)puVar7 + (0xb0 - ((longlong)puVar10 - (longlong)param_1))),
                param_1,(longlong)puVar10 - (longlong)param_1);
        puVar7 = local_b8;
        puVar6 = param_1;
        for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
          *puVar6 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
        }
        param_1[9] = dVar1;
        *(undefined4 *)(param_1 + 10) = uVar4;
        puVar7 = param_1;
      }
      else {
        bVar16 = dVar1 < (double)puVar10[-2];
        if (cVar3 != *(char *)((longlong)puVar10 + -4)) {
          bVar16 = cVar3 < *(char *)((longlong)puVar10 + -4);
        }
        puVar6 = puVar10;
        puVar7 = puVar10;
        if (bVar16) {
          do {
            puVar7 = puVar6 + -0xb;
            puVar9 = puVar7;
            puVar14 = puVar6;
            for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
              *puVar14 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar14 = puVar14 + 1;
            }
            bVar16 = dVar1 < (double)puVar6[-0xd];
            if (cVar3 != *(char *)((longlong)puVar6 + -0x5c)) {
              bVar16 = cVar3 < *(char *)((longlong)puVar6 + -0x5c);
            }
            puVar6 = puVar7;
          } while (bVar16);
        }
        puVar6 = local_b8;
        puVar9 = puVar7;
        for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
          *puVar9 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        }
        puVar7[9] = dVar1;
        *(undefined4 *)(puVar7 + 10) = uVar4;
      }
      *(char *)((longlong)puVar7 + 0x54) = cVar3;
      *(undefined2 *)((longlong)puVar7 + 0x55) = local_bc;
      *(undefined1 *)((longlong)puVar7 + 0x57) = local_ba;
      puVar6 = puVar10 + 0xb;
      puVar7 = puVar10;
      puVar10 = puVar6;
    } while (puVar6 != param_2);
  }
LAB_14299c932:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14299c968 FUN_14299c968 body=288 status=ok
// SIG undefined FUN_14299c968(void)

void FUN_14299c968(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  double *pdVar1;
  double dVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar9 = param_3 - 1;
  lVar8 = lVar9 >> 1;
  lVar6 = param_2;
  while (lVar6 < lVar8) {
    lVar7 = lVar6 * 2 + 2;
    lVar13 = lVar6 * 2 + 1;
    lVar11 = lVar13 * 0x58;
    lVar14 = lVar7 * 0x58;
    dVar2 = *(double *)(param_1 + 0x48 + lVar11);
    pdVar1 = (double *)(param_1 + 0x48 + lVar14);
    cVar3 = *(char *)(param_1 + 0x54 + lVar14);
    cVar4 = *(char *)(param_1 + 0x54 + lVar11);
    bVar5 = cVar3 < cVar4;
    if (cVar3 == cVar4) {
      bVar5 = *pdVar1 <= dVar2 && dVar2 != *pdVar1;
    }
    if (!bVar5) {
      lVar13 = lVar7;
    }
    puVar10 = (undefined8 *)(lVar13 * 0x58 + param_1);
    puVar12 = (undefined8 *)(lVar6 * 0x58 + param_1);
    for (lVar7 = 0xb; lVar6 = lVar13, lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  if (((param_3 & 1) == 0) && (lVar6 == lVar8)) {
    puVar10 = (undefined8 *)(lVar9 * 0x58 + param_1);
    puVar12 = (undefined8 *)(lVar8 * 0x58 + param_1);
    for (lVar7 = 0xb; lVar6 = lVar9, lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  while (param_2 < lVar6) {
    lVar8 = lVar6 + -1 >> 1;
    lVar9 = lVar8 * 0x58;
    pdVar1 = (double *)(param_1 + 0x48 + lVar9);
    cVar3 = *(char *)(param_1 + 0x54 + lVar9);
    bVar5 = cVar3 < *(char *)((longlong)param_4 + 0x54);
    if (cVar3 == *(char *)((longlong)param_4 + 0x54)) {
      bVar5 = *pdVar1 <= (double)param_4[9] && (double)param_4[9] != *pdVar1;
    }
    if (!bVar5) break;
    puVar10 = (undefined8 *)(lVar9 + param_1);
    puVar12 = (undefined8 *)(lVar6 * 0x58 + param_1);
    for (lVar7 = 0xb; lVar6 = lVar8, lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  puVar10 = (undefined8 *)(param_1 + lVar6 * 0x58);
  for (lVar9 = 0xb; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *param_4;
    param_4 = param_4 + 1;
    puVar10 = puVar10 + 1;
  }
  return;
}



// FUNCTION 14299ca88 FUN_14299ca88 body=336 status=ok
// SIG undefined FUN_14299ca88(void)

void FUN_14299ca88(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  double dVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70 [11];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  dVar6 = (double)param_2[9];
  cVar2 = *(char *)((longlong)param_2 + 0x54);
  bVar1 = cVar2 < *(char *)((longlong)param_1 + 0x54);
  if (cVar2 == *(char *)((longlong)param_1 + 0x54)) {
    bVar1 = dVar6 < (double)param_1[9];
  }
  if (bVar1) {
    puVar4 = param_2;
    puVar5 = local_70;
    for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = param_1;
    puVar5 = param_2;
    for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = local_70;
    puVar5 = param_1;
    for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    cVar2 = *(char *)((longlong)param_2 + 0x54);
    dVar6 = (double)param_2[9];
  }
  bVar1 = *(char *)((longlong)param_3 + 0x54) < cVar2;
  if (*(char *)((longlong)param_3 + 0x54) == cVar2) {
    bVar1 = (double)param_3[9] <= dVar6 && dVar6 != (double)param_3[9];
  }
  if (bVar1) {
    puVar4 = param_3;
    puVar5 = local_70;
    for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = param_2;
    for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
      *param_3 = *puVar4;
      puVar4 = puVar4 + 1;
      param_3 = param_3 + 1;
    }
    puVar4 = local_70;
    puVar5 = param_2;
    for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    bVar1 = *(char *)((longlong)param_2 + 0x54) < *(char *)((longlong)param_1 + 0x54);
    if (*(char *)((longlong)param_2 + 0x54) == *(char *)((longlong)param_1 + 0x54)) {
      bVar1 = (double)param_2[9] <= (double)param_1[9] && (double)param_1[9] != (double)param_2[9];
    }
    if (bVar1) {
      puVar4 = param_2;
      puVar5 = local_70;
      for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = param_1;
      for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
        *param_2 = *puVar4;
        puVar4 = puVar4 + 1;
        param_2 = param_2 + 1;
      }
      puVar4 = local_70;
      for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
        *param_1 = *puVar4;
        puVar4 = puVar4 + 1;
        param_1 = param_1 + 1;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14299cbd9 FUN_14299cbd9 body=1363 status=ok
// SIG undefined FUN_14299cbd9(void)

undefined8
FUN_14299cbd9(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  double dVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  float local_100;
  float local_fc;
  undefined1 *local_f8;
  longlong local_a8;
  float local_a0;
  float local_9c;
  code *local_98;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar2 = *(undefined1 *)(param_2 + 0x1c);
  switch(uVar2) {
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
switchD_14299cc42_caseD_82:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386ca;
    lVar4 = param_5[1];
    lVar3 = param_5[2];
    local_108 = *param_5;
    dVar1 = *(double *)(local_108 + 0x10);
    local_9c = local_a0;
    goto LAB_14299d0c3;
  case 1:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_9c = 0.0;
    local_98 = FUN_144857b9e;
    break;
  case 3:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386e2;
    local_9c = local_a0;
    break;
  case 4:
    FUN_1447dc19e(param_2 + 0x30,&local_a8,param_4);
    FUN_1447dc19e(param_2 + 0x30,&local_108,param_3);
    local_148 = param_5;
    FUN_14299cbd9(param_1,*(undefined8 *)(param_2 + 0x20),&local_108,&local_a8);
    goto LAB_14299d0fd;
  case 8:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_9c = 0.0;
    local_98 = FUN_14172546a;
    break;
  default:
    switch(uVar2) {
    case 0x40:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5ef26;
      break;
    case 0x41:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = 0.0;
      local_98 = FUN_146d5ef42;
      break;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_14299cc42_caseD_82;
    case 0x43:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5efe8;
      break;
    case 0x48:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = 0.0;
      local_98 = FUN_144b038b4;
      break;
    default:
      switch(uVar2) {
      case 0x80:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = (code *)&LAB_146cc500a;
        break;
      case 0x81:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = 0.0;
        local_98 = FUN_146cc5264;
        break;
      default:
        goto switchD_14299cc42_caseD_82;
      case 0x83:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = FUN_146cc5596;
        break;
      case 0x88:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = 0.0;
        local_98 = FUN_144a12d46;
      }
    }
  }
  lVar4 = param_5[1];
  lVar3 = param_5[2];
  local_108 = *param_5;
  dVar1 = *(double *)(local_108 + 0x10);
LAB_14299d0c3:
  local_fc = (float)dVar1;
  local_148 = &local_a8;
  local_f8 = &LAB_144a386ca;
  local_140 = param_3;
  local_138 = param_4;
  local_100 = local_fc;
  local_a8 = param_2;
  FUN_1417273a7(param_1,&local_108,lVar4,lVar3);
LAB_14299d0fd:
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14299d12d FUN_14299d12d body=1396 status=ok
// SIG undefined FUN_14299d12d(void)

undefined8
FUN_14299d12d(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  double dVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  float local_100;
  undefined4 local_fc;
  code *local_f8;
  longlong local_a8;
  float local_a0;
  float local_9c;
  code *local_98;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar2 = *(undefined1 *)(param_2 + 0x1c);
  switch(uVar2) {
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
switchD_14299d196_caseD_82:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386ca;
    local_9c = local_a0;
    break;
  case 1:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_9c = 0.0;
    local_98 = FUN_144857b9e;
    lVar4 = param_5[1];
    lVar3 = param_5[2];
    local_108 = *param_5;
    dVar1 = *(double *)(local_108 + 0x10);
    goto LAB_14299d63c;
  case 3:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386e2;
    local_9c = local_a0;
    break;
  case 4:
    FUN_1447dc19e(param_2 + 0x30,&local_a8,param_4);
    FUN_1447dc19e(param_2 + 0x30,&local_108,param_3);
    local_148 = param_5;
    FUN_14299d12d(param_1,*(undefined8 *)(param_2 + 0x20),&local_108,&local_a8);
    goto LAB_14299d672;
  case 8:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = FUN_14172546a;
    goto LAB_14299d575;
  default:
    switch(uVar2) {
    case 0x40:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5ef26;
      break;
    case 0x41:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_98 = FUN_146d5ef42;
      goto LAB_14299d575;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_14299d196_caseD_82;
    case 0x43:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5efe8;
      break;
    case 0x48:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_98 = FUN_144b038b4;
LAB_14299d575:
      local_9c = 0.0;
      lVar4 = param_5[1];
      lVar3 = param_5[2];
      local_108 = *param_5;
      dVar1 = *(double *)(local_108 + 0x10);
      goto LAB_14299d63c;
    default:
      switch(uVar2) {
      case 0x80:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = (code *)&LAB_146cc500a;
        break;
      case 0x81:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_98 = FUN_146cc5264;
        goto LAB_14299d575;
      default:
        goto switchD_14299d196_caseD_82;
      case 0x83:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = FUN_146cc5596;
        break;
      case 0x88:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_98 = FUN_144a12d46;
        goto LAB_14299d575;
      }
    }
  }
  lVar4 = param_5[1];
  lVar3 = param_5[2];
  local_108 = *param_5;
  dVar1 = *(double *)(local_108 + 0x10);
LAB_14299d63c:
  local_100 = (float)dVar1;
  local_f8 = FUN_144857b9e;
  local_fc = 0;
  local_148 = &local_a8;
  local_140 = param_3;
  local_138 = param_4;
  local_a8 = param_2;
  FUN_1417273a7(param_1,&local_108,lVar4,lVar3);
LAB_14299d672:
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14299d6a2 FUN_14299d6a2 body=1363 status=ok
// SIG undefined FUN_14299d6a2(void)

undefined8
FUN_14299d6a2(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  double dVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  float local_100;
  float local_fc;
  undefined1 *local_f8;
  longlong local_a8;
  float local_a0;
  float local_9c;
  code *local_98;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar2 = *(undefined1 *)(param_2 + 0x1c);
  switch(uVar2) {
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
switchD_14299d70b_caseD_82:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386ca;
    local_9c = local_a0;
    break;
  case 1:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_9c = 0.0;
    local_98 = FUN_144857b9e;
    break;
  case 3:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386e2;
    lVar4 = param_5[1];
    lVar3 = param_5[2];
    local_108 = *param_5;
    dVar1 = *(double *)(local_108 + 0x10);
    local_9c = local_a0;
    goto LAB_14299db8c;
  case 4:
    FUN_1447dc19e(param_2 + 0x30,&local_a8,param_4);
    FUN_1447dc19e(param_2 + 0x30,&local_108,param_3);
    local_148 = param_5;
    FUN_14299d6a2(param_1,*(undefined8 *)(param_2 + 0x20),&local_108,&local_a8);
    goto LAB_14299dbc6;
  case 8:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_9c = 0.0;
    local_98 = FUN_14172546a;
    break;
  default:
    switch(uVar2) {
    case 0x40:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5ef26;
      break;
    case 0x41:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = 0.0;
      local_98 = FUN_146d5ef42;
      break;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_14299d70b_caseD_82;
    case 0x43:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5efe8;
      break;
    case 0x48:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = 0.0;
      local_98 = FUN_144b038b4;
      break;
    default:
      switch(uVar2) {
      case 0x80:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = (code *)&LAB_146cc500a;
        break;
      case 0x81:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = 0.0;
        local_98 = FUN_146cc5264;
        break;
      default:
        goto switchD_14299d70b_caseD_82;
      case 0x83:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = FUN_146cc5596;
        break;
      case 0x88:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = 0.0;
        local_98 = FUN_144a12d46;
      }
    }
  }
  lVar4 = param_5[1];
  lVar3 = param_5[2];
  local_108 = *param_5;
  dVar1 = *(double *)(local_108 + 0x10);
LAB_14299db8c:
  local_fc = (float)dVar1;
  local_148 = &local_a8;
  local_f8 = &LAB_144a386e2;
  local_140 = param_3;
  local_138 = param_4;
  local_100 = local_fc;
  local_a8 = param_2;
  FUN_1417273a7(param_1,&local_108,lVar4,lVar3);
LAB_14299dbc6:
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14299dbf6 FUN_14299dbf6 body=1396 status=ok
// SIG undefined FUN_14299dbf6(void)

undefined8
FUN_14299dbf6(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  double dVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  float local_100;
  undefined4 local_fc;
  code *local_f8;
  longlong local_a8;
  float local_a0;
  float local_9c;
  code *local_98;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar2 = *(undefined1 *)(param_2 + 0x1c);
  switch(uVar2) {
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
switchD_14299dc5f_caseD_82:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386ca;
    local_9c = local_a0;
    break;
  case 1:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = FUN_144857b9e;
    goto LAB_14299e03e;
  case 3:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386e2;
    local_9c = local_a0;
    break;
  case 4:
    FUN_1447dc19e(param_2 + 0x30,&local_a8,param_4);
    FUN_1447dc19e(param_2 + 0x30,&local_108,param_3);
    local_148 = param_5;
    FUN_14299dbf6(param_1,*(undefined8 *)(param_2 + 0x20),&local_108,&local_a8);
    goto LAB_14299e13b;
  case 8:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_9c = 0.0;
    local_98 = FUN_14172546a;
    lVar4 = param_5[1];
    lVar3 = param_5[2];
    local_108 = *param_5;
    dVar1 = *(double *)(local_108 + 0x10);
    goto LAB_14299e105;
  default:
    switch(uVar2) {
    case 0x40:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5ef26;
      break;
    case 0x41:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_98 = FUN_146d5ef42;
      goto LAB_14299e03e;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_14299dc5f_caseD_82;
    case 0x43:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5efe8;
      break;
    case 0x48:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_98 = FUN_144b038b4;
LAB_14299e03e:
      local_9c = 0.0;
      lVar4 = param_5[1];
      lVar3 = param_5[2];
      local_108 = *param_5;
      dVar1 = *(double *)(local_108 + 0x10);
      goto LAB_14299e105;
    default:
      switch(uVar2) {
      case 0x80:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = (code *)&LAB_146cc500a;
        break;
      case 0x81:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_98 = FUN_146cc5264;
        goto LAB_14299e03e;
      default:
        goto switchD_14299dc5f_caseD_82;
      case 0x83:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = FUN_146cc5596;
        break;
      case 0x88:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_98 = FUN_144a12d46;
        goto LAB_14299e03e;
      }
    }
  }
  lVar4 = param_5[1];
  lVar3 = param_5[2];
  local_108 = *param_5;
  dVar1 = *(double *)(local_108 + 0x10);
LAB_14299e105:
  local_100 = (float)dVar1;
  local_f8 = FUN_14172546a;
  local_fc = 0;
  local_148 = &local_a8;
  local_140 = param_3;
  local_138 = param_4;
  local_a8 = param_2;
  FUN_1417273a7(param_1,&local_108,lVar4,lVar3);
LAB_14299e13b:
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14299e16b FUN_14299e16b body=1472 status=ok
// SIG undefined FUN_14299e16b(void)

undefined8
FUN_14299e16b(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  float local_100;
  float local_fc;
  undefined1 *local_f8;
  longlong local_a8;
  float local_a0;
  float local_9c;
  code *local_98;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar1 = *(undefined1 *)(param_2 + 0x1c);
  switch(uVar1) {
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
switchD_14299e1d4_caseD_82:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386ca;
    local_9c = local_a0;
    break;
  case 1:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_9c = 0.0;
    local_98 = FUN_144857b9e;
    break;
  case 3:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386e2;
    local_9c = local_a0;
    break;
  case 4:
    FUN_1447dc19e(param_2 + 0x30,&local_a8,param_4);
    FUN_1447dc19e(param_2 + 0x30,&local_108,param_3);
    local_148 = param_5;
    FUN_14299e16b(param_1,*(undefined8 *)(param_2 + 0x20),&local_108,&local_a8);
    goto LAB_14299e665;
  case 8:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_9c = 0.0;
    local_98 = FUN_14172546a;
    break;
  default:
    switch(uVar1) {
    case 0x40:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5ef26;
      break;
    case 0x41:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = 0.0;
      local_98 = FUN_146d5ef42;
      break;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_14299e1d4_caseD_82;
    case 0x43:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5efe8;
      break;
    case 0x48:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = 0.0;
      local_98 = FUN_144b038b4;
      break;
    default:
      switch(uVar1) {
      case 0x80:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = (code *)&LAB_146cc500a;
        lVar4 = param_5[1];
        lVar2 = param_5[2];
        local_108 = *param_5;
        dVar5 = *(double *)(local_108 + 0x10);
        dVar6 = (double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(local_108 + 0x88) + 0x10)) &
                        (ulonglong)dVar5);
        goto LAB_14299e62b;
      case 0x81:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = 0.0;
        local_98 = FUN_146cc5264;
        break;
      default:
        goto switchD_14299e1d4_caseD_82;
      case 0x83:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = FUN_146cc5596;
        lVar4 = param_5[1];
        lVar2 = param_5[2];
        local_108 = *param_5;
        dVar5 = *(double *)(local_108 + 0x10);
        lVar3 = *(longlong *)(local_108 + 0x88);
        goto LAB_14299e60e;
      case 0x88:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = 0.0;
        local_98 = FUN_144a12d46;
      }
    }
  }
  lVar4 = param_5[1];
  lVar2 = param_5[2];
  local_108 = *param_5;
  dVar5 = *(double *)(local_108 + 0x10);
  lVar3 = *(longlong *)(local_108 + 0x88);
LAB_14299e60e:
  dVar6 = (double)(-(ulonglong)(0.0 < *(double *)(lVar3 + 0x10)) & (ulonglong)dVar5);
LAB_14299e62b:
  local_fc = (float)dVar6;
  local_100 = (float)dVar5;
  local_148 = &local_a8;
  local_f8 = &LAB_146cc500a;
  local_140 = param_3;
  local_138 = param_4;
  local_a8 = param_2;
  FUN_1417273a7(param_1,&local_108,lVar4,lVar2);
LAB_14299e665:
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14299e72c FUN_14299e72c body=1399 status=ok
// SIG undefined FUN_14299e72c(void)

undefined8
FUN_14299e72c(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  double dVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  float local_100;
  undefined4 local_fc;
  code *local_f8;
  longlong local_a8;
  float local_a0;
  float local_9c;
  code *local_98;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar2 = *(undefined1 *)(param_2 + 0x1c);
  switch(uVar2) {
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
switchD_14299e795_caseD_82:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386ca;
    local_9c = local_a0;
    break;
  case 1:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = FUN_144857b9e;
    goto LAB_14299eb77;
  case 3:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386e2;
    local_9c = local_a0;
    break;
  case 4:
    FUN_1447dc19e(param_2 + 0x30,&local_a8,param_4);
    FUN_1447dc19e(param_2 + 0x30,&local_108,param_3);
    local_148 = param_5;
    FUN_14299e72c(param_1,*(undefined8 *)(param_2 + 0x20),&local_108,&local_a8);
    goto LAB_14299ec74;
  case 8:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = FUN_14172546a;
LAB_14299eb77:
    local_9c = 0.0;
    lVar4 = param_5[1];
    lVar3 = param_5[2];
    local_108 = *param_5;
    dVar1 = *(double *)(local_108 + 0x10);
    goto LAB_14299ec3e;
  default:
    switch(uVar2) {
    case 0x40:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5ef26;
      break;
    case 0x41:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_98 = FUN_146d5ef42;
      goto LAB_14299eb77;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_14299e795_caseD_82;
    case 0x43:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5efe8;
      break;
    case 0x48:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_98 = FUN_144b038b4;
      goto LAB_14299eb77;
    default:
      switch(uVar2) {
      case 0x80:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = (code *)&LAB_146cc500a;
        break;
      case 0x81:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = 0.0;
        local_98 = FUN_146cc5264;
        lVar4 = param_5[1];
        lVar3 = param_5[2];
        local_108 = *param_5;
        dVar1 = *(double *)(local_108 + 0x10);
        goto LAB_14299ec3e;
      default:
        goto switchD_14299e795_caseD_82;
      case 0x83:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = FUN_146cc5596;
        break;
      case 0x88:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_98 = FUN_144a12d46;
        goto LAB_14299eb77;
      }
    }
  }
  lVar4 = param_5[1];
  lVar3 = param_5[2];
  local_108 = *param_5;
  dVar1 = *(double *)(local_108 + 0x10);
LAB_14299ec3e:
  local_100 = (float)dVar1;
  local_f8 = FUN_146cc5264;
  local_fc = 0;
  local_148 = &local_a8;
  local_140 = param_3;
  local_138 = param_4;
  local_a8 = param_2;
  FUN_1417273a7(param_1,&local_108,lVar4,lVar3);
LAB_14299ec74:
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14299eca4 FUN_14299eca4 body=1472 status=ok
// SIG undefined FUN_14299eca4(void)

undefined8
FUN_14299eca4(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  float local_100;
  float local_fc;
  code *local_f8;
  longlong local_a8;
  float local_a0;
  float local_9c;
  code *local_98;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar1 = *(undefined1 *)(param_2 + 0x1c);
  switch(uVar1) {
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
switchD_14299ed0d_caseD_82:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386ca;
    local_9c = local_a0;
    break;
  case 1:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_9c = 0.0;
    local_98 = FUN_144857b9e;
    break;
  case 3:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386e2;
    local_9c = local_a0;
    break;
  case 4:
    FUN_1447dc19e(param_2 + 0x30,&local_a8,param_4);
    FUN_1447dc19e(param_2 + 0x30,&local_108,param_3);
    local_148 = param_5;
    FUN_14299eca4(param_1,*(undefined8 *)(param_2 + 0x20),&local_108,&local_a8);
    goto LAB_14299f182;
  case 8:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_9c = 0.0;
    local_98 = FUN_14172546a;
    break;
  default:
    switch(uVar1) {
    case 0x40:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5ef26;
      break;
    case 0x41:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = 0.0;
      local_98 = FUN_146d5ef42;
      break;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_14299ed0d_caseD_82;
    case 0x43:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5efe8;
      break;
    case 0x48:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = 0.0;
      local_98 = FUN_144b038b4;
      break;
    default:
      switch(uVar1) {
      case 0x80:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = (code *)&LAB_146cc500a;
        lVar4 = param_5[1];
        lVar2 = param_5[2];
        local_108 = *param_5;
        dVar5 = *(double *)(local_108 + 0x10);
        lVar3 = *(longlong *)(local_108 + 0x88);
        goto LAB_14299f12b;
      case 0x81:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = 0.0;
        local_98 = FUN_146cc5264;
        break;
      default:
        goto switchD_14299ed0d_caseD_82;
      case 0x83:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = FUN_146cc5596;
        lVar4 = param_5[1];
        lVar2 = param_5[2];
        local_108 = *param_5;
        dVar5 = *(double *)(local_108 + 0x10);
        dVar6 = (double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(local_108 + 0x88) + 0x10)) &
                        (ulonglong)dVar5);
        goto LAB_14299f148;
      case 0x88:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = 0.0;
        local_98 = FUN_144a12d46;
      }
    }
  }
  lVar4 = param_5[1];
  lVar2 = param_5[2];
  local_108 = *param_5;
  dVar5 = *(double *)(local_108 + 0x10);
  lVar3 = *(longlong *)(local_108 + 0x88);
LAB_14299f12b:
  dVar6 = (double)(-(ulonglong)(0.0 < *(double *)(lVar3 + 0x10)) & (ulonglong)dVar5);
LAB_14299f148:
  local_fc = (float)dVar6;
  local_100 = (float)dVar5;
  local_148 = &local_a8;
  local_f8 = FUN_146cc5596;
  local_140 = param_3;
  local_138 = param_4;
  local_a8 = param_2;
  FUN_1417273a7(param_1,&local_108,lVar4,lVar2);
LAB_14299f182:
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14299f265 FUN_14299f265 body=1399 status=ok
// SIG undefined FUN_14299f265(void)

undefined8
FUN_14299f265(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  double dVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  float local_100;
  undefined4 local_fc;
  code *local_f8;
  longlong local_a8;
  float local_a0;
  float local_9c;
  code *local_98;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar2 = *(undefined1 *)(param_2 + 0x1c);
  switch(uVar2) {
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
switchD_14299f2ce_caseD_82:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386ca;
    local_9c = local_a0;
    break;
  case 1:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = FUN_144857b9e;
    goto LAB_14299f63b;
  case 3:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386e2;
    local_9c = local_a0;
    break;
  case 4:
    FUN_1447dc19e(param_2 + 0x30,&local_a8,param_4);
    FUN_1447dc19e(param_2 + 0x30,&local_108,param_3);
    local_148 = param_5;
    FUN_14299f265(param_1,*(undefined8 *)(param_2 + 0x20),&local_108,&local_a8);
    goto LAB_14299f7ad;
  case 8:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = FUN_14172546a;
LAB_14299f63b:
    local_9c = 0.0;
    lVar4 = param_5[1];
    lVar3 = param_5[2];
    local_108 = *param_5;
    dVar1 = *(double *)(local_108 + 0x10);
    goto LAB_14299f777;
  default:
    switch(uVar2) {
    case 0x40:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5ef26;
      break;
    case 0x41:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_98 = FUN_146d5ef42;
      goto LAB_14299f63b;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_14299f2ce_caseD_82;
    case 0x43:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5efe8;
      break;
    case 0x48:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_98 = FUN_144b038b4;
      goto LAB_14299f63b;
    default:
      switch(uVar2) {
      case 0x80:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = (code *)&LAB_146cc500a;
        break;
      case 0x81:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_98 = FUN_146cc5264;
        goto LAB_14299f63b;
      default:
        goto switchD_14299f2ce_caseD_82;
      case 0x83:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = FUN_146cc5596;
        break;
      case 0x88:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = 0.0;
        local_98 = FUN_144a12d46;
        lVar4 = param_5[1];
        lVar3 = param_5[2];
        local_108 = *param_5;
        dVar1 = *(double *)(local_108 + 0x10);
        goto LAB_14299f777;
      }
    }
  }
  lVar4 = param_5[1];
  lVar3 = param_5[2];
  local_108 = *param_5;
  dVar1 = *(double *)(local_108 + 0x10);
LAB_14299f777:
  local_100 = (float)dVar1;
  local_f8 = FUN_144a12d46;
  local_fc = 0;
  local_148 = &local_a8;
  local_140 = param_3;
  local_138 = param_4;
  local_a8 = param_2;
  FUN_1417273a7(param_1,&local_108,lVar4,lVar3);
LAB_14299f7ad:
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14299f7dd FUN_14299f7dd body=1388 status=ok
// SIG undefined FUN_14299f7dd(void)

undefined8
FUN_14299f7dd(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  double dVar1;
  double dVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  float local_100;
  float local_fc;
  undefined1 *local_f8;
  longlong local_a8;
  float local_a0;
  float local_9c;
  code *local_98;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar3 = *(undefined1 *)(param_2 + 0x1c);
  switch(uVar3) {
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
switchD_14299f846_caseD_82:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386ca;
    local_9c = local_a0;
    break;
  case 1:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_9c = 0.0;
    local_98 = FUN_144857b9e;
    break;
  case 3:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386e2;
    local_9c = local_a0;
    break;
  case 4:
    FUN_1447dc19e(param_2 + 0x30,&local_a8,param_4);
    FUN_1447dc19e(param_2 + 0x30,&local_108,param_3);
    local_148 = param_5;
    FUN_14299f7dd(param_1,*(undefined8 *)(param_2 + 0x20),&local_108,&local_a8);
    goto LAB_14299fd1a;
  case 8:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_9c = 0.0;
    local_98 = FUN_14172546a;
    break;
  default:
    switch(uVar3) {
    case 0x40:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5ef26;
      lVar5 = param_5[1];
      lVar4 = param_5[2];
      local_108 = *param_5;
      dVar1 = *(double *)(local_108 + 0x10);
      dVar2 = *(double *)(*(longlong *)(local_108 + 0x28) + 0x10);
      goto LAB_14299fce0;
    case 0x41:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = 0.0;
      local_98 = FUN_146d5ef42;
      break;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_14299f846_caseD_82;
    case 0x43:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5efe8;
      break;
    case 0x48:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = 0.0;
      local_98 = FUN_144b038b4;
      break;
    default:
      switch(uVar3) {
      case 0x80:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = (code *)&LAB_146cc500a;
        break;
      case 0x81:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = 0.0;
        local_98 = FUN_146cc5264;
        break;
      default:
        goto switchD_14299f846_caseD_82;
      case 0x83:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = FUN_146cc5596;
        break;
      case 0x88:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = 0.0;
        local_98 = FUN_144a12d46;
      }
    }
  }
  lVar5 = param_5[1];
  lVar4 = param_5[2];
  local_108 = *param_5;
  dVar1 = *(double *)(local_108 + 0x10);
  dVar2 = *(double *)(*(longlong *)(local_108 + 0x28) + 0x10);
LAB_14299fce0:
  local_fc = (float)dVar2;
  local_100 = (float)dVar1;
  local_148 = &local_a8;
  local_f8 = &LAB_146d5ef26;
  local_140 = param_3;
  local_138 = param_4;
  local_a8 = param_2;
  FUN_1417273a7(param_1,&local_108,lVar5,lVar4);
LAB_14299fd1a:
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14299fd4a FUN_14299fd4a body=1396 status=ok
// SIG undefined FUN_14299fd4a(void)

undefined8
FUN_14299fd4a(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  double dVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  float local_100;
  undefined4 local_fc;
  code *local_f8;
  longlong local_a8;
  float local_a0;
  float local_9c;
  code *local_98;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar2 = *(undefined1 *)(param_2 + 0x1c);
  switch(uVar2) {
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
switchD_14299fdb3_caseD_82:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386ca;
    local_9c = local_a0;
    break;
  case 1:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = FUN_144857b9e;
    goto LAB_1429a0192;
  case 3:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386e2;
    local_9c = local_a0;
    break;
  case 4:
    FUN_1447dc19e(param_2 + 0x30,&local_a8,param_4);
    FUN_1447dc19e(param_2 + 0x30,&local_108,param_3);
    local_148 = param_5;
    FUN_14299fd4a(param_1,*(undefined8 *)(param_2 + 0x20),&local_108,&local_a8);
    goto LAB_1429a028f;
  case 8:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = FUN_14172546a;
LAB_1429a0192:
    local_9c = 0.0;
    lVar4 = param_5[1];
    lVar3 = param_5[2];
    local_108 = *param_5;
    dVar1 = *(double *)(local_108 + 0x10);
    goto LAB_1429a0259;
  default:
    switch(uVar2) {
    case 0x40:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5ef26;
      break;
    case 0x41:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = 0.0;
      local_98 = FUN_146d5ef42;
      lVar4 = param_5[1];
      lVar3 = param_5[2];
      local_108 = *param_5;
      dVar1 = *(double *)(local_108 + 0x10);
      goto LAB_1429a0259;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_14299fdb3_caseD_82;
    case 0x43:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5efe8;
      break;
    case 0x48:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_98 = FUN_144b038b4;
      goto LAB_1429a0192;
    default:
      switch(uVar2) {
      case 0x80:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = (code *)&LAB_146cc500a;
        break;
      case 0x81:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_98 = FUN_146cc5264;
        goto LAB_1429a0192;
      default:
        goto switchD_14299fdb3_caseD_82;
      case 0x83:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = FUN_146cc5596;
        break;
      case 0x88:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_98 = FUN_144a12d46;
        goto LAB_1429a0192;
      }
    }
  }
  lVar4 = param_5[1];
  lVar3 = param_5[2];
  local_108 = *param_5;
  dVar1 = *(double *)(local_108 + 0x10);
LAB_1429a0259:
  local_100 = (float)dVar1;
  local_f8 = FUN_146d5ef42;
  local_fc = 0;
  local_148 = &local_a8;
  local_140 = param_3;
  local_138 = param_4;
  local_a8 = param_2;
  FUN_1417273a7(param_1,&local_108,lVar4,lVar3);
LAB_1429a028f:
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429a02bf FUN_1429a02bf body=1388 status=ok
// SIG undefined FUN_1429a02bf(void)

undefined8
FUN_1429a02bf(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  double dVar1;
  double dVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  float local_100;
  float local_fc;
  undefined1 *local_f8;
  longlong local_a8;
  float local_a0;
  float local_9c;
  code *local_98;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar3 = *(undefined1 *)(param_2 + 0x1c);
  switch(uVar3) {
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
switchD_1429a0328_caseD_82:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386ca;
    local_9c = local_a0;
    break;
  case 1:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_9c = 0.0;
    local_98 = FUN_144857b9e;
    break;
  case 3:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386e2;
    local_9c = local_a0;
    break;
  case 4:
    FUN_1447dc19e(param_2 + 0x30,&local_a8,param_4);
    FUN_1447dc19e(param_2 + 0x30,&local_108,param_3);
    local_148 = param_5;
    FUN_1429a02bf(param_1,*(undefined8 *)(param_2 + 0x20),&local_108,&local_a8);
    goto LAB_1429a07fc;
  case 8:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_9c = 0.0;
    local_98 = FUN_14172546a;
    break;
  default:
    switch(uVar3) {
    case 0x40:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5ef26;
      break;
    case 0x41:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = 0.0;
      local_98 = FUN_146d5ef42;
      break;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_1429a0328_caseD_82;
    case 0x43:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5efe8;
      lVar5 = param_5[1];
      lVar4 = param_5[2];
      local_108 = *param_5;
      dVar1 = *(double *)(local_108 + 0x10);
      dVar2 = *(double *)(*(longlong *)(local_108 + 0x28) + 0x10);
      goto LAB_1429a07c2;
    case 0x48:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = 0.0;
      local_98 = FUN_144b038b4;
      break;
    default:
      switch(uVar3) {
      case 0x80:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = (code *)&LAB_146cc500a;
        break;
      case 0x81:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = 0.0;
        local_98 = FUN_146cc5264;
        break;
      default:
        goto switchD_1429a0328_caseD_82;
      case 0x83:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = FUN_146cc5596;
        break;
      case 0x88:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = 0.0;
        local_98 = FUN_144a12d46;
      }
    }
  }
  lVar5 = param_5[1];
  lVar4 = param_5[2];
  local_108 = *param_5;
  dVar1 = *(double *)(local_108 + 0x10);
  dVar2 = *(double *)(*(longlong *)(local_108 + 0x28) + 0x10);
LAB_1429a07c2:
  local_fc = (float)dVar2;
  local_100 = (float)dVar1;
  local_148 = &local_a8;
  local_f8 = &LAB_146d5efe8;
  local_140 = param_3;
  local_138 = param_4;
  local_a8 = param_2;
  FUN_1417273a7(param_1,&local_108,lVar5,lVar4);
LAB_1429a07fc:
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429a082c FUN_1429a082c body=1396 status=ok
// SIG undefined FUN_1429a082c(void)

undefined8
FUN_1429a082c(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  double dVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  float local_100;
  undefined4 local_fc;
  code *local_f8;
  longlong local_a8;
  float local_a0;
  float local_9c;
  code *local_98;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar2 = *(undefined1 *)(param_2 + 0x1c);
  switch(uVar2) {
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
switchD_1429a0895_caseD_82:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386ca;
    local_9c = local_a0;
    break;
  case 1:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = FUN_144857b9e;
    goto LAB_1429a0c74;
  case 3:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = (code *)&LAB_144a386e2;
    local_9c = local_a0;
    break;
  case 4:
    FUN_1447dc19e(param_2 + 0x30,&local_a8,param_4);
    FUN_1447dc19e(param_2 + 0x30,&local_108,param_3);
    local_148 = param_5;
    FUN_1429a082c(param_1,*(undefined8 *)(param_2 + 0x20),&local_108,&local_a8);
    goto LAB_1429a0d71;
  case 8:
    local_110 = param_5[7];
    local_118 = *(undefined8 *)param_5[6];
    local_120 = *(undefined8 *)param_5[5];
    local_130 = param_5[3];
    local_128 = *(undefined8 *)param_5[4];
    local_a0 = (float)*(double *)(param_2 + 0x10);
    local_98 = FUN_14172546a;
LAB_1429a0c74:
    local_9c = 0.0;
    lVar4 = param_5[1];
    lVar3 = param_5[2];
    local_108 = *param_5;
    dVar1 = *(double *)(local_108 + 0x10);
    goto LAB_1429a0d3b;
  default:
    switch(uVar2) {
    case 0x40:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5ef26;
      break;
    case 0x41:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_98 = FUN_146d5ef42;
      goto LAB_1429a0c74;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_1429a0895_caseD_82;
    case 0x43:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = (float)*(double *)(*(longlong *)(param_2 + 0x28) + 0x10);
      local_98 = (code *)&LAB_146d5efe8;
      break;
    case 0x48:
      local_110 = param_5[7];
      local_118 = *(undefined8 *)param_5[6];
      local_120 = *(undefined8 *)param_5[5];
      local_130 = param_5[3];
      local_128 = *(undefined8 *)param_5[4];
      local_a0 = (float)*(double *)(param_2 + 0x10);
      local_9c = 0.0;
      local_98 = FUN_144b038b4;
      lVar4 = param_5[1];
      lVar3 = param_5[2];
      local_108 = *param_5;
      dVar1 = *(double *)(local_108 + 0x10);
      goto LAB_1429a0d3b;
    default:
      switch(uVar2) {
      case 0x80:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = (code *)&LAB_146cc500a;
        break;
      case 0x81:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_98 = FUN_146cc5264;
        goto LAB_1429a0c74;
      default:
        goto switchD_1429a0895_caseD_82;
      case 0x83:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_9c = (float)(double)(-(ulonglong)
                                    (0.0 < *(double *)(*(longlong *)(param_2 + 0x88) + 0x10)) &
                                  (ulonglong)*(double *)(param_2 + 0x10));
        local_98 = FUN_146cc5596;
        break;
      case 0x88:
        local_110 = param_5[7];
        local_118 = *(undefined8 *)param_5[6];
        local_120 = *(undefined8 *)param_5[5];
        local_130 = param_5[3];
        local_128 = *(undefined8 *)param_5[4];
        local_a0 = (float)*(double *)(param_2 + 0x10);
        local_98 = FUN_144a12d46;
        goto LAB_1429a0c74;
      }
    }
  }
  lVar4 = param_5[1];
  lVar3 = param_5[2];
  local_108 = *param_5;
  dVar1 = *(double *)(local_108 + 0x10);
LAB_1429a0d3b:
  local_100 = (float)dVar1;
  local_f8 = FUN_144b038b4;
  local_fc = 0;
  local_148 = &local_a8;
  local_140 = param_3;
  local_138 = param_4;
  local_a8 = param_2;
  FUN_1417273a7(param_1,&local_108,lVar4,lVar3);
LAB_1429a0d71:
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429a0da2 FUN_1429a0da2 body=1367 status=ok
// SIG undefined FUN_1429a0da2(void)

void FUN_1429a0da2(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  ushort uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong *plVar26;
  longlong *plVar27;
  ulonglong uVar28;
  uint uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong local_c0;
  double *local_b8;
  undefined8 local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(byte *)(param_2 + 0x374) & 2) == 0) {
    plVar26 = (longlong *)*param_1;
    uVar22 = (ulonglong)(*(longlong *)(param_2 + 0xe0) == *plVar26);
    if (1 < (byte)((*(byte *)(*(longlong *)(param_2 + 0xf0 + uVar22 * 8) + 0x1c) & 0x1f) - 0xb)) {
      lVar23 = param_2 + 0x3f8;
      if (*(longlong *)(param_2 + 0x5a8) != 0) {
        lVar23 = *(longlong *)(param_2 + 0x5a8);
      }
      if ((longlong)*(int *)(param_2 + 0x5b0) != 0) {
        lVar24 = (longlong)*(int *)(param_2 + 0x5b0) * 0x6c + lVar23;
        lVar25 = 0x170;
        if (*(longlong *)(param_2 + 0xe0) == *plVar26) {
          lVar25 = 0x1d0;
        }
        lVar14 = uVar22 * 3;
        local_108 = lVar14;
        local_100 = lVar25;
        local_f8 = lVar24;
        local_f0 = plVar26;
        local_e8 = param_1;
        local_e0 = param_2;
        do {
          lVar19 = param_2;
          plVar27 = plVar26;
          if (*(char *)(lVar23 + 0x2c) == '\x02') {
            dVar30 = (double)*(float *)(lVar23 + 8 + lVar14 * 4);
            dVar31 = (double)*(float *)(lVar23 + 4 + lVar14 * 4);
            dVar34 = (double)*(float *)(lVar23 + lVar14 * 4);
            dVar7 = *(double *)(param_2 + lVar25);
            dVar8 = ((double *)(param_2 + lVar25))[1];
            dVar9 = *(double *)(param_2 + 0x10 + lVar25);
            pdVar3 = (double *)(param_2 + 0x18 + lVar25);
            dVar5 = *pdVar3;
            dVar35 = dVar34 * dVar9 - dVar7 * dVar30;
            dVar32 = dVar31 * dVar7 - dVar8 * dVar34;
            dVar33 = dVar30 * dVar8 - dVar9 * dVar31;
            dVar33 = dVar33 + dVar33;
            dVar35 = dVar35 + dVar35;
            dVar32 = dVar32 + dVar32;
            pdVar4 = (double *)(param_2 + 0x20 + lVar25);
            local_a8 = (dVar32 * dVar8 - dVar35 * dVar9) + dVar5 * dVar33 + dVar34 + *pdVar4;
            dStack_a0 = (dVar9 * dVar33 - dVar7 * dVar32) + *pdVar3 * dVar35 + dVar31 + pdVar4[1];
            local_98 = dVar32 * dVar5 + dVar30 + (dVar35 * dVar7 - dVar33 * dVar8) +
                       *(double *)(param_2 + 0x30 + lVar25);
            plVar1 = param_1 + 1;
            local_b0 = param_1[2];
            lVar14 = local_108;
            param_1 = local_e8;
            lVar19 = local_e0;
            lVar24 = local_f8;
            lVar25 = local_100;
            plVar27 = local_f0;
            local_d8 = lVar23;
            local_c8 = plVar26;
            local_c0 = param_2;
            local_b8 = &local_a8;
            if (0 < (int)((longlong *)*plVar1)[1]) {
              lVar21 = 0;
              local_d0 = (longlong *)*plVar1;
              do {
                lVar23 = *(longlong *)(*local_d0 + 8 + lVar21 * 0x10);
                cVar10 = *(char *)(lVar23 + 8);
                if (cVar10 == '\x01') {
                  lVar24 = lVar23 + 0x40;
                  if (*(longlong *)(lVar23 + 0x98) != 0) {
                    lVar24 = *(longlong *)(lVar23 + 0x98);
                  }
                  iVar12 = *(int *)(lVar23 + 0xa0);
                  if ((longlong)iVar12 != 0) {
                    lVar25 = 0;
                    do {
                      lVar14 = *(longlong *)(lVar24 + 0x10 + lVar25);
                      if (lVar14 != 0) {
                        uVar6 = *(ushort *)(lVar14 + 0x374);
                        if ((uVar6 & 2) == 0) {
                          uVar6 = uVar6 & 1;
                        }
                        else {
                          if ((*(longlong *)(lVar14 + 0x140) == 0) || ((uVar6 & 1) == 0))
                          goto LAB_1429a1046;
                          uVar6 = *(ushort *)(*(longlong *)(lVar14 + 0x140) + 10) & 0x40;
                        }
                        if ((uVar6 != 0) && (iVar15 = FUN_1429a12fa(), iVar15 == 0))
                        goto LAB_1429a12aa;
                      }
LAB_1429a1046:
                      lVar25 = lVar25 + 0x58;
                    } while ((longlong)iVar12 * 0x58 - lVar25 != 0);
                    cVar10 = *(char *)(lVar23 + 8);
                    goto LAB_1429a1053;
                  }
                }
                else {
LAB_1429a1053:
                  if (cVar10 == '\0') {
                    iVar12 = *(int *)(lVar23 + 0x68);
                    if (iVar12 == 0) {
                      uVar22 = 1;
                      uVar28 = 0;
                      iVar20 = 0;
                      iVar15 = 0;
                    }
                    else {
                      puVar13 = *(uint **)(lVar23 + 0x60);
                      if (*(uint **)(lVar23 + 0x60) == (uint *)0x0) {
                        puVar13 = (uint *)(lVar23 + 0x50);
                      }
                      uVar29 = *puVar13;
                      if (uVar29 == 0) {
                        iVar15 = iVar12 + 0x1e;
                        if (-1 < iVar12 + -1) {
                          iVar15 = iVar12 + -1;
                        }
                        uVar28 = 0;
                        uVar22 = (ulonglong)(uint)(iVar15 >> 5);
                        if (iVar15 >> 5 < 1) {
                          uVar22 = uVar28;
                        }
                        iVar20 = 0;
                        do {
                          if (uVar22 == uVar28) goto LAB_1429a1251;
                          iVar20 = iVar20 + 0x20;
                          uVar29 = puVar13[uVar28 + 1];
                          uVar28 = uVar28 + 1;
                        } while (uVar29 == 0);
                      }
                      else {
                        uVar28 = 0;
                        iVar20 = 0;
                      }
                      uVar22 = (ulonglong)(-uVar29 & uVar29);
                      uVar2 = uVar22 * 2 + 1;
                      lVar24 = 0x3f;
                      if (uVar2 != 0) {
                        for (; uVar2 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                        }
                      }
                      iVar15 = (iVar20 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                      if (iVar12 <= iVar15) {
                        iVar15 = iVar12;
                      }
                    }
                    if (iVar15 == iVar12) goto LAB_1429a1251;
                    uVar29 = 0xffffffff;
                    iVar11 = iVar12;
                    do {
                      lVar24 = *(longlong *)
                                (*(longlong *)(lVar23 + 0x40) + 0x10 + (longlong)iVar15 * 0x20);
                      if (lVar24 != 0) {
                        uVar6 = *(ushort *)(lVar24 + 0x374);
                        if ((uVar6 & 2) == 0) {
                          uVar6 = uVar6 & 1;
                        }
                        else {
                          if ((*(longlong *)(lVar24 + 0x140) == 0) || ((uVar6 & 1) == 0))
                          goto LAB_1429a1175;
                          uVar6 = *(ushort *)(*(longlong *)(lVar24 + 0x140) + 10) & 0x40;
                        }
                        if (uVar6 != 0) {
                          iVar15 = FUN_1429a12fa(&local_c8);
                          if (iVar15 == 0) goto LAB_1429a12aa;
                          iVar11 = *(int *)(lVar23 + 0x68);
                        }
                      }
LAB_1429a1175:
                      uVar29 = uVar29 & ~(uint)uVar22;
                      puVar13 = *(uint **)(lVar23 + 0x60);
                      if (*(uint **)(lVar23 + 0x60) == (uint *)0x0) {
                        puVar13 = (uint *)(lVar23 + 0x50);
                      }
                      iVar15 = (int)uVar28;
                      lVar24 = (longlong)iVar15;
                      uVar16 = puVar13[lVar24] & uVar29;
                      if (uVar16 == 0) {
                        iVar17 = iVar11 + 0x1e;
                        if (-1 < iVar11 + -1) {
                          iVar17 = iVar11 + -1;
                        }
                        iVar17 = iVar17 >> 5;
                        iVar20 = iVar20 + 0x20;
                        iVar18 = iVar17;
                        if (iVar17 < iVar15) {
                          iVar18 = iVar15;
                        }
                        if (iVar15 < iVar17) {
                          lVar25 = 0;
                          do {
                            uVar16 = puVar13[lVar24 + lVar25 + 1];
                            if (uVar16 != 0) {
                              uVar28 = (ulonglong)(iVar15 + (int)lVar25 + 1);
                              uVar29 = 0xffffffff;
                              goto LAB_1429a11e9;
                            }
                            iVar20 = iVar20 + 0x20;
                            lVar25 = lVar25 + 1;
                          } while (iVar18 - lVar24 != lVar25);
                          uVar29 = 0xffffffff;
                          iVar15 = iVar18;
                        }
                        uVar28 = (ulonglong)(iVar15 + 1);
                        iVar15 = iVar11;
                      }
                      else {
LAB_1429a11e9:
                        uVar22 = (ulonglong)(-uVar16 & uVar16);
                        uVar2 = uVar22 * 2 + 1;
                        lVar24 = 0x3f;
                        if (uVar2 != 0) {
                          for (; uVar2 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                          }
                        }
                        iVar15 = (iVar20 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                        if (iVar11 <= iVar15) {
                          iVar15 = iVar11;
                        }
                      }
                    } while (iVar15 != iVar12);
                    cVar10 = *(char *)(lVar23 + 8);
                  }
                  if ((cVar10 == '\x02') && (lVar23 = *(longlong *)(lVar23 + 200), lVar23 != 0)) {
                    uVar6 = *(ushort *)(lVar23 + 0x374);
                    if ((uVar6 & 2) == 0) {
                      uVar6 = uVar6 & 1;
                    }
                    else {
                      if ((*(longlong *)(lVar23 + 0x140) == 0) || ((uVar6 & 1) == 0))
                      goto LAB_1429a1251;
                      uVar6 = *(ushort *)(*(longlong *)(lVar23 + 0x140) + 10) & 0x40;
                    }
                    if ((uVar6 != 0) && (iVar12 = FUN_1429a12fa(&local_c8), iVar12 == 0))
                    goto LAB_1429a12aa;
                  }
                }
LAB_1429a1251:
                lVar21 = lVar21 + 1;
                lVar14 = local_108;
                param_1 = local_e8;
                lVar19 = local_e0;
                lVar23 = local_d8;
                lVar24 = local_f8;
                lVar25 = local_100;
                plVar27 = local_f0;
              } while (lVar21 < (int)local_d0[1]);
            }
          }
          lVar23 = lVar23 + 0x6c;
          param_2 = lVar19;
          plVar26 = plVar27;
        } while (lVar23 != lVar24);
      }
    }
  }
LAB_1429a12aa:
  if ((local_90 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429a12fa FUN_1429a12fa body=916 status=ok
// SIG undefined FUN_1429a12fa(void)

undefined8 FUN_1429a12fa(undefined8 *param_1,longlong param_2)

{
  byte *pbVar1;
  longlong lVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  double *pdVar9;
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
  double dVar22;
  double dVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  
  if ((param_1[1] != param_2) && ((*(byte *)(param_2 + 0x374) & 2) == 0)) {
    lVar7 = *(longlong *)(param_2 + 0xe0);
    lVar8 = *(longlong *)*param_1;
    lVar25 = 0x170;
    if (lVar7 == lVar8) {
      lVar25 = 0x1d0;
    }
    lVar26 = param_2 + 0x3f8;
    if (*(longlong *)(param_2 + 0x5a8) != 0) {
      lVar26 = *(longlong *)(param_2 + 0x5a8);
    }
    if ((longlong)*(int *)(param_2 + 0x5b0) != 0) {
      dVar18 = *(double *)(param_2 + 0x1d0);
      dVar19 = *(double *)(param_2 + 0x1d8);
      dVar20 = *(double *)(param_2 + 0x1e0);
      dVar5 = *(double *)(param_2 + 0x1e8);
      lVar2 = lVar26 + (ulonglong)(lVar7 == lVar8) * 0xc;
      lVar24 = 0;
      do {
        if (*(char *)(lVar26 + 0x2c + lVar24) == (char)((lVar7 != lVar8) * '\x02' + '\x01')) {
          dVar12 = (double)*(float *)(lVar2 + 8 + lVar24);
          dVar10 = (double)*(float *)(lVar2 + 4 + lVar24);
          dVar16 = (double)*(float *)(lVar2 + lVar24);
          dVar21 = *(double *)(param_2 + lVar25);
          dVar22 = ((double *)(param_2 + lVar25))[1];
          dVar23 = *(double *)(param_2 + 0x10 + lVar25);
          pdVar3 = (double *)(param_2 + 0x18 + lVar25);
          dVar6 = *pdVar3;
          dVar30 = dVar16 * dVar23 - dVar21 * dVar12;
          dVar27 = dVar10 * dVar21 - dVar22 * dVar16;
          dVar11 = dVar12 * dVar22 - dVar23 * dVar10;
          dVar11 = dVar11 + dVar11;
          dVar30 = dVar30 + dVar30;
          dVar27 = dVar27 + dVar27;
          pdVar4 = (double *)(param_2 + 0x20 + lVar25);
          pdVar9 = (double *)param_1[2];
          dVar13 = (double)*(float *)(lVar26 + 0x20 + lVar24);
          dVar14 = (double)*(float *)(lVar26 + 0x1c + lVar24);
          dVar17 = (double)*(float *)(lVar26 + 0x18 + lVar24);
          dVar28 = dVar14 * dVar18 - dVar19 * dVar17;
          dVar15 = dVar13 * dVar19 - dVar20 * dVar14;
          dVar29 = dVar17 * dVar20 - dVar13 * dVar18;
          dVar15 = dVar15 + dVar15;
          dVar29 = dVar29 + dVar29;
          dVar28 = dVar28 + dVar28;
          if (ABS((*pdVar9 -
                  ((dVar27 * dVar22 - dVar30 * dVar23) + dVar6 * dVar11 + dVar16 + *pdVar4)) *
                  ((dVar28 * dVar19 - dVar29 * dVar20) + dVar5 * dVar15 + dVar17) +
                  (pdVar9[1] -
                  ((dVar23 * dVar11 - dVar21 * dVar27) + *pdVar3 * dVar30 + dVar10 + pdVar4[1])) *
                  ((dVar20 * dVar15 - dVar18 * dVar28) +
                  *(double *)(param_2 + 0x1e8) * dVar29 + dVar14) +
                  (pdVar9[2] -
                  (dVar27 * dVar6 + dVar12 + (dVar30 * dVar21 - dVar11 * dVar22) +
                  *(double *)(param_2 + 0x30 + lVar25))) *
                  (dVar28 * dVar5 + dVar13 + (dVar29 * dVar18 - dVar15 * dVar19))) <
              (double)param_1[3]) {
            pbVar1 = (byte *)(param_1[1] + 0x374);
            *pbVar1 = *pbVar1 | 2;
            return 0;
          }
        }
        lVar24 = lVar24 + 0x6c;
      } while ((longlong)*(int *)(param_2 + 0x5b0) * 0x6c - lVar24 != 0);
    }
  }
  return 1;
}



// FUNCTION 1429a168e FUN_1429a168e body=911 status=ok
// SIG undefined FUN_1429a168e(void)

void FUN_1429a168e(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((byte)((*(byte *)(*(longlong *)(param_2 + 0xf8) + 0x1c) & 0x1f) - 0xb) < 2) {
    lVar12 = param_2 + 0x3f8;
    if (*(longlong *)(param_2 + 0x5a8) != 0) {
      lVar12 = *(longlong *)(param_2 + 0x5a8);
    }
    if ((longlong)*(int *)(param_2 + 0x5b0) != 0) {
      lVar17 = 0;
      do {
        if (*(char *)(lVar12 + 0x2c + lVar17) != '\x01') {
          local_70 = (longlong *)param_1[1];
          local_58 = 1;
          local_50 = param_1[2];
          local_68 = *param_1;
          local_60 = param_2;
          if (0 < (int)local_70[1]) {
            lVar12 = 0;
            goto LAB_1429a173a;
          }
          break;
        }
        lVar17 = lVar17 + 0x6c;
      } while ((longlong)*(int *)(param_2 + 0x5b0) * 0x6c - lVar17 != 0);
    }
  }
  goto LAB_1429a19f6;
LAB_1429a173a:
  do {
    lVar17 = *(longlong *)(*local_70 + 8 + lVar12 * 0x10);
    cVar4 = *(char *)(lVar17 + 8);
    if (cVar4 == '\x01') {
      lVar16 = lVar17 + 0x40;
      if (*(longlong *)(lVar17 + 0x98) != 0) {
        lVar16 = *(longlong *)(lVar17 + 0x98);
      }
      iVar6 = *(int *)(lVar17 + 0xa0);
      if ((longlong)iVar6 != 0) {
        lVar19 = 0;
        do {
          lVar3 = *(longlong *)(lVar16 + 0x10 + lVar19);
          if (lVar3 != 0) {
            uVar2 = *(ushort *)(lVar3 + 0x374);
            if ((uVar2 & 2) == 0) {
              uVar2 = uVar2 & 1;
            }
            else {
              if ((*(longlong *)(lVar3 + 0x140) == 0) || ((uVar2 & 1) == 0)) goto LAB_1429a17c5;
              uVar2 = *(ushort *)(*(longlong *)(lVar3 + 0x140) + 10) & 0x40;
            }
            if ((uVar2 != 0) && (iVar8 = FUN_1429a1a1e(), iVar8 == 0)) goto LAB_1429a19f6;
          }
LAB_1429a17c5:
          lVar19 = lVar19 + 0x58;
        } while ((longlong)iVar6 * 0x58 - lVar19 != 0);
        cVar4 = *(char *)(lVar17 + 8);
        goto LAB_1429a17d2;
      }
    }
    else {
LAB_1429a17d2:
      if (cVar4 == '\0') {
        iVar6 = *(int *)(lVar17 + 0x68);
        if (iVar6 == 0) {
          uVar14 = 1;
          uVar18 = 0;
          iVar13 = 0;
          iVar8 = 0;
        }
        else {
          puVar7 = *(uint **)(lVar17 + 0x60);
          if (*(uint **)(lVar17 + 0x60) == (uint *)0x0) {
            puVar7 = (uint *)(lVar17 + 0x50);
          }
          uVar15 = *puVar7;
          if (uVar15 == 0) {
            iVar8 = iVar6 + 0x1e;
            if (-1 < iVar6 + -1) {
              iVar8 = iVar6 + -1;
            }
            uVar18 = 0;
            uVar14 = (ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              uVar14 = uVar18;
            }
            iVar13 = 0;
            do {
              if (uVar14 == uVar18) goto LAB_1429a19d5;
              iVar13 = iVar13 + 0x20;
              uVar15 = puVar7[uVar18 + 1];
              uVar18 = uVar18 + 1;
            } while (uVar15 == 0);
          }
          else {
            uVar18 = 0;
            iVar13 = 0;
          }
          uVar14 = (ulonglong)(-uVar15 & uVar15);
          uVar1 = uVar14 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar8 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (iVar6 <= iVar8) {
            iVar8 = iVar6;
          }
        }
        if (iVar8 == iVar6) goto LAB_1429a19d5;
        uVar15 = 0xffffffff;
        iVar5 = iVar6;
        do {
          lVar16 = *(longlong *)(*(longlong *)(lVar17 + 0x40) + 0x10 + (longlong)iVar8 * 0x20);
          if (lVar16 != 0) {
            uVar2 = *(ushort *)(lVar16 + 0x374);
            if ((uVar2 & 2) == 0) {
              uVar2 = uVar2 & 1;
            }
            else {
              if ((*(longlong *)(lVar16 + 0x140) == 0) || ((uVar2 & 1) == 0)) goto LAB_1429a18fc;
              uVar2 = *(ushort *)(*(longlong *)(lVar16 + 0x140) + 10) & 0x40;
            }
            if (uVar2 != 0) {
              iVar8 = FUN_1429a1a1e(&local_68);
              if (iVar8 == 0) goto LAB_1429a19f6;
              iVar5 = *(int *)(lVar17 + 0x68);
            }
          }
LAB_1429a18fc:
          uVar15 = uVar15 & ~(uint)uVar14;
          puVar7 = *(uint **)(lVar17 + 0x60);
          if (*(uint **)(lVar17 + 0x60) == (uint *)0x0) {
            puVar7 = (uint *)(lVar17 + 0x50);
          }
          iVar8 = (int)uVar18;
          lVar16 = (longlong)iVar8;
          uVar9 = puVar7[lVar16] & uVar15;
          if (uVar9 == 0) {
            iVar10 = iVar5 + 0x1e;
            if (-1 < iVar5 + -1) {
              iVar10 = iVar5 + -1;
            }
            iVar10 = iVar10 >> 5;
            iVar13 = iVar13 + 0x20;
            iVar11 = iVar10;
            if (iVar10 < iVar8) {
              iVar11 = iVar8;
            }
            if (iVar8 < iVar10) {
              lVar19 = 0;
              do {
                uVar9 = puVar7[lVar16 + lVar19 + 1];
                if (uVar9 != 0) {
                  uVar18 = (ulonglong)(iVar8 + (int)lVar19 + 1);
                  uVar15 = 0xffffffff;
                  goto LAB_1429a196c;
                }
                iVar13 = iVar13 + 0x20;
                lVar19 = lVar19 + 1;
              } while (iVar11 - lVar16 != lVar19);
              uVar15 = 0xffffffff;
              iVar8 = iVar11;
            }
            uVar18 = (ulonglong)(iVar8 + 1);
            iVar8 = iVar5;
          }
          else {
LAB_1429a196c:
            uVar14 = (ulonglong)(-uVar9 & uVar9);
            uVar1 = uVar14 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            iVar8 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            if (iVar5 <= iVar8) {
              iVar8 = iVar5;
            }
          }
        } while (iVar8 != iVar6);
        cVar4 = *(char *)(lVar17 + 8);
      }
      if ((cVar4 == '\x02') && (lVar17 = *(longlong *)(lVar17 + 200), lVar17 != 0)) {
        uVar2 = *(ushort *)(lVar17 + 0x374);
        if ((uVar2 & 2) == 0) {
          uVar2 = uVar2 & 1;
        }
        else {
          if ((*(longlong *)(lVar17 + 0x140) == 0) || ((uVar2 & 1) == 0)) goto LAB_1429a19d5;
          uVar2 = *(ushort *)(*(longlong *)(lVar17 + 0x140) + 10) & 0x40;
        }
        if ((uVar2 != 0) && (iVar6 = FUN_1429a1a1e(&local_68), iVar6 == 0)) break;
      }
    }
LAB_1429a19d5:
    lVar12 = lVar12 + 1;
  } while (lVar12 < (int)local_70[1]);
LAB_1429a19f6:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429a1a1e FUN_1429a1a1e body=3381 status=ok
// SIG undefined FUN_1429a1a1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1429a1a1e(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  double *pdVar5;
  longlong lVar6;
  longlong lVar7;
  double *pdVar8;
  bool bVar9;
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
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  longlong local_220;
  double *local_218;
  longlong local_210;
  double local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined1 local_1a4 [12];
  undefined1 local_198 [84];
  undefined1 local_144 [12];
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar4 = *(longlong *)(param_1 + 8);
  bVar9 = true;
  local_210 = param_2;
  if ((*(longlong *)(lVar4 + 0xf8) != *(longlong *)(param_2 + 0xf8)) &&
     ((byte)((*(byte *)(*(longlong *)(param_2 + 0xf8) + 0x1c) & 0x1f) - 0xb) < 2)) {
    iVar3 = *(int *)(lVar4 + 0x5b0);
    lVar2 = (longlong)iVar3;
    if (0 < lVar2) {
      local_218 = (double *)&stack0x0017fffffeb0;
      local_1f8 = param_2 + 0x3f8;
      local_1f0 = param_2 + 0x1d0;
      lVar6 = 0;
      uVar22 = 0;
      uVar23 = 0x80000000;
      uVar24 = 0;
      uVar25 = 0x80000000;
      local_220 = param_1;
      do {
        lVar2 = lVar4 + 0x3f8;
        if (*(longlong *)(lVar4 + 0x5a8) != 0) {
          lVar2 = *(longlong *)(lVar4 + 0x5a8);
        }
        if (*(char *)(lVar2 + 0x2c + lVar6 * 0x6c) != '\x01') {
          lVar4 = *(longlong *)(local_210 + 0x5a8);
          if (*(longlong *)(local_210 + 0x5a8) == 0) {
            lVar4 = local_1f8;
          }
          if ((longlong)*(int *)(local_210 + 0x5b0) != 0) {
            lVar2 = lVar2 + lVar6 * 0x6c;
            local_1e8 = (longlong)*(int *)(local_210 + 0x5b0) * 0x6c;
            lVar7 = 0;
            do {
              dVar12 = *(double *)(param_1 + 8);
              local_228 = local_144;
              FUN_146d478e9(*(undefined8 *)(local_210 + 0xf8),*(undefined4 *)(lVar4 + 0x28 + lVar7),
                            local_1f0,&local_138);
              dVar10 = (double)*(float *)(lVar2 + 0x14);
              dVar13 = (double)*(float *)(lVar2 + 0x10);
              dVar19 = (double)*(float *)(lVar2 + 0xc);
              dVar18 = *(double *)((longlong)dVar12 + 0x1d0);
              dVar16 = *(double *)((longlong)dVar12 + 0x1d8);
              dVar21 = *(double *)((longlong)dVar12 + 0x1e0);
              dVar11 = *(double *)((longlong)dVar12 + 0x1e8);
              dVar28 = dVar19 * dVar21 - dVar18 * dVar10;
              dVar14 = dVar13 * dVar18 - dVar16 * dVar19;
              dVar17 = dVar10 * dVar16 - dVar21 * dVar13;
              dVar17 = dVar17 + dVar17;
              dVar28 = dVar28 + dVar28;
              dVar14 = dVar14 + dVar14;
              dVar15 = local_128 - local_f8;
              dVar30 = local_130 - local_100;
              dVar26 = local_138 - local_108;
              dVar20 = local_110 - local_f8;
              dVar29 = local_118 - local_100;
              dVar27 = local_120 - local_108;
              dVar10 = (dVar14 * dVar11 + dVar10 + (dVar28 * dVar18 - dVar17 * dVar16) +
                       *(double *)((longlong)dVar12 + 0x200)) - local_f8;
              dVar13 = ((dVar21 * dVar17 - dVar18 * dVar14) +
                        *(double *)((longlong)dVar12 + 0x1e8) * dVar28 + dVar13 +
                       *(double *)((longlong)dVar12 + 0x1f8)) - local_100;
              dVar18 = ((dVar14 * dVar16 - dVar28 * dVar21) + dVar11 * dVar17 + dVar19 +
                       *(double *)((longlong)dVar12 + 0x1f0)) - local_108;
              dVar19 = dVar15 * dVar15 + dVar26 * dVar26 + dVar30 * dVar30;
              dVar11 = dVar15 * dVar20 + dVar26 * dVar27 + dVar29 * dVar30;
              dVar21 = dVar20 * dVar20 + dVar27 * dVar27 + dVar29 * dVar29;
              dVar16 = dVar15 * dVar10 + dVar26 * dVar18 + dVar30 * dVar13;
              dVar18 = dVar10 * dVar20 + dVar18 * dVar27 + dVar13 * dVar29;
              dVar10 = dVar19 * dVar21 - dVar11 * dVar11;
              if (dVar10 <= 9.99999993922529e-09) {
                param_1 = local_220;
                if ((dVar19 <= 9.99999993922529e-09) ||
                   (9.99999993922529e-09 < dVar21 &&
                    ((0.0 <= dVar18 && dVar18 <= dVar21) && (dVar16 < 0.0 || dVar19 < dVar16)))) {
                  dVar11 = 0.0;
                  dVar10 = 0.0;
                  dVar14 = 1.0;
                  if (9.99999993922529e-09 < dVar21) {
                    dVar10 = dVar18 / dVar21;
                    dVar11 = 1.0 - dVar10;
                    dVar14 = 0.0;
                  }
                }
                else {
                  dVar14 = dVar16 / dVar19;
                  dVar11 = 1.0 - dVar14;
                  dVar10 = 0.0;
                }
              }
              else {
                dVar11 = (double)((ulonglong)dVar11 ^ CONCAT44(uVar23,uVar22));
                dVar10 = 1.0 / dVar10;
                dVar14 = (dVar21 * dVar16 + dVar18 * dVar11) * dVar10;
                dVar10 = (dVar16 * dVar11 + dVar19 * dVar18) * dVar10;
                dVar11 = (1.0 - dVar14) - dVar10;
              }
              dVar19 = *(double *)(param_1 + 0x18);
              pdVar8 = local_218;
              local_208 = dVar12;
              if (ABS(dVar14 + -1.0) <= dVar19) {
                bVar9 = false;
                pdVar5 = &local_138;
LAB_1429a1eec:
                local_228 = local_1a4;
                FUN_146d478e9(*(undefined8 *)(*(longlong *)(local_220 + 8) + 0xf8),
                              *(undefined4 *)(lVar2 + 0x28),(longlong)dVar12 + 0x1d0,local_198);
                FUN_146d5f891(&local_1c8,local_198);
                if (*(char *)(lVar4 + 0x2c + lVar7) == '\x01') {
                  dVar10 = *(double *)((longlong)local_208 + 0x1d0);
                  dVar19 = (double)((ulonglong)dVar10 ^ CONCAT44(uVar23,uVar22));
                  dVar18 = (double)(*(ulonglong *)((longlong)local_208 + 0x1d8) ^
                                   CONCAT44(uVar25,uVar24));
                  dVar11 = *(double *)((longlong)local_208 + 0x1e0) * -1.0;
                  dVar12 = *(double *)((longlong)local_208 + 0x1e8) * 1.0;
                  dVar16 = dStack_1c0 * dVar19 - local_1c8 * dVar18;
                  dVar21 = local_1b8 * dVar18 - dStack_1c0 * dVar11;
                  dVar14 = local_1c8 * dVar11 - dVar19 * local_1b8;
                  dVar21 = dVar21 + dVar21;
                  dVar14 = dVar14 + dVar14;
                  dVar16 = dVar16 + dVar16;
                  *(float *)(lVar2 + 0x18) =
                       (float)((dVar16 * dVar18 - dVar14 * dVar11) + dVar12 * dVar21 + local_1c8);
                  *(float *)(lVar2 + 0x1c) =
                       (float)(dVar10 * dVar16 + dVar11 * dVar21 + dVar12 * dVar14 + dStack_1c0);
                  *(float *)(lVar2 + 0x20) =
                       (float)(dVar12 * dVar16 + local_1b8 + (dVar14 * dVar19 - dVar21 * dVar18));
                  param_1 = local_220;
                }
                else {
                  if (!bVar9) goto LAB_1429a1f5d;
                  FUN_146d5f891(&local_1e0,&local_138);
                  if (0.999 < local_1b8 * local_1d0 + local_1c8 * local_1e0 + dStack_1c0 * local_1d8
                     ) {
                    dVar11 = (double)((ulonglong)*(double *)((longlong)local_208 + 0x1d0) ^
                                     CONCAT44(uVar23,uVar22));
                    dVar12 = (double)(*(ulonglong *)((longlong)local_208 + 0x1d8) ^
                                     CONCAT44(uVar25,uVar24));
                    dVar10 = *(double *)((longlong)local_208 + 0x1e0) * -1.0;
                    dVar19 = *(double *)((longlong)local_208 + 0x1e8) * 1.0;
                    dVar16 = local_1c8 * dVar10 - dVar11 * local_1b8;
                    dVar13 = dStack_1c0 * dVar11 - local_1c8 * dVar12;
                    dVar17 = local_1b8 * dVar12 - dStack_1c0 * dVar10;
                    dVar17 = dVar17 + dVar17;
                    dVar16 = dVar16 + dVar16;
                    dVar13 = dVar13 + dVar13;
                    dVar21 = dVar19 * dVar17;
                    dVar14 = dVar19 * dVar16;
                    dVar19 = dVar19 * dVar13;
                    dVar18 = dVar16 * dVar11 - dVar17 * dVar12;
                    dVar11 = dVar13 * dVar12 - dVar16 * dVar10;
                    dVar12 = dVar13 * *(double *)((longlong)local_208 + 0x1d0) + dVar10 * dVar17;
LAB_1429a256c:
                    dVar11 = dVar11 + dVar21 + local_1c8;
                    dVar12 = dVar12 + dVar14 + dStack_1c0;
                  }
                  else {
                    dVar19 = (*pdVar8 - *pdVar5) * local_1d8 - local_1e0 * (pdVar8[1] - pdVar5[1]);
                    dVar11 = (pdVar8[2] - pdVar5[2]) * local_1e0 - local_1d0 * (*pdVar8 - *pdVar5);
                    dVar18 = (pdVar8[1] - pdVar5[1]) * local_1d0 -
                             (pdVar8[2] - pdVar5[2]) * local_1d8;
                    dVar13 = *(double *)((longlong)local_208 + 0x1d0);
                    dVar16 = *(double *)((longlong)local_208 + 0x1d8);
                    dVar12 = *(double *)((longlong)local_208 + 0x1e0);
                    dVar10 = *(double *)((longlong)local_208 + 0x1e8);
                    dVar21 = local_1b8 * dVar19 + local_1c8 * dVar18 + dStack_1c0 * dVar11;
                    uVar22 = (undefined4)DAT_149931e80;
                    uVar23 = DAT_149931e80._4_4_;
                    uVar24 = DAT_149931e80._8_4_;
                    uVar25 = DAT_149931e80._12_4_;
                    if (ABS(dVar21) * dVar21 <
                        (dVar19 * dVar19 + dVar18 * dVar18 + dVar11 * dVar11) *
                        -9.999999747378752e-05) {
                      dVar11 = (double)((ulonglong)dVar13 ^ DAT_149931e80);
                      dVar16 = (double)((ulonglong)dVar16 ^ DAT_149931e80._8_8_);
                      dVar12 = dVar12 * -1.0;
                      dVar10 = dVar10 * 1.0;
                      dVar17 = local_1c8 * dVar12 - dVar11 * local_1b8;
                      dVar15 = dStack_1c0 * dVar11 - dVar16 * local_1c8;
                      dVar28 = local_1b8 * dVar16 - dVar12 * dStack_1c0;
                      dVar28 = dVar28 + dVar28;
                      dVar17 = dVar17 + dVar17;
                      dVar15 = dVar15 + dVar15;
                      dVar21 = dVar10 * dVar28;
                      dVar14 = dVar10 * dVar17;
                      dVar19 = dVar10 * dVar15;
                      dVar18 = dVar17 * dVar11 - dVar28 * dVar16;
                      dVar11 = dVar15 * dVar16 - dVar17 * dVar12;
                      dVar12 = dVar15 * dVar13 + dVar12 * dVar28;
                      goto LAB_1429a256c;
                    }
                    local_208 = local_1b8;
                    uStack_200 = 0;
                    dVar20 = (double)*(float *)(lVar2 + 0x18);
                    dVar17 = (double)*(float *)(lVar2 + 0x1c);
                    dVar28 = (double)*(float *)(lVar2 + 0x20);
                    dVar15 = dVar17 * dVar13 - dVar16 * dVar20;
                    dVar21 = dVar28 * dVar16 - dVar12 * dVar17;
                    dVar14 = dVar20 * dVar12 - dVar13 * dVar28;
                    dVar21 = dVar21 + dVar21;
                    dVar14 = dVar14 + dVar14;
                    dVar15 = dVar15 + dVar15;
                    if (0.0 <= (dVar15 * dVar10 + dVar28 + (dVar14 * dVar13 - dVar16 * dVar21)) *
                               dVar19 + ((dVar15 * dVar16 - dVar12 * dVar14) +
                                        dVar10 * dVar21 + dVar20) * dVar18 +
                                        dVar11 * ((dVar21 * dVar12 - dVar13 * dVar15) +
                                                 dVar10 * dVar14 + dVar17)) {
                      uVar22 = 0;
                      uVar23 = 0x80000000;
                      uVar24 = 0;
                      uVar25 = 0x80000000;
                      goto LAB_1429a1f5d;
                    }
                    dVar11 = (double)((ulonglong)dVar13 ^ DAT_149931e80);
                    dVar16 = (double)((ulonglong)dVar16 ^ DAT_149931e80._8_8_);
                    dVar12 = dVar12 * -1.0;
                    dVar10 = dVar10 * 1.0;
                    dVar21 = local_1c8 * dVar12 - dVar11 * local_1b8;
                    dVar14 = dStack_1c0 * dVar11 - dVar16 * local_1c8;
                    dVar17 = local_1b8 * dVar16 - dVar12 * dStack_1c0;
                    dVar17 = dVar17 + dVar17;
                    dVar21 = dVar21 + dVar21;
                    dVar14 = dVar14 + dVar14;
                    dVar19 = dVar10 * dVar14;
                    dVar18 = dVar21 * dVar11 - dVar17 * dVar16;
                    dVar11 = (dVar14 * dVar16 - dVar21 * dVar12) + dVar10 * dVar17 + local_1c8;
                    dVar12 = dVar14 * dVar13 + dVar12 * dVar17 + dVar10 * dVar21 + dStack_1c0;
                  }
                  *(float *)(lVar2 + 0x18) = (float)dVar11;
                  *(float *)(lVar2 + 0x1c) = (float)dVar12;
                  *(float *)(lVar2 + 0x20) = (float)(local_1b8 + dVar19 + dVar18);
                  param_1 = local_220;
                }
                break;
              }
              if (ABS(dVar10 + -1.0) <= dVar19) {
                bVar9 = false;
LAB_1429a1ee4:
                pdVar5 = &local_120;
                goto LAB_1429a1eec;
              }
              if (ABS(dVar11 + -1.0) <= dVar19) {
                bVar9 = false;
LAB_1429a1ed2:
                pdVar5 = &local_108;
                goto LAB_1429a1eec;
              }
              bVar9 = true;
              if (ABS(dVar14) <= dVar19) {
                pdVar8 = &local_108;
                bVar9 = true;
                goto LAB_1429a1ee4;
              }
              if (ABS(dVar10) <= dVar19) {
                pdVar8 = &local_138;
                bVar9 = true;
                goto LAB_1429a1ed2;
              }
              pdVar5 = &local_138;
              pdVar8 = &local_120;
              if (ABS(dVar11) <= dVar19) goto LAB_1429a1eec;
LAB_1429a1f5d:
              lVar7 = lVar7 + 0x6c;
              param_1 = local_220;
            } while (local_1e8 != lVar7);
          }
        }
        lVar6 = lVar6 + 1;
        lVar4 = *(longlong *)(param_1 + 8);
        iVar3 = *(int *)(lVar4 + 0x5b0);
        lVar2 = (longlong)iVar3;
      } while (lVar6 < lVar2);
    }
    lVar6 = lVar4 + 0x3f8;
    if (*(longlong *)(lVar4 + 0x5a8) != 0) {
      lVar6 = *(longlong *)(lVar4 + 0x5a8);
    }
    if (iVar3 == 0) {
      bVar9 = false;
    }
    else {
      lVar4 = 0;
      do {
        cVar1 = *(char *)(lVar6 + 0x2c + lVar4);
        if (cVar1 != '\x01') break;
        bVar9 = lVar2 * 0x6c + -0x6c != lVar4;
        lVar4 = lVar4 + 0x6c;
      } while (bVar9);
      bVar9 = cVar1 != '\x01';
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar9;
}



// FUNCTION 1429a2754 FUN_1429a2754 body=821 status=ok
// SIG undefined FUN_1429a2754(void)

void FUN_1429a2754(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_f8 [32];
  double *local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(byte *)(param_2 + 0x374) & 2) == 0) {
    plVar6 = *(longlong **)(param_2 + 0xe0);
    lVar14 = 0x170;
    plVar11 = plVar6;
    if (plVar6 == *(longlong **)*param_1) {
      lVar14 = 0x1d0;
      plVar11 = *(longlong **)(param_2 + 0xe8);
    }
    if ((((plVar11 == (longlong *)0x0) || (*(byte *)((longlong)plVar11 + 0xc) < 2)) ||
        ((cVar5 = *(char *)(*(longlong *)(*plVar11 + 0x2c0) + 0xb + (longlong)(int)plVar11[1] * 0x10
                           ), cVar5 != '\x01' && (cVar5 != '\x04')))) &&
       (0 < *(int *)(param_2 + 0x5b0))) {
      lVar7 = (ulonglong)(plVar6 == *(longlong **)*param_1) * 0xc;
      lVar13 = 0x20;
      uVar12 = 0;
      do {
        lVar10 = *(longlong *)(param_2 + 0x5a8);
        if (*(longlong *)(param_2 + 0x5a8) == 0) {
          lVar10 = param_2 + 0x3f8;
        }
        lVar1 = lVar10 + lVar13;
        dVar15 = (double)*(float *)(lVar7 + -0x18 + lVar1);
        dVar16 = (double)*(float *)(lVar7 + -0x1c + lVar1);
        dVar20 = (double)*(float *)(lVar7 + -0x20 + lVar1);
        dVar18 = *(double *)(param_2 + lVar14);
        dVar8 = ((double *)(param_2 + lVar14))[1];
        dVar9 = *(double *)(param_2 + 0x10 + lVar14);
        pdVar2 = (double *)(param_2 + 0x18 + lVar14);
        dVar4 = *pdVar2;
        dVar21 = dVar20 * dVar9 - dVar18 * dVar15;
        dVar17 = dVar16 * dVar18 - dVar8 * dVar20;
        dVar19 = dVar15 * dVar8 - dVar9 * dVar16;
        dVar19 = dVar19 + dVar19;
        dVar21 = dVar21 + dVar21;
        dVar17 = dVar17 + dVar17;
        pdVar3 = (double *)(param_2 + 0x20 + lVar14);
        local_a8 = (dVar17 * dVar8 - dVar21 * dVar9) + dVar4 * dVar19 + dVar20 + *pdVar3;
        dStack_a0 = (dVar9 * dVar19 - dVar18 * dVar17) + *pdVar2 * dVar21 + dVar16 + pdVar3[1];
        local_98 = dVar17 * dVar4 + dVar15 + (dVar21 * dVar18 - dVar19 * dVar8) +
                   *(double *)(param_2 + 0x30 + lVar14);
        dVar16 = (double)*(float *)(lVar10 + lVar13);
        dVar17 = (double)*(float *)(lVar10 + -4 + lVar13);
        dVar20 = (double)*(float *)(lVar10 + -8 + lVar13);
        dVar8 = *(double *)(param_2 + 0x1d0);
        dVar9 = *(double *)(param_2 + 0x1d8);
        dVar15 = *(double *)(param_2 + 0x1e0);
        dVar4 = *(double *)(param_2 + 0x1e8);
        dVar21 = dVar20 * dVar15 - dVar8 * dVar16;
        dVar18 = dVar17 * dVar8 - dVar9 * dVar20;
        dVar19 = dVar16 * dVar9 - dVar15 * dVar17;
        dVar19 = dVar19 + dVar19;
        dVar21 = dVar21 + dVar21;
        dVar18 = dVar18 + dVar18;
        local_b8 = dVar18 * dVar4 + dVar16 + (dVar21 * dVar8 - dVar19 * dVar9);
        local_c8 = (dVar18 * dVar9 - dVar21 * dVar15) + dVar4 * dVar19 + dVar20;
        dStack_c0 = (dVar15 * dVar19 - dVar8 * dVar18) +
                    *(double *)(param_2 + 0x1e8) * dVar21 + dVar17;
        local_d8 = &local_c8;
        FUN_146d5f992(param_1[1],param_2,uVar12 & 0xffffffff,&local_a8);
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 0x6c;
      } while ((longlong)uVar12 < (longlong)*(int *)(param_2 + 0x5b0));
    }
  }
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429a2a8a FUN_1429a2a8a body=3407 status=ok
// SIG undefined FUN_1429a2a8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1429a2a8a(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             float *param_5,undefined1 (*param_6) [16])

{
  ulonglong *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong lVar8;
  int iVar9;
  undefined7 uVar12;
  float *pfVar10;
  undefined8 uVar11;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar43;
  float fVar44;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar45;
  undefined1 auVar42 [16];
  float fVar46;
  float fVar52;
  float fVar53;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar54;
  undefined1 auVar51 [16];
  float fVar55;
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auStack_c8 [32];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  undefined1 auVar28 [16];
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar8 = param_1[1];
  fVar20 = param_5[0x284];
  param_5[0x284] = (float)((int)fVar20 + 4);
  local_80 = param_3;
  local_78 = param_4;
  local_70 = param_1;
  local_68 = param_2;
  if ((uint)((int)param_5[0x285] - (int)fVar20) < 4) {
    FUN_140fd11b6(param_5);
  }
  auVar41 = _DAT_149932330;
  uVar16 = (undefined4)param_3;
  *param_6 = _DAT_149932330;
  auVar32 = _DAT_1499314a0;
  switch((int)lVar8) {
  case 1:
    FUN_140803394(&local_80,param_6);
  case 2:
    pfVar10 = (float *)*param_2;
    pfVar14 = (float *)*param_1;
    fVar20 = (pfVar14[4] - pfVar10[4]) - (*pfVar14 - *pfVar10);
    fVar21 = (pfVar14[5] - pfVar10[5]) - (pfVar14[1] - pfVar10[1]);
    fVar22 = (pfVar14[6] - pfVar10[6]) - (pfVar14[2] - pfVar10[2]);
    fVar37 = (pfVar14[7] - pfVar10[7]) - (pfVar14[3] - pfVar10[3]);
    if (0.0001 < fVar22 * fVar22 + fVar20 * fVar20 + fVar21 * fVar21) {
      fVar43 = ABS(fVar20);
      fVar44 = ABS(fVar21);
      fVar45 = ABS(fVar22);
      auVar5._4_4_ = -(uint)(fVar45 < fVar44);
      auVar5._0_4_ = -(uint)(fVar45 < fVar44);
      auVar57._0_12_ = ZEXT812(0x3f800000);
      auVar57._12_4_ = 0;
      auVar3._4_4_ = -(uint)(fVar44 < fVar43);
      auVar3._0_4_ = -(uint)(fVar44 < fVar43);
      auVar3._8_4_ = -(uint)(fVar44 < fVar43);
      auVar3._12_4_ = -(uint)(fVar44 < fVar43);
      auVar65 = blendvps(ZEXT816(0x3f800000),_DAT_149932340,auVar3);
      auVar4._4_4_ = -(uint)(fVar45 < fVar43);
      auVar4._0_4_ = -(uint)(fVar45 < fVar43);
      auVar4._8_4_ = -(uint)(fVar45 < fVar43);
      auVar4._12_4_ = -(uint)(fVar45 < fVar43);
      auVar32 = blendvps(auVar57,auVar41,auVar4);
      auVar5._8_4_ = -(uint)(fVar45 < fVar44);
      auVar5._12_4_ = -(uint)(fVar45 < fVar44);
      auVar32 = blendvps(auVar65,auVar32,auVar5);
      fStack_90 = auVar32._4_4_ * fVar20 - auVar32._0_4_ * fVar21;
      local_98 = auVar32._8_4_ * fVar21 - auVar32._4_4_ * fVar22;
      fStack_94 = auVar32._0_4_ * fVar22 - auVar32._8_4_ * fVar20;
      fStack_8c = auVar32._12_4_ * fVar37 - auVar32._12_4_ * fVar37;
      fStack_a0 = local_98 * fVar21 - fStack_94 * fVar20;
      local_a8 = fStack_94 * fVar22 - fStack_90 * fVar21;
      fStack_a4 = fStack_90 * fVar20 - local_98 * fVar22;
      fStack_9c = fStack_8c * fVar37 - fStack_8c * fVar37;
      FUN_140803394(&local_80);
      uVar11 = FUN_140803394(&local_80,&local_a8);
      pfVar10 = (float *)*param_2;
      pfVar14 = (float *)*param_1;
      fVar20 = pfVar14[4] - pfVar10[4];
      fVar21 = pfVar14[5] - pfVar10[5];
      fVar22 = pfVar14[6] - pfVar10[6];
      fVar46 = pfVar14[8] - pfVar10[8];
      fVar52 = pfVar14[9] - pfVar10[9];
      fVar53 = pfVar14[10] - pfVar10[10];
      fVar54 = pfVar14[0xb] - pfVar10[0xb];
      auVar23._0_4_ = pfVar14[0xc] - pfVar10[0xc];
      auVar23._4_4_ = pfVar14[0xd] - pfVar10[0xd];
      auVar23._8_4_ = pfVar14[0xe] - pfVar10[0xe];
      auVar23._12_4_ = pfVar14[0xf] - pfVar10[0xf];
      fVar56 = fVar54 - (pfVar14[7] - pfVar10[7]);
      fVar45 = auVar23._12_4_ - (pfVar14[7] - pfVar10[7]);
      fVar37 = (auVar23._4_4_ - fVar21) * (fVar46 - fVar20) -
               (fVar52 - fVar21) * (auVar23._0_4_ - fVar20);
      fVar43 = (auVar23._8_4_ - fVar22) * (fVar52 - fVar21) -
               (fVar53 - fVar22) * (auVar23._4_4_ - fVar21);
      fVar44 = (auVar23._0_4_ - fVar20) * (fVar53 - fVar22) -
               (fVar46 - fVar20) * (auVar23._8_4_ - fVar22);
      fVar55 = fVar43 * fVar43 + fVar44 * fVar44 + fVar37 * fVar37;
      auVar58._4_4_ = -(uint)(fVar55 < 0.0001);
      auVar58._0_4_ = -(uint)(fVar55 < 0.0001);
      auVar58._8_4_ = -(uint)(fVar55 < 0.0001);
      auVar58._12_4_ = -(uint)(fVar55 < 0.0001);
      iVar9 = movmskps((int)uVar11,auVar58);
      if (iVar9 == 0) {
        pfVar10 = *(float **)(param_5 + 0x280);
        if (*(float **)(param_5 + 0x280) == (float *)0x0) {
          pfVar10 = param_5;
        }
        auVar7._4_4_ = fVar55;
        auVar7._0_4_ = fVar55;
        auVar7._8_4_ = fVar55;
        auVar7._12_4_ = fVar55;
        auVar32 = sqrtps(auVar23,auVar7);
        auVar32 = divps(_DAT_1499314a0,auVar32);
        fVar43 = auVar32._0_4_ * fVar43;
        fVar44 = auVar32._4_4_ * fVar44;
        fVar37 = auVar32._8_4_ * fVar37;
        *pfVar10 = fVar43;
        pfVar10[1] = fVar44;
        pfVar10[2] = fVar37;
        pfVar10[3] = auVar32._12_4_ * (fVar45 * fVar56 - fVar56 * fVar45);
        pfVar10[8] = 1.4013e-45;
        pfVar10[9] = 2.8026e-45;
        pfVar10[10] = 4.2039e-45;
        pfVar10[0xb] = 4.2039e-45;
        pfVar10[0xc] = 1.4013e-45;
        pfVar10[0xd] = 2.8026e-45;
        *(undefined1 **)(pfVar10 + 0xe) = &DAT_100000001;
        pfVar10[0x10] = 1.4013e-45;
        fVar20 = fVar22 * fVar37 + fVar20 * fVar43 + fVar21 * fVar44;
        pfVar10[4] = fVar20;
        pfVar10[5] = fVar20;
        pfVar10[6] = fVar20;
        pfVar10[7] = fVar20;
        *(undefined1 *)(pfVar10 + 0x11) = 0;
        pfVar10 = (float *)*param_2;
        pfVar14 = (float *)*param_1;
        auVar23._0_4_ = pfVar14[0xc] - pfVar10[0xc];
        auVar23._4_4_ = pfVar14[0xd] - pfVar10[0xd];
        auVar23._8_4_ = pfVar14[0xe] - pfVar10[0xe];
        auVar23._12_4_ = pfVar14[0xf] - pfVar10[0xf];
        fVar46 = pfVar14[8] - pfVar10[8];
        fVar52 = pfVar14[9] - pfVar10[9];
        fVar53 = pfVar14[10] - pfVar10[10];
        fVar54 = pfVar14[0xb] - pfVar10[0xb];
      }
      fVar43 = *pfVar14 - *pfVar10;
      fVar44 = pfVar14[1] - pfVar10[1];
      fVar45 = pfVar14[2] - pfVar10[2];
      fVar55 = pfVar14[3] - pfVar10[3];
      auVar24._0_4_ = auVar23._0_4_ - fVar43;
      auVar24._4_4_ = auVar23._4_4_ - fVar44;
      auVar24._8_4_ = auVar23._8_4_ - fVar45;
      auVar24._12_4_ = auVar23._12_4_ - fVar55;
      fVar56 = (fVar52 - fVar44) * auVar24._0_4_ - (fVar46 - fVar43) * auVar24._4_4_;
      fVar52 = (fVar53 - fVar45) * auVar24._4_4_ - (fVar52 - fVar44) * auVar24._8_4_;
      fVar46 = (fVar46 - fVar43) * auVar24._8_4_ - (fVar53 - fVar45) * auVar24._0_4_;
      auVar47._0_4_ = fVar52 * fVar52 + fVar46 * fVar46 + fVar56 * fVar56;
      auVar47._4_4_ = auVar47._0_4_;
      auVar47._8_4_ = auVar47._0_4_;
      auVar47._12_4_ = auVar47._0_4_;
      auVar59._4_4_ = -(uint)(auVar47._0_4_ < 0.0001);
      auVar59._0_4_ = -(uint)(auVar47._0_4_ < 0.0001);
      auVar59._8_4_ = -(uint)(auVar47._0_4_ < 0.0001);
      auVar59._12_4_ = -(uint)(auVar47._0_4_ < 0.0001);
      iVar17 = movmskps(uVar16,auVar59);
      fVar20 = auVar24._4_4_;
      fVar21 = auVar24._8_4_;
      fVar22 = auVar24._0_4_;
      fVar37 = auVar24._12_4_;
      if (iVar17 == 0) {
        pfVar10 = *(float **)(param_5 + 0x280);
        if (*(float **)(param_5 + 0x280) == (float *)0x0) {
          pfVar10 = param_5;
        }
        auVar32 = sqrtps(auVar24,auVar47);
        auVar32 = divps(_DAT_1499314a0,auVar32);
        fVar52 = auVar32._0_4_ * fVar52;
        fVar46 = auVar32._4_4_ * fVar46;
        fVar56 = auVar32._8_4_ * fVar56;
        pfVar10[0x14] = fVar52;
        pfVar10[0x15] = fVar46;
        pfVar10[0x16] = fVar56;
        pfVar10[0x17] =
             auVar32._12_4_ *
             ((fVar54 - fVar55) * auVar24._12_4_ - (fVar54 - fVar55) * auVar24._12_4_);
        pfVar10[0x1c] = 0.0;
        pfVar10[0x1d] = 4.2039e-45;
        *(undefined1 **)(pfVar10 + 0x1e) = &DAT_200000002;
        pfVar10[0x20] = 0.0;
        pfVar10[0x21] = 4.2039e-45;
        *(undefined1 **)(pfVar10 + 0x22) = &DAT_100000002;
        pfVar10[0x24] = 0.0;
        fVar20 = fVar45 * fVar56 + fVar43 * fVar52 + fVar44 * fVar46;
        pfVar10[0x18] = fVar20;
        pfVar10[0x19] = fVar20;
        pfVar10[0x1a] = fVar20;
        pfVar10[0x1b] = fVar20;
        *(undefined1 *)(pfVar10 + 0x25) = 0;
        pfVar10 = (float *)*param_2;
        pfVar14 = (float *)*param_1;
        fVar43 = *pfVar14 - *pfVar10;
        fVar44 = pfVar14[1] - pfVar10[1];
        fVar45 = pfVar14[2] - pfVar10[2];
        fVar55 = pfVar14[3] - pfVar10[3];
        auVar24._0_4_ = (pfVar14[0xc] - pfVar10[0xc]) - fVar43;
        auVar24._4_4_ = (pfVar14[0xd] - pfVar10[0xd]) - fVar44;
        auVar24._8_4_ = (pfVar14[0xe] - pfVar10[0xe]) - fVar45;
        auVar24._12_4_ = (pfVar14[0xf] - pfVar10[0xf]) - fVar55;
        fVar20 = auVar24._4_4_;
        fVar21 = auVar24._8_4_;
        fVar22 = auVar24._0_4_;
        fVar37 = auVar24._12_4_;
      }
      uVar12 = (undefined7)(CONCAT44((int)((ulonglong)uVar11 >> 0x20),iVar9) >> 8);
      fVar52 = (pfVar14[4] - pfVar10[4]) - fVar43;
      fVar53 = (pfVar14[5] - pfVar10[5]) - fVar44;
      fVar54 = (pfVar14[6] - pfVar10[6]) - fVar45;
      fVar46 = (pfVar14[7] - pfVar10[7]) - fVar55;
      fVar20 = fVar20 * fVar52 - auVar24._0_4_ * fVar53;
      fVar21 = fVar21 * fVar53 - auVar24._4_4_ * fVar54;
      fVar22 = fVar22 * fVar54 - auVar24._8_4_ * fVar52;
      auVar25._0_4_ = fVar21 * fVar21 + fVar22 * fVar22 + fVar20 * fVar20;
      auVar25._4_4_ = auVar25._0_4_;
      auVar25._8_4_ = auVar25._0_4_;
      auVar25._12_4_ = auVar25._0_4_;
      auVar60._4_4_ = -(uint)(auVar25._0_4_ < 0.0001);
      auVar60._0_4_ = -(uint)(auVar25._0_4_ < 0.0001);
      auVar60._8_4_ = -(uint)(auVar25._0_4_ < 0.0001);
      auVar60._12_4_ = -(uint)(auVar25._0_4_ < 0.0001);
      iVar18 = movmskps(iVar17,auVar60);
      if (iVar18 == 0) {
        pfVar10 = *(float **)(param_5 + 0x280);
        if (*(float **)(param_5 + 0x280) == (float *)0x0) {
          pfVar10 = param_5;
        }
        auVar32 = sqrtps(auVar25,auVar25);
        auVar32 = divps(_DAT_1499314a0,auVar32);
        fVar21 = auVar32._0_4_ * fVar21;
        fVar22 = auVar32._4_4_ * fVar22;
        fVar20 = auVar32._8_4_ * fVar20;
        pfVar10[0x28] = fVar21;
        pfVar10[0x29] = fVar22;
        pfVar10[0x2a] = fVar20;
        pfVar10[0x2b] = auVar32._12_4_ * (fVar37 * fVar46 - auVar24._12_4_ * fVar46);
        pfVar10[0x30] = 0.0;
        pfVar10[0x31] = 1.4013e-45;
        pfVar10[0x32] = 4.2039e-45;
        pfVar10[0x33] = 4.2039e-45;
        pfVar10[0x34] = 0.0;
        pfVar10[0x35] = 1.4013e-45;
        *(undefined1 **)(pfVar10 + 0x36) = &DAT_200000002;
        pfVar10[0x38] = 0.0;
        fVar20 = fVar45 * fVar20 + fVar43 * fVar21 + fVar44 * fVar22;
        pfVar10[0x2c] = fVar20;
        pfVar10[0x2d] = fVar20;
        pfVar10[0x2e] = fVar20;
        pfVar10[0x2f] = fVar20;
        *(undefined1 *)(pfVar10 + 0x39) = 0;
        pfVar10 = (float *)*param_2;
        pfVar14 = (float *)*param_1;
        fVar43 = *pfVar14 - *pfVar10;
        fVar44 = pfVar14[1] - pfVar10[1];
        fVar45 = pfVar14[2] - pfVar10[2];
        fVar55 = pfVar14[3] - pfVar10[3];
        fVar52 = (pfVar14[4] - pfVar10[4]) - fVar43;
        fVar53 = (pfVar14[5] - pfVar10[5]) - fVar44;
        fVar54 = (pfVar14[6] - pfVar10[6]) - fVar45;
        fVar46 = (pfVar14[7] - pfVar10[7]) - fVar55;
      }
      fVar20 = (pfVar14[8] - pfVar10[8]) - fVar43;
      fVar21 = (pfVar14[9] - pfVar10[9]) - fVar44;
      fVar22 = (pfVar14[10] - pfVar10[10]) - fVar45;
      fVar55 = (pfVar14[0xb] - pfVar10[0xb]) - fVar55;
      fVar37 = fVar53 * fVar20 - fVar21 * fVar52;
      fVar21 = fVar54 * fVar21 - fVar22 * fVar53;
      fVar20 = fVar52 * fVar22 - fVar20 * fVar54;
      auVar26._0_4_ = fVar21 * fVar21 + fVar20 * fVar20 + fVar37 * fVar37;
      auVar26._4_4_ = auVar26._0_4_;
      auVar26._8_4_ = auVar26._0_4_;
      auVar26._12_4_ = auVar26._0_4_;
      auVar38._4_4_ = -(uint)(auVar26._0_4_ < 0.0001);
      auVar38._0_4_ = -(uint)(auVar26._0_4_ < 0.0001);
      auVar38._8_4_ = -(uint)(auVar26._0_4_ < 0.0001);
      auVar38._12_4_ = -(uint)(auVar26._0_4_ < 0.0001);
      iVar13 = movmskps((int)pfVar10,auVar38);
      if (iVar13 == 0) {
        pfVar10 = *(float **)(param_5 + 0x280);
        if (*(float **)(param_5 + 0x280) == (float *)0x0) {
          pfVar10 = param_5;
        }
        auVar32 = sqrtps(auVar26,auVar26);
        auVar32 = divps(_DAT_1499314a0,auVar32);
        fVar21 = auVar32._0_4_ * fVar21;
        fVar20 = auVar32._4_4_ * fVar20;
        fVar37 = auVar32._8_4_ * fVar37;
        pfVar10[0x3c] = fVar21;
        pfVar10[0x3d] = fVar20;
        pfVar10[0x3e] = fVar37;
        pfVar10[0x3f] = auVar32._12_4_ * (fVar46 * fVar55 - fVar55 * fVar46);
        pfVar10[0x44] = 0.0;
        pfVar10[0x45] = 2.8026e-45;
        *(undefined1 **)(pfVar10 + 0x46) = &DAT_100000001;
        pfVar10[0x48] = 0.0;
        pfVar10[0x49] = 2.8026e-45;
        pfVar10[0x4a] = 2.8026e-45;
        pfVar10[0x4b] = 0.0;
        pfVar10[0x4c] = 0.0;
        fVar20 = fVar45 * fVar37 + fVar43 * fVar21 + fVar44 * fVar20;
        pfVar10[0x40] = fVar20;
        pfVar10[0x41] = fVar20;
        pfVar10[0x42] = fVar20;
        pfVar10[0x43] = fVar20;
        *(undefined1 *)(pfVar10 + 0x4d) = 0;
      }
      if ((((char)iVar9 == '\0' && (char)iVar17 == '\0') && (char)iVar18 == '\0') &&
          (char)iVar13 == '\0') {
LAB_1429a36d6:
        pfVar10 = *(float **)(param_5 + 0x280);
        if (*(float **)(param_5 + 0x280) == (float *)0x0) {
          pfVar10 = param_5;
        }
        uVar11 = CONCAT71(uVar12,1);
        if ((longlong)(int)param_5[0x284] != 0) {
          lVar8 = (longlong)(int)param_5[0x284] * 0x50;
          auVar32 = ZEXT816(0);
          lVar19 = 0;
          do {
            auVar41 = *(undefined1 (*) [16])((longlong)pfVar10 + lVar19 + 0x10);
            auVar2._4_4_ = -(uint)(ABS(auVar32._4_4_) < ABS(auVar41._4_4_));
            auVar2._0_4_ = -(uint)(ABS(auVar32._0_4_) < ABS(auVar41._0_4_));
            auVar2._8_4_ = -(uint)(ABS(auVar32._8_4_) < ABS(auVar41._8_4_));
            auVar2._12_4_ = -(uint)(ABS(auVar32._12_4_) < ABS(auVar41._12_4_));
            auVar32 = blendvps(auVar32,auVar41,auVar2);
            lVar19 = lVar19 + 0x50;
          } while (lVar8 != lVar19);
          auVar36._4_4_ = -(uint)(auVar32._4_4_ < 0.0);
          auVar36._0_4_ = -(uint)(auVar32._0_4_ < 0.0);
          auVar36._8_4_ = -(uint)(auVar32._8_4_ < 0.0);
          auVar36._12_4_ = -(uint)(auVar32._12_4_ < 0.0);
          iVar9 = movmskps((int)lVar19,auVar36);
          if (iVar9 != 0) {
            lVar19 = 0;
            do {
              pfVar14 = *(float **)(param_5 + 0x280);
              if (*(float **)(param_5 + 0x280) == (float *)0x0) {
                pfVar14 = param_5;
              }
              uVar16 = *(undefined4 *)((longlong)pfVar10 + lVar19 + 0x20);
              *(undefined4 *)((longlong)pfVar10 + lVar19 + 0x20) =
                   *(undefined4 *)((longlong)pfVar10 + lVar19 + 0x24);
              *(undefined4 *)((longlong)pfVar10 + lVar19 + 0x24) = uVar16;
              pfVar14[(longlong)*(int *)((longlong)pfVar10 + lVar19 + 0x30) * 0x14 +
                      (longlong)*(int *)((longlong)pfVar10 + lVar19 + 0x3c) + 0xe] = 2.8026e-45;
              pfVar14[(longlong)*(int *)((longlong)pfVar10 + lVar19 + 0x34) * 0x14 +
                      (longlong)*(int *)((longlong)pfVar10 + lVar19 + 0x40) + 0xe] = 1.4013e-45;
              puVar1 = (ulonglong *)((longlong)pfVar10 + lVar19 + 0x30);
              *puVar1 = *puVar1 << 0x20 | *puVar1 >> 0x20;
              puVar1 = (ulonglong *)((longlong)pfVar10 + lVar19 + 0x3c);
              *puVar1 = *puVar1 << 0x20 | *puVar1 >> 0x20;
              pfVar14 = (float *)((longlong)pfVar10 + lVar19);
              fVar20 = pfVar14[1];
              fVar21 = pfVar14[2];
              fVar22 = pfVar14[3];
              pfVar15 = (float *)((longlong)pfVar10 + lVar19);
              *pfVar15 = 0.0 - *pfVar14;
              pfVar15[1] = 0.0 - fVar20;
              pfVar15[2] = 0.0 - fVar21;
              pfVar15[3] = 0.0 - fVar22;
              pfVar14 = (float *)((longlong)pfVar10 + lVar19 + 0x10);
              fVar20 = pfVar14[1];
              fVar21 = pfVar14[2];
              fVar22 = pfVar14[3];
              pfVar15 = (float *)((longlong)pfVar10 + lVar19 + 0x10);
              *pfVar15 = 0.0 - *pfVar14;
              pfVar15[1] = 0.0 - fVar20;
              pfVar15[2] = 0.0 - fVar21;
              pfVar15[3] = 0.0 - fVar22;
              lVar19 = lVar19 + 0x50;
            } while (lVar8 != lVar19);
          }
        }
        goto LAB_1429a36a1;
      }
      auVar27._0_4_ = local_98 * local_98 + fStack_94 * fStack_94;
      auVar28._4_4_ = fStack_90 * fStack_90 + fStack_8c * fStack_8c;
      auVar28._0_4_ = auVar27._0_4_;
      auVar28._8_4_ = auVar28._4_4_;
      auVar28._12_4_ = auVar28._4_4_;
      auVar27._8_8_ = auVar28._8_8_;
      auVar27._4_4_ = auVar27._0_4_;
      auVar39._0_4_ = auVar28._4_4_ + auVar27._0_4_;
      auVar39._4_4_ = auVar28._4_4_ + auVar27._0_4_;
      auVar39._8_4_ = auVar27._0_4_ + auVar28._4_4_;
      auVar39._12_4_ = auVar27._0_4_ + auVar28._4_4_;
      auVar32 = sqrtps(auVar27,auVar39);
      auVar32 = divps(_DAT_1499314a0,auVar32);
      *(float *)*param_6 = auVar32._0_4_ * local_98;
      *(float *)(*param_6 + 4) = auVar32._4_4_ * fStack_94;
      *(float *)(*param_6 + 8) = auVar32._8_4_ * fStack_90;
      *(float *)(*param_6 + 0xc) = auVar32._12_4_ * fStack_8c;
    }
    break;
  case 3:
    pfVar10 = (float *)*param_2;
    pfVar14 = (float *)*param_1;
    fVar20 = *pfVar14 - *pfVar10;
    fVar21 = pfVar14[1] - pfVar10[1];
    fVar22 = pfVar14[2] - pfVar10[2];
    fVar52 = (pfVar14[8] - pfVar10[8]) - fVar20;
    fVar53 = (pfVar14[9] - pfVar10[9]) - fVar21;
    fVar54 = (pfVar14[10] - pfVar10[10]) - fVar22;
    fVar55 = (pfVar14[0xb] - pfVar10[0xb]) - (pfVar14[3] - pfVar10[3]);
    fVar37 = (pfVar14[4] - pfVar10[4]) - fVar20;
    fVar44 = (pfVar14[5] - pfVar10[5]) - fVar21;
    fVar45 = (pfVar14[6] - pfVar10[6]) - fVar22;
    fVar46 = (pfVar14[7] - pfVar10[7]) - (pfVar14[3] - pfVar10[3]);
    fVar43 = fVar44 * fVar52 - fVar53 * fVar37;
    fVar44 = fVar45 * fVar53 - fVar54 * fVar44;
    fVar37 = fVar37 * fVar54 - fVar52 * fVar45;
    auVar40._0_4_ = fVar44 * fVar44 + fVar37 * fVar37 + fVar43 * fVar43;
    auVar40._4_4_ = auVar40._0_4_;
    auVar40._8_4_ = auVar40._0_4_;
    auVar40._12_4_ = auVar40._0_4_;
    auVar48._4_4_ = -(uint)(auVar40._0_4_ < 0.0001);
    auVar48._0_4_ = -(uint)(auVar40._0_4_ < 0.0001);
    auVar48._8_4_ = -(uint)(auVar40._0_4_ < 0.0001);
    auVar48._12_4_ = -(uint)(auVar40._0_4_ < 0.0001);
    iVar9 = movmskps((int)pfVar10,auVar48);
    if (iVar9 == 0) {
      pfVar10 = *(float **)(param_5 + 0x280);
      if (*(float **)(param_5 + 0x280) == (float *)0x0) {
        pfVar10 = param_5;
      }
      auVar41 = sqrtps(auVar40,auVar40);
      auVar41 = divps(_DAT_1499314a0,auVar41);
      fVar44 = auVar41._0_4_ * fVar44;
      fVar37 = auVar41._4_4_ * fVar37;
      fVar43 = auVar41._8_4_ * fVar43;
      pfVar10[0x3c] = fVar44;
      pfVar10[0x3d] = fVar37;
      pfVar10[0x3e] = fVar43;
      pfVar10[0x3f] = auVar41._12_4_ * (fVar46 * fVar55 - fVar55 * fVar46);
      pfVar10[0x44] = 0.0;
      pfVar10[0x45] = 2.8026e-45;
      *(undefined1 **)(pfVar10 + 0x46) = &DAT_100000001;
      pfVar10[0x48] = 0.0;
      pfVar10[0x49] = 2.8026e-45;
      pfVar10[0x4a] = 2.8026e-45;
      pfVar10[0x4b] = 0.0;
      pfVar10[0x4c] = 0.0;
      fVar20 = fVar22 * fVar43 + fVar20 * fVar44 + fVar21 * fVar37;
      pfVar10[0x40] = fVar20;
      pfVar10[0x41] = fVar20;
      pfVar10[0x42] = fVar20;
      pfVar10[0x43] = fVar20;
      *(undefined1 *)(pfVar10 + 0x4d) = 0;
      pfVar10 = *(float **)(param_5 + 0x280);
      if (*(float **)(param_5 + 0x280) == (float *)0x0) {
        pfVar10 = param_5;
      }
      uVar11 = FUN_140803394(&local_80,pfVar10 + 0x3c);
      pfVar14 = (float *)*param_2;
      pfVar15 = (float *)*param_1;
      fVar20 = pfVar15[4] - pfVar14[4];
      fVar21 = pfVar15[5] - pfVar14[5];
      fVar22 = pfVar15[6] - pfVar14[6];
      fVar46 = pfVar15[8] - pfVar14[8];
      fVar52 = pfVar15[9] - pfVar14[9];
      fVar53 = pfVar15[10] - pfVar14[10];
      fVar54 = pfVar15[0xb] - pfVar14[0xb];
      auVar29._0_4_ = pfVar15[0xc] - pfVar14[0xc];
      auVar29._4_4_ = pfVar15[0xd] - pfVar14[0xd];
      auVar29._8_4_ = pfVar15[0xe] - pfVar14[0xe];
      auVar29._12_4_ = pfVar15[0xf] - pfVar14[0xf];
      fVar56 = fVar54 - (pfVar15[7] - pfVar14[7]);
      fVar45 = auVar29._12_4_ - (pfVar15[7] - pfVar14[7]);
      fVar37 = (auVar29._4_4_ - fVar21) * (fVar46 - fVar20) -
               (fVar52 - fVar21) * (auVar29._0_4_ - fVar20);
      fVar43 = (auVar29._8_4_ - fVar22) * (fVar52 - fVar21) -
               (fVar53 - fVar22) * (auVar29._4_4_ - fVar21);
      fVar44 = (auVar29._0_4_ - fVar20) * (fVar53 - fVar22) -
               (fVar46 - fVar20) * (auVar29._8_4_ - fVar22);
      fVar55 = fVar43 * fVar43 + fVar44 * fVar44 + fVar37 * fVar37;
      auVar61._4_4_ = -(uint)(fVar55 < 0.0001);
      auVar61._0_4_ = -(uint)(fVar55 < 0.0001);
      auVar61._8_4_ = -(uint)(fVar55 < 0.0001);
      auVar61._12_4_ = -(uint)(fVar55 < 0.0001);
      iVar9 = movmskps((int)uVar11,auVar61);
      if (iVar9 == 0) {
        pfVar14 = *(float **)(param_5 + 0x280);
        if (*(float **)(param_5 + 0x280) == (float *)0x0) {
          pfVar14 = param_5;
        }
        auVar6._4_4_ = fVar55;
        auVar6._0_4_ = fVar55;
        auVar6._8_4_ = fVar55;
        auVar6._12_4_ = fVar55;
        auVar41 = sqrtps(auVar29,auVar6);
        auVar41 = divps(auVar32,auVar41);
        fVar43 = auVar41._0_4_ * fVar43;
        fVar44 = auVar41._4_4_ * fVar44;
        fVar37 = auVar41._8_4_ * fVar37;
        *pfVar14 = fVar43;
        pfVar14[1] = fVar44;
        pfVar14[2] = fVar37;
        pfVar14[3] = auVar41._12_4_ * (fVar45 * fVar56 - fVar56 * fVar45);
        pfVar14[8] = 1.4013e-45;
        pfVar14[9] = 2.8026e-45;
        pfVar14[10] = 4.2039e-45;
        pfVar14[0xb] = 4.2039e-45;
        pfVar14[0xc] = 1.4013e-45;
        pfVar14[0xd] = 2.8026e-45;
        *(undefined1 **)(pfVar14 + 0xe) = &DAT_100000001;
        pfVar14[0x10] = 1.4013e-45;
        fVar20 = fVar22 * fVar37 + fVar20 * fVar43 + fVar21 * fVar44;
        pfVar14[4] = fVar20;
        pfVar14[5] = fVar20;
        pfVar14[6] = fVar20;
        pfVar14[7] = fVar20;
        *(undefined1 *)(pfVar14 + 0x11) = 0;
        pfVar14 = (float *)*param_2;
        pfVar15 = (float *)*param_1;
        auVar29._0_4_ = pfVar15[0xc] - pfVar14[0xc];
        auVar29._4_4_ = pfVar15[0xd] - pfVar14[0xd];
        auVar29._8_4_ = pfVar15[0xe] - pfVar14[0xe];
        auVar29._12_4_ = pfVar15[0xf] - pfVar14[0xf];
        fVar46 = pfVar15[8] - pfVar14[8];
        fVar52 = pfVar15[9] - pfVar14[9];
        fVar53 = pfVar15[10] - pfVar14[10];
        fVar54 = pfVar15[0xb] - pfVar14[0xb];
      }
      fVar43 = *pfVar15 - *pfVar14;
      fVar44 = pfVar15[1] - pfVar14[1];
      fVar45 = pfVar15[2] - pfVar14[2];
      fVar55 = pfVar15[3] - pfVar14[3];
      auVar30._0_4_ = auVar29._0_4_ - fVar43;
      auVar30._4_4_ = auVar29._4_4_ - fVar44;
      auVar30._8_4_ = auVar29._8_4_ - fVar45;
      auVar30._12_4_ = auVar29._12_4_ - fVar55;
      fVar56 = (fVar52 - fVar44) * auVar30._0_4_ - (fVar46 - fVar43) * auVar30._4_4_;
      fVar52 = (fVar53 - fVar45) * auVar30._4_4_ - (fVar52 - fVar44) * auVar30._8_4_;
      fVar46 = (fVar46 - fVar43) * auVar30._8_4_ - (fVar53 - fVar45) * auVar30._0_4_;
      auVar49._0_4_ = fVar52 * fVar52 + fVar46 * fVar46 + fVar56 * fVar56;
      auVar49._4_4_ = auVar49._0_4_;
      auVar49._8_4_ = auVar49._0_4_;
      auVar49._12_4_ = auVar49._0_4_;
      auVar62._4_4_ = -(uint)(auVar49._0_4_ < 0.0001);
      auVar62._0_4_ = -(uint)(auVar49._0_4_ < 0.0001);
      auVar62._8_4_ = -(uint)(auVar49._0_4_ < 0.0001);
      auVar62._12_4_ = -(uint)(auVar49._0_4_ < 0.0001);
      iVar17 = movmskps(uVar16,auVar62);
      fVar20 = auVar30._4_4_;
      fVar21 = auVar30._8_4_;
      fVar22 = auVar30._0_4_;
      fVar37 = auVar30._12_4_;
      if (iVar17 == 0) {
        pfVar14 = *(float **)(param_5 + 0x280);
        if (*(float **)(param_5 + 0x280) == (float *)0x0) {
          pfVar14 = param_5;
        }
        auVar41 = sqrtps(auVar30,auVar49);
        auVar41 = divps(auVar32,auVar41);
        fVar52 = auVar41._0_4_ * fVar52;
        fVar46 = auVar41._4_4_ * fVar46;
        fVar56 = auVar41._8_4_ * fVar56;
        pfVar14[0x14] = fVar52;
        pfVar14[0x15] = fVar46;
        pfVar14[0x16] = fVar56;
        pfVar14[0x17] =
             auVar41._12_4_ *
             ((fVar54 - fVar55) * auVar30._12_4_ - (fVar54 - fVar55) * auVar30._12_4_);
        pfVar14[0x1c] = 0.0;
        pfVar14[0x1d] = 4.2039e-45;
        *(undefined1 **)(pfVar14 + 0x1e) = &DAT_200000002;
        pfVar14[0x20] = 0.0;
        pfVar14[0x21] = 4.2039e-45;
        *(undefined1 **)(pfVar14 + 0x22) = &DAT_100000002;
        pfVar14[0x24] = 0.0;
        fVar20 = fVar45 * fVar56 + fVar43 * fVar52 + fVar44 * fVar46;
        pfVar14[0x18] = fVar20;
        pfVar14[0x19] = fVar20;
        pfVar14[0x1a] = fVar20;
        pfVar14[0x1b] = fVar20;
        *(undefined1 *)(pfVar14 + 0x25) = 0;
        pfVar14 = (float *)*param_2;
        pfVar15 = (float *)*param_1;
        fVar43 = *pfVar15 - *pfVar14;
        fVar44 = pfVar15[1] - pfVar14[1];
        fVar45 = pfVar15[2] - pfVar14[2];
        fVar55 = pfVar15[3] - pfVar14[3];
        auVar30._0_4_ = (pfVar15[0xc] - pfVar14[0xc]) - fVar43;
        auVar30._4_4_ = (pfVar15[0xd] - pfVar14[0xd]) - fVar44;
        auVar30._8_4_ = (pfVar15[0xe] - pfVar14[0xe]) - fVar45;
        auVar30._12_4_ = (pfVar15[0xf] - pfVar14[0xf]) - fVar55;
        fVar20 = auVar30._4_4_;
        fVar21 = auVar30._8_4_;
        fVar22 = auVar30._0_4_;
        fVar37 = auVar30._12_4_;
      }
      uVar12 = (undefined7)(CONCAT44((int)((ulonglong)uVar11 >> 0x20),iVar9) >> 8);
      fVar46 = (pfVar15[4] - pfVar14[4]) - fVar43;
      fVar52 = (pfVar15[5] - pfVar14[5]) - fVar44;
      fVar53 = (pfVar15[6] - pfVar14[6]) - fVar45;
      fVar55 = (pfVar15[7] - pfVar14[7]) - fVar55;
      fVar20 = fVar20 * fVar46 - fVar52 * auVar30._0_4_;
      fVar21 = fVar21 * fVar52 - fVar53 * auVar30._4_4_;
      fVar22 = fVar22 * fVar53 - fVar46 * auVar30._8_4_;
      auVar31._0_4_ = fVar21 * fVar21 + fVar22 * fVar22 + fVar20 * fVar20;
      auVar31._4_4_ = auVar31._0_4_;
      auVar31._8_4_ = auVar31._0_4_;
      auVar31._12_4_ = auVar31._0_4_;
      auVar50._4_4_ = -(uint)(auVar31._0_4_ < 0.0001);
      auVar50._0_4_ = -(uint)(auVar31._0_4_ < 0.0001);
      auVar50._8_4_ = -(uint)(auVar31._0_4_ < 0.0001);
      auVar50._12_4_ = -(uint)(auVar31._0_4_ < 0.0001);
      iVar18 = movmskps((int)pfVar14,auVar50);
      if (iVar18 == 0) {
        pfVar14 = *(float **)(param_5 + 0x280);
        if (*(float **)(param_5 + 0x280) == (float *)0x0) {
          pfVar14 = param_5;
        }
        auVar41 = sqrtps(auVar31,auVar31);
        auVar32 = divps(auVar32,auVar41);
        fVar21 = auVar32._0_4_ * fVar21;
        fVar22 = auVar32._4_4_ * fVar22;
        fVar20 = auVar32._8_4_ * fVar20;
        pfVar14[0x28] = fVar21;
        pfVar14[0x29] = fVar22;
        pfVar14[0x2a] = fVar20;
        pfVar14[0x2b] = auVar32._12_4_ * (fVar37 * fVar55 - fVar55 * auVar30._12_4_);
        pfVar14[0x30] = 0.0;
        pfVar14[0x31] = 1.4013e-45;
        pfVar14[0x32] = 4.2039e-45;
        pfVar14[0x33] = 4.2039e-45;
        pfVar14[0x34] = 0.0;
        pfVar14[0x35] = 1.4013e-45;
        *(undefined1 **)(pfVar14 + 0x36) = &DAT_200000002;
        pfVar14[0x38] = 0.0;
        fVar20 = fVar45 * fVar20 + fVar43 * fVar21 + fVar44 * fVar22;
        pfVar14[0x2c] = fVar20;
        pfVar14[0x2d] = fVar20;
        pfVar14[0x2e] = fVar20;
        pfVar14[0x2f] = fVar20;
        *(undefined1 *)(pfVar14 + 0x39) = 0;
      }
      if (((char)iVar9 == '\0' && (char)iVar17 == '\0') && (char)iVar18 == '\0') goto LAB_1429a36d6;
      fVar20 = pfVar10[0x3d];
      fVar21 = pfVar10[0x3e];
      fVar22 = pfVar10[0x3f];
      *(float *)*param_6 = pfVar10[0x3c];
      *(float *)(*param_6 + 4) = fVar20;
      *(float *)(*param_6 + 8) = fVar21;
      *(float *)(*param_6 + 0xc) = fVar22;
    }
    break;
  case 4:
    pfVar10 = (float *)*param_2;
    pfVar14 = (float *)*param_1;
    fVar20 = pfVar14[4] - pfVar10[4];
    fVar21 = pfVar14[5] - pfVar10[5];
    fVar22 = pfVar14[6] - pfVar10[6];
    fVar46 = pfVar14[8] - pfVar10[8];
    fVar52 = pfVar14[9] - pfVar10[9];
    fVar53 = pfVar14[10] - pfVar10[10];
    fVar54 = pfVar14[0xb] - pfVar10[0xb];
    auVar32._0_4_ = pfVar14[0xc] - pfVar10[0xc];
    auVar32._4_4_ = pfVar14[0xd] - pfVar10[0xd];
    auVar32._8_4_ = pfVar14[0xe] - pfVar10[0xe];
    auVar32._12_4_ = pfVar14[0xf] - pfVar10[0xf];
    fVar56 = fVar54 - (pfVar14[7] - pfVar10[7]);
    fVar45 = auVar32._12_4_ - (pfVar14[7] - pfVar10[7]);
    fVar37 = (auVar32._4_4_ - fVar21) * (fVar46 - fVar20) -
             (fVar52 - fVar21) * (auVar32._0_4_ - fVar20);
    fVar43 = (auVar32._8_4_ - fVar22) * (fVar52 - fVar21) -
             (fVar53 - fVar22) * (auVar32._4_4_ - fVar21);
    fVar44 = (auVar32._0_4_ - fVar20) * (fVar53 - fVar22) -
             (fVar46 - fVar20) * (auVar32._8_4_ - fVar22);
    fVar55 = fVar43 * fVar43 + fVar44 * fVar44 + fVar37 * fVar37;
    auVar41._4_4_ = -(uint)(fVar55 < 0.0001);
    auVar41._0_4_ = -(uint)(fVar55 < 0.0001);
    auVar41._8_4_ = -(uint)(fVar55 < 0.0001);
    auVar41._12_4_ = -(uint)(fVar55 < 0.0001);
    iVar9 = movmskps(0x49f4e958,auVar41);
    if (iVar9 == 0) {
      pfVar10 = *(float **)(param_5 + 0x280);
      if (*(float **)(param_5 + 0x280) == (float *)0x0) {
        pfVar10 = param_5;
      }
      auVar65._4_4_ = fVar55;
      auVar65._0_4_ = fVar55;
      auVar65._8_4_ = fVar55;
      auVar65._12_4_ = fVar55;
      auVar32 = sqrtps(auVar32,auVar65);
      auVar32 = divps(_DAT_1499314a0,auVar32);
      fVar43 = auVar32._0_4_ * fVar43;
      fVar44 = auVar32._4_4_ * fVar44;
      fVar37 = auVar32._8_4_ * fVar37;
      *pfVar10 = fVar43;
      pfVar10[1] = fVar44;
      pfVar10[2] = fVar37;
      pfVar10[3] = auVar32._12_4_ * (fVar45 * fVar56 - fVar56 * fVar45);
      pfVar10[8] = 1.4013e-45;
      pfVar10[9] = 2.8026e-45;
      pfVar10[10] = 4.2039e-45;
      pfVar10[0xb] = 4.2039e-45;
      pfVar10[0xc] = 1.4013e-45;
      pfVar10[0xd] = 2.8026e-45;
      *(undefined1 **)(pfVar10 + 0xe) = &DAT_100000001;
      pfVar10[0x10] = 1.4013e-45;
      fVar20 = fVar22 * fVar37 + fVar20 * fVar43 + fVar21 * fVar44;
      pfVar10[4] = fVar20;
      pfVar10[5] = fVar20;
      pfVar10[6] = fVar20;
      pfVar10[7] = fVar20;
      *(undefined1 *)(pfVar10 + 0x11) = 0;
      pfVar10 = (float *)*param_2;
      pfVar14 = (float *)*param_1;
      auVar32._0_4_ = pfVar14[0xc] - pfVar10[0xc];
      auVar32._4_4_ = pfVar14[0xd] - pfVar10[0xd];
      auVar32._8_4_ = pfVar14[0xe] - pfVar10[0xe];
      auVar32._12_4_ = pfVar14[0xf] - pfVar10[0xf];
      fVar46 = pfVar14[8] - pfVar10[8];
      fVar52 = pfVar14[9] - pfVar10[9];
      fVar53 = pfVar14[10] - pfVar10[10];
      fVar54 = pfVar14[0xb] - pfVar10[0xb];
    }
    fVar43 = *pfVar14 - *pfVar10;
    fVar44 = pfVar14[1] - pfVar10[1];
    fVar45 = pfVar14[2] - pfVar10[2];
    fVar55 = pfVar14[3] - pfVar10[3];
    auVar33._0_4_ = auVar32._0_4_ - fVar43;
    auVar33._4_4_ = auVar32._4_4_ - fVar44;
    auVar33._8_4_ = auVar32._8_4_ - fVar45;
    auVar33._12_4_ = auVar32._12_4_ - fVar55;
    fVar56 = (fVar52 - fVar44) * auVar33._0_4_ - (fVar46 - fVar43) * auVar33._4_4_;
    fVar52 = (fVar53 - fVar45) * auVar33._4_4_ - (fVar52 - fVar44) * auVar33._8_4_;
    fVar46 = (fVar46 - fVar43) * auVar33._8_4_ - (fVar53 - fVar45) * auVar33._0_4_;
    auVar51._0_4_ = fVar52 * fVar52 + fVar46 * fVar46 + fVar56 * fVar56;
    auVar51._4_4_ = auVar51._0_4_;
    auVar51._8_4_ = auVar51._0_4_;
    auVar51._12_4_ = auVar51._0_4_;
    auVar63._4_4_ = -(uint)(auVar51._0_4_ < 0.0001);
    auVar63._0_4_ = -(uint)(auVar51._0_4_ < 0.0001);
    auVar63._8_4_ = -(uint)(auVar51._0_4_ < 0.0001);
    auVar63._12_4_ = -(uint)(auVar51._0_4_ < 0.0001);
    iVar17 = movmskps(uVar16,auVar63);
    fVar20 = auVar33._4_4_;
    fVar21 = auVar33._8_4_;
    fVar22 = auVar33._0_4_;
    fVar37 = auVar33._12_4_;
    if (iVar17 == 0) {
      pfVar10 = *(float **)(param_5 + 0x280);
      if (*(float **)(param_5 + 0x280) == (float *)0x0) {
        pfVar10 = param_5;
      }
      auVar32 = sqrtps(auVar33,auVar51);
      auVar32 = divps(_DAT_1499314a0,auVar32);
      fVar52 = auVar32._0_4_ * fVar52;
      fVar46 = auVar32._4_4_ * fVar46;
      fVar56 = auVar32._8_4_ * fVar56;
      pfVar10[0x14] = fVar52;
      pfVar10[0x15] = fVar46;
      pfVar10[0x16] = fVar56;
      pfVar10[0x17] =
           auVar32._12_4_ *
           ((fVar54 - fVar55) * auVar33._12_4_ - (fVar54 - fVar55) * auVar33._12_4_);
      pfVar10[0x1c] = 0.0;
      pfVar10[0x1d] = 4.2039e-45;
      *(undefined1 **)(pfVar10 + 0x1e) = &DAT_200000002;
      pfVar10[0x20] = 0.0;
      pfVar10[0x21] = 4.2039e-45;
      *(undefined1 **)(pfVar10 + 0x22) = &DAT_100000002;
      pfVar10[0x24] = 0.0;
      fVar20 = fVar45 * fVar56 + fVar43 * fVar52 + fVar44 * fVar46;
      pfVar10[0x18] = fVar20;
      pfVar10[0x19] = fVar20;
      pfVar10[0x1a] = fVar20;
      pfVar10[0x1b] = fVar20;
      *(undefined1 *)(pfVar10 + 0x25) = 0;
      pfVar10 = (float *)*param_2;
      pfVar14 = (float *)*param_1;
      fVar43 = *pfVar14 - *pfVar10;
      fVar44 = pfVar14[1] - pfVar10[1];
      fVar45 = pfVar14[2] - pfVar10[2];
      fVar55 = pfVar14[3] - pfVar10[3];
      auVar33._0_4_ = (pfVar14[0xc] - pfVar10[0xc]) - fVar43;
      auVar33._4_4_ = (pfVar14[0xd] - pfVar10[0xd]) - fVar44;
      auVar33._8_4_ = (pfVar14[0xe] - pfVar10[0xe]) - fVar45;
      auVar33._12_4_ = (pfVar14[0xf] - pfVar10[0xf]) - fVar55;
      fVar20 = auVar33._4_4_;
      fVar21 = auVar33._8_4_;
      fVar22 = auVar33._0_4_;
      fVar37 = auVar33._12_4_;
    }
    uVar12 = (undefined7)(CONCAT44(1,iVar9) >> 8);
    fVar52 = (pfVar14[4] - pfVar10[4]) - fVar43;
    fVar53 = (pfVar14[5] - pfVar10[5]) - fVar44;
    fVar54 = (pfVar14[6] - pfVar10[6]) - fVar45;
    fVar46 = (pfVar14[7] - pfVar10[7]) - fVar55;
    fVar20 = fVar20 * fVar52 - auVar33._0_4_ * fVar53;
    fVar21 = fVar21 * fVar53 - auVar33._4_4_ * fVar54;
    fVar22 = fVar22 * fVar54 - auVar33._8_4_ * fVar52;
    auVar34._0_4_ = fVar21 * fVar21 + fVar22 * fVar22 + fVar20 * fVar20;
    auVar34._4_4_ = auVar34._0_4_;
    auVar34._8_4_ = auVar34._0_4_;
    auVar34._12_4_ = auVar34._0_4_;
    auVar64._4_4_ = -(uint)(auVar34._0_4_ < 0.0001);
    auVar64._0_4_ = -(uint)(auVar34._0_4_ < 0.0001);
    auVar64._8_4_ = -(uint)(auVar34._0_4_ < 0.0001);
    auVar64._12_4_ = -(uint)(auVar34._0_4_ < 0.0001);
    iVar18 = movmskps(iVar17,auVar64);
    if (iVar18 == 0) {
      pfVar10 = *(float **)(param_5 + 0x280);
      if (*(float **)(param_5 + 0x280) == (float *)0x0) {
        pfVar10 = param_5;
      }
      auVar32 = sqrtps(auVar34,auVar34);
      auVar32 = divps(_DAT_1499314a0,auVar32);
      fVar21 = auVar32._0_4_ * fVar21;
      fVar22 = auVar32._4_4_ * fVar22;
      fVar20 = auVar32._8_4_ * fVar20;
      pfVar10[0x28] = fVar21;
      pfVar10[0x29] = fVar22;
      pfVar10[0x2a] = fVar20;
      pfVar10[0x2b] = auVar32._12_4_ * (fVar37 * fVar46 - auVar33._12_4_ * fVar46);
      pfVar10[0x30] = 0.0;
      pfVar10[0x31] = 1.4013e-45;
      pfVar10[0x32] = 4.2039e-45;
      pfVar10[0x33] = 4.2039e-45;
      pfVar10[0x34] = 0.0;
      pfVar10[0x35] = 1.4013e-45;
      *(undefined1 **)(pfVar10 + 0x36) = &DAT_200000002;
      pfVar10[0x38] = 0.0;
      fVar20 = fVar45 * fVar20 + fVar43 * fVar21 + fVar44 * fVar22;
      pfVar10[0x2c] = fVar20;
      pfVar10[0x2d] = fVar20;
      pfVar10[0x2e] = fVar20;
      pfVar10[0x2f] = fVar20;
      *(undefined1 *)(pfVar10 + 0x39) = 0;
      pfVar10 = (float *)*param_2;
      pfVar14 = (float *)*param_1;
      fVar43 = *pfVar14 - *pfVar10;
      fVar44 = pfVar14[1] - pfVar10[1];
      fVar45 = pfVar14[2] - pfVar10[2];
      fVar55 = pfVar14[3] - pfVar10[3];
      fVar52 = (pfVar14[4] - pfVar10[4]) - fVar43;
      fVar53 = (pfVar14[5] - pfVar10[5]) - fVar44;
      fVar54 = (pfVar14[6] - pfVar10[6]) - fVar45;
      fVar46 = (pfVar14[7] - pfVar10[7]) - fVar55;
    }
    fVar20 = (pfVar14[8] - pfVar10[8]) - fVar43;
    fVar21 = (pfVar14[9] - pfVar10[9]) - fVar44;
    fVar22 = (pfVar14[10] - pfVar10[10]) - fVar45;
    fVar55 = (pfVar14[0xb] - pfVar10[0xb]) - fVar55;
    fVar37 = fVar53 * fVar20 - fVar21 * fVar52;
    fVar21 = fVar54 * fVar21 - fVar22 * fVar53;
    fVar20 = fVar52 * fVar22 - fVar20 * fVar54;
    auVar35._0_4_ = fVar21 * fVar21 + fVar20 * fVar20 + fVar37 * fVar37;
    auVar35._4_4_ = auVar35._0_4_;
    auVar35._8_4_ = auVar35._0_4_;
    auVar35._12_4_ = auVar35._0_4_;
    auVar42._4_4_ = -(uint)(auVar35._0_4_ < 0.0001);
    auVar42._0_4_ = -(uint)(auVar35._0_4_ < 0.0001);
    auVar42._8_4_ = -(uint)(auVar35._0_4_ < 0.0001);
    auVar42._12_4_ = -(uint)(auVar35._0_4_ < 0.0001);
    iVar13 = movmskps((int)pfVar10,auVar42);
    if (iVar13 == 0) {
      pfVar10 = *(float **)(param_5 + 0x280);
      if (*(float **)(param_5 + 0x280) == (float *)0x0) {
        pfVar10 = param_5;
      }
      auVar32 = sqrtps(auVar35,auVar35);
      auVar32 = divps(_DAT_1499314a0,auVar32);
      fVar21 = auVar32._0_4_ * fVar21;
      fVar20 = auVar32._4_4_ * fVar20;
      fVar37 = auVar32._8_4_ * fVar37;
      pfVar10[0x3c] = fVar21;
      pfVar10[0x3d] = fVar20;
      pfVar10[0x3e] = fVar37;
      pfVar10[0x3f] = auVar32._12_4_ * (fVar46 * fVar55 - fVar55 * fVar46);
      pfVar10[0x44] = 0.0;
      pfVar10[0x45] = 2.8026e-45;
      *(undefined1 **)(pfVar10 + 0x46) = &DAT_100000001;
      pfVar10[0x48] = 0.0;
      pfVar10[0x49] = 2.8026e-45;
      pfVar10[0x4a] = 2.8026e-45;
      pfVar10[0x4b] = 0.0;
      pfVar10[0x4c] = 0.0;
      fVar20 = fVar45 * fVar37 + fVar43 * fVar21 + fVar44 * fVar20;
      pfVar10[0x40] = fVar20;
      pfVar10[0x41] = fVar20;
      pfVar10[0x42] = fVar20;
      pfVar10[0x43] = fVar20;
      *(undefined1 *)(pfVar10 + 0x4d) = 0;
    }
    if ((((char)iVar9 != '\0' || (char)iVar17 != '\0') || (char)iVar18 != '\0') ||
        (char)iVar13 != '\0') break;
    goto LAB_1429a36d6;
  }
  uVar11 = 0;
LAB_1429a36a1:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 1429a37da FUN_1429a37da body=75 status=ok
// SIG undefined FUN_1429a37da(void)

ulonglong FUN_1429a37da(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  lVar1 = *param_2;
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x1c) == '\x0f')) {
    plVar2 = (longlong *)FUN_146db0622(lVar1,*param_1);
    if (plVar2 != (longlong *)0x0) {
      *(undefined8 *)param_1[1] =
           *(undefined8 *)(*(longlong *)(*plVar2 + 0x4a0) + (longlong)(int)plVar2[1] * 8);
      uVar3 = 0;
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1429a3826 FUN_1429a3826 body=3406 status=ok
// SIG undefined FUN_1429a3826(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a3826(undefined8 *param_1,longlong *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  DWORD DVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  DWORD dwTlsIndex;
  DWORD DVar11;
  LPVOID lpTlsValue;
  longlong lVar12;
  uint uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  double *pdVar24;
  double *pdVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  bool bVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar39;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar40;
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  undefined1 auStack_508 [32];
  double *local_4e8;
  undefined1 *local_4e0;
  undefined4 local_4d8;
  longlong *local_4d0;
  longlong *local_4c8;
  undefined8 local_4c0;
  double *local_4b8;
  undefined8 local_4b0;
  undefined4 local_4a8;
  double local_4a0;
  undefined8 local_498;
  char local_481;
  longlong *local_480;
  undefined4 local_474;
  longlong *local_470;
  undefined8 local_468;
  undefined8 local_460;
  longlong *local_458;
  longlong *local_450;
  undefined8 local_448;
  undefined8 local_440;
  double local_438 [3];
  double local_420 [15];
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348 [4];
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  double local_2e8 [4];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_2a8 [16];
  double local_298;
  undefined8 uStack_290;
  longlong local_288;
  undefined8 uStack_280;
  undefined8 *local_270;
  undefined8 local_268;
  longlong local_260;
  char local_258;
  undefined8 local_250;
  double local_248 [3];
  double local_230 [15];
  double local_1b8 [12];
  undefined1 local_158 [16];
  undefined1 local_148 [8];
  double dStack_140;
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_508;
  iVar10 = *param_4;
  lVar28 = param_1[4];
  lVar15 = *(longlong *)param_1[8];
  if (((lVar15 == 0) || (iVar10 != -1)) || (*(int *)(lVar15 + 8) == 0)) {
    lVar15 = *(longlong *)(lVar28 + 8);
    if (*(longlong *)(lVar28 + 8) == 0) {
      lVar15 = lVar28;
    }
    lVar19 = (longlong)iVar10;
    if (*(int *)(lVar28 + 0x10) <= iVar10) {
      lVar19 = 0;
    }
    if (iVar10 < 0) {
      lVar19 = 0;
    }
    puVar14 = (undefined8 *)(lVar15 + lVar19 * 8);
  }
  else {
    puVar14 = (undefined8 *)(lVar15 + 0x18);
    if (*(undefined8 **)(lVar15 + 0x20) != (undefined8 *)0x0) {
      puVar14 = *(undefined8 **)(lVar15 + 0x20);
    }
  }
  local_474 = *param_6;
  param_2 = (longlong *)*param_2;
  local_440 = *param_1;
  local_448 = *puVar14;
  local_468 = param_3;
  cVar8 = FUN_146d5f071();
  auVar41 = _DAT_149934d80;
  if (cVar8 == '\0') goto LAB_1429a4429;
  local_450 = (longlong *)param_1[3];
  local_458 = (longlong *)param_1[1];
  lVar28 = *local_458;
  lVar15 = (longlong)(int)local_458[1];
  if ((local_458 == (longlong *)0x0) || (*(byte *)((longlong)local_458 + 0xc) < 2)) {
LAB_1429a3990:
    lVar19 = 0x28;
    lVar26 = 0x48;
  }
  else {
    cVar8 = *(char *)(*(longlong *)(lVar28 + 0x2c0) + 0xb + lVar15 * 0x10);
    lVar19 = 0x530;
    lVar26 = 0x548;
    if ((cVar8 != '\x01') && (cVar8 != '\x04')) goto LAB_1429a3990;
  }
  local_460 = param_1[7];
  lVar26 = *(longlong *)(lVar28 + lVar26);
  lVar16 = lVar15 * 0x10;
  local_2e8[3] = (double)*(float *)(lVar26 + 0xc + lVar16);
  dVar1 = (double)param_1[5];
  local_2e8[2] = (double)*(float *)(lVar26 + 8 + lVar16);
  local_2e8[1] = (double)*(float *)(lVar26 + 4 + lVar16);
  local_2e8[0] = (double)*(float *)(lVar26 + lVar16);
  local_480 = (longlong *)param_1[2];
  pdVar24 = (double *)(*(longlong *)(lVar28 + lVar19) + lVar15 * 0x18);
  local_2c8 = *pdVar24;
  dStack_2c0 = pdVar24[1];
  local_2b8 = *(double *)(*(longlong *)(lVar28 + lVar19) + 0x10 + lVar15 * 0x18);
  uStack_2b0 = 0;
  dVar2 = (double)DAT_149934d80;
  dVar3 = DAT_149934d80._8_8_;
  local_2a8 = _DAT_149934d80;
  local_298 = 1.0;
  uStack_290 = 0;
  lVar19 = *local_450;
  lVar26 = (longlong)(int)local_450[1];
  if ((local_450 == (longlong *)0x0) || (*(byte *)((longlong)local_450 + 0xc) < 2)) {
LAB_1429a3a83:
    lVar16 = 0x28;
    lVar27 = 0x48;
  }
  else {
    cVar8 = *(char *)(*(longlong *)(lVar19 + 0x2c0) + 0xb + lVar26 * 0x10);
    lVar16 = 0x530;
    lVar27 = 0x548;
    if ((cVar8 != '\x01') && (cVar8 != '\x04')) goto LAB_1429a3a83;
  }
  lVar27 = *(longlong *)(lVar19 + lVar27);
  lVar20 = lVar26 * 0x10;
  local_348[3] = (double)*(float *)(lVar27 + 0xc + lVar20);
  local_348[2] = (double)*(float *)(lVar27 + 8 + lVar20);
  local_348[1] = (double)*(float *)(lVar27 + 4 + lVar20);
  local_348[0] = (double)*(float *)(lVar27 + lVar20);
  puVar14 = (undefined8 *)(*(longlong *)(lVar19 + lVar16) + lVar26 * 0x18);
  local_328 = *puVar14;
  uStack_320 = puVar14[1];
  local_318 = *(undefined8 *)(*(longlong *)(lVar19 + lVar16) + 0x10 + lVar26 * 0x18);
  uStack_310 = 0;
  local_308 = _DAT_149934d80;
  local_2f8 = 0x3ff0000000000000;
  uStack_2f0 = 0;
  lVar28 = lVar15 * 0x18 + *(longlong *)(lVar28 + 0xf8);
  uVar17 = local_468;
  uVar9 = FUN_1447dc19e(local_468,&local_3a8);
  local_158 = ZEXT816(0);
  local_148 = (undefined1  [8])0x0;
  dStack_140 = 1.0;
  local_138 = ZEXT816(0);
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_118 = auVar41;
  local_108 = ZEXT816(0x3ff0000000000000);
  dVar35 = local_2e8[2] * local_2e8[2] + local_2e8[0] * local_2e8[0];
  dVar39 = local_2e8[3] * local_2e8[3] + local_2e8[1] * local_2e8[1];
  auVar33._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(dVar3 - (dVar35 + dVar39)));
  auVar33._0_8_ = -(ulonglong)(0.009999999776482582 < ABS(dVar2 - (dVar35 + dVar39)));
  iVar10 = movmskpd(uVar9,auVar33);
  if (iVar10 == 0) {
    auVar37._8_8_ = dStack_360;
    auVar37._0_8_ = local_368;
    auVar5._8_8_ = dStack_350;
    auVar5._0_8_ = local_358;
    auVar33 = minpd(auVar37,local_2a8);
    auVar6._8_8_ = uStack_290;
    auVar6._0_8_ = local_298;
    auVar37 = minpd(auVar5,auVar6);
    auVar34._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
    auVar34._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
    iVar10 = movmskpd(0,auVar34);
    auVar38._8_8_ = -(ulonglong)(auVar37._8_8_ < 0.0);
    auVar38._0_8_ = -(ulonglong)(auVar37._0_8_ < 0.0);
    uVar13 = movmskpd((int)uVar17,auVar38);
    if ((uVar13 & 0x3fffffff) == 0 && iVar10 == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c8460b0) && (FUN_144b3d300(&DAT_14c8460b0), DAT_14c8460b0 == -1))
      {
        DAT_14c8460a0 = 0x322bcc77322bcc77;
        DAT_14c8460a8 = 0x322bcc77322bcc77;
        _Init_thread_footer(&DAT_14c8460b0);
      }
      auVar33 = divpd(auVar41,local_2a8);
      auVar41._8_8_ = uStack_290;
      auVar41._0_8_ = local_298;
      auVar41 = divpd(ZEXT816(0x3ff0000000000000),auVar41);
      dVar36 = (double)(-(ulonglong)((double)(float)DAT_14c8460a0 < ABS(local_2a8._0_8_)) &
                       auVar33._0_8_);
      dVar40 = (double)(-(ulonglong)
                         ((double)(float)((ulonglong)DAT_14c8460a0 >> 0x20) < ABS(local_2a8._8_8_))
                       & auVar33._8_8_);
      dVar32 = (double)(-(ulonglong)((double)(float)DAT_14c8460a8 < ABS(local_298)) & auVar41._0_8_)
      ;
      local_388 = local_388 - local_2c8;
      dStack_380 = dStack_380 - dStack_2c0;
      local_378 = local_378 - local_2b8;
      dVar35 = -local_2e8[0];
      dVar39 = -local_2e8[1];
      dVar2 = local_2e8[2] * -1.0;
      dVar3 = local_2e8[3] * 1.0;
      dVar30 = dStack_380 * dVar35 - local_388 * dVar39;
      dVar31 = local_378 * dVar39 - dStack_380 * dVar2;
      dVar42 = local_388 * dVar2 - local_378 * dVar35;
      dVar43 = dVar3 * 0.0 - dVar3 * 0.0;
      dVar31 = dVar31 + dVar31;
      dVar42 = dVar42 + dVar42;
      dVar30 = dVar30 + dVar30;
      dVar43 = dVar43 + dVar43;
      dStack_360 = dStack_360 * dVar40;
      dVar4 = local_3a8 * dVar2 * 1.0 +
              ((dStack_3a0 * dVar3 - local_2e8[0] * local_398 * -1.0) - dStack_390 * local_2e8[1]);
      pdVar24 = (double *)local_158;
      local_118._8_4_ = SUB84(dStack_360,0);
      local_118._0_8_ = local_368 * dVar36;
      local_118._12_4_ = (int)((ulonglong)dStack_360 >> 0x20);
      local_108._8_4_ = SUB84(dStack_350 * 0.0,0);
      local_108._0_8_ = local_358 * dVar32;
      local_108._12_4_ = (int)((ulonglong)(dStack_350 * 0.0) >> 0x20);
      local_138._8_8_ = ((dVar31 * dVar2 - dVar30 * dVar35) + dVar3 * dVar42 + dStack_380) * dVar40;
      local_138._0_8_ = ((dVar30 * dVar39 - dVar2 * dVar42) + dVar3 * dVar31 + local_388) * dVar36;
      local_128 = ((dVar42 * dVar35 - dVar39 * dVar31) + dVar3 * dVar30 + local_378) * dVar32;
      dStack_120 = ((dVar43 * dVar3 - dVar43 * dVar3) + dVar3 * dVar43 + 0.0) * 0.0;
      local_158._8_4_ = SUB84(dVar4,0);
      local_158._0_8_ =
           dStack_3a0 * dVar2 * -1.0 +
           ((local_3a8 * dVar3 - local_2e8[0] * dStack_390 * 1.0) - local_398 * local_2e8[1]);
      local_158._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      local_148 = (undefined1  [8])
                  (dStack_390 * dVar2 * 1.0 +
                  local_2e8[1] * local_3a8 + (dVar3 * local_398 - local_2e8[0] * dStack_3a0 * 1.0));
      dStack_140 = local_398 * dVar2 * -1.0 +
                   local_2e8[1] * dStack_3a0 +
                   (dVar3 * dStack_390 - local_2e8[0] * local_3a8 * -1.0);
    }
    else {
      pdVar24 = (double *)local_158;
      FUN_1402db8fa(pdVar24,&local_3a8,local_2e8);
    }
  }
  else {
    pdVar24 = (double *)&DAT_14c846480;
  }
  pdVar25 = local_1b8;
  for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
    *pdVar25 = *pdVar24;
    pdVar24 = pdVar24 + 1;
    pdVar25 = pdVar25 + 1;
  }
  pdVar24 = local_1b8;
  pdVar25 = local_420 + 3;
  for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
    *pdVar25 = *pdVar24;
    pdVar24 = pdVar24 + 1;
    pdVar25 = pdVar25 + 1;
  }
  (**(code **)(*param_2 + 0x88))(param_2,local_158);
  local_438[0] = (double)local_158._0_8_ - dVar1;
  local_438[1] = (double)local_158._8_8_ - dVar1;
  local_158._8_8_ = local_438[1];
  local_158._0_8_ = local_438[0];
  local_438[2] = (double)local_148 - dVar1;
  local_420[0] = dStack_140 + dVar1;
  dStack_140 = local_420[0];
  local_148 = (undefined1  [8])local_438[2];
  local_420[1] = (double)local_138._0_8_ + dVar1;
  local_420[2] = (double)local_138._8_8_ + dVar1;
  local_138._8_8_ = local_420[2];
  local_138._0_8_ = local_420[1];
  if ((int)local_480[5] != 0) {
    local_481 = *(char *)((longlong)param_2 + 0x1c);
    dwTlsIndex = DAT_14c7585d0;
    local_470 = param_2;
    if (DAT_14c7585d0 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar11 = 0xffffffff;
      LOCK();
      bVar29 = DAT_14c7585d0 != 0xffffffff;
      DVar7 = dwTlsIndex;
      if (bVar29) {
        DVar11 = DAT_14c7585d0;
        DVar7 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar7;
      UNLOCK();
      if (bVar29) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar11;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_140036a08(local_158);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    local_270 = (undefined8 *)((longlong)lpTlsValue + 0x10);
    local_268 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
    local_260 = *(longlong *)((longlong)lpTlsValue + 0x20);
    local_258 = '\0';
    local_250 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
    *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_270;
    *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
    local_288 = 0;
    uStack_280 = 0;
    iVar10 = (int)local_480[6];
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar10);
    }
    if (iVar10 != 0) {
      FUN_14056656e(&local_288);
    }
    iVar22 = 0;
    iVar10 = 0;
LAB_1429a400c:
    while( true ) {
      lVar15 = local_480[4];
      lVar19 = (longlong)iVar10;
      local_248[0] = (double)*(float *)(lVar15 + lVar19 * 0x28);
      local_248[1] = (double)*(float *)(lVar15 + 4 + lVar19 * 0x28);
      local_248[2] = (double)*(float *)(lVar15 + 8 + lVar19 * 0x28);
      local_230[0] = (double)*(float *)(lVar15 + 0xc + lVar19 * 0x28);
      local_230[1] = (double)*(float *)(lVar15 + 0x10 + lVar19 * 0x28);
      local_230[2] = (double)*(float *)(lVar15 + 0x14 + lVar19 * 0x28);
      if (local_481 == '\f') break;
      lVar16 = -0x18;
      do {
        pdVar24 = (double *)((longlong)local_230 + lVar16 + 0x18);
        if ((*pdVar24 <= *(double *)((longlong)local_420 + lVar16) &&
             *(double *)((longlong)local_420 + lVar16) != *pdVar24) ||
           (pdVar24 = (double *)((longlong)local_420 + lVar16 + 0x18),
           *pdVar24 <= *(double *)((longlong)local_230 + lVar16) &&
           *(double *)((longlong)local_230 + lVar16) != *pdVar24)) goto LAB_1429a4393;
        lVar16 = lVar16 + 8;
        lVar26 = lVar15;
      } while (lVar16 != 0);
LAB_1429a40df:
      if ((*(int *)(lVar26 + 0x20 + lVar19 * 0x28) == -1) &&
         (iVar10 = *(int *)(lVar26 + 0x18 + lVar19 * 0x28), lVar16 = (longlong)iVar10,
         iVar10 < *(int *)(lVar26 + 0x1c + lVar19 * 0x28))) {
        do {
          lVar27 = *local_480;
          lVar12 = (longlong)*(int *)(local_480[2] + lVar16 * 4);
          uVar9 = *(undefined4 *)(lVar27 + 0x40 + lVar12 * 0x48);
          iVar10 = *(int *)(lVar27 + 0x34 + lVar12 * 0x48);
          lVar20 = *(longlong *)(lVar28 + 8);
          if (*(longlong *)(lVar28 + 8) == 0) {
            lVar20 = lVar28;
          }
          uVar17 = *(undefined8 *)(lVar27 + 0x38 + lVar12 * 0x48);
          lVar21 = 0;
          if (iVar10 < *(int *)(lVar28 + 0x10)) {
            lVar21 = (longlong)iVar10;
          }
          if (iVar10 < 0) {
            lVar21 = 0;
          }
          lVar20 = *(longlong *)(lVar20 + lVar21 * 8);
          if ((lVar20 == 0) ||
             (((*(byte *)(lVar20 + 0x71 + (ulonglong)((*(uint *)(lVar20 + 8) & 3) == 0) * 8) & 1) !=
               0 && ((((uVar18 = (ulonglong)((*(uint *)(lVar20 + 8) & 3) == 0),
                       *(int *)(lVar20 + 0x58 + uVar18 * 8) != 0 ||
                       (*(int *)(lVar20 + 0x5c + uVar18 * 8) != 0)) ||
                      (*(int *)(lVar20 + 0x60 + uVar18 * 8) != 0)) ||
                     (*(int *)(lVar20 + uVar18 * 8 + 100) != 0)))))) {
            dVar2 = (double)*(float *)(lVar27 + 0x14 + lVar12 * 0x48);
            local_148 = (undefined1  [8])(double)*(float *)(lVar27 + 8 + lVar12 * 0x48);
            dStack_140 = (double)*(float *)(lVar27 + 0xc + lVar12 * 0x48);
            local_158._8_8_ = (double)*(float *)(lVar27 + 4 + lVar12 * 0x48);
            local_158._0_8_ = (double)*(float *)(lVar27 + lVar12 * 0x48);
            local_138._8_4_ = SUB84(dVar2,0);
            local_138._0_8_ = (double)*(float *)(lVar27 + 0x10 + lVar12 * 0x48);
            local_138._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
            local_128 = (double)*(float *)(lVar27 + 0x18 + lVar12 * 0x48);
            dStack_120 = 0.0;
            local_118._8_8_ = 0x3ff0000000000000;
            local_118._0_8_ = 0x3ff0000000000000;
            local_108 = ZEXT816(0x3ff0000000000000);
            local_4b8 = local_1b8;
            pdVar24 = local_348;
            pdVar25 = local_4b8;
            for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
              *pdVar25 = *pdVar24;
              pdVar24 = pdVar24 + 1;
              pdVar25 = pdVar25 + 1;
            }
            local_4e8 = local_230 + 3;
            pdVar24 = local_2e8;
            pdVar25 = local_4e8;
            for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
              *pdVar25 = *pdVar24;
              pdVar24 = pdVar24 + 1;
              pdVar25 = pdVar25 + 1;
            }
            local_498 = local_460;
            local_4a8 = local_474;
            local_4b0 = local_468;
            local_4c0 = local_448;
            local_4c8 = local_470;
            local_4d0 = local_450;
            local_4e0 = local_158;
            local_4d8 = uVar9;
            local_4a0 = dVar1;
            FUN_1447dbad2(local_440,local_458,uVar17);
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < *(int *)(lVar26 + lVar19 * 0x28 + 0x1c));
      }
      uVar18 = uStack_280;
      lVar15 = lVar19 * 0x28 + lVar15;
      iVar10 = *(int *)(lVar15 + 0x20);
      iVar23 = (int)uStack_280;
      if (iVar10 == -1) goto LAB_1429a439a;
      uVar9 = *(undefined4 *)(lVar15 + 0x24);
      uVar13 = (int)uStack_280 + 1;
      uStack_280 = CONCAT44(uStack_280._4_4_,uVar13);
      if (uStack_280._4_4_ < uVar13) {
        FUN_146d6855c(&local_288,uVar18 & 0xffffffff);
      }
      iVar22 = iVar22 + 1;
      *(ulonglong *)(local_288 + (longlong)iVar23 * 8) = CONCAT44(iVar22,uVar9);
    }
    FUN_1449c5bc8(local_248,local_158,local_420 + 3);
    cVar8 = (**(code **)(*local_470 + 0x140))(local_470,local_158);
    if (cVar8 != '\0') {
      lVar26 = local_480[4];
      goto LAB_1429a40df;
    }
LAB_1429a4393:
LAB_1429a439a:
    if ((int)uStack_280 != 0) {
      iVar23 = (int)uStack_280 + -1;
      iVar10 = *(int *)(local_288 + (longlong)iVar23 * 8);
      iVar22 = *(int *)(local_288 + 4 + (longlong)iVar23 * 8);
      uStack_280 = CONCAT44(uStack_280._4_4_,iVar23);
      goto LAB_1429a400c;
    }
    if (local_258 == '\0') {
      local_258 = '\x01';
      *(int *)(local_270 + 4) = *(int *)(local_270 + 4) + -1;
      if (local_260 != local_270[2]) {
        FUN_14004673c();
      }
      *local_270 = local_268;
      local_270[3] = local_250;
    }
  }
LAB_1429a4429:
  if ((local_f0 ^ (ulonglong)auStack_508) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429a4576 FUN_1429a4576 body=592 status=ok
// SIG undefined FUN_1429a4576(void)

void FUN_1429a4576(double *param_1,undefined8 *param_2,double param_3,int *param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  double dVar6;
  double *pdVar7;
  longlong lVar8;
  undefined1 auStack_148 [32];
  double local_128;
  double dStack_120;
  longlong *local_118;
  double local_110;
  double dStack_108;
  double local_100;
  undefined4 local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined8 *local_c0;
  code *local_b8;
  double *local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  double local_80;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar1 = *param_4;
  dVar3 = param_1[2];
  lVar8 = *(longlong *)param_1[0xc];
  if (((lVar8 == 0) || (iVar1 != -1)) || (*(int *)(lVar8 + 8) == 0)) {
    dVar6 = *(double *)((longlong)dVar3 + 8);
    if (*(double *)((longlong)dVar3 + 8) == 0.0) {
      dVar6 = dVar3;
    }
    lVar8 = (longlong)iVar1;
    if (*(int *)((longlong)dVar3 + 0x10) <= iVar1) {
      lVar8 = 0;
    }
    if (iVar1 < 0) {
      lVar8 = 0;
    }
    pdVar7 = (double *)((longlong)dVar6 + lVar8 * 8);
  }
  else {
    pdVar7 = (double *)(lVar8 + 0x18);
    if (*(double **)(lVar8 + 0x20) != (double *)0x0) {
      pdVar7 = *(double **)(lVar8 + 0x20);
    }
  }
  uVar2 = *param_6;
  plVar4 = (longlong *)*param_2;
  dVar3 = *param_1;
  dVar6 = *pdVar7;
  if ((dVar6 == 0.0) ||
     ((local_90 = (double)CONCAT44(local_90._4_4_,(undefined4)local_90),
      uStack_88 = (double)CONCAT44(uStack_88._4_4_,(undefined4)uStack_88),
      (*(byte *)((longlong)dVar6 + 0x71 + (ulonglong)((*(uint *)((longlong)dVar6 + 8) & 3) == 0) * 8
                ) & 1) != 0 &&
      (((uVar5 = (ulonglong)((*(uint *)((longlong)dVar6 + 8) & 3) == 0),
        *(int *)((longlong)dVar6 + 0x58 + uVar5 * 8) != 0 ||
        (*(int *)((longlong)dVar6 + 0x5c + uVar5 * 8) != 0)) ||
       ((*(int *)((longlong)dVar6 + 0x60 + uVar5 * 8) != 0 ||
        (local_90 = (double)CONCAT44(local_90._4_4_,(undefined4)local_90),
        uStack_88 = (double)CONCAT44(uStack_88._4_4_,(undefined4)uStack_88),
        *(int *)((longlong)dVar6 + uVar5 * 8 + 100) != 0)))))))) {
    (**(code **)(*plVar4 + 0x88))(plVar4,local_78,param_3);
    FUN_1400c6592(local_78,&local_128,param_1[8]);
    local_d8 = param_1[9];
    local_a8 = local_128 - local_d8;
    dStack_a0 = dStack_120 - local_d8;
    local_98 = (double)local_118 - local_d8;
    local_90 = local_110 + local_d8;
    uStack_88 = dStack_108 + local_d8;
    local_80 = local_100 + local_d8;
    dStack_120 = param_1[1];
    dStack_108 = param_1[3];
    local_f0 = param_1[4];
    local_e8 = param_1[7];
    local_e0 = param_1[5];
    local_d0 = param_1[10];
    local_c8 = param_1[0xb];
    local_c0 = (undefined8 *)param_1[0xd];
    local_b8 = FUN_1429a47c8;
    local_128 = dVar3;
    local_118 = plVar4;
    local_110 = dVar6;
    local_100 = param_3;
    local_f8 = uVar2;
    local_b0 = &local_128;
    FUN_14172861c(*local_c0,param_1[6]);
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429a47c8 FUN_1429a47c8 body=447 status=ok
// SIG undefined FUN_1429a47c8(void)

void FUN_1429a47c8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108 [12];
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  iVar1 = *param_4;
  lVar3 = param_1[9];
  lVar6 = *(longlong *)param_1[0xd];
  if (((lVar6 == 0) || (iVar1 != -1)) || (*(int *)(lVar6 + 8) == 0)) {
    lVar6 = *(longlong *)(lVar3 + 8);
    if (*(longlong *)(lVar3 + 8) == 0) {
      lVar6 = lVar3;
    }
    lVar10 = (longlong)iVar1;
    if (*(int *)(lVar3 + 0x10) <= iVar1) {
      lVar10 = 0;
    }
    if (iVar1 < 0) {
      lVar10 = 0;
    }
    plVar9 = (longlong *)(lVar6 + lVar10 * 8);
  }
  else {
    plVar9 = (longlong *)(lVar6 + 0x18);
    if (*(longlong **)(lVar6 + 0x20) != (longlong *)0x0) {
      plVar9 = *(longlong **)(lVar6 + 0x20);
    }
  }
  uVar2 = *param_6;
  uVar4 = *param_2;
  local_118 = *param_1;
  lVar3 = *plVar9;
  local_110 = param_3;
  if ((lVar3 == 0) ||
     (((*(byte *)(lVar3 + 0x71 + (ulonglong)((*(uint *)(lVar3 + 8) & 3) == 0) * 8) & 1) != 0 &&
      (((uVar5 = (ulonglong)((*(uint *)(lVar3 + 8) & 3) == 0),
        *(int *)(lVar3 + 0x58 + uVar5 * 8) != 0 || (*(int *)(lVar3 + 0x5c + uVar5 * 8) != 0)) ||
       ((*(int *)(lVar3 + 0x60 + uVar5 * 8) != 0 || (*(int *)(lVar3 + uVar5 * 8 + 100) != 0))))))))
  {
    local_128 = param_1[0xc];
    local_130 = param_1[10];
    local_148 = local_a8;
    puVar7 = (undefined8 *)param_1[8];
    puVar8 = local_148;
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    local_160 = param_1[7];
    local_168 = *(undefined4 *)(param_1 + 6);
    local_170 = param_1[5];
    local_178 = local_108;
    puVar7 = (undefined8 *)param_1[4];
    puVar8 = local_178;
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    local_158 = uVar4;
    local_150 = lVar3;
    local_140 = param_3;
    local_138 = uVar2;
    FUN_1447dbad2(local_118,param_1[1],param_1[2],param_1[3]);
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429a4988 FUN_1429a4988 body=250 status=ok
// SIG undefined FUN_1429a4988(void)

void FUN_1429a4988(void)

{
  FUN_14153156c(&DAT_14c992fb0,L"p.Chaos.MeshContactGenerator.FixContactNormal.FixEnabled",
                &DAT_14c75f094,L"Until new code path is well tested",0);
  atexit(FUN_14299b428);
  FUN_1415c789c(&DAT_14c992fc0,L"p.Chaos.Collision.CullDistanceReferenceSize",&DAT_14c75f098,
                &DAT_149dfb77a,0);
  atexit(FUN_14299b46d);
  FUN_1415c789c(&DAT_14c992fd0,L"p.Chaos.Collision.MinCullDistanceScale",&DAT_14c75f09c,
                &DAT_149dfb77a,0);
  atexit(FUN_14299b4b2);
  FUN_14153156c(&DAT_14c992fe0,L"p.Chaos.Collision.EnableShapePairs",&DAT_14c75f0a0,&DAT_149dfb77a,0
               );
  atexit(FUN_14299b4f7);
  FUN_141471170(&DAT_14c992ff0,L"p.Chaos.Collision.MaxShapePairs",&DAT_14c75f0a4,&DAT_149dfb77a,0);
  atexit(FUN_14299b53c);
  return;
}



// FUNCTION 1429a4a84 FUN_1429a4a84 body=69 status=ok
// SIG undefined FUN_1429a4a84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a4a84(void)

{
  _DAT_14c993000 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a4ac6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993008,1);
  return;
}



// FUNCTION 1429a4ac9 FUN_1429a4ac9 body=69 status=ok
// SIG undefined FUN_1429a4ac9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a4ac9(void)

{
  _DAT_14c993010 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a4b0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993018,1);
  return;
}



// FUNCTION 1429a4b0e FUN_1429a4b0e body=69 status=ok
// SIG undefined FUN_1429a4b0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a4b0e(void)

{
  _DAT_14c993020 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a4b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993028,1);
  return;
}



// FUNCTION 1429a4b53 FUN_1429a4b53 body=69 status=ok
// SIG undefined FUN_1429a4b53(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a4b53(void)

{
  _DAT_14c993030 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a4b95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993038,1);
  return;
}



// FUNCTION 1429a4b98 FUN_1429a4b98 body=69 status=ok
// SIG undefined FUN_1429a4b98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a4b98(void)

{
  _DAT_14c993040 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a4bda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993048,1);
  return;
}



// FUNCTION 1429a4bdd FUN_1429a4bdd body=69 status=ok
// SIG undefined FUN_1429a4bdd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a4bdd(void)

{
  _DAT_14c993050 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a4c1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993058,1);
  return;
}



// FUNCTION 1429a4c22 FUN_1429a4c22 body=69 status=ok
// SIG undefined FUN_1429a4c22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a4c22(void)

{
  _DAT_14c993068 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a4c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993070,1);
  return;
}



// FUNCTION 1429a4c67 FUN_1429a4c67 body=69 status=ok
// SIG undefined FUN_1429a4c67(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a4c67(void)

{
  _DAT_14c993078 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a4ca9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993080,1);
  return;
}



// FUNCTION 1429a4cac FUN_1429a4cac body=69 status=ok
// SIG undefined FUN_1429a4cac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a4cac(void)

{
  _DAT_14c993088 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a4cee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993090,1);
  return;
}



// FUNCTION 1429a4cf1 FUN_1429a4cf1 body=69 status=ok
// SIG undefined FUN_1429a4cf1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a4cf1(void)

{
  _DAT_14c993098 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a4d33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9930a0,1);
  return;
}



// FUNCTION 1429a4d36 FUN_1429a4d36 body=69 status=ok
// SIG undefined FUN_1429a4d36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a4d36(void)

{
  _DAT_14c9930a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a4d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9930b0,1);
  return;
}



// FUNCTION 1429a4d7b FUN_1429a4d7b body=69 status=ok
// SIG undefined FUN_1429a4d7b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a4d7b(void)

{
  _DAT_14c9930b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a4dbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9930c0,1);
  return;
}



// FUNCTION 1429a4dc0 FUN_1429a4dc0 body=69 status=ok
// SIG undefined FUN_1429a4dc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a4dc0(void)

{
  _DAT_14c9930c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a4e02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9930d0,1);
  return;
}



// FUNCTION 1429a4e1e FUN_1429a4e1e body=422 status=ok
// SIG undefined FUN_1429a4e1e(void)

void FUN_1429a4e1e(longlong param_1,int param_2,double *param_3)

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
  undefined1 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar13 = param_1 + 0x3f8;
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    lVar13 = *(longlong *)(param_1 + 0x5a8);
  }
  dVar1 = param_3[2];
  dVar2 = param_3[1];
  dVar3 = param_3[5];
  dVar4 = param_3[4];
  dVar5 = param_3[3];
  dVar6 = param_3[8];
  dVar7 = param_3[7];
  lVar12 = (longlong)param_2 * 0x6c;
  dVar8 = param_3[6];
  dVar9 = param_3[9];
  uVar11 = *(undefined4 *)(param_3 + 10);
  uVar10 = *(undefined1 *)((longlong)param_3 + 0x54);
  *(float *)(lVar13 + lVar12) = (float)*param_3;
  *(float *)(lVar13 + 4 + lVar12) = (float)dVar2;
  *(float *)(lVar13 + 8 + lVar12) = (float)dVar1;
  *(float *)(lVar13 + 0xc + lVar12) = (float)dVar5;
  *(float *)(lVar13 + 0x10 + lVar12) = (float)dVar4;
  *(float *)(lVar13 + 0x14 + lVar12) = (float)dVar3;
  *(float *)(lVar13 + 0x18 + lVar12) = (float)dVar8;
  *(float *)(lVar13 + 0x1c + lVar12) = (float)dVar7;
  *(float *)(lVar13 + 0x20 + lVar12) = (float)dVar6;
  *(float *)(lVar13 + 0x24 + lVar12) = (float)dVar9;
  *(undefined4 *)(lVar13 + 0x28 + lVar12) = uVar11;
  *(undefined1 *)(lVar13 + 0x2c + lVar12) = uVar10;
  dVar1 = param_3[2];
  dVar2 = param_3[1];
  *(float *)(lVar13 + 0x3c + lVar12) = (float)*param_3;
  *(float *)(lVar13 + 0x40 + lVar12) = (float)dVar2;
  *(float *)(lVar13 + 0x44 + lVar12) = (float)dVar1;
  dVar1 = param_3[5];
  dVar2 = param_3[4];
  *(float *)(lVar13 + 0x48 + lVar12) = (float)param_3[3];
  *(float *)(lVar13 + 0x4c + lVar12) = (float)dVar2;
  *(float *)(lVar13 + 0x50 + lVar12) = (float)dVar1;
  dVar1 = param_3[2];
  dVar2 = param_3[1];
  *(float *)(lVar13 + 0x54 + lVar12) = (float)*param_3;
  *(float *)(lVar13 + 0x58 + lVar12) = (float)dVar2;
  *(float *)(lVar13 + 0x5c + lVar12) = (float)dVar1;
  dVar1 = param_3[5];
  dVar2 = param_3[4];
  *(float *)(lVar13 + 0x60 + lVar12) = (float)param_3[3];
  *(float *)(lVar13 + 100 + lVar12) = (float)dVar2;
  *(float *)(lVar13 + 0x68 + lVar12) = (float)dVar1;
  *(undefined8 *)(lVar13 + 0x34 + lVar12) = 0;
  *(undefined1 *)(lVar13 + 0x30 + lVar12) = 0;
  return;
}



// FUNCTION 1429a4fc4 FUN_1429a4fc4 body=1 status=ok
// SIG undefined FUN_1429a4fc4(void)

void FUN_1429a4fc4(void)

{
  return;
}



// FUNCTION 1429a4fc5 FUN_1429a4fc5 body=69 status=ok
// SIG undefined FUN_1429a4fc5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a4fc5(void)

{
  _DAT_14c9930e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a5007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9930e8,1);
  return;
}



// FUNCTION 1429a500a FUN_1429a500a body=69 status=ok
// SIG undefined FUN_1429a500a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a500a(void)

{
  _DAT_14c9930f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a504c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9930f8,1);
  return;
}



// FUNCTION 1429a504f FUN_1429a504f body=69 status=ok
// SIG undefined FUN_1429a504f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a504f(void)

{
  _DAT_14c993100 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a5091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993108,1);
  return;
}



// FUNCTION 1429a5094 FUN_1429a5094 body=69 status=ok
// SIG undefined FUN_1429a5094(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a5094(void)

{
  _DAT_14c993110 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a50d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993118,1);
  return;
}



// FUNCTION 1429a50d9 FUN_1429a50d9 body=69 status=ok
// SIG undefined FUN_1429a50d9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a50d9(void)

{
  _DAT_14c993120 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a511b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993128,1);
  return;
}



// FUNCTION 1429a511e FUN_1429a511e body=69 status=ok
// SIG undefined FUN_1429a511e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a511e(void)

{
  _DAT_14c993130 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a5160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993138,1);
  return;
}



// FUNCTION 1429a5163 FUN_1429a5163 body=69 status=ok
// SIG undefined FUN_1429a5163(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a5163(void)

{
  _DAT_14c993140 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a51a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993148,1);
  return;
}



// FUNCTION 1429a51a8 FUN_1429a51a8 body=69 status=ok
// SIG undefined FUN_1429a51a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a51a8(void)

{
  _DAT_14c993150 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a51ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993158,1);
  return;
}



// FUNCTION 1429a51ee FUN_1429a51ee body=107 status=ok
// SIG undefined FUN_1429a51ee(void)

void FUN_1429a51ee(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar3 = **(undefined8 **)(lVar2 + lVar5);
      iVar1 = *(int *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x20) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
        FUN_140c29ed8((longlong *)(param_1 + 0x18),iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = uVar3;
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar5);
  }
  return;
}



// FUNCTION 1429a525c FUN_1429a525c body=318 status=ok
// SIG undefined FUN_1429a525c(void)

void FUN_1429a525c(longlong param_1,double param_2,int param_3,int param_4,uint param_5,
                  double *param_6)

{
  longlong lVar1;
  float fVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  uint local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((0 < (int)param_5) && (DAT_14c75f0ec != '\0')) {
    if (param_4 - *(int *)((longlong)param_6 + 0x14) == param_3) {
      lVar1 = 0;
      do {
        FUN_146d6fe9a(*(longlong *)(param_1 + 0x18) + lVar1);
        lVar1 = lVar1 + 0x338;
      } while ((ulonglong)param_5 * 0x338 - lVar1 != 0);
    }
    if (((param_3 == 0) && (*(char *)(*(longlong *)(param_1 + 0x10) + 0x139) != '\0')) ||
       (*(char *)(param_1 + 0x48) == '\x01')) {
      FUN_146d6b162(param_1,param_2,param_5);
    }
    if (0.0 < *param_6) {
      fVar2 = ((float)*param_6 * (float)param_2) / (float)param_4;
    }
    else {
      fVar2 = 0.0;
    }
    if (param_3 < param_4 - *(int *)((longlong)param_6 + 0xc)) {
      local_60 = *(undefined8 *)(param_1 + 0x18);
      local_58 = param_5;
      FUN_146d6ccf8();
    }
    else {
      local_60 = *(undefined8 *)(param_1 + 0x18);
      local_58 = param_5;
      FUN_146d6c1ea(&local_60,fVar2);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429a539c FUN_1429a539c body=142 status=ok
// SIG undefined FUN_1429a539c(void)

void FUN_1429a539c(longlong param_1,double param_2,undefined4 param_3,undefined4 param_4,int param_5
                  ,undefined8 param_6)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((0 < param_5) && (DAT_14c75f0ed != '\0')) {
    local_48 = param_6;
    FUN_146d6b0e8(param_1,param_3,param_4,param_5);
    local_40 = *(undefined8 *)(param_1 + 0x18);
    local_38 = param_5;
    FUN_146d6d2a2(&local_40,(float)param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429a542c FUN_1429a542c body=325 status=ok
// SIG undefined FUN_1429a542c(void)

void FUN_1429a542c(longlong param_1,double param_2,int param_3,int param_4)

{
  double dVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c75f0ec == '\x01') {
    lVar2 = *(longlong *)(param_1 + 0x10);
    FUN_146d6f3aa(param_1);
    dVar1 = *(double *)(lVar2 + 0xf0);
    if (0.0 < dVar1) {
      fVar3 = ((float)dVar1 * (float)param_2) / (float)param_4;
    }
    else {
      fVar3 = 0.0;
    }
    if (param_3 < param_4 - *(int *)(lVar2 + 0xfc)) {
      local_50 = *(undefined8 *)(param_1 + 0x30);
      local_48 = *(undefined4 *)(param_1 + 0x38);
      local_60 = *(undefined8 *)(param_1 + 0x50);
      local_58 = *(undefined4 *)(param_1 + 0x58);
      local_70 = *(undefined8 *)(param_1 + 0x40);
      local_68 = *(undefined4 *)(param_1 + 0x48);
      FUN_146d6ee70();
    }
    else {
      local_50 = *(undefined8 *)(param_1 + 0x30);
      local_48 = *(undefined4 *)(param_1 + 0x38);
      local_60 = *(undefined8 *)(param_1 + 0x50);
      local_58 = *(undefined4 *)(param_1 + 0x58);
      local_70 = *(undefined8 *)(param_1 + 0x40);
      local_68 = *(undefined4 *)(param_1 + 0x48);
      FUN_146d6ecc6(&local_70,&local_60,&local_50,fVar3);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429a5572 FUN_1429a5572 body=277 status=ok
// SIG undefined FUN_1429a5572(void)

void FUN_1429a5572(longlong param_1,double param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c75f0ed == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0x10);
    uVar2 = DAT_14c993160;
    if (param_3 < param_4 - *(int *)(lVar1 + 0x108)) {
      uVar2 = 0x3f800000;
    }
    FUN_146d6f3aa(param_1,uVar2);
    if (param_3 < param_4 - *(int *)(lVar1 + 0x100)) {
      local_50 = *(undefined8 *)(param_1 + 0x30);
      local_48 = *(undefined4 *)(param_1 + 0x38);
      local_60 = *(undefined8 *)(param_1 + 0x50);
      local_58 = *(undefined4 *)(param_1 + 0x58);
      local_70 = *(undefined8 *)(param_1 + 0x40);
      local_68 = *(undefined4 *)(param_1 + 0x48);
      FUN_146d6f218();
    }
    else {
      local_50 = *(undefined8 *)(param_1 + 0x30);
      local_48 = *(undefined4 *)(param_1 + 0x38);
      local_60 = *(undefined8 *)(param_1 + 0x50);
      local_58 = *(undefined4 *)(param_1 + 0x58);
      local_70 = *(undefined8 *)(param_1 + 0x40);
      local_68 = *(undefined4 *)(param_1 + 0x48);
      FUN_146d6effc(&local_70,&local_60,&local_50,(float)param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429a5688 FUN_1429a5688 body=69 status=ok
// SIG undefined FUN_1429a5688(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a5688(void)

{
  _DAT_14c993168 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a56ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993170,1);
  return;
}



// FUNCTION 1429a56cd FUN_1429a56cd body=69 status=ok
// SIG undefined FUN_1429a56cd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a56cd(void)

{
  _DAT_14c993178 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a570f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993180,1);
  return;
}



// FUNCTION 1429a5712 FUN_1429a5712 body=69 status=ok
// SIG undefined FUN_1429a5712(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a5712(void)

{
  _DAT_14c993188 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a5754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993190,1);
  return;
}



// FUNCTION 1429a5757 FUN_1429a5757 body=69 status=ok
// SIG undefined FUN_1429a5757(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a5757(void)

{
  _DAT_14c9931a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a5799. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9931a8,1);
  return;
}



// FUNCTION 1429a579c FUN_1429a579c body=69 status=ok
// SIG undefined FUN_1429a579c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a579c(void)

{
  _DAT_14c9931b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a57de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9931b8,1);
  return;
}



// FUNCTION 1429a57e1 FUN_1429a57e1 body=69 status=ok
// SIG undefined FUN_1429a57e1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a57e1(void)

{
  _DAT_14c9931c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a5823. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9931c8,1);
  return;
}



// FUNCTION 1429a5826 FUN_1429a5826 body=69 status=ok
// SIG undefined FUN_1429a5826(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a5826(void)

{
  _DAT_14c9931d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a5868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9931d8,1);
  return;
}



// FUNCTION 1429a586b FUN_1429a586b body=69 status=ok
// SIG undefined FUN_1429a586b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a586b(void)

{
  _DAT_14c9931e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a58ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9931e8,1);
  return;
}



// FUNCTION 1429a58b4 FUN_1429a58b4 body=1430 status=ok
// SIG undefined FUN_1429a58b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a58b4(void)

{
  FUN_1415c789c(&DAT_14c993000,L"p.Chaos.Collision.Manifold.MatchPositionTolerance",&DAT_14c75f0a8,
                L"A tolerance as a fraction of object size used to determine if two contact points are the same"
                ,0);
  atexit(FUN_1429a4a84);
  FUN_1415c789c(&DAT_14c993010,L"p.Chaos.Collision.Manifold.MatchNormalTolerance",&DAT_14c75f0ac,
                L"A tolerance on the normal dot product used to determine if two contact points are the same"
                ,0);
  atexit(FUN_1429a4ac9);
  FUN_1415c789c(&DAT_14c993020,L"p.Chaos.Collision.Manifold.FrictionExactPositionTolerance",
                &DAT_14c75f0b0,&DAT_149dfb77a,0);
  atexit(FUN_1429a4b0e);
  FUN_1415c789c(&DAT_14c993030,L"p.Chaos.Collision.Manifold.FrictionNearPositionTolerance",
                &DAT_14c75f0b4,&DAT_149dfb77a,0);
  atexit(FUN_1429a4b53);
  FUN_1415c789c(&DAT_14c993040,L"p.Chaos.Collision.GBFCharacteristicTimeRatio",&DAT_14c75f0b8,
                L"The ratio between characteristic time and Dt",0);
  atexit(FUN_1429a4b98);
  FUN_14153156c(&DAT_14c993050,L"p.Chaos.Collision.Manifold.EnableFrictionRestore",&DAT_14c75f0bc,
                &DAT_149dfb77a,0);
  atexit(FUN_1429a4bdd);
  FUN_1415c789c(&DAT_14c993068,L"p.Chaos.Collision.ConvexZeroMargin",&DAT_14c993060,&DAT_149dfb77a,0
               );
  atexit(FUN_1429a4c22);
  FUN_1415c789c(&DAT_14c993078,L"p.Chaos.Collision.Stiffness",&DAT_14c75f0c0,
                L"Override the collision solver stiffness (if >= 0)",0);
  atexit(FUN_1429a4c67);
  FUN_14153156c(&DAT_14c993088,L"p.Chaos.Collision.EnableOneWayInteraction",&DAT_14c75f0c4,
                L"Whether the one-way interaction flag is respected in collision constraints",0);
  atexit(FUN_1429a4cac);
  FUN_1415c789c(&DAT_14c993098,L"p.Chaos.Collision.OneWayStiffness",&DAT_14c75f0c8,
                L"Collision solver stiffnes for one-way interactions",0);
  atexit(FUN_1429a4cf1);
  FUN_14153156c(&DAT_14c9930a8,L"p.Chaos.Collision.EnableBoundsChecks",&DAT_14c75f0fc,&DAT_149dfb77a
                ,0);
  atexit(FUN_1429a4d36);
  FUN_141471170(&DAT_14c9930b8,L"p.Chaos.Collision.MaxManifoldPoints",&DAT_14c75f100,&DAT_149dfb77a,
                0);
  atexit(FUN_1429a4d7b);
  FUN_14153156c(&DAT_14c9930c8,L"p.Chaos.Collision.AllowGlobalInitialPhi",&DAT_14c75f0cc,
                &DAT_149dfb77a,0);
  atexit(FUN_1429a4dc0);
  FUN_1415c789c(&DAT_14c9930e0,L"p.Chaos.PBDCollisionSolver.AutoStiffness.MassRatio1",&DAT_14c9930d8
                ,&DAT_149dfb77a,0);
  atexit(FUN_1429a4fc5);
  FUN_1415c789c(&DAT_14c9930f0,L"p.Chaos.PBDCollisionSolver.AutoStiffness.MassRatio2",&DAT_14c9930dc
                ,&DAT_149dfb77a,0);
  atexit(FUN_1429a500a);
  FUN_1415c789c(&DAT_14c993100,L"p.Chaos.PBDCollisionSolver.JacobiStiffness",&DAT_14c75f0d0,
                &DAT_149dfb77a,0);
  atexit(FUN_1429a504f);
  FUN_1415c789c(&DAT_14c993110,L"p.Chaos.PBDCollisionSolver.JacobiPositionTolerance",&DAT_14c75f0d4,
                &DAT_149dfb77a,0);
  atexit(FUN_1429a5094);
  FUN_1415c789c(&DAT_14c993120,L"p.Chaos.PBDCollisionSolver.JacobiRotationTolerance",&DAT_14c75f0d8,
                &DAT_149dfb77a,0);
  atexit(FUN_1429a50d9);
  FUN_14153156c(&DAT_14c993130,L"p.Chaos.PBDCollisionSolver.EnableInitialDepenetration",
                &DAT_14c75f0dc,&DAT_149dfb77a,0);
  atexit(FUN_1429a511e);
  FUN_141471170(&DAT_14c993140,L"p.Chaos.PBDCollisionSolver.MaxManifoldPoints",&DAT_14c75f0e0,
                &DAT_149dfb77a,0);
  atexit(FUN_1429a5163);
  FUN_14153156c(&DAT_14c993150,L"p.Chaos.PBDCollisionSolver.EnableSoftCollisions",&DAT_14c75f0e4,
                &DAT_149dfb77a,0);
  atexit(FUN_1429a51a8);
  FUN_14153156c(&DAT_14c993168,L"p.Chaos.PBDCollisionSolver.Position.SolveEnabled",&DAT_14c75f0ec,
                &DAT_149dfb77a,0);
  atexit(FUN_1429a5688);
  FUN_1415c789c(&DAT_14c993178,L"p.Chaos.PBDCollisionSolver.Position.MinInvMassScale",&DAT_14c75f0e8
                ,&DAT_149dfb77a,0);
  atexit(FUN_1429a56cd);
  FUN_1415c789c(&DAT_14c993188,L"p.Chaos.PBDCollisionSolver.Position.StaticFriction.Stiffness",
                &DAT_14c75f0f0,&DAT_149dfb77a,0);
  atexit(FUN_1429a5712);
  DAT_14c993160 = DAT_14c75f0e8;
  FUN_14153156c(&DAT_14c9931a0,L"p.Chaos.PBDCollisionSolver.Velocity.SolveEnabled",&DAT_14c75f0ed,
                &DAT_149dfb77a,0);
  atexit(FUN_1429a5757);
  FUN_1415c789c(&DAT_14c9931b0,L"p.Chaos.PBDCollisionSolver.Velocity.MinInvMassScale",&DAT_14c993160
                ,&DAT_149dfb77a,0);
  atexit(FUN_1429a579c);
  FUN_14153156c(&DAT_14c9931c0,L"p.Chaos.PBDCollisionSolver.Velocity.FrictionEnabled",&DAT_14c75f0f4
                ,&DAT_149dfb77a,0);
  atexit(FUN_1429a57e1);
  FUN_1415c789c(&DAT_14c9931d0,L"p.Chaos.PBDCollisionSolver.Velocity.StaticFriction.Stiffness",
                &DAT_14c75f0f8,&DAT_149dfb77a,0);
  atexit(FUN_1429a5826);
  FUN_14153156c(&DAT_14c9931e0,L"p.Chaos.PBDCollisionSolver.Velocity.AveragePointEnabled",
                &DAT_14c993198,&DAT_149dfb77a,0);
  atexit(FUN_1429a586b);
  _DAT_14c9931f0 = 0x8000000080000000;
  uRam000000014c9931f8 = 0x8000000080000000;
  _DAT_14c993200 = 0x80000000;
  uRam000000014c993208 = 0;
  _DAT_14c993210 = 0x8000000000000000;
  uRam000000014c993218 = 0;
  _DAT_14c993220 = 0;
  uRam000000014c993228 = 0x80000000;
  return;
}



// FUNCTION 1429a5e4c FUN_1429a5e4c body=16 status=ok
// SIG undefined FUN_1429a5e4c(void)

void FUN_1429a5e4c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_146cd0c9c(param_1 + 0x58,param_2,*(undefined4 *)(param_1 + 0x38),param_3);
  return;
}



// FUNCTION 1429a5e5c FUN_1429a5e5c body=2811 status=ok
// SIG undefined FUN_1429a5e5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a5e5c(longlong param_1,double param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  double *pdVar22;
  double *pdVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_3e8 [40];
  double local_3c0;
  double local_3b8;
  ulonglong local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  double local_390;
  double local_388;
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  undefined8 local_360;
  double local_358;
  double local_350;
  double local_348;
  undefined8 local_340;
  double local_338;
  double local_330;
  double local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 local_300;
  double local_2f8 [16];
  double local_278;
  double local_270;
  double local_268;
  undefined8 local_260;
  double local_258;
  double local_250;
  double local_248;
  undefined8 local_240;
  double local_238;
  double local_230;
  double local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178 [5];
  double local_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  if ((param_2 < 9.99999993922529e-09) || (*(longlong *)(param_1 + 0x58) == 0)) {
    *(undefined8 *)(param_1 + 0x78) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x80) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x88) = 0x3ff0000000000000;
    uVar14 = DAT_14c8463d8;
    *(undefined8 *)(param_1 + 0x90) = DAT_14c8463d0;
    *(undefined8 *)(param_1 + 0x98) = uVar14;
    uVar17 = DAT_14c8463e8._4_4_;
    uVar16 = (undefined4)DAT_14c8463e8;
    uVar15 = DAT_14c8463e0._4_4_;
    *(undefined4 *)(param_1 + 0xa0) = (undefined4)DAT_14c8463e0;
    *(undefined4 *)(param_1 + 0xa4) = uVar15;
    *(undefined4 *)(param_1 + 0xa8) = uVar16;
    *(undefined4 *)(param_1 + 0xac) = uVar17;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_3e8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9932b0) && (FUN_144b3d300(&DAT_14c9932b0), DAT_14c9932b0 == -1)) {
    _DAT_14c993230 = 2.0;
    DAT_14c993250 = 1.0;
    DAT_14c993270 = 1.0;
    DAT_14c993238 = 1.0;
    DAT_14c993258 = 2.0;
    DAT_14c993278 = 1.0;
    DAT_14c993240 = 1.0;
    DAT_14c993260 = 1.0;
    DAT_14c993280 = 2.0;
    _DAT_14c993290 = 0;
    uRam000000014c993298 = 0;
    _DAT_14c9932a0 = 0;
    _DAT_14c9932a8 = 0x3ff0000000000000;
    _DAT_14c993248 = 0;
    _DAT_14c993268 = 0;
    _DAT_14c993288 = 0;
    _Init_thread_footer(&DAT_14c9932b0);
  }
  local_3c0 = 1.0 / param_2;
  iVar18 = *(int *)(param_1 + 0x28);
  dVar6 = 0.0;
  dVar32 = 0.0;
  dVar7 = 0.0;
  dVar30 = 0.0;
  dVar12 = 0.0;
  dVar11 = 0.0;
  dVar31 = 0.0;
  dVar13 = 0.0;
  dVar10 = 0.0;
  if (0 < iVar18) {
    lVar28 = 0;
    dVar6 = 0.0;
    dVar7 = 0.0;
    dVar10 = 0.0;
    dVar11 = 0.0;
    dVar12 = 0.0;
    dVar13 = 0.0;
    do {
      plVar5 = *(longlong **)(param_1 + 0x58);
      if (plVar5 != (longlong *)0x0) {
        cVar4 = *(char *)(param_1 + 0x60);
        if (cVar4 == '\x03') {
          lVar24 = *plVar5;
          uVar25 = *(uint *)(lVar24 + 4 + lVar28 * 8);
        }
        else if (cVar4 == '\x02') {
          lVar24 = *plVar5;
          uVar25 = (uint)*(short *)(lVar24 + 2 + lVar28 * 4);
        }
        else {
          if (cVar4 != '\x01') goto LAB_1429a6662;
          lVar24 = *plVar5;
          uVar25 = (uint)*(byte *)(lVar24 + 1 + lVar28 * 2);
        }
        if (2 < (int)uVar25) {
          lVar20 = *(longlong *)(param_1 + 0x30);
          local_3b8 = 0.0;
          lVar26 = 0;
          dVar29 = 0.0;
          dVar8 = 0.0;
          do {
            if (cVar4 == '\x01') {
              uVar19 = (uint)*(byte *)(plVar5[2] + 1 +
                                      ((ulonglong)*(byte *)(lVar24 + lVar28 * 2) + lVar26) * 3);
            }
            else if (cVar4 == '\x02') {
              uVar19 = (uint)*(short *)(plVar5[2] + 2 +
                                       (*(short *)(lVar24 + lVar28 * 4) + lVar26) * 6);
            }
            else {
              uVar19 = 0xffffffff;
              if (cVar4 == '\x03') {
                uVar19 = *(uint *)(plVar5[2] + 4 + (*(int *)(lVar24 + lVar28 * 8) + lVar26) * 0xc);
              }
            }
            lVar27 = (longlong)(int)uVar19;
            local_3b8 = local_3b8 + (double)*(float *)(lVar20 + 8 + lVar27 * 0xc);
            dVar29 = dVar29 + (double)*(float *)(lVar20 + 4 + lVar27 * 0xc);
            dVar8 = dVar8 + (double)*(float *)(lVar20 + lVar27 * 0xc);
            lVar26 = lVar26 + 1;
          } while (uVar25 != (uint)lVar26);
          dVar9 = 1.0 / (double)(int)uVar25;
          local_3b8 = dVar9 * local_3b8;
          local_188 = 0;
          local_198 = 0;
          uStack_190 = 0;
          uStack_1a0 = 0;
          uStack_1c0 = 0;
          uStack_1e0 = 0;
          uStack_180 = 0x3ff0000000000000;
          local_3b0 = (ulonglong)-uVar25;
          lVar24 = 0;
          do {
            fVar1 = *(float *)(param_1 + 0x74);
            local_1b8 = local_3b8 - (double)fVar1;
            fVar2 = *(float *)(param_1 + 0x6c);
            fVar3 = *(float *)(param_1 + 0x70);
            local_1d8 = dVar29 * dVar9 - (double)fVar3;
            local_1f8 = dVar8 * dVar9 - (double)fVar2;
            plVar5 = *(longlong **)(param_1 + 0x58);
            uVar19 = 0xffffffff;
            uVar25 = 0xffffffff;
            if (plVar5 != (longlong *)0x0) {
              cVar4 = *(char *)(param_1 + 0x60);
              if (cVar4 == '\x01') {
                uVar25 = (uint)*(byte *)(plVar5[2] + 1 +
                                        ((ulonglong)*(byte *)(*plVar5 + lVar28 * 2) + lVar24) * 3);
              }
              else if (cVar4 == '\x02') {
                uVar25 = (uint)*(short *)(plVar5[2] + 2 +
                                         (*(short *)(*plVar5 + lVar28 * 4) + lVar24) * 6);
              }
              else if (cVar4 == '\x03') {
                uVar25 = *(uint *)(plVar5[2] + 4 + (*(int *)(*plVar5 + lVar28 * 8) + lVar24) * 0xc);
              }
            }
            lVar20 = *(longlong *)(param_1 + 0x30);
            lVar26 = (longlong)(int)uVar25;
            dStack_1b0 = (double)(*(float *)(lVar20 + 8 + lVar26 * 0xc) - fVar1);
            dStack_1d0 = (double)(*(float *)(lVar20 + 4 + lVar26 * 0xc) - fVar3);
            dStack_1f0 = (double)(*(float *)(lVar20 + lVar26 * 0xc) - fVar2);
            iVar18 = (int)(lVar24 + 1);
            if (plVar5 != (longlong *)0x0) {
              iVar21 = iVar18;
              if ((int)lVar24 + (int)local_3b0 == -1) {
                iVar21 = 0;
              }
              cVar4 = *(char *)(param_1 + 0x60);
              if (cVar4 == '\x01') {
                uVar19 = (uint)*(byte *)(plVar5[2] + 1 +
                                        (ulonglong)(iVar21 + (uint)*(byte *)(*plVar5 + lVar28 * 2))
                                        * 3);
              }
              else if (cVar4 == '\x02') {
                uVar19 = (uint)*(short *)(plVar5[2] + 2 +
                                         ((longlong)iVar21 +
                                         (longlong)*(short *)(*plVar5 + lVar28 * 4)) * 6);
              }
              else if (cVar4 == '\x03') {
                uVar19 = *(uint *)(plVar5[2] + 4 +
                                  ((longlong)iVar21 + (longlong)*(int *)(*plVar5 + lVar28 * 8)) *
                                  0xc);
              }
            }
            lVar26 = (longlong)(int)uVar19;
            local_1a8 = (double)(*(float *)(lVar20 + 8 + lVar26 * 0xc) - fVar1);
            local_1c8 = (double)(*(float *)(lVar20 + 4 + lVar26 * 0xc) - fVar3);
            local_1e8 = (double)(*(float *)(lVar20 + lVar26 * 0xc) - fVar2);
            local_278 = (local_1d8 * dStack_1b0 - local_1b8 * dStack_1d0) * local_1e8 +
                        (local_1f8 * (dStack_1d0 * local_1a8 - dStack_1b0 * local_1c8) -
                        (local_1a8 * local_1d8 - local_1c8 * local_1b8) * dStack_1f0);
            local_228 = DAT_14c993280 * local_278;
            local_248 = DAT_14c993260 * local_278;
            local_268 = DAT_14c993240 * local_278;
            local_230 = DAT_14c993278 * local_278;
            local_250 = DAT_14c993258 * local_278;
            local_270 = DAT_14c993238 * local_278;
            local_238 = DAT_14c993270 * local_278;
            local_258 = DAT_14c993250 * local_278;
            local_278 = local_278 * _DAT_14c993230;
            local_208 = 0;
            local_218 = 0;
            uStack_210 = 0;
            local_200 = 0x3ff0000000000000;
            local_260 = 0;
            local_240 = 0;
            local_220 = 0;
            local_3a8 = dVar6;
            local_3a0 = dVar30;
            local_398 = dVar31;
            local_390 = dVar32;
            local_388 = dVar11;
            local_380 = dVar10;
            FUN_1447fea8d(local_178,&local_1f8,&local_278);
            pdVar22 = local_178;
            pdVar23 = local_2f8;
            for (lVar20 = 0x10; lVar20 != 0; lVar20 = lVar20 + -1) {
              *pdVar23 = *pdVar22;
              pdVar22 = pdVar22 + 1;
              pdVar23 = pdVar23 + 1;
            }
            local_378 = local_1f8;
            local_358 = dStack_1f0;
            local_338 = local_1e8;
            local_370 = local_1d8;
            local_350 = dStack_1d0;
            local_330 = local_1c8;
            local_368 = local_1b8;
            local_348 = dStack_1b0;
            local_328 = local_1a8;
            local_308 = 0;
            local_318 = 0;
            uStack_310 = 0;
            local_300 = 0x3ff0000000000000;
            local_360 = 0;
            local_340 = 0;
            local_320 = 0;
            FUN_1447fea8d(local_178,local_2f8,&local_378);
            dVar10 = local_380 + local_178[0];
            dVar13 = dVar13 + local_178[1];
            dVar31 = local_398 + local_178[2];
            dVar11 = local_388 + local_178[4];
            dVar12 = dVar12 + local_150;
            dVar30 = local_3a0 + local_148;
            dVar7 = dVar7 + local_138;
            dVar32 = local_390 + local_130;
            dVar6 = local_3a8 + local_128;
            lVar24 = lVar24 + 1;
          } while (iVar18 + (int)local_3b0 != 0);
          iVar18 = *(int *)(param_1 + 0x28);
        }
      }
LAB_1429a6662:
      lVar28 = lVar28 + 1;
    } while (lVar28 < iVar18);
  }
  dVar29 = dVar12 + dVar10 + dVar6;
  local_128 = (dVar29 - dVar6) * 0.008333333333333333 * local_3c0;
  local_148 = (0.0 - dVar30) * 0.008333333333333333 * local_3c0;
  local_178[2] = (0.0 - dVar31) * 0.008333333333333333 * local_3c0;
  local_130 = (0.0 - dVar32) * 0.008333333333333333 * local_3c0;
  local_150 = (dVar29 - dVar12) * 0.008333333333333333 * local_3c0;
  local_178[1] = (0.0 - dVar13) * 0.008333333333333333 * local_3c0;
  local_138 = (0.0 - dVar7) * 0.008333333333333333 * local_3c0;
  local_178[4] = (0.0 - dVar11) * 0.008333333333333333 * local_3c0;
  local_178[0] = (dVar29 - dVar10) * 0.008333333333333333 * local_3c0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_100 = 0x3ff0000000000000;
  local_178[3] = 0.0;
  local_140 = 0;
  local_120 = 0;
  FUN_14076d8a0(&local_1f8,local_178);
  *(double *)(param_1 + 0xa0) = local_1e8;
  *(undefined8 *)(param_1 + 0xa8) = uStack_1e0;
  *(double *)(param_1 + 0x90) = local_1f8;
  *(double *)(param_1 + 0x98) = dStack_1f0;
  *(double *)(param_1 + 0x78) = local_178[0];
  *(double *)(param_1 + 0x80) = local_150;
  *(double *)(param_1 + 0x88) = local_128;
  if ((local_f0 ^ (ulonglong)auStack_3e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429a6958 FUN_1429a6958 body=69 status=ok
// SIG undefined FUN_1429a6958(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a6958(void)

{
  _DAT_14c9932b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a699a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9932c0,1);
  return;
}



// FUNCTION 1429a699d FUN_1429a699d body=69 status=ok
// SIG undefined FUN_1429a699d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a699d(void)

{
  _DAT_14c9932c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a69df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9932d0,1);
  return;
}



// FUNCTION 1429a69e2 FUN_1429a69e2 body=69 status=ok
// SIG undefined FUN_1429a69e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a69e2(void)

{
  _DAT_14c9932d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a6a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9932e0,1);
  return;
}



// FUNCTION 1429a6a27 FUN_1429a6a27 body=69 status=ok
// SIG undefined FUN_1429a6a27(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a6a27(void)

{
  _DAT_14c9932e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a6a69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9932f0,1);
  return;
}



// FUNCTION 1429a6a6c FUN_1429a6a6c body=69 status=ok
// SIG undefined FUN_1429a6a6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a6a6c(void)

{
  _DAT_14c9932f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a6aae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993300,1);
  return;
}



// FUNCTION 1429a6ab1 FUN_1429a6ab1 body=69 status=ok
// SIG undefined FUN_1429a6ab1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a6ab1(void)

{
  _DAT_14c993308 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a6af3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993310,1);
  return;
}



// FUNCTION 1429a6af6 FUN_1429a6af6 body=69 status=ok
// SIG undefined FUN_1429a6af6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a6af6(void)

{
  _DAT_14c993318 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429a6b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993320,1);
  return;
}



// FUNCTION 1429a6b3c FUN_1429a6b3c body=13508 status=ok
// SIG undefined FUN_1429a6b3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429a6b3c(longlong *param_1,longlong *param_2,longlong param_3,char param_4,
                  longlong param_5)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  DWORD DVar10;
  DWORD dwTlsIndex;
  DWORD DVar11;
  uint *puVar12;
  longlong lVar13;
  LPVOID lpTlsValue;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong *plVar19;
  uint *puVar20;
  float *pfVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  longlong *plVar26;
  uint *puVar27;
  longlong lVar28;
  longlong *plVar29;
  int iVar30;
  int iVar31;
  undefined8 *puVar32;
  undefined4 *puVar33;
  int iVar34;
  undefined8 *puVar35;
  undefined4 *puVar36;
  longlong lVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  ulonglong uVar41;
  longlong **pplVar42;
  uint *puVar43;
  undefined4 *puVar44;
  ulonglong uVar45;
  bool bVar46;
  undefined1 in_XMM1 [16];
  undefined1 auVar47 [16];
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar51 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar52 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar53 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar54 [16];
  undefined1 auStack_308 [32];
  undefined4 *local_2e8;
  undefined1 *local_2e0;
  longlong *local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  uint *local_2c0;
  char local_2b1;
  uint *local_2b0;
  longlong **local_2a8;
  longlong *local_2a0;
  ulonglong local_298;
  uint *local_290;
  longlong *local_288;
  ulonglong local_280;
  int local_274;
  longlong local_270;
  undefined1 local_268 [16];
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined1 *local_240;
  longlong *local_238;
  longlong local_230;
  undefined4 local_224;
  undefined4 local_220;
  char local_219;
  longlong *local_218;
  longlong *local_210;
  undefined1 local_208 [12];
  uint uStack_1fc;
  undefined1 local_1f8 [4];
  float fStack_1f4;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined2 uStack_1c0;
  undefined6 local_1be;
  undefined2 uStack_1b8;
  undefined1 auStack_1b6 [7];
  char cStack_1af;
  undefined4 uStack_1ac;
  undefined1 local_1a8 [4];
  float fStack_1a4;
  undefined8 uStack_1a0;
  undefined1 local_198 [8];
  double dStack_190;
  undefined1 local_188 [16];
  undefined8 uStack_178;
  undefined2 uStack_170;
  undefined6 local_16e;
  undefined2 uStack_168;
  undefined6 uStack_166;
  undefined1 uStack_160;
  byte bStack_15f;
  undefined8 local_158;
  undefined4 local_150;
  float local_14c;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_2d8 = param_1;
  if ((((DAT_14c9932b4 != '\x01') || (*param_2 == 0)) ||
      (iVar34 = *(int *)(param_3 + 0x10), iVar34 < 1)) ||
     ((iVar34 != *(int *)(param_5 + 0x18) || (*(int *)(*param_2 + 0x28) < iVar34))))
  goto LAB_1429a6bf2;
  iVar34 = *(int *)((longlong)param_1 + 0xc);
  FUN_144756766(*param_1,(int)param_1[1]);
  *(undefined4 *)(local_2d8 + 1) = 0;
  if ((iVar34 < 0) && (*(int *)((longlong)local_2d8 + 0xc) != 0)) {
    FUN_140836c88(local_2d8,0);
  }
  lVar18 = local_2d8[2];
  *(undefined4 *)(lVar18 + 8) = 0;
  if (*(int *)(lVar18 + 0xc) < 0) {
    FUN_1401185b4(lVar18,0);
  }
  local_2a8 = (longlong **)(local_2d8 + 2);
  iVar34 = 0;
  FUN_146d843d0(local_2d8 + 3,0);
  local_2a0 = param_2;
  if (((*(int *)(param_3 + 0x10) != 1) && (param_4 != '\x04' || DAT_14c75f108 != 0)) &&
     (DAT_14c75f104 != 0 || param_4 == '\x04')) {
    local_2b1 = param_4 == '\x04' && DAT_14c75f108 == 2 || DAT_14c75f104 == 2 && param_4 != '\x04';
    local_2b0 = (uint *)(local_2d8 + 8);
    uVar14 = *(uint *)(local_2d8 + 0xb);
    if (uVar14 == 0) {
      uVar25 = 1;
      iVar34 = 0;
      uVar41 = 0;
      uVar16 = 0;
    }
    else {
      puVar12 = (uint *)local_2d8[10];
      if ((uint *)local_2d8[10] == (uint *)0x0) {
        puVar12 = local_2b0;
      }
      uVar38 = *puVar12;
      if (uVar38 == 0) {
        iVar34 = uVar14 + 0x1e;
        if (-1 < (int)(uVar14 - 1)) {
          iVar34 = uVar14 - 1;
        }
        uVar16 = 0;
        uVar41 = (ulonglong)(uint)(iVar34 >> 5);
        if (iVar34 >> 5 < 1) {
          uVar41 = uVar16;
        }
        iVar34 = 0;
        do {
          if (uVar41 == uVar16) goto LAB_1429a7e68;
          iVar34 = iVar34 + 0x20;
          uVar38 = puVar12[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar38 == 0);
      }
      else {
        iVar34 = 0;
        uVar16 = 0;
      }
      uVar25 = (ulonglong)(-uVar38 & uVar38);
      uVar41 = uVar25 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar41 != 0) {
        for (; uVar41 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      uVar38 = (iVar34 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      if ((int)uVar14 <= (int)uVar38) {
        uVar38 = uVar14;
      }
      uVar41 = (ulonglong)uVar38;
    }
    if ((uint)uVar41 == uVar14) {
LAB_1429a7e68:
      uVar45 = (ulonglong)uVar14;
    }
    else {
      uVar38 = 0xffffffff;
      do {
        *(undefined1 *)(local_2d8[6] + 0x50 + (longlong)(int)uVar41 * 0xd0) = 0;
        uVar38 = ~(uint)uVar25 & uVar38;
        puVar12 = (uint *)local_2d8[10];
        if ((uint *)local_2d8[10] == (uint *)0x0) {
          puVar12 = local_2b0;
        }
        uVar22 = *(uint *)(local_2d8 + 0xb);
        uVar45 = (ulonglong)uVar22;
        iVar30 = (int)uVar16;
        lVar18 = (longlong)iVar30;
        uVar39 = puVar12[lVar18] & uVar38;
        if (uVar39 == 0) {
          iVar31 = uVar22 + 0x1e;
          if (-1 < (int)(uVar22 - 1)) {
            iVar31 = uVar22 - 1;
          }
          iVar31 = iVar31 >> 5;
          iVar34 = iVar34 + 0x20;
          iVar40 = iVar31;
          if (iVar31 < iVar30) {
            iVar40 = iVar30;
          }
          if (iVar30 < iVar31) {
            lVar37 = 0;
            do {
              uVar39 = puVar12[lVar18 + lVar37 + 1];
              if (uVar39 != 0) {
                uVar16 = (ulonglong)(iVar30 + (int)lVar37 + 1);
                uVar38 = 0xffffffff;
                goto LAB_1429a8451;
              }
              iVar34 = iVar34 + 0x20;
              lVar37 = lVar37 + 1;
            } while (iVar40 - lVar18 != lVar37);
            uVar38 = 0xffffffff;
            lVar18 = (longlong)iVar40;
          }
          uVar16 = lVar18 + 1U & 0xffffffff;
          uVar41 = uVar45;
        }
        else {
LAB_1429a8451:
          uVar25 = (ulonglong)(-uVar39 & uVar39);
          uVar41 = uVar25 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar41 != 0) {
            for (; uVar41 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar39 = (iVar34 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          uVar41 = (ulonglong)uVar39;
          if ((int)uVar22 <= (int)uVar39) {
            uVar41 = uVar45;
          }
        }
      } while ((uint)uVar41 != uVar14);
    }
    auVar51 = _DAT_149931e80;
    local_288 = local_2d8 + 0x29;
    local_2c8 = local_2d8 + 6;
    iVar34 = *(int *)(*param_2 + 0x28);
    param_1 = local_2d8;
    if (0 < (longlong)iVar34) {
      plVar26 = local_2d8 + 0xd;
      auVar52 = pmovsxbq(unaff_XMM7,0x302);
      auVar53 = pmovsxbq(unaff_XMM8,0x100);
      auVar54 = pmovsxbq(unaff_XMM11,0x404);
      uVar41 = 0;
      do {
        uVar16 = 0;
        if ((longlong)uVar41 < (longlong)*(int *)(param_3 + 0x10)) {
          uVar16 = uVar41 & 0xffffffff;
        }
        local_268._0_4_ = (int)uVar16;
        lVar18 = *(longlong *)(param_3 + 8);
        if (*(longlong *)(param_3 + 8) == 0) {
          lVar18 = param_3;
        }
        lVar18 = *(longlong *)(lVar18 + uVar16 * 8);
        if (((*(byte *)(lVar18 + 0x71 + (ulonglong)((*(byte *)(lVar18 + 8) & 3) == 0) * 8) & 1) != 0
            ) && (local_218 = *(longlong **)(*(longlong *)(*local_2a0 + 0x20) + uVar41 * 8),
                 local_218 != (longlong *)0x0)) {
          if ((int)param_1[7] != *(int *)((longlong)param_1 + 100)) {
            uVar14 = ((uint)((ulonglong)local_218 >> 0x14) & 0xffff ^
                     (uint)((ulonglong)local_218 >> 4)) * -0x7a143595;
            uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
            plVar29 = (longlong *)param_1[0xe];
            if ((longlong *)param_1[0xe] == (longlong *)0x0) {
              plVar29 = plVar26;
            }
            iVar30 = *(int *)((longlong)plVar29 +
                             (ulonglong)((int)param_1[0xf] - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4);
            if (iVar30 != -1) {
              do {
                lVar18 = *local_2c8 + (longlong)iVar30 * 0xd0;
                if (*(longlong **)(*local_2c8 + (longlong)iVar30 * 0xd0) == local_218)
                goto LAB_1429a7fc0;
                iVar30 = *(int *)(lVar18 + 200);
              } while (iVar30 != -1);
            }
          }
          lVar18 = 0;
LAB_1429a7fc0:
          lVar37 = lVar18 + 8;
          if (lVar18 == 0) {
            lVar37 = 0;
          }
          local_219 = lVar37 != 0;
          if ((bool)local_219) {
            *(undefined1 *)(lVar37 + 0x60) = 0;
          }
          uStack_1b8 = 0;
          _auStack_1b6 = 0;
          uStack_1c8 = 0;
          uStack_1c0 = 0;
          local_1be = 0;
          local_1d8 = 0;
          uStack_1d0 = 0;
          local_1e8 = 0;
          uStack_1e0 = 0;
          _local_1f8 = ZEXT816(0);
          lVar18 = 3;
          auVar49 = auVar53;
          auVar47 = auVar52;
          do {
            auVar50 = auVar49 ^ auVar51;
            if (auVar50._0_8_ < -0x7fffffffffffffee) {
              *(undefined4 *)(local_208 + lVar18 * 4 + 4) = 0xff7fffff;
            }
            if (auVar50._8_8_ < -0x7fffffffffffffee) {
              *(undefined4 *)(local_208 + lVar18 * 4 + 8) = 0xff7fffff;
            }
            auVar50 = auVar47 ^ auVar51;
            if (auVar50._0_8_ < -0x7fffffffffffffee) {
              *(undefined4 *)(local_208 + lVar18 * 4 + 0xc) = 0xff7fffff;
            }
            if (auVar50._8_8_ < -0x7fffffffffffffee) {
              *(undefined4 *)(local_1f8 + lVar18 * 4) = 0xff7fffff;
            }
            lVar28 = auVar49._8_8_;
            auVar49._0_8_ = auVar49._0_8_ + auVar54._0_8_;
            auVar49._8_8_ = lVar28 + auVar54._8_8_;
            lVar28 = auVar47._8_8_;
            auVar47._0_8_ = auVar47._0_8_ + auVar54._0_8_;
            auVar47._8_8_ = lVar28 + auVar54._8_8_;
            lVar18 = lVar18 + 4;
          } while (lVar18 != 0x17);
          local_220 = 0;
          local_224 = 0;
          local_258 = local_2a8;
          local_250 = (undefined8 *)local_1f8;
          local_248 = &local_219;
          local_240 = local_268;
          local_238 = local_288;
          local_230 = param_5;
          stack0xfffffffffffffe00 = &local_258;
          local_208._0_8_ = &LAB_146d87c34;
          puVar32 = &DAT_14c846480;
          puVar35 = (undefined8 *)local_1a8;
          for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
            *puVar35 = *puVar32;
            puVar32 = puVar32 + 1;
            puVar35 = puVar35 + 1;
          }
          local_2e0 = local_208;
          local_2e8 = &local_220;
          (**(code **)(*local_218 + 0x130))(local_218,local_1a8,uVar41 & 0xffffffff,&local_224);
          plVar29 = local_2c8;
          if ((local_219 == '\0') && (cStack_1af == '\x01')) {
            lVar18 = 0;
            do {
              *(float *)(local_1f8 + lVar18 * 4) = *(float *)(local_1f8 + lVar18 * 4) + 0.5;
              lVar18 = lVar18 + 1;
            } while (lVar18 != 6);
            lVar18 = 6;
            do {
              lVar37 = lVar18 * 4;
              fVar48 = *(float *)(local_1f8 + lVar37 + 4);
              fVar4 = *(float *)(local_1f8 + lVar37 + 8);
              fVar8 = *(float *)(local_1f8 + lVar37 + 0xc);
              lVar28 = lVar18 * 4;
              *(float *)(local_1f8 + lVar28) = *(float *)(local_1f8 + lVar37) * 0.70710677 + 0.5;
              *(float *)(local_1f8 + lVar28 + 4) = fVar48 * 0.70710677 + 0.5;
              *(float *)(local_1f8 + lVar28 + 8) = fVar4 * 0.70710677 + 0.5;
              *(float *)(local_1f8 + lVar28 + 0xc) = fVar8 * 0.70710677 + 0.5;
              lVar18 = lVar18 + 4;
            } while (lVar18 != 0x12);
            puVar44 = (undefined4 *)local_1f8;
            puVar32 = (undefined8 *)local_1a8;
            for (lVar18 = 0x12; lVar18 != 0; lVar18 = lVar18 + -1) {
              *(undefined4 *)puVar32 = *puVar44;
              puVar44 = puVar44 + 1;
              puVar32 = (undefined8 *)((longlong)puVar32 + 4);
            }
            uStack_160 = (undefined1)((ulonglong)_auStack_1b6 >> 0x30);
            bStack_15f = (byte)((ulonglong)_auStack_1b6 >> 0x38);
            local_158 = 0;
            local_150 = local_268._0_4_;
            local_14c = ((float)local_1f8 + fStack_1f4) * ((float)uStack_1f0 + uStack_1f0._4_4_) *
                        ((float)local_1e8 + local_1e8._4_4_);
            local_148 = 1;
            local_100 = 0;
            uStack_f8 = 0;
            uStack_10c = 0;
            uStack_108 = 0;
            local_120 = 0;
            uStack_118 = 0;
            local_130 = 0;
            uStack_128 = 0;
            local_140 = 0;
            uStack_138 = 0;
            uStack_114 = 0x80;
            uStack_110 = 0xffffffff;
            local_f0 = 0;
            local_258 = &local_218;
            local_250 = (undefined8 *)local_1a8;
            FUN_146d87f1c(local_2c8,local_208,&local_258);
            lVar37 = *plVar29 + (longlong)(int)local_208._0_4_ * 0xd0 + 8;
            FUN_146d838a6(local_1a8);
          }
          param_1 = local_2d8;
          if (lVar37 != 0) {
            *(undefined1 *)(lVar37 + 0x48) = 1;
            *(undefined4 *)(lVar37 + 0x58) = local_268._0_4_;
          }
        }
        uVar41 = uVar41 + 1;
      } while (uVar41 != (longlong)iVar34);
      uVar45 = (ulonglong)*(uint *)(param_1 + 0xb);
    }
    _local_1a8 = (undefined1  [16])0x0;
    _local_1f8 = (undefined1  [16])0x0;
    iVar34 = (int)uVar45;
    puVar12 = local_2b0;
    if (iVar34 == 0) {
      uVar16 = 0;
      puVar27 = (uint *)&DAT_00000001;
      iVar30 = 0;
      uVar41 = 0;
    }
    else {
      puVar27 = (uint *)param_1[10];
      if ((uint *)param_1[10] == (uint *)0x0) {
        puVar27 = local_2b0;
      }
      uVar14 = *puVar27;
      if (uVar14 == 0) {
        iVar30 = iVar34 + 0x1e;
        if (-1 < iVar34 + -1) {
          iVar30 = iVar34 + -1;
        }
        uVar16 = 0;
        uVar41 = (ulonglong)(uint)(iVar30 >> 5);
        if (iVar30 >> 5 < 1) {
          uVar41 = uVar16;
        }
        iVar30 = 0;
        do {
          if (uVar41 == uVar16) goto LAB_1429a897f;
          iVar30 = iVar30 + 0x20;
          uVar14 = puVar27[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar16 = 0;
        iVar30 = 0;
      }
      puVar27 = (uint *)(ulonglong)(-uVar14 & uVar14);
      uVar41 = (longlong)puVar27 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar41 != 0) {
        for (; uVar41 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      uVar14 = (iVar30 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      uVar41 = (ulonglong)uVar14;
      if (iVar34 <= (int)uVar14) {
        uVar41 = uVar45;
      }
    }
    if ((int)uVar41 != iVar34) {
      local_2a8 = (longlong **)(param_1 + 0xd);
      uVar14 = 0xffffffff;
      local_280 = uVar45;
      do {
        lVar18 = (longlong)(int)uVar41 * 0xd0;
        puVar32 = (undefined8 *)(*local_2c8 + lVar18);
        local_290 = (uint *)CONCAT44(local_290._4_4_,uVar14);
        local_2c0 = puVar27;
        local_298 = uVar16;
        if (*(char *)(*local_2c8 + 0x50 + lVar18) == '\0') {
          iVar34 = (int)(float)uStack_1a0;
          lVar18 = (longlong)(int)(float)uStack_1a0;
          uVar14 = (int)(float)uStack_1a0 + 1;
          uStack_1a0._0_4_ = (float)uVar14;
          if ((uint)uStack_1a0._4_4_ < uVar14) {
            FUN_146d885f4(local_1a8,iVar34);
            param_1 = local_2d8;
          }
          *(undefined8 *)((longlong)_local_1a8 + lVar18 * 8) = *puVar32;
        }
        else {
          uStack_1f0._0_4_ = 0.0;
          if ((int)uStack_1f0._4_4_ < 0) {
            FUN_146d8867a(local_1f8,0);
            param_1 = local_2d8;
          }
          local_2d0 = puVar32 + 0xe;
          iVar34 = *(int *)(puVar32 + 0x13);
          local_274 = iVar30;
          if (iVar34 == 0) {
            uVar41 = 1;
            uVar16 = 0;
            iVar31 = 0;
            iVar30 = 0;
          }
          else {
            puVar12 = (uint *)puVar32[0x12];
            if ((uint *)puVar32[0x12] == (uint *)0x0) {
              puVar12 = (uint *)(puVar32 + 0x10);
            }
            uVar14 = *puVar12;
            if (uVar14 == 0) {
              iVar30 = iVar34 + 0x1e;
              if (-1 < iVar34 + -1) {
                iVar30 = iVar34 + -1;
              }
              uVar16 = 0;
              uVar41 = (ulonglong)(uint)(iVar30 >> 5);
              if (iVar30 >> 5 < 1) {
                uVar41 = uVar16;
              }
              iVar31 = 0;
              do {
                if (uVar41 == uVar16) goto LAB_1429a85ed;
                iVar31 = iVar31 + 0x20;
                uVar14 = puVar12[uVar16 + 1];
                uVar16 = uVar16 + 1;
              } while (uVar14 == 0);
            }
            else {
              uVar16 = 0;
              iVar31 = 0;
            }
            uVar41 = (ulonglong)(-uVar14 & uVar14);
            uVar25 = uVar41 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar25 != 0) {
              for (; uVar25 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            iVar30 = (iVar31 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
            if (iVar34 <= iVar30) {
              iVar30 = iVar34;
            }
          }
          if (iVar30 != iVar34) {
            uVar14 = 0xffffffff;
            iVar40 = iVar34;
            do {
              if ((int)param_1[7] != *(int *)((longlong)param_1 + 100)) {
                lVar18 = *local_2d0;
                uVar25 = *(ulonglong *)(lVar18 + (longlong)iVar30 * 0x18);
                uVar38 = ((uint)(uVar25 >> 0x14) & 0xffff ^ (uint)(uVar25 >> 4)) * -0x7a143595;
                uVar38 = (uVar38 >> 0xd ^ uVar38) * -0x3d4d51cb;
                pplVar42 = (longlong **)param_1[0xe];
                if ((longlong **)param_1[0xe] == (longlong **)0x0) {
                  pplVar42 = local_2a8;
                }
                iVar15 = *(int *)((longlong)pplVar42 +
                                 (ulonglong)((int)param_1[0xf] - 1U & (uVar38 >> 0x10 ^ uVar38)) * 4
                                 );
                param_1 = local_2d8;
                if (iVar15 != -1) {
                  do {
                    lVar37 = *local_2c8 + (longlong)iVar15 * 0xd0;
                    if (*(ulonglong *)(*local_2c8 + (longlong)iVar15 * 0xd0) == uVar25) {
                      if (((lVar37 + 8U & 0xfffffffffffffff7) != 0) &&
                         (*(char *)(lVar37 + 0x50) == '\0')) {
                        lVar37 = (longlong)(int)(float)uStack_1f0;
                        uVar38 = (int)(float)uStack_1f0 + 1;
                        uStack_1f0._0_4_ = (float)uVar38;
                        if ((uint)uStack_1f0._4_4_ < uVar38) {
                          local_270 = lVar37;
                          FUN_146d885f4(local_1f8,lVar37);
                          lVar37 = local_270;
                        }
                        *(undefined8 *)((longlong)_local_1f8 + lVar37 * 8) =
                             *(undefined8 *)(lVar18 + (longlong)iVar30 * 0x18);
                        iVar40 = *(int *)(puVar32 + 0x13);
                        param_1 = local_2d8;
                      }
                      break;
                    }
                    iVar15 = *(int *)(lVar37 + 200);
                  } while (iVar15 != -1);
                }
              }
              uVar14 = uVar14 & ~(uint)uVar41;
              puVar12 = (uint *)puVar32[0x12];
              if ((uint *)puVar32[0x12] == (uint *)0x0) {
                puVar12 = (uint *)(puVar32 + 0x10);
              }
              iVar30 = (int)uVar16;
              lVar18 = (longlong)iVar30;
              uVar38 = puVar12[lVar18] & uVar14;
              if (uVar38 == 0) {
                iVar15 = iVar40 + 0x1e;
                if (-1 < iVar40 + -1) {
                  iVar15 = iVar40 + -1;
                }
                iVar15 = iVar15 >> 5;
                iVar31 = iVar31 + 0x20;
                iVar23 = iVar15;
                if (iVar15 < iVar30) {
                  iVar23 = iVar30;
                }
                if (iVar30 < iVar15) {
                  lVar37 = 0;
                  do {
                    uVar38 = puVar12[lVar18 + lVar37 + 1];
                    if (uVar38 != 0) {
                      uVar16 = (ulonglong)(iVar30 + (int)lVar37 + 1);
                      uVar14 = 0xffffffff;
                      goto LAB_1429a8875;
                    }
                    iVar31 = iVar31 + 0x20;
                    lVar37 = lVar37 + 1;
                  } while (iVar23 - lVar18 != lVar37);
                  uVar14 = 0xffffffff;
                  iVar30 = iVar23;
                }
                uVar16 = (ulonglong)(iVar30 + 1);
                param_1 = local_2d8;
                iVar30 = iVar40;
              }
              else {
LAB_1429a8875:
                uVar41 = (ulonglong)(-uVar38 & uVar38);
                uVar25 = uVar41 * 2 + 1;
                lVar18 = 0x3f;
                if (uVar25 != 0) {
                  for (; uVar25 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                  }
                }
                iVar30 = (iVar31 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                if (iVar40 <= iVar30) {
                  iVar30 = iVar40;
                }
              }
            } while (iVar30 != iVar34);
          }
LAB_1429a85ed:
          iVar30 = local_274;
          lVar18 = (longlong)(int)(float)uStack_1f0;
          if (lVar18 != 0) {
            lVar37 = (longlong)_local_1f8;
            lVar28 = 0;
            do {
              FUN_146d886da(local_2d0,*(undefined8 *)(lVar37 + lVar28));
              lVar28 = lVar28 + 8;
              param_1 = local_2d8;
            } while (lVar18 * 8 != lVar28);
          }
        }
        puVar12 = local_2b0;
        uVar14 = (uint)local_290 & ~(uint)local_2c0;
        puVar27 = (uint *)param_1[10];
        if ((uint *)param_1[10] == (uint *)0x0) {
          puVar27 = local_2b0;
        }
        uVar38 = *(uint *)(param_1 + 0xb);
        iVar34 = (int)local_298;
        lVar18 = (longlong)iVar34;
        uVar22 = puVar27[lVar18] & uVar14;
        uVar16 = local_298;
        if (uVar22 == 0) {
          iVar31 = uVar38 + 0x1e;
          if (-1 < (int)(uVar38 - 1)) {
            iVar31 = uVar38 - 1;
          }
          iVar31 = iVar31 >> 5;
          iVar30 = iVar30 + 0x20;
          iVar40 = iVar31;
          if (iVar31 < iVar34) {
            iVar40 = iVar34;
          }
          if (iVar34 < iVar31) {
            lVar37 = 0;
            do {
              uVar22 = puVar27[lVar18 + lVar37 + 1];
              if (uVar22 != 0) {
                uVar16 = (ulonglong)(iVar34 + (int)lVar37 + 1);
                uVar14 = 0xffffffff;
                goto LAB_1429a86bf;
              }
              iVar30 = iVar30 + 0x20;
              lVar37 = lVar37 + 1;
            } while (iVar40 - lVar18 != lVar37);
            uVar14 = 0xffffffff;
            iVar34 = iVar40;
          }
          uVar16 = (ulonglong)(iVar34 + 1);
          puVar27 = local_2c0;
          param_1 = local_2d8;
          uVar22 = uVar38;
        }
        else {
LAB_1429a86bf:
          puVar27 = (uint *)(ulonglong)(-uVar22 & uVar22);
          uVar41 = (longlong)puVar27 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar41 != 0) {
            for (; uVar41 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar22 = (iVar30 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if ((int)uVar38 <= (int)uVar22) {
            uVar22 = uVar38;
          }
        }
        uVar41 = (ulonglong)uVar22;
      } while (uVar22 != (uint)local_280);
      lVar18 = (longlong)(int)(float)uStack_1a0;
      if (lVar18 != 0) {
        lVar37 = (longlong)_local_1a8;
        lVar28 = 0;
        do {
          FUN_146d88828(local_2c8,*(undefined8 *)(lVar37 + lVar28));
          lVar28 = lVar28 + 8;
          param_1 = local_2d8;
        } while (lVar18 * 8 != lVar28);
      }
    }
LAB_1429a897f:
    if (_local_1f8 != (undefined8 *)0x0) {
      FUN_1400020a8();
      param_1 = local_2d8;
    }
    if (_local_1a8 != (longlong *)0x0) {
      FUN_1400020a8();
      param_1 = local_2d8;
    }
    if (local_2b1 == '\0') {
      iVar34 = (int)param_1[0xb];
      if (iVar34 == 0) {
        uVar41 = 1;
        uVar16 = 0;
        iVar31 = 0;
        iVar30 = 0;
      }
      else {
        puVar27 = (uint *)param_1[10];
        if ((uint *)param_1[10] == (uint *)0x0) {
          puVar27 = puVar12;
        }
        uVar14 = *puVar27;
        if (uVar14 == 0) {
          iVar30 = iVar34 + 0x1e;
          if (-1 < iVar34 + -1) {
            iVar30 = iVar34 + -1;
          }
          uVar16 = 0;
          uVar41 = (ulonglong)(uint)(iVar30 >> 5);
          if (iVar30 >> 5 < 1) {
            uVar41 = uVar16;
          }
          iVar31 = 0;
          do {
            if (uVar41 == uVar16) goto LAB_1429a6bf2;
            iVar31 = iVar31 + 0x20;
            uVar14 = puVar27[uVar16 + 1];
            uVar16 = uVar16 + 1;
          } while (uVar14 == 0);
        }
        else {
          uVar16 = 0;
          iVar31 = 0;
        }
        uVar41 = (ulonglong)(-uVar14 & uVar14);
        uVar25 = uVar41 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar30 = (iVar31 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar34 <= iVar30) {
          iVar30 = iVar34;
        }
      }
      if (iVar30 != iVar34) {
        uVar14 = 0xffffffff;
        iVar40 = iVar34;
        do {
          lVar18 = *local_2c8;
          lVar37 = (longlong)iVar30 * 0xd0;
          if (*(char *)(lVar18 + 0x51 + lVar37) == '\x01') {
            lVar28 = lVar18 + lVar37;
            plVar26 = (longlong *)(lVar28 + 0x58);
            lVar13 = *(longlong *)(lVar28 + 0x58);
            if (lVar13 == 0) {
LAB_1429a8ac1:
              FUN_1429e6cb4(lVar37 + lVar18 + 8,local_1a8);
              if (plVar26 == (longlong *)local_1a8) {
LAB_1429a8b12:
                if (_local_1a8 != (undefined8 *)0x0) {
                  LOCK();
                  piVar1 = (int *)(_local_1a8 + 1);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if ((*piVar1 == 0) && (*(int *)((longlong)_local_1a8 + 0xc) == 0)) {
                    (**(code **)*_local_1a8)(_local_1a8,1);
                  }
                }
              }
              else {
                puVar32 = (undefined8 *)*plVar26;
                *plVar26 = (longlong)_local_1a8;
                auVar51._8_8_ = 0;
                auVar51._0_8_ = uStack_1a0;
                _local_1a8 = auVar51 << 0x40;
                if (puVar32 != (undefined8 *)0x0) {
                  LOCK();
                  piVar1 = (int *)(puVar32 + 1);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if ((*piVar1 == 0) && (*(int *)((longlong)puVar32 + 0xc) == 0)) {
                    (**(code **)*puVar32)(puVar32,1);
                  }
                  goto LAB_1429a8b12;
                }
              }
              lVar18 = *local_288;
              *(int *)local_288 = (int)lVar18 + 1;
              *(int *)(lVar28 + 0xc0) = (int)lVar18;
              param_1 = local_2d8;
            }
            else {
              if (*(char *)(lVar13 + 0x1c) != '\b') {
                lVar13 = 0;
              }
              fVar48 = (*(float *)(lVar28 + 8) + *(float *)(lVar28 + 0xc)) *
                       (*(float *)(lVar28 + 0x10) + *(float *)(lVar28 + 0x14)) *
                       (*(float *)(lVar28 + 0x18) + *(float *)(lVar28 + 0x1c));
              if ((*(float *)(lVar13 + 0x68) != fVar48) ||
                 (NAN(*(float *)(lVar13 + 0x68)) || NAN(fVar48))) goto LAB_1429a8ac1;
            }
            iVar30 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar30 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar30 + 1U) {
              FUN_140619960(param_1,iVar30);
              param_1 = local_2d8;
            }
            lVar18 = *plVar26;
            *(longlong *)(*param_1 + (longlong)iVar30 * 8) = lVar18;
            if (lVar18 != 0) {
              LOCK();
              *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
              UNLOCK();
            }
            uVar5 = *(undefined4 *)(lVar28 + 0x60);
            uVar6 = *(undefined4 *)(lVar28 + 0xc0);
            lVar18 = param_1[2];
            puVar32 = &DAT_14c846480;
            puVar35 = (undefined8 *)local_1a8;
            for (lVar37 = 0xc; lVar37 != 0; lVar37 = lVar37 + -1) {
              *puVar35 = *puVar32;
              puVar32 = puVar32 + 1;
              puVar35 = puVar35 + 1;
            }
            local_2e8 = (undefined4 *)CONCAT44(local_2e8._4_4_,uVar6);
            FUN_14482d6a4(*(undefined8 *)(*param_1 + (longlong)((int)param_1[1] + -1) * 8),local_1a8
                          ,uVar5,lVar18);
            iVar40 = (int)local_2d8[0xb];
            param_1 = local_2d8;
          }
          uVar14 = uVar14 & ~(uint)uVar41;
          puVar12 = (uint *)param_1[10];
          if ((uint *)param_1[10] == (uint *)0x0) {
            puVar12 = local_2b0;
          }
          iVar30 = (int)uVar16;
          lVar18 = (longlong)iVar30;
          uVar38 = puVar12[lVar18] & uVar14;
          if (uVar38 == 0) {
            iVar15 = iVar40 + 0x1e;
            if (-1 < iVar40 + -1) {
              iVar15 = iVar40 + -1;
            }
            iVar15 = iVar15 >> 5;
            iVar31 = iVar31 + 0x20;
            iVar23 = iVar15;
            if (iVar15 < iVar30) {
              iVar23 = iVar30;
            }
            if (iVar30 < iVar15) {
              lVar37 = 0;
              do {
                uVar38 = puVar12[lVar18 + lVar37 + 1];
                if (uVar38 != 0) {
                  uVar16 = (ulonglong)(iVar30 + (int)lVar37 + 1);
                  uVar14 = 0xffffffff;
                  goto LAB_1429a8c42;
                }
                iVar31 = iVar31 + 0x20;
                lVar37 = lVar37 + 1;
              } while (iVar23 - lVar18 != lVar37);
              uVar14 = 0xffffffff;
              iVar30 = iVar23;
            }
            uVar16 = (ulonglong)(iVar30 + 1);
            param_1 = local_2d8;
            iVar30 = iVar40;
          }
          else {
LAB_1429a8c42:
            uVar41 = (ulonglong)(-uVar38 & uVar38);
            uVar25 = uVar41 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar25 != 0) {
              for (; uVar25 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            iVar30 = (iVar31 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
            if (iVar40 <= iVar30) {
              iVar30 = iVar40;
            }
          }
        } while (iVar30 != iVar34);
      }
    }
    else {
      local_268 = (undefined1  [16])0x0;
      uVar14 = *(uint *)(*local_2a0 + 0x28);
      uVar41 = (ulonglong)uVar14;
      if (DAT_14c75f1ac < (int)uVar14) {
        _local_1f8 = (undefined1  [16])0x0;
        if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar41);
        }
        if (uVar41 != 0) {
          FUN_1401185b4(local_1f8,uVar41);
          plVar29 = local_2a0;
          plVar26 = local_2d8 + 0xd;
          uVar16 = 0;
          plVar17 = local_2d8;
          do {
            if ((int)plVar17[7] != *(int *)((longlong)plVar17 + 100)) {
              lVar18 = *plVar29;
              uVar25 = *(ulonglong *)(*(longlong *)(lVar18 + 0x20) + uVar16 * 8);
              uVar38 = ((uint)(uVar25 >> 0x14) & 0xffff ^ (uint)(uVar25 >> 4)) * -0x7a143595;
              uVar38 = (uVar38 >> 0xd ^ uVar38) * -0x3d4d51cb;
              plVar19 = (longlong *)plVar17[0xe];
              if ((longlong *)plVar17[0xe] == (longlong *)0x0) {
                plVar19 = plVar26;
              }
              iVar34 = *(int *)((longlong)plVar19 +
                               (ulonglong)((int)plVar17[0xf] - 1U & (uVar38 >> 0x10 ^ uVar38)) * 4);
              if (iVar34 != -1) {
                do {
                  lVar37 = *local_2c8 + (longlong)iVar34 * 0xd0;
                  if (*(ulonglong *)(*local_2c8 + (longlong)iVar34 * 0xd0) == uVar25) {
                    if ((lVar37 + 8U & 0xfffffffffffffff7) != 0) {
                      puVar32 = &DAT_14c846480;
                      puVar35 = (undefined8 *)local_1a8;
                      for (lVar37 = 0xc; lVar37 != 0; lVar37 = lVar37 + -1) {
                        *puVar35 = *puVar32;
                        puVar32 = puVar32 + 1;
                        puVar35 = puVar35 + 1;
                      }
                      local_2e8 = (undefined4 *)CONCAT44(local_2e8._4_4_,(float)uStack_1f0);
                      FUN_14482d6a4(*(undefined8 *)(*(longlong *)(lVar18 + 0x20) + uVar16 * 8),
                                    local_1a8,uVar16 & 0xffffffff,local_1f8);
                      plVar17 = local_2d8;
                    }
                    break;
                  }
                  iVar34 = *(int *)(lVar37 + 200);
                } while (iVar34 != -1);
              }
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar41);
        }
        FUN_14011854c(local_1a8,local_1f8,DAT_14c75f1ac,DAT_14c75f1a8);
        local_2c0 = (uint *)_local_1a8;
        if (_local_1f8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        local_2c0 = (uint *)0x0;
      }
      local_218 = local_2d8;
      local_210 = local_2a0;
      plVar26 = local_2d8;
      if (0 < (int)uVar14) {
        plVar29 = local_2d8 + 0xd;
        uVar16 = 0;
        puVar12 = local_2c0;
        plVar17 = local_2a0;
        local_2d0 = plVar29;
LAB_1429a8e90:
        if ((int)plVar26[7] != *(int *)((longlong)plVar26 + 100)) {
          uVar25 = *(ulonglong *)(*(longlong *)(*plVar17 + 0x20) + uVar16 * 8);
          uVar38 = ((uint)(uVar25 >> 0x14) & 0xffff ^ (uint)(uVar25 >> 4)) * -0x7a143595;
          uVar38 = (uVar38 >> 0xd ^ uVar38) * -0x3d4d51cb;
          plVar19 = (longlong *)plVar26[0xe];
          if ((longlong *)plVar26[0xe] == (longlong *)0x0) {
            plVar19 = plVar29;
          }
          iVar34 = *(int *)((longlong)plVar19 +
                           (ulonglong)((int)plVar26[0xf] - 1U & (uVar38 >> 0x10 ^ uVar38)) * 4);
          if (iVar34 != -1) {
LAB_1429a8efb:
            lVar18 = *local_2c8 + (longlong)iVar34 * 0xd0;
            if (*(ulonglong *)(*local_2c8 + (longlong)iVar34 * 0xd0) != uVar25)
            goto code_r0x0001429a8f0f;
            puVar44 = (undefined4 *)(lVar18 + 8);
            if ((puVar44 != (undefined4 *)0x0 && lVar18 != 0) &&
               (*(char *)(lVar18 + 0x68) == '\x01')) {
              uStack_1a0 = (ulonglong)(double)-*(float *)(lVar18 + 0x14);
              _local_1a8 = (longlong *)(double)-*(float *)(lVar18 + 0xc);
              dStack_190 = (double)*(float *)(lVar18 + 8);
              local_198 = (undefined1  [8])(double)-*(float *)(lVar18 + 0x1c);
              local_188._8_8_ = (double)*(float *)(lVar18 + 0x18);
              local_188._0_8_ = (double)*(float *)(lVar18 + 0x10);
              if (puVar12 == (uint *)0x0) {
                uVar38 = 0;
                do {
                  local_2e8 = puVar44;
                  FUN_1429aa002(&local_218,uVar16 & 0xffffffff,uVar38,local_1a8);
                  uVar38 = uVar38 + 1;
                  plVar26 = local_2d8;
                  puVar12 = local_2c0;
                  plVar17 = local_2a0;
                } while (uVar14 != uVar38);
                goto LAB_1429a922e;
              }
              local_258 = (longlong **)
                          CONCAT44(-*(float *)(lVar18 + 0x14),-*(float *)(lVar18 + 0xc));
              local_250 = (undefined8 *)CONCAT44(*(float *)(lVar18 + 8),-*(float *)(lVar18 + 0x1c));
              local_248 = (char *)CONCAT44(*(float *)(lVar18 + 0x18),*(float *)(lVar18 + 0x10));
              plVar19 = (longlong *)((longlong)puVar12 + 0x28);
              plVar26 = local_2d8;
              puVar12 = local_2c0;
              plVar17 = local_2a0;
              if ((int)*plVar19 != 0) {
                dwTlsIndex = DAT_14c7585d0;
                if (DAT_14c7585d0 == 0xffffffff) {
                  dwTlsIndex = TlsAlloc();
                  DVar11 = 0xffffffff;
                  LOCK();
                  bVar46 = DAT_14c7585d0 != 0xffffffff;
                  DVar10 = dwTlsIndex;
                  if (bVar46) {
                    DVar11 = DAT_14c7585d0;
                    DVar10 = DAT_14c7585d0;
                  }
                  DAT_14c7585d0 = DVar10;
                  UNLOCK();
                  if (bVar46) {
                    TlsFree(dwTlsIndex);
                    dwTlsIndex = DVar11;
                  }
                }
                lpTlsValue = TlsGetValue(dwTlsIndex);
                if (lpTlsValue == (LPVOID)0x0) {
                  lpTlsValue = (LPVOID)FUN_140036a08(local_1f8);
                  FUN_140fddf04(lpTlsValue);
                  TlsSetValue(dwTlsIndex,lpTlsValue);
                }
                puVar12 = local_2c0;
                uStack_1f0 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
                _local_1f8 = (undefined8 *)((longlong)lpTlsValue + 0x10);
                local_1e8 = *(longlong *)((longlong)lpTlsValue + 0x20);
                uStack_1e0 = uStack_1e0 & 0xffffffffffffff00;
                local_1d8 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
                *(undefined1 **)((longlong)lpTlsValue + 0x28) = local_1f8;
                *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
                _local_208 = (undefined1  [16])0x0;
                iVar34 = (int)*(longlong *)((longlong)local_2c0 + 0x30);
                if (iVar34 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4(iVar34);
                }
                if (iVar34 != 0) {
                  FUN_14595390e(local_208);
                }
                iVar34 = 0;
                goto LAB_1429a909c;
              }
            }
          }
        }
        goto LAB_1429a922e;
      }
LAB_1429a92a3:
      puVar12 = local_2c0;
      uVar14 = *(uint *)(plVar26 + 0xb);
      local_298 = (ulonglong)uVar14;
      if (uVar14 == 0) {
        uVar25 = 1;
        uVar41 = 0;
        iVar34 = 0;
        uVar16 = 0;
      }
      else {
        puVar27 = (uint *)local_2d8[10];
        if ((uint *)local_2d8[10] == (uint *)0x0) {
          puVar27 = local_2b0;
        }
        uVar38 = *puVar27;
        if (uVar38 == 0) {
          iVar34 = uVar14 + 0x1e;
          if (-1 < (int)(uVar14 - 1)) {
            iVar34 = uVar14 - 1;
          }
          uVar41 = 0;
          uVar22 = iVar34 >> 5;
          if (iVar34 >> 5 < 1) {
            uVar22 = 0;
          }
          iVar34 = 0;
          do {
            if (uVar22 == uVar41) goto LAB_1429a934e;
            iVar34 = iVar34 + 0x20;
            uVar38 = puVar27[uVar41 + 1];
            uVar41 = uVar41 + 1;
          } while (uVar38 == 0);
        }
        else {
          uVar41 = 0;
          iVar34 = 0;
        }
        uVar25 = (ulonglong)(-uVar38 & uVar38);
        uVar16 = uVar25 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar38 = (iVar34 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        uVar16 = (ulonglong)uVar38;
        if ((int)uVar14 <= (int)uVar38) {
          uVar16 = local_298;
        }
      }
      if ((uint)uVar16 != uVar14) {
        uVar38 = 0xffffffff;
        do {
          lVar37 = (longlong)(int)uVar16 * 0xd0;
          lVar18 = *local_2c8 + lVar37;
          lVar37 = *local_2c8 + lVar37;
          *(undefined1 *)(lVar37 + 0x68) = 1;
          iVar30 = *(int *)(lVar37 + 0x98);
          local_2d0 = (longlong *)CONCAT44(local_2d0._4_4_,iVar34);
          local_2a8 = (longlong **)CONCAT44(local_2a8._4_4_,uVar38);
          if (iVar30 == 0) {
            uVar16 = 1;
            uVar45 = 0;
            iVar40 = 0;
            iVar31 = 0;
          }
          else {
            puVar27 = *(uint **)(lVar18 + 0x90);
            if (*(uint **)(lVar18 + 0x90) == (uint *)0x0) {
              puVar27 = (uint *)(lVar37 + 0x80);
            }
            uVar22 = *puVar27;
            if (uVar22 == 0) {
              iVar31 = iVar30 + 0x1e;
              if (-1 < iVar30 + -1) {
                iVar31 = iVar30 + -1;
              }
              uVar45 = 0;
              uVar16 = (ulonglong)(uint)(iVar31 >> 5);
              if (iVar31 >> 5 < 1) {
                uVar16 = uVar45;
              }
              iVar40 = 0;
              do {
                if (uVar16 == uVar45) goto LAB_1429a9e18;
                iVar40 = iVar40 + 0x20;
                uVar22 = puVar27[uVar45 + 1];
                uVar45 = uVar45 + 1;
              } while (uVar22 == 0);
            }
            else {
              uVar45 = 0;
              iVar40 = 0;
            }
            uVar16 = (ulonglong)(-uVar22 & uVar22);
            uVar3 = uVar16 * 2 + 1;
            lVar28 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar28 == 0; lVar28 = lVar28 + -1) {
              }
            }
            iVar31 = (iVar40 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
            if (iVar30 <= iVar31) {
              iVar31 = iVar30;
            }
          }
          if (iVar31 != iVar30) {
            uVar22 = 0xffffffff;
            do {
              *(undefined1 *)(*(longlong *)(lVar18 + 0x70) + 8 + (longlong)iVar31 * 0x18) = 1;
              uVar22 = ~(uint)uVar16 & uVar22;
              puVar27 = *(uint **)(lVar18 + 0x90);
              if (*(uint **)(lVar18 + 0x90) == (uint *)0x0) {
                puVar27 = (uint *)(lVar37 + 0x80);
              }
              iVar15 = *(int *)(lVar18 + 0x98);
              iVar31 = (int)uVar45;
              lVar28 = (longlong)iVar31;
              uVar39 = puVar27[lVar28] & uVar22;
              if (uVar39 == 0) {
                iVar23 = iVar15 + 0x1e;
                if (-1 < iVar15 + -1) {
                  iVar23 = iVar15 + -1;
                }
                iVar23 = iVar23 >> 5;
                iVar40 = iVar40 + 0x20;
                iVar24 = iVar23;
                if (iVar23 < iVar31) {
                  iVar24 = iVar31;
                }
                if (iVar31 < iVar23) {
                  lVar13 = 0;
                  do {
                    uVar39 = puVar27[lVar28 + lVar13 + 1];
                    if (uVar39 != 0) {
                      uVar45 = (ulonglong)(iVar31 + (int)lVar13 + 1);
                      uVar22 = 0xffffffff;
                      goto LAB_1429a9f71;
                    }
                    iVar40 = iVar40 + 0x20;
                    lVar13 = lVar13 + 1;
                  } while (iVar24 - lVar28 != lVar13);
                  uVar22 = 0xffffffff;
                  iVar31 = iVar24;
                }
                uVar45 = (ulonglong)(iVar31 + 1);
                iVar31 = iVar15;
              }
              else {
LAB_1429a9f71:
                uVar16 = (ulonglong)(-uVar39 & uVar39);
                uVar3 = uVar16 * 2 + 1;
                lVar28 = 0x3f;
                if (uVar3 != 0) {
                  for (; uVar3 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                  }
                }
                iVar31 = (iVar40 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
                if (iVar15 <= iVar31) {
                  iVar31 = iVar15;
                }
              }
            } while (iVar31 != iVar30);
          }
LAB_1429a9e18:
          uVar38 = uVar38 & ~(uint)uVar25;
          puVar27 = (uint *)local_2d8[10];
          if ((uint *)local_2d8[10] == (uint *)0x0) {
            puVar27 = local_2b0;
          }
          uVar22 = *(uint *)(local_2d8 + 0xb);
          iVar30 = (int)uVar41;
          lVar18 = (longlong)iVar30;
          uVar39 = puVar27[lVar18] & uVar38;
          if (uVar39 == 0) {
            iVar31 = uVar22 + 0x1e;
            if (-1 < (int)(uVar22 - 1)) {
              iVar31 = uVar22 - 1;
            }
            iVar31 = iVar31 >> 5;
            iVar34 = iVar34 + 0x20;
            iVar40 = iVar31;
            if (iVar31 < iVar30) {
              iVar40 = iVar30;
            }
            if (iVar30 < iVar31) {
              lVar37 = 0;
              do {
                uVar39 = puVar27[lVar18 + lVar37 + 1];
                if (uVar39 != 0) {
                  uVar41 = (ulonglong)(iVar30 + (int)lVar37 + 1);
                  uVar38 = 0xffffffff;
                  goto LAB_1429a9ea6;
                }
                iVar34 = iVar34 + 0x20;
                lVar37 = lVar37 + 1;
              } while (iVar40 - lVar18 != lVar37);
              uVar38 = 0xffffffff;
              lVar18 = (longlong)iVar40;
            }
            uVar41 = lVar18 + 1U & 0xffffffff;
            uVar39 = uVar22;
          }
          else {
LAB_1429a9ea6:
            uVar25 = (ulonglong)(-uVar39 & uVar39);
            uVar16 = uVar25 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            uVar39 = (iVar34 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
            if ((int)uVar22 <= (int)uVar39) {
              uVar39 = uVar22;
            }
          }
          uVar16 = (ulonglong)uVar39;
        } while (uVar39 != uVar14);
      }
LAB_1429a934e:
      if (local_2c0 != (uint *)0x0) {
        FUN_1400baf84(local_2c0);
        FUN_1400020a8(puVar12);
      }
      iVar34 = (int)local_2d8[7] - *(int *)((longlong)local_2d8 + 100);
      if (iVar34 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar34);
      }
      uVar14 = *(uint *)(*local_2a0 + 0x28);
      puVar12 = (uint *)(ulonglong)uVar14;
      if ((int)local_268._12_4_ < iVar34) {
        FUN_146d8add8(local_268);
      }
      _local_1f8 = (undefined1  [16])0x0;
      if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(puVar12);
      }
      local_2c0 = puVar12;
      if (puVar12 != (uint *)0x0) {
        FUN_146d8ae48(local_1f8);
        puVar27 = (uint *)(local_2d8 + 0xd);
        puVar43 = (uint *)0x0;
        plVar26 = local_2d8;
        plVar29 = local_2a0;
        local_2b0 = puVar27;
        do {
          if ((int)plVar26[7] != *(int *)((longlong)plVar26 + 100)) {
            uVar41 = *(ulonglong *)(*(longlong *)(*plVar29 + 0x20) + (longlong)puVar43 * 8);
            uVar14 = ((uint)(uVar41 >> 0x14) & 0xffff ^ (uint)(uVar41 >> 4)) * -0x7a143595;
            uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
            puVar20 = (uint *)plVar26[0xe];
            if ((uint *)plVar26[0xe] == (uint *)0x0) {
              puVar20 = puVar27;
            }
            uVar14 = puVar20[(int)plVar26[0xf] - 1U & (uVar14 >> 0x10 ^ uVar14)];
            if (uVar14 != 0xffffffff) {
              do {
                lVar18 = *local_2c8 + (longlong)(int)uVar14 * 0xd0;
                if (*(ulonglong *)(*local_2c8 + (longlong)(int)uVar14 * 0xd0) == uVar41) {
                  if ((lVar18 + 8 != 0 && lVar18 != 0) && (*(char *)(lVar18 + 0x68) == '\x01')) {
                    *(undefined1 *)(lVar18 + 0x68) = 0;
                    uVar7 = *(undefined8 *)(*(longlong *)(*plVar29 + 0x20) + (longlong)puVar43 * 8);
                    iVar34 = (int)(float)uStack_1f0;
                    lVar37 = (longlong)(int)(float)uStack_1f0;
                    uVar14 = (int)(float)uStack_1f0 + 1;
                    uStack_1f0._0_4_ = (float)uVar14;
                    local_290 = puVar43;
                    if ((uint)uStack_1f0._4_4_ < uVar14) {
                      FUN_146d8ae9e(local_1f8,iVar34);
                    }
                    *(undefined8 *)((longlong)_local_1f8 + lVar37 * 8) = uVar7;
                    uStack_168 = 0;
                    uStack_166 = 0;
                    uStack_178 = 0;
                    uStack_170 = 0;
                    local_16e = 0;
                    local_188 = ZEXT816(0);
                    _local_198 = ZEXT816(0);
                    _local_1a8 = ZEXT816(0);
                    lVar37 = 0;
                    do {
                      *(undefined4 *)(local_1a8 + lVar37 * 4) =
                           *(undefined4 *)(lVar18 + 8 + lVar37 * 4);
                      lVar37 = lVar37 + 1;
                    } while (lVar37 != 0x12);
                    uStack_160 = *(undefined1 *)(lVar18 + 0x50);
                    bStack_15f = *(byte *)(lVar18 + 0x51);
                    local_158 = 0;
                    local_150 = *(undefined4 *)(lVar18 + 0x60);
                    local_14c = *(float *)(lVar18 + 100);
                    local_148 = 1;
                    local_100 = 0;
                    uStack_f8 = 0;
                    uStack_10c = 0;
                    uStack_108 = 0;
                    local_120 = 0;
                    uStack_118 = 0;
                    local_130 = 0;
                    uStack_128 = 0;
                    local_140 = 0;
                    uStack_138 = 0;
                    uStack_114 = 0x80;
                    uStack_110 = 0xffffffff;
                    local_f0 = 0;
                    uVar5 = local_268._8_4_;
                    lVar18 = (longlong)(int)local_268._8_4_;
                    uVar14 = local_268._8_4_ + 1;
                    local_268._8_4_ = uVar14;
                    if ((uint)local_268._12_4_ < uVar14) {
                      FUN_146d8af24(local_268,uVar5);
                    }
                    FUN_146d88204(lVar18 * 0xc0 + local_268._0_8_);
                    FUN_146d838a6(local_1a8);
                    puVar12 = local_2c0;
                    puVar43 = local_290;
                    puVar27 = local_2b0;
                    plVar26 = local_2d8;
                    plVar29 = local_2a0;
                    if ((float)uStack_1f0 != 0.0) {
                      puVar44 = (undefined4 *)
                                ((longlong)(local_268._8_4_ + -1) * 0xc0 + local_268._0_8_);
                      iVar34 = (int)(float)uStack_1f0;
                      do {
                        uVar41 = *(ulonglong *)((longlong)_local_1f8 + -8 + (longlong)iVar34 * 8);
                        iVar34 = iVar34 + -1;
                        uStack_1f0._0_4_ = (float)iVar34;
                        if ((int)plVar26[7] != *(int *)((longlong)plVar26 + 100)) {
                          uVar14 = ((uint)(uVar41 >> 0x14) & 0xffff ^ (uint)(uVar41 >> 4)) *
                                   -0x7a143595;
                          uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
                          puVar12 = (uint *)plVar26[0xe];
                          if ((uint *)plVar26[0xe] == (uint *)0x0) {
                            puVar12 = puVar27;
                          }
                          uVar14 = puVar12[(int)plVar26[0xf] - 1U & (uVar14 >> 0x10 ^ uVar14)];
                          if (uVar14 != 0xffffffff) {
                            do {
                              lVar18 = *local_2c8 + (longlong)(int)uVar14 * 0xd0;
                              if (*(ulonglong *)(*local_2c8 + (longlong)(int)uVar14 * 0xd0) ==
                                  uVar41) goto LAB_1429a96d5;
                              uVar14 = *(uint *)(lVar18 + 200);
                            } while (uVar14 != 0xffffffff);
                          }
                        }
                        lVar18 = 0;
LAB_1429a96d5:
                        uVar41 = lVar18 + 8;
                        if (lVar18 == 0) {
                          uVar41 = 0;
                        }
                        puVar12 = (uint *)(uVar41 + 0x78);
                        uVar14 = *(uint *)(uVar41 + 0x90);
                        if (uVar14 == 0) {
                          uVar16 = 1;
                          local_2d0 = (longlong *)0x0;
                          iVar30 = 0;
                          uVar38 = 0;
                        }
                        else {
                          puVar43 = *(uint **)(uVar41 + 0x88);
                          if (*(uint **)(uVar41 + 0x88) == (uint *)0x0) {
                            puVar43 = puVar12;
                          }
                          uVar38 = *puVar43;
                          if (uVar38 == 0) {
                            iVar30 = uVar14 + 0x1e;
                            if (-1 < (int)(uVar14 - 1)) {
                              iVar30 = uVar14 - 1;
                            }
                            plVar29 = (longlong *)0x0;
                            plVar17 = (longlong *)(ulonglong)(uint)(iVar30 >> 5);
                            if (iVar30 >> 5 < 1) {
                              plVar17 = plVar29;
                            }
                            iVar30 = 0;
                            do {
                              if (plVar17 == plVar29) goto LAB_1429a9a8e;
                              iVar30 = iVar30 + 0x20;
                              uVar38 = puVar43[(longlong)plVar29 + 1];
                              plVar29 = (longlong *)((longlong)plVar29 + 1);
                            } while (uVar38 == 0);
                          }
                          else {
                            local_2d0 = (longlong *)0x0;
                            iVar30 = 0;
                            plVar29 = local_2d0;
                          }
                          local_2d0 = plVar29;
                          uVar16 = (ulonglong)(-uVar38 & uVar38);
                          uVar25 = uVar16 * 2 + 1;
                          lVar18 = 0x3f;
                          if (uVar25 != 0) {
                            for (; uVar25 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                            }
                          }
                          uVar38 = (iVar30 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                          if ((int)uVar14 <= (int)uVar38) {
                            uVar38 = uVar14;
                          }
                        }
                        if (uVar38 != uVar14) {
                          uVar22 = 0xffffffff;
                          local_2a8 = (longlong **)(ulonglong)uVar14;
                          local_298 = uVar41;
                          do {
                            if (*(char *)(*(longlong *)(uVar41 + 0x68) + 8 +
                                         (longlong)(int)uVar38 * 0x18) == '\x01') {
                              puVar2 = (ulonglong *)
                                       (*(longlong *)(uVar41 + 0x68) + (longlong)(int)uVar38 * 0x18)
                              ;
                              *(undefined1 *)(puVar2 + 1) = 0;
                              uVar25 = *puVar2;
                              if ((int)plVar26[7] != *(int *)((longlong)plVar26 + 100)) {
                                uVar14 = ((uint)(uVar25 >> 0x14) & 0xffff ^ (uint)(uVar25 >> 4)) *
                                         -0x7a143595;
                                uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
                                puVar27 = (uint *)plVar26[0xe];
                                if ((uint *)plVar26[0xe] == (uint *)0x0) {
                                  puVar27 = local_2b0;
                                }
                                uVar14 = puVar27[(int)plVar26[0xf] - 1U & (uVar14 >> 0x10 ^ uVar14)]
                                ;
                                if (uVar14 != 0xffffffff) {
                                  do {
                                    lVar18 = *local_2c8 + (longlong)(int)uVar14 * 0xd0;
                                    if (*(ulonglong *)(*local_2c8 + (longlong)(int)uVar14 * 0xd0) ==
                                        uVar25) goto LAB_1429a9835;
                                    uVar14 = *(uint *)(lVar18 + 200);
                                  } while (uVar14 != 0xffffffff);
                                }
                              }
                              lVar18 = 0;
LAB_1429a9835:
                              lVar37 = lVar18 + 8;
                              if (lVar18 == 0) {
                                lVar37 = 0;
                              }
                              if (*(char *)(lVar37 + 0x60) == '\x01') {
                                puVar33 = puVar44;
                                puVar36 = (undefined4 *)local_1a8;
                                for (lVar18 = 0x12; lVar18 != 0; lVar18 = lVar18 + -1) {
                                  *puVar36 = *puVar33;
                                  puVar33 = puVar33 + 1;
                                  puVar36 = puVar36 + 1;
                                }
                                uStack_160 = *(undefined1 *)(puVar44 + 0x12);
                                bStack_15f = *(byte *)((longlong)puVar44 + 0x49);
                                lVar18 = 0;
                                do {
                                  fVar48 = *(float *)(lVar37 + lVar18 * 4);
                                  if (fVar48 <= *(float *)(local_1a8 + lVar18 * 4)) {
                                    fVar48 = *(float *)(local_1a8 + lVar18 * 4);
                                  }
                                  *(float *)(local_1a8 + lVar18 * 4) = fVar48;
                                  lVar18 = lVar18 + 1;
                                } while (lVar18 != 0x12);
                                bStack_15f = bStack_15f | *(byte *)(lVar37 + 0x49);
                                uVar41 = local_298;
                                if ((((float)local_1a8 + fStack_1a4) *
                                     ((float)uStack_1a0 + uStack_1a0._4_4_) *
                                    ((float)local_198._0_4_ + (float)local_198._4_4_)) /
                                    ((float)puVar44[0x17] + *(float *)(lVar37 + 0x5c)) <
                                    DAT_14c75f10c) {
                                  lVar18 = 0;
                                  do {
                                    fVar48 = *(float *)(lVar37 + lVar18 * 4);
                                    if (fVar48 <= (float)puVar44[lVar18]) {
                                      fVar48 = (float)puVar44[lVar18];
                                    }
                                    puVar44[lVar18] = fVar48;
                                    lVar18 = lVar18 + 1;
                                  } while (lVar18 != 0x12);
                                  *(byte *)((longlong)puVar44 + 0x49) =
                                       *(byte *)((longlong)puVar44 + 0x49) |
                                       *(byte *)(lVar37 + 0x49);
                                  puVar44[0x17] = *(float *)(lVar37 + 0x5c) + (float)puVar44[0x17];
                                  iVar34 = (int)(float)uStack_1f0;
                                  lVar18 = (longlong)(int)(float)uStack_1f0;
                                  uVar14 = (int)(float)uStack_1f0 + 1;
                                  uStack_1f0._0_4_ = (float)uVar14;
                                  if ((uint)uStack_1f0._4_4_ < uVar14) {
                                    local_280 = CONCAT44(local_280._4_4_,iVar30);
                                    FUN_146d8ae9e(local_1f8,iVar34);
                                    plVar26 = local_2d8;
                                    iVar30 = (int)local_280;
                                  }
                                  *(ulonglong *)((longlong)_local_1f8 + lVar18 * 8) = uVar25;
                                  *(undefined1 *)(lVar37 + 0x60) = 0;
                                  uVar41 = local_298;
                                }
                              }
                            }
                            uVar22 = uVar22 & ~(uint)uVar16;
                            puVar27 = *(uint **)(uVar41 + 0x88);
                            if (*(uint **)(uVar41 + 0x88) == (uint *)0x0) {
                              puVar27 = puVar12;
                            }
                            uVar14 = *(uint *)(uVar41 + 0x90);
                            iVar34 = (int)local_2d0;
                            lVar18 = (longlong)iVar34;
                            uVar38 = puVar27[lVar18] & uVar22;
                            if (uVar38 == 0) {
                              iVar31 = uVar14 + 0x1e;
                              if (-1 < (int)(uVar14 - 1)) {
                                iVar31 = uVar14 - 1;
                              }
                              iVar31 = iVar31 >> 5;
                              iVar30 = iVar30 + 0x20;
                              iVar40 = iVar31;
                              if (iVar31 < iVar34) {
                                iVar40 = iVar34;
                              }
                              if (iVar34 < iVar31) {
                                lVar37 = 0;
                                do {
                                  uVar38 = puVar27[lVar18 + lVar37 + 1];
                                  if (uVar38 != 0) {
                                    local_2d0 = (longlong *)(ulonglong)(iVar34 + (int)lVar37 + 1);
                                    uVar22 = 0xffffffff;
                                    goto LAB_1429a9a06;
                                  }
                                  iVar30 = iVar30 + 0x20;
                                  lVar37 = lVar37 + 1;
                                } while (iVar40 - lVar18 != lVar37);
                                uVar22 = 0xffffffff;
                                lVar18 = (longlong)iVar40;
                              }
                              local_2d0 = (longlong *)(lVar18 + 1);
                              plVar26 = local_2d8;
                              uVar38 = uVar14;
                            }
                            else {
LAB_1429a9a06:
                              uVar16 = (ulonglong)(-uVar38 & uVar38);
                              uVar25 = uVar16 * 2 + 1;
                              lVar18 = 0x3f;
                              if (uVar25 != 0) {
                                for (; uVar25 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                                }
                              }
                              uVar38 = (iVar30 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                              if ((int)uVar14 <= (int)uVar38) {
                                uVar38 = uVar14;
                              }
                            }
                          } while (uVar38 != (uint)local_2a8);
                          puVar27 = local_2b0;
                          iVar34 = (int)(float)uStack_1f0;
                        }
LAB_1429a9a8e:
                        puVar12 = local_2c0;
                        puVar43 = local_290;
                        plVar29 = local_2a0;
                      } while (iVar34 != 0);
                    }
                  }
                  break;
                }
                uVar14 = *(uint *)(lVar18 + 200);
              } while (uVar14 != 0xffffffff);
            }
          }
          puVar43 = (uint *)((longlong)puVar43 + 1);
        } while (puVar43 != puVar12);
        if (_local_1f8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      uVar41 = (ulonglong)(int)local_268._8_4_;
      if (0 < (longlong)uVar41) {
        plVar26 = local_2d8 + 0xd;
        uVar16 = 0;
        do {
          lVar18 = uVar16 * 0xc0;
          if ((*(char *)(local_268._0_8_ + 0x49 + lVar18) == '\x01') &&
             (pfVar21 = (float *)(local_268._0_8_ + lVar18), _DAT_14c75f110 < pfVar21[0x17])) {
            if ((int)local_2d8[7] != *(int *)((longlong)local_2d8 + 100)) {
              uVar25 = *(ulonglong *)
                        (*(longlong *)(*local_2a0 + 0x20) + (longlong)(int)pfVar21[0x16] * 8);
              uVar14 = ((uint)(uVar25 >> 0x14) & 0xffff ^ (uint)(uVar25 >> 4)) * -0x7a143595;
              uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
              plVar29 = (longlong *)local_2d8[0xe];
              if ((longlong *)local_2d8[0xe] == (longlong *)0x0) {
                plVar29 = plVar26;
              }
              iVar34 = *(int *)((longlong)plVar29 +
                               (ulonglong)((int)local_2d8[0xf] - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4
                               );
              if (iVar34 != -1) {
                do {
                  lVar37 = *local_2c8 + (longlong)iVar34 * 0xd0;
                  if (*(ulonglong *)(*local_2c8 + (longlong)iVar34 * 0xd0) == uVar25)
                  goto LAB_1429a9bc3;
                  iVar34 = *(int *)(lVar37 + 200);
                } while (iVar34 != -1);
              }
            }
            lVar37 = 0;
LAB_1429a9bc3:
            lVar28 = lVar37 + 8;
            if (lVar37 == 0) {
              lVar28 = 0;
            }
            plVar29 = (longlong *)(lVar28 + 0x50);
            lVar37 = *(longlong *)(lVar28 + 0x50);
            if (lVar37 == 0) {
LAB_1429a9c1d:
              FUN_1429e6cb4(pfVar21,local_1a8);
              if (plVar29 == (longlong *)local_1a8) {
LAB_1429a9c61:
                if (_local_1a8 != (undefined8 *)0x0) {
                  LOCK();
                  piVar1 = (int *)(_local_1a8 + 1);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if ((*piVar1 == 0) && (*(int *)((longlong)_local_1a8 + 0xc) == 0)) {
                    (**(code **)*_local_1a8)(_local_1a8,1);
                  }
                }
              }
              else {
                puVar32 = (undefined8 *)*plVar29;
                *plVar29 = (longlong)_local_1a8;
                auVar52._8_8_ = 0;
                auVar52._0_8_ = uStack_1a0;
                _local_1a8 = auVar52 << 0x40;
                if (puVar32 != (undefined8 *)0x0) {
                  LOCK();
                  piVar1 = (int *)(puVar32 + 1);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if ((*piVar1 == 0) && (*(int *)((longlong)puVar32 + 0xc) == 0)) {
                    (**(code **)*puVar32)(puVar32,1);
                  }
                  goto LAB_1429a9c61;
                }
              }
              lVar37 = *local_288;
              *(int *)local_288 = (int)lVar37 + 1;
              *(int *)(lVar28 + 0xb8) = (int)lVar37;
            }
            else {
              if (*(char *)(lVar37 + 0x1c) != '\b') {
                lVar37 = 0;
              }
              fVar48 = (*pfVar21 + pfVar21[1]) * (pfVar21[2] + pfVar21[3]) *
                       (pfVar21[4] + pfVar21[5]);
              if ((*(float *)(lVar37 + 0x68) != fVar48) ||
                 (NAN(*(float *)(lVar37 + 0x68)) || NAN(fVar48))) goto LAB_1429a9c1d;
            }
            iVar34 = (int)local_2d8[1];
            *(uint *)(local_2d8 + 1) = iVar34 + 1U;
            if (*(uint *)((longlong)local_2d8 + 0xc) < iVar34 + 1U) {
              FUN_140619960(local_2d8,iVar34);
            }
            lVar37 = *plVar29;
            *(longlong *)(*local_2d8 + (longlong)iVar34 * 8) = lVar37;
            if (lVar37 != 0) {
              LOCK();
              *(int *)(lVar37 + 8) = *(int *)(lVar37 + 8) + 1;
              UNLOCK();
            }
            uVar5 = *(undefined4 *)(lVar28 + 0xb8);
            lVar37 = local_2d8[2];
            uVar6 = *(undefined4 *)(local_268._0_8_ + 0x58 + lVar18);
            plVar29 = &DAT_14c846480;
            plVar17 = (longlong *)local_1a8;
            for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
              *plVar17 = *plVar29;
              plVar29 = plVar29 + 1;
              plVar17 = plVar17 + 1;
            }
            local_2e8 = (undefined4 *)CONCAT44(local_2e8._4_4_,uVar5);
            FUN_14482d6a4(*(undefined8 *)(*local_2d8 + (longlong)((int)local_2d8[1] + -1) * 8),
                          local_1a8,uVar6,lVar37);
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar41);
        uVar41 = (ulonglong)(uint)local_268._8_4_;
      }
      FUN_146d8afb8(local_268._0_8_,uVar41 & 0xffffffff);
      param_1 = local_2d8;
      if (local_268._0_8_ != 0) {
        FUN_1400020a8();
        param_1 = local_2d8;
      }
    }
    goto LAB_1429a6bf2;
  }
  local_290 = (uint *)(local_2d8 + 8);
  uVar14 = *(uint *)(local_2d8 + 0xb);
  if (uVar14 == 0) {
    uVar25 = 1;
    uVar41 = 0;
    uVar16 = 0;
  }
  else {
    puVar12 = (uint *)local_2d8[10];
    if ((uint *)local_2d8[10] == (uint *)0x0) {
      puVar12 = local_290;
    }
    uVar38 = *puVar12;
    if (uVar38 == 0) {
      iVar34 = uVar14 + 0x1e;
      if (-1 < (int)(uVar14 - 1)) {
        iVar34 = uVar14 - 1;
      }
      uVar16 = 0;
      uVar41 = (ulonglong)(uint)(iVar34 >> 5);
      if (iVar34 >> 5 < 1) {
        uVar41 = uVar16;
      }
      iVar34 = 0;
      do {
        if (uVar41 == uVar16) goto LAB_1429a6e38;
        iVar34 = iVar34 + 0x20;
        uVar38 = puVar12[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar38 == 0);
    }
    else {
      iVar34 = 0;
      uVar16 = 0;
    }
    uVar25 = (ulonglong)(-uVar38 & uVar38);
    uVar41 = uVar25 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar41 != 0) {
      for (; uVar41 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar38 = (iVar34 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if ((int)uVar14 <= (int)uVar38) {
      uVar38 = uVar14;
    }
    uVar41 = (ulonglong)uVar38;
  }
  if ((uint)uVar41 == uVar14) {
LAB_1429a6e38:
    uVar45 = (ulonglong)uVar14;
  }
  else {
    uVar38 = 0xffffffff;
    do {
      *(undefined1 *)(local_2d8[6] + 0x50 + (longlong)(int)uVar41 * 0xd0) = 0;
      uVar38 = ~(uint)uVar25 & uVar38;
      puVar12 = (uint *)local_2d8[10];
      if ((uint *)local_2d8[10] == (uint *)0x0) {
        puVar12 = local_290;
      }
      uVar22 = *(uint *)(local_2d8 + 0xb);
      uVar45 = (ulonglong)uVar22;
      iVar30 = (int)uVar16;
      lVar18 = (longlong)iVar30;
      uVar39 = puVar12[lVar18] & uVar38;
      if (uVar39 == 0) {
        iVar31 = uVar22 + 0x1e;
        if (-1 < (int)(uVar22 - 1)) {
          iVar31 = uVar22 - 1;
        }
        iVar31 = iVar31 >> 5;
        iVar34 = iVar34 + 0x20;
        iVar40 = iVar31;
        if (iVar31 < iVar30) {
          iVar40 = iVar30;
        }
        if (iVar30 < iVar31) {
          lVar37 = 0;
          do {
            uVar39 = puVar12[lVar18 + lVar37 + 1];
            if (uVar39 != 0) {
              uVar16 = (ulonglong)(iVar30 + (int)lVar37 + 1);
              uVar38 = 0xffffffff;
              goto LAB_1429a7425;
            }
            iVar34 = iVar34 + 0x20;
            lVar37 = lVar37 + 1;
          } while (iVar40 - lVar18 != lVar37);
          uVar38 = 0xffffffff;
          lVar18 = (longlong)iVar40;
        }
        uVar16 = lVar18 + 1U & 0xffffffff;
        uVar41 = uVar45;
      }
      else {
LAB_1429a7425:
        uVar25 = (ulonglong)(-uVar39 & uVar39);
        uVar41 = uVar25 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar41 != 0) {
          for (; uVar41 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar39 = (iVar34 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        uVar41 = (ulonglong)uVar39;
        if ((int)uVar22 <= (int)uVar39) {
          uVar41 = uVar45;
        }
      }
    } while ((uint)uVar41 != uVar14);
  }
  auVar51 = _DAT_149931e80;
  local_2d0 = local_2d8 + 6;
  iVar34 = *(int *)(*param_2 + 0x28);
  plVar26 = local_2d8;
  if (0 < (longlong)iVar34) {
    plVar29 = local_2d8 + 0x29;
    local_2c8 = local_2d8 + 0xd;
    auVar52 = pmovsxbq(unaff_XMM7,0x302);
    auVar53 = pmovsxbq(unaff_XMM8,0x100);
    auVar54 = pmovsxbq(unaff_XMM11,0x404);
    uVar41 = 0;
    do {
      uVar16 = 0;
      if ((longlong)uVar41 < (longlong)*(int *)(param_3 + 0x10)) {
        uVar16 = uVar41 & 0xffffffff;
      }
      local_268._0_4_ = (int)uVar16;
      lVar18 = *(longlong *)(param_3 + 8);
      if (*(longlong *)(param_3 + 8) == 0) {
        lVar18 = param_3;
      }
      lVar18 = *(longlong *)(lVar18 + uVar16 * 8);
      if (((*(byte *)(lVar18 + 0x71 + (ulonglong)((*(byte *)(lVar18 + 8) & 3) == 0) * 8) & 1) != 0)
         && (local_218 = *(longlong **)(*(longlong *)(*local_2a0 + 0x20) + uVar41 * 8),
            local_218 != (longlong *)0x0)) {
        if ((int)plVar26[7] != *(int *)((longlong)plVar26 + 100)) {
          uVar14 = ((uint)((ulonglong)local_218 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_218 >> 4)) * -0x7a143595;
          uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
          plVar17 = (longlong *)plVar26[0xe];
          if ((longlong *)plVar26[0xe] == (longlong *)0x0) {
            plVar17 = local_2c8;
          }
          iVar30 = *(int *)((longlong)plVar17 +
                           (ulonglong)((int)plVar26[0xf] - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4);
          if (iVar30 != -1) {
            do {
              lVar18 = *local_2d0 + (longlong)iVar30 * 0xd0;
              if (*(longlong **)(*local_2d0 + (longlong)iVar30 * 0xd0) == local_218)
              goto LAB_1429a6f8f;
              iVar30 = *(int *)(lVar18 + 200);
            } while (iVar30 != -1);
          }
        }
        lVar18 = 0;
LAB_1429a6f8f:
        lVar37 = lVar18 + 8;
        if (lVar18 == 0) {
          lVar37 = 0;
        }
        local_219 = lVar37 != 0;
        if ((bool)local_219) {
          *(undefined1 *)(lVar37 + 0x60) = 0;
        }
        uStack_1b8 = 0;
        _auStack_1b6 = 0;
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        local_1be = 0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        _local_1f8 = ZEXT816(0);
        lVar18 = 3;
        auVar50 = auVar53;
        in_XMM1 = auVar52;
        do {
          auVar49 = auVar50 ^ auVar51;
          if (auVar49._0_8_ < -0x7fffffffffffffee) {
            *(undefined4 *)(local_208 + lVar18 * 4 + 4) = 0xff7fffff;
          }
          if (auVar49._8_8_ < -0x7fffffffffffffee) {
            *(undefined4 *)(local_208 + lVar18 * 4 + 8) = 0xff7fffff;
          }
          auVar49 = in_XMM1 ^ auVar51;
          if (auVar49._0_8_ < -0x7fffffffffffffee) {
            *(undefined4 *)(local_208 + lVar18 * 4 + 0xc) = 0xff7fffff;
          }
          if (auVar49._8_8_ < -0x7fffffffffffffee) {
            *(undefined4 *)(local_1f8 + lVar18 * 4) = 0xff7fffff;
          }
          lVar28 = auVar50._8_8_;
          auVar50._0_8_ = auVar50._0_8_ + auVar54._0_8_;
          auVar50._8_8_ = lVar28 + auVar54._8_8_;
          lVar28 = in_XMM1._8_8_;
          in_XMM1._0_8_ = in_XMM1._0_8_ + auVar54._0_8_;
          in_XMM1._8_8_ = lVar28 + auVar54._8_8_;
          lVar18 = lVar18 + 4;
        } while (lVar18 != 0x17);
        local_220 = 0;
        local_224 = 0;
        local_258 = local_2a8;
        local_250 = (undefined8 *)local_1f8;
        local_248 = &local_219;
        local_240 = local_268;
        local_230 = param_5;
        stack0xfffffffffffffe00 = &local_258;
        local_208._0_8_ = &LAB_146d87c34;
        puVar32 = &DAT_14c846480;
        puVar35 = (undefined8 *)local_1a8;
        for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
          *puVar35 = *puVar32;
          puVar32 = puVar32 + 1;
          puVar35 = puVar35 + 1;
        }
        local_2e0 = local_208;
        local_2e8 = &local_220;
        local_238 = plVar29;
        (**(code **)(*local_218 + 0x130))(local_218,local_1a8,uVar41 & 0xffffffff,&local_224);
        plVar26 = local_2d0;
        if ((local_219 == '\0') && (cStack_1af == '\x01')) {
          lVar18 = 0;
          do {
            *(float *)(local_1f8 + lVar18 * 4) = *(float *)(local_1f8 + lVar18 * 4) + 0.5;
            lVar18 = lVar18 + 1;
          } while (lVar18 != 6);
          lVar18 = 6;
          do {
            lVar37 = lVar18 * 4;
            fVar48 = *(float *)(local_1f8 + lVar37 + 4);
            fVar4 = *(float *)(local_1f8 + lVar37 + 8);
            fVar8 = *(float *)(local_1f8 + lVar37 + 0xc);
            lVar28 = lVar18 * 4;
            *(float *)(local_1f8 + lVar28) = *(float *)(local_1f8 + lVar37) * 0.70710677 + 0.5;
            *(float *)(local_1f8 + lVar28 + 4) = fVar48 * 0.70710677 + 0.5;
            *(float *)(local_1f8 + lVar28 + 8) = fVar4 * 0.70710677 + 0.5;
            *(float *)(local_1f8 + lVar28 + 0xc) = fVar8 * 0.70710677 + 0.5;
            lVar18 = lVar18 + 4;
          } while (lVar18 != 0x12);
          puVar44 = (undefined4 *)local_1f8;
          puVar32 = (undefined8 *)local_1a8;
          for (lVar18 = 0x12; lVar18 != 0; lVar18 = lVar18 + -1) {
            *(undefined4 *)puVar32 = *puVar44;
            puVar44 = puVar44 + 1;
            puVar32 = (undefined8 *)((longlong)puVar32 + 4);
          }
          uStack_160 = (undefined1)((ulonglong)_auStack_1b6 >> 0x30);
          bStack_15f = (byte)((ulonglong)_auStack_1b6 >> 0x38);
          local_158 = 0;
          local_150 = local_268._0_4_;
          in_XMM1 = ZEXT416((uint)((float)uStack_1f0 + uStack_1f0._4_4_));
          local_14c = ((float)local_1f8 + fStack_1f4) * ((float)uStack_1f0 + uStack_1f0._4_4_) *
                      ((float)local_1e8 + local_1e8._4_4_);
          local_148 = 1;
          local_100 = 0;
          uStack_f8 = 0;
          uStack_10c = 0;
          uStack_108 = 0;
          local_120 = 0;
          uStack_118 = 0;
          local_130 = 0;
          uStack_128 = 0;
          local_140 = 0;
          uStack_138 = 0;
          uStack_114 = 0x80;
          uStack_110 = 0xffffffff;
          local_f0 = 0;
          local_258 = &local_218;
          local_250 = (undefined8 *)local_1a8;
          FUN_146d87f1c(local_2d0);
          lVar37 = *plVar26 + (longlong)(int)local_208._0_4_ * 0xd0 + 8;
          FUN_146d838a6(local_1a8);
        }
        plVar26 = local_2d8;
        if (lVar37 != 0) {
          *(undefined1 *)(lVar37 + 0x48) = 1;
          *(undefined4 *)(lVar37 + 0x58) = local_268._0_4_;
        }
      }
      uVar41 = uVar41 + 1;
    } while (uVar41 != (longlong)iVar34);
    uVar45 = (ulonglong)*(uint *)(plVar26 + 0xb);
  }
  _local_1a8 = (undefined1  [16])0x0;
  _local_1f8 = (undefined1  [16])0x0;
  iVar34 = (int)uVar45;
  puVar12 = local_290;
  if (iVar34 == 0) {
    puVar27 = (uint *)0x0;
    uVar16 = 1;
    iVar30 = 0;
    uVar41 = 0;
  }
  else {
    puVar43 = (uint *)plVar26[10];
    if ((uint *)plVar26[10] == (uint *)0x0) {
      puVar43 = local_290;
    }
    uVar14 = *puVar43;
    if (uVar14 == 0) {
      iVar30 = iVar34 + 0x1e;
      if (-1 < iVar34 + -1) {
        iVar30 = iVar34 + -1;
      }
      puVar27 = (uint *)0x0;
      puVar20 = (uint *)(ulonglong)(uint)(iVar30 >> 5);
      if (iVar30 >> 5 < 1) {
        puVar20 = puVar27;
      }
      iVar30 = 0;
      do {
        if (puVar20 == puVar27) goto LAB_1429a7944;
        iVar30 = iVar30 + 0x20;
        uVar14 = puVar43[(longlong)puVar27 + 1];
        puVar27 = (uint *)((longlong)puVar27 + 1);
      } while (uVar14 == 0);
    }
    else {
      puVar27 = (uint *)0x0;
      iVar30 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar41 = uVar16 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar41 != 0) {
      for (; uVar41 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar14 = (iVar30 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    uVar41 = (ulonglong)uVar14;
    if (iVar34 <= (int)uVar14) {
      uVar41 = uVar45;
    }
  }
  if ((int)uVar41 != iVar34) {
    local_2a0 = plVar26 + 0xd;
    uVar14 = 0xffffffff;
    local_280 = uVar45;
    do {
      lVar18 = (longlong)(int)uVar41 * 0xd0;
      puVar32 = (undefined8 *)(*local_2d0 + lVar18);
      local_2a8 = (longlong **)CONCAT44(local_2a8._4_4_,iVar30);
      local_2c0 = (uint *)CONCAT44(local_2c0._4_4_,uVar14);
      local_2b0 = puVar27;
      local_298 = uVar16;
      if (*(char *)(*local_2d0 + 0x50 + lVar18) == '\0') {
        iVar34 = (int)(float)uStack_1a0;
        lVar18 = (longlong)(int)(float)uStack_1a0;
        uVar14 = (int)(float)uStack_1a0 + 1;
        uStack_1a0._0_4_ = (float)uVar14;
        if ((uint)uStack_1a0._4_4_ < uVar14) {
          FUN_146d885f4(local_1a8,iVar34);
          plVar26 = local_2d8;
        }
        *(undefined8 *)((longlong)_local_1a8 + lVar18 * 8) = *puVar32;
      }
      else {
        uStack_1f0._0_4_ = 0.0;
        if ((int)uStack_1f0._4_4_ < 0) {
          FUN_146d8867a(local_1f8,0);
          plVar26 = local_2d8;
        }
        local_2c8 = puVar32 + 0xe;
        iVar34 = *(int *)(puVar32 + 0x13);
        if (iVar34 == 0) {
          uVar16 = 1;
          uVar41 = 0;
          iVar31 = 0;
          iVar30 = 0;
        }
        else {
          puVar12 = (uint *)puVar32[0x12];
          if ((uint *)puVar32[0x12] == (uint *)0x0) {
            puVar12 = (uint *)(puVar32 + 0x10);
          }
          uVar14 = *puVar12;
          if (uVar14 == 0) {
            iVar30 = iVar34 + 0x1e;
            if (-1 < iVar34 + -1) {
              iVar30 = iVar34 + -1;
            }
            uVar41 = 0;
            uVar16 = (ulonglong)(uint)(iVar30 >> 5);
            if (iVar30 >> 5 < 1) {
              uVar16 = uVar41;
            }
            iVar31 = 0;
            do {
              if (uVar16 == uVar41) goto LAB_1429a75b8;
              iVar31 = iVar31 + 0x20;
              uVar14 = puVar12[uVar41 + 1];
              uVar41 = uVar41 + 1;
            } while (uVar14 == 0);
          }
          else {
            uVar41 = 0;
            iVar31 = 0;
          }
          uVar16 = (ulonglong)(-uVar14 & uVar14);
          uVar25 = uVar16 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar30 = (iVar31 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if (iVar34 <= iVar30) {
            iVar30 = iVar34;
          }
        }
        if (iVar30 != iVar34) {
          uVar14 = 0xffffffff;
          iVar40 = iVar34;
          do {
            if ((int)plVar26[7] != *(int *)((longlong)plVar26 + 100)) {
              lVar18 = *local_2c8;
              uVar25 = *(ulonglong *)(lVar18 + (longlong)iVar30 * 0x18);
              uVar38 = ((uint)(uVar25 >> 0x14) & 0xffff ^ (uint)(uVar25 >> 4)) * -0x7a143595;
              uVar38 = (uVar38 >> 0xd ^ uVar38) * -0x3d4d51cb;
              plVar29 = (longlong *)plVar26[0xe];
              if ((longlong *)plVar26[0xe] == (longlong *)0x0) {
                plVar29 = local_2a0;
              }
              iVar15 = *(int *)((longlong)plVar29 +
                               (ulonglong)((int)plVar26[0xf] - 1U & (uVar38 >> 0x10 ^ uVar38)) * 4);
              plVar26 = local_2d8;
              if (iVar15 != -1) {
                do {
                  lVar37 = *local_2d0 + (longlong)iVar15 * 0xd0;
                  if (*(ulonglong *)(*local_2d0 + (longlong)iVar15 * 0xd0) == uVar25) {
                    if (((lVar37 + 8U & 0xfffffffffffffff7) != 0) &&
                       (*(char *)(lVar37 + 0x50) == '\0')) {
                      plVar26 = (longlong *)(longlong)(int)(float)uStack_1f0;
                      uVar38 = (int)(float)uStack_1f0 + 1;
                      uStack_1f0._0_4_ = (float)uVar38;
                      if ((uint)uStack_1f0._4_4_ < uVar38) {
                        local_288 = plVar26;
                        FUN_146d885f4(local_1f8,plVar26);
                        plVar26 = local_288;
                      }
                      *(undefined8 *)((longlong)_local_1f8 + (longlong)plVar26 * 8) =
                           *(undefined8 *)(lVar18 + (longlong)iVar30 * 0x18);
                      iVar40 = *(int *)(puVar32 + 0x13);
                      plVar26 = local_2d8;
                    }
                    break;
                  }
                  iVar15 = *(int *)(lVar37 + 200);
                } while (iVar15 != -1);
              }
            }
            uVar14 = uVar14 & ~(uint)uVar16;
            puVar12 = (uint *)puVar32[0x12];
            if ((uint *)puVar32[0x12] == (uint *)0x0) {
              puVar12 = (uint *)(puVar32 + 0x10);
            }
            iVar30 = (int)uVar41;
            lVar18 = (longlong)iVar30;
            uVar38 = puVar12[lVar18] & uVar14;
            if (uVar38 == 0) {
              iVar15 = iVar40 + 0x1e;
              if (-1 < iVar40 + -1) {
                iVar15 = iVar40 + -1;
              }
              iVar15 = iVar15 >> 5;
              iVar31 = iVar31 + 0x20;
              iVar23 = iVar15;
              if (iVar15 < iVar30) {
                iVar23 = iVar30;
              }
              if (iVar30 < iVar15) {
                lVar37 = 0;
                do {
                  uVar38 = puVar12[lVar18 + lVar37 + 1];
                  if (uVar38 != 0) {
                    uVar41 = (ulonglong)(iVar30 + (int)lVar37 + 1);
                    uVar14 = 0xffffffff;
                    goto LAB_1429a783b;
                  }
                  iVar31 = iVar31 + 0x20;
                  lVar37 = lVar37 + 1;
                } while (iVar23 - lVar18 != lVar37);
                uVar14 = 0xffffffff;
                iVar30 = iVar23;
              }
              uVar41 = (ulonglong)(iVar30 + 1);
              plVar26 = local_2d8;
              iVar30 = iVar40;
            }
            else {
LAB_1429a783b:
              uVar16 = (ulonglong)(-uVar38 & uVar38);
              uVar25 = uVar16 * 2 + 1;
              lVar18 = 0x3f;
              if (uVar25 != 0) {
                for (; uVar25 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              iVar30 = (iVar31 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
              if (iVar40 <= iVar30) {
                iVar30 = iVar40;
              }
            }
          } while (iVar30 != iVar34);
        }
LAB_1429a75b8:
        uVar45 = local_280;
        puVar12 = local_290;
        lVar18 = (longlong)(int)(float)uStack_1f0;
        if (lVar18 != 0) {
          lVar37 = (longlong)_local_1f8;
          lVar28 = 0;
          do {
            FUN_146d886da(local_2c8,*(undefined8 *)(lVar37 + lVar28));
            lVar28 = lVar28 + 8;
            plVar26 = local_2d8;
          } while (lVar18 * 8 != lVar28);
        }
      }
      uVar14 = (uint)local_2c0 & ~(uint)local_298;
      puVar43 = (uint *)plVar26[10];
      if ((uint *)plVar26[10] == (uint *)0x0) {
        puVar43 = puVar12;
      }
      uVar38 = *(uint *)(plVar26 + 0xb);
      iVar34 = (int)local_2b0;
      lVar18 = (longlong)iVar34;
      uVar22 = puVar43[lVar18] & uVar14;
      puVar27 = local_2b0;
      iVar30 = (int)local_2a8;
      if (uVar22 == 0) {
        iVar31 = uVar38 + 0x1e;
        if (-1 < (int)(uVar38 - 1)) {
          iVar31 = uVar38 - 1;
        }
        iVar31 = iVar31 >> 5;
        iVar30 = (int)local_2a8 + 0x20;
        iVar40 = iVar31;
        if (iVar31 < iVar34) {
          iVar40 = iVar34;
        }
        if (iVar34 < iVar31) {
          lVar37 = 0;
          do {
            uVar22 = puVar43[lVar18 + lVar37 + 1];
            if (uVar22 != 0) {
              uVar14 = 0xffffffff;
              puVar27 = (uint *)(ulonglong)(iVar34 + (int)lVar37 + 1);
              goto LAB_1429a768d;
            }
            iVar30 = iVar30 + 0x20;
            lVar37 = lVar37 + 1;
          } while (iVar40 - lVar18 != lVar37);
          uVar14 = 0xffffffff;
          iVar34 = iVar40;
        }
        puVar27 = (uint *)(ulonglong)(iVar34 + 1);
        uVar16 = local_298;
        plVar26 = local_2d8;
        puVar12 = local_290;
        uVar22 = uVar38;
      }
      else {
LAB_1429a768d:
        uVar16 = (ulonglong)(-uVar22 & uVar22);
        uVar41 = uVar16 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar41 != 0) {
          for (; uVar41 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar22 = (iVar30 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if ((int)uVar38 <= (int)uVar22) {
          uVar22 = uVar38;
        }
      }
      uVar41 = (ulonglong)uVar22;
    } while (uVar22 != (uint)uVar45);
    lVar18 = (longlong)(int)(float)uStack_1a0;
    if (lVar18 != 0) {
      lVar37 = 0;
      do {
        FUN_146d88828(local_2d0);
        lVar37 = lVar37 + 8;
        plVar26 = local_2d8;
      } while (lVar18 * 8 != lVar37);
    }
  }
LAB_1429a7944:
  if (_local_1f8 != (undefined8 *)0x0) {
    FUN_1400020a8();
    plVar26 = local_2d8;
  }
  if (_local_1a8 != (longlong *)0x0) {
    FUN_1400020a8();
    plVar26 = local_2d8;
  }
  uStack_168 = 0;
  uStack_166 = 0;
  uStack_160 = 0;
  bStack_15f = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  local_16e = 0;
  local_188 = (undefined1  [16])0x0;
  _local_198 = (undefined1  [16])0x0;
  _local_1a8 = (undefined1  [16])0x0;
  auVar53 = pmovsxbq((undefined1  [16])0x0,0x302);
  auVar54 = pmovsxbq(in_XMM1,0x100);
  lVar18 = 3;
  auVar51 = pmovsxbq(in_XMM4,0x404);
  do {
    if (SUB168(auVar54 ^ _DAT_149931e80,0) < -0x7fffffffffffffee) {
      *(undefined4 *)(auStack_1b6 + lVar18 * 4 + 2) = 0xff7fffff;
    }
    if (SUB168(auVar54 ^ _DAT_149931e80,8) < -0x7fffffffffffffee) {
      *(undefined4 *)(auStack_1b6 + lVar18 * 4 + 6) = 0xff7fffff;
    }
    if (SUB168(auVar53 ^ _DAT_149931e80,0) < -0x7fffffffffffffee) {
      (&uStack_1ac)[lVar18] = 0xff7fffff;
    }
    if (SUB168(auVar53 ^ _DAT_149931e80,8) < -0x7fffffffffffffee) {
      *(undefined4 *)(local_1a8 + lVar18 * 4) = 0xff7fffff;
    }
    lVar37 = auVar54._8_8_;
    auVar54._0_8_ = auVar54._0_8_ + auVar51._0_8_;
    auVar54._8_8_ = lVar37 + auVar51._8_8_;
    lVar37 = auVar53._8_8_;
    auVar53._0_8_ = auVar53._0_8_ + auVar51._0_8_;
    auVar53._8_8_ = lVar37 + auVar51._8_8_;
    lVar18 = lVar18 + 4;
  } while (lVar18 != 0x17);
  plVar29 = plVar26 + 0x11;
  plVar17 = (longlong *)local_1a8;
  plVar19 = plVar29;
  for (lVar18 = 0x13; lVar18 != 0; lVar18 = lVar18 + -1) {
    *(int *)plVar19 = (int)*plVar17;
    plVar17 = (longlong *)((longlong)plVar17 + 4);
    plVar19 = (longlong *)((longlong)plVar19 + 4);
  }
  iVar34 = (int)plVar26[0xb];
  if (iVar34 == 0) {
    uVar16 = 1;
    uVar41 = 0;
    iVar31 = 0;
    iVar30 = 0;
  }
  else {
    puVar27 = (uint *)plVar26[10];
    if ((uint *)plVar26[10] == (uint *)0x0) {
      puVar27 = puVar12;
    }
    uVar14 = *puVar27;
    if (uVar14 == 0) {
      iVar30 = iVar34 + 0x1e;
      if (-1 < iVar34 + -1) {
        iVar30 = iVar34 + -1;
      }
      uVar41 = 0;
      uVar16 = (ulonglong)(uint)(iVar30 >> 5);
      if (iVar30 >> 5 < 1) {
        uVar16 = uVar41;
      }
      iVar31 = 0;
      do {
        if (uVar16 == uVar41) goto LAB_1429a7bf9;
        iVar31 = iVar31 + 0x20;
        uVar14 = puVar27[uVar41 + 1];
        uVar41 = uVar41 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar41 = 0;
      iVar31 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar25 = uVar16 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar30 = (iVar31 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar34 <= iVar30) {
      iVar30 = iVar34;
    }
  }
  if (iVar30 != iVar34) {
    if ((uint *)local_2d8[10] != (uint *)0x0) {
      puVar12 = (uint *)local_2d8[10];
    }
    iVar40 = iVar34 + 0x1e;
    if (-1 < iVar34 + -1) {
      iVar40 = iVar34 + -1;
    }
    lVar18 = local_2d8[6];
    iVar40 = iVar40 >> 5;
    uVar14 = 0xffffffff;
    do {
      if (*(char *)(lVar18 + 0x51 + (longlong)iVar30 * 0xd0) == '\x01') {
        lVar37 = (longlong)iVar30 * 0xd0 + lVar18;
        lVar28 = 0;
        do {
          fVar4 = *(float *)(lVar37 + 8 + lVar28 * 4);
          fVar48 = *(float *)((longlong)plVar29 + lVar28 * 4);
          if (fVar4 <= fVar48) {
            fVar4 = fVar48;
          }
          *(float *)((longlong)plVar29 + lVar28 * 4) = fVar4;
          lVar28 = lVar28 + 1;
        } while (lVar28 != 0x12);
        *(byte *)((longlong)local_2d8 + 0xd1) =
             *(byte *)((longlong)local_2d8 + 0xd1) | *(byte *)(lVar37 + 0x51);
      }
      uVar14 = uVar14 & ~(uint)uVar16;
      iVar30 = (int)uVar41;
      lVar37 = (longlong)iVar30;
      uVar38 = puVar12[lVar37] & uVar14;
      if (uVar38 == 0) {
        iVar15 = iVar40;
        if (iVar40 < iVar30) {
          iVar15 = iVar30;
        }
        if (iVar40 <= iVar30) break;
        lVar28 = 0;
        while( true ) {
          iVar31 = iVar31 + 0x20;
          uVar38 = puVar12[lVar37 + lVar28 + 1];
          if (uVar38 != 0) break;
          lVar28 = lVar28 + 1;
          if (iVar15 - lVar37 == lVar28) goto LAB_1429a7bf9;
        }
        uVar41 = (ulonglong)(iVar30 + (int)lVar28 + 1);
        uVar14 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar38 & uVar38);
      uVar25 = uVar16 * 2 + 1;
      lVar37 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar37 == 0; lVar37 = lVar37 + -1) {
        }
      }
      iVar30 = (iVar31 - ((uint)lVar37 ^ 0x3f)) + 0x3e;
    } while (iVar30 < iVar34);
  }
LAB_1429a7bf9:
  param_1 = local_2d8;
  if (*(char *)((longlong)local_2d8 + 0xd1) == '\0') goto LAB_1429a6bf2;
  lVar18 = local_2d8[0x1b];
  if (lVar18 == 0) {
LAB_1429a7c70:
    plVar26 = local_2d8 + 0x1b;
    FUN_1429e6cb4(plVar29,local_1a8);
    if (plVar26 == (longlong *)local_1a8) {
LAB_1429a7cbc:
      if (_local_1a8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(_local_1a8 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)_local_1a8 + 0xc) == 0)) {
          (**(code **)*_local_1a8)(_local_1a8,1);
        }
      }
    }
    else {
      puVar32 = (undefined8 *)*plVar26;
      *plVar26 = (longlong)_local_1a8;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uStack_1a0;
      _local_1a8 = auVar9 << 0x40;
      if (puVar32 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar32 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar32 + 0xc) == 0)) {
          (**(code **)*puVar32)(puVar32,1);
        }
        goto LAB_1429a7cbc;
      }
    }
    lVar18 = local_2d8[0x29];
    *(int *)(local_2d8 + 0x29) = (int)lVar18 + 1;
    *(int *)(local_2d8 + 0x28) = (int)lVar18;
  }
  else {
    lVar37 = 0;
    if (*(char *)(lVar18 + 0x1c) == '\b') {
      lVar37 = lVar18;
    }
    fVar48 = (*(float *)(local_2d8 + 0x11) + *(float *)((longlong)local_2d8 + 0x8c)) *
             (*(float *)(local_2d8 + 0x12) + *(float *)((longlong)local_2d8 + 0x94)) *
             (*(float *)(local_2d8 + 0x13) + *(float *)((longlong)local_2d8 + 0x9c));
    if ((*(float *)(lVar37 + 0x68) != fVar48) || (NAN(*(float *)(lVar37 + 0x68)) || NAN(fVar48)))
    goto LAB_1429a7c70;
  }
  iVar34 = (int)local_2d8[1];
  *(uint *)(local_2d8 + 1) = iVar34 + 1U;
  if (*(uint *)((longlong)local_2d8 + 0xc) < iVar34 + 1U) {
    FUN_140619960(local_2d8,iVar34);
  }
  lVar18 = local_2d8[0x1b];
  *(longlong *)(*local_2d8 + (longlong)iVar34 * 8) = lVar18;
  if (lVar18 != 0) {
    LOCK();
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
    UNLOCK();
  }
  lVar37 = local_2d8[0x28];
  lVar18 = local_2d8[2];
  puVar32 = &DAT_14c846480;
  puVar35 = (undefined8 *)local_1a8;
  for (lVar28 = 0xc; lVar28 != 0; lVar28 = lVar28 + -1) {
    *puVar35 = *puVar32;
    puVar32 = puVar32 + 1;
    puVar35 = puVar35 + 1;
  }
  local_2e8 = (undefined4 *)CONCAT44(local_2e8._4_4_,(int)lVar37);
  FUN_14482d6a4(*(undefined8 *)(*local_2d8 + (longlong)((int)local_2d8[1] + -1) * 8),local_1a8,0,
                lVar18);
  param_1 = local_2d8;
LAB_1429a6bf2:
  if (DAT_14c75f1a4 == '\x01') {
    lVar18 = param_1[0x10];
    if (lVar18 != 0) {
      param_1[0x10] = 0;
      FUN_1400baf84(lVar18);
      FUN_1400020a8(lVar18);
      param_1 = local_2d8;
    }
    FUN_14011854c(local_1a8,param_1[2],DAT_14c75f1ac,DAT_14c75f1a8);
    lVar18 = param_1[0x10];
    param_1[0x10] = (longlong)_local_1a8;
    if (lVar18 != 0) {
      FUN_1400baf84(lVar18);
      FUN_1400020a8(lVar18);
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001429a8f0f:
  iVar34 = *(int *)(lVar18 + 200);
  if (iVar34 == -1) goto LAB_1429a922e;
  goto LAB_1429a8efb;
LAB_1429a909c:
  while( true ) {
    lVar37 = (longlong)iVar34 * 0x28 + *(longlong *)((longlong)puVar12 + 0x20);
    lVar18 = -0xc;
    do {
      fVar48 = *(float *)(lVar37 + 0xc + lVar18);
      if ((*(float *)((longlong)&local_240 + lVar18) <= fVar48 &&
           fVar48 != *(float *)((longlong)&local_240 + lVar18)) ||
         (fVar48 = *(float *)((longlong)&local_250 + lVar18 + 4),
         pfVar21 = (float *)(lVar37 + 0x18 + lVar18), *pfVar21 <= fVar48 && fVar48 != *pfVar21))
      goto LAB_1429a9172;
      lVar18 = lVar18 + 4;
    } while (lVar18 != 0);
    iVar34 = *(int *)(lVar37 + 0x20);
    if (iVar34 == -1) break;
    uVar5 = local_208._8_4_;
    lVar18 = (longlong)(int)local_208._8_4_;
    uVar38 = local_208._8_4_ + 1;
    local_208._8_4_ = uVar38;
    if (uStack_1fc < uVar38) {
      FUN_14015d11a(local_208,uVar5);
    }
    *(undefined4 *)(local_208._0_8_ + lVar18 * 4) = *(undefined4 *)(lVar37 + 0x24);
    puVar12 = local_2c0;
  }
  lVar18 = (longlong)*(int *)(lVar37 + 0x18);
  if (*(int *)(lVar37 + 0x18) < *(int *)(lVar37 + 0x1c)) {
    do {
      local_2e8 = puVar44;
      FUN_1429aa002(&local_218,uVar16 & 0xffffffff,
                    *(undefined4 *)
                     (*(longlong *)puVar12 + 0x34 +
                     (longlong)*(int *)(*(longlong *)((longlong)puVar12 + 0x10) + lVar18 * 4) * 0x48
                     ),local_1a8);
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)(lVar37 + 0x1c));
  }
LAB_1429a9172:
  plVar29 = local_2d0;
  if ((longlong)(int)local_208._8_4_ == 0) goto LAB_1429a9199;
  iVar34 = *(int *)(local_208._0_8_ + -4 + (longlong)(int)local_208._8_4_ * 4);
  local_208._8_4_ = local_208._8_4_ + -1;
  goto LAB_1429a909c;
LAB_1429a9199:
  plVar26 = local_2d8;
  puVar12 = local_2c0;
  plVar17 = local_2a0;
  if ((char)uStack_1e0 == '\0') {
    uStack_1e0 = CONCAT71(uStack_1e0._1_7_,1);
    *(int *)(_local_1f8 + 4) = *(int *)(_local_1f8 + 4) + -1;
    if (local_1e8 != _local_1f8[2]) {
      FUN_14004673c();
    }
    *_local_1f8 = uStack_1f0;
    *(undefined8 *)((longlong)_local_1f8 + 0x18) = local_1d8;
    plVar26 = local_2d8;
    puVar12 = local_2c0;
    plVar17 = local_2a0;
  }
LAB_1429a922e:
  uVar16 = uVar16 + 1;
  if (uVar16 == uVar41) goto LAB_1429a92a3;
  goto LAB_1429a8e90;
}



// FUNCTION 1429aa002 FUN_1429aa002 body=527 status=ok
// SIG undefined FUN_1429aa002(void)

void FUN_1429aa002(longlong *param_1,int param_2,int param_3,longlong param_4,longlong param_5)

{
  double *pdVar1;
  double dVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined1 local_89;
  ulonglong *local_88 [2];
  double local_78;
  double local_70 [3];
  undefined1 local_54 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = *param_1;
  if (*(int *)(lVar6 + 0x38) != *(int *)(lVar6 + 100)) {
    uVar3 = *(ulonglong *)(*(longlong *)(*(longlong *)param_1[1] + 0x20) + (longlong)param_3 * 8);
    uVar4 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar5 = lVar6 + 0x68;
    if (*(longlong *)(lVar6 + 0x70) != 0) {
      lVar5 = *(longlong *)(lVar6 + 0x70);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar6 + 0x78) - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4)
    ;
    if (iVar7 != -1) {
      do {
        lVar5 = *(longlong *)(lVar6 + 0x30) + (longlong)iVar7 * 0xd0;
        if (*(ulonglong *)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar7 * 0xd0) == uVar3) {
          if (((lVar5 + 8U & 0xfffffffffffffff7) != 0) &&
             ((param_2 < param_3 || (*(char *)(lVar5 + 0x68) == '\0')))) {
            local_88[0] = (ulonglong *)(double)-*(float *)(lVar5 + 0xc);
            local_88[1] = (ulonglong *)(double)-*(float *)(lVar5 + 0x14);
            local_78 = (double)-*(float *)(lVar5 + 0x1c);
            local_70[0] = (double)*(float *)(lVar5 + 8);
            local_70[1] = (double)*(float *)(lVar5 + 0x10);
            local_70[2] = (double)*(float *)(lVar5 + 0x18);
            lVar6 = 0;
            goto LAB_1429aa178;
          }
          break;
        }
        iVar7 = *(int *)(lVar5 + 200);
      } while (iVar7 != -1);
    }
  }
  goto LAB_1429aa0ea;
  while (lVar6 = lVar6 + 1, lVar6 != 3) {
LAB_1429aa178:
    dVar2 = *(double *)(param_4 + lVar6 * 8);
    if ((local_70[lVar6] <= dVar2 && dVar2 != local_70[lVar6]) ||
       (pdVar1 = (double *)(param_4 + 0x18 + lVar6 * 8),
       *pdVar1 <= (double)local_88[lVar6] && (double)local_88[lVar6] != *pdVar1))
    goto LAB_1429aa0ea;
  }
  local_89 = 1;
  local_98 = uVar3;
  local_88[0] = &local_98;
  local_88[1] = (ulonglong *)&local_89;
  FUN_146d8893c(param_5 + 0x68,local_54,local_88);
  local_89 = 1;
  local_98 = *(ulonglong *)(*(longlong *)(*(longlong *)param_1[1] + 0x20) + (longlong)param_2 * 8);
  local_88[0] = &local_98;
  local_88[1] = (ulonglong *)&local_89;
  FUN_146d8893c(lVar5 + 0x70,local_54,local_88);
LAB_1429aa0ea:
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429aa212 FUN_1429aa212 body=69 status=ok
// SIG undefined FUN_1429aa212(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429aa212(void)

{
  _DAT_14c9933d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429aa254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9933d8,1);
  return;
}



// FUNCTION 1429aa257 FUN_1429aa257 body=69 status=ok
// SIG undefined FUN_1429aa257(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429aa257(void)

{
  _DAT_14c9933e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429aa299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9933e8,1);
  return;
}



// FUNCTION 1429aa29c FUN_1429aa29c body=69 status=ok
// SIG undefined FUN_1429aa29c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429aa29c(void)

{
  _DAT_14c9933f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429aa2de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9933f8,1);
  return;
}



// FUNCTION 1429aa2e1 FUN_1429aa2e1 body=69 status=ok
// SIG undefined FUN_1429aa2e1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429aa2e1(void)

{
  _DAT_14c993400 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429aa323. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993408,1);
  return;
}



// FUNCTION 1429aa326 FUN_1429aa326 body=69 status=ok
// SIG undefined FUN_1429aa326(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429aa326(void)

{
  _DAT_14c993410 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429aa368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993418,1);
  return;
}



// FUNCTION 1429aa36b FUN_1429aa36b body=69 status=ok
// SIG undefined FUN_1429aa36b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429aa36b(void)

{
  _DAT_14c993420 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429aa3ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993428,1);
  return;
}



// FUNCTION 1429aa3b0 FUN_1429aa3b0 body=69 status=ok
// SIG undefined FUN_1429aa3b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429aa3b0(void)

{
  _DAT_14c993430 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429aa3f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993438,1);
  return;
}



// FUNCTION 1429aa3f5 FUN_1429aa3f5 body=69 status=ok
// SIG undefined FUN_1429aa3f5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429aa3f5(void)

{
  _DAT_14c993440 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429aa437. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993448,1);
  return;
}



// FUNCTION 1429aa43a FUN_1429aa43a body=69 status=ok
// SIG undefined FUN_1429aa43a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429aa43a(void)

{
  _DAT_14c993450 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429aa47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993458,1);
  return;
}



// FUNCTION 1429aa47f FUN_1429aa47f body=69 status=ok
// SIG undefined FUN_1429aa47f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429aa47f(void)

{
  _DAT_14c993460 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429aa4c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993468,1);
  return;
}



// FUNCTION 1429aa50a FUN_1429aa50a body=69 status=ok
// SIG undefined FUN_1429aa50a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429aa50a(void)

{
  _DAT_14c993538 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429aa54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993540,1);
  return;
}



// FUNCTION 1429aa54f FUN_1429aa54f body=69 status=ok
// SIG undefined FUN_1429aa54f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429aa54f(void)

{
  _DAT_14c993548 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429aa591. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993550,1);
  return;
}



// FUNCTION 1429aa594 FUN_1429aa594 body=218 status=ok
// SIG undefined FUN_1429aa594(void)

undefined8 FUN_1429aa594(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar1 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      do {
        lVar6 = (longlong)iVar1 * 0x40;
        lVar2 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) goto LAB_1429aa667;
        iVar1 = *(int *)(lVar2 + 0x38);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_1429aa667:
  return *(undefined8 *)(lVar2 + 0x30);
}



// FUNCTION 1429aa6ba FUN_1429aa6ba body=77 status=ok
// SIG undefined FUN_1429aa6ba(void)

void FUN_1429aa6ba(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 4),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar1 - iVar3) * 4),
            (longlong)iVar3 << 2);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1429aa748 FUN_1429aa748 body=84 status=ok
// SIG undefined FUN_1429aa748(void)

void FUN_1429aa748(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar1 - iVar3) * 0x10 + *(longlong *)(param_1 + 8)),
            (longlong)iVar3 << 4);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1429aa79c FUN_1429aa79c body=84 status=ok
// SIG undefined FUN_1429aa79c(void)

void FUN_1429aa79c(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)((longlong)(int)param_2 * 0x20 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar1 - iVar3) * 0x20 + *(longlong *)(param_1 + 8)),
            (longlong)iVar3 << 5);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1429aa7f0 FUN_1429aa7f0 body=1140 status=ok
// SIG undefined FUN_1429aa7f0(void)

void FUN_1429aa7f0(void)

{
  FUN_14153156c(&DAT_14c9932b8,L"p.Chaos.Convex.SimplifyUnion",&DAT_14c9932b4,
                L"If true replace all the convexes within an implcit hierarchy with a simplified one (kdop18 tribox for now) for collision"
                ,0);
  atexit(FUN_1429a6958);
  FUN_141471170(&DAT_14c9932c8,L"p.Chaos.Convex.KinematicMode",&DAT_14c75f104,
                L"Simplification mode for the kinematic shapes (0: Single Convex, 1: One convex per children, 2: Merge connected children using the splitting threshold"
                ,0);
  atexit(FUN_1429a699d);
  FUN_141471170(&DAT_14c9932d8,L"p.Chaos.Convex.DynamicMode",&DAT_14c75f108,
                L"Simplification mode for the dynamic shapes (0: Single Convex, 1: One convex per children, 2: Merge connected children using the splitting threshold)"
                ,0);
  atexit(FUN_1429a69e2);
  FUN_1415c789c(&DAT_14c9932e8,L"p.Chaos.Convex.SplittingThreshold",&DAT_14c75f10c,
                L"Tribox volume / convex hull threshold to trigger a volume splitting during tree construction"
                ,0);
  atexit(FUN_1429a6a27);
  FUN_1415c789c(&DAT_14c9932f8,L"p.Chaos.Convex.MinVolume",&DAT_14c75f110,
                L"Min volume of the simplified convexes",0);
  atexit(FUN_1429a6a6c);
  FUN_14153156c(&DAT_14c993308,L"p.Chaos.Convex.EnableMerging",&DAT_14c75f114,
                L"Boolean to check if we are merging (bottom-up) or splitting (top-bottom) the convexes"
                ,0);
  atexit(FUN_1429a6ab1);
  FUN_14153156c(&DAT_14c993318,L"p.Chaos.Convex.UseDirectOverlap",&DAT_14c75f115,
                L"Boolean to check if we can use direct overlap test against the bounds",0);
  atexit(FUN_1429a6af6);
  FUN_14153156c(&DAT_14c9933d0,L"p.Chaos.DebugDraw.Deformable.TetrahedralParticle",&DAT_14c75f118,
                L"Debug draw the deformable solvers tetrahedron. [def: false]",0);
  atexit(FUN_1429aa212);
  FUN_14153156c(&DAT_14c9933e0,L"p.Chaos.DebugDraw.Deformable.KinematicParticle",&DAT_14c75f119,
                L"Debug draw the deformables kinematic particles. [def: false]",0);
  atexit(FUN_1429aa257);
  FUN_14153156c(&DAT_14c9933f0,L"p.Chaos.DebugDraw.Deformable.TransientKinematicParticle",
                &DAT_14c75f11a,
                L"Debug draw the deformables transient kinematic particles. [def: false]",0);
  atexit(FUN_1429aa29c);
  FUN_14153156c(&DAT_14c993400,L"p.Chaos.DebugDraw.Deformable.RigidCollisionGeometry",&DAT_14c75f11b
                ,L"Debug draw the deformable solvers rigid collision geometry. [def: false]",0);
  atexit(FUN_1429aa2e1);
  FUN_1415c789c(&DAT_14c993410,L"p.Chaos.DebugDraw.Deformable.ParticleRadius",&DAT_14c75f11c,
                L"Drawn kinematic particle radius. [def: 5]",0);
  atexit(FUN_1429aa326);
  FUN_141471170(&DAT_14c993420,L"p.Chaos.Deformable.XPBDBatchSize",&DAT_14c75f120,
                L"Batch size for physics parallel for. [def: 5]",0);
  atexit(FUN_1429aa36b);
  FUN_141471170(&DAT_14c993430,L"p.Chaos.Deformable.XPBDBatchThreshold",&DAT_14c75f124,
                L"Batch threshold for physics parallel for. [def: 5]",0);
  atexit(FUN_1429aa3b0);
  FUN_1415c789c(&DAT_14c993440,L"p.Chaos.Deformable.XPBDWeakConstraintLineWidth",&DAT_14c75f128,
                L"Line width for visualizing the double bindings in XPBD weak constraints. [def: 5]"
                ,0);
  atexit(FUN_1429aa3f5);
  FUN_1415c789c(&DAT_14c993450,L"p.Chaos.Deformable.XPBDWeakConstraintParticleWidth",&DAT_14c75f12c,
                L"Line width for visualizing the double bindings in XPBD weak constraints. [def: 20]"
                ,0);
  atexit(FUN_1429aa43a);
  FUN_14153156c(&DAT_14c993460,L"p.Chaos.Deformable.XPBDWeakConstraintEnableDraw",&DAT_14c75f130,
                L"Debug draw the double bindings in XPBD weak constraints. [def: false]",0);
  atexit(FUN_1429aa47f);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c993470);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c993470,4000);
  atexit((_func_5014 *)&LAB_1429aa4c4);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c993498);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c993498,4000);
  atexit((_func_5014 *)&LAB_1429aa4d2);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c9934c0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c9934c0,4000);
  atexit((_func_5014 *)&LAB_1429aa4e0);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c9934e8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c9934e8,4000);
  atexit((_func_5014 *)&LAB_1429aa4ee);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c993510);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c993510,4000);
  atexit((_func_5014 *)&LAB_1429aa4fc);
  FUN_141471170(&DAT_14c993538,L"p.Chaos.Deformable.GSParallelMax",&DAT_14c75f134,
                L"Minimal number of particles to process in parallel for Gauss Seidel constraints. [def: 100]"
                ,0);
  atexit(FUN_1429aa50a);
  FUN_1415c789c(&DAT_14c993548,L"p.Chaos.Deformable.GSMaxDxRatio",&DAT_14c75f138,
                L"Max size for dx in each iteration for Gauss Seidel constraints. [def: .01]",0);
  atexit(FUN_1429aa54f);
  return;
}



// FUNCTION 1429aac64 FUN_1429aac64 body=69 status=ok
// SIG undefined FUN_1429aac64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429aac64(void)

{
  _DAT_14c9935e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429aaca6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9935e8,1);
  return;
}



// FUNCTION 1429aaca9 FUN_1429aaca9 body=69 status=ok
// SIG undefined FUN_1429aaca9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429aaca9(void)

{
  _DAT_14c9935f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429aaceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9935f8,1);
  return;
}



// FUNCTION 1429aacee FUN_1429aacee body=112 status=ok
// SIG undefined FUN_1429aacee(void)

void FUN_1429aacee(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  (**(code **)(*param_1 + 0x20))();
  iVar2 = (int)param_1[0x12];
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(param_1[0x11] + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1,param_1 + 1);
        iVar2 = (**(code **)(**(longlong **)(param_1[0x11] + lVar3 * 8) + 0x10))();
        *(int *)(param_1 + 0x13) = (int)param_1[0x13] + iVar2;
        iVar2 = (int)param_1[0x12];
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// FUNCTION 1429aad5e FUN_1429aad5e body=161 status=ok
// SIG undefined FUN_1429aad5e(void)

void FUN_1429aad5e(longlong param_1,undefined4 param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x90);
  if (0 < iVar5) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar4 * 8);
      if (plVar1 != (longlong *)0x0) {
        iVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
        iVar5 = param_3 - iVar3;
        if (param_3 < iVar3) {
          iVar2 = iVar3;
          if (param_4 < iVar3) {
            iVar2 = param_4;
          }
          (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3,iVar2);
        }
        if (param_4 - iVar3 == 0 || param_4 < iVar3) {
          return;
        }
        param_3 = iVar5;
        if (iVar5 < 1) {
          param_3 = 0;
        }
        iVar5 = *(int *)(param_1 + 0x90);
        param_4 = param_4 - iVar3;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar5);
  }
  return;
}



// FUNCTION 1429aae00 FUN_1429aae00 body=161 status=ok
// SIG undefined FUN_1429aae00(void)

void FUN_1429aae00(longlong param_1,undefined4 param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x90);
  if (0 < iVar5) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar4 * 8);
      if (plVar1 != (longlong *)0x0) {
        iVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
        iVar5 = param_3 - iVar3;
        if (param_3 < iVar3) {
          iVar2 = iVar3;
          if (param_4 < iVar3) {
            iVar2 = param_4;
          }
          (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,iVar2);
        }
        if (param_4 - iVar3 == 0 || param_4 < iVar3) {
          return;
        }
        param_3 = iVar5;
        if (iVar5 < 1) {
          param_3 = 0;
        }
        iVar5 = *(int *)(param_1 + 0x90);
        param_4 = param_4 - iVar3;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar5);
  }
  return;
}



// FUNCTION 1429aaea2 FUN_1429aaea2 body=398 status=ok
// SIG undefined FUN_1429aaea2(void)

void FUN_1429aaea2(longlong param_1,double param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  float *pfVar6;
  float fVar7;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    plVar2 = *(longlong **)(param_1 + 8);
    fVar7 = 1.0 / (float)param_2;
    uVar5 = 0;
    do {
      if ((param_2 != 0.0) || (NAN(param_2))) {
        if (1.1754944e-38 < *(float *)(*plVar2 + 0x134 + uVar5 * 0x160)) {
          pfVar6 = (float *)(*plVar2 + uVar5 * 0x160);
          pfVar6[8] = (*pfVar6 - pfVar6[0x4e]) * fVar7 + pfVar6[8];
          pfVar6[9] = (pfVar6[1] - pfVar6[0x4f]) * fVar7 + pfVar6[9];
          pfVar6[10] = (pfVar6[2] - pfVar6[0x50]) * fVar7 + pfVar6[10];
          pfVar6[0xc] = (pfVar6[4] - pfVar6[0x51]) * fVar7 + pfVar6[0xc];
          pfVar6[0xd] = (pfVar6[5] - pfVar6[0x52]) * fVar7 + pfVar6[0xd];
          pfVar6[0xe] = (pfVar6[6] - pfVar6[0x53]) * fVar7 + pfVar6[0xe];
        }
      }
      uVar4 = (int)uVar5 + 1;
      plVar2 = plVar2 + (0xff < uVar4);
      uVar5 = (ulonglong)uVar4;
      if (0xff < uVar4) {
        uVar5 = 0;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x90);
  if (0 < iVar1) {
    lVar3 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar3 * 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x58))(plVar2,SUB84(param_2,0));
        iVar1 = *(int *)(param_1 + 0x90);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
  return;
}



// FUNCTION 1429ab030 FUN_1429ab030 body=115 status=ok
// SIG undefined FUN_1429ab030(void)

void FUN_1429ab030(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  cVar1 = *(char *)(param_1 + 0xb1);
  if ('\0' < cVar1) {
    iVar3 = *(int *)(param_1 + 0xa8);
    iVar4 = 0;
    do {
      if (0 < iVar3) {
        lVar5 = 0;
        do {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + lVar5 * 8);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x70))(plVar2,param_2,iVar4,(int)cVar1);
            iVar3 = *(int *)(param_1 + 0xa8);
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < iVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != cVar1);
  }
  return;
}



// FUNCTION 1429ab0a4 FUN_1429ab0a4 body=115 status=ok
// SIG undefined FUN_1429ab0a4(void)

void FUN_1429ab0a4(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  cVar1 = *(char *)(param_1 + 0xb2);
  if ('\0' < cVar1) {
    iVar3 = *(int *)(param_1 + 0xa8);
    iVar4 = 0;
    do {
      if (0 < iVar3) {
        lVar5 = 0;
        do {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + lVar5 * 8);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x78))(plVar2,param_2,iVar4,(int)cVar1);
            iVar3 = *(int *)(param_1 + 0xa8);
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < iVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != cVar1);
  }
  return;
}



// FUNCTION 1429ab117 FUN_1429ab117 body=69 status=ok
// SIG undefined FUN_1429ab117(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ab117(void)

{
  _DAT_14c993608 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ab159. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993610,1);
  return;
}



// FUNCTION 1429ab15c FUN_1429ab15c body=392 status=ok
// SIG undefined FUN_1429ab15c(void)

void FUN_1429ab15c(longlong *param_1,undefined4 param_2,int param_3,double param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [16];
  longlong local_70;
  int local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = param_1[5];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = param_1[4];
    lVar5 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar5) + 0x20))();
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  if (9.99999993922529e-09 < param_4) {
    FUN_1429ab2e6(param_1,param_2,param_4);
  }
  if (0 < param_3) {
    iVar4 = 1;
    do {
      FUN_1429ab96a(param_1,param_2,(double)iVar4 / (double)param_3);
      bVar6 = iVar4 != param_3;
      iVar4 = iVar4 + 1;
    } while (bVar6);
  }
  FUN_14488ddfe(local_80,*param_1 + 0x610);
  if (local_70 != 0) {
    do {
      lVar3 = (longlong)local_68;
      if (*(char *)(*(longlong *)(local_70 + 0x2c0) + 0xb + lVar3 * 0x10) == '\x04') {
        lVar2 = *(longlong *)(local_70 + 0x308);
        *(undefined8 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0;
        puVar1 = (undefined8 *)(lVar2 + lVar3 * 0x18);
        *puVar1 = 0;
        puVar1[1] = 0;
        lVar3 = *(longlong *)(local_70 + 800);
        *(undefined8 *)(lVar3 + 0x10 + (longlong)local_68 * 0x18) = 0;
        puVar1 = (undefined8 *)(lVar3 + (longlong)local_68 * 0x18);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      FUN_144b02030(local_80);
    } while (local_70 != 0);
  }
  lVar3 = param_1[5];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = param_1[4];
    lVar5 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar5) + 0x28))();
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429ab2e6 FUN_1429ab2e6 body=1666 status=ok
// SIG undefined FUN_1429ab2e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ab2e6(longlong *param_1,double param_2,double param_3)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  float fVar22;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  float fVar23;
  float fVar25;
  undefined1 unaff_XMM15 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_188 [32];
  float local_168;
  float local_164;
  double local_160;
  float local_158;
  float local_154;
  double local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  uint local_134;
  uint local_130;
  uint local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_110 [16];
  longlong local_100;
  int local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_160 = param_3;
  FUN_14488ddfe(local_110,*param_1 + 0x610);
  if (local_100 != 0) {
    local_150 = (param_2 - local_160) / param_2;
    local_164 = (float)local_150;
    local_168 = 1.0 - local_164;
    do {
      lVar9 = (longlong)local_f8;
      if (*(char *)(*(longlong *)(local_100 + 0x2c0) + 0xb + lVar9 * 0x10) == '\x04') {
        lVar11 = *(longlong *)(local_100 + 0x28);
        lVar7 = (longlong)
                *(int *)(*(longlong *)(*(longlong *)(local_100 + 0x98) + lVar9 * 8) + 0x10);
        lVar8 = *(longlong *)(param_1[2] + 8);
        dVar2 = *(double *)(lVar8 + 0x10 + lVar7 * 0x18);
        dVar3 = *(double *)(lVar8 + lVar7 * 0x18);
        dVar4 = *(double *)(lVar8 + 8 + lVar7 * 0x18);
        *(double *)(lVar11 + lVar9 * 0x18) =
             (*(double *)(lVar11 + lVar9 * 0x18) - dVar3) * local_150 + dVar3;
        *(double *)(lVar11 + 8 + lVar9 * 0x18) =
             (*(double *)(lVar11 + 8 + lVar9 * 0x18) - dVar4) * local_150 + dVar4;
        *(double *)(lVar11 + 0x10 + lVar9 * 0x18) =
             (*(double *)(lVar11 + 0x10 + lVar9 * 0x18) - dVar2) * local_150 + dVar2;
        lVar8 = (longlong)local_f8;
        lVar11 = *(longlong *)(local_100 + 0x48);
        lVar10 = lVar8 * 0x10;
        fVar14 = *(float *)(lVar11 + lVar10);
        lVar9 = *(longlong *)(param_1[3] + 8);
        lVar7 = (longlong)
                *(int *)(*(longlong *)(*(longlong *)(local_100 + 0x98) + lVar8 * 8) + 0x10) * 0x20;
        fVar19 = (float)*(double *)(lVar9 + 0x18 + lVar7);
        fVar16 = *(float *)(lVar11 + 4 + lVar10);
        fVar22 = (float)*(double *)(lVar9 + 0x10 + lVar7);
        fVar23 = *(float *)(lVar11 + 8 + lVar10);
        fVar21 = (float)*(double *)(lVar9 + 8 + lVar7);
        fVar25 = *(float *)(lVar11 + 0xc + lVar10);
        dVar2 = *(double *)(lVar9 + lVar7);
        auVar24._4_12_ = unaff_XMM15._4_12_;
        fVar12 = fVar19 * fVar25 + fVar22 * fVar23 + (float)dVar2 * fVar14 + fVar16 * fVar21;
        fVar20 = *(float *)((longlong)&DAT_149935368 + (ulonglong)(0.0 <= fVar12) * 4);
        fVar12 = fVar12 * fVar20;
        fVar20 = fVar20 * local_164;
        fVar13 = local_168;
        if (fVar12 < 0.9999) {
          fVar13 = fVar12;
          if (1.0 <= fVar12) {
            fVar13 = 1.0;
          }
          local_154 = fVar14;
          fVar14 = acosf((float)(-(uint)(fVar12 < -1.0) & 0xbf800000 |
                                ~-(uint)(fVar12 < -1.0) & (uint)fVar13));
          local_158 = fVar14;
          fVar13 = sinf(fVar14);
          fVar14 = sinf(local_168 * fVar14);
          fVar20 = sinf(fVar20 * local_158);
          fVar20 = fVar20 * (1.0 / fVar13);
          lVar8 = (longlong)local_f8;
          lVar11 = *(longlong *)(local_100 + 0x48);
          fVar13 = fVar14 * (1.0 / fVar13);
          fVar14 = local_154;
        }
        auVar24._0_4_ = (float)dVar2 * fVar13 + fVar14 * fVar20;
        auVar5._4_4_ = unaff_XMM13_Db;
        auVar5._0_4_ = fVar21 * fVar13 + fVar16 * fVar20;
        auVar5._8_4_ = unaff_XMM13_Dc;
        auVar5._12_4_ = unaff_XMM13_Dd;
        auVar24 = insertps(auVar24,auVar5,0x10);
        auVar6._4_4_ = unaff_XMM14_Db;
        auVar6._0_4_ = fVar22 * fVar13 + fVar23 * fVar20;
        auVar6._8_4_ = unaff_XMM14_Dc;
        auVar6._12_4_ = unaff_XMM14_Dd;
        auVar24 = insertps(auVar24,auVar6,0x20);
        unaff_XMM15 = insertps(auVar24,ZEXT416((uint)(fVar19 * fVar13 + fVar25 * fVar20)),0x30);
        fVar23 = unaff_XMM15._0_4_;
        fVar25 = unaff_XMM15._4_4_;
        fVar20 = unaff_XMM15._8_4_;
        fVar13 = unaff_XMM15._12_4_;
        fVar14 = fVar23 * fVar23 + fVar25 * fVar25;
        fVar16 = fVar20 * fVar20 + fVar13 * fVar13;
        auVar17._0_4_ = fVar16 + fVar14;
        auVar17._4_4_ = fVar16 + fVar14;
        auVar17._8_4_ = fVar14 + fVar16;
        auVar17._12_4_ = fVar14 + fVar16;
        auVar15._4_4_ = -(uint)(1e-08 <= auVar17._4_4_);
        auVar15._0_4_ = -(uint)(1e-08 <= auVar17._0_4_);
        auVar15._8_4_ = -(uint)(1e-08 <= auVar17._8_4_);
        auVar15._12_4_ = -(uint)(1e-08 <= auVar17._12_4_);
        auVar24 = sqrtps(auVar17,auVar17);
        auVar24 = divps(_DAT_1499314a0,auVar24);
        auVar18._0_4_ = auVar24._0_4_ * fVar23;
        auVar18._4_4_ = auVar24._4_4_ * fVar25;
        auVar18._8_4_ = auVar24._8_4_ * fVar20;
        auVar18._12_4_ = auVar24._12_4_ * fVar13;
        auVar24 = blendvps(_DAT_149932320,auVar18,auVar15);
        *(undefined1 (*) [16])(lVar11 + lVar8 * 0x10) = auVar24;
        if ((char)param_1[0x44] == '\x01') {
          lVar9 = *(longlong *)(local_100 + 0x278);
          lVar8 = (longlong)local_f8 * 0xc;
          lVar11 = *(longlong *)(local_100 + 0x560);
          fVar14 = *(float *)(lVar11 + 4 + lVar8);
          fVar16 = *(float *)(lVar11 + 8 + lVar8);
          *(float *)(lVar9 + lVar8) =
               (*(float *)(lVar9 + lVar8) - *(float *)(lVar11 + lVar8)) * local_164 +
               *(float *)(lVar11 + lVar8);
          *(float *)(lVar9 + 4 + lVar8) =
               (*(float *)(lVar9 + 4 + lVar8) - fVar14) * local_164 + fVar14;
          *(float *)(lVar9 + 8 + lVar8) =
               (*(float *)(lVar9 + 8 + lVar8) - fVar16) * local_164 + fVar16;
          lVar9 = *(longlong *)(local_100 + 0x290);
          lVar8 = (longlong)local_f8 * 0xc;
          lVar11 = *(longlong *)(local_100 + 0x578);
          fVar14 = *(float *)(lVar11 + 4 + lVar8);
          fVar16 = *(float *)(lVar11 + 8 + lVar8);
          *(float *)(lVar9 + lVar8) =
               (*(float *)(lVar9 + lVar8) - *(float *)(lVar11 + lVar8)) * local_164 +
               *(float *)(lVar11 + lVar8);
          *(float *)(lVar9 + 4 + lVar8) =
               (*(float *)(lVar9 + 4 + lVar8) - fVar14) * local_164 + fVar14;
          *(float *)(lVar9 + 8 + lVar8) =
               (*(float *)(lVar9 + 8 + lVar8) - fVar16) * local_164 + fVar16;
        }
      }
      FUN_144b02030(local_110);
    } while (local_100 != 0);
  }
  FUN_146d980ac(local_110,*param_1 + 0x658);
  if (local_100 != 0) {
    fVar14 = (float)local_160;
    do {
      lVar8 = (longlong)local_f8;
      lVar9 = *(longlong *)(local_100 + 0x278);
      fVar16 = *(float *)(lVar9 + 8 + lVar8 * 0xc);
      fVar23 = *(float *)(lVar9 + 4 + lVar8 * 0xc);
      lVar11 = *(longlong *)(local_100 + 0x28);
      *(double *)(lVar11 + lVar8 * 0x18) =
           *(double *)(lVar11 + lVar8 * 0x18) - (double)*(float *)(lVar9 + lVar8 * 0xc) * local_160;
      *(double *)(lVar11 + 8 + lVar8 * 0x18) =
           *(double *)(lVar11 + 8 + lVar8 * 0x18) - (double)fVar23 * local_160;
      *(double *)(lVar11 + 0x10 + lVar8 * 0x18) =
           *(double *)(lVar11 + 0x10 + lVar8 * 0x18) - (double)fVar16 * local_160;
      lVar11 = (longlong)local_f8;
      lVar9 = *(longlong *)(local_100 + 0x290);
      local_12c = *(uint *)(lVar9 + 8 + lVar11 * 0xc) ^ 0x80000000;
      local_130 = *(uint *)(lVar9 + 4 + lVar11 * 0xc) ^ 0x80000000;
      local_134 = *(uint *)(lVar9 + lVar11 * 0xc) ^ 0x80000000;
      lVar9 = *(longlong *)(local_100 + 0x48);
      puVar1 = (undefined8 *)(lVar9 + lVar11 * 0x10);
      local_148 = *puVar1;
      uStack_140 = puVar1[1];
      FUN_146c94058(&local_128,&local_148,&local_134,fVar14);
      puVar1 = (undefined8 *)(lVar9 + lVar11 * 0x10);
      *puVar1 = local_128;
      puVar1[1] = uStack_120;
      FUN_146d8d3b0(local_110);
    } while (local_100 != 0);
  }
  if ((local_e0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429ab96a FUN_1429ab96a body=158 status=ok
// SIG undefined FUN_1429ab96a(void)

void FUN_1429ab96a(undefined8 param_1,double param_2,undefined4 param_3)

{
  FUN_1429aba08();
  FUN_1429accdc(param_1,param_2,param_3);
  FUN_1429ae1ce(param_1,param_2);
  if (0.0 < param_2) {
    FUN_1429ae24c(param_1,param_2);
    FUN_1429ae3b8(param_1,param_2);
    FUN_1429ae462(param_1,param_2);
    FUN_1429ae4de(param_1,param_2);
    FUN_1429ae55a(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1429aba08 FUN_1429aba08 body=4819 status=ok
// SIG undefined FUN_1429aba08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429aba08(longlong *param_1,double param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auStack_4b8 [32];
  double *local_498;
  double local_488;
  double local_480;
  double local_478;
  double dStack_470;
  double local_468;
  double dStack_460;
  undefined1 local_458 [16];
  double local_448;
  double dStack_440;
  undefined1 local_438 [24];
  double local_420;
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  undefined8 uStack_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  double local_378;
  double dStack_370;
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  double local_348;
  double dStack_340;
  double local_338;
  ulonglong uStack_330;
  double local_328;
  ulonglong uStack_320;
  double local_318;
  ulonglong uStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double local_2d0;
  double local_2c8;
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278 [16];
  undefined8 local_268;
  undefined8 uStack_260;
  double local_250;
  double local_248;
  double local_240;
  ulonglong local_238;
  ulonglong uStack_230;
  undefined1 local_228 [16];
  double local_210;
  double local_208;
  double local_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  double local_1d8;
  double local_1d0;
  double local_1c8;
  undefined1 local_1c0 [16];
  longlong local_1b0;
  int local_1a8;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_178 [136];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  local_408 = ZEXT816(0);
  local_418 = ZEXT816(0);
  local_3f8 = 0.0;
  dStack_3f0 = 0.0;
  local_388 = ZEXT816(0);
  local_3a8 = ZEXT816(0);
  local_378 = 0.0;
  dStack_370 = 0.0;
  local_468 = 0.0;
  dStack_460 = 0.0;
  local_458 = ZEXT816(0);
  local_368 = ZEXT816(0);
  local_398 = ZEXT816(0);
  local_358 = ZEXT816(0);
  if (0.0 < (double)param_1[0x21]) {
    dVar14 = (double)param_1[0x3e];
    dVar8 = (double)param_1[0x3f];
    local_448 = (double)param_1[0x2c];
    dStack_440 = (double)param_1[0x2d];
    auVar4 = *(undefined1 (*) [16])(param_1 + 0x34);
    dVar20 = -local_448;
    dVar39 = -dStack_440;
    dVar17 = (double)param_1[0x2e] * -1.0;
    dVar24 = (double)param_1[0x2f] * 1.0;
    dVar35 = dVar8 * dVar20 - dVar14 * dVar39;
    dVar37 = (double)param_1[0x40] * dVar39 - dVar8 * dVar17;
    dVar25 = dVar14 * dVar17 - (double)param_1[0x40] * dVar20;
    dVar30 = dVar24 * 0.0 - dVar24 * 0.0;
    dVar37 = dVar37 + dVar37;
    dVar25 = dVar25 + dVar25;
    dVar35 = dVar35 + dVar35;
    dVar30 = dVar30 + dVar30;
    auVar29 = divpd(_DAT_149934d80,auVar4);
    dVar21 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._0_8_)) & auVar29._0_8_);
    uVar7 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar4._8_8_)) & auVar29._8_8_;
    local_438._8_4_ = (int)uVar7;
    local_438._0_8_ = dVar21;
    local_438._12_4_ = (int)(uVar7 >> 0x20);
    local_3f8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x36])) &
                        (ulonglong)(1.0 / (double)param_1[0x36]));
    dVar18 = (double)param_1[0x41];
    dVar9 = (double)param_1[0x42];
    dVar26 = dVar9 * dVar20 - dVar39 * dVar18;
    dVar31 = (double)param_1[0x43] * dVar39 - dVar17 * dVar9;
    dVar41 = dVar18 * dVar17 - (double)param_1[0x43] * dVar20;
    dVar42 = dVar24 * 0.0 - dVar24 * 0.0;
    dVar31 = dVar31 + dVar31;
    dVar41 = dVar41 + dVar41;
    dVar26 = dVar26 + dVar26;
    dVar42 = dVar42 + dVar42;
    dVar15 = (double)param_1[0x38];
    dVar19 = (double)param_1[0x39];
    dVar27 = dVar19 * dVar20 - dVar39 * dVar15;
    dVar32 = (double)param_1[0x3a] * dVar39 - dVar17 * dVar19;
    dVar40 = dVar15 * dVar17 - (double)param_1[0x3a] * dVar20;
    dStack_370 = dVar24 * 0.0 - dVar24 * 0.0;
    dVar32 = dVar32 + dVar32;
    dVar40 = dVar40 + dVar40;
    dVar27 = dVar27 + dVar27;
    dStack_370 = dStack_370 + dStack_370;
    dVar36 = (double)param_1[0x3b];
    dVar3 = (double)param_1[0x3c];
    dVar28 = dVar3 * dVar20 - dVar39 * dVar36;
    dVar33 = (double)param_1[0x3d] * dVar39 - dVar17 * dVar3;
    dVar38 = dVar36 * dVar17 - dVar20 * (double)param_1[0x3d];
    dStack_3f0 = dVar24 * 0.0 - dVar24 * 0.0;
    dVar33 = dVar33 + dVar33;
    dVar38 = dVar38 + dVar38;
    dVar28 = dVar28 + dVar28;
    dStack_3f0 = dStack_3f0 + dStack_3f0;
    dVar8 = (local_448 * dVar35 + dVar17 * dVar37 + dVar24 * dVar25 + dVar8) *
            (double)local_438._8_8_;
    uVar13 = (undefined4)((ulonglong)dVar8 >> 0x20);
    local_358._8_4_ = SUB84(dVar30,0);
    local_358._0_8_ =
         (dVar35 * dVar24 + (double)param_1[0x40] + (dVar25 * dVar20 - dVar37 * dVar39)) * local_3f8
    ;
    local_358._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
    local_368._8_4_ = SUB84(dVar8,0);
    local_368._0_8_ = ((dVar35 * dVar39 - dVar25 * dVar17) + dVar24 * dVar37 + dVar14) * dVar21;
    local_368._12_4_ = uVar13;
    local_398._8_4_ = SUB84(dVar8,0);
    local_398._0_8_ = dVar8;
    local_398._12_4_ = uVar13;
    local_468 = ((dVar26 * dVar39 - dVar41 * dVar17) + dVar24 * dVar31 + dVar18) * dVar21;
    dStack_460 = (local_448 * dVar26 + dVar17 * dVar31 + dVar24 * dVar41 + dVar9) *
                 (double)local_438._8_8_;
    local_458._8_4_ = SUB84(dVar42,0);
    local_458._0_8_ =
         (dVar26 * dVar24 + (double)param_1[0x43] + (dVar41 * dVar20 - dVar31 * dVar39)) * local_3f8
    ;
    local_458._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    dVar8 = (local_448 * dVar27 + dVar17 * dVar32 + dVar24 * dVar40 + dVar19) *
            (double)local_438._8_8_;
    uVar13 = (undefined4)((ulonglong)dVar8 >> 0x20);
    local_378 = (dVar27 * dVar24 + (double)param_1[0x3a] + (dVar40 * dVar20 - dVar32 * dVar39)) *
                local_3f8;
    dVar26 = (local_448 * dVar28 + dVar17 * dVar33 + dVar24 * dVar38 + dVar3) *
             (double)local_438._8_8_;
    uVar34 = (undefined4)((ulonglong)dVar26 >> 0x20);
    local_388._8_4_ = SUB84(dVar8,0);
    local_388._0_8_ = ((dVar27 * dVar39 - dVar40 * dVar17) + dVar24 * dVar32 + dVar15) * dVar21;
    local_388._12_4_ = uVar13;
    local_3a8._8_4_ = SUB84(dVar8,0);
    local_3a8._0_8_ = dVar8;
    local_3a8._12_4_ = uVar13;
    local_3f8 = (dVar28 * dVar24 + (double)param_1[0x3d] + (dVar38 * dVar20 - dVar33 * dVar39)) *
                local_3f8;
    local_408._8_4_ = SUB84(dVar26,0);
    local_408._0_8_ = ((dVar28 * dVar39 - dVar38 * dVar17) + dVar24 * dVar33 + dVar36) * dVar21;
    local_408._12_4_ = uVar34;
    local_418._8_4_ = SUB84(dVar26,0);
    local_418._0_8_ = dVar26;
    local_418._12_4_ = uVar34;
  }
  local_190 = *(undefined8 *)(*(longlong *)(param_1[1] + 8) + 0x110);
  local_488 = param_2;
  local_478 = dStack_460;
  dStack_470 = dStack_460;
  local_188 = local_190;
  local_180 = local_190;
  FUN_14488ddfe(local_1c0,*param_1 + 0x610);
  if (local_1b0 != 0) {
    local_2f8 = -local_478;
    dStack_2f0 = -dStack_470;
    local_308 = -local_468;
    dStack_300 = -dStack_460;
    local_318 = -(double)local_458._0_8_;
    uStack_310 = local_458._8_8_ ^ 0x8000000000000000;
    local_328 = -(double)local_418._0_8_;
    uStack_320 = local_418._8_8_ ^ 0x8000000000000000;
    local_338 = -(double)local_408._0_8_;
    uStack_330 = local_408._8_8_ ^ 0x8000000000000000;
    local_348 = -local_3f8;
    dStack_340 = -dStack_3f0;
    dVar21 = param_2 * 0.5;
    local_2e8._8_4_ = SUB84(dVar21,0);
    local_2e8._0_8_ = dVar21;
    local_2e8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    do {
      if (*(char *)(*(longlong *)(local_1b0 + 0x2c0) + 0xb + (longlong)local_1a8 * 0x10) == '\x04')
      {
        lVar10 = (longlong)local_1a8 * 0xc;
        lVar5 = *(longlong *)(local_1b0 + 0x560);
        uVar6 = *(undefined8 *)(*(longlong *)(local_1b0 + 0x278) + lVar10);
        *(undefined4 *)(lVar5 + 8 + lVar10) =
             *(undefined4 *)(*(longlong *)(local_1b0 + 0x278) + 8 + lVar10);
        *(undefined8 *)(lVar5 + lVar10) = uVar6;
        lVar10 = (longlong)local_1a8 * 0xc;
        lVar5 = *(longlong *)(local_1b0 + 0x578);
        uVar6 = *(undefined8 *)(*(longlong *)(local_1b0 + 0x290) + lVar10);
        *(undefined4 *)(lVar5 + 8 + lVar10) =
             *(undefined4 *)(*(longlong *)(local_1b0 + 0x290) + 8 + lVar10);
        *(undefined8 *)(lVar5 + lVar10) = uVar6;
        FUN_1402a0030(local_1b0,&local_1d8,local_1a8);
        lVar10 = (longlong)local_1a8;
        lVar5 = *(longlong *)(local_1b0 + 0x48);
        lVar12 = lVar10 * 0x10;
        dVar18 = (double)*(float *)(lVar5 + 0xc + lVar12);
        dVar21 = (double)*(float *)(lVar5 + 8 + lVar12);
        dVar14 = (double)*(float *)(lVar5 + 4 + lVar12);
        dVar8 = (double)*(float *)(lVar5 + lVar12);
        pdVar1 = (double *)(*(longlong *)(local_1b0 + 0x3f8) + lVar10 * 0x20);
        dVar26 = *pdVar1;
        dVar42 = pdVar1[1];
        pdVar1 = (double *)(*(longlong *)(local_1b0 + 0x3f8) + 0x10 + lVar10 * 0x20);
        dVar35 = *pdVar1;
        dVar30 = pdVar1[1];
        dVar20 = dVar26 * dVar21 * 1.0 + dVar30 * dVar14 + dVar8 * dVar35 * -1.0 + dVar18 * dVar42;
        dVar39 = dVar35 * dVar21 * -1.0 +
                 ((dVar8 * dVar26 * -1.0 + dVar18 * dVar30) - dVar14 * dVar42);
        local_1f8._8_4_ = SUB84(dVar20,0);
        local_1f8._0_8_ =
             dVar42 * dVar21 * -1.0 + dVar35 * dVar14 + dVar8 * dVar30 * 1.0 + dVar18 * dVar26;
        local_1f8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
        local_1e8._8_4_ = SUB84(dVar39,0);
        local_1e8._0_8_ =
             dVar30 * dVar21 * 1.0 + ((dVar8 * dVar42 * 1.0 + dVar18 * dVar35) - dVar14 * dVar26);
        local_1e8._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
        lVar5 = *(longlong *)(local_1b0 + 0x380);
        local_2a8 = (double)*(float *)(lVar5 + 8 + lVar10 * 0xc);
        local_2b8._8_8_ = (double)*(float *)(lVar5 + 4 + lVar10 * 0xc);
        local_2b8._0_8_ = (double)*(float *)(lVar5 + lVar10 * 0xc);
        FUN_1409342e5(local_178,local_1f8,local_2b8);
        dVar8 = local_488;
        auVar4 = _DAT_149934d80;
        lVar11 = (longlong)local_1a8;
        lVar5 = *(longlong *)(local_1b0 + 0x308);
        lVar12 = lVar11 * 0x18;
        lVar10 = *(longlong *)(local_1b0 + 0x338);
        local_480 = *(double *)(lVar5 + 0x10 + lVar12) * param_2 +
                    *(double *)(lVar10 + 0x10 + lVar12);
        local_448 = *(double *)(lVar5 + 8 + lVar12) * param_2 + *(double *)(lVar10 + 8 + lVar12);
        dVar21 = *(double *)(lVar5 + lVar12) * param_2 + *(double *)(lVar10 + lVar12);
        if ((*(byte *)(*(longlong *)(local_1b0 + 0x2c0) + 8 + lVar11 * 0x10) & 1) != 0) {
          dVar21 = dVar21 + (double)param_1[0x1d] * param_2;
          local_448 = local_448 + (double)param_1[0x1e] * param_2;
          local_480 = local_480 + (double)param_1[0x1f] * param_2;
        }
        lVar5 = *(longlong *)(local_1b0 + 800);
        lVar10 = *(longlong *)(local_1b0 + 0x350);
        dVar42 = *(double *)(lVar5 + 0x10 + lVar12) * param_2 + *(double *)(lVar10 + 0x10 + lVar12);
        dVar26 = *(double *)(lVar5 + 8 + lVar12) * param_2 + *(double *)(lVar10 + 8 + lVar12);
        dVar39 = *(double *)(lVar5 + lVar12) * param_2 + *(double *)(lVar10 + lVar12);
        dVar20 = (double)param_1[0x21];
        dVar35 = 0.0;
        local_420 = local_1d0;
        local_3b0 = local_1c8;
        local_3b8 = local_1d8;
        if (dVar20 <= 0.0) {
          dVar14 = 0.0;
          dVar19 = 0.0;
          dVar9 = 0.0;
          dVar36 = 0.0;
          dVar15 = 0.0;
          dVar18 = dVar26;
          dVar30 = dVar42;
          dVar20 = dVar39;
        }
        else {
          lVar5 = *(longlong *)(local_1b0 + 0x278);
          dVar14 = (double)*(float *)(lVar5 + 8 + lVar11 * 0xc);
          dVar15 = (double)*(float *)(lVar5 + 4 + lVar11 * 0xc);
          dVar36 = (double)*(float *)(lVar5 + lVar11 * 0xc);
          local_3d8 = (double)param_1[0x22];
          dVar9 = (double)param_1[0x23] + (double)param_1[0x23];
          dVar18 = local_468 * local_1d0 + local_1d8 * local_2f8;
          dVar17 = (double)local_458._0_8_ * local_1d8 + local_1c8 * local_308;
          dVar19 = local_478 * local_1c8 + local_1d0 * local_318;
          dVar35 = (double)param_1[0x24];
          dVar30 = (double)param_1[0x25];
          dVar3 = (double)param_1[0x26];
          dVar21 = dVar21 - ((double)param_1[0x29] * local_368._0_8_ +
                             (double)local_388._0_8_ * local_3d8 +
                             (dVar14 * local_478 + dVar15 * local_318) * dVar9 +
                             (dVar17 * local_318 + local_478 * dVar18) * dVar35 +
                            ((double)local_418._0_8_ * local_1c8 + local_1d0 * local_348) * dVar30)
                            * dVar20 * local_488;
          local_448 = local_448 -
                      ((double)param_1[0x2a] * (double)local_398._0_8_ +
                       (double)local_3a8._0_8_ * local_3d8 +
                       (dVar36 * (double)local_458._0_8_ + local_308 * dVar14) * dVar9 +
                       (dVar18 * local_308 + (double)local_458._0_8_ * dVar19) * dVar35 +
                      (local_3f8 * local_1d8 + local_1c8 * local_338) * dVar30) * dVar20 * local_488
          ;
          local_480 = local_480 -
                      ((double)param_1[0x2b] * (double)local_358._0_8_ + local_3d8 * local_378 +
                       dVar9 * (local_468 * dVar15 + local_2f8 * dVar36) +
                       (local_468 * dVar17 + dVar19 * local_2f8) * dVar35 +
                      ((double)local_408._0_8_ * local_1d0 + local_1d8 * local_328) * dVar30) *
                      dVar20 * local_488;
          dVar15 = (double)param_1[0x27] * -dVar20;
          dVar9 = local_368._0_8_ * dVar15;
          dVar36 = (double)local_398._0_8_ * dVar15;
          dVar15 = dVar15 * (double)local_358._0_8_;
          dVar19 = -dVar20 * (double)param_1[0x28];
          dVar35 = local_468 * dVar19;
          dVar14 = local_478 * dVar19;
          dVar19 = dVar19 * (double)local_458._0_8_;
          dVar18 = dVar26 - (double)local_418._0_8_ * dVar3 * dVar20 * local_488;
          dVar30 = dVar42 - dVar3 * local_3f8 * dVar20 * local_488;
          dVar20 = dVar39 - (double)local_408._0_8_ * dVar3 * dVar20 * local_488;
          local_3d0 = dVar42;
          local_3c8 = dVar26;
          local_3c0 = dVar39;
        }
        local_438._0_8_ = dVar21;
        dVar39 = *(double *)(*(longlong *)(local_1b0 + 0x410) + lVar11 * 8) * local_488;
        local_3e8 = 1.0;
        if (dVar39 <= 1.0) {
          local_3e8 = dVar39;
        }
        uStack_3e0 = 0;
        dVar39 = *(double *)(*(longlong *)(local_1b0 + 0x428) + lVar11 * 8) * local_488;
        dVar26 = 1.0;
        if (dVar39 <= 1.0) {
          dVar26 = dVar39;
        }
        lVar10 = lVar11 * 0xc;
        lVar5 = *(longlong *)(local_1b0 + 0x290);
        dVar30 = (double)*(float *)(lVar5 + 8 + lVar10) + dVar30;
        dVar18 = (double)*(float *)(lVar5 + 4 + lVar10) + dVar18;
        dVar20 = (double)*(float *)(lVar5 + lVar10) + dVar20;
        dVar30 = (dVar19 - dVar30) * dVar26 + dVar30;
        dVar18 = (dVar14 - dVar18) * dVar26 + dVar18;
        dVar20 = (dVar35 - dVar20) * dVar26 + dVar20;
        lVar5 = *(longlong *)(local_1b0 + 0x278);
        dVar14 = ((double)local_1f8._8_8_ * dVar30 * -1.0 +
                 dVar18 * (double)local_1e8._0_8_ +
                 dVar20 * (double)local_1e8._8_8_ * 1.0 + (double)local_1f8._0_8_ * 0.0) *
                 (double)local_2e8._0_8_ + (double)local_1f8._0_8_;
        dVar19 = ((double)local_1f8._0_8_ * dVar30 * 1.0 +
                 dVar18 * (double)local_1e8._8_8_ +
                 dVar20 * (double)local_1e8._0_8_ * -1.0 + (double)local_1f8._8_8_ * 0.0) *
                 (double)local_2e8._8_8_ + (double)local_1f8._8_8_;
        dVar39 = ((double)local_1e8._8_8_ * dVar30 * 1.0 +
                 ((dVar20 * (double)local_1f8._8_8_ * 1.0 + (double)local_1e8._0_8_ * 0.0) -
                 dVar18 * (double)local_1f8._0_8_)) * (double)local_2e8._0_8_ +
                 (double)local_1e8._0_8_;
        dVar26 = ((double)local_1e8._0_8_ * dVar30 * -1.0 +
                 ((dVar20 * (double)local_1f8._0_8_ * -1.0 + (double)local_1e8._8_8_ * 0.0) -
                 dVar18 * (double)local_1f8._8_8_)) * (double)local_2e8._8_8_ +
                 (double)local_1e8._8_8_;
        dVar42 = dVar39 * dVar39 + dVar14 * dVar14;
        dVar35 = dVar26 * dVar26 + dVar19 * dVar19;
        auVar16._0_8_ = dVar42 + dVar35;
        auVar16._8_8_ = dVar42 + dVar35;
        uStack_230 = -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_);
        auVar29 = sqrtpd(auVar16,auVar16);
        auVar22 = divpd(_DAT_149934d80,auVar29);
        auVar23._0_8_ = auVar22._0_8_ * dVar39;
        auVar23._8_8_ = auVar22._8_8_ * dVar26;
        auVar29._8_4_ = (int)uStack_230;
        auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_);
        auVar29._12_4_ = (int)(uStack_230 >> 0x20);
        local_228 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar23,auVar29);
        dVar26 = (double)*(float *)(lVar5 + 8 + lVar10) + local_480;
        dVar39 = (double)*(float *)(lVar5 + 4 + lVar10) + local_448;
        dVar21 = (double)*(float *)(lVar5 + lVar10) + dVar21;
        dVar26 = (dVar15 - dVar26) * local_3e8 + dVar26;
        dVar39 = (dVar36 - dVar39) * local_3e8 + dVar39;
        dVar21 = (dVar9 - dVar21) * local_3e8 + dVar21;
        local_200 = local_1c8 + dVar26 * local_488;
        local_208 = local_1d0 + dVar39 * local_488;
        local_210 = local_1d8 + dVar21 * local_488;
        local_238 = (ulonglong)(dVar14 * auVar22._0_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_);
        uStack_230 = (ulonglong)(dVar19 * auVar22._8_8_) & uStack_230;
        local_2d8 = dVar20;
        local_2d0 = dVar18;
        local_2c8 = dVar30;
        FUN_1402d3e5e(local_1b0,lVar11,&local_210,&local_238);
        lVar10 = (longlong)local_1a8;
        lVar5 = *(longlong *)(local_1b0 + 0x278);
        *(float *)(lVar5 + lVar10 * 0xc) = (float)dVar21;
        *(float *)(lVar5 + 4 + lVar10 * 0xc) = (float)dVar39;
        *(float *)(lVar5 + 8 + lVar10 * 0xc) = (float)dVar26;
        lVar10 = (longlong)local_1a8;
        lVar5 = *(longlong *)(local_1b0 + 0x290);
        *(float *)(lVar5 + lVar10 * 0xc) = (float)dVar20;
        *(float *)(lVar5 + 4 + lVar10 * 0xc) = (float)dVar18;
        *(float *)(lVar5 + 8 + lVar10 * 0xc) = (float)dVar30;
        lVar5 = *(longlong *)(local_1b0 + 0x338);
        *(undefined8 *)(lVar5 + 0x10 + (longlong)local_1a8 * 0x18) = 0;
        puVar2 = (undefined8 *)(lVar5 + (longlong)local_1a8 * 0x18);
        *puVar2 = 0;
        puVar2[1] = 0;
        lVar5 = *(longlong *)(local_1b0 + 0x350);
        *(undefined8 *)(lVar5 + 0x10 + (longlong)local_1a8 * 0x18) = 0;
        puVar2 = (undefined8 *)(lVar5 + (longlong)local_1a8 * 0x18);
        *puVar2 = 0;
        puVar2[1] = 0;
        local_240 = -dVar26 * dVar8;
        local_248 = -dVar39 * dVar8;
        local_250 = -dVar21 * dVar8;
        lVar10 = (longlong)local_1a8;
        lVar5 = *(longlong *)(local_1b0 + 0x548);
        lVar12 = lVar10 * 0x10;
        dStack_2a0 = (double)*(float *)(lVar5 + 0xc + lVar12);
        local_2a8 = (double)*(float *)(lVar5 + 8 + lVar12);
        dVar21 = (double)*(float *)(lVar5 + 4 + lVar12);
        local_2b8._8_4_ = SUB84(dVar21,0);
        local_2b8._0_8_ = (double)*(float *)(lVar5 + lVar12);
        local_2b8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
        puVar2 = (undefined8 *)(*(longlong *)(local_1b0 + 0x530) + lVar10 * 0x18);
        local_298 = *puVar2;
        uStack_290 = puVar2[1];
        local_288 = *(undefined8 *)(*(longlong *)(local_1b0 + 0x530) + 0x10 + lVar10 * 0x18);
        uStack_280 = 0;
        local_278 = auVar4;
        local_268 = 0x3ff0000000000000;
        uStack_260 = 0;
        local_498 = &local_250;
        FUN_14003f872(local_1b0,lVar10,local_2b8,&local_190);
        param_2 = dVar8;
      }
      FUN_144b02030(local_1c0);
    } while (local_1b0 != 0);
  }
  if ((local_f0 ^ (ulonglong)auStack_4b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429accdc FUN_1429accdc body=5361 status=ok
// SIG undefined FUN_1429accdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429accdc(longlong *param_1,undefined8 param_2,double param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  double dVar9;
  double *pdVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong uVar19;
  undefined1 extraout_var [12];
  undefined1 auVar20 [16];
  float fVar24;
  undefined1 auVar21 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar31;
  undefined1 in_XMM1 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
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
  float fVar47;
  float fVar48;
  double dVar49;
  float fVar50;
  undefined8 uVar51;
  double dVar52;
  undefined1 auVar59 [12];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined4 uVar60;
  undefined4 uVar61;
  undefined1 auStack_258 [32];
  undefined8 *local_238;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8 [16];
  longlong local_1a8;
  int local_1a0;
  undefined1 local_188 [8];
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  uVar25 = in_XMM1._0_4_;
  uVar31 = in_XMM1._4_4_;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_1d8 = ABS(param_3 + -1.0);
  uStack_1d0 = 0;
  local_1f8 = param_3;
  FUN_146d980ac(local_1b8,*param_1 + 0x658);
  local_210 = in_XMM1._0_8_;
  if (local_1a8 != 0) {
    local_224 = (float)local_1f8;
    local_228 = (float)local_210;
    local_200 = (double)CONCAT44(local_200._4_4_,1.0 - local_224);
    do {
      lVar13 = (longlong)local_1a0;
      lVar11 = *(longlong *)(local_1a8 + 0x28);
      dVar37 = *(double *)(lVar11 + lVar13 * 0x18);
      dVar3 = *(double *)(lVar11 + 8 + lVar13 * 0x18);
      dVar4 = *(double *)(lVar11 + 0x10 + lVar13 * 0x18);
      lVar12 = *(longlong *)(local_1a8 + 0x48);
      lVar14 = lVar13 * 0x10;
      fVar32 = *(float *)(lVar12 + 0xc + lVar14);
      fVar26 = *(float *)(lVar12 + 8 + lVar14);
      fVar18 = *(float *)(lVar12 + lVar14);
      fVar50 = *(float *)(lVar12 + 4 + lVar14);
      local_128 = (double)CONCAT44(fVar50,fVar18);
      uStack_120 = (double)CONCAT44(fVar32,fVar26);
      iVar6 = *(int *)(*(longlong *)(local_1a8 + 0x2a8) + 0x30 + lVar13 * 0x40);
      uVar25 = SUB84(local_210,0);
      uVar31 = (undefined4)((ulonglong)local_210 >> 0x20);
      if (iVar6 == 3) {
        lVar12 = *(longlong *)(local_1a8 + 0x278);
        fVar32 = *(float *)(lVar12 + 8 + lVar13 * 0xc);
        fVar26 = *(float *)(lVar12 + 4 + lVar13 * 0xc);
        pdVar10 = (double *)(lVar11 + lVar13 * 0x18);
        *pdVar10 = dVar37 + (double)*(float *)(lVar12 + lVar13 * 0xc) * local_210;
        pdVar10[1] = dVar3 + (double)fVar26 * local_210;
        pdVar10[2] = dVar4 + (double)fVar32 * local_210;
        lVar12 = (longlong)local_1a0;
        local_1c8 = *(undefined8 *)(*(longlong *)(local_1a8 + 0x290) + lVar12 * 0xc);
        local_1c0 = *(undefined4 *)(*(longlong *)(local_1a8 + 0x290) + 8 + lVar12 * 0xc);
        lVar11 = *(longlong *)(local_1a8 + 0x48);
        pdVar10 = (double *)(lVar11 + lVar12 * 0x10);
        local_108 = *pdVar10;
        dStack_100 = pdVar10[1];
        FUN_146c94058(local_188,&local_108,&local_1c8,local_228);
        puVar1 = (undefined8 *)(lVar11 + lVar12 * 0x10);
        *puVar1 = local_188;
        puVar1[1] = dStack_180;
LAB_1429ad450:
        lVar14 = local_1a8;
        lVar15 = (longlong)local_1a0;
        lVar11 = *(longlong *)(local_1a8 + 0x48);
        lVar12 = lVar15 * 0x10;
        dStack_170 = (double)*(float *)(lVar11 + 0xc + lVar12);
        local_178 = (double)*(float *)(lVar11 + 8 + lVar12);
        local_188 = (undefined1  [8])(double)*(float *)(lVar11 + lVar12);
        dStack_180 = (double)*(float *)(lVar11 + 4 + lVar12);
        lVar13 = lVar15 * 0x18;
        puVar1 = (undefined8 *)(*(longlong *)(local_1a8 + 0x28) + lVar13);
        local_168 = *puVar1;
        uStack_160 = puVar1[1];
        local_158._8_8_ = 0;
        local_158._0_8_ = *(ulonglong *)(*(longlong *)(local_1a8 + 0x28) + 0x10 + lVar13);
        local_148 = 0x3ff0000000000000;
        uStack_140 = 0x3ff0000000000000;
        local_138 = 0x3ff0000000000000;
        uStack_130 = 0;
        lVar11 = *(longlong *)(local_1a8 + 0xf8);
        iVar6 = *(int *)(lVar11 + 0x10 + lVar13);
        lVar12 = *(longlong *)(lVar11 + 8 + lVar13);
        lVar11 = lVar11 + lVar13;
        if (lVar12 != 0) {
          lVar11 = lVar12;
        }
        if ((longlong)iVar6 < 1) {
          uVar39 = 0;
          uVar41 = 0;
          uVar19 = 0;
          uVar60 = 0;
          uVar61 = 0;
          uVar51 = 0;
          dVar37 = 0.0;
          uVar45 = 0;
          uVar46 = 0;
          uVar43 = 0;
          uVar44 = 0;
          uVar40 = uVar39;
          uVar42 = uVar41;
          if (iVar6 != 0) goto LAB_1429ad523;
        }
        else {
          uVar19 = 0x7fefffffffffffff;
          uVar40 = 0xffffffff;
          uVar42 = 0xffefffff;
LAB_1429ad523:
          lVar12 = 0;
          dVar37 = (double)CONCAT44(uVar42,uVar40);
          auVar54._8_8_ = 0;
          auVar54._0_8_ = uVar19;
          uVar39 = (undefined4)uVar19;
          uVar41 = (undefined4)(uVar19 >> 0x20);
          uVar43 = uVar40;
          uVar44 = uVar42;
          uVar45 = uVar40;
          uVar46 = uVar42;
          uVar60 = uVar39;
          uVar61 = uVar41;
          do {
            lVar13 = *(longlong *)(lVar11 + lVar12);
            if ((*(byte *)(lVar13 + 8) & 3) == 0) {
              FUN_146e22506(lVar13,local_188);
            }
            else {
              FUN_1447269c8(lVar13,local_188);
            }
            lVar13 = *(longlong *)(lVar11 + lVar12);
            if (*(double *)(lVar13 + 0x28) <= auVar54._0_8_) {
              auVar54._0_8_ = *(double *)(lVar13 + 0x28);
            }
            uVar51 = auVar54._0_8_;
            dVar3 = *(double *)(lVar13 + 0x20);
            if (dVar3 <= (double)CONCAT44(uVar61,uVar60)) {
              uVar60 = SUB84(dVar3,0);
              uVar61 = (undefined4)((ulonglong)dVar3 >> 0x20);
            }
            dVar3 = *(double *)(lVar13 + 0x18);
            if (dVar3 <= (double)CONCAT44(uVar41,uVar39)) {
              uVar39 = SUB84(dVar3,0);
              uVar41 = (undefined4)((ulonglong)dVar3 >> 0x20);
            }
            dVar3 = *(double *)(lVar13 + 0x40);
            if ((double)CONCAT44(uVar44,uVar43) <= dVar3) {
              uVar43 = SUB84(dVar3,0);
              uVar44 = (undefined4)((ulonglong)dVar3 >> 0x20);
            }
            dVar3 = *(double *)(lVar13 + 0x38);
            if ((double)CONCAT44(uVar46,uVar45) <= dVar3) {
              uVar45 = SUB84(dVar3,0);
              uVar46 = (undefined4)((ulonglong)dVar3 >> 0x20);
            }
            if (dVar37 <= *(double *)(lVar13 + 0x30)) {
              dVar37 = *(double *)(lVar13 + 0x30);
            }
            lVar12 = lVar12 + 8;
          } while ((longlong)iVar6 * 8 != lVar12);
        }
        lVar11 = *(longlong *)(lVar14 + 0x140);
        lVar15 = lVar15 * 0x30;
        *(ulonglong *)(lVar11 + lVar15) = CONCAT44(uVar41,uVar39);
        *(ulonglong *)(lVar11 + 8 + lVar15) = CONCAT44(uVar61,uVar60);
        *(undefined8 *)(lVar11 + 0x10 + lVar15) = uVar51;
        *(double *)(lVar11 + 0x18 + lVar15) = dVar37 + 0.0;
        *(double *)(lVar11 + 0x20 + lVar15) = (double)CONCAT44(uVar46,uVar45) + 0.0;
        *(double *)(lVar11 + 0x28 + lVar15) = (double)CONCAT44(uVar44,uVar43) + 0.0;
      }
      else {
        pdVar10 = (double *)(*(longlong *)(local_1a8 + 0x2a8) + lVar13 * 0x40);
        if (iVar6 == 2) {
          dVar5 = *pdVar10;
          dVar36 = pdVar10[1];
          dVar38 = pdVar10[2];
          if (9.999999747378752e-05 < local_1d8) {
            dVar38 = (dVar38 - dVar4) * local_1f8;
            dVar36 = (dVar36 - dVar3) * local_1f8;
            dVar5 = (dVar5 - dVar37) * local_1f8;
            fVar24 = *(float *)(pdVar10 + 4);
            local_214 = *(float *)(pdVar10 + 5);
            local_218 = *(float *)((longlong)pdVar10 + 0x2c);
            local_1e0 = (double)CONCAT44(local_1e0._4_4_,*(float *)((longlong)pdVar10 + 0x24));
            fVar48 = fVar32 * local_218 +
                     fVar26 * local_214 +
                     fVar18 * fVar24 + fVar50 * *(float *)((longlong)pdVar10 + 0x24);
            fVar47 = *(float *)((longlong)&DAT_149935368 + (ulonglong)(0.0 <= fVar48) * 4);
            fVar48 = fVar48 * fVar47;
            fVar47 = fVar47 * local_224;
            if (fVar48 < 0.9999) {
              fVar16 = fVar48;
              if (1.0 <= fVar48) {
                fVar16 = 1.0;
              }
              local_21c = fVar24;
              local_208 = dVar5;
              local_1f0 = dVar38;
              local_1e8 = dVar36;
              fVar24 = acosf((float)(-(uint)(fVar48 < -1.0) & 0xbf800000 |
                                    ~-(uint)(fVar48 < -1.0) & (uint)fVar16));
              local_220 = fVar24;
              fVar16 = sinf(fVar24);
              fVar48 = sinf(local_200._0_4_ * fVar24);
              auVar57._4_4_ = extraout_var._0_4_;
              auVar57._0_4_ = fVar48;
              auVar57._8_4_ = extraout_var._4_4_;
              auVar57._12_4_ = extraout_var._8_4_;
              auVar59 = auVar57._4_12_;
              fVar48 = fVar48 * (1.0 / fVar16);
              fVar47 = sinf(fVar47 * local_220);
              fVar47 = fVar47 * (1.0 / fVar16);
              fVar24 = local_21c;
              dVar36 = local_1e8;
              dVar38 = local_1f0;
              dVar5 = local_208;
            }
            else {
              auVar59 = (undefined1  [12])0x0;
              fVar48 = local_200._0_4_;
            }
            auVar20._0_4_ = fVar48 * fVar26 + local_214 * fVar47;
            auVar20._4_12_ = auVar59;
            auVar27._0_4_ = fVar48 * fVar50 + local_1e0._0_4_ * fVar47;
            auVar27._4_12_ = auVar59;
            auVar53._0_4_ = fVar48 * fVar18 + fVar24 * fVar47;
            auVar53._4_12_ = auVar59;
            auVar57 = insertps(auVar53,auVar27,0x10);
            auVar57 = insertps(auVar57,auVar20,0x20);
            auVar57 = insertps(auVar57,ZEXT416((uint)(fVar32 * fVar48 + local_218 * fVar47)),0x30);
            fVar47 = auVar57._0_4_;
            fVar48 = auVar57._4_4_;
            fVar16 = auVar57._8_4_;
            fVar17 = auVar57._12_4_;
            fVar32 = fVar47 * fVar47 + fVar48 * fVar48;
            fVar24 = fVar16 * fVar16 + fVar17 * fVar17;
            auVar28._0_4_ = fVar24 + fVar32;
            auVar28._4_4_ = fVar24 + fVar32;
            auVar28._8_4_ = fVar32 + fVar24;
            auVar28._12_4_ = fVar32 + fVar24;
            auVar21._4_4_ = -(uint)(1e-08 <= auVar28._4_4_);
            auVar21._0_4_ = -(uint)(1e-08 <= auVar28._0_4_);
            auVar21._8_4_ = -(uint)(1e-08 <= auVar28._8_4_);
            auVar21._12_4_ = -(uint)(1e-08 <= auVar28._12_4_);
            auVar57 = sqrtps(auVar28,auVar28);
            auVar57 = divps(_DAT_1499314a0,auVar57);
            auVar33._0_4_ = auVar57._0_4_ * fVar47;
            auVar33._4_4_ = auVar57._4_4_ * fVar48;
            auVar33._8_4_ = auVar57._8_4_ * fVar16;
            auVar33._12_4_ = auVar57._12_4_ * fVar17;
            _local_188 = blendvps(_DAT_149932320,auVar33,auVar21);
            dVar38 = dVar38 + dVar4;
            dVar36 = dVar36 + dVar3;
            dVar5 = dVar5 + dVar37;
          }
          else {
            _local_188 = *(undefined1 (*) [16])(pdVar10 + 4);
            *(undefined4 *)(pdVar10 + 6) = 1;
          }
          bVar7 = false;
          if ((ABS(dVar37 - dVar5) <= 9.99999993922529e-09) &&
             (bVar7 = false, ABS(dVar3 - dVar36) <= 9.99999993922529e-09)) {
            bVar7 = ABS(dVar4 - dVar38) <= 9.99999993922529e-09;
          }
          uVar31 = (undefined4)((ulonglong)local_210 >> 0x20);
          if (ABS((float)local_188._0_4_ - fVar18) <= 1e-08) {
            if (ABS((float)local_188._4_4_ - fVar50) <= 1e-08) {
              bVar8 = ABS(dStack_180._0_4_ - fVar26) <= 1e-08;
            }
            else {
              bVar8 = false;
            }
          }
          else {
            bVar8 = false;
          }
          uVar25 = SUB84(local_210,0);
          dVar52 = 0.0;
          uVar40 = 0;
          if (local_210 <= 9.999999974752427e-07) {
            uVar42 = 0;
            uVar43 = 0;
            dVar9 = 0.0;
            dVar49 = 0.0;
          }
          else {
            dVar9 = 0.0;
            dVar49 = 0.0;
            if (!bVar7) {
              dVar49 = (dVar38 - dVar4) / local_210;
              dVar9 = (dVar36 - dVar3) / local_210;
              dVar52 = (dVar5 - dVar37) / local_210;
            }
            if (bVar8) {
              uVar42 = 0;
              uVar43 = 0;
            }
            else {
              FUN_142986694(&local_108,&local_128,local_188,local_228);
              uVar40 = (undefined4)local_108;
              uVar42 = local_108._4_4_;
              uVar43 = dStack_100._0_4_;
            }
          }
          lVar12 = (longlong)local_1a0;
          lVar11 = *(longlong *)(local_1a8 + 0x28);
          *(double *)(lVar11 + lVar12 * 0x18) = dVar5;
          *(double *)(lVar11 + 8 + lVar12 * 0x18) = dVar36;
          *(double *)(lVar11 + 0x10 + lVar12 * 0x18) = dVar38;
          puVar1 = (undefined8 *)(*(longlong *)(local_1a8 + 0x48) + (longlong)local_1a0 * 0x10);
          *puVar1 = local_188;
          puVar1[1] = dStack_180;
          lVar12 = (longlong)local_1a0;
          lVar11 = *(longlong *)(local_1a8 + 0x278);
          *(float *)(lVar11 + lVar12 * 0xc) = (float)dVar52;
          *(float *)(lVar11 + 4 + lVar12 * 0xc) = (float)dVar9;
          *(float *)(lVar11 + 8 + lVar12 * 0xc) = (float)dVar49;
          lVar12 = (longlong)local_1a0;
          lVar11 = *(longlong *)(local_1a8 + 0x290);
          *(undefined4 *)(lVar11 + lVar12 * 0xc) = uVar40;
          *(undefined4 *)(lVar11 + 4 + lVar12 * 0xc) = uVar42;
          *(undefined4 *)(lVar11 + 8 + lVar12 * 0xc) = uVar43;
          if (!(bool)(bVar7 & bVar8)) goto LAB_1429ad450;
        }
        else if (iVar6 == 1) {
          lVar11 = *(longlong *)(local_1a8 + 0x278);
          *(undefined8 *)(lVar11 + lVar13 * 0xc) = 0;
          *(undefined4 *)(lVar11 + 8 + lVar13 * 0xc) = 0;
          lVar11 = *(longlong *)(local_1a8 + 0x290);
          *(undefined8 *)(lVar11 + (longlong)local_1a0 * 0xc) = 0;
          *(undefined4 *)(lVar11 + 8 + (longlong)local_1a0 * 0xc) = 0;
          *(undefined4 *)(pdVar10 + 6) = 0;
        }
      }
      FUN_146d8d3b0(local_1b8);
    } while (local_1a8 != 0);
  }
  FUN_14488ddfe(local_1b8,*param_1 + 0x688);
  if (local_1a8 != 0) {
    local_218 = (float)local_1f8;
    local_220 = (float)(double)CONCAT44(uVar31,uVar25);
    local_208 = (double)CONCAT44(local_208._4_4_,1.0 - local_218);
    do {
      lVar12 = (longlong)local_1a0;
      lVar11 = lVar12 * 0x10;
      if (*(char *)(*(longlong *)(local_1a8 + 0x2c0) + 0xb + lVar11) == '\x02') {
        pdVar10 = (double *)(*(longlong *)(local_1a8 + 0x2a8) + lVar12 * 0x40);
        iVar6 = *(int *)(*(longlong *)(local_1a8 + 0x2a8) + 0x30 + lVar12 * 0x40);
        bVar7 = false;
        if (iVar6 == 1) {
          lVar11 = *(longlong *)(local_1a8 + 0x278);
          *(undefined8 *)(lVar11 + lVar12 * 0xc) = 0;
          *(undefined4 *)(lVar11 + 8 + lVar12 * 0xc) = 0;
          lVar11 = *(longlong *)(local_1a8 + 0x290);
          *(undefined8 *)(lVar11 + (longlong)local_1a0 * 0xc) = 0;
          *(undefined4 *)(lVar11 + 8 + (longlong)local_1a0 * 0xc) = 0;
          *(undefined4 *)(pdVar10 + 6) = 0;
        }
        else {
          lVar13 = *(longlong *)(local_1a8 + 0x28);
          dVar37 = *(double *)(lVar13 + lVar12 * 0x18);
          dVar3 = *(double *)(lVar13 + 8 + lVar12 * 0x18);
          dVar4 = *(double *)(lVar13 + 0x10 + lVar12 * 0x18);
          if (iVar6 == 2) {
            lVar12 = *(longlong *)(local_1a8 + 0x48);
            fVar32 = *(float *)(lVar12 + 0xc + lVar11);
            local_224 = *(float *)(lVar12 + 8 + lVar11);
            local_228 = *(float *)(lVar12 + lVar11);
            fVar26 = *(float *)(lVar12 + 4 + lVar11);
            dVar5 = *pdVar10;
            dVar36 = pdVar10[1];
            dVar38 = pdVar10[2];
            if (9.999999747378752e-05 < local_1d8) {
              dVar38 = (dVar38 - dVar4) * local_1f8;
              dVar36 = (dVar36 - dVar3) * local_1f8;
              dVar5 = (dVar5 - dVar37) * local_1f8;
              fVar18 = *(float *)(pdVar10 + 4);
              fVar50 = *(float *)((longlong)pdVar10 + 0x24);
              fVar24 = *(float *)(pdVar10 + 5);
              fVar47 = *(float *)((longlong)pdVar10 + 0x2c);
              fVar16 = fVar32 * fVar47 + local_224 * fVar24 + local_228 * fVar18 + fVar26 * fVar50;
              fVar48 = *(float *)((longlong)&DAT_149935368 + (ulonglong)(0.0 <= fVar16) * 4);
              fVar16 = fVar16 * fVar48;
              fVar48 = fVar48 * local_218;
              local_214 = fVar26;
              local_200 = dVar3;
              local_1e0 = dVar4;
              if (fVar16 < 0.9999) {
                fVar26 = fVar16;
                if (1.0 <= fVar16) {
                  fVar26 = 1.0;
                }
                local_1f0 = dVar37;
                local_1e8 = dVar38;
                fVar16 = acosf((float)(-(uint)(fVar16 < -1.0) & 0xbf800000 |
                                      ~-(uint)(fVar16 < -1.0) & (uint)fVar26));
                local_21c = fVar32;
                fVar17 = sinf(fVar16);
                fVar26 = sinf(local_208._0_4_ * fVar16);
                fVar32 = local_21c;
                auVar55._4_4_ = extraout_var_00._0_4_;
                auVar55._0_4_ = fVar26;
                auVar55._8_4_ = extraout_var_00._4_4_;
                auVar55._12_4_ = extraout_var_00._8_4_;
                auVar59 = auVar55._4_12_;
                fVar26 = fVar26 * (1.0 / fVar17);
                fVar48 = sinf(fVar48 * fVar16);
                fVar48 = fVar48 * (1.0 / fVar17);
                dVar37 = local_1f0;
                dVar38 = local_1e8;
              }
              else {
                auVar59 = (undefined1  [12])0x0;
                fVar26 = local_208._0_4_;
              }
              auVar22._0_4_ = fVar26 * fVar32 + fVar47 * fVar48;
              auVar22._4_12_ = auVar59;
              auVar29._0_4_ = fVar26 * local_224 + fVar24 * fVar48;
              auVar29._4_12_ = auVar59;
              auVar34._0_4_ = fVar26 * local_214 + fVar50 * fVar48;
              auVar34._4_12_ = auVar59;
              auVar56._0_4_ = fVar26 * local_228 + fVar18 * fVar48;
              auVar56._4_12_ = auVar59;
              auVar57 = insertps(auVar56,auVar34,0x10);
              auVar57 = insertps(auVar57,auVar29,0x20);
              auVar57 = insertps(auVar57,auVar22,0x30);
              fVar50 = auVar57._0_4_;
              fVar24 = auVar57._4_4_;
              fVar47 = auVar57._8_4_;
              fVar48 = auVar57._12_4_;
              fVar26 = fVar50 * fVar50 + fVar24 * fVar24;
              fVar18 = fVar47 * fVar47 + fVar48 * fVar48;
              auVar30._0_4_ = fVar18 + fVar26;
              auVar30._4_4_ = fVar18 + fVar26;
              auVar30._8_4_ = fVar26 + fVar18;
              auVar30._12_4_ = fVar26 + fVar18;
              auVar23._4_4_ = -(uint)(1e-08 <= auVar30._4_4_);
              auVar23._0_4_ = -(uint)(1e-08 <= auVar30._0_4_);
              auVar23._8_4_ = -(uint)(1e-08 <= auVar30._8_4_);
              auVar23._12_4_ = -(uint)(1e-08 <= auVar30._12_4_);
              auVar57 = sqrtps(auVar30,auVar30);
              auVar57 = divps(_DAT_1499314a0,auVar57);
              auVar35._0_4_ = auVar57._0_4_ * fVar50;
              auVar35._4_4_ = auVar57._4_4_ * fVar24;
              auVar35._8_4_ = auVar57._8_4_ * fVar47;
              auVar35._12_4_ = auVar57._12_4_ * fVar48;
              auVar57 = blendvps(_DAT_149932320,auVar35,auVar23);
              dVar38 = dVar38 + local_1e0;
              dVar36 = dVar36 + local_200;
              dVar5 = dVar5 + dVar37;
              uVar25 = SUB84(local_210,0);
              uVar31 = (undefined4)((ulonglong)local_210 >> 0x20);
              fVar26 = local_214;
              dVar3 = local_200;
              dVar4 = local_1e0;
            }
            else {
              auVar57 = *(undefined1 (*) [16])(pdVar10 + 4);
              *(undefined4 *)(pdVar10 + 6) = 1;
            }
            bVar7 = false;
            if ((ABS(dVar37 - dVar5) <= 9.99999993922529e-09) &&
               (ABS(dVar3 - dVar36) <= 9.99999993922529e-09)) {
              bVar7 = ABS(dVar4 - dVar38) <= 9.99999993922529e-09;
            }
            if ((0.0001 < ABS(auVar57._0_4_ - local_228)) || (0.0001 < ABS(auVar57._4_4_ - fVar26)))
            {
              bVar8 = false;
            }
            else {
              bVar8 = ABS(auVar57._8_4_ - local_224) <= 0.0001;
            }
            dVar52 = 0.0;
            fVar18 = 0.0;
            if ((double)CONCAT44(uVar31,uVar25) < 9.999999974752427e-07 ||
                (double)CONCAT44(uVar31,uVar25) == 9.999999974752427e-07) {
              fVar26 = 0.0;
              fVar32 = 0.0;
              dVar9 = 0.0;
              dVar49 = 0.0;
            }
            else {
              dVar9 = 0.0;
              dVar49 = 0.0;
              dVar52 = 0.0;
              if (!bVar7) {
                dVar49 = (dVar38 - dVar4) / (double)CONCAT44(uVar31,uVar25);
                dVar9 = (dVar36 - dVar3) / (double)CONCAT44(uVar31,uVar25);
                dVar52 = (dVar5 - dVar37) / (double)CONCAT44(uVar31,uVar25);
              }
              if (bVar8) {
                fVar26 = 0.0;
                fVar32 = 0.0;
              }
              else {
                dStack_170 = (double)auVar57._12_4_;
                local_178 = (double)auVar57._8_4_;
                dStack_180 = (double)auVar57._4_4_;
                local_188 = (undefined1  [8])(double)auVar57._0_4_;
                local_110 = (double)fVar32;
                local_118 = (double)local_224;
                uStack_120 = (double)fVar26;
                local_128 = (double)local_228;
                FUN_140185264(&local_108,&local_128,local_188,uVar25);
                fVar32 = (float)local_f8;
                fVar26 = (float)dStack_100;
                fVar18 = (float)local_108;
              }
            }
            bVar7 = (bool)(bVar7 & bVar8 ^ 1);
            lVar12 = (longlong)local_1a0;
            lVar11 = *(longlong *)(local_1a8 + 0x28);
            *(double *)(lVar11 + lVar12 * 0x18) = dVar5;
            *(double *)(lVar11 + 8 + lVar12 * 0x18) = dVar36;
            *(double *)(lVar11 + 0x10 + lVar12 * 0x18) = dVar38;
            *(undefined1 (*) [16])(*(longlong *)(local_1a8 + 0x48) + (longlong)local_1a0 * 0x10) =
                 auVar57;
            lVar12 = (longlong)local_1a0;
            lVar11 = *(longlong *)(local_1a8 + 0x278);
            *(float *)(lVar11 + lVar12 * 0xc) = (float)dVar52;
            *(float *)(lVar11 + 4 + lVar12 * 0xc) = (float)dVar9;
            *(float *)(lVar11 + 8 + lVar12 * 0xc) = (float)dVar49;
            lVar12 = (longlong)local_1a0;
            lVar11 = *(longlong *)(local_1a8 + 0x290);
            *(float *)(lVar11 + lVar12 * 0xc) = fVar18;
            *(float *)(lVar11 + 4 + lVar12 * 0xc) = fVar26;
            *(float *)(lVar11 + 8 + lVar12 * 0xc) = fVar32;
          }
          else if (iVar6 == 3) {
            lVar11 = *(longlong *)(local_1a8 + 0x278);
            fVar32 = *(float *)(lVar11 + 8 + lVar12 * 0xc);
            fVar26 = *(float *)(lVar11 + 4 + lVar12 * 0xc);
            pdVar10 = (double *)(lVar13 + lVar12 * 0x18);
            *pdVar10 = dVar37 + (double)*(float *)(lVar11 + lVar12 * 0xc) *
                                (double)CONCAT44(uVar31,uVar25);
            pdVar10[1] = dVar3 + (double)fVar26 * (double)CONCAT44(uVar31,uVar25);
            pdVar10[2] = dVar4 + (double)fVar32 * (double)CONCAT44(uVar31,uVar25);
            lVar12 = (longlong)local_1a0;
            local_108 = *(double *)(*(longlong *)(local_1a8 + 0x290) + lVar12 * 0xc);
            dStack_100 = (double)CONCAT44(dStack_100._4_4_,
                                          *(undefined4 *)
                                           (*(longlong *)(local_1a8 + 0x290) + 8 + lVar12 * 0xc));
            lVar11 = *(longlong *)(local_1a8 + 0x48);
            pdVar10 = (double *)(lVar11 + lVar12 * 0x10);
            local_128 = *pdVar10;
            uStack_120 = pdVar10[1];
            FUN_146c94058(local_188,&local_128,&local_108,local_220);
            puVar1 = (undefined8 *)(lVar11 + lVar12 * 0x10);
            *puVar1 = local_188;
            puVar1[1] = dStack_180;
            bVar7 = true;
          }
        }
        lVar14 = local_1a8;
        lVar11 = *(longlong *)(local_1a8 + 0x28);
        lVar13 = (longlong)local_1a0 * 0x18;
        lVar12 = *(longlong *)(local_1a8 + 0x530);
        *(undefined8 *)(lVar12 + 0x10 + lVar13) = *(undefined8 *)(lVar11 + 0x10 + lVar13);
        puVar1 = (undefined8 *)(lVar11 + lVar13);
        uVar51 = puVar1[1];
        puVar2 = (undefined8 *)(lVar12 + lVar13);
        *puVar2 = *puVar1;
        puVar2[1] = uVar51;
        puVar1 = (undefined8 *)(*(longlong *)(local_1a8 + 0x48) + (longlong)local_1a0 * 0x10);
        uVar51 = puVar1[1];
        puVar2 = (undefined8 *)(*(longlong *)(local_1a8 + 0x548) + (longlong)local_1a0 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar51;
        lVar12 = (longlong)local_1a0 * 0xc;
        uVar40 = *(undefined4 *)(*(longlong *)(local_1a8 + 0x278) + 8 + lVar12);
        lVar11 = *(longlong *)(local_1a8 + 0x560);
        *(undefined8 *)(lVar11 + lVar12) =
             *(undefined8 *)(*(longlong *)(local_1a8 + 0x278) + lVar12);
        *(undefined4 *)(lVar11 + 8 + lVar12) = uVar40;
        lVar12 = (longlong)local_1a0 * 0xc;
        lVar11 = *(longlong *)(local_1a8 + 0x578);
        uVar51 = *(undefined8 *)(*(longlong *)(local_1a8 + 0x290) + lVar12);
        *(undefined4 *)(lVar11 + 8 + lVar12) =
             *(undefined4 *)(*(longlong *)(local_1a8 + 0x290) + 8 + lVar12);
        *(undefined8 *)(lVar11 + lVar12) = uVar51;
        if (bVar7) {
          lVar12 = (longlong)local_1a0;
          lVar11 = lVar12 * 0x10;
          if ((*(byte *)(*(longlong *)(local_1a8 + 0x2c0) + 8 + lVar11) & 2) == 0) {
            lVar13 = *(longlong *)(local_1a8 + 0x548);
            dStack_170 = (double)*(float *)(lVar13 + 0xc + lVar11);
            local_178 = (double)*(float *)(lVar13 + 8 + lVar11);
            local_188 = (undefined1  [8])(double)*(float *)(lVar13 + lVar11);
            dStack_180 = (double)*(float *)(lVar13 + 4 + lVar11);
            lVar15 = lVar12 * 0x18;
            puVar1 = (undefined8 *)(*(longlong *)(local_1a8 + 0x530) + lVar15);
            local_168 = *puVar1;
            uStack_160 = puVar1[1];
            local_158._8_8_ = 0;
            local_158._0_8_ = *(ulonglong *)(*(longlong *)(local_1a8 + 0x530) + 0x10 + lVar15);
            local_148 = 0x3ff0000000000000;
            uStack_140 = 0x3ff0000000000000;
            local_138 = 0x3ff0000000000000;
            uStack_130 = 0;
            lVar11 = *(longlong *)(local_1a8 + 0xf8);
            iVar6 = *(int *)(lVar11 + 0x10 + lVar15);
            lVar13 = *(longlong *)(lVar11 + 8 + lVar15);
            lVar11 = lVar11 + lVar15;
            if (lVar13 != 0) {
              lVar11 = lVar13;
            }
            if ((longlong)iVar6 < 1) {
              uVar39 = 0;
              uVar41 = 0;
              uVar19 = 0;
              uVar60 = 0;
              uVar61 = 0;
              uVar51 = 0;
              dVar37 = 0.0;
              uVar45 = 0;
              uVar46 = 0;
              uVar43 = 0;
              uVar44 = 0;
              uVar40 = uVar39;
              uVar42 = uVar41;
              if (iVar6 != 0) goto LAB_1429adf00;
            }
            else {
              uVar19 = 0x7fefffffffffffff;
              uVar40 = 0xffffffff;
              uVar42 = 0xffefffff;
LAB_1429adf00:
              lVar13 = 0;
              dVar37 = (double)CONCAT44(uVar42,uVar40);
              auVar58._8_8_ = 0;
              auVar58._0_8_ = uVar19;
              uVar39 = (undefined4)uVar19;
              uVar41 = (undefined4)(uVar19 >> 0x20);
              uVar43 = uVar40;
              uVar44 = uVar42;
              uVar45 = uVar40;
              uVar46 = uVar42;
              uVar60 = uVar39;
              uVar61 = uVar41;
              do {
                lVar15 = *(longlong *)(lVar11 + lVar13);
                if ((*(byte *)(lVar15 + 8) & 3) == 0) {
                  FUN_146e22506(lVar15,local_188);
                }
                else {
                  FUN_1447269c8(lVar15,local_188);
                }
                lVar15 = *(longlong *)(lVar11 + lVar13);
                if (*(double *)(lVar15 + 0x28) <= auVar58._0_8_) {
                  auVar58._0_8_ = *(double *)(lVar15 + 0x28);
                }
                uVar51 = auVar58._0_8_;
                dVar3 = *(double *)(lVar15 + 0x20);
                if (dVar3 <= (double)CONCAT44(uVar61,uVar60)) {
                  uVar60 = SUB84(dVar3,0);
                  uVar61 = (undefined4)((ulonglong)dVar3 >> 0x20);
                }
                dVar3 = *(double *)(lVar15 + 0x18);
                if (dVar3 <= (double)CONCAT44(uVar41,uVar39)) {
                  uVar39 = SUB84(dVar3,0);
                  uVar41 = (undefined4)((ulonglong)dVar3 >> 0x20);
                }
                dVar3 = *(double *)(lVar15 + 0x40);
                if ((double)CONCAT44(uVar44,uVar43) <= dVar3) {
                  uVar43 = SUB84(dVar3,0);
                  uVar44 = (undefined4)((ulonglong)dVar3 >> 0x20);
                }
                dVar3 = *(double *)(lVar15 + 0x38);
                if ((double)CONCAT44(uVar46,uVar45) <= dVar3) {
                  uVar45 = SUB84(dVar3,0);
                  uVar46 = (undefined4)((ulonglong)dVar3 >> 0x20);
                }
                if (dVar37 <= *(double *)(lVar15 + 0x30)) {
                  dVar37 = *(double *)(lVar15 + 0x30);
                }
                lVar13 = lVar13 + 8;
              } while ((longlong)iVar6 * 8 != lVar13);
            }
            lVar11 = *(longlong *)(lVar14 + 0x140);
            lVar12 = lVar12 * 0x30;
            *(ulonglong *)(lVar11 + lVar12) = CONCAT44(uVar41,uVar39);
            *(ulonglong *)(lVar11 + 8 + lVar12) = CONCAT44(uVar61,uVar60);
            *(undefined8 *)(lVar11 + 0x10 + lVar12) = uVar51;
            *(double *)(lVar11 + 0x18 + lVar12) = dVar37 + 0.0;
            *(double *)(lVar11 + 0x20 + lVar12) = (double)CONCAT44(uVar46,uVar45) + 0.0;
            *(double *)(lVar11 + 0x28 + lVar12) = (double)CONCAT44(uVar44,uVar43) + 0.0;
          }
          else {
            lVar13 = *(longlong *)(local_1a8 + 0x278);
            local_118 = -(double)*(float *)(lVar13 + 8 + lVar12 * 0xc) *
                        (double)CONCAT44(uVar31,uVar25);
            uStack_120 = -(double)*(float *)(lVar13 + 4 + lVar12 * 0xc) *
                         (double)CONCAT44(uVar31,uVar25);
            local_128 = -(double)*(float *)(lVar13 + lVar12 * 0xc) * (double)CONCAT44(uVar31,uVar25)
            ;
            local_108 = 0.0;
            dStack_100 = 0.0;
            local_f8 = 0.0;
            lVar13 = *(longlong *)(local_1a8 + 0x548);
            dStack_170 = (double)*(float *)(lVar13 + 0xc + lVar11);
            local_178 = (double)*(float *)(lVar13 + 8 + lVar11);
            dStack_180 = (double)*(float *)(lVar13 + 4 + lVar11);
            local_188 = (undefined1  [8])(double)*(float *)(lVar13 + lVar11);
            puVar1 = (undefined8 *)(*(longlong *)(local_1a8 + 0x530) + lVar12 * 0x18);
            local_168 = *puVar1;
            uStack_160 = puVar1[1];
            local_158._8_8_ = 0;
            local_158._0_8_ =
                 *(ulonglong *)(*(longlong *)(local_1a8 + 0x530) + 0x10 + lVar12 * 0x18);
            local_148 = 0x3ff0000000000000;
            uStack_140 = 0x3ff0000000000000;
            local_138 = 0x3ff0000000000000;
            uStack_130 = 0;
            local_238 = &local_128;
            FUN_14003f872(local_1a8,local_1a0,local_188,&local_108);
          }
        }
      }
      FUN_144b02030(local_1b8);
    } while (local_1a8 != 0);
  }
  if (local_1d8 <= 9.999999747378752e-05) {
    FUN_146d8d436(*param_1);
  }
  FUN_1447dd35a(*param_1);
  if ((local_f0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429ae1ce FUN_1429ae1ce body=126 status=ok
// SIG undefined FUN_1429ae1ce(void)

void FUN_1429ae1ce(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),param_2,0);
  FUN_14491a2c4(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x28);
  FUN_146d471ba(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x28);
  return;
}



// FUNCTION 1429ae24c FUN_1429ae24c body=363 status=ok
// SIG undefined FUN_1429ae24c(void)

void FUN_1429ae24c(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_140992e4e(param_1 + 0x50,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
    FUN_140731c2a(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x6c) < 0) {
      FUN_144727cd0(param_1 + 0x60,0);
    }
    *(undefined8 *)(param_1 + 0x90) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  *(undefined1 *)(param_1 + 0xb0) = 0;
  iVar2 = *(int *)(param_1 + 0xc0);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,0);
        iVar2 = *(int *)(param_1 + 0xc0);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  *(undefined4 *)(param_1 + 200) = 0;
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x10))(param_1 + 0x30);
  FUN_1429aacee(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x48);
  if (0 < (longlong)iVar2) {
    uVar4 = 0;
    do {
      FUN_14029f57f((uVar4 & 0xff) * 0x160 +
                    *(longlong *)(*(longlong *)(param_1 + 0x38) + (uVar4 >> 8 & 0xffffff) * 8),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x50) + uVar4 * 8),param_2);
      uVar4 = uVar4 + 1;
    } while ((longlong)iVar2 != uVar4);
  }
  iVar2 = *(int *)(param_1 + 0xc0);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
        iVar2 = *(int *)(param_1 + 0xc0);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 1429ae3b8 FUN_1429ae3b8 body=169 status=ok
// SIG undefined FUN_1429ae3b8(void)

void FUN_1429ae3b8(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar3 = *(int *)(param_1 + 0xc0);
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + lVar5 * 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x50))(plVar2,param_2);
        iVar3 = *(int *)(param_1 + 0xc0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  cVar1 = *(char *)(param_1 + 0xe0);
  if ('\0' < cVar1) {
    iVar3 = *(int *)(param_1 + 0xd8);
    iVar4 = 0;
    do {
      if (0 < iVar3) {
        lVar5 = 0;
        do {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + lVar5 * 8);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x68))(plVar2,param_2,iVar4,(int)cVar1);
            iVar3 = *(int *)(param_1 + 0xd8);
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < iVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != cVar1);
  }
  return;
}



// FUNCTION 1429ae462 FUN_1429ae462 body=124 status=ok
// SIG undefined FUN_1429ae462(void)

void FUN_1429ae462(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  FUN_1429aaea2(param_1 + 0x30);
  cVar1 = *(char *)(param_1 + 0xe1);
  if ('\0' < cVar1) {
    iVar3 = *(int *)(param_1 + 0xd8);
    iVar4 = 0;
    do {
      if (0 < iVar3) {
        lVar5 = 0;
        do {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + lVar5 * 8);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x70))(plVar2,param_2,iVar4,(int)cVar1);
            iVar3 = *(int *)(param_1 + 0xd8);
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < iVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != cVar1);
  }
  return;
}



// FUNCTION 1429ae4de FUN_1429ae4de body=124 status=ok
// SIG undefined FUN_1429ae4de(void)

void FUN_1429ae4de(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  FUN_14010a4f4(param_1 + 0x30);
  cVar1 = *(char *)(param_1 + 0xe2);
  if ('\0' < cVar1) {
    iVar3 = *(int *)(param_1 + 0xd8);
    iVar4 = 0;
    do {
      if (0 < iVar3) {
        lVar5 = 0;
        do {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + lVar5 * 8);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x78))(plVar2,param_2,iVar4,(int)cVar1);
            iVar3 = *(int *)(param_1 + 0xd8);
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < iVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != cVar1);
  }
  return;
}



// FUNCTION 1429ae55a FUN_1429ae55a body=445 status=ok
// SIG undefined FUN_1429ae55a(void)

void FUN_1429ae55a(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong local_50;
  int local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar14 = (int)param_1[0x18];
  if (0 < iVar14) {
    lVar17 = 0;
    do {
      plVar8 = *(longlong **)(param_1[0x17] + lVar17 * 8);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x48))(plVar8,param_2);
        iVar14 = (int)param_1[0x18];
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < iVar14);
  }
  FUN_1402d3d18(param_1 + 7,0,(int)param_1[9]);
  FUN_14488ddfe(local_60,*param_1 + 0x610);
  if (local_50 != 0) {
    do {
      lVar16 = (longlong)local_48;
      lVar17 = *(longlong *)(local_50 + 0x28);
      lVar15 = (longlong)*(int *)(*(longlong *)(*(longlong *)(local_50 + 0x98) + lVar16 * 8) + 0x10)
      ;
      lVar9 = *(longlong *)(param_1[2] + 8);
      *(undefined8 *)(lVar9 + 0x10 + lVar15 * 0x18) = *(undefined8 *)(lVar17 + 0x10 + lVar16 * 0x18)
      ;
      puVar1 = (undefined8 *)(lVar17 + lVar16 * 0x18);
      uVar13 = puVar1[1];
      puVar2 = (undefined8 *)(lVar9 + lVar15 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar13;
      lVar16 = (longlong)local_48 * 0x10;
      lVar17 = *(longlong *)(local_50 + 0x48);
      fVar5 = *(float *)(lVar17 + 0xc + lVar16);
      fVar6 = *(float *)(lVar17 + 8 + lVar16);
      fVar7 = *(float *)(lVar17 + 4 + lVar16);
      lVar9 = *(longlong *)(param_1[3] + 8);
      lVar15 = (longlong)
               *(int *)(*(longlong *)(*(longlong *)(local_50 + 0x98) + (longlong)local_48 * 8) +
                       0x10) * 0x20;
      *(double *)(lVar9 + lVar15) = (double)*(float *)(lVar17 + lVar16);
      *(double *)(lVar9 + 8 + lVar15) = (double)fVar7;
      *(double *)(lVar9 + 0x10 + lVar15) = (double)fVar6;
      *(double *)(lVar9 + 0x18 + lVar15) = (double)fVar5;
      lVar17 = *(longlong *)(local_50 + 0x530);
      lVar15 = (longlong)local_48 * 0x18;
      lVar9 = *(longlong *)(local_50 + 0x28);
      *(undefined8 *)(lVar9 + 0x10 + lVar15) = *(undefined8 *)(lVar17 + 0x10 + lVar15);
      puVar1 = (undefined8 *)(lVar17 + lVar15);
      uVar13 = puVar1[1];
      puVar2 = (undefined8 *)(lVar9 + lVar15);
      *puVar2 = *puVar1;
      puVar2[1] = uVar13;
      puVar3 = (undefined4 *)(*(longlong *)(local_50 + 0x548) + (longlong)local_48 * 0x10);
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      puVar4 = (undefined4 *)(*(longlong *)(local_50 + 0x48) + (longlong)local_48 * 0x10);
      *puVar4 = *puVar3;
      puVar4[1] = uVar10;
      puVar4[2] = uVar11;
      puVar4[3] = uVar12;
      FUN_144b02030(local_60);
    } while (local_50 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429ae718 FUN_1429ae718 body=69 status=ok
// SIG undefined FUN_1429ae718(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ae718(void)

{
  _DAT_14c993618 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ae75a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993620,1);
  return;
}



// FUNCTION 1429ae75d FUN_1429ae75d body=69 status=ok
// SIG undefined FUN_1429ae75d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ae75d(void)

{
  _DAT_14c993628 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ae79f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993630,1);
  return;
}



// FUNCTION 1429ae7a2 FUN_1429ae7a2 body=106 status=ok
// SIG undefined FUN_1429ae7a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ae7a2(void)

{
  _DAT_14c993658 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993660,1);
  if (DAT_14c993648 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c993638 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1429ae80c FUN_1429ae80c body=69 status=ok
// SIG undefined FUN_1429ae80c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ae80c(void)

{
  _DAT_14c993680 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ae84e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993688,1);
  return;
}



// FUNCTION 1429ae852 FUN_1429ae852 body=169 status=ok
// SIG undefined FUN_1429ae852(void)

void FUN_1429ae852(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  double local_28;
  int local_20;
  int local_1c;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1[1];
  local_20 = *(int *)(lVar1 + 0x290);
  local_1c = *(int *)(lVar1 + 0x294);
  local_28 = 1.0 / (double)(local_1c - local_20);
  local_18 = *(undefined1 *)(lVar1 + 0x298);
  (**(code **)(*(longlong *)*param_1 + 0x40))();
  FUN_14017e8a8(*param_1 + 0x70,param_1[1]);
  param_1[1] = 0;
  (**(code **)(*(longlong *)*param_1 + 0x18))();
  LOCK();
  *(int *)(*param_1 + 0x200) = *(int *)(*param_1 + 0x200) + -1;
  UNLOCK();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429ae8fc FUN_1429ae8fc body=69 status=ok
// SIG undefined FUN_1429ae8fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ae8fc(void)

{
  _DAT_14c993690 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ae93e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993698,1);
  return;
}



// FUNCTION 1429ae941 FUN_1429ae941 body=69 status=ok
// SIG undefined FUN_1429ae941(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ae941(void)

{
  _DAT_14c9936a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ae983. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9936a8,1);
  return;
}



// FUNCTION 1429ae986 FUN_1429ae986 body=91 status=ok
// SIG undefined FUN_1429ae986(void)

void FUN_1429ae986(void)

{
  if (DAT_14c9936b8 != 0) {
    if (DAT_14c9936b0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c9936b0)(DAT_14c9936b0,0);
    FUN_1446efa72(&DAT_14c9936b0,0,0,0x10);
    DAT_14c9936b8 = 0;
  }
  if (DAT_14c9936b0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1429ae9e1 FUN_1429ae9e1 body=91 status=ok
// SIG undefined FUN_1429ae9e1(void)

void FUN_1429ae9e1(void)

{
  if (DAT_14c9936c8 != 0) {
    if (DAT_14c9936c0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c9936c0)(DAT_14c9936c0,0);
    FUN_1446efa72(&DAT_14c9936c0,0,0,0x10);
    DAT_14c9936c8 = 0;
  }
  if (DAT_14c9936c0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1429aea3c FUN_1429aea3c body=69 status=ok
// SIG undefined FUN_1429aea3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429aea3c(void)

{
  _DAT_14c9936d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429aea7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9936d8,1);
  return;
}



// FUNCTION 1429aea81 FUN_1429aea81 body=69 status=ok
// SIG undefined FUN_1429aea81(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429aea81(void)

{
  _DAT_14c9936e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429aeac3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9936f0,1);
  return;
}



// FUNCTION 1429aeac6 FUN_1429aeac6 body=517 status=ok
// SIG undefined FUN_1429aeac6(void)

undefined8 *
FUN_1429aeac6(undefined8 *param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  DWORD DVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  PSRWLOCK SRWLock;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 2;
  *param_1 = &PTR_LAB_149f52980;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0x69) = param_2;
  if (DAT_14c99384c != 0) {
    param_3 = 2;
  }
  *(undefined1 *)((longlong)param_1 + 0x6a) = param_3;
  FUN_1462855de(param_1 + 0xe);
  uVar3 = FUN_14001cc68(0x40,0x10);
  FUN_145ac557c(uVar3,param_1 + 0xe);
  param_1[0x26] = uVar3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x20);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  param_1[0x27] = puVar4;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  *(undefined2 *)(param_1 + 0x3d) = 0;
  memset(param_1 + 0x28,0,0x90);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x41] = param_4;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x42));
  SRWLock = (PSRWLOCK)FUN_14001cc68(0x10,0x10);
  InitializeSRWLock(SRWLock);
  DVar2 = TlsAlloc();
  *(DWORD *)&SRWLock[1].Ptr = DVar2;
  param_1[0x43] = SRWLock;
  *(undefined1 *)(param_1 + 0x44) = 0;
  param_1[0x45] = param_5;
  param_1[0x46] = 0;
  param_1[0x47] = 0x322bcc7700000000;
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x4b) = DAT_14c9936e0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = DAT_14c75f148;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_14054d46e(&DAT_14c846b20,L"PhysicsRunsOnGT");
  if (cVar1 != '\0') {
    DAT_14c993678 = 1;
  }
  return param_1;
}



// FUNCTION 1429aeccc FUN_1429aeccc body=78 status=ok
// SIG undefined FUN_1429aeccc(void)

void FUN_1429aeccc(undefined8 *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x58))
            ((longlong *)*param_1,*(undefined4 *)(param_1[1] + 0x288));
  (**(code **)(*(longlong *)*param_1 + 0x50))((longlong *)*param_1,param_1[1]);
  (**(code **)(*(longlong *)*param_1 + 0x38))
            ((longlong *)*param_1,*(undefined8 *)(param_1[1] + 0x280));
  FUN_1429ae852(param_1 + 2);
  return;
}



// FUNCTION 1429aed1a FUN_1429aed1a body=18 status=ok
// SIG undefined FUN_1429aed1a(void)

void FUN_1429aed1a(longlong param_1,int param_2,longlong *param_3)

{
  *param_3 = param_1;
  *(longlong **)(*(longlong *)(param_1 + 0x98) + (longlong)param_2 * 8) = param_3;
  return;
}



// FUNCTION 1429aed2c FUN_1429aed2c body=1673 status=ok
// SIG undefined FUN_1429aed2c(void)

void FUN_1429aed2c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  undefined1 uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStack_188 [40];
  longlong *local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_146d8db4a();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbf8);
  iVar8 = FUN_1448332aa(param_2,&DAT_149e3cbf8);
  if (0 < iVar8) {
    FUN_146d8de3f(param_2,param_1 + 0xf8);
  }
  iVar8 = FUN_1448332aa(param_2,&DAT_149e3cbf8);
  if (1 < iVar8) {
    FUN_146d8e2ef(param_2,param_1 + 0xb0);
  }
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar8 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  local_160 = param_2;
  if (iVar8 < 2) {
    if (0 < *(int *)(param_1 + 0x68)) {
      lVar13 = 0;
      do {
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x60) + lVar13 * 8);
        if (lVar12 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined1 *)(lVar12 + 0x1a);
        }
        *(undefined1 *)(*(longlong *)(param_1 + 0x158) + lVar13) = uVar7;
        if (*(char *)(*(longlong *)(param_1 + 0x158) + lVar13) == '\x01') {
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x60) + lVar13 * 8);
          (**(code **)(*plVar3 + 0x80))(plVar3,local_158);
          lVar12 = *(longlong *)(param_1 + 0x110);
          lVar11 = lVar13 * 0x30;
          *(undefined8 *)(lVar12 + 0x10 + lVar11) = local_148._0_8_;
          *(undefined8 *)(lVar12 + lVar11) = local_158._0_8_;
          ((undefined8 *)(lVar12 + lVar11))[1] = local_158._8_8_;
          puVar1 = (undefined8 *)(lVar12 + 0x18 + lVar11);
          *puVar1 = local_148._8_8_;
          puVar1[1] = uStack_138;
          *(undefined8 *)(lVar12 + 0x28 + lVar11) = uStack_130;
          lVar12 = *(longlong *)(param_1 + 0x48);
          lVar9 = lVar13 * 0x10;
          dVar5 = (double)*(float *)(lVar12 + 0xc + lVar9);
          dVar6 = (double)*(float *)(lVar12 + 4 + lVar9);
          lVar4 = lVar13 * 0x18;
          local_158._8_4_ = SUB84(dVar6,0);
          local_158._0_8_ = (double)*(float *)(lVar12 + lVar9);
          local_158._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
          local_148._8_4_ = SUB84(dVar5,0);
          local_148._0_8_ = (double)*(float *)(lVar12 + 8 + lVar9);
          local_148._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar4);
          uStack_138 = *puVar1;
          uStack_130 = puVar1[1];
          local_128 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar4);
          uStack_120 = 0;
          local_118 = 0x3ff0000000000000;
          uStack_110 = 0x3ff0000000000000;
          local_108 = 0x3ff0000000000000;
          uStack_100 = 0;
          lVar12 = *(longlong *)(param_1 + 0xf8);
          iVar8 = *(int *)(lVar12 + 0x10 + lVar4);
          lVar9 = *(longlong *)(lVar12 + 8 + lVar4);
          lVar12 = lVar12 + lVar4;
          if (lVar9 != 0) {
            lVar12 = lVar9;
          }
          uVar14 = 0xffffffff;
          uVar15 = 0x7fefffff;
          uVar18 = 0xffffffff;
          uVar20 = 0xffefffff;
          if ((longlong)iVar8 < 1) {
            uVar19 = 0;
            uVar21 = 0;
            uVar16 = 0;
            uVar17 = 0;
            uVar28 = 0;
            uVar29 = 0;
            uVar26 = 0;
            uVar27 = 0;
            uVar24 = 0;
            uVar25 = 0;
            uVar22 = 0;
            uVar23 = 0;
            uVar14 = 0;
            uVar15 = 0;
            uVar18 = uVar19;
            uVar20 = uVar21;
            if (iVar8 != 0) goto LAB_1429aef7b;
          }
          else {
LAB_1429aef7b:
            lVar9 = 0;
            uVar16 = uVar14;
            uVar17 = uVar15;
            uVar19 = uVar14;
            uVar21 = uVar15;
            uVar22 = uVar18;
            uVar23 = uVar20;
            uVar24 = uVar18;
            uVar25 = uVar20;
            uVar26 = uVar18;
            uVar27 = uVar20;
            uVar28 = uVar14;
            uVar29 = uVar15;
            do {
              lVar4 = *(longlong *)(lVar12 + lVar9);
              if ((*(byte *)(lVar4 + 8) & 3) == 0) {
                FUN_146e22506(lVar4,local_158);
              }
              else {
                FUN_1447269c8(lVar4,local_158);
              }
              lVar4 = *(longlong *)(lVar12 + lVar9);
              dVar5 = *(double *)(lVar4 + 0x28);
              if (dVar5 <= (double)CONCAT44(uVar29,uVar28)) {
                uVar28 = SUB84(dVar5,0);
                uVar29 = (undefined4)((ulonglong)dVar5 >> 0x20);
              }
              dVar5 = *(double *)(lVar4 + 0x20);
              if (dVar5 <= (double)CONCAT44(uVar17,uVar16)) {
                uVar16 = SUB84(dVar5,0);
                uVar17 = (undefined4)((ulonglong)dVar5 >> 0x20);
              }
              dVar5 = *(double *)(lVar4 + 0x18);
              if (dVar5 <= (double)CONCAT44(uVar21,uVar19)) {
                uVar19 = SUB84(dVar5,0);
                uVar21 = (undefined4)((ulonglong)dVar5 >> 0x20);
              }
              dVar5 = *(double *)(lVar4 + 0x40);
              if ((double)CONCAT44(uVar23,uVar22) <= dVar5) {
                uVar22 = SUB84(dVar5,0);
                uVar23 = (undefined4)((ulonglong)dVar5 >> 0x20);
              }
              dVar5 = *(double *)(lVar4 + 0x38);
              if ((double)CONCAT44(uVar25,uVar24) <= dVar5) {
                uVar24 = SUB84(dVar5,0);
                uVar25 = (undefined4)((ulonglong)dVar5 >> 0x20);
              }
              dVar5 = *(double *)(lVar4 + 0x30);
              if ((double)CONCAT44(uVar27,uVar26) <= dVar5) {
                uVar26 = SUB84(dVar5,0);
                uVar27 = (undefined4)((ulonglong)dVar5 >> 0x20);
              }
              lVar9 = lVar9 + 8;
            } while ((longlong)iVar8 * 8 != lVar9);
          }
          lVar12 = *(longlong *)(param_1 + 0x140);
          *(ulonglong *)(lVar12 + lVar11) = CONCAT44(uVar21,uVar19);
          *(ulonglong *)(lVar12 + 8 + lVar11) = CONCAT44(uVar17,uVar16);
          *(ulonglong *)(lVar12 + 0x10 + lVar11) = CONCAT44(uVar29,uVar28);
          *(double *)(lVar12 + 0x18 + lVar11) = (double)CONCAT44(uVar27,uVar26) + 0.0;
          *(double *)(lVar12 + 0x20 + lVar11) = (double)CONCAT44(uVar25,uVar24) + 0.0;
          *(double *)(lVar12 + 0x28 + lVar11) = (double)CONCAT44(uVar23,uVar22) + 0.0;
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < *(int *)(param_1 + 0x68));
    }
  }
  else {
    FUN_146d8df2a(param_2,param_1 + 0x110);
    FUN_146d8df2a(param_2,param_1 + 0x140);
    FUN_146d8e09e(param_2,param_1 + 0x158);
    iVar8 = FUN_1448332aa(param_2,&DAT_149e3cba8);
    if ((iVar8 < 0x10) && (0 < *(int *)(param_1 + 0x100))) {
      lVar13 = 0;
      do {
        lVar12 = *(longlong *)(param_1 + 0x48);
        lVar9 = lVar13 * 0x10;
        dVar5 = (double)*(float *)(lVar12 + 0xc + lVar9);
        dVar6 = (double)*(float *)(lVar12 + 4 + lVar9);
        lVar4 = lVar13 * 0x18;
        local_158._8_4_ = SUB84(dVar6,0);
        local_158._0_8_ = (double)*(float *)(lVar12 + lVar9);
        local_158._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        local_148._8_4_ = SUB84(dVar5,0);
        local_148._0_8_ = (double)*(float *)(lVar12 + 8 + lVar9);
        local_148._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar4);
        uStack_138 = *puVar1;
        uStack_130 = puVar1[1];
        local_128 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar4);
        uStack_120 = 0;
        local_118 = 0x3ff0000000000000;
        uStack_110 = 0x3ff0000000000000;
        local_108 = 0x3ff0000000000000;
        uStack_100 = 0;
        lVar12 = *(longlong *)(param_1 + 0xf8);
        iVar8 = *(int *)(lVar12 + 0x10 + lVar4);
        lVar9 = *(longlong *)(lVar12 + 8 + lVar4);
        lVar12 = lVar12 + lVar4;
        if (lVar9 != 0) {
          lVar12 = lVar9;
        }
        uVar14 = 0xffffffff;
        uVar15 = 0x7fefffff;
        uVar18 = 0xffffffff;
        uVar20 = 0xffefffff;
        if ((longlong)iVar8 < 1) {
          uVar19 = 0;
          uVar21 = 0;
          uVar16 = 0;
          uVar17 = 0;
          uVar28 = 0;
          uVar29 = 0;
          uVar26 = 0;
          uVar27 = 0;
          uVar24 = 0;
          uVar25 = 0;
          uVar22 = 0;
          uVar23 = 0;
          uVar14 = 0;
          uVar15 = 0;
          uVar18 = uVar19;
          uVar20 = uVar21;
          if (iVar8 != 0) goto LAB_1429af2ac;
        }
        else {
LAB_1429af2ac:
          lVar9 = 0;
          uVar16 = uVar14;
          uVar17 = uVar15;
          uVar19 = uVar14;
          uVar21 = uVar15;
          uVar22 = uVar18;
          uVar23 = uVar20;
          uVar24 = uVar18;
          uVar25 = uVar20;
          uVar26 = uVar18;
          uVar27 = uVar20;
          uVar28 = uVar14;
          uVar29 = uVar15;
          do {
            lVar4 = *(longlong *)(lVar12 + lVar9);
            if ((*(byte *)(lVar4 + 8) & 3) == 0) {
              FUN_146e22506(lVar4,local_158);
            }
            else {
              FUN_1447269c8(lVar4,local_158);
            }
            lVar4 = *(longlong *)(lVar12 + lVar9);
            dVar5 = *(double *)(lVar4 + 0x28);
            if (dVar5 <= (double)CONCAT44(uVar29,uVar28)) {
              uVar28 = SUB84(dVar5,0);
              uVar29 = (undefined4)((ulonglong)dVar5 >> 0x20);
            }
            dVar5 = *(double *)(lVar4 + 0x20);
            if (dVar5 <= (double)CONCAT44(uVar17,uVar16)) {
              uVar16 = SUB84(dVar5,0);
              uVar17 = (undefined4)((ulonglong)dVar5 >> 0x20);
            }
            dVar5 = *(double *)(lVar4 + 0x18);
            if (dVar5 <= (double)CONCAT44(uVar21,uVar19)) {
              uVar19 = SUB84(dVar5,0);
              uVar21 = (undefined4)((ulonglong)dVar5 >> 0x20);
            }
            dVar5 = *(double *)(lVar4 + 0x40);
            if ((double)CONCAT44(uVar23,uVar22) <= dVar5) {
              uVar22 = SUB84(dVar5,0);
              uVar23 = (undefined4)((ulonglong)dVar5 >> 0x20);
            }
            dVar5 = *(double *)(lVar4 + 0x38);
            if ((double)CONCAT44(uVar25,uVar24) <= dVar5) {
              uVar24 = SUB84(dVar5,0);
              uVar25 = (undefined4)((ulonglong)dVar5 >> 0x20);
            }
            dVar5 = *(double *)(lVar4 + 0x30);
            if ((double)CONCAT44(uVar27,uVar26) <= dVar5) {
              uVar26 = SUB84(dVar5,0);
              uVar27 = (undefined4)((ulonglong)dVar5 >> 0x20);
            }
            lVar9 = lVar9 + 8;
          } while ((longlong)iVar8 * 8 != lVar9);
        }
        lVar12 = *(longlong *)(param_1 + 0x140);
        lVar9 = lVar13 * 0x30;
        *(ulonglong *)(lVar12 + lVar9) = CONCAT44(uVar21,uVar19);
        *(ulonglong *)(lVar12 + 8 + lVar9) = CONCAT44(uVar17,uVar16);
        *(ulonglong *)(lVar12 + 0x10 + lVar9) = CONCAT44(uVar29,uVar28);
        *(double *)(lVar12 + 0x18 + lVar9) = (double)CONCAT44(uVar27,uVar26) + 0.0;
        *(double *)(lVar12 + 0x20 + lVar9) = (double)CONCAT44(uVar25,uVar24) + 0.0;
        *(double *)(lVar12 + 0x28 + lVar9) = (double)CONCAT44(uVar23,uVar22) + 0.0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < *(int *)(param_1 + 0x100));
    }
  }
  plVar10 = local_160;
  iVar8 = FUN_1448332aa(local_160);
  plVar3 = (longlong *)(param_1 + 0x170);
  if (iVar8 < 6) {
    uVar2 = *(uint *)(param_1 + 0x68);
    iVar8 = *(int *)(param_1 + 0x178);
    *(uint *)(param_1 + 0x178) = iVar8 + uVar2;
    if ((uint)(*(int *)(param_1 + 0x17c) - iVar8) < uVar2) {
      FUN_140310156(plVar3);
    }
    memset((void *)((longlong)iVar8 * 2 + *plVar3),0,(longlong)(int)uVar2 * 2);
    plVar10 = local_160;
  }
  else {
    FUN_146d8e1f1(plVar10,plVar3);
  }
  FUN_1448332aa(plVar10,&DAT_149e3cba8);
  if ((local_f0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429af3c8 FUN_1429af3c8 body=550 status=ok
// SIG undefined FUN_1429af3c8(void)

undefined8 FUN_1429af3c8(undefined8 *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_c8 [32];
  double *local_a8;
  double *local_a0;
  undefined4 local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar1 = param_2[2];
  dVar2 = *param_2;
  dVar3 = param_2[1];
  dVar8 = (*param_3 - dVar2) * (param_4[1] - dVar3) - (*param_4 - dVar2) * (param_3[1] - dVar3);
  dVar9 = (param_3[2] - dVar1) * (*param_4 - dVar2) - (param_4[2] - dVar1) * (*param_3 - dVar2);
  dVar7 = (param_3[1] - dVar3) * (param_4[2] - dVar1) - (param_4[1] - dVar3) * (param_3[2] - dVar1);
  dVar5 = dVar8 * dVar8 + dVar7 * dVar7 + dVar9 * dVar9;
  if ((dVar5 < 9.999999747378752e-05) || (dVar5 = SQRT(dVar5), dVar5 <= 9.999999747378752e-05)) {
    uVar6 = 0;
  }
  else {
    local_98 = 0;
    local_a0 = (double *)*param_1;
    dVar1 = (local_a0[2] - dVar1) * (dVar8 / dVar5) +
            (*local_a0 - dVar2) * (dVar7 / dVar5) + (local_a0[1] - dVar3) * (dVar9 / dVar5);
    local_68 = local_a0[2] - dVar1 * (dVar8 / dVar5);
    local_70 = local_a0[1] - (dVar9 / dVar5) * dVar1;
    local_78 = *local_a0 - (dVar7 / dVar5) * dVar1;
    local_a8 = param_4;
    FUN_1449056f5(&local_90,&local_78,param_2,param_3);
    pdVar4 = (double *)*param_1;
    dVar1 = *(double *)param_1[1];
    uVar6 = CONCAT71((int7)((ulonglong)param_1[1] >> 8),
                     (local_80 - pdVar4[2]) * (local_80 - pdVar4[2]) +
                     (local_90 - *pdVar4) * (local_90 - *pdVar4) +
                     (local_88 - pdVar4[1]) * (local_88 - pdVar4[1]) <= dVar1 * dVar1);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429af5f0 FUN_1429af5f0 body=972 status=ok
// SIG undefined FUN_1429af5f0(void)

double * FUN_1429af5f0(longlong param_1,undefined4 param_2,double *param_3,double *param_4,
                      double *param_5)

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
  double *pdVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_108 [32];
  double *local_e8;
  double *local_e0;
  uint local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  pdVar10 = *(double **)(param_1 + 8);
  dVar1 = **(double **)(param_1 + 0x10);
  dVar12 = param_3[2];
  dVar2 = pdVar10[2];
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = *pdVar10;
  dVar6 = pdVar10[1];
  if ((dVar12 - dVar2) * (dVar12 - dVar2) +
      (dVar3 - dVar5) * (dVar3 - dVar5) + (dVar4 - dVar6) * (dVar4 - dVar6) <= dVar1) {
    uVar13 = SUB84(*param_4,0);
    uVar14 = (undefined4)((ulonglong)*param_4 >> 0x20);
    uVar15 = SUB84(param_4[1],0);
    uVar16 = (undefined4)((ulonglong)param_4[1] >> 0x20);
    uVar17 = SUB84(*param_5,0);
    uVar18 = (undefined4)((ulonglong)*param_5 >> 0x20);
  }
  else {
    dVar11 = param_4[2] - dVar2;
    dVar7 = *param_4;
    uVar13 = SUB84(dVar7,0);
    uVar14 = (undefined4)((ulonglong)dVar7 >> 0x20);
    dVar8 = param_4[1];
    uVar15 = SUB84(dVar8,0);
    uVar16 = (undefined4)((ulonglong)dVar8 >> 0x20);
    dVar9 = *param_5;
    uVar17 = SUB84(dVar9,0);
    uVar18 = (undefined4)((ulonglong)dVar9 >> 0x20);
    if ((dVar1 < dVar11 * dVar11 +
                 (dVar7 - dVar5) * (dVar7 - dVar5) + (dVar8 - dVar6) * (dVar8 - dVar6)) &&
       (dVar1 < (param_5[2] - dVar2) * (param_5[2] - dVar2) +
                (dVar9 - dVar5) * (dVar9 - dVar5) + (param_5[1] - dVar6) * (param_5[1] - dVar6)))
    goto LAB_1429af958;
  }
  dVar11 = param_4[2] - dVar12;
  dVar8 = (double)CONCAT44(uVar16,uVar15) - dVar4;
  dVar1 = (double)CONCAT44(uVar14,uVar13) - dVar3;
  dVar9 = (double)CONCAT44(uVar18,uVar17) - dVar3;
  dVar7 = dVar1 * (param_5[1] - dVar4) - dVar9 * dVar8;
  dVar9 = dVar11 * dVar9 - (param_5[2] - dVar12) * dVar1;
  dVar1 = dVar8 * (param_5[2] - dVar12) - (param_5[1] - dVar4) * dVar11;
  dVar8 = dVar7 * dVar7 + dVar1 * dVar1 + dVar9 * dVar9;
  if ((9.999999747378752e-05 <= dVar8) && (dVar8 = SQRT(dVar8), 9.999999747378752e-05 < dVar8)) {
    dVar7 = dVar7 / dVar8;
    dVar9 = dVar9 / dVar8;
    dVar1 = dVar1 / dVar8;
    local_d8 = 0;
    dVar12 = (dVar2 - dVar12) * dVar7 + (dVar5 - dVar3) * dVar1 + (dVar6 - dVar4) * dVar9;
    local_a8 = dVar2 - dVar12 * dVar7;
    local_b0 = dVar6 - dVar9 * dVar12;
    local_b8 = dVar5 - dVar1 * dVar12;
    local_e8 = param_5;
    local_e0 = pdVar10;
    FUN_1449056f5(&local_d0);
    pdVar10 = *(double **)(param_1 + 8);
    dVar12 = (local_c0 - pdVar10[2]) * (local_c0 - pdVar10[2]) +
             (local_d0 - *pdVar10) * (local_d0 - *pdVar10) +
             (local_c8 - pdVar10[1]) * (local_c8 - pdVar10[1]);
    if ((dVar12 < **(double **)(param_1 + 0x10)) &&
       (dVar12 < *(double *)(*(longlong *)(param_1 + 0x18) + 8))) {
      *(double *)(*(longlong *)(param_1 + 0x18) + 8) = dVar12;
      **(undefined4 **)(param_1 + 0x18) = param_2;
      pdVar10 = *(double **)(param_1 + 8);
      *(bool *)(*(longlong *)(param_1 + 0x18) + 0x10) =
           0.0 < (local_c0 - pdVar10[2]) * dVar7 +
                 (local_d0 - *pdVar10) * dVar1 + dVar9 * (local_c8 - pdVar10[1]);
    }
    param_5 = (double *)(ulonglong)local_d8;
  }
LAB_1429af958:
  if ((local_a0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_5;
}



// FUNCTION 1429af9be FUN_1429af9be body=722 status=ok
// SIG undefined FUN_1429af9be(void)

ulonglong * FUN_1429af9be(longlong param_1,ulonglong *param_2,undefined8 param_3,uint param_4)

{
  double dVar1;
  ushort uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
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
  ulonglong uVar20;
  
  if (param_4 == 0xffffffff) {
    *param_2 = 0;
    param_2[1] = 0;
    dVar13 = 1.0;
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x92);
    iVar7 = (int)(CONCAT44((int)(param_4 - ((int)param_4 >> 0x1f)) >> 0x1f,(int)param_4 / 2) /
                 (longlong)(int)(uVar2 - 1)) + (int)param_4 / 2;
    lVar8 = (longlong)iVar7;
    lVar3 = *(longlong *)(param_1 + 0x20);
    dVar13 = *(double *)(param_1 + 0x58);
    dVar9 = 0.0;
    dVar1 = *(double *)(param_1 + 0x80);
    dVar12 = *(double *)(param_1 + 0xa0);
    dVar10 = (double)(iVar7 % (int)(uint)uVar2);
    dVar15 = (double)(iVar7 / (int)(uint)uVar2);
    dVar14 = *(double *)(param_1 + 0x50);
    dVar5 = dVar14 * dVar10;
    dVar19 = dVar13 * dVar15;
    dVar16 = *(double *)(param_1 + 0x60);
    dVar18 = ((double)*(ushort *)(lVar3 + lVar8 * 2) * dVar12 + dVar1) * dVar16;
    dVar11 = (dVar10 + 1.0) * dVar14;
    dVar15 = (dVar15 + 1.0) * dVar13;
    dVar10 = ((double)*(ushort *)(lVar3 + 2 + (lVar8 + (ulonglong)uVar2) * 2) * dVar12 + dVar1) *
             dVar16;
    if ((param_4 & 1) == 0) {
      dVar4 = ((double)*(ushort *)(lVar3 + 2 + lVar8 * 2) * dVar12 + dVar1) * dVar16;
      dVar17 = dVar19;
      dVar6 = dVar11;
    }
    else {
      dVar17 = dVar15;
      dVar4 = dVar10;
      dVar6 = dVar5;
      dVar10 = ((double)*(ushort *)(lVar3 + (lVar8 + (ulonglong)uVar2) * 2) * dVar12 + dVar1) *
               dVar16;
    }
    dVar4 = dVar4 - dVar18;
    dVar11 = dVar11 - dVar5;
    dVar10 = dVar10 - dVar18;
    dVar15 = dVar15 - dVar19;
    uVar20 = ~-(ulonglong)(0.0 <= dVar14) & ((&DAT_149931160)[0.0 <= dVar13] ^ 0x8000000000000000) |
             -(ulonglong)(0.0 <= dVar14) & (&DAT_149931160)[0.0 <= dVar13];
    dVar18 = (double)(~-(ulonglong)(0.0 <= dVar16) & (uVar20 ^ 0x8000000000000000) |
                     uVar20 & -(ulonglong)(0.0 <= dVar16));
    dVar12 = (dVar11 * dVar15 - (dVar6 - dVar5) * (dVar17 - dVar19)) * dVar18;
    dVar1 = (dVar4 * (dVar6 - dVar5) - dVar10 * dVar11) * dVar18;
    dVar18 = ((dVar17 - dVar19) * dVar10 - dVar15 * dVar4) * dVar18;
    dVar14 = dVar12 * dVar12 + dVar18 * dVar18 + dVar1 * dVar1;
    dVar16 = SQRT(dVar14);
    dVar13 = 0.0;
    if (9.999999747378752e-05 <= dVar14) {
      dVar13 = dVar12 / dVar16;
      dVar9 = dVar1 / dVar16;
    }
    *param_2 = -(ulonglong)(dVar14 < 9.999999747378752e-05) & 0x3ff0000000000000 |
               ~-(ulonglong)(dVar14 < 9.999999747378752e-05) & (ulonglong)(dVar18 / dVar16);
    param_2[1] = (ulonglong)dVar9;
  }
  param_2[2] = (ulonglong)dVar13;
  return param_2;
}



// FUNCTION 1429afc90 FUN_1429afc90 body=90 status=ok
// SIG undefined FUN_1429afc90(void)

undefined8 * FUN_1429afc90(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  uVar3 = param_2[1];
  lVar4 = param_2[2];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[2];
  param_1[1] = uVar3;
  param_1[2] = lVar4;
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
  return param_1;
}



// FUNCTION 1429afd12 FUN_1429afd12 body=31 status=ok
// SIG undefined FUN_1429afd12(void)

undefined8 FUN_1429afd12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429afd36 FUN_1429afd36 body=140 status=ok
// SIG undefined FUN_1429afd36(void)

undefined8 * FUN_1429afd36(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  *param_1 = *param_2;
  uVar3 = param_2[1];
  lVar4 = param_2[2];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[2];
  param_1[1] = uVar3;
  param_1[2] = lVar4;
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
  puVar6 = (undefined8 *)param_2[3];
  puVar7 = (undefined8 *)param_1[3];
  if (puVar7 != puVar6) {
    param_1[3] = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    }
    if (puVar7 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar7 + 1);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1429afdc2 FUN_1429afdc2 body=64 status=ok
// SIG undefined FUN_1429afdc2(void)

void FUN_1429afdc2(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  (*(code *)*param_1)(param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429afe04 FUN_1429afe04 body=89 status=ok
// SIG undefined FUN_1429afe04(void)

void FUN_1429afe04(undefined8 *param_1,int *param_2)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(undefined4 *)(*(longlong *)param_1[2] + (longlong)*param_2 * 4);
  local_c = *(undefined4 *)(*(longlong *)param_1[2] + 4 + (longlong)*param_2 * 4);
  (*(code *)*param_1)(param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429afe5e FUN_1429afe5e body=125 status=ok
// SIG undefined FUN_1429afe5e(void)

void FUN_1429afe5e(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar3 = *param_1;
  LOCK();
  piVar1 = (int *)(lVar3 + 0x28);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 != -1) && (iVar2 < *(int *)(lVar3 + 0x60))) {
    local_18 = (undefined8 *)*param_1;
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = *(int *)(local_18 + 1) + 1;
      UNLOCK();
    }
    FUN_1429b07ca(&local_18);
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_18 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_18)(local_18,1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429afedc FUN_1429afedc body=1007 status=ok
// SIG undefined FUN_1429afedc(void)

ulonglong FUN_1429afedc(longlong *param_1,byte param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  DWORD DVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_118 [38];
  byte local_f2;
  byte local_f1;
  longlong *local_f0;
  longlong local_e8;
  int local_e0;
  int local_dc;
  longlong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  char local_a0;
  undefined8 local_98;
  int local_8c;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dwTlsIndex = DAT_14c7585d0;
  local_f0 = param_1;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar5 = 0xffffffff;
    LOCK();
    bVar14 = DAT_14c7585d0 != 0xffffffff;
    DVar4 = dwTlsIndex;
    if (bVar14) {
      DVar5 = DAT_14c7585d0;
      DVar4 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar4;
    UNLOCK();
    if (bVar14) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar5;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_b8);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_b8 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_b0 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a8 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_a0 = '\0';
  local_98 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_b8;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_d8 = -0x8000000000000000;
  lVar6 = *local_f0;
  if (param_2 == 0) {
    lVar6 = *local_f0;
    uVar10 = (ulonglong)*(uint *)(lVar6 + 0x34);
    if (*(int *)(lVar6 + 0x20) + 2 <= (int)*(uint *)(lVar6 + 0x34)) {
      FUN_1429afe5e();
      lVar6 = *local_f0;
    }
    uVar12 = 0;
    if ('\x02' < *(char *)(lVar6 + 0x50)) {
      QueryPerformanceCounter(&local_88);
      auVar17._0_8_ =
           ((double)CONCAT44(local_88.s.HighPart,local_88.s.LowPart) * DAT_14c83f420 + 16777216.0) *
           10000000.0 + 0.5;
      auVar17._8_8_ = 0;
      auVar17 = roundpd(auVar17,auVar17,1);
      local_d8 = (longlong)auVar17._0_8_;
      if (0 < (int)DAT_14c7585cc) {
        uVar12 = (ulonglong)DAT_14c7585cc;
      }
      auVar15._0_8_ = (double)(int)uVar12 * 10000.0 + 0.5;
      auVar15._8_8_ = 0;
      auVar17 = roundpd(auVar15,auVar15,1);
      local_e8 = (longlong)auVar17._0_8_;
      lVar6 = *local_f0;
      local_c8 = CONCAT71((int7)(uVar12 >> 8),1);
      goto LAB_1429b006d;
    }
  }
  else {
    uVar10 = (ulonglong)*(uint *)(lVar6 + 0x34);
  }
  local_c8 = 0;
  local_e8 = 0;
LAB_1429b006d:
  iVar8 = *(int *)(lVar6 + 0x2c);
  local_c0 = (ulonglong)*(uint *)(lVar6 + 0x30);
  plVar2 = *(longlong **)(lVar6 + 0x38);
  puVar3 = *(undefined8 **)(lVar6 + 0x40);
  local_e0 = (int)uVar10 + -1;
  local_f1 = param_2 ^ 1;
  local_c8 = local_c8 ^ 1;
  plVar7 = local_f0;
  local_f2 = param_2;
  local_dc = iVar8;
  local_d0 = uVar10;
  do {
    LOCK();
    piVar1 = (int *)(lVar6 + 0x20);
    iVar13 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)local_d0 < iVar8) {
      bVar14 = local_e0 <= iVar13;
      if (local_e0 <= iVar13) {
        iVar13 = local_e0;
      }
      if ((local_f1 & bVar14) != 0) goto LAB_1429b01ee;
    }
    iVar13 = iVar13 * (int)local_c0;
    iVar11 = (int)local_c0 + iVar13;
    if (iVar11 < iVar8) {
      iVar8 = iVar11;
    }
    iVar9 = iVar13;
    if (iVar13 < iVar8) {
      do {
        local_88.s.LowPart = *(DWORD *)(*plVar2 + (longlong)(int)plVar7[1] * 4);
        local_8c = iVar9;
        (*(code *)*puVar3)(puVar3[1],&local_8c,&local_88);
        iVar9 = iVar9 + 1;
        plVar7 = local_f0;
      } while (iVar8 != iVar9);
    }
    iVar8 = local_dc;
    if (iVar13 < local_dc) {
      LOCK();
      piVar1 = (int *)(*plVar7 + 0x24);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar10 = CONCAT71((int7)((ulonglong)&local_8c >> 8),1);
        if (local_f2 == 0) {
          (**(code **)(*(longlong *)**(undefined8 **)(*plVar7 + 0x48) + 0x10))();
        }
        goto LAB_1429b01f0;
      }
    }
    if (iVar11 < local_dc && (char)local_c8 == '\0') {
      QueryPerformanceCounter(&local_88);
      auVar16._0_8_ =
           ((double)CONCAT44(local_88.s.HighPart,local_88.s.LowPart) * DAT_14c83f420 + 16777216.0) *
           10000000.0 + 0.5;
      auVar16._8_8_ = 0;
      auVar17 = roundpd(auVar16,auVar16,1);
      plVar7 = local_f0;
      if (local_e8 < (longlong)auVar17._0_8_ - local_d8) {
        *(undefined1 *)((longlong)local_f0 + 0xc) = 1;
LAB_1429b01ee:
        uVar10 = 0;
LAB_1429b01f0:
        if (local_a0 == '\0') {
          local_a0 = '\x01';
          *(int *)(local_b8 + 4) = *(int *)(local_b8 + 4) + -1;
          if (local_a8 != local_b8[2]) {
            FUN_14004673c();
          }
          *local_b8 = local_b0;
          local_b8[3] = local_98;
        }
        if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return uVar10 & 0xffffffff;
      }
    }
    else if (local_dc <= iVar11) goto LAB_1429b01ee;
    lVar6 = *plVar7;
  } while( true );
}



// FUNCTION 1429b02cc FUN_1429b02cc body=73 status=ok
// SIG undefined FUN_1429b02cc(void)

void FUN_1429b02cc(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
      FUN_1429b07ca(param_1,(int)param_1[1]);
      puVar2 = (undefined8 *)*param_1;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001429b030b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1429b0316 FUN_1429b0316 body=434 status=ok
// SIG undefined FUN_1429b0316(void)

undefined8 * FUN_1429b0316(undefined8 *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  
  *param_1 = &PTR_FUN_149f52a30;
  lVar2 = param_1[0xb];
  if ((longlong)*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = 0;
    do {
      param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      if (param_3 != -1) {
        param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      }
      lVar5 = lVar5 + 0x48;
    } while ((longlong)*(int *)(param_1 + 0xc) * 0x48 != lVar5);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    lVar2 = param_1[0xb];
  }
  FUN_1429b079a(lVar2,uVar4,param_3);
  if (param_1[0xb] != 0) {
    piVar6 = (int *)(param_1[0xb] & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1429afcea);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) goto LAB_1429b03e0;
      }
      _aligned_free(piVar3);
    }
  }
LAB_1429b03e0:
  *param_1 = &PTR_FUN_149e002e8;
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar6 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1429afcea);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(piVar3);
    }
  }
  return param_1;
}



// FUNCTION 1429b04c8 FUN_1429b04c8 body=53 status=ok
// SIG undefined FUN_1429b04c8(void)

void FUN_1429b04c8(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  do {
    puVar1[-3] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
    puVar1[-2] = 0;
    puVar1[-1] = 0xe800000000000020;
    *puVar1 = 0xffffffffffffffff;
    puVar1 = puVar1 + 9;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 1429b04fe FUN_1429b04fe body=667 status=ok
// SIG undefined FUN_1429b04fe(void)

void FUN_1429b04fe(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Src;
  longlong lVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *_Memory;
  uint *puVar9;
  int *piVar10;
  void *_Dst;
  
  uVar7 = *(uint *)(param_1 + 1);
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar7) {
      uVar3 = uVar7;
    }
  }
  else {
    uVar3 = (int)((ulonglong)uVar7 * 3 >> 3) + uVar7 + 0x10;
  }
  uVar8 = 0x7fffffff;
  if ((int)uVar7 <= (int)uVar3) {
    uVar8 = (ulonglong)uVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar8,0x48);
  }
  uVar8 = uVar8 * 0x48;
  _Src = (void *)*param_1;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_1429b05f9;
  while( true ) {
    uVar7 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar7 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar7 | 1;
      __tlregdtor(&LAB_1429afcea);
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar4 = *(undefined4 **)(lVar2 + 0x310);
    *(undefined8 *)(lVar2 + 0x310) = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar4 = 0xffffffff;
    *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    FUN_140217a48(puVar1);
    puVar5 = (uint *)*puVar1;
LAB_1429b05f9:
    _Dst = (void *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar9 = (uint *)((longlong)_Dst + uVar8);
    uVar7 = puVar5[0x12];
    if (puVar9 <= puVar5 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar3 = *puVar5;
      *puVar5 = *puVar5 + uVar7 + 1;
      UNLOCK();
      if ((uVar3 ^ uVar7) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      _Dst = (void *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
      puVar9 = (uint *)((longlong)_Dst + uVar8);
      uVar7 = 0;
      if (puVar9 <= puVar5 + 0x4000) {
        uVar7 = 1;
        goto LAB_1429b0673;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_1429b0673:
  *(uint **)(puVar5 + 0x10) = puVar9;
  puVar5[0x12] = uVar7;
  uVar6 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src;
  if (uVar6 == 0 || _Src == (void *)0x0) {
    if (_Src == (void *)0x0) goto LAB_1429b071a;
  }
  else {
    if (uVar6 < uVar8) {
      uVar8 = uVar6;
    }
    memcpy(_Dst,_Src,uVar8);
  }
  piVar10 = (int *)((ulonglong)_Src & 0xffffffffffff0000);
  LOCK();
  *piVar10 = *piVar10 + -1;
  UNLOCK();
  if (*piVar10 == 0) {
    _Memory = piVar10;
    if (*(longlong *)(piVar10 + 0x10) - (longlong)piVar10 == 0x10000) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_1429afcea);
      }
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(int **)(lVar2 + 0x310);
      *(int **)(lVar2 + 0x310) = piVar10;
      if (_Memory == (int *)0x0) goto LAB_1429b071a;
    }
    _aligned_free(_Memory);
  }
LAB_1429b071a:
  *param_1 = _Dst;
  return;
}



// FUNCTION 1429b079a FUN_1429b079a body=47 status=ok
// SIG undefined FUN_1429b079a(void)

void FUN_1429b079a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar1 + -5);
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1429b07ca FUN_1429b07ca body=369 status=ok
// SIG undefined FUN_1429b07ca(void)

void FUN_1429b07ca(longlong *param_1,int param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  undefined1 local_4c;
  undefined8 local_48;
  int local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)(*(longlong *)(*param_1 + 0x58) + (longlong)param_2 * 0x48);
  uVar4 = *(ulonglong *)(*param_1 + 0x18);
  bVar3 = *(byte *)(*param_1 + 0x50);
  uVar6 = (ulonglong)bVar3;
  LOCK();
  plVar2[8] = -1;
  UNLOCK();
  lVar5 = *param_1;
  *param_1 = 0;
  local_4c = 0;
  local_58 = 0;
  local_3c = 0;
  local_50 = param_2;
  local_40 = param_2;
  (**(code **)(plVar2[5] + 0x18))(plVar2 + 5,plVar2);
  plVar2[5] = (longlong)&PTR_FUN_149f52a40;
  *plVar2 = lVar5;
  local_48 = 0;
  *(undefined1 *)((longlong)plVar2 + 0xc) = local_4c;
  *(int *)(plVar2 + 1) = local_50;
  FUN_1429b02cc(&local_48);
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar5 == 0) {
    uVar6 = 1;
    if (bVar3 != 6) {
      uVar6 = (ulonglong)bVar3;
    }
    lVar5 = 0;
  }
  else {
    if (bVar3 == 6) {
      uVar6 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
    }
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  plVar2[6] = lVar5;
  plVar2[7] = uVar6 << 0x3b | (uVar4 & 0x1fffffffffffff) << 6 | 0xc000000000000000;
  FUN_1429b02cc(&local_58);
  LOCK();
  puVar1 = (ulonglong *)(plVar2 + 7);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 | 2;
  UNLOCK();
  if ((uVar4 >> 1 & 1) != 0) {
    if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 1429b095a FUN_1429b095a body=450 status=ok
// SIG undefined FUN_1429b095a(void)

void FUN_1429b095a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint *puVar8;
  
  if (((ulonglong)param_3 & 7) == 0 && 0xf < param_5) {
    *param_2 = &PTR_FUN_149f52a40;
    puVar6 = param_3;
  }
  else {
    *param_2 = &PTR_LAB_149f52a80;
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_1429b0a37;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_1429afcea);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar4 = *(undefined4 **)(lVar3 + 0x310);
      *(undefined8 *)(lVar3 + 0x310) = 0;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar4 = 0xffffffff;
      *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      FUN_1467aa772(puVar1);
      puVar5 = (uint *)*puVar1;
LAB_1429b0a37:
      puVar6 = (undefined8 *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar8 = (uint *)(puVar6 + 2);
      uVar7 = puVar5[0x12];
      if (puVar8 <= puVar5 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
        LOCK();
        uVar2 = *puVar5;
        *puVar5 = *puVar5 + uVar7 + 1;
        UNLOCK();
        if ((uVar2 ^ uVar7) != 0xffffffff) break;
        puVar5 = (uint *)*puVar1;
        *puVar5 = 0xffffffff;
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        puVar6 = (undefined8 *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
        puVar8 = (uint *)(puVar6 + 2);
        uVar7 = 0;
        if (puVar8 <= puVar5 + 0x4000) {
          uVar7 = 1;
          goto LAB_1429b0ab1;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_1429b0ab1:
    *(uint **)(puVar5 + 0x10) = puVar8;
    puVar5[0x12] = uVar7;
    *param_3 = puVar6;
  }
  *puVar6 = *param_4;
  *param_4 = 0;
  *(undefined1 *)((longlong)puVar6 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_4 + 1);
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 1429b0b1c FUN_1429b0b1c body=26 status=ok
// SIG undefined FUN_1429b0b1c(void)

undefined8 FUN_1429b0b1c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_1429afedc(param_2,0);
  }
  return 0;
}



// FUNCTION 1429b0b36 FUN_1429b0b36 body=72 status=ok
// SIG undefined FUN_1429b0b36(void)

undefined8
FUN_1429b0b36(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,char param_5
             )

{
  if (param_5 != '\0') {
    FUN_1429afedc(param_3,0);
  }
  FUN_1429b095a(param_1,param_2 + 0x28,param_2,param_3,param_4);
  return 0;
}



// FUNCTION 1429b0bb0 FUN_1429b0bb0 body=26 status=ok
// SIG undefined FUN_1429b0bb0(void)

undefined8 FUN_1429b0bb0(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_1429afedc(*param_2,0);
  }
  return 0;
}



// FUNCTION 1429b0bca FUN_1429b0bca body=70 status=ok
// SIG undefined FUN_1429b0bca(void)

undefined8
FUN_1429b0bca(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_1429afedc(*param_3,0);
  }
  param_2[5] = &PTR_LAB_149f52a80;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 1429b0c10 FUN_1429b0c10 body=179 status=ok
// SIG undefined FUN_1429b0c10(void)

void FUN_1429b0c10(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *_Memory;
  int *piVar4;
  
  uVar2 = *param_2;
  FUN_1429b02cc(uVar2);
  if (uVar2 != 0) {
    piVar4 = (int *)(uVar2 & 0xffffffffffff0000);
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      _Memory = piVar4;
      if (*(longlong *)(piVar4 + 0x10) - (longlong)piVar4 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1429afcea);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar3 + 0x310);
        *(int **)(lVar3 + 0x310) = piVar4;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001429b0c8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 1429b0cd2 FUN_1429b0cd2 body=29 status=ok
// SIG undefined FUN_1429b0cd2(void)

undefined8 FUN_1429b0cd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429b0d04 FUN_1429b0d04 body=85 status=ok
// SIG undefined FUN_1429b0d04(void)

void FUN_1429b0d04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f52ac0;
  return;
}



// FUNCTION 1429b0d5a FUN_1429b0d5a body=85 status=ok
// SIG undefined FUN_1429b0d5a(void)

void FUN_1429b0d5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f52ac0;
  return;
}



// FUNCTION 1429b0db0 FUN_1429b0db0 body=118 status=ok
// SIG undefined FUN_1429b0db0(void)

void FUN_1429b0db0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f52ac0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001429b0e17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1429b0e26 FUN_1429b0e26 body=85 status=ok
// SIG undefined FUN_1429b0e26(void)

void FUN_1429b0e26(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar3 = FUN_14091baa4();
  iVar1 = *(int *)(lVar3 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(lVar3 + 0x30);
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + lVar4);
      uVar5 = (**(code **)(*param_2 + 0xb8))(param_2);
      *(undefined4 *)(lVar2 + 0x25c) = uVar5;
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1429b0e7c FUN_1429b0e7c body=87 status=ok
// SIG undefined FUN_1429b0e7c(void)

undefined8 FUN_1429b0e7c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 extraout_XMM0_Da;
  
  lVar3 = FUN_14091baa4();
  iVar1 = *(int *)(lVar3 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(lVar3 + 0x30);
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + lVar4);
      (**(code **)(*param_2 + 0xb8))(param_2);
      *(undefined4 *)(lVar2 + 0x25c) = extraout_XMM0_Da;
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return 1;
}



// FUNCTION 1429b0ed4 FUN_1429b0ed4 body=29 status=ok
// SIG undefined FUN_1429b0ed4(void)

undefined8 FUN_1429b0ed4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429b0f06 FUN_1429b0f06 body=85 status=ok
// SIG undefined FUN_1429b0f06(void)

void FUN_1429b0f06(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f52b30;
  return;
}



// FUNCTION 1429b0f5c FUN_1429b0f5c body=85 status=ok
// SIG undefined FUN_1429b0f5c(void)

void FUN_1429b0f5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f52b30;
  return;
}



// FUNCTION 1429b0fb2 FUN_1429b0fb2 body=118 status=ok
// SIG undefined FUN_1429b0fb2(void)

void FUN_1429b0fb2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f52b30;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001429b1019. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1429b1028 FUN_1429b1028 body=83 status=ok
// SIG undefined FUN_1429b1028(void)

void FUN_1429b1028(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = FUN_14091baa4();
  iVar1 = *(int *)(lVar4 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(lVar4 + 0x30);
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + lVar5);
      uVar3 = (**(code **)(*param_2 + 0xb0))(param_2);
      *(undefined4 *)(lVar2 + 600) = uVar3;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 1429b107c FUN_1429b107c body=85 status=ok
// SIG undefined FUN_1429b107c(void)

undefined8 FUN_1429b107c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = FUN_14091baa4();
  iVar1 = *(int *)(lVar4 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(lVar4 + 0x30);
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + lVar5);
      uVar3 = (**(code **)(*param_2 + 0xb0))(param_2);
      *(undefined4 *)(lVar2 + 600) = uVar3;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return 1;
}



// FUNCTION 1429b10d2 FUN_1429b10d2 body=282 status=ok
// SIG undefined FUN_1429b10d2(void)

undefined8 * FUN_1429b10d2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1429afcea);
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



// FUNCTION 1429b11ec FUN_1429b11ec body=131 status=ok
// SIG undefined FUN_1429b11ec(void)

void FUN_1429b11ec(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)param_1[0x15] + 0x58))
            ((longlong *)param_1[0x15],*(undefined4 *)(param_1[0x16] + 0x288));
  (**(code **)(*(longlong *)param_1[0x15] + 0x50))((longlong *)param_1[0x15],param_1[0x16]);
  (**(code **)(*(longlong *)param_1[0x15] + 0x38))
            ((longlong *)param_1[0x15],*(undefined8 *)(param_1[0x16] + 0x280));
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001429b1265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1429b1270 FUN_1429b1270 body=282 status=ok
// SIG undefined FUN_1429b1270(void)

undefined8 * FUN_1429b1270(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1429afcea);
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



// FUNCTION 1429b138a FUN_1429b138a body=98 status=ok
// SIG undefined FUN_1429b138a(void)

void FUN_1429b138a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1[0x15] + 0x1e9) = 1;
  (**(code **)(*(longlong *)param_1[0x15] + 0x28))();
  *(undefined1 *)(param_1[0x15] + 0x1e9) = 0;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001429b13e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1429b13ec FUN_1429b13ec body=282 status=ok
// SIG undefined FUN_1429b13ec(void)

undefined8 * FUN_1429b13ec(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1429afcea);
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



// FUNCTION 1429b1506 FUN_1429b1506 body=79 status=ok
// SIG undefined FUN_1429b1506(void)

void FUN_1429b1506(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1429ae852(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1429ae852(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001429b153c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1429b1556 FUN_1429b1556 body=84 status=ok
// SIG undefined FUN_1429b1556(void)

void FUN_1429b1556(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)((longlong)(int)param_2 * 0x40 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar1 - iVar3) * 0x40 + *(longlong *)(param_1 + 8)),
            (longlong)iVar3 << 6);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1429b15aa FUN_1429b15aa body=84 status=ok
// SIG undefined FUN_1429b15aa(void)

void FUN_1429b15aa(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar1 - iVar3) * 0x10 + *(longlong *)(param_1 + 8)),
            (longlong)iVar3 << 4);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1429b15fe FUN_1429b15fe body=77 status=ok
// SIG undefined FUN_1429b15fe(void)

void FUN_1429b15fe(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar1 - iVar3) * 8),
            (longlong)iVar3 << 3);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1429b164c FUN_1429b164c body=72 status=ok
// SIG undefined FUN_1429b164c(void)

void FUN_1429b164c(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)((longlong)(int)param_2 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar1 - iVar3) + *(longlong *)(param_1 + 8)),(longlong)iVar3);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1429b1694 FUN_1429b1694 body=72 status=ok
// SIG undefined FUN_1429b1694(void)

void FUN_1429b1694(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)((longlong)(int)param_2 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar1 - iVar3) + *(longlong *)(param_1 + 8)),(longlong)iVar3);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1429b16dc FUN_1429b16dc body=83 status=ok
// SIG undefined FUN_1429b16dc(void)

void FUN_1429b16dc(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)((longlong)(int)param_2 * 3 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar1 - iVar3) * 3 + *(longlong *)(param_1 + 8)),(longlong)iVar3 * 3
           );
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1429b1730 FUN_1429b1730 body=77 status=ok
// SIG undefined FUN_1429b1730(void)

void FUN_1429b1730(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 4),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar1 - iVar3) * 4),
            (longlong)iVar3 << 2);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1429b177e FUN_1429b177e body=84 status=ok
// SIG undefined FUN_1429b177e(void)

void FUN_1429b177e(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar1 - iVar3) * 0x10 + *(longlong *)(param_1 + 8)),
            (longlong)iVar3 << 4);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1429b17d2 FUN_1429b17d2 body=95 status=ok
// SIG undefined FUN_1429b17d2(void)

void FUN_1429b17d2(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)((longlong)(int)param_2 * 0x60 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar1 - iVar3) * 0x60 + *(longlong *)(param_1 + 8)),
            (longlong)iVar3 * 0x60);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1429b1832 FUN_1429b1832 body=72 status=ok
// SIG undefined FUN_1429b1832(void)

void FUN_1429b1832(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)((longlong)(int)param_2 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar1 - iVar3) + *(longlong *)(param_1 + 8)),(longlong)iVar3);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1429b187a FUN_1429b187a body=77 status=ok
// SIG undefined FUN_1429b187a(void)

void FUN_1429b187a(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 4),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar1 - iVar3) * 4),
            (longlong)iVar3 << 2);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1429b18c8 FUN_1429b18c8 body=77 status=ok
// SIG undefined FUN_1429b18c8(void)

void FUN_1429b18c8(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar1 - iVar3) * 8),
            (longlong)iVar3 << 3);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1429b1916 FUN_1429b1916 body=77 status=ok
// SIG undefined FUN_1429b1916(void)

void FUN_1429b1916(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar1 - iVar3) * 8),
            (longlong)iVar3 << 3);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1429b1964 FUN_1429b1964 body=77 status=ok
// SIG undefined FUN_1429b1964(void)

void FUN_1429b1964(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar1 - iVar3) * 8),
            (longlong)iVar3 << 3);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1429b19b2 FUN_1429b19b2 body=76 status=ok
// SIG undefined FUN_1429b19b2(void)

void FUN_1429b19b2(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 2),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar1 - iVar3) * 2),(longlong)iVar3 * 2
           );
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1429b19fe FUN_1429b19fe body=72 status=ok
// SIG undefined FUN_1429b19fe(void)

void FUN_1429b19fe(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)((longlong)(int)param_2 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar1 - iVar3) + *(longlong *)(param_1 + 8)),(longlong)iVar3);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1429b1a46 FUN_1429b1a46 body=77 status=ok
// SIG undefined FUN_1429b1a46(void)

void FUN_1429b1a46(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar1 - iVar3) * 8),
            (longlong)iVar3 << 3);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1429b1a94 FUN_1429b1a94 body=72 status=ok
// SIG undefined FUN_1429b1a94(void)

void FUN_1429b1a94(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)((longlong)(int)param_2 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar1 - iVar3) + *(longlong *)(param_1 + 8)),(longlong)iVar3);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1429b1adc FUN_1429b1adc body=77 status=ok
// SIG undefined FUN_1429b1adc(void)

void FUN_1429b1adc(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 4),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar1 - iVar3) * 4),
            (longlong)iVar3 << 2);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1429b1b2a FUN_1429b1b2a body=77 status=ok
// SIG undefined FUN_1429b1b2a(void)

void FUN_1429b1b2a(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar1 - iVar3) * 8),
            (longlong)iVar3 << 3);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 1429b1c3a FUN_1429b1c3a body=898 status=ok
// SIG undefined FUN_1429b1c3a(void)

void FUN_1429b1c3a(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong in_stack_ffffffffffffffc8;
  ulonglong uVar4;
  
  uVar4 = in_stack_ffffffffffffffc8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c9935e0,L"p.Chaos.Cloth.MaxItCG",&DAT_14c75f13c,L"Max iter for CG [def: 50]",
                uVar4);
  atexit(FUN_1429aac64);
  uVar4 = uVar4 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c9935f0,L"p.Chaos.Cloth.CGTol",&DAT_14c75f13c,L"CG Tolerance [def: 1e-4]",
                uVar4);
  atexit(FUN_1429aaca9);
  uVar4 = uVar4 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c993608,L"p.Chaos.MinEvolution.ForceMaxConstraintIterations",&DAT_14c993600,
                L"Whether to force constraints to always use the worst-case maximum number of iterations"
                ,uVar4);
  atexit(FUN_1429ab117);
  uVar4 = uVar4 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14c993618,L"p.SecondChannelDelay",&DAT_14c75f140,&DAT_149dfb77a,uVar4);
  atexit(FUN_1429ae718);
  uVar4 = uVar4 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c993628,L"p.NumActiveChannels",&DAT_14c75f144,&DAT_149dfb77a,uVar4);
  atexit(FUN_1429ae75d);
  uVar4 = uVar4 & 0xffffffff00000000;
  FUN_1412c7f16(&DAT_14c993638,L"TaskGraph.TaskPriorities.PhysicsTickTask",
                L"Task and thread priotiry for Chaos physics tick",0x400,uVar4,0x200);
  atexit(FUN_1429ae7a2);
  uVar4 = uVar4 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c993680,L"p.PhysicsRunsOnGT",&DAT_14c993678,
                L"If true the physics thread runs on the game thread, but will still go wide on tasks like collision detection"
                ,uVar4);
  atexit(FUN_1429ae80c);
  uVar4 = uVar4 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c993690,L"p.UseAsyncInterpolation",&DAT_14c75f150,
                L"Whether to interpolate when async mode is enabled",uVar4);
  atexit(FUN_1429ae8fc);
  FUN_141471170(&DAT_14c9936a0,L"p.ForceDisableAsyncPhysics",&DAT_14c993850,
                L"Whether to force async physics off regardless of other settings",
                uVar4 & 0xffffffff00000000);
  atexit(FUN_1429ae941);
  DAT_14c9936b0 = (undefined8 *)0x0;
  DAT_14c9936b8 = 0;
  FUN_1446efa72(&DAT_14c9936b0,0,2,0x10);
  puVar1 = DAT_14c9936b0;
  DAT_14c9936b8 = 2;
  *DAT_14c9936b0 = &PTR_LAB_149e170a0;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_149f52ac0;
  atexit(FUN_1429ae986);
  DAT_14c9936c0 = (undefined8 *)0x0;
  DAT_14c9936c8 = 0;
  FUN_1446efa72(&DAT_14c9936c0,0,2,0x10);
  puVar1 = DAT_14c9936c0;
  DAT_14c9936c8 = 2;
  *DAT_14c9936c0 = &PTR_LAB_149e170a0;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_149f52b30;
  atexit(FUN_1429ae9e1);
  FUN_1417288fa(&DAT_14c9936d0,L"p.AsyncInterpolationMultiplier",&DAT_14c75f148,
                L"How many multiples of the fixed dt should we look behind for interpolation",
                &DAT_14c9936b0,0);
  atexit(FUN_1429aea3c);
  FUN_141703554(&DAT_14c9936e8,L"p.AsyncPhysicsBlockMode",&DAT_14c9936e0,
                L"Setting to 0 blocks on any physics steps generated from past GT Frames, and blocks on none of the tasks from current frame. 1 blocks on everything except the single most recent task (including tasks from current frame). 1 should gurantee we will always have a future output for interpolation from 2 frames in the past. 2 doesn\'t block the game thread, physics steps could be eventually be dropped if taking too much time."
                ,&DAT_14c9936c0,0);
  atexit(FUN_1429aea81);
  FUN_140056680(&DAT_14c9936f8,L"<NoName>");
  atexit((_func_5014 *)&LAB_1429af3b6);
  return;
}



// FUNCTION 1429b1fbc FUN_1429b1fbc body=69 status=ok
// SIG undefined FUN_1429b1fbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b1fbc(void)

{
  _DAT_14c993890 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b1ffe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993898,1);
  return;
}



// FUNCTION 1429b2001 FUN_1429b2001 body=69 status=ok
// SIG undefined FUN_1429b2001(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b2001(void)

{
  _DAT_14c993990 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b2043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993998,1);
  return;
}



// FUNCTION 1429b2046 FUN_1429b2046 body=69 status=ok
// SIG undefined FUN_1429b2046(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b2046(void)

{
  _DAT_14c9939a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b2088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9939a8,1);
  return;
}



// FUNCTION 1429b208b FUN_1429b208b body=69 status=ok
// SIG undefined FUN_1429b208b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b208b(void)

{
  _DAT_14c9939b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b20cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9939b8,1);
  return;
}



// FUNCTION 1429b20d0 FUN_1429b20d0 body=69 status=ok
// SIG undefined FUN_1429b20d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b20d0(void)

{
  _DAT_14c9939c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b2112. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9939c8,1);
  return;
}



// FUNCTION 1429b2115 FUN_1429b2115 body=69 status=ok
// SIG undefined FUN_1429b2115(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b2115(void)

{
  _DAT_14c9939d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b2157. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9939d8,1);
  return;
}



// FUNCTION 1429b21d7 FUN_1429b21d7 body=69 status=ok
// SIG undefined FUN_1429b21d7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b21d7(void)

{
  _DAT_14c9939e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b2219. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9939e8,1);
  return;
}



// FUNCTION 1429b221c FUN_1429b221c body=69 status=ok
// SIG undefined FUN_1429b221c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b221c(void)

{
  _DAT_14c9939f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b225e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9939f8,1);
  return;
}



// FUNCTION 1429b2261 FUN_1429b2261 body=69 status=ok
// SIG undefined FUN_1429b2261(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b2261(void)

{
  _DAT_14c993a08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b22a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993a10,1);
  return;
}



// FUNCTION 1429b22a6 FUN_1429b22a6 body=69 status=ok
// SIG undefined FUN_1429b22a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b22a6(void)

{
  _DAT_14c993a18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b22e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993a20,1);
  return;
}



// FUNCTION 1429b22eb FUN_1429b22eb body=69 status=ok
// SIG undefined FUN_1429b22eb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b22eb(void)

{
  _DAT_14c993a28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b232d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993a30,1);
  return;
}



// FUNCTION 1429b2330 FUN_1429b2330 body=145 status=ok
// SIG undefined FUN_1429b2330(void)

void FUN_1429b2330(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 8);
  iVar3 = *(int *)(lVar1 + 0x90);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x88) + lVar4 * 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x50))(plVar2,param_3);
        iVar3 = *(int *)(lVar1 + 0x90);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  FUN_144b04794(lVar1,param_3);
  FUN_1429aaea2(lVar1,param_3);
  FUN_1429ab030(lVar1,param_3);
  FUN_14010a4f4(lVar1,param_3);
  FUN_1429ab0a4(lVar1,param_3);
  return;
}



// FUNCTION 1429b23c2 FUN_1429b23c2 body=148 status=ok
// SIG undefined FUN_1429b23c2(void)

void FUN_1429b23c2(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    uVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar2 * 8);
      FUN_1429aacee(lVar1);
      FUN_14029f4ee(lVar1,param_2,0,*(undefined4 *)(lVar1 + 0x18));
      FUN_1429aad5e(lVar1,param_2,0,*(undefined4 *)(lVar1 + 0xc4));
      FUN_1429b2330(param_1,uVar2 & 0xffffffff,param_2);
      FUN_146d8d114(lVar1,param_2);
      FUN_1402d3d18(lVar1 + 8,0);
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 1429b2456 FUN_1429b2456 body=415 status=ok
// SIG undefined FUN_1429b2456(void)

void FUN_1429b2456(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_108 [40];
  undefined1 *local_e0;
  longlong *local_d8;
  undefined1 *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  longlong *local_b8;
  undefined1 *local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined1 *local_88;
  longlong *local_80;
  undefined1 *local_78;
  longlong *local_70;
  longlong local_68;
  ulonglong uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = &LAB_1429b42b0;
  local_a0 = param_1;
  local_70 = &local_a0;
  FUN_1400bd65e(*(undefined4 *)(param_1 + 0x18),&local_78,0);
  FUN_146db0946(param_1,&local_58,&local_68);
  local_88 = &LAB_1429b42c4;
  local_a0 = param_1;
  local_98 = &local_58;
  local_90 = param_2;
  local_80 = &local_a0;
  FUN_1400bd65e(uStack_50 & 0xffffffff,&local_88,0);
  local_b0 = &LAB_1429b42ee;
  local_a8 = &local_a0;
  local_a0 = param_1;
  local_98 = &local_68;
  local_90 = param_2;
  FUN_1400bd65e(uStack_60 & 0xffffffff,&local_b0,0);
  local_c0 = &LAB_1429b4318;
  local_b8 = &local_a0;
  local_a0 = param_1;
  local_98 = (longlong *)param_2;
  FUN_1400bd65e(*(undefined4 *)(param_1 + 0x18),&local_c0,0);
  local_d0 = &LAB_1429b432a;
  local_c8 = &local_a0;
  local_a0 = param_1;
  local_98 = &local_68;
  local_90 = param_2;
  FUN_1400bd65e(uStack_60 & 0xffffffff,&local_d0,0);
  local_e0 = &LAB_1429b4354;
  local_d8 = &local_a0;
  local_a0 = param_1;
  local_98 = &local_58;
  local_90 = param_2;
  FUN_1400bd65e(uStack_50 & 0xffffffff,&local_e0,0);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429b25f6 FUN_1429b25f6 body=441 status=ok
// SIG undefined FUN_1429b25f6(void)

void FUN_1429b25f6(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 *local_e0;
  code *local_d8 [2];
  undefined8 local_c8;
  undefined **local_b8;
  longlong local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined1 local_90 [32];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_70 = (undefined1 *)0x0;
  local_68 = 0x400000000;
  uVar3 = *(uint *)(param_1 + 0x18);
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (4 < uVar3) {
    FUN_14473dbc4(local_90);
    uVar3 = *(uint *)(param_1 + 0x18);
  }
  if (0 < (int)uVar3) {
    iVar5 = 0;
    do {
      local_c8 = 0;
      local_b8 = &PTR_LAB_149f55ef0;
      local_d8[0] = FUN_1429b437a;
      local_e8 = 0xff;
      local_b0 = param_1;
      local_a8 = iVar5;
      local_a0 = param_2;
      FUN_1429b27b2(&local_e0,local_d8);
      uVar2 = local_68;
      lVar6 = (longlong)(int)local_68;
      uVar3 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,uVar3);
      if (local_68._4_4_ < uVar3) {
        FUN_14476a5c8(local_90,uVar2 & 0xffffffff);
      }
      puVar4 = local_70;
      if (local_70 == (undefined1 *)0x0) {
        puVar4 = local_90;
      }
      *(undefined8 **)(puVar4 + lVar6 * 8) = local_e0;
      if (local_e0 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_e0 + 1) = *(int *)(local_e0 + 1) + 1;
        UNLOCK();
        if (local_e0 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_e0 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*local_e0)(local_e0,1);
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x18));
  }
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_90,0xff);
  puVar4 = local_70;
  if (local_70 == (undefined1 *)0x0) {
    puVar4 = local_90;
  }
  FUN_144717c65(puVar4,local_68 & 0xffffffff);
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429b27b2 FUN_1429b27b2 body=891 status=ok
// SIG undefined FUN_1429b27b2(void)

undefined8 *
FUN_1429b27b2(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             uint param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong *plVar17;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar12 = (uint *)*puVar1;
  if (puVar12 != (uint *)0x0) goto LAB_1429b287d;
  do {
    uVar10 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar10 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar10 | 1;
      __tlregdtor(&LAB_1429b3f75);
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar11 = *(undefined4 **)(lVar2 + 0x310);
    *(undefined8 *)(lVar2 + 0x310) = 0;
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar11 = 0xffffffff;
    *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
    puVar11[0x12] = 0;
    *puVar1 = puVar11;
    FUN_140217a48(puVar1);
    puVar12 = (uint *)*puVar1;
LAB_1429b287d:
    uVar14 = *(longlong *)(puVar12 + 0x10) + 0xf;
    while( true ) {
      puVar15 = (undefined8 *)(uVar14 & 0xfffffffffffffff0);
      if (puVar15 + 0x20 <= puVar12 + 0x4000) {
        *(undefined8 **)(puVar12 + 0x10) = puVar15 + 0x20;
        puVar12[0x12] = puVar12[0x12] + 1;
        FUN_1447247dc(puVar15,param_4);
        *puVar15 = &PTR_FUN_149f55930;
        puVar15[0x16] = *param_2;
        puVar15[0x18] = param_2[2];
        param_2[2] = 0;
        lVar2 = param_2[4];
        uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
        lVar7 = param_2[5];
        uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
        uVar5 = *(undefined4 *)((longlong)param_2 + 0x34);
        lVar8 = param_2[7];
        uVar6 = *(undefined4 *)((longlong)param_2 + 0x3c);
        *(int *)(puVar15 + 0x1c) = (int)param_2[6];
        *(undefined4 *)((longlong)puVar15 + 0xe4) = uVar5;
        *(int *)(puVar15 + 0x1d) = (int)lVar8;
        *(undefined4 *)((longlong)puVar15 + 0xec) = uVar6;
        *(int *)(puVar15 + 0x1a) = (int)lVar2;
        *(undefined4 *)((longlong)puVar15 + 0xd4) = uVar3;
        *(int *)(puVar15 + 0x1b) = (int)lVar7;
        *(undefined4 *)((longlong)puVar15 + 0xdc) = uVar4;
        if (puVar15[0x16] != 0) {
          *param_2 = 0;
        }
        *(uint *)(puVar15 + 0x1e) = param_5;
        if ((param_5 & 0xff) == 0xff) {
          uVar10 = param_5 >> 10 & 3;
          iVar16 = 0;
          if ((param_5 >> 9 & 1) == 0 || uVar10 < 2) {
            uVar14 = (ulonglong)(byte)(&DAT_149e38edc)[uVar10];
          }
          else {
            uVar14 = 2;
          }
        }
        else {
          iVar16 = (param_5 >> 7 & 2 | param_5 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + (ulonglong)(param_5 & 0xff) * 4);
          uVar14 = 5;
        }
        if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
        }
        puVar15[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar15[9] = puVar15;
        puVar15[10] = puVar15;
        lVar2 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar2 == 0) {
          uVar9 = 1;
          if ((char)uVar14 != '\x06') {
            uVar9 = uVar14;
          }
          uVar14 = uVar9;
          uVar13 = 0;
        }
        else {
          if ((char)uVar14 == '\x06') {
            uVar14 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar2 + 0x30);
        }
        puVar15[0xf] = uVar13;
        puVar15[0x10] = uVar14 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar16;
        *param_1 = puVar15;
        uVar13 = 0;
        if (puVar15 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          uVar13 = *param_1;
        }
        local_39 = 1;
        FUN_1447439e4(uVar13);
        if (*param_2 != 0) {
          plVar17 = param_2 + 4;
          if ((longlong *)param_2[2] != (longlong *)0x0) {
            plVar17 = (longlong *)param_2[2];
          }
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
        if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
      LOCK();
      uVar10 = *puVar12;
      *puVar12 = *puVar12 + puVar12[0x12] + 1;
      UNLOCK();
      if ((uVar10 ^ puVar12[0x12]) != 0xffffffff) break;
      puVar12 = (uint *)*puVar1;
      *puVar12 = 0xffffffff;
      *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
      puVar12[0x12] = 0;
      *puVar1 = puVar12;
      uVar14 = (longlong)puVar12 + 0x67;
    }
  } while( true );
}



// FUNCTION 1429b2b2e FUN_1429b2b2e body=56 status=ok
// SIG undefined FUN_1429b2b2e(void)

void FUN_1429b2b2e(undefined1 *param_1,undefined1 *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined1 **ppuVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 auStack_108 [32];
  undefined4 uStack_e8;
  undefined8 *puStack_e0;
  undefined1 **ppuStack_d8;
  undefined1 *puStack_d0;
  undefined1 **ppuStack_c8;
  undefined1 *puStack_c0;
  undefined1 **ppuStack_b8;
  undefined1 *puStack_b0;
  undefined1 **ppuStack_a8;
  undefined1 *puStack_a0;
  longlong *plStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 **ppuStack_80;
  undefined1 *puStack_78;
  undefined1 **ppuStack_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  
  uVar7 = SUB84(param_2,0);
  if ((DAT_14c99384c == 0) && (*(int *)(param_1 + 0x10) != 1)) {
    if (DAT_14c75f160 == 2) {
      uStack_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
      ppuStack_70 = (undefined1 **)0x0;
      uStack_68 = 0x400000000;
      uVar2 = *(uint *)(param_1 + 0x18);
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar2);
      }
      if (4 < uVar2) {
        FUN_14473dbc4(&puStack_90);
        uVar2 = *(uint *)(param_1 + 0x18);
      }
      if (0 < (int)uVar2) {
        iVar5 = 0;
        do {
          ppuStack_c8 = (undefined1 **)0x0;
          ppuStack_b8 = &PTR_LAB_149f55ef0;
          ppuStack_a8 = (undefined1 **)CONCAT44(ppuStack_a8._4_4_,iVar5);
          ppuStack_d8 = (undefined1 **)FUN_1429b437a;
          uStack_e8 = 0xff;
          puStack_b0 = param_1;
          puStack_a0 = param_2;
          FUN_1429b27b2(&puStack_e0,&ppuStack_d8);
          uVar4 = uStack_68;
          lVar6 = (longlong)(int)uStack_68;
          uVar2 = (int)uStack_68 + 1;
          uStack_68 = CONCAT44(uStack_68._4_4_,uVar2);
          if (uStack_68._4_4_ < uVar2) {
            FUN_14476a5c8(&puStack_90,uVar4 & 0xffffffff);
          }
          ppuVar3 = ppuStack_70;
          if (ppuStack_70 == (undefined1 **)0x0) {
            ppuVar3 = &puStack_90;
          }
          ppuVar3[lVar6] = (undefined1 *)puStack_e0;
          if (puStack_e0 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puStack_e0 + 1) = *(int *)(puStack_e0 + 1) + 1;
            UNLOCK();
            if (puStack_e0 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puStack_e0 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puStack_e0)(puStack_e0,1);
              }
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 0x18));
      }
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,&puStack_90,0xff);
      ppuVar3 = ppuStack_70;
      if (ppuStack_70 == (undefined1 **)0x0) {
        ppuVar3 = &puStack_90;
      }
      FUN_144717c65(ppuVar3,uStack_68 & 0xffffffff);
      if (ppuStack_70 != (undefined1 **)0x0) {
        FUN_1400020a8();
      }
      if ((uStack_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if (DAT_14c75f160 == 1) {
      uVar4 = DAT_14c707940 ^ (ulonglong)auStack_108;
      lStack_58 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      puStack_78 = &LAB_1429b42b0;
      puStack_a0 = param_1;
      ppuStack_70 = &puStack_a0;
      FUN_1400bd65e(*(undefined4 *)(param_1 + 0x18),&puStack_78,0);
      FUN_146db0946(param_1,&lStack_58,&uStack_68);
      puStack_88 = &LAB_1429b42c4;
      puStack_a0 = param_1;
      plStack_98 = &lStack_58;
      puStack_90 = param_2;
      ppuStack_80 = &puStack_a0;
      FUN_1400bd65e(uStack_50 & 0xffffffff,&puStack_88,0);
      puStack_b0 = &LAB_1429b42ee;
      ppuStack_a8 = &puStack_a0;
      puStack_a0 = param_1;
      plStack_98 = &uStack_68;
      puStack_90 = param_2;
      FUN_1400bd65e(uStack_60 & 0xffffffff,&puStack_b0,0);
      puStack_c0 = &LAB_1429b4318;
      ppuStack_b8 = &puStack_a0;
      puStack_a0 = param_1;
      plStack_98 = (longlong *)param_2;
      FUN_1400bd65e(*(undefined4 *)(param_1 + 0x18),&puStack_c0,0);
      puStack_d0 = &LAB_1429b432a;
      ppuStack_c8 = &puStack_a0;
      puStack_a0 = param_1;
      plStack_98 = &uStack_68;
      puStack_90 = param_2;
      FUN_1400bd65e(uStack_60 & 0xffffffff,&puStack_d0,0);
      puStack_e0 = (undefined8 *)&LAB_1429b4354;
      ppuStack_d8 = &puStack_a0;
      puStack_a0 = param_1;
      plStack_98 = &lStack_58;
      puStack_90 = param_2;
      FUN_1400bd65e(uStack_50 & 0xffffffff,&puStack_e0,0);
      if (uStack_68 != 0) {
        FUN_1400020a8();
      }
      if (lStack_58 != 0) {
        FUN_1400020a8();
      }
      if ((uVar4 ^ (ulonglong)auStack_108) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if (DAT_14c75f160 != 0) {
      return;
    }
  }
  if (0 < *(int *)(param_1 + 0x18)) {
    uVar4 = 0;
    do {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar4 * 8);
      uStack_50 = 0x1429b23ec;
      FUN_1429aacee(lVar6);
      uStack_50 = 0x1429b23fe;
      FUN_14029f4ee(lVar6,uVar7,0,*(undefined4 *)(lVar6 + 0x18));
      uStack_50 = 0x1429b2413;
      FUN_1429aad5e(lVar6,uVar7,0,*(undefined4 *)(lVar6 + 0xc4));
      uStack_50 = 0x1429b2420;
      FUN_1429b2330(param_1,uVar4 & 0xffffffff,uVar7);
      uStack_50 = 0x1429b242b;
      FUN_146d8d114(lVar6,uVar7);
      uStack_50 = 0x1429b243d;
      FUN_1402d3d18(lVar6 + 8,0);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 1429b2b66 FUN_1429b2b66 body=69 status=ok
// SIG undefined FUN_1429b2b66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b2b66(void)

{
  _DAT_14c993a40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b2ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993a48,1);
  return;
}



// FUNCTION 1429b2bab FUN_1429b2bab body=69 status=ok
// SIG undefined FUN_1429b2bab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b2bab(void)

{
  _DAT_14c993a50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b2bed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993a58,1);
  return;
}



// FUNCTION 1429b2bf0 FUN_1429b2bf0 body=69 status=ok
// SIG undefined FUN_1429b2bf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b2bf0(void)

{
  _DAT_14c993a60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b2c32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993a68,1);
  return;
}



// FUNCTION 1429b2c35 FUN_1429b2c35 body=69 status=ok
// SIG undefined FUN_1429b2c35(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b2c35(void)

{
  _DAT_14c993a70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b2c77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993a78,1);
  return;
}



// FUNCTION 1429b2c7a FUN_1429b2c7a body=69 status=ok
// SIG undefined FUN_1429b2c7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b2c7a(void)

{
  _DAT_14c993a80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b2cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993a88,1);
  return;
}



// FUNCTION 1429b2cbf FUN_1429b2cbf body=69 status=ok
// SIG undefined FUN_1429b2cbf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b2cbf(void)

{
  _DAT_14c993a98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b2d01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993aa0,1);
  return;
}



// FUNCTION 1429b2d04 FUN_1429b2d04 body=69 status=ok
// SIG undefined FUN_1429b2d04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b2d04(void)

{
  _DAT_14c993aa8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b2d46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993ab0,1);
  return;
}



// FUNCTION 1429b2d49 FUN_1429b2d49 body=69 status=ok
// SIG undefined FUN_1429b2d49(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b2d49(void)

{
  _DAT_14c993ab8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b2d8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993ac0,1);
  return;
}



// FUNCTION 1429b2d8e FUN_1429b2d8e body=69 status=ok
// SIG undefined FUN_1429b2d8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b2d8e(void)

{
  _DAT_14c993ac8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b2dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993ad0,1);
  return;
}



// FUNCTION 1429b2dd3 FUN_1429b2dd3 body=69 status=ok
// SIG undefined FUN_1429b2dd3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b2dd3(void)

{
  _DAT_14c993ad8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b2e15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993ae0,1);
  return;
}



// FUNCTION 1429b2e18 FUN_1429b2e18 body=134 status=ok
// SIG undefined FUN_1429b2e18(void)

void FUN_1429b2e18(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x38)) {
    plVar1 = (longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      FUN_144aa5210(param_1,*(undefined8 *)(*plVar1 + lVar4 * 8));
      lVar4 = lVar4 + 1;
      iVar2 = *(int *)(param_1 + 0x38);
    } while (lVar4 < iVar2);
    if (0 < iVar2) {
      uVar3 = (longlong)iVar2 + 1;
      do {
        lVar4 = *(longlong *)(*plVar1 + -0x10 + uVar3 * 8);
        if (((*(int *)(lVar4 + 0x18) == 0) && (lVar4 != 0)) && (*(longlong *)(lVar4 + 8) == 0)) {
          FUN_140782aaa(plVar1);
        }
        uVar3 = uVar3 - 1;
      } while (1 < uVar3);
    }
  }
  return;
}



// FUNCTION 1429b2e9e FUN_1429b2e9e body=1491 status=ok
// SIG undefined FUN_1429b2e9e(void)

void FUN_1429b2e9e(longlong param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  void *pvVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  char cVar19;
  longlong *plVar20;
  longlong lVar21;
  char cVar22;
  longlong lVar23;
  longlong *plVar24;
  char cVar25;
  longlong lVar26;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  uVar3 = *(uint *)(param_1 + 0x138);
  if ((int)uVar3 < 1) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4();
    }
  }
  else {
    uStack_50 = (ulonglong)uVar3;
    FUN_1446f48e2(&local_58,0);
  }
  local_98 = param_1;
  if ((longlong)*(int *)(param_1 + 0xf8) != 0) {
    plVar9 = *(longlong **)(param_1 + 0xf0);
    local_80 = plVar9 + *(int *)(param_1 + 0xf8);
    local_70 = param_1 + 0xb0;
    do {
      pvVar7 = local_58;
      plVar5 = (longlong *)*plVar9;
      local_78 = plVar9;
      if (0 < (longlong)(int)uStack_50) {
        memset(local_58,0,(longlong)(int)uStack_50 << 2);
      }
      if ((longlong)(int)plVar5[1] != 0) {
        plVar8 = (longlong *)*plVar5;
        plVar9 = plVar8 + (int)plVar5[1];
        iVar11 = 0;
        plVar16 = (longlong *)0x0;
        do {
          plVar20 = (longlong *)*plVar8;
          if ((plVar16 == (longlong *)0x0) || ((int)plVar16[0x10] < (int)plVar20[0x10])) {
            plVar16 = plVar20;
          }
          iVar11 = iVar11 + (int)plVar20[1];
          if (0 < (int)plVar20[0xd]) {
            lVar23 = 8;
            lVar26 = 0;
            do {
              plVar10 = (longlong *)plVar20[0xc];
              if ((longlong *)plVar20[0xc] == (longlong *)0x0) {
                plVar10 = plVar20 + 2;
              }
              piVar1 = (int *)((longlong)pvVar7 + lVar26 * 4);
              *piVar1 = *piVar1 + *(int *)((longlong)plVar10 + lVar23);
              lVar26 = lVar26 + 1;
              lVar23 = lVar23 + 0x10;
            } while (lVar26 < (int)plVar20[0xd]);
          }
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar9);
        if (plVar16 != (longlong *)0x0) {
          if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar11);
          }
          if (*(int *)((longlong)plVar16 + 0xc) < iVar11) {
            FUN_1409669a6(plVar16);
          }
          if (0 < (int)uStack_50) {
            lVar23 = 0;
            lVar26 = 0;
            iVar11 = (int)uStack_50;
            do {
              plVar9 = (longlong *)plVar16[0xc];
              if ((longlong *)plVar16[0xc] == (longlong *)0x0) {
                plVar9 = plVar16 + 2;
              }
              iVar4 = *(int *)((longlong)local_58 + lVar26 * 4);
              if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar4);
              }
              if (*(int *)((longlong)plVar9 + lVar23 + 0xc) < iVar4) {
                FUN_141729b26((longlong)plVar9 + lVar23);
                iVar11 = (int)uStack_50;
              }
              lVar26 = lVar26 + 1;
              lVar23 = lVar23 + 0x10;
            } while (lVar26 < iVar11);
          }
          if ((longlong)(int)plVar5[1] != 0) {
            plVar8 = (longlong *)*plVar5;
            local_68 = plVar8 + (int)plVar5[1];
            plVar9 = plVar16 + 2;
            local_90 = plVar9;
            do {
              plVar5 = (longlong *)*plVar8;
              plVar5[0xe] = 0;
              *(undefined4 *)(plVar5 + 0xf) = 0xffffffff;
              if (plVar16 != plVar5) {
                uVar3 = *(uint *)(plVar16 + 0x12);
                iVar11 = *(int *)((longlong)plVar5 + 0x84);
                if (*(int *)((longlong)plVar16 + 0x84) < *(int *)((longlong)plVar5 + 0x84)) {
                  iVar11 = *(int *)((longlong)plVar16 + 0x84);
                }
                *(int *)((longlong)plVar16 + 0x84) = iVar11;
                *(uint *)(plVar16 + 0x12) = uVar3 | 1;
                if ((uVar3 & 2) == 0) {
                  uVar12 = *(uint *)(plVar5 + 0x12) & 2;
                }
                else {
                  uVar12 = 2;
                }
                *(uint *)(plVar16 + 0x12) = uVar3 & 0xfffffffd | 1 | uVar12;
                uVar13 = 0;
                uVar17 = 0;
                if ((uVar3 & 4) != 0) {
                  uVar17 = *(uint *)(plVar5 + 0x12) & 4;
                }
                *(uint *)(plVar16 + 0x12) = uVar3 & 0xfffffff9 | 1 | uVar12 | uVar17;
                if ((uVar3 & 8) != 0) {
                  uVar13 = *(uint *)(plVar5 + 0x12) & 8;
                }
                *(uint *)(plVar16 + 0x12) = uVar3 & 0xfffffff1 | 1 | uVar12 | uVar17 | uVar13;
                if ((uVar3 & 0x10) == 0) {
                  uVar14 = *(uint *)(plVar5 + 0x12) & 0x10;
                }
                else {
                  uVar14 = 0x10;
                }
                *(uint *)(plVar16 + 0x12) =
                     uVar3 & 0xffffffe1 | 1 | uVar12 | uVar17 | uVar13 | uVar14;
                uVar15 = 0x20;
                if ((uVar3 & 0x20) == 0) {
                  uVar15 = *(uint *)(plVar5 + 0x12) & 0x20;
                }
                *(uint *)(plVar16 + 0x12) =
                     uVar3 & 0xffffff81 | 1 | uVar12 | uVar17 | uVar13 | uVar14 | uVar15;
                lVar23 = plVar5[1];
                if ((longlong)(int)lVar23 != 0) {
                  lVar26 = *plVar5;
                  iVar11 = (int)plVar16[1];
                  lVar18 = 0;
                  do {
                    plVar20 = *(longlong **)(lVar26 + lVar18);
                    if ((*(byte *)((longlong)plVar20 + 0x2c) & 1) != 0) {
                      plVar20[1] = (longlong)plVar16;
                      *(int *)(plVar20 + 5) = iVar11;
                      plVar20 = (longlong *)*plVar20;
                      if (*(byte *)((longlong)plVar20 + 0xc) < 2) {
                        plVar20 = (longlong *)0x0;
                      }
                      lVar21 = *(longlong *)(*plVar20 + 0x500);
                      lVar6 = (longlong)(int)plVar20[1] * 3;
                      cVar22 = *(char *)(lVar21 + 1 + lVar6);
                      cVar25 = *(char *)(lVar21 + 2 + lVar6);
                      cVar2 = (char)*(undefined4 *)((longlong)plVar16 + 0x94);
                      if (cVar25 <= *(char *)((longlong)plVar16 + 0x96)) {
                        cVar25 = *(char *)((longlong)plVar16 + 0x96);
                      }
                      if (cVar22 <= *(char *)((longlong)plVar16 + 0x95)) {
                        cVar22 = *(char *)((longlong)plVar16 + 0x95);
                      }
                      cVar19 = *(char *)(lVar21 + lVar6);
                      if (*(char *)(lVar21 + lVar6) <= cVar2) {
                        cVar19 = cVar2;
                      }
                      if (cVar19 < '\0') {
                        cVar19 = -1;
                      }
                      if (cVar22 < '\0') {
                        cVar22 = -1;
                      }
                      if (cVar25 < '\0') {
                        cVar25 = -1;
                      }
                      iVar11 = iVar11 + 1;
                      *(char *)((longlong)plVar16 + 0x94) = cVar19;
                      *(char *)((longlong)plVar16 + 0x95) = cVar22;
                      *(char *)((longlong)plVar16 + 0x96) = cVar25;
                    }
                    lVar18 = lVar18 + 8;
                  } while ((longlong)(int)lVar23 * 8 != lVar18);
                }
                plVar20 = plVar5 + 2;
                iVar11 = (int)plVar5[0xd];
                if (0 < iVar11) {
                  lVar23 = 0;
                  do {
                    plVar10 = (longlong *)plVar5[0xc];
                    if ((longlong *)plVar5[0xc] == (longlong *)0x0) {
                      plVar10 = plVar20;
                    }
                    lVar26 = plVar10[lVar23 * 2 + 1];
                    if ((longlong)(int)lVar26 != 0) {
                      plVar24 = (longlong *)plVar16[0xc];
                      if ((longlong *)plVar16[0xc] == (longlong *)0x0) {
                        plVar24 = plVar9;
                      }
                      lVar18 = plVar10[lVar23 * 2];
                      iVar11 = (int)plVar24[lVar23 * 2 + 1];
                      lVar21 = 0;
                      do {
                        lVar6 = *(longlong *)(lVar18 + lVar21);
                        *(longlong **)(lVar6 + 8) = plVar16;
                        *(int *)(lVar6 + 0x34) = iVar11;
                        iVar11 = iVar11 + 1;
                        lVar21 = lVar21 + 8;
                      } while ((longlong)(int)lVar26 * 8 != lVar21);
                      iVar11 = (int)plVar5[0xd];
                    }
                    lVar23 = lVar23 + 1;
                  } while (lVar23 < iVar11);
                }
                uVar3 = *(uint *)(plVar5 + 1);
                local_60 = plVar8;
                if ((longlong)(int)uVar3 != 0) {
                  iVar11 = (int)plVar16[1];
                  *(uint *)(plVar16 + 1) = iVar11 + uVar3;
                  if ((uint)(*(int *)((longlong)plVar16 + 0xc) - iVar11) < uVar3) {
                    FUN_140479b38(plVar16,iVar11);
                  }
                  memmove((void *)((longlong)iVar11 * 8 + *plVar16),(void *)*plVar5,
                          (longlong)(int)uVar3 << 3);
                }
                plVar9 = local_90;
                *(undefined4 *)(plVar5 + 1) = 0;
                if (*(int *)((longlong)plVar5 + 0xc) < 0) {
                  FUN_1409669a6(plVar5,0);
                }
                if (0 < (int)plVar5[0xd]) {
                  lVar26 = 0;
                  lVar23 = 0;
                  do {
                    plVar8 = (longlong *)plVar5[0xc];
                    if ((longlong *)plVar5[0xc] == (longlong *)0x0) {
                      plVar8 = plVar20;
                    }
                    *(int *)(plVar16 + 0x10) =
                         (int)plVar16[0x10] + *(int *)((longlong)plVar8 + lVar26 + 8);
                    plVar8 = (longlong *)plVar16[0xc];
                    if ((longlong *)plVar16[0xc] == (longlong *)0x0) {
                      plVar8 = plVar9;
                    }
                    plVar10 = (longlong *)plVar5[0xc];
                    plVar24 = plVar10;
                    if (plVar10 == (longlong *)0x0) {
                      plVar24 = plVar20;
                    }
                    uVar3 = *(uint *)((longlong)plVar24 + lVar26 + 8);
                    if ((longlong)(int)uVar3 != 0) {
                      plVar9 = (longlong *)((longlong)plVar8 + lVar26);
                      iVar11 = *(int *)((longlong)plVar8 + lVar26 + 8);
                      *(uint *)((longlong)plVar8 + lVar26 + 8) = iVar11 + uVar3;
                      if ((uint)(*(int *)((longlong)plVar8 + lVar26 + 0xc) - iVar11) < uVar3) {
                        local_88 = plVar9;
                        FUN_14082058a(plVar9,iVar11);
                        plVar9 = local_88;
                      }
                      memmove((void *)((longlong)iVar11 * 8 + *plVar9),
                              *(void **)((longlong)plVar24 + lVar26),(longlong)(int)uVar3 << 3);
                      *(undefined4 *)((longlong)plVar24 + lVar26 + 8) = 0;
                      plVar10 = (longlong *)plVar5[0xc];
                      plVar9 = local_90;
                    }
                    if (plVar10 == (longlong *)0x0) {
                      plVar10 = plVar20;
                    }
                    *(undefined4 *)((longlong)plVar10 + lVar26 + 8) = 0;
                    if (*(int *)((longlong)plVar10 + lVar26 + 0xc) < 0) {
                      FUN_141729b26((longlong)plVar10 + lVar26,0);
                    }
                    lVar23 = lVar23 + 1;
                    lVar26 = lVar26 + 0x10;
                  } while (lVar23 < (int)plVar5[0xd]);
                }
                plVar8 = local_60;
                *(undefined4 *)(plVar5 + 0x10) = 0;
                if (plVar5 != (longlong *)0x0) {
                  FUN_140d9d8c4(local_70,plVar5);
                }
              }
              plVar8 = plVar8 + 1;
            } while (plVar8 != local_68);
          }
        }
      }
      plVar9 = local_78 + 1;
    } while (plVar9 != local_80);
  }
  FUN_140d9d68a(local_98 + 0xf0);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429b3474 FUN_1429b3474 body=152 status=ok
// SIG undefined FUN_1429b3474(void)

void FUN_1429b3474(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  
  if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
    plVar4 = *(longlong **)(param_1 + 0xb0);
    plVar1 = plVar4 + *(int *)(param_1 + 0xb8);
    do {
      plVar3 = (longlong *)*plVar4;
      uVar2 = *(uint *)(plVar3 + 0x12);
      if ((uVar2 & 0x20) != 0) {
        uVar6 = 0;
        if ((uVar2 & 4) != 0) {
          if ((longlong)(int)plVar3[1] != 0) {
            lVar5 = 0;
            do {
              uVar6 = 0;
              if ((*(byte *)(*(longlong *)(*plVar3 + lVar5) + 0x2c) & 2) == 0) goto LAB_1429b34cd;
              lVar5 = lVar5 + 8;
            } while ((longlong)(int)plVar3[1] * 8 != lVar5);
          }
          uVar6 = 1;
        }
LAB_1429b34cd:
        if ((uVar2 >> 3 & 1) != uVar6) {
          *(uint *)(plVar3 + 0x12) = (uVar2 & 0xfffffff7) + uVar6 * 8;
          *(undefined4 *)((longlong)plVar3 + 0x84) = 0;
        }
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  return;
}



// FUNCTION 1429b350c FUN_1429b350c body=113 status=ok
// SIG undefined FUN_1429b350c(void)

void FUN_1429b350c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xb0);
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar6);
      uVar2 = *(uint *)(lVar4 + 0x90);
      uVar5 = (uVar2 & 8) >> 3;
      if ((uVar2 & 3) != 0 && (char)uVar5 == '\0') {
        if (*(char *)(param_1 + 0x149) == '\x01') {
          FUN_1409666ac(uVar5,lVar4);
        }
        FUN_144b048e4();
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return;
}



// FUNCTION 1429b357e FUN_1429b357e body=2011 status=ok
// SIG undefined FUN_1429b357e(void)

void FUN_1429b357e(longlong param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  void *pvVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  byte bVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  char cVar20;
  char cVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  longlong *plVar25;
  longlong lVar26;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar25 = (longlong *)(param_1 + 0xb0);
  if (0 < (longlong)*(int *)(param_1 + 0xb8)) {
    local_60 = (longlong *)(param_1 + 0x30);
    lVar13 = (longlong)*(int *)(param_1 + 0xb8);
    do {
      plVar4 = *(longlong **)(*plVar25 + -8 + lVar13 * 8);
      uVar11 = *(uint *)(plVar4 + 0x12);
      if ((uVar11 & 0x38) != 0x18) {
        FUN_140aa614a(param_1,plVar4);
        FUN_140aa60a2();
        uVar11 = *(uint *)(plVar4 + 0x12) & 0xffffffbf;
        *(uint *)(plVar4 + 0x12) = uVar11;
        *(undefined4 *)((longlong)plVar4 + 0x8c) = 0xffffffff;
        plVar12 = plVar4 + 2;
        if ((longlong *)plVar4[0xc] != (longlong *)0x0) {
          plVar12 = (longlong *)plVar4[0xc];
        }
        if ((longlong)(int)plVar4[0xd] != 0) {
          plVar17 = plVar12 + (longlong)(int)plVar4[0xd] * 2;
          iVar22 = -1;
          do {
            if ((longlong)(int)plVar12[1] != 0) {
              plVar19 = (longlong *)*plVar12;
              plVar18 = plVar19 + (int)plVar12[1];
              do {
                lVar16 = *plVar19;
                lVar26 = 0;
                bVar7 = true;
                do {
                  bVar14 = bVar7;
                  lVar26 = *(longlong *)(lVar16 + 0x10 + lVar26 * 8);
                  if (lVar26 != 0) {
                    uVar11 = uVar11 | (*(uint *)(lVar26 + 0x2c) & 8) << 3;
                    *(uint *)(plVar4 + 0x12) = uVar11;
                    iVar23 = *(int *)(lVar26 + 0x48);
                    if ((iVar22 != -1) && (iVar22 < iVar23)) {
                      iVar23 = iVar22;
                    }
                    *(int *)((longlong)plVar4 + 0x8c) = iVar23;
                    iVar22 = iVar23;
                  }
                  lVar26 = 1;
                  bVar7 = false;
                } while (bVar14);
                plVar19 = plVar19 + 1;
              } while (plVar19 != plVar18);
            }
            plVar12 = plVar12 + 2;
          } while (plVar12 != plVar17);
        }
      }
      if ((int)plVar4[0x10] == 0) {
        if (0 < (longlong)(int)plVar4[1]) {
          uVar24 = (longlong)(int)plVar4[1] + 1;
          do {
            plVar12 = *(longlong **)(*plVar4 + -0x10 + uVar24 * 8);
            plVar17 = (longlong *)*plVar12;
            if ((plVar17 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar17 + 0xc))) {
              *(undefined1 *)(*(longlong *)(*plVar17 + 0x4d0) + (longlong)(int)plVar17[1]) =
                   *(undefined1 *)((longlong)plVar4 + 0x84);
            }
            FUN_140782a1c();
            if (plVar12 != (longlong *)0x0) {
              FUN_140782aaa(local_60);
            }
            uVar24 = uVar24 - 1;
          } while (1 < uVar24);
        }
        if (plVar4 != (longlong *)0x0) {
          FUN_140d9d8c4(plVar25);
        }
      }
      else {
        if ((uVar11 & 0x1c) != 4) {
          *(undefined4 *)((longlong)plVar4 + 0x84) = 0;
        }
        if (((uVar11 & 3) != 0) && (DAT_14c75f18c == '\x01')) {
          *(undefined2 *)((longlong)plVar4 + 0x94) = 0;
          *(undefined1 *)((longlong)plVar4 + 0x96) = 0;
          if ((longlong)(int)plVar4[1] != 0) {
            lVar16 = 0;
            cVar9 = '\0';
            cVar20 = '\0';
            cVar21 = '\0';
            do {
              if ((*(byte *)((longlong)*(longlong **)(*plVar4 + lVar16) + 0x2c) & 1) != 0) {
                plVar12 = (longlong *)**(longlong **)(*plVar4 + lVar16);
                if (*(byte *)((longlong)plVar12 + 0xc) < 2) {
                  plVar12 = (longlong *)0x0;
                }
                lVar26 = *(longlong *)(*plVar12 + 0x500);
                lVar8 = (longlong)(int)plVar12[1] * 3;
                cVar1 = *(char *)(lVar26 + 1 + lVar8);
                cVar2 = *(char *)(lVar26 + 2 + lVar8);
                if (cVar9 < cVar2) {
                  cVar9 = cVar2;
                }
                if (cVar20 < cVar1) {
                  cVar20 = cVar1;
                }
                if (cVar21 < *(char *)(lVar26 + lVar8)) {
                  cVar21 = *(char *)(lVar26 + lVar8);
                }
                if (cVar21 < '\0') {
                  cVar21 = -1;
                }
                if (cVar20 < '\0') {
                  cVar20 = -1;
                }
                if (cVar9 < '\0') {
                  cVar9 = -1;
                }
                *(char *)((longlong)plVar4 + 0x94) = cVar21;
                *(char *)((longlong)plVar4 + 0x95) = cVar20;
                *(char *)((longlong)plVar4 + 0x96) = cVar9;
              }
              lVar16 = lVar16 + 8;
            } while ((longlong)(int)plVar4[1] * 8 != lVar16);
          }
        }
        *(uint *)(plVar4 + 0x12) = (uVar11 & 0xffffffcc) + (uVar11 & 8) * 2;
        *(undefined4 *)((longlong)plVar4 + 0x8c) = 0xffffffff;
      }
      bVar7 = 1 < lVar13;
      lVar13 = lVar13 + -1;
    } while (bVar7);
  }
  if ((DAT_14c993a38 == '\x01') && (*(int *)(param_1 + 0xf8) == 0)) {
    if ((longlong)*(int *)(param_1 + 0x38) != 0) {
      plVar12 = *(longlong **)(param_1 + 0x30);
      plVar4 = plVar12 + *(int *)(param_1 + 0x38);
      do {
        plVar18 = (longlong *)*plVar12;
        uVar11 = *(uint *)((longlong)plVar18 + 0x2c);
        plVar17 = (longlong *)plVar18[1];
        if ((uVar11 & 1) == 0) {
          if (plVar17 != (longlong *)0x0) goto LAB_1429b386e;
          iVar22 = (int)plVar18[3];
          plVar17 = (longlong *)0x0;
        }
        else {
          if ((((plVar17 == (longlong *)0x0) || (iVar22 = (int)plVar18[3], iVar22 < 1)) ||
              (*(longlong **)(*plVar25 + (longlong)*(int *)((longlong)plVar17 + 0x7c) * 8) !=
               plVar17)) || ((longlong)(int)plVar17[1] == 0)) goto LAB_1429b386e;
          lVar13 = 0;
          while (*(longlong **)(*plVar17 + lVar13) != plVar18) {
            lVar13 = lVar13 + 8;
            if ((longlong)(int)plVar17[1] * 8 == lVar13) goto LAB_1429b386e;
          }
          if ((*(longlong **)(*plVar17 + (longlong)(int)plVar18[5] * 8) != plVar18) ||
             (((*(byte *)(plVar17 + 0x12) & 8) != 0 &&
              (((plVar19 = (longlong *)*plVar18, plVar19 == (longlong *)0x0 ||
                (*(byte *)((longlong)plVar19 + 0xc) < 2)) ||
               (*(char *)(*(longlong *)(*plVar19 + 0x2c0) + 0xb + (longlong)(int)plVar19[1] * 0x10)
                != '\x01')))))) goto LAB_1429b386e;
        }
        if (iVar22 != 0) {
          lVar13 = 0;
          do {
            lVar16 = *(longlong *)(plVar18[2] + lVar13);
            if (((*(longlong **)(lVar16 + 0x10) != plVar18) &&
                (*(longlong **)(lVar16 + 0x18) != plVar18)) ||
               (((uVar11 & 1) != 0 && (plVar17 != *(longlong **)(lVar16 + 8))))) goto LAB_1429b386e;
            lVar13 = lVar13 + 8;
          } while ((longlong)iVar22 * 8 != lVar13);
        }
        plVar18 = (longlong *)*plVar18;
        if ((plVar18 == (longlong *)0x0) || (*(byte *)((longlong)plVar18 + 0xc) < 2)) {
          if ((uVar11 & 2) != 0) goto LAB_1429b386e;
        }
        else if (((uVar11 & 2) == 0) ==
                 (*(char *)(*(longlong *)(*plVar18 + 0x2c0) + 0xb + (longlong)(int)plVar18[1] * 0x10
                           ) == '\x01')) goto LAB_1429b386e;
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar4);
    }
    if ((longlong)*(int *)(param_1 + 0x78) == 0) {
      bVar15 = 1;
    }
    else {
      plVar12 = *(longlong **)(param_1 + 0x70);
      plVar4 = plVar12 + *(int *)(param_1 + 0x78);
      bVar15 = 1;
      do {
        if (bVar15 == 0) goto LAB_1429b386e;
        puVar5 = (undefined8 *)*plVar12;
        lVar13 = puVar5[2];
        if (lVar13 != 0) {
          if ((longlong)*(int *)(lVar13 + 0x18) == 0) goto LAB_1429b386e;
          lVar16 = 0;
          while (*(undefined8 **)(*(longlong *)(lVar13 + 0x10) + lVar16) != puVar5) {
            lVar16 = lVar16 + 8;
            if ((longlong)*(int *)(lVar13 + 0x18) * 8 == lVar16) goto LAB_1429b386e;
          }
        }
        lVar13 = puVar5[3];
        if (lVar13 != 0) {
          if ((longlong)*(int *)(lVar13 + 0x18) == 0) goto LAB_1429b386e;
          lVar16 = 0;
          while (*(undefined8 **)(*(longlong *)(lVar13 + 0x10) + lVar16) != puVar5) {
            lVar16 = lVar16 + 8;
            if ((longlong)*(int *)(lVar13 + 0x18) * 8 == lVar16) goto LAB_1429b386e;
          }
        }
        lVar13 = puVar5[1];
        if ((lVar13 == 0) ||
           (*(longlong *)(*plVar25 + (longlong)*(int *)(lVar13 + 0x7c) * 8) != lVar13))
        goto LAB_1429b386e;
        lVar16 = lVar13 + 0x10;
        if (*(longlong *)(lVar13 + 0x60) != 0) {
          lVar16 = *(longlong *)(lVar13 + 0x60);
        }
        if (*(undefined8 **)
             (*(longlong *)(lVar16 + (longlong)*(int *)(puVar5 + 6) * 0x10) +
             (longlong)*(int *)((longlong)puVar5 + 0x34) * 8) != puVar5) goto LAB_1429b386e;
        cVar9 = (**(code **)(*(longlong *)*puVar5 + 0x30))();
        bVar15 = 1;
        if (cVar9 != '\0') {
          uVar11 = *(uint *)(puVar5[1] + 0x90) >> 3 ^ *(uint *)(puVar5 + 8);
          if ((uVar11 & 1) != 0) goto LAB_1429b386e;
          bVar15 = ~(byte)uVar11 & 1;
        }
        cVar9 = (**(code **)(*(longlong *)*puVar5 + 0x30))();
        if (cVar9 != '\0') {
          if (bVar15 == 0) goto LAB_1429b386e;
          bVar3 = *(byte *)(puVar5 + 8);
          bVar10 = (**(code **)(*(longlong *)*puVar5 + 0x38))();
          bVar15 = 1;
          if (bVar10 != (bVar3 & 1)) goto LAB_1429b386e;
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar4);
    }
    if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
      plVar25 = *(longlong **)(param_1 + 0xb0);
      local_60 = plVar25 + *(int *)(param_1 + 0xb8);
      do {
        if (((bVar15 == 0) || (plVar4 = (longlong *)*plVar25, plVar4[0xe] != 0)) ||
           ((*(byte *)(plVar4 + 0x12) & 0x20) != 0)) break;
        lVar13 = (longlong)(int)plVar4[1];
        if (lVar13 != 0) {
          plVar12 = (longlong *)*plVar4;
          plVar17 = plVar12;
          do {
            lVar16 = 0;
            iVar22 = 0;
            do {
              iVar22 = iVar22 + (uint)(*plVar17 == *(longlong *)((longlong)plVar12 + lVar16));
              lVar16 = lVar16 + 8;
            } while (lVar13 * 8 != lVar16);
            if (iVar22 != 1) goto LAB_1429b386e;
            plVar17 = plVar17 + 1;
          } while (plVar17 != plVar12 + lVar13);
        }
        plVar12 = (longlong *)plVar4[0xc];
        if ((longlong *)plVar4[0xc] == (longlong *)0x0) {
          plVar12 = plVar4 + 2;
        }
        iVar22 = 0;
        if ((longlong)(int)plVar4[0xd] != 0) {
          plVar17 = plVar12 + (longlong)(int)plVar4[0xd] * 2;
          do {
            local_58 = (longlong *)0x0;
            local_50 = (int)plVar12[1];
            lVar13 = (longlong)local_50;
            pvVar6 = (void *)*plVar12;
            if (lVar13 != 0) {
              FUN_146db6d1c(&local_58,local_50);
              memcpy(local_58,pvVar6,lVar13 << 3);
              lVar13 = (longlong)local_50;
              if (lVar13 != 0) {
                plVar18 = local_58;
                do {
                  lVar16 = 0;
                  iVar23 = 0;
                  do {
                    iVar23 = iVar23 + (uint)(*plVar18 == *(longlong *)((longlong)local_58 + lVar16))
                    ;
                    lVar16 = lVar16 + 8;
                  } while (lVar13 * 8 != lVar16);
                  if (iVar23 != 1) {
                    if (local_58 != (longlong *)0x0) {
                      FUN_1400020a8();
                    }
                    goto LAB_1429b386e;
                  }
                  plVar18 = plVar18 + 1;
                } while (plVar18 != local_58 + lVar13);
              }
              if (local_58 != (longlong *)0x0) {
                FUN_1400020a8();
              }
            }
            plVar12 = plVar12 + 2;
          } while (plVar12 != plVar17);
          lVar13 = plVar4[0xd];
          plVar12 = plVar4 + 2;
          if ((longlong *)plVar4[0xc] != (longlong *)0x0) {
            plVar12 = (longlong *)plVar4[0xc];
          }
          if ((longlong)(int)lVar13 != 0) {
            lVar16 = 0;
            iVar22 = 0;
            do {
              local_58 = (longlong *)0x0;
              local_50 = *(int *)((longlong)plVar12 + lVar16 + 8);
              lVar26 = (longlong)local_50;
              pvVar6 = *(void **)((longlong)plVar12 + lVar16);
              if (lVar26 != 0) {
                FUN_146db6d1c(&local_58,local_50);
                memcpy(local_58,pvVar6,lVar26 << 3);
                iVar22 = iVar22 + local_50;
                if (local_58 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
              }
              lVar16 = lVar16 + 0x10;
            } while ((longlong)(int)lVar13 * 0x10 != lVar16);
          }
        }
        if (iVar22 != (int)plVar4[0x10]) break;
        plVar25 = plVar25 + 1;
        bVar15 = 1;
      } while (plVar25 != local_60);
    }
  }
LAB_1429b386e:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429b3d5a FUN_1429b3d5a body=69 status=ok
// SIG undefined FUN_1429b3d5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b3d5a(void)

{
  _DAT_14c993ae8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b3d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993af0,1);
  return;
}



// FUNCTION 1429b3d9f FUN_1429b3d9f body=69 status=ok
// SIG undefined FUN_1429b3d9f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b3d9f(void)

{
  _DAT_14c993af8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b3de1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993b00,1);
  return;
}


